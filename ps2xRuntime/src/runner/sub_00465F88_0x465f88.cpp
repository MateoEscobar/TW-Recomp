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

// Function: sub_00465F88
// Address: 0x465f88 - 0x465fcc
void sub_00465F88_0x465f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465F88_0x465f88");
#endif

    ctx->pc = 0x465f88u;

    // 0x465f88: 0x8f828490  lw          $v0, -0x7B70($gp)
    ctx->pc = 0x465f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x465f8c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x465f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x465f90: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x465f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x465f94: 0x8ca30080  lw          $v1, 0x80($a1)
    ctx->pc = 0x465f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x465f98: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x465f98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x465f9c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x465F9Cu;
    {
        const bool branch_taken_0x465f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x465FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465F9Cu;
        // 0x465fa0: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465f9c) {
            ctx->pc = 0x466018u;
            return;
        }
    }
    ctx->pc = 0x465FA4u;
    // 0x465fa4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x465fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x465fa8: 0x2442e940  addiu       $v0, $v0, -0x16C0
    ctx->pc = 0x465fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961472));
    // 0x465fac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x465facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x465fb0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x465fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x465fb4: 0x800008  jr          $a0
    ctx->pc = 0x465FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x465FBCu: goto label_465fbc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465FB4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x465FBCu;
label_465fbc:
    // 0x465fbc: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x465fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x465fc0: 0xfca00070  sd          $zero, 0x70($a1)
    ctx->pc = 0x465fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 112), GPR_U64(ctx, 0));
    // 0x465fc4: 0xfca20068  sd          $v0, 0x68($a1)
    ctx->pc = 0x465fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 104), GPR_U64(ctx, 2));
    // 0x465fc8: 0xfca00078  sd          $zero, 0x78($a1)
    ctx->pc = 0x465fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 120), GPR_U64(ctx, 0));
    ctx->pc = 0x465fccu;
}
