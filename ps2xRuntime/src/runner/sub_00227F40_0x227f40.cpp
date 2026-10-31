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

// Function: sub_00227F40
// Address: 0x227f40 - 0x227f68
void sub_00227F40_0x227f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227F40_0x227f40");
#endif

    switch (ctx->pc) {
        case 0x227f58u: goto label_227f58;
        default: break;
    }

    ctx->pc = 0x227f40u;

    // 0x227f40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227f44: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x227f44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x227f48: 0x52db8  dsll        $a1, $a1, 22
    ctx->pc = 0x227f48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 22);
    // 0x227f4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227f50: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x227F50u;
    SET_GPR_U32(ctx, 31, 0x227F58u);
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x227F50u, 0x227F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227F58u;
label_227f58:
    // 0x227f58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x227F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F5Cu;
        // 0x227f60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227F64u;
    // 0x227f64: 0x0  nop
    ctx->pc = 0x227f64u;
    // NOP
    ctx->pc = 0x227f68u;
}
