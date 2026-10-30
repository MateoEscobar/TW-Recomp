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

// Function: sub_003C6038
// Address: 0x3c6038 - 0x3c60d8
void sub_003C6038_0x3c6038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C6038_0x3c6038");
#endif

    switch (ctx->pc) {
        case 0x3c6070u: goto label_3c6070;
        case 0x3c607cu: goto label_3c607c;
        case 0x3c6088u: goto label_3c6088;
        case 0x3c6094u: goto label_3c6094;
        case 0x3c60a0u: goto label_3c60a0;
        case 0x3c60b0u: goto label_3c60b0;
        case 0x3c60b8u: goto label_3c60b8;
        default: break;
    }

    ctx->pc = 0x3c6038u;

    // 0x3c6038: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3c6038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3c603c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3c603cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3c6040: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c6040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3c6044: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3c6044u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x3c6048: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c6048u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c604c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3c604cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3c6050: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3c6050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3c6054: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c6054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6058: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x3c6058u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3c605c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3c605cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6060: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c6060u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3c6064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c6064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c6068: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3C6068u;
    SET_GPR_U32(ctx, 31, 0x3C6070u);
    ctx->pc = 0x3C606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6068u;
    // 0x3c606c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3C6068u, 0x3C6070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6070u;
label_3c6070:
    // 0x3c6070: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c6070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c6074: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3C6074u;
    SET_GPR_U32(ctx, 31, 0x3C607Cu);
    ctx->pc = 0x3C6078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6074u;
    // 0x3c6078: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3C6074u, 0x3C607Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C607Cu;
label_3c607c:
    // 0x3c607c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c607cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c6080: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3C6080u;
    SET_GPR_U32(ctx, 31, 0x3C6088u);
    ctx->pc = 0x3C6084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6080u;
    // 0x3c6084: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3C6080u, 0x3C6088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6088u;
label_3c6088:
    // 0x3c6088: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c6088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c608c: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3C608Cu;
    SET_GPR_U32(ctx, 31, 0x3C6094u);
    ctx->pc = 0x3C6090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C608Cu;
    // 0x3c6090: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3C608Cu, 0x3C6094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6094u;
label_3c6094:
    // 0x3c6094: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c6094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c6098: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3C6098u;
    SET_GPR_U32(ctx, 31, 0x3C60A0u);
    ctx->pc = 0x3C609Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6098u;
    // 0x3c609c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3C6098u, 0x3C60A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C60A0u;
label_3c60a0:
    // 0x3c60a0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c60a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c60a4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3c60a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3c60a8: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x3C60A8u;
    SET_GPR_U32(ctx, 31, 0x3C60B0u);
    ctx->pc = 0x3C60ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C60A8u;
    // 0x3c60ac: 0x24a53da8  addiu       $a1, $a1, 0x3DA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x3C60A8u, 0x3C60B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C60B0u;
label_3c60b0:
    // 0x3c60b0: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3C60B0u;
    SET_GPR_U32(ctx, 31, 0x3C60B8u);
    ctx->pc = 0x3C60B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C60B0u;
    // 0x3c60b4: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3C60B0u, 0x3C60B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C60B8u;
label_3c60b8:
    // 0x3c60b8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3c60b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c60bc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3c60bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c60c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c60c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c60c4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3c60c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c60c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c60c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c60cc: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x3c60ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c60d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C60D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C60D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C60D0u;
        // 0x3c60d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C60D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C60D8u;
}
