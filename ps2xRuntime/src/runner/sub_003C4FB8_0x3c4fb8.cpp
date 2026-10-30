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

// Function: sub_003C4FB8
// Address: 0x3c4fb8 - 0x3c51b0
void sub_003C4FB8_0x3c4fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C4FB8_0x3c4fb8");
#endif

    switch (ctx->pc) {
        case 0x3c4fb8u: goto label_3c4fb8;
        case 0x3c4fbcu: goto label_3c4fbc;
        case 0x3c4fc0u: goto label_3c4fc0;
        case 0x3c4fc4u: goto label_3c4fc4;
        case 0x3c4fc8u: goto label_3c4fc8;
        case 0x3c4fccu: goto label_3c4fcc;
        case 0x3c4fd0u: goto label_3c4fd0;
        case 0x3c4fd4u: goto label_3c4fd4;
        case 0x3c4fd8u: goto label_3c4fd8;
        case 0x3c4fdcu: goto label_3c4fdc;
        case 0x3c4fe0u: goto label_3c4fe0;
        case 0x3c4fe4u: goto label_3c4fe4;
        case 0x3c4fe8u: goto label_3c4fe8;
        case 0x3c4fecu: goto label_3c4fec;
        case 0x3c4ff0u: goto label_3c4ff0;
        case 0x3c4ff4u: goto label_3c4ff4;
        case 0x3c4ff8u: goto label_3c4ff8;
        case 0x3c4ffcu: goto label_3c4ffc;
        case 0x3c5000u: goto label_3c5000;
        case 0x3c5004u: goto label_3c5004;
        case 0x3c5008u: goto label_3c5008;
        case 0x3c500cu: goto label_3c500c;
        case 0x3c5010u: goto label_3c5010;
        case 0x3c5014u: goto label_3c5014;
        case 0x3c5018u: goto label_3c5018;
        case 0x3c501cu: goto label_3c501c;
        case 0x3c5020u: goto label_3c5020;
        case 0x3c5024u: goto label_3c5024;
        case 0x3c5028u: goto label_3c5028;
        case 0x3c502cu: goto label_3c502c;
        case 0x3c5030u: goto label_3c5030;
        case 0x3c5034u: goto label_3c5034;
        case 0x3c5038u: goto label_3c5038;
        case 0x3c503cu: goto label_3c503c;
        case 0x3c5040u: goto label_3c5040;
        case 0x3c5044u: goto label_3c5044;
        case 0x3c5048u: goto label_3c5048;
        case 0x3c504cu: goto label_3c504c;
        case 0x3c5050u: goto label_3c5050;
        case 0x3c5054u: goto label_3c5054;
        case 0x3c5058u: goto label_3c5058;
        case 0x3c505cu: goto label_3c505c;
        case 0x3c5060u: goto label_3c5060;
        case 0x3c5064u: goto label_3c5064;
        case 0x3c5068u: goto label_3c5068;
        case 0x3c506cu: goto label_3c506c;
        case 0x3c5070u: goto label_3c5070;
        case 0x3c5074u: goto label_3c5074;
        case 0x3c5078u: goto label_3c5078;
        case 0x3c507cu: goto label_3c507c;
        case 0x3c5080u: goto label_3c5080;
        case 0x3c5084u: goto label_3c5084;
        case 0x3c5088u: goto label_3c5088;
        case 0x3c508cu: goto label_3c508c;
        case 0x3c5090u: goto label_3c5090;
        case 0x3c5094u: goto label_3c5094;
        case 0x3c5098u: goto label_3c5098;
        case 0x3c509cu: goto label_3c509c;
        case 0x3c50a0u: goto label_3c50a0;
        case 0x3c50a4u: goto label_3c50a4;
        case 0x3c50a8u: goto label_3c50a8;
        case 0x3c50acu: goto label_3c50ac;
        case 0x3c50b0u: goto label_3c50b0;
        case 0x3c50b4u: goto label_3c50b4;
        case 0x3c50b8u: goto label_3c50b8;
        case 0x3c50bcu: goto label_3c50bc;
        case 0x3c50c0u: goto label_3c50c0;
        case 0x3c50c4u: goto label_3c50c4;
        case 0x3c50c8u: goto label_3c50c8;
        case 0x3c50ccu: goto label_3c50cc;
        case 0x3c50d0u: goto label_3c50d0;
        case 0x3c50d4u: goto label_3c50d4;
        case 0x3c50d8u: goto label_3c50d8;
        case 0x3c50dcu: goto label_3c50dc;
        case 0x3c50e0u: goto label_3c50e0;
        case 0x3c50e4u: goto label_3c50e4;
        case 0x3c50e8u: goto label_3c50e8;
        case 0x3c50ecu: goto label_3c50ec;
        case 0x3c50f0u: goto label_3c50f0;
        case 0x3c50f4u: goto label_3c50f4;
        case 0x3c50f8u: goto label_3c50f8;
        case 0x3c50fcu: goto label_3c50fc;
        case 0x3c5100u: goto label_3c5100;
        case 0x3c5104u: goto label_3c5104;
        case 0x3c5108u: goto label_3c5108;
        case 0x3c510cu: goto label_3c510c;
        case 0x3c5110u: goto label_3c5110;
        case 0x3c5114u: goto label_3c5114;
        case 0x3c5118u: goto label_3c5118;
        case 0x3c511cu: goto label_3c511c;
        case 0x3c5120u: goto label_3c5120;
        case 0x3c5124u: goto label_3c5124;
        case 0x3c5128u: goto label_3c5128;
        case 0x3c512cu: goto label_3c512c;
        case 0x3c5130u: goto label_3c5130;
        case 0x3c5134u: goto label_3c5134;
        case 0x3c5138u: goto label_3c5138;
        case 0x3c513cu: goto label_3c513c;
        case 0x3c5140u: goto label_3c5140;
        case 0x3c5144u: goto label_3c5144;
        case 0x3c5148u: goto label_3c5148;
        case 0x3c514cu: goto label_3c514c;
        case 0x3c5150u: goto label_3c5150;
        case 0x3c5154u: goto label_3c5154;
        case 0x3c5158u: goto label_3c5158;
        case 0x3c515cu: goto label_3c515c;
        case 0x3c5160u: goto label_3c5160;
        case 0x3c5164u: goto label_3c5164;
        case 0x3c5168u: goto label_3c5168;
        case 0x3c516cu: goto label_3c516c;
        case 0x3c5170u: goto label_3c5170;
        case 0x3c5174u: goto label_3c5174;
        case 0x3c5178u: goto label_3c5178;
        case 0x3c517cu: goto label_3c517c;
        case 0x3c5180u: goto label_3c5180;
        case 0x3c5184u: goto label_3c5184;
        case 0x3c5188u: goto label_3c5188;
        case 0x3c518cu: goto label_3c518c;
        case 0x3c5190u: goto label_3c5190;
        case 0x3c5194u: goto label_3c5194;
        case 0x3c5198u: goto label_3c5198;
        case 0x3c519cu: goto label_3c519c;
        case 0x3c51a0u: goto label_3c51a0;
        case 0x3c51a4u: goto label_3c51a4;
        case 0x3c51a8u: goto label_3c51a8;
        case 0x3c51acu: goto label_3c51ac;
        default: break;
    }

    ctx->pc = 0x3c4fb8u;

