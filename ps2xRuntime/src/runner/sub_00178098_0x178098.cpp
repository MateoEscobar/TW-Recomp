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

// Function: sub_00178098
// Address: 0x178098 - 0x1780d0
void sub_00178098_0x178098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178098_0x178098");
#endif

    switch (ctx->pc) {
        case 0x1780a8u: goto label_1780a8;
        default: break;
    }

    ctx->pc = 0x178098u;

    // 0x178098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x178098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17809c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17809cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1780a0: 0xc051048  jal         func_144120
    ctx->pc = 0x1780A0u;
    SET_GPR_U32(ctx, 31, 0x1780A8u);
    ctx->pc = 0x1780A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1780A0u;
    // 0x1780a4: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x1780A0u, 0x1780A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1780A8u;
label_1780a8:
    // 0x1780a8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1780a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1780ac: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x1780acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1780b0: 0x8c83cd4c  lw          $v1, -0x32B4($a0)
    ctx->pc = 0x1780b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CD4Cu));
    // 0x1780b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1780b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1780b8: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x1780b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x1780bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1780bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1780c0: 0xac650088  sw          $a1, 0x88($v1)
    ctx->pc = 0x1780c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 5));
    // 0x1780c4: 0xac640084  sw          $a0, 0x84($v1)
    ctx->pc = 0x1780c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 4));
    // 0x1780c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1780C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1780CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1780C8u;
        // 0x1780cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1780C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1780D0u;
}
