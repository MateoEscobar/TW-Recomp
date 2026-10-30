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

// Function: sub_003D3C28
// Address: 0x3d3c28 - 0x3d3d30
void sub_003D3C28_0x3d3c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D3C28_0x3d3c28");
#endif

    switch (ctx->pc) {
        case 0x3d3c28u: goto label_3d3c28;
        case 0x3d3c2cu: goto label_3d3c2c;
        case 0x3d3c30u: goto label_3d3c30;
        case 0x3d3c34u: goto label_3d3c34;
        case 0x3d3c38u: goto label_3d3c38;
        case 0x3d3c3cu: goto label_3d3c3c;
        case 0x3d3c40u: goto label_3d3c40;
        case 0x3d3c44u: goto label_3d3c44;
        case 0x3d3c48u: goto label_3d3c48;
        case 0x3d3c4cu: goto label_3d3c4c;
        case 0x3d3c50u: goto label_3d3c50;
        case 0x3d3c54u: goto label_3d3c54;
        case 0x3d3c58u: goto label_3d3c58;
        case 0x3d3c5cu: goto label_3d3c5c;
        case 0x3d3c60u: goto label_3d3c60;
        case 0x3d3c64u: goto label_3d3c64;
        case 0x3d3c68u: goto label_3d3c68;
        case 0x3d3c6cu: goto label_3d3c6c;
        case 0x3d3c70u: goto label_3d3c70;
        case 0x3d3c74u: goto label_3d3c74;
        case 0x3d3c78u: goto label_3d3c78;
        case 0x3d3c7cu: goto label_3d3c7c;
        case 0x3d3c80u: goto label_3d3c80;
        case 0x3d3c84u: goto label_3d3c84;
        case 0x3d3c88u: goto label_3d3c88;
        case 0x3d3c8cu: goto label_3d3c8c;
        case 0x3d3c90u: goto label_3d3c90;
        case 0x3d3c94u: goto label_3d3c94;
        case 0x3d3c98u: goto label_3d3c98;
        case 0x3d3c9cu: goto label_3d3c9c;
        case 0x3d3ca0u: goto label_3d3ca0;
        case 0x3d3ca4u: goto label_3d3ca4;
        case 0x3d3ca8u: goto label_3d3ca8;
        case 0x3d3cacu: goto label_3d3cac;
        case 0x3d3cb0u: goto label_3d3cb0;
        case 0x3d3cb4u: goto label_3d3cb4;
        case 0x3d3cb8u: goto label_3d3cb8;
        case 0x3d3cbcu: goto label_3d3cbc;
        case 0x3d3cc0u: goto label_3d3cc0;
        case 0x3d3cc4u: goto label_3d3cc4;
        case 0x3d3cc8u: goto label_3d3cc8;
        case 0x3d3cccu: goto label_3d3ccc;
        case 0x3d3cd0u: goto label_3d3cd0;
        case 0x3d3cd4u: goto label_3d3cd4;
        case 0x3d3cd8u: goto label_3d3cd8;
        case 0x3d3cdcu: goto label_3d3cdc;
        case 0x3d3ce0u: goto label_3d3ce0;
        case 0x3d3ce4u: goto label_3d3ce4;
        case 0x3d3ce8u: goto label_3d3ce8;
        case 0x3d3cecu: goto label_3d3cec;
        case 0x3d3cf0u: goto label_3d3cf0;
        case 0x3d3cf4u: goto label_3d3cf4;
        case 0x3d3cf8u: goto label_3d3cf8;
        case 0x3d3cfcu: goto label_3d3cfc;
        case 0x3d3d00u: goto label_3d3d00;
        case 0x3d3d04u: goto label_3d3d04;
        case 0x3d3d08u: goto label_3d3d08;
        case 0x3d3d0cu: goto label_3d3d0c;
        case 0x3d3d10u: goto label_3d3d10;
        case 0x3d3d14u: goto label_3d3d14;
        case 0x3d3d18u: goto label_3d3d18;
        case 0x3d3d1cu: goto label_3d3d1c;
        case 0x3d3d20u: goto label_3d3d20;
        case 0x3d3d24u: goto label_3d3d24;
        case 0x3d3d28u: goto label_3d3d28;
        case 0x3d3d2cu: goto label_3d3d2c;
        default: break;
    }

    ctx->pc = 0x3d3c28u;

label_3d3c28:
    // 0x3d3c28: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3d3c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3d3c2c:
    // 0x3d3c2c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3d3c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3d3c30:
    // 0x3d3c30: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3d3c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3d3c34:
    // 0x3d3c34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d3c34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d3c38:
    // 0x3d3c38: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3d3c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3d3c3c:
    // 0x3d3c3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d3c3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d3c40:
    // 0x3d3c40: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d3c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3d3c44:
    // 0x3d3c44: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d3c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d3c48:
    // 0x3d3c48: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d3c48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d3c4c:
    // 0x3d3c4c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d3c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d3c50:
    // 0x3d3c50: 0x40f809  jalr        $v0
