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

// Function: sub_0035E750
// Address: 0x35e750 - 0x35e7b0
void sub_0035E750_0x35e750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E750_0x35e750");
#endif

    switch (ctx->pc) {
        case 0x35e770u: goto label_35e770;
        case 0x35e778u: goto label_35e778;
        case 0x35e78cu: goto label_35e78c;
        case 0x35e798u: goto label_35e798;
        default: break;
    }

    ctx->pc = 0x35e750u;

    // 0x35e750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35e750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35e754: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35e754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e758: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35e758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35e75c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35e75cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e760: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35e760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35e764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35e764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35e768: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E768u;
    SET_GPR_U32(ctx, 31, 0x35E770u);
    ctx->pc = 0x35E76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E768u;
    // 0x35e76c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E768u, 0x35E770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E770u;
label_35e770:
    // 0x35e770: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35E770u;
    SET_GPR_U32(ctx, 31, 0x35E778u);
    ctx->pc = 0x35E774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E770u;
    // 0x35e774: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35E770u, 0x35E778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E778u;
label_35e778:
    // 0x35e778: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35e778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e77c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35e77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e780: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35e780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e784: 0xc102488  jal         func_409220
    ctx->pc = 0x35E784u;
    SET_GPR_U32(ctx, 31, 0x35E78Cu);
    ctx->pc = 0x35E788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E784u;
    // 0x35e788: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35E784u, 0x35E78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E78Cu;
label_35e78c:
    // 0x35e78c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35e78cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e790: 0xc10767a  jal         func_41D9E8
    ctx->pc = 0x35E790u;
    SET_GPR_U32(ctx, 31, 0x35E798u);
    ctx->pc = 0x35E794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E790u;
    // 0x35e794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D9E8u, 0x35E790u, 0x35E798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E798u;
label_35e798:
    // 0x35e798: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35e798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35e79c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35e79cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e7a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35e7a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e7a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35e7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x35E7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E7A8u;
        // 0x35e7ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E7B0u;
}
