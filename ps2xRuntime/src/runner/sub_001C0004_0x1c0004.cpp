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

// Function: sub_001C0004
// Address: 0x1c0004 - 0x1c0014
void sub_001C0004_0x1c0004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0004_0x1c0004");
#endif

    ctx->pc = 0x1c0004u;

    // 0x1c0004: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1c0004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1c0008: 0x3c01bdf9  lui         $at, 0xBDF9
    ctx->pc = 0x1c0008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48633 << 16));
    // 0x1c000c: 0x3421db22  ori         $at, $at, 0xDB22
    ctx->pc = 0x1c000cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56098);
    // 0x1c0010: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1c0010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    ctx->pc = 0x1c0014u;
}
