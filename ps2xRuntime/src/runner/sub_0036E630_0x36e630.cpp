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

// Function: sub_0036E630
// Address: 0x36e630 - 0x36e668
void sub_0036E630_0x36e630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E630_0x36e630");
#endif

    switch (ctx->pc) {
        case 0x36e644u: goto label_36e644;
        case 0x36e64cu: goto label_36e64c;
        case 0x36e654u: goto label_36e654;
        default: break;
    }

    ctx->pc = 0x36e630u;

    // 0x36e630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36e630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36e634: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36e634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36e638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36e63c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36E63Cu;
    SET_GPR_U32(ctx, 31, 0x36E644u);
    ctx->pc = 0x36E640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E63Cu;
    // 0x36e640: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36E63Cu, 0x36E644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E644u;
label_36e644:
    // 0x36e644: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36E644u;
    SET_GPR_U32(ctx, 31, 0x36E64Cu);
    ctx->pc = 0x36E648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E644u;
    // 0x36e648: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36E644u, 0x36E64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E64Cu;
label_36e64c:
    // 0x36e64c: 0xc10324e  jal         func_40C938
    ctx->pc = 0x36E64Cu;
    SET_GPR_U32(ctx, 31, 0x36E654u);
    ctx->pc = 0x36E650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E64Cu;
    // 0x36e650: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C938u, 0x36E64Cu, 0x36E654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E654u;
label_36e654:
    // 0x36e654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36e654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e658: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36e658u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e65c: 0x3e00008  jr          $ra
    ctx->pc = 0x36E65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E65Cu;
        // 0x36e660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E664u;
    // 0x36e664: 0x0  nop
    ctx->pc = 0x36e664u;
    // NOP
    ctx->pc = 0x36e668u;
}
