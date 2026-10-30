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

// Function: sub_001F0CF0
// Address: 0x1f0cf0 - 0x1f0e60
void sub_001F0CF0_0x1f0cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0CF0_0x1f0cf0");
#endif

    switch (ctx->pc) {
        case 0x1f0cf0u: goto label_1f0cf0;
        case 0x1f0cf4u: goto label_1f0cf4;
        case 0x1f0cf8u: goto label_1f0cf8;
        case 0x1f0cfcu: goto label_1f0cfc;
        case 0x1f0d00u: goto label_1f0d00;
        case 0x1f0d04u: goto label_1f0d04;
        case 0x1f0d08u: goto label_1f0d08;
        case 0x1f0d0cu: goto label_1f0d0c;
        case 0x1f0d10u: goto label_1f0d10;
        case 0x1f0d14u: goto label_1f0d14;
        case 0x1f0d18u: goto label_1f0d18;
        case 0x1f0d1cu: goto label_1f0d1c;
        case 0x1f0d20u: goto label_1f0d20;
        case 0x1f0d24u: goto label_1f0d24;
        case 0x1f0d28u: goto label_1f0d28;
        case 0x1f0d2cu: goto label_1f0d2c;
        case 0x1f0d30u: goto label_1f0d30;
        case 0x1f0d34u: goto label_1f0d34;
        case 0x1f0d38u: goto label_1f0d38;
        case 0x1f0d3cu: goto label_1f0d3c;
        case 0x1f0d40u: goto label_1f0d40;
        case 0x1f0d44u: goto label_1f0d44;
        case 0x1f0d48u: goto label_1f0d48;
        case 0x1f0d4cu: goto label_1f0d4c;
        case 0x1f0d50u: goto label_1f0d50;
        case 0x1f0d54u: goto label_1f0d54;
        case 0x1f0d58u: goto label_1f0d58;
        case 0x1f0d5cu: goto label_1f0d5c;
        case 0x1f0d60u: goto label_1f0d60;
        case 0x1f0d64u: goto label_1f0d64;
        case 0x1f0d68u: goto label_1f0d68;
        case 0x1f0d6cu: goto label_1f0d6c;
        case 0x1f0d70u: goto label_1f0d70;
        case 0x1f0d74u: goto label_1f0d74;
        case 0x1f0d78u: goto label_1f0d78;
        case 0x1f0d7cu: goto label_1f0d7c;
        case 0x1f0d80u: goto label_1f0d80;
        case 0x1f0d84u: goto label_1f0d84;
        case 0x1f0d88u: goto label_1f0d88;
        case 0x1f0d8cu: goto label_1f0d8c;
        case 0x1f0d90u: goto label_1f0d90;
        case 0x1f0d94u: goto label_1f0d94;
        case 0x1f0d98u: goto label_1f0d98;
        case 0x1f0d9cu: goto label_1f0d9c;
        case 0x1f0da0u: goto label_1f0da0;
        case 0x1f0da4u: goto label_1f0da4;
        case 0x1f0da8u: goto label_1f0da8;
        case 0x1f0dacu: goto label_1f0dac;
        case 0x1f0db0u: goto label_1f0db0;
        case 0x1f0db4u: goto label_1f0db4;
        case 0x1f0db8u: goto label_1f0db8;
        case 0x1f0dbcu: goto label_1f0dbc;
        case 0x1f0dc0u: goto label_1f0dc0;
        case 0x1f0dc4u: goto label_1f0dc4;
        case 0x1f0dc8u: goto label_1f0dc8;
        case 0x1f0dccu: goto label_1f0dcc;
        case 0x1f0dd0u: goto label_1f0dd0;
        case 0x1f0dd4u: goto label_1f0dd4;
        case 0x1f0dd8u: goto label_1f0dd8;
        case 0x1f0ddcu: goto label_1f0ddc;
        case 0x1f0de0u: goto label_1f0de0;
        case 0x1f0de4u: goto label_1f0de4;
        case 0x1f0de8u: goto label_1f0de8;
        case 0x1f0decu: goto label_1f0dec;
        case 0x1f0df0u: goto label_1f0df0;
        case 0x1f0df4u: goto label_1f0df4;
        case 0x1f0df8u: goto label_1f0df8;
        case 0x1f0dfcu: goto label_1f0dfc;
        case 0x1f0e00u: goto label_1f0e00;
        case 0x1f0e04u: goto label_1f0e04;
        case 0x1f0e08u: goto label_1f0e08;
        case 0x1f0e0cu: goto label_1f0e0c;
        case 0x1f0e10u: goto label_1f0e10;
        case 0x1f0e14u: goto label_1f0e14;
        case 0x1f0e18u: goto label_1f0e18;
        case 0x1f0e1cu: goto label_1f0e1c;
        case 0x1f0e20u: goto label_1f0e20;
        case 0x1f0e24u: goto label_1f0e24;
        case 0x1f0e28u: goto label_1f0e28;
        case 0x1f0e2cu: goto label_1f0e2c;
        case 0x1f0e30u: goto label_1f0e30;
        case 0x1f0e34u: goto label_1f0e34;
        case 0x1f0e38u: goto label_1f0e38;
        case 0x1f0e3cu: goto label_1f0e3c;
        case 0x1f0e40u: goto label_1f0e40;
        case 0x1f0e44u: goto label_1f0e44;
        case 0x1f0e48u: goto label_1f0e48;
        case 0x1f0e4cu: goto label_1f0e4c;
        case 0x1f0e50u: goto label_1f0e50;
        case 0x1f0e54u: goto label_1f0e54;
        case 0x1f0e58u: goto label_1f0e58;
        case 0x1f0e5cu: goto label_1f0e5c;
        default: break;
    }

    ctx->pc = 0x1f0cf0u;

