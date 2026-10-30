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

// Function: sub_001694B8
// Address: 0x1694b8 - 0x1694e8
void sub_001694B8_0x1694b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001694B8_0x1694b8");
#endif

    switch (ctx->pc) {
        case 0x1694d8u: goto label_1694d8;
        default: break;
    }

    ctx->pc = 0x1694b8u;

    // 0x1694b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1694b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1694bc: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1694bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1694c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1694c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1694c4: 0x248401b0  addiu       $a0, $a0, 0x1B0
    ctx->pc = 0x1694c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x1694c8: 0x24c6cab8  addiu       $a2, $a2, -0x3548
    ctx->pc = 0x1694c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953656));
    // 0x1694cc: 0x2405025b  addiu       $a1, $zero, 0x25B
    ctx->pc = 0x1694ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 603));
    // 0x1694d0: 0xc05905e  jal         func_164178
    ctx->pc = 0x1694D0u;
    SET_GPR_U32(ctx, 31, 0x1694D8u);
    ctx->pc = 0x1694D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1694D0u;
    // 0x1694d4: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164178u, 0x1694D0u, 0x1694D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1694D8u;
label_1694d8:
    // 0x1694d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1694d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1694dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1694DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1694E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694DCu;
        // 0x1694e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1694DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1694E4u;
    // 0x1694e4: 0x0  nop
    ctx->pc = 0x1694e4u;
    // NOP
    ctx->pc = 0x1694e8u;
}
