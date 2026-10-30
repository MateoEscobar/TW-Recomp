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

// Function: sub_002BFC48
// Address: 0x2bfc48 - 0x2bfce0
void sub_002BFC48_0x2bfc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFC48_0x2bfc48");
#endif

    switch (ctx->pc) {
        case 0x2bfc68u: goto label_2bfc68;
        case 0x2bfc70u: goto label_2bfc70;
        case 0x2bfc78u: goto label_2bfc78;
        case 0x2bfc80u: goto label_2bfc80;
        case 0x2bfc94u: goto label_2bfc94;
        case 0x2bfca4u: goto label_2bfca4;
        default: break;
    }

    ctx->pc = 0x2bfc48u;

    // 0x2bfc48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bfc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bfc4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2bfc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfc50: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2bfc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2bfc54: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2bfc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2bfc58: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2bfc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2bfc5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bfc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bfc60: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x2BFC60u;
    SET_GPR_U32(ctx, 31, 0x2BFC68u);
    ctx->pc = 0x2BFC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFC60u;
    // 0x2bfc64: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x2BFC60u, 0x2BFC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFC68u;
label_2bfc68:
    // 0x2bfc68: 0x24520048  addiu       $s2, $v0, 0x48
    ctx->pc = 0x2bfc68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x2bfc6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bfc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bfc70:
    // 0x2bfc70: 0xc137866  jal         func_4DE198
    ctx->pc = 0x2BFC70u;
    SET_GPR_U32(ctx, 31, 0x2BFC78u);
    ctx->pc = 0x2BFC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFC70u;
    // 0x2bfc74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x2BFC70u, 0x2BFC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFC78u;
label_2bfc78:
    // 0x2bfc78: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2BFC78u;
    SET_GPR_U32(ctx, 31, 0x2BFC80u);
    ctx->pc = 0x2BFC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFC78u;
    // 0x2bfc7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BFC78u, 0x2BFC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFC80u;
label_2bfc80:
    // 0x2bfc80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bfc80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfc84: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2BFC84u;
    {
        const bool branch_taken_0x2bfc84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfc84) {
            ctx->pc = 0x2BFC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFC84u;
            // 0x2bfc88: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFCB8u;
            goto label_2bfcb8;
        }
    }
    ctx->pc = 0x2BFC8Cu;
    // 0x2bfc8c: 0xc088edc  jal         func_223B70
    ctx->pc = 0x2BFC8Cu;
    SET_GPR_U32(ctx, 31, 0x2BFC94u);
    ctx->pc = 0x2BFC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFC8Cu;
    // 0x2bfc90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x2BFC8Cu, 0x2BFC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFC94u;
label_2bfc94:
    // 0x2bfc94: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BFC94u;
    {
        const bool branch_taken_0x2bfc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfc94) {
            ctx->pc = 0x2BFC98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFC94u;
            // 0x2bfc98: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFCB8u;
            goto label_2bfcb8;
        }
    }
    ctx->pc = 0x2BFC9Cu;
    // 0x2bfc9c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2BFC9Cu;
    SET_GPR_U32(ctx, 31, 0x2BFCA4u);
    ctx->pc = 0x2BFCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFC9Cu;
    // 0x2bfca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2BFC9Cu, 0x2BFCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFCA4u;
label_2bfca4:
    // 0x2bfca4: 0x8c430288  lw          $v1, 0x288($v0)
    ctx->pc = 0x2bfca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 648)));
    // 0x2bfca8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BFCA8u;
    {
        const bool branch_taken_0x2bfca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFCA8u;
        // 0x2bfcac: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfca8) {
            ctx->pc = 0x2BFCB8u;
            goto label_2bfcb8;
        }
    }
    ctx->pc = 0x2BFCB0u;
    // 0x2bfcb0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BFCB0u;
    {
        const bool branch_taken_0x2bfcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFCB0u;
        // 0x2bfcb4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfcb0) {
            ctx->pc = 0x2BFCC8u;
            goto label_2bfcc8;
        }
    }
    ctx->pc = 0x2BFCB8u;
label_2bfcb8:
    // 0x2bfcb8: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x2bfcb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2bfcbc: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2BFCBCu;
    {
        const bool branch_taken_0x2bfcbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFCBCu;
        // 0x2bfcc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfcbc) {
            ctx->pc = 0x2BFC70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bfc70;
        }
    }
    ctx->pc = 0x2BFCC4u;
    // 0x2bfcc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bfcc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bfcc8:
    // 0x2bfcc8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2bfcc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bfccc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2bfcccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bfcd0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2bfcd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bfcd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bfcd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bfcd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFCD8u;
        // 0x2bfcdc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFCD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFCE0u;
}
