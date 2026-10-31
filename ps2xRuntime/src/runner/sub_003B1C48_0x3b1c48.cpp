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

// Function: sub_003B1C48
// Address: 0x3b1c48 - 0x3b1cf0
void sub_003B1C48_0x3b1c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1C48_0x3b1c48");
#endif

    switch (ctx->pc) {
        case 0x3b1c48u: goto label_3b1c48;
        case 0x3b1c4cu: goto label_3b1c4c;
        case 0x3b1c50u: goto label_3b1c50;
        case 0x3b1c54u: goto label_3b1c54;
        case 0x3b1c58u: goto label_3b1c58;
        case 0x3b1c5cu: goto label_3b1c5c;
        case 0x3b1c60u: goto label_3b1c60;
        case 0x3b1c64u: goto label_3b1c64;
        case 0x3b1c68u: goto label_3b1c68;
        case 0x3b1c6cu: goto label_3b1c6c;
        case 0x3b1c70u: goto label_3b1c70;
        case 0x3b1c74u: goto label_3b1c74;
        case 0x3b1c78u: goto label_3b1c78;
        case 0x3b1c7cu: goto label_3b1c7c;
        case 0x3b1c80u: goto label_3b1c80;
        case 0x3b1c84u: goto label_3b1c84;
        case 0x3b1c88u: goto label_3b1c88;
        case 0x3b1c8cu: goto label_3b1c8c;
        case 0x3b1c90u: goto label_3b1c90;
        case 0x3b1c94u: goto label_3b1c94;
        case 0x3b1c98u: goto label_3b1c98;
        case 0x3b1c9cu: goto label_3b1c9c;
        case 0x3b1ca0u: goto label_3b1ca0;
        case 0x3b1ca4u: goto label_3b1ca4;
        case 0x3b1ca8u: goto label_3b1ca8;
        case 0x3b1cacu: goto label_3b1cac;
        case 0x3b1cb0u: goto label_3b1cb0;
        case 0x3b1cb4u: goto label_3b1cb4;
        case 0x3b1cb8u: goto label_3b1cb8;
        case 0x3b1cbcu: goto label_3b1cbc;
        case 0x3b1cc0u: goto label_3b1cc0;
        case 0x3b1cc4u: goto label_3b1cc4;
        case 0x3b1cc8u: goto label_3b1cc8;
        case 0x3b1cccu: goto label_3b1ccc;
        case 0x3b1cd0u: goto label_3b1cd0;
        case 0x3b1cd4u: goto label_3b1cd4;
        case 0x3b1cd8u: goto label_3b1cd8;
        case 0x3b1cdcu: goto label_3b1cdc;
        case 0x3b1ce0u: goto label_3b1ce0;
        case 0x3b1ce4u: goto label_3b1ce4;
        case 0x3b1ce8u: goto label_3b1ce8;
        case 0x3b1cecu: goto label_3b1cec;
        default: break;
    }

    ctx->pc = 0x3b1c48u;

label_3b1c48:
    // 0x3b1c48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b1c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3b1c4c:
    // 0x3b1c4c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3b1c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3b1c50:
    // 0x3b1c50: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b1c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3b1c54:
    // 0x3b1c54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b1c54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b1c58:
    // 0x3b1c58: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3b1c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3b1c5c:
    // 0x3b1c5c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b1c5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b1c60:
    // 0x3b1c60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b1c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b1c64:
    // 0x3b1c64: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b1c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b1c68:
    // 0x3b1c68: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b1c68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b1c6c:
    // 0x3b1c6c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b1c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b1c70:
    // 0x3b1c70: 0x40f809  jalr        $v0
label_3b1c74:
    if (ctx->pc == 0x3B1C74u) {
        ctx->pc = 0x3B1C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1C70u;
        // 0x3b1c74: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1C78u;
        goto label_3b1c78;
    }
    ctx->pc = 0x3B1C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B1C78u);
        ctx->pc = 0x3B1C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1C70u;
        // 0x3b1c74: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1C70u, 0x3B1C78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1C78u;
label_3b1c78:
    // 0x3b1c78: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3b1c78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b1c7c:
    // 0x3b1c7c: 0xc0ea14c  jal         func_3A8530
