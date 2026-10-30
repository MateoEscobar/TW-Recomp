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

// Function: sub_00391378
// Address: 0x391378 - 0x3913d8
void sub_00391378_0x391378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00391378_0x391378");
#endif

    switch (ctx->pc) {
        case 0x3913b4u: goto label_3913b4;
        case 0x3913c4u: goto label_3913c4;
        default: break;
    }

    ctx->pc = 0x391378u;

    // 0x391378: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x391378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x39137c: 0x24a30028  addiu       $v1, $a1, 0x28
    ctx->pc = 0x39137cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
    // 0x391380: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x391380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x391384: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x391384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x391388: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x391388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x39138c: 0x34424df4  ori         $v0, $v0, 0x4DF4
    ctx->pc = 0x39138cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19956);
    // 0x391390: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x391390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x391394: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x391394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x391398: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x391398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x39139c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39139cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3913a0: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x3913a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x3913a4: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x3913a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
    // 0x3913a8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x3913a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3913ac: 0xc13cd60  jal         func_4F3580
    ctx->pc = 0x3913ACu;
    SET_GPR_U32(ctx, 31, 0x3913B4u);
    ctx->pc = 0x3913B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3913ACu;
    // 0x3913b0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F3580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F3580u, 0x3913ACu, 0x3913B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3913B4u;
label_3913b4:
    // 0x3913b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3913b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3913b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3913b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3913bc: 0xc13cdfa  jal         func_4F37E8
    ctx->pc = 0x3913BCu;
    SET_GPR_U32(ctx, 31, 0x3913C4u);
    ctx->pc = 0x3913C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3913BCu;
    // 0x3913c0: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F37E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F37E8u, 0x3913BCu, 0x3913C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3913C4u;
label_3913c4:
    // 0x3913c4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3913c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3913c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3913c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3913cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3913CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3913D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3913CCu;
        // 0x3913d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3913CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3913D4u;
    // 0x3913d4: 0x0  nop
    ctx->pc = 0x3913d4u;
    // NOP
    ctx->pc = 0x3913d8u;
}
