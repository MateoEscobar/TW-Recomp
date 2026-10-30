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

// Function: sub_002A5FD8
// Address: 0x2a5fd8 - 0x2a6098
void sub_002A5FD8_0x2a5fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5FD8_0x2a5fd8");
#endif

    switch (ctx->pc) {
        case 0x2a5fd8u: goto label_2a5fd8;
        case 0x2a5fdcu: goto label_2a5fdc;
        case 0x2a5fe0u: goto label_2a5fe0;
        case 0x2a5fe4u: goto label_2a5fe4;
        case 0x2a5fe8u: goto label_2a5fe8;
        case 0x2a5fecu: goto label_2a5fec;
        case 0x2a5ff0u: goto label_2a5ff0;
        case 0x2a5ff4u: goto label_2a5ff4;
        case 0x2a5ff8u: goto label_2a5ff8;
        case 0x2a5ffcu: goto label_2a5ffc;
        case 0x2a6000u: goto label_2a6000;
        case 0x2a6004u: goto label_2a6004;
        case 0x2a6008u: goto label_2a6008;
        case 0x2a600cu: goto label_2a600c;
        case 0x2a6010u: goto label_2a6010;
        case 0x2a6014u: goto label_2a6014;
        case 0x2a6018u: goto label_2a6018;
        case 0x2a601cu: goto label_2a601c;
        case 0x2a6020u: goto label_2a6020;
        case 0x2a6024u: goto label_2a6024;
        case 0x2a6028u: goto label_2a6028;
        case 0x2a602cu: goto label_2a602c;
        case 0x2a6030u: goto label_2a6030;
        case 0x2a6034u: goto label_2a6034;
        case 0x2a6038u: goto label_2a6038;
        case 0x2a603cu: goto label_2a603c;
        case 0x2a6040u: goto label_2a6040;
        case 0x2a6044u: goto label_2a6044;
        case 0x2a6048u: goto label_2a6048;
        case 0x2a604cu: goto label_2a604c;
        case 0x2a6050u: goto label_2a6050;
        case 0x2a6054u: goto label_2a6054;
        case 0x2a6058u: goto label_2a6058;
        case 0x2a605cu: goto label_2a605c;
        case 0x2a6060u: goto label_2a6060;
        case 0x2a6064u: goto label_2a6064;
        case 0x2a6068u: goto label_2a6068;
        case 0x2a606cu: goto label_2a606c;
        case 0x2a6070u: goto label_2a6070;
        case 0x2a6074u: goto label_2a6074;
        case 0x2a6078u: goto label_2a6078;
        case 0x2a607cu: goto label_2a607c;
        case 0x2a6080u: goto label_2a6080;
        case 0x2a6084u: goto label_2a6084;
        case 0x2a6088u: goto label_2a6088;
        case 0x2a608cu: goto label_2a608c;
        case 0x2a6090u: goto label_2a6090;
        case 0x2a6094u: goto label_2a6094;
        default: break;
    }

    ctx->pc = 0x2a5fd8u;

label_2a5fd8:
    // 0x2a5fd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a5fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2a5fdc:
    // 0x2a5fdc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2a5fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2a5fe0:
    // 0x2a5fe0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2a5fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2a5fe4:
    // 0x2a5fe4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a5fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a5fe8:
    // 0x2a5fe8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a5fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a5fec:
    // 0x2a5fec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a5fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a5ff0:
    // 0x2a5ff0: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x2a5ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2a5ff4:
    // 0x2a5ff4: 0x10a00022  beqz        $a1, . + 4 + (0x22 << 2)
label_2a5ff8:
    if (ctx->pc == 0x2A5FF8u) {
        ctx->pc = 0x2A5FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5FF4u;
        // 0x2a5ff8: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5FFCu;
        goto label_2a5ffc;
    }
    ctx->pc = 0x2A5FF4u;
    {
        const bool branch_taken_0x2a5ff4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5FF4u;
        // 0x2a5ff8: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5ff4) {
            ctx->pc = 0x2A6080u;
            goto label_2a6080;
        }
    }
    ctx->pc = 0x2A5FFCu;
label_2a5ffc:
    // 0x2a5ffc: 0x8e462b04  lw          $a2, 0x2B04($s2)
    ctx->pc = 0x2a5ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_2a6000:
    // 0x2a6000: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a6000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2a6004:
    // 0x2a6004: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x2a6004u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_2a6008:
    // 0x2a6008: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2a6008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2a600c:
    // 0x2a600c: 0x40f809  jalr        $v0
