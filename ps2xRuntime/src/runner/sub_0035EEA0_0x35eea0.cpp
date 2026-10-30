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

// Function: sub_0035EEA0
// Address: 0x35eea0 - 0x35eed8
void sub_0035EEA0_0x35eea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035EEA0_0x35eea0");
#endif

    switch (ctx->pc) {
        case 0x35eeb4u: goto label_35eeb4;
        case 0x35eebcu: goto label_35eebc;
        case 0x35eec4u: goto label_35eec4;
        default: break;
    }

    ctx->pc = 0x35eea0u;

    // 0x35eea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35eea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35eea4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35eea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35eea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35eea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35eeac: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35EEACu;
    SET_GPR_U32(ctx, 31, 0x35EEB4u);
    ctx->pc = 0x35EEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EEACu;
    // 0x35eeb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35EEACu, 0x35EEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EEB4u;
label_35eeb4:
    // 0x35eeb4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35EEB4u;
    SET_GPR_U32(ctx, 31, 0x35EEBCu);
    ctx->pc = 0x35EEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EEB4u;
    // 0x35eeb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35EEB4u, 0x35EEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EEBCu;
label_35eebc:
    // 0x35eebc: 0xc0a4986  jal         func_292618
    ctx->pc = 0x35EEBCu;
    SET_GPR_U32(ctx, 31, 0x35EEC4u);
    ctx->pc = 0x35EEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EEBCu;
    // 0x35eec0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292618u, 0x35EEBCu, 0x35EEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EEC4u;
label_35eec4:
    // 0x35eec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35eec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35eec8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35eec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35eecc: 0x3e00008  jr          $ra
    ctx->pc = 0x35EECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EECCu;
        // 0x35eed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EED4u;
    // 0x35eed4: 0x0  nop
    ctx->pc = 0x35eed4u;
    // NOP
    ctx->pc = 0x35eed8u;
}
