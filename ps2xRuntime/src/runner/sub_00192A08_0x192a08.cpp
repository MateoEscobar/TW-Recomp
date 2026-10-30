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

// Function: sub_00192A08
// Address: 0x192a08 - 0x192ac8
void sub_00192A08_0x192a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192A08_0x192a08");
#endif

    switch (ctx->pc) {
        case 0x192a08u: goto label_192a08;
        case 0x192a0cu: goto label_192a0c;
        case 0x192a10u: goto label_192a10;
        case 0x192a14u: goto label_192a14;
        case 0x192a18u: goto label_192a18;
        case 0x192a1cu: goto label_192a1c;
        case 0x192a20u: goto label_192a20;
        case 0x192a24u: goto label_192a24;
        case 0x192a28u: goto label_192a28;
        case 0x192a2cu: goto label_192a2c;
        case 0x192a30u: goto label_192a30;
        case 0x192a34u: goto label_192a34;
        case 0x192a38u: goto label_192a38;
        case 0x192a3cu: goto label_192a3c;
        case 0x192a40u: goto label_192a40;
        case 0x192a44u: goto label_192a44;
        case 0x192a48u: goto label_192a48;
        case 0x192a4cu: goto label_192a4c;
        case 0x192a50u: goto label_192a50;
        case 0x192a54u: goto label_192a54;
        case 0x192a58u: goto label_192a58;
        case 0x192a5cu: goto label_192a5c;
        case 0x192a60u: goto label_192a60;
        case 0x192a64u: goto label_192a64;
        case 0x192a68u: goto label_192a68;
        case 0x192a6cu: goto label_192a6c;
        case 0x192a70u: goto label_192a70;
        case 0x192a74u: goto label_192a74;
        case 0x192a78u: goto label_192a78;
        case 0x192a7cu: goto label_192a7c;
        case 0x192a80u: goto label_192a80;
        case 0x192a84u: goto label_192a84;
        case 0x192a88u: goto label_192a88;
        case 0x192a8cu: goto label_192a8c;
        case 0x192a90u: goto label_192a90;
        case 0x192a94u: goto label_192a94;
        case 0x192a98u: goto label_192a98;
        case 0x192a9cu: goto label_192a9c;
        case 0x192aa0u: goto label_192aa0;
        case 0x192aa4u: goto label_192aa4;
        case 0x192aa8u: goto label_192aa8;
        case 0x192aacu: goto label_192aac;
        case 0x192ab0u: goto label_192ab0;
        case 0x192ab4u: goto label_192ab4;
        case 0x192ab8u: goto label_192ab8;
        case 0x192abcu: goto label_192abc;
        case 0x192ac0u: goto label_192ac0;
        case 0x192ac4u: goto label_192ac4;
        default: break;
    }

    ctx->pc = 0x192a08u;

label_192a08:
    // 0x192a08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x192a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_192a0c:
    // 0x192a0c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x192a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_192a10:
    // 0x192a10: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x192a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_192a14:
    // 0x192a14: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x192a14u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_192a18:
    // 0x192a18: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x192a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_192a1c:
    // 0x192a1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x192a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_192a20:
    // 0x192a20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x192a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_192a24:
    // 0x192a24: 0x8e27b9d0  lw          $a3, -0x4630($s1)
    ctx->pc = 0x192a24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949328)));
label_192a28:
    // 0x192a28: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x192a28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_192a2c:
    // 0x192a2c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x192a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_192a30:
    // 0x192a30: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x192a30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_192a34:
    // 0x192a34: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x192a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_192a38:
    // 0x192a38: 0x40f809  jalr        $v0
label_192a3c:
    if (ctx->pc == 0x192A3Cu) {
        ctx->pc = 0x192A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A38u;
        // 0x192a3c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192A40u;
        goto label_192a40;
    }
    ctx->pc = 0x192A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x192A40u);
        ctx->pc = 0x192A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A38u;
        // 0x192a3c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192A38u, 0x192A40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x192A40u;
label_192a40:
    // 0x192a40: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x192a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_192a44:
    // 0x192a44: 0x70182b  sltu        $v1, $v1, $s0
    ctx->pc = 0x192a44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_192a48:
    // 0x192a48: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_192a4c:
    if (ctx->pc == 0x192A4Cu) {
        ctx->pc = 0x192A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A48u;
        // 0x192a4c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192A50u;
        goto label_192a50;
    }
    ctx->pc = 0x192A48u;
    {
        const bool branch_taken_0x192a48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x192A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A48u;
        // 0x192a4c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192a48) {
            ctx->pc = 0x192A88u;
            goto label_192a88;
        }
    }
    ctx->pc = 0x192A50u;