label_3c4fb8:
    // 0x3c4fb8: 0x27bdfb70  addiu       $sp, $sp, -0x490
    ctx->pc = 0x3c4fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966128));
label_3c4fbc:
    // 0x3c4fbc: 0x7fb20460  sq          $s2, 0x460($sp)
    ctx->pc = 0x3c4fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 18));
label_3c4fc0:
    // 0x3c4fc0: 0x7fb30450  sq          $s3, 0x450($sp)
    ctx->pc = 0x3c4fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 19));
label_3c4fc4:
    // 0x3c4fc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c4fc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c4fc8:
    // 0x3c4fc8: 0x7fb00480  sq          $s0, 0x480($sp)
    ctx->pc = 0x3c4fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 16));
label_3c4fcc:
    // 0x3c4fcc: 0x7fb10470  sq          $s1, 0x470($sp)
    ctx->pc = 0x3c4fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 17));
label_3c4fd0:
    // 0x3c4fd0: 0xffbf0440  sd          $ra, 0x440($sp)
    ctx->pc = 0x3c4fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 31));
label_3c4fd4:
    // 0x3c4fd4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3c4fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c4fd8:
    // 0x3c4fd8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c4fd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c4fdc:
    // 0x3c4fdc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c4fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c4fe0:
    // 0x3c4fe0: 0x40f809  jalr        $v0
