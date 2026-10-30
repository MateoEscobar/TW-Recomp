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

// Function: sub_0035F990
// Address: 0x35f990 - 0x35f9f0
void sub_0035F990_0x35f990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F990_0x35f990");
#endif

    switch (ctx->pc) {
        case 0x35f9b0u: goto label_35f9b0;
        case 0x35f9b8u: goto label_35f9b8;
        case 0x35f9ccu: goto label_35f9cc;
        case 0x35f9d8u: goto label_35f9d8;
        default: break;
    }

    ctx->pc = 0x35f990u;

    // 0x35f990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35f990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35f994: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35f994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f998: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35f998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35f99c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35f99cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f9a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35f9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35f9a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35f9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35f9a8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F9A8u;
    SET_GPR_U32(ctx, 31, 0x35F9B0u);
    ctx->pc = 0x35F9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F9A8u;
    // 0x35f9ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F9A8u, 0x35F9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F9B0u;
label_35f9b0:
    // 0x35f9b0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35F9B0u;
    SET_GPR_U32(ctx, 31, 0x35F9B8u);
    ctx->pc = 0x35F9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F9B0u;
    // 0x35f9b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35F9B0u, 0x35F9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F9B8u;
label_35f9b8:
    // 0x35f9b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35f9b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f9bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35f9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f9c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35f9c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f9c4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35F9C4u;
    SET_GPR_U32(ctx, 31, 0x35F9CCu);
    ctx->pc = 0x35F9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F9C4u;
    // 0x35f9c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35F9C4u, 0x35F9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F9CCu;
label_35f9cc:
    // 0x35f9cc: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35f9ccu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35f9d0: 0xc0a4a12  jal         func_292848
    ctx->pc = 0x35F9D0u;
    SET_GPR_U32(ctx, 31, 0x35F9D8u);
    ctx->pc = 0x35F9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F9D0u;
    // 0x35f9d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292848u, 0x35F9D0u, 0x35F9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F9D8u;
label_35f9d8:
    // 0x35f9d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35f9d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f9dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35f9dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f9e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35f9e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f9e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35f9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x35F9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F9E8u;
        // 0x35f9ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F9F0u;
}