label_1f0cf0:
    // 0x1f0cf0: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1f0cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1f0cf4:
    // 0x1f0cf4: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x1f0cf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_1f0cf8:
    // 0x1f0cf8: 0x40f809  jalr        $v0
label_1f0cfc:
    if (ctx->pc == 0x1F0CFCu) {
        ctx->pc = 0x1F0CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CF8u;
        // 0x1f0cfc: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0D00u;
        goto label_1f0d00;
    }
    ctx->pc = 0x1F0CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F0D00u);
        ctx->pc = 0x1F0CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CF8u;
        // 0x1f0cfc: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0CF8u, 0x1F0D00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0D00u;
label_1f0d00:
    // 0x1f0d00: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1f0d00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f0d04:
    // 0x1f0d04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f0d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f0d08:
    // 0x1f0d08: 0xc0f809  jalr        $a2
label_1f0d0c:
    if (ctx->pc == 0x1F0D0Cu) {
        ctx->pc = 0x1F0D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D08u;
        // 0x1f0d0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0D10u;
        goto label_1f0d10;
    }
    ctx->pc = 0x1F0D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1F0D10u);
        ctx->pc = 0x1F0D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D08u;
        // 0x1f0d0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0D08u, 0x1F0D10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0D10u;
label_1f0d10:
    // 0x1f0d10: 0x8e430150  lw          $v1, 0x150($s2)
    ctx->pc = 0x1f0d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
label_1f0d14:
    // 0x1f0d14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0d18:
    // 0x1f0d18: 0x14620030  bne         $v1, $v0, . + 4 + (0x30 << 2)
label_1f0d1c:
    if (ctx->pc == 0x1F0D1Cu) {
        ctx->pc = 0x1F0D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D18u;
        // 0x1f0d1c: 0x8fb10064  lw          $s1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0D20u;
        goto label_1f0d20;
    }
    ctx->pc = 0x1F0D18u;
    {
        const bool branch_taken_0x1f0d18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F0D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D18u;
        // 0x1f0d1c: 0x8fb10064  lw          $s1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0d18) {
            ctx->pc = 0x1F0DDCu;
            goto label_1f0ddc;
        }
    }
    ctx->pc = 0x1F0D20u;
label_1f0d20:
    // 0x1f0d20: 0x8e420154  lw          $v0, 0x154($s2)
    ctx->pc = 0x1f0d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
label_1f0d24:
    // 0x1f0d24: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_1f0d28:
    if (ctx->pc == 0x1F0D28u) {
        ctx->pc = 0x1F0D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D24u;
        // 0x1f0d28: 0x8e4601a8  lw          $a2, 0x1A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0D2Cu;
        goto label_1f0d2c;
    }
    ctx->pc = 0x1F0D24u;
    {
        const bool branch_taken_0x1f0d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0d24) {
            ctx->pc = 0x1F0D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0D24u;
            // 0x1f0d28: 0x8e4601a8  lw          $a2, 0x1A8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0D6Cu;
            goto label_1f0d6c;
        }
    }
    ctx->pc = 0x1F0D2Cu;
label_1f0d2c:
    // 0x1f0d2c: 0x8e4601b0  lw          $a2, 0x1B0($s2)
    ctx->pc = 0x1f0d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
label_1f0d30:
    // 0x1f0d30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f0d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0d34:
    // 0x1f0d34: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f0d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f0d38:
    // 0x1f0d38: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f0d38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f0d3c:
    // 0x1f0d3c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f0d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f0d40:
    // 0x1f0d40: 0x60f809  jalr        $v1
