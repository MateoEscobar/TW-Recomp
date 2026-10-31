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

// Function: sub_001FDAF8
// Address: 0x1fdaf8 - 0x1fdc10
void sub_001FDAF8_0x1fdaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDAF8_0x1fdaf8");
#endif

    switch (ctx->pc) {
        case 0x1fdaf8u: goto label_1fdaf8;
        case 0x1fdafcu: goto label_1fdafc;
        case 0x1fdb00u: goto label_1fdb00;
        case 0x1fdb04u: goto label_1fdb04;
        case 0x1fdb08u: goto label_1fdb08;
        case 0x1fdb0cu: goto label_1fdb0c;
        case 0x1fdb10u: goto label_1fdb10;
        case 0x1fdb14u: goto label_1fdb14;
        case 0x1fdb18u: goto label_1fdb18;
        case 0x1fdb1cu: goto label_1fdb1c;
        case 0x1fdb20u: goto label_1fdb20;
        case 0x1fdb24u: goto label_1fdb24;
        case 0x1fdb28u: goto label_1fdb28;
        case 0x1fdb2cu: goto label_1fdb2c;
        case 0x1fdb30u: goto label_1fdb30;
        case 0x1fdb34u: goto label_1fdb34;
        case 0x1fdb38u: goto label_1fdb38;
        case 0x1fdb3cu: goto label_1fdb3c;
        case 0x1fdb40u: goto label_1fdb40;
        case 0x1fdb44u: goto label_1fdb44;
        case 0x1fdb48u: goto label_1fdb48;
        case 0x1fdb4cu: goto label_1fdb4c;
        case 0x1fdb50u: goto label_1fdb50;
        case 0x1fdb54u: goto label_1fdb54;
        case 0x1fdb58u: goto label_1fdb58;
        case 0x1fdb5cu: goto label_1fdb5c;
        case 0x1fdb60u: goto label_1fdb60;
        case 0x1fdb64u: goto label_1fdb64;
        case 0x1fdb68u: goto label_1fdb68;
        case 0x1fdb6cu: goto label_1fdb6c;
        case 0x1fdb70u: goto label_1fdb70;
        case 0x1fdb74u: goto label_1fdb74;
        case 0x1fdb78u: goto label_1fdb78;
        case 0x1fdb7cu: goto label_1fdb7c;
        case 0x1fdb80u: goto label_1fdb80;
        case 0x1fdb84u: goto label_1fdb84;
        case 0x1fdb88u: goto label_1fdb88;
        case 0x1fdb8cu: goto label_1fdb8c;
        case 0x1fdb90u: goto label_1fdb90;
        case 0x1fdb94u: goto label_1fdb94;
        case 0x1fdb98u: goto label_1fdb98;
        case 0x1fdb9cu: goto label_1fdb9c;
        case 0x1fdba0u: goto label_1fdba0;
        case 0x1fdba4u: goto label_1fdba4;
        case 0x1fdba8u: goto label_1fdba8;
        case 0x1fdbacu: goto label_1fdbac;
        case 0x1fdbb0u: goto label_1fdbb0;
        case 0x1fdbb4u: goto label_1fdbb4;
        case 0x1fdbb8u: goto label_1fdbb8;
        case 0x1fdbbcu: goto label_1fdbbc;
        case 0x1fdbc0u: goto label_1fdbc0;
        case 0x1fdbc4u: goto label_1fdbc4;
        case 0x1fdbc8u: goto label_1fdbc8;
        case 0x1fdbccu: goto label_1fdbcc;
        case 0x1fdbd0u: goto label_1fdbd0;
        case 0x1fdbd4u: goto label_1fdbd4;
        case 0x1fdbd8u: goto label_1fdbd8;
        case 0x1fdbdcu: goto label_1fdbdc;
        case 0x1fdbe0u: goto label_1fdbe0;
        case 0x1fdbe4u: goto label_1fdbe4;
        case 0x1fdbe8u: goto label_1fdbe8;
        case 0x1fdbecu: goto label_1fdbec;
        case 0x1fdbf0u: goto label_1fdbf0;
        case 0x1fdbf4u: goto label_1fdbf4;
        case 0x1fdbf8u: goto label_1fdbf8;
        case 0x1fdbfcu: goto label_1fdbfc;
        case 0x1fdc00u: goto label_1fdc00;
        case 0x1fdc04u: goto label_1fdc04;
        case 0x1fdc08u: goto label_1fdc08;
        case 0x1fdc0cu: goto label_1fdc0c;
        default: break;
    }

    ctx->pc = 0x1fdaf8u;

