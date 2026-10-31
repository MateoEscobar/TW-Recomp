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

// Function: sub_00353F40
// Address: 0x353f40 - 0x353f88
void sub_00353F40_0x353f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353F40_0x353f40");
#endif

    switch (ctx->pc) {
        case 0x353f78u: goto label_353f78;
        default: break;
    }

    ctx->pc = 0x353f40u;

    // 0x353f40: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x353f40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353f44: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x353f44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x353f48: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x353f48u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353f4c: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x353f4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353f50: 0xafaa0000  sw          $t2, 0x0($sp)
    ctx->pc = 0x353f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 10));
    // 0x353f54: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x353f54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353f58: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x353f58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353f5c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x353f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x353f60: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x353f60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353f64: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x353f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x353f68: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x353f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x353f6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x353f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353f70: 0xc0d4e06  jal         func_353818
    ctx->pc = 0x353F70u;
    SET_GPR_U32(ctx, 31, 0x353F78u);
    ctx->pc = 0x353F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353F70u;
    // 0x353f74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353818u, 0x353F70u, 0x353F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353F78u;
label_353f78:
    // 0x353f78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x353f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x353f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x353F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353F7Cu;
        // 0x353f80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353F84u;
    // 0x353f84: 0x0  nop
    ctx->pc = 0x353f84u;
    // NOP
    ctx->pc = 0x353f88u;
}
