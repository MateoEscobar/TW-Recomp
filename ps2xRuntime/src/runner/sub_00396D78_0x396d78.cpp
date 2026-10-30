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

// Function: sub_00396D78
// Address: 0x396d78 - 0x396e28
void sub_00396D78_0x396d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396D78_0x396d78");
#endif

    switch (ctx->pc) {
        case 0x396d78u: goto label_396d78;
        case 0x396d7cu: goto label_396d7c;
        case 0x396d80u: goto label_396d80;
        case 0x396d84u: goto label_396d84;
        case 0x396d88u: goto label_396d88;
        case 0x396d8cu: goto label_396d8c;
        case 0x396d90u: goto label_396d90;
        case 0x396d94u: goto label_396d94;
        case 0x396d98u: goto label_396d98;
        case 0x396d9cu: goto label_396d9c;
        case 0x396da0u: goto label_396da0;
        case 0x396da4u: goto label_396da4;
        case 0x396da8u: goto label_396da8;
        case 0x396dacu: goto label_396dac;
        case 0x396db0u: goto label_396db0;
        case 0x396db4u: goto label_396db4;
        case 0x396db8u: goto label_396db8;
        case 0x396dbcu: goto label_396dbc;
        case 0x396dc0u: goto label_396dc0;
        case 0x396dc4u: goto label_396dc4;
        case 0x396dc8u: goto label_396dc8;
        case 0x396dccu: goto label_396dcc;
        case 0x396dd0u: goto label_396dd0;
        case 0x396dd4u: goto label_396dd4;
        case 0x396dd8u: goto label_396dd8;
        case 0x396ddcu: goto label_396ddc;
        case 0x396de0u: goto label_396de0;
        case 0x396de4u: goto label_396de4;
        case 0x396de8u: goto label_396de8;
        case 0x396decu: goto label_396dec;
        case 0x396df0u: goto label_396df0;
        case 0x396df4u: goto label_396df4;
        case 0x396df8u: goto label_396df8;
        case 0x396dfcu: goto label_396dfc;
        case 0x396e00u: goto label_396e00;
        case 0x396e04u: goto label_396e04;
        case 0x396e08u: goto label_396e08;
        case 0x396e0cu: goto label_396e0c;
        case 0x396e10u: goto label_396e10;
        case 0x396e14u: goto label_396e14;
        case 0x396e18u: goto label_396e18;
        case 0x396e1cu: goto label_396e1c;
        case 0x396e20u: goto label_396e20;
        case 0x396e24u: goto label_396e24;
        default: break;
    }

    ctx->pc = 0x396d78u;

label_396d78:
    // 0x396d78: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x396d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_396d7c:
    // 0x396d7c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x396d7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_396d80:
    // 0x396d80: 0x8c421540  lw          $v0, 0x1540($v0)
    ctx->pc = 0x396d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5440)));
label_396d84:
    // 0x396d84: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x396d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_396d88:
    // 0x396d88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x396d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_396d8c:
    // 0x396d8c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x396d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_396d90:
    // 0x396d90: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_396d94:
    if (ctx->pc == 0x396D94u) {
        ctx->pc = 0x396D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D90u;
        // 0x396d94: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396D98u;
        goto label_396d98;
    }
    ctx->pc = 0x396D90u;
    {
        const bool branch_taken_0x396d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x396D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D90u;
        // 0x396d94: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396d90) {
            ctx->pc = 0x396E14u;
            goto label_396e14;
        }
    }
    ctx->pc = 0x396D98u;
label_396d98:
    // 0x396d98: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x396d98u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_396d9c:
    // 0x396d9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x396d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_396da0:
    // 0x396da0: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x396da0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_396da4:
    // 0x396da4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x396da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_396da8:
    // 0x396da8: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x396da8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_396dac:
    // 0x396dac: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x396dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_396db0:
    // 0x396db0: 0x40f809  jalr        $v0
label_396db4:
    if (ctx->pc == 0x396DB4u) {
        ctx->pc = 0x396DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396DB0u;
        // 0x396db4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396DB8u;
        goto label_396db8;
    }
    ctx->pc = 0x396DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x396DB8u);
        ctx->pc = 0x396DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396DB0u;
        // 0x396db4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396DB0u, 0x396DB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x396DB8u;
label_396db8:
    // 0x396db8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_396dbc:
    if (ctx->pc == 0x396DBCu) {
        ctx->pc = 0x396DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396DB8u;
        // 0x396dbc: 0x8e062b04  lw          $a2, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396DC0u;
        goto label_396dc0;
    }
    ctx->pc = 0x396DB8u;
    {
        const bool branch_taken_0x396db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x396DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396DB8u;
        // 0x396dbc: 0x8e062b04  lw          $a2, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396db8) {
            ctx->pc = 0x396E14u;
            goto label_396e14;
        }
    }
    ctx->pc = 0x396DC0u;
label_396dc0:
    // 0x396dc0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x396dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_396dc4:
    // 0x396dc4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x396dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_396dc8:
    // 0x396dc8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x396dc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_396dcc:
    // 0x396dcc: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x396dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_396dd0:
    // 0x396dd0: 0x60f809  jalr        $v1
label_396dd4:
    if (ctx->pc == 0x396DD4u) {
        ctx->pc = 0x396DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396DD0u;
        // 0x396dd4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396DD8u;
        goto label_396dd8;
    }
    ctx->pc = 0x396DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x396DD8u);
        ctx->pc = 0x396DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396DD0u;
        // 0x396dd4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396DD0u, 0x396DD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x396DD8u;
label_396dd8:
    // 0x396dd8: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x396dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_396ddc:
    // 0x396ddc: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x396ddcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_396de0:
    // 0x396de0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x396de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_396de4:
    // 0x396de4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x396de4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_396de8:
    // 0x396de8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x396de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_396dec:
    // 0x396dec: 0x60f809  jalr        $v1
label_396df0:
    if (ctx->pc == 0x396DF0u) {
        ctx->pc = 0x396DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396DECu;
        // 0x396df0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396DF4u;
        goto label_396df4;
    }
    ctx->pc = 0x396DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x396DF4u);
        ctx->pc = 0x396DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396DECu;
        // 0x396df0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396DECu, 0x396DF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x396DF4u;
label_396df4:
    // 0x396df4: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x396df4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_396df8:
    // 0x396df8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x396df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_396dfc:
    // 0x396dfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x396dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396e00:
    // 0x396e00: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x396e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_396e04:
    // 0x396e04: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x396e04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_396e08:
    // 0x396e08: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x396e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_396e0c:
    // 0x396e0c: 0x60f809  jalr        $v1
label_396e10:
    if (ctx->pc == 0x396E10u) {
        ctx->pc = 0x396E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396E0Cu;
        // 0x396e10: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396E14u;
        goto label_396e14;
    }
    ctx->pc = 0x396E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x396E14u);
        ctx->pc = 0x396E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396E0Cu;
        // 0x396e10: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396E0Cu, 0x396E14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x396E14u;
label_396e14:
    // 0x396e14: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x396e14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_396e18:
    // 0x396e18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x396e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_396e1c:
    // 0x396e1c: 0x3e00008  jr          $ra
label_396e20:
    if (ctx->pc == 0x396E20u) {
        ctx->pc = 0x396E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396E1Cu;
        // 0x396e20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396E24u;
        goto label_396e24;
    }
    ctx->pc = 0x396E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396E1Cu;
        // 0x396e20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396E24u;
label_396e24:
    // 0x396e24: 0x0  nop
    ctx->pc = 0x396e24u;
    // NOP
    ctx->pc = 0x396e28u;
}
