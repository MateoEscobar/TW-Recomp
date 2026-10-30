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

// Function: sub_003C5E50
// Address: 0x3c5e50 - 0x3c5ef0
void sub_003C5E50_0x3c5e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5E50_0x3c5e50");
#endif

    switch (ctx->pc) {
        case 0x3c5e88u: goto label_3c5e88;
        case 0x3c5e94u: goto label_3c5e94;
        case 0x3c5ea0u: goto label_3c5ea0;
        case 0x3c5eacu: goto label_3c5eac;
        case 0x3c5eb8u: goto label_3c5eb8;
        case 0x3c5ec8u: goto label_3c5ec8;
        case 0x3c5ed0u: goto label_3c5ed0;
        default: break;
    }

    ctx->pc = 0x3c5e50u;

    // 0x3c5e50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3c5e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3c5e54: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3c5e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3c5e58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c5e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3c5e5c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3c5e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x3c5e60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c5e60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5e64: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3c5e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3c5e68: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3c5e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3c5e6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c5e6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5e70: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x3c5e70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3c5e74: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3c5e74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5e78: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5e78u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3c5e7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c5e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c5e80: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3C5E80u;
    SET_GPR_U32(ctx, 31, 0x3C5E88u);
    ctx->pc = 0x3C5E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5E80u;
    // 0x3c5e84: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3C5E80u, 0x3C5E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5E88u;
label_3c5e88:
    // 0x3c5e88: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5e8c: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3C5E8Cu;
    SET_GPR_U32(ctx, 31, 0x3C5E94u);
    ctx->pc = 0x3C5E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5E8Cu;
    // 0x3c5e90: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3C5E8Cu, 0x3C5E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5E94u;
label_3c5e94:
    // 0x3c5e94: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5e98: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3C5E98u;
    SET_GPR_U32(ctx, 31, 0x3C5EA0u);
    ctx->pc = 0x3C5E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5E98u;
    // 0x3c5e9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3C5E98u, 0x3C5EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5EA0u;
label_3c5ea0:
    // 0x3c5ea0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5ea4: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3C5EA4u;
    SET_GPR_U32(ctx, 31, 0x3C5EACu);
    ctx->pc = 0x3C5EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5EA4u;
    // 0x3c5ea8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3C5EA4u, 0x3C5EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5EACu;
label_3c5eac:
    // 0x3c5eac: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5eb0: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3C5EB0u;
    SET_GPR_U32(ctx, 31, 0x3C5EB8u);
    ctx->pc = 0x3C5EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5EB0u;
    // 0x3c5eb4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3C5EB0u, 0x3C5EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5EB8u;
label_3c5eb8:
    // 0x3c5eb8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5ebc: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3c5ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3c5ec0: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x3C5EC0u;
    SET_GPR_U32(ctx, 31, 0x3C5EC8u);
    ctx->pc = 0x3C5EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5EC0u;
    // 0x3c5ec4: 0x24a53eb8  addiu       $a1, $a1, 0x3EB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x3C5EC0u, 0x3C5EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5EC8u;
label_3c5ec8:
    // 0x3c5ec8: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3C5EC8u;
    SET_GPR_U32(ctx, 31, 0x3C5ED0u);
    ctx->pc = 0x3C5ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5EC8u;
    // 0x3c5ecc: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3C5EC8u, 0x3C5ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5ED0u;
label_3c5ed0:
    // 0x3c5ed0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3c5ed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c5ed4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3c5ed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c5ed8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c5ed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c5edc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3c5edcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c5ee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c5ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c5ee4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x3c5ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c5ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C5EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5EE8u;
        // 0x3c5eec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5EF0u;
}
