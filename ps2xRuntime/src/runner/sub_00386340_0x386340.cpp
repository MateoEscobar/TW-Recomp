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

// Function: sub_00386340
// Address: 0x386340 - 0x386370
void sub_00386340_0x386340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386340_0x386340");
#endif

    switch (ctx->pc) {
        case 0x386360u: goto label_386360;
        default: break;
    }

    ctx->pc = 0x386340u;

    // 0x386340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x386340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x386344: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x386344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x386348: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x386348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38634c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x38634cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386350: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x386350u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x386354: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x386354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386358: 0xc0e394e  jal         func_38E538
    ctx->pc = 0x386358u;
    SET_GPR_U32(ctx, 31, 0x386360u);
    ctx->pc = 0x38635Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386358u;
    // 0x38635c: 0x8c640844  lw          $a0, 0x844($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E538u, 0x386358u, 0x386360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386360u;
label_386360:
    // 0x386360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x386360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x386364: 0x3e00008  jr          $ra
    ctx->pc = 0x386364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386364u;
        // 0x386368: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38636Cu;
    // 0x38636c: 0x0  nop
    ctx->pc = 0x38636cu;
    // NOP
    ctx->pc = 0x386370u;
}
