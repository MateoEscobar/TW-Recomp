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

// Function: sub_00164630
// Address: 0x164630 - 0x164738
void sub_00164630_0x164630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164630_0x164630");
#endif

    switch (ctx->pc) {
        case 0x164678u: goto label_164678;
        case 0x1646b0u: goto label_1646b0;
        case 0x1646e0u: goto label_1646e0;
        case 0x1646e8u: goto label_1646e8;
        case 0x1646f4u: goto label_1646f4;
        case 0x164708u: goto label_164708;
        default: break;
    }

    ctx->pc = 0x164630u;

    // 0x164630: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x164630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x164634: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x164634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x164638: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x164638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x16463c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x16463cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x164640: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x164640u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164644: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x164644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x164648: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x164648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x16464c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x16464cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x164650: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x164650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x164654: 0x26430048  addiu       $v1, $s2, 0x48
    ctx->pc = 0x164654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x164658: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x164658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x16465c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x16465cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x164660: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x164660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x164664: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x164664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x164668: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x164668u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
    // 0x16466c: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x16466cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x164670: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x164670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x164674: 0x0  nop
    ctx->pc = 0x164674u;
    // NOP
label_164678:
    // 0x164678: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x164678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x16467c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16467cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x164680: 0x0  nop
    ctx->pc = 0x164680u;
    // NOP
    // 0x164684: 0x0  nop
    ctx->pc = 0x164684u;
    // NOP
    // 0x164688: 0x1445fffb  bne         $v0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x164688u;
    {
        const bool branch_taken_0x164688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x16468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164688u;
        // 0x16468c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164688) {
            ctx->pc = 0x164678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164678;
        }
    }
    ctx->pc = 0x164690u;
    // 0x164690: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x164690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x164694: 0x26420088  addiu       $v0, $s2, 0x88
    ctx->pc = 0x164694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 136));
    // 0x164698: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x164698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x16469c: 0x264401b0  addiu       $a0, $s2, 0x1B0
    ctx->pc = 0x16469cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
    // 0x1646a0: 0x26510640  addiu       $s1, $s2, 0x640
    ctx->pc = 0x1646a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1600));
    // 0x1646a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1646a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1646a8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1646a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1646ac: 0x0  nop
    ctx->pc = 0x1646acu;
    // NOP
label_1646b0:
    // 0x1646b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1646b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1646b4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1646b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1646b8: 0x0  nop
    ctx->pc = 0x1646b8u;
    // NOP
    // 0x1646bc: 0x0  nop
    ctx->pc = 0x1646bcu;
    // NOP
    // 0x1646c0: 0x14a6fffb  bne         $a1, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1646C0u;
    {
        const bool branch_taken_0x1646c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x1646C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646C0u;
        // 0x1646c4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1646c0) {
            ctx->pc = 0x1646B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1646b0;
        }
    }
    ctx->pc = 0x1646C8u;
    // 0x1646c8: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x1646c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x1646cc: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x1646ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1646d0: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x1646d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x1646d4: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1646d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1646d8: 0xc058fb6  jal         func_163ED8
    ctx->pc = 0x1646D8u;
    SET_GPR_U32(ctx, 31, 0x1646E0u);
    ctx->pc = 0x1646DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1646D8u;
    // 0x1646dc: 0xae5000c8  sw          $s0, 0xC8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163ED8u, 0x1646D8u, 0x1646E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1646E0u;
label_1646e0:
    // 0x1646e0: 0xae500614  sw          $s0, 0x614($s2)
    ctx->pc = 0x1646e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1556), GPR_U32(ctx, 16));
    // 0x1646e4: 0xae500610  sw          $s0, 0x610($s2)
    ctx->pc = 0x1646e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1552), GPR_U32(ctx, 16));
label_1646e8:
    // 0x1646e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1646e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1646ec: 0xc05b594  jal         func_16D650
    ctx->pc = 0x1646ECu;
    SET_GPR_U32(ctx, 31, 0x1646F4u);
    ctx->pc = 0x1646F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1646ECu;
    // 0x1646f0: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D650u, 0x1646ECu, 0x1646F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1646F4u;
label_1646f4:
    // 0x1646f4: 0x0  nop
    ctx->pc = 0x1646f4u;
    // NOP
    // 0x1646f8: 0x1674fffb  bne         $s3, $s4, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1646F8u;
    {
        const bool branch_taken_0x1646f8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        ctx->pc = 0x1646FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646F8u;
        // 0x1646fc: 0x26310130  addiu       $s1, $s1, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1646f8) {
            ctx->pc = 0x1646E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1646e8;
        }
    }
    ctx->pc = 0x164700u;
    // 0x164700: 0xc059202  jal         func_164808
    ctx->pc = 0x164700u;
    SET_GPR_U32(ctx, 31, 0x164708u);
    ctx->pc = 0x164704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164700u;
    // 0x164704: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164808u, 0x164700u, 0x164708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164708u;
label_164708:
    // 0x164708: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x164708u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16470c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x16470cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x164710: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x164710u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x164714: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x164714u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x164718: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x164718u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16471c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x16471cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164720: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x164720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164724: 0x3e00008  jr          $ra
    ctx->pc = 0x164724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164724u;
        // 0x164728: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16472Cu;
    // 0x16472c: 0x0  nop
    ctx->pc = 0x16472cu;
    // NOP
    // 0x164730: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x164730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x164734: 0x0  nop
    ctx->pc = 0x164734u;
    // NOP
    ctx->pc = 0x164738u;
}
