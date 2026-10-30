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

// Function: sub_00229770
// Address: 0x229770 - 0x229820
void sub_00229770_0x229770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229770_0x229770");
#endif

    switch (ctx->pc) {
        case 0x2297b0u: goto label_2297b0;
        case 0x2297bcu: goto label_2297bc;
        case 0x2297c8u: goto label_2297c8;
        case 0x2297d4u: goto label_2297d4;
        case 0x2297e0u: goto label_2297e0;
        case 0x2297f0u: goto label_2297f0;
        case 0x2297f8u: goto label_2297f8;
        default: break;
    }

    ctx->pc = 0x229770u;

    // 0x229770: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x229770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x229774: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x229774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x229778: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x229778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x22977c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x22977cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x229780: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x229780u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229784: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x229784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x229788: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x229788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x22978c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22978cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229790: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x229790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x229794: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x229794u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229798: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x229798u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x22979c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x22979cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2297a0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2297a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x2297a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2297a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2297a8: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x2297A8u;
    SET_GPR_U32(ctx, 31, 0x2297B0u);
    ctx->pc = 0x2297ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2297A8u;
    // 0x2297ac: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x2297A8u, 0x2297B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2297B0u;
label_2297b0:
    // 0x2297b0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2297b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2297b4: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x2297B4u;
    SET_GPR_U32(ctx, 31, 0x2297BCu);
    ctx->pc = 0x2297B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2297B4u;
    // 0x2297b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x2297B4u, 0x2297BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2297BCu;
label_2297bc:
    // 0x2297bc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2297bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2297c0: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x2297C0u;
    SET_GPR_U32(ctx, 31, 0x2297C8u);
    ctx->pc = 0x2297C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2297C0u;
    // 0x2297c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x2297C0u, 0x2297C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2297C8u;
label_2297c8:
    // 0x2297c8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2297c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2297cc: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x2297CCu;
    SET_GPR_U32(ctx, 31, 0x2297D4u);
    ctx->pc = 0x2297D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2297CCu;
    // 0x2297d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x2297CCu, 0x2297D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2297D4u;
label_2297d4:
    // 0x2297d4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2297d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2297d8: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x2297D8u;
    SET_GPR_U32(ctx, 31, 0x2297E0u);
    ctx->pc = 0x2297DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2297D8u;
    // 0x2297dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x2297D8u, 0x2297E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2297E0u;
label_2297e0:
    // 0x2297e0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2297e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2297e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2297e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2297e8: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x2297E8u;
    SET_GPR_U32(ctx, 31, 0x2297F0u);
    ctx->pc = 0x2297ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2297E8u;
    // 0x2297ec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x2297E8u, 0x2297F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2297F0u;
label_2297f0:
    // 0x2297f0: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x2297F0u;
    SET_GPR_U32(ctx, 31, 0x2297F8u);
    ctx->pc = 0x2297F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2297F0u;
    // 0x2297f4: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x2297F0u, 0x2297F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2297F8u;
label_2297f8:
    // 0x2297f8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2297f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2297fc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2297fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229800: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x229800u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229804: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x229804u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229808: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x229808u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22980c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22980cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229810: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x229810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x229814: 0x3e00008  jr          $ra
    ctx->pc = 0x229814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229814u;
        // 0x229818: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22981Cu;
    // 0x22981c: 0x0  nop
    ctx->pc = 0x22981cu;
    // NOP
    ctx->pc = 0x229820u;
}
