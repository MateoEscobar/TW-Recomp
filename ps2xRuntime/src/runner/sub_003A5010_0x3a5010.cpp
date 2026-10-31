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

// Function: sub_003A5010
// Address: 0x3a5010 - 0x3a50a8
void sub_003A5010_0x3a5010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5010_0x3a5010");
#endif

    switch (ctx->pc) {
        case 0x3a5010u: goto label_3a5010;
        case 0x3a5014u: goto label_3a5014;
        case 0x3a5018u: goto label_3a5018;
        case 0x3a501cu: goto label_3a501c;
        case 0x3a5020u: goto label_3a5020;
        case 0x3a5024u: goto label_3a5024;
        case 0x3a5028u: goto label_3a5028;
        case 0x3a502cu: goto label_3a502c;
        case 0x3a5030u: goto label_3a5030;
        case 0x3a5034u: goto label_3a5034;
        case 0x3a5038u: goto label_3a5038;
        case 0x3a503cu: goto label_3a503c;
        case 0x3a5040u: goto label_3a5040;
        case 0x3a5044u: goto label_3a5044;
        case 0x3a5048u: goto label_3a5048;
        case 0x3a504cu: goto label_3a504c;
        case 0x3a5050u: goto label_3a5050;
        case 0x3a5054u: goto label_3a5054;
        case 0x3a5058u: goto label_3a5058;
        case 0x3a505cu: goto label_3a505c;
        case 0x3a5060u: goto label_3a5060;
        case 0x3a5064u: goto label_3a5064;
        case 0x3a5068u: goto label_3a5068;
        case 0x3a506cu: goto label_3a506c;
        case 0x3a5070u: goto label_3a5070;
        case 0x3a5074u: goto label_3a5074;
        case 0x3a5078u: goto label_3a5078;
        case 0x3a507cu: goto label_3a507c;
        case 0x3a5080u: goto label_3a5080;
        case 0x3a5084u: goto label_3a5084;
        case 0x3a5088u: goto label_3a5088;
        case 0x3a508cu: goto label_3a508c;
        case 0x3a5090u: goto label_3a5090;
        case 0x3a5094u: goto label_3a5094;
        case 0x3a5098u: goto label_3a5098;
        case 0x3a509cu: goto label_3a509c;
        case 0x3a50a0u: goto label_3a50a0;
        case 0x3a50a4u: goto label_3a50a4;
        default: break;
    }

    ctx->pc = 0x3a5010u;

label_3a5010:
    // 0x3a5010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a5010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3a5014:
    // 0x3a5014: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3a5014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3a5018:
    // 0x3a5018: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a5018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a501c:
    // 0x3a501c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a501cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a5020:
    // 0x3a5020: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a5020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a5024:
    // 0x3a5024: 0x30b1ffff  andi        $s1, $a1, 0xFFFF
    ctx->pc = 0x3a5024u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_3a5028:
    // 0x3a5028: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a5028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a502c:
    // 0x3a502c: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x3a502cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_3a5030:
    // 0x3a5030: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3a5030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3a5034:
    // 0x3a5034: 0x40f809  jalr        $v0
label_3a5038:
    if (ctx->pc == 0x3A5038u) {
        ctx->pc = 0x3A5038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5034u;
        // 0x3a5038: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A503Cu;
        goto label_3a503c;
    }
    ctx->pc = 0x3A5034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A503Cu);
        ctx->pc = 0x3A5038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5034u;
        // 0x3a5038: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5034u, 0x3A503Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A503Cu;
label_3a503c:
    // 0x3a503c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3a503cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_3a5040:
    // 0x3a5040: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3a5044:
    if (ctx->pc == 0x3A5044u) {
        ctx->pc = 0x3A5044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5040u;
        // 0x3a5044: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5048u;
        goto label_3a5048;
    }
    ctx->pc = 0x3A5040u;
    {
        const bool branch_taken_0x3a5040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5040) {
            ctx->pc = 0x3A5044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5040u;
            // 0x3a5044: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5060u;
            goto label_3a5060;
        }
    }
    ctx->pc = 0x3A5048u;
label_3a5048:
    // 0x3a5048: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x3a5048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_3a504c:
    // 0x3a504c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3a504cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3a5050:
    // 0x3a5050: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a5050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3a5054:
    // 0x3a5054: 0x512025  or          $a0, $v0, $s1
    ctx->pc = 0x3a5054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_3a5058:
    // 0x3a5058: 0x1000000d  b           . + 4 + (0xD << 2)
label_3a505c:
    if (ctx->pc == 0x3A505Cu) {
        ctx->pc = 0x3A505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5058u;
        // 0x3a505c: 0xae0400c4  sw          $a0, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5060u;
        goto label_3a5060;
    }
    ctx->pc = 0x3A5058u;
    {
        const bool branch_taken_0x3a5058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5058u;
        // 0x3a505c: 0xae0400c4  sw          $a0, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5058) {
            ctx->pc = 0x3A5090u;
            goto label_3a5090;
        }
    }
    ctx->pc = 0x3A5060u;
label_3a5060:
    // 0x3a5060: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x3a5060u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_3a5064:
    // 0x3a5064: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3a5064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3a5068:
    // 0x3a5068: 0x40f809  jalr        $v0
label_3a506c:
    if (ctx->pc == 0x3A506Cu) {
        ctx->pc = 0x3A506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5068u;
        // 0x3a506c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5070u;
        goto label_3a5070;
    }
    ctx->pc = 0x3A5068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A5070u);
        ctx->pc = 0x3A506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5068u;
        // 0x3a506c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5068u, 0x3A5070u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A5070u;
label_3a5070:
    // 0x3a5070: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3a5070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_3a5074:
    // 0x3a5074: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3a5078:
    if (ctx->pc == 0x3A5078u) {
        ctx->pc = 0x3A5078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5074u;
        // 0x3a5078: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A507Cu;
        goto label_3a507c;
    }
    ctx->pc = 0x3A5074u;
    {
        const bool branch_taken_0x3a5074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5074) {
            ctx->pc = 0x3A5078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5074u;
            // 0x3a5078: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5094u;
            goto label_3a5094;
        }
    }
    ctx->pc = 0x3A507Cu;
label_3a507c:
    // 0x3a507c: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x3a507cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_3a5080:
    // 0x3a5080: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3a5080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3a5084:
    // 0x3a5084: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a5084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3a5088:
    // 0x3a5088: 0x512025  or          $a0, $v0, $s1
    ctx->pc = 0x3a5088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_3a508c:
    // 0x3a508c: 0xae0400b0  sw          $a0, 0xB0($s0)
    ctx->pc = 0x3a508cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 4));
label_3a5090:
    // 0x3a5090: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3a5090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a5094:
    // 0x3a5094: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a5094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a5098:
    // 0x3a5098: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a5098u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a509c:
    // 0x3a509c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a509cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a50a0:
    // 0x3a50a0: 0x3e00008  jr          $ra
label_3a50a4:
    if (ctx->pc == 0x3A50A4u) {
        ctx->pc = 0x3A50A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A50A0u;
        // 0x3a50a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A50A8u;
        goto label_fallthrough_0x3a50a0;
    }
    ctx->pc = 0x3A50A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A50A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A50A0u;
        // 0x3a50a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A50A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a50a0:
    ctx->pc = 0x3A50A8u;
}