label_3c4fe4:
    if (ctx->pc == 0x3C4FE4u) {
        ctx->pc = 0x3C4FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4FE0u;
        // 0x3c4fe4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4FE8u;
        goto label_3c4fe8;
    }
    ctx->pc = 0x3C4FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C4FE8u);
        ctx->pc = 0x3C4FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4FE0u;
        // 0x3c4fe4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4FE0u, 0x3C4FE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C4FE8u;
label_3c4fe8:
    // 0x3c4fe8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3c4fe8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c4fec:
    // 0x3c4fec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c4fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c4ff0:
    // 0x3c4ff0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c4ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c4ff4:
    // 0x3c4ff4: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3c4ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3c4ff8:
    // 0x3c4ff8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3c4ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3c4ffc:
    // 0x3c4ffc: 0x0  nop
    ctx->pc = 0x3c4ffcu;
    // NOP
label_3c5000:
    // 0x3c5000: 0x0  nop
    ctx->pc = 0x3c5000u;
    // NOP
label_3c5004:
    // 0x3c5004: 0x0  nop
    ctx->pc = 0x3c5004u;
    // NOP
label_3c5008:
    // 0x3c5008: 0x0  nop
    ctx->pc = 0x3c5008u;
    // NOP
label_3c500c:
    // 0x3c500c: 0x0  nop
    ctx->pc = 0x3c500cu;
    // NOP
label_3c5010:
    // 0x3c5010: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3c5014:
    if (ctx->pc == 0x3C5014u) {
        ctx->pc = 0x3C5014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5010u;
        // 0x3c5014: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C5018u;
        goto label_3c5018;
    }
    ctx->pc = 0x3C5010u;
    {
        const bool branch_taken_0x3c5010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3C5014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5010u;
        // 0x3c5014: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5010) {
            ctx->pc = 0x3C5000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c5000;
        }
    }
    ctx->pc = 0x3C5018u;
label_3c5018:
    // 0x3c5018: 0xc138ddc  jal         func_4E3770
label_3c501c:
    if (ctx->pc == 0x3C501Cu) {
        ctx->pc = 0x3C5020u;
        goto label_3c5020;
    }
    ctx->pc = 0x3C5018u;
    SET_GPR_U32(ctx, 31, 0x3C5020u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3C5018u, 0x3C5020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5020u;
label_3c5020:
    // 0x3c5020: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3c5020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c5024:
    // 0x3c5024: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3c5024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3c5028:
    // 0x3c5028: 0x1062005a  beq         $v1, $v0, . + 4 + (0x5A << 2)
label_3c502c:
    if (ctx->pc == 0x3C502Cu) {
        ctx->pc = 0x3C502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5028u;
        // 0x3c502c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C5030u;
        goto label_3c5030;
    }
    ctx->pc = 0x3C5028u;
    {
        const bool branch_taken_0x3c5028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5028u;
        // 0x3c502c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5028) {
            ctx->pc = 0x3C5194u;
            goto label_3c5194;
        }
    }
    ctx->pc = 0x3C5030u;
label_3c5030:
    // 0x3c5030: 0xc0e9694  jal         func_3A5A50
