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

// Function: sub_001ABEE8
// Address: 0x1abee8 - 0x1abf60
void sub_001ABEE8_0x1abee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABEE8_0x1abee8");
#endif

    switch (ctx->pc) {
        case 0x1abee8u: goto label_1abee8;
        case 0x1abeecu: goto label_1abeec;
        case 0x1abef0u: goto label_1abef0;
        case 0x1abef4u: goto label_1abef4;
        case 0x1abef8u: goto label_1abef8;
        case 0x1abefcu: goto label_1abefc;
        case 0x1abf00u: goto label_1abf00;
        case 0x1abf04u: goto label_1abf04;
        case 0x1abf08u: goto label_1abf08;
        case 0x1abf0cu: goto label_1abf0c;
        case 0x1abf10u: goto label_1abf10;
        case 0x1abf14u: goto label_1abf14;
        case 0x1abf18u: goto label_1abf18;
        case 0x1abf1cu: goto label_1abf1c;
        case 0x1abf20u: goto label_1abf20;
        case 0x1abf24u: goto label_1abf24;
        case 0x1abf28u: goto label_1abf28;
        case 0x1abf2cu: goto label_1abf2c;
        case 0x1abf30u: goto label_1abf30;
        case 0x1abf34u: goto label_1abf34;
        case 0x1abf38u: goto label_1abf38;
        case 0x1abf3cu: goto label_1abf3c;
        case 0x1abf40u: goto label_1abf40;
        case 0x1abf44u: goto label_1abf44;
        case 0x1abf48u: goto label_1abf48;
        case 0x1abf4cu: goto label_1abf4c;
        case 0x1abf50u: goto label_1abf50;
        case 0x1abf54u: goto label_1abf54;
        case 0x1abf58u: goto label_1abf58;
        case 0x1abf5cu: goto label_1abf5c;
        default: break;
    }

    ctx->pc = 0x1abee8u;

label_1abee8:
    // 0x1abee8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1abee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1abeec:
    // 0x1abeec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1abeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1abef0:
    // 0x1abef0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1abef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1abef4:
    // 0x1abef4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1abef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1abef8:
    // 0x1abef8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1abef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1abefc:
    // 0x1abefc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1abf00:
    if (ctx->pc == 0x1ABF00u) {
        ctx->pc = 0x1ABF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABEFCu;
        // 0x1abf00: 0x24820080  addiu       $v0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABF04u;
        goto label_1abf04;
    }
    ctx->pc = 0x1ABEFCu;
    {
        const bool branch_taken_0x1abefc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABEFCu;
        // 0x1abf00: 0x24820080  addiu       $v0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abefc) {
            ctx->pc = 0x1ABF0Cu;
            goto label_1abf0c;
        }
    }
    ctx->pc = 0x1ABF04u;
label_1abf04:
    // 0x1abf04: 0x10000011  b           . + 4 + (0x11 << 2)
label_1abf08:
    if (ctx->pc == 0x1ABF08u) {
        ctx->pc = 0x1ABF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF04u;
        // 0x1abf08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABF0Cu;
        goto label_1abf0c;
    }
    ctx->pc = 0x1ABF04u;
    {
        const bool branch_taken_0x1abf04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF04u;
        // 0x1abf08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abf04) {
            ctx->pc = 0x1ABF4Cu;
            goto label_1abf4c;
        }
    }
    ctx->pc = 0x1ABF0Cu;
label_1abf0c:
    // 0x1abf0c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1abf0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1abf10:
    // 0x1abf10: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1abf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1abf14:
    // 0x1abf14: 0x1203000c  beq         $s0, $v1, . + 4 + (0xC << 2)
label_1abf18:
    if (ctx->pc == 0x1ABF18u) {
        ctx->pc = 0x1ABF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF14u;
        // 0x1abf18: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABF1Cu;
        goto label_1abf1c;
    }
    ctx->pc = 0x1ABF14u;
    {
        const bool branch_taken_0x1abf14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1ABF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF14u;
        // 0x1abf18: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abf14) {
            ctx->pc = 0x1ABF48u;
            goto label_1abf48;
        }
    }
    ctx->pc = 0x1ABF1Cu;
label_1abf1c:
    // 0x1abf1c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1abf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1abf20:
    // 0x1abf20: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1abf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1abf24:
    // 0x1abf24: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1abf24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1abf28:
    // 0x1abf28: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1abf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1abf2c:
    // 0x1abf2c: 0x40f809  jalr        $v0
label_1abf30:
    if (ctx->pc == 0x1ABF30u) {
        ctx->pc = 0x1ABF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF2Cu;
        // 0x1abf30: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABF34u;
        goto label_1abf34;
    }
    ctx->pc = 0x1ABF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ABF34u);
        ctx->pc = 0x1ABF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF2Cu;
        // 0x1abf30: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABF2Cu, 0x1ABF34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ABF34u;
label_1abf34:
    // 0x1abf34: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
label_1abf38:
    if (ctx->pc == 0x1ABF38u) {
        ctx->pc = 0x1ABF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF34u;
        // 0x1abf38: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABF3Cu;
        goto label_1abf3c;
    }
    ctx->pc = 0x1ABF34u;
    {
        const bool branch_taken_0x1abf34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF34u;
        // 0x1abf38: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abf34) {
            ctx->pc = 0x1ABF04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1abf04;
        }
    }
    ctx->pc = 0x1ABF3Cu;
label_1abf3c:
    // 0x1abf3c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1abf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1abf40:
    // 0x1abf40: 0x5602fff7  bnel        $s0, $v0, . + 4 + (-0x9 << 2)
label_1abf44:
    if (ctx->pc == 0x1ABF44u) {
        ctx->pc = 0x1ABF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF40u;
        // 0x1abf44: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABF48u;
        goto label_1abf48;
    }
    ctx->pc = 0x1ABF40u;
    {
        const bool branch_taken_0x1abf40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1abf40) {
            ctx->pc = 0x1ABF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABF40u;
            // 0x1abf44: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1abf20;
        }
    }
    ctx->pc = 0x1ABF48u;
label_1abf48:
    // 0x1abf48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1abf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1abf4c:
    // 0x1abf4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1abf4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1abf50:
    // 0x1abf50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1abf50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1abf54:
    // 0x1abf54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1abf54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1abf58:
    // 0x1abf58: 0x3e00008  jr          $ra
label_1abf5c:
    if (ctx->pc == 0x1ABF5Cu) {
        ctx->pc = 0x1ABF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF58u;
        // 0x1abf5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABF60u;
        goto label_fallthrough_0x1abf58;
    }
    ctx->pc = 0x1ABF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF58u;
        // 0x1abf5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1abf58:
    ctx->pc = 0x1ABF60u;
}
