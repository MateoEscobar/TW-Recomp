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

// Function: sub_00113B28
// Address: 0x113b28 - 0x113b78
void sub_00113B28_0x113b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113B28_0x113b28");
#endif

    switch (ctx->pc) {
        case 0x113b6cu: goto label_113b6c;
        default: break;
    }

    ctx->pc = 0x113b28u;

    // 0x113b28: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x113b28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b2c: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x113b2cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x113b34: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x113b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b38: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x113b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x113b3c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x113b3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b40: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x113b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x113b44: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x113b44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b48: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x113b48u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x113b4c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x113b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x113b50: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x113b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x113b54: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x113b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b58: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x113b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x113b5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x113b5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b60: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x113b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x113b64: 0xc044396  jal         func_110E58
    ctx->pc = 0x113B64u;
    SET_GPR_U32(ctx, 31, 0x113B6Cu);
    ctx->pc = 0x113B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B64u;
    // 0x113b68: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110E58u, 0x113B64u, 0x113B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B6Cu;
label_113b6c:
    // 0x113b6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x113b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113b70: 0x3e00008  jr          $ra
    ctx->pc = 0x113B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B70u;
        // 0x113b74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113B78u;
}