label_3c5034:
    if (ctx->pc == 0x3C5034u) {
        ctx->pc = 0x3C5034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5030u;
        // 0x3c5034: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C5038u;
        goto label_3c5038;
    }
    ctx->pc = 0x3C5030u;
    SET_GPR_U32(ctx, 31, 0x3C5038u);
    ctx->pc = 0x3C5034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5030u;
    // 0x3c5034: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3C5030u, 0x3C5038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5038u;
label_3c5038:
    // 0x3c5038: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3c503c:
    if (ctx->pc == 0x3C503Cu) {
        ctx->pc = 0x3C503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5038u;
        // 0x3c503c: 0x7a420040  lq          $v0, 0x40($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C5040u;
        goto label_3c5040;
    }
    ctx->pc = 0x3C5038u;
    {
        const bool branch_taken_0x3c5038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c5038) {
            ctx->pc = 0x3C503Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5038u;
            // 0x3c503c: 0x7a420040  lq          $v0, 0x40($s2) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5048u;
            goto label_3c5048;
        }
    }
    ctx->pc = 0x3C5040u;
label_3c5040:
    // 0x3c5040: 0x10000054  b           . + 4 + (0x54 << 2)
label_3c5044:
    if (ctx->pc == 0x3C5044u) {
        ctx->pc = 0x3C5044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5040u;
        // 0x3c5044: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C5048u;
        goto label_3c5048;
    }
    ctx->pc = 0x3C5040u;
    {
        const bool branch_taken_0x3c5040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5040u;
        // 0x3c5044: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5040) {
            ctx->pc = 0x3C5194u;
            goto label_3c5194;
        }
    }
    ctx->pc = 0x3C5048u;
label_3c5048:
    // 0x3c5048: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3c5048u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3c504c:
    // 0x3c504c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x3c504cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c5050:
    // 0x3c5050: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3c5050u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c5054:
    // 0x3c5054: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3c5054u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c5058:
    // 0x3c5058: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x3c5058u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_3c505c:
    // 0x3c505c: 0x4a0003bf  vwaitq
    ctx->pc = 0x3c505cu;
    // VWAITQ (Q already resolved in this runtime)
label_3c5060:
    // 0x3c5060: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x3c5060u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c5064:
    // 0x3c5064: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x3c5064u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_3c5068:
    // 0x3c5068: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3c5068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_3c506c:
    // 0x3c506c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c506cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c5070:
    // 0x3c5070: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c5070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c5074:
    // 0x3c5074: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c5074u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c5078:
    // 0x3c5078: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3c5078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3c507c:
    // 0x3c507c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c507cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c5080:
    // 0x3c5080: 0x0  nop
    ctx->pc = 0x3c5080u;
    // NOP
label_3c5084:
    // 0x3c5084: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_3c5088:
    if (ctx->pc == 0x3C5088u) {
        ctx->pc = 0x3C5088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5084u;
        // 0x3c5088: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C508Cu;
        goto label_3c508c;
    }
    ctx->pc = 0x3C5084u;
    {
        const bool branch_taken_0x3c5084 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C5088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5084u;
        // 0x3c5088: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5084) {
            ctx->pc = 0x3C50B8u;
            goto label_3c50b8;
        }
    }
    ctx->pc = 0x3C508Cu;
label_3c508c:
    // 0x3c508c: 0x27a40410  addiu       $a0, $sp, 0x410
    ctx->pc = 0x3c508cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3c5090:
    // 0x3c5090: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3c5090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3c5094:
    // 0x3c5094: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c5094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c5098:
    // 0x3c5098: 0xc136b24  jal         func_4DAC90
label_3c509c:
    if (ctx->pc == 0x3C509Cu) {
        ctx->pc = 0x3C509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5098u;
        // 0x3c509c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C50A0u;
        goto label_3c50a0;
    }
    ctx->pc = 0x3C5098u;
    SET_GPR_U32(ctx, 31, 0x3C50A0u);
    ctx->pc = 0x3C509Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5098u;
    // 0x3c509c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C5098u, 0x3C50A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C50A0u;
