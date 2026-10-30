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

// Function: sub_004CB568
// Address: 0x4cb568 - 0x4cb5b8
void sub_004CB568_0x4cb568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CB568_0x4cb568");
#endif

    switch (ctx->pc) {
        case 0x4cb5a8u: goto label_4cb5a8;
        default: break;
    }

    ctx->pc = 0x4cb568u;

    // 0x4cb568: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4cb568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4cb56c: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4cb56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4cb570: 0x8fac0040  lw          $t4, 0x40($sp)
    ctx->pc = 0x4cb570u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4cb574: 0x24423920  addiu       $v0, $v0, 0x3920
    ctx->pc = 0x4cb574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14624));
    // 0x4cb578: 0x8fad0048  lw          $t5, 0x48($sp)
    ctx->pc = 0x4cb578u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4cb57c: 0x8fae0050  lw          $t6, 0x50($sp)
    ctx->pc = 0x4cb57cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4cb580: 0x8faf0058  lw          $t7, 0x58($sp)
    ctx->pc = 0x4cb580u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4cb584: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x4cb584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4cb588: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4cb588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4cb58c: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x4cb58cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    // 0x4cb590: 0xafad0008  sw          $t5, 0x8($sp)
    ctx->pc = 0x4cb590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 13));
    // 0x4cb594: 0xafae0010  sw          $t6, 0x10($sp)
    ctx->pc = 0x4cb594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 14));
    // 0x4cb598: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x4cb598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x4cb59c: 0xafaf0020  sw          $t7, 0x20($sp)
    ctx->pc = 0x4cb59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 15));
    // 0x4cb5a0: 0xc1323fe  jal         func_4C8FF8
    ctx->pc = 0x4CB5A0u;
    SET_GPR_U32(ctx, 31, 0x4CB5A8u);
    ctx->pc = 0x4CB5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CB5A0u;
    // 0x4cb5a4: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8FF8u, 0x4CB5A0u, 0x4CB5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CB5A8u;
label_4cb5a8:
    // 0x4cb5a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4cb5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cb5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x4CB5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CB5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB5ACu;
        // 0x4cb5b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CB5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CB5B4u;
    // 0x4cb5b4: 0x0  nop
    ctx->pc = 0x4cb5b4u;
    // NOP
    ctx->pc = 0x4cb5b8u;
}
