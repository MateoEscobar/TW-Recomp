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

// Function: sub_0042C908
// Address: 0x42c908 - 0x42c960
void sub_0042C908_0x42c908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042C908_0x42c908");
#endif

    switch (ctx->pc) {
        case 0x42c91cu: goto label_42c91c;
        case 0x42c930u: goto label_42c930;
        case 0x42c940u: goto label_42c940;
        default: break;
    }

    ctx->pc = 0x42c908u;

    // 0x42c908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42c908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x42c90c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x42c90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x42c910: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x42c910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x42c914: 0xc10ced8  jal         func_433B60
    ctx->pc = 0x42C914u;
    SET_GPR_U32(ctx, 31, 0x42C91Cu);
    ctx->pc = 0x42C918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C914u;
    // 0x42c918: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433B60u, 0x42C914u, 0x42C91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C91Cu;
label_42c91c:
    // 0x42c91c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42c91cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42c920: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x42C920u;
    {
        const bool branch_taken_0x42c920 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x42C924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C920u;
        // 0x42c924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c920) {
            ctx->pc = 0x42C934u;
            goto label_42c934;
        }
    }
    ctx->pc = 0x42C928u;
    // 0x42c928: 0xc10b22a  jal         func_42C8A8
    ctx->pc = 0x42C928u;
    SET_GPR_U32(ctx, 31, 0x42C930u);
    ctx->pc = 0x42C8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C8A8u, 0x42C928u, 0x42C930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C930u;
label_42c930:
    // 0x42c930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42c930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42c934:
    // 0x42c934: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42c934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42c938: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x42C938u;
    SET_GPR_U32(ctx, 31, 0x42C940u);
    ctx->pc = 0x42C93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C938u;
    // 0x42c93c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x42C938u, 0x42C940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C940u;
label_42c940:
    // 0x42c940: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x42c940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x42c944: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x42c944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42c948: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x42c948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x42c94c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42c94cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42c950: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x42c950u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42c954: 0x3e00008  jr          $ra
    ctx->pc = 0x42C954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C954u;
        // 0x42c958: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42C95Cu;
    // 0x42c95c: 0x0  nop
    ctx->pc = 0x42c95cu;
    // NOP
    ctx->pc = 0x42c960u;
}
