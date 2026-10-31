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

// Function: sub_0037C748
// Address: 0x37c748 - 0x37c7a8
void sub_0037C748_0x37c748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037C748_0x37c748");
#endif

    switch (ctx->pc) {
        case 0x37c768u: goto label_37c768;
        case 0x37c770u: goto label_37c770;
        case 0x37c784u: goto label_37c784;
        case 0x37c790u: goto label_37c790;
        default: break;
    }

    ctx->pc = 0x37c748u;

    // 0x37c748: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37c748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37c74c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37c74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37c750: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37c750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37c754: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37c754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c758: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37c758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37c75c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37c75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37c760: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C760u;
    SET_GPR_U32(ctx, 31, 0x37C768u);
    ctx->pc = 0x37C764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C760u;
    // 0x37c764: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C760u, 0x37C768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C768u;
label_37c768:
    // 0x37c768: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C768u;
    SET_GPR_U32(ctx, 31, 0x37C770u);
    ctx->pc = 0x37C76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C768u;
    // 0x37c76c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C768u, 0x37C770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C770u;
label_37c770:
    // 0x37c770: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37c770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37c774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c778: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37c778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c77c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x37C77Cu;
    SET_GPR_U32(ctx, 31, 0x37C784u);
    ctx->pc = 0x37C780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C77Cu;
    // 0x37c780: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x37C77Cu, 0x37C784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C784u;
label_37c784:
    // 0x37c784: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x37c784u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37c788: 0xc05fc9c  jal         func_17F270
    ctx->pc = 0x37C788u;
    SET_GPR_U32(ctx, 31, 0x37C790u);
    ctx->pc = 0x37C78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C788u;
    // 0x37c78c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F270u, 0x37C788u, 0x37C790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C790u;
label_37c790:
    // 0x37c790: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37c790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37c794: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37c794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c798: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37c798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37c79c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37c79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x37C7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C7A0u;
        // 0x37c7a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C7A8u;
}