label_3c50a0:
    // 0x3c50a0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3c50a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c50a4:
    // 0x3c50a4: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x3c50a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3c50a8:
    // 0x3c50a8: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x3c50a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_3c50ac:
    // 0x3c50ac: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x3c50acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_3c50b0:
    // 0x3c50b0: 0x60f809  jalr        $v1
label_3c50b4:
    if (ctx->pc == 0x3C50B4u) {
        ctx->pc = 0x3C50B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C50B0u;
        // 0x3c50b4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C50B8u;
        goto label_3c50b8;
    }
    ctx->pc = 0x3C50B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C50B8u);
        ctx->pc = 0x3C50B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C50B0u;
        // 0x3c50b4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C50B0u, 0x3C50B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C50B8u;
label_3c50b8:
    // 0x3c50b8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3c50b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c50bc:
    // 0x3c50bc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3c50bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3c50c0:
    // 0x3c50c0: 0x24632ee0  addiu       $v1, $v1, 0x2EE0
    ctx->pc = 0x3c50c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12000));
label_3c50c4:
    // 0x3c50c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c50c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c50c8:
    // 0x3c50c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3c50c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3c50cc:
    // 0x3c50cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c50ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3c50d0:
    // 0x3c50d0: 0xc0e858c  jal         func_3A1630
label_3c50d4:
    if (ctx->pc == 0x3C50D4u) {
        ctx->pc = 0x3C50D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C50D0u;
        // 0x3c50d4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C50D8u;
        goto label_3c50d8;
    }
    ctx->pc = 0x3C50D0u;
    SET_GPR_U32(ctx, 31, 0x3C50D8u);
    ctx->pc = 0x3C50D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C50D0u;
    // 0x3c50d4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C50D0u, 0x3C50D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C50D8u;
label_3c50d8:
    // 0x3c50d8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3c50d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c50dc:
    // 0x3c50dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3c50dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3c50e0:
    // 0x3c50e0: 0x24422ec0  addiu       $v0, $v0, 0x2EC0
    ctx->pc = 0x3c50e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11968));
label_3c50e4:
    // 0x3c50e4: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3c50e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3c50e8:
    // 0x3c50e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3c50e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3c50ec:
    // 0x3c50ec: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3c50ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3c50f0:
    // 0x3c50f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c50f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3c50f4:
    // 0x3c50f4: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x3c50f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_3c50f8:
    // 0x3c50f8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3c50f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3c50fc:
    // 0x3c50fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c50fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c5100:
    // 0x3c5100: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3c5100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3c5104:
    // 0x3c5104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c5104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c5108:
    // 0x3c5108: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x3c5108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_3c510c:
    // 0x3c510c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3c510cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3c5110:
    // 0x3c5110: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c5110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c5114:
    // 0x3c5114: 0xc0cd518  jal         func_335460
label_3c5118:
    if (ctx->pc == 0x3C5118u) {
        ctx->pc = 0x3C5118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5114u;
        // 0x3c5118: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C511Cu;
        goto label_3c511c;
    }
    ctx->pc = 0x3C5114u;
    SET_GPR_U32(ctx, 31, 0x3C511Cu);
    ctx->pc = 0x3C5118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5114u;
    // 0x3c5118: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C5114u, 0x3C511Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C511Cu;
label_3c511c:
    // 0x3c511c: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x3c511cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c5120:
    // 0x3c5120: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c5120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c5124:
    // 0x3c5124: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3c5124u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3c5128:
    // 0x3c5128: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x3c5128u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_3c512c:
    // 0x3c512c: 0xc0e87c0  jal         func_3A1F00
label_3c5130:
    if (ctx->pc == 0x3C5130u) {
        ctx->pc = 0x3C5130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C512Cu;
        // 0x3c5130: 0xe64100c0  swc1        $f1, 0xC0($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C5134u;
        goto label_3c5134;
    }
    ctx->pc = 0x3C512Cu;
    SET_GPR_U32(ctx, 31, 0x3C5134u);
    ctx->pc = 0x3C5130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C512Cu;
    // 0x3c5130: 0xe64100c0  swc1        $f1, 0xC0($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3C512Cu, 0x3C5134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5134u;
