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

// Function: sub_0035F1C0
// Address: 0x35f1c0 - 0x35f1f8
void sub_0035F1C0_0x35f1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F1C0_0x35f1c0");
#endif

    switch (ctx->pc) {
        case 0x35f1d4u: goto label_35f1d4;
        case 0x35f1dcu: goto label_35f1dc;
        case 0x35f1e8u: goto label_35f1e8;
        default: break;
    }

    ctx->pc = 0x35f1c0u;

    // 0x35f1c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35f1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35f1c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35f1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f1c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35f1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35f1cc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F1CCu;
    SET_GPR_U32(ctx, 31, 0x35F1D4u);
    ctx->pc = 0x35F1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F1CCu;
    // 0x35f1d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F1CCu, 0x35F1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F1D4u;
label_35f1d4:
    // 0x35f1d4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35F1D4u;
    SET_GPR_U32(ctx, 31, 0x35F1DCu);
    ctx->pc = 0x35F1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F1D4u;
    // 0x35f1d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35F1D4u, 0x35F1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F1DCu;
label_35f1dc:
    // 0x35f1dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x35f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35f1e0: 0xc05acd6  jal         func_16B358
    ctx->pc = 0x35F1E0u;
    SET_GPR_U32(ctx, 31, 0x35F1E8u);
    ctx->pc = 0x35F1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F1E0u;
    // 0x35f1e4: 0x22403  sra         $a0, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B358u, 0x35F1E0u, 0x35F1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F1E8u;
label_35f1e8:
    // 0x35f1e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35f1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f1ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35f1ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x35F1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F1F0u;
        // 0x35f1f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F1F8u;
}
