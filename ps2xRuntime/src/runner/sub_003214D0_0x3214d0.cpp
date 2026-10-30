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

// Function: sub_003214D0
// Address: 0x3214d0 - 0x321540
void sub_003214D0_0x3214d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003214D0_0x3214d0");
#endif

    switch (ctx->pc) {
        case 0x3214e8u: goto label_3214e8;
        default: break;
    }

    ctx->pc = 0x3214d0u;

    // 0x3214d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3214d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3214d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3214d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3214d8: 0x8c421654  lw          $v0, 0x1654($v0)
    ctx->pc = 0x3214d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x511654u));
    // 0x3214dc: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x3214dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3214e0: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3214E0u;
    {
        const bool branch_taken_0x3214e0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x3214E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3214E0u;
        // 0x3214e4: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3214e0) {
            ctx->pc = 0x3214F0u;
            goto label_3214f0;
        }
    }
    ctx->pc = 0x3214E8u;
label_3214e8:
    // 0x3214e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3214E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3214ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3214E8u;
        // 0x3214ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3214E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3214F0u;
label_3214f0:
    // 0x3214f0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x3214f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3214f4: 0x10c20003  beq         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3214F4u;
    {
        const bool branch_taken_0x3214f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3214F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3214F4u;
        // 0x3214f8: 0xc7102b  sltu        $v0, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3214f4) {
            ctx->pc = 0x321504u;
            goto label_321504;
        }
    }
    ctx->pc = 0x3214FCu;
    // 0x3214fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3214FCu;
    {
        const bool branch_taken_0x3214fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3214FCu;
        // 0x321500: 0xe6102b  sltu        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3214fc) {
            ctx->pc = 0x32150Cu;
            goto label_32150c;
        }
    }
    ctx->pc = 0x321504u;
label_321504:
    // 0x321504: 0x3e00008  jr          $ra
    ctx->pc = 0x321504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321504u;
        // 0x321508: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32150Cu;
label_32150c:
    // 0x32150c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x32150Cu;
    {
        const bool branch_taken_0x32150c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32150c) {
            ctx->pc = 0x3214E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3214e8;
        }
    }
    ctx->pc = 0x321514u;
    // 0x321514: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x321514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x321518: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x321518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x32151c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x32151cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x321520: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x321520u;
    {
        const bool branch_taken_0x321520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321520u;
        // 0x321524: 0x83182b  sltu        $v1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x321520) {
            ctx->pc = 0x321534u;
            goto label_321534;
        }
    }
    ctx->pc = 0x321528u;
    // 0x321528: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x321528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32152c: 0x3e00008  jr          $ra
    ctx->pc = 0x32152Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32152Cu;
        // 0x321530: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32152Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321534u;
label_321534:
    // 0x321534: 0x3e00008  jr          $ra
    ctx->pc = 0x321534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321534u;
        // 0x321538: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32153Cu;
    // 0x32153c: 0x0  nop
    ctx->pc = 0x32153cu;
    // NOP
    ctx->pc = 0x321540u;
}
