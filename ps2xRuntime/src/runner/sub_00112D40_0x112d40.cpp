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

// Function: sub_00112D40
// Address: 0x112d40 - 0x112d60
void sub_00112D40_0x112d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112D40_0x112d40");
#endif

    switch (ctx->pc) {
        case 0x112d50u: goto label_112d50;
        default: break;
    }

    ctx->pc = 0x112d40u;

    // 0x112d40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x112d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x112d44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x112d48: 0xc043614  jal         func_10D850
    ctx->pc = 0x112D48u;
    SET_GPR_U32(ctx, 31, 0x112D50u);
    ctx->pc = 0x112D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112D48u;
    // 0x112d4c: 0x24840064  addiu       $a0, $a0, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D850u, 0x112D48u, 0x112D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112D50u;
label_112d50:
    // 0x112d50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112d54: 0x3e00008  jr          $ra
    ctx->pc = 0x112D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D54u;
        // 0x112d58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112D5Cu;
    // 0x112d5c: 0x0  nop
    ctx->pc = 0x112d5cu;
    // NOP
    ctx->pc = 0x112d60u;
}
