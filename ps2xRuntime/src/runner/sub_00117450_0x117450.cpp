#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00117450
// Address: 0x117450 - 0x119f78
void sub_00117450_0x117450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117450_0x117450");
#endif

    ctx->pc = 0x117450u;

    // 0x117450: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x117450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x117454: 0x3c013f35  lui         $at, 0x3F35
    ctx->pc = 0x117454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16181 << 16));
    // 0x117458: 0x342104f3  ori         $at, $at, 0x4F3
    ctx->pc = 0x117458u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1267);
    // 0x11745c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11745cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117460: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x117460u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x117464: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x117464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x117468: 0x34216eca  ori         $at, $at, 0x6ECA
    ctx->pc = 0x117468u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28362);
    // 0x11746c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x11746cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x117470: 0x3c013f36  lui         $at, 0x3F36
    ctx->pc = 0x117470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16182 << 16));
    // 0x117474: 0x34219795  ori         $at, $at, 0x9795
    ctx->pc = 0x117474u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38805);
    // 0x117478: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x117478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x11747c: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x11747cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x117480: 0x3421d522  ori         $at, $at, 0xD522
    ctx->pc = 0x117480u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54562);
    // 0x117484: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x117484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x117488: 0xe7bf0058  swc1        $f31, 0x58($sp)
    ctx->pc = 0x117488u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x11748c: 0xe7be0050  swc1        $f30, 0x50($sp)
    ctx->pc = 0x11748cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x117490: 0xe7bd0048  swc1        $f29, 0x48($sp)
    ctx->pc = 0x117490u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x117494: 0xe7bc0040  swc1        $f28, 0x40($sp)
    ctx->pc = 0x117494u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x117498: 0xe7bb0038  swc1        $f27, 0x38($sp)
    ctx->pc = 0x117498u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x11749c: 0xe7ba0030  swc1        $f26, 0x30($sp)
    ctx->pc = 0x11749cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1174a0: 0xe7b90028  swc1        $f25, 0x28($sp)
    ctx->pc = 0x1174a0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1174a4: 0xe7b80020  swc1        $f24, 0x20($sp)
    ctx->pc = 0x1174a4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1174a8: 0xe7b70018  swc1        $f23, 0x18($sp)
    ctx->pc = 0x1174a8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1174ac: 0xe7b60010  swc1        $f22, 0x10($sp)
    ctx->pc = 0x1174acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1174b0: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x1174b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1174b4: 0x3c013f38  lui         $at, 0x3F38
    ctx->pc = 0x1174b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16184 << 16));
    // 0x1174b8: 0x342126a7  ori         $at, $at, 0x26A7
    ctx->pc = 0x1174b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9895);
    // 0x1174bc: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x1174bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x1174c0: 0x3c013f30  lui         $at, 0x3F30
    ctx->pc = 0x1174c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16176 << 16));
    // 0x1174c4: 0x34213801  ori         $at, $at, 0x3801
    ctx->pc = 0x1174c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14337);
    // 0x1174c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1174c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1174cc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1174ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1174d0: 0xe48005a4  swc1        $f0, 0x5A4($a0)
    ctx->pc = 0x1174d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1444), bits); }
    // 0x1174d4: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x1174d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1174d8: 0xe48705a8  swc1        $f7, 0x5A8($a0)
    ctx->pc = 0x1174d8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1448), bits); }
    // 0x1174dc: 0xe4910008  swc1        $f17, 0x8($a0)
    ctx->pc = 0x1174dcu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1174e0: 0x3c013f39  lui         $at, 0x3F39
    ctx->pc = 0x1174e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16185 << 16));
    // 0x1174e4: 0x3421b223  ori         $at, $at, 0xB223
    ctx->pc = 0x1174e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45603);
    // 0x1174e8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1174e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1174ec: 0xe49305ac  swc1        $f19, 0x5AC($a0)
    ctx->pc = 0x1174ecu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1452), bits); }
    // 0x1174f0: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x1174f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1174f4: 0x3c013f2e  lui         $at, 0x3F2E
    ctx->pc = 0x1174f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16174 << 16));
    // 0x1174f8: 0x34219772  ori         $at, $at, 0x9772
    ctx->pc = 0x1174f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38770);
    // 0x1174fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1174fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117500: 0x3c013f3b  lui         $at, 0x3F3B
    ctx->pc = 0x117500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16187 << 16));
    // 0x117504: 0x342139ff  ori         $at, $at, 0x39FF
    ctx->pc = 0x117504u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14847);
    // 0x117508: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x117508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x11750c: 0x3c013f2c  lui         $at, 0x3F2C
    ctx->pc = 0x11750cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16172 << 16));
    // 0x117510: 0x3421f37b  ori         $at, $at, 0xF37B
    ctx->pc = 0x117510u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62331);
    // 0x117514: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x117514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x117518: 0x3c013f3c  lui         $at, 0x3F3C
    ctx->pc = 0x117518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16188 << 16));
    // 0x11751c: 0x3421be35  ori         $at, $at, 0xBE35
    ctx->pc = 0x11751cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48693);
    // 0x117520: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x117520u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x117524: 0xe49505b0  swc1        $f21, 0x5B0($a0)
    ctx->pc = 0x117524u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1456), bits); }
    // 0x117528: 0x3c013f2b  lui         $at, 0x3F2B
    ctx->pc = 0x117528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16171 << 16));
    // 0x11752c: 0x34214c25  ori         $at, $at, 0x4C25
    ctx->pc = 0x11752cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19493);
    // 0x117530: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x117530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x117534: 0x3c013f3e  lui         $at, 0x3F3E
    ctx->pc = 0x117534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16190 << 16));
    // 0x117538: 0x34213ebd  ori         $at, $at, 0x3EBD
    ctx->pc = 0x117538u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16061);
    // 0x11753c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11753cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x117540: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x117540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x117544: 0xe48405b4  swc1        $f4, 0x5B4($a0)
    ctx->pc = 0x117544u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1460), bits); }
    // 0x117548: 0xe4870014  swc1        $f7, 0x14($a0)
    ctx->pc = 0x117548u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x11754c: 0xe49105b8  swc1        $f17, 0x5B8($a0)
    ctx->pc = 0x11754cu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1464), bits); }
    // 0x117550: 0x3c013f29  lui         $at, 0x3F29
    ctx->pc = 0x117550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16169 << 16));
    // 0x117554: 0x3421a178  ori         $at, $at, 0xA178
    ctx->pc = 0x117554u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41336);
    // 0x117558: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x117558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x11755c: 0xe4930018  swc1        $f19, 0x18($a0)
    ctx->pc = 0x11755cu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x117560: 0xe49405bc  swc1        $f20, 0x5BC($a0)
    ctx->pc = 0x117560u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1468), bits); }
    // 0x117564: 0x3c013f3f  lui         $at, 0x3F3F
    ctx->pc = 0x117564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16191 << 16));
    // 0x117568: 0x3421bb90  ori         $at, $at, 0xBB90
    ctx->pc = 0x117568u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48016);
    // 0x11756c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11756cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117570: 0x3c013f27  lui         $at, 0x3F27
    ctx->pc = 0x117570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16167 << 16));
    // 0x117574: 0x3421f37c  ori         $at, $at, 0xF37C
    ctx->pc = 0x117574u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62332);
    // 0x117578: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x117578u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x11757c: 0x3c013f41  lui         $at, 0x3F41
    ctx->pc = 0x11757cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16193 << 16));
    // 0x117580: 0x342134a6  ori         $at, $at, 0x34A6
    ctx->pc = 0x117580u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13478);
    // 0x117584: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x117584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x117588: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x117588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x11758c: 0x3421423a  ori         $at, $at, 0x423A
    ctx->pc = 0x11758cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16954);
    // 0x117590: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x117590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x117594: 0xe495001c  swc1        $f21, 0x1C($a0)
    ctx->pc = 0x117594u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x117598: 0x3c013f42  lui         $at, 0x3F42
    ctx->pc = 0x117598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16194 << 16));
    // 0x11759c: 0x3421a9f7  ori         $at, $at, 0xA9F7
    ctx->pc = 0x11759cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43511);
    // 0x1175a0: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x1175a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x1175a4: 0x3c013f24  lui         $at, 0x3F24
    ctx->pc = 0x1175a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16164 << 16));
    // 0x1175a8: 0x34218dbb  ori         $at, $at, 0x8DBB
    ctx->pc = 0x1175a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36283);
    // 0x1175ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1175acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1175b0: 0xe48005c0  swc1        $f0, 0x5C0($a0)
    ctx->pc = 0x1175b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1472), bits); }
    // 0x1175b4: 0xe4840020  swc1        $f4, 0x20($a0)
    ctx->pc = 0x1175b4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1175b8: 0xe48705c4  swc1        $f7, 0x5C4($a0)
    ctx->pc = 0x1175b8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1476), bits); }
    // 0x1175bc: 0xe4910024  swc1        $f17, 0x24($a0)
    ctx->pc = 0x1175bcu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1175c0: 0x3c013f44  lui         $at, 0x3F44
    ctx->pc = 0x1175c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16196 << 16));
    // 0x1175c4: 0x34211b7d  ori         $at, $at, 0x1B7D
    ctx->pc = 0x1175c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7037);
    // 0x1175c8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1175c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1175cc: 0xe49305c8  swc1        $f19, 0x5C8($a0)
    ctx->pc = 0x1175ccu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1480), bits); }
    // 0x1175d0: 0xe4940028  swc1        $f20, 0x28($a0)
    ctx->pc = 0x1175d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1175d4: 0x3c013f22  lui         $at, 0x3F22
    ctx->pc = 0x1175d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16162 << 16));
    // 0x1175d8: 0x3421d606  ori         $at, $at, 0xD606
    ctx->pc = 0x1175d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54790);
    // 0x1175dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1175dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1175e0: 0x3c013f45  lui         $at, 0x3F45
    ctx->pc = 0x1175e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16197 << 16));
    // 0x1175e4: 0x34218930  ori         $at, $at, 0x8930
    ctx->pc = 0x1175e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35120);
    // 0x1175e8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1175e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1175ec: 0x3c013f21  lui         $at, 0x3F21
    ctx->pc = 0x1175ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16161 << 16));
    // 0x1175f0: 0x34211b24  ori         $at, $at, 0x1B24
    ctx->pc = 0x1175f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6948);
    // 0x1175f4: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1175f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1175f8: 0x3c013f46  lui         $at, 0x3F46
    ctx->pc = 0x1175f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16198 << 16));
    // 0x1175fc: 0x3421f30a  ori         $at, $at, 0xF30A
    ctx->pc = 0x1175fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62218);
    // 0x117600: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x117600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x117604: 0xe49505cc  swc1        $f21, 0x5CC($a0)
    ctx->pc = 0x117604u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1484), bits); }
    // 0x117608: 0x3c013f1f  lui         $at, 0x3F1F
    ctx->pc = 0x117608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16159 << 16));
    // 0x11760c: 0x34215d1f  ori         $at, $at, 0x5D1F
    ctx->pc = 0x11760cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23839);
    // 0x117610: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x117610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x117614: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x117614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x117618: 0xe48405d0  swc1        $f4, 0x5D0($a0)
    ctx->pc = 0x117618u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1488), bits); }
    // 0x11761c: 0xe4870030  swc1        $f7, 0x30($a0)
    ctx->pc = 0x11761cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x117620: 0xe49105d4  swc1        $f17, 0x5D4($a0)
    ctx->pc = 0x117620u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1492), bits); }
    // 0x117624: 0x3c013f48  lui         $at, 0x3F48
    ctx->pc = 0x117624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16200 << 16));
    // 0x117628: 0x34215902  ori         $at, $at, 0x5902
    ctx->pc = 0x117628u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22786);
    // 0x11762c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11762cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x117630: 0xe4930034  swc1        $f19, 0x34($a0)
    ctx->pc = 0x117630u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x117634: 0x3c013f1d  lui         $at, 0x3F1D
    ctx->pc = 0x117634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16157 << 16));
    // 0x117638: 0x34219bfe  ori         $at, $at, 0x9BFE
    ctx->pc = 0x117638u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39934);
    // 0x11763c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x11763cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x117640: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x117640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x117644: 0x3421bb13  ori         $at, $at, 0xBB13
    ctx->pc = 0x117644u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47891);
    // 0x117648: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11764c: 0x3c013f1b  lui         $at, 0x3F1B
    ctx->pc = 0x11764cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16155 << 16));
    // 0x117650: 0x3421d7ca  ori         $at, $at, 0xD7CA
    ctx->pc = 0x117650u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55242);
    // 0x117654: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x117654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x117658: 0x3c013f4b  lui         $at, 0x3F4B
    ctx->pc = 0x117658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16203 << 16));
    // 0x11765c: 0x34211934  ori         $at, $at, 0x1934
    ctx->pc = 0x11765cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6452);
    // 0x117660: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x117660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x117664: 0x3c013f1a  lui         $at, 0x3F1A
    ctx->pc = 0x117664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16154 << 16));
    // 0x117668: 0x3421108d  ori         $at, $at, 0x108D
    ctx->pc = 0x117668u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4237);
    // 0x11766c: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x11766cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x117670: 0xe49405d8  swc1        $f20, 0x5D8($a0)
    ctx->pc = 0x117670u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1496), bits); }
    // 0x117674: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x117674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x117678: 0x34217360  ori         $at, $at, 0x7360
    ctx->pc = 0x117678u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29536);
    // 0x11767c: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x11767cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x117680: 0xe4950038  swc1        $f21, 0x38($a0)
    ctx->pc = 0x117680u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x117684: 0xe48005dc  swc1        $f0, 0x5DC($a0)
    ctx->pc = 0x117684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1500), bits); }
    // 0x117688: 0xe484003c  swc1        $f4, 0x3C($a0)
    ctx->pc = 0x117688u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x11768c: 0xe48705e0  swc1        $f7, 0x5E0($a0)
    ctx->pc = 0x11768cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1504), bits); }
    // 0x117690: 0xe4910040  swc1        $f17, 0x40($a0)
    ctx->pc = 0x117690u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x117694: 0x3c013f18  lui         $at, 0x3F18
    ctx->pc = 0x117694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16152 << 16));
    // 0x117698: 0x3421464e  ori         $at, $at, 0x464E
    ctx->pc = 0x117698u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17998);
    // 0x11769c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11769cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1176a0: 0xe49305e4  swc1        $f19, 0x5E4($a0)
    ctx->pc = 0x1176a0u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1508), bits); }
    // 0x1176a4: 0x3c013f4d  lui         $at, 0x3F4D
    ctx->pc = 0x1176a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16205 << 16));
    // 0x1176a8: 0x3421c990  ori         $at, $at, 0xC990
    ctx->pc = 0x1176a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51600);
    // 0x1176ac: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1176acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1176b0: 0x3c013f16  lui         $at, 0x3F16
    ctx->pc = 0x1176b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16150 << 16));
    // 0x1176b4: 0x34217918  ori         $at, $at, 0x7918
    ctx->pc = 0x1176b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31000);
    // 0x1176b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1176b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1176bc: 0x3c013f4f  lui         $at, 0x3F4F
    ctx->pc = 0x1176bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16207 << 16));
    // 0x1176c0: 0x34211bbd  ori         $at, $at, 0x1BBD
    ctx->pc = 0x1176c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7101);
    // 0x1176c4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1176c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1176c8: 0x3c013f14  lui         $at, 0x3F14
    ctx->pc = 0x1176c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16148 << 16));
    // 0x1176cc: 0x3421a8f3  ori         $at, $at, 0xA8F3
    ctx->pc = 0x1176ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43251);
    // 0x1176d0: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1176d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1176d4: 0xe4940044  swc1        $f20, 0x44($a0)
    ctx->pc = 0x1176d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x1176d8: 0x3c013f50  lui         $at, 0x3F50
    ctx->pc = 0x1176d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16208 << 16));
    // 0x1176dc: 0x342169e0  ori         $at, $at, 0x69E0
    ctx->pc = 0x1176dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27104);
    // 0x1176e0: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x1176e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x1176e4: 0x3c013f12  lui         $at, 0x3F12
    ctx->pc = 0x1176e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16146 << 16));
    // 0x1176e8: 0x3421d5e8  ori         $at, $at, 0xD5E8
    ctx->pc = 0x1176e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54760);
    // 0x1176ec: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x1176ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x1176f0: 0xe49505e8  swc1        $f21, 0x5E8($a0)
    ctx->pc = 0x1176f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1512), bits); }
    // 0x1176f4: 0xe4800048  swc1        $f0, 0x48($a0)
    ctx->pc = 0x1176f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x1176f8: 0xe48405ec  swc1        $f4, 0x5EC($a0)
    ctx->pc = 0x1176f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1516), bits); }
    // 0x1176fc: 0xe487004c  swc1        $f7, 0x4C($a0)
    ctx->pc = 0x1176fcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x117700: 0x3c013f51  lui         $at, 0x3F51
    ctx->pc = 0x117700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16209 << 16));
    // 0x117704: 0x3421b3f3  ori         $at, $at, 0xB3F3
    ctx->pc = 0x117704u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46067);
    // 0x117708: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x117708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11770c: 0xe49105f0  swc1        $f17, 0x5F0($a0)
    ctx->pc = 0x11770cu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1520), bits); }
    // 0x117710: 0xe4930050  swc1        $f19, 0x50($a0)
    ctx->pc = 0x117710u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x117714: 0x3c013f11  lui         $at, 0x3F11
    ctx->pc = 0x117714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16145 << 16));
    // 0x117718: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x117718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x11771c: 0x3c013f52  lui         $at, 0x3F52
    ctx->pc = 0x11771cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16210 << 16));
    // 0x117720: 0x3421f9ef  ori         $at, $at, 0xF9EF
    ctx->pc = 0x117720u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63983);
    // 0x117724: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117728: 0x3c013f0f  lui         $at, 0x3F0F
    ctx->pc = 0x117728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16143 << 16));
    // 0x11772c: 0x34212744  ori         $at, $at, 0x2744
    ctx->pc = 0x11772cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10052);
    // 0x117730: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x117730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x117734: 0x3c013f54  lui         $at, 0x3F54
    ctx->pc = 0x117734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16212 << 16));
    // 0x117738: 0x34213bce  ori         $at, $at, 0x3BCE
    ctx->pc = 0x117738u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15310);
    // 0x11773c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x11773cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x117740: 0xe49405f4  swc1        $f20, 0x5F4($a0)
    ctx->pc = 0x117740u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1524), bits); }
    // 0x117744: 0x3c013f0d  lui         $at, 0x3F0D
    ctx->pc = 0x117744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16141 << 16));
    // 0x117748: 0x34214bbe  ori         $at, $at, 0x4BBE
    ctx->pc = 0x117748u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19390);
    // 0x11774c: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x11774cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x117750: 0x3c013f55  lui         $at, 0x3F55
    ctx->pc = 0x117750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16213 << 16));
    // 0x117754: 0x3421798b  ori         $at, $at, 0x798B
    ctx->pc = 0x117754u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31115);
    // 0x117758: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x117758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x11775c: 0xe4950054  swc1        $f21, 0x54($a0)
    ctx->pc = 0x11775cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x117760: 0xe48005f8  swc1        $f0, 0x5F8($a0)
    ctx->pc = 0x117760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1528), bits); }
    // 0x117764: 0xe4840058  swc1        $f4, 0x58($a0)
    ctx->pc = 0x117764u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x117768: 0xe48705fc  swc1        $f7, 0x5FC($a0)
    ctx->pc = 0x117768u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1532), bits); }
    // 0x11776c: 0x3c013f0b  lui         $at, 0x3F0B
    ctx->pc = 0x11776cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16139 << 16));
    // 0x117770: 0x34216d77  ori         $at, $at, 0x6D77
    ctx->pc = 0x117770u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28023);
    // 0x117774: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x117774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x117778: 0xe491005c  swc1        $f17, 0x5C($a0)
    ctx->pc = 0x117778u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x11777c: 0xe4930600  swc1        $f19, 0x600($a0)
    ctx->pc = 0x11777cu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1536), bits); }
    // 0x117780: 0x3c013f56  lui         $at, 0x3F56
    ctx->pc = 0x117780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16214 << 16));
    // 0x117784: 0x3421b31d  ori         $at, $at, 0xB31D
    ctx->pc = 0x117784u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45853);
    // 0x117788: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x117788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x11778c: 0x3c013f09  lui         $at, 0x3F09
    ctx->pc = 0x11778cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16137 << 16));
    // 0x117790: 0x34218c78  ori         $at, $at, 0x8C78
    ctx->pc = 0x117790u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35960);
    // 0x117794: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117798: 0x3c013f57  lui         $at, 0x3F57
    ctx->pc = 0x117798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16215 << 16));
    // 0x11779c: 0x3421e880  ori         $at, $at, 0xE880
    ctx->pc = 0x11779cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59520);
    // 0x1177a0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1177a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1177a4: 0x3c013f07  lui         $at, 0x3F07
    ctx->pc = 0x1177a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16135 << 16));
    // 0x1177a8: 0x3421a8ca  ori         $at, $at, 0xA8CA
    ctx->pc = 0x1177a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43210);
    // 0x1177ac: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1177acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1177b0: 0xe4940060  swc1        $f20, 0x60($a0)
    ctx->pc = 0x1177b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x1177b4: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x1177b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
    // 0x1177b8: 0x342119ae  ori         $at, $at, 0x19AE
    ctx->pc = 0x1177b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6574);
    // 0x1177bc: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x1177bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x1177c0: 0x3c013f05  lui         $at, 0x3F05
    ctx->pc = 0x1177c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16133 << 16));
    // 0x1177c4: 0x3421c277  ori         $at, $at, 0xC277
    ctx->pc = 0x1177c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49783);
    // 0x1177c8: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x1177c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x1177cc: 0xe4950604  swc1        $f21, 0x604($a0)
    ctx->pc = 0x1177ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1540), bits); }
    // 0x1177d0: 0xe4800064  swc1        $f0, 0x64($a0)
    ctx->pc = 0x1177d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x1177d4: 0xe4840608  swc1        $f4, 0x608($a0)
    ctx->pc = 0x1177d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1544), bits); }
    // 0x1177d8: 0xe4870068  swc1        $f7, 0x68($a0)
    ctx->pc = 0x1177d8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x1177dc: 0x3c013f5a  lui         $at, 0x3F5A
    ctx->pc = 0x1177dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16218 << 16));
    // 0x1177e0: 0x342146a0  ori         $at, $at, 0x46A0
    ctx->pc = 0x1177e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18080);
    // 0x1177e4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1177e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1177e8: 0xe491060c  swc1        $f17, 0x60C($a0)
    ctx->pc = 0x1177e8u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1548), bits); }
    // 0x1177ec: 0xe493006c  swc1        $f19, 0x6C($a0)
    ctx->pc = 0x1177ecu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
    // 0x1177f0: 0x3c013f03  lui         $at, 0x3F03
    ctx->pc = 0x1177f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16131 << 16));
    // 0x1177f4: 0x3421d989  ori         $at, $at, 0xD989
    ctx->pc = 0x1177f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55689);
    // 0x1177f8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1177f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1177fc: 0x3c013f5b  lui         $at, 0x3F5B
    ctx->pc = 0x1177fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16219 << 16));
    // 0x117800: 0x34216f51  ori         $at, $at, 0x6F51
    ctx->pc = 0x117800u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28497);
    // 0x117804: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117808: 0x3c013f01  lui         $at, 0x3F01
    ctx->pc = 0x117808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16129 << 16));
    // 0x11780c: 0x3421ee09  ori         $at, $at, 0xEE09
    ctx->pc = 0x11780cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60937);
    // 0x117810: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x117810u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x117814: 0x3c013f5c  lui         $at, 0x3F5C
    ctx->pc = 0x117814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16220 << 16));
    // 0x117818: 0x342193bb  ori         $at, $at, 0x93BB
    ctx->pc = 0x117818u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37819);
    // 0x11781c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x11781cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x117820: 0xe4940610  swc1        $f20, 0x610($a0)
    ctx->pc = 0x117820u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1552), bits); }
    // 0x117824: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x117824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x117828: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x117828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x11782c: 0xe4950070  swc1        $f21, 0x70($a0)
    ctx->pc = 0x11782cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x117830: 0xe4800614  swc1        $f0, 0x614($a0)
    ctx->pc = 0x117830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1556), bits); }
    // 0x117834: 0xe4840074  swc1        $f4, 0x74($a0)
    ctx->pc = 0x117834u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x117838: 0xe4870618  swc1        $f7, 0x618($a0)
    ctx->pc = 0x117838u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1560), bits); }
    // 0x11783c: 0x3c013f5d  lui         $at, 0x3F5D
    ctx->pc = 0x11783cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16221 << 16));
    // 0x117840: 0x3421b3d7  ori         $at, $at, 0xB3D7
    ctx->pc = 0x117840u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46039);
    // 0x117844: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x117844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x117848: 0xe4910078  swc1        $f17, 0x78($a0)
    ctx->pc = 0x117848u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x11784c: 0x3c013efc  lui         $at, 0x3EFC
    ctx->pc = 0x11784cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16124 << 16));
    // 0x117850: 0x34211ef1  ori         $at, $at, 0x1EF1
    ctx->pc = 0x117850u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7921);
    // 0x117854: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x117854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x117858: 0x3c013f5e  lui         $at, 0x3F5E
    ctx->pc = 0x117858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16222 << 16));
    // 0x11785c: 0x3421cfa2  ori         $at, $at, 0xCFA2
    ctx->pc = 0x11785cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53154);
    // 0x117860: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x117860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x117864: 0x3c013ef8  lui         $at, 0x3EF8
    ctx->pc = 0x117864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16120 << 16));
    // 0x117868: 0x342138f7  ori         $at, $at, 0x38F7
    ctx->pc = 0x117868u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14583);
    // 0x11786c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11786cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117870: 0x3c013f5f  lui         $at, 0x3F5F
    ctx->pc = 0x117870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16223 << 16));
    // 0x117874: 0x3421e714  ori         $at, $at, 0xE714
    ctx->pc = 0x117874u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59156);
    // 0x117878: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x117878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x11787c: 0x3c013ef4  lui         $at, 0x3EF4
    ctx->pc = 0x11787cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16116 << 16));
    // 0x117880: 0x34214e27  ori         $at, $at, 0x4E27
    ctx->pc = 0x117880u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20007);
    // 0x117884: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x117884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x117888: 0xe493061c  swc1        $f19, 0x61C($a0)
    ctx->pc = 0x117888u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1564), bits); }
    // 0x11788c: 0x3c013f60  lui         $at, 0x3F60
    ctx->pc = 0x11788cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16224 << 16));
    // 0x117890: 0x3421fa29  ori         $at, $at, 0xFA29
    ctx->pc = 0x117890u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64041);
    // 0x117894: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x117894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x117898: 0xe494007c  swc1        $f20, 0x7C($a0)
    ctx->pc = 0x117898u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
    // 0x11789c: 0xe4950620  swc1        $f21, 0x620($a0)
    ctx->pc = 0x11789cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1568), bits); }
    // 0x1178a0: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x1178a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x1178a4: 0xe4840624  swc1        $f4, 0x624($a0)
    ctx->pc = 0x1178a4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1572), bits); }
    // 0x1178a8: 0xe4870084  swc1        $f7, 0x84($a0)
    ctx->pc = 0x1178a8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x1178ac: 0x3c013ef0  lui         $at, 0x3EF0
    ctx->pc = 0x1178acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16112 << 16));
    // 0x1178b0: 0x34215e94  ori         $at, $at, 0x5E94
    ctx->pc = 0x1178b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24212);
    // 0x1178b4: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x1178b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x1178b8: 0xe4910628  swc1        $f17, 0x628($a0)
    ctx->pc = 0x1178b8u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1576), bits); }
    // 0x1178bc: 0x3c013eec  lui         $at, 0x3EEC
    ctx->pc = 0x1178bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16108 << 16));
    // 0x1178c0: 0x34216a50  ori         $at, $at, 0x6A50
    ctx->pc = 0x1178c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27216);
    // 0x1178c4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1178c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1178c8: 0xe4930088  swc1        $f19, 0x88($a0)
    ctx->pc = 0x1178c8u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x1178cc: 0x3c013f62  lui         $at, 0x3F62
    ctx->pc = 0x1178ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16226 << 16));
    // 0x1178d0: 0x342108da  ori         $at, $at, 0x8DA
    ctx->pc = 0x1178d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2266);
    // 0x1178d4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1178d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1178d8: 0x3c013f63  lui         $at, 0x3F63
    ctx->pc = 0x1178d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16227 << 16));
    // 0x1178dc: 0x34211324  ori         $at, $at, 0x1324
    ctx->pc = 0x1178dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4900);
    // 0x1178e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1178e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1178e4: 0x3c013ee8  lui         $at, 0x3EE8
    ctx->pc = 0x1178e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16104 << 16));
    // 0x1178e8: 0x34217171  ori         $at, $at, 0x7171
    ctx->pc = 0x1178e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29041);
    // 0x1178ec: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1178ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1178f0: 0x3c013f64  lui         $at, 0x3F64
    ctx->pc = 0x1178f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16228 << 16));
    // 0x1178f4: 0x34211901  ori         $at, $at, 0x1901
    ctx->pc = 0x1178f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6401);
    // 0x1178f8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1178f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1178fc: 0x3c013ee4  lui         $at, 0x3EE4
    ctx->pc = 0x1178fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16100 << 16));
    // 0x117900: 0x3421740a  ori         $at, $at, 0x740A
    ctx->pc = 0x117900u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29706);
    // 0x117904: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x117904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x117908: 0xe495008c  swc1        $f21, 0x8C($a0)
    ctx->pc = 0x117908u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
    // 0x11790c: 0x3c013f65  lui         $at, 0x3F65
    ctx->pc = 0x11790cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16229 << 16));
    // 0x117910: 0x34211a6b  ori         $at, $at, 0x1A6B
    ctx->pc = 0x117910u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6763);
    // 0x117914: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x117914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x117918: 0xe494062c  swc1        $f20, 0x62C($a0)
    ctx->pc = 0x117918u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1580), bits); }
    // 0x11791c: 0xe4800630  swc1        $f0, 0x630($a0)
    ctx->pc = 0x11791cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1584), bits); }
    // 0x117920: 0xe4840090  swc1        $f4, 0x90($a0)
    ctx->pc = 0x117920u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x117924: 0xe4870634  swc1        $f7, 0x634($a0)
    ctx->pc = 0x117924u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1588), bits); }
    // 0x117928: 0xe4910094  swc1        $f17, 0x94($a0)
    ctx->pc = 0x117928u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x11792c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x11792cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x117930: 0x3421175e  ori         $at, $at, 0x175E
    ctx->pc = 0x117930u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5982);
    // 0x117934: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x117934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x117938: 0xe4930638  swc1        $f19, 0x638($a0)
    ctx->pc = 0x117938u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1592), bits); }
    // 0x11793c: 0x3c013ee0  lui         $at, 0x3EE0
    ctx->pc = 0x11793cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16096 << 16));
    // 0x117940: 0x3421722f  ori         $at, $at, 0x722F
    ctx->pc = 0x117940u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29231);
    // 0x117944: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x117944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x117948: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x117948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
    // 0x11794c: 0x34216bf3  ori         $at, $at, 0x6BF3
    ctx->pc = 0x11794cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27635);
    // 0x117950: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117954: 0x3c013f67  lui         $at, 0x3F67
    ctx->pc = 0x117954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16231 << 16));
    // 0x117958: 0x34210fd4  ori         $at, $at, 0xFD4
    ctx->pc = 0x117958u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4052);
    // 0x11795c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x11795cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x117960: 0x3c013ed8  lui         $at, 0x3ED8
    ctx->pc = 0x117960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16088 << 16));
    // 0x117964: 0x3421616c  ori         $at, $at, 0x616C
    ctx->pc = 0x117964u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24940);
    // 0x117968: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x117968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x11796c: 0x3c013f68  lui         $at, 0x3F68
    ctx->pc = 0x11796cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16232 << 16));
    // 0x117970: 0x342103ca  ori         $at, $at, 0x3CA
    ctx->pc = 0x117970u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)970);
    // 0x117974: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x117974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x117978: 0xe495063c  swc1        $f21, 0x63C($a0)
    ctx->pc = 0x117978u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1596), bits); }
    // 0x11797c: 0x3c013ed4  lui         $at, 0x3ED4
    ctx->pc = 0x11797cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16084 << 16));
    // 0x117980: 0x342152ac  ori         $at, $at, 0x52AC
    ctx->pc = 0x117980u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21164);
    // 0x117984: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x117984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x117988: 0xe4940098  swc1        $f20, 0x98($a0)
    ctx->pc = 0x117988u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x11798c: 0xe480009c  swc1        $f0, 0x9C($a0)
    ctx->pc = 0x11798cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x117990: 0xe4840640  swc1        $f4, 0x640($a0)
    ctx->pc = 0x117990u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1600), bits); }
    // 0x117994: 0xe48700a0  swc1        $f7, 0xA0($a0)
    ctx->pc = 0x117994u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x117998: 0xe4910644  swc1        $f17, 0x644($a0)
    ctx->pc = 0x117998u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1604), bits); }
    // 0x11799c: 0x3c013ed0  lui         $at, 0x3ED0
    ctx->pc = 0x11799cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16080 << 16));
    // 0x1179a0: 0x34213fc9  ori         $at, $at, 0x3FC9
    ctx->pc = 0x1179a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16329);
    // 0x1179a4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1179a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1179a8: 0xe49300a4  swc1        $f19, 0xA4($a0)
    ctx->pc = 0x1179a8u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x1179ac: 0x3c013f68  lui         $at, 0x3F68
    ctx->pc = 0x1179acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16232 << 16));
    // 0x1179b0: 0x3421f339  ori         $at, $at, 0xF339
    ctx->pc = 0x1179b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62265);
    // 0x1179b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1179b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1179b8: 0x3c013f69  lui         $at, 0x3F69
    ctx->pc = 0x1179b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16233 << 16));
    // 0x1179bc: 0x3421de1d  ori         $at, $at, 0xDE1D
    ctx->pc = 0x1179bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56861);
    // 0x1179c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1179c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1179c4: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1179c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1179c8: 0x342128d7  ori         $at, $at, 0x28D7
    ctx->pc = 0x1179c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10455);
    // 0x1179cc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1179ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1179d0: 0x3c013f6a  lui         $at, 0x3F6A
    ctx->pc = 0x1179d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16234 << 16));
    // 0x1179d4: 0x3421c473  ori         $at, $at, 0xC473
    ctx->pc = 0x1179d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50291);
    // 0x1179d8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1179d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1179dc: 0x3c013ec8  lui         $at, 0x3EC8
    ctx->pc = 0x1179dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16072 << 16));
    // 0x1179e0: 0x34210de9  ori         $at, $at, 0xDE9
    ctx->pc = 0x1179e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3561);
    // 0x1179e4: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x1179e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x1179e8: 0xe49500a8  swc1        $f21, 0xA8($a0)
    ctx->pc = 0x1179e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
    // 0x1179ec: 0x3c013f6b  lui         $at, 0x3F6B
    ctx->pc = 0x1179ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16235 << 16));
    // 0x1179f0: 0x3421a635  ori         $at, $at, 0xA635
    ctx->pc = 0x1179f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42549);
    // 0x1179f4: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x1179f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x1179f8: 0xe4940648  swc1        $f20, 0x648($a0)
    ctx->pc = 0x1179f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1608), bits); }
    // 0x1179fc: 0xe480064c  swc1        $f0, 0x64C($a0)
    ctx->pc = 0x1179fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1612), bits); }
    // 0x117a00: 0xe48400ac  swc1        $f4, 0xAC($a0)
    ctx->pc = 0x117a00u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
    // 0x117a04: 0xe4870650  swc1        $f7, 0x650($a0)
    ctx->pc = 0x117a04u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1616), bits); }
    // 0x117a08: 0xe49100b0  swc1        $f17, 0xB0($a0)
    ctx->pc = 0x117a08u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 176), bits); }
    // 0x117a0c: 0x3c013f6c  lui         $at, 0x3F6C
    ctx->pc = 0x117a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16236 << 16));
    // 0x117a10: 0x3421835e  ori         $at, $at, 0x835E
    ctx->pc = 0x117a10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33630);
    // 0x117a14: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x117a14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x117a18: 0xe4930654  swc1        $f19, 0x654($a0)
    ctx->pc = 0x117a18u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1620), bits); }
    // 0x117a1c: 0x3c013ec3  lui         $at, 0x3EC3
    ctx->pc = 0x117a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16067 << 16));
    // 0x117a20: 0x3421ef15  ori         $at, $at, 0xEF15
    ctx->pc = 0x117a20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61205);
    // 0x117a24: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x117a24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x117a28: 0x3c013ebf  lui         $at, 0x3EBF
    ctx->pc = 0x117a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16063 << 16));
    // 0x117a2c: 0x3421cc6f  ori         $at, $at, 0xCC6F
    ctx->pc = 0x117a2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52335);
    // 0x117a30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117a34: 0x3c013f6d  lui         $at, 0x3F6D
    ctx->pc = 0x117a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16237 << 16));
    // 0x117a38: 0x34215bec  ori         $at, $at, 0x5BEC
    ctx->pc = 0x117a38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23532);
    // 0x117a3c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x117a3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x117a40: 0xe4950658  swc1        $f21, 0x658($a0)
    ctx->pc = 0x117a40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1624), bits); }
    // 0x117a44: 0x3c013ebb  lui         $at, 0x3EBB
    ctx->pc = 0x117a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16059 << 16));
    // 0x117a48: 0x3421a60c  ori         $at, $at, 0xA60C
    ctx->pc = 0x117a48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42508);
    // 0x117a4c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x117a4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x117a50: 0xe49400b4  swc1        $f20, 0xB4($a0)
    ctx->pc = 0x117a50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 180), bits); }
    // 0x117a54: 0xe48000b8  swc1        $f0, 0xB8($a0)
    ctx->pc = 0x117a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 184), bits); }
    // 0x117a58: 0xe484065c  swc1        $f4, 0x65C($a0)
    ctx->pc = 0x117a58u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1628), bits); }
    // 0x117a5c: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x117a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x117a60: 0x34214e62  ori         $at, $at, 0x4E62
    ctx->pc = 0x117a60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20066);
    // 0x117a64: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x117a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x117a68: 0xe48700bc  swc1        $f7, 0xBC($a0)
    ctx->pc = 0x117a68u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 188), bits); }
    // 0x117a6c: 0x3c013f6e  lui         $at, 0x3F6E
    ctx->pc = 0x117a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16238 << 16));
    // 0x117a70: 0x34212fd9  ori         $at, $at, 0x2FD9
    ctx->pc = 0x117a70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12249);
    // 0x117a74: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x117a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x117a78: 0x3c013eb7  lui         $at, 0x3EB7
    ctx->pc = 0x117a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16055 << 16));
    // 0x117a7c: 0x34217c01  ori         $at, $at, 0x7C01
    ctx->pc = 0x117a7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31745);
    // 0x117a80: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x117a80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x117a84: 0x3c013f6e  lui         $at, 0x3F6E
    ctx->pc = 0x117a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16238 << 16));
    // 0x117a88: 0x3421ff20  ori         $at, $at, 0xFF20
    ctx->pc = 0x117a88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65312);
    // 0x117a8c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x117a8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x117a90: 0x3c013f6f  lui         $at, 0x3F6F
    ctx->pc = 0x117a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16239 << 16));
    // 0x117a94: 0x3421c9c0  ori         $at, $at, 0xC9C0
    ctx->pc = 0x117a94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51648);
    // 0x117a98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117a98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117a9c: 0x3c013eaf  lui         $at, 0x3EAF
    ctx->pc = 0x117a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16047 << 16));
    // 0x117aa0: 0x34211d44  ori         $at, $at, 0x1D44
    ctx->pc = 0x117aa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7492);
    // 0x117aa4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x117aa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x117aa8: 0xe49500c4  swc1        $f21, 0xC4($a0)
    ctx->pc = 0x117aa8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 196), bits); }
    // 0x117aac: 0x3c013f70  lui         $at, 0x3F70
    ctx->pc = 0x117aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16240 << 16));
    // 0x117ab0: 0x34218fb2  ori         $at, $at, 0x8FB2
    ctx->pc = 0x117ab0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36786);
    // 0x117ab4: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x117ab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x117ab8: 0xe4910660  swc1        $f17, 0x660($a0)
    ctx->pc = 0x117ab8u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1632), bits); }
    // 0x117abc: 0xe49300c0  swc1        $f19, 0xC0($a0)
    ctx->pc = 0x117abcu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 192), bits); }
    // 0x117ac0: 0xe4940664  swc1        $f20, 0x664($a0)
    ctx->pc = 0x117ac0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1636), bits); }
    // 0x117ac4: 0xe4800668  swc1        $f0, 0x668($a0)
    ctx->pc = 0x117ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1640), bits); }
    // 0x117ac8: 0xe48400c8  swc1        $f4, 0xC8($a0)
    ctx->pc = 0x117ac8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 200), bits); }
    // 0x117acc: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x117accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x117ad0: 0x3421e8bc  ori         $at, $at, 0xE8BC
    ctx->pc = 0x117ad0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59580);
    // 0x117ad4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x117ad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x117ad8: 0xe487066c  swc1        $f7, 0x66C($a0)
    ctx->pc = 0x117ad8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1644), bits); }
    // 0x117adc: 0x3c013f71  lui         $at, 0x3F71
    ctx->pc = 0x117adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16241 << 16));
    // 0x117ae0: 0x342150f4  ori         $at, $at, 0x50F4
    ctx->pc = 0x117ae0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20724);
    // 0x117ae4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117ae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117ae8: 0xe49500cc  swc1        $f21, 0xCC($a0)
    ctx->pc = 0x117ae8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 204), bits); }
    // 0x117aec: 0x3c013ea6  lui         $at, 0x3EA6
    ctx->pc = 0x117aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16038 << 16));
    // 0x117af0: 0x3421b0de  ori         $at, $at, 0xB0DE
    ctx->pc = 0x117af0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45278);
    // 0x117af4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x117af4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x117af8: 0xe4800670  swc1        $f0, 0x670($a0)
    ctx->pc = 0x117af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1648), bits); }
    // 0x117afc: 0x3c013f72  lui         $at, 0x3F72
    ctx->pc = 0x117afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16242 << 16));
    // 0x117b00: 0x34210d81  ori         $at, $at, 0xD81
    ctx->pc = 0x117b00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3457);
    // 0x117b04: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x117b04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x117b08: 0xe48400d0  swc1        $f4, 0xD0($a0)
    ctx->pc = 0x117b08u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
    // 0x117b0c: 0x3c013ea2  lui         $at, 0x3EA2
    ctx->pc = 0x117b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16034 << 16));
    // 0x117b10: 0x342175c2  ori         $at, $at, 0x75C2
    ctx->pc = 0x117b10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30146);
    // 0x117b14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117b14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117b18: 0xe4950674  swc1        $f21, 0x674($a0)
    ctx->pc = 0x117b18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1652), bits); }
    // 0x117b1c: 0x3c013f72  lui         $at, 0x3F72
    ctx->pc = 0x117b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16242 << 16));
    // 0x117b20: 0x3421c557  ori         $at, $at, 0xC557
    ctx->pc = 0x117b20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50519);
    // 0x117b24: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x117b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x117b28: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x117b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x117b2c: 0x3c013e9e  lui         $at, 0x3E9E
    ctx->pc = 0x117b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16030 << 16));
    // 0x117b30: 0x3421377a  ori         $at, $at, 0x377A
    ctx->pc = 0x117b30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14202);
    // 0x117b34: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x117b34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x117b38: 0xe4840678  swc1        $f4, 0x678($a0)
    ctx->pc = 0x117b38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1656), bits); }
    // 0x117b3c: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x117b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
    // 0x117b40: 0x34217871  ori         $at, $at, 0x7871
    ctx->pc = 0x117b40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30833);
    // 0x117b44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117b44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117b48: 0xe49500d8  swc1        $f21, 0xD8($a0)
    ctx->pc = 0x117b48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
    // 0x117b4c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x117b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x117b50: 0x3421f61c  ori         $at, $at, 0xF61C
    ctx->pc = 0x117b50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63004);
    // 0x117b54: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x117b54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x117b58: 0xe480067c  swc1        $f0, 0x67C($a0)
    ctx->pc = 0x117b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1660), bits); }
    // 0x117b5c: 0x3c013f74  lui         $at, 0x3F74
    ctx->pc = 0x117b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16244 << 16));
    // 0x117b60: 0x342126cb  ori         $at, $at, 0x26CB
    ctx->pc = 0x117b60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9931);
    // 0x117b64: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x117b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x117b68: 0xe48400dc  swc1        $f4, 0xDC($a0)
    ctx->pc = 0x117b68u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 220), bits); }
    // 0x117b6c: 0x3c013e95  lui         $at, 0x3E95
    ctx->pc = 0x117b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16021 << 16));
    // 0x117b70: 0x3421b1be  ori         $at, $at, 0xB1BE
    ctx->pc = 0x117b70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45502);
    // 0x117b74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117b74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117b78: 0xe4950680  swc1        $f21, 0x680($a0)
    ctx->pc = 0x117b78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1664), bits); }
    // 0x117b7c: 0x3c013f74  lui         $at, 0x3F74
    ctx->pc = 0x117b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16244 << 16));
    // 0x117b80: 0x3421d063  ori         $at, $at, 0xD063
    ctx->pc = 0x117b80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53347);
    // 0x117b84: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x117b84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x117b88: 0xe48000e0  swc1        $f0, 0xE0($a0)
    ctx->pc = 0x117b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
    // 0x117b8c: 0x3c013e91  lui         $at, 0x3E91
    ctx->pc = 0x117b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16017 << 16));
    // 0x117b90: 0x34216a76  ori         $at, $at, 0x6A76
    ctx->pc = 0x117b90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27254);
    // 0x117b94: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x117b94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x117b98: 0xe4840684  swc1        $f4, 0x684($a0)
    ctx->pc = 0x117b98u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1668), bits); }
    // 0x117b9c: 0x3c013f75  lui         $at, 0x3F75
    ctx->pc = 0x117b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16245 << 16));
    // 0x117ba0: 0x34217536  ori         $at, $at, 0x7536
    ctx->pc = 0x117ba0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30006);
    // 0x117ba4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117ba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117ba8: 0xe49500e4  swc1        $f21, 0xE4($a0)
    ctx->pc = 0x117ba8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 228), bits); }
    // 0x117bac: 0x3c013e8d  lui         $at, 0x3E8D
    ctx->pc = 0x117bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16013 << 16));
    // 0x117bb0: 0x34212057  ori         $at, $at, 0x2057
    ctx->pc = 0x117bb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8279);
    // 0x117bb4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x117bb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x117bb8: 0xe4800688  swc1        $f0, 0x688($a0)
    ctx->pc = 0x117bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1672), bits); }
    // 0x117bbc: 0x3c013f76  lui         $at, 0x3F76
    ctx->pc = 0x117bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16246 << 16));
    // 0x117bc0: 0x3421153f  ori         $at, $at, 0x153F
    ctx->pc = 0x117bc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5439);
    // 0x117bc4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x117bc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x117bc8: 0xe48400e8  swc1        $f4, 0xE8($a0)
    ctx->pc = 0x117bc8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 232), bits); }
    // 0x117bcc: 0x3c013e88  lui         $at, 0x3E88
    ctx->pc = 0x117bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16008 << 16));
    // 0x117bd0: 0x3421d378  ori         $at, $at, 0xD378
    ctx->pc = 0x117bd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54136);
    // 0x117bd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117bd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117bd8: 0xe495068c  swc1        $f21, 0x68C($a0)
    ctx->pc = 0x117bd8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1676), bits); }
    // 0x117bdc: 0x3c013f76  lui         $at, 0x3F76
    ctx->pc = 0x117bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16246 << 16));
    // 0x117be0: 0x3421b07c  ori         $at, $at, 0xB07C
    ctx->pc = 0x117be0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45180);
    // 0x117be4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x117be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x117be8: 0xe48000ec  swc1        $f0, 0xEC($a0)
    ctx->pc = 0x117be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 236), bits); }
    // 0x117bec: 0x3c013e84  lui         $at, 0x3E84
    ctx->pc = 0x117becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16004 << 16));
    // 0x117bf0: 0x342183ee  ori         $at, $at, 0x83EE
    ctx->pc = 0x117bf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33774);
    // 0x117bf4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x117bf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x117bf8: 0xe4840690  swc1        $f4, 0x690($a0)
    ctx->pc = 0x117bf8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1680), bits); }
    // 0x117bfc: 0x3c013f77  lui         $at, 0x3F77
    ctx->pc = 0x117bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16247 << 16));
    // 0x117c00: 0x342146ea  ori         $at, $at, 0x46EA
    ctx->pc = 0x117c00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18154);
    // 0x117c04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117c04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117c08: 0xe49500f0  swc1        $f21, 0xF0($a0)
    ctx->pc = 0x117c08u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 240), bits); }
    // 0x117c0c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x117c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x117c10: 0x342131cf  ori         $at, $at, 0x31CF
    ctx->pc = 0x117c10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12751);
    // 0x117c14: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x117c14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x117c18: 0xe4800694  swc1        $f0, 0x694($a0)
    ctx->pc = 0x117c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1684), bits); }
    // 0x117c1c: 0x3c013f77  lui         $at, 0x3F77
    ctx->pc = 0x117c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16247 << 16));
    // 0x117c20: 0x3421d886  ori         $at, $at, 0xD886
    ctx->pc = 0x117c20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55430);
    // 0x117c24: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x117c24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x117c28: 0xe48400f4  swc1        $f4, 0xF4($a0)
    ctx->pc = 0x117c28u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 244), bits); }
    // 0x117c2c: 0x3c013e77  lui         $at, 0x3E77
    ctx->pc = 0x117c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15991 << 16));
    // 0x117c30: 0x3421ba60  ori         $at, $at, 0xBA60
    ctx->pc = 0x117c30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47712);
    // 0x117c34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117c34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117c38: 0xe4950698  swc1        $f21, 0x698($a0)
    ctx->pc = 0x117c38u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1688), bits); }
    // 0x117c3c: 0x3c013f78  lui         $at, 0x3F78
    ctx->pc = 0x117c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16248 << 16));
    // 0x117c40: 0x3421654d  ori         $at, $at, 0x654D
    ctx->pc = 0x117c40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25933);
    // 0x117c44: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x117c44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x117c48: 0xe48000f8  swc1        $f0, 0xF8($a0)
    ctx->pc = 0x117c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 248), bits); }
    // 0x117c4c: 0x3c013e6f  lui         $at, 0x3E6F
    ctx->pc = 0x117c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15983 << 16));
    // 0x117c50: 0x34210c4d  ori         $at, $at, 0xC4D
    ctx->pc = 0x117c50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3149);
    // 0x117c54: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x117c54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x117c58: 0xe484069c  swc1        $f4, 0x69C($a0)
    ctx->pc = 0x117c58u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1692), bits); }
    // 0x117c5c: 0x3c013f78  lui         $at, 0x3F78
    ctx->pc = 0x117c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16248 << 16));
    // 0x117c60: 0x3421ed3c  ori         $at, $at, 0xED3C
    ctx->pc = 0x117c60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60732);
    // 0x117c64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117c68: 0xe49500fc  swc1        $f21, 0xFC($a0)
    ctx->pc = 0x117c68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 252), bits); }
    // 0x117c6c: 0x3c013e66  lui         $at, 0x3E66
    ctx->pc = 0x117c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15974 << 16));
    // 0x117c70: 0x34215992  ori         $at, $at, 0x5992
    ctx->pc = 0x117c70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22930);
    // 0x117c74: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x117c74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x117c78: 0xe48006a0  swc1        $f0, 0x6A0($a0)
    ctx->pc = 0x117c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1696), bits); }
    // 0x117c7c: 0x3c013f79  lui         $at, 0x3F79
    ctx->pc = 0x117c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16249 << 16));
    // 0x117c80: 0x34217051  ori         $at, $at, 0x7051
    ctx->pc = 0x117c80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28753);
    // 0x117c84: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x117c84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x117c88: 0xe4840100  swc1        $f4, 0x100($a0)
    ctx->pc = 0x117c88u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 256), bits); }
    // 0x117c8c: 0x3c013e5d  lui         $at, 0x3E5D
    ctx->pc = 0x117c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15965 << 16));
    // 0x117c90: 0x3421a259  ori         $at, $at, 0xA259
    ctx->pc = 0x117c90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41561);
    // 0x117c94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117c94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117c98: 0xe49506a4  swc1        $f21, 0x6A4($a0)
    ctx->pc = 0x117c98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1700), bits); }
    // 0x117c9c: 0x3c013f79  lui         $at, 0x3F79
    ctx->pc = 0x117c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16249 << 16));
    // 0x117ca0: 0x3421ee89  ori         $at, $at, 0xEE89
    ctx->pc = 0x117ca0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61065);
    // 0x117ca4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x117ca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x117ca8: 0xe4800104  swc1        $f0, 0x104($a0)
    ctx->pc = 0x117ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 260), bits); }
    // 0x117cac: 0x3c013e54  lui         $at, 0x3E54
    ctx->pc = 0x117cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15956 << 16));
    // 0x117cb0: 0x3421e6cd  ori         $at, $at, 0xE6CD
    ctx->pc = 0x117cb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59085);
    // 0x117cb4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x117cb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x117cb8: 0xe48406a8  swc1        $f4, 0x6A8($a0)
    ctx->pc = 0x117cb8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1704), bits); }
    // 0x117cbc: 0x3c013f7a  lui         $at, 0x3F7A
    ctx->pc = 0x117cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16250 << 16));
    // 0x117cc0: 0x342167e2  ori         $at, $at, 0x67E2
    ctx->pc = 0x117cc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26594);
    // 0x117cc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117cc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117cc8: 0xe4950108  swc1        $f21, 0x108($a0)
    ctx->pc = 0x117cc8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 264), bits); }
    // 0x117ccc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x117cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x117cd0: 0x3421271c  ori         $at, $at, 0x271C
    ctx->pc = 0x117cd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10012);
    // 0x117cd4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x117cd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x117cd8: 0xe48006ac  swc1        $f0, 0x6AC($a0)
    ctx->pc = 0x117cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1708), bits); }
    // 0x117cdc: 0x3c013f7a  lui         $at, 0x3F7A
    ctx->pc = 0x117cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16250 << 16));
    // 0x117ce0: 0x3421dc58  ori         $at, $at, 0xDC58
    ctx->pc = 0x117ce0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56408);
    // 0x117ce4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x117ce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x117ce8: 0xe484010c  swc1        $f4, 0x10C($a0)
    ctx->pc = 0x117ce8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 268), bits); }
    // 0x117cec: 0x3c013e43  lui         $at, 0x3E43
    ctx->pc = 0x117cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15939 << 16));
    // 0x117cf0: 0x3421636f  ori         $at, $at, 0x636F
    ctx->pc = 0x117cf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25455);
    // 0x117cf4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117cf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117cf8: 0xe49506b0  swc1        $f21, 0x6B0($a0)
    ctx->pc = 0x117cf8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1712), bits); }
    // 0x117cfc: 0xe4800110  swc1        $f0, 0x110($a0)
    ctx->pc = 0x117cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 272), bits); }
    // 0x117d00: 0x3c013f7b  lui         $at, 0x3F7B
    ctx->pc = 0x117d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16251 << 16));
    // 0x117d04: 0x34214beb  ori         $at, $at, 0x4BEB
    ctx->pc = 0x117d04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19435);
    // 0x117d08: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x117d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x117d0c: 0x3c013e3a  lui         $at, 0x3E3A
    ctx->pc = 0x117d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15930 << 16));
    // 0x117d10: 0x34219bf3  ori         $at, $at, 0x9BF3
    ctx->pc = 0x117d10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39923);
    // 0x117d14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117d14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117d18: 0xe49506b4  swc1        $f21, 0x6B4($a0)
    ctx->pc = 0x117d18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1716), bits); }
    // 0x117d1c: 0xe4800114  swc1        $f0, 0x114($a0)
    ctx->pc = 0x117d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 276), bits); }
    // 0x117d20: 0x3c013f7b  lui         $at, 0x3F7B
    ctx->pc = 0x117d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16251 << 16));
    // 0x117d24: 0x3421b698  ori         $at, $at, 0xB698
    ctx->pc = 0x117d24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46744);
    // 0x117d28: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x117d28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x117d2c: 0x3c013e31  lui         $at, 0x3E31
    ctx->pc = 0x117d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15921 << 16));
    // 0x117d30: 0x3421d0d4  ori         $at, $at, 0xD0D4
    ctx->pc = 0x117d30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53460);
    // 0x117d34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117d38: 0xe49506b8  swc1        $f21, 0x6B8($a0)
    ctx->pc = 0x117d38u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1720), bits); }
    // 0x117d3c: 0xe4800118  swc1        $f0, 0x118($a0)
    ctx->pc = 0x117d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 280), bits); }
    // 0x117d40: 0x3c013e29  lui         $at, 0x3E29
    ctx->pc = 0x117d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15913 << 16));
    // 0x117d44: 0x3421023d  ori         $at, $at, 0x23D
    ctx->pc = 0x117d44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)573);
    // 0x117d48: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x117d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x117d4c: 0x3c013e20  lui         $at, 0x3E20
    ctx->pc = 0x117d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15904 << 16));
    // 0x117d50: 0x3421305b  ori         $at, $at, 0x305B
    ctx->pc = 0x117d50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12379);
    // 0x117d54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117d54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117d58: 0xe495011c  swc1        $f21, 0x11C($a0)
    ctx->pc = 0x117d58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 284), bits); }
    // 0x117d5c: 0xe4800120  swc1        $f0, 0x120($a0)
    ctx->pc = 0x117d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
    // 0x117d60: 0x3c013e17  lui         $at, 0x3E17
    ctx->pc = 0x117d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15895 << 16));
    // 0x117d64: 0x34215b5a  ori         $at, $at, 0x5B5A
    ctx->pc = 0x117d64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23386);
    // 0x117d68: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x117d68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x117d6c: 0x3c013e0e  lui         $at, 0x3E0E
    ctx->pc = 0x117d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15886 << 16));
    // 0x117d70: 0x34218365  ori         $at, $at, 0x8365
    ctx->pc = 0x117d70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33637);
    // 0x117d74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117d74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117d78: 0xe4950124  swc1        $f21, 0x124($a0)
    ctx->pc = 0x117d78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x117d7c: 0xe4800128  swc1        $f0, 0x128($a0)
    ctx->pc = 0x117d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 296), bits); }
    // 0x117d80: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x117d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
    // 0x117d84: 0x3421a8a8  ori         $at, $at, 0xA8A8
    ctx->pc = 0x117d84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43176);
    // 0x117d88: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x117d88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x117d8c: 0x3c013df9  lui         $at, 0x3DF9
    ctx->pc = 0x117d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15865 << 16));
    // 0x117d90: 0x342196a2  ori         $at, $at, 0x96A2
    ctx->pc = 0x117d90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38562);
    // 0x117d94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117d94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117d98: 0xe495012c  swc1        $f21, 0x12C($a0)
    ctx->pc = 0x117d98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 300), bits); }
    // 0x117d9c: 0xe4800130  swc1        $f0, 0x130($a0)
    ctx->pc = 0x117d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 304), bits); }
    // 0x117da0: 0x3c013de7  lui         $at, 0x3DE7
    ctx->pc = 0x117da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15847 << 16));
    // 0x117da4: 0x3421d716  ori         $at, $at, 0xD716
    ctx->pc = 0x117da4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55062);
    // 0x117da8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x117da8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x117dac: 0x3c013dd6  lui         $at, 0x3DD6
    ctx->pc = 0x117dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15830 << 16));
    // 0x117db0: 0x34211305  ori         $at, $at, 0x1305
    ctx->pc = 0x117db0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4869);
    // 0x117db4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117db4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117db8: 0x3c013f7c  lui         $at, 0x3F7C
    ctx->pc = 0x117db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16252 << 16));
    // 0x117dbc: 0x34211c5c  ori         $at, $at, 0x1C5C
    ctx->pc = 0x117dbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7260);
    // 0x117dc0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x117dc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x117dc4: 0x3c013f7c  lui         $at, 0x3F7C
    ctx->pc = 0x117dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16252 << 16));
    // 0x117dc8: 0x34217d37  ori         $at, $at, 0x7D37
    ctx->pc = 0x117dc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32055);
    // 0x117dcc: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x117dccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x117dd0: 0x3c013f7c  lui         $at, 0x3F7C
    ctx->pc = 0x117dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16252 << 16));
    // 0x117dd4: 0x3421d925  ori         $at, $at, 0xD925
    ctx->pc = 0x117dd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55589);
    // 0x117dd8: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x117dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x117ddc: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x117ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x117de0: 0x34213025  ori         $at, $at, 0x3025
    ctx->pc = 0x117de0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12325);
    // 0x117de4: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x117de4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x117de8: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x117de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x117dec: 0x34218235  ori         $at, $at, 0x8235
    ctx->pc = 0x117decu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33333);
    // 0x117df0: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x117df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x117df4: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x117df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x117df8: 0x3421cf55  ori         $at, $at, 0xCF55
    ctx->pc = 0x117df8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53077);
    // 0x117dfc: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x117dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x117e00: 0x3c013f7e  lui         $at, 0x3F7E
    ctx->pc = 0x117e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16254 << 16));
    // 0x117e04: 0x34211781  ori         $at, $at, 0x1781
    ctx->pc = 0x117e04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6017);
    // 0x117e08: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x117e08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x117e0c: 0x3c013f7e  lui         $at, 0x3F7E
    ctx->pc = 0x117e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16254 << 16));
    // 0x117e10: 0x34215aba  ori         $at, $at, 0x5ABA
    ctx->pc = 0x117e10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23226);
    // 0x117e14: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x117e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x117e18: 0xe4950134  swc1        $f21, 0x134($a0)
    ctx->pc = 0x117e18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 308), bits); }
    // 0x117e1c: 0xe4800138  swc1        $f0, 0x138($a0)
    ctx->pc = 0x117e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 312), bits); }
    // 0x117e20: 0x3c013f7e  lui         $at, 0x3F7E
    ctx->pc = 0x117e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16254 << 16));
    // 0x117e24: 0x342198fd  ori         $at, $at, 0x98FD
    ctx->pc = 0x117e24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39165);
    // 0x117e28: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x117e28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x117e2c: 0xe49406bc  swc1        $f20, 0x6BC($a0)
    ctx->pc = 0x117e2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1724), bits); }
    // 0x117e30: 0xe49306c0  swc1        $f19, 0x6C0($a0)
    ctx->pc = 0x117e30u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1728), bits); }
    // 0x117e34: 0xe49206c4  swc1        $f18, 0x6C4($a0)
    ctx->pc = 0x117e34u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1732), bits); }
    // 0x117e38: 0xe49106c8  swc1        $f17, 0x6C8($a0)
    ctx->pc = 0x117e38u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1736), bits); }
    // 0x117e3c: 0xe49006cc  swc1        $f16, 0x6CC($a0)
    ctx->pc = 0x117e3cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1740), bits); }
    // 0x117e40: 0xe48f06d0  swc1        $f15, 0x6D0($a0)
    ctx->pc = 0x117e40u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1744), bits); }
    // 0x117e44: 0xe48e06d4  swc1        $f14, 0x6D4($a0)
    ctx->pc = 0x117e44u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1748), bits); }
    // 0x117e48: 0xe48d06d8  swc1        $f13, 0x6D8($a0)
    ctx->pc = 0x117e48u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1752), bits); }
    // 0x117e4c: 0x3c013dc4  lui         $at, 0x3DC4
    ctx->pc = 0x117e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15812 << 16));
    // 0x117e50: 0x34214ac7  ori         $at, $at, 0x4AC7
    ctx->pc = 0x117e50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19143);
    // 0x117e54: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x117e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x117e58: 0x3c013db2  lui         $at, 0x3DB2
    ctx->pc = 0x117e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15794 << 16));
    // 0x117e5c: 0x34217eb6  ori         $at, $at, 0x7EB6
    ctx->pc = 0x117e5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32438);
    // 0x117e60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117e60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117e64: 0xe48c06dc  swc1        $f12, 0x6DC($a0)
    ctx->pc = 0x117e64u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1756), bits); }
    // 0x117e68: 0xe495013c  swc1        $f21, 0x13C($a0)
    ctx->pc = 0x117e68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 316), bits); }
    // 0x117e6c: 0xe4800140  swc1        $f0, 0x140($a0)
    ctx->pc = 0x117e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 320), bits); }
    // 0x117e70: 0x3c013da0  lui         $at, 0x3DA0
    ctx->pc = 0x117e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15776 << 16));
    // 0x117e74: 0x3421af2a  ori         $at, $at, 0xAF2A
    ctx->pc = 0x117e74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44842);
    // 0x117e78: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x117e78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x117e7c: 0x3c013d8e  lui         $at, 0x3D8E
    ctx->pc = 0x117e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15758 << 16));
    // 0x117e80: 0x3421dc7b  ori         $at, $at, 0xDC7B
    ctx->pc = 0x117e80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56443);
    // 0x117e84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117e88: 0xe4950144  swc1        $f21, 0x144($a0)
    ctx->pc = 0x117e88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 324), bits); }
    // 0x117e8c: 0xe4800148  swc1        $f0, 0x148($a0)
    ctx->pc = 0x117e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 328), bits); }
    // 0x117e90: 0x3c013f7e  lui         $at, 0x3F7E
    ctx->pc = 0x117e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16254 << 16));
    // 0x117e94: 0x3421d249  ori         $at, $at, 0xD249
    ctx->pc = 0x117e94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53833);
    // 0x117e98: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x117e98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x117e9c: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x117e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x117ea0: 0x3421069e  ori         $at, $at, 0x69E
    ctx->pc = 0x117ea0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1694);
    // 0x117ea4: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x117ea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x117ea8: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x117ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x117eac: 0x342135f9  ori         $at, $at, 0x35F9
    ctx->pc = 0x117eacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13817);
    // 0x117eb0: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x117eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x117eb4: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x117eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x117eb8: 0x3421605c  ori         $at, $at, 0x605C
    ctx->pc = 0x117eb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24668);
    // 0x117ebc: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x117ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x117ec0: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x117ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x117ec4: 0x342185c3  ori         $at, $at, 0x85C3
    ctx->pc = 0x117ec4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34243);
    // 0x117ec8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x117ec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x117ecc: 0x3c013d7a  lui         $at, 0x3D7A
    ctx->pc = 0x117eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15738 << 16));
    // 0x117ed0: 0x34210e09  ori         $at, $at, 0xE09
    ctx->pc = 0x117ed0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3593);
    // 0x117ed4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x117ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x117ed8: 0x3c013d56  lui         $at, 0x3D56
    ctx->pc = 0x117ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15702 << 16));
    // 0x117edc: 0x34215e3a  ori         $at, $at, 0x5E3A
    ctx->pc = 0x117edcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24122);
    // 0x117ee0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117ee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117ee4: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x117ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x117ee8: 0x3421a62f  ori         $at, $at, 0xA62F
    ctx->pc = 0x117ee8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42543);
    // 0x117eec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x117eecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x117ef0: 0xe48b06e0  swc1        $f11, 0x6E0($a0)
    ctx->pc = 0x117ef0u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1760), bits); }
    // 0x117ef4: 0xe48a06e4  swc1        $f10, 0x6E4($a0)
    ctx->pc = 0x117ef4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1764), bits); }
    // 0x117ef8: 0xe48906e8  swc1        $f9, 0x6E8($a0)
    ctx->pc = 0x117ef8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1768), bits); }
    // 0x117efc: 0xe48806ec  swc1        $f8, 0x6EC($a0)
    ctx->pc = 0x117efcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1772), bits); }
    // 0x117f00: 0xe495014c  swc1        $f21, 0x14C($a0)
    ctx->pc = 0x117f00u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 332), bits); }
    // 0x117f04: 0xe48706f0  swc1        $f7, 0x6F0($a0)
    ctx->pc = 0x117f04u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1776), bits); }
    // 0x117f08: 0xe4800150  swc1        $f0, 0x150($a0)
    ctx->pc = 0x117f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 336), bits); }
    // 0x117f0c: 0xe48106f4  swc1        $f1, 0x6F4($a0)
    ctx->pc = 0x117f0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1780), bits); }
    // 0x117f10: 0xe4870728  swc1        $f7, 0x728($a0)
    ctx->pc = 0x117f10u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1832), bits); }
    // 0x117f14: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x117f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x117f18: 0x3421e98b  ori         $at, $at, 0xE98B
    ctx->pc = 0x117f18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59787);
    // 0x117f1c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x117f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x117f20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x117f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x117f24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117f24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117f28: 0x3c013d32  lui         $at, 0x3D32
    ctx->pc = 0x117f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15666 << 16));
    // 0x117f2c: 0x3421aa3e  ori         $at, $at, 0xAA3E
    ctx->pc = 0x117f2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43582);
    // 0x117f30: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x117f30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x117f34: 0xe480070c  swc1        $f0, 0x70C($a0)
    ctx->pc = 0x117f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1804), bits); }
    // 0x117f38: 0xe4840718  swc1        $f4, 0x718($a0)
    ctx->pc = 0x117f38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1816), bits); }
    // 0x117f3c: 0xe4840700  swc1        $f4, 0x700($a0)
    ctx->pc = 0x117f3cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1792), bits); }
    // 0x117f40: 0xe4870154  swc1        $f7, 0x154($a0)
    ctx->pc = 0x117f40u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 340), bits); }
    // 0x117f44: 0x3c013d0e  lui         $at, 0x3D0E
    ctx->pc = 0x117f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15630 << 16));
    // 0x117f48: 0x3421f2c6  ori         $at, $at, 0xF2C6
    ctx->pc = 0x117f48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62150);
    // 0x117f4c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x117f4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x117f50: 0x3c013cd6  lui         $at, 0x3CD6
    ctx->pc = 0x117f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15574 << 16));
    // 0x117f54: 0x3421710a  ori         $at, $at, 0x710A
    ctx->pc = 0x117f54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28938);
    // 0x117f58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117f5c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x117f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x117f60: 0x3421f859  ori         $at, $at, 0xF859
    ctx->pc = 0x117f60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63577);
    // 0x117f64: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x117f64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x117f68: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x117f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x117f6c: 0x3421c1a0  ori         $at, $at, 0xC1A0
    ctx->pc = 0x117f6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49568);
    // 0x117f70: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x117f70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x117f74: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x117f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x117f78: 0x3421d814  ori         $at, $at, 0xD814
    ctx->pc = 0x117f78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55316);
    // 0x117f7c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x117f7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x117f80: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x117f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x117f84: 0x3421f605  ori         $at, $at, 0xF605
    ctx->pc = 0x117f84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62981);
    // 0x117f88: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x117f88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x117f8c: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x117f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x117f90: 0x3421fd81  ori         $at, $at, 0xFD81
    ctx->pc = 0x117f90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64897);
    // 0x117f94: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x117f94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x117f98: 0x3c013c0e  lui         $at, 0x3C0E
    ctx->pc = 0x117f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15374 << 16));
    // 0x117f9c: 0x3421f9be  ori         $at, $at, 0xF9BE
    ctx->pc = 0x117f9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63934);
    // 0x117fa0: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x117fa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x117fa4: 0xe4950158  swc1        $f21, 0x158($a0)
    ctx->pc = 0x117fa4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 344), bits); }
    // 0x117fa8: 0xe480015c  swc1        $f0, 0x15C($a0)
    ctx->pc = 0x117fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 348), bits); }
    // 0x117fac: 0xe4840160  swc1        $f4, 0x160($a0)
    ctx->pc = 0x117facu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 352), bits); }
    // 0x117fb0: 0xe4860710  swc1        $f6, 0x710($a0)
    ctx->pc = 0x117fb0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1808), bits); }
    // 0x117fb4: 0xe4850714  swc1        $f5, 0x714($a0)
    ctx->pc = 0x117fb4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1812), bits); }
    // 0x117fb8: 0xe483071c  swc1        $f3, 0x71C($a0)
    ctx->pc = 0x117fb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1820), bits); }
    // 0x117fbc: 0xe4820720  swc1        $f2, 0x720($a0)
    ctx->pc = 0x117fbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1824), bits); }
    // 0x117fc0: 0xe4810724  swc1        $f1, 0x724($a0)
    ctx->pc = 0x117fc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1828), bits); }
    // 0x117fc4: 0xe488072c  swc1        $f8, 0x72C($a0)
    ctx->pc = 0x117fc4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1836), bits); }
    // 0x117fc8: 0xe4890730  swc1        $f9, 0x730($a0)
    ctx->pc = 0x117fc8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1840), bits); }
    // 0x117fcc: 0xe48a0734  swc1        $f10, 0x734($a0)
    ctx->pc = 0x117fccu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1844), bits); }
    // 0x117fd0: 0xe48206f8  swc1        $f2, 0x6F8($a0)
    ctx->pc = 0x117fd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1784), bits); }
    // 0x117fd4: 0xe48306fc  swc1        $f3, 0x6FC($a0)
    ctx->pc = 0x117fd4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1788), bits); }
    // 0x117fd8: 0xe4850704  swc1        $f5, 0x704($a0)
    ctx->pc = 0x117fd8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1796), bits); }
    // 0x117fdc: 0xe4870164  swc1        $f7, 0x164($a0)
    ctx->pc = 0x117fdcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 356), bits); }
    // 0x117fe0: 0xe4860708  swc1        $f6, 0x708($a0)
    ctx->pc = 0x117fe0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1800), bits); }
    // 0x117fe4: 0x3c01bc0e  lui         $at, 0xBC0E
    ctx->pc = 0x117fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48142 << 16));
    // 0x117fe8: 0x3421f9be  ori         $at, $at, 0xF9BE
    ctx->pc = 0x117fe8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63934);
    // 0x117fec: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x117fecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x117ff0: 0x3c01bc8e  lui         $at, 0xBC8E
    ctx->pc = 0x117ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48270 << 16));
    // 0x117ff4: 0x3421f859  ori         $at, $at, 0xF859
    ctx->pc = 0x117ff4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63577);
    // 0x117ff8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117ff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117ffc: 0x3c01bcd6  lui         $at, 0xBCD6
    ctx->pc = 0x117ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48342 << 16));
    // 0x118000: 0x3421710a  ori         $at, $at, 0x710A
    ctx->pc = 0x118000u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28938);
    // 0x118004: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x118004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x118008: 0xac800168  sw          $zero, 0x168($a0)
    ctx->pc = 0x118008u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 360), GPR_U32(ctx, 0));
    // 0x11800c: 0xe495016c  swc1        $f21, 0x16C($a0)
    ctx->pc = 0x11800cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 364), bits); }
    // 0x118010: 0xe4800170  swc1        $f0, 0x170($a0)
    ctx->pc = 0x118010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 368), bits); }
    // 0x118014: 0xe4840174  swc1        $f4, 0x174($a0)
    ctx->pc = 0x118014u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 372), bits); }
    // 0x118018: 0x3c01bd0e  lui         $at, 0xBD0E
    ctx->pc = 0x118018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48398 << 16));
    // 0x11801c: 0x3421f2c6  ori         $at, $at, 0xF2C6
    ctx->pc = 0x11801cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62150);
    // 0x118020: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x118020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x118024: 0x3c01bd32  lui         $at, 0xBD32
    ctx->pc = 0x118024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48434 << 16));
    // 0x118028: 0x3421aa3e  ori         $at, $at, 0xAA3E
    ctx->pc = 0x118028u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43582);
    // 0x11802c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x11802cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x118030: 0x3c01bd56  lui         $at, 0xBD56
    ctx->pc = 0x118030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48470 << 16));
    // 0x118034: 0x34215e3a  ori         $at, $at, 0x5E3A
    ctx->pc = 0x118034u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24122);
    // 0x118038: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11803c: 0x3c01bd7a  lui         $at, 0xBD7A
    ctx->pc = 0x11803cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48506 << 16));
    // 0x118040: 0x34210e09  ori         $at, $at, 0xE09
    ctx->pc = 0x118040u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3593);
    // 0x118044: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x118044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x118048: 0xe4870178  swc1        $f7, 0x178($a0)
    ctx->pc = 0x118048u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 376), bits); }
    // 0x11804c: 0xe495017c  swc1        $f21, 0x17C($a0)
    ctx->pc = 0x11804cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 380), bits); }
    // 0x118050: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x118050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x118054: 0xe4840184  swc1        $f4, 0x184($a0)
    ctx->pc = 0x118054u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    // 0x118058: 0x3c01bd8e  lui         $at, 0xBD8E
    ctx->pc = 0x118058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48526 << 16));
    // 0x11805c: 0x3421dc7b  ori         $at, $at, 0xDC7B
    ctx->pc = 0x11805cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56443);
    // 0x118060: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x118060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x118064: 0x3c01bda0  lui         $at, 0xBDA0
    ctx->pc = 0x118064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48544 << 16));
    // 0x118068: 0x3421af2a  ori         $at, $at, 0xAF2A
    ctx->pc = 0x118068u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44842);
    // 0x11806c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x11806cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x118070: 0x3c01bdb2  lui         $at, 0xBDB2
    ctx->pc = 0x118070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48562 << 16));
    // 0x118074: 0x34217eb6  ori         $at, $at, 0x7EB6
    ctx->pc = 0x118074u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32438);
    // 0x118078: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11807c: 0x3c01bdc4  lui         $at, 0xBDC4
    ctx->pc = 0x11807cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48580 << 16));
    // 0x118080: 0x34214ac7  ori         $at, $at, 0x4AC7
    ctx->pc = 0x118080u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19143);
    // 0x118084: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x118084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x118088: 0xe4870188  swc1        $f7, 0x188($a0)
    ctx->pc = 0x118088u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x11808c: 0xe495018c  swc1        $f21, 0x18C($a0)
    ctx->pc = 0x11808cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 396), bits); }
    // 0x118090: 0xe4800190  swc1        $f0, 0x190($a0)
    ctx->pc = 0x118090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 400), bits); }
    // 0x118094: 0xe4840194  swc1        $f4, 0x194($a0)
    ctx->pc = 0x118094u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 404), bits); }
    // 0x118098: 0xe48b0738  swc1        $f11, 0x738($a0)
    ctx->pc = 0x118098u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1848), bits); }
    // 0x11809c: 0x3c01be5d  lui         $at, 0xBE5D
    ctx->pc = 0x11809cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48733 << 16));
    // 0x1180a0: 0x3421a259  ori         $at, $at, 0xA259
    ctx->pc = 0x1180a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41561);
    // 0x1180a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1180a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1180a8: 0xe4910750  swc1        $f17, 0x750($a0)
    ctx->pc = 0x1180a8u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1872), bits); }
    // 0x1180ac: 0x3c013f7b  lui         $at, 0x3F7B
    ctx->pc = 0x1180acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16251 << 16));
    // 0x1180b0: 0x3421b698  ori         $at, $at, 0xB698
    ctx->pc = 0x1180b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46744);
    // 0x1180b4: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1180b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1180b8: 0xe48001cc  swc1        $f0, 0x1CC($a0)
    ctx->pc = 0x1180b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 460), bits); }
    // 0x1180bc: 0x3c013f7b  lui         $at, 0x3F7B
    ctx->pc = 0x1180bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16251 << 16));
    // 0x1180c0: 0x34214beb  ori         $at, $at, 0x4BEB
    ctx->pc = 0x1180c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19435);
    // 0x1180c4: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x1180c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x1180c8: 0xe4930758  swc1        $f19, 0x758($a0)
    ctx->pc = 0x1180c8u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1880), bits); }
    // 0x1180cc: 0xe494075c  swc1        $f20, 0x75C($a0)
    ctx->pc = 0x1180ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1884), bits); }
    // 0x1180d0: 0xe4870760  swc1        $f7, 0x760($a0)
    ctx->pc = 0x1180d0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1888), bits); }
    // 0x1180d4: 0x3c013f79  lui         $at, 0x3F79
    ctx->pc = 0x1180d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16249 << 16));
    // 0x1180d8: 0x34217051  ori         $at, $at, 0x7051
    ctx->pc = 0x1180d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28753);
    // 0x1180dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1180dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1180e0: 0xe4910764  swc1        $f17, 0x764($a0)
    ctx->pc = 0x1180e0u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1892), bits); }
    // 0x1180e4: 0x3c01be66  lui         $at, 0xBE66
    ctx->pc = 0x1180e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48742 << 16));
    // 0x1180e8: 0x34215992  ori         $at, $at, 0x5992
    ctx->pc = 0x1180e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22930);
    // 0x1180ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1180ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1180f0: 0x3c01be6f  lui         $at, 0xBE6F
    ctx->pc = 0x1180f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48751 << 16));
    // 0x1180f4: 0x34210c4d  ori         $at, $at, 0xC4D
    ctx->pc = 0x1180f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3149);
    // 0x1180f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1180f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1180fc: 0x3c01be77  lui         $at, 0xBE77
    ctx->pc = 0x1180fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48759 << 16));
    // 0x118100: 0x3421ba60  ori         $at, $at, 0xBA60
    ctx->pc = 0x118100u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47712);
    // 0x118104: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x118104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x118108: 0x3c013f7a  lui         $at, 0x3F7A
    ctx->pc = 0x118108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16250 << 16));
    // 0x11810c: 0x3421dc58  ori         $at, $at, 0xDC58
    ctx->pc = 0x11810cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56408);
    // 0x118110: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x118110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x118114: 0x3c013f7a  lui         $at, 0x3F7A
    ctx->pc = 0x118114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16250 << 16));
    // 0x118118: 0x342167e2  ori         $at, $at, 0x67E2
    ctx->pc = 0x118118u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26594);
    // 0x11811c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11811cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x118120: 0x3c013f79  lui         $at, 0x3F79
    ctx->pc = 0x118120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16249 << 16));
    // 0x118124: 0x3421ee89  ori         $at, $at, 0xEE89
    ctx->pc = 0x118124u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61065);
    // 0x118128: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x118128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x11812c: 0x3c013f78  lui         $at, 0x3F78
    ctx->pc = 0x11812cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16248 << 16));
    // 0x118130: 0x3421ed3c  ori         $at, $at, 0xED3C
    ctx->pc = 0x118130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60732);
    // 0x118134: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x118134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x118138: 0x3c01bdd6  lui         $at, 0xBDD6
    ctx->pc = 0x118138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48598 << 16));
    // 0x11813c: 0x34211305  ori         $at, $at, 0x1305
    ctx->pc = 0x11813cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4869);
    // 0x118140: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x118140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x118144: 0xe4800774  swc1        $f0, 0x774($a0)
    ctx->pc = 0x118144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1908), bits); }
    // 0x118148: 0x3c01bde7  lui         $at, 0xBDE7
    ctx->pc = 0x118148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48615 << 16));
    // 0x11814c: 0x3421d716  ori         $at, $at, 0xD716
    ctx->pc = 0x11814cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55062);
    // 0x118150: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x118150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x118154: 0xe48c073c  swc1        $f12, 0x73C($a0)
    ctx->pc = 0x118154u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1852), bits); }
    // 0x118158: 0xe48d0740  swc1        $f13, 0x740($a0)
    ctx->pc = 0x118158u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1856), bits); }
    // 0x11815c: 0xe48e0744  swc1        $f14, 0x744($a0)
    ctx->pc = 0x11815cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1860), bits); }
    // 0x118160: 0xe48f0748  swc1        $f15, 0x748($a0)
    ctx->pc = 0x118160u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1864), bits); }
    // 0x118164: 0xe490074c  swc1        $f16, 0x74C($a0)
    ctx->pc = 0x118164u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1868), bits); }
    // 0x118168: 0xe4920754  swc1        $f18, 0x754($a0)
    ctx->pc = 0x118168u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1876), bits); }
    // 0x11816c: 0xe4930768  swc1        $f19, 0x768($a0)
    ctx->pc = 0x11816cu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1896), bits); }
    // 0x118170: 0xe494076c  swc1        $f20, 0x76C($a0)
    ctx->pc = 0x118170u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1900), bits); }
    // 0x118174: 0xe4950770  swc1        $f21, 0x770($a0)
    ctx->pc = 0x118174u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1904), bits); }
    // 0x118178: 0xe48101d0  swc1        $f1, 0x1D0($a0)
    ctx->pc = 0x118178u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 464), bits); }
    // 0x11817c: 0xe48201d4  swc1        $f2, 0x1D4($a0)
    ctx->pc = 0x11817cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 468), bits); }
    // 0x118180: 0xe4840778  swc1        $f4, 0x778($a0)
    ctx->pc = 0x118180u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1912), bits); }
    // 0x118184: 0xe48301d8  swc1        $f3, 0x1D8($a0)
    ctx->pc = 0x118184u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 472), bits); }
    // 0x118188: 0xe4870198  swc1        $f7, 0x198($a0)
    ctx->pc = 0x118188u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 408), bits); }
    // 0x11818c: 0x3c01be17  lui         $at, 0xBE17
    ctx->pc = 0x11818cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48663 << 16));
    // 0x118190: 0x34215b5a  ori         $at, $at, 0x5B5A
    ctx->pc = 0x118190u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23386);
    // 0x118194: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118198: 0xe491019c  swc1        $f17, 0x19C($a0)
    ctx->pc = 0x118198u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 412), bits); }
    // 0x11819c: 0x3c01bdf9  lui         $at, 0xBDF9
    ctx->pc = 0x11819cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48633 << 16));
    // 0x1181a0: 0x342196a2  ori         $at, $at, 0x96A2
    ctx->pc = 0x1181a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38562);
    // 0x1181a4: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x1181a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x1181a8: 0x3c01be05  lui         $at, 0xBE05
    ctx->pc = 0x1181a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48645 << 16));
    // 0x1181ac: 0x3421a8a8  ori         $at, $at, 0xA8A8
    ctx->pc = 0x1181acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43176);
    // 0x1181b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1181b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1181b4: 0x3c01be0e  lui         $at, 0xBE0E
    ctx->pc = 0x1181b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48654 << 16));
    // 0x1181b8: 0x34218365  ori         $at, $at, 0x8365
    ctx->pc = 0x1181b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33637);
    // 0x1181bc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1181bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1181c0: 0xe48001ac  swc1        $f0, 0x1AC($a0)
    ctx->pc = 0x1181c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 428), bits); }
    // 0x1181c4: 0x3c01be31  lui         $at, 0xBE31
    ctx->pc = 0x1181c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48689 << 16));
    // 0x1181c8: 0x3421d0d4  ori         $at, $at, 0xD0D4
    ctx->pc = 0x1181c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53460);
    // 0x1181cc: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x1181ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x1181d0: 0xe49301a0  swc1        $f19, 0x1A0($a0)
    ctx->pc = 0x1181d0u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x1181d4: 0xe49401a4  swc1        $f20, 0x1A4($a0)
    ctx->pc = 0x1181d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
    // 0x1181d8: 0xe49501a8  swc1        $f21, 0x1A8($a0)
    ctx->pc = 0x1181d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x1181dc: 0x3c01be54  lui         $at, 0xBE54
    ctx->pc = 0x1181dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48724 << 16));
    // 0x1181e0: 0x3421e6cd  ori         $at, $at, 0xE6CD
    ctx->pc = 0x1181e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59085);
    // 0x1181e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1181e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1181e8: 0xe49101b8  swc1        $f17, 0x1B8($a0)
    ctx->pc = 0x1181e8u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 440), bits); }
    // 0x1181ec: 0x3c01be20  lui         $at, 0xBE20
    ctx->pc = 0x1181ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48672 << 16));
    // 0x1181f0: 0x3421305b  ori         $at, $at, 0x305B
    ctx->pc = 0x1181f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12379);
    // 0x1181f4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1181f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1181f8: 0x3c01be29  lui         $at, 0xBE29
    ctx->pc = 0x1181f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48681 << 16));
    // 0x1181fc: 0x3421023d  ori         $at, $at, 0x23D
    ctx->pc = 0x1181fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)573);
    // 0x118200: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x118200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x118204: 0x3c01be3a  lui         $at, 0xBE3A
    ctx->pc = 0x118204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48698 << 16));
    // 0x118208: 0x34219bf3  ori         $at, $at, 0x9BF3
    ctx->pc = 0x118208u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39923);
    // 0x11820c: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x11820cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x118210: 0x3c01be43  lui         $at, 0xBE43
    ctx->pc = 0x118210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48707 << 16));
    // 0x118214: 0x3421636f  ori         $at, $at, 0x636F
    ctx->pc = 0x118214u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25455);
    // 0x118218: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x118218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11821c: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x11821cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x118220: 0x3421271c  ori         $at, $at, 0x271C
    ctx->pc = 0x118220u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10012);
    // 0x118224: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x118224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x118228: 0xe48001c8  swc1        $f0, 0x1C8($a0)
    ctx->pc = 0x118228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 456), bits); }
    // 0x11822c: 0x3c013f78  lui         $at, 0x3F78
    ctx->pc = 0x11822cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16248 << 16));
    // 0x118230: 0x3421654d  ori         $at, $at, 0x654D
    ctx->pc = 0x118230u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25933);
    // 0x118234: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x118234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x118238: 0xe48401b0  swc1        $f4, 0x1B0($a0)
    ctx->pc = 0x118238u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 432), bits); }
    // 0x11823c: 0xe48701b4  swc1        $f7, 0x1B4($a0)
    ctx->pc = 0x11823cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 436), bits); }
    // 0x118240: 0xe49301bc  swc1        $f19, 0x1BC($a0)
    ctx->pc = 0x118240u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 444), bits); }
    // 0x118244: 0xe49401c0  swc1        $f20, 0x1C0($a0)
    ctx->pc = 0x118244u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 448), bits); }
    // 0x118248: 0xe49501c4  swc1        $f21, 0x1C4($a0)
    ctx->pc = 0x118248u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 452), bits); }
    // 0x11824c: 0x3c01be80  lui         $at, 0xBE80
    ctx->pc = 0x11824cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48768 << 16));
    // 0x118250: 0x342131cf  ori         $at, $at, 0x31CF
    ctx->pc = 0x118250u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12751);
    // 0x118254: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118258: 0xe491077c  swc1        $f17, 0x77C($a0)
    ctx->pc = 0x118258u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1916), bits); }
    // 0x11825c: 0x3c01be91  lui         $at, 0xBE91
    ctx->pc = 0x11825cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48785 << 16));
    // 0x118260: 0x34216a76  ori         $at, $at, 0x6A76
    ctx->pc = 0x118260u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27254);
    // 0x118264: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x118264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x118268: 0xe48001dc  swc1        $f0, 0x1DC($a0)
    ctx->pc = 0x118268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 476), bits); }
    // 0x11826c: 0xe48401ec  swc1        $f4, 0x1EC($a0)
    ctx->pc = 0x11826cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 492), bits); }
    // 0x118270: 0x3c013f77  lui         $at, 0x3F77
    ctx->pc = 0x118270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16247 << 16));
    // 0x118274: 0x3421d886  ori         $at, $at, 0xD886
    ctx->pc = 0x118274u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55430);
    // 0x118278: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x118278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x11827c: 0x3c013f77  lui         $at, 0x3F77
    ctx->pc = 0x11827cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16247 << 16));
    // 0x118280: 0x342146ea  ori         $at, $at, 0x46EA
    ctx->pc = 0x118280u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18154);
    // 0x118284: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x118284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x118288: 0x3c013f76  lui         $at, 0x3F76
    ctx->pc = 0x118288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16246 << 16));
    // 0x11828c: 0x3421b07c  ori         $at, $at, 0xB07C
    ctx->pc = 0x11828cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45180);
    // 0x118290: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x118290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x118294: 0x3c013f76  lui         $at, 0x3F76
    ctx->pc = 0x118294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16246 << 16));
    // 0x118298: 0x3421153f  ori         $at, $at, 0x153F
    ctx->pc = 0x118298u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5439);
    // 0x11829c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11829cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1182a0: 0x3c013f75  lui         $at, 0x3F75
    ctx->pc = 0x1182a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16245 << 16));
    // 0x1182a4: 0x34217536  ori         $at, $at, 0x7536
    ctx->pc = 0x1182a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30006);
    // 0x1182a8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1182a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1182ac: 0xe4930780  swc1        $f19, 0x780($a0)
    ctx->pc = 0x1182acu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1920), bits); }
    // 0x1182b0: 0xe4940784  swc1        $f20, 0x784($a0)
    ctx->pc = 0x1182b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1924), bits); }
    // 0x1182b4: 0xe4950788  swc1        $f21, 0x788($a0)
    ctx->pc = 0x1182b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1928), bits); }
    // 0x1182b8: 0xe480078c  swc1        $f0, 0x78C($a0)
    ctx->pc = 0x1182b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1932), bits); }
    // 0x1182bc: 0x3c013f74  lui         $at, 0x3F74
    ctx->pc = 0x1182bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16244 << 16));
    // 0x1182c0: 0x3421d063  ori         $at, $at, 0xD063
    ctx->pc = 0x1182c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53347);
    // 0x1182c4: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x1182c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x1182c8: 0xe4840790  swc1        $f4, 0x790($a0)
    ctx->pc = 0x1182c8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1936), bits); }
    // 0x1182cc: 0x3c01be84  lui         $at, 0xBE84
    ctx->pc = 0x1182ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48772 << 16));
    // 0x1182d0: 0x342183ee  ori         $at, $at, 0x83EE
    ctx->pc = 0x1182d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33774);
    // 0x1182d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1182d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1182d8: 0x3c01be88  lui         $at, 0xBE88
    ctx->pc = 0x1182d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48776 << 16));
    // 0x1182dc: 0x3421d378  ori         $at, $at, 0xD378
    ctx->pc = 0x1182dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54136);
    // 0x1182e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1182e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1182e4: 0x3c01be8d  lui         $at, 0xBE8D
    ctx->pc = 0x1182e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48781 << 16));
    // 0x1182e8: 0x34212057  ori         $at, $at, 0x2057
    ctx->pc = 0x1182e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8279);
    // 0x1182ec: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1182ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1182f0: 0x3c01be95  lui         $at, 0xBE95
    ctx->pc = 0x1182f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48789 << 16));
    // 0x1182f4: 0x3421b1be  ori         $at, $at, 0xB1BE
    ctx->pc = 0x1182f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45502);
    // 0x1182f8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1182f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1182fc: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x1182fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x118300: 0x3421f61c  ori         $at, $at, 0xF61C
    ctx->pc = 0x118300u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63004);
    // 0x118304: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x118304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x118308: 0x3c01be9e  lui         $at, 0xBE9E
    ctx->pc = 0x118308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48798 << 16));
    // 0x11830c: 0x3421377a  ori         $at, $at, 0x377A
    ctx->pc = 0x11830cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14202);
    // 0x118310: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x118310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x118314: 0x3c01bea2  lui         $at, 0xBEA2
    ctx->pc = 0x118314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48802 << 16));
    // 0x118318: 0x342175c2  ori         $at, $at, 0x75C2
    ctx->pc = 0x118318u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30146);
    // 0x11831c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x11831cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x118320: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x118320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x118324: 0x3421b0de  ori         $at, $at, 0xB0DE
    ctx->pc = 0x118324u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45278);
    // 0x118328: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x118328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x11832c: 0x3c01beaa  lui         $at, 0xBEAA
    ctx->pc = 0x11832cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48810 << 16));
    // 0x118330: 0x3421e8bc  ori         $at, $at, 0xE8BC
    ctx->pc = 0x118330u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59580);
    // 0x118334: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x118334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x118338: 0x3c013f74  lui         $at, 0x3F74
    ctx->pc = 0x118338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16244 << 16));
    // 0x11833c: 0x342126cb  ori         $at, $at, 0x26CB
    ctx->pc = 0x11833cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9931);
    // 0x118340: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x118340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x118344: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x118344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
    // 0x118348: 0x34217871  ori         $at, $at, 0x7871
    ctx->pc = 0x118348u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30833);
    // 0x11834c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11834cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x118350: 0x3c013f72  lui         $at, 0x3F72
    ctx->pc = 0x118350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16242 << 16));
    // 0x118354: 0x3421c557  ori         $at, $at, 0xC557
    ctx->pc = 0x118354u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50519);
    // 0x118358: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x118358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x11835c: 0x3c013f72  lui         $at, 0x3F72
    ctx->pc = 0x11835cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16242 << 16));
    // 0x118360: 0x34210d81  ori         $at, $at, 0xD81
    ctx->pc = 0x118360u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3457);
    // 0x118364: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118368: 0xe4910794  swc1        $f17, 0x794($a0)
    ctx->pc = 0x118368u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1940), bits); }
    // 0x11836c: 0x3c013f71  lui         $at, 0x3F71
    ctx->pc = 0x11836cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16241 << 16));
    // 0x118370: 0x342150f4  ori         $at, $at, 0x50F4
    ctx->pc = 0x118370u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20724);
    // 0x118374: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x118374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x118378: 0xe48101e0  swc1        $f1, 0x1E0($a0)
    ctx->pc = 0x118378u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 480), bits); }
    // 0x11837c: 0xe48201e4  swc1        $f2, 0x1E4($a0)
    ctx->pc = 0x11837cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 484), bits); }
    // 0x118380: 0xe48301e8  swc1        $f3, 0x1E8($a0)
    ctx->pc = 0x118380u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 488), bits); }
    // 0x118384: 0xe48501f0  swc1        $f5, 0x1F0($a0)
    ctx->pc = 0x118384u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 496), bits); }
    // 0x118388: 0xe48601f4  swc1        $f6, 0x1F4($a0)
    ctx->pc = 0x118388u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 500), bits); }
    // 0x11838c: 0xe4930798  swc1        $f19, 0x798($a0)
    ctx->pc = 0x11838cu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1944), bits); }
    // 0x118390: 0xe48701f8  swc1        $f7, 0x1F8($a0)
    ctx->pc = 0x118390u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 504), bits); }
    // 0x118394: 0xe494079c  swc1        $f20, 0x79C($a0)
    ctx->pc = 0x118394u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1948), bits); }
    // 0x118398: 0xe48801fc  swc1        $f8, 0x1FC($a0)
    ctx->pc = 0x118398u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 508), bits); }
    // 0x11839c: 0xe49507a0  swc1        $f21, 0x7A0($a0)
    ctx->pc = 0x11839cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1952), bits); }
    // 0x1183a0: 0xe4890200  swc1        $f9, 0x200($a0)
    ctx->pc = 0x1183a0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 512), bits); }
    // 0x1183a4: 0xe48007a4  swc1        $f0, 0x7A4($a0)
    ctx->pc = 0x1183a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1956), bits); }
    // 0x1183a8: 0xe48a0204  swc1        $f10, 0x204($a0)
    ctx->pc = 0x1183a8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 516), bits); }
    // 0x1183ac: 0x3c013f6f  lui         $at, 0x3F6F
    ctx->pc = 0x1183acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16239 << 16));
    // 0x1183b0: 0x3421c9c0  ori         $at, $at, 0xC9C0
    ctx->pc = 0x1183b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51648);
    // 0x1183b4: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x1183b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x1183b8: 0xe48407a8  swc1        $f4, 0x7A8($a0)
    ctx->pc = 0x1183b8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1960), bits); }
    // 0x1183bc: 0xe49107b0  swc1        $f17, 0x7B0($a0)
    ctx->pc = 0x1183bcu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1968), bits); }
    // 0x1183c0: 0x3c01beaf  lui         $at, 0xBEAF
    ctx->pc = 0x1183c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48815 << 16));
    // 0x1183c4: 0x34211d44  ori         $at, $at, 0x1D44
    ctx->pc = 0x1183c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7492);
    // 0x1183c8: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1183c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x1183cc: 0x3c01beb3  lui         $at, 0xBEB3
    ctx->pc = 0x1183ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48819 << 16));
    // 0x1183d0: 0x34214e62  ori         $at, $at, 0x4E62
    ctx->pc = 0x1183d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20066);
    // 0x1183d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1183d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1183d8: 0x3c01beb7  lui         $at, 0xBEB7
    ctx->pc = 0x1183d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48823 << 16));
    // 0x1183dc: 0x34217c01  ori         $at, $at, 0x7C01
    ctx->pc = 0x1183dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31745);
    // 0x1183e0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1183e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1183e4: 0x3c01bebb  lui         $at, 0xBEBB
    ctx->pc = 0x1183e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48827 << 16));
    // 0x1183e8: 0x3421a60c  ori         $at, $at, 0xA60C
    ctx->pc = 0x1183e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42508);
    // 0x1183ec: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1183ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1183f0: 0x3c01bebf  lui         $at, 0xBEBF
    ctx->pc = 0x1183f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48831 << 16));
    // 0x1183f4: 0x3421cc6f  ori         $at, $at, 0xCC6F
    ctx->pc = 0x1183f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52335);
    // 0x1183f8: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1183f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1183fc: 0x3c01bec3  lui         $at, 0xBEC3
    ctx->pc = 0x1183fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48835 << 16));
    // 0x118400: 0x3421ef15  ori         $at, $at, 0xEF15
    ctx->pc = 0x118400u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61205);
    // 0x118404: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x118404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x118408: 0x3c013f70  lui         $at, 0x3F70
    ctx->pc = 0x118408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16240 << 16));
    // 0x11840c: 0x34218fb2  ori         $at, $at, 0x8FB2
    ctx->pc = 0x11840cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36786);
    // 0x118410: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x118410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x118414: 0x3c013f6e  lui         $at, 0x3F6E
    ctx->pc = 0x118414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16238 << 16));
    // 0x118418: 0x3421ff20  ori         $at, $at, 0xFF20
    ctx->pc = 0x118418u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65312);
    // 0x11841c: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x11841cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x118420: 0x3c013f6e  lui         $at, 0x3F6E
    ctx->pc = 0x118420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16238 << 16));
    // 0x118424: 0x34212fd9  ori         $at, $at, 0x2FD9
    ctx->pc = 0x118424u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12249);
    // 0x118428: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x118428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11842c: 0x3c013f6d  lui         $at, 0x3F6D
    ctx->pc = 0x11842cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16237 << 16));
    // 0x118430: 0x34215bec  ori         $at, $at, 0x5BEC
    ctx->pc = 0x118430u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23532);
    // 0x118434: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x118434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x118438: 0x3c013f6c  lui         $at, 0x3F6C
    ctx->pc = 0x118438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16236 << 16));
    // 0x11843c: 0x3421835e  ori         $at, $at, 0x835E
    ctx->pc = 0x11843cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33630);
    // 0x118440: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x118440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x118444: 0xe48b0208  swc1        $f11, 0x208($a0)
    ctx->pc = 0x118444u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 520), bits); }
    // 0x118448: 0xe48707ac  swc1        $f7, 0x7AC($a0)
    ctx->pc = 0x118448u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1964), bits); }
    // 0x11844c: 0xe48c020c  swc1        $f12, 0x20C($a0)
    ctx->pc = 0x11844cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 524), bits); }
    // 0x118450: 0xe48d0210  swc1        $f13, 0x210($a0)
    ctx->pc = 0x118450u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 528), bits); }
    // 0x118454: 0xe49307b4  swc1        $f19, 0x7B4($a0)
    ctx->pc = 0x118454u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1972), bits); }
    // 0x118458: 0xe48e0214  swc1        $f14, 0x214($a0)
    ctx->pc = 0x118458u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 532), bits); }
    // 0x11845c: 0xe49407b8  swc1        $f20, 0x7B8($a0)
    ctx->pc = 0x11845cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1976), bits); }
    // 0x118460: 0xe48f0218  swc1        $f15, 0x218($a0)
    ctx->pc = 0x118460u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 536), bits); }
    // 0x118464: 0xe49507bc  swc1        $f21, 0x7BC($a0)
    ctx->pc = 0x118464u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1980), bits); }
    // 0x118468: 0xe490021c  swc1        $f16, 0x21C($a0)
    ctx->pc = 0x118468u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 540), bits); }
    // 0x11846c: 0x3c01bec8  lui         $at, 0xBEC8
    ctx->pc = 0x11846cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48840 << 16));
    // 0x118470: 0x34210de9  ori         $at, $at, 0xDE9
    ctx->pc = 0x118470u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3561);
    // 0x118474: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118478: 0xe49107c0  swc1        $f17, 0x7C0($a0)
    ctx->pc = 0x118478u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1984), bits); }
    // 0x11847c: 0x3c01bed8  lui         $at, 0xBED8
    ctx->pc = 0x11847cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48856 << 16));
    // 0x118480: 0x3421616c  ori         $at, $at, 0x616C
    ctx->pc = 0x118480u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24940);
    // 0x118484: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x118484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x118488: 0xe4800220  swc1        $f0, 0x220($a0)
    ctx->pc = 0x118488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 544), bits); }
    // 0x11848c: 0xe4840230  swc1        $f4, 0x230($a0)
    ctx->pc = 0x11848cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 560), bits); }
    // 0x118490: 0x3c013f6b  lui         $at, 0x3F6B
    ctx->pc = 0x118490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16235 << 16));
    // 0x118494: 0x3421a635  ori         $at, $at, 0xA635
    ctx->pc = 0x118494u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42549);
    // 0x118498: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x118498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x11849c: 0x3c013f6a  lui         $at, 0x3F6A
    ctx->pc = 0x11849cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16234 << 16));
    // 0x1184a0: 0x3421c473  ori         $at, $at, 0xC473
    ctx->pc = 0x1184a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50291);
    // 0x1184a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1184a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1184a8: 0x3c013f69  lui         $at, 0x3F69
    ctx->pc = 0x1184a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16233 << 16));
    // 0x1184ac: 0x3421de1d  ori         $at, $at, 0xDE1D
    ctx->pc = 0x1184acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56861);
    // 0x1184b0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1184b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1184b4: 0x3c013f68  lui         $at, 0x3F68
    ctx->pc = 0x1184b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16232 << 16));
    // 0x1184b8: 0x3421f339  ori         $at, $at, 0xF339
    ctx->pc = 0x1184b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62265);
    // 0x1184bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1184bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1184c0: 0x3c013f68  lui         $at, 0x3F68
    ctx->pc = 0x1184c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16232 << 16));
    // 0x1184c4: 0x342103ca  ori         $at, $at, 0x3CA
    ctx->pc = 0x1184c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)970);
    // 0x1184c8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1184c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1184cc: 0xe49307c4  swc1        $f19, 0x7C4($a0)
    ctx->pc = 0x1184ccu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1988), bits); }
    // 0x1184d0: 0xe49407c8  swc1        $f20, 0x7C8($a0)
    ctx->pc = 0x1184d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1992), bits); }
    // 0x1184d4: 0xe49507cc  swc1        $f21, 0x7CC($a0)
    ctx->pc = 0x1184d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1996), bits); }
    // 0x1184d8: 0xe48007d0  swc1        $f0, 0x7D0($a0)
    ctx->pc = 0x1184d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2000), bits); }
    // 0x1184dc: 0x3c013f67  lui         $at, 0x3F67
    ctx->pc = 0x1184dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16231 << 16));
    // 0x1184e0: 0x34210fd4  ori         $at, $at, 0xFD4
    ctx->pc = 0x1184e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4052);
    // 0x1184e4: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x1184e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x1184e8: 0xe48407d4  swc1        $f4, 0x7D4($a0)
    ctx->pc = 0x1184e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2004), bits); }
    // 0x1184ec: 0x3c01becc  lui         $at, 0xBECC
    ctx->pc = 0x1184ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48844 << 16));
    // 0x1184f0: 0x342128d7  ori         $at, $at, 0x28D7
    ctx->pc = 0x1184f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10455);
    // 0x1184f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1184f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1184f8: 0x3c01bed0  lui         $at, 0xBED0
    ctx->pc = 0x1184f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48848 << 16));
    // 0x1184fc: 0x34213fc9  ori         $at, $at, 0x3FC9
    ctx->pc = 0x1184fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16329);
    // 0x118500: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x118500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x118504: 0x3c01bed4  lui         $at, 0xBED4
    ctx->pc = 0x118504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48852 << 16));
    // 0x118508: 0x342152ac  ori         $at, $at, 0x52AC
    ctx->pc = 0x118508u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21164);
    // 0x11850c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x11850cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x118510: 0x3c01bedc  lui         $at, 0xBEDC
    ctx->pc = 0x118510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48860 << 16));
    // 0x118514: 0x34216bf3  ori         $at, $at, 0x6BF3
    ctx->pc = 0x118514u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27635);
    // 0x118518: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x118518u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x11851c: 0x3c01bee0  lui         $at, 0xBEE0
    ctx->pc = 0x11851cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48864 << 16));
    // 0x118520: 0x3421722f  ori         $at, $at, 0x722F
    ctx->pc = 0x118520u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29231);
    // 0x118524: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x118524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x118528: 0x3c01bee4  lui         $at, 0xBEE4
    ctx->pc = 0x118528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48868 << 16));
    // 0x11852c: 0x3421740a  ori         $at, $at, 0x740A
    ctx->pc = 0x11852cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29706);
    // 0x118530: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x118530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x118534: 0x3c01bee8  lui         $at, 0xBEE8
    ctx->pc = 0x118534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48872 << 16));
    // 0x118538: 0x34217171  ori         $at, $at, 0x7171
    ctx->pc = 0x118538u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29041);
    // 0x11853c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x11853cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x118540: 0x3c01beec  lui         $at, 0xBEEC
    ctx->pc = 0x118540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48876 << 16));
    // 0x118544: 0x34216a50  ori         $at, $at, 0x6A50
    ctx->pc = 0x118544u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27216);
    // 0x118548: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x118548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x11854c: 0x3c01bef0  lui         $at, 0xBEF0
    ctx->pc = 0x11854cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48880 << 16));
    // 0x118550: 0x34215e94  ori         $at, $at, 0x5E94
    ctx->pc = 0x118550u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24212);
    // 0x118554: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x118554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x118558: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x118558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x11855c: 0x3421175e  ori         $at, $at, 0x175E
    ctx->pc = 0x11855cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5982);
    // 0x118560: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x118560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x118564: 0x3c013f65  lui         $at, 0x3F65
    ctx->pc = 0x118564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16229 << 16));
    // 0x118568: 0x34211a6b  ori         $at, $at, 0x1A6B
    ctx->pc = 0x118568u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6763);
    // 0x11856c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11856cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x118570: 0x3c013f64  lui         $at, 0x3F64
    ctx->pc = 0x118570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16228 << 16));
    // 0x118574: 0x34211901  ori         $at, $at, 0x1901
    ctx->pc = 0x118574u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6401);
    // 0x118578: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x118578u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x11857c: 0x3c013f63  lui         $at, 0x3F63
    ctx->pc = 0x11857cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16227 << 16));
    // 0x118580: 0x34211324  ori         $at, $at, 0x1324
    ctx->pc = 0x118580u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4900);
    // 0x118584: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118588: 0xe49107d8  swc1        $f17, 0x7D8($a0)
    ctx->pc = 0x118588u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2008), bits); }
    // 0x11858c: 0x3c013f62  lui         $at, 0x3F62
    ctx->pc = 0x11858cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16226 << 16));
    // 0x118590: 0x342108da  ori         $at, $at, 0x8DA
    ctx->pc = 0x118590u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2266);
    // 0x118594: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x118594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x118598: 0xe4810224  swc1        $f1, 0x224($a0)
    ctx->pc = 0x118598u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 548), bits); }
    // 0x11859c: 0xe4820228  swc1        $f2, 0x228($a0)
    ctx->pc = 0x11859cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 552), bits); }
    // 0x1185a0: 0xe483022c  swc1        $f3, 0x22C($a0)
    ctx->pc = 0x1185a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 556), bits); }
    // 0x1185a4: 0xe4850234  swc1        $f5, 0x234($a0)
    ctx->pc = 0x1185a4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 564), bits); }
    // 0x1185a8: 0xe4860238  swc1        $f6, 0x238($a0)
    ctx->pc = 0x1185a8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 568), bits); }
    // 0x1185ac: 0xe49307dc  swc1        $f19, 0x7DC($a0)
    ctx->pc = 0x1185acu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2012), bits); }
    // 0x1185b0: 0xe487023c  swc1        $f7, 0x23C($a0)
    ctx->pc = 0x1185b0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 572), bits); }
    // 0x1185b4: 0xe49407e0  swc1        $f20, 0x7E0($a0)
    ctx->pc = 0x1185b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2016), bits); }
    // 0x1185b8: 0xe4880240  swc1        $f8, 0x240($a0)
    ctx->pc = 0x1185b8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 576), bits); }
    // 0x1185bc: 0xe49507e4  swc1        $f21, 0x7E4($a0)
    ctx->pc = 0x1185bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2020), bits); }
    // 0x1185c0: 0xe4890244  swc1        $f9, 0x244($a0)
    ctx->pc = 0x1185c0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 580), bits); }
    // 0x1185c4: 0xe48007e8  swc1        $f0, 0x7E8($a0)
    ctx->pc = 0x1185c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2024), bits); }
    // 0x1185c8: 0xe48a0248  swc1        $f10, 0x248($a0)
    ctx->pc = 0x1185c8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 584), bits); }
    // 0x1185cc: 0x3c013f5f  lui         $at, 0x3F5F
    ctx->pc = 0x1185ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16223 << 16));
    // 0x1185d0: 0x3421e714  ori         $at, $at, 0xE714
    ctx->pc = 0x1185d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59156);
    // 0x1185d4: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x1185d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x1185d8: 0xe48407ec  swc1        $f4, 0x7EC($a0)
    ctx->pc = 0x1185d8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2028), bits); }
    // 0x1185dc: 0xe49107f4  swc1        $f17, 0x7F4($a0)
    ctx->pc = 0x1185dcu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2036), bits); }
    // 0x1185e0: 0x3c01bef4  lui         $at, 0xBEF4
    ctx->pc = 0x1185e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48884 << 16));
    // 0x1185e4: 0x34214e27  ori         $at, $at, 0x4E27
    ctx->pc = 0x1185e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20007);
    // 0x1185e8: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1185e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x1185ec: 0x3c01bef8  lui         $at, 0xBEF8
    ctx->pc = 0x1185ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48888 << 16));
    // 0x1185f0: 0x342138f7  ori         $at, $at, 0x38F7
    ctx->pc = 0x1185f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14583);
    // 0x1185f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1185f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1185f8: 0x3c01befc  lui         $at, 0xBEFC
    ctx->pc = 0x1185f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48892 << 16));
    // 0x1185fc: 0x34211ef1  ori         $at, $at, 0x1EF1
    ctx->pc = 0x1185fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7921);
    // 0x118600: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x118600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x118604: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x118604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x118608: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x118608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x11860c: 0x3c01bf01  lui         $at, 0xBF01
    ctx->pc = 0x11860cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48897 << 16));
    // 0x118610: 0x3421ee09  ori         $at, $at, 0xEE09
    ctx->pc = 0x118610u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60937);
    // 0x118614: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x118614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x118618: 0x3c01bf03  lui         $at, 0xBF03
    ctx->pc = 0x118618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48899 << 16));
    // 0x11861c: 0x3421d989  ori         $at, $at, 0xD989
    ctx->pc = 0x11861cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55689);
    // 0x118620: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x118620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x118624: 0x3c013f60  lui         $at, 0x3F60
    ctx->pc = 0x118624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16224 << 16));
    // 0x118628: 0x3421fa29  ori         $at, $at, 0xFA29
    ctx->pc = 0x118628u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64041);
    // 0x11862c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x11862cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x118630: 0x3c013f5e  lui         $at, 0x3F5E
    ctx->pc = 0x118630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16222 << 16));
    // 0x118634: 0x3421cfa2  ori         $at, $at, 0xCFA2
    ctx->pc = 0x118634u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53154);
    // 0x118638: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x118638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x11863c: 0x3c013f5d  lui         $at, 0x3F5D
    ctx->pc = 0x11863cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16221 << 16));
    // 0x118640: 0x3421b3d7  ori         $at, $at, 0xB3D7
    ctx->pc = 0x118640u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46039);
    // 0x118644: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x118644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x118648: 0x3c013f5c  lui         $at, 0x3F5C
    ctx->pc = 0x118648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16220 << 16));
    // 0x11864c: 0x342193bb  ori         $at, $at, 0x93BB
    ctx->pc = 0x11864cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37819);
    // 0x118650: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x118650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x118654: 0x3c013f5b  lui         $at, 0x3F5B
    ctx->pc = 0x118654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16219 << 16));
    // 0x118658: 0x34216f51  ori         $at, $at, 0x6F51
    ctx->pc = 0x118658u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28497);
    // 0x11865c: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x11865cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x118660: 0xe48b024c  swc1        $f11, 0x24C($a0)
    ctx->pc = 0x118660u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 588), bits); }
    // 0x118664: 0xe48707f0  swc1        $f7, 0x7F0($a0)
    ctx->pc = 0x118664u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2032), bits); }
    // 0x118668: 0xe48c0250  swc1        $f12, 0x250($a0)
    ctx->pc = 0x118668u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 592), bits); }
    // 0x11866c: 0xe48d0254  swc1        $f13, 0x254($a0)
    ctx->pc = 0x11866cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 596), bits); }
    // 0x118670: 0xe49307f8  swc1        $f19, 0x7F8($a0)
    ctx->pc = 0x118670u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2040), bits); }
    // 0x118674: 0xe48e0258  swc1        $f14, 0x258($a0)
    ctx->pc = 0x118674u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 600), bits); }
    // 0x118678: 0xe49407fc  swc1        $f20, 0x7FC($a0)
    ctx->pc = 0x118678u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2044), bits); }
    // 0x11867c: 0xe48f025c  swc1        $f15, 0x25C($a0)
    ctx->pc = 0x11867cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 604), bits); }
    // 0x118680: 0xe4950800  swc1        $f21, 0x800($a0)
    ctx->pc = 0x118680u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2048), bits); }
    // 0x118684: 0xe4900260  swc1        $f16, 0x260($a0)
    ctx->pc = 0x118684u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 608), bits); }
    // 0x118688: 0x3c01bf05  lui         $at, 0xBF05
    ctx->pc = 0x118688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48901 << 16));
    // 0x11868c: 0x3421c277  ori         $at, $at, 0xC277
    ctx->pc = 0x11868cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49783);
    // 0x118690: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118694: 0xe4910804  swc1        $f17, 0x804($a0)
    ctx->pc = 0x118694u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2052), bits); }
    // 0x118698: 0x3c01bf0d  lui         $at, 0xBF0D
    ctx->pc = 0x118698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48909 << 16));
    // 0x11869c: 0x34214bbe  ori         $at, $at, 0x4BBE
    ctx->pc = 0x11869cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19390);
    // 0x1186a0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1186a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1186a4: 0xe4800264  swc1        $f0, 0x264($a0)
    ctx->pc = 0x1186a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 612), bits); }
    // 0x1186a8: 0xe4840274  swc1        $f4, 0x274($a0)
    ctx->pc = 0x1186a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 628), bits); }
    // 0x1186ac: 0x3c013f5a  lui         $at, 0x3F5A
    ctx->pc = 0x1186acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16218 << 16));
    // 0x1186b0: 0x342146a0  ori         $at, $at, 0x46A0
    ctx->pc = 0x1186b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18080);
    // 0x1186b4: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x1186b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x1186b8: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x1186b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
    // 0x1186bc: 0x342119ae  ori         $at, $at, 0x19AE
    ctx->pc = 0x1186bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6574);
    // 0x1186c0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1186c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1186c4: 0x3c013f57  lui         $at, 0x3F57
    ctx->pc = 0x1186c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16215 << 16));
    // 0x1186c8: 0x3421e880  ori         $at, $at, 0xE880
    ctx->pc = 0x1186c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59520);
    // 0x1186cc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1186ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1186d0: 0x3c013f56  lui         $at, 0x3F56
    ctx->pc = 0x1186d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16214 << 16));
    // 0x1186d4: 0x3421b31d  ori         $at, $at, 0xB31D
    ctx->pc = 0x1186d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45853);
    // 0x1186d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1186d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1186dc: 0x3c013f55  lui         $at, 0x3F55
    ctx->pc = 0x1186dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16213 << 16));
    // 0x1186e0: 0x3421798b  ori         $at, $at, 0x798B
    ctx->pc = 0x1186e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31115);
    // 0x1186e4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1186e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1186e8: 0xe4930808  swc1        $f19, 0x808($a0)
    ctx->pc = 0x1186e8u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2056), bits); }
    // 0x1186ec: 0xe494080c  swc1        $f20, 0x80C($a0)
    ctx->pc = 0x1186ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2060), bits); }
    // 0x1186f0: 0xe4950810  swc1        $f21, 0x810($a0)
    ctx->pc = 0x1186f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2064), bits); }
    // 0x1186f4: 0xe4800814  swc1        $f0, 0x814($a0)
    ctx->pc = 0x1186f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2068), bits); }
    // 0x1186f8: 0x3c013f54  lui         $at, 0x3F54
    ctx->pc = 0x1186f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16212 << 16));
    // 0x1186fc: 0x34213bce  ori         $at, $at, 0x3BCE
    ctx->pc = 0x1186fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15310);
    // 0x118700: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x118700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x118704: 0xe4840818  swc1        $f4, 0x818($a0)
    ctx->pc = 0x118704u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2072), bits); }
    // 0x118708: 0x3c01bf07  lui         $at, 0xBF07
    ctx->pc = 0x118708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48903 << 16));
    // 0x11870c: 0x3421a8ca  ori         $at, $at, 0xA8CA
    ctx->pc = 0x11870cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43210);
    // 0x118710: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x118710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x118714: 0x3c01bf09  lui         $at, 0xBF09
    ctx->pc = 0x118714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48905 << 16));
    // 0x118718: 0x34218c78  ori         $at, $at, 0x8C78
    ctx->pc = 0x118718u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35960);
    // 0x11871c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11871cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x118720: 0x3c01bf0b  lui         $at, 0xBF0B
    ctx->pc = 0x118720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48907 << 16));
    // 0x118724: 0x34216d77  ori         $at, $at, 0x6D77
    ctx->pc = 0x118724u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28023);
    // 0x118728: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x118728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11872c: 0x3c01bf0f  lui         $at, 0xBF0F
    ctx->pc = 0x11872cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48911 << 16));
    // 0x118730: 0x34212744  ori         $at, $at, 0x2744
    ctx->pc = 0x118730u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10052);
    // 0x118734: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x118734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x118738: 0x3c01bf11  lui         $at, 0xBF11
    ctx->pc = 0x118738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48913 << 16));
    // 0x11873c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x11873cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x118740: 0x3c01bf12  lui         $at, 0xBF12
    ctx->pc = 0x118740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48914 << 16));
    // 0x118744: 0x3421d5e8  ori         $at, $at, 0xD5E8
    ctx->pc = 0x118744u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54760);
    // 0x118748: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x118748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x11874c: 0x3c01bf14  lui         $at, 0xBF14
    ctx->pc = 0x11874cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48916 << 16));
    // 0x118750: 0x3421a8f3  ori         $at, $at, 0xA8F3
    ctx->pc = 0x118750u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43251);
    // 0x118754: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x118754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x118758: 0x3c01bf16  lui         $at, 0xBF16
    ctx->pc = 0x118758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48918 << 16));
    // 0x11875c: 0x34217918  ori         $at, $at, 0x7918
    ctx->pc = 0x11875cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31000);
    // 0x118760: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x118760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x118764: 0x3c01bf18  lui         $at, 0xBF18
    ctx->pc = 0x118764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48920 << 16));
    // 0x118768: 0x3421464e  ori         $at, $at, 0x464E
    ctx->pc = 0x118768u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17998);
    // 0x11876c: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x11876cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x118770: 0x3c013f52  lui         $at, 0x3F52
    ctx->pc = 0x118770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16210 << 16));
    // 0x118774: 0x3421f9ef  ori         $at, $at, 0xF9EF
    ctx->pc = 0x118774u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63983);
    // 0x118778: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x118778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x11877c: 0x3c013f51  lui         $at, 0x3F51
    ctx->pc = 0x11877cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16209 << 16));
    // 0x118780: 0x3421b3f3  ori         $at, $at, 0xB3F3
    ctx->pc = 0x118780u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46067);
    // 0x118784: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x118784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x118788: 0x3c013f50  lui         $at, 0x3F50
    ctx->pc = 0x118788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16208 << 16));
    // 0x11878c: 0x342169e0  ori         $at, $at, 0x69E0
    ctx->pc = 0x11878cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27104);
    // 0x118790: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x118790u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x118794: 0x3c013f4f  lui         $at, 0x3F4F
    ctx->pc = 0x118794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16207 << 16));
    // 0x118798: 0x34211bbd  ori         $at, $at, 0x1BBD
    ctx->pc = 0x118798u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7101);
    // 0x11879c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11879cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1187a0: 0xe491081c  swc1        $f17, 0x81C($a0)
    ctx->pc = 0x1187a0u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2076), bits); }
    // 0x1187a4: 0x3c013f4d  lui         $at, 0x3F4D
    ctx->pc = 0x1187a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16205 << 16));
    // 0x1187a8: 0x3421c990  ori         $at, $at, 0xC990
    ctx->pc = 0x1187a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51600);
    // 0x1187ac: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1187acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1187b0: 0xe4810268  swc1        $f1, 0x268($a0)
    ctx->pc = 0x1187b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 616), bits); }
    // 0x1187b4: 0xe482026c  swc1        $f2, 0x26C($a0)
    ctx->pc = 0x1187b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 620), bits); }
    // 0x1187b8: 0xe4830270  swc1        $f3, 0x270($a0)
    ctx->pc = 0x1187b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 624), bits); }
    // 0x1187bc: 0xe4850278  swc1        $f5, 0x278($a0)
    ctx->pc = 0x1187bcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 632), bits); }
    // 0x1187c0: 0xe486027c  swc1        $f6, 0x27C($a0)
    ctx->pc = 0x1187c0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 636), bits); }
    // 0x1187c4: 0xe4930820  swc1        $f19, 0x820($a0)
    ctx->pc = 0x1187c4u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2080), bits); }
    // 0x1187c8: 0xe4870280  swc1        $f7, 0x280($a0)
    ctx->pc = 0x1187c8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 640), bits); }
    // 0x1187cc: 0xe4940824  swc1        $f20, 0x824($a0)
    ctx->pc = 0x1187ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2084), bits); }
    // 0x1187d0: 0xe4880284  swc1        $f8, 0x284($a0)
    ctx->pc = 0x1187d0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 644), bits); }
    // 0x1187d4: 0xe4950828  swc1        $f21, 0x828($a0)
    ctx->pc = 0x1187d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2088), bits); }
    // 0x1187d8: 0xe4890288  swc1        $f9, 0x288($a0)
    ctx->pc = 0x1187d8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 648), bits); }
    // 0x1187dc: 0xe480082c  swc1        $f0, 0x82C($a0)
    ctx->pc = 0x1187dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2092), bits); }
    // 0x1187e0: 0xe48a028c  swc1        $f10, 0x28C($a0)
    ctx->pc = 0x1187e0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 652), bits); }
    // 0x1187e4: 0x3c013f4b  lui         $at, 0x3F4B
    ctx->pc = 0x1187e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16203 << 16));
    // 0x1187e8: 0x34211934  ori         $at, $at, 0x1934
    ctx->pc = 0x1187e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6452);
    // 0x1187ec: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x1187ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x1187f0: 0xe4840830  swc1        $f4, 0x830($a0)
    ctx->pc = 0x1187f0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2096), bits); }
    // 0x1187f4: 0xe4910838  swc1        $f17, 0x838($a0)
    ctx->pc = 0x1187f4u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2104), bits); }
    // 0x1187f8: 0x3c01bf1a  lui         $at, 0xBF1A
    ctx->pc = 0x1187f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48922 << 16));
    // 0x1187fc: 0x3421108d  ori         $at, $at, 0x108D
    ctx->pc = 0x1187fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4237);
    // 0x118800: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x118800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x118804: 0x3c01bf1b  lui         $at, 0xBF1B
    ctx->pc = 0x118804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48923 << 16));
    // 0x118808: 0x3421d7ca  ori         $at, $at, 0xD7CA
    ctx->pc = 0x118808u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55242);
    // 0x11880c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11880cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x118810: 0x3c01bf1d  lui         $at, 0xBF1D
    ctx->pc = 0x118810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48925 << 16));
    // 0x118814: 0x34219bfe  ori         $at, $at, 0x9BFE
    ctx->pc = 0x118814u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39934);
    // 0x118818: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x118818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11881c: 0x3c01bf1f  lui         $at, 0xBF1F
    ctx->pc = 0x11881cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48927 << 16));
    // 0x118820: 0x34215d1f  ori         $at, $at, 0x5D1F
    ctx->pc = 0x118820u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23839);
    // 0x118824: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x118824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x118828: 0x3c01bf21  lui         $at, 0xBF21
    ctx->pc = 0x118828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48929 << 16));
    // 0x11882c: 0x34211b24  ori         $at, $at, 0x1B24
    ctx->pc = 0x11882cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6948);
    // 0x118830: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x118830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x118834: 0x3c01bf22  lui         $at, 0xBF22
    ctx->pc = 0x118834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48930 << 16));
    // 0x118838: 0x3421d606  ori         $at, $at, 0xD606
    ctx->pc = 0x118838u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54790);
    // 0x11883c: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x11883cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x118840: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x118840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x118844: 0x34217360  ori         $at, $at, 0x7360
    ctx->pc = 0x118844u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29536);
    // 0x118848: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x118848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x11884c: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x11884cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x118850: 0x3421bb13  ori         $at, $at, 0xBB13
    ctx->pc = 0x118850u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47891);
    // 0x118854: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x118854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x118858: 0x3c013f48  lui         $at, 0x3F48
    ctx->pc = 0x118858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16200 << 16));
    // 0x11885c: 0x34215902  ori         $at, $at, 0x5902
    ctx->pc = 0x11885cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22786);
    // 0x118860: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x118860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x118864: 0x3c013f46  lui         $at, 0x3F46
    ctx->pc = 0x118864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16198 << 16));
    // 0x118868: 0x3421f30a  ori         $at, $at, 0xF30A
    ctx->pc = 0x118868u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62218);
    // 0x11886c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x11886cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x118870: 0x3c013f45  lui         $at, 0x3F45
    ctx->pc = 0x118870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16197 << 16));
    // 0x118874: 0x34218930  ori         $at, $at, 0x8930
    ctx->pc = 0x118874u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35120);
    // 0x118878: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x118878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x11887c: 0xe48b0290  swc1        $f11, 0x290($a0)
    ctx->pc = 0x11887cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 656), bits); }
    // 0x118880: 0xe4870834  swc1        $f7, 0x834($a0)
    ctx->pc = 0x118880u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2100), bits); }
    // 0x118884: 0xe48c0294  swc1        $f12, 0x294($a0)
    ctx->pc = 0x118884u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 660), bits); }
    // 0x118888: 0xe48d0298  swc1        $f13, 0x298($a0)
    ctx->pc = 0x118888u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 664), bits); }
    // 0x11888c: 0xe493083c  swc1        $f19, 0x83C($a0)
    ctx->pc = 0x11888cu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2108), bits); }
    // 0x118890: 0xe48e029c  swc1        $f14, 0x29C($a0)
    ctx->pc = 0x118890u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 668), bits); }
    // 0x118894: 0xe4940840  swc1        $f20, 0x840($a0)
    ctx->pc = 0x118894u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2112), bits); }
    // 0x118898: 0xe48f02a0  swc1        $f15, 0x2A0($a0)
    ctx->pc = 0x118898u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 672), bits); }
    // 0x11889c: 0xe4950844  swc1        $f21, 0x844($a0)
    ctx->pc = 0x11889cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2116), bits); }
    // 0x1188a0: 0xe49002a4  swc1        $f16, 0x2A4($a0)
    ctx->pc = 0x1188a0u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 676), bits); }
    // 0x1188a4: 0x3c01bf24  lui         $at, 0xBF24
    ctx->pc = 0x1188a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48932 << 16));
    // 0x1188a8: 0x34218dbb  ori         $at, $at, 0x8DBB
    ctx->pc = 0x1188a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36283);
    // 0x1188ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1188acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1188b0: 0xe4910848  swc1        $f17, 0x848($a0)
    ctx->pc = 0x1188b0u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2120), bits); }
    // 0x1188b4: 0x3c01bf2b  lui         $at, 0xBF2B
    ctx->pc = 0x1188b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48939 << 16));
    // 0x1188b8: 0x34214c25  ori         $at, $at, 0x4C25
    ctx->pc = 0x1188b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19493);
    // 0x1188bc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1188bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1188c0: 0xe48002a8  swc1        $f0, 0x2A8($a0)
    ctx->pc = 0x1188c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 680), bits); }
    // 0x1188c4: 0xe48402b8  swc1        $f4, 0x2B8($a0)
    ctx->pc = 0x1188c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 696), bits); }
    // 0x1188c8: 0x3c013f44  lui         $at, 0x3F44
    ctx->pc = 0x1188c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16196 << 16));
    // 0x1188cc: 0x34211b7d  ori         $at, $at, 0x1B7D
    ctx->pc = 0x1188ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7037);
    // 0x1188d0: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x1188d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x1188d4: 0x3c013f42  lui         $at, 0x3F42
    ctx->pc = 0x1188d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16194 << 16));
    // 0x1188d8: 0x3421a9f7  ori         $at, $at, 0xA9F7
    ctx->pc = 0x1188d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43511);
    // 0x1188dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1188dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1188e0: 0x3c013f41  lui         $at, 0x3F41
    ctx->pc = 0x1188e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16193 << 16));
    // 0x1188e4: 0x342134a6  ori         $at, $at, 0x34A6
    ctx->pc = 0x1188e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13478);
    // 0x1188e8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1188e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1188ec: 0x3c013f3f  lui         $at, 0x3F3F
    ctx->pc = 0x1188ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16191 << 16));
    // 0x1188f0: 0x3421bb90  ori         $at, $at, 0xBB90
    ctx->pc = 0x1188f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48016);
    // 0x1188f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1188f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1188f8: 0x3c013f3e  lui         $at, 0x3F3E
    ctx->pc = 0x1188f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16190 << 16));
    // 0x1188fc: 0x34213ebd  ori         $at, $at, 0x3EBD
    ctx->pc = 0x1188fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16061);
    // 0x118900: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x118900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x118904: 0xe493084c  swc1        $f19, 0x84C($a0)
    ctx->pc = 0x118904u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2124), bits); }
    // 0x118908: 0xe4940850  swc1        $f20, 0x850($a0)
    ctx->pc = 0x118908u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2128), bits); }
    // 0x11890c: 0xe4950854  swc1        $f21, 0x854($a0)
    ctx->pc = 0x11890cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2132), bits); }
    // 0x118910: 0xe4800858  swc1        $f0, 0x858($a0)
    ctx->pc = 0x118910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2136), bits); }
    // 0x118914: 0x3c013f3c  lui         $at, 0x3F3C
    ctx->pc = 0x118914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16188 << 16));
    // 0x118918: 0x3421be35  ori         $at, $at, 0xBE35
    ctx->pc = 0x118918u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48693);
    // 0x11891c: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x11891cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x118920: 0xe484085c  swc1        $f4, 0x85C($a0)
    ctx->pc = 0x118920u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2140), bits); }
    // 0x118924: 0x3c01bf26  lui         $at, 0xBF26
    ctx->pc = 0x118924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48934 << 16));
    // 0x118928: 0x3421423a  ori         $at, $at, 0x423A
    ctx->pc = 0x118928u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16954);
    // 0x11892c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11892cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x118930: 0x3c01bf27  lui         $at, 0xBF27
    ctx->pc = 0x118930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48935 << 16));
    // 0x118934: 0x3421f37c  ori         $at, $at, 0xF37C
    ctx->pc = 0x118934u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62332);
    // 0x118938: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x118938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11893c: 0x3c01bf29  lui         $at, 0xBF29
    ctx->pc = 0x11893cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48937 << 16));
    // 0x118940: 0x3421a178  ori         $at, $at, 0xA178
    ctx->pc = 0x118940u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41336);
    // 0x118944: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x118944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x118948: 0x3c01bf2c  lui         $at, 0xBF2C
    ctx->pc = 0x118948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48940 << 16));
    // 0x11894c: 0x3421f37b  ori         $at, $at, 0xF37B
    ctx->pc = 0x11894cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62331);
    // 0x118950: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x118950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x118954: 0x3c01bf2e  lui         $at, 0xBF2E
    ctx->pc = 0x118954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48942 << 16));
    // 0x118958: 0x34219772  ori         $at, $at, 0x9772
    ctx->pc = 0x118958u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38770);
    // 0x11895c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x11895cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x118960: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x118960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x118964: 0x34213801  ori         $at, $at, 0x3801
    ctx->pc = 0x118964u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14337);
    // 0x118968: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x118968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x11896c: 0x3c01bf31  lui         $at, 0xBF31
    ctx->pc = 0x11896cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48945 << 16));
    // 0x118970: 0x3421d522  ori         $at, $at, 0xD522
    ctx->pc = 0x118970u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54562);
    // 0x118974: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x118974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x118978: 0x3c01bf33  lui         $at, 0xBF33
    ctx->pc = 0x118978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48947 << 16));
    // 0x11897c: 0x34216eca  ori         $at, $at, 0x6ECA
    ctx->pc = 0x11897cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28362);
    // 0x118980: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x118980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x118984: 0x3c01bf35  lui         $at, 0xBF35
    ctx->pc = 0x118984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48949 << 16));
    // 0x118988: 0x342104f3  ori         $at, $at, 0x4F3
    ctx->pc = 0x118988u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1267);
    // 0x11898c: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x11898cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x118990: 0x3c013f3b  lui         $at, 0x3F3B
    ctx->pc = 0x118990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16187 << 16));
    // 0x118994: 0x342139ff  ori         $at, $at, 0x39FF
    ctx->pc = 0x118994u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14847);
    // 0x118998: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x118998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x11899c: 0x3c013f39  lui         $at, 0x3F39
    ctx->pc = 0x11899cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16185 << 16));
    // 0x1189a0: 0x3421b223  ori         $at, $at, 0xB223
    ctx->pc = 0x1189a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45603);
    // 0x1189a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1189a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1189a8: 0x3c013f38  lui         $at, 0x3F38
    ctx->pc = 0x1189a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16184 << 16));
    // 0x1189ac: 0x342126a7  ori         $at, $at, 0x26A7
    ctx->pc = 0x1189acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9895);
    // 0x1189b0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1189b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1189b4: 0x3c013f36  lui         $at, 0x3F36
    ctx->pc = 0x1189b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16182 << 16));
    // 0x1189b8: 0x34219795  ori         $at, $at, 0x9795
    ctx->pc = 0x1189b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38805);
    // 0x1189bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1189bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1189c0: 0xe4910860  swc1        $f17, 0x860($a0)
    ctx->pc = 0x1189c0u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2144), bits); }
    // 0x1189c4: 0x3c013f35  lui         $at, 0x3F35
    ctx->pc = 0x1189c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16181 << 16));
    // 0x1189c8: 0x342104f3  ori         $at, $at, 0x4F3
    ctx->pc = 0x1189c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1267);
    // 0x1189cc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1189ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1189d0: 0xe48102ac  swc1        $f1, 0x2AC($a0)
    ctx->pc = 0x1189d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 684), bits); }
    // 0x1189d4: 0xe48202b0  swc1        $f2, 0x2B0($a0)
    ctx->pc = 0x1189d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 688), bits); }
    // 0x1189d8: 0xe48302b4  swc1        $f3, 0x2B4($a0)
    ctx->pc = 0x1189d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 692), bits); }
    // 0x1189dc: 0xe48502bc  swc1        $f5, 0x2BC($a0)
    ctx->pc = 0x1189dcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 700), bits); }
    // 0x1189e0: 0xe48602c0  swc1        $f6, 0x2C0($a0)
    ctx->pc = 0x1189e0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 704), bits); }
    // 0x1189e4: 0xe4930864  swc1        $f19, 0x864($a0)
    ctx->pc = 0x1189e4u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2148), bits); }
    // 0x1189e8: 0xe48702c4  swc1        $f7, 0x2C4($a0)
    ctx->pc = 0x1189e8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 708), bits); }
    // 0x1189ec: 0xe4940868  swc1        $f20, 0x868($a0)
    ctx->pc = 0x1189ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2152), bits); }
    // 0x1189f0: 0xe48802c8  swc1        $f8, 0x2C8($a0)
    ctx->pc = 0x1189f0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 712), bits); }
    // 0x1189f4: 0xe495086c  swc1        $f21, 0x86C($a0)
    ctx->pc = 0x1189f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2156), bits); }
    // 0x1189f8: 0xe48902cc  swc1        $f9, 0x2CC($a0)
    ctx->pc = 0x1189f8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 716), bits); }
    // 0x1189fc: 0xe4800870  swc1        $f0, 0x870($a0)
    ctx->pc = 0x1189fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2160), bits); }
    // 0x118a00: 0xe48a02d0  swc1        $f10, 0x2D0($a0)
    ctx->pc = 0x118a00u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 720), bits); }
    // 0x118a04: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x118a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x118a08: 0x3421d522  ori         $at, $at, 0xD522
    ctx->pc = 0x118a08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54562);
    // 0x118a0c: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x118a0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x118a10: 0xe4840874  swc1        $f4, 0x874($a0)
    ctx->pc = 0x118a10u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2164), bits); }
    // 0x118a14: 0xe491087c  swc1        $f17, 0x87C($a0)
    ctx->pc = 0x118a14u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2172), bits); }
    // 0x118a18: 0x3c01bf36  lui         $at, 0xBF36
    ctx->pc = 0x118a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48950 << 16));
    // 0x118a1c: 0x34219795  ori         $at, $at, 0x9795
    ctx->pc = 0x118a1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38805);
    // 0x118a20: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x118a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x118a24: 0x3c01bf38  lui         $at, 0xBF38
    ctx->pc = 0x118a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48952 << 16));
    // 0x118a28: 0x342126a7  ori         $at, $at, 0x26A7
    ctx->pc = 0x118a28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9895);
    // 0x118a2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x118a2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x118a30: 0x3c01bf39  lui         $at, 0xBF39
    ctx->pc = 0x118a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48953 << 16));
    // 0x118a34: 0x3421b223  ori         $at, $at, 0xB223
    ctx->pc = 0x118a34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45603);
    // 0x118a38: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x118a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x118a3c: 0x3c01bf3b  lui         $at, 0xBF3B
    ctx->pc = 0x118a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48955 << 16));
    // 0x118a40: 0x342139ff  ori         $at, $at, 0x39FF
    ctx->pc = 0x118a40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14847);
    // 0x118a44: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x118a44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x118a48: 0x3c01bf3c  lui         $at, 0xBF3C
    ctx->pc = 0x118a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48956 << 16));
    // 0x118a4c: 0x3421be35  ori         $at, $at, 0xBE35
    ctx->pc = 0x118a4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48693);
    // 0x118a50: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x118a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x118a54: 0x3c01bf3e  lui         $at, 0xBF3E
    ctx->pc = 0x118a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48958 << 16));
    // 0x118a58: 0x34213ebd  ori         $at, $at, 0x3EBD
    ctx->pc = 0x118a58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16061);
    // 0x118a5c: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x118a5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x118a60: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x118a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x118a64: 0x34216eca  ori         $at, $at, 0x6ECA
    ctx->pc = 0x118a64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28362);
    // 0x118a68: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x118a68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x118a6c: 0x3c013f30  lui         $at, 0x3F30
    ctx->pc = 0x118a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16176 << 16));
    // 0x118a70: 0x34213801  ori         $at, $at, 0x3801
    ctx->pc = 0x118a70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14337);
    // 0x118a74: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x118a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x118a78: 0x3c013f2e  lui         $at, 0x3F2E
    ctx->pc = 0x118a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16174 << 16));
    // 0x118a7c: 0x34219772  ori         $at, $at, 0x9772
    ctx->pc = 0x118a7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38770);
    // 0x118a80: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x118a80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x118a84: 0x3c013f2c  lui         $at, 0x3F2C
    ctx->pc = 0x118a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16172 << 16));
    // 0x118a88: 0x3421f37b  ori         $at, $at, 0xF37B
    ctx->pc = 0x118a88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62331);
    // 0x118a8c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x118a8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x118a90: 0x3c013f2b  lui         $at, 0x3F2B
    ctx->pc = 0x118a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16171 << 16));
    // 0x118a94: 0x34214c25  ori         $at, $at, 0x4C25
    ctx->pc = 0x118a94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19493);
    // 0x118a98: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x118a98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x118a9c: 0xe48b02d4  swc1        $f11, 0x2D4($a0)
    ctx->pc = 0x118a9cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 724), bits); }
    // 0x118aa0: 0xe4870878  swc1        $f7, 0x878($a0)
    ctx->pc = 0x118aa0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2168), bits); }
    // 0x118aa4: 0xe48c02d8  swc1        $f12, 0x2D8($a0)
    ctx->pc = 0x118aa4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 728), bits); }
    // 0x118aa8: 0xe48d02dc  swc1        $f13, 0x2DC($a0)
    ctx->pc = 0x118aa8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 732), bits); }
    // 0x118aac: 0xe4930880  swc1        $f19, 0x880($a0)
    ctx->pc = 0x118aacu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2176), bits); }
    // 0x118ab0: 0xe48e02e0  swc1        $f14, 0x2E0($a0)
    ctx->pc = 0x118ab0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 736), bits); }
    // 0x118ab4: 0xe4940884  swc1        $f20, 0x884($a0)
    ctx->pc = 0x118ab4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2180), bits); }
    // 0x118ab8: 0xe48f02e4  swc1        $f15, 0x2E4($a0)
    ctx->pc = 0x118ab8u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 740), bits); }
    // 0x118abc: 0xe4950888  swc1        $f21, 0x888($a0)
    ctx->pc = 0x118abcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2184), bits); }
    // 0x118ac0: 0xe49002e8  swc1        $f16, 0x2E8($a0)
    ctx->pc = 0x118ac0u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 744), bits); }
    // 0x118ac4: 0x3c01bf3f  lui         $at, 0xBF3F
    ctx->pc = 0x118ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48959 << 16));
    // 0x118ac8: 0x3421bb90  ori         $at, $at, 0xBB90
    ctx->pc = 0x118ac8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48016);
    // 0x118acc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118ad0: 0xe491088c  swc1        $f17, 0x88C($a0)
    ctx->pc = 0x118ad0u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2188), bits); }
    // 0x118ad4: 0x3c01bf45  lui         $at, 0xBF45
    ctx->pc = 0x118ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48965 << 16));
    // 0x118ad8: 0x34218930  ori         $at, $at, 0x8930
    ctx->pc = 0x118ad8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35120);
    // 0x118adc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x118adcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x118ae0: 0xe48002ec  swc1        $f0, 0x2EC($a0)
    ctx->pc = 0x118ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 748), bits); }
    // 0x118ae4: 0xe48402fc  swc1        $f4, 0x2FC($a0)
    ctx->pc = 0x118ae4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 764), bits); }
    // 0x118ae8: 0x3c013f29  lui         $at, 0x3F29
    ctx->pc = 0x118ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16169 << 16));
    // 0x118aec: 0x3421a178  ori         $at, $at, 0xA178
    ctx->pc = 0x118aecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41336);
    // 0x118af0: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x118af0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x118af4: 0x3c013f27  lui         $at, 0x3F27
    ctx->pc = 0x118af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16167 << 16));
    // 0x118af8: 0x3421f37c  ori         $at, $at, 0xF37C
    ctx->pc = 0x118af8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62332);
    // 0x118afc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x118afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x118b00: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x118b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x118b04: 0x3421423a  ori         $at, $at, 0x423A
    ctx->pc = 0x118b04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16954);
    // 0x118b08: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x118b08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x118b0c: 0x3c013f24  lui         $at, 0x3F24
    ctx->pc = 0x118b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16164 << 16));
    // 0x118b10: 0x34218dbb  ori         $at, $at, 0x8DBB
    ctx->pc = 0x118b10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36283);
    // 0x118b14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118b14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118b18: 0x3c013f22  lui         $at, 0x3F22
    ctx->pc = 0x118b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16162 << 16));
    // 0x118b1c: 0x3421d606  ori         $at, $at, 0xD606
    ctx->pc = 0x118b1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54790);
    // 0x118b20: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x118b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x118b24: 0xe4930890  swc1        $f19, 0x890($a0)
    ctx->pc = 0x118b24u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2192), bits); }
    // 0x118b28: 0xe4940894  swc1        $f20, 0x894($a0)
    ctx->pc = 0x118b28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2196), bits); }
    // 0x118b2c: 0xe4950898  swc1        $f21, 0x898($a0)
    ctx->pc = 0x118b2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2200), bits); }
    // 0x118b30: 0xe480089c  swc1        $f0, 0x89C($a0)
    ctx->pc = 0x118b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2204), bits); }
    // 0x118b34: 0x3c013f21  lui         $at, 0x3F21
    ctx->pc = 0x118b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16161 << 16));
    // 0x118b38: 0x34211b24  ori         $at, $at, 0x1B24
    ctx->pc = 0x118b38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6948);
    // 0x118b3c: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x118b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x118b40: 0xe48408a0  swc1        $f4, 0x8A0($a0)
    ctx->pc = 0x118b40u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2208), bits); }
    // 0x118b44: 0x3c01bf41  lui         $at, 0xBF41
    ctx->pc = 0x118b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48961 << 16));
    // 0x118b48: 0x342134a6  ori         $at, $at, 0x34A6
    ctx->pc = 0x118b48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13478);
    // 0x118b4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x118b4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x118b50: 0x3c01bf42  lui         $at, 0xBF42
    ctx->pc = 0x118b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48962 << 16));
    // 0x118b54: 0x3421a9f7  ori         $at, $at, 0xA9F7
    ctx->pc = 0x118b54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43511);
    // 0x118b58: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x118b58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x118b5c: 0x3c01bf44  lui         $at, 0xBF44
    ctx->pc = 0x118b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48964 << 16));
    // 0x118b60: 0x34211b7d  ori         $at, $at, 0x1B7D
    ctx->pc = 0x118b60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7037);
    // 0x118b64: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x118b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x118b68: 0x3c01bf46  lui         $at, 0xBF46
    ctx->pc = 0x118b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48966 << 16));
    // 0x118b6c: 0x3421f30a  ori         $at, $at, 0xF30A
    ctx->pc = 0x118b6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62218);
    // 0x118b70: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x118b70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x118b74: 0x3c01bf48  lui         $at, 0xBF48
    ctx->pc = 0x118b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48968 << 16));
    // 0x118b78: 0x34215902  ori         $at, $at, 0x5902
    ctx->pc = 0x118b78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22786);
    // 0x118b7c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x118b7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x118b80: 0x3c01bf49  lui         $at, 0xBF49
    ctx->pc = 0x118b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48969 << 16));
    // 0x118b84: 0x3421bb13  ori         $at, $at, 0xBB13
    ctx->pc = 0x118b84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47891);
    // 0x118b88: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x118b88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x118b8c: 0x3c01bf4b  lui         $at, 0xBF4B
    ctx->pc = 0x118b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48971 << 16));
    // 0x118b90: 0x34211934  ori         $at, $at, 0x1934
    ctx->pc = 0x118b90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6452);
    // 0x118b94: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x118b94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x118b98: 0x3c01bf4c  lui         $at, 0xBF4C
    ctx->pc = 0x118b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48972 << 16));
    // 0x118b9c: 0x34217360  ori         $at, $at, 0x7360
    ctx->pc = 0x118b9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29536);
    // 0x118ba0: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x118ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x118ba4: 0x3c01bf4d  lui         $at, 0xBF4D
    ctx->pc = 0x118ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48973 << 16));
    // 0x118ba8: 0x3421c990  ori         $at, $at, 0xC990
    ctx->pc = 0x118ba8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51600);
    // 0x118bac: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x118bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x118bb0: 0x3c013f1f  lui         $at, 0x3F1F
    ctx->pc = 0x118bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16159 << 16));
    // 0x118bb4: 0x34215d1f  ori         $at, $at, 0x5D1F
    ctx->pc = 0x118bb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23839);
    // 0x118bb8: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x118bb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x118bbc: 0x3c013f1d  lui         $at, 0x3F1D
    ctx->pc = 0x118bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16157 << 16));
    // 0x118bc0: 0x34219bfe  ori         $at, $at, 0x9BFE
    ctx->pc = 0x118bc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39934);
    // 0x118bc4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x118bc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x118bc8: 0x3c013f1b  lui         $at, 0x3F1B
    ctx->pc = 0x118bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16155 << 16));
    // 0x118bcc: 0x3421d7ca  ori         $at, $at, 0xD7CA
    ctx->pc = 0x118bccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55242);
    // 0x118bd0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x118bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x118bd4: 0x3c013f1a  lui         $at, 0x3F1A
    ctx->pc = 0x118bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16154 << 16));
    // 0x118bd8: 0x3421108d  ori         $at, $at, 0x108D
    ctx->pc = 0x118bd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4237);
    // 0x118bdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118be0: 0xe49108a4  swc1        $f17, 0x8A4($a0)
    ctx->pc = 0x118be0u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2212), bits); }
    // 0x118be4: 0x3c013f18  lui         $at, 0x3F18
    ctx->pc = 0x118be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16152 << 16));
    // 0x118be8: 0x3421464e  ori         $at, $at, 0x464E
    ctx->pc = 0x118be8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17998);
    // 0x118bec: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x118becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x118bf0: 0xe48102f0  swc1        $f1, 0x2F0($a0)
    ctx->pc = 0x118bf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 752), bits); }
    // 0x118bf4: 0xe48202f4  swc1        $f2, 0x2F4($a0)
    ctx->pc = 0x118bf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 756), bits); }
    // 0x118bf8: 0xe48302f8  swc1        $f3, 0x2F8($a0)
    ctx->pc = 0x118bf8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 760), bits); }
    // 0x118bfc: 0xe4850300  swc1        $f5, 0x300($a0)
    ctx->pc = 0x118bfcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 768), bits); }
    // 0x118c00: 0xe4860304  swc1        $f6, 0x304($a0)
    ctx->pc = 0x118c00u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 772), bits); }
    // 0x118c04: 0xe49308a8  swc1        $f19, 0x8A8($a0)
    ctx->pc = 0x118c04u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2216), bits); }
    // 0x118c08: 0xe4870308  swc1        $f7, 0x308($a0)
    ctx->pc = 0x118c08u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 776), bits); }
    // 0x118c0c: 0xe49408ac  swc1        $f20, 0x8AC($a0)
    ctx->pc = 0x118c0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2220), bits); }
    // 0x118c10: 0xe488030c  swc1        $f8, 0x30C($a0)
    ctx->pc = 0x118c10u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 780), bits); }
    // 0x118c14: 0xe49508b0  swc1        $f21, 0x8B0($a0)
    ctx->pc = 0x118c14u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2224), bits); }
    // 0x118c18: 0xe4890310  swc1        $f9, 0x310($a0)
    ctx->pc = 0x118c18u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 784), bits); }
    // 0x118c1c: 0xe48008b4  swc1        $f0, 0x8B4($a0)
    ctx->pc = 0x118c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2228), bits); }
    // 0x118c20: 0xe48a0314  swc1        $f10, 0x314($a0)
    ctx->pc = 0x118c20u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 788), bits); }
    // 0x118c24: 0x3c013f14  lui         $at, 0x3F14
    ctx->pc = 0x118c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16148 << 16));
    // 0x118c28: 0x3421a8f3  ori         $at, $at, 0xA8F3
    ctx->pc = 0x118c28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43251);
    // 0x118c2c: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x118c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x118c30: 0xe48408b8  swc1        $f4, 0x8B8($a0)
    ctx->pc = 0x118c30u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2232), bits); }
    // 0x118c34: 0xe49108c0  swc1        $f17, 0x8C0($a0)
    ctx->pc = 0x118c34u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2240), bits); }
    // 0x118c38: 0x3c01bf4f  lui         $at, 0xBF4F
    ctx->pc = 0x118c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48975 << 16));
    // 0x118c3c: 0x34211bbd  ori         $at, $at, 0x1BBD
    ctx->pc = 0x118c3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7101);
    // 0x118c40: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x118c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x118c44: 0x3c01bf50  lui         $at, 0xBF50
    ctx->pc = 0x118c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48976 << 16));
    // 0x118c48: 0x342169e0  ori         $at, $at, 0x69E0
    ctx->pc = 0x118c48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27104);
    // 0x118c4c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x118c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x118c50: 0x3c01bf51  lui         $at, 0xBF51
    ctx->pc = 0x118c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48977 << 16));
    // 0x118c54: 0x3421b3f3  ori         $at, $at, 0xB3F3
    ctx->pc = 0x118c54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46067);
    // 0x118c58: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x118c58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x118c5c: 0x3c01bf52  lui         $at, 0xBF52
    ctx->pc = 0x118c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48978 << 16));
    // 0x118c60: 0x3421f9ef  ori         $at, $at, 0xF9EF
    ctx->pc = 0x118c60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63983);
    // 0x118c64: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x118c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x118c68: 0x3c01bf54  lui         $at, 0xBF54
    ctx->pc = 0x118c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48980 << 16));
    // 0x118c6c: 0x34213bce  ori         $at, $at, 0x3BCE
    ctx->pc = 0x118c6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15310);
    // 0x118c70: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x118c70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x118c74: 0x3c01bf55  lui         $at, 0xBF55
    ctx->pc = 0x118c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48981 << 16));
    // 0x118c78: 0x3421798b  ori         $at, $at, 0x798B
    ctx->pc = 0x118c78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31115);
    // 0x118c7c: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x118c7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x118c80: 0x3c013f16  lui         $at, 0x3F16
    ctx->pc = 0x118c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16150 << 16));
    // 0x118c84: 0x34217918  ori         $at, $at, 0x7918
    ctx->pc = 0x118c84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31000);
    // 0x118c88: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x118c88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x118c8c: 0x3c013f12  lui         $at, 0x3F12
    ctx->pc = 0x118c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16146 << 16));
    // 0x118c90: 0x3421d5e8  ori         $at, $at, 0xD5E8
    ctx->pc = 0x118c90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54760);
    // 0x118c94: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x118c94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x118c98: 0x3c013f11  lui         $at, 0x3F11
    ctx->pc = 0x118c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16145 << 16));
    // 0x118c9c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x118c9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x118ca0: 0x3c013f0f  lui         $at, 0x3F0F
    ctx->pc = 0x118ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16143 << 16));
    // 0x118ca4: 0x34212744  ori         $at, $at, 0x2744
    ctx->pc = 0x118ca4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10052);
    // 0x118ca8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x118ca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x118cac: 0x3c013f0d  lui         $at, 0x3F0D
    ctx->pc = 0x118cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16141 << 16));
    // 0x118cb0: 0x34214bbe  ori         $at, $at, 0x4BBE
    ctx->pc = 0x118cb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19390);
    // 0x118cb4: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x118cb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x118cb8: 0xe48b0318  swc1        $f11, 0x318($a0)
    ctx->pc = 0x118cb8u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 792), bits); }
    // 0x118cbc: 0xe48708bc  swc1        $f7, 0x8BC($a0)
    ctx->pc = 0x118cbcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2236), bits); }
    // 0x118cc0: 0xe48c031c  swc1        $f12, 0x31C($a0)
    ctx->pc = 0x118cc0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 796), bits); }
    // 0x118cc4: 0xe48d0320  swc1        $f13, 0x320($a0)
    ctx->pc = 0x118cc4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 800), bits); }
    // 0x118cc8: 0xe49308c4  swc1        $f19, 0x8C4($a0)
    ctx->pc = 0x118cc8u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2244), bits); }
    // 0x118ccc: 0xe48e0324  swc1        $f14, 0x324($a0)
    ctx->pc = 0x118cccu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 804), bits); }
    // 0x118cd0: 0xe49408c8  swc1        $f20, 0x8C8($a0)
    ctx->pc = 0x118cd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2248), bits); }
    // 0x118cd4: 0xe48f0328  swc1        $f15, 0x328($a0)
    ctx->pc = 0x118cd4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 808), bits); }
    // 0x118cd8: 0xe49508cc  swc1        $f21, 0x8CC($a0)
    ctx->pc = 0x118cd8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2252), bits); }
    // 0x118cdc: 0xe490032c  swc1        $f16, 0x32C($a0)
    ctx->pc = 0x118cdcu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 812), bits); }
    // 0x118ce0: 0x3c01bf56  lui         $at, 0xBF56
    ctx->pc = 0x118ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48982 << 16));
    // 0x118ce4: 0x3421b31d  ori         $at, $at, 0xB31D
    ctx->pc = 0x118ce4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45853);
    // 0x118ce8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118ce8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118cec: 0xe49108d0  swc1        $f17, 0x8D0($a0)
    ctx->pc = 0x118cecu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2256), bits); }
    // 0x118cf0: 0x3c01bf5b  lui         $at, 0xBF5B
    ctx->pc = 0x118cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48987 << 16));
    // 0x118cf4: 0x34216f51  ori         $at, $at, 0x6F51
    ctx->pc = 0x118cf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28497);
    // 0x118cf8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x118cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x118cfc: 0xe4800330  swc1        $f0, 0x330($a0)
    ctx->pc = 0x118cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 816), bits); }
    // 0x118d00: 0xe4840340  swc1        $f4, 0x340($a0)
    ctx->pc = 0x118d00u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 832), bits); }
    // 0x118d04: 0x3c013f0b  lui         $at, 0x3F0B
    ctx->pc = 0x118d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16139 << 16));
    // 0x118d08: 0x34216d77  ori         $at, $at, 0x6D77
    ctx->pc = 0x118d08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28023);
    // 0x118d0c: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x118d0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x118d10: 0x3c013f09  lui         $at, 0x3F09
    ctx->pc = 0x118d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16137 << 16));
    // 0x118d14: 0x34218c78  ori         $at, $at, 0x8C78
    ctx->pc = 0x118d14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35960);
    // 0x118d18: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x118d18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x118d1c: 0x3c013f07  lui         $at, 0x3F07
    ctx->pc = 0x118d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16135 << 16));
    // 0x118d20: 0x3421a8ca  ori         $at, $at, 0xA8CA
    ctx->pc = 0x118d20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43210);
    // 0x118d24: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x118d24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x118d28: 0x3c013f05  lui         $at, 0x3F05
    ctx->pc = 0x118d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16133 << 16));
    // 0x118d2c: 0x3421c277  ori         $at, $at, 0xC277
    ctx->pc = 0x118d2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49783);
    // 0x118d30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118d30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118d34: 0x3c013f03  lui         $at, 0x3F03
    ctx->pc = 0x118d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16131 << 16));
    // 0x118d38: 0x3421d989  ori         $at, $at, 0xD989
    ctx->pc = 0x118d38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55689);
    // 0x118d3c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x118d3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x118d40: 0xe49308d4  swc1        $f19, 0x8D4($a0)
    ctx->pc = 0x118d40u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2260), bits); }
    // 0x118d44: 0xe49408d8  swc1        $f20, 0x8D8($a0)
    ctx->pc = 0x118d44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2264), bits); }
    // 0x118d48: 0xe49508dc  swc1        $f21, 0x8DC($a0)
    ctx->pc = 0x118d48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2268), bits); }
    // 0x118d4c: 0xe48008e0  swc1        $f0, 0x8E0($a0)
    ctx->pc = 0x118d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2272), bits); }
    // 0x118d50: 0x3c013f01  lui         $at, 0x3F01
    ctx->pc = 0x118d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16129 << 16));
    // 0x118d54: 0x3421ee09  ori         $at, $at, 0xEE09
    ctx->pc = 0x118d54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60937);
    // 0x118d58: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x118d58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x118d5c: 0xe48408e4  swc1        $f4, 0x8E4($a0)
    ctx->pc = 0x118d5cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2276), bits); }
    // 0x118d60: 0x3c01bf57  lui         $at, 0xBF57
    ctx->pc = 0x118d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48983 << 16));
    // 0x118d64: 0x3421e880  ori         $at, $at, 0xE880
    ctx->pc = 0x118d64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59520);
    // 0x118d68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x118d68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x118d6c: 0x3c01bf59  lui         $at, 0xBF59
    ctx->pc = 0x118d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48985 << 16));
    // 0x118d70: 0x342119ae  ori         $at, $at, 0x19AE
    ctx->pc = 0x118d70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6574);
    // 0x118d74: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x118d74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x118d78: 0x3c01bf5a  lui         $at, 0xBF5A
    ctx->pc = 0x118d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48986 << 16));
    // 0x118d7c: 0x342146a0  ori         $at, $at, 0x46A0
    ctx->pc = 0x118d7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18080);
    // 0x118d80: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x118d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x118d84: 0x3c01bf5c  lui         $at, 0xBF5C
    ctx->pc = 0x118d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48988 << 16));
    // 0x118d88: 0x342193bb  ori         $at, $at, 0x93BB
    ctx->pc = 0x118d88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37819);
    // 0x118d8c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x118d8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x118d90: 0x3c01bf5d  lui         $at, 0xBF5D
    ctx->pc = 0x118d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48989 << 16));
    // 0x118d94: 0x3421b3d7  ori         $at, $at, 0xB3D7
    ctx->pc = 0x118d94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46039);
    // 0x118d98: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x118d98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x118d9c: 0x3c01bf5e  lui         $at, 0xBF5E
    ctx->pc = 0x118d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48990 << 16));
    // 0x118da0: 0x3421cfa2  ori         $at, $at, 0xCFA2
    ctx->pc = 0x118da0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53154);
    // 0x118da4: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x118da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x118da8: 0x3c01bf5f  lui         $at, 0xBF5F
    ctx->pc = 0x118da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48991 << 16));
    // 0x118dac: 0x3421e714  ori         $at, $at, 0xE714
    ctx->pc = 0x118dacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59156);
    // 0x118db0: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x118db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x118db4: 0x3c01bf60  lui         $at, 0xBF60
    ctx->pc = 0x118db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48992 << 16));
    // 0x118db8: 0x3421fa29  ori         $at, $at, 0xFA29
    ctx->pc = 0x118db8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64041);
    // 0x118dbc: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x118dbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x118dc0: 0x3c01bf62  lui         $at, 0xBF62
    ctx->pc = 0x118dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48994 << 16));
    // 0x118dc4: 0x342108da  ori         $at, $at, 0x8DA
    ctx->pc = 0x118dc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2266);
    // 0x118dc8: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x118dc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x118dcc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x118dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x118dd0: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x118dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x118dd4: 0x3c013efc  lui         $at, 0x3EFC
    ctx->pc = 0x118dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16124 << 16));
    // 0x118dd8: 0x34211ef1  ori         $at, $at, 0x1EF1
    ctx->pc = 0x118dd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7921);
    // 0x118ddc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x118ddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x118de0: 0x3c013ef8  lui         $at, 0x3EF8
    ctx->pc = 0x118de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16120 << 16));
    // 0x118de4: 0x342138f7  ori         $at, $at, 0x38F7
    ctx->pc = 0x118de4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14583);
    // 0x118de8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x118de8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x118dec: 0x3c013ef4  lui         $at, 0x3EF4
    ctx->pc = 0x118decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16116 << 16));
    // 0x118df0: 0x34214e27  ori         $at, $at, 0x4E27
    ctx->pc = 0x118df0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20007);
    // 0x118df4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118df4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118df8: 0xe49108e8  swc1        $f17, 0x8E8($a0)
    ctx->pc = 0x118df8u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2280), bits); }
    // 0x118dfc: 0x3c013ef0  lui         $at, 0x3EF0
    ctx->pc = 0x118dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16112 << 16));
    // 0x118e00: 0x34215e94  ori         $at, $at, 0x5E94
    ctx->pc = 0x118e00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24212);
    // 0x118e04: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x118e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x118e08: 0xe4810334  swc1        $f1, 0x334($a0)
    ctx->pc = 0x118e08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 820), bits); }
    // 0x118e0c: 0xe4820338  swc1        $f2, 0x338($a0)
    ctx->pc = 0x118e0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 824), bits); }
    // 0x118e10: 0xe483033c  swc1        $f3, 0x33C($a0)
    ctx->pc = 0x118e10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 828), bits); }
    // 0x118e14: 0xe4850344  swc1        $f5, 0x344($a0)
    ctx->pc = 0x118e14u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 836), bits); }
    // 0x118e18: 0xe4860348  swc1        $f6, 0x348($a0)
    ctx->pc = 0x118e18u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 840), bits); }
    // 0x118e1c: 0xe49308ec  swc1        $f19, 0x8EC($a0)
    ctx->pc = 0x118e1cu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2284), bits); }
    // 0x118e20: 0xe487034c  swc1        $f7, 0x34C($a0)
    ctx->pc = 0x118e20u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 844), bits); }
    // 0x118e24: 0xe49408f0  swc1        $f20, 0x8F0($a0)
    ctx->pc = 0x118e24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2288), bits); }
    // 0x118e28: 0xe4880350  swc1        $f8, 0x350($a0)
    ctx->pc = 0x118e28u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 848), bits); }
    // 0x118e2c: 0xe49508f4  swc1        $f21, 0x8F4($a0)
    ctx->pc = 0x118e2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2292), bits); }
    // 0x118e30: 0xe4890354  swc1        $f9, 0x354($a0)
    ctx->pc = 0x118e30u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 852), bits); }
    // 0x118e34: 0xe48008f8  swc1        $f0, 0x8F8($a0)
    ctx->pc = 0x118e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2296), bits); }
    // 0x118e38: 0xe48a0358  swc1        $f10, 0x358($a0)
    ctx->pc = 0x118e38u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 856), bits); }
    // 0x118e3c: 0x3c013ee8  lui         $at, 0x3EE8
    ctx->pc = 0x118e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16104 << 16));
    // 0x118e40: 0x34217171  ori         $at, $at, 0x7171
    ctx->pc = 0x118e40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29041);
    // 0x118e44: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x118e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x118e48: 0xe48408fc  swc1        $f4, 0x8FC($a0)
    ctx->pc = 0x118e48u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2300), bits); }
    // 0x118e4c: 0xe4910904  swc1        $f17, 0x904($a0)
    ctx->pc = 0x118e4cu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2308), bits); }
    // 0x118e50: 0x3c01bf63  lui         $at, 0xBF63
    ctx->pc = 0x118e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48995 << 16));
    // 0x118e54: 0x34211324  ori         $at, $at, 0x1324
    ctx->pc = 0x118e54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4900);
    // 0x118e58: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x118e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x118e5c: 0x3c01bf64  lui         $at, 0xBF64
    ctx->pc = 0x118e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48996 << 16));
    // 0x118e60: 0x34211901  ori         $at, $at, 0x1901
    ctx->pc = 0x118e60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6401);
    // 0x118e64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x118e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x118e68: 0x3c01bf65  lui         $at, 0xBF65
    ctx->pc = 0x118e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48997 << 16));
    // 0x118e6c: 0x34211a6b  ori         $at, $at, 0x1A6B
    ctx->pc = 0x118e6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6763);
    // 0x118e70: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x118e70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x118e74: 0x3c01bf66  lui         $at, 0xBF66
    ctx->pc = 0x118e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48998 << 16));
    // 0x118e78: 0x3421175e  ori         $at, $at, 0x175E
    ctx->pc = 0x118e78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5982);
    // 0x118e7c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x118e7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x118e80: 0x3c01bf67  lui         $at, 0xBF67
    ctx->pc = 0x118e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48999 << 16));
    // 0x118e84: 0x34210fd4  ori         $at, $at, 0xFD4
    ctx->pc = 0x118e84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4052);
    // 0x118e88: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x118e88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x118e8c: 0x3c01bf68  lui         $at, 0xBF68
    ctx->pc = 0x118e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49000 << 16));
    // 0x118e90: 0x342103ca  ori         $at, $at, 0x3CA
    ctx->pc = 0x118e90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)970);
    // 0x118e94: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x118e94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x118e98: 0x3c013eec  lui         $at, 0x3EEC
    ctx->pc = 0x118e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16108 << 16));
    // 0x118e9c: 0x34216a50  ori         $at, $at, 0x6A50
    ctx->pc = 0x118e9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27216);
    // 0x118ea0: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x118ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x118ea4: 0x3c013ee4  lui         $at, 0x3EE4
    ctx->pc = 0x118ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16100 << 16));
    // 0x118ea8: 0x3421740a  ori         $at, $at, 0x740A
    ctx->pc = 0x118ea8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29706);
    // 0x118eac: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x118eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x118eb0: 0x3c013ee0  lui         $at, 0x3EE0
    ctx->pc = 0x118eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16096 << 16));
    // 0x118eb4: 0x3421722f  ori         $at, $at, 0x722F
    ctx->pc = 0x118eb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29231);
    // 0x118eb8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x118eb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x118ebc: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x118ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
    // 0x118ec0: 0x34216bf3  ori         $at, $at, 0x6BF3
    ctx->pc = 0x118ec0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27635);
    // 0x118ec4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x118ec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x118ec8: 0x3c013ed8  lui         $at, 0x3ED8
    ctx->pc = 0x118ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16088 << 16));
    // 0x118ecc: 0x3421616c  ori         $at, $at, 0x616C
    ctx->pc = 0x118eccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24940);
    // 0x118ed0: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x118ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x118ed4: 0xe48b035c  swc1        $f11, 0x35C($a0)
    ctx->pc = 0x118ed4u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 860), bits); }
    // 0x118ed8: 0xe4870900  swc1        $f7, 0x900($a0)
    ctx->pc = 0x118ed8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2304), bits); }
    // 0x118edc: 0xe48c0360  swc1        $f12, 0x360($a0)
    ctx->pc = 0x118edcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 864), bits); }
    // 0x118ee0: 0xe48d0364  swc1        $f13, 0x364($a0)
    ctx->pc = 0x118ee0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 868), bits); }
    // 0x118ee4: 0xe4930908  swc1        $f19, 0x908($a0)
    ctx->pc = 0x118ee4u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2312), bits); }
    // 0x118ee8: 0xe48e0368  swc1        $f14, 0x368($a0)
    ctx->pc = 0x118ee8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 872), bits); }
    // 0x118eec: 0xe494090c  swc1        $f20, 0x90C($a0)
    ctx->pc = 0x118eecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2316), bits); }
    // 0x118ef0: 0xe48f036c  swc1        $f15, 0x36C($a0)
    ctx->pc = 0x118ef0u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 876), bits); }
    // 0x118ef4: 0xe4950910  swc1        $f21, 0x910($a0)
    ctx->pc = 0x118ef4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2320), bits); }
    // 0x118ef8: 0xe4900370  swc1        $f16, 0x370($a0)
    ctx->pc = 0x118ef8u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 880), bits); }
    // 0x118efc: 0x3c01bf68  lui         $at, 0xBF68
    ctx->pc = 0x118efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49000 << 16));
    // 0x118f00: 0x3421f339  ori         $at, $at, 0xF339
    ctx->pc = 0x118f00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62265);
    // 0x118f04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118f08: 0xe4910914  swc1        $f17, 0x914($a0)
    ctx->pc = 0x118f08u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2324), bits); }
    // 0x118f0c: 0x3c01bf6c  lui         $at, 0xBF6C
    ctx->pc = 0x118f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49004 << 16));
    // 0x118f10: 0x3421835e  ori         $at, $at, 0x835E
    ctx->pc = 0x118f10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33630);
    // 0x118f14: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x118f14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x118f18: 0xe4800374  swc1        $f0, 0x374($a0)
    ctx->pc = 0x118f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 884), bits); }
    // 0x118f1c: 0xe4840384  swc1        $f4, 0x384($a0)
    ctx->pc = 0x118f1cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 900), bits); }
    // 0x118f20: 0x3c013ed4  lui         $at, 0x3ED4
    ctx->pc = 0x118f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16084 << 16));
    // 0x118f24: 0x342152ac  ori         $at, $at, 0x52AC
    ctx->pc = 0x118f24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21164);
    // 0x118f28: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x118f28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x118f2c: 0x3c013ed0  lui         $at, 0x3ED0
    ctx->pc = 0x118f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16080 << 16));
    // 0x118f30: 0x34213fc9  ori         $at, $at, 0x3FC9
    ctx->pc = 0x118f30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16329);
    // 0x118f34: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x118f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x118f38: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x118f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x118f3c: 0x342128d7  ori         $at, $at, 0x28D7
    ctx->pc = 0x118f3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10455);
    // 0x118f40: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x118f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x118f44: 0x3c013ec8  lui         $at, 0x3EC8
    ctx->pc = 0x118f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16072 << 16));
    // 0x118f48: 0x34210de9  ori         $at, $at, 0xDE9
    ctx->pc = 0x118f48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3561);
    // 0x118f4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118f4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118f50: 0x3c013ec3  lui         $at, 0x3EC3
    ctx->pc = 0x118f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16067 << 16));
    // 0x118f54: 0x3421ef15  ori         $at, $at, 0xEF15
    ctx->pc = 0x118f54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61205);
    // 0x118f58: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x118f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x118f5c: 0xe4930918  swc1        $f19, 0x918($a0)
    ctx->pc = 0x118f5cu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2328), bits); }
    // 0x118f60: 0xe494091c  swc1        $f20, 0x91C($a0)
    ctx->pc = 0x118f60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2332), bits); }
    // 0x118f64: 0xe4950920  swc1        $f21, 0x920($a0)
    ctx->pc = 0x118f64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2336), bits); }
    // 0x118f68: 0xe4800924  swc1        $f0, 0x924($a0)
    ctx->pc = 0x118f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2340), bits); }
    // 0x118f6c: 0x3c01bf6e  lui         $at, 0xBF6E
    ctx->pc = 0x118f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49006 << 16));
    // 0x118f70: 0x3421ff20  ori         $at, $at, 0xFF20
    ctx->pc = 0x118f70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65312);
    // 0x118f74: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x118f74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x118f78: 0xe4840928  swc1        $f4, 0x928($a0)
    ctx->pc = 0x118f78u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2344), bits); }
    // 0x118f7c: 0x3c01bf69  lui         $at, 0xBF69
    ctx->pc = 0x118f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49001 << 16));
    // 0x118f80: 0x3421de1d  ori         $at, $at, 0xDE1D
    ctx->pc = 0x118f80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56861);
    // 0x118f84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x118f84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x118f88: 0x3c01bf6a  lui         $at, 0xBF6A
    ctx->pc = 0x118f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49002 << 16));
    // 0x118f8c: 0x3421c473  ori         $at, $at, 0xC473
    ctx->pc = 0x118f8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50291);
    // 0x118f90: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x118f90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x118f94: 0x3c01bf6b  lui         $at, 0xBF6B
    ctx->pc = 0x118f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49003 << 16));
    // 0x118f98: 0x3421a635  ori         $at, $at, 0xA635
    ctx->pc = 0x118f98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42549);
    // 0x118f9c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x118f9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x118fa0: 0x3c01bf6d  lui         $at, 0xBF6D
    ctx->pc = 0x118fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49005 << 16));
    // 0x118fa4: 0x34215bec  ori         $at, $at, 0x5BEC
    ctx->pc = 0x118fa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23532);
    // 0x118fa8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x118fa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x118fac: 0x3c01bf6e  lui         $at, 0xBF6E
    ctx->pc = 0x118facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49006 << 16));
    // 0x118fb0: 0x34212fd9  ori         $at, $at, 0x2FD9
    ctx->pc = 0x118fb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12249);
    // 0x118fb4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x118fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x118fb8: 0x3c01bf6f  lui         $at, 0xBF6F
    ctx->pc = 0x118fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49007 << 16));
    // 0x118fbc: 0x3421c9c0  ori         $at, $at, 0xC9C0
    ctx->pc = 0x118fbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51648);
    // 0x118fc0: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x118fc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x118fc4: 0x3c01bf70  lui         $at, 0xBF70
    ctx->pc = 0x118fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49008 << 16));
    // 0x118fc8: 0x34218fb2  ori         $at, $at, 0x8FB2
    ctx->pc = 0x118fc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36786);
    // 0x118fcc: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x118fccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x118fd0: 0x3c01bf71  lui         $at, 0xBF71
    ctx->pc = 0x118fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49009 << 16));
    // 0x118fd4: 0x342150f4  ori         $at, $at, 0x50F4
    ctx->pc = 0x118fd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20724);
    // 0x118fd8: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x118fd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x118fdc: 0x3c013ebf  lui         $at, 0x3EBF
    ctx->pc = 0x118fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16063 << 16));
    // 0x118fe0: 0x3421cc6f  ori         $at, $at, 0xCC6F
    ctx->pc = 0x118fe0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52335);
    // 0x118fe4: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x118fe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x118fe8: 0x3c013ebb  lui         $at, 0x3EBB
    ctx->pc = 0x118fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16059 << 16));
    // 0x118fec: 0x3421a60c  ori         $at, $at, 0xA60C
    ctx->pc = 0x118fecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42508);
    // 0x118ff0: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x118ff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x118ff4: 0x3c013eb7  lui         $at, 0x3EB7
    ctx->pc = 0x118ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16055 << 16));
    // 0x118ff8: 0x34217c01  ori         $at, $at, 0x7C01
    ctx->pc = 0x118ff8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31745);
    // 0x118ffc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x118ffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x119000: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x119000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x119004: 0x34214e62  ori         $at, $at, 0x4E62
    ctx->pc = 0x119004u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20066);
    // 0x119008: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x119008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x11900c: 0x3c013eaf  lui         $at, 0x3EAF
    ctx->pc = 0x11900cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16047 << 16));
    // 0x119010: 0x34211d44  ori         $at, $at, 0x1D44
    ctx->pc = 0x119010u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7492);
    // 0x119014: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119018: 0xe4870390  swc1        $f7, 0x390($a0)
    ctx->pc = 0x119018u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 912), bits); }
    // 0x11901c: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x11901cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x119020: 0x3421e8bc  ori         $at, $at, 0xE8BC
    ctx->pc = 0x119020u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59580);
    // 0x119024: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x119024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x119028: 0xe4810378  swc1        $f1, 0x378($a0)
    ctx->pc = 0x119028u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 888), bits); }
    // 0x11902c: 0xe482037c  swc1        $f2, 0x37C($a0)
    ctx->pc = 0x11902cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 892), bits); }
    // 0x119030: 0xe4830380  swc1        $f3, 0x380($a0)
    ctx->pc = 0x119030u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 896), bits); }
    // 0x119034: 0xe4850388  swc1        $f5, 0x388($a0)
    ctx->pc = 0x119034u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 904), bits); }
    // 0x119038: 0xe491092c  swc1        $f17, 0x92C($a0)
    ctx->pc = 0x119038u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2348), bits); }
    // 0x11903c: 0xe486038c  swc1        $f6, 0x38C($a0)
    ctx->pc = 0x11903cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 908), bits); }
    // 0x119040: 0xe4930930  swc1        $f19, 0x930($a0)
    ctx->pc = 0x119040u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2352), bits); }
    // 0x119044: 0xe4940934  swc1        $f20, 0x934($a0)
    ctx->pc = 0x119044u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2356), bits); }
    // 0x119048: 0xe4880394  swc1        $f8, 0x394($a0)
    ctx->pc = 0x119048u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 916), bits); }
    // 0x11904c: 0xe4950938  swc1        $f21, 0x938($a0)
    ctx->pc = 0x11904cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2360), bits); }
    // 0x119050: 0xe4890398  swc1        $f9, 0x398($a0)
    ctx->pc = 0x119050u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 920), bits); }
    // 0x119054: 0xe480093c  swc1        $f0, 0x93C($a0)
    ctx->pc = 0x119054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2364), bits); }
    // 0x119058: 0xe48a039c  swc1        $f10, 0x39C($a0)
    ctx->pc = 0x119058u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 924), bits); }
    // 0x11905c: 0x3c013ea6  lui         $at, 0x3EA6
    ctx->pc = 0x11905cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16038 << 16));
    // 0x119060: 0x3421b0de  ori         $at, $at, 0xB0DE
    ctx->pc = 0x119060u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45278);
    // 0x119064: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x119064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x119068: 0xe4840940  swc1        $f4, 0x940($a0)
    ctx->pc = 0x119068u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2368), bits); }
    // 0x11906c: 0xe4870944  swc1        $f7, 0x944($a0)
    ctx->pc = 0x11906cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2372), bits); }
    // 0x119070: 0x3c01bf72  lui         $at, 0xBF72
    ctx->pc = 0x119070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49010 << 16));
    // 0x119074: 0x34210d81  ori         $at, $at, 0xD81
    ctx->pc = 0x119074u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3457);
    // 0x119078: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x119078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x11907c: 0x3c01bf72  lui         $at, 0xBF72
    ctx->pc = 0x11907cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49010 << 16));
    // 0x119080: 0x3421c557  ori         $at, $at, 0xC557
    ctx->pc = 0x119080u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50519);
    // 0x119084: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x119084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x119088: 0x3c01bf73  lui         $at, 0xBF73
    ctx->pc = 0x119088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49011 << 16));
    // 0x11908c: 0x34217871  ori         $at, $at, 0x7871
    ctx->pc = 0x11908cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30833);
    // 0x119090: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x119090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x119094: 0x3c01bf74  lui         $at, 0xBF74
    ctx->pc = 0x119094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49012 << 16));
    // 0x119098: 0x342126cb  ori         $at, $at, 0x26CB
    ctx->pc = 0x119098u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9931);
    // 0x11909c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x11909cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1190a0: 0x3c01bf74  lui         $at, 0xBF74
    ctx->pc = 0x1190a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49012 << 16));
    // 0x1190a4: 0x3421d063  ori         $at, $at, 0xD063
    ctx->pc = 0x1190a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53347);
    // 0x1190a8: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1190a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1190ac: 0x3c01bf75  lui         $at, 0xBF75
    ctx->pc = 0x1190acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49013 << 16));
    // 0x1190b0: 0x34217536  ori         $at, $at, 0x7536
    ctx->pc = 0x1190b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30006);
    // 0x1190b4: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x1190b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x1190b8: 0x3c013ea2  lui         $at, 0x3EA2
    ctx->pc = 0x1190b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16034 << 16));
    // 0x1190bc: 0x342175c2  ori         $at, $at, 0x75C2
    ctx->pc = 0x1190bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30146);
    // 0x1190c0: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x1190c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x1190c4: 0x3c013e9e  lui         $at, 0x3E9E
    ctx->pc = 0x1190c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16030 << 16));
    // 0x1190c8: 0x3421377a  ori         $at, $at, 0x377A
    ctx->pc = 0x1190c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14202);
    // 0x1190cc: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x1190ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x1190d0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1190d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1190d4: 0x3421f61c  ori         $at, $at, 0xF61C
    ctx->pc = 0x1190d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63004);
    // 0x1190d8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1190d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1190dc: 0x3c013e95  lui         $at, 0x3E95
    ctx->pc = 0x1190dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16021 << 16));
    // 0x1190e0: 0x3421b1be  ori         $at, $at, 0xB1BE
    ctx->pc = 0x1190e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45502);
    // 0x1190e4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1190e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1190e8: 0x3c013e91  lui         $at, 0x3E91
    ctx->pc = 0x1190e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16017 << 16));
    // 0x1190ec: 0x34216a76  ori         $at, $at, 0x6A76
    ctx->pc = 0x1190ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27254);
    // 0x1190f0: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1190f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1190f4: 0xe48b03a0  swc1        $f11, 0x3A0($a0)
    ctx->pc = 0x1190f4u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 928), bits); }
    // 0x1190f8: 0xe48c03a4  swc1        $f12, 0x3A4($a0)
    ctx->pc = 0x1190f8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 932), bits); }
    // 0x1190fc: 0xe4910948  swc1        $f17, 0x948($a0)
    ctx->pc = 0x1190fcu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2376), bits); }
    // 0x119100: 0xe48d03a8  swc1        $f13, 0x3A8($a0)
    ctx->pc = 0x119100u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 936), bits); }
    // 0x119104: 0xe493094c  swc1        $f19, 0x94C($a0)
    ctx->pc = 0x119104u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2380), bits); }
    // 0x119108: 0xe48e03ac  swc1        $f14, 0x3AC($a0)
    ctx->pc = 0x119108u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 940), bits); }
    // 0x11910c: 0xe4940950  swc1        $f20, 0x950($a0)
    ctx->pc = 0x11910cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2384), bits); }
    // 0x119110: 0xe48f03b0  swc1        $f15, 0x3B0($a0)
    ctx->pc = 0x119110u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 944), bits); }
    // 0x119114: 0xe4950954  swc1        $f21, 0x954($a0)
    ctx->pc = 0x119114u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2388), bits); }
    // 0x119118: 0xe49003b4  swc1        $f16, 0x3B4($a0)
    ctx->pc = 0x119118u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 948), bits); }
    // 0x11911c: 0x3c01bf76  lui         $at, 0xBF76
    ctx->pc = 0x11911cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49014 << 16));
    // 0x119120: 0x3421153f  ori         $at, $at, 0x153F
    ctx->pc = 0x119120u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5439);
    // 0x119124: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119128: 0xe4870958  swc1        $f7, 0x958($a0)
    ctx->pc = 0x119128u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2392), bits); }
    // 0x11912c: 0x3c013e8d  lui         $at, 0x3E8D
    ctx->pc = 0x11912cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16013 << 16));
    // 0x119130: 0x34212057  ori         $at, $at, 0x2057
    ctx->pc = 0x119130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8279);
    // 0x119134: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x119134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x119138: 0xe48003b8  swc1        $f0, 0x3B8($a0)
    ctx->pc = 0x119138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 952), bits); }
    // 0x11913c: 0x3c013e88  lui         $at, 0x3E88
    ctx->pc = 0x11913cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16008 << 16));
    // 0x119140: 0x3421d378  ori         $at, $at, 0xD378
    ctx->pc = 0x119140u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54136);
    // 0x119144: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x119144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x119148: 0xe493095c  swc1        $f19, 0x95C($a0)
    ctx->pc = 0x119148u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2396), bits); }
    // 0x11914c: 0x3c01bf78  lui         $at, 0xBF78
    ctx->pc = 0x11914cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49016 << 16));
    // 0x119150: 0x3421654d  ori         $at, $at, 0x654D
    ctx->pc = 0x119150u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25933);
    // 0x119154: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x119154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x119158: 0x3c013e84  lui         $at, 0x3E84
    ctx->pc = 0x119158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16004 << 16));
    // 0x11915c: 0x342183ee  ori         $at, $at, 0x83EE
    ctx->pc = 0x11915cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33774);
    // 0x119160: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119164: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x119164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x119168: 0x342131cf  ori         $at, $at, 0x31CF
    ctx->pc = 0x119168u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12751);
    // 0x11916c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x11916cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x119170: 0xe4950960  swc1        $f21, 0x960($a0)
    ctx->pc = 0x119170u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2400), bits); }
    // 0x119174: 0x3c013e77  lui         $at, 0x3E77
    ctx->pc = 0x119174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15991 << 16));
    // 0x119178: 0x3421ba60  ori         $at, $at, 0xBA60
    ctx->pc = 0x119178u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47712);
    // 0x11917c: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x11917cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x119180: 0xe4800964  swc1        $f0, 0x964($a0)
    ctx->pc = 0x119180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2404), bits); }
    // 0x119184: 0xe4870968  swc1        $f7, 0x968($a0)
    ctx->pc = 0x119184u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2408), bits); }
    // 0x119188: 0xe48403c8  swc1        $f4, 0x3C8($a0)
    ctx->pc = 0x119188u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 968), bits); }
    // 0x11918c: 0x3c013e6f  lui         $at, 0x3E6F
    ctx->pc = 0x11918cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15983 << 16));
    // 0x119190: 0x34210c4d  ori         $at, $at, 0xC4D
    ctx->pc = 0x119190u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3149);
    // 0x119194: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x119194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x119198: 0xe493096c  swc1        $f19, 0x96C($a0)
    ctx->pc = 0x119198u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2412), bits); }
    // 0x11919c: 0x3c013e66  lui         $at, 0x3E66
    ctx->pc = 0x11919cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15974 << 16));
    // 0x1191a0: 0x34215992  ori         $at, $at, 0x5992
    ctx->pc = 0x1191a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22930);
    // 0x1191a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1191a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1191a8: 0x3c013e5d  lui         $at, 0x3E5D
    ctx->pc = 0x1191a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15965 << 16));
    // 0x1191ac: 0x3421a259  ori         $at, $at, 0xA259
    ctx->pc = 0x1191acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41561);
    // 0x1191b0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1191b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1191b4: 0x3c013e54  lui         $at, 0x3E54
    ctx->pc = 0x1191b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15956 << 16));
    // 0x1191b8: 0x3421e6cd  ori         $at, $at, 0xE6CD
    ctx->pc = 0x1191b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59085);
    // 0x1191bc: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1191bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1191c0: 0xe4950970  swc1        $f21, 0x970($a0)
    ctx->pc = 0x1191c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2416), bits); }
    // 0x1191c4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1191c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1191c8: 0x3421271c  ori         $at, $at, 0x271C
    ctx->pc = 0x1191c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10012);
    // 0x1191cc: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x1191ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x1191d0: 0xe4800974  swc1        $f0, 0x974($a0)
    ctx->pc = 0x1191d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2420), bits); }
    // 0x1191d4: 0xe4840978  swc1        $f4, 0x978($a0)
    ctx->pc = 0x1191d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2424), bits); }
    // 0x1191d8: 0xe487097c  swc1        $f7, 0x97C($a0)
    ctx->pc = 0x1191d8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2428), bits); }
    // 0x1191dc: 0x3c013e43  lui         $at, 0x3E43
    ctx->pc = 0x1191dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15939 << 16));
    // 0x1191e0: 0x3421636f  ori         $at, $at, 0x636F
    ctx->pc = 0x1191e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25455);
    // 0x1191e4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1191e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1191e8: 0xe4930980  swc1        $f19, 0x980($a0)
    ctx->pc = 0x1191e8u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2432), bits); }
    // 0x1191ec: 0x3c01bf76  lui         $at, 0xBF76
    ctx->pc = 0x1191ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49014 << 16));
    // 0x1191f0: 0x3421b07c  ori         $at, $at, 0xB07C
    ctx->pc = 0x1191f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45180);
    // 0x1191f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1191f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1191f8: 0x3c01bf77  lui         $at, 0xBF77
    ctx->pc = 0x1191f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49015 << 16));
    // 0x1191fc: 0x342146ea  ori         $at, $at, 0x46EA
    ctx->pc = 0x1191fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18154);
    // 0x119200: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x119200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x119204: 0x3c01bf77  lui         $at, 0xBF77
    ctx->pc = 0x119204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49015 << 16));
    // 0x119208: 0x3421d886  ori         $at, $at, 0xD886
    ctx->pc = 0x119208u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55430);
    // 0x11920c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x11920cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x119210: 0x3c01bf78  lui         $at, 0xBF78
    ctx->pc = 0x119210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49016 << 16));
    // 0x119214: 0x3421ed3c  ori         $at, $at, 0xED3C
    ctx->pc = 0x119214u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60732);
    // 0x119218: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x119218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x11921c: 0x3c01bf79  lui         $at, 0xBF79
    ctx->pc = 0x11921cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49017 << 16));
    // 0x119220: 0x34217051  ori         $at, $at, 0x7051
    ctx->pc = 0x119220u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28753);
    // 0x119224: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x119224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x119228: 0x3c013e3a  lui         $at, 0x3E3A
    ctx->pc = 0x119228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15930 << 16));
    // 0x11922c: 0x34219bf3  ori         $at, $at, 0x9BF3
    ctx->pc = 0x11922cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39923);
    // 0x119230: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119234: 0x3c013e31  lui         $at, 0x3E31
    ctx->pc = 0x119234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15921 << 16));
    // 0x119238: 0x3421d0d4  ori         $at, $at, 0xD0D4
    ctx->pc = 0x119238u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53460);
    // 0x11923c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x11923cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x119240: 0x3c013e29  lui         $at, 0x3E29
    ctx->pc = 0x119240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15913 << 16));
    // 0x119244: 0x3421023d  ori         $at, $at, 0x23D
    ctx->pc = 0x119244u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)573);
    // 0x119248: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x119248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x11924c: 0xe4950984  swc1        $f21, 0x984($a0)
    ctx->pc = 0x11924cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2436), bits); }
    // 0x119250: 0x3c013e20  lui         $at, 0x3E20
    ctx->pc = 0x119250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15904 << 16));
    // 0x119254: 0x3421305b  ori         $at, $at, 0x305B
    ctx->pc = 0x119254u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12379);
    // 0x119258: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x119258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x11925c: 0xe48103bc  swc1        $f1, 0x3BC($a0)
    ctx->pc = 0x11925cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 956), bits); }
    // 0x119260: 0xe48203c0  swc1        $f2, 0x3C0($a0)
    ctx->pc = 0x119260u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 960), bits); }
    // 0x119264: 0xe48303c4  swc1        $f3, 0x3C4($a0)
    ctx->pc = 0x119264u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 964), bits); }
    // 0x119268: 0xe48503cc  swc1        $f5, 0x3CC($a0)
    ctx->pc = 0x119268u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 972), bits); }
    // 0x11926c: 0xe48603d0  swc1        $f6, 0x3D0($a0)
    ctx->pc = 0x11926cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 976), bits); }
    // 0x119270: 0xe4800988  swc1        $f0, 0x988($a0)
    ctx->pc = 0x119270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2440), bits); }
    // 0x119274: 0xe484098c  swc1        $f4, 0x98C($a0)
    ctx->pc = 0x119274u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2444), bits); }
    // 0x119278: 0xe4870990  swc1        $f7, 0x990($a0)
    ctx->pc = 0x119278u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2448), bits); }
    // 0x11927c: 0x3c013e17  lui         $at, 0x3E17
    ctx->pc = 0x11927cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15895 << 16));
    // 0x119280: 0x34215b5a  ori         $at, $at, 0x5B5A
    ctx->pc = 0x119280u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23386);
    // 0x119284: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x119284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x119288: 0xe4930994  swc1        $f19, 0x994($a0)
    ctx->pc = 0x119288u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2452), bits); }
    // 0x11928c: 0x3c01bf7a  lui         $at, 0xBF7A
    ctx->pc = 0x11928cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49018 << 16));
    // 0x119290: 0x342167e2  ori         $at, $at, 0x67E2
    ctx->pc = 0x119290u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26594);
    // 0x119294: 0x4481f800  mtc1        $at, $f31
    ctx->pc = 0x119294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[31], &bits, sizeof(bits)); }
    // 0x119298: 0x3c01bf7a  lui         $at, 0xBF7A
    ctx->pc = 0x119298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49018 << 16));
    // 0x11929c: 0x3421dc58  ori         $at, $at, 0xDC58
    ctx->pc = 0x11929cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56408);
    // 0x1192a0: 0x4481f000  mtc1        $at, $f30
    ctx->pc = 0x1192a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
    // 0x1192a4: 0x3c01bf7b  lui         $at, 0xBF7B
    ctx->pc = 0x1192a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49019 << 16));
    // 0x1192a8: 0x34214beb  ori         $at, $at, 0x4BEB
    ctx->pc = 0x1192a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19435);
    // 0x1192ac: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x1192acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x1192b0: 0x3c01bf7b  lui         $at, 0xBF7B
    ctx->pc = 0x1192b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49019 << 16));
    // 0x1192b4: 0x3421b698  ori         $at, $at, 0xB698
    ctx->pc = 0x1192b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46744);
    // 0x1192b8: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x1192b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x1192bc: 0x3c01bf7c  lui         $at, 0xBF7C
    ctx->pc = 0x1192bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49020 << 16));
    // 0x1192c0: 0x34211c5c  ori         $at, $at, 0x1C5C
    ctx->pc = 0x1192c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7260);
    // 0x1192c4: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x1192c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x1192c8: 0x3c01bf7c  lui         $at, 0xBF7C
    ctx->pc = 0x1192c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49020 << 16));
    // 0x1192cc: 0x34217d37  ori         $at, $at, 0x7D37
    ctx->pc = 0x1192ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32055);
    // 0x1192d0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1192d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1192d4: 0x3c01bf7c  lui         $at, 0xBF7C
    ctx->pc = 0x1192d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49020 << 16));
    // 0x1192d8: 0x3421d925  ori         $at, $at, 0xD925
    ctx->pc = 0x1192d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55589);
    // 0x1192dc: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x1192dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x1192e0: 0x3c01bf7d  lui         $at, 0xBF7D
    ctx->pc = 0x1192e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49021 << 16));
    // 0x1192e4: 0x34213025  ori         $at, $at, 0x3025
    ctx->pc = 0x1192e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12325);
    // 0x1192e8: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x1192e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x1192ec: 0x3c01bf7d  lui         $at, 0xBF7D
    ctx->pc = 0x1192ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49021 << 16));
    // 0x1192f0: 0x34218235  ori         $at, $at, 0x8235
    ctx->pc = 0x1192f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33333);
    // 0x1192f4: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x1192f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x1192f8: 0x3c01bf79  lui         $at, 0xBF79
    ctx->pc = 0x1192f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49017 << 16));
    // 0x1192fc: 0x3421ee89  ori         $at, $at, 0xEE89
    ctx->pc = 0x1192fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61065);
    // 0x119300: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119304: 0xe4950998  swc1        $f21, 0x998($a0)
    ctx->pc = 0x119304u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2456), bits); }
    // 0x119308: 0x3c013e0e  lui         $at, 0x3E0E
    ctx->pc = 0x119308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15886 << 16));
    // 0x11930c: 0x34218365  ori         $at, $at, 0x8365
    ctx->pc = 0x11930cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33637);
    // 0x119310: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x119310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x119314: 0xe48003d4  swc1        $f0, 0x3D4($a0)
    ctx->pc = 0x119314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 980), bits); }
    // 0x119318: 0xe49f03d8  swc1        $f31, 0x3D8($a0)
    ctx->pc = 0x119318u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 984), bits); }
    // 0x11931c: 0xe49e03dc  swc1        $f30, 0x3DC($a0)
    ctx->pc = 0x11931cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 988), bits); }
    // 0x119320: 0xe49d03e0  swc1        $f29, 0x3E0($a0)
    ctx->pc = 0x119320u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 992), bits); }
    // 0x119324: 0xe49c03e4  swc1        $f28, 0x3E4($a0)
    ctx->pc = 0x119324u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 996), bits); }
    // 0x119328: 0xe49b03e8  swc1        $f27, 0x3E8($a0)
    ctx->pc = 0x119328u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1000), bits); }
    // 0x11932c: 0xe49403ec  swc1        $f20, 0x3EC($a0)
    ctx->pc = 0x11932cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1004), bits); }
    // 0x119330: 0xe49203f0  swc1        $f18, 0x3F0($a0)
    ctx->pc = 0x119330u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1008), bits); }
    // 0x119334: 0xe49103f4  swc1        $f17, 0x3F4($a0)
    ctx->pc = 0x119334u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1012), bits); }
    // 0x119338: 0xe49003f8  swc1        $f16, 0x3F8($a0)
    ctx->pc = 0x119338u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1016), bits); }
    // 0x11933c: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x11933cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
    // 0x119340: 0x3421a8a8  ori         $at, $at, 0xA8A8
    ctx->pc = 0x119340u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43176);
    // 0x119344: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x119344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x119348: 0xe493099c  swc1        $f19, 0x99C($a0)
    ctx->pc = 0x119348u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2460), bits); }
    // 0x11934c: 0xe49509a0  swc1        $f21, 0x9A0($a0)
    ctx->pc = 0x11934cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2464), bits); }
    // 0x119350: 0x3c013df9  lui         $at, 0x3DF9
    ctx->pc = 0x119350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15865 << 16));
    // 0x119354: 0x342196a2  ori         $at, $at, 0x96A2
    ctx->pc = 0x119354u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38562);
    // 0x119358: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x119358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x11935c: 0x3c013de7  lui         $at, 0x3DE7
    ctx->pc = 0x11935cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15847 << 16));
    // 0x119360: 0x3421d716  ori         $at, $at, 0xD716
    ctx->pc = 0x119360u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55062);
    // 0x119364: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x119364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x119368: 0xe49309a4  swc1        $f19, 0x9A4($a0)
    ctx->pc = 0x119368u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2468), bits); }
    // 0x11936c: 0xe49509a8  swc1        $f21, 0x9A8($a0)
    ctx->pc = 0x11936cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2472), bits); }
    // 0x119370: 0x3c013dd6  lui         $at, 0x3DD6
    ctx->pc = 0x119370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15830 << 16));
    // 0x119374: 0x34211305  ori         $at, $at, 0x1305
    ctx->pc = 0x119374u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4869);
    // 0x119378: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x119378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x11937c: 0x3c013dc4  lui         $at, 0x3DC4
    ctx->pc = 0x11937cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15812 << 16));
    // 0x119380: 0x34214ac7  ori         $at, $at, 0x4AC7
    ctx->pc = 0x119380u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19143);
    // 0x119384: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x119384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x119388: 0xe49309ac  swc1        $f19, 0x9AC($a0)
    ctx->pc = 0x119388u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2476), bits); }
    // 0x11938c: 0xe49509b0  swc1        $f21, 0x9B0($a0)
    ctx->pc = 0x11938cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2480), bits); }
    // 0x119390: 0x3c013db2  lui         $at, 0x3DB2
    ctx->pc = 0x119390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15794 << 16));
    // 0x119394: 0x34217eb6  ori         $at, $at, 0x7EB6
    ctx->pc = 0x119394u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32438);
    // 0x119398: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x119398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x11939c: 0x3c013da0  lui         $at, 0x3DA0
    ctx->pc = 0x11939cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15776 << 16));
    // 0x1193a0: 0x3421af2a  ori         $at, $at, 0xAF2A
    ctx->pc = 0x1193a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44842);
    // 0x1193a4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1193a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1193a8: 0xe49309b4  swc1        $f19, 0x9B4($a0)
    ctx->pc = 0x1193a8u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2484), bits); }
    // 0x1193ac: 0xe49509b8  swc1        $f21, 0x9B8($a0)
    ctx->pc = 0x1193acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2488), bits); }
    // 0x1193b0: 0x3c013d8e  lui         $at, 0x3D8E
    ctx->pc = 0x1193b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15758 << 16));
    // 0x1193b4: 0x3421dc7b  ori         $at, $at, 0xDC7B
    ctx->pc = 0x1193b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56443);
    // 0x1193b8: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x1193b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x1193bc: 0x3c013d7a  lui         $at, 0x3D7A
    ctx->pc = 0x1193bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15738 << 16));
    // 0x1193c0: 0x34210e09  ori         $at, $at, 0xE09
    ctx->pc = 0x1193c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3593);
    // 0x1193c4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1193c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1193c8: 0xe49309bc  swc1        $f19, 0x9BC($a0)
    ctx->pc = 0x1193c8u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2492), bits); }
    // 0x1193cc: 0xe49509c0  swc1        $f21, 0x9C0($a0)
    ctx->pc = 0x1193ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2496), bits); }
    // 0x1193d0: 0x3c013d56  lui         $at, 0x3D56
    ctx->pc = 0x1193d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15702 << 16));
    // 0x1193d4: 0x34215e3a  ori         $at, $at, 0x5E3A
    ctx->pc = 0x1193d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24122);
    // 0x1193d8: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x1193d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x1193dc: 0x3c013d32  lui         $at, 0x3D32
    ctx->pc = 0x1193dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15666 << 16));
    // 0x1193e0: 0x3421aa3e  ori         $at, $at, 0xAA3E
    ctx->pc = 0x1193e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43582);
    // 0x1193e4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1193e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1193e8: 0xe49309c4  swc1        $f19, 0x9C4($a0)
    ctx->pc = 0x1193e8u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2500), bits); }
    // 0x1193ec: 0xe49509c8  swc1        $f21, 0x9C8($a0)
    ctx->pc = 0x1193ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2504), bits); }
    // 0x1193f0: 0x3c013d0e  lui         $at, 0x3D0E
    ctx->pc = 0x1193f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15630 << 16));
    // 0x1193f4: 0x3421f2c6  ori         $at, $at, 0xF2C6
    ctx->pc = 0x1193f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62150);
    // 0x1193f8: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x1193f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x1193fc: 0x3c013cd6  lui         $at, 0x3CD6
    ctx->pc = 0x1193fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15574 << 16));
    // 0x119400: 0x3421710a  ori         $at, $at, 0x710A
    ctx->pc = 0x119400u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28938);
    // 0x119404: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x119404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x119408: 0xe49309cc  swc1        $f19, 0x9CC($a0)
    ctx->pc = 0x119408u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2508), bits); }
    // 0x11940c: 0xe49509d0  swc1        $f21, 0x9D0($a0)
    ctx->pc = 0x11940cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2512), bits); }
    // 0x119410: 0x3c01bf7d  lui         $at, 0xBF7D
    ctx->pc = 0x119410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49021 << 16));
    // 0x119414: 0x3421cf55  ori         $at, $at, 0xCF55
    ctx->pc = 0x119414u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53077);
    // 0x119418: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x119418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x11941c: 0x3c01bf7e  lui         $at, 0xBF7E
    ctx->pc = 0x11941cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49022 << 16));
    // 0x119420: 0x34211781  ori         $at, $at, 0x1781
    ctx->pc = 0x119420u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6017);
    // 0x119424: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x119424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x119428: 0x3c01bf7e  lui         $at, 0xBF7E
    ctx->pc = 0x119428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49022 << 16));
    // 0x11942c: 0x34215aba  ori         $at, $at, 0x5ABA
    ctx->pc = 0x11942cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23226);
    // 0x119430: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x119430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x119434: 0x3c01bf7e  lui         $at, 0xBF7E
    ctx->pc = 0x119434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49022 << 16));
    // 0x119438: 0x342198fd  ori         $at, $at, 0x98FD
    ctx->pc = 0x119438u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39165);
    // 0x11943c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11943cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x119440: 0x3c01bf7f  lui         $at, 0xBF7F
    ctx->pc = 0x119440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49023 << 16));
    // 0x119444: 0x3421fd81  ori         $at, $at, 0xFD81
    ctx->pc = 0x119444u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64897);
    // 0x119448: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x119448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11944c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x11944cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x119450: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119454: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x119454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x119458: 0x3421f859  ori         $at, $at, 0xF859
    ctx->pc = 0x119458u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63577);
    // 0x11945c: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x11945cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x119460: 0x3c013c0e  lui         $at, 0x3C0E
    ctx->pc = 0x119460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15374 << 16));
    // 0x119464: 0x3421f9be  ori         $at, $at, 0xF9BE
    ctx->pc = 0x119464u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63934);
    // 0x119468: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x119468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x11946c: 0x3c01bf7e  lui         $at, 0xBF7E
    ctx->pc = 0x11946cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49022 << 16));
    // 0x119470: 0x3421d249  ori         $at, $at, 0xD249
    ctx->pc = 0x119470u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53833);
    // 0x119474: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x119474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x119478: 0xe49309d4  swc1        $f19, 0x9D4($a0)
    ctx->pc = 0x119478u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2516), bits); }
    // 0x11947c: 0xe49509d8  swc1        $f21, 0x9D8($a0)
    ctx->pc = 0x11947cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2520), bits); }
    // 0x119480: 0xe4800438  swc1        $f0, 0x438($a0)
    ctx->pc = 0x119480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1080), bits); }
    // 0x119484: 0xe481043c  swc1        $f1, 0x43C($a0)
    ctx->pc = 0x119484u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1084), bits); }
    // 0x119488: 0xe48f03fc  swc1        $f15, 0x3FC($a0)
    ctx->pc = 0x119488u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1020), bits); }
    // 0x11948c: 0xe48e0400  swc1        $f14, 0x400($a0)
    ctx->pc = 0x11948cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1024), bits); }
    // 0x119490: 0xe48d0404  swc1        $f13, 0x404($a0)
    ctx->pc = 0x119490u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1028), bits); }
    // 0x119494: 0xe48c0408  swc1        $f12, 0x408($a0)
    ctx->pc = 0x119494u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1032), bits); }
    // 0x119498: 0x3c01bf7f  lui         $at, 0xBF7F
    ctx->pc = 0x119498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49023 << 16));
    // 0x11949c: 0x3421069e  ori         $at, $at, 0x69E
    ctx->pc = 0x11949cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1694);
    // 0x1194a0: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1194a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1194a4: 0x3c01bf7f  lui         $at, 0xBF7F
    ctx->pc = 0x1194a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49023 << 16));
    // 0x1194a8: 0x342135f9  ori         $at, $at, 0x35F9
    ctx->pc = 0x1194a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13817);
    // 0x1194ac: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1194acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1194b0: 0x3c01bf7f  lui         $at, 0xBF7F
    ctx->pc = 0x1194b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49023 << 16));
    // 0x1194b4: 0x3421605c  ori         $at, $at, 0x605C
    ctx->pc = 0x1194b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24668);
    // 0x1194b8: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1194b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1194bc: 0x3c01bf7f  lui         $at, 0xBF7F
    ctx->pc = 0x1194bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49023 << 16));
    // 0x1194c0: 0x342185c3  ori         $at, $at, 0x85C3
    ctx->pc = 0x1194c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34243);
    // 0x1194c4: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1194c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1194c8: 0x3c01bf7f  lui         $at, 0xBF7F
    ctx->pc = 0x1194c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49023 << 16));
    // 0x1194cc: 0x3421a62f  ori         $at, $at, 0xA62F
    ctx->pc = 0x1194ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42543);
    // 0x1194d0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1194d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1194d4: 0x3c01bf7f  lui         $at, 0xBF7F
    ctx->pc = 0x1194d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49023 << 16));
    // 0x1194d8: 0x3421c1a0  ori         $at, $at, 0xC1A0
    ctx->pc = 0x1194d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49568);
    // 0x1194dc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1194dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1194e0: 0x3c01bf7f  lui         $at, 0xBF7F
    ctx->pc = 0x1194e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49023 << 16));
    // 0x1194e4: 0x3421d814  ori         $at, $at, 0xD814
    ctx->pc = 0x1194e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55316);
    // 0x1194e8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1194e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1194ec: 0x3c01bf7f  lui         $at, 0xBF7F
    ctx->pc = 0x1194ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49023 << 16));
    // 0x1194f0: 0x3421e98b  ori         $at, $at, 0xE98B
    ctx->pc = 0x1194f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59787);
    // 0x1194f4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1194f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1194f8: 0x3c01bf7f  lui         $at, 0xBF7F
    ctx->pc = 0x1194f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49023 << 16));
    // 0x1194fc: 0x3421f605  ori         $at, $at, 0xF605
    ctx->pc = 0x1194fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62981);
    // 0x119500: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x119500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x119504: 0xe48b040c  swc1        $f11, 0x40C($a0)
    ctx->pc = 0x119504u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1036), bits); }
    // 0x119508: 0x3c01bc0e  lui         $at, 0xBC0E
    ctx->pc = 0x119508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48142 << 16));
    // 0x11950c: 0x3421f9be  ori         $at, $at, 0xF9BE
    ctx->pc = 0x11950cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63934);
    // 0x119510: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119514: 0xe48a0410  swc1        $f10, 0x410($a0)
    ctx->pc = 0x119514u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1040), bits); }
    // 0x119518: 0xe4890414  swc1        $f9, 0x414($a0)
    ctx->pc = 0x119518u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1044), bits); }
    // 0x11951c: 0xe4880418  swc1        $f8, 0x418($a0)
    ctx->pc = 0x11951cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1048), bits); }
    // 0x119520: 0xe487041c  swc1        $f7, 0x41C($a0)
    ctx->pc = 0x119520u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1052), bits); }
    // 0x119524: 0xe4860420  swc1        $f6, 0x420($a0)
    ctx->pc = 0x119524u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1056), bits); }
    // 0x119528: 0xe4850424  swc1        $f5, 0x424($a0)
    ctx->pc = 0x119528u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1060), bits); }
    // 0x11952c: 0xe4840428  swc1        $f4, 0x428($a0)
    ctx->pc = 0x11952cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1064), bits); }
    // 0x119530: 0xe483042c  swc1        $f3, 0x42C($a0)
    ctx->pc = 0x119530u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1068), bits); }
    // 0x119534: 0xe4820430  swc1        $f2, 0x430($a0)
    ctx->pc = 0x119534u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1072), bits); }
    // 0x119538: 0xe4810434  swc1        $f1, 0x434($a0)
    ctx->pc = 0x119538u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1076), bits); }
    // 0x11953c: 0xac8009dc  sw          $zero, 0x9DC($a0)
    ctx->pc = 0x11953cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2524), GPR_U32(ctx, 0));
    // 0x119540: 0x3c01bc8e  lui         $at, 0xBC8E
    ctx->pc = 0x119540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48270 << 16));
    // 0x119544: 0x3421f859  ori         $at, $at, 0xF859
    ctx->pc = 0x119544u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63577);
    // 0x119548: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x119548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x11954c: 0xe48009e0  swc1        $f0, 0x9E0($a0)
    ctx->pc = 0x11954cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2528), bits); }
    // 0x119550: 0x3c01bcd6  lui         $at, 0xBCD6
    ctx->pc = 0x119550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48342 << 16));
    // 0x119554: 0x3421710a  ori         $at, $at, 0x710A
    ctx->pc = 0x119554u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28938);
    // 0x119558: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x119558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x11955c: 0xe49309e4  swc1        $f19, 0x9E4($a0)
    ctx->pc = 0x11955cu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2532), bits); }
    // 0x119560: 0xe4840448  swc1        $f4, 0x448($a0)
    ctx->pc = 0x119560u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1096), bits); }
    // 0x119564: 0xe49509e8  swc1        $f21, 0x9E8($a0)
    ctx->pc = 0x119564u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2536), bits); }
    // 0x119568: 0x3c01bd0e  lui         $at, 0xBD0E
    ctx->pc = 0x119568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48398 << 16));
    // 0x11956c: 0x3421f2c6  ori         $at, $at, 0xF2C6
    ctx->pc = 0x11956cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62150);
    // 0x119570: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119574: 0x3c01bd32  lui         $at, 0xBD32
    ctx->pc = 0x119574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48434 << 16));
    // 0x119578: 0x3421aa3e  ori         $at, $at, 0xAA3E
    ctx->pc = 0x119578u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43582);
    // 0x11957c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x11957cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x119580: 0x3c01bd56  lui         $at, 0xBD56
    ctx->pc = 0x119580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48470 << 16));
    // 0x119584: 0x34215e3a  ori         $at, $at, 0x5E3A
    ctx->pc = 0x119584u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24122);
    // 0x119588: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x119588u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x11958c: 0x3c01bd7a  lui         $at, 0xBD7A
    ctx->pc = 0x11958cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48506 << 16));
    // 0x119590: 0x34210e09  ori         $at, $at, 0xE09
    ctx->pc = 0x119590u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3593);
    // 0x119594: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x119594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x119598: 0xe48009ec  swc1        $f0, 0x9EC($a0)
    ctx->pc = 0x119598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2540), bits); }
    // 0x11959c: 0xe48409f0  swc1        $f4, 0x9F0($a0)
    ctx->pc = 0x11959cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2544), bits); }
    // 0x1195a0: 0xe49309f4  swc1        $f19, 0x9F4($a0)
    ctx->pc = 0x1195a0u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2548), bits); }
    // 0x1195a4: 0xe4870454  swc1        $f7, 0x454($a0)
    ctx->pc = 0x1195a4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1108), bits); }
    // 0x1195a8: 0xe49509f8  swc1        $f21, 0x9F8($a0)
    ctx->pc = 0x1195a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2552), bits); }
    // 0x1195ac: 0x3c01bd8e  lui         $at, 0xBD8E
    ctx->pc = 0x1195acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48526 << 16));
    // 0x1195b0: 0x3421dc7b  ori         $at, $at, 0xDC7B
    ctx->pc = 0x1195b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56443);
    // 0x1195b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1195b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1195b8: 0x3c01bda0  lui         $at, 0xBDA0
    ctx->pc = 0x1195b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48544 << 16));
    // 0x1195bc: 0x3421af2a  ori         $at, $at, 0xAF2A
    ctx->pc = 0x1195bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44842);
    // 0x1195c0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1195c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1195c4: 0x3c01bdb2  lui         $at, 0xBDB2
    ctx->pc = 0x1195c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48562 << 16));
    // 0x1195c8: 0x34217eb6  ori         $at, $at, 0x7EB6
    ctx->pc = 0x1195c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32438);
    // 0x1195cc: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1195ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1195d0: 0x3c01bdc4  lui         $at, 0xBDC4
    ctx->pc = 0x1195d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48580 << 16));
    // 0x1195d4: 0x34214ac7  ori         $at, $at, 0x4AC7
    ctx->pc = 0x1195d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19143);
    // 0x1195d8: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x1195d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x1195dc: 0x3c01bdd6  lui         $at, 0xBDD6
    ctx->pc = 0x1195dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48598 << 16));
    // 0x1195e0: 0x34211305  ori         $at, $at, 0x1305
    ctx->pc = 0x1195e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4869);
    // 0x1195e4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1195e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1195e8: 0xe4820440  swc1        $f2, 0x440($a0)
    ctx->pc = 0x1195e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1088), bits); }
    // 0x1195ec: 0xe4830444  swc1        $f3, 0x444($a0)
    ctx->pc = 0x1195ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1092), bits); }
    // 0x1195f0: 0xe485044c  swc1        $f5, 0x44C($a0)
    ctx->pc = 0x1195f0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1100), bits); }
    // 0x1195f4: 0xe4860450  swc1        $f6, 0x450($a0)
    ctx->pc = 0x1195f4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1104), bits); }
    // 0x1195f8: 0xe4880458  swc1        $f8, 0x458($a0)
    ctx->pc = 0x1195f8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1112), bits); }
    // 0x1195fc: 0xe48009fc  swc1        $f0, 0x9FC($a0)
    ctx->pc = 0x1195fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2556), bits); }
    // 0x119600: 0xe489045c  swc1        $f9, 0x45C($a0)
    ctx->pc = 0x119600u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1116), bits); }
    // 0x119604: 0xe4840a00  swc1        $f4, 0xA00($a0)
    ctx->pc = 0x119604u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2560), bits); }
    // 0x119608: 0xe48a0460  swc1        $f10, 0x460($a0)
    ctx->pc = 0x119608u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1120), bits); }
    // 0x11960c: 0xe4870a04  swc1        $f7, 0xA04($a0)
    ctx->pc = 0x11960cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2564), bits); }
    // 0x119610: 0xe48b0464  swc1        $f11, 0x464($a0)
    ctx->pc = 0x119610u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1124), bits); }
    // 0x119614: 0xe4930a08  swc1        $f19, 0xA08($a0)
    ctx->pc = 0x119614u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2568), bits); }
    // 0x119618: 0xe48c0468  swc1        $f12, 0x468($a0)
    ctx->pc = 0x119618u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1128), bits); }
    // 0x11961c: 0xe4950a0c  swc1        $f21, 0xA0C($a0)
    ctx->pc = 0x11961cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2572), bits); }
    // 0x119620: 0x3c01be17  lui         $at, 0xBE17
    ctx->pc = 0x119620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48663 << 16));
    // 0x119624: 0x34215b5a  ori         $at, $at, 0x5B5A
    ctx->pc = 0x119624u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23386);
    // 0x119628: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x119628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x11962c: 0x3c01bde7  lui         $at, 0xBDE7
    ctx->pc = 0x11962cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48615 << 16));
    // 0x119630: 0x3421d716  ori         $at, $at, 0xD716
    ctx->pc = 0x119630u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55062);
    // 0x119634: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119638: 0xe4950a20  swc1        $f21, 0xA20($a0)
    ctx->pc = 0x119638u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2592), bits); }
    // 0x11963c: 0x3c01bdf9  lui         $at, 0xBDF9
    ctx->pc = 0x11963cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48633 << 16));
    // 0x119640: 0x342196a2  ori         $at, $at, 0x96A2
    ctx->pc = 0x119640u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38562);
    // 0x119644: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x119644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x119648: 0x3c01be05  lui         $at, 0xBE05
    ctx->pc = 0x119648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48645 << 16));
    // 0x11964c: 0x3421a8a8  ori         $at, $at, 0xA8A8
    ctx->pc = 0x11964cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43176);
    // 0x119650: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x119650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x119654: 0x3c01be0e  lui         $at, 0xBE0E
    ctx->pc = 0x119654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48654 << 16));
    // 0x119658: 0x34218365  ori         $at, $at, 0x8365
    ctx->pc = 0x119658u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33637);
    // 0x11965c: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x11965cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x119660: 0x3c01be20  lui         $at, 0xBE20
    ctx->pc = 0x119660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48672 << 16));
    // 0x119664: 0x3421305b  ori         $at, $at, 0x305B
    ctx->pc = 0x119664u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12379);
    // 0x119668: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x119668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x11966c: 0xe48d046c  swc1        $f13, 0x46C($a0)
    ctx->pc = 0x11966cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1132), bits); }
    // 0x119670: 0xe4800a10  swc1        $f0, 0xA10($a0)
    ctx->pc = 0x119670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2576), bits); }
    // 0x119674: 0xe48e0470  swc1        $f14, 0x470($a0)
    ctx->pc = 0x119674u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1136), bits); }
    // 0x119678: 0xe4840a14  swc1        $f4, 0xA14($a0)
    ctx->pc = 0x119678u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2580), bits); }
    // 0x11967c: 0xe48f0474  swc1        $f15, 0x474($a0)
    ctx->pc = 0x11967cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1140), bits); }
    // 0x119680: 0xe4870a18  swc1        $f7, 0xA18($a0)
    ctx->pc = 0x119680u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2584), bits); }
    // 0x119684: 0xe4900478  swc1        $f16, 0x478($a0)
    ctx->pc = 0x119684u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1144), bits); }
    // 0x119688: 0xe4930a1c  swc1        $f19, 0xA1C($a0)
    ctx->pc = 0x119688u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2588), bits); }
    // 0x11968c: 0xe491047c  swc1        $f17, 0x47C($a0)
    ctx->pc = 0x11968cu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1148), bits); }
    // 0x119690: 0xe4920480  swc1        $f18, 0x480($a0)
    ctx->pc = 0x119690u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1152), bits); }
    // 0x119694: 0xe4950a24  swc1        $f21, 0xA24($a0)
    ctx->pc = 0x119694u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2596), bits); }
    // 0x119698: 0xe4940484  swc1        $f20, 0x484($a0)
    ctx->pc = 0x119698u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1156), bits); }
    // 0x11969c: 0x3c01be29  lui         $at, 0xBE29
    ctx->pc = 0x11969cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48681 << 16));
    // 0x1196a0: 0x3421023d  ori         $at, $at, 0x23D
    ctx->pc = 0x1196a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)573);
    // 0x1196a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1196a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1196a8: 0x3c01be31  lui         $at, 0xBE31
    ctx->pc = 0x1196a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48689 << 16));
    // 0x1196ac: 0x3421d0d4  ori         $at, $at, 0xD0D4
    ctx->pc = 0x1196acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53460);
    // 0x1196b0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1196b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1196b4: 0xe4940a28  swc1        $f20, 0xA28($a0)
    ctx->pc = 0x1196b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2600), bits); }
    // 0x1196b8: 0x3c01be3a  lui         $at, 0xBE3A
    ctx->pc = 0x1196b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48698 << 16));
    // 0x1196bc: 0x34219bf3  ori         $at, $at, 0x9BF3
    ctx->pc = 0x1196bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39923);
    // 0x1196c0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1196c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1196c4: 0xe4950a2c  swc1        $f21, 0xA2C($a0)
    ctx->pc = 0x1196c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2604), bits); }
    // 0x1196c8: 0xe4940a30  swc1        $f20, 0xA30($a0)
    ctx->pc = 0x1196c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2608), bits); }
    // 0x1196cc: 0x3c01be43  lui         $at, 0xBE43
    ctx->pc = 0x1196ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48707 << 16));
    // 0x1196d0: 0x3421636f  ori         $at, $at, 0x636F
    ctx->pc = 0x1196d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25455);
    // 0x1196d4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1196d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1196d8: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x1196d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x1196dc: 0x3421271c  ori         $at, $at, 0x271C
    ctx->pc = 0x1196dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10012);
    // 0x1196e0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1196e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1196e4: 0xe4950a34  swc1        $f21, 0xA34($a0)
    ctx->pc = 0x1196e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2612), bits); }
    // 0x1196e8: 0xe4940a38  swc1        $f20, 0xA38($a0)
    ctx->pc = 0x1196e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2616), bits); }
    // 0x1196ec: 0x3c01be5d  lui         $at, 0xBE5D
    ctx->pc = 0x1196ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48733 << 16));
    // 0x1196f0: 0x3421a259  ori         $at, $at, 0xA259
    ctx->pc = 0x1196f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41561);
    // 0x1196f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1196f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1196f8: 0x3c01bf79  lui         $at, 0xBF79
    ctx->pc = 0x1196f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49017 << 16));
    // 0x1196fc: 0x34217051  ori         $at, $at, 0x7051
    ctx->pc = 0x1196fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28753);
    // 0x119700: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x119700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x119704: 0x3c01be66  lui         $at, 0xBE66
    ctx->pc = 0x119704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48742 << 16));
    // 0x119708: 0x34215992  ori         $at, $at, 0x5992
    ctx->pc = 0x119708u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22930);
    // 0x11970c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11970cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x119710: 0x3c01bf78  lui         $at, 0xBF78
    ctx->pc = 0x119710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49016 << 16));
    // 0x119714: 0x3421ed3c  ori         $at, $at, 0xED3C
    ctx->pc = 0x119714u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60732);
    // 0x119718: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x119718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11971c: 0x3c01be6f  lui         $at, 0xBE6F
    ctx->pc = 0x11971cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48751 << 16));
    // 0x119720: 0x34210c4d  ori         $at, $at, 0xC4D
    ctx->pc = 0x119720u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3149);
    // 0x119724: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x119724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x119728: 0x3c01bf78  lui         $at, 0xBF78
    ctx->pc = 0x119728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49016 << 16));
    // 0x11972c: 0x3421654d  ori         $at, $at, 0x654D
    ctx->pc = 0x11972cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25933);
    // 0x119730: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x119730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x119734: 0x3c01be77  lui         $at, 0xBE77
    ctx->pc = 0x119734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48759 << 16));
    // 0x119738: 0x3421ba60  ori         $at, $at, 0xBA60
    ctx->pc = 0x119738u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47712);
    // 0x11973c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x11973cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x119740: 0x3c01bf77  lui         $at, 0xBF77
    ctx->pc = 0x119740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49015 << 16));
    // 0x119744: 0x3421d886  ori         $at, $at, 0xD886
    ctx->pc = 0x119744u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55430);
    // 0x119748: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x119748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x11974c: 0x3c01be54  lui         $at, 0xBE54
    ctx->pc = 0x11974cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48724 << 16));
    // 0x119750: 0x3421e6cd  ori         $at, $at, 0xE6CD
    ctx->pc = 0x119750u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59085);
    // 0x119754: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x119754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x119758: 0x3c01bf79  lui         $at, 0xBF79
    ctx->pc = 0x119758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49017 << 16));
    // 0x11975c: 0x3421ee89  ori         $at, $at, 0xEE89
    ctx->pc = 0x11975cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61065);
    // 0x119760: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x119760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x119764: 0x3c01be80  lui         $at, 0xBE80
    ctx->pc = 0x119764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48768 << 16));
    // 0x119768: 0x342131cf  ori         $at, $at, 0x31CF
    ctx->pc = 0x119768u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12751);
    // 0x11976c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x11976cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x119770: 0xe49b0488  swc1        $f27, 0x488($a0)
    ctx->pc = 0x119770u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1160), bits); }
    // 0x119774: 0xe49c048c  swc1        $f28, 0x48C($a0)
    ctx->pc = 0x119774u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1164), bits); }
    // 0x119778: 0xe49d0490  swc1        $f29, 0x490($a0)
    ctx->pc = 0x119778u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1168), bits); }
    // 0x11977c: 0xe49e0494  swc1        $f30, 0x494($a0)
    ctx->pc = 0x11977cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1172), bits); }
    // 0x119780: 0xe49f0498  swc1        $f31, 0x498($a0)
    ctx->pc = 0x119780u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1176), bits); }
    // 0x119784: 0xe4950a3c  swc1        $f21, 0xA3C($a0)
    ctx->pc = 0x119784u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2620), bits); }
    // 0x119788: 0xe494049c  swc1        $f20, 0x49C($a0)
    ctx->pc = 0x119788u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1180), bits); }
    // 0x11978c: 0xe4800a40  swc1        $f0, 0xA40($a0)
    ctx->pc = 0x11978cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2624), bits); }
    // 0x119790: 0xe48104a0  swc1        $f1, 0x4A0($a0)
    ctx->pc = 0x119790u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1184), bits); }
    // 0x119794: 0xe4820a44  swc1        $f2, 0xA44($a0)
    ctx->pc = 0x119794u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2628), bits); }
    // 0x119798: 0xe48304a4  swc1        $f3, 0x4A4($a0)
    ctx->pc = 0x119798u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1188), bits); }
    // 0x11979c: 0xe4840a48  swc1        $f4, 0xA48($a0)
    ctx->pc = 0x11979cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2632), bits); }
    // 0x1197a0: 0xe48504a8  swc1        $f5, 0x4A8($a0)
    ctx->pc = 0x1197a0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1192), bits); }
    // 0x1197a4: 0xe4860a4c  swc1        $f6, 0xA4C($a0)
    ctx->pc = 0x1197a4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2636), bits); }
    // 0x1197a8: 0xe48704ac  swc1        $f7, 0x4AC($a0)
    ctx->pc = 0x1197a8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1196), bits); }
    // 0x1197ac: 0x3c01bf77  lui         $at, 0xBF77
    ctx->pc = 0x1197acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49015 << 16));
    // 0x1197b0: 0x342146ea  ori         $at, $at, 0x46EA
    ctx->pc = 0x1197b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18154);
    // 0x1197b4: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1197b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1197b8: 0x3c01be84  lui         $at, 0xBE84
    ctx->pc = 0x1197b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48772 << 16));
    // 0x1197bc: 0x342183ee  ori         $at, $at, 0x83EE
    ctx->pc = 0x1197bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33774);
    // 0x1197c0: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1197c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1197c4: 0x3c01bf76  lui         $at, 0xBF76
    ctx->pc = 0x1197c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49014 << 16));
    // 0x1197c8: 0x3421b07c  ori         $at, $at, 0xB07C
    ctx->pc = 0x1197c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45180);
    // 0x1197cc: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1197ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x1197d0: 0x3c01be88  lui         $at, 0xBE88
    ctx->pc = 0x1197d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48776 << 16));
    // 0x1197d4: 0x3421d378  ori         $at, $at, 0xD378
    ctx->pc = 0x1197d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54136);
    // 0x1197d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1197d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1197dc: 0x3c01bf76  lui         $at, 0xBF76
    ctx->pc = 0x1197dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49014 << 16));
    // 0x1197e0: 0x3421153f  ori         $at, $at, 0x153F
    ctx->pc = 0x1197e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5439);
    // 0x1197e4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1197e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1197e8: 0x3c01be8d  lui         $at, 0xBE8D
    ctx->pc = 0x1197e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48781 << 16));
    // 0x1197ec: 0x34212057  ori         $at, $at, 0x2057
    ctx->pc = 0x1197ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8279);
    // 0x1197f0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1197f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1197f4: 0x3c01bf75  lui         $at, 0xBF75
    ctx->pc = 0x1197f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49013 << 16));
    // 0x1197f8: 0x34217536  ori         $at, $at, 0x7536
    ctx->pc = 0x1197f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30006);
    // 0x1197fc: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1197fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x119800: 0x3c01be91  lui         $at, 0xBE91
    ctx->pc = 0x119800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48785 << 16));
    // 0x119804: 0x34216a76  ori         $at, $at, 0x6A76
    ctx->pc = 0x119804u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27254);
    // 0x119808: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x119808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x11980c: 0x3c01bf74  lui         $at, 0xBF74
    ctx->pc = 0x11980cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49012 << 16));
    // 0x119810: 0x3421d063  ori         $at, $at, 0xD063
    ctx->pc = 0x119810u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53347);
    // 0x119814: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x119814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x119818: 0x3c01be95  lui         $at, 0xBE95
    ctx->pc = 0x119818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48789 << 16));
    // 0x11981c: 0x3421b1be  ori         $at, $at, 0xB1BE
    ctx->pc = 0x11981cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45502);
    // 0x119820: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x119820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x119824: 0x3c01bf74  lui         $at, 0xBF74
    ctx->pc = 0x119824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49012 << 16));
    // 0x119828: 0x342126cb  ori         $at, $at, 0x26CB
    ctx->pc = 0x119828u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9931);
    // 0x11982c: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x11982cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x119830: 0xe4880a50  swc1        $f8, 0xA50($a0)
    ctx->pc = 0x119830u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2640), bits); }
    // 0x119834: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x119834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x119838: 0x3421f61c  ori         $at, $at, 0xF61C
    ctx->pc = 0x119838u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63004);
    // 0x11983c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x11983cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x119840: 0xe48904b0  swc1        $f9, 0x4B0($a0)
    ctx->pc = 0x119840u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1200), bits); }
    // 0x119844: 0xe48a0a54  swc1        $f10, 0xA54($a0)
    ctx->pc = 0x119844u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2644), bits); }
    // 0x119848: 0xe48b04b4  swc1        $f11, 0x4B4($a0)
    ctx->pc = 0x119848u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1204), bits); }
    // 0x11984c: 0xe48c0a58  swc1        $f12, 0xA58($a0)
    ctx->pc = 0x11984cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2648), bits); }
    // 0x119850: 0xe48d04b8  swc1        $f13, 0x4B8($a0)
    ctx->pc = 0x119850u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1208), bits); }
    // 0x119854: 0xe48e0a5c  swc1        $f14, 0xA5C($a0)
    ctx->pc = 0x119854u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2652), bits); }
    // 0x119858: 0xe48f04bc  swc1        $f15, 0x4BC($a0)
    ctx->pc = 0x119858u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1212), bits); }
    // 0x11985c: 0xe4900a60  swc1        $f16, 0xA60($a0)
    ctx->pc = 0x11985cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2656), bits); }
    // 0x119860: 0xe49104c0  swc1        $f17, 0x4C0($a0)
    ctx->pc = 0x119860u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1216), bits); }
    // 0x119864: 0xe4920a64  swc1        $f18, 0xA64($a0)
    ctx->pc = 0x119864u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2660), bits); }
    // 0x119868: 0xe49304c4  swc1        $f19, 0x4C4($a0)
    ctx->pc = 0x119868u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1220), bits); }
    // 0x11986c: 0x3c01bf73  lui         $at, 0xBF73
    ctx->pc = 0x11986cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49011 << 16));
    // 0x119870: 0x34217871  ori         $at, $at, 0x7871
    ctx->pc = 0x119870u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30833);
    // 0x119874: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119878: 0x3c01bf72  lui         $at, 0xBF72
    ctx->pc = 0x119878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49010 << 16));
    // 0x11987c: 0x34210d81  ori         $at, $at, 0xD81
    ctx->pc = 0x11987cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3457);
    // 0x119880: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x119880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x119884: 0x3c01beaa  lui         $at, 0xBEAA
    ctx->pc = 0x119884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48810 << 16));
    // 0x119888: 0x3421e8bc  ori         $at, $at, 0xE8BC
    ctx->pc = 0x119888u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59580);
    // 0x11988c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x11988cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x119890: 0xe4970a68  swc1        $f23, 0xA68($a0)
    ctx->pc = 0x119890u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2664), bits); }
    // 0x119894: 0x3c01be9e  lui         $at, 0xBE9E
    ctx->pc = 0x119894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48798 << 16));
    // 0x119898: 0x3421377a  ori         $at, $at, 0x377A
    ctx->pc = 0x119898u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14202);
    // 0x11989c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11989cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1198a0: 0x3c01bf72  lui         $at, 0xBF72
    ctx->pc = 0x1198a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49010 << 16));
    // 0x1198a4: 0x3421c557  ori         $at, $at, 0xC557
    ctx->pc = 0x1198a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50519);
    // 0x1198a8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1198a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1198ac: 0x3c01bea2  lui         $at, 0xBEA2
    ctx->pc = 0x1198acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48802 << 16));
    // 0x1198b0: 0x342175c2  ori         $at, $at, 0x75C2
    ctx->pc = 0x1198b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30146);
    // 0x1198b4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1198b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1198b8: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x1198b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x1198bc: 0x3421b0de  ori         $at, $at, 0xB0DE
    ctx->pc = 0x1198bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45278);
    // 0x1198c0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1198c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1198c4: 0x3c01bf71  lui         $at, 0xBF71
    ctx->pc = 0x1198c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49009 << 16));
    // 0x1198c8: 0x342150f4  ori         $at, $at, 0x50F4
    ctx->pc = 0x1198c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20724);
    // 0x1198cc: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1198ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1198d0: 0x3c01bf70  lui         $at, 0xBF70
    ctx->pc = 0x1198d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49008 << 16));
    // 0x1198d4: 0x34218fb2  ori         $at, $at, 0x8FB2
    ctx->pc = 0x1198d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36786);
    // 0x1198d8: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1198d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1198dc: 0x3c01beaf  lui         $at, 0xBEAF
    ctx->pc = 0x1198dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48815 << 16));
    // 0x1198e0: 0x34211d44  ori         $at, $at, 0x1D44
    ctx->pc = 0x1198e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7492);
    // 0x1198e4: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1198e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1198e8: 0x3c01bf6f  lui         $at, 0xBF6F
    ctx->pc = 0x1198e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49007 << 16));
    // 0x1198ec: 0x3421c9c0  ori         $at, $at, 0xC9C0
    ctx->pc = 0x1198ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51648);
    // 0x1198f0: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1198f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1198f4: 0x3c01beb3  lui         $at, 0xBEB3
    ctx->pc = 0x1198f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48819 << 16));
    // 0x1198f8: 0x34214e62  ori         $at, $at, 0x4E62
    ctx->pc = 0x1198f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20066);
    // 0x1198fc: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1198fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x119900: 0x3c01bf6e  lui         $at, 0xBF6E
    ctx->pc = 0x119900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49006 << 16));
    // 0x119904: 0x3421ff20  ori         $at, $at, 0xFF20
    ctx->pc = 0x119904u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65312);
    // 0x119908: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x119908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11990c: 0x3c01beb7  lui         $at, 0xBEB7
    ctx->pc = 0x11990cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48823 << 16));
    // 0x119910: 0x34217c01  ori         $at, $at, 0x7C01
    ctx->pc = 0x119910u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31745);
    // 0x119914: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x119914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x119918: 0x3c01bf6e  lui         $at, 0xBF6E
    ctx->pc = 0x119918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49006 << 16));
    // 0x11991c: 0x34212fd9  ori         $at, $at, 0x2FD9
    ctx->pc = 0x11991cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12249);
    // 0x119920: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x119920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x119924: 0x3c01bebb  lui         $at, 0xBEBB
    ctx->pc = 0x119924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48827 << 16));
    // 0x119928: 0x3421a60c  ori         $at, $at, 0xA60C
    ctx->pc = 0x119928u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42508);
    // 0x11992c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x11992cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x119930: 0x3c01bf6d  lui         $at, 0xBF6D
    ctx->pc = 0x119930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49005 << 16));
    // 0x119934: 0x34215bec  ori         $at, $at, 0x5BEC
    ctx->pc = 0x119934u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23532);
    // 0x119938: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x119938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x11993c: 0x3c01bebf  lui         $at, 0xBEBF
    ctx->pc = 0x11993cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48831 << 16));
    // 0x119940: 0x3421cc6f  ori         $at, $at, 0xCC6F
    ctx->pc = 0x119940u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52335);
    // 0x119944: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x119944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x119948: 0x3c01bf6c  lui         $at, 0xBF6C
    ctx->pc = 0x119948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49004 << 16));
    // 0x11994c: 0x3421835e  ori         $at, $at, 0x835E
    ctx->pc = 0x11994cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33630);
    // 0x119950: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x119950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x119954: 0x3c01bec3  lui         $at, 0xBEC3
    ctx->pc = 0x119954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48835 << 16));
    // 0x119958: 0x3421ef15  ori         $at, $at, 0xEF15
    ctx->pc = 0x119958u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61205);
    // 0x11995c: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x11995cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x119960: 0x3c01bf6b  lui         $at, 0xBF6B
    ctx->pc = 0x119960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49003 << 16));
    // 0x119964: 0x3421a635  ori         $at, $at, 0xA635
    ctx->pc = 0x119964u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42549);
    // 0x119968: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x119968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11996c: 0xe48004c8  swc1        $f0, 0x4C8($a0)
    ctx->pc = 0x11996cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1224), bits); }
    // 0x119970: 0xe48404d0  swc1        $f4, 0x4D0($a0)
    ctx->pc = 0x119970u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1232), bits); }
    // 0x119974: 0xe4870a78  swc1        $f7, 0xA78($a0)
    ctx->pc = 0x119974u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2680), bits); }
    // 0x119978: 0x3c01bec8  lui         $at, 0xBEC8
    ctx->pc = 0x119978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48840 << 16));
    // 0x11997c: 0x34210de9  ori         $at, $at, 0xDE9
    ctx->pc = 0x11997cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3561);
    // 0x119980: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x119980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x119984: 0xe4810a6c  swc1        $f1, 0xA6C($a0)
    ctx->pc = 0x119984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2668), bits); }
    // 0x119988: 0xe48204cc  swc1        $f2, 0x4CC($a0)
    ctx->pc = 0x119988u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1228), bits); }
    // 0x11998c: 0xe4830a70  swc1        $f3, 0xA70($a0)
    ctx->pc = 0x11998cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2672), bits); }
    // 0x119990: 0xe4850a74  swc1        $f5, 0xA74($a0)
    ctx->pc = 0x119990u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2676), bits); }
    // 0x119994: 0xe48604d4  swc1        $f6, 0x4D4($a0)
    ctx->pc = 0x119994u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1236), bits); }
    // 0x119998: 0xe48804d8  swc1        $f8, 0x4D8($a0)
    ctx->pc = 0x119998u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1240), bits); }
    // 0x11999c: 0xe4890a7c  swc1        $f9, 0xA7C($a0)
    ctx->pc = 0x11999cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2684), bits); }
    // 0x1199a0: 0xe48a04dc  swc1        $f10, 0x4DC($a0)
    ctx->pc = 0x1199a0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1244), bits); }
    // 0x1199a4: 0xe48b0a80  swc1        $f11, 0xA80($a0)
    ctx->pc = 0x1199a4u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2688), bits); }
    // 0x1199a8: 0xe48c04e0  swc1        $f12, 0x4E0($a0)
    ctx->pc = 0x1199a8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1248), bits); }
    // 0x1199ac: 0xe48d0a84  swc1        $f13, 0xA84($a0)
    ctx->pc = 0x1199acu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2692), bits); }
    // 0x1199b0: 0xe48e04e4  swc1        $f14, 0x4E4($a0)
    ctx->pc = 0x1199b0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1252), bits); }
    // 0x1199b4: 0xe48f0a88  swc1        $f15, 0xA88($a0)
    ctx->pc = 0x1199b4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2696), bits); }
    // 0x1199b8: 0xe49004e8  swc1        $f16, 0x4E8($a0)
    ctx->pc = 0x1199b8u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1256), bits); }
    // 0x1199bc: 0xe4910a8c  swc1        $f17, 0xA8C($a0)
    ctx->pc = 0x1199bcu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2700), bits); }
    // 0x1199c0: 0xe49204ec  swc1        $f18, 0x4EC($a0)
    ctx->pc = 0x1199c0u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1260), bits); }
    // 0x1199c4: 0xe4930a90  swc1        $f19, 0xA90($a0)
    ctx->pc = 0x1199c4u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2704), bits); }
    // 0x1199c8: 0xe49404f0  swc1        $f20, 0x4F0($a0)
    ctx->pc = 0x1199c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1264), bits); }
    // 0x1199cc: 0x3c01bf6a  lui         $at, 0xBF6A
    ctx->pc = 0x1199ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49002 << 16));
    // 0x1199d0: 0x3421c473  ori         $at, $at, 0xC473
    ctx->pc = 0x1199d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50291);
    // 0x1199d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1199d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1199d8: 0x3c01becc  lui         $at, 0xBECC
    ctx->pc = 0x1199d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48844 << 16));
    // 0x1199dc: 0x342128d7  ori         $at, $at, 0x28D7
    ctx->pc = 0x1199dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10455);
    // 0x1199e0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1199e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1199e4: 0x3c01bf69  lui         $at, 0xBF69
    ctx->pc = 0x1199e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49001 << 16));
    // 0x1199e8: 0x3421de1d  ori         $at, $at, 0xDE1D
    ctx->pc = 0x1199e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56861);
    // 0x1199ec: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1199ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1199f0: 0xe4950a94  swc1        $f21, 0xA94($a0)
    ctx->pc = 0x1199f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2708), bits); }
    // 0x1199f4: 0xe48004f4  swc1        $f0, 0x4F4($a0)
    ctx->pc = 0x1199f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1268), bits); }
    // 0x1199f8: 0xe4840a98  swc1        $f4, 0xA98($a0)
    ctx->pc = 0x1199f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2712), bits); }
    // 0x1199fc: 0xe48704f8  swc1        $f7, 0x4F8($a0)
    ctx->pc = 0x1199fcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1272), bits); }
    // 0x119a00: 0x3c01bed0  lui         $at, 0xBED0
    ctx->pc = 0x119a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48848 << 16));
    // 0x119a04: 0x34213fc9  ori         $at, $at, 0x3FC9
    ctx->pc = 0x119a04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16329);
    // 0x119a08: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x119a08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x119a0c: 0x3c01bf66  lui         $at, 0xBF66
    ctx->pc = 0x119a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48998 << 16));
    // 0x119a10: 0x3421175e  ori         $at, $at, 0x175E
    ctx->pc = 0x119a10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5982);
    // 0x119a14: 0x4481f800  mtc1        $at, $f31
    ctx->pc = 0x119a14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[31], &bits, sizeof(bits)); }
    // 0x119a18: 0x3c01bf68  lui         $at, 0xBF68
    ctx->pc = 0x119a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49000 << 16));
    // 0x119a1c: 0x3421f339  ori         $at, $at, 0xF339
    ctx->pc = 0x119a1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62265);
    // 0x119a20: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x119a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x119a24: 0x3c01bed4  lui         $at, 0xBED4
    ctx->pc = 0x119a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48852 << 16));
    // 0x119a28: 0x342152ac  ori         $at, $at, 0x52AC
    ctx->pc = 0x119a28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21164);
    // 0x119a2c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x119a2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x119a30: 0x3c01bf68  lui         $at, 0xBF68
    ctx->pc = 0x119a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49000 << 16));
    // 0x119a34: 0x342103ca  ori         $at, $at, 0x3CA
    ctx->pc = 0x119a34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)970);
    // 0x119a38: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x119a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x119a3c: 0x3c01bed8  lui         $at, 0xBED8
    ctx->pc = 0x119a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48856 << 16));
    // 0x119a40: 0x3421616c  ori         $at, $at, 0x616C
    ctx->pc = 0x119a40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24940);
    // 0x119a44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119a44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119a48: 0x3c01bf67  lui         $at, 0xBF67
    ctx->pc = 0x119a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48999 << 16));
    // 0x119a4c: 0x34210fd4  ori         $at, $at, 0xFD4
    ctx->pc = 0x119a4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4052);
    // 0x119a50: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x119a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x119a54: 0x3c01bedc  lui         $at, 0xBEDC
    ctx->pc = 0x119a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48860 << 16));
    // 0x119a58: 0x34216bf3  ori         $at, $at, 0x6BF3
    ctx->pc = 0x119a58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27635);
    // 0x119a5c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x119a5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x119a60: 0xe4910a9c  swc1        $f17, 0xA9C($a0)
    ctx->pc = 0x119a60u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2716), bits); }
    // 0x119a64: 0x3c01bee0  lui         $at, 0xBEE0
    ctx->pc = 0x119a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48864 << 16));
    // 0x119a68: 0x3421722f  ori         $at, $at, 0x722F
    ctx->pc = 0x119a68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29231);
    // 0x119a6c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x119a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x119a70: 0xe49304fc  swc1        $f19, 0x4FC($a0)
    ctx->pc = 0x119a70u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1276), bits); }
    // 0x119a74: 0xe4940aa0  swc1        $f20, 0xAA0($a0)
    ctx->pc = 0x119a74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2720), bits); }
    // 0x119a78: 0xe4950500  swc1        $f21, 0x500($a0)
    ctx->pc = 0x119a78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1280), bits); }
    // 0x119a7c: 0xe4800aa4  swc1        $f0, 0xAA4($a0)
    ctx->pc = 0x119a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2724), bits); }
    // 0x119a80: 0xe4840504  swc1        $f4, 0x504($a0)
    ctx->pc = 0x119a80u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1284), bits); }
    // 0x119a84: 0xe4870aa8  swc1        $f7, 0xAA8($a0)
    ctx->pc = 0x119a84u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2728), bits); }
    // 0x119a88: 0xe49f0508  swc1        $f31, 0x508($a0)
    ctx->pc = 0x119a88u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1288), bits); }
    // 0x119a8c: 0x3c01bf01  lui         $at, 0xBF01
    ctx->pc = 0x119a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48897 << 16));
    // 0x119a90: 0x3421ee09  ori         $at, $at, 0xEE09
    ctx->pc = 0x119a90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60937);
    // 0x119a94: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x119a94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x119a98: 0xe4960aac  swc1        $f22, 0xAAC($a0)
    ctx->pc = 0x119a98u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2732), bits); }
    // 0x119a9c: 0x3c01bf65  lui         $at, 0xBF65
    ctx->pc = 0x119a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48997 << 16));
    // 0x119aa0: 0x34211a6b  ori         $at, $at, 0x1A6B
    ctx->pc = 0x119aa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6763);
    // 0x119aa4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119aa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119aa8: 0x3c01bf03  lui         $at, 0xBF03
    ctx->pc = 0x119aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48899 << 16));
    // 0x119aac: 0x3421d989  ori         $at, $at, 0xD989
    ctx->pc = 0x119aacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55689);
    // 0x119ab0: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x119ab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x119ab4: 0x3c01bf5a  lui         $at, 0xBF5A
    ctx->pc = 0x119ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48986 << 16));
    // 0x119ab8: 0x342146a0  ori         $at, $at, 0x46A0
    ctx->pc = 0x119ab8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18080);
    // 0x119abc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x119abcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x119ac0: 0xe4910ad0  swc1        $f17, 0xAD0($a0)
    ctx->pc = 0x119ac0u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2768), bits); }
    // 0x119ac4: 0x3c01bee4  lui         $at, 0xBEE4
    ctx->pc = 0x119ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48868 << 16));
    // 0x119ac8: 0x3421740a  ori         $at, $at, 0x740A
    ctx->pc = 0x119ac8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29706);
    // 0x119acc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x119accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x119ad0: 0x3c01bf64  lui         $at, 0xBF64
    ctx->pc = 0x119ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48996 << 16));
    // 0x119ad4: 0x34211901  ori         $at, $at, 0x1901
    ctx->pc = 0x119ad4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6401);
    // 0x119ad8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x119ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x119adc: 0x3c01bee8  lui         $at, 0xBEE8
    ctx->pc = 0x119adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48872 << 16));
    // 0x119ae0: 0x34217171  ori         $at, $at, 0x7171
    ctx->pc = 0x119ae0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29041);
    // 0x119ae4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x119ae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x119ae8: 0x3c01bf63  lui         $at, 0xBF63
    ctx->pc = 0x119ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48995 << 16));
    // 0x119aec: 0x34211324  ori         $at, $at, 0x1324
    ctx->pc = 0x119aecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4900);
    // 0x119af0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x119af0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x119af4: 0x3c01beec  lui         $at, 0xBEEC
    ctx->pc = 0x119af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48876 << 16));
    // 0x119af8: 0x34216a50  ori         $at, $at, 0x6A50
    ctx->pc = 0x119af8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27216);
    // 0x119afc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x119afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x119b00: 0x3c01bf62  lui         $at, 0xBF62
    ctx->pc = 0x119b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48994 << 16));
    // 0x119b04: 0x342108da  ori         $at, $at, 0x8DA
    ctx->pc = 0x119b04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2266);
    // 0x119b08: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x119b08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x119b0c: 0x3c01bef0  lui         $at, 0xBEF0
    ctx->pc = 0x119b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48880 << 16));
    // 0x119b10: 0x34215e94  ori         $at, $at, 0x5E94
    ctx->pc = 0x119b10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24212);
    // 0x119b14: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x119b14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x119b18: 0x3c01bf60  lui         $at, 0xBF60
    ctx->pc = 0x119b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48992 << 16));
    // 0x119b1c: 0x3421fa29  ori         $at, $at, 0xFA29
    ctx->pc = 0x119b1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64041);
    // 0x119b20: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x119b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x119b24: 0x3c01bef4  lui         $at, 0xBEF4
    ctx->pc = 0x119b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48884 << 16));
    // 0x119b28: 0x34214e27  ori         $at, $at, 0x4E27
    ctx->pc = 0x119b28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20007);
    // 0x119b2c: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x119b2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x119b30: 0x3c01bf5f  lui         $at, 0xBF5F
    ctx->pc = 0x119b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48991 << 16));
    // 0x119b34: 0x3421e714  ori         $at, $at, 0xE714
    ctx->pc = 0x119b34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59156);
    // 0x119b38: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x119b38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x119b3c: 0x3c01bef8  lui         $at, 0xBEF8
    ctx->pc = 0x119b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48888 << 16));
    // 0x119b40: 0x342138f7  ori         $at, $at, 0x38F7
    ctx->pc = 0x119b40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14583);
    // 0x119b44: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x119b44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x119b48: 0x3c01bf5e  lui         $at, 0xBF5E
    ctx->pc = 0x119b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48990 << 16));
    // 0x119b4c: 0x3421cfa2  ori         $at, $at, 0xCFA2
    ctx->pc = 0x119b4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53154);
    // 0x119b50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x119b50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x119b54: 0x3c01befc  lui         $at, 0xBEFC
    ctx->pc = 0x119b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48892 << 16));
    // 0x119b58: 0x34211ef1  ori         $at, $at, 0x1EF1
    ctx->pc = 0x119b58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7921);
    // 0x119b5c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x119b5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x119b60: 0x3c01bf5d  lui         $at, 0xBF5D
    ctx->pc = 0x119b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48989 << 16));
    // 0x119b64: 0x3421b3d7  ori         $at, $at, 0xB3D7
    ctx->pc = 0x119b64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46039);
    // 0x119b68: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x119b68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x119b6c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x119b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x119b70: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x119b70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x119b74: 0x3c01bf5c  lui         $at, 0xBF5C
    ctx->pc = 0x119b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48988 << 16));
    // 0x119b78: 0x342193bb  ori         $at, $at, 0x93BB
    ctx->pc = 0x119b78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37819);
    // 0x119b7c: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x119b7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x119b80: 0x3c01bf5b  lui         $at, 0xBF5B
    ctx->pc = 0x119b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48987 << 16));
    // 0x119b84: 0x34216f51  ori         $at, $at, 0x6F51
    ctx->pc = 0x119b84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28497);
    // 0x119b88: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x119b88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x119b8c: 0xe480050c  swc1        $f0, 0x50C($a0)
    ctx->pc = 0x119b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1292), bits); }
    // 0x119b90: 0xe4930ad4  swc1        $f19, 0xAD4($a0)
    ctx->pc = 0x119b90u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2772), bits); }
    // 0x119b94: 0xe4940534  swc1        $f20, 0x534($a0)
    ctx->pc = 0x119b94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1332), bits); }
    // 0x119b98: 0x3c01bf05  lui         $at, 0xBF05
    ctx->pc = 0x119b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48901 << 16));
    // 0x119b9c: 0x3421c277  ori         $at, $at, 0xC277
    ctx->pc = 0x119b9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49783);
    // 0x119ba0: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x119ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x119ba4: 0xe4810ab0  swc1        $f1, 0xAB0($a0)
    ctx->pc = 0x119ba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2736), bits); }
    // 0x119ba8: 0xe4820510  swc1        $f2, 0x510($a0)
    ctx->pc = 0x119ba8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1296), bits); }
    // 0x119bac: 0xe4830ab4  swc1        $f3, 0xAB4($a0)
    ctx->pc = 0x119bacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2740), bits); }
    // 0x119bb0: 0xe4840514  swc1        $f4, 0x514($a0)
    ctx->pc = 0x119bb0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1300), bits); }
    // 0x119bb4: 0xe4850ab8  swc1        $f5, 0xAB8($a0)
    ctx->pc = 0x119bb4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2744), bits); }
    // 0x119bb8: 0xe4860518  swc1        $f6, 0x518($a0)
    ctx->pc = 0x119bb8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1304), bits); }
    // 0x119bbc: 0xe4870abc  swc1        $f7, 0xABC($a0)
    ctx->pc = 0x119bbcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2748), bits); }
    // 0x119bc0: 0xe488051c  swc1        $f8, 0x51C($a0)
    ctx->pc = 0x119bc0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1308), bits); }
    // 0x119bc4: 0xe4890ac0  swc1        $f9, 0xAC0($a0)
    ctx->pc = 0x119bc4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2752), bits); }
    // 0x119bc8: 0xe48a0520  swc1        $f10, 0x520($a0)
    ctx->pc = 0x119bc8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1312), bits); }
    // 0x119bcc: 0xe48b0ac4  swc1        $f11, 0xAC4($a0)
    ctx->pc = 0x119bccu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2756), bits); }
    // 0x119bd0: 0xe48c0524  swc1        $f12, 0x524($a0)
    ctx->pc = 0x119bd0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1316), bits); }
    // 0x119bd4: 0xe48d0ac8  swc1        $f13, 0xAC8($a0)
    ctx->pc = 0x119bd4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2760), bits); }
    // 0x119bd8: 0xe48e0528  swc1        $f14, 0x528($a0)
    ctx->pc = 0x119bd8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1320), bits); }
    // 0x119bdc: 0xe48f0acc  swc1        $f15, 0xACC($a0)
    ctx->pc = 0x119bdcu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2764), bits); }
    // 0x119be0: 0xe490052c  swc1        $f16, 0x52C($a0)
    ctx->pc = 0x119be0u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1324), bits); }
    // 0x119be4: 0xe4920530  swc1        $f18, 0x530($a0)
    ctx->pc = 0x119be4u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1328), bits); }
    // 0x119be8: 0x3c01bf59  lui         $at, 0xBF59
    ctx->pc = 0x119be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48985 << 16));
    // 0x119bec: 0x342119ae  ori         $at, $at, 0x19AE
    ctx->pc = 0x119becu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6574);
    // 0x119bf0: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x119bf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x119bf4: 0x3c01bf07  lui         $at, 0xBF07
    ctx->pc = 0x119bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48903 << 16));
    // 0x119bf8: 0x3421a8ca  ori         $at, $at, 0xA8CA
    ctx->pc = 0x119bf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43210);
    // 0x119bfc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x119bfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x119c00: 0x3c01bf57  lui         $at, 0xBF57
    ctx->pc = 0x119c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48983 << 16));
    // 0x119c04: 0x3421e880  ori         $at, $at, 0xE880
    ctx->pc = 0x119c04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59520);
    // 0x119c08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119c0c: 0xe4910ad8  swc1        $f17, 0xAD8($a0)
    ctx->pc = 0x119c0cu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2776), bits); }
    // 0x119c10: 0xe4930538  swc1        $f19, 0x538($a0)
    ctx->pc = 0x119c10u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1336), bits); }
    // 0x119c14: 0xe4940adc  swc1        $f20, 0xADC($a0)
    ctx->pc = 0x119c14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2780), bits); }
    // 0x119c18: 0xe480053c  swc1        $f0, 0x53C($a0)
    ctx->pc = 0x119c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1340), bits); }
    // 0x119c1c: 0x3c01bf09  lui         $at, 0xBF09
    ctx->pc = 0x119c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48905 << 16));
    // 0x119c20: 0x34218c78  ori         $at, $at, 0x8C78
    ctx->pc = 0x119c20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35960);
    // 0x119c24: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x119c24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x119c28: 0x3c01bf0f  lui         $at, 0xBF0F
    ctx->pc = 0x119c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48911 << 16));
    // 0x119c2c: 0x34212744  ori         $at, $at, 0x2744
    ctx->pc = 0x119c2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10052);
    // 0x119c30: 0x4481f000  mtc1        $at, $f30
    ctx->pc = 0x119c30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
    // 0x119c34: 0x3c01bf52  lui         $at, 0xBF52
    ctx->pc = 0x119c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48978 << 16));
    // 0x119c38: 0x3421f9ef  ori         $at, $at, 0xF9EF
    ctx->pc = 0x119c38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63983);
    // 0x119c3c: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x119c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x119c40: 0x3c01bf56  lui         $at, 0xBF56
    ctx->pc = 0x119c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48982 << 16));
    // 0x119c44: 0x3421b31d  ori         $at, $at, 0xB31D
    ctx->pc = 0x119c44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45853);
    // 0x119c48: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x119c48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x119c4c: 0x3c01bf0b  lui         $at, 0xBF0B
    ctx->pc = 0x119c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48907 << 16));
    // 0x119c50: 0x34216d77  ori         $at, $at, 0x6D77
    ctx->pc = 0x119c50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28023);
    // 0x119c54: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x119c54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x119c58: 0x3c01bf55  lui         $at, 0xBF55
    ctx->pc = 0x119c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48981 << 16));
    // 0x119c5c: 0x3421798b  ori         $at, $at, 0x798B
    ctx->pc = 0x119c5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31115);
    // 0x119c60: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x119c60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x119c64: 0x3c01bf0d  lui         $at, 0xBF0D
    ctx->pc = 0x119c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48909 << 16));
    // 0x119c68: 0x34214bbe  ori         $at, $at, 0x4BBE
    ctx->pc = 0x119c68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19390);
    // 0x119c6c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x119c6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x119c70: 0x3c01bf54  lui         $at, 0xBF54
    ctx->pc = 0x119c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48980 << 16));
    // 0x119c74: 0x34213bce  ori         $at, $at, 0x3BCE
    ctx->pc = 0x119c74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15310);
    // 0x119c78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119c7c: 0xe4840ae0  swc1        $f4, 0xAE0($a0)
    ctx->pc = 0x119c7cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2784), bits); }
    // 0x119c80: 0x3c01bf11  lui         $at, 0xBF11
    ctx->pc = 0x119c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48913 << 16));
    // 0x119c84: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x119c84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x119c88: 0xe4870540  swc1        $f7, 0x540($a0)
    ctx->pc = 0x119c88u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1344), bits); }
    // 0x119c8c: 0xe4910ae4  swc1        $f17, 0xAE4($a0)
    ctx->pc = 0x119c8cu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2788), bits); }
    // 0x119c90: 0xe4930544  swc1        $f19, 0x544($a0)
    ctx->pc = 0x119c90u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1348), bits); }
    // 0x119c94: 0xe4940ae8  swc1        $f20, 0xAE8($a0)
    ctx->pc = 0x119c94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2792), bits); }
    // 0x119c98: 0xe4800548  swc1        $f0, 0x548($a0)
    ctx->pc = 0x119c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1352), bits); }
    // 0x119c9c: 0xe49e0aec  swc1        $f30, 0xAEC($a0)
    ctx->pc = 0x119c9cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2796), bits); }
    // 0x119ca0: 0xe49d054c  swc1        $f29, 0x54C($a0)
    ctx->pc = 0x119ca0u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1356), bits); }
    // 0x119ca4: 0x3c01bf4f  lui         $at, 0xBF4F
    ctx->pc = 0x119ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48975 << 16));
    // 0x119ca8: 0x34211bbd  ori         $at, $at, 0x1BBD
    ctx->pc = 0x119ca8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7101);
    // 0x119cac: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x119cacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x119cb0: 0xe4950af0  swc1        $f21, 0xAF0($a0)
    ctx->pc = 0x119cb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2800), bits); }
    // 0x119cb4: 0xe4840558  swc1        $f4, 0x558($a0)
    ctx->pc = 0x119cb4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1368), bits); }
    // 0x119cb8: 0x3c01bf51  lui         $at, 0xBF51
    ctx->pc = 0x119cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48977 << 16));
    // 0x119cbc: 0x3421b3f3  ori         $at, $at, 0xB3F3
    ctx->pc = 0x119cbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46067);
    // 0x119cc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119cc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119cc4: 0x3c01bf12  lui         $at, 0xBF12
    ctx->pc = 0x119cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48914 << 16));
    // 0x119cc8: 0x3421d5e8  ori         $at, $at, 0xD5E8
    ctx->pc = 0x119cc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54760);
    // 0x119ccc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x119cccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x119cd0: 0x3c01bf50  lui         $at, 0xBF50
    ctx->pc = 0x119cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48976 << 16));
    // 0x119cd4: 0x342169e0  ori         $at, $at, 0x69E0
    ctx->pc = 0x119cd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27104);
    // 0x119cd8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x119cd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x119cdc: 0x3c01bf14  lui         $at, 0xBF14
    ctx->pc = 0x119cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48916 << 16));
    // 0x119ce0: 0x3421a8f3  ori         $at, $at, 0xA8F3
    ctx->pc = 0x119ce0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43251);
    // 0x119ce4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x119ce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x119ce8: 0x3c01bf16  lui         $at, 0xBF16
    ctx->pc = 0x119ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48918 << 16));
    // 0x119cec: 0x34217918  ori         $at, $at, 0x7918
    ctx->pc = 0x119cecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31000);
    // 0x119cf0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x119cf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x119cf4: 0x3c01bf4d  lui         $at, 0xBF4D
    ctx->pc = 0x119cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48973 << 16));
    // 0x119cf8: 0x3421c990  ori         $at, $at, 0xC990
    ctx->pc = 0x119cf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51600);
    // 0x119cfc: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x119cfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x119d00: 0x3c01bf18  lui         $at, 0xBF18
    ctx->pc = 0x119d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48920 << 16));
    // 0x119d04: 0x3421464e  ori         $at, $at, 0x464E
    ctx->pc = 0x119d04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17998);
    // 0x119d08: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x119d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x119d0c: 0x3c01bf4c  lui         $at, 0xBF4C
    ctx->pc = 0x119d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48972 << 16));
    // 0x119d10: 0x34217360  ori         $at, $at, 0x7360
    ctx->pc = 0x119d10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29536);
    // 0x119d14: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x119d14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x119d18: 0x3c01bf1a  lui         $at, 0xBF1A
    ctx->pc = 0x119d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48922 << 16));
    // 0x119d1c: 0x3421108d  ori         $at, $at, 0x108D
    ctx->pc = 0x119d1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4237);
    // 0x119d20: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x119d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x119d24: 0x3c01bf4b  lui         $at, 0xBF4B
    ctx->pc = 0x119d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48971 << 16));
    // 0x119d28: 0x34211934  ori         $at, $at, 0x1934
    ctx->pc = 0x119d28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6452);
    // 0x119d2c: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x119d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x119d30: 0x3c01bf1b  lui         $at, 0xBF1B
    ctx->pc = 0x119d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48923 << 16));
    // 0x119d34: 0x3421d7ca  ori         $at, $at, 0xD7CA
    ctx->pc = 0x119d34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55242);
    // 0x119d38: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x119d38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x119d3c: 0x3c01bf49  lui         $at, 0xBF49
    ctx->pc = 0x119d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48969 << 16));
    // 0x119d40: 0x3421bb13  ori         $at, $at, 0xBB13
    ctx->pc = 0x119d40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47891);
    // 0x119d44: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x119d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x119d48: 0x3c01bf1d  lui         $at, 0xBF1D
    ctx->pc = 0x119d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48925 << 16));
    // 0x119d4c: 0x34219bfe  ori         $at, $at, 0x9BFE
    ctx->pc = 0x119d4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39934);
    // 0x119d50: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x119d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x119d54: 0x3c01bf48  lui         $at, 0xBF48
    ctx->pc = 0x119d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48968 << 16));
    // 0x119d58: 0x34215902  ori         $at, $at, 0x5902
    ctx->pc = 0x119d58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22786);
    // 0x119d5c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x119d5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x119d60: 0x3c01bf1f  lui         $at, 0xBF1F
    ctx->pc = 0x119d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48927 << 16));
    // 0x119d64: 0x34215d1f  ori         $at, $at, 0x5D1F
    ctx->pc = 0x119d64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23839);
    // 0x119d68: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x119d68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x119d6c: 0x3c01bf46  lui         $at, 0xBF46
    ctx->pc = 0x119d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48966 << 16));
    // 0x119d70: 0x3421f30a  ori         $at, $at, 0xF30A
    ctx->pc = 0x119d70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62218);
    // 0x119d74: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x119d74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x119d78: 0x3c01bf21  lui         $at, 0xBF21
    ctx->pc = 0x119d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48929 << 16));
    // 0x119d7c: 0x34211b24  ori         $at, $at, 0x1B24
    ctx->pc = 0x119d7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6948);
    // 0x119d80: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x119d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x119d84: 0x3c01bf45  lui         $at, 0xBF45
    ctx->pc = 0x119d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48965 << 16));
    // 0x119d88: 0x34218930  ori         $at, $at, 0x8930
    ctx->pc = 0x119d88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35120);
    // 0x119d8c: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x119d8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x119d90: 0x3c01bf22  lui         $at, 0xBF22
    ctx->pc = 0x119d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48930 << 16));
    // 0x119d94: 0x3421d606  ori         $at, $at, 0xD606
    ctx->pc = 0x119d94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54790);
    // 0x119d98: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x119d98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x119d9c: 0x3c01bf44  lui         $at, 0xBF44
    ctx->pc = 0x119d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48964 << 16));
    // 0x119da0: 0x34211b7d  ori         $at, $at, 0x1B7D
    ctx->pc = 0x119da0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7037);
    // 0x119da4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x119da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x119da8: 0x3c01bf24  lui         $at, 0xBF24
    ctx->pc = 0x119da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48932 << 16));
    // 0x119dac: 0x34218dbb  ori         $at, $at, 0x8DBB
    ctx->pc = 0x119dacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36283);
    // 0x119db0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x119db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x119db4: 0xe4800550  swc1        $f0, 0x550($a0)
    ctx->pc = 0x119db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1360), bits); }
    // 0x119db8: 0xe4810af4  swc1        $f1, 0xAF4($a0)
    ctx->pc = 0x119db8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2804), bits); }
    // 0x119dbc: 0xe4820554  swc1        $f2, 0x554($a0)
    ctx->pc = 0x119dbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1364), bits); }
    // 0x119dc0: 0xe4830af8  swc1        $f3, 0xAF8($a0)
    ctx->pc = 0x119dc0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2808), bits); }
    // 0x119dc4: 0xe4850afc  swc1        $f5, 0xAFC($a0)
    ctx->pc = 0x119dc4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2812), bits); }
    // 0x119dc8: 0xe486055c  swc1        $f6, 0x55C($a0)
    ctx->pc = 0x119dc8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1372), bits); }
    // 0x119dcc: 0xe4870b00  swc1        $f7, 0xB00($a0)
    ctx->pc = 0x119dccu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2816), bits); }
    // 0x119dd0: 0xe4910b14  swc1        $f17, 0xB14($a0)
    ctx->pc = 0x119dd0u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2836), bits); }
    // 0x119dd4: 0xe4930b18  swc1        $f19, 0xB18($a0)
    ctx->pc = 0x119dd4u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2840), bits); }
    // 0x119dd8: 0xe4940578  swc1        $f20, 0x578($a0)
    ctx->pc = 0x119dd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1400), bits); }
    // 0x119ddc: 0xe4880560  swc1        $f8, 0x560($a0)
    ctx->pc = 0x119ddcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1376), bits); }
    // 0x119de0: 0xe4890b04  swc1        $f9, 0xB04($a0)
    ctx->pc = 0x119de0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2820), bits); }
    // 0x119de4: 0xe48a0564  swc1        $f10, 0x564($a0)
    ctx->pc = 0x119de4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1380), bits); }
    // 0x119de8: 0xe48b0b08  swc1        $f11, 0xB08($a0)
    ctx->pc = 0x119de8u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2824), bits); }
    // 0x119dec: 0xe48c0568  swc1        $f12, 0x568($a0)
    ctx->pc = 0x119decu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1384), bits); }
    // 0x119df0: 0xe48d0b0c  swc1        $f13, 0xB0C($a0)
    ctx->pc = 0x119df0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2828), bits); }
    // 0x119df4: 0xe48e056c  swc1        $f14, 0x56C($a0)
    ctx->pc = 0x119df4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1388), bits); }
    // 0x119df8: 0xe48f0b10  swc1        $f15, 0xB10($a0)
    ctx->pc = 0x119df8u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2832), bits); }
    // 0x119dfc: 0xe4900570  swc1        $f16, 0x570($a0)
    ctx->pc = 0x119dfcu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1392), bits); }
    // 0x119e00: 0xe4920574  swc1        $f18, 0x574($a0)
    ctx->pc = 0x119e00u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1396), bits); }
    // 0x119e04: 0xe4840b1c  swc1        $f4, 0xB1C($a0)
    ctx->pc = 0x119e04u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2844), bits); }
    // 0x119e08: 0x3c01bf2b  lui         $at, 0xBF2B
    ctx->pc = 0x119e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48939 << 16));
    // 0x119e0c: 0x34214c25  ori         $at, $at, 0x4C25
    ctx->pc = 0x119e0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19493);
    // 0x119e10: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x119e10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x119e14: 0x3c01bf3c  lui         $at, 0xBF3C
    ctx->pc = 0x119e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48956 << 16));
    // 0x119e18: 0x3421be35  ori         $at, $at, 0xBE35
    ctx->pc = 0x119e18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48693);
    // 0x119e1c: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x119e1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x119e20: 0x3c01bf2c  lui         $at, 0xBF2C
    ctx->pc = 0x119e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48940 << 16));
    // 0x119e24: 0x3421f37b  ori         $at, $at, 0xF37B
    ctx->pc = 0x119e24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62331);
    // 0x119e28: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x119e28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x119e2c: 0x3c01bf3b  lui         $at, 0xBF3B
    ctx->pc = 0x119e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48955 << 16));
    // 0x119e30: 0x342139ff  ori         $at, $at, 0x39FF
    ctx->pc = 0x119e30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14847);
    // 0x119e34: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x119e34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x119e38: 0x3c01bf42  lui         $at, 0xBF42
    ctx->pc = 0x119e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48962 << 16));
    // 0x119e3c: 0x3421a9f7  ori         $at, $at, 0xA9F7
    ctx->pc = 0x119e3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43511);
    // 0x119e40: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x119e40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x119e44: 0x3c01bf26  lui         $at, 0xBF26
    ctx->pc = 0x119e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48934 << 16));
    // 0x119e48: 0x3421423a  ori         $at, $at, 0x423A
    ctx->pc = 0x119e48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16954);
    // 0x119e4c: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x119e4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x119e50: 0x3c01bf41  lui         $at, 0xBF41
    ctx->pc = 0x119e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48961 << 16));
    // 0x119e54: 0x342134a6  ori         $at, $at, 0x34A6
    ctx->pc = 0x119e54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13478);
    // 0x119e58: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x119e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x119e5c: 0x3c01bf27  lui         $at, 0xBF27
    ctx->pc = 0x119e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48935 << 16));
    // 0x119e60: 0x3421f37c  ori         $at, $at, 0xF37C
    ctx->pc = 0x119e60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62332);
    // 0x119e64: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x119e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x119e68: 0x3c01bf3f  lui         $at, 0xBF3F
    ctx->pc = 0x119e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48959 << 16));
    // 0x119e6c: 0x3421bb90  ori         $at, $at, 0xBB90
    ctx->pc = 0x119e6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48016);
    // 0x119e70: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x119e70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x119e74: 0x3c01bf29  lui         $at, 0xBF29
    ctx->pc = 0x119e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48937 << 16));
    // 0x119e78: 0x3421a178  ori         $at, $at, 0xA178
    ctx->pc = 0x119e78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41336);
    // 0x119e7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119e7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119e80: 0x3c01bf3e  lui         $at, 0xBF3E
    ctx->pc = 0x119e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48958 << 16));
    // 0x119e84: 0x34213ebd  ori         $at, $at, 0x3EBD
    ctx->pc = 0x119e84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16061);
    // 0x119e88: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x119e88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x119e8c: 0x3c01bf2e  lui         $at, 0xBF2E
    ctx->pc = 0x119e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48942 << 16));
    // 0x119e90: 0x34219772  ori         $at, $at, 0x9772
    ctx->pc = 0x119e90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38770);
    // 0x119e94: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x119e94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x119e98: 0xe4940b24  swc1        $f20, 0xB24($a0)
    ctx->pc = 0x119e98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2852), bits); }
    // 0x119e9c: 0xe4950584  swc1        $f21, 0x584($a0)
    ctx->pc = 0x119e9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1412), bits); }
    // 0x119ea0: 0xe4800b28  swc1        $f0, 0xB28($a0)
    ctx->pc = 0x119ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2856), bits); }
    // 0x119ea4: 0xe4840588  swc1        $f4, 0x588($a0)
    ctx->pc = 0x119ea4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1416), bits); }
    // 0x119ea8: 0xe49c0b2c  swc1        $f28, 0xB2C($a0)
    ctx->pc = 0x119ea8u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2860), bits); }
    // 0x119eac: 0xe49b058c  swc1        $f27, 0x58C($a0)
    ctx->pc = 0x119eacu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1420), bits); }
    // 0x119eb0: 0xe49a0b30  swc1        $f26, 0xB30($a0)
    ctx->pc = 0x119eb0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2864), bits); }
    // 0x119eb4: 0xe4990590  swc1        $f25, 0x590($a0)
    ctx->pc = 0x119eb4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1424), bits); }
    // 0x119eb8: 0xe487057c  swc1        $f7, 0x57C($a0)
    ctx->pc = 0x119eb8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1404), bits); }
    // 0x119ebc: 0xe4910b20  swc1        $f17, 0xB20($a0)
    ctx->pc = 0x119ebcu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2848), bits); }
    // 0x119ec0: 0xe4930580  swc1        $f19, 0x580($a0)
    ctx->pc = 0x119ec0u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1408), bits); }
    // 0x119ec4: 0xe4980b34  swc1        $f24, 0xB34($a0)
    ctx->pc = 0x119ec4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2868), bits); }
    // 0x119ec8: 0x3c01bf35  lui         $at, 0xBF35
    ctx->pc = 0x119ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48949 << 16));
    // 0x119ecc: 0x342104f3  ori         $at, $at, 0x4F3
    ctx->pc = 0x119eccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1267);
    // 0x119ed0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x119ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x119ed4: 0x3c01bf39  lui         $at, 0xBF39
    ctx->pc = 0x119ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48953 << 16));
    // 0x119ed8: 0x3421b223  ori         $at, $at, 0xB223
    ctx->pc = 0x119ed8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45603);
    // 0x119edc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119edcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119ee0: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x119ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x119ee4: 0x34213801  ori         $at, $at, 0x3801
    ctx->pc = 0x119ee4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14337);
    // 0x119ee8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x119ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x119eec: 0x3c01bf38  lui         $at, 0xBF38
    ctx->pc = 0x119eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48952 << 16));
    // 0x119ef0: 0x342126a7  ori         $at, $at, 0x26A7
    ctx->pc = 0x119ef0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9895);
    // 0x119ef4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x119ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x119ef8: 0x3c01bf31  lui         $at, 0xBF31
    ctx->pc = 0x119ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48945 << 16));
    // 0x119efc: 0x3421d522  ori         $at, $at, 0xD522
    ctx->pc = 0x119efcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54562);
    // 0x119f00: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x119f00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x119f04: 0x3c01bf36  lui         $at, 0xBF36
    ctx->pc = 0x119f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48950 << 16));
    // 0x119f08: 0x34219795  ori         $at, $at, 0x9795
    ctx->pc = 0x119f08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38805);
    // 0x119f0c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x119f0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x119f10: 0x3c01bf33  lui         $at, 0xBF33
    ctx->pc = 0x119f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48947 << 16));
    // 0x119f14: 0x34216eca  ori         $at, $at, 0x6ECA
    ctx->pc = 0x119f14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28362);
    // 0x119f18: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x119f18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x119f1c: 0xc7bf0058  lwc1        $f31, 0x58($sp)
    ctx->pc = 0x119f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x119f20: 0xc7be0050  lwc1        $f30, 0x50($sp)
    ctx->pc = 0x119f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x119f24: 0xc7bd0048  lwc1        $f29, 0x48($sp)
    ctx->pc = 0x119f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x119f28: 0xc7bc0040  lwc1        $f28, 0x40($sp)
    ctx->pc = 0x119f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x119f2c: 0xc7bb0038  lwc1        $f27, 0x38($sp)
    ctx->pc = 0x119f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x119f30: 0xc7ba0030  lwc1        $f26, 0x30($sp)
    ctx->pc = 0x119f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x119f34: 0xc7b90028  lwc1        $f25, 0x28($sp)
    ctx->pc = 0x119f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x119f38: 0xc7b80020  lwc1        $f24, 0x20($sp)
    ctx->pc = 0x119f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x119f3c: 0xc7b70018  lwc1        $f23, 0x18($sp)
    ctx->pc = 0x119f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x119f40: 0xc7b60010  lwc1        $f22, 0x10($sp)
    ctx->pc = 0x119f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x119f44: 0xc7b50008  lwc1        $f21, 0x8($sp)
    ctx->pc = 0x119f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x119f48: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x119f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x119f4c: 0xe4860b44  swc1        $f6, 0xB44($a0)
    ctx->pc = 0x119f4cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2884), bits); }
    // 0x119f50: 0xe4800594  swc1        $f0, 0x594($a0)
    ctx->pc = 0x119f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1428), bits); }
    // 0x119f54: 0xe4810b38  swc1        $f1, 0xB38($a0)
    ctx->pc = 0x119f54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2872), bits); }
    // 0x119f58: 0xe4820598  swc1        $f2, 0x598($a0)
    ctx->pc = 0x119f58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1432), bits); }
    // 0x119f5c: 0xe4830b3c  swc1        $f3, 0xB3C($a0)
    ctx->pc = 0x119f5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2876), bits); }
    // 0x119f60: 0xe484059c  swc1        $f4, 0x59C($a0)
    ctx->pc = 0x119f60u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1436), bits); }
    // 0x119f64: 0xe4850b40  swc1        $f5, 0xB40($a0)
    ctx->pc = 0x119f64u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2880), bits); }
    // 0x119f68: 0xe48605a0  swc1        $f6, 0x5A0($a0)
    ctx->pc = 0x119f68u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1440), bits); }
    // 0x119f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x119F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F6Cu;
        // 0x119f70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119F74u;
    // 0x119f74: 0x0  nop
    ctx->pc = 0x119f74u;
    // NOP
    ctx->pc = 0x119f78u;
}
