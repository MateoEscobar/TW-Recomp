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

// Function: sub_004EF3B8
// Address: 0x4ef3b8 - 0x4ef3e8
void sub_004EF3B8_0x4ef3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF3B8_0x4ef3b8");
#endif

    switch (ctx->pc) {
        case 0x4ef3b8u: goto label_4ef3b8;
        case 0x4ef3bcu: goto label_4ef3bc;
        case 0x4ef3c0u: goto label_4ef3c0;
        case 0x4ef3c4u: goto label_4ef3c4;
        case 0x4ef3c8u: goto label_4ef3c8;
        case 0x4ef3ccu: goto label_4ef3cc;
        case 0x4ef3d0u: goto label_4ef3d0;
        case 0x4ef3d4u: goto label_4ef3d4;
        case 0x4ef3d8u: goto label_4ef3d8;
        case 0x4ef3dcu: goto label_4ef3dc;
        case 0x4ef3e0u: goto label_4ef3e0;
        case 0x4ef3e4u: goto label_4ef3e4;
        default: break;
    }

    ctx->pc = 0x4ef3b8u;

label_4ef3b8:
    // 0x4ef3b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ef3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4ef3bc:
    // 0x4ef3bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ef3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ef3c0:
    // 0x4ef3c0: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4ef3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4ef3c4:
    // 0x4ef3c4: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4ef3c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4ef3c8:
    // 0x4ef3c8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4ef3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4ef3cc:
    // 0x4ef3cc: 0x40f809  jalr        $v0
label_4ef3d0:
    if (ctx->pc == 0x4EF3D0u) {
        ctx->pc = 0x4EF3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF3CCu;
        // 0x4ef3d0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EF3D4u;
        goto label_4ef3d4;
    }
    ctx->pc = 0x4EF3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4EF3D4u);
        ctx->pc = 0x4EF3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF3CCu;
        // 0x4ef3d0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF3CCu, 0x4EF3D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EF3D4u;
label_4ef3d4:
    // 0x4ef3d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ef3d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ef3d8:
    // 0x4ef3d8: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x4ef3d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_4ef3dc:
    // 0x4ef3dc: 0x3e00008  jr          $ra
label_4ef3e0:
    if (ctx->pc == 0x4EF3E0u) {
        ctx->pc = 0x4EF3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF3DCu;
        // 0x4ef3e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EF3E4u;
        goto label_4ef3e4;
    }
    ctx->pc = 0x4EF3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF3DCu;
        // 0x4ef3e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EF3E4u;
label_4ef3e4:
    // 0x4ef3e4: 0x0  nop
    ctx->pc = 0x4ef3e4u;
    // NOP
    ctx->pc = 0x4ef3e8u;
}
