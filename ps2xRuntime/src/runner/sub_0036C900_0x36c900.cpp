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

// Function: sub_0036C900
// Address: 0x36c900 - 0x36c978
void sub_0036C900_0x36c900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C900_0x36c900");
#endif

    switch (ctx->pc) {
        case 0x36c920u: goto label_36c920;
        case 0x36c928u: goto label_36c928;
        case 0x36c930u: goto label_36c930;
        case 0x36c93cu: goto label_36c93c;
        case 0x36c954u: goto label_36c954;
        case 0x36c960u: goto label_36c960;
        default: break;
    }

    ctx->pc = 0x36c900u;

    // 0x36c900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36c900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36c904: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36c904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c908: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36c908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36c90c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36c90cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c910: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36c910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36c914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c918: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36C918u;
    SET_GPR_U32(ctx, 31, 0x36C920u);
    ctx->pc = 0x36C91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C918u;
    // 0x36c91c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36C918u, 0x36C920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C920u;
label_36c920:
    // 0x36c920: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36C920u;
    SET_GPR_U32(ctx, 31, 0x36C928u);
    ctx->pc = 0x36C924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C920u;
    // 0x36c924: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36C920u, 0x36C928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C928u;
label_36c928:
    // 0x36c928: 0xc0e1646  jal         func_385918
    ctx->pc = 0x36C928u;
    SET_GPR_U32(ctx, 31, 0x36C930u);
    ctx->pc = 0x36C92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C928u;
    // 0x36c92c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385918u, 0x36C928u, 0x36C930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C930u;
label_36c930:
    // 0x36c930: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36c930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c934: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x36C934u;
    SET_GPR_U32(ctx, 31, 0x36C93Cu);
    ctx->pc = 0x36C938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C934u;
    // 0x36c938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x36C934u, 0x36C93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C93Cu;
label_36c93c:
    // 0x36c93c: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36C93Cu;
    {
        const bool branch_taken_0x36c93c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x36C940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C93Cu;
        // 0x36c940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c93c) {
            ctx->pc = 0x36C958u;
            goto label_36c958;
        }
    }
    ctx->pc = 0x36C944u;
    // 0x36c944: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x36c944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x36c948: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x36c948u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x36c94c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x36C94Cu;
    SET_GPR_U32(ctx, 31, 0x36C954u);
    ctx->pc = 0x36C950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C94Cu;
    // 0x36c950: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x36C94Cu, 0x36C954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C954u;
label_36c954:
    // 0x36c954: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36c954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36c958:
    // 0x36c958: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x36C958u;
    SET_GPR_U32(ctx, 31, 0x36C960u);
    ctx->pc = 0x36C95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C958u;
    // 0x36c95c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x36C958u, 0x36C960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C960u;
label_36c960:
    // 0x36c960: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36c960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36c964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36c964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c968: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36c968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c96c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c970: 0x3e00008  jr          $ra
    ctx->pc = 0x36C970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C970u;
        // 0x36c974: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C978u;
}
