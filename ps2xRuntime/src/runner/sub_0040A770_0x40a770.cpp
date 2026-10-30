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

// Function: sub_0040A770
// Address: 0x40a770 - 0x40a7d8
void sub_0040A770_0x40a770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040A770_0x40a770");
#endif

    switch (ctx->pc) {
        case 0x40a794u: goto label_40a794;
        case 0x40a7a0u: goto label_40a7a0;
        case 0x40a7acu: goto label_40a7ac;
        case 0x40a7b8u: goto label_40a7b8;
        case 0x40a7c4u: goto label_40a7c4;
        default: break;
    }

    ctx->pc = 0x40a770u;

    // 0x40a770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40a770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x40a774: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40a774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x40a778: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x40a778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x40a77c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x40a77cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a780: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40a780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a784: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40a784u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40a788: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40a788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40a78c: 0xc102866  jal         func_40A198
    ctx->pc = 0x40A78Cu;
    SET_GPR_U32(ctx, 31, 0x40A794u);
    ctx->pc = 0x40A790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A78Cu;
    // 0x40a790: 0x24a58238  addiu       $a1, $a1, -0x7DC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A198u, 0x40A78Cu, 0x40A794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A794u;
label_40a794:
    // 0x40a794: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40a794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a798: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40A798u;
    SET_GPR_U32(ctx, 31, 0x40A7A0u);
    ctx->pc = 0x40A79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A798u;
    // 0x40a79c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40A798u, 0x40A7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A7A0u;
label_40a7a0:
    // 0x40a7a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a7a4: 0xc0c8ef2  jal         func_323BC8
    ctx->pc = 0x40A7A4u;
    SET_GPR_U32(ctx, 31, 0x40A7ACu);
    ctx->pc = 0x40A7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A7A4u;
    // 0x40a7a8: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323BC8u, 0x40A7A4u, 0x40A7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A7ACu;
label_40a7ac:
    // 0x40a7ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a7b0: 0xc0c8cf8  jal         func_3233E0
    ctx->pc = 0x40A7B0u;
    SET_GPR_U32(ctx, 31, 0x40A7B8u);
    ctx->pc = 0x40A7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A7B0u;
    // 0x40a7b4: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3233E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3233E0u, 0x40A7B0u, 0x40A7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A7B8u;
label_40a7b8:
    // 0x40a7b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a7bc: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x40A7BCu;
    SET_GPR_U32(ctx, 31, 0x40A7C4u);
    ctx->pc = 0x40A7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A7BCu;
    // 0x40a7c0: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x40A7BCu, 0x40A7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A7C4u;
label_40a7c4:
    // 0x40a7c4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x40a7c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40a7c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40a7c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40a7cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40a7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40a7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x40A7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A7D0u;
        // 0x40a7d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40A7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40A7D8u;
}