label_3b1c80:
    if (ctx->pc == 0x3B1C80u) {
        ctx->pc = 0x3B1C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1C7Cu;
        // 0x3b1c80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1C84u;
        goto label_3b1c84;
    }
    ctx->pc = 0x3B1C7Cu;
    SET_GPR_U32(ctx, 31, 0x3B1C84u);
    ctx->pc = 0x3B1C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1C7Cu;
    // 0x3b1c80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3B1C7Cu, 0x3B1C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1C84u;
label_3b1c84:
    // 0x3b1c84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3b1c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b1c88:
    // 0x3b1c88: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3b1c88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3b1c8c:
    // 0x3b1c8c: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x3b1c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3b1c90:
    // 0x3b1c90: 0xa0f809  jalr        $a1
label_3b1c94:
    if (ctx->pc == 0x3B1C94u) {
        ctx->pc = 0x3B1C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1C90u;
        // 0x3b1c94: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1C98u;
        goto label_3b1c98;
    }
    ctx->pc = 0x3B1C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3B1C98u);
        ctx->pc = 0x3B1C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1C90u;
        // 0x3b1c94: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1C90u, 0x3B1C98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1C98u;
label_3b1c98:
    // 0x3b1c98: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3b1c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3b1c9c:
    // 0x3b1c9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3b1c9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b1ca0:
    // 0x3b1ca0: 0x3c0300c0  lui         $v1, 0xC0
    ctx->pc = 0x3b1ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)192 << 16));
label_3b1ca4:
    // 0x3b1ca4: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x3b1ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
label_3b1ca8:
    // 0x3b1ca8: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x3b1ca8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_3b1cac:
    // 0x3b1cac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b1cacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b1cb0:
    // 0x3b1cb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b1cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b1cb4:
    // 0x3b1cb4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3b1cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3b1cb8:
    // 0x3b1cb8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3b1cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b1cbc:
    // 0x3b1cbc: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3b1cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3b1cc0:
    // 0x3b1cc0: 0xe60100cc  swc1        $f1, 0xCC($s0)
    ctx->pc = 0x3b1cc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 204), bits); }
label_3b1cc4:
    // 0x3b1cc4: 0xc0e858c  jal         func_3A1630
label_3b1cc8:
    if (ctx->pc == 0x3B1CC8u) {
        ctx->pc = 0x3B1CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1CC4u;
        // 0x3b1cc8: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1CCCu;
        goto label_3b1ccc;
    }
    ctx->pc = 0x3B1CC4u;
    SET_GPR_U32(ctx, 31, 0x3B1CCCu);
    ctx->pc = 0x3B1CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1CC4u;
    // 0x3b1cc8: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3B1CC4u, 0x3B1CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1CCCu;
label_3b1ccc:
    // 0x3b1ccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b1cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b1cd0:
    // 0x3b1cd0: 0xc0ec68a  jal         func_3B1A28
label_3b1cd4:
    if (ctx->pc == 0x3B1CD4u) {
        ctx->pc = 0x3B1CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1CD0u;
        // 0x3b1cd4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1CD8u;
        goto label_3b1cd8;
    }
    ctx->pc = 0x3B1CD0u;
    SET_GPR_U32(ctx, 31, 0x3B1CD8u);
    ctx->pc = 0x3B1CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1CD0u;
    // 0x3b1cd4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1A28u, 0x3B1CD0u, 0x3B1CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1CD8u;
label_3b1cd8:
    // 0x3b1cd8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3b1cd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b1cdc:
    // 0x3b1cdc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b1cdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b1ce0:
    // 0x3b1ce0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3b1ce0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b1ce4:
    // 0x3b1ce4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b1ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b1ce8:
    // 0x3b1ce8: 0x3e00008  jr          $ra
label_3b1cec:
    if (ctx->pc == 0x3B1CECu) {
        ctx->pc = 0x3B1CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1CE8u;
        // 0x3b1cec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1CF0u;
        goto label_fallthrough_0x3b1ce8;
    }
    ctx->pc = 0x3B1CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1CE8u;
        // 0x3b1cec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b1ce8:
    ctx->pc = 0x3B1CF0u;
}
