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

// Function: sub_001AADF0
// Address: 0x1aadf0 - 0x1aae30
void sub_001AADF0_0x1aadf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AADF0_0x1aadf0");
#endif

    switch (ctx->pc) {
        case 0x1aae0cu: goto label_1aae0c;
        default: break;
    }

    ctx->pc = 0x1aadf0u;

    // 0x1aadf0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1aadf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1aadf4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aadf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aadf8: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x1aadf8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1aadfc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1aadfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1aae00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aae00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aae04: 0xc107908  jal         func_41E420
    ctx->pc = 0x1AAE04u;
    SET_GPR_U32(ctx, 31, 0x1AAE0Cu);
    ctx->pc = 0x1AAE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAE04u;
    // 0x1aae08: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x1AAE04u, 0x1AAE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAE0Cu;
label_1aae0c:
    // 0x1aae0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1aae0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aae10: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1aae10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1aae14: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1aae14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1aae18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aae18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aae1c: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1aae1cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1aae20: 0x2844000a  slti        $a0, $v0, 0xA
    ctx->pc = 0x1aae20u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1aae24: 0xa4100a  movz        $v0, $a1, $a0
    ctx->pc = 0x1aae24u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1aae28: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE28u;
        // 0x1aae2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAE30u;
}
