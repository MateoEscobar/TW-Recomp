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

// Function: sub_00216D48
// Address: 0x216d48 - 0x216e00
void sub_00216D48_0x216d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216D48_0x216d48");
#endif

    switch (ctx->pc) {
        case 0x216d48u: goto label_216d48;
        case 0x216d4cu: goto label_216d4c;
        case 0x216d50u: goto label_216d50;
        case 0x216d54u: goto label_216d54;
        case 0x216d58u: goto label_216d58;
        case 0x216d5cu: goto label_216d5c;
        case 0x216d60u: goto label_216d60;
        case 0x216d64u: goto label_216d64;
        case 0x216d68u: goto label_216d68;
        case 0x216d6cu: goto label_216d6c;
        case 0x216d70u: goto label_216d70;
        case 0x216d74u: goto label_216d74;
        case 0x216d78u: goto label_216d78;
        case 0x216d7cu: goto label_216d7c;
        case 0x216d80u: goto label_216d80;
        case 0x216d84u: goto label_216d84;
        case 0x216d88u: goto label_216d88;
        case 0x216d8cu: goto label_216d8c;
        case 0x216d90u: goto label_216d90;
        case 0x216d94u: goto label_216d94;
        case 0x216d98u: goto label_216d98;
        case 0x216d9cu: goto label_216d9c;
        case 0x216da0u: goto label_216da0;
        case 0x216da4u: goto label_216da4;
        case 0x216da8u: goto label_216da8;
        case 0x216dacu: goto label_216dac;
        case 0x216db0u: goto label_216db0;
        case 0x216db4u: goto label_216db4;
        case 0x216db8u: goto label_216db8;
        case 0x216dbcu: goto label_216dbc;
        case 0x216dc0u: goto label_216dc0;
        case 0x216dc4u: goto label_216dc4;
        case 0x216dc8u: goto label_216dc8;
        case 0x216dccu: goto label_216dcc;
        case 0x216dd0u: goto label_216dd0;
        case 0x216dd4u: goto label_216dd4;
        case 0x216dd8u: goto label_216dd8;
        case 0x216ddcu: goto label_216ddc;
        case 0x216de0u: goto label_216de0;
        case 0x216de4u: goto label_216de4;
        case 0x216de8u: goto label_216de8;
        case 0x216decu: goto label_216dec;
        case 0x216df0u: goto label_216df0;
        case 0x216df4u: goto label_216df4;
        case 0x216df8u: goto label_216df8;
        case 0x216dfcu: goto label_216dfc;
        default: break;
    }

    ctx->pc = 0x216d48u;

label_216d48:
    // 0x216d48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x216d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_216d4c:
    // 0x216d4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x216d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_216d50:
    // 0x216d50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x216d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_216d54:
    // 0x216d54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x216d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_216d58:
    // 0x216d58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x216d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_216d5c:
    // 0x216d5c: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x216d5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_216d60:
    // 0x216d60: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x216d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_216d64:
    // 0x216d64: 0x40f809  jalr        $v0
label_216d68:
    if (ctx->pc == 0x216D68u) {
        ctx->pc = 0x216D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216D64u;
        // 0x216d68: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216D6Cu;
        goto label_216d6c;
    }
    ctx->pc = 0x216D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x216D6Cu);
        ctx->pc = 0x216D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216D64u;
        // 0x216d68: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216D64u, 0x216D6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216D6Cu;
label_216d6c:
    // 0x216d6c: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_216d70:
    if (ctx->pc == 0x216D70u) {
        ctx->pc = 0x216D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216D6Cu;
        // 0x216d70: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216D74u;
        goto label_216d74;
    }
    ctx->pc = 0x216D6Cu;
    {
        const bool branch_taken_0x216d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216d6c) {
            ctx->pc = 0x216D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216D6Cu;
            // 0x216d70: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216DF4u;
            goto label_216df4;
        }
    }
    ctx->pc = 0x216D74u;
label_216d74:
    // 0x216d74: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x216d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_216d78:
    // 0x216d78: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x216d78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_216d7c:
    // 0x216d7c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x216d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_216d80:
    // 0x216d80: 0x40f809  jalr        $v0
