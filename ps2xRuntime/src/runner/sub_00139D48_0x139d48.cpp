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

// Function: sub_00139D48
// Address: 0x139d48 - 0x139d68
void sub_00139D48_0x139d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139D48_0x139d48");
#endif

    switch (ctx->pc) {
        case 0x139d5cu: goto label_139d5c;
        default: break;
    }

    ctx->pc = 0x139d48u;

    // 0x139d48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x139d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x139d4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x139d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139d50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x139d54: 0xc04e740  jal         func_139D00
    ctx->pc = 0x139D54u;
    SET_GPR_U32(ctx, 31, 0x139D5Cu);
    ctx->pc = 0x139D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139D54u;
    // 0x139d58: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x139D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139D00u, 0x139D54u, 0x139D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139D5Cu;
label_139d5c:
    // 0x139d5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139d60: 0x3e00008  jr          $ra
    ctx->pc = 0x139D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D60u;
        // 0x139d64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139D68u;
}
