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

// Function: sub_004A57C8
// Address: 0x4a57c8 - 0x4a5880
void sub_004A57C8_0x4a57c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A57C8_0x4a57c8");
#endif

    switch (ctx->pc) {
        case 0x4a57c8u: goto label_4a57c8;
        case 0x4a57ccu: goto label_4a57cc;
        case 0x4a57d0u: goto label_4a57d0;
        case 0x4a57d4u: goto label_4a57d4;
        case 0x4a57d8u: goto label_4a57d8;
        case 0x4a57dcu: goto label_4a57dc;
        case 0x4a57e0u: goto label_4a57e0;
        case 0x4a57e4u: goto label_4a57e4;
        case 0x4a57e8u: goto label_4a57e8;
        case 0x4a57ecu: goto label_4a57ec;
        case 0x4a57f0u: goto label_4a57f0;
        case 0x4a57f4u: goto label_4a57f4;
        case 0x4a57f8u: goto label_4a57f8;
        case 0x4a57fcu: goto label_4a57fc;
        case 0x4a5800u: goto label_4a5800;
        case 0x4a5804u: goto label_4a5804;
        case 0x4a5808u: goto label_4a5808;
        case 0x4a580cu: goto label_4a580c;
        case 0x4a5810u: goto label_4a5810;
        case 0x4a5814u: goto label_4a5814;
        case 0x4a5818u: goto label_4a5818;
        case 0x4a581cu: goto label_4a581c;
        case 0x4a5820u: goto label_4a5820;
        case 0x4a5824u: goto label_4a5824;
        case 0x4a5828u: goto label_4a5828;
        case 0x4a582cu: goto label_4a582c;
        case 0x4a5830u: goto label_4a5830;
        case 0x4a5834u: goto label_4a5834;
        case 0x4a5838u: goto label_4a5838;
        case 0x4a583cu: goto label_4a583c;
        case 0x4a5840u: goto label_4a5840;
        case 0x4a5844u: goto label_4a5844;
        case 0x4a5848u: goto label_4a5848;
        case 0x4a584cu: goto label_4a584c;
        case 0x4a5850u: goto label_4a5850;
        case 0x4a5854u: goto label_4a5854;
        case 0x4a5858u: goto label_4a5858;
        case 0x4a585cu: goto label_4a585c;
        case 0x4a5860u: goto label_4a5860;
        case 0x4a5864u: goto label_4a5864;
        case 0x4a5868u: goto label_4a5868;
        case 0x4a586cu: goto label_4a586c;
        case 0x4a5870u: goto label_4a5870;
        case 0x4a5874u: goto label_4a5874;
        case 0x4a5878u: goto label_4a5878;
        case 0x4a587cu: goto label_4a587c;
        default: break;
    }

    ctx->pc = 0x4a57c8u;

label_4a57c8:
    // 0x4a57c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4a57c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4a57cc:
    // 0x4a57cc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4a57ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4a57d0:
    // 0x4a57d0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4a57d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4a57d4:
    // 0x4a57d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a57d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a57d8:
    // 0x4a57d8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4a57d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4a57dc:
    // 0x4a57dc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4a57dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_4a57e0:
    // 0x4a57e0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4a57e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_4a57e4:
    // 0x4a57e4: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
label_4a57e8:
    if (ctx->pc == 0x4A57E8u) {
        ctx->pc = 0x4A57E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A57E4u;
        // 0x4a57e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A57ECu;
        goto label_4a57ec;
    }
    ctx->pc = 0x4A57E4u;
    {
        const bool branch_taken_0x4a57e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A57E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A57E4u;
        // 0x4a57e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a57e4) {
            ctx->pc = 0x4A585Cu;
            goto label_4a585c;
        }
    }
    ctx->pc = 0x4A57ECu;
label_4a57ec:
    // 0x4a57ec: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x4a57ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4a57f0:
    // 0x4a57f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a57f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a57f4:
    // 0x4a57f4: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x4a57f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a57f8:
    // 0x4a57f8: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_4a57fc:
    if (ctx->pc == 0x4A57FCu) {
        ctx->pc = 0x4A57FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A57F8u;
        // 0x4a57fc: 0x3c140071  lui         $s4, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5800u;
        goto label_4a5800;
    }
    ctx->pc = 0x4A57F8u;
    {
        const bool branch_taken_0x4a57f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A57FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A57F8u;
        // 0x4a57fc: 0x3c140071  lui         $s4, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a57f8) {
            ctx->pc = 0x4A581Cu;
            goto label_4a581c;
        }
    }
    ctx->pc = 0x4A5800u;
