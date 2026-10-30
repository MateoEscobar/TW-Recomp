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

// Function: sub_001488A8
// Address: 0x1488a8 - 0x1488f8
void sub_001488A8_0x1488a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001488A8_0x1488a8");
#endif

    switch (ctx->pc) {
        case 0x1488d0u: goto label_1488d0;
        default: break;
    }

    ctx->pc = 0x1488a8u;

    // 0x1488a8: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x1488a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x1488ac: 0x24450000  addiu       $a1, $v0, 0x0
    ctx->pc = 0x1488acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x1488b0: 0x24a3f800  addiu       $v1, $a1, -0x800
    ctx->pc = 0x1488b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965248));
    // 0x1488b4: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1488b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1488b8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1488B8u;
    {
        const bool branch_taken_0x1488b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1488b8) {
            ctx->pc = 0x1488ECu;
            goto label_1488ec;
        }
    }
    ctx->pc = 0x1488C0u;
    // 0x1488c0: 0x3c04cdcd  lui         $a0, 0xCDCD
    ctx->pc = 0x1488c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52685 << 16));
    // 0x1488c4: 0x3484cdcd  ori         $a0, $a0, 0xCDCD
    ctx->pc = 0x1488c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52685);
    // 0x1488c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1488c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1488cc: 0x0  nop
    ctx->pc = 0x1488ccu;
    // NOP
label_1488d0:
    // 0x1488d0: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1488D0u;
    {
        const bool branch_taken_0x1488d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1488D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1488D0u;
        // 0x1488d4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1488d0) {
            ctx->pc = 0x1488E0u;
            goto label_1488e0;
        }
    }
    ctx->pc = 0x1488D8u;
    // 0x1488d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1488D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1488DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1488D8u;
        // 0x1488dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1488D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1488E0u;
label_1488e0:
    // 0x1488e0: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1488e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1488e4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1488E4u;
    {
        const bool branch_taken_0x1488e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1488e4) {
            ctx->pc = 0x1488E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1488E4u;
            // 0x1488e8: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1488D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1488d0;
        }
    }
    ctx->pc = 0x1488ECu;
label_1488ec:
    // 0x1488ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1488ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1488F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1488ECu;
        // 0x1488f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1488ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1488F4u;
    // 0x1488f4: 0x0  nop
    ctx->pc = 0x1488f4u;
    // NOP
    ctx->pc = 0x1488f8u;
}
