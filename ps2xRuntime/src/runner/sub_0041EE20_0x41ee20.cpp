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

// Function: sub_0041EE20
// Address: 0x41ee20 - 0x41ee58
void sub_0041EE20_0x41ee20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041EE20_0x41ee20");
#endif

    switch (ctx->pc) {
        case 0x41ee48u: goto label_41ee48;
        default: break;
    }

    ctx->pc = 0x41ee20u;

    // 0x41ee20: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41ee20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41ee24: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41ee24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41ee28: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x41ee28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41ee2c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x41ee2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ee30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41ee30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41ee34: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x41ee34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x41ee38: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x41ee38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x41ee3c: 0x24640480  addiu       $a0, $v1, 0x480
    ctx->pc = 0x41ee3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x41ee40: 0xc10796c  jal         func_41E5B0
    ctx->pc = 0x41EE40u;
    SET_GPR_U32(ctx, 31, 0x41EE48u);
    ctx->pc = 0x41EE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EE40u;
    // 0x41ee44: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x41EE40u, 0x41EE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EE48u;
label_41ee48:
    // 0x41ee48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41ee48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41ee4c: 0x3e00008  jr          $ra
    ctx->pc = 0x41EE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41EE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EE4Cu;
        // 0x41ee50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41EE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41EE54u;
    // 0x41ee54: 0x0  nop
    ctx->pc = 0x41ee54u;
    // NOP
    ctx->pc = 0x41ee58u;
}
