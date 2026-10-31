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

// Function: sub_00238158
// Address: 0x238158 - 0x238190
void sub_00238158_0x238158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238158_0x238158");
#endif

    switch (ctx->pc) {
        case 0x23816cu: goto label_23816c;
        case 0x238174u: goto label_238174;
        default: break;
    }

    ctx->pc = 0x238158u;

    // 0x238158: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23815c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23815cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x238160: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x238164: 0xc0e4060  jal         func_390180
    ctx->pc = 0x238164u;
    SET_GPR_U32(ctx, 31, 0x23816Cu);
    ctx->pc = 0x238168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238164u;
    // 0x238168: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x238164u, 0x23816Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23816Cu;
label_23816c:
    // 0x23816c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x23816Cu;
    SET_GPR_U32(ctx, 31, 0x238174u);
    ctx->pc = 0x238170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23816Cu;
    // 0x238170: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23816Cu, 0x238174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238174u;
label_238174:
    // 0x238174: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x238174u;
    {
        const bool branch_taken_0x238174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238174) {
            ctx->pc = 0x238178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238174u;
            // 0x238178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238180u;
            goto label_238180;
        }
    }
    ctx->pc = 0x23817Cu;
    // 0x23817c: 0x8c420370  lw          $v0, 0x370($v0)
    ctx->pc = 0x23817cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
label_238180:
    // 0x238180: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238184: 0x3e00008  jr          $ra
    ctx->pc = 0x238184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238184u;
        // 0x238188: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23818Cu;
    // 0x23818c: 0x0  nop
    ctx->pc = 0x23818cu;
    // NOP
    ctx->pc = 0x238190u;
}
