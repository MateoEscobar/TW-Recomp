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

// Function: sub_0041D5E8
// Address: 0x41d5e8 - 0x41d618
void sub_0041D5E8_0x41d5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D5E8_0x41d5e8");
#endif

    switch (ctx->pc) {
        case 0x41d60cu: goto label_41d60c;
        default: break;
    }

    ctx->pc = 0x41d5e8u;

    // 0x41d5e8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x41d5e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d5ec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41d5f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41d5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41d5f4: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x41d5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41d5f8: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x41d5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x41d5fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41d5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41d600: 0x24a5b240  addiu       $a1, $a1, -0x4DC0
    ctx->pc = 0x41d600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947392));
    // 0x41d604: 0xc1062fc  jal         func_418BF0
    ctx->pc = 0x41D604u;
    SET_GPR_U32(ctx, 31, 0x41D60Cu);
    ctx->pc = 0x41D608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D604u;
    // 0x41d608: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418BF0u, 0x41D604u, 0x41D60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D60Cu;
label_41d60c:
    // 0x41d60c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41d60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41d610: 0x3e00008  jr          $ra
    ctx->pc = 0x41D610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D610u;
        // 0x41d614: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D618u;
}
