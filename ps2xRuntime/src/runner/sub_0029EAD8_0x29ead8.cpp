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

// Function: sub_0029EAD8
// Address: 0x29ead8 - 0x29eb10
void sub_0029EAD8_0x29ead8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EAD8_0x29ead8");
#endif

    ctx->pc = 0x29ead8u;

    // 0x29ead8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x29ead8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x29eadc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29eadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29eae0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x29eae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x29eae4: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x29eae4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29eae8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29eae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29eaec: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29EAECu;
    {
        const bool branch_taken_0x29eaec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29EAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EAECu;
        // 0x29eaf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eaec) {
            ctx->pc = 0x29EB04u;
            goto label_29eb04;
        }
    }
    ctx->pc = 0x29EAF4u;
    // 0x29eaf4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29eaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29eaf8: 0x10660002  beq         $v1, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x29EAF8u;
    {
        const bool branch_taken_0x29eaf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x29EAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EAF8u;
        // 0x29eafc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eaf8) {
            ctx->pc = 0x29EB04u;
            goto label_29eb04;
        }
    }
    ctx->pc = 0x29EB00u;
    // 0x29eb00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29eb00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29eb04:
    // 0x29eb04: 0x3e00008  jr          $ra
    ctx->pc = 0x29EB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EB04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EB0Cu;
    // 0x29eb0c: 0x0  nop
    ctx->pc = 0x29eb0cu;
    // NOP
    ctx->pc = 0x29eb10u;
}