label_1fdaf8:
    // 0x1fdaf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fdaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fdafc:
    // 0x1fdafc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fdafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1fdb00:
    // 0x1fdb00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fdb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fdb04:
    // 0x1fdb04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fdb04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fdb08:
    // 0x1fdb08: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fdb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fdb0c:
    // 0x1fdb0c: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1fdb0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1fdb10:
    // 0x1fdb10: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1fdb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1fdb14:
    // 0x1fdb14: 0x40f809  jalr        $v0
label_1fdb18:
    if (ctx->pc == 0x1FDB18u) {
        ctx->pc = 0x1FDB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB14u;
        // 0x1fdb18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDB1Cu;
        goto label_1fdb1c;
    }
    ctx->pc = 0x1FDB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FDB1Cu);
        ctx->pc = 0x1FDB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB14u;
        // 0x1fdb18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDB14u, 0x1FDB1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FDB1Cu;
label_1fdb1c:
    // 0x1fdb1c: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
label_1fdb20:
    if (ctx->pc == 0x1FDB20u) {
        ctx->pc = 0x1FDB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB1Cu;
        // 0x1fdb20: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDB24u;
        goto label_1fdb24;
    }
    ctx->pc = 0x1FDB1Cu;
    {
        const bool branch_taken_0x1fdb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdb1c) {
            ctx->pc = 0x1FDB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDB1Cu;
            // 0x1fdb20: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDC04u;
            goto label_1fdc04;
        }
    }
    ctx->pc = 0x1FDB24u;
label_1fdb24:
    // 0x1fdb24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fdb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fdb28:
    // 0x1fdb28: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1fdb28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1fdb2c:
    // 0x1fdb2c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1fdb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1fdb30:
    // 0x1fdb30: 0x40f809  jalr        $v0
label_1fdb34:
    if (ctx->pc == 0x1FDB34u) {
        ctx->pc = 0x1FDB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB30u;
        // 0x1fdb34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDB38u;
        goto label_1fdb38;
    }
    ctx->pc = 0x1FDB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FDB38u);
        ctx->pc = 0x1FDB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB30u;
        // 0x1fdb34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDB30u, 0x1FDB38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FDB38u;
label_1fdb38:
    // 0x1fdb38: 0x50400032  beql        $v0, $zero, . + 4 + (0x32 << 2)
label_1fdb3c:
    if (ctx->pc == 0x1FDB3Cu) {
        ctx->pc = 0x1FDB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB38u;
        // 0x1fdb3c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDB40u;
        goto label_1fdb40;
    }
    ctx->pc = 0x1FDB38u;
    {
        const bool branch_taken_0x1fdb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdb38) {
            ctx->pc = 0x1FDB3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDB38u;
            // 0x1fdb3c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDC04u;
            goto label_1fdc04;
        }
    }
    ctx->pc = 0x1FDB40u;
label_1fdb40:
    // 0x1fdb40: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x1fdb40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_1fdb44:
    // 0x1fdb44: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fdb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fdb48:
    // 0x1fdb48: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1fdb48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1fdb4c:
    // 0x1fdb4c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1fdb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1fdb50:
    // 0x1fdb50: 0x60f809  jalr        $v1
label_1fdb54:
    if (ctx->pc == 0x1FDB54u) {
        ctx->pc = 0x1FDB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB50u;
        // 0x1fdb54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDB58u;
        goto label_1fdb58;
    }
    ctx->pc = 0x1FDB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FDB58u);
        ctx->pc = 0x1FDB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB50u;
        // 0x1fdb54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDB50u, 0x1FDB58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FDB58u;
label_1fdb58:
    // 0x1fdb58: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x1fdb58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_1fdb5c:
    // 0x1fdb5c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fdb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fdb60:
    // 0x1fdb60: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1fdb60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1fdb64:
    // 0x1fdb64: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1fdb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1fdb68:
    // 0x1fdb68: 0x60f809  jalr        $v1
label_1fdb6c:
    if (ctx->pc == 0x1FDB6Cu) {
        ctx->pc = 0x1FDB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB68u;
        // 0x1fdb6c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDB70u;
        goto label_1fdb70;
    }
    ctx->pc = 0x1FDB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FDB70u);
        ctx->pc = 0x1FDB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB68u;
        // 0x1fdb6c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDB68u, 0x1FDB70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FDB70u;
label_1fdb70:
    // 0x1fdb70: 0x8e0500b4  lw          $a1, 0xB4($s0)
    ctx->pc = 0x1fdb70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_1fdb74:
    // 0x1fdb74: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fdb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fdb78:
    // 0x1fdb78: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1fdb78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1fdb7c:
    // 0x1fdb7c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1fdb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1fdb80:
    // 0x1fdb80: 0x60f809  jalr        $v1
label_1fdb84:
    if (ctx->pc == 0x1FDB84u) {
        ctx->pc = 0x1FDB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB80u;
        // 0x1fdb84: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDB88u;
        goto label_1fdb88;
    }
    ctx->pc = 0x1FDB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FDB88u);
        ctx->pc = 0x1FDB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB80u;
        // 0x1fdb84: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDB80u, 0x1FDB88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FDB88u;
