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

// Function: sub_004C4BF0
// Address: 0x4c4bf0 - 0x4c4c38
void sub_004C4BF0_0x4c4bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C4BF0_0x4c4bf0");
#endif

    switch (ctx->pc) {
        case 0x4c4c0cu: goto label_4c4c0c;
        case 0x4c4c28u: goto label_4c4c28;
        default: break;
    }

    ctx->pc = 0x4c4bf0u;

    // 0x4c4bf0: 0x248500fc  addiu       $a1, $a0, 0xFC
    ctx->pc = 0x4c4bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 252));
    // 0x4c4bf4: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4c4bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4c4bf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c4bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c4bfc: 0x8c44278c  lw          $a0, 0x278C($v0)
    ctx->pc = 0x4c4bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53278Cu));
    // 0x4c4c00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c4c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4c4c04: 0xc132386  jal         func_4C8E18
    ctx->pc = 0x4C4C04u;
    SET_GPR_U32(ctx, 31, 0x4C4C0Cu);
    ctx->pc = 0x4C8E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8E18u, 0x4C4C04u, 0x4C4C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4C0Cu;
label_4c4c0c:
    // 0x4c4c0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c4c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c4c10: 0x3e00008  jr          $ra
    ctx->pc = 0x4C4C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C4C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4C10u;
        // 0x4c4c14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C4C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C4C18u;
    // 0x4c4c18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c4c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c4c1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c4c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4c4c20: 0xc132388  jal         func_4C8E20
    ctx->pc = 0x4C4C20u;
    SET_GPR_U32(ctx, 31, 0x4C4C28u);
    ctx->pc = 0x4C8E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8E20u, 0x4C4C20u, 0x4C4C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4C28u;
label_4c4c28:
    // 0x4c4c28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c4c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c4c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x4C4C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C4C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4C2Cu;
        // 0x4c4c30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C4C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C4C34u;
    // 0x4c4c34: 0x0  nop
    ctx->pc = 0x4c4c34u;
    // NOP
    ctx->pc = 0x4c4c38u;
}
