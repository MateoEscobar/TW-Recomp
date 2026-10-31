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

// Function: sub_003DCC18
// Address: 0x3dcc18 - 0x3dccb8
void sub_003DCC18_0x3dcc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCC18_0x3dcc18");
#endif

    switch (ctx->pc) {
        case 0x3dcc18u: goto label_3dcc18;
        case 0x3dcc1cu: goto label_3dcc1c;
        case 0x3dcc20u: goto label_3dcc20;
        case 0x3dcc24u: goto label_3dcc24;
        case 0x3dcc28u: goto label_3dcc28;
        case 0x3dcc2cu: goto label_3dcc2c;
        case 0x3dcc30u: goto label_3dcc30;
        case 0x3dcc34u: goto label_3dcc34;
        case 0x3dcc38u: goto label_3dcc38;
        case 0x3dcc3cu: goto label_3dcc3c;
        case 0x3dcc40u: goto label_3dcc40;
        case 0x3dcc44u: goto label_3dcc44;
        case 0x3dcc48u: goto label_3dcc48;
        case 0x3dcc4cu: goto label_3dcc4c;
        case 0x3dcc50u: goto label_3dcc50;
        case 0x3dcc54u: goto label_3dcc54;
        case 0x3dcc58u: goto label_3dcc58;
        case 0x3dcc5cu: goto label_3dcc5c;
        case 0x3dcc60u: goto label_3dcc60;
        case 0x3dcc64u: goto label_3dcc64;
        case 0x3dcc68u: goto label_3dcc68;
        case 0x3dcc6cu: goto label_3dcc6c;
        case 0x3dcc70u: goto label_3dcc70;
        case 0x3dcc74u: goto label_3dcc74;
        case 0x3dcc78u: goto label_3dcc78;
        case 0x3dcc7cu: goto label_3dcc7c;
        case 0x3dcc80u: goto label_3dcc80;
        case 0x3dcc84u: goto label_3dcc84;
        case 0x3dcc88u: goto label_3dcc88;
        case 0x3dcc8cu: goto label_3dcc8c;
        case 0x3dcc90u: goto label_3dcc90;
        case 0x3dcc94u: goto label_3dcc94;
        case 0x3dcc98u: goto label_3dcc98;
        case 0x3dcc9cu: goto label_3dcc9c;
        case 0x3dcca0u: goto label_3dcca0;
        case 0x3dcca4u: goto label_3dcca4;
        case 0x3dcca8u: goto label_3dcca8;
        case 0x3dccacu: goto label_3dccac;
        case 0x3dccb0u: goto label_3dccb0;
        case 0x3dccb4u: goto label_3dccb4;
        default: break;
    }

    ctx->pc = 0x3dcc18u;

label_3dcc18:
    // 0x3dcc18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3dcc18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3dcc1c:
    // 0x3dcc1c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3dcc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3dcc20:
    // 0x3dcc20: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3dcc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3dcc24:
    // 0x3dcc24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3dcc24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dcc28:
    // 0x3dcc28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3dcc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3dcc2c:
    // 0x3dcc2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dcc2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dcc30:
    // 0x3dcc30: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3dcc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3dcc34:
    // 0x3dcc34: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dcc34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dcc38:
    // 0x3dcc38: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dcc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dcc3c:
    // 0x3dcc3c: 0x40f809  jalr        $v0
label_3dcc40:
    if (ctx->pc == 0x3DCC40u) {
        ctx->pc = 0x3DCC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCC3Cu;
        // 0x3dcc40: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCC44u;
        goto label_3dcc44;
    }
    ctx->pc = 0x3DCC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DCC44u);
        ctx->pc = 0x3DCC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCC3Cu;
        // 0x3dcc40: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCC3Cu, 0x3DCC44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DCC44u;
label_3dcc44:
    // 0x3dcc44: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3dcc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3dcc48:
    // 0x3dcc48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3dcc48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3dcc4c:
    // 0x3dcc4c: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3dcc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3dcc50:
    // 0x3dcc50: 0xc0e858c  jal         func_3A1630
