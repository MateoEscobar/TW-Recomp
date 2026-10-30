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

// Function: sub_0035BEB0
// Address: 0x35beb0 - 0x35bf10
void sub_0035BEB0_0x35beb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035BEB0_0x35beb0");
#endif

    switch (ctx->pc) {
        case 0x35bed0u: goto label_35bed0;
        case 0x35bed8u: goto label_35bed8;
        case 0x35beecu: goto label_35beec;
        case 0x35bef8u: goto label_35bef8;
        default: break;
    }

    ctx->pc = 0x35beb0u;

    // 0x35beb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35beb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35beb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35beb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35beb8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35beb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35bebc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35bebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bec0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35bec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35bec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35bec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35bec8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35BEC8u;
    SET_GPR_U32(ctx, 31, 0x35BED0u);
    ctx->pc = 0x35BECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BEC8u;
    // 0x35becc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35BEC8u, 0x35BED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BED0u;
label_35bed0:
    // 0x35bed0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35BED0u;
    SET_GPR_U32(ctx, 31, 0x35BED8u);
    ctx->pc = 0x35BED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BED0u;
    // 0x35bed4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35BED0u, 0x35BED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BED8u;
label_35bed8:
    // 0x35bed8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35bed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bedc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35bedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bee0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35bee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bee4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35BEE4u;
    SET_GPR_U32(ctx, 31, 0x35BEECu);
    ctx->pc = 0x35BEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BEE4u;
    // 0x35bee8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35BEE4u, 0x35BEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BEECu;
label_35beec:
    // 0x35beec: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35beecu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35bef0: 0xc08df1e  jal         func_237C78
    ctx->pc = 0x35BEF0u;
    SET_GPR_U32(ctx, 31, 0x35BEF8u);
    ctx->pc = 0x35BEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BEF0u;
    // 0x35bef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237C78u, 0x35BEF0u, 0x35BEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BEF8u;
label_35bef8:
    // 0x35bef8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35bef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35befc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35befcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bf00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35bf00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35bf04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35bf04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35bf08: 0x3e00008  jr          $ra
    ctx->pc = 0x35BF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BF08u;
        // 0x35bf0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35BF10u;
}
