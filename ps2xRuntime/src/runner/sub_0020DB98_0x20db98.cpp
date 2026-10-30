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

// Function: sub_0020DB98
// Address: 0x20db98 - 0x20dbc0
void sub_0020DB98_0x20db98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DB98_0x20db98");
#endif

    switch (ctx->pc) {
        case 0x20dbb0u: goto label_20dbb0;
        default: break;
    }

    ctx->pc = 0x20db98u;

    // 0x20db98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20db98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20db9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20db9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20dba0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20dba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20dba4: 0xac8240f8  sw          $v0, 0x40F8($a0)
    ctx->pc = 0x20dba4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16632), GPR_U32(ctx, 2));
    // 0x20dba8: 0xc06fb0e  jal         func_1BEC38
    ctx->pc = 0x20DBA8u;
    SET_GPR_U32(ctx, 31, 0x20DBB0u);
    ctx->pc = 0x20DBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DBA8u;
    // 0x20dbac: 0x24840400  addiu       $a0, $a0, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEC38u, 0x20DBA8u, 0x20DBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DBB0u;
label_20dbb0:
    // 0x20dbb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20dbb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20dbb4: 0x3e00008  jr          $ra
    ctx->pc = 0x20DBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DBB4u;
        // 0x20dbb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DBBCu;
    // 0x20dbbc: 0x0  nop
    ctx->pc = 0x20dbbcu;
    // NOP
    ctx->pc = 0x20dbc0u;
}
