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

// Function: sub_0031C740
// Address: 0x31c740 - 0x31c7b0
void sub_0031C740_0x31c740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C740_0x31c740");
#endif

    switch (ctx->pc) {
        case 0x31c758u: goto label_31c758;
        case 0x31c764u: goto label_31c764;
        case 0x31c76cu: goto label_31c76c;
        case 0x31c774u: goto label_31c774;
        case 0x31c790u: goto label_31c790;
        case 0x31c79cu: goto label_31c79c;
        default: break;
    }

    ctx->pc = 0x31c740u;

    // 0x31c740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31c740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31c744: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x31c744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x31c748: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31c748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31c74c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31c74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31c750: 0xc087502  jal         func_21D408
    ctx->pc = 0x31C750u;
    SET_GPR_U32(ctx, 31, 0x31C758u);
    ctx->pc = 0x31C754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C750u;
    // 0x31c754: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31C750u, 0x31C758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C758u;
label_31c758:
    // 0x31c758: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31c758u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c75c: 0xc0a3630  jal         func_28D8C0
    ctx->pc = 0x31C75Cu;
    SET_GPR_U32(ctx, 31, 0x31C764u);
    ctx->pc = 0x31C760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C75Cu;
    // 0x31c760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x31C75Cu, 0x31C764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C764u;
label_31c764:
    // 0x31c764: 0xc0a3628  jal         func_28D8A0
    ctx->pc = 0x31C764u;
    SET_GPR_U32(ctx, 31, 0x31C76Cu);
    ctx->pc = 0x31C768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C764u;
    // 0x31c768: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x31C764u, 0x31C76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C76Cu;
label_31c76c:
    // 0x31c76c: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x31C76Cu;
    SET_GPR_U32(ctx, 31, 0x31C774u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x31C76Cu, 0x31C774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C774u;
label_31c774:
    // 0x31c774: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31c774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c778: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C778u;
    {
        const bool branch_taken_0x31c778 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C778u;
        // 0x31c77c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c778) {
            ctx->pc = 0x31C790u;
            goto label_31c790;
        }
    }
    ctx->pc = 0x31C780u;
    // 0x31c780: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31c780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c784: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31c784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c788: 0xc0b2bde  jal         func_2CAF78
    ctx->pc = 0x31C788u;
    SET_GPR_U32(ctx, 31, 0x31C790u);
    ctx->pc = 0x31C78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C788u;
    // 0x31c78c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF78u, 0x31C788u, 0x31C790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C790u;
label_31c790:
    // 0x31c790: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31c790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c794: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x31C794u;
    SET_GPR_U32(ctx, 31, 0x31C79Cu);
    ctx->pc = 0x31C798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C794u;
    // 0x31c798: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x31C794u, 0x31C79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C79Cu;
label_31c79c:
    // 0x31c79c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x31c79cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31c7a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31c7a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31c7a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31c7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31c7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x31C7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C7A8u;
        // 0x31c7ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C7B0u;
}
