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

// Function: sub_004657C8
// Address: 0x4657c8 - 0x465810
void sub_004657C8_0x4657c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004657C8_0x4657c8");
#endif

    switch (ctx->pc) {
        case 0x4657e0u: goto label_4657e0;
        default: break;
    }

    ctx->pc = 0x4657c8u;

    // 0x4657c8: 0x8f828490  lw          $v0, -0x7B70($gp)
    ctx->pc = 0x4657c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x4657cc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4657ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4657d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4657d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4657d4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4657d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4657d8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4657d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4657dc: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x4657dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_4657e0:
    // 0x4657e0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4657e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4657e4: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x4657e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x4657e8: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x4657E8u;
    {
        const bool branch_taken_0x4657e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x4657e8) {
            ctx->pc = 0x465808u;
            goto label_465808;
        }
    }
    ctx->pc = 0x4657F0u;
    // 0x4657f0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x4657f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4657f4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x4657f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4657f8: 0x2ca30002  sltiu       $v1, $a1, 0x2
    ctx->pc = 0x4657f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4657fc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4657FCu;
    {
        const bool branch_taken_0x4657fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x465800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4657FCu;
        // 0x465800: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4657fc) {
            ctx->pc = 0x4657E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4657e0;
        }
    }
    ctx->pc = 0x465804u;
    // 0x465804: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x465804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_465808:
    // 0x465808: 0x3e00008  jr          $ra
    ctx->pc = 0x465808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465808u;
        // 0x46580c: 0xc4400008  lwc1        $f0, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x465810u;
}
