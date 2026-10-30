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

// Function: sub_00473B58
// Address: 0x473b58 - 0x473b88
void sub_00473B58_0x473b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473B58_0x473b58");
#endif

    switch (ctx->pc) {
        case 0x473b6cu: goto label_473b6c;
        case 0x473b78u: goto label_473b78;
        default: break;
    }

    ctx->pc = 0x473b58u;

    // 0x473b58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x473b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x473b5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x473b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x473b60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x473b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x473b64: 0xc11c770  jal         func_471DC0
    ctx->pc = 0x473B64u;
    SET_GPR_U32(ctx, 31, 0x473B6Cu);
    ctx->pc = 0x473B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x473B64u;
    // 0x473b68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471DC0u, 0x473B64u, 0x473B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473B6Cu;
label_473b6c:
    // 0x473b6c: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x473b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x473b70: 0xc11b832  jal         func_46E0C8
    ctx->pc = 0x473B70u;
    SET_GPR_U32(ctx, 31, 0x473B78u);
    ctx->pc = 0x473B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x473B70u;
    // 0x473b74: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46E0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46E0C8u, 0x473B70u, 0x473B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473B78u;
label_473b78:
    // 0x473b78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x473b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x473b7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x473b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x473b80: 0x3e00008  jr          $ra
    ctx->pc = 0x473B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473B80u;
        // 0x473b84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x473B88u;
}
