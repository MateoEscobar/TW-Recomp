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

// Function: sub_0036C0F8
// Address: 0x36c0f8 - 0x36c130
void sub_0036C0F8_0x36c0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C0F8_0x36c0f8");
#endif

    switch (ctx->pc) {
        case 0x36c10cu: goto label_36c10c;
        case 0x36c114u: goto label_36c114;
        case 0x36c11cu: goto label_36c11c;
        default: break;
    }

    ctx->pc = 0x36c0f8u;

    // 0x36c0f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c0fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36c0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c100: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c104: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36C104u;
    SET_GPR_U32(ctx, 31, 0x36C10Cu);
    ctx->pc = 0x36C108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C104u;
    // 0x36c108: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36C104u, 0x36C10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C10Cu;
label_36c10c:
    // 0x36c10c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36C10Cu;
    SET_GPR_U32(ctx, 31, 0x36C114u);
    ctx->pc = 0x36C110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C10Cu;
    // 0x36c110: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36C10Cu, 0x36C114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C114u;
label_36c114:
    // 0x36c114: 0xc107644  jal         func_41D910
    ctx->pc = 0x36C114u;
    SET_GPR_U32(ctx, 31, 0x36C11Cu);
    ctx->pc = 0x36C118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C114u;
    // 0x36c118: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D910u, 0x36C114u, 0x36C11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C11Cu;
label_36c11c:
    // 0x36c11c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c120: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36c120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c124: 0x3e00008  jr          $ra
    ctx->pc = 0x36C124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C124u;
        // 0x36c128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C12Cu;
    // 0x36c12c: 0x0  nop
    ctx->pc = 0x36c12cu;
    // NOP
    ctx->pc = 0x36c130u;
}
