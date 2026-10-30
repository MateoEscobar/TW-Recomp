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

// Function: sub_00169658
// Address: 0x169658 - 0x1696e0
void sub_00169658_0x169658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169658_0x169658");
#endif

    switch (ctx->pc) {
        case 0x169680u: goto label_169680;
        case 0x169688u: goto label_169688;
        case 0x169690u: goto label_169690;
        case 0x1696a0u: goto label_1696a0;
        case 0x1696a8u: goto label_1696a8;
        default: break;
    }

    ctx->pc = 0x169658u;

    // 0x169658: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x169658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16965c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16965cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x169660: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x169660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x169664: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x169664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169668: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x169668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x16966c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16966cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169674: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x169674u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169678: 0x26240048  addiu       $a0, $s1, 0x48
    ctx->pc = 0x169678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x16967c: 0x0  nop
    ctx->pc = 0x16967cu;
    // NOP
label_169680:
    // 0x169680: 0xc137866  jal         func_4DE198
    ctx->pc = 0x169680u;
    SET_GPR_U32(ctx, 31, 0x169688u);
    ctx->pc = 0x169684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169680u;
    // 0x169684: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x169680u, 0x169688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169688u;
label_169688:
    // 0x169688: 0xc0e409a  jal         func_390268
    ctx->pc = 0x169688u;
    SET_GPR_U32(ctx, 31, 0x169690u);
    ctx->pc = 0x16968Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169688u;
    // 0x16968c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x169688u, 0x169690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169690u;
label_169690:
    // 0x169690: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x169690u;
    {
        const bool branch_taken_0x169690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169690) {
            ctx->pc = 0x169694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169690u;
            // 0x169694: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1696B8u;
            goto label_1696b8;
        }
    }
    ctx->pc = 0x169698u;
    // 0x169698: 0xc087502  jal         func_21D408
    ctx->pc = 0x169698u;
    SET_GPR_U32(ctx, 31, 0x1696A0u);
    ctx->pc = 0x16969Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169698u;
    // 0x16969c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x169698u, 0x1696A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1696A0u;
label_1696a0:
    // 0x1696a0: 0xc0c0f9a  jal         func_303E68
    ctx->pc = 0x1696A0u;
    SET_GPR_U32(ctx, 31, 0x1696A8u);
    ctx->pc = 0x1696A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1696A0u;
    // 0x1696a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303E68u, 0x1696A0u, 0x1696A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1696A8u;
label_1696a8:
    // 0x1696a8: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1696A8u;
    {
        const bool branch_taken_0x1696a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x1696ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1696A8u;
        // 0x1696ac: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1696a8) {
            ctx->pc = 0x1696B8u;
            goto label_1696b8;
        }
    }
    ctx->pc = 0x1696B0u;
    // 0x1696b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1696B0u;
    {
        const bool branch_taken_0x1696b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1696B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1696B0u;
        // 0x1696b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1696b0) {
            ctx->pc = 0x1696C8u;
            goto label_1696c8;
        }
    }
    ctx->pc = 0x1696B8u;
label_1696b8:
    // 0x1696b8: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x1696b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1696bc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1696BCu;
    {
        const bool branch_taken_0x1696bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1696C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1696BCu;
        // 0x1696c0: 0x26240048  addiu       $a0, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1696bc) {
            ctx->pc = 0x169680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169680;
        }
    }
    ctx->pc = 0x1696C4u;
    // 0x1696c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1696c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1696c8:
    // 0x1696c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1696c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1696cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1696ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1696d0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1696d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1696d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1696d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1696d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1696D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1696DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1696D8u;
        // 0x1696dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1696D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1696E0u;
}
