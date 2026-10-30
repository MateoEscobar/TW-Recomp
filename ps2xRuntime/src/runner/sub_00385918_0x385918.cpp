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

// Function: sub_00385918
// Address: 0x385918 - 0x385950
void sub_00385918_0x385918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385918_0x385918");
#endif

    switch (ctx->pc) {
        case 0x38592cu: goto label_38592c;
        case 0x385934u: goto label_385934;
        default: break;
    }

    ctx->pc = 0x385918u;

    // 0x385918: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x385918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38591c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x38591cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x385920: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x385920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x385924: 0xc0e4060  jal         func_390180
    ctx->pc = 0x385924u;
    SET_GPR_U32(ctx, 31, 0x38592Cu);
    ctx->pc = 0x385928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385924u;
    // 0x385928: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x385924u, 0x38592Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38592Cu;
label_38592c:
    // 0x38592c: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x38592Cu;
    SET_GPR_U32(ctx, 31, 0x385934u);
    ctx->pc = 0x385930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38592Cu;
    // 0x385930: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x38592Cu, 0x385934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385934u;
label_385934:
    // 0x385934: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x385934u;
    {
        const bool branch_taken_0x385934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x385934) {
            ctx->pc = 0x385938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385934u;
            // 0x385938: 0x8c420128  lw          $v0, 0x128($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385940u;
            goto label_385940;
        }
    }
    ctx->pc = 0x38593Cu;
    // 0x38593c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38593cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_385940:
    // 0x385940: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x385940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x385944: 0x3e00008  jr          $ra
    ctx->pc = 0x385944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385944u;
        // 0x385948: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38594Cu;
    // 0x38594c: 0x0  nop
    ctx->pc = 0x38594cu;
    // NOP
    ctx->pc = 0x385950u;
}
