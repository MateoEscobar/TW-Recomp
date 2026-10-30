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

// Function: sub_00321890
// Address: 0x321890 - 0x3218d8
void sub_00321890_0x321890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321890_0x321890");
#endif

    switch (ctx->pc) {
        case 0x3218a8u: goto label_3218a8;
        default: break;
    }

    ctx->pc = 0x321890u;

    // 0x321890: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x321890u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x321894: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x321894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x321898: 0x8d06b6e0  lw          $a2, -0x4920($t0)
    ctx->pc = 0x321898u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6EB6E0u));
    // 0x32189c: 0x2445b6f0  addiu       $a1, $v0, -0x4910
    ctx->pc = 0x32189cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948592));
    // 0x3218a0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3218a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3218a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3218a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3218a8:
    // 0x3218a8: 0x54850006  bnel        $a0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3218A8u;
    {
        const bool branch_taken_0x3218a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x3218a8) {
            ctx->pc = 0x3218ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3218A8u;
            // 0x3218ac: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3218C4u;
            goto label_3218c4;
        }
    }
    ctx->pc = 0x3218B0u;
    // 0x3218b0: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x3218b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x3218b4: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x3218b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x3218b8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3218b8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3218bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3218BCu;
    {
        const bool branch_taken_0x3218bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3218C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3218BCu;
        // 0x3218c0: 0xc23024  and         $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3218bc) {
            ctx->pc = 0x3218D0u;
            goto label_3218d0;
        }
    }
    ctx->pc = 0x3218C4u;
label_3218c4:
    // 0x3218c4: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x3218c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3218c8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3218C8u;
    {
        const bool branch_taken_0x3218c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3218CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3218C8u;
        // 0x3218cc: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3218c8) {
            ctx->pc = 0x3218A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3218a8;
        }
    }
    ctx->pc = 0x3218D0u;
label_3218d0:
    // 0x3218d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3218D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3218D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3218D0u;
        // 0x3218d4: 0xad06b6e0  sw          $a2, -0x4920($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294948576), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3218D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3218D8u;
}
