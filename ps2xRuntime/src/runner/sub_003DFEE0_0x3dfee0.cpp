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

// Function: sub_003DFEE0
// Address: 0x3dfee0 - 0x3dffc0
void sub_003DFEE0_0x3dfee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DFEE0_0x3dfee0");
#endif

    switch (ctx->pc) {
        case 0x3dfee0u: goto label_3dfee0;
        case 0x3dfee4u: goto label_3dfee4;
        case 0x3dfee8u: goto label_3dfee8;
        case 0x3dfeecu: goto label_3dfeec;
        case 0x3dfef0u: goto label_3dfef0;
        case 0x3dfef4u: goto label_3dfef4;
        case 0x3dfef8u: goto label_3dfef8;
        case 0x3dfefcu: goto label_3dfefc;
        case 0x3dff00u: goto label_3dff00;
        case 0x3dff04u: goto label_3dff04;
        case 0x3dff08u: goto label_3dff08;
        case 0x3dff0cu: goto label_3dff0c;
        case 0x3dff10u: goto label_3dff10;
        case 0x3dff14u: goto label_3dff14;
        case 0x3dff18u: goto label_3dff18;
        case 0x3dff1cu: goto label_3dff1c;
        case 0x3dff20u: goto label_3dff20;
        case 0x3dff24u: goto label_3dff24;
        case 0x3dff28u: goto label_3dff28;
        case 0x3dff2cu: goto label_3dff2c;
        case 0x3dff30u: goto label_3dff30;
        case 0x3dff34u: goto label_3dff34;
        case 0x3dff38u: goto label_3dff38;
        case 0x3dff3cu: goto label_3dff3c;
        case 0x3dff40u: goto label_3dff40;
        case 0x3dff44u: goto label_3dff44;
        case 0x3dff48u: goto label_3dff48;
        case 0x3dff4cu: goto label_3dff4c;
        case 0x3dff50u: goto label_3dff50;
        case 0x3dff54u: goto label_3dff54;
        case 0x3dff58u: goto label_3dff58;
        case 0x3dff5cu: goto label_3dff5c;
        case 0x3dff60u: goto label_3dff60;
        case 0x3dff64u: goto label_3dff64;
        case 0x3dff68u: goto label_3dff68;
        case 0x3dff6cu: goto label_3dff6c;
        case 0x3dff70u: goto label_3dff70;
        case 0x3dff74u: goto label_3dff74;
        case 0x3dff78u: goto label_3dff78;
        case 0x3dff7cu: goto label_3dff7c;
        case 0x3dff80u: goto label_3dff80;
        case 0x3dff84u: goto label_3dff84;
        case 0x3dff88u: goto label_3dff88;
        case 0x3dff8cu: goto label_3dff8c;
        case 0x3dff90u: goto label_3dff90;
        case 0x3dff94u: goto label_3dff94;
        case 0x3dff98u: goto label_3dff98;
        case 0x3dff9cu: goto label_3dff9c;
        case 0x3dffa0u: goto label_3dffa0;
        case 0x3dffa4u: goto label_3dffa4;
        case 0x3dffa8u: goto label_3dffa8;
        case 0x3dffacu: goto label_3dffac;
        case 0x3dffb0u: goto label_3dffb0;
        case 0x3dffb4u: goto label_3dffb4;
        case 0x3dffb8u: goto label_3dffb8;
        case 0x3dffbcu: goto label_3dffbc;
        default: break;
    }

    ctx->pc = 0x3dfee0u;

label_3dfee0:
    // 0x3dfee0: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x3dfee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
label_3dfee4:
    // 0x3dfee4: 0x7fb00430  sq          $s0, 0x430($sp)
    ctx->pc = 0x3dfee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 16));
label_3dfee8:
    // 0x3dfee8: 0x7fb10420  sq          $s1, 0x420($sp)
    ctx->pc = 0x3dfee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 17));
label_3dfeec:
    // 0x3dfeec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dfeecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dfef0:
    // 0x3dfef0: 0xffbf0410  sd          $ra, 0x410($sp)
    ctx->pc = 0x3dfef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
