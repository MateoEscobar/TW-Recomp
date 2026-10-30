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

// Function: sub_004B3820
// Address: 0x4b3820 - 0x4b3880
void sub_004B3820_0x4b3820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3820_0x4b3820");
#endif

    ctx->pc = 0x4b3820u;

    // 0x4b3820: 0x10a40015  beq         $a1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4B3820u;
    {
        const bool branch_taken_0x4b3820 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x4b3820) {
            ctx->pc = 0x4B3878u;
            goto label_4b3878;
        }
    }
    ctx->pc = 0x4B3828u;
    // 0x4b3828: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4b3828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b382c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4b382cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b3830: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B3830u;
    {
        const bool branch_taken_0x4b3830 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B3834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3830u;
        // 0x4b3834: 0x8c860000  lw          $a2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3830) {
            ctx->pc = 0x4B3844u;
            goto label_4b3844;
        }
    }
    ctx->pc = 0x4B3838u;
    // 0x4b3838: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4b3838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b383c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B383Cu;
    {
        const bool branch_taken_0x4b383c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B383Cu;
        // 0x4b3840: 0xa0c2001a  sb          $v0, 0x1A($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b383c) {
            ctx->pc = 0x4B3848u;
            goto label_4b3848;
        }
    }
    ctx->pc = 0x4B3844u;
label_4b3844:
    // 0x4b3844: 0xa0c0001a  sb          $zero, 0x1A($a2)
    ctx->pc = 0x4b3844u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26), (uint8_t)GPR_U32(ctx, 0));
label_4b3848:
    // 0x4b3848: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x4b3848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4b384c: 0xa0c0001b  sb          $zero, 0x1B($a2)
    ctx->pc = 0x4b384cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x4b3850: 0xacc2001c  sw          $v0, 0x1C($a2)
    ctx->pc = 0x4b3850u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
    // 0x4b3854: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4b3854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4b3858: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x4b3858u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x4b385c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x4b385cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x4b3860: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4b3860u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4b3864: 0xa4c30018  sh          $v1, 0x18($a2)
    ctx->pc = 0x4b3864u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b3868: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x4b3868u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x4b386c: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x4b386cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x4b3870: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x4b3870u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x4b3874: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x4b3874u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_4b3878:
    // 0x4b3878: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3878u;
        // 0x4b387c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3880u;
}
