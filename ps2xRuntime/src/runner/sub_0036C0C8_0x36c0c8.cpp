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

// Function: sub_0036C0C8
// Address: 0x36c0c8 - 0x36c0f8
void sub_0036C0C8_0x36c0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C0C8_0x36c0c8");
#endif

    switch (ctx->pc) {
        case 0x36c0dcu: goto label_36c0dc;
        case 0x36c0e4u: goto label_36c0e4;
        default: break;
    }

    ctx->pc = 0x36c0c8u;

    // 0x36c0c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c0cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36c0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c0d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c0d4: 0xc102488  jal         func_409220
    ctx->pc = 0x36C0D4u;
    SET_GPR_U32(ctx, 31, 0x36C0DCu);
    ctx->pc = 0x36C0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C0D4u;
    // 0x36c0d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36C0D4u, 0x36C0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C0DCu;
label_36c0dc:
    // 0x36c0dc: 0xc107b58  jal         func_41ED60
    ctx->pc = 0x36C0DCu;
    SET_GPR_U32(ctx, 31, 0x36C0E4u);
    ctx->pc = 0x36C0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C0DCu;
    // 0x36c0e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41ED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41ED60u, 0x36C0DCu, 0x36C0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C0E4u;
label_36c0e4:
    // 0x36c0e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c0e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c0e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36c0e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x36C0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C0ECu;
        // 0x36c0f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C0F4u;
    // 0x36c0f4: 0x0  nop
    ctx->pc = 0x36c0f4u;
    // NOP
    ctx->pc = 0x36c0f8u;
}