label_1f0d44:
    if (ctx->pc == 0x1F0D44u) {
        ctx->pc = 0x1F0D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D40u;
        // 0x1f0d44: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0D48u;
        goto label_1f0d48;
    }
    ctx->pc = 0x1F0D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0D48u);
        ctx->pc = 0x1F0D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D40u;
        // 0x1f0d44: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0D40u, 0x1F0D48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0D48u;
label_1f0d48:
    // 0x1f0d48: 0x8e4601b4  lw          $a2, 0x1B4($s2)
    ctx->pc = 0x1f0d48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
label_1f0d4c:
    // 0x1f0d4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f0d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0d50:
    // 0x1f0d50: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f0d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f0d54:
    // 0x1f0d54: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f0d54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f0d58:
    // 0x1f0d58: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f0d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f0d5c:
    // 0x1f0d5c: 0x60f809  jalr        $v1
label_1f0d60:
    if (ctx->pc == 0x1F0D60u) {
        ctx->pc = 0x1F0D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D5Cu;
        // 0x1f0d60: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0D64u;
        goto label_1f0d64;
    }
    ctx->pc = 0x1F0D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0D64u);
        ctx->pc = 0x1F0D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D5Cu;
        // 0x1f0d60: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0D5Cu, 0x1F0D64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0D64u;
label_1f0d64:
    // 0x1f0d64: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1f0d68:
    if (ctx->pc == 0x1F0D68u) {
        ctx->pc = 0x1F0D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D64u;
        // 0x1f0d68: 0x8fb10064  lw          $s1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0D6Cu;
        goto label_1f0d6c;
    }
    ctx->pc = 0x1F0D64u;
    {
        const bool branch_taken_0x1f0d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D64u;
        // 0x1f0d68: 0x8fb10064  lw          $s1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0d64) {
            ctx->pc = 0x1F0DDCu;
            goto label_1f0ddc;
        }
    }
    ctx->pc = 0x1F0D6Cu;
label_1f0d6c:
    // 0x1f0d6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f0d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0d70:
    // 0x1f0d70: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f0d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f0d74:
    // 0x1f0d74: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f0d74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f0d78:
    // 0x1f0d78: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f0d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f0d7c:
    // 0x1f0d7c: 0x60f809  jalr        $v1
label_1f0d80:
    if (ctx->pc == 0x1F0D80u) {
        ctx->pc = 0x1F0D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D7Cu;
        // 0x1f0d80: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0D84u;
        goto label_1f0d84;
    }
    ctx->pc = 0x1F0D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0D84u);
        ctx->pc = 0x1F0D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D7Cu;
        // 0x1f0d80: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0D7Cu, 0x1F0D84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0D84u;
label_1f0d84:
    // 0x1f0d84: 0x8e4601ac  lw          $a2, 0x1AC($s2)
    ctx->pc = 0x1f0d84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
label_1f0d88:
    // 0x1f0d88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f0d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0d8c:
    // 0x1f0d8c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f0d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f0d90:
    // 0x1f0d90: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f0d90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f0d94:
    // 0x1f0d94: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f0d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f0d98:
    // 0x1f0d98: 0x60f809  jalr        $v1
label_1f0d9c:
    if (ctx->pc == 0x1F0D9Cu) {
        ctx->pc = 0x1F0D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D98u;
        // 0x1f0d9c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0DA0u;
        goto label_1f0da0;
    }
    ctx->pc = 0x1F0D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0DA0u);
        ctx->pc = 0x1F0D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D98u;
        // 0x1f0d9c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0D98u, 0x1F0DA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0DA0u;
label_1f0da0:
    // 0x1f0da0: 0x8e4601b0  lw          $a2, 0x1B0($s2)
    ctx->pc = 0x1f0da0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
label_1f0da4:
    // 0x1f0da4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f0da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0da8:
    // 0x1f0da8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f0da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f0dac:
    // 0x1f0dac: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f0dacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f0db0:
    // 0x1f0db0: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f0db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f0db4:
    // 0x1f0db4: 0x60f809  jalr        $v1
label_1f0db8:
    if (ctx->pc == 0x1F0DB8u) {
        ctx->pc = 0x1F0DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0DB4u;
        // 0x1f0db8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0DBCu;
        goto label_1f0dbc;
    }
    ctx->pc = 0x1F0DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0DBCu);
        ctx->pc = 0x1F0DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0DB4u;
        // 0x1f0db8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0DB4u, 0x1F0DBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0DBCu;
label_1f0dbc:
    // 0x1f0dbc: 0x8e4601b4  lw          $a2, 0x1B4($s2)
    ctx->pc = 0x1f0dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
