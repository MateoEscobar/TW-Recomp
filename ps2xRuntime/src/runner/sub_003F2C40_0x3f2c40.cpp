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

// Function: sub_003F2C40
// Address: 0x3f2c40 - 0x3f2d54
void sub_003F2C40_0x3f2c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2C40_0x3f2c40");
#endif

    switch (ctx->pc) {
        case 0x3f2c40u: goto label_3f2c40;
        case 0x3f2c44u: goto label_3f2c44;
        case 0x3f2c48u: goto label_3f2c48;
        case 0x3f2c4cu: goto label_3f2c4c;
        case 0x3f2c50u: goto label_3f2c50;
        case 0x3f2c54u: goto label_3f2c54;
        case 0x3f2c58u: goto label_3f2c58;
        case 0x3f2c5cu: goto label_3f2c5c;
        case 0x3f2c60u: goto label_3f2c60;
        case 0x3f2c64u: goto label_3f2c64;
        case 0x3f2c68u: goto label_3f2c68;
        case 0x3f2c6cu: goto label_3f2c6c;
        case 0x3f2c70u: goto label_3f2c70;
        case 0x3f2c74u: goto label_3f2c74;
        case 0x3f2c78u: goto label_3f2c78;
        case 0x3f2c7cu: goto label_3f2c7c;
        case 0x3f2c80u: goto label_3f2c80;
        case 0x3f2c84u: goto label_3f2c84;
        case 0x3f2c88u: goto label_3f2c88;
        case 0x3f2c8cu: goto label_3f2c8c;
        case 0x3f2c90u: goto label_3f2c90;
        case 0x3f2c94u: goto label_3f2c94;
        case 0x3f2c98u: goto label_3f2c98;
        case 0x3f2c9cu: goto label_3f2c9c;
        case 0x3f2ca0u: goto label_3f2ca0;
        case 0x3f2ca4u: goto label_3f2ca4;
        case 0x3f2ca8u: goto label_3f2ca8;
        case 0x3f2cacu: goto label_3f2cac;
        case 0x3f2cb0u: goto label_3f2cb0;
        case 0x3f2cb4u: goto label_3f2cb4;
        case 0x3f2cb8u: goto label_3f2cb8;
        case 0x3f2cbcu: goto label_3f2cbc;
        case 0x3f2cc0u: goto label_3f2cc0;
        case 0x3f2cc4u: goto label_3f2cc4;
        case 0x3f2cc8u: goto label_3f2cc8;
        case 0x3f2cccu: goto label_3f2ccc;
        case 0x3f2cd0u: goto label_3f2cd0;
        case 0x3f2cd4u: goto label_3f2cd4;
        case 0x3f2cd8u: goto label_3f2cd8;
        case 0x3f2cdcu: goto label_3f2cdc;
        case 0x3f2ce0u: goto label_3f2ce0;
        case 0x3f2ce4u: goto label_3f2ce4;
        case 0x3f2ce8u: goto label_3f2ce8;
        case 0x3f2cecu: goto label_3f2cec;
        case 0x3f2cf0u: goto label_3f2cf0;
        case 0x3f2cf4u: goto label_3f2cf4;
        case 0x3f2cf8u: goto label_3f2cf8;
        case 0x3f2cfcu: goto label_3f2cfc;
        case 0x3f2d00u: goto label_3f2d00;
        case 0x3f2d04u: goto label_3f2d04;
        case 0x3f2d08u: goto label_3f2d08;
        case 0x3f2d0cu: goto label_3f2d0c;
        case 0x3f2d10u: goto label_3f2d10;
        case 0x3f2d14u: goto label_3f2d14;
        case 0x3f2d18u: goto label_3f2d18;
        case 0x3f2d1cu: goto label_3f2d1c;
        case 0x3f2d20u: goto label_3f2d20;
        case 0x3f2d24u: goto label_3f2d24;
        case 0x3f2d28u: goto label_3f2d28;
        case 0x3f2d2cu: goto label_3f2d2c;
        case 0x3f2d30u: goto label_3f2d30;
        case 0x3f2d34u: goto label_3f2d34;
        case 0x3f2d38u: goto label_3f2d38;
        case 0x3f2d3cu: goto label_3f2d3c;
        case 0x3f2d40u: goto label_3f2d40;
        case 0x3f2d44u: goto label_3f2d44;
        case 0x3f2d48u: goto label_3f2d48;
        case 0x3f2d4cu: goto label_3f2d4c;
        case 0x3f2d50u: goto label_3f2d50;
        default: break;
    }

    ctx->pc = 0x3f2c40u;

