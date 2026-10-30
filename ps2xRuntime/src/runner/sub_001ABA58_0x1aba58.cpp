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

// Function: sub_001ABA58
// Address: 0x1aba58 - 0x1abad0
void sub_001ABA58_0x1aba58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABA58_0x1aba58");
#endif

    switch (ctx->pc) {
        case 0x1aba58u: goto label_1aba58;
        case 0x1aba5cu: goto label_1aba5c;
        case 0x1aba60u: goto label_1aba60;
        case 0x1aba64u: goto label_1aba64;
        case 0x1aba68u: goto label_1aba68;
        case 0x1aba6cu: goto label_1aba6c;
        case 0x1aba70u: goto label_1aba70;
        case 0x1aba74u: goto label_1aba74;
        case 0x1aba78u: goto label_1aba78;
        case 0x1aba7cu: goto label_1aba7c;
        case 0x1aba80u: goto label_1aba80;
        case 0x1aba84u: goto label_1aba84;
        case 0x1aba88u: goto label_1aba88;
        case 0x1aba8cu: goto label_1aba8c;
        case 0x1aba90u: goto label_1aba90;
        case 0x1aba94u: goto label_1aba94;
        case 0x1aba98u: goto label_1aba98;
        case 0x1aba9cu: goto label_1aba9c;
        case 0x1abaa0u: goto label_1abaa0;
        case 0x1abaa4u: goto label_1abaa4;
        case 0x1abaa8u: goto label_1abaa8;
        case 0x1abaacu: goto label_1abaac;
        case 0x1abab0u: goto label_1abab0;
        case 0x1abab4u: goto label_1abab4;
        case 0x1abab8u: goto label_1abab8;
        case 0x1ababcu: goto label_1ababc;
        case 0x1abac0u: goto label_1abac0;
        case 0x1abac4u: goto label_1abac4;
        case 0x1abac8u: goto label_1abac8;
        case 0x1abaccu: goto label_1abacc;
        default: break;
    }

    ctx->pc = 0x1aba58u;

label_1aba58:
    // 0x1aba58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aba58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1aba5c:
    // 0x1aba5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1aba5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1aba60:
    // 0x1aba60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aba60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1aba64:
    // 0x1aba64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aba64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aba68:
    // 0x1aba68: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1aba68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aba6c:
    // 0x1aba6c: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1aba6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1aba70:
    // 0x1aba70: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1aba70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1aba74:
    // 0x1aba74: 0x40f809  jalr        $v0
label_1aba78:
    if (ctx->pc == 0x1ABA78u) {
        ctx->pc = 0x1ABA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA74u;
        // 0x1aba78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABA7Cu;
        goto label_1aba7c;
    }
    ctx->pc = 0x1ABA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ABA7Cu);
        ctx->pc = 0x1ABA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA74u;
        // 0x1aba78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABA74u, 0x1ABA7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ABA7Cu;
label_1aba7c:
    // 0x1aba7c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_1aba80:
    if (ctx->pc == 0x1ABA80u) {
        ctx->pc = 0x1ABA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA7Cu;
        // 0x1aba80: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABA84u;
        goto label_1aba84;
    }
    ctx->pc = 0x1ABA7Cu;
    {
        const bool branch_taken_0x1aba7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aba7c) {
            ctx->pc = 0x1ABA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABA7Cu;
            // 0x1aba80: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABAC4u;
            goto label_1abac4;
        }
    }
    ctx->pc = 0x1ABA84u;
label_1aba84:
    // 0x1aba84: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1aba84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aba88:
    // 0x1aba88: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1aba88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1aba8c:
    // 0x1aba8c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1aba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1aba90:
    // 0x1aba90: 0x40f809  jalr        $v0
label_1aba94:
    if (ctx->pc == 0x1ABA94u) {
        ctx->pc = 0x1ABA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA90u;
        // 0x1aba94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABA98u;
        goto label_1aba98;
    }
    ctx->pc = 0x1ABA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ABA98u);
        ctx->pc = 0x1ABA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA90u;
        // 0x1aba94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABA90u, 0x1ABA98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ABA98u;
label_1aba98:
    // 0x1aba98: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_1aba9c:
    if (ctx->pc == 0x1ABA9Cu) {
        ctx->pc = 0x1ABA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA98u;
        // 0x1aba9c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABAA0u;
        goto label_1abaa0;
    }
    ctx->pc = 0x1ABA98u;
    {
        const bool branch_taken_0x1aba98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aba98) {
            ctx->pc = 0x1ABA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABA98u;
            // 0x1aba9c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABAC4u;
            goto label_1abac4;
        }
    }
    ctx->pc = 0x1ABAA0u;
label_1abaa0:
    // 0x1abaa0: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x1abaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1abaa4:
    // 0x1abaa4: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1abaa8:
    if (ctx->pc == 0x1ABAA8u) {
        ctx->pc = 0x1ABAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABAA4u;
        // 0x1abaa8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABAACu;
        goto label_1abaac;
    }
    ctx->pc = 0x1ABAA4u;
    {
        const bool branch_taken_0x1abaa4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABAA4u;
        // 0x1abaa8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abaa4) {
            ctx->pc = 0x1ABAC4u;
            goto label_1abac4;
        }
    }
    ctx->pc = 0x1ABAACu;
label_1abaac:
    // 0x1abaac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1abaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1abab0:
    // 0x1abab0: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1abab0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1abab4:
    // 0x1abab4: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1abab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1abab8:
    // 0x1abab8: 0x60f809  jalr        $v1
label_1ababc:
    if (ctx->pc == 0x1ABABCu) {
        ctx->pc = 0x1ABABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABAB8u;
        // 0x1ababc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABAC0u;
        goto label_1abac0;
    }
    ctx->pc = 0x1ABAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1ABAC0u);
        ctx->pc = 0x1ABABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABAB8u;
        // 0x1ababc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABAB8u, 0x1ABAC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ABAC0u;
label_1abac0:
    // 0x1abac0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1abac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1abac4:
    // 0x1abac4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1abac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1abac8:
    // 0x1abac8: 0x3e00008  jr          $ra
label_1abacc:
    if (ctx->pc == 0x1ABACCu) {
        ctx->pc = 0x1ABACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABAC8u;
        // 0x1abacc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABAD0u;
        goto label_fallthrough_0x1abac8;
    }
    ctx->pc = 0x1ABAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABAC8u;
        // 0x1abacc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1abac8:
    ctx->pc = 0x1ABAD0u;
}
