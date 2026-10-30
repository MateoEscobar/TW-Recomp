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

// Function: sub_001C2A30
// Address: 0x1c2a30 - 0x1c2ab8
void sub_001C2A30_0x1c2a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2A30_0x1c2a30");
#endif

    switch (ctx->pc) {
        case 0x1c2a30u: goto label_1c2a30;
        case 0x1c2a34u: goto label_1c2a34;
        case 0x1c2a38u: goto label_1c2a38;
        case 0x1c2a3cu: goto label_1c2a3c;
        case 0x1c2a40u: goto label_1c2a40;
        case 0x1c2a44u: goto label_1c2a44;
        case 0x1c2a48u: goto label_1c2a48;
        case 0x1c2a4cu: goto label_1c2a4c;
        case 0x1c2a50u: goto label_1c2a50;
        case 0x1c2a54u: goto label_1c2a54;
        case 0x1c2a58u: goto label_1c2a58;
        case 0x1c2a5cu: goto label_1c2a5c;
        case 0x1c2a60u: goto label_1c2a60;
        case 0x1c2a64u: goto label_1c2a64;
        case 0x1c2a68u: goto label_1c2a68;
        case 0x1c2a6cu: goto label_1c2a6c;
        case 0x1c2a70u: goto label_1c2a70;
        case 0x1c2a74u: goto label_1c2a74;
        case 0x1c2a78u: goto label_1c2a78;
        case 0x1c2a7cu: goto label_1c2a7c;
        case 0x1c2a80u: goto label_1c2a80;
        case 0x1c2a84u: goto label_1c2a84;
        case 0x1c2a88u: goto label_1c2a88;
        case 0x1c2a8cu: goto label_1c2a8c;
        case 0x1c2a90u: goto label_1c2a90;
        case 0x1c2a94u: goto label_1c2a94;
        case 0x1c2a98u: goto label_1c2a98;
        case 0x1c2a9cu: goto label_1c2a9c;
        case 0x1c2aa0u: goto label_1c2aa0;
        case 0x1c2aa4u: goto label_1c2aa4;
        case 0x1c2aa8u: goto label_1c2aa8;
        case 0x1c2aacu: goto label_1c2aac;
        case 0x1c2ab0u: goto label_1c2ab0;
        case 0x1c2ab4u: goto label_1c2ab4;
        default: break;
    }

    ctx->pc = 0x1c2a30u;

label_1c2a30:
    // 0x1c2a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c2a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c2a34:
    // 0x1c2a34: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c2a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1c2a38:
    // 0x1c2a38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c2a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1c2a3c:
    // 0x1c2a3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c2a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1c2a40:
    // 0x1c2a40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c2a44:
    // 0x1c2a44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c2a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c2a48:
    // 0x1c2a48: 0x8e0303f4  lw          $v1, 0x3F4($s0)
    ctx->pc = 0x1c2a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1012)));
label_1c2a4c:
    // 0x1c2a4c: 0x50620017  beql        $v1, $v0, . + 4 + (0x17 << 2)
label_1c2a50:
    if (ctx->pc == 0x1C2A50u) {
        ctx->pc = 0x1C2A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A4Cu;
        // 0x1c2a50: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2A54u;
        goto label_1c2a54;
    }
    ctx->pc = 0x1C2A4Cu;
    {
        const bool branch_taken_0x1c2a4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c2a4c) {
            ctx->pc = 0x1C2A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2A4Cu;
            // 0x1c2a50: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2AACu;
            goto label_1c2aac;
        }
    }
    ctx->pc = 0x1C2A54u;
label_1c2a54:
    // 0x1c2a54: 0x8e0203f8  lw          $v0, 0x3F8($s0)
    ctx->pc = 0x1c2a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1016)));
label_1c2a58:
    // 0x1c2a58: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1c2a5c:
    if (ctx->pc == 0x1C2A5Cu) {
        ctx->pc = 0x1C2A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A58u;
        // 0x1c2a5c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2A60u;
        goto label_1c2a60;
    }
    ctx->pc = 0x1C2A58u;
    {
        const bool branch_taken_0x1c2a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A58u;
        // 0x1c2a5c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2a58) {
            ctx->pc = 0x1C2AA8u;
            goto label_1c2aa8;
        }
    }
    ctx->pc = 0x1C2A60u;