label_3f2c40:
    // 0x3f2c40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3f2c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3f2c44:
    // 0x3f2c44: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3f2c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3f2c48:
    // 0x3f2c48: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3f2c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3f2c4c:
    // 0x3f2c4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f2c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f2c50:
    // 0x3f2c50: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3f2c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3f2c54:
    // 0x3f2c54: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3f2c54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f2c58:
    // 0x3f2c58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f2c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3f2c5c:
    // 0x3f2c5c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3f2c5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f2c60:
    // 0x3f2c60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f2c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f2c64:
    // 0x3f2c64: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f2c64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f2c68:
    // 0x3f2c68: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f2c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f2c6c:
    // 0x3f2c6c: 0x40f809  jalr        $v0
label_3f2c70:
    if (ctx->pc == 0x3F2C70u) {
        ctx->pc = 0x3F2C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2C6Cu;
        // 0x3f2c70: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2C74u;
        goto label_3f2c74;
    }
    ctx->pc = 0x3F2C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F2C74u);
        ctx->pc = 0x3F2C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2C6Cu;
        // 0x3f2c70: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2C6Cu, 0x3F2C74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F2C74u;
label_3f2c74:
    // 0x3f2c74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3f2c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f2c78:
    // 0x3f2c78: 0x2e42003d  sltiu       $v0, $s2, 0x3D
    ctx->pc = 0x3f2c78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)61) ? 1 : 0);
label_3f2c7c:
    // 0x3f2c7c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_3f2c80:
    if (ctx->pc == 0x3F2C80u) {
        ctx->pc = 0x3F2C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2C7Cu;
        // 0x3f2c80: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2C84u;
        goto label_3f2c84;
    }
    ctx->pc = 0x3F2C7Cu;
    {
        const bool branch_taken_0x3f2c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2C7Cu;
        // 0x3f2c80: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2c7c) {
            ctx->pc = 0x3F2D54u;
            return;
        }
    }
    ctx->pc = 0x3F2C84u;
label_3f2c84:
    // 0x3f2c84: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x3f2c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_3f2c88:
    // 0x3f2c88: 0x24426180  addiu       $v0, $v0, 0x6180
    ctx->pc = 0x3f2c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24960));
label_3f2c8c:
    // 0x3f2c8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3f2c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3f2c90:
    // 0x3f2c90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3f2c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3f2c94:
    // 0x3f2c94: 0x800008  jr          $a0
label_3f2c98:
    if (ctx->pc == 0x3F2C98u) {
        ctx->pc = 0x3F2C9Cu;
        goto label_3f2c9c;
    }
    ctx->pc = 0x3F2C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3F2C9Cu: goto label_3f2c9c;
            case 0x3F2CB0u: goto label_3f2cb0;
            case 0x3F2CC4u: goto label_3f2cc4;
            case 0x3F2CE0u: goto label_3f2ce0;
            case 0x3F2D08u: goto label_3f2d08;
            case 0x3F2D18u: goto label_3f2d18;
            case 0x3F2D2Cu: goto label_3f2d2c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2C94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3F2C9Cu;
label_3f2c9c:
    // 0x3f2c9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f2c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f2ca0:
    // 0x3f2ca0: 0xc0fcabc  jal         func_3F2AF0
label_3f2ca4:
    if (ctx->pc == 0x3F2CA4u) {
        ctx->pc = 0x3F2CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2CA0u;
        // 0x3f2ca4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2CA8u;
        goto label_3f2ca8;
    }
    ctx->pc = 0x3F2CA0u;
    SET_GPR_U32(ctx, 31, 0x3F2CA8u);
    ctx->pc = 0x3F2CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2CA0u;
    // 0x3f2ca4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F2AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F2AF0u, 0x3F2CA0u, 0x3F2CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2CA8u;
label_3f2ca8:
    // 0x3f2ca8: 0x1000002b  b           . + 4 + (0x2B << 2)
label_3f2cac:
    if (ctx->pc == 0x3F2CACu) {
        ctx->pc = 0x3F2CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2CA8u;
        // 0x3f2cac: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2CB0u;
        goto label_3f2cb0;
    }
    ctx->pc = 0x3F2CA8u;
    {
        const bool branch_taken_0x3f2ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2CA8u;
        // 0x3f2cac: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2ca8) {
            ctx->pc = 0x3F2D58u;
            return;
        }
    }
    ctx->pc = 0x3F2CB0u;
