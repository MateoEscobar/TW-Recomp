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

// Function: sub_003A4B50
// Address: 0x3a4b50 - 0x3a4b88
void sub_003A4B50_0x3a4b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4B50_0x3a4b50");
#endif

    switch (ctx->pc) {
        case 0x3a4b78u: goto label_3a4b78;
        default: break;
    }

    ctx->pc = 0x3a4b50u;

    // 0x3a4b50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a4b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a4b54: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3a4b54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4b58: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x3a4b58u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
    // 0x3a4b5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a4b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a4b60: 0x254a16c0  addiu       $t2, $t2, 0x16C0
    ctx->pc = 0x3a4b60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 5824));
    // 0x3a4b64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a4b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4b68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a4b68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4b6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a4b6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4b70: 0xc0e498e  jal         func_392638
    ctx->pc = 0x3A4B70u;
    SET_GPR_U32(ctx, 31, 0x3A4B78u);
    ctx->pc = 0x3A4B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4B70u;
    // 0x3a4b74: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392638u, 0x3A4B70u, 0x3A4B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4B78u;
label_3a4b78:
    // 0x3a4b78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a4b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4b7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a4b7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4b80: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4B80u;
        // 0x3a4b84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4B88u;
}
