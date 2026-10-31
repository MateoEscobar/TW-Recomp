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

// Function: sub_004EC580
// Address: 0x4ec580 - 0x4ec5e8
void sub_004EC580_0x4ec580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC580_0x4ec580");
#endif

    switch (ctx->pc) {
        case 0x4ec5b0u: goto label_4ec5b0;
        case 0x4ec5bcu: goto label_4ec5bc;
        case 0x4ec5c8u: goto label_4ec5c8;
        case 0x4ec5d4u: goto label_4ec5d4;
        default: break;
    }

    ctx->pc = 0x4ec580u;

    // 0x4ec580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ec580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ec584: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4ec584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4ec588: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4ec588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4ec58c: 0x24429fd0  addiu       $v0, $v0, -0x6030
    ctx->pc = 0x4ec58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942672));
    // 0x4ec590: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ec590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4ec594: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ec594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec598: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ec598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ec59c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ec59cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec5a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ec5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4ec5a4: 0x26040300  addiu       $a0, $s0, 0x300
    ctx->pc = 0x4ec5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x4ec5a8: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x4EC5A8u;
    SET_GPR_U32(ctx, 31, 0x4EC5B0u);
    ctx->pc = 0x4EC5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC5A8u;
    // 0x4ec5ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4EC5A8u, 0x4EC5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC5B0u;
label_4ec5b0:
    // 0x4ec5b0: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x4ec5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x4ec5b4: 0xc06e410  jal         func_1B9040
    ctx->pc = 0x4EC5B4u;
    SET_GPR_U32(ctx, 31, 0x4EC5BCu);
    ctx->pc = 0x4EC5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC5B4u;
    // 0x4ec5b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x4EC5B4u, 0x4EC5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC5BCu;
label_4ec5bc:
    // 0x4ec5bc: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x4ec5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x4ec5c0: 0xc0733f0  jal         func_1CCFC0
    ctx->pc = 0x4EC5C0u;
    SET_GPR_U32(ctx, 31, 0x4EC5C8u);
    ctx->pc = 0x4EC5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC5C0u;
    // 0x4ec5c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x4EC5C0u, 0x4EC5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC5C8u;
label_4ec5c8:
    // 0x4ec5c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ec5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec5cc: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x4EC5CCu;
    SET_GPR_U32(ctx, 31, 0x4EC5D4u);
    ctx->pc = 0x4EC5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC5CCu;
    // 0x4ec5d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4EC5CCu, 0x4EC5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC5D4u;
label_4ec5d4:
    // 0x4ec5d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4ec5d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ec5d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ec5d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ec5dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ec5dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ec5e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4EC5E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EC5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC5E0u;
        // 0x4ec5e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EC5E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EC5E8u;
}
