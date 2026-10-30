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

// Function: sub_002EC4A0
// Address: 0x2ec4a0 - 0x2ec4e8
void sub_002EC4A0_0x2ec4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC4A0_0x2ec4a0");
#endif

    ctx->pc = 0x2ec4a0u;

    // 0x2ec4a0: 0x9082001c  lbu         $v0, 0x1C($a0)
    ctx->pc = 0x2ec4a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2ec4a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ec4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ec4a8: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC4A8u;
    {
        const bool branch_taken_0x2ec4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EC4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC4A8u;
        // 0x2ec4ac: 0x90820025  lbu         $v0, 0x25($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 37)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec4a8) {
            ctx->pc = 0x2EC4C0u;
            goto label_2ec4c0;
        }
    }
    ctx->pc = 0x2EC4B0u;
    // 0x2ec4b0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EC4B0u;
    {
        const bool branch_taken_0x2ec4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC4B0u;
        // 0x2ec4b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec4b0) {
            ctx->pc = 0x2EC4DCu;
            goto label_2ec4dc;
        }
    }
    ctx->pc = 0x2EC4B8u;
    // 0x2ec4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC4C0u;
label_2ec4c0:
    // 0x2ec4c0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC4C0u;
    {
        const bool branch_taken_0x2ec4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC4C0u;
        // 0x2ec4c4: 0x2405ffef  addiu       $a1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec4c0) {
            ctx->pc = 0x2EC4DCu;
            goto label_2ec4dc;
        }
    }
    ctx->pc = 0x2EC4C8u;
    // 0x2ec4c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ec4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ec4cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ec4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ec4d0: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x2ec4d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x2ec4d4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2ec4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2ec4d8: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x2ec4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
label_2ec4dc:
    // 0x2ec4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC4DCu;
        // 0x2ec4e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC4E4u;
    // 0x2ec4e4: 0x0  nop
    ctx->pc = 0x2ec4e4u;
    // NOP
    ctx->pc = 0x2ec4e8u;
}
