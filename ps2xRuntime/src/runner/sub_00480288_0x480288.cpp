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

// Function: sub_00480288
// Address: 0x480288 - 0x4802e0
void sub_00480288_0x480288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00480288_0x480288");
#endif

    ctx->pc = 0x480288u;

    // 0x480288: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x480288u;
    {
        const bool branch_taken_0x480288 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x48028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480288u;
        // 0x48028c: 0x8f838950  lw          $v1, -0x76B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480288) {
            ctx->pc = 0x480298u;
            goto label_480298;
        }
    }
    ctx->pc = 0x480290u;
    // 0x480290: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x480290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x480294: 0x24440398  addiu       $a0, $v0, 0x398
    ctx->pc = 0x480294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 920));
label_480298:
    // 0x480298: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x480298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x48029c: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x48029cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x4802a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4802a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4802a4: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4802A4u;
    {
        const bool branch_taken_0x4802a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4802A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4802A4u;
        // 0x4802a8: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4802a4) {
            ctx->pc = 0x4802B4u;
            goto label_4802b4;
        }
    }
    ctx->pc = 0x4802ACu;
    // 0x4802ac: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x4802acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x4802b0: 0x244502e0  addiu       $a1, $v0, 0x2E0
    ctx->pc = 0x4802b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 736));
label_4802b4:
    // 0x4802b4: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4802B4u;
    {
        const bool branch_taken_0x4802b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4802B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4802B4u;
        // 0x4802b8: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4802b4) {
            ctx->pc = 0x4802C4u;
            goto label_4802c4;
        }
    }
    ctx->pc = 0x4802BCu;
    // 0x4802bc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x4802bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x4802c0: 0x244604d0  addiu       $a2, $v0, 0x4D0
    ctx->pc = 0x4802c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1232));
label_4802c4:
    // 0x4802c4: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x4802C4u;
    {
        const bool branch_taken_0x4802c4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4802C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4802C4u;
        // 0x4802c8: 0xac660010  sw          $a2, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4802c4) {
            ctx->pc = 0x4802D4u;
            goto label_4802d4;
        }
    }
    ctx->pc = 0x4802CCu;
    // 0x4802cc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x4802ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x4802d0: 0x24470430  addiu       $a3, $v0, 0x430
    ctx->pc = 0x4802d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1072));
label_4802d4:
    // 0x4802d4: 0xac670014  sw          $a3, 0x14($v1)
    ctx->pc = 0x4802d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 7));
    // 0x4802d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4802D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4802DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4802D8u;
        // 0x4802dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4802D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4802E0u;
}