label_1f0dc0:
    // 0x1f0dc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f0dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0dc4:
    // 0x1f0dc4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f0dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f0dc8:
    // 0x1f0dc8: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f0dc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f0dcc:
    // 0x1f0dcc: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f0dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f0dd0:
    // 0x1f0dd0: 0x60f809  jalr        $v1
label_1f0dd4:
    if (ctx->pc == 0x1F0DD4u) {
        ctx->pc = 0x1F0DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0DD0u;
        // 0x1f0dd4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0DD8u;
        goto label_1f0dd8;
    }
    ctx->pc = 0x1F0DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0DD8u);
        ctx->pc = 0x1F0DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0DD0u;
        // 0x1f0dd4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0DD0u, 0x1F0DD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0DD8u;
label_1f0dd8:
    // 0x1f0dd8: 0x8fb10064  lw          $s1, 0x64($sp)
    ctx->pc = 0x1f0dd8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1f0ddc:
    // 0x1f0ddc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f0ddcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0de0:
    // 0x1f0de0: 0x8fb00060  lw          $s0, 0x60($sp)
    ctx->pc = 0x1f0de0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1f0de4:
    // 0x1f0de4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1f0de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f0de8:
    // 0x1f0de8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f0de8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1f0dec:
    // 0x1f0dec: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1f0decu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1f0df0:
    // 0x1f0df0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f0df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f0df4:
    // 0x1f0df4: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f0df4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f0df8:
    // 0x1f0df8: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f0df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f0dfc:
    // 0x1f0dfc: 0x60f809  jalr        $v1
label_1f0e00:
    if (ctx->pc == 0x1F0E00u) {
        ctx->pc = 0x1F0E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0DFCu;
        // 0x1f0e00: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0E04u;
        goto label_1f0e04;
    }
    ctx->pc = 0x1F0DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0E04u);
        ctx->pc = 0x1F0E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0DFCu;
        // 0x1f0e00: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0DFCu, 0x1F0E04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0E04u;
label_1f0e04:
    // 0x1f0e04: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1f0e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f0e08:
    // 0x1f0e08: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1f0e08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1f0e0c:
    // 0x1f0e0c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f0e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f0e10:
    // 0x1f0e10: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f0e10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f0e14:
    // 0x1f0e14: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f0e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f0e18:
    // 0x1f0e18: 0x60f809  jalr        $v1
label_1f0e1c:
    if (ctx->pc == 0x1F0E1Cu) {
        ctx->pc = 0x1F0E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0E18u;
        // 0x1f0e1c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0E20u;
        goto label_1f0e20;
    }
    ctx->pc = 0x1F0E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0E20u);
        ctx->pc = 0x1F0E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0E18u;
        // 0x1f0e1c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0E18u, 0x1F0E20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0E20u;
label_1f0e20:
    // 0x1f0e20: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x1f0e20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1f0e24:
    // 0x1f0e24: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
label_1f0e28:
    if (ctx->pc == 0x1F0E28u) {
        ctx->pc = 0x1F0E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0E24u;
        // 0x1f0e28: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0E2Cu;
        goto label_1f0e2c;
    }
    ctx->pc = 0x1F0E24u;
    {
        const bool branch_taken_0x1f0e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0e24) {
            ctx->pc = 0x1F0E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0E24u;
            // 0x1f0e28: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0de8;
        }
    }
    ctx->pc = 0x1F0E2Cu;
label_1f0e2c:
    // 0x1f0e2c: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x1f0e2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1f0e30:
    // 0x1f0e30: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x1f0e30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1f0e34:
    // 0x1f0e34: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x1f0e34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1f0e38:
    // 0x1f0e38: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x1f0e38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1f0e3c:
    // 0x1f0e3c: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x1f0e3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1f0e40:
    // 0x1f0e40: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x1f0e40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1f0e44:
    // 0x1f0e44: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x1f0e44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1f0e48:
    // 0x1f0e48: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1f0e48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1f0e4c:
    // 0x1f0e4c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1f0e4cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f0e50:
    // 0x1f0e50: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1f0e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1f0e54:
    // 0x1f0e54: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x1f0e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f0e58:
    // 0x1f0e58: 0x3e00008  jr          $ra
label_1f0e5c:
    if (ctx->pc == 0x1F0E5Cu) {
        ctx->pc = 0x1F0E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0E58u;
        // 0x1f0e5c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0E60u;
        goto label_fallthrough_0x1f0e58;
    }
    ctx->pc = 0x1F0E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0E58u;
        // 0x1f0e5c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f0e58:
    ctx->pc = 0x1F0E60u;
}