label_2a6010:
    if (ctx->pc == 0x2A6010u) {
        ctx->pc = 0x2A6010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A600Cu;
        // 0x2a6010: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6014u;
        goto label_2a6014;
    }
    ctx->pc = 0x2A600Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A6014u);
        ctx->pc = 0x2A6010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A600Cu;
        // 0x2a6010: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A600Cu, 0x2A6014u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A6014u;
label_2a6014:
    // 0x2a6014: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_2a6018:
    if (ctx->pc == 0x2A6018u) {
        ctx->pc = 0x2A6018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6014u;
        // 0x2a6018: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A601Cu;
        goto label_2a601c;
    }
    ctx->pc = 0x2A6014u;
    {
        const bool branch_taken_0x2a6014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6014) {
            ctx->pc = 0x2A6018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6014u;
            // 0x2a6018: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6084u;
            goto label_2a6084;
        }
    }
    ctx->pc = 0x2A601Cu;
label_2a601c:
    // 0x2a601c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a601cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a6020:
    // 0x2a6020: 0x8e502b04  lw          $s0, 0x2B04($s2)
    ctx->pc = 0x2a6020u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_2a6024:
    // 0x2a6024: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2a6024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a6028:
    // 0x2a6028: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2a6028u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a602c:
    // 0x2a602c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a602cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2a6030:
    // 0x2a6030: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x2a6030u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_2a6034:
    // 0x2a6034: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a6034u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a6038:
    // 0x2a6038: 0x26310058  addiu       $s1, $s1, 0x58
    ctx->pc = 0x2a6038u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_2a603c:
    // 0x2a603c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a603cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a6040:
    // 0x2a6040: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x2a6040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_2a6044:
    // 0x2a6044: 0x40f809  jalr        $v0
label_2a6048:
    if (ctx->pc == 0x2A6048u) {
        ctx->pc = 0x2A6048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6044u;
        // 0x2a6048: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A604Cu;
        goto label_2a604c;
    }
    ctx->pc = 0x2A6044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A604Cu);
        ctx->pc = 0x2A6048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6044u;
        // 0x2a6048: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6044u, 0x2A604Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A604Cu;
label_2a604c:
    // 0x2a604c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2a604cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2a6050:
    // 0x2a6050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a6054:
    // 0x2a6054: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2a6054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2a6058:
    // 0x2a6058: 0x40f809  jalr        $v0
label_2a605c:
    if (ctx->pc == 0x2A605Cu) {
        ctx->pc = 0x2A605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6058u;
        // 0x2a605c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6060u;
        goto label_2a6060;
    }
    ctx->pc = 0x2A6058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A6060u);
        ctx->pc = 0x2A605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6058u;
        // 0x2a605c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6058u, 0x2A6060u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A6060u;
label_2a6060:
    // 0x2a6060: 0x8e472b04  lw          $a3, 0x2B04($s2)
    ctx->pc = 0x2a6060u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_2a6064:
    // 0x2a6064: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a6064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a6068:
    // 0x2a6068: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a6068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a606c:
    // 0x2a606c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2a606cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2a6070:
    // 0x2a6070: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x2a6070u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_2a6074:
    // 0x2a6074: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x2a6074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_2a6078:
    // 0x2a6078: 0x60f809  jalr        $v1
label_2a607c:
    if (ctx->pc == 0x2A607Cu) {
        ctx->pc = 0x2A607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6078u;
        // 0x2a607c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6080u;
        goto label_2a6080;
    }
    ctx->pc = 0x2A6078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A6080u);
        ctx->pc = 0x2A607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6078u;
        // 0x2a607c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6078u, 0x2A6080u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A6080u;
label_2a6080:
    // 0x2a6080: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2a6080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2a6084:
    // 0x2a6084: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2a6084u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a6088:
    // 0x2a6088: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a6088u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a608c:
    // 0x2a608c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a608cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a6090:
    // 0x2a6090: 0x3e00008  jr          $ra
label_2a6094:
    if (ctx->pc == 0x2A6094u) {
        ctx->pc = 0x2A6094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6090u;
        // 0x2a6094: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6098u;
        goto label_fallthrough_0x2a6090;
    }
    ctx->pc = 0x2A6090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6090u;
        // 0x2a6094: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a6090:
    ctx->pc = 0x2A6098u;
}
