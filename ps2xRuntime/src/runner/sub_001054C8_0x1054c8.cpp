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

// Function: sub_001054C8
// Address: 0x1054c8 - 0x105510
void sub_001054C8_0x1054c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001054C8_0x1054c8");
#endif

    ctx->pc = 0x1054c8u;

    // 0x1054c8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1054c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1054cc: 0x8c46a898  lw          $a2, -0x5768($v0)
    ctx->pc = 0x1054ccu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50A898u));
    // 0x1054d0: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x1054d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1054d4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1054d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1054d8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1054d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1054dc: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1054DCu;
    {
        const bool branch_taken_0x1054dc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1054E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054DCu;
        // 0x1054e0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054dc) {
            ctx->pc = 0x1054FCu;
            goto label_1054fc;
        }
    }
    ctx->pc = 0x1054E4u;
    // 0x1054e4: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x1054e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1054e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1054e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1054ec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1054ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1054f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1054f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1054f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1054F4u;
    {
        const bool branch_taken_0x1054f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1054F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054F4u;
        // 0x1054f8: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054f4) {
            ctx->pc = 0x105500u;
            goto label_105500;
        }
    }
    ctx->pc = 0x1054FCu;
label_1054fc:
    // 0x1054fc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1054fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_105500:
    // 0x105500: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x105500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105504: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x105504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x105508: 0x3e00008  jr          $ra
    ctx->pc = 0x105508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105508u;
        // 0x10550c: 0xac600014  sw          $zero, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105510u;
}
