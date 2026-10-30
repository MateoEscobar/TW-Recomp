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

// Function: sub_00213718
// Address: 0x213718 - 0x213770
void sub_00213718_0x213718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213718_0x213718");
#endif

    switch (ctx->pc) {
        case 0x213740u: goto label_213740;
        default: break;
    }

    ctx->pc = 0x213718u;

    // 0x213718: 0x8c8340f4  lw          $v1, 0x40F4($a0)
    ctx->pc = 0x213718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16628)));
    // 0x21371c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x21371cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x213720: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x213720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x213724: 0x2442fec0  addiu       $v0, $v0, -0x140
    ctx->pc = 0x213724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966976));
    // 0x213728: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x213728u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21372c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x21372cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x213730: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x213730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213734: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x213734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x213738: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x213738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21373c: 0x0  nop
    ctx->pc = 0x21373cu;
    // NOP
label_213740:
    // 0x213740: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x213740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x213744: 0x10460003  beq         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x213744u;
    {
        const bool branch_taken_0x213744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x213744) {
            ctx->pc = 0x213754u;
            goto label_213754;
        }
    }
    ctx->pc = 0x21374Cu;
    // 0x21374c: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21374Cu;
    {
        const bool branch_taken_0x21374c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x21374c) {
            ctx->pc = 0x213750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21374Cu;
            // 0x213750: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21375Cu;
            goto label_21375c;
        }
    }
    ctx->pc = 0x213754u;
label_213754:
    // 0x213754: 0x3e00008  jr          $ra
    ctx->pc = 0x213754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213754u;
        // 0x213758: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21375Cu;
label_21375c:
    // 0x21375c: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x21375cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x213760: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x213760u;
    {
        const bool branch_taken_0x213760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213760u;
        // 0x213764: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213760) {
            ctx->pc = 0x213740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213740;
        }
    }
    ctx->pc = 0x213768u;
    // 0x213768: 0x3e00008  jr          $ra
    ctx->pc = 0x213768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213768u;
        // 0x21376c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213770u;
}
