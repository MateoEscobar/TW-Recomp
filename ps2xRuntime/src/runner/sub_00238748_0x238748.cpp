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

// Function: sub_00238748
// Address: 0x238748 - 0x2387a8
void sub_00238748_0x238748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238748_0x238748");
#endif

    switch (ctx->pc) {
        case 0x23876cu: goto label_23876c;
        case 0x238774u: goto label_238774;
        case 0x238788u: goto label_238788;
        default: break;
    }

    ctx->pc = 0x238748u;

    // 0x238748: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x238748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23874c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23874cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x238750: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x238750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x238754: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x238754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238758: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x238758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x23875c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23875cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238760: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x238764: 0xc0e4060  jal         func_390180
    ctx->pc = 0x238764u;
    SET_GPR_U32(ctx, 31, 0x23876Cu);
    ctx->pc = 0x238768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238764u;
    // 0x238768: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x238764u, 0x23876Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23876Cu;
label_23876c:
    // 0x23876c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x23876Cu;
    SET_GPR_U32(ctx, 31, 0x238774u);
    ctx->pc = 0x238770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23876Cu;
    // 0x238770: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23876Cu, 0x238774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238774u;
label_238774:
    // 0x238774: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x238774u;
    {
        const bool branch_taken_0x238774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238774u;
        // 0x238778: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238774) {
            ctx->pc = 0x238790u;
            goto label_238790;
        }
    }
    ctx->pc = 0x23877Cu;
    // 0x23877c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23877cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238780: 0xc0886a8  jal         func_221AA0
    ctx->pc = 0x238780u;
    SET_GPR_U32(ctx, 31, 0x238788u);
    ctx->pc = 0x238784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238780u;
    // 0x238784: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x238780u, 0x238788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238788u;
label_238788:
    // 0x238788: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x238788u;
    {
        const bool branch_taken_0x238788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238788u;
        // 0x23878c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238788) {
            ctx->pc = 0x238798u;
            goto label_238798;
        }
    }
    ctx->pc = 0x238790u;
label_238790:
    // 0x238790: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x238790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238794: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x238794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_238798:
    // 0x238798: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x238798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23879c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23879cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2387a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2387A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2387A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387A0u;
        // 0x2387a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2387A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2387A8u;
}