label_3dfef4:
    // 0x3dfef4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3dfef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3dfef8:
    // 0x3dfef8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dfef8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dfefc:
    // 0x3dfefc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dfefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dff00:
    // 0x3dff00: 0x40f809  jalr        $v0
label_3dff04:
    if (ctx->pc == 0x3DFF04u) {
        ctx->pc = 0x3DFF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFF00u;
        // 0x3dff04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFF08u;
        goto label_3dff08;
    }
    ctx->pc = 0x3DFF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DFF08u);
        ctx->pc = 0x3DFF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFF00u;
        // 0x3dff04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DFF00u, 0x3DFF08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DFF08u;
label_3dff08:
    // 0x3dff08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3dff08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dff0c:
    // 0x3dff0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3dff0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3dff10:
    // 0x3dff10: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3dff10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3dff14:
    // 0x3dff14: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3dff14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3dff18:
    // 0x3dff18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3dff18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3dff1c:
    // 0x3dff1c: 0x0  nop
    ctx->pc = 0x3dff1cu;
    // NOP
label_3dff20:
    // 0x3dff20: 0x0  nop
    ctx->pc = 0x3dff20u;
    // NOP
label_3dff24:
    // 0x3dff24: 0x0  nop
    ctx->pc = 0x3dff24u;
    // NOP
label_3dff28:
    // 0x3dff28: 0x0  nop
    ctx->pc = 0x3dff28u;
    // NOP
label_3dff2c:
    // 0x3dff2c: 0x0  nop
    ctx->pc = 0x3dff2cu;
    // NOP
label_3dff30:
    // 0x3dff30: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3dff34:
    if (ctx->pc == 0x3DFF34u) {
        ctx->pc = 0x3DFF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFF30u;
        // 0x3dff34: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFF38u;
        goto label_3dff38;
    }
    ctx->pc = 0x3DFF30u;
    {
        const bool branch_taken_0x3dff30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3DFF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFF30u;
        // 0x3dff34: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dff30) {
            ctx->pc = 0x3DFF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dff20;
        }
    }
    ctx->pc = 0x3DFF38u;
label_3dff38:
    // 0x3dff38: 0xc138ddc  jal         func_4E3770
label_3dff3c:
    if (ctx->pc == 0x3DFF3Cu) {
        ctx->pc = 0x3DFF40u;
        goto label_3dff40;
    }
    ctx->pc = 0x3DFF38u;
    SET_GPR_U32(ctx, 31, 0x3DFF40u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3DFF38u, 0x3DFF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFF40u;
label_3dff40:
    // 0x3dff40: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3dff40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3dff44:
    // 0x3dff44: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3dff44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3dff48:
    // 0x3dff48: 0xc0cd4ee  jal         func_3353B8
label_3dff4c:
    if (ctx->pc == 0x3DFF4Cu) {
        ctx->pc = 0x3DFF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFF48u;
        // 0x3dff4c: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFF50u;
        goto label_3dff50;
    }
    ctx->pc = 0x3DFF48u;
    SET_GPR_U32(ctx, 31, 0x3DFF50u);
    ctx->pc = 0x3DFF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFF48u;
    // 0x3dff4c: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3DFF48u, 0x3DFF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFF50u;
label_3dff50:
    // 0x3dff50: 0x2445000a  addiu       $a1, $v0, 0xA
    ctx->pc = 0x3dff50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_3dff54:
    // 0x3dff54: 0xc0e858c  jal         func_3A1630
label_3dff58:
    if (ctx->pc == 0x3DFF58u) {
        ctx->pc = 0x3DFF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFF54u;
        // 0x3dff58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFF5Cu;
        goto label_3dff5c;
    }
    ctx->pc = 0x3DFF54u;
    SET_GPR_U32(ctx, 31, 0x3DFF5Cu);
    ctx->pc = 0x3DFF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFF54u;
    // 0x3dff58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DFF54u, 0x3DFF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFF5Cu;
label_3dff5c:
    // 0x3dff5c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3dff5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3dff60:
    // 0x3dff60: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_3dff64:
    if (ctx->pc == 0x3DFF64u) {
        ctx->pc = 0x3DFF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFF60u;
        // 0x3dff64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFF68u;
        goto label_3dff68;
    }
    ctx->pc = 0x3DFF60u;
    {
        const bool branch_taken_0x3dff60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dff60) {
            ctx->pc = 0x3DFF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DFF60u;
            // 0x3dff64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DFF74u;
            goto label_3dff74;
        }
    }
    ctx->pc = 0x3DFF68u;
