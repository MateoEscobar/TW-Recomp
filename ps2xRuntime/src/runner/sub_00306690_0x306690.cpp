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

// Function: sub_00306690
// Address: 0x306690 - 0x3067d8
void sub_00306690_0x306690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306690_0x306690");
#endif

    switch (ctx->pc) {
        case 0x306690u: goto label_306690;
        case 0x306694u: goto label_306694;
        case 0x306698u: goto label_306698;
        case 0x30669cu: goto label_30669c;
        case 0x3066a0u: goto label_3066a0;
        case 0x3066a4u: goto label_3066a4;
        case 0x3066a8u: goto label_3066a8;
        case 0x3066acu: goto label_3066ac;
        case 0x3066b0u: goto label_3066b0;
        case 0x3066b4u: goto label_3066b4;
        case 0x3066b8u: goto label_3066b8;
        case 0x3066bcu: goto label_3066bc;
        case 0x3066c0u: goto label_3066c0;
        case 0x3066c4u: goto label_3066c4;
        case 0x3066c8u: goto label_3066c8;
        case 0x3066ccu: goto label_3066cc;
        case 0x3066d0u: goto label_3066d0;
        case 0x3066d4u: goto label_3066d4;
        case 0x3066d8u: goto label_3066d8;
        case 0x3066dcu: goto label_3066dc;
        case 0x3066e0u: goto label_3066e0;
        case 0x3066e4u: goto label_3066e4;
        case 0x3066e8u: goto label_3066e8;
        case 0x3066ecu: goto label_3066ec;
        case 0x3066f0u: goto label_3066f0;
        case 0x3066f4u: goto label_3066f4;
        case 0x3066f8u: goto label_3066f8;
        case 0x3066fcu: goto label_3066fc;
        case 0x306700u: goto label_306700;
        case 0x306704u: goto label_306704;
        case 0x306708u: goto label_306708;
        case 0x30670cu: goto label_30670c;
        case 0x306710u: goto label_306710;
        case 0x306714u: goto label_306714;
        case 0x306718u: goto label_306718;
        case 0x30671cu: goto label_30671c;
        case 0x306720u: goto label_306720;
        case 0x306724u: goto label_306724;
        case 0x306728u: goto label_306728;
        case 0x30672cu: goto label_30672c;
        case 0x306730u: goto label_306730;
        case 0x306734u: goto label_306734;
        case 0x306738u: goto label_306738;
        case 0x30673cu: goto label_30673c;
        case 0x306740u: goto label_306740;
        case 0x306744u: goto label_306744;
        case 0x306748u: goto label_306748;
        case 0x30674cu: goto label_30674c;
        case 0x306750u: goto label_306750;
        case 0x306754u: goto label_306754;
        case 0x306758u: goto label_306758;
        case 0x30675cu: goto label_30675c;
        case 0x306760u: goto label_306760;
        case 0x306764u: goto label_306764;
        case 0x306768u: goto label_306768;
        case 0x30676cu: goto label_30676c;
        case 0x306770u: goto label_306770;
        case 0x306774u: goto label_306774;
        case 0x306778u: goto label_306778;
        case 0x30677cu: goto label_30677c;
        case 0x306780u: goto label_306780;
        case 0x306784u: goto label_306784;
        case 0x306788u: goto label_306788;
        case 0x30678cu: goto label_30678c;
        case 0x306790u: goto label_306790;
        case 0x306794u: goto label_306794;
        case 0x306798u: goto label_306798;
        case 0x30679cu: goto label_30679c;
        case 0x3067a0u: goto label_3067a0;
        case 0x3067a4u: goto label_3067a4;
        case 0x3067a8u: goto label_3067a8;
        case 0x3067acu: goto label_3067ac;
        case 0x3067b0u: goto label_3067b0;
        case 0x3067b4u: goto label_3067b4;
        case 0x3067b8u: goto label_3067b8;
        case 0x3067bcu: goto label_3067bc;
        case 0x3067c0u: goto label_3067c0;
        case 0x3067c4u: goto label_3067c4;
        case 0x3067c8u: goto label_3067c8;
        case 0x3067ccu: goto label_3067cc;
        case 0x3067d0u: goto label_3067d0;
        case 0x3067d4u: goto label_3067d4;
        default: break;
    }

    ctx->pc = 0x306690u;

label_306690:
    // 0x306690: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x306690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_306694:
    // 0x306694: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x306694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_306698:
    // 0x306698: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x306698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_30669c:
    // 0x30669c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30669cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3066a0:
    // 0x3066a0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3066a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3066a4:
    // 0x3066a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3066a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3066a8:
    // 0x3066a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3066a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3066ac:
    // 0x3066ac: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3066acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3066b0:
    // 0x3066b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3066b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3066b4:
    // 0x3066b4: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x3066b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3066b8:
    // 0x3066b8: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