label_192a50:
    // 0x192a50: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x192a50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_192a54:
    // 0x192a54: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_192a58:
    if (ctx->pc == 0x192A58u) {
        ctx->pc = 0x192A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A54u;
        // 0x192a58: 0x8e28b9d0  lw          $t0, -0x4630($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192A5Cu;
        goto label_192a5c;
    }
    ctx->pc = 0x192A54u;
    {
        const bool branch_taken_0x192a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A54u;
        // 0x192a58: 0x8e28b9d0  lw          $t0, -0x4630($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192a54) {
            ctx->pc = 0x192A88u;
            goto label_192a88;
        }
    }
    ctx->pc = 0x192A5Cu;
label_192a5c:
    // 0x192a5c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x192a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_192a60:
    // 0x192a60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x192a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_192a64:
    // 0x192a64: 0x24c634d0  addiu       $a2, $a2, 0x34D0
    ctx->pc = 0x192a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13520));
label_192a68:
    // 0x192a68: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x192a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_192a6c:
    // 0x192a6c: 0x240700a5  addiu       $a3, $zero, 0xA5
    ctx->pc = 0x192a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
label_192a70:
    // 0x192a70: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x192a70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_192a74:
    // 0x192a74: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x192a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_192a78:
    // 0x192a78: 0x60f809  jalr        $v1
label_192a7c:
    if (ctx->pc == 0x192A7Cu) {
        ctx->pc = 0x192A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A78u;
        // 0x192a7c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192A80u;
        goto label_192a80;
    }
    ctx->pc = 0x192A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x192A80u);
        ctx->pc = 0x192A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A78u;
        // 0x192a7c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192A78u, 0x192A80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x192A80u;
label_192a80:
    // 0x192a80: 0x1000000d  b           . + 4 + (0xD << 2)
label_192a84:
    if (ctx->pc == 0x192A84u) {
        ctx->pc = 0x192A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A80u;
        // 0x192a84: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192A88u;
        goto label_192a88;
    }
    ctx->pc = 0x192A80u;
    {
        const bool branch_taken_0x192a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A80u;
        // 0x192a84: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192a80) {
            ctx->pc = 0x192AB8u;
            goto label_192ab8;
        }
    }
    ctx->pc = 0x192A88u;
label_192a88:
    // 0x192a88: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x192a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_192a8c:
    // 0x192a8c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x192a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_192a90:
    // 0x192a90: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x192a90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_192a94:
    // 0x192a94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x192a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_192a98:
    // 0x192a98: 0x24c634d0  addiu       $a2, $a2, 0x34D0
    ctx->pc = 0x192a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13520));
label_192a9c:
    // 0x192a9c: 0x240700a8  addiu       $a3, $zero, 0xA8
    ctx->pc = 0x192a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_192aa0:
    // 0x192aa0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x192aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_192aa4:
    // 0x192aa4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x192aa4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_192aa8:
    // 0x192aa8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x192aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_192aac:
    // 0x192aac: 0x60f809  jalr        $v1
label_192ab0:
    if (ctx->pc == 0x192AB0u) {
        ctx->pc = 0x192AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192AACu;
        // 0x192ab0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192AB4u;
        goto label_192ab4;
    }
    ctx->pc = 0x192AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x192AB4u);
        ctx->pc = 0x192AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192AACu;
        // 0x192ab0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192AACu, 0x192AB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x192AB4u;
label_192ab4:
    // 0x192ab4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x192ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_192ab8:
    // 0x192ab8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x192ab8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_192abc:
    // 0x192abc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x192abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_192ac0:
    // 0x192ac0: 0x3e00008  jr          $ra
label_192ac4:
    if (ctx->pc == 0x192AC4u) {
        ctx->pc = 0x192AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192AC0u;
        // 0x192ac4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192AC8u;
        goto label_fallthrough_0x192ac0;
    }
    ctx->pc = 0x192AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192AC0u;
        // 0x192ac4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x192ac0:
    ctx->pc = 0x192AC8u;
}
