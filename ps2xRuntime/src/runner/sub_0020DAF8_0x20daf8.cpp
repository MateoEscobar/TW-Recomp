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

// Function: sub_0020DAF8
// Address: 0x20daf8 - 0x20db98
void sub_0020DAF8_0x20daf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DAF8_0x20daf8");
#endif

    switch (ctx->pc) {
        case 0x20daf8u: goto label_20daf8;
        case 0x20dafcu: goto label_20dafc;
        case 0x20db00u: goto label_20db00;
        case 0x20db04u: goto label_20db04;
        case 0x20db08u: goto label_20db08;
        case 0x20db0cu: goto label_20db0c;
        case 0x20db10u: goto label_20db10;
        case 0x20db14u: goto label_20db14;
        case 0x20db18u: goto label_20db18;
        case 0x20db1cu: goto label_20db1c;
        case 0x20db20u: goto label_20db20;
        case 0x20db24u: goto label_20db24;
        case 0x20db28u: goto label_20db28;
        case 0x20db2cu: goto label_20db2c;
        case 0x20db30u: goto label_20db30;
        case 0x20db34u: goto label_20db34;
        case 0x20db38u: goto label_20db38;
        case 0x20db3cu: goto label_20db3c;
        case 0x20db40u: goto label_20db40;
        case 0x20db44u: goto label_20db44;
        case 0x20db48u: goto label_20db48;
        case 0x20db4cu: goto label_20db4c;
        case 0x20db50u: goto label_20db50;
        case 0x20db54u: goto label_20db54;
        case 0x20db58u: goto label_20db58;
        case 0x20db5cu: goto label_20db5c;
        case 0x20db60u: goto label_20db60;
        case 0x20db64u: goto label_20db64;
        case 0x20db68u: goto label_20db68;
        case 0x20db6cu: goto label_20db6c;
        case 0x20db70u: goto label_20db70;
        case 0x20db74u: goto label_20db74;
        case 0x20db78u: goto label_20db78;
        case 0x20db7cu: goto label_20db7c;
        case 0x20db80u: goto label_20db80;
        case 0x20db84u: goto label_20db84;
        case 0x20db88u: goto label_20db88;
        case 0x20db8cu: goto label_20db8c;
        case 0x20db90u: goto label_20db90;
        case 0x20db94u: goto label_20db94;
        default: break;
    }

    ctx->pc = 0x20daf8u;

label_20daf8:
    // 0x20daf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20daf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20dafc:
    // 0x20dafc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20dafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20db00:
    // 0x20db00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20db00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20db04:
    // 0x20db04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20db04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20db08:
    // 0x20db08: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20db08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20db0c:
    // 0x20db0c: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x20db0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_20db10:
    // 0x20db10: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x20db10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_20db14:
    // 0x20db14: 0x40f809  jalr        $v0
label_20db18:
    if (ctx->pc == 0x20DB18u) {
        ctx->pc = 0x20DB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB14u;
        // 0x20db18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DB1Cu;
        goto label_20db1c;
    }
    ctx->pc = 0x20DB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20DB1Cu);
        ctx->pc = 0x20DB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB14u;
        // 0x20db18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DB14u, 0x20DB1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20DB1Cu;
label_20db1c:
    // 0x20db1c: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_20db20:
    if (ctx->pc == 0x20DB20u) {
        ctx->pc = 0x20DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB1Cu;
        // 0x20db20: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DB24u;
        goto label_20db24;
    }
    ctx->pc = 0x20DB1Cu;
    {
        const bool branch_taken_0x20db1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20db1c) {
            ctx->pc = 0x20DB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DB1Cu;
            // 0x20db20: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DB8Cu;
            goto label_20db8c;
        }
    }
    ctx->pc = 0x20DB24u;
label_20db24:
    // 0x20db24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20db24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20db28:
    // 0x20db28: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x20db28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_20db2c:
    // 0x20db2c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x20db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_20db30:
    // 0x20db30: 0x40f809  jalr        $v0
label_20db34:
    if (ctx->pc == 0x20DB34u) {
        ctx->pc = 0x20DB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB30u;
        // 0x20db34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DB38u;
        goto label_20db38;
    }
    ctx->pc = 0x20DB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20DB38u);
        ctx->pc = 0x20DB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB30u;
        // 0x20db34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DB30u, 0x20DB38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20DB38u;
label_20db38:
    // 0x20db38: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_20db3c:
    if (ctx->pc == 0x20DB3Cu) {
        ctx->pc = 0x20DB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB38u;
        // 0x20db3c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DB40u;
        goto label_20db40;
    }
    ctx->pc = 0x20DB38u;
    {
        const bool branch_taken_0x20db38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20db38) {
            ctx->pc = 0x20DB3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DB38u;
            // 0x20db3c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DB8Cu;
            goto label_20db8c;
        }
    }
    ctx->pc = 0x20DB40u;
label_20db40:
    // 0x20db40: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x20db40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_20db44:
    // 0x20db44: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20db44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20db48:
    // 0x20db48: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x20db48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_20db4c:
    // 0x20db4c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x20db4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_20db50:
    // 0x20db50: 0x60f809  jalr        $v1
label_20db54:
    if (ctx->pc == 0x20DB54u) {
        ctx->pc = 0x20DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB50u;
        // 0x20db54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DB58u;
        goto label_20db58;
    }
    ctx->pc = 0x20DB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20DB58u);
        ctx->pc = 0x20DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB50u;
        // 0x20db54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DB50u, 0x20DB58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20DB58u;
label_20db58:
    // 0x20db58: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x20db58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_20db5c:
    // 0x20db5c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20db5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20db60:
    // 0x20db60: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x20db60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_20db64:
    // 0x20db64: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x20db64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_20db68:
    // 0x20db68: 0x60f809  jalr        $v1
label_20db6c:
    if (ctx->pc == 0x20DB6Cu) {
        ctx->pc = 0x20DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB68u;
        // 0x20db6c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DB70u;
        goto label_20db70;
    }
    ctx->pc = 0x20DB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20DB70u);
        ctx->pc = 0x20DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB68u;
        // 0x20db6c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DB68u, 0x20DB70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20DB70u;
label_20db70:
    // 0x20db70: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x20db70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_20db74:
    // 0x20db74: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20db74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20db78:
    // 0x20db78: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x20db78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_20db7c:
    // 0x20db7c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x20db7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_20db80:
    // 0x20db80: 0x60f809  jalr        $v1
label_20db84:
    if (ctx->pc == 0x20DB84u) {
        ctx->pc = 0x20DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB80u;
        // 0x20db84: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DB88u;
        goto label_20db88;
    }
    ctx->pc = 0x20DB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20DB88u);
        ctx->pc = 0x20DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB80u;
        // 0x20db84: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DB80u, 0x20DB88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20DB88u;
label_20db88:
    // 0x20db88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20db88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20db8c:
    // 0x20db8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20db8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20db90:
    // 0x20db90: 0x3e00008  jr          $ra
label_20db94:
    if (ctx->pc == 0x20DB94u) {
        ctx->pc = 0x20DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB90u;
        // 0x20db94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DB98u;
        goto label_fallthrough_0x20db90;
    }
    ctx->pc = 0x20DB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB90u;
        // 0x20db94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20db90:
    ctx->pc = 0x20DB98u;
}
