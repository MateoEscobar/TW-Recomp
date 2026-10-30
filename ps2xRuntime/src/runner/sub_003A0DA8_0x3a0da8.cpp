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

// Function: sub_003A0DA8
// Address: 0x3a0da8 - 0x3a0e48
void sub_003A0DA8_0x3a0da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0DA8_0x3a0da8");
#endif

    switch (ctx->pc) {
        case 0x3a0da8u: goto label_3a0da8;
        case 0x3a0dacu: goto label_3a0dac;
        case 0x3a0db0u: goto label_3a0db0;
        case 0x3a0db4u: goto label_3a0db4;
        case 0x3a0db8u: goto label_3a0db8;
        case 0x3a0dbcu: goto label_3a0dbc;
        case 0x3a0dc0u: goto label_3a0dc0;
        case 0x3a0dc4u: goto label_3a0dc4;
        case 0x3a0dc8u: goto label_3a0dc8;
        case 0x3a0dccu: goto label_3a0dcc;
        case 0x3a0dd0u: goto label_3a0dd0;
        case 0x3a0dd4u: goto label_3a0dd4;
        case 0x3a0dd8u: goto label_3a0dd8;
        case 0x3a0ddcu: goto label_3a0ddc;
        case 0x3a0de0u: goto label_3a0de0;
        case 0x3a0de4u: goto label_3a0de4;
        case 0x3a0de8u: goto label_3a0de8;
        case 0x3a0decu: goto label_3a0dec;
        case 0x3a0df0u: goto label_3a0df0;
        case 0x3a0df4u: goto label_3a0df4;
        case 0x3a0df8u: goto label_3a0df8;
        case 0x3a0dfcu: goto label_3a0dfc;
        case 0x3a0e00u: goto label_3a0e00;
        case 0x3a0e04u: goto label_3a0e04;
        case 0x3a0e08u: goto label_3a0e08;
        case 0x3a0e0cu: goto label_3a0e0c;
        case 0x3a0e10u: goto label_3a0e10;
        case 0x3a0e14u: goto label_3a0e14;
        case 0x3a0e18u: goto label_3a0e18;
        case 0x3a0e1cu: goto label_3a0e1c;
        case 0x3a0e20u: goto label_3a0e20;
        case 0x3a0e24u: goto label_3a0e24;
        case 0x3a0e28u: goto label_3a0e28;
        case 0x3a0e2cu: goto label_3a0e2c;
        case 0x3a0e30u: goto label_3a0e30;
        case 0x3a0e34u: goto label_3a0e34;
        case 0x3a0e38u: goto label_3a0e38;
        case 0x3a0e3cu: goto label_3a0e3c;
        case 0x3a0e40u: goto label_3a0e40;
        case 0x3a0e44u: goto label_3a0e44;
        default: break;
    }

    ctx->pc = 0x3a0da8u;

label_3a0da8:
    // 0x3a0da8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a0da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3a0dac:
    // 0x3a0dac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a0dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3a0db0:
    // 0x3a0db0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a0db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a0db4:
    // 0x3a0db4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a0db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a0db8:
    // 0x3a0db8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a0db8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a0dbc:
    // 0x3a0dbc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3a0dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3a0dc0:
    // 0x3a0dc0: 0x8c442b28  lw          $a0, 0x2B28($v0)
    ctx->pc = 0x3a0dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11048)));
label_3a0dc4:
    // 0x3a0dc4: 0x1483001a  bne         $a0, $v1, . + 4 + (0x1A << 2)
label_3a0dc8:
    if (ctx->pc == 0x3A0DC8u) {
        ctx->pc = 0x3A0DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0DC4u;
        // 0x3a0dc8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0DCCu;
        goto label_3a0dcc;
    }
    ctx->pc = 0x3A0DC4u;
    {
        const bool branch_taken_0x3a0dc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A0DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0DC4u;
        // 0x3a0dc8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0dc4) {
            ctx->pc = 0x3A0E30u;
            goto label_3a0e30;
        }
    }
    ctx->pc = 0x3A0DCCu;
label_3a0dcc:
    // 0x3a0dcc: 0x8e2500f8  lw          $a1, 0xF8($s1)
    ctx->pc = 0x3a0dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
label_3a0dd0:
    // 0x3a0dd0: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
