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

// Function: sub_0043F730
// Address: 0x43f730 - 0x43f788
void sub_0043F730_0x43f730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043F730_0x43f730");
#endif

    ctx->pc = 0x43f730u;

    // 0x43f730: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x43f730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x43f734: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x43F734u;
    {
        const bool branch_taken_0x43f734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x43F738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F734u;
        // 0x43f738: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f734) {
            ctx->pc = 0x43F744u;
            goto label_43f744;
        }
    }
    ctx->pc = 0x43F73Cu;
    // 0x43f73c: 0x3e00008  jr          $ra
    ctx->pc = 0x43F73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43F740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F73Cu;
        // 0x43f740: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43F744u;
label_43f744:
    // 0x43f744: 0x28c20100  slti        $v0, $a2, 0x100
    ctx->pc = 0x43f744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x43f748: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x43F748u;
    {
        const bool branch_taken_0x43f748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43f748) {
            ctx->pc = 0x43F74Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43F748u;
            // 0x43f74c: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43F77Cu;
            goto label_43f77c;
        }
    }
    ctx->pc = 0x43F750u;
    // 0x43f750: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x43f750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x43f754: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x43f754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x43f758: 0x2300a  movz        $a2, $zero, $v0
    ctx->pc = 0x43f758u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x43f75c: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x43f75cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x43f760: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43f760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43f764: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x43f764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x43f768: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x43f768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x43f76c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x43f76cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x43f770: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x43f770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x43f774: 0x3e00008  jr          $ra
    ctx->pc = 0x43F774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F774u;
        // 0x43f778: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43F77Cu;
label_43f77c:
    // 0x43f77c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x43f77cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43f780: 0x3e00008  jr          $ra
    ctx->pc = 0x43F780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43F784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F780u;
        // 0x43f784: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43F788u;
}
