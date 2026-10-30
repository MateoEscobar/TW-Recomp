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

// Function: sub_003C5EF0
// Address: 0x3c5ef0 - 0x3c5fa8
void sub_003C5EF0_0x3c5ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5EF0_0x3c5ef0");
#endif

    switch (ctx->pc) {
        case 0x3c5f30u: goto label_3c5f30;
        case 0x3c5f3cu: goto label_3c5f3c;
        case 0x3c5f48u: goto label_3c5f48;
        case 0x3c5f54u: goto label_3c5f54;
        case 0x3c5f60u: goto label_3c5f60;
        case 0x3c5f6cu: goto label_3c5f6c;
        case 0x3c5f7cu: goto label_3c5f7c;
        case 0x3c5f84u: goto label_3c5f84;
        default: break;
    }

    ctx->pc = 0x3c5ef0u;

    // 0x3c5ef0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3c5ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3c5ef4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3c5ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3c5ef8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c5ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3c5efc: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3c5efcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x3c5f00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c5f00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5f04: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3c5f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3c5f08: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3c5f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3c5f0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c5f0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5f10: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3c5f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3c5f14: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3c5f14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5f18: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x3c5f18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3c5f1c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3c5f1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5f20: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5f20u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3c5f24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c5f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c5f28: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3C5F28u;
    SET_GPR_U32(ctx, 31, 0x3C5F30u);
    ctx->pc = 0x3C5F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5F28u;
    // 0x3c5f2c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3C5F28u, 0x3C5F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5F30u;
label_3c5f30:
    // 0x3c5f30: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5f34: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3C5F34u;
    SET_GPR_U32(ctx, 31, 0x3C5F3Cu);
    ctx->pc = 0x3C5F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5F34u;
    // 0x3c5f38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3C5F34u, 0x3C5F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5F3Cu;
label_3c5f3c:
    // 0x3c5f3c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5f40: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3C5F40u;
    SET_GPR_U32(ctx, 31, 0x3C5F48u);
    ctx->pc = 0x3C5F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5F40u;
    // 0x3c5f44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3C5F40u, 0x3C5F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5F48u;
label_3c5f48:
    // 0x3c5f48: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5f4c: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3C5F4Cu;
    SET_GPR_U32(ctx, 31, 0x3C5F54u);
    ctx->pc = 0x3C5F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5F4Cu;
    // 0x3c5f50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3C5F4Cu, 0x3C5F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5F54u;
label_3c5f54:
    // 0x3c5f54: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5f58: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3C5F58u;
    SET_GPR_U32(ctx, 31, 0x3C5F60u);
    ctx->pc = 0x3C5F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5F58u;
    // 0x3c5f5c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3C5F58u, 0x3C5F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5F60u;
label_3c5f60:
    // 0x3c5f60: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5f64: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3C5F64u;
    SET_GPR_U32(ctx, 31, 0x3C5F6Cu);
    ctx->pc = 0x3C5F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5F64u;
    // 0x3c5f68: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3C5F64u, 0x3C5F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5F6Cu;
label_3c5f6c:
    // 0x3c5f6c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5f70: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3c5f70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3c5f74: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x3C5F74u;
    SET_GPR_U32(ctx, 31, 0x3C5F7Cu);
    ctx->pc = 0x3C5F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5F74u;
    // 0x3c5f78: 0x24a532c8  addiu       $a1, $a1, 0x32C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x3C5F74u, 0x3C5F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5F7Cu;
label_3c5f7c:
    // 0x3c5f7c: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3C5F7Cu;
    SET_GPR_U32(ctx, 31, 0x3C5F84u);
    ctx->pc = 0x3C5F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5F7Cu;
    // 0x3c5f80: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3C5F7Cu, 0x3C5F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5F84u;
label_3c5f84:
    // 0x3c5f84: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3c5f84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c5f88: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3c5f88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c5f8c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c5f8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c5f90: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3c5f90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c5f94: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3c5f94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c5f98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c5f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c5f9c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x3c5f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c5fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C5FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5FA0u;
        // 0x3c5fa4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5FA8u;
}