label_3c5134:
    // 0x3c5134: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x3c5134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_3c5138:
    // 0x3c5138: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3c5138u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3c513c:
    // 0x3c513c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c513cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c5140:
    // 0x3c5140: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c5140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c5144:
    // 0x3c5144: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3c5144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3c5148:
    // 0x3c5148: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c5148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c514c:
    // 0x3c514c: 0xc0cd518  jal         func_335460
label_3c5150:
    if (ctx->pc == 0x3C5150u) {
        ctx->pc = 0x3C5150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C514Cu;
        // 0x3c5150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C5154u;
        goto label_3c5154;
    }
    ctx->pc = 0x3C514Cu;
    SET_GPR_U32(ctx, 31, 0x3C5154u);
    ctx->pc = 0x3C5150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C514Cu;
    // 0x3c5150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C514Cu, 0x3C5154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5154u;
label_3c5154:
    // 0x3c5154: 0x27a40430  addiu       $a0, $sp, 0x430
    ctx->pc = 0x3c5154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3c5158:
    // 0x3c5158: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c5158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c515c:
    // 0x3c515c: 0xc136b24  jal         func_4DAC90
label_3c5160:
    if (ctx->pc == 0x3C5160u) {
        ctx->pc = 0x3C5160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C515Cu;
        // 0x3c5160: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C5164u;
        goto label_3c5164;
    }
    ctx->pc = 0x3C515Cu;
    SET_GPR_U32(ctx, 31, 0x3C5164u);
    ctx->pc = 0x3C5160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C515Cu;
    // 0x3c5160: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C515Cu, 0x3C5164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5164u;
label_3c5164:
    // 0x3c5164: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3c5164u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3c5168:
    // 0x3c5168: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x3c5168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3c516c:
    // 0x3c516c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3c516cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c5170:
    // 0x3c5170: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3c5170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3c5174:
    // 0x3c5174: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x3c5174u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_3c5178:
    // 0x3c5178: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x3c5178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_3c517c:
    // 0x3c517c: 0x40f809  jalr        $v0
label_3c5180:
    if (ctx->pc == 0x3C5180u) {
        ctx->pc = 0x3C5180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C517Cu;
        // 0x3c5180: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C5184u;
        goto label_3c5184;
    }
    ctx->pc = 0x3C517Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C5184u);
        ctx->pc = 0x3C5180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C517Cu;
        // 0x3c5180: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C517Cu, 0x3C5184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C5184u;
label_3c5184:
    // 0x3c5184: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3c5184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c5188:
    // 0x3c5188: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c5188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c518c:
    // 0x3c518c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c518cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3c5190:
    // 0x3c5190: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3c5190u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_3c5194:
    // 0x3c5194: 0x7bb00480  lq          $s0, 0x480($sp)
    ctx->pc = 0x3c5194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3c5198:
    // 0x3c5198: 0x7bb10470  lq          $s1, 0x470($sp)
    ctx->pc = 0x3c5198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3c519c:
    // 0x3c519c: 0x7bb20460  lq          $s2, 0x460($sp)
    ctx->pc = 0x3c519cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3c51a0:
    // 0x3c51a0: 0x7bb30450  lq          $s3, 0x450($sp)
    ctx->pc = 0x3c51a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3c51a4:
    // 0x3c51a4: 0xdfbf0440  ld          $ra, 0x440($sp)
    ctx->pc = 0x3c51a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
label_3c51a8:
    // 0x3c51a8: 0x3e00008  jr          $ra
label_3c51ac:
    if (ctx->pc == 0x3C51ACu) {
        ctx->pc = 0x3C51ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C51A8u;
        // 0x3c51ac: 0x27bd0490  addiu       $sp, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C51B0u;
        goto label_fallthrough_0x3c51a8;
    }
    ctx->pc = 0x3C51A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C51ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C51A8u;
        // 0x3c51ac: 0x27bd0490  addiu       $sp, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C51A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c51a8:
    ctx->pc = 0x3C51B0u;
}
