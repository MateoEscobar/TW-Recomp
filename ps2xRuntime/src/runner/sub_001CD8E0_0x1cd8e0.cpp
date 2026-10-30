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

// Function: sub_001CD8E0
// Address: 0x1cd8e0 - 0x1cd930
void sub_001CD8E0_0x1cd8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD8E0_0x1cd8e0");
#endif

    switch (ctx->pc) {
        case 0x1cd8f4u: goto label_1cd8f4;
        case 0x1cd908u: goto label_1cd908;
        default: break;
    }

    ctx->pc = 0x1cd8e0u;

    // 0x1cd8e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cd8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cd8e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cd8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cd8e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cd8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cd8ec: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x1CD8ECu;
    SET_GPR_U32(ctx, 31, 0x1CD8F4u);
    ctx->pc = 0x1CD8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD8ECu;
    // 0x1cd8f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x1CD8ECu, 0x1CD8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD8F4u;
label_1cd8f4:
    // 0x1cd8f4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1cd8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1cd8f8: 0x260402a0  addiu       $a0, $s0, 0x2A0
    ctx->pc = 0x1cd8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
    // 0x1cd8fc: 0x2463aff0  addiu       $v1, $v1, -0x5010
    ctx->pc = 0x1cd8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946800));
    // 0x1cd900: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1CD900u;
    SET_GPR_U32(ctx, 31, 0x1CD908u);
    ctx->pc = 0x1CD904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD900u;
    // 0x1cd904: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1CD900u, 0x1CD908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD908u;
label_1cd908:
    // 0x1cd908: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cd908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd90c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1cd90cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1cd910: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1cd910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x1cd914: 0xae0003a0  sw          $zero, 0x3A0($s0)
    ctx->pc = 0x1cd914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 928), GPR_U32(ctx, 0));
    // 0x1cd918: 0xae000290  sw          $zero, 0x290($s0)
    ctx->pc = 0x1cd918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 0));
    // 0x1cd91c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cd91cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd924: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD924u;
        // 0x1cd928: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD92Cu;
    // 0x1cd92c: 0x0  nop
    ctx->pc = 0x1cd92cu;
    // NOP
    ctx->pc = 0x1cd930u;
}
