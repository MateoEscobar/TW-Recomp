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

// Function: sub_0040BFE8
// Address: 0x40bfe8 - 0x40c000
void sub_0040BFE8_0x40bfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040BFE8_0x40bfe8");
#endif

    ctx->pc = 0x40bfe8u;

    // 0x40bfe8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x40bfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x40bfec: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x40bfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x40bff0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x40bff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x40bff4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x40bff4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bff8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x40bff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x40bffc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40bffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x40c000u;
}
