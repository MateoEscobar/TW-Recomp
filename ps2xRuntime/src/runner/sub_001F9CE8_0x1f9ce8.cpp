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

// Function: sub_001F9CE8
// Address: 0x1f9ce8 - 0x1f9d78
void sub_001F9CE8_0x1f9ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9CE8_0x1f9ce8");
#endif

    switch (ctx->pc) {
        case 0x1f9ce8u: goto label_1f9ce8;
        case 0x1f9cecu: goto label_1f9cec;
        case 0x1f9cf0u: goto label_1f9cf0;
        case 0x1f9cf4u: goto label_1f9cf4;
        case 0x1f9cf8u: goto label_1f9cf8;
        case 0x1f9cfcu: goto label_1f9cfc;
        case 0x1f9d00u: goto label_1f9d00;
        case 0x1f9d04u: goto label_1f9d04;
        case 0x1f9d08u: goto label_1f9d08;
        case 0x1f9d0cu: goto label_1f9d0c;
        case 0x1f9d10u: goto label_1f9d10;
        case 0x1f9d14u: goto label_1f9d14;
        case 0x1f9d18u: goto label_1f9d18;
        case 0x1f9d1cu: goto label_1f9d1c;
        case 0x1f9d20u: goto label_1f9d20;
        case 0x1f9d24u: goto label_1f9d24;
        case 0x1f9d28u: goto label_1f9d28;
        case 0x1f9d2cu: goto label_1f9d2c;
        case 0x1f9d30u: goto label_1f9d30;
        case 0x1f9d34u: goto label_1f9d34;
        case 0x1f9d38u: goto label_1f9d38;
        case 0x1f9d3cu: goto label_1f9d3c;
        case 0x1f9d40u: goto label_1f9d40;
        case 0x1f9d44u: goto label_1f9d44;
        case 0x1f9d48u: goto label_1f9d48;
        case 0x1f9d4cu: goto label_1f9d4c;
        case 0x1f9d50u: goto label_1f9d50;
        case 0x1f9d54u: goto label_1f9d54;
        case 0x1f9d58u: goto label_1f9d58;
        case 0x1f9d5cu: goto label_1f9d5c;
        case 0x1f9d60u: goto label_1f9d60;
        case 0x1f9d64u: goto label_1f9d64;
        case 0x1f9d68u: goto label_1f9d68;
        case 0x1f9d6cu: goto label_1f9d6c;
        case 0x1f9d70u: goto label_1f9d70;
        case 0x1f9d74u: goto label_1f9d74;
        default: break;
    }

    ctx->pc = 0x1f9ce8u;

label_1f9ce8:
    // 0x1f9ce8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f9ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f9cec:
    // 0x1f9cec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f9cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1f9cf0:
    // 0x1f9cf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f9cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f9cf4:
    // 0x1f9cf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f9cf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f9cf8:
    // 0x1f9cf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f9cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f9cfc:
    // 0x1f9cfc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1f9cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f9d00:
    // 0x1f9d00: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_1f9d04:
    if (ctx->pc == 0x1F9D04u) {
        ctx->pc = 0x1F9D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D00u;
        // 0x1f9d04: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9D08u;
        goto label_1f9d08;
    }
    ctx->pc = 0x1F9D00u;
    {
        const bool branch_taken_0x1f9d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9d00) {
            ctx->pc = 0x1F9D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9D00u;
            // 0x1f9d04: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9D64u;
            goto label_1f9d64;
        }
    }
    ctx->pc = 0x1F9D08u;
label_1f9d08:
    // 0x1f9d08: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1f9d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f9d0c:
    // 0x1f9d0c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1f9d10:
    if (ctx->pc == 0x1F9D10u) {
        ctx->pc = 0x1F9D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D0Cu;
        // 0x1f9d10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9D14u;
        goto label_1f9d14;
    }
    ctx->pc = 0x1F9D0Cu;
    {
        const bool branch_taken_0x1f9d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D0Cu;
        // 0x1f9d10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d0c) {
            ctx->pc = 0x1F9D34u;
            goto label_1f9d34;
        }
    }
    ctx->pc = 0x1F9D14u;
label_1f9d14:
    // 0x1f9d14: 0xc06a3aa  jal         func_1A8EA8
