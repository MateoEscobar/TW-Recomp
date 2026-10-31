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

// Function: sub_00324750
// Address: 0x324750 - 0x3247c8
void sub_00324750_0x324750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324750_0x324750");
#endif

    switch (ctx->pc) {
        case 0x324770u: goto label_324770;
        case 0x324780u: goto label_324780;
        case 0x324794u: goto label_324794;
        case 0x3247acu: goto label_3247ac;
        default: break;
    }

    ctx->pc = 0x324750u;

    // 0x324750: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x324750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x324754: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x324754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x324758: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x324758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x32475c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32475cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324760: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x324760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x324764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x324764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x324768: 0xc0c8da2  jal         func_323688
    ctx->pc = 0x324768u;
    SET_GPR_U32(ctx, 31, 0x324770u);
    ctx->pc = 0x32476Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324768u;
    // 0x32476c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323688u, 0x324768u, 0x324770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324770u;
label_324770:
    // 0x324770: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x324770u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324774: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x324774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324778: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x324778u;
    SET_GPR_U32(ctx, 31, 0x324780u);
    ctx->pc = 0x32477Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324778u;
    // 0x32477c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x324778u, 0x324780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324780u;
label_324780:
    // 0x324780: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x324780u;
    {
        const bool branch_taken_0x324780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x324784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324780u;
        // 0x324784: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324780) {
            ctx->pc = 0x3247B0u;
            goto label_3247b0;
        }
    }
    ctx->pc = 0x324788u;
    // 0x324788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x324788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32478c: 0xc0c8d5a  jal         func_323568
    ctx->pc = 0x32478Cu;
    SET_GPR_U32(ctx, 31, 0x324794u);
    ctx->pc = 0x324790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32478Cu;
    // 0x324790: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323568u, 0x32478Cu, 0x324794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324794u;
label_324794:
    // 0x324794: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x324794u;
    {
        const bool branch_taken_0x324794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x324798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324794u;
        // 0x324798: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324794) {
            ctx->pc = 0x3247B0u;
            goto label_3247b0;
        }
    }
    ctx->pc = 0x32479Cu;
    // 0x32479c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32479cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3247a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3247a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3247a4: 0xc0c9130  jal         func_3244C0
    ctx->pc = 0x3247A4u;
    SET_GPR_U32(ctx, 31, 0x3247ACu);
    ctx->pc = 0x3247A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3247A4u;
    // 0x3247a8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3244C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3244C0u, 0x3247A4u, 0x3247ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3247ACu;
label_3247ac:
    // 0x3247ac: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3247acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3247b0:
    // 0x3247b0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3247b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3247b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3247b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3247b8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3247b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3247bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3247bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3247c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3247C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3247C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3247C0u;
        // 0x3247c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3247C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3247C8u;
}
