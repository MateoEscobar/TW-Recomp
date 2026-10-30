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

// Function: sub_00443780
// Address: 0x443780 - 0x4437c8
void sub_00443780_0x443780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443780_0x443780");
#endif

    switch (ctx->pc) {
        case 0x443788u: goto label_443788;
        case 0x443790u: goto label_443790;
        case 0x4437a0u: goto label_4437a0;
        default: break;
    }

    ctx->pc = 0x443780u;

    // 0x443780: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x443780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x443784: 0xc  syscall     0
    ctx->pc = 0x443784u;
    ctx->pc = 0x443788u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_443788:
    // 0x443788: 0x3e00008  jr          $ra
    ctx->pc = 0x443788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443790u;
label_443790:
    // 0x443790: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x443790u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x443794: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x443794u;
    {
        const bool branch_taken_0x443794 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x443798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443794u;
        // 0x443798: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443794) {
            ctx->pc = 0x4437C0u;
            goto label_4437c0;
        }
    }
    ctx->pc = 0x44379Cu;
    // 0x44379c: 0x0  nop
    ctx->pc = 0x44379cu;
    // NOP
label_4437a0:
    // 0x4437a0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4437a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4437a4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4437a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4437a8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4437a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4437ac: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x4437acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4437b0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4437b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4437b4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4437b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x4437b8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4437B8u;
    {
        const bool branch_taken_0x4437b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4437b8) {
            ctx->pc = 0x4437A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4437a0;
        }
    }
    ctx->pc = 0x4437C0u;
label_4437c0:
    // 0x4437c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4437C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4437C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4437C0u;
        // 0x4437c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4437C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4437C8u;
}
