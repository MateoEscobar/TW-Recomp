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

// Function: sub_0035AE78
// Address: 0x35ae78 - 0x35aeb0
void sub_0035AE78_0x35ae78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035AE78_0x35ae78");
#endif

    switch (ctx->pc) {
        case 0x35ae8cu: goto label_35ae8c;
        case 0x35ae94u: goto label_35ae94;
        case 0x35ae9cu: goto label_35ae9c;
        default: break;
    }

    ctx->pc = 0x35ae78u;

    // 0x35ae78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35ae78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35ae7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35ae7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ae80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35ae80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35ae84: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35AE84u;
    SET_GPR_U32(ctx, 31, 0x35AE8Cu);
    ctx->pc = 0x35AE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AE84u;
    // 0x35ae88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35AE84u, 0x35AE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AE8Cu;
label_35ae8c:
    // 0x35ae8c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35AE8Cu;
    SET_GPR_U32(ctx, 31, 0x35AE94u);
    ctx->pc = 0x35AE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AE8Cu;
    // 0x35ae90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35AE8Cu, 0x35AE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AE94u;
label_35ae94:
    // 0x35ae94: 0xc0a652e  jal         func_2994B8
    ctx->pc = 0x35AE94u;
    SET_GPR_U32(ctx, 31, 0x35AE9Cu);
    ctx->pc = 0x35AE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AE94u;
    // 0x35ae98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2994B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2994B8u, 0x35AE94u, 0x35AE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AE9Cu;
label_35ae9c:
    // 0x35ae9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35ae9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35aea0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35aea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aea4: 0x3e00008  jr          $ra
    ctx->pc = 0x35AEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AEA4u;
        // 0x35aea8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AEACu;
    // 0x35aeac: 0x0  nop
    ctx->pc = 0x35aeacu;
    // NOP
    ctx->pc = 0x35aeb0u;
}
