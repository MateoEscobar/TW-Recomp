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

// Function: sub_00335F48
// Address: 0x335f48 - 0x335f70
void sub_00335F48_0x335f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335F48_0x335f48");
#endif

    switch (ctx->pc) {
        case 0x335f5cu: goto label_335f5c;
        case 0x335f64u: goto label_335f64;
        default: break;
    }

    ctx->pc = 0x335f48u;

    // 0x335f48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x335f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x335f4c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x335f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335f50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x335f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x335f54: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x335F54u;
    SET_GPR_U32(ctx, 31, 0x335F5Cu);
    ctx->pc = 0x335F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335F54u;
    // 0x335f58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x335F54u, 0x335F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335F5Cu;
label_335f5c:
    // 0x335f5c: 0xc0cd766  jal         func_335D98
    ctx->pc = 0x335F5Cu;
    SET_GPR_U32(ctx, 31, 0x335F64u);
    ctx->pc = 0x335F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335F5Cu;
    // 0x335f60: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D98u, 0x335F5Cu, 0x335F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335F64u;
label_335f64:
    // 0x335f64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x335f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335f68: 0x3e00008  jr          $ra
    ctx->pc = 0x335F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335F68u;
        // 0x335f6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335F70u;
}
