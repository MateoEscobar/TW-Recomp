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

// Function: sub_0041EF60
// Address: 0x41ef60 - 0x41ef98
void sub_0041EF60_0x41ef60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041EF60_0x41ef60");
#endif

    switch (ctx->pc) {
        case 0x41ef88u: goto label_41ef88;
        default: break;
    }

    ctx->pc = 0x41ef60u;

    // 0x41ef60: 0x43823  negu        $a3, $a0
    ctx->pc = 0x41ef60u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x41ef64: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41ef64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41ef68: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x41ef68u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41ef6c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41ef6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41ef70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41ef70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41ef74: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x41ef74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x41ef78: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x41ef78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x41ef7c: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x41ef7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x41ef80: 0xc10796c  jal         func_41E5B0
    ctx->pc = 0x41EF80u;
    SET_GPR_U32(ctx, 31, 0x41EF88u);
    ctx->pc = 0x41EF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EF80u;
    // 0x41ef84: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x41EF80u, 0x41EF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EF88u;
label_41ef88:
    // 0x41ef88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41ef88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41ef8c: 0x3e00008  jr          $ra
    ctx->pc = 0x41EF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EF8Cu;
        // 0x41ef90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41EF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41EF94u;
    // 0x41ef94: 0x0  nop
    ctx->pc = 0x41ef94u;
    // NOP
    ctx->pc = 0x41ef98u;
}