label_3a0dd4:
    if (ctx->pc == 0x3A0DD4u) {
        ctx->pc = 0x3A0DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0DD0u;
        // 0x3a0dd4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0DD8u;
        goto label_3a0dd8;
    }
    ctx->pc = 0x3A0DD0u;
    {
        const bool branch_taken_0x3a0dd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0DD0u;
        // 0x3a0dd4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0dd0) {
            ctx->pc = 0x3A0E30u;
            goto label_3a0e30;
        }
    }
    ctx->pc = 0x3A0DD8u;
label_3a0dd8:
    // 0x3a0dd8: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x3a0dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_3a0ddc:
    // 0x3a0ddc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3a0ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3a0de0:
    // 0x3a0de0: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x3a0de0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_3a0de4:
    // 0x3a0de4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x3a0de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_3a0de8:
    // 0x3a0de8: 0x40f809  jalr        $v0
label_3a0dec:
    if (ctx->pc == 0x3A0DECu) {
        ctx->pc = 0x3A0DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0DE8u;
        // 0x3a0dec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0DF0u;
        goto label_3a0df0;
    }
    ctx->pc = 0x3A0DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A0DF0u);
        ctx->pc = 0x3A0DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0DE8u;
        // 0x3a0dec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0DE8u, 0x3A0DF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A0DF0u;
label_3a0df0:
    // 0x3a0df0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_3a0df4:
    if (ctx->pc == 0x3A0DF4u) {
        ctx->pc = 0x3A0DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0DF0u;
        // 0x3a0df4: 0x8e062b04  lw          $a2, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0DF8u;
        goto label_3a0df8;
    }
    ctx->pc = 0x3A0DF0u;
    {
        const bool branch_taken_0x3a0df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0DF0u;
        // 0x3a0df4: 0x8e062b04  lw          $a2, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0df0) {
            ctx->pc = 0x3A0E30u;
            goto label_3a0e30;
        }
    }
    ctx->pc = 0x3A0DF8u;
label_3a0df8:
    // 0x3a0df8: 0x8e25009c  lw          $a1, 0x9C($s1)
    ctx->pc = 0x3a0df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_3a0dfc:
    // 0x3a0dfc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3a0dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3a0e00:
    // 0x3a0e00: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3a0e00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3a0e04:
    // 0x3a0e04: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3a0e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3a0e08:
    // 0x3a0e08: 0x60f809  jalr        $v1
label_3a0e0c:
    if (ctx->pc == 0x3A0E0Cu) {
        ctx->pc = 0x3A0E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0E08u;
        // 0x3a0e0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0E10u;
        goto label_3a0e10;
    }
    ctx->pc = 0x3A0E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A0E10u);
        ctx->pc = 0x3A0E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0E08u;
        // 0x3a0e0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0E08u, 0x3A0E10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A0E10u;
label_3a0e10:
    // 0x3a0e10: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x3a0e10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_3a0e14:
    // 0x3a0e14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a0e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a0e18:
    // 0x3a0e18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a0e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a0e1c:
    // 0x3a0e1c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3a0e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3a0e20:
    // 0x3a0e20: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x3a0e20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_3a0e24:
    // 0x3a0e24: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x3a0e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_3a0e28:
    // 0x3a0e28: 0x60f809  jalr        $v1
label_3a0e2c:
    if (ctx->pc == 0x3A0E2Cu) {
        ctx->pc = 0x3A0E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0E28u;
        // 0x3a0e2c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0E30u;
        goto label_3a0e30;
    }
    ctx->pc = 0x3A0E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A0E30u);
        ctx->pc = 0x3A0E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0E28u;
        // 0x3a0e2c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0E28u, 0x3A0E30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A0E30u;
label_3a0e30:
    // 0x3a0e30: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3a0e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a0e34:
    // 0x3a0e34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a0e34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a0e38:
    // 0x3a0e38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a0e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a0e3c:
    // 0x3a0e3c: 0x3e00008  jr          $ra
label_3a0e40:
    if (ctx->pc == 0x3A0E40u) {
        ctx->pc = 0x3A0E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0E3Cu;
        // 0x3a0e40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0E44u;
        goto label_3a0e44;
    }
    ctx->pc = 0x3A0E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0E3Cu;
        // 0x3a0e40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0E44u;
label_3a0e44:
    // 0x3a0e44: 0x0  nop
    ctx->pc = 0x3a0e44u;
    // NOP
    ctx->pc = 0x3a0e48u;
}