label_4a5800:
    // 0x4a5800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a5800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a5804:
    // 0x4a5804: 0xc1294aa  jal         func_4A52A8
label_4a5808:
    if (ctx->pc == 0x4A5808u) {
        ctx->pc = 0x4A5808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5804u;
        // 0x4a5808: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A580Cu;
        goto label_4a580c;
    }
    ctx->pc = 0x4A5804u;
    SET_GPR_U32(ctx, 31, 0x4A580Cu);
    ctx->pc = 0x4A5808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5804u;
    // 0x4a5808: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A52A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A52A8u, 0x4A5804u, 0x4A580Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A580Cu;
label_4a580c:
    // 0x4a580c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4a580cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4a5810:
    // 0x4a5810: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x4a5810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_4a5814:
    // 0x4a5814: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_4a5818:
    if (ctx->pc == 0x4A5818u) {
        ctx->pc = 0x4A5818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5814u;
        // 0x4a5818: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A581Cu;
        goto label_4a581c;
    }
    ctx->pc = 0x4A5814u;
    {
        const bool branch_taken_0x4a5814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A5818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5814u;
        // 0x4a5818: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5814) {
            ctx->pc = 0x4A5800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a5800;
        }
    }
    ctx->pc = 0x4A581Cu;
label_4a581c:
    // 0x4a581c: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x4a581cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_4a5820:
    // 0x4a5820: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_4a5824:
    if (ctx->pc == 0x4A5824u) {
        ctx->pc = 0x4A5824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5820u;
        // 0x4a5824: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5828u;
        goto label_4a5828;
    }
    ctx->pc = 0x4A5820u;
    {
        const bool branch_taken_0x4a5820 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5820u;
        // 0x4a5824: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5820) {
            ctx->pc = 0x4A5840u;
            goto label_4a5840;
        }
    }
    ctx->pc = 0x4A5828u;
label_4a5828:
    // 0x4a5828: 0x2683ad18  addiu       $v1, $s4, -0x52E8
    ctx->pc = 0x4a5828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946072));
label_4a582c:
    // 0x4a582c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x4a582cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_4a5830:
    // 0x4a5830: 0x40f809  jalr        $v0
label_4a5834:
    if (ctx->pc == 0x4A5834u) {
        ctx->pc = 0x4A5838u;
        goto label_4a5838;
    }
    ctx->pc = 0x4A5830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A5838u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5830u, 0x4A5838u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A5838u;
label_4a5838:
    // 0x4a5838: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x4a5838u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_4a583c:
    // 0x4a583c: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x4a583cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_4a5840:
    // 0x4a5840: 0x8f838a88  lw          $v1, -0x7578($gp)
    ctx->pc = 0x4a5840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937224)));
label_4a5844:
    // 0x4a5844: 0x2684ad18  addiu       $a0, $s4, -0x52E8
    ctx->pc = 0x4a5844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946072));
label_4a5848:
    // 0x4a5848: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x4a5848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_4a584c:
    // 0x4a584c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4a584cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a5850:
    // 0x4a5850: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4a5850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4a5854:
    // 0x4a5854: 0x40f809  jalr        $v0
label_4a5858:
    if (ctx->pc == 0x4A5858u) {
        ctx->pc = 0x4A5858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5854u;
        // 0x4a5858: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A585Cu;
        goto label_4a585c;
    }
    ctx->pc = 0x4A5854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A585Cu);
        ctx->pc = 0x4A5858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5854u;
        // 0x4a5858: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5854u, 0x4A585Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A585Cu;
label_4a585c:
    // 0x4a585c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4a585cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a5860:
    // 0x4a5860: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4a5860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a5864:
    // 0x4a5864: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4a5864u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a5868:
    // 0x4a5868: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4a5868u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a586c:
    // 0x4a586c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4a586cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a5870:
    // 0x4a5870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a5870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a5874:
    // 0x4a5874: 0x3e00008  jr          $ra
label_4a5878:
    if (ctx->pc == 0x4A5878u) {
        ctx->pc = 0x4A5878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5874u;
        // 0x4a5878: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A587Cu;
        goto label_4a587c;
    }
    ctx->pc = 0x4A5874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5874u;
        // 0x4a5878: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A587Cu;
label_4a587c:
    // 0x4a587c: 0x0  nop
    ctx->pc = 0x4a587cu;
    // NOP
    ctx->pc = 0x4a5880u;
}
