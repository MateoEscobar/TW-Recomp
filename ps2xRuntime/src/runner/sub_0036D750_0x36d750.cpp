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

// Function: sub_0036D750
// Address: 0x36d750 - 0x36d7b0
void sub_0036D750_0x36d750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D750_0x36d750");
#endif

    switch (ctx->pc) {
        case 0x36d770u: goto label_36d770;
        case 0x36d784u: goto label_36d784;
        case 0x36d78cu: goto label_36d78c;
        case 0x36d798u: goto label_36d798;
        default: break;
    }

    ctx->pc = 0x36d750u;

    // 0x36d750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36d750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36d754: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36d754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d758: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36d758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36d75c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36d75cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d760: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36d760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36d764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36d764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36d768: 0xc102488  jal         func_409220
    ctx->pc = 0x36D768u;
    SET_GPR_U32(ctx, 31, 0x36D770u);
    ctx->pc = 0x36D76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D768u;
    // 0x36d76c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36D768u, 0x36D770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D770u;
label_36d770:
    // 0x36d770: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36d770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d774: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36d774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36d778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d77c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36D77Cu;
    SET_GPR_U32(ctx, 31, 0x36D784u);
    ctx->pc = 0x36D780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D77Cu;
    // 0x36d780: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36D77Cu, 0x36D784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D784u;
label_36d784:
    // 0x36d784: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36D784u;
    SET_GPR_U32(ctx, 31, 0x36D78Cu);
    ctx->pc = 0x36D788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D784u;
    // 0x36d788: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36D784u, 0x36D78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D78Cu;
label_36d78c:
    // 0x36d78c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36d78cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d790: 0xc0e18f6  jal         func_3863D8
    ctx->pc = 0x36D790u;
    SET_GPR_U32(ctx, 31, 0x36D798u);
    ctx->pc = 0x36D794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D790u;
    // 0x36d794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3863D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3863D8u, 0x36D790u, 0x36D798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D798u;
label_36d798:
    // 0x36d798: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36d798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36d79c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36d79cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d7a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36d7a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d7a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36d7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x36D7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D7A8u;
        // 0x36d7ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D7B0u;
}
