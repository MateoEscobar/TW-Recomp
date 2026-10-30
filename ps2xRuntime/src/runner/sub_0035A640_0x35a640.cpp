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

// Function: sub_0035A640
// Address: 0x35a640 - 0x35a678
void sub_0035A640_0x35a640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A640_0x35a640");
#endif

    switch (ctx->pc) {
        case 0x35a654u: goto label_35a654;
        case 0x35a65cu: goto label_35a65c;
        case 0x35a664u: goto label_35a664;
        default: break;
    }

    ctx->pc = 0x35a640u;

    // 0x35a640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35a640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35a644: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35a644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35a648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35a64c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35A64Cu;
    SET_GPR_U32(ctx, 31, 0x35A654u);
    ctx->pc = 0x35A650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A64Cu;
    // 0x35a650: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35A64Cu, 0x35A654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A654u;
label_35a654:
    // 0x35a654: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35A654u;
    SET_GPR_U32(ctx, 31, 0x35A65Cu);
    ctx->pc = 0x35A658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A654u;
    // 0x35a658: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35A654u, 0x35A65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A65Cu;
label_35a65c:
    // 0x35a65c: 0xc08d93a  jal         func_2364E8
    ctx->pc = 0x35A65Cu;
    SET_GPR_U32(ctx, 31, 0x35A664u);
    ctx->pc = 0x35A660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A65Cu;
    // 0x35a660: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2364E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2364E8u, 0x35A65Cu, 0x35A664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A664u;
label_35a664:
    // 0x35a664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35a664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a668: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35a668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a66c: 0x3e00008  jr          $ra
    ctx->pc = 0x35A66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A66Cu;
        // 0x35a670: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A674u;
    // 0x35a674: 0x0  nop
    ctx->pc = 0x35a674u;
    // NOP
    ctx->pc = 0x35a678u;
}