label_3066bc:
    if (ctx->pc == 0x3066BCu) {
        ctx->pc = 0x3066BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3066B8u;
        // 0x3066bc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3066C0u;
        goto label_3066c0;
    }
    ctx->pc = 0x3066B8u;
    {
        const bool branch_taken_0x3066b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3066BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3066B8u;
        // 0x3066bc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3066b8) {
            ctx->pc = 0x3066D0u;
            goto label_3066d0;
        }
    }
    ctx->pc = 0x3066C0u;
label_3066c0:
    // 0x3066c0: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x3066c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_3066c4:
    // 0x3066c4: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x3066c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_3066c8:
    // 0x3066c8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3066c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3066cc:
    // 0x3066cc: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x3066ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_3066d0:
    // 0x3066d0: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x3066d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3066d4:
    // 0x3066d4: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x3066d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_3066d8:
    // 0x3066d8: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x3066d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_3066dc:
    // 0x3066dc: 0x40f809  jalr        $v0
label_3066e0:
    if (ctx->pc == 0x3066E0u) {
        ctx->pc = 0x3066E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3066DCu;
        // 0x3066e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3066E4u;
        goto label_3066e4;
    }
    ctx->pc = 0x3066DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3066E4u);
        ctx->pc = 0x3066E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3066DCu;
        // 0x3066e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3066DCu, 0x3066E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3066E4u;
label_3066e4:
    // 0x3066e4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3066e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3066e8:
    // 0x3066e8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3066e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3066ec:
    // 0x3066ec: 0xc05928a  jal         func_164A28
label_3066f0:
    if (ctx->pc == 0x3066F0u) {
        ctx->pc = 0x3066F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3066ECu;
        // 0x3066f0: 0x2c450001  sltiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3066F4u;
        goto label_3066f4;
    }
    ctx->pc = 0x3066ECu;
    SET_GPR_U32(ctx, 31, 0x3066F4u);
    ctx->pc = 0x3066F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3066ECu;
    // 0x3066f0: 0x2c450001  sltiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x164A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164A28u, 0x3066ECu, 0x3066F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3066F4u;
label_3066f4:
    // 0x3066f4: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x3066f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3066f8:
    // 0x3066f8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x3066f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_3066fc:
    // 0x3066fc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x3066fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_306700:
    // 0x306700: 0x40f809  jalr        $v0
label_306704:
    if (ctx->pc == 0x306704u) {
        ctx->pc = 0x306704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306700u;
        // 0x306704: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306708u;
        goto label_306708;
    }
    ctx->pc = 0x306700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x306708u);
        ctx->pc = 0x306704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306700u;
        // 0x306704: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306700u, 0x306708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x306708u;
label_306708:
    // 0x306708: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x306708u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30670c:
    // 0x30670c: 0x2462ffea  addiu       $v0, $v1, -0x16
    ctx->pc = 0x30670cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967274));
label_306710:
    // 0x306710: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x306710u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_306714:
    // 0x306714: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_306718:
    if (ctx->pc == 0x306718u) {
        ctx->pc = 0x306718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306714u;
        // 0x306718: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30671Cu;
        goto label_30671c;
    }
    ctx->pc = 0x306714u;
    {
        const bool branch_taken_0x306714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306714) {
            ctx->pc = 0x306718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306714u;
            // 0x306718: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306728u;
            goto label_306728;
        }
    }
    ctx->pc = 0x30671Cu;
label_30671c:
    // 0x30671c: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x30671cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_306720:
    // 0x306720: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_306724:
    if (ctx->pc == 0x306724u) {
        ctx->pc = 0x306724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306720u;
        // 0x306724: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306728u;
        goto label_306728;
    }
    ctx->pc = 0x306720u;
    {
        const bool branch_taken_0x306720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x306724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306720u;
        // 0x306724: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306720) {
            ctx->pc = 0x30673Cu;
            goto label_30673c;
        }
    }
    ctx->pc = 0x306728u;
label_306728:
    // 0x306728: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x306728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30672c:
    // 0x30672c: 0xa04000d1  sb          $zero, 0xD1($v0)
    ctx->pc = 0x30672cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 209), (uint8_t)GPR_U32(ctx, 0));
label_306730:
    // 0x306730: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x306730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_306734:
    // 0x306734: 0xa06400d2  sb          $a0, 0xD2($v1)
    ctx->pc = 0x306734u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 210), (uint8_t)GPR_U32(ctx, 4));
label_306738:
    // 0x306738: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x306738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30673c:
    // 0x30673c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30673cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306740:
    // 0x306740: 0x24530048  addiu       $s3, $v0, 0x48
    ctx->pc = 0x306740u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_306744:
    // 0x306744: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x306744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_306748:
    // 0x306748: 0xc137826  jal         func_4DE098
label_30674c:
    if (ctx->pc == 0x30674Cu) {
        ctx->pc = 0x30674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306748u;
        // 0x30674c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306750u;
        goto label_306750;
    }
    ctx->pc = 0x306748u;
    SET_GPR_U32(ctx, 31, 0x306750u);
    ctx->pc = 0x30674Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306748u;
    // 0x30674c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x306748u, 0x306750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306750u;
label_306750:
    // 0x306750: 0xc0e409a  jal         func_390268
