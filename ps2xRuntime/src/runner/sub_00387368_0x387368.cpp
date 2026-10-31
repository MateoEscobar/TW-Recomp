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

// Function: sub_00387368
// Address: 0x387368 - 0x3873c8
void sub_00387368_0x387368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387368_0x387368");
#endif

    ctx->pc = 0x387368u;

    // 0x387368: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x387368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x38736c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x38736cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x387370: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x387370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x387374: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x387374u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x387378: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x387378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x38737c: 0x24c616c0  addiu       $a2, $a2, 0x16C0
    ctx->pc = 0x38737cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
    // 0x387380: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x387380u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x387384: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x387384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387388: 0x8ca3bd30  lw          $v1, -0x42D0($a1)
    ctx->pc = 0x387388u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x38738c: 0x24e71780  addiu       $a3, $a3, 0x1780
    ctx->pc = 0x38738cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6016));
    // 0x387390: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x387390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x387394: 0xac83008c  sw          $v1, 0x8C($a0)
    ctx->pc = 0x387394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 3));
    // 0x387398: 0xa4800094  sh          $zero, 0x94($a0)
    ctx->pc = 0x387398u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x38739c: 0xa0800096  sb          $zero, 0x96($a0)
    ctx->pc = 0x38739cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 150), (uint8_t)GPR_U32(ctx, 0));
    // 0x3873a0: 0xa0800097  sb          $zero, 0x97($a0)
    ctx->pc = 0x3873a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 151), (uint8_t)GPR_U32(ctx, 0));
    // 0x3873a4: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x3873a4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x3873a8: 0x7c830040  sq          $v1, 0x40($a0)
    ctx->pc = 0x3873a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 3));
    // 0x3873ac: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x3873acu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x5116C0u));
    // 0x3873b0: 0x7c850050  sq          $a1, 0x50($a0)
    ctx->pc = 0x3873b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 5));
    // 0x3873b4: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x3873b4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x511780u));
    // 0x3873b8: 0x7c830060  sq          $v1, 0x60($a0)
    ctx->pc = 0x3873b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 3));
    // 0x3873bc: 0x78e50000  lq          $a1, 0x0($a3)
    ctx->pc = 0x3873bcu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x511780u));
    // 0x3873c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3873C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3873C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3873C0u;
        // 0x3873c4: 0x7c850070  sq          $a1, 0x70($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3873C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3873C8u;
}
