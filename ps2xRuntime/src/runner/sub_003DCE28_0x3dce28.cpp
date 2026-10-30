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

// Function: sub_003DCE28
// Address: 0x3dce28 - 0x3dcec8
void sub_003DCE28_0x3dce28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCE28_0x3dce28");
#endif

    switch (ctx->pc) {
        case 0x3dce28u: goto label_3dce28;
        case 0x3dce2cu: goto label_3dce2c;
        case 0x3dce30u: goto label_3dce30;
        case 0x3dce34u: goto label_3dce34;
        case 0x3dce38u: goto label_3dce38;
        case 0x3dce3cu: goto label_3dce3c;
        case 0x3dce40u: goto label_3dce40;
        case 0x3dce44u: goto label_3dce44;
        case 0x3dce48u: goto label_3dce48;
        case 0x3dce4cu: goto label_3dce4c;
        case 0x3dce50u: goto label_3dce50;
        case 0x3dce54u: goto label_3dce54;
        case 0x3dce58u: goto label_3dce58;
        case 0x3dce5cu: goto label_3dce5c;
        case 0x3dce60u: goto label_3dce60;
        case 0x3dce64u: goto label_3dce64;
        case 0x3dce68u: goto label_3dce68;
        case 0x3dce6cu: goto label_3dce6c;
        case 0x3dce70u: goto label_3dce70;
        case 0x3dce74u: goto label_3dce74;
        case 0x3dce78u: goto label_3dce78;
        case 0x3dce7cu: goto label_3dce7c;
        case 0x3dce80u: goto label_3dce80;
        case 0x3dce84u: goto label_3dce84;
        case 0x3dce88u: goto label_3dce88;
        case 0x3dce8cu: goto label_3dce8c;
        case 0x3dce90u: goto label_3dce90;
        case 0x3dce94u: goto label_3dce94;
        case 0x3dce98u: goto label_3dce98;
        case 0x3dce9cu: goto label_3dce9c;
        case 0x3dcea0u: goto label_3dcea0;
        case 0x3dcea4u: goto label_3dcea4;
        case 0x3dcea8u: goto label_3dcea8;
        case 0x3dceacu: goto label_3dceac;
        case 0x3dceb0u: goto label_3dceb0;
        case 0x3dceb4u: goto label_3dceb4;
        case 0x3dceb8u: goto label_3dceb8;
        case 0x3dcebcu: goto label_3dcebc;
        case 0x3dcec0u: goto label_3dcec0;
        case 0x3dcec4u: goto label_3dcec4;
        default: break;
    }

    ctx->pc = 0x3dce28u;

label_3dce28:
    // 0x3dce28: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3dce28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3dce2c:
    // 0x3dce2c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3dce2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3dce30:
    // 0x3dce30: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3dce30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3dce34:
    // 0x3dce34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3dce34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dce38:
    // 0x3dce38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3dce38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3dce3c:
    // 0x3dce3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dce3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dce40:
    // 0x3dce40: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3dce40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3dce44:
    // 0x3dce44: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dce44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dce48:
    // 0x3dce48: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dce48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dce4c:
    // 0x3dce4c: 0x40f809  jalr        $v0
label_3dce50:
    if (ctx->pc == 0x3DCE50u) {
        ctx->pc = 0x3DCE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCE4Cu;
        // 0x3dce50: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCE54u;
        goto label_3dce54;
    }
    ctx->pc = 0x3DCE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DCE54u);
        ctx->pc = 0x3DCE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCE4Cu;
        // 0x3dce50: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCE4Cu, 0x3DCE54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DCE54u;
label_3dce54:
    // 0x3dce54: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3dce54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3dce58:
    // 0x3dce58: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3dce58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3dce5c:
    // 0x3dce5c: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3dce5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3dce60:
    // 0x3dce60: 0xc0e858c  jal         func_3A1630
