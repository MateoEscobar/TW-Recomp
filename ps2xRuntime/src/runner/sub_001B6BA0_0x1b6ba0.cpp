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

// Function: sub_001B6BA0
// Address: 0x1b6ba0 - 0x1b6c50
void sub_001B6BA0_0x1b6ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6BA0_0x1b6ba0");
#endif

    switch (ctx->pc) {
        case 0x1b6ba0u: goto label_1b6ba0;
        case 0x1b6ba4u: goto label_1b6ba4;
        case 0x1b6ba8u: goto label_1b6ba8;
        case 0x1b6bacu: goto label_1b6bac;
        case 0x1b6bb0u: goto label_1b6bb0;
        case 0x1b6bb4u: goto label_1b6bb4;
        case 0x1b6bb8u: goto label_1b6bb8;
        case 0x1b6bbcu: goto label_1b6bbc;
        case 0x1b6bc0u: goto label_1b6bc0;
        case 0x1b6bc4u: goto label_1b6bc4;
        case 0x1b6bc8u: goto label_1b6bc8;
        case 0x1b6bccu: goto label_1b6bcc;
        case 0x1b6bd0u: goto label_1b6bd0;
        case 0x1b6bd4u: goto label_1b6bd4;
        case 0x1b6bd8u: goto label_1b6bd8;
        case 0x1b6bdcu: goto label_1b6bdc;
        case 0x1b6be0u: goto label_1b6be0;
        case 0x1b6be4u: goto label_1b6be4;
        case 0x1b6be8u: goto label_1b6be8;
        case 0x1b6becu: goto label_1b6bec;
        case 0x1b6bf0u: goto label_1b6bf0;
        case 0x1b6bf4u: goto label_1b6bf4;
        case 0x1b6bf8u: goto label_1b6bf8;
        case 0x1b6bfcu: goto label_1b6bfc;
        case 0x1b6c00u: goto label_1b6c00;
        case 0x1b6c04u: goto label_1b6c04;
        case 0x1b6c08u: goto label_1b6c08;
        case 0x1b6c0cu: goto label_1b6c0c;
        case 0x1b6c10u: goto label_1b6c10;
        case 0x1b6c14u: goto label_1b6c14;
        case 0x1b6c18u: goto label_1b6c18;
        case 0x1b6c1cu: goto label_1b6c1c;
        case 0x1b6c20u: goto label_1b6c20;
        case 0x1b6c24u: goto label_1b6c24;
        case 0x1b6c28u: goto label_1b6c28;
        case 0x1b6c2cu: goto label_1b6c2c;
        case 0x1b6c30u: goto label_1b6c30;
        case 0x1b6c34u: goto label_1b6c34;
        case 0x1b6c38u: goto label_1b6c38;
        case 0x1b6c3cu: goto label_1b6c3c;
        case 0x1b6c40u: goto label_1b6c40;
        case 0x1b6c44u: goto label_1b6c44;
        case 0x1b6c48u: goto label_1b6c48;
        case 0x1b6c4cu: goto label_1b6c4c;
        default: break;
    }

    ctx->pc = 0x1b6ba0u;

label_1b6ba0:
    // 0x1b6ba0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b6ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1b6ba4:
    // 0x1b6ba4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b6ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b6ba8:
    // 0x1b6ba8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b6ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1b6bac:
    // 0x1b6bac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b6bacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b6bb0:
    // 0x1b6bb0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b6bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1b6bb4:
    // 0x1b6bb4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b6bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1b6bb8:
    // 0x1b6bb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b6bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b6bbc:
    // 0x1b6bbc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1b6bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b6bc0:
    // 0x1b6bc0: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1b6bc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1b6bc4:
    // 0x1b6bc4: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1b6bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1b6bc8:
    // 0x1b6bc8: 0x40f809  jalr        $v0
label_1b6bcc:
    if (ctx->pc == 0x1B6BCCu) {
        ctx->pc = 0x1B6BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6BC8u;
        // 0x1b6bcc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6BD0u;
        goto label_1b6bd0;
    }
    ctx->pc = 0x1B6BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B6BD0u);
        ctx->pc = 0x1B6BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6BC8u;
        // 0x1b6bcc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6BC8u, 0x1B6BD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B6BD0u;
label_1b6bd0:
    // 0x1b6bd0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1b6bd4:
    if (ctx->pc == 0x1B6BD4u) {
        ctx->pc = 0x1B6BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6BD0u;
        // 0x1b6bd4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6BD8u;
        goto label_1b6bd8;
    }
    ctx->pc = 0x1B6BD0u;
    {
        const bool branch_taken_0x1b6bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6BD0u;
        // 0x1b6bd4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6bd0) {
            ctx->pc = 0x1B6C38u;
            goto label_1b6c38;
        }
    }
    ctx->pc = 0x1B6BD8u;
label_1b6bd8:
    // 0x1b6bd8: 0x26440140  addiu       $a0, $s2, 0x140
    ctx->pc = 0x1b6bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
label_1b6bdc:
    // 0x1b6bdc: 0xc068998  jal         func_1A2660
