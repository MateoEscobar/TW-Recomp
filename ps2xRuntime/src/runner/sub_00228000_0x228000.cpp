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

// Function: sub_00228000
// Address: 0x228000 - 0x228028
void sub_00228000_0x228000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228000_0x228000");
#endif

    switch (ctx->pc) {
        case 0x228018u: goto label_228018;
        default: break;
    }

    ctx->pc = 0x228000u;

    // 0x228000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x228004: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x228004u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x228008: 0x52eb8  dsll        $a1, $a1, 26
    ctx->pc = 0x228008u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 26);
    // 0x22800c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22800cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228010: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x228010u;
    SET_GPR_U32(ctx, 31, 0x228018u);
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x228010u, 0x228018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228018u;
label_228018:
    // 0x228018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22801c: 0x3e00008  jr          $ra
    ctx->pc = 0x22801Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22801Cu;
        // 0x228020: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22801Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228024u;
    // 0x228024: 0x0  nop
    ctx->pc = 0x228024u;
    // NOP
    ctx->pc = 0x228028u;
}
