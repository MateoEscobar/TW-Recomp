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

// Function: sub_001C6B38
// Address: 0x1c6b38 - 0x1c6b78
void sub_001C6B38_0x1c6b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6B38_0x1c6b38");
#endif

    switch (ctx->pc) {
        case 0x1c6b50u: goto label_1c6b50;
        case 0x1c6b68u: goto label_1c6b68;
        default: break;
    }

    ctx->pc = 0x1c6b38u;

    // 0x1c6b38: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c6b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1c6b3c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6b3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6b40: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x1c6b40u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CD4Cu));
    // 0x1c6b44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6b48: 0xc0616ac  jal         func_185AB0
    ctx->pc = 0x1C6B48u;
    SET_GPR_U32(ctx, 31, 0x1C6B50u);
    ctx->pc = 0x1C6B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B48u;
    // 0x1c6b4c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x1C6B48u, 0x1C6B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B50u;
label_1c6b50:
    // 0x1c6b50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b54: 0x90820011  lbu         $v0, 0x11($a0)
    ctx->pc = 0x1c6b54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x1c6b58: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6B58u;
    {
        const bool branch_taken_0x1c6b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B58u;
        // 0x1c6b5c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b58) {
            ctx->pc = 0x1C6B6Cu;
            goto label_1c6b6c;
        }
    }
    ctx->pc = 0x1C6B60u;
    // 0x1c6b60: 0xc065cac  jal         func_1972B0
    ctx->pc = 0x1C6B60u;
    SET_GPR_U32(ctx, 31, 0x1C6B68u);
    ctx->pc = 0x1C6B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B60u;
    // 0x1c6b64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1972B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1972B0u, 0x1C6B60u, 0x1C6B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B68u;
label_1c6b68:
    // 0x1c6b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c6b6c:
    // 0x1c6b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B6Cu;
        // 0x1c6b70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6B74u;
    // 0x1c6b74: 0x0  nop
    ctx->pc = 0x1c6b74u;
    // NOP
    ctx->pc = 0x1c6b78u;
}
