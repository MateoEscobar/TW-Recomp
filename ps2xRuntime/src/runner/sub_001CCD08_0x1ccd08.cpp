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

// Function: sub_001CCD08
// Address: 0x1ccd08 - 0x1ccd90
void sub_001CCD08_0x1ccd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCD08_0x1ccd08");
#endif

    switch (ctx->pc) {
        case 0x1ccd08u: goto label_1ccd08;
        case 0x1ccd0cu: goto label_1ccd0c;
        case 0x1ccd10u: goto label_1ccd10;
        case 0x1ccd14u: goto label_1ccd14;
        case 0x1ccd18u: goto label_1ccd18;
        case 0x1ccd1cu: goto label_1ccd1c;
        case 0x1ccd20u: goto label_1ccd20;
        case 0x1ccd24u: goto label_1ccd24;
        case 0x1ccd28u: goto label_1ccd28;
        case 0x1ccd2cu: goto label_1ccd2c;
        case 0x1ccd30u: goto label_1ccd30;
        case 0x1ccd34u: goto label_1ccd34;
        case 0x1ccd38u: goto label_1ccd38;
        case 0x1ccd3cu: goto label_1ccd3c;
        case 0x1ccd40u: goto label_1ccd40;
        case 0x1ccd44u: goto label_1ccd44;
        case 0x1ccd48u: goto label_1ccd48;
        case 0x1ccd4cu: goto label_1ccd4c;
        case 0x1ccd50u: goto label_1ccd50;
        case 0x1ccd54u: goto label_1ccd54;
        case 0x1ccd58u: goto label_1ccd58;
        case 0x1ccd5cu: goto label_1ccd5c;
        case 0x1ccd60u: goto label_1ccd60;
        case 0x1ccd64u: goto label_1ccd64;
        case 0x1ccd68u: goto label_1ccd68;
        case 0x1ccd6cu: goto label_1ccd6c;
        case 0x1ccd70u: goto label_1ccd70;
        case 0x1ccd74u: goto label_1ccd74;
        case 0x1ccd78u: goto label_1ccd78;
        case 0x1ccd7cu: goto label_1ccd7c;
        case 0x1ccd80u: goto label_1ccd80;
        case 0x1ccd84u: goto label_1ccd84;
        case 0x1ccd88u: goto label_1ccd88;
        case 0x1ccd8cu: goto label_1ccd8c;
        default: break;
    }

    ctx->pc = 0x1ccd08u;

label_1ccd08:
    // 0x1ccd08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ccd08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ccd0c:
    // 0x1ccd0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ccd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ccd10:
    // 0x1ccd10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ccd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ccd14:
    // 0x1ccd14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ccd14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ccd18:
    // 0x1ccd18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ccd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ccd1c:
    // 0x1ccd1c: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1ccd1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1ccd20:
    // 0x1ccd20: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1ccd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1ccd24:
    // 0x1ccd24: 0x40f809  jalr        $v0
label_1ccd28:
    if (ctx->pc == 0x1CCD28u) {
        ctx->pc = 0x1CCD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD24u;
        // 0x1ccd28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCD2Cu;
        goto label_1ccd2c;
    }
    ctx->pc = 0x1CCD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CCD2Cu);
        ctx->pc = 0x1CCD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD24u;
        // 0x1ccd28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCD24u, 0x1CCD2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CCD2Cu;
label_1ccd2c:
    // 0x1ccd2c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_1ccd30:
    if (ctx->pc == 0x1CCD30u) {
        ctx->pc = 0x1CCD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD2Cu;
        // 0x1ccd30: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCD34u;
        goto label_1ccd34;
    }
    ctx->pc = 0x1CCD2Cu;
    {
        const bool branch_taken_0x1ccd2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccd2c) {
            ctx->pc = 0x1CCD30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCD2Cu;
            // 0x1ccd30: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCD80u;
            goto label_1ccd80;
        }
    }
    ctx->pc = 0x1CCD34u;
label_1ccd34:
    // 0x1ccd34: 0x8e050070  lw          $a1, 0x70($s0)
    ctx->pc = 0x1ccd34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_1ccd38:
    // 0x1ccd38: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ccd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ccd3c:
    // 0x1ccd3c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1ccd3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1ccd40:
    // 0x1ccd40: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1ccd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1ccd44:
    // 0x1ccd44: 0x60f809  jalr        $v1
label_1ccd48:
    if (ctx->pc == 0x1CCD48u) {
        ctx->pc = 0x1CCD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD44u;
        // 0x1ccd48: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCD4Cu;
        goto label_1ccd4c;
    }
    ctx->pc = 0x1CCD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CCD4Cu);
        ctx->pc = 0x1CCD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD44u;
        // 0x1ccd48: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCD44u, 0x1CCD4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CCD4Cu;
label_1ccd4c:
    // 0x1ccd4c: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x1ccd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_1ccd50:
    // 0x1ccd50: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ccd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ccd54:
    // 0x1ccd54: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1ccd54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1ccd58:
    // 0x1ccd58: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1ccd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1ccd5c:
    // 0x1ccd5c: 0x60f809  jalr        $v1
label_1ccd60:
    if (ctx->pc == 0x1CCD60u) {
        ctx->pc = 0x1CCD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD5Cu;
        // 0x1ccd60: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCD64u;
        goto label_1ccd64;
    }
    ctx->pc = 0x1CCD5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CCD64u);
        ctx->pc = 0x1CCD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD5Cu;
        // 0x1ccd60: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCD5Cu, 0x1CCD64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CCD64u;
label_1ccd64:
    // 0x1ccd64: 0x8e050074  lw          $a1, 0x74($s0)
    ctx->pc = 0x1ccd64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_1ccd68:
    // 0x1ccd68: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ccd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ccd6c:
    // 0x1ccd6c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1ccd6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1ccd70:
    // 0x1ccd70: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1ccd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1ccd74:
    // 0x1ccd74: 0x60f809  jalr        $v1
label_1ccd78:
    if (ctx->pc == 0x1CCD78u) {
        ctx->pc = 0x1CCD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD74u;
        // 0x1ccd78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCD7Cu;
        goto label_1ccd7c;
    }
    ctx->pc = 0x1CCD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CCD7Cu);
        ctx->pc = 0x1CCD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD74u;
        // 0x1ccd78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCD74u, 0x1CCD7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CCD7Cu;
label_1ccd7c:
    // 0x1ccd7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ccd7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ccd80:
    // 0x1ccd80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ccd80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ccd84:
    // 0x1ccd84: 0x3e00008  jr          $ra
label_1ccd88:
    if (ctx->pc == 0x1CCD88u) {
        ctx->pc = 0x1CCD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD84u;
        // 0x1ccd88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCD8Cu;
        goto label_1ccd8c;
    }
    ctx->pc = 0x1CCD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD84u;
        // 0x1ccd88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCD84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCD8Cu;
label_1ccd8c:
    // 0x1ccd8c: 0x0  nop
    ctx->pc = 0x1ccd8cu;
    // NOP
    ctx->pc = 0x1ccd90u;
}