label_1f9d18:
    if (ctx->pc == 0x1F9D18u) {
        ctx->pc = 0x1F9D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D14u;
        // 0x1f9d18: 0x8e050060  lw          $a1, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9D1Cu;
        goto label_1f9d1c;
    }
    ctx->pc = 0x1F9D14u;
    SET_GPR_U32(ctx, 31, 0x1F9D1Cu);
    ctx->pc = 0x1F9D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9D14u;
    // 0x1f9d18: 0x8e050060  lw          $a1, 0x60($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1F9D14u, 0x1F9D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9D1Cu;
label_1f9d1c:
    // 0x1f9d1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1f9d20:
    if (ctx->pc == 0x1F9D20u) {
        ctx->pc = 0x1F9D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D1Cu;
        // 0x1f9d20: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9D24u;
        goto label_1f9d24;
    }
    ctx->pc = 0x1F9D1Cu;
    {
        const bool branch_taken_0x1f9d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D1Cu;
        // 0x1f9d20: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d1c) {
            ctx->pc = 0x1F9D34u;
            goto label_1f9d34;
        }
    }
    ctx->pc = 0x1F9D24u;
label_1f9d24:
    // 0x1f9d24: 0x8e0500fc  lw          $a1, 0xFC($s0)
    ctx->pc = 0x1f9d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1f9d28:
    // 0x1f9d28: 0xc0440a8  jal         func_1102A0
label_1f9d2c:
    if (ctx->pc == 0x1F9D2Cu) {
        ctx->pc = 0x1F9D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D28u;
        // 0x1f9d2c: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9D30u;
        goto label_1f9d30;
    }
    ctx->pc = 0x1F9D28u;
    SET_GPR_U32(ctx, 31, 0x1F9D30u);
    ctx->pc = 0x1F9D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9D28u;
    // 0x1f9d2c: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1102A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1102A0u, 0x1F9D28u, 0x1F9D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9D30u;
label_1f9d30:
    // 0x1f9d30: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x1f9d30u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f9d34:
    // 0x1f9d34: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_1f9d38:
    if (ctx->pc == 0x1F9D38u) {
        ctx->pc = 0x1F9D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D34u;
        // 0x1f9d38: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9D3Cu;
        goto label_1f9d3c;
    }
    ctx->pc = 0x1F9D34u;
    {
        const bool branch_taken_0x1f9d34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D34u;
        // 0x1f9d38: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d34) {
            ctx->pc = 0x1F9D5Cu;
            goto label_1f9d5c;
        }
    }
    ctx->pc = 0x1F9D3Cu;
label_1f9d3c:
    // 0x1f9d3c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f9d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f9d40:
    // 0x1f9d40: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1f9d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1f9d44:
    // 0x1f9d44: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f9d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f9d48:
    // 0x1f9d48: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1f9d48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1f9d4c:
    // 0x1f9d4c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1f9d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1f9d50:
    // 0x1f9d50: 0x40f809  jalr        $v0
label_1f9d54:
    if (ctx->pc == 0x1F9D54u) {
        ctx->pc = 0x1F9D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D50u;
        // 0x1f9d54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9D58u;
        goto label_1f9d58;
    }
    ctx->pc = 0x1F9D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F9D58u);
        ctx->pc = 0x1F9D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D50u;
        // 0x1f9d54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9D50u, 0x1F9D58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F9D58u;
label_1f9d58:
    // 0x1f9d58: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1f9d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1f9d5c:
    // 0x1f9d5c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1f9d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f9d60:
    // 0x1f9d60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f9d60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f9d64:
    // 0x1f9d64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f9d64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f9d68:
    // 0x1f9d68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f9d6c:
    // 0x1f9d6c: 0x3e00008  jr          $ra
label_1f9d70:
    if (ctx->pc == 0x1F9D70u) {
        ctx->pc = 0x1F9D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D6Cu;
        // 0x1f9d70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9D74u;
        goto label_1f9d74;
    }
    ctx->pc = 0x1F9D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D6Cu;
        // 0x1f9d70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9D74u;
label_1f9d74:
    // 0x1f9d74: 0x0  nop
    ctx->pc = 0x1f9d74u;
    // NOP
    ctx->pc = 0x1f9d78u;
}