label_216d84:
    if (ctx->pc == 0x216D84u) {
        ctx->pc = 0x216D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216D80u;
        // 0x216d84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216D88u;
        goto label_216d88;
    }
    ctx->pc = 0x216D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x216D88u);
        ctx->pc = 0x216D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216D80u;
        // 0x216d84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216D80u, 0x216D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216D88u;
label_216d88:
    // 0x216d88: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_216d8c:
    if (ctx->pc == 0x216D8Cu) {
        ctx->pc = 0x216D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216D88u;
        // 0x216d8c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216D90u;
        goto label_216d90;
    }
    ctx->pc = 0x216D88u;
    {
        const bool branch_taken_0x216d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216d88) {
            ctx->pc = 0x216D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216D88u;
            // 0x216d8c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216DF4u;
            goto label_216df4;
        }
    }
    ctx->pc = 0x216D90u;
label_216d90:
    // 0x216d90: 0x8e050078  lw          $a1, 0x78($s0)
    ctx->pc = 0x216d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_216d94:
    // 0x216d94: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x216d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_216d98:
    // 0x216d98: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x216d98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_216d9c:
    // 0x216d9c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x216d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_216da0:
    // 0x216da0: 0x60f809  jalr        $v1
label_216da4:
    if (ctx->pc == 0x216DA4u) {
        ctx->pc = 0x216DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216DA0u;
        // 0x216da4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216DA8u;
        goto label_216da8;
    }
    ctx->pc = 0x216DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x216DA8u);
        ctx->pc = 0x216DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216DA0u;
        // 0x216da4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216DA0u, 0x216DA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216DA8u;
label_216da8:
    // 0x216da8: 0x8e050084  lw          $a1, 0x84($s0)
    ctx->pc = 0x216da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_216dac:
    // 0x216dac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x216dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_216db0:
    // 0x216db0: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x216db0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_216db4:
    // 0x216db4: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x216db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_216db8:
    // 0x216db8: 0x60f809  jalr        $v1
label_216dbc:
    if (ctx->pc == 0x216DBCu) {
        ctx->pc = 0x216DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216DB8u;
        // 0x216dbc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216DC0u;
        goto label_216dc0;
    }
    ctx->pc = 0x216DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x216DC0u);
        ctx->pc = 0x216DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216DB8u;
        // 0x216dbc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216DB8u, 0x216DC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216DC0u;
label_216dc0:
    // 0x216dc0: 0x8e050088  lw          $a1, 0x88($s0)
    ctx->pc = 0x216dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_216dc4:
    // 0x216dc4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x216dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_216dc8:
    // 0x216dc8: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x216dc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_216dcc:
    // 0x216dcc: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x216dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_216dd0:
    // 0x216dd0: 0x60f809  jalr        $v1
label_216dd4:
    if (ctx->pc == 0x216DD4u) {
        ctx->pc = 0x216DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216DD0u;
        // 0x216dd4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216DD8u;
        goto label_216dd8;
    }
    ctx->pc = 0x216DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x216DD8u);
        ctx->pc = 0x216DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216DD0u;
        // 0x216dd4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216DD0u, 0x216DD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216DD8u;
label_216dd8:
    // 0x216dd8: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x216dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_216ddc:
    // 0x216ddc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x216ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_216de0:
    // 0x216de0: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x216de0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_216de4:
    // 0x216de4: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x216de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_216de8:
    // 0x216de8: 0x60f809  jalr        $v1
label_216dec:
    if (ctx->pc == 0x216DECu) {
        ctx->pc = 0x216DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216DE8u;
        // 0x216dec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216DF0u;
        goto label_216df0;
    }
    ctx->pc = 0x216DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x216DF0u);
        ctx->pc = 0x216DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216DE8u;
        // 0x216dec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216DE8u, 0x216DF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216DF0u;
label_216df0:
    // 0x216df0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x216df0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_216df4:
    // 0x216df4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_216df8:
    // 0x216df8: 0x3e00008  jr          $ra
label_216dfc:
    if (ctx->pc == 0x216DFCu) {
        ctx->pc = 0x216DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216DF8u;
        // 0x216dfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216E00u;
        goto label_fallthrough_0x216df8;
    }
    ctx->pc = 0x216DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216DF8u;
        // 0x216dfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x216df8:
    ctx->pc = 0x216E00u;
}