label_3f2cb0:
    // 0x3f2cb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f2cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f2cb4:
    // 0x3f2cb4: 0xc0fcad8  jal         func_3F2B60
label_3f2cb8:
    if (ctx->pc == 0x3F2CB8u) {
        ctx->pc = 0x3F2CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2CB4u;
        // 0x3f2cb8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2CBCu;
        goto label_3f2cbc;
    }
    ctx->pc = 0x3F2CB4u;
    SET_GPR_U32(ctx, 31, 0x3F2CBCu);
    ctx->pc = 0x3F2CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2CB4u;
    // 0x3f2cb8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F2B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F2B60u, 0x3F2CB4u, 0x3F2CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2CBCu;
label_3f2cbc:
    // 0x3f2cbc: 0x10000026  b           . + 4 + (0x26 << 2)
label_3f2cc0:
    if (ctx->pc == 0x3F2CC0u) {
        ctx->pc = 0x3F2CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2CBCu;
        // 0x3f2cc0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2CC4u;
        goto label_3f2cc4;
    }
    ctx->pc = 0x3F2CBCu;
    {
        const bool branch_taken_0x3f2cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2CBCu;
        // 0x3f2cc0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2cbc) {
            ctx->pc = 0x3F2D58u;
            return;
        }
    }
    ctx->pc = 0x3F2CC4u;
label_3f2cc4:
    // 0x3f2cc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3f2cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f2cc8:
    // 0x3f2cc8: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3f2cc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3f2ccc:
    // 0x3f2ccc: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3f2cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3f2cd0:
    // 0x3f2cd0: 0x60f809  jalr        $v1
label_3f2cd4:
    if (ctx->pc == 0x3F2CD4u) {
        ctx->pc = 0x3F2CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2CD0u;
        // 0x3f2cd4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2CD8u;
        goto label_3f2cd8;
    }
    ctx->pc = 0x3F2CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3F2CD8u);
        ctx->pc = 0x3F2CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2CD0u;
        // 0x3f2cd4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2CD0u, 0x3F2CD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F2CD8u;
label_3f2cd8:
    // 0x3f2cd8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_3f2cdc:
    if (ctx->pc == 0x3F2CDCu) {
        ctx->pc = 0x3F2CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2CD8u;
        // 0x3f2cdc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2CE0u;
        goto label_3f2ce0;
    }
    ctx->pc = 0x3F2CD8u;
    {
        const bool branch_taken_0x3f2cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2CD8u;
        // 0x3f2cdc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2cd8) {
            ctx->pc = 0x3F2D58u;
            return;
        }
    }
    ctx->pc = 0x3F2CE0u;
label_3f2ce0:
    // 0x3f2ce0: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x3f2ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_3f2ce4:
    // 0x3f2ce4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3f2ce8:
    if (ctx->pc == 0x3F2CE8u) {
        ctx->pc = 0x3F2CECu;
        goto label_3f2cec;
    }
    ctx->pc = 0x3F2CE4u;
    {
        const bool branch_taken_0x3f2ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f2ce4) {
            ctx->pc = 0x3F2CF8u;
            goto label_3f2cf8;
        }
    }
    ctx->pc = 0x3F2CECu;
label_3f2cec:
    // 0x3f2cec: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x3f2cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_3f2cf0:
    // 0x3f2cf0: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_3f2cf4:
    if (ctx->pc == 0x3F2CF4u) {
        ctx->pc = 0x3F2CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2CF0u;
        // 0x3f2cf4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2CF8u;
        goto label_3f2cf8;
    }
    ctx->pc = 0x3F2CF0u;
    {
        const bool branch_taken_0x3f2cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2cf0) {
            ctx->pc = 0x3F2CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F2CF0u;
            // 0x3f2cf4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F2D58u;
            return;
        }
    }
    ctx->pc = 0x3F2CF8u;
label_3f2cf8:
    // 0x3f2cf8: 0xc0fc9a6  jal         func_3F2698
label_3f2cfc:
    if (ctx->pc == 0x3F2CFCu) {
        ctx->pc = 0x3F2CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2CF8u;
        // 0x3f2cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2D00u;
        goto label_3f2d00;
    }
    ctx->pc = 0x3F2CF8u;
    SET_GPR_U32(ctx, 31, 0x3F2D00u);
    ctx->pc = 0x3F2CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2CF8u;
    // 0x3f2cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F2698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F2698u, 0x3F2CF8u, 0x3F2D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2D00u;
label_3f2d00:
    // 0x3f2d00: 0x10000015  b           . + 4 + (0x15 << 2)
