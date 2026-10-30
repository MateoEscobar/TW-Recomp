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

// Function: sub_0036F380
// Address: 0x36f380 - 0x36f3e8
void sub_0036F380_0x36f380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F380_0x36f380");
#endif

    switch (ctx->pc) {
        case 0x36f3a0u: goto label_36f3a0;
        case 0x36f3b8u: goto label_36f3b8;
        case 0x36f3c0u: goto label_36f3c0;
        case 0x36f3ccu: goto label_36f3cc;
        default: break;
    }

    ctx->pc = 0x36f380u;

    // 0x36f380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36f380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36f384: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36f384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36f388: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36f388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36f38c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36f38cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f390: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36f390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36f394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36f394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36f398: 0xc102488  jal         func_409220
    ctx->pc = 0x36F398u;
    SET_GPR_U32(ctx, 31, 0x36F3A0u);
    ctx->pc = 0x36F39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F398u;
    // 0x36f39c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36F398u, 0x36F3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F3A0u;
label_36f3a0:
    // 0x36f3a0: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x36f3a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x36f3a4: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x36f3a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x36f3a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36f3a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f3ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36f3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f3b0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36F3B0u;
    SET_GPR_U32(ctx, 31, 0x36F3B8u);
    ctx->pc = 0x36F3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F3B0u;
    // 0x36f3b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36F3B0u, 0x36F3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F3B8u;
label_36f3b8:
    // 0x36f3b8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36F3B8u;
    SET_GPR_U32(ctx, 31, 0x36F3C0u);
    ctx->pc = 0x36F3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F3B8u;
    // 0x36f3bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36F3B8u, 0x36F3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F3C0u;
label_36f3c0:
    // 0x36f3c0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x36f3c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f3c4: 0xc06d260  jal         func_1B4980
    ctx->pc = 0x36F3C4u;
    SET_GPR_U32(ctx, 31, 0x36F3CCu);
    ctx->pc = 0x36F3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F3C4u;
    // 0x36f3c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4980u, 0x36F3C4u, 0x36F3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F3CCu;
label_36f3cc:
    // 0x36f3cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36f3ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36f3d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36f3d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f3d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36f3d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36f3d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36f3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x36F3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F3DCu;
        // 0x36f3e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F3E4u;
    // 0x36f3e4: 0x0  nop
    ctx->pc = 0x36f3e4u;
    // NOP
    ctx->pc = 0x36f3e8u;
}
