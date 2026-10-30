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

// Function: sub_0036C740
// Address: 0x36c740 - 0x36c7a0
void sub_0036C740_0x36c740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C740_0x36c740");
#endif

    switch (ctx->pc) {
        case 0x36c760u: goto label_36c760;
        case 0x36c768u: goto label_36c768;
        case 0x36c77cu: goto label_36c77c;
        case 0x36c788u: goto label_36c788;
        default: break;
    }

    ctx->pc = 0x36c740u;

    // 0x36c740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36c740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36c744: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36c744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c748: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36c748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36c74c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36c74cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c750: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36c750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36c754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c758: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36C758u;
    SET_GPR_U32(ctx, 31, 0x36C760u);
    ctx->pc = 0x36C75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C758u;
    // 0x36c75c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36C758u, 0x36C760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C760u;
label_36c760:
    // 0x36c760: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36C760u;
    SET_GPR_U32(ctx, 31, 0x36C768u);
    ctx->pc = 0x36C764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C760u;
    // 0x36c764: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36C760u, 0x36C768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C768u;
label_36c768:
    // 0x36c768: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36c768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c76c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36c76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c770: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36c770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c774: 0xc102488  jal         func_409220
    ctx->pc = 0x36C774u;
    SET_GPR_U32(ctx, 31, 0x36C77Cu);
    ctx->pc = 0x36C778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C774u;
    // 0x36c778: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36C774u, 0x36C77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C77Cu;
label_36c77c:
    // 0x36c77c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36c77cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c780: 0xc056086  jal         func_158218
    ctx->pc = 0x36C780u;
    SET_GPR_U32(ctx, 31, 0x36C788u);
    ctx->pc = 0x36C784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C780u;
    // 0x36c784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158218u, 0x36C780u, 0x36C788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C788u;
label_36c788:
    // 0x36c788: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36c788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36c78c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36c78cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c790: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36c790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c794: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c798: 0x3e00008  jr          $ra
    ctx->pc = 0x36C798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C798u;
        // 0x36c79c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C7A0u;
}
