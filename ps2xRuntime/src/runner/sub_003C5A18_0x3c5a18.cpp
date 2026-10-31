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

// Function: sub_003C5A18
// Address: 0x3c5a18 - 0x3c5b00
void sub_003C5A18_0x3c5a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5A18_0x3c5a18");
#endif

    switch (ctx->pc) {
        case 0x3c5a68u: goto label_3c5a68;
        case 0x3c5a74u: goto label_3c5a74;
        case 0x3c5a80u: goto label_3c5a80;
        case 0x3c5a8cu: goto label_3c5a8c;
        case 0x3c5a98u: goto label_3c5a98;
        case 0x3c5aa4u: goto label_3c5aa4;
        case 0x3c5ab0u: goto label_3c5ab0;
        case 0x3c5abcu: goto label_3c5abc;
        case 0x3c5accu: goto label_3c5acc;
        case 0x3c5ad4u: goto label_3c5ad4;
        default: break;
    }

    ctx->pc = 0x3c5a18u;

    // 0x3c5a18: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3c5a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3c5a1c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3c5a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3c5a20: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3c5a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3c5a24: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3c5a24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x3c5a28: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c5a28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5a2c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3c5a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3c5a30: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3c5a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3c5a34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c5a34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5a38: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3c5a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3c5a3c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3c5a3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5a40: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3c5a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3c5a44: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3c5a44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5a48: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3c5a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x3c5a4c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x3c5a4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5a50: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x3c5a50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3c5a54: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x3c5a54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5a58: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5a58u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3c5a5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c5a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c5a60: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3C5A60u;
    SET_GPR_U32(ctx, 31, 0x3C5A68u);
    ctx->pc = 0x3C5A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5A60u;
    // 0x3c5a64: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3C5A60u, 0x3C5A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5A68u;
label_3c5a68:
    // 0x3c5a68: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5a6c: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3C5A6Cu;
    SET_GPR_U32(ctx, 31, 0x3C5A74u);
    ctx->pc = 0x3C5A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5A6Cu;
    // 0x3c5a70: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3C5A6Cu, 0x3C5A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5A74u;
label_3c5a74:
    // 0x3c5a74: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5a78: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3C5A78u;
    SET_GPR_U32(ctx, 31, 0x3C5A80u);
    ctx->pc = 0x3C5A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5A78u;
    // 0x3c5a7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3C5A78u, 0x3C5A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5A80u;
label_3c5a80:
    // 0x3c5a80: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5a84: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3C5A84u;
    SET_GPR_U32(ctx, 31, 0x3C5A8Cu);
    ctx->pc = 0x3C5A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5A84u;
    // 0x3c5a88: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3C5A84u, 0x3C5A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5A8Cu;
label_3c5a8c:
    // 0x3c5a8c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5a90: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3C5A90u;
    SET_GPR_U32(ctx, 31, 0x3C5A98u);
    ctx->pc = 0x3C5A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5A90u;
    // 0x3c5a94: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3C5A90u, 0x3C5A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5A98u;
label_3c5a98:
    // 0x3c5a98: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5a9c: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3C5A9Cu;
    SET_GPR_U32(ctx, 31, 0x3C5AA4u);
    ctx->pc = 0x3C5AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5A9Cu;
    // 0x3c5aa0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3C5A9Cu, 0x3C5AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5AA4u;
label_3c5aa4:
    // 0x3c5aa4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5aa8: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3C5AA8u;
    SET_GPR_U32(ctx, 31, 0x3C5AB0u);
    ctx->pc = 0x3C5AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5AA8u;
    // 0x3c5aac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3C5AA8u, 0x3C5AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5AB0u;
label_3c5ab0:
    // 0x3c5ab0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5ab4: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3C5AB4u;
    SET_GPR_U32(ctx, 31, 0x3C5ABCu);
    ctx->pc = 0x3C5AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5AB4u;
    // 0x3c5ab8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3C5AB4u, 0x3C5ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5ABCu;
label_3c5abc:
    // 0x3c5abc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5ac0: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3c5ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3c5ac4: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x3C5AC4u;
    SET_GPR_U32(ctx, 31, 0x3C5ACCu);
    ctx->pc = 0x3C5AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5AC4u;
    // 0x3c5ac8: 0x24a541b8  addiu       $a1, $a1, 0x41B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x3C5AC4u, 0x3C5ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5ACCu;
label_3c5acc:
    // 0x3c5acc: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3C5ACCu;
    SET_GPR_U32(ctx, 31, 0x3C5AD4u);
    ctx->pc = 0x3C5AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5ACCu;
    // 0x3c5ad0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3C5ACCu, 0x3C5AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5AD4u;
label_3c5ad4:
    // 0x3c5ad4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3c5ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3c5ad8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3c5ad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c5adc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3c5adcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c5ae0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3c5ae0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c5ae4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3c5ae4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c5ae8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3c5ae8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c5aec: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3c5aecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c5af0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c5af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c5af4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x3c5af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c5af8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C5AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5AF8u;
        // 0x3c5afc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5B00u;
}
