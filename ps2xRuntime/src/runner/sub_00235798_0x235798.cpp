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

// Function: sub_00235798
// Address: 0x235798 - 0x2357d8
void sub_00235798_0x235798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235798_0x235798");
#endif

    switch (ctx->pc) {
        case 0x2357acu: goto label_2357ac;
        case 0x2357b4u: goto label_2357b4;
        case 0x2357c4u: goto label_2357c4;
        default: break;
    }

    ctx->pc = 0x235798u;

    // 0x235798: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x235798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23579c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23579cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2357a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2357a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2357a4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2357A4u;
    SET_GPR_U32(ctx, 31, 0x2357ACu);
    ctx->pc = 0x2357A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2357A4u;
    // 0x2357a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2357A4u, 0x2357ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2357ACu;
label_2357ac:
    // 0x2357ac: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2357ACu;
    SET_GPR_U32(ctx, 31, 0x2357B4u);
    ctx->pc = 0x2357B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2357ACu;
    // 0x2357b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2357ACu, 0x2357B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2357B4u;
label_2357b4:
    // 0x2357b4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2357B4u;
    {
        const bool branch_taken_0x2357b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2357b4) {
            ctx->pc = 0x2357B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2357B4u;
            // 0x2357b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2357CCu;
            goto label_2357cc;
        }
    }
    ctx->pc = 0x2357BCu;
    // 0x2357bc: 0xc087502  jal         func_21D408
    ctx->pc = 0x2357BCu;
    SET_GPR_U32(ctx, 31, 0x2357C4u);
    ctx->pc = 0x2357C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2357BCu;
    // 0x2357c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2357BCu, 0x2357C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2357C4u;
label_2357c4:
    // 0x2357c4: 0x904202d4  lbu         $v0, 0x2D4($v0)
    ctx->pc = 0x2357c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x2357c8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2357c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2357cc:
    // 0x2357cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2357ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2357d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2357D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2357D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2357D0u;
        // 0x2357d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2357D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2357D8u;
}
