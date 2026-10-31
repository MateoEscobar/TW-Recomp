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

// Function: sub_001E99F8
// Address: 0x1e99f8 - 0x1e9aa8
void sub_001E99F8_0x1e99f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E99F8_0x1e99f8");
#endif

    switch (ctx->pc) {
        case 0x1e9a40u: goto label_1e9a40;
        case 0x1e9a4cu: goto label_1e9a4c;
        case 0x1e9a58u: goto label_1e9a58;
        case 0x1e9a64u: goto label_1e9a64;
        case 0x1e9a70u: goto label_1e9a70;
        case 0x1e9a7cu: goto label_1e9a7c;
        default: break;
    }

    ctx->pc = 0x1e99f8u;

    // 0x1e99f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e99f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e99fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e99fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e9a00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e9a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e9a04: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1e9a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1e9a08: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1e9a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1e9a0c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1e9a0cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x1e9a10: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e9a10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9a14: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1e9a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1e9a18: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e9a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e9a1c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e9a1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9a20: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x1e9a20u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x1e9a24: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1e9a24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9a28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e9a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e9a2c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1e9a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e9a30: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e9a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1e9a34: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e9a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1e9a38: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x1E9A38u;
    SET_GPR_U32(ctx, 31, 0x1E9A40u);
    ctx->pc = 0x1E9A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A38u;
    // 0x1e9a3c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x1E9A38u, 0x1E9A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A40u;
label_1e9a40:
    // 0x1e9a40: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x1e9a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x1e9a44: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x1E9A44u;
    SET_GPR_U32(ctx, 31, 0x1E9A4Cu);
    ctx->pc = 0x1E9A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A44u;
    // 0x1e9a48: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x1E9A44u, 0x1E9A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A4Cu;
label_1e9a4c:
    // 0x1e9a4c: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x1e9a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x1e9a50: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x1E9A50u;
    SET_GPR_U32(ctx, 31, 0x1E9A58u);
    ctx->pc = 0x1E9A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A50u;
    // 0x1e9a54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x1E9A50u, 0x1E9A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A58u;
label_1e9a58:
    // 0x1e9a58: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x1e9a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x1e9a5c: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x1E9A5Cu;
    SET_GPR_U32(ctx, 31, 0x1E9A64u);
    ctx->pc = 0x1E9A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A5Cu;
    // 0x1e9a60: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x1E9A5Cu, 0x1E9A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A64u;
label_1e9a64:
    // 0x1e9a64: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x1e9a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x1e9a68: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x1E9A68u;
    SET_GPR_U32(ctx, 31, 0x1E9A70u);
    ctx->pc = 0x1E9A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A68u;
    // 0x1e9a6c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x1E9A68u, 0x1E9A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A70u;
label_1e9a70:
    // 0x1e9a70: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x1e9a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x1e9a74: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x1E9A74u;
    SET_GPR_U32(ctx, 31, 0x1E9A7Cu);
    ctx->pc = 0x1E9A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A74u;
    // 0x1e9a78: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x1E9A74u, 0x1E9A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A7Cu;
label_1e9a7c:
    // 0x1e9a7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e9a7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9a80: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1e9a80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e9a84: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1e9a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9a88: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e9a88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e9a8c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1e9a8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9a90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e9a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9a94: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9A94u;
        // 0x1e9a98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9A9Cu;
    // 0x1e9a9c: 0x0  nop
    ctx->pc = 0x1e9a9cu;
    // NOP
    // 0x1e9aa0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e9aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e9aa4: 0x0  nop
    ctx->pc = 0x1e9aa4u;
    // NOP
    ctx->pc = 0x1e9aa8u;
}