label_3d3c54:
    if (ctx->pc == 0x3D3C54u) {
        ctx->pc = 0x3D3C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3C50u;
        // 0x3d3c54: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3C58u;
        goto label_3d3c58;
    }
    ctx->pc = 0x3D3C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D3C58u);
        ctx->pc = 0x3D3C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3C50u;
        // 0x3d3c54: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3C50u, 0x3D3C58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D3C58u;
label_3d3c58:
    // 0x3d3c58: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d3c58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d3c5c:
    // 0x3d3c5c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3d3c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3d3c60:
    // 0x3d3c60: 0xc0e858c  jal         func_3A1630
label_3d3c64:
    if (ctx->pc == 0x3D3C64u) {
        ctx->pc = 0x3D3C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3C60u;
        // 0x3d3c64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3C68u;
        goto label_3d3c68;
    }
    ctx->pc = 0x3D3C60u;
    SET_GPR_U32(ctx, 31, 0x3D3C68u);
    ctx->pc = 0x3D3C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3C60u;
    // 0x3d3c64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D3C60u, 0x3D3C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3C68u;
label_3d3c68:
    // 0x3d3c68: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x3d3c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_3d3c6c:
    // 0x3d3c6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d3c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d3c70:
    // 0x3d3c70: 0x34428481  ori         $v0, $v0, 0x8481
    ctx->pc = 0x3d3c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33921);
label_3d3c74:
    // 0x3d3c74: 0xc0ea14c  jal         func_3A8530
label_3d3c78:
    if (ctx->pc == 0x3D3C78u) {
        ctx->pc = 0x3D3C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3C74u;
        // 0x3d3c78: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3C7Cu;
        goto label_3d3c7c;
    }
    ctx->pc = 0x3D3C74u;
    SET_GPR_U32(ctx, 31, 0x3D3C7Cu);
    ctx->pc = 0x3D3C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3C74u;
    // 0x3d3c78: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D3C74u, 0x3D3C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3C7Cu;
label_3d3c7c:
    // 0x3d3c7c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d3c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d3c80:
    // 0x3d3c80: 0xc0ea12a  jal         func_3A84A8
label_3d3c84:
    if (ctx->pc == 0x3D3C84u) {
        ctx->pc = 0x3D3C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3C80u;
        // 0x3d3c84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3C88u;
        goto label_3d3c88;
    }
    ctx->pc = 0x3D3C80u;
    SET_GPR_U32(ctx, 31, 0x3D3C88u);
    ctx->pc = 0x3D3C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3C80u;
    // 0x3d3c84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D3C80u, 0x3D3C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3C88u;
label_3d3c88:
    // 0x3d3c88: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d3c88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d3c8c:
    // 0x3d3c8c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d3c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d3c90:
    // 0x3d3c90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d3c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d3c94:
    // 0x3d3c94: 0xc0ea12a  jal         func_3A84A8
label_3d3c98:
    if (ctx->pc == 0x3D3C98u) {
        ctx->pc = 0x3D3C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3C94u;
        // 0x3d3c98: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3C9Cu;
        goto label_3d3c9c;
    }
    ctx->pc = 0x3D3C94u;
    SET_GPR_U32(ctx, 31, 0x3D3C9Cu);
    ctx->pc = 0x3D3C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3C94u;
    // 0x3d3c98: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D3C94u, 0x3D3C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3C9Cu;
label_3d3c9c:
    // 0x3d3c9c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d3c9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d3ca0:
    // 0x3d3ca0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3d3ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3d3ca4:
    // 0x3d3ca4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d3ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d3ca8:
    // 0x3d3ca8: 0xc0e858c  jal         func_3A1630
label_3d3cac:
    if (ctx->pc == 0x3D3CACu) {
        ctx->pc = 0x3D3CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3CA8u;
        // 0x3d3cac: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3CB0u;
        goto label_3d3cb0;
    }
    ctx->pc = 0x3D3CA8u;
    SET_GPR_U32(ctx, 31, 0x3D3CB0u);
    ctx->pc = 0x3D3CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3CA8u;
    // 0x3d3cac: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D3CA8u, 0x3D3CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3CB0u;
label_3d3cb0:
    // 0x3d3cb0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d3cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d3cb4:
    // 0x3d3cb4: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x3d3cb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_3d3cb8:
    // 0x3d3cb8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3d3cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3d3cbc:
    // 0x3d3cbc: 0x40f809  jalr        $v0
