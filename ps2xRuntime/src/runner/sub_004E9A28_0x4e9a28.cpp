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

// Function: sub_004E9A28
// Address: 0x4e9a28 - 0x4e9ac0
void sub_004E9A28_0x4e9a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E9A28_0x4e9a28");
#endif

    switch (ctx->pc) {
        case 0x4e9a28u: goto label_4e9a28;
        case 0x4e9a2cu: goto label_4e9a2c;
        case 0x4e9a30u: goto label_4e9a30;
        case 0x4e9a34u: goto label_4e9a34;
        case 0x4e9a38u: goto label_4e9a38;
        case 0x4e9a3cu: goto label_4e9a3c;
        case 0x4e9a40u: goto label_4e9a40;
        case 0x4e9a44u: goto label_4e9a44;
        case 0x4e9a48u: goto label_4e9a48;
        case 0x4e9a4cu: goto label_4e9a4c;
        case 0x4e9a50u: goto label_4e9a50;
        case 0x4e9a54u: goto label_4e9a54;
        case 0x4e9a58u: goto label_4e9a58;
        case 0x4e9a5cu: goto label_4e9a5c;
        case 0x4e9a60u: goto label_4e9a60;
        case 0x4e9a64u: goto label_4e9a64;
        case 0x4e9a68u: goto label_4e9a68;
        case 0x4e9a6cu: goto label_4e9a6c;
        case 0x4e9a70u: goto label_4e9a70;
        case 0x4e9a74u: goto label_4e9a74;
        case 0x4e9a78u: goto label_4e9a78;
        case 0x4e9a7cu: goto label_4e9a7c;
        case 0x4e9a80u: goto label_4e9a80;
        case 0x4e9a84u: goto label_4e9a84;
        case 0x4e9a88u: goto label_4e9a88;
        case 0x4e9a8cu: goto label_4e9a8c;
        case 0x4e9a90u: goto label_4e9a90;
        case 0x4e9a94u: goto label_4e9a94;
        case 0x4e9a98u: goto label_4e9a98;
        case 0x4e9a9cu: goto label_4e9a9c;
        case 0x4e9aa0u: goto label_4e9aa0;
        case 0x4e9aa4u: goto label_4e9aa4;
        case 0x4e9aa8u: goto label_4e9aa8;
        case 0x4e9aacu: goto label_4e9aac;
        case 0x4e9ab0u: goto label_4e9ab0;
        case 0x4e9ab4u: goto label_4e9ab4;
        case 0x4e9ab8u: goto label_4e9ab8;
        case 0x4e9abcu: goto label_4e9abc;
        default: break;
    }

    ctx->pc = 0x4e9a28u;

label_4e9a28:
    // 0x4e9a28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e9a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e9a2c:
    // 0x4e9a2c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e9a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e9a30:
    // 0x4e9a30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e9a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e9a34:
    // 0x4e9a34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e9a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e9a38:
    // 0x4e9a38: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e9a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e9a3c:
    // 0x4e9a3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e9a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e9a40:
    // 0x4e9a40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e9a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e9a44:
    // 0x4e9a44: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_4e9a48:
    if (ctx->pc == 0x4E9A48u) {
        ctx->pc = 0x4E9A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9A44u;
        // 0x4e9a48: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9A4Cu;
        goto label_4e9a4c;
    }
    ctx->pc = 0x4E9A44u;
    {
        const bool branch_taken_0x4e9a44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9A44u;
        // 0x4e9a48: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9a44) {
            ctx->pc = 0x4E9AA4u;
            goto label_4e9aa4;
        }
    }
    ctx->pc = 0x4E9A4Cu;
label_4e9a4c:
    // 0x4e9a4c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x4e9a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4e9a50:
    // 0x4e9a50: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_4e9a54:
    if (ctx->pc == 0x4E9A54u) {
        ctx->pc = 0x4E9A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9A50u;
        // 0x4e9a54: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9A58u;
        goto label_4e9a58;
    }
    ctx->pc = 0x4E9A50u;
    {
        const bool branch_taken_0x4e9a50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9A50u;
        // 0x4e9a54: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9a50) {
            ctx->pc = 0x4E9A7Cu;
            goto label_4e9a7c;
        }
    }
    ctx->pc = 0x4E9A58u;
label_4e9a58:
    // 0x4e9a58: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x4e9a58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_4e9a5c:
    // 0x4e9a5c: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x4e9a5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4e9a60:
    // 0x4e9a60: 0x24c66c58  addiu       $a2, $a2, 0x6C58
    ctx->pc = 0x4e9a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27736));
label_4e9a64:
    // 0x4e9a64: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4e9a64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4e9a68:
    // 0x4e9a68: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e9a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e9a6c:
    // 0x4e9a6c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e9a6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e9a70:
    // 0x4e9a70: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e9a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e9a74:
    // 0x4e9a74: 0x60f809  jalr        $v1
label_4e9a78:
    if (ctx->pc == 0x4E9A78u) {
        ctx->pc = 0x4E9A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9A74u;
        // 0x4e9a78: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9A7Cu;
        goto label_4e9a7c;
    }
    ctx->pc = 0x4E9A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E9A7Cu);
        ctx->pc = 0x4E9A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9A74u;
        // 0x4e9a78: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9A74u, 0x4E9A7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E9A7Cu;
label_4e9a7c:
    // 0x4e9a7c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e9a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e9a80:
    // 0x4e9a80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e9a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e9a84:
    // 0x4e9a84: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e9a84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e9a88:
    // 0x4e9a88: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e9a88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e9a8c:
    // 0x4e9a8c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e9a8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e9a90:
    // 0x4e9a90: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e9a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e9a94:
    // 0x4e9a94: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e9a94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e9a98:
    // 0x4e9a98: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e9a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e9a9c:
    // 0x4e9a9c: 0x60f809  jalr        $v1
label_4e9aa0:
    if (ctx->pc == 0x4E9AA0u) {
        ctx->pc = 0x4E9AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9A9Cu;
        // 0x4e9aa0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9AA4u;
        goto label_4e9aa4;
    }
    ctx->pc = 0x4E9A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E9AA4u);
        ctx->pc = 0x4E9AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9A9Cu;
        // 0x4e9aa0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9A9Cu, 0x4E9AA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E9AA4u;
label_4e9aa4:
    // 0x4e9aa4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e9aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e9aa8:
    // 0x4e9aa8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e9aa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e9aac:
    // 0x4e9aac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e9aacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e9ab0:
    // 0x4e9ab0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e9ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e9ab4:
    // 0x4e9ab4: 0x3e00008  jr          $ra
label_4e9ab8:
    if (ctx->pc == 0x4E9AB8u) {
        ctx->pc = 0x4E9AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9AB4u;
        // 0x4e9ab8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9ABCu;
        goto label_4e9abc;
    }
    ctx->pc = 0x4E9AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E9AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9AB4u;
        // 0x4e9ab8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E9ABCu;
label_4e9abc:
    // 0x4e9abc: 0x0  nop
    ctx->pc = 0x4e9abcu;
    // NOP
    ctx->pc = 0x4e9ac0u;
}
