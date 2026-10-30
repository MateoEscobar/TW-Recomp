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

// Function: sub_00112DE0
// Address: 0x112de0 - 0x112e08
void sub_00112DE0_0x112de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112DE0_0x112de0");
#endif

    switch (ctx->pc) {
        case 0x112dfcu: goto label_112dfc;
        default: break;
    }

    ctx->pc = 0x112de0u;

    // 0x112de0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x112de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x112de4: 0x30c800ff  andi        $t0, $a2, 0xFF
    ctx->pc = 0x112de4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x112de8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x112dec: 0x24840064  addiu       $a0, $a0, 0x64
    ctx->pc = 0x112decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
    // 0x112df0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x112df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112df4: 0xc04363a  jal         func_10D8E8
    ctx->pc = 0x112DF4u;
    SET_GPR_U32(ctx, 31, 0x112DFCu);
    ctx->pc = 0x112DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112DF4u;
    // 0x112df8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D8E8u, 0x112DF4u, 0x112DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112DFCu;
label_112dfc:
    // 0x112dfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112e00: 0x3e00008  jr          $ra
    ctx->pc = 0x112E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E00u;
        // 0x112e04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112E08u;
}