label_3dcc54:
    if (ctx->pc == 0x3DCC54u) {
        ctx->pc = 0x3DCC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCC50u;
        // 0x3dcc54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCC58u;
        goto label_3dcc58;
    }
    ctx->pc = 0x3DCC50u;
    SET_GPR_U32(ctx, 31, 0x3DCC58u);
    ctx->pc = 0x3DCC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCC50u;
    // 0x3dcc54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DCC50u, 0x3DCC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCC58u;
label_3dcc58:
    // 0x3dcc58: 0xc0ea14c  jal         func_3A8530
label_3dcc5c:
    if (ctx->pc == 0x3DCC5Cu) {
        ctx->pc = 0x3DCC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCC58u;
        // 0x3dcc5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCC60u;
        goto label_3dcc60;
    }
    ctx->pc = 0x3DCC58u;
    SET_GPR_U32(ctx, 31, 0x3DCC60u);
    ctx->pc = 0x3DCC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCC58u;
    // 0x3dcc5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3DCC58u, 0x3DCC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCC60u;
label_3dcc60:
    // 0x3dcc60: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dcc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dcc64:
    // 0x3dcc64: 0xc0ea12a  jal         func_3A84A8
label_3dcc68:
    if (ctx->pc == 0x3DCC68u) {
        ctx->pc = 0x3DCC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCC64u;
        // 0x3dcc68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCC6Cu;
        goto label_3dcc6c;
    }
    ctx->pc = 0x3DCC64u;
    SET_GPR_U32(ctx, 31, 0x3DCC6Cu);
    ctx->pc = 0x3DCC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCC64u;
    // 0x3dcc68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DCC64u, 0x3DCC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCC6Cu;
label_3dcc6c:
    // 0x3dcc6c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dcc6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dcc70:
    // 0x3dcc70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3dcc70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dcc74:
    // 0x3dcc74: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dcc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dcc78:
    // 0x3dcc78: 0xc0ea12a  jal         func_3A84A8
label_3dcc7c:
    if (ctx->pc == 0x3DCC7Cu) {
        ctx->pc = 0x3DCC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCC78u;
        // 0x3dcc7c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCC80u;
        goto label_3dcc80;
    }
    ctx->pc = 0x3DCC78u;
    SET_GPR_U32(ctx, 31, 0x3DCC80u);
    ctx->pc = 0x3DCC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCC78u;
    // 0x3dcc7c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DCC78u, 0x3DCC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCC80u;
label_3dcc80:
    // 0x3dcc80: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dcc80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dcc84:
    // 0x3dcc84: 0x3c052295  lui         $a1, 0x2295
    ctx->pc = 0x3dcc84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8853 << 16));
label_3dcc88:
    // 0x3dcc88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3dcc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dcc8c:
    // 0x3dcc8c: 0x34a5785e  ori         $a1, $a1, 0x785E
    ctx->pc = 0x3dcc8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)30814);
label_3dcc90:
    // 0x3dcc90: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3dcc90u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3dcc94:
    // 0x3dcc94: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3dcc94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dcc98:
    // 0x3dcc98: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3dcc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3dcc9c:
    // 0x3dcc9c: 0xc045cb2  jal         func_1172C8
label_3dcca0:
    if (ctx->pc == 0x3DCCA0u) {
        ctx->pc = 0x3DCCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCC9Cu;
        // 0x3dcca0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCCA4u;
        goto label_3dcca4;
    }
    ctx->pc = 0x3DCC9Cu;
    SET_GPR_U32(ctx, 31, 0x3DCCA4u);
    ctx->pc = 0x3DCCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCC9Cu;
    // 0x3dcca0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172C8u, 0x3DCC9Cu, 0x3DCCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCCA4u;
label_3dcca4:
    // 0x3dcca4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3dcca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3dcca8:
    // 0x3dcca8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3dcca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3dccac:
    // 0x3dccac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3dccacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3dccb0:
    // 0x3dccb0: 0x3e00008  jr          $ra
label_3dccb4:
    if (ctx->pc == 0x3DCCB4u) {
        ctx->pc = 0x3DCCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCCB0u;
        // 0x3dccb4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCCB8u;
        goto label_fallthrough_0x3dccb0;
    }
    ctx->pc = 0x3DCCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCCB0u;
        // 0x3dccb4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCCB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3dccb0:
    ctx->pc = 0x3DCCB8u;
}