label_306754:
    if (ctx->pc == 0x306754u) {
        ctx->pc = 0x306754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306750u;
        // 0x306754: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306758u;
        goto label_306758;
    }
    ctx->pc = 0x306750u;
    SET_GPR_U32(ctx, 31, 0x306758u);
    ctx->pc = 0x306754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306750u;
    // 0x306754: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x306750u, 0x306758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306758u;
label_306758:
    // 0x306758: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x306758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30675c:
    // 0x30675c: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_306760:
    if (ctx->pc == 0x306760u) {
        ctx->pc = 0x306760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30675Cu;
        // 0x306760: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306764u;
        goto label_306764;
    }
    ctx->pc = 0x30675Cu;
    {
        const bool branch_taken_0x30675c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30675c) {
            ctx->pc = 0x306760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30675Cu;
            // 0x306760: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306790u;
            goto label_306790;
        }
    }
    ctx->pc = 0x306764u;
label_306764:
    // 0x306764: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x306764u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_306768:
    // 0x306768: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x306768u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_30676c:
    // 0x30676c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_306770:
    if (ctx->pc == 0x306770u) {
        ctx->pc = 0x306770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30676Cu;
        // 0x306770: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306774u;
        goto label_306774;
    }
    ctx->pc = 0x30676Cu;
    {
        const bool branch_taken_0x30676c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30676c) {
            ctx->pc = 0x306770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30676Cu;
            // 0x306770: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306790u;
            goto label_306790;
        }
    }
    ctx->pc = 0x306774u;
label_306774:
    // 0x306774: 0xc087502  jal         func_21D408
label_306778:
    if (ctx->pc == 0x306778u) {
        ctx->pc = 0x306778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306774u;
        // 0x306778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30677Cu;
        goto label_30677c;
    }
    ctx->pc = 0x306774u;
    SET_GPR_U32(ctx, 31, 0x30677Cu);
    ctx->pc = 0x306778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306774u;
    // 0x306778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x306774u, 0x30677Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30677Cu;
label_30677c:
    // 0x30677c: 0xc0a3628  jal         func_28D8A0
label_306780:
    if (ctx->pc == 0x306780u) {
        ctx->pc = 0x306780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30677Cu;
        // 0x306780: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306784u;
        goto label_306784;
    }
    ctx->pc = 0x30677Cu;
    SET_GPR_U32(ctx, 31, 0x306784u);
    ctx->pc = 0x306780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30677Cu;
    // 0x306780: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x30677Cu, 0x306784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306784u;
label_306784:
    // 0x306784: 0xc089bdc  jal         func_226F70
label_306788:
    if (ctx->pc == 0x306788u) {
        ctx->pc = 0x306788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306784u;
        // 0x306788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30678Cu;
        goto label_30678c;
    }
    ctx->pc = 0x306784u;
    SET_GPR_U32(ctx, 31, 0x30678Cu);
    ctx->pc = 0x306788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306784u;
    // 0x306788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x306784u, 0x30678Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30678Cu;
label_30678c:
    // 0x30678c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30678cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_306790:
    // 0x306790: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x306790u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_306794:
    // 0x306794: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
label_306798:
    if (ctx->pc == 0x306798u) {
        ctx->pc = 0x306798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306794u;
        // 0x306798: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30679Cu;
        goto label_30679c;
    }
    ctx->pc = 0x306794u;
    {
        const bool branch_taken_0x306794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306794) {
            ctx->pc = 0x306798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306794u;
            // 0x306798: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306748;
        }
    }
    ctx->pc = 0x30679Cu;
label_30679c:
    // 0x30679c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x30679cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3067a0:
    // 0x3067a0: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x3067a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_3067a4:
    // 0x3067a4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3067a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3067a8:
    // 0x3067a8: 0x60f809  jalr        $v1
label_3067ac:
    if (ctx->pc == 0x3067ACu) {
        ctx->pc = 0x3067ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3067A8u;
        // 0x3067ac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3067B0u;
        goto label_3067b0;
    }
    ctx->pc = 0x3067A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3067B0u);
        ctx->pc = 0x3067ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3067A8u;
        // 0x3067ac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3067A8u, 0x3067B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3067B0u;
label_3067b0:
    // 0x3067b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3067b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3067b4:
    // 0x3067b4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3067b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3067b8:
    // 0x3067b8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3067b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3067bc:
    // 0x3067bc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3067bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3067c0:
    // 0x3067c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3067c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3067c4:
    // 0x3067c4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3067c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3067c8:
    // 0x3067c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3067c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3067cc:
    // 0x3067cc: 0x3e00008  jr          $ra
label_3067d0:
    if (ctx->pc == 0x3067D0u) {
        ctx->pc = 0x3067D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3067CCu;
        // 0x3067d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3067D4u;
        goto label_3067d4;
    }
    ctx->pc = 0x3067CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3067D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3067CCu;
        // 0x3067d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3067CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3067D4u;
label_3067d4:
    // 0x3067d4: 0x0  nop
    ctx->pc = 0x3067d4u;
    // NOP
    ctx->pc = 0x3067d8u;
}
