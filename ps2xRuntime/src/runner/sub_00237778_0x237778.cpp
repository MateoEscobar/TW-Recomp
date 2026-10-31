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

// Function: sub_00237778
// Address: 0x237778 - 0x2377f8
void sub_00237778_0x237778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237778_0x237778");
#endif

    switch (ctx->pc) {
        case 0x237798u: goto label_237798;
        case 0x2377a0u: goto label_2377a0;
        case 0x2377bcu: goto label_2377bc;
        case 0x2377ccu: goto label_2377cc;
        case 0x2377d4u: goto label_2377d4;
        case 0x2377e0u: goto label_2377e0;
        default: break;
    }

    ctx->pc = 0x237778u;

    // 0x237778: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x237778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23777c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x23777cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x237780: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x237780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x237784: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x237784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237788: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x237788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x23778c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23778cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x237790: 0xc0e4060  jal         func_390180
    ctx->pc = 0x237790u;
    SET_GPR_U32(ctx, 31, 0x237798u);
    ctx->pc = 0x237794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237790u;
    // 0x237794: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x237790u, 0x237798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237798u;
label_237798:
    // 0x237798: 0xc08a61a  jal         func_229868
    ctx->pc = 0x237798u;
    SET_GPR_U32(ctx, 31, 0x2377A0u);
    ctx->pc = 0x23779Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237798u;
    // 0x23779c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x237798u, 0x2377A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2377A0u;
label_2377a0:
    // 0x2377a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2377a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2377a4: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2377A4u;
    {
        const bool branch_taken_0x2377a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2377a4) {
            ctx->pc = 0x2377A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2377A4u;
            // 0x2377a8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2377E4u;
            goto label_2377e4;
        }
    }
    ctx->pc = 0x2377ACu;
    // 0x2377ac: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2377ACu;
    {
        const bool branch_taken_0x2377ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2377B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377ACu;
        // 0x2377b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2377ac) {
            ctx->pc = 0x2377C4u;
            goto label_2377c4;
        }
    }
    ctx->pc = 0x2377B4u;
    // 0x2377b4: 0xc08c166  jal         func_230598
    ctx->pc = 0x2377B4u;
    SET_GPR_U32(ctx, 31, 0x2377BCu);
    ctx->pc = 0x2377B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2377B4u;
    // 0x2377b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230598u, 0x2377B4u, 0x2377BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2377BCu;
label_2377bc:
    // 0x2377bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2377BCu;
    {
        const bool branch_taken_0x2377bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2377C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377BCu;
        // 0x2377c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2377bc) {
            ctx->pc = 0x2377D8u;
            goto label_2377d8;
        }
    }
    ctx->pc = 0x2377C4u;
label_2377c4:
    // 0x2377c4: 0xc08c0ca  jal         func_230328
    ctx->pc = 0x2377C4u;
    SET_GPR_U32(ctx, 31, 0x2377CCu);
    ctx->pc = 0x2377C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2377C4u;
    // 0x2377c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230328u, 0x2377C4u, 0x2377CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2377CCu;
label_2377cc:
    // 0x2377cc: 0xc0a002e  jal         func_2800B8
    ctx->pc = 0x2377CCu;
    SET_GPR_U32(ctx, 31, 0x2377D4u);
    ctx->pc = 0x2377D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2377CCu;
    // 0x2377d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2800B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2800B8u, 0x2377CCu, 0x2377D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2377D4u;
label_2377d4:
    // 0x2377d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2377d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2377d8:
    // 0x2377d8: 0xc089974  jal         func_2265D0
    ctx->pc = 0x2377D8u;
    SET_GPR_U32(ctx, 31, 0x2377E0u);
    ctx->pc = 0x2377DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2377D8u;
    // 0x2377dc: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x2377D8u, 0x2377E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2377E0u;
label_2377e0:
    // 0x2377e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2377e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2377e4:
    // 0x2377e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2377e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2377e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2377e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2377ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2377ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2377F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377ECu;
        // 0x2377f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2377ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2377F4u;
    // 0x2377f4: 0x0  nop
    ctx->pc = 0x2377f4u;
    // NOP
    ctx->pc = 0x2377f8u;
}