label_3dff68:
    // 0x3dff68: 0x3c02f45c  lui         $v0, 0xF45C
    ctx->pc = 0x3dff68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62556 << 16));
label_3dff6c:
    // 0x3dff6c: 0x10000005  b           . + 4 + (0x5 << 2)
label_3dff70:
    if (ctx->pc == 0x3DFF70u) {
        ctx->pc = 0x3DFF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFF6Cu;
        // 0x3dff70: 0x34421cff  ori         $v0, $v0, 0x1CFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7423);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFF74u;
        goto label_3dff74;
    }
    ctx->pc = 0x3DFF6Cu;
    {
        const bool branch_taken_0x3dff6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFF6Cu;
        // 0x3dff70: 0x34421cff  ori         $v0, $v0, 0x1CFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7423);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dff6c) {
            ctx->pc = 0x3DFF84u;
            goto label_3dff84;
        }
    }
    ctx->pc = 0x3DFF74u;
label_3dff74:
    // 0x3dff74: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
label_3dff78:
    if (ctx->pc == 0x3DFF78u) {
        ctx->pc = 0x3DFF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFF74u;
        // 0x3dff78: 0x7bb00430  lq          $s0, 0x430($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFF7Cu;
        goto label_3dff7c;
    }
    ctx->pc = 0x3DFF74u;
    {
        const bool branch_taken_0x3dff74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3dff74) {
            ctx->pc = 0x3DFF78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DFF74u;
            // 0x3dff78: 0x7bb00430  lq          $s0, 0x430($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DFFACu;
            goto label_3dffac;
        }
    }
    ctx->pc = 0x3DFF7Cu;
label_3dff7c:
    // 0x3dff7c: 0x3c02f4ba  lui         $v0, 0xF4BA
    ctx->pc = 0x3dff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62650 << 16));
label_3dff80:
    // 0x3dff80: 0x34421fff  ori         $v0, $v0, 0x1FFF
    ctx->pc = 0x3dff80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8191);
label_3dff84:
    // 0x3dff84: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x3dff84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_3dff88:
    // 0x3dff88: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3dff88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3dff8c:
    // 0x3dff8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3dff8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3dff90:
    // 0x3dff90: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x3dff90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_3dff94:
    // 0x3dff94: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3dff94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3dff98:
    // 0x3dff98: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3dff98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_3dff9c:
    // 0x3dff9c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3dff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3dffa0:
    // 0x3dffa0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3dffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3dffa4:
    // 0x3dffa4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3dffa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3dffa8:
    // 0x3dffa8: 0x7bb00430  lq          $s0, 0x430($sp)
    ctx->pc = 0x3dffa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3dffac:
    // 0x3dffac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dffacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dffb0:
    // 0x3dffb0: 0x7bb10420  lq          $s1, 0x420($sp)
    ctx->pc = 0x3dffb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3dffb4:
    // 0x3dffb4: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x3dffb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_3dffb8:
    // 0x3dffb8: 0x3e00008  jr          $ra
label_3dffbc:
    if (ctx->pc == 0x3DFFBCu) {
        ctx->pc = 0x3DFFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFFB8u;
        // 0x3dffbc: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFFC0u;
        goto label_fallthrough_0x3dffb8;
    }
    ctx->pc = 0x3DFFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DFFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFFB8u;
        // 0x3dffbc: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DFFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3dffb8:
    ctx->pc = 0x3DFFC0u;
}