label_1c2a60:
    // 0x1c2a60: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1c2a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1c2a64:
    // 0x1c2a64: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1c2a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1c2a68:
    // 0x1c2a68: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1c2a68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1c2a6c:
    // 0x1c2a6c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1c2a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1c2a70:
    // 0x1c2a70: 0x40f809  jalr        $v0
label_1c2a74:
    if (ctx->pc == 0x1C2A74u) {
        ctx->pc = 0x1C2A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A70u;
        // 0x1c2a74: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2A78u;
        goto label_1c2a78;
    }
    ctx->pc = 0x1C2A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C2A78u);
        ctx->pc = 0x1C2A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A70u;
        // 0x1c2a74: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2A70u, 0x1C2A78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C2A78u;
label_1c2a78:
    // 0x1c2a78: 0x8e0303f4  lw          $v1, 0x3F4($s0)
    ctx->pc = 0x1c2a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1012)));
label_1c2a7c:
    // 0x1c2a7c: 0x8e0403f8  lw          $a0, 0x3F8($s0)
    ctx->pc = 0x1c2a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1016)));
label_1c2a80:
    // 0x1c2a80: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c2a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c2a84:
    // 0x1c2a84: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1c2a84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1c2a88:
    // 0x1c2a88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1c2a8c:
    if (ctx->pc == 0x1C2A8Cu) {
        ctx->pc = 0x1C2A90u;
        goto label_1c2a90;
    }
    ctx->pc = 0x1C2A88u;
    {
        const bool branch_taken_0x1c2a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2a88) {
            ctx->pc = 0x1C2AA0u;
            goto label_1c2aa0;
        }
    }
    ctx->pc = 0x1C2A90u;
label_1c2a90:
    // 0x1c2a90: 0xc07091c  jal         func_1C2470
label_1c2a94:
    if (ctx->pc == 0x1C2A94u) {
        ctx->pc = 0x1C2A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A90u;
        // 0x1c2a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2A98u;
        goto label_1c2a98;
    }
    ctx->pc = 0x1C2A90u;
    SET_GPR_U32(ctx, 31, 0x1C2A98u);
    ctx->pc = 0x1C2A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2A90u;
    // 0x1c2a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2470u, 0x1C2A90u, 0x1C2A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2A98u;
label_1c2a98:
    // 0x1c2a98: 0x10000004  b           . + 4 + (0x4 << 2)
label_1c2a9c:
    if (ctx->pc == 0x1C2A9Cu) {
        ctx->pc = 0x1C2A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A98u;
        // 0x1c2a9c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2AA0u;
        goto label_1c2aa0;
    }
    ctx->pc = 0x1C2A98u;
    {
        const bool branch_taken_0x1c2a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A98u;
        // 0x1c2a9c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2a98) {
            ctx->pc = 0x1C2AACu;
            goto label_1c2aac;
        }
    }
    ctx->pc = 0x1C2AA0u;
label_1c2aa0:
    // 0x1c2aa0: 0xc070a7e  jal         func_1C29F8
label_1c2aa4:
    if (ctx->pc == 0x1C2AA4u) {
        ctx->pc = 0x1C2AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2AA0u;
        // 0x1c2aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2AA8u;
        goto label_1c2aa8;
    }
    ctx->pc = 0x1C2AA0u;
    SET_GPR_U32(ctx, 31, 0x1C2AA8u);
    ctx->pc = 0x1C2AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2AA0u;
    // 0x1c2aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C29F8u, 0x1C2AA0u, 0x1C2AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2AA8u;
label_1c2aa8:
    // 0x1c2aa8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c2aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c2aac:
    // 0x1c2aac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c2ab0:
    // 0x1c2ab0: 0x3e00008  jr          $ra
label_1c2ab4:
    if (ctx->pc == 0x1C2AB4u) {
        ctx->pc = 0x1C2AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2AB0u;
        // 0x1c2ab4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2AB8u;
        goto label_fallthrough_0x1c2ab0;
    }
    ctx->pc = 0x1C2AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2AB0u;
        // 0x1c2ab4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c2ab0:
    ctx->pc = 0x1C2AB8u;
}
