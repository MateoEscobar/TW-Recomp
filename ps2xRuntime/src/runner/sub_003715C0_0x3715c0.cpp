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

// Function: sub_003715C0
// Address: 0x3715c0 - 0x3715f8
void sub_003715C0_0x3715c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003715C0_0x3715c0");
#endif

    switch (ctx->pc) {
        case 0x3715d4u: goto label_3715d4;
        case 0x3715dcu: goto label_3715dc;
        case 0x3715e4u: goto label_3715e4;
        default: break;
    }

    ctx->pc = 0x3715c0u;

    // 0x3715c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3715c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3715c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3715c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3715c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3715c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3715cc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3715CCu;
    SET_GPR_U32(ctx, 31, 0x3715D4u);
    ctx->pc = 0x3715D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3715CCu;
    // 0x3715d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3715CCu, 0x3715D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3715D4u;
label_3715d4:
    // 0x3715d4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3715D4u;
    SET_GPR_U32(ctx, 31, 0x3715DCu);
    ctx->pc = 0x3715D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3715D4u;
    // 0x3715d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3715D4u, 0x3715DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3715DCu;
label_3715dc:
    // 0x3715dc: 0xc044d96  jal         func_113658
    ctx->pc = 0x3715DCu;
    SET_GPR_U32(ctx, 31, 0x3715E4u);
    ctx->pc = 0x3715E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3715DCu;
    // 0x3715e0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x113658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113658u, 0x3715DCu, 0x3715E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3715E4u;
label_3715e4:
    // 0x3715e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3715e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3715e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3715e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3715ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3715ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3715F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3715ECu;
        // 0x3715f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3715ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3715F4u;
    // 0x3715f4: 0x0  nop
    ctx->pc = 0x3715f4u;
    // NOP
    ctx->pc = 0x3715f8u;
}
