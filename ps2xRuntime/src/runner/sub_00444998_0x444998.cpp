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

// Function: sub_00444998
// Address: 0x444998 - 0x4449e0
void sub_00444998_0x444998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00444998_0x444998");
#endif

    switch (ctx->pc) {
        case 0x4449a0u: goto label_4449a0;
        case 0x4449a8u: goto label_4449a8;
        case 0x4449b8u: goto label_4449b8;
        default: break;
    }

    ctx->pc = 0x444998u;

    // 0x444998: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x444998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x44499c: 0xc  syscall     0
    ctx->pc = 0x44499cu;
    ctx->pc = 0x4449A0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_4449a0:
    // 0x4449a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4449A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4449A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4449A8u;
label_4449a8:
    // 0x4449a8: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x4449a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x4449ac: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x4449ACu;
    {
        const bool branch_taken_0x4449ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4449B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4449ACu;
        // 0x4449b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4449ac) {
            ctx->pc = 0x4449D8u;
            goto label_4449d8;
        }
    }
    ctx->pc = 0x4449B4u;
    // 0x4449b4: 0x0  nop
    ctx->pc = 0x4449b4u;
    // NOP
label_4449b8:
    // 0x4449b8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4449b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4449bc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4449bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4449c0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4449c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4449c4: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x4449c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4449c8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4449c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4449cc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4449ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x4449d0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4449D0u;
    {
        const bool branch_taken_0x4449d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4449d0) {
            ctx->pc = 0x4449B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4449b8;
        }
    }
    ctx->pc = 0x4449D8u;
label_4449d8:
    // 0x4449d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4449D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4449DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4449D8u;
        // 0x4449dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4449D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4449E0u;
}
