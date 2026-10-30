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

// Function: sub_0028AA18
// Address: 0x28aa18 - 0x28aac0
void sub_0028AA18_0x28aa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AA18_0x28aa18");
#endif

    switch (ctx->pc) {
        case 0x28aa48u: goto label_28aa48;
        case 0x28aa54u: goto label_28aa54;
        case 0x28aa80u: goto label_28aa80;
        case 0x28aa88u: goto label_28aa88;
        default: break;
    }

    ctx->pc = 0x28aa18u;

    // 0x28aa18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28aa18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28aa1c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x28aa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x28aa20: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x28aa20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x28aa24: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x28aa24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x28aa28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28aa28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aa2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28aa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28aa30: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x28aa30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aa34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28aa34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28aa38: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x28aa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28aa3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28aa3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aa40: 0xc087502  jal         func_21D408
    ctx->pc = 0x28AA40u;
    SET_GPR_U32(ctx, 31, 0x28AA48u);
    ctx->pc = 0x28AA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AA40u;
    // 0x28aa44: 0x8c5200cc  lw          $s2, 0xCC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x28AA40u, 0x28AA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AA48u;
label_28aa48:
    // 0x28aa48: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x28aa48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28aa4c: 0xc08a200  jal         func_228800
    ctx->pc = 0x28AA4Cu;
    SET_GPR_U32(ctx, 31, 0x28AA54u);
    ctx->pc = 0x28AA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AA4Cu;
    // 0x28aa50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x28AA4Cu, 0x28AA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AA54u;
label_28aa54:
    // 0x28aa54: 0x9043011a  lbu         $v1, 0x11A($v0)
    ctx->pc = 0x28aa54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 282)));
    // 0x28aa58: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28AA58u;
    {
        const bool branch_taken_0x28aa58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x28AA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA58u;
        // 0x28aa5c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa58) {
            ctx->pc = 0x28AA70u;
            goto label_28aa70;
        }
    }
    ctx->pc = 0x28AA60u;
    // 0x28aa60: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x28aa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28aa64: 0x9043019d  lbu         $v1, 0x19D($v0)
    ctx->pc = 0x28aa64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 413)));
    // 0x28aa68: 0x3982b  sltu        $s3, $zero, $v1
    ctx->pc = 0x28aa68u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x28aa6c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x28aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_28aa70:
    // 0x28aa70: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28aa70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aa74: 0x53900b  movn        $s2, $v0, $s3
    ctx->pc = 0x28aa74u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x28aa78: 0x26330298  addiu       $s3, $s1, 0x298
    ctx->pc = 0x28aa78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 664));
    // 0x28aa7c: 0x0  nop
    ctx->pc = 0x28aa7cu;
    // NOP
label_28aa80:
    // 0x28aa80: 0xc08a200  jal         func_228800
    ctx->pc = 0x28AA80u;
    SET_GPR_U32(ctx, 31, 0x28AA88u);
    ctx->pc = 0x28AA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AA80u;
    // 0x28aa84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x28AA80u, 0x28AA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AA88u;
label_28aa88:
    // 0x28aa88: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x28aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x28aa8c: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x28aa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x28aa90: 0x9043011e  lbu         $v1, 0x11E($v0)
    ctx->pc = 0x28aa90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 286)));
    // 0x28aa94: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28aa94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28aa98: 0x2e02002d  sltiu       $v0, $s0, 0x2D
    ctx->pc = 0x28aa98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)45) ? 1 : 0);
    // 0x28aa9c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x28AA9Cu;
    {
        const bool branch_taken_0x28aa9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA9Cu;
        // 0x28aaa0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa9c) {
            ctx->pc = 0x28AA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28aa80;
        }
    }
    ctx->pc = 0x28AAA4u;
    // 0x28aaa4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x28aaa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28aaa8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x28aaa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28aaac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28aaacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28aab0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x28aab0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28aab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28aab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28aab8: 0x3e00008  jr          $ra
    ctx->pc = 0x28AAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAB8u;
        // 0x28aabc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AAC0u;
}
