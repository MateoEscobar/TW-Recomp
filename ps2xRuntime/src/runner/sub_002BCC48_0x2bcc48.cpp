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

// Function: sub_002BCC48
// Address: 0x2bcc48 - 0x2bccb8
void sub_002BCC48_0x2bcc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BCC48_0x2bcc48");
#endif

    switch (ctx->pc) {
        case 0x2bcc70u: goto label_2bcc70;
        case 0x2bcc80u: goto label_2bcc80;
        case 0x2bcc90u: goto label_2bcc90;
        case 0x2bcca4u: goto label_2bcca4;
        default: break;
    }

    ctx->pc = 0x2bcc48u;

    // 0x2bcc48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bcc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bcc4c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2bcc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2bcc50: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2bcc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2bcc54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bcc54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcc58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bcc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bcc5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bcc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcc60: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2bcc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2bcc64: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2bcc64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bcc68: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2BCC68u;
    SET_GPR_U32(ctx, 31, 0x2BCC70u);
    ctx->pc = 0x2BCC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCC68u;
    // 0x2bcc6c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BCC68u, 0x2BCC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCC70u;
label_2bcc70:
    // 0x2bcc70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bcc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcc74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bcc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcc78: 0xc0a352c  jal         func_28D4B0
    ctx->pc = 0x2BCC78u;
    SET_GPR_U32(ctx, 31, 0x2BCC80u);
    ctx->pc = 0x2BCC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCC78u;
    // 0x2bcc7c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2BCC78u, 0x2BCC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCC80u;
label_2bcc80:
    // 0x2bcc80: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BCC80u;
    {
        const bool branch_taken_0x2bcc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcc80) {
            ctx->pc = 0x2BCC84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCC80u;
            // 0x2bcc84: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCC9Cu;
            goto label_2bcc9c;
        }
    }
    ctx->pc = 0x2BCC88u;
    // 0x2bcc88: 0xc088e88  jal         func_223A20
    ctx->pc = 0x2BCC88u;
    SET_GPR_U32(ctx, 31, 0x2BCC90u);
    ctx->pc = 0x2BCC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCC88u;
    // 0x2bcc8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x2BCC88u, 0x2BCC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCC90u;
label_2bcc90:
    // 0x2bcc90: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BCC90u;
    {
        const bool branch_taken_0x2bcc90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BCC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCC90u;
        // 0x2bcc94: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcc90) {
            ctx->pc = 0x2BCCA8u;
            goto label_2bcca8;
        }
    }
    ctx->pc = 0x2BCC98u;
    // 0x2bcc98: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bcc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bcc9c:
    // 0x2bcc9c: 0xc08c6d8  jal         func_231B60
    ctx->pc = 0x2BCC9Cu;
    SET_GPR_U32(ctx, 31, 0x2BCCA4u);
    ctx->pc = 0x2BCCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCC9Cu;
    // 0x2bcca0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B60u, 0x2BCC9Cu, 0x2BCCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCCA4u;
label_2bcca4:
    // 0x2bcca4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2bcca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2bcca8:
    // 0x2bcca8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2bcca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bccac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bccacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bccb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCCB0u;
        // 0x2bccb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCCB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCCB8u;
}
