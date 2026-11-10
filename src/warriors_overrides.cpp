// The Warriors (SLUS-21215): ajustes propios del juego sobre PS2Recomp + la pila de parches de god-of-war-recomp.
//
// [TWR-27 decisión 23] Mismo papel que src/gow_overrides.cpp en god-of-war-recomp. Reglas:
// - Nada de stubs ni retornos forzados de funciones del juego: aquí solo va la configuración que depende del juego
//   (mapa de memoria) y diagnósticos opcionales. Lo que es un fallo del runtime va en un parche de patches/.
// - Toda dirección de guest debe ser un inicio de función de SLUS_212.15 (tools/check_override_addresses.py).

#include "game_overrides.h"
#include "ps2_runtime.h"
#include "runtime/ee_scheduler.h"
#include "ps2_stubs.h"
#include "ps2_runtime_macros.h"

#include <atomic>

#include <algorithm>
#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <thread>

namespace
{
    // El ELF ocupa 0x00100000-0x00715B5C y el juego toma el resto de la RAM con SetupHeap(fin del .bss, -1) hasta la
    // pila del hilo principal. Lo que el runtime necesita en la RAM del EE va bajo el ELF, en la zona que en la consola
    // ocupa el kernel (0x00000000-0x0007FFFF) y en la memoria libre hasta 0x000FFFFF, que el juego no usa:
    //   0x00080000-0x000A0000  pilas de interrupciones / callbacks del runtime
    //   0x000A0000-0x000FF000  heap interno del runtime (como God of War)
    constexpr uint32_t kAsyncStackFloor = 0x00080000u;
    constexpr uint32_t kAsyncStackTop = 0x000A0000u;
    constexpr uint32_t kPrivateHeapBase = 0x000A0000u;
    constexpr uint32_t kPrivateHeapLimit = 0x000FF000u;

    // TWR_THREAD_WATCH=<s> (diagnóstico): cada <s> segundos, el estado de los hilos EE según el planificador.
    void startThreadWatch(PS2Runtime &runtime)
    {
        const char *watch = std::getenv("TWR_THREAD_WATCH");
        if (!watch)
            return;
        const double period = std::max(1.0, std::atof(watch));
        std::thread([&runtime, period] {
            for (;;)
            {
                std::this_thread::sleep_for(std::chrono::duration<double>(period));
                const EeKernelSnapshot snapshot = runtime.eeScheduler().snapshot();
                std::fprintf(stderr, "[twr-threads] running=%d cycle=%llu\n", snapshot.runningThreadId,
                             static_cast<unsigned long long>(snapshot.eeCycle));
                for (const EeThreadSnapshot &t : snapshot.threads)
                    std::fprintf(stderr, "[twr-threads]   id=%d prio=%d status=%d wait=%d/%d pc=%08x ra=%08x entry=%08x\n",
                                 t.id, t.currentPriority, int(t.status), int(t.waitReason), t.waitId, t.pc, t.ra, t.entry);
            }
        }).detach();
    }

    // TWR_PAD_DIAG=1 (diagnóstico): cuenta las llamadas del juego a scePad* y muestra los botones que recibe.
    std::atomic<uint32_t> g_padReads{0};
    std::atomic<uint32_t> g_padStates{0};
    void diagPadRead(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t data = getRegU32(ctx, 6);
        ps2_stubs::scePadRead(rdram, ctx, runtime);
        const uint32_t n = ++g_padReads;
        const uint8_t *p = rdram + (data & 0x01FFFFFFu);
        if (n % 120u == 1u || p[2] != 0xFFu || p[3] != 0xFFu)
            std::fprintf(stderr, "[twr-pad] read#%u port=%u ret=%d b=%02x%02x %02x%02x\n", n, getRegU32(ctx, 4),
                         static_cast<int>(getRegU32(ctx, 2)), p[0], p[1], p[2], p[3]);
    }
    void diagPadGetState(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        ps2_stubs::scePadGetState(rdram, ctx, runtime);
        if (++g_padStates % 120u == 1u)
            std::fprintf(stderr, "[twr-pad] state#%u -> %d\n", g_padStates.load(), static_cast<int>(getRegU32(ctx, 2)));
    }

    // VU1: el backend "nativo lean" de GoW queda apagado por defecto (TWR_VU1N=1 lo activa). Con él habilitado y sin
    // bloques generados, el despachador salta el microcódigo compilado por pares y cae al intérprete (49 ns/ciclo frente
    // a 7,8); con los bloques generados, la pelea muestra polígonos gigantes (ver docs/vu1-nativa.md).
    void selectVu1Backend()
    {
        if (std::getenv("TWR_VU1N") != nullptr || std::getenv("GOW_VU1_NATIVE_OFF") != nullptr)
            return;
#if defined(_WIN32)
        _putenv_s("GOW_VU1_NATIVE_OFF", "1");
#else
        setenv("GOW_VU1_NATIVE_OFF", "1", 0);
#endif
    }

    void applyWarriorsOverrides(PS2Runtime &runtime)
    {
        selectVu1Backend();
        startThreadWatch(runtime);
        if (std::getenv("TWR_PAD_DIAG"))
        {
            runtime.replaceFunction(0x0044D230u, diagPadRead);     // scePadRead
            runtime.replaceFunction(0x0044D2E8u, diagPadGetState); // scePadGetState
        }
        runtime.setAsyncCallbackStackRange(kAsyncStackFloor, kAsyncStackTop);
        runtime.setPrivateGuestHeap(kPrivateHeapBase, kPrivateHeapLimit);
    }
}

PS2_REGISTER_GAME_OVERRIDE("The Warriors (SLUS-21215)", "SLUS_212.15", 0x00100008u, 0u, applyWarriorsOverrides)