label_1fdb88:
    // 0x1fdb88: 0x8e0500b8  lw          $a1, 0xB8($s0)
    ctx->pc = 0x1fdb88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_1fdb8c:
    // 0x1fdb8c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fdb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fdb90:
    // 0x1fdb90: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1fdb90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1fdb94:
    // 0x1fdb94: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1fdb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1fdb98:
    // 0x1fdb98: 0x60f809  jalr        $v1
label_1fdb9c:
    if (ctx->pc == 0x1FDB9Cu) {
        ctx->pc = 0x1FDB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB98u;
        // 0x1fdb9c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDBA0u;
        goto label_1fdba0;
    }
    ctx->pc = 0x1FDB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FDBA0u);
        ctx->pc = 0x1FDB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB98u;
        // 0x1fdb9c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDB98u, 0x1FDBA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FDBA0u;
label_1fdba0:
    // 0x1fdba0: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x1fdba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_1fdba4:
    // 0x1fdba4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fdba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fdba8:
    // 0x1fdba8: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1fdba8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1fdbac:
    // 0x1fdbac: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1fdbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1fdbb0:
    // 0x1fdbb0: 0x60f809  jalr        $v1
label_1fdbb4:
    if (ctx->pc == 0x1FDBB4u) {
        ctx->pc = 0x1FDBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDBB0u;
        // 0x1fdbb4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDBB8u;
        goto label_1fdbb8;
    }
    ctx->pc = 0x1FDBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FDBB8u);
        ctx->pc = 0x1FDBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDBB0u;
        // 0x1fdbb4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDBB0u, 0x1FDBB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FDBB8u;
label_1fdbb8:
    // 0x1fdbb8: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x1fdbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_1fdbbc:
    // 0x1fdbbc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fdbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fdbc0:
    // 0x1fdbc0: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1fdbc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1fdbc4:
    // 0x1fdbc4: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1fdbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1fdbc8:
    // 0x1fdbc8: 0x60f809  jalr        $v1
label_1fdbcc:
    if (ctx->pc == 0x1FDBCCu) {
        ctx->pc = 0x1FDBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDBC8u;
        // 0x1fdbcc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDBD0u;
        goto label_1fdbd0;
    }
    ctx->pc = 0x1FDBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FDBD0u);
        ctx->pc = 0x1FDBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDBC8u;
        // 0x1fdbcc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDBC8u, 0x1FDBD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FDBD0u;
label_1fdbd0:
    // 0x1fdbd0: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x1fdbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_1fdbd4:
    // 0x1fdbd4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fdbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fdbd8:
    // 0x1fdbd8: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1fdbd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1fdbdc:
    // 0x1fdbdc: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1fdbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1fdbe0:
    // 0x1fdbe0: 0x60f809  jalr        $v1
label_1fdbe4:
    if (ctx->pc == 0x1FDBE4u) {
        ctx->pc = 0x1FDBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDBE0u;
        // 0x1fdbe4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDBE8u;
        goto label_1fdbe8;
    }
    ctx->pc = 0x1FDBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FDBE8u);
        ctx->pc = 0x1FDBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDBE0u;
        // 0x1fdbe4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDBE0u, 0x1FDBE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FDBE8u;
label_1fdbe8:
    // 0x1fdbe8: 0x8e0500bc  lw          $a1, 0xBC($s0)
    ctx->pc = 0x1fdbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_1fdbec:
    // 0x1fdbec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fdbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fdbf0:
    // 0x1fdbf0: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1fdbf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1fdbf4:
    // 0x1fdbf4: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1fdbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1fdbf8:
    // 0x1fdbf8: 0x60f809  jalr        $v1
label_1fdbfc:
    if (ctx->pc == 0x1FDBFCu) {
        ctx->pc = 0x1FDBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDBF8u;
        // 0x1fdbfc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDC00u;
        goto label_1fdc00;
    }
    ctx->pc = 0x1FDBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FDC00u);
        ctx->pc = 0x1FDBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDBF8u;
        // 0x1fdbfc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDBF8u, 0x1FDC00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FDC00u;
label_1fdc00:
    // 0x1fdc00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fdc00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fdc04:
    // 0x1fdc04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fdc04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fdc08:
    // 0x1fdc08: 0x3e00008  jr          $ra
label_1fdc0c:
    if (ctx->pc == 0x1FDC0Cu) {
        ctx->pc = 0x1FDC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDC08u;
        // 0x1fdc0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDC10u;
        goto label_fallthrough_0x1fdc08;
    }
    ctx->pc = 0x1FDC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDC08u;
        // 0x1fdc0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fdc08:
    ctx->pc = 0x1FDC10u;
}
