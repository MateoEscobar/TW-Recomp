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

// Function: sub_00321808
// Address: 0x321808 - 0x321828
void sub_00321808_0x321808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321808_0x321808");
#endif

    switch (ctx->pc) {
        case 0x32181cu: goto label_32181c;
        default: break;
    }

    ctx->pc = 0x321808u;

    // 0x321808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x321808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32180c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32180cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321810: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x321810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x321814: 0xc0c85e8  jal         func_3217A0
    ctx->pc = 0x321814u;
    SET_GPR_U32(ctx, 31, 0x32181Cu);
    ctx->pc = 0x321818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321814u;
    // 0x321818: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3217A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3217A0u, 0x321814u, 0x32181Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32181Cu;
label_32181c:
    // 0x32181c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32181cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321820: 0x3e00008  jr          $ra
    ctx->pc = 0x321820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321820u;
        // 0x321824: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321828u;
}