label_3dce64:
    if (ctx->pc == 0x3DCE64u) {
        ctx->pc = 0x3DCE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCE60u;
        // 0x3dce64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCE68u;
        goto label_3dce68;
    }
    ctx->pc = 0x3DCE60u;
    SET_GPR_U32(ctx, 31, 0x3DCE68u);
    ctx->pc = 0x3DCE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCE60u;
    // 0x3dce64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DCE60u, 0x3DCE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCE68u;
label_3dce68:
    // 0x3dce68: 0xc0ea14c  jal         func_3A8530
label_3dce6c:
    if (ctx->pc == 0x3DCE6Cu) {
        ctx->pc = 0x3DCE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCE68u;
        // 0x3dce6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCE70u;
        goto label_3dce70;
    }
    ctx->pc = 0x3DCE68u;
    SET_GPR_U32(ctx, 31, 0x3DCE70u);
    ctx->pc = 0x3DCE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCE68u;
    // 0x3dce6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3DCE68u, 0x3DCE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCE70u;
label_3dce70:
    // 0x3dce70: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dce70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dce74:
    // 0x3dce74: 0xc0ea12a  jal         func_3A84A8
label_3dce78:
    if (ctx->pc == 0x3DCE78u) {
        ctx->pc = 0x3DCE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCE74u;
        // 0x3dce78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCE7Cu;
        goto label_3dce7c;
    }
    ctx->pc = 0x3DCE74u;
    SET_GPR_U32(ctx, 31, 0x3DCE7Cu);
    ctx->pc = 0x3DCE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCE74u;
    // 0x3dce78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DCE74u, 0x3DCE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCE7Cu;
label_3dce7c:
    // 0x3dce7c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dce7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dce80:
    // 0x3dce80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3dce80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dce84:
    // 0x3dce84: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dce84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dce88:
    // 0x3dce88: 0xc0ea12a  jal         func_3A84A8
label_3dce8c:
    if (ctx->pc == 0x3DCE8Cu) {
        ctx->pc = 0x3DCE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCE88u;
        // 0x3dce8c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCE90u;
        goto label_3dce90;
    }
    ctx->pc = 0x3DCE88u;
    SET_GPR_U32(ctx, 31, 0x3DCE90u);
    ctx->pc = 0x3DCE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCE88u;
    // 0x3dce8c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DCE88u, 0x3DCE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCE90u;
label_3dce90:
    // 0x3dce90: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dce90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dce94:
    // 0x3dce94: 0x3c052295  lui         $a1, 0x2295
    ctx->pc = 0x3dce94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8853 << 16));
label_3dce98:
    // 0x3dce98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3dce98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dce9c:
    // 0x3dce9c: 0x34a5785e  ori         $a1, $a1, 0x785E
    ctx->pc = 0x3dce9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)30814);
label_3dcea0:
    // 0x3dcea0: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3dcea0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3dcea4:
    // 0x3dcea4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3dcea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dcea8:
    // 0x3dcea8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3dcea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3dceac:
    // 0x3dceac: 0xc045cb2  jal         func_1172C8
label_3dceb0:
    if (ctx->pc == 0x3DCEB0u) {
        ctx->pc = 0x3DCEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCEACu;
        // 0x3dceb0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCEB4u;
        goto label_3dceb4;
    }
    ctx->pc = 0x3DCEACu;
    SET_GPR_U32(ctx, 31, 0x3DCEB4u);
    ctx->pc = 0x3DCEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCEACu;
    // 0x3dceb0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172C8u, 0x3DCEACu, 0x3DCEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCEB4u;
label_3dceb4:
    // 0x3dceb4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3dceb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3dceb8:
    // 0x3dceb8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3dceb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3dcebc:
    // 0x3dcebc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3dcebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3dcec0:
    // 0x3dcec0: 0x3e00008  jr          $ra
label_3dcec4:
    if (ctx->pc == 0x3DCEC4u) {
        ctx->pc = 0x3DCEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCEC0u;
        // 0x3dcec4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCEC8u;
        goto label_fallthrough_0x3dcec0;
    }
    ctx->pc = 0x3DCEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCEC0u;
        // 0x3dcec4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3dcec0:
    ctx->pc = 0x3DCEC8u;
}
