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

// Function: sub_00235718
// Address: 0x235718 - 0x235758
void sub_00235718_0x235718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235718_0x235718");
#endif

    switch (ctx->pc) {
        case 0x23572cu: goto label_23572c;
        case 0x235734u: goto label_235734;
        case 0x235744u: goto label_235744;
        default: break;
    }

    ctx->pc = 0x235718u;

    // 0x235718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x235718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23571c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23571cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x235720: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x235724: 0xc0e4060  jal         func_390180
    ctx->pc = 0x235724u;
    SET_GPR_U32(ctx, 31, 0x23572Cu);
    ctx->pc = 0x235728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235724u;
    // 0x235728: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x235724u, 0x23572Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23572Cu;
label_23572c:
    // 0x23572c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x23572Cu;
    SET_GPR_U32(ctx, 31, 0x235734u);
    ctx->pc = 0x235730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23572Cu;
    // 0x235730: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23572Cu, 0x235734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235734u;
label_235734:
    // 0x235734: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x235734u;
    {
        const bool branch_taken_0x235734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235734) {
            ctx->pc = 0x235738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235734u;
            // 0x235738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23574Cu;
            goto label_23574c;
        }
    }
    ctx->pc = 0x23573Cu;
    // 0x23573c: 0xc088edc  jal         func_223B70
    ctx->pc = 0x23573Cu;
    SET_GPR_U32(ctx, 31, 0x235744u);
    ctx->pc = 0x235740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23573Cu;
    // 0x235740: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x23573Cu, 0x235744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235744u;
label_235744:
    // 0x235744: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x235744u;
    {
        const bool branch_taken_0x235744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235744u;
        // 0x235748: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235744) {
            ctx->pc = 0x235750u;
            goto label_235750;
        }
    }
    ctx->pc = 0x23574Cu;
label_23574c:
    // 0x23574c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23574cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235750:
    // 0x235750: 0x3e00008  jr          $ra
    ctx->pc = 0x235750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235750u;
        // 0x235754: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235758u;
}
