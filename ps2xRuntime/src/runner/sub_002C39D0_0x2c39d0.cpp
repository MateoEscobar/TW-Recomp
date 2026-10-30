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

// Function: sub_002C39D0
// Address: 0x2c39d0 - 0x2c3a08
void sub_002C39D0_0x2c39d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C39D0_0x2c39d0");
#endif

    switch (ctx->pc) {
        case 0x2c39f8u: goto label_2c39f8;
        default: break;
    }

    ctx->pc = 0x2c39d0u;

    // 0x2c39d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c39d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c39d4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2c39d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2c39d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c39d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c39dc: 0x8c65489c  lw          $a1, 0x489C($v1)
    ctx->pc = 0x2c39dcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x51489Cu));
    // 0x2c39e0: 0x94a20322  lhu         $v0, 0x322($a1)
    ctx->pc = 0x2c39e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 802)));
    // 0x2c39e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c39e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c39e8: 0xa4a20322  sh          $v0, 0x322($a1)
    ctx->pc = 0x2c39e8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 802), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c39ec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c39ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c39f0: 0xc089bdc  jal         func_226F70
    ctx->pc = 0x2C39F0u;
    SET_GPR_U32(ctx, 31, 0x2C39F8u);
    ctx->pc = 0x2C39F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C39F0u;
    // 0x2c39f4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2C39F0u, 0x2C39F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C39F8u;
label_2c39f8:
    // 0x2c39f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c39f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c39fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C39FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39FCu;
        // 0x2c3a00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C39FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3A04u;
    // 0x2c3a04: 0x0  nop
    ctx->pc = 0x2c3a04u;
    // NOP
    ctx->pc = 0x2c3a08u;
}