label_1b6be0:
    if (ctx->pc == 0x1B6BE0u) {
        ctx->pc = 0x1B6BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6BDCu;
        // 0x1b6be0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6BE4u;
        goto label_1b6be4;
    }
    ctx->pc = 0x1B6BDCu;
    SET_GPR_U32(ctx, 31, 0x1B6BE4u);
    ctx->pc = 0x1B6BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6BDCu;
    // 0x1b6be0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1B6BDCu, 0x1B6BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6BE4u;
label_1b6be4:
    // 0x1b6be4: 0xc068998  jal         func_1A2660
label_1b6be8:
    if (ctx->pc == 0x1B6BE8u) {
        ctx->pc = 0x1B6BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6BE4u;
        // 0x1b6be8: 0x26440240  addiu       $a0, $s2, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6BECu;
        goto label_1b6bec;
    }
    ctx->pc = 0x1B6BE4u;
    SET_GPR_U32(ctx, 31, 0x1B6BECu);
    ctx->pc = 0x1B6BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6BE4u;
    // 0x1b6be8: 0x26440240  addiu       $a0, $s2, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1B6BE4u, 0x1B6BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6BECu;
label_1b6bec:
    // 0x1b6bec: 0xc068998  jal         func_1A2660
label_1b6bf0:
    if (ctx->pc == 0x1B6BF0u) {
        ctx->pc = 0x1B6BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6BECu;
        // 0x1b6bf0: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6BF4u;
        goto label_1b6bf4;
    }
    ctx->pc = 0x1B6BECu;
    SET_GPR_U32(ctx, 31, 0x1B6BF4u);
    ctx->pc = 0x1B6BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6BECu;
    // 0x1b6bf0: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1B6BECu, 0x1B6BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6BF4u;
label_1b6bf4:
    // 0x1b6bf4: 0x8e420c40  lw          $v0, 0xC40($s2)
    ctx->pc = 0x1b6bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3136)));
label_1b6bf8:
    // 0x1b6bf8: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
label_1b6bfc:
    if (ctx->pc == 0x1B6BFCu) {
        ctx->pc = 0x1B6BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6BF8u;
        // 0x1b6bfc: 0x26500340  addiu       $s0, $s2, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6C00u;
        goto label_1b6c00;
    }
    ctx->pc = 0x1B6BF8u;
    {
        const bool branch_taken_0x1b6bf8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B6BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6BF8u;
        // 0x1b6bfc: 0x26500340  addiu       $s0, $s2, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6bf8) {
            ctx->pc = 0x1B6C34u;
            goto label_1b6c34;
        }
    }
    ctx->pc = 0x1B6C00u;
label_1b6c00:
    // 0x1b6c00: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1b6c00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b6c04:
    // 0x1b6c04: 0x0  nop
    ctx->pc = 0x1b6c04u;
    // NOP
label_1b6c08:
    // 0x1b6c08: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b6c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b6c0c:
    // 0x1b6c0c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b6c0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1b6c10:
    // 0x1b6c10: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x1b6c10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_1b6c14:
    // 0x1b6c14: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x1b6c14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_1b6c18:
    // 0x1b6c18: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1b6c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1b6c1c:
    // 0x1b6c1c: 0x40f809  jalr        $v0
label_1b6c20:
    if (ctx->pc == 0x1B6C20u) {
        ctx->pc = 0x1B6C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C1Cu;
        // 0x1b6c20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6C24u;
        goto label_1b6c24;
    }
    ctx->pc = 0x1B6C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B6C24u);
        ctx->pc = 0x1B6C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C1Cu;
        // 0x1b6c20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6C1Cu, 0x1B6C24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B6C24u;
label_1b6c24:
    // 0x1b6c24: 0x8e420c40  lw          $v0, 0xC40($s2)
    ctx->pc = 0x1b6c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3136)));
label_1b6c28:
    // 0x1b6c28: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1b6c28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b6c2c:
    // 0x1b6c2c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1b6c30:
    if (ctx->pc == 0x1B6C30u) {
        ctx->pc = 0x1B6C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C2Cu;
        // 0x1b6c30: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6C34u;
        goto label_1b6c34;
    }
    ctx->pc = 0x1B6C2Cu;
    {
        const bool branch_taken_0x1b6c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C2Cu;
        // 0x1b6c30: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6c2c) {
            ctx->pc = 0x1B6C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6c08;
        }
    }
    ctx->pc = 0x1B6C34u;
label_1b6c34:
    // 0x1b6c34: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b6c34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b6c38:
    // 0x1b6c38: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b6c38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b6c3c:
    // 0x1b6c3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b6c3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b6c40:
    // 0x1b6c40: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1b6c40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b6c44:
    // 0x1b6c44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b6c48:
    // 0x1b6c48: 0x3e00008  jr          $ra
label_1b6c4c:
    if (ctx->pc == 0x1B6C4Cu) {
        ctx->pc = 0x1B6C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C48u;
        // 0x1b6c4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6C50u;
        goto label_fallthrough_0x1b6c48;
    }
    ctx->pc = 0x1B6C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C48u;
        // 0x1b6c4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b6c48:
    ctx->pc = 0x1B6C50u;
}