label_3d3cc0:
    if (ctx->pc == 0x3D3CC0u) {
        ctx->pc = 0x3D3CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3CBCu;
        // 0x3d3cc0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3CC4u;
        goto label_3d3cc4;
    }
    ctx->pc = 0x3D3CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D3CC4u);
        ctx->pc = 0x3D3CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3CBCu;
        // 0x3d3cc0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3CBCu, 0x3D3CC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D3CC4u;
label_3d3cc4:
    // 0x3d3cc4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3d3cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3d3cc8:
    // 0x3d3cc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d3cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d3ccc:
    // 0x3d3ccc: 0xc10c313  jal         func_430C4C
label_3d3cd0:
    if (ctx->pc == 0x3D3CD0u) {
        ctx->pc = 0x3D3CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3CCCu;
        // 0x3d3cd0: 0x24a54d40  addiu       $a1, $a1, 0x4D40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3CD4u;
        goto label_3d3cd4;
    }
    ctx->pc = 0x3D3CCCu;
    SET_GPR_U32(ctx, 31, 0x3D3CD4u);
    ctx->pc = 0x3D3CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3CCCu;
    // 0x3d3cd0: 0x24a54d40  addiu       $a1, $a1, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x3D3CCCu, 0x3D3CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3CD4u;
label_3d3cd4:
    // 0x3d3cd4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3d3cd8:
    if (ctx->pc == 0x3D3CD8u) {
        ctx->pc = 0x3D3CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3CD4u;
        // 0x3d3cd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3CDCu;
        goto label_3d3cdc;
    }
    ctx->pc = 0x3D3CD4u;
    {
        const bool branch_taken_0x3d3cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3CD4u;
        // 0x3d3cd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3cd4) {
            ctx->pc = 0x3D3CE4u;
            goto label_3d3ce4;
        }
    }
    ctx->pc = 0x3D3CDCu;
label_3d3cdc:
    // 0x3d3cdc: 0x10000004  b           . + 4 + (0x4 << 2)
label_3d3ce0:
    if (ctx->pc == 0x3D3CE0u) {
        ctx->pc = 0x3D3CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3CDCu;
        // 0x3d3ce0: 0xae2000c4  sw          $zero, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3CE4u;
        goto label_3d3ce4;
    }
    ctx->pc = 0x3D3CDCu;
    {
        const bool branch_taken_0x3d3cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3CDCu;
        // 0x3d3ce0: 0xae2000c4  sw          $zero, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3cdc) {
            ctx->pc = 0x3D3CF0u;
            goto label_3d3cf0;
        }
    }
    ctx->pc = 0x3D3CE4u;
label_3d3ce4:
    // 0x3d3ce4: 0xc0e9132  jal         func_3A44C8
label_3d3ce8:
    if (ctx->pc == 0x3D3CE8u) {
        ctx->pc = 0x3D3CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3CE4u;
        // 0x3d3ce8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3CECu;
        goto label_3d3cec;
    }
    ctx->pc = 0x3D3CE4u;
    SET_GPR_U32(ctx, 31, 0x3D3CECu);
    ctx->pc = 0x3D3CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3CE4u;
    // 0x3d3ce8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3D3CE4u, 0x3D3CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3CECu;
label_3d3cec:
    // 0x3d3cec: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x3d3cecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_3d3cf0:
    // 0x3d3cf0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3d3cf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d3cf4:
    // 0x3d3cf4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3d3cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3d3cf8:
    // 0x3d3cf8: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3d3cf8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d3cfc:
    // 0x3d3cfc: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3d3cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3d3d00:
    // 0x3d3d00: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x3d3d00u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
label_3d3d04:
    // 0x3d3d04: 0xae440014  sw          $a0, 0x14($s2)
    ctx->pc = 0x3d3d04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 4));
label_3d3d08:
    // 0x3d3d08: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x3d3d08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_3d3d0c:
    // 0x3d3d0c: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x3d3d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_3d3d10:
    // 0x3d3d10: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x3d3d10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
label_3d3d14:
    // 0x3d3d14: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3d3d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d3d18:
    // 0x3d3d18: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3d3d18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d3d1c:
    // 0x3d3d1c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3d3d1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d3d20:
    // 0x3d3d20: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d3d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3d3d24:
    // 0x3d3d24: 0x3e00008  jr          $ra
label_3d3d28:
    if (ctx->pc == 0x3D3D28u) {
        ctx->pc = 0x3D3D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3D24u;
        // 0x3d3d28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3D2Cu;
        goto label_3d3d2c;
    }
    ctx->pc = 0x3D3D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3D24u;
        // 0x3d3d28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D3D2Cu;
label_3d3d2c:
    // 0x3d3d2c: 0x0  nop
    ctx->pc = 0x3d3d2cu;
    // NOP
    ctx->pc = 0x3d3d30u;
}
