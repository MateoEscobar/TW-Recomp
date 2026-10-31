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

// Function: sub_003C5960
// Address: 0x3c5960 - 0x3c5a18
void sub_003C5960_0x3c5960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5960_0x3c5960");
#endif

    switch (ctx->pc) {
        case 0x3c59a0u: goto label_3c59a0;
        case 0x3c59acu: goto label_3c59ac;
        case 0x3c59b8u: goto label_3c59b8;
        case 0x3c59c4u: goto label_3c59c4;
        case 0x3c59d0u: goto label_3c59d0;
        case 0x3c59dcu: goto label_3c59dc;
        case 0x3c59ecu: goto label_3c59ec;
        case 0x3c59f4u: goto label_3c59f4;
        default: break;
    }

    ctx->pc = 0x3c5960u;

    // 0x3c5960: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3c5960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3c5964: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3c5964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3c5968: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c5968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3c596c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3c596cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x3c5970: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c5970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5974: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3c5974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3c5978: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3c5978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3c597c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c597cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5980: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3c5980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3c5984: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3c5984u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5988: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x3c5988u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3c598c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3c598cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5990: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5990u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3c5994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c5994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c5998: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3C5998u;
    SET_GPR_U32(ctx, 31, 0x3C59A0u);
    ctx->pc = 0x3C599Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5998u;
    // 0x3c599c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3C5998u, 0x3C59A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C59A0u;
label_3c59a0:
    // 0x3c59a0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c59a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c59a4: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3C59A4u;
    SET_GPR_U32(ctx, 31, 0x3C59ACu);
    ctx->pc = 0x3C59A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C59A4u;
    // 0x3c59a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3C59A4u, 0x3C59ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C59ACu;
label_3c59ac:
    // 0x3c59ac: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c59acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c59b0: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3C59B0u;
    SET_GPR_U32(ctx, 31, 0x3C59B8u);
    ctx->pc = 0x3C59B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C59B0u;
    // 0x3c59b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3C59B0u, 0x3C59B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C59B8u;
label_3c59b8:
    // 0x3c59b8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c59b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c59bc: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3C59BCu;
    SET_GPR_U32(ctx, 31, 0x3C59C4u);
    ctx->pc = 0x3C59C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C59BCu;
    // 0x3c59c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3C59BCu, 0x3C59C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C59C4u;
label_3c59c4:
    // 0x3c59c4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c59c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c59c8: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3C59C8u;
    SET_GPR_U32(ctx, 31, 0x3C59D0u);
    ctx->pc = 0x3C59CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C59C8u;
    // 0x3c59cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3C59C8u, 0x3C59D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C59D0u;
label_3c59d0:
    // 0x3c59d0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c59d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c59d4: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3C59D4u;
    SET_GPR_U32(ctx, 31, 0x3C59DCu);
    ctx->pc = 0x3C59D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C59D4u;
    // 0x3c59d8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3C59D4u, 0x3C59DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C59DCu;
label_3c59dc:
    // 0x3c59dc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c59dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c59e0: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3c59e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3c59e4: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x3C59E4u;
    SET_GPR_U32(ctx, 31, 0x3C59ECu);
    ctx->pc = 0x3C59E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C59E4u;
    // 0x3c59e8: 0x24a53f60  addiu       $a1, $a1, 0x3F60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x3C59E4u, 0x3C59ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C59ECu;
label_3c59ec:
    // 0x3c59ec: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3C59ECu;
    SET_GPR_U32(ctx, 31, 0x3C59F4u);
    ctx->pc = 0x3C59F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C59ECu;
    // 0x3c59f0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3C59ECu, 0x3C59F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C59F4u;
label_3c59f4:
    // 0x3c59f4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3c59f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c59f8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3c59f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c59fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c59fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c5a00: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3c5a00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c5a04: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3c5a04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c5a08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c5a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c5a0c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x3c5a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c5a10: 0x3e00008  jr          $ra
    ctx->pc = 0x3C5A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5A10u;
        // 0x3c5a14: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5A18u;
}
