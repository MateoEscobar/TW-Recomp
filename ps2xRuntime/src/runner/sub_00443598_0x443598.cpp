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

// Function: sub_00443598
// Address: 0x443598 - 0x4435e0
void sub_00443598_0x443598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443598_0x443598");
#endif

    switch (ctx->pc) {
        case 0x4435a0u: goto label_4435a0;
        case 0x4435a8u: goto label_4435a8;
        case 0x4435b8u: goto label_4435b8;
        default: break;
    }

    ctx->pc = 0x443598u;

    // 0x443598: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x443598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x44359c: 0xc  syscall     0
    ctx->pc = 0x44359cu;
    ctx->pc = 0x4435A0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_4435a0:
    // 0x4435a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4435A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4435A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4435A8u;
label_4435a8:
    // 0x4435a8: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x4435a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x4435ac: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x4435ACu;
    {
        const bool branch_taken_0x4435ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4435B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4435ACu;
        // 0x4435b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4435ac) {
            ctx->pc = 0x4435D8u;
            goto label_4435d8;
        }
    }
    ctx->pc = 0x4435B4u;
    // 0x4435b4: 0x0  nop
    ctx->pc = 0x4435b4u;
    // NOP
label_4435b8:
    // 0x4435b8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4435b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4435bc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4435bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4435c0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4435c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4435c4: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x4435c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4435c8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4435c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4435cc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4435ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x4435d0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4435D0u;
    {
        const bool branch_taken_0x4435d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4435d0) {
            ctx->pc = 0x4435B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4435b8;
        }
    }
    ctx->pc = 0x4435D8u;
label_4435d8:
    // 0x4435d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4435D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4435DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4435D8u;
        // 0x4435dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4435D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4435E0u;
}
