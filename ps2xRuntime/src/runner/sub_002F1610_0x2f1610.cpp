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

// Function: sub_002F1610
// Address: 0x2f1610 - 0x2f1648
void sub_002F1610_0x2f1610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1610_0x2f1610");
#endif

    ctx->pc = 0x2f1610u;

    // 0x2f1610: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f1610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f1614: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f1614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1618: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F1618u;
    {
        const bool branch_taken_0x2f1618 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1618u;
        // 0x2f161c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1618) {
            ctx->pc = 0x2F1634u;
            goto label_2f1634;
        }
    }
    ctx->pc = 0x2F1620u;
    // 0x2f1620: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x2f1620u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x2f1624: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x2f1624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2f1628: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f1628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f162c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F162Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F162Cu;
        // 0x2f1630: 0xfc8200e0  sd          $v0, 0xE0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F162Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1634u;
label_2f1634:
    // 0x2f1634: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x2f1634u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x2f1638: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x2f1638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2f163c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f163cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f1640: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1640u;
        // 0x2f1644: 0xfc8200e0  sd          $v0, 0xE0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1648u;
}
