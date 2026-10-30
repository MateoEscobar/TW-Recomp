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

// Function: sub_0020AEE8
// Address: 0x20aee8 - 0x20af80
void sub_0020AEE8_0x20aee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AEE8_0x20aee8");
#endif

    switch (ctx->pc) {
        case 0x20aee8u: goto label_20aee8;
        case 0x20aeecu: goto label_20aeec;
        case 0x20aef0u: goto label_20aef0;
        case 0x20aef4u: goto label_20aef4;
        case 0x20aef8u: goto label_20aef8;
        case 0x20aefcu: goto label_20aefc;
        case 0x20af00u: goto label_20af00;
        case 0x20af04u: goto label_20af04;
        case 0x20af08u: goto label_20af08;
        case 0x20af0cu: goto label_20af0c;
        case 0x20af10u: goto label_20af10;
        case 0x20af14u: goto label_20af14;
        case 0x20af18u: goto label_20af18;
        case 0x20af1cu: goto label_20af1c;
        case 0x20af20u: goto label_20af20;
        case 0x20af24u: goto label_20af24;
        case 0x20af28u: goto label_20af28;
        case 0x20af2cu: goto label_20af2c;
        case 0x20af30u: goto label_20af30;
        case 0x20af34u: goto label_20af34;
        case 0x20af38u: goto label_20af38;
        case 0x20af3cu: goto label_20af3c;
        case 0x20af40u: goto label_20af40;
        case 0x20af44u: goto label_20af44;
        case 0x20af48u: goto label_20af48;
        case 0x20af4cu: goto label_20af4c;
        case 0x20af50u: goto label_20af50;
        case 0x20af54u: goto label_20af54;
        case 0x20af58u: goto label_20af58;
        case 0x20af5cu: goto label_20af5c;
        case 0x20af60u: goto label_20af60;
        case 0x20af64u: goto label_20af64;
        case 0x20af68u: goto label_20af68;
        case 0x20af6cu: goto label_20af6c;
        case 0x20af70u: goto label_20af70;
        case 0x20af74u: goto label_20af74;
        case 0x20af78u: goto label_20af78;
        case 0x20af7cu: goto label_20af7c;
        default: break;
    }

    ctx->pc = 0x20aee8u;

label_20aee8:
    // 0x20aee8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20aee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20aeec:
    // 0x20aeec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20aeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20aef0:
    // 0x20aef0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20aef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20aef4:
    // 0x20aef4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20aef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20aef8:
    // 0x20aef8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20aefc:
    // 0x20aefc: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x20aefcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_20af00:
    // 0x20af00: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x20af00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_20af04:
    // 0x20af04: 0x40f809  jalr        $v0
label_20af08:
    if (ctx->pc == 0x20AF08u) {
        ctx->pc = 0x20AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF04u;
        // 0x20af08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF0Cu;
        goto label_20af0c;
    }
    ctx->pc = 0x20AF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20AF0Cu);
        ctx->pc = 0x20AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF04u;
        // 0x20af08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AF04u, 0x20AF0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AF0Cu;
label_20af0c:
    // 0x20af0c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_20af10:
    if (ctx->pc == 0x20AF10u) {
        ctx->pc = 0x20AF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF0Cu;
        // 0x20af10: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF14u;
        goto label_20af14;
    }
    ctx->pc = 0x20AF0Cu;
    {
        const bool branch_taken_0x20af0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20af0c) {
            ctx->pc = 0x20AF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AF0Cu;
            // 0x20af10: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AF70u;
            goto label_20af70;
        }
    }
    ctx->pc = 0x20AF14u;
label_20af14:
    // 0x20af14: 0xc080ffa  jal         func_203FE8
label_20af18:
    if (ctx->pc == 0x20AF18u) {
        ctx->pc = 0x20AF1Cu;
        goto label_20af1c;
    }
    ctx->pc = 0x20AF14u;
    SET_GPR_U32(ctx, 31, 0x20AF1Cu);
    ctx->pc = 0x203FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FE8u, 0x20AF14u, 0x20AF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AF1Cu;
label_20af1c:
    // 0x20af1c: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_20af20:
    if (ctx->pc == 0x20AF20u) {
        ctx->pc = 0x20AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF1Cu;
        // 0x20af20: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF24u;
        goto label_20af24;
    }
    ctx->pc = 0x20AF1Cu;
    {
        const bool branch_taken_0x20af1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20af1c) {
            ctx->pc = 0x20AF20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AF1Cu;
            // 0x20af20: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AF70u;
            goto label_20af70;
        }
    }
    ctx->pc = 0x20AF24u;
label_20af24:
    // 0x20af24: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x20af24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_20af28:
    // 0x20af28: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20af28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20af2c:
    // 0x20af2c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x20af2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_20af30:
    // 0x20af30: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x20af30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_20af34:
    // 0x20af34: 0x60f809  jalr        $v1
label_20af38:
    if (ctx->pc == 0x20AF38u) {
        ctx->pc = 0x20AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF34u;
        // 0x20af38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF3Cu;
        goto label_20af3c;
    }
    ctx->pc = 0x20AF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20AF3Cu);
        ctx->pc = 0x20AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF34u;
        // 0x20af38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AF34u, 0x20AF3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AF3Cu;
label_20af3c:
    // 0x20af3c: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x20af3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_20af40:
    // 0x20af40: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20af40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20af44:
    // 0x20af44: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x20af44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_20af48:
    // 0x20af48: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x20af48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_20af4c:
    // 0x20af4c: 0x60f809  jalr        $v1
label_20af50:
    if (ctx->pc == 0x20AF50u) {
        ctx->pc = 0x20AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF4Cu;
        // 0x20af50: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF54u;
        goto label_20af54;
    }
    ctx->pc = 0x20AF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20AF54u);
        ctx->pc = 0x20AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF4Cu;
        // 0x20af50: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AF4Cu, 0x20AF54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AF54u;
label_20af54:
    // 0x20af54: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x20af54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_20af58:
    // 0x20af58: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20af58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20af5c:
    // 0x20af5c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x20af5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_20af60:
    // 0x20af60: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x20af60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_20af64:
    // 0x20af64: 0x60f809  jalr        $v1
label_20af68:
    if (ctx->pc == 0x20AF68u) {
        ctx->pc = 0x20AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF64u;
        // 0x20af68: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF6Cu;
        goto label_20af6c;
    }
    ctx->pc = 0x20AF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20AF6Cu);
        ctx->pc = 0x20AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF64u;
        // 0x20af68: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AF64u, 0x20AF6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AF6Cu;
label_20af6c:
    // 0x20af6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20af6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20af70:
    // 0x20af70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20af70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20af74:
    // 0x20af74: 0x3e00008  jr          $ra
label_20af78:
    if (ctx->pc == 0x20AF78u) {
        ctx->pc = 0x20AF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF74u;
        // 0x20af78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF7Cu;
        goto label_20af7c;
    }
    ctx->pc = 0x20AF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF74u;
        // 0x20af78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AF7Cu;
label_20af7c:
    // 0x20af7c: 0x0  nop
    ctx->pc = 0x20af7cu;
    // NOP
    ctx->pc = 0x20af80u;
}
