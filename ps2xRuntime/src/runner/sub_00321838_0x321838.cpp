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

// Function: sub_00321838
// Address: 0x321838 - 0x321890
void sub_00321838_0x321838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321838_0x321838");
#endif

    switch (ctx->pc) {
        case 0x321850u: goto label_321850;
        default: break;
    }

    ctx->pc = 0x321838u;

    // 0x321838: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x321838u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x32183c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32183cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x321840: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x321840u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321844: 0x2446b6f0  addiu       $a2, $v0, -0x4910
    ctx->pc = 0x321844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948592));
    // 0x321848: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x321848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32184c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x32184cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321850:
    // 0x321850: 0x8d24b6e0  lw          $a0, -0x4920($t1)
    ctx->pc = 0x321850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294948576)));
    // 0x321854: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x321854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x321858: 0x481004  sllv        $v0, $t0, $v0
    ctx->pc = 0x321858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x32185c: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x32185cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x321860: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x321860u;
    {
        const bool branch_taken_0x321860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x321864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321860u;
        // 0x321864: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321860) {
            ctx->pc = 0x321878u;
            goto label_321878;
        }
    }
    ctx->pc = 0x321868u;
    // 0x321868: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x321868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x32186c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x32186cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321870: 0x3e00008  jr          $ra
    ctx->pc = 0x321870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321870u;
        // 0x321874: 0xace3b6e0  sw          $v1, -0x4920($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294948576), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321878u;
label_321878:
    // 0x321878: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x321878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x32187c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x32187Cu;
    {
        const bool branch_taken_0x32187c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32187Cu;
        // 0x321880: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32187c) {
            ctx->pc = 0x321850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321850;
        }
    }
    ctx->pc = 0x321884u;
    // 0x321884: 0x3e00008  jr          $ra
    ctx->pc = 0x321884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321884u;
        // 0x321888: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32188Cu;
    // 0x32188c: 0x0  nop
    ctx->pc = 0x32188cu;
    // NOP
    ctx->pc = 0x321890u;
}
