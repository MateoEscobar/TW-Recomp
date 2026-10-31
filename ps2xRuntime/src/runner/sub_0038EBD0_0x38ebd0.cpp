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

// Function: sub_0038EBD0
// Address: 0x38ebd0 - 0x38ebf8
void sub_0038EBD0_0x38ebd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038EBD0_0x38ebd0");
#endif

    switch (ctx->pc) {
        case 0x38ebe8u: goto label_38ebe8;
        default: break;
    }

    ctx->pc = 0x38ebd0u;

    // 0x38ebd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38ebd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38ebd4: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x38ebd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x38ebd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38ebd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38ebdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38ebdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ebe0: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x38EBE0u;
    SET_GPR_U32(ctx, 31, 0x38EBE8u);
    ctx->pc = 0x38EBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EBE0u;
    // 0x38ebe4: 0x24060068  addiu       $a2, $zero, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x38EBE0u, 0x38EBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EBE8u;
label_38ebe8:
    // 0x38ebe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38ebe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38ebec: 0x3e00008  jr          $ra
    ctx->pc = 0x38EBECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EBECu;
        // 0x38ebf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EBECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38EBF4u;
    // 0x38ebf4: 0x0  nop
    ctx->pc = 0x38ebf4u;
    // NOP
    ctx->pc = 0x38ebf8u;
}
