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

// Function: sub_00413398
// Address: 0x413398 - 0x4133d0
void sub_00413398_0x413398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00413398_0x413398");
#endif

    switch (ctx->pc) {
        case 0x4133bcu: goto label_4133bc;
        default: break;
    }

    ctx->pc = 0x413398u;

    // 0x413398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x413398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x41339c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x41339cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x4133a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4133a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4133a4: 0x24a59068  addiu       $a1, $a1, -0x6F98
    ctx->pc = 0x4133a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938728));
    // 0x4133a8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x4133a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x4133ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4133acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4133b0: 0x8e044814  lw          $a0, 0x4814($s0)
    ctx->pc = 0x4133b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x514814u));
    // 0x4133b4: 0xc13d6d8  jal         func_4F5B60
    ctx->pc = 0x4133B4u;
    SET_GPR_U32(ctx, 31, 0x4133BCu);
    ctx->pc = 0x4133B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4133B4u;
    // 0x4133b8: 0x24060022  addiu       $a2, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5B60u, 0x4133B4u, 0x4133BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4133BCu;
label_4133bc:
    // 0x4133bc: 0xae004814  sw          $zero, 0x4814($s0)
    ctx->pc = 0x4133bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 18452), GPR_U32(ctx, 0));
    // 0x4133c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4133c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4133c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4133c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4133c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4133C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4133CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4133C8u;
        // 0x4133cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4133C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4133D0u;
}
