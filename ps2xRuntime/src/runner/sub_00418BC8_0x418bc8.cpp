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

// Function: sub_00418BC8
// Address: 0x418bc8 - 0x418bf0
void sub_00418BC8_0x418bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418BC8_0x418bc8");
#endif

    switch (ctx->pc) {
        case 0x418be4u: goto label_418be4;
        default: break;
    }

    ctx->pc = 0x418bc8u;

    // 0x418bc8: 0x2482046c  addiu       $v0, $a0, 0x46C
    ctx->pc = 0x418bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1132));
    // 0x418bcc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x418bccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x418bd0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x418bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418bd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x418bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x418bd8: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x418bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x418bdc: 0xc10c4de  jal         func_431378
    ctx->pc = 0x418BDCu;
    SET_GPR_U32(ctx, 31, 0x418BE4u);
    ctx->pc = 0x418BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418BDCu;
    // 0x418be0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x418BDCu, 0x418BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418BE4u;
label_418be4:
    // 0x418be4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x418be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x418be8: 0x3e00008  jr          $ra
    ctx->pc = 0x418BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x418BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418BE8u;
        // 0x418bec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x418BF0u;
}
