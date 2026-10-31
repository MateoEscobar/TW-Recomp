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

// Function: sub_00353730
// Address: 0x353730 - 0x353778
void sub_00353730_0x353730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353730_0x353730");
#endif

    switch (ctx->pc) {
        case 0x353750u: goto label_353750;
        default: break;
    }

    ctx->pc = 0x353730u;

    // 0x353730: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x353730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x353734: 0x8c432aec  lw          $v1, 0x2AEC($v0)
    ctx->pc = 0x353734u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x512AECu));
    // 0x353738: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x353738u;
    {
        const bool branch_taken_0x353738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353738u;
        // 0x35373c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353738) {
            ctx->pc = 0x353770u;
            goto label_353770;
        }
    }
    ctx->pc = 0x353740u;
    // 0x353740: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x353740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x353744: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x353744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353748: 0x8c43ba10  lw          $v1, -0x45F0($v0)
    ctx->pc = 0x353748u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBA10u));
    // 0x35374c: 0x0  nop
    ctx->pc = 0x35374cu;
    // NOP
label_353750:
    // 0x353750: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x353750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x353754: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x353754u;
    {
        const bool branch_taken_0x353754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x353758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353754u;
        // 0x353758: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353754) {
            ctx->pc = 0x353764u;
            goto label_353764;
        }
    }
    ctx->pc = 0x35375Cu;
    // 0x35375c: 0x3e00008  jr          $ra
    ctx->pc = 0x35375Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35375Cu;
        // 0x353760: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35375Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353764u;
label_353764:
    // 0x353764: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x353764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x353768: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x353768u;
    {
        const bool branch_taken_0x353768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353768u;
        // 0x35376c: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353768) {
            ctx->pc = 0x353750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353750;
        }
    }
    ctx->pc = 0x353770u;
label_353770:
    // 0x353770: 0x3e00008  jr          $ra
    ctx->pc = 0x353770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353770u;
        // 0x353774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353778u;
}
