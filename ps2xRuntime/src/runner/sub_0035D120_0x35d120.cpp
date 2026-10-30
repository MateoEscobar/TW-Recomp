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

// Function: sub_0035D120
// Address: 0x35d120 - 0x35d158
void sub_0035D120_0x35d120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D120_0x35d120");
#endif

    switch (ctx->pc) {
        case 0x35d134u: goto label_35d134;
        case 0x35d13cu: goto label_35d13c;
        case 0x35d144u: goto label_35d144;
        default: break;
    }

    ctx->pc = 0x35d120u;

    // 0x35d120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35d120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35d124: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35d124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35d128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35d12c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D12Cu;
    SET_GPR_U32(ctx, 31, 0x35D134u);
    ctx->pc = 0x35D130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D12Cu;
    // 0x35d130: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D12Cu, 0x35D134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D134u;
label_35d134:
    // 0x35d134: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35D134u;
    SET_GPR_U32(ctx, 31, 0x35D13Cu);
    ctx->pc = 0x35D138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D134u;
    // 0x35d138: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35D134u, 0x35D13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D13Cu;
label_35d13c:
    // 0x35d13c: 0xc08e622  jal         func_239888
    ctx->pc = 0x35D13Cu;
    SET_GPR_U32(ctx, 31, 0x35D144u);
    ctx->pc = 0x35D140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D13Cu;
    // 0x35d140: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239888u, 0x35D13Cu, 0x35D144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D144u;
label_35d144:
    // 0x35d144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35d144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d148: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35d148u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d14c: 0x3e00008  jr          $ra
    ctx->pc = 0x35D14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D14Cu;
        // 0x35d150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D154u;
    // 0x35d154: 0x0  nop
    ctx->pc = 0x35d154u;
    // NOP
    ctx->pc = 0x35d158u;
}
