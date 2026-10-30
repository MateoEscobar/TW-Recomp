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

// Function: sub_001494D8
// Address: 0x1494d8 - 0x149500
void sub_001494D8_0x1494d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001494D8_0x1494d8");
#endif

    switch (ctx->pc) {
        case 0x1494ecu: goto label_1494ec;
        default: break;
    }

    ctx->pc = 0x1494d8u;

    // 0x1494d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1494d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1494dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1494dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1494e0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1494e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1494e4: 0xc05420e  jal         func_150838
    ctx->pc = 0x1494E4u;
    SET_GPR_U32(ctx, 31, 0x1494ECu);
    ctx->pc = 0x1494E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1494E4u;
    // 0x1494e8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150838u, 0x1494E4u, 0x1494ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1494ECu;
label_1494ec:
    // 0x1494ec: 0x93a20011  lbu         $v0, 0x11($sp)
    ctx->pc = 0x1494ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x1494f0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1494f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1494f4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1494f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1494f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1494F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1494FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1494F8u;
        // 0x1494fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1494F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149500u;
}