label_3f2d04:
    if (ctx->pc == 0x3F2D04u) {
        ctx->pc = 0x3F2D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2D00u;
        // 0x3f2d04: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2D08u;
        goto label_3f2d08;
    }
    ctx->pc = 0x3F2D00u;
    {
        const bool branch_taken_0x3f2d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2D00u;
        // 0x3f2d04: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2d00) {
            ctx->pc = 0x3F2D58u;
            return;
        }
    }
    ctx->pc = 0x3F2D08u;
label_3f2d08:
    // 0x3f2d08: 0xc0e8616  jal         func_3A1858
label_3f2d0c:
    if (ctx->pc == 0x3F2D0Cu) {
        ctx->pc = 0x3F2D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2D08u;
        // 0x3f2d0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2D10u;
        goto label_3f2d10;
    }
    ctx->pc = 0x3F2D08u;
    SET_GPR_U32(ctx, 31, 0x3F2D10u);
    ctx->pc = 0x3F2D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2D08u;
    // 0x3f2d0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x3F2D08u, 0x3F2D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2D10u;
label_3f2d10:
    // 0x3f2d10: 0x10000011  b           . + 4 + (0x11 << 2)
label_3f2d14:
    if (ctx->pc == 0x3F2D14u) {
        ctx->pc = 0x3F2D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2D10u;
        // 0x3f2d14: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2D18u;
        goto label_3f2d18;
    }
    ctx->pc = 0x3F2D10u;
    {
        const bool branch_taken_0x3f2d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2D10u;
        // 0x3f2d14: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2d10) {
            ctx->pc = 0x3F2D58u;
            return;
        }
    }
    ctx->pc = 0x3F2D18u;
label_3f2d18:
    // 0x3f2d18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f2d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f2d1c:
    // 0x3f2d1c: 0xc0fcaf2  jal         func_3F2BC8
label_3f2d20:
    if (ctx->pc == 0x3F2D20u) {
        ctx->pc = 0x3F2D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2D1Cu;
        // 0x3f2d20: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2D24u;
        goto label_3f2d24;
    }
    ctx->pc = 0x3F2D1Cu;
    SET_GPR_U32(ctx, 31, 0x3F2D24u);
    ctx->pc = 0x3F2D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2D1Cu;
    // 0x3f2d20: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F2BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F2BC8u, 0x3F2D1Cu, 0x3F2D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2D24u;
label_3f2d24:
    // 0x3f2d24: 0x1000000c  b           . + 4 + (0xC << 2)
label_3f2d28:
    if (ctx->pc == 0x3F2D28u) {
        ctx->pc = 0x3F2D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2D24u;
        // 0x3f2d28: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2D2Cu;
        goto label_3f2d2c;
    }
    ctx->pc = 0x3F2D24u;
    {
        const bool branch_taken_0x3f2d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2D24u;
        // 0x3f2d28: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2d24) {
            ctx->pc = 0x3F2D58u;
            return;
        }
    }
    ctx->pc = 0x3F2D2Cu;
label_3f2d2c:
    // 0x3f2d2c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f2d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f2d30:
    // 0x3f2d30: 0xc0ea12a  jal         func_3A84A8
label_3f2d34:
    if (ctx->pc == 0x3F2D34u) {
        ctx->pc = 0x3F2D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2D30u;
        // 0x3f2d34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2D38u;
        goto label_3f2d38;
    }
    ctx->pc = 0x3F2D30u;
    SET_GPR_U32(ctx, 31, 0x3F2D38u);
    ctx->pc = 0x3F2D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2D30u;
    // 0x3f2d34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F2D30u, 0x3F2D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2D38u;
label_3f2d38:
    // 0x3f2d38: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3f2d38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f2d3c:
    // 0x3f2d3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f2d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f2d40:
    // 0x3f2d40: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f2d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f2d44:
    // 0x3f2d44: 0xc0ea12a  jal         func_3A84A8
label_3f2d48:
    if (ctx->pc == 0x3F2D48u) {
        ctx->pc = 0x3F2D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2D44u;
        // 0x3f2d48: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2D4Cu;
        goto label_3f2d4c;
    }
    ctx->pc = 0x3F2D44u;
    SET_GPR_U32(ctx, 31, 0x3F2D4Cu);
    ctx->pc = 0x3F2D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2D44u;
    // 0x3f2d48: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F2D44u, 0x3F2D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2D4Cu;
label_3f2d4c:
    // 0x3f2d4c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3f2d4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f2d50:
    // 0x3f2d50: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3f2d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x3f2d54u;
}
