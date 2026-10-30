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

// Function: sub_00292890
// Address: 0x292890 - 0x2928d8
void sub_00292890_0x292890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292890_0x292890");
#endif

    switch (ctx->pc) {
        case 0x2928acu: goto label_2928ac;
        case 0x2928b4u: goto label_2928b4;
        case 0x2928c4u: goto label_2928c4;
        default: break;
    }

    ctx->pc = 0x292890u;

    // 0x292890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x292890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x292894: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x292894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x292898: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x292898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x29289c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29289cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2928a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2928a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2928a4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2928A4u;
    SET_GPR_U32(ctx, 31, 0x2928ACu);
    ctx->pc = 0x2928A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2928A4u;
    // 0x2928a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2928A4u, 0x2928ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2928ACu;
label_2928ac:
    // 0x2928ac: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2928ACu;
    SET_GPR_U32(ctx, 31, 0x2928B4u);
    ctx->pc = 0x2928B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2928ACu;
    // 0x2928b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2928ACu, 0x2928B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2928B4u;
label_2928b4:
    // 0x2928b4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2928B4u;
    {
        const bool branch_taken_0x2928b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2928b4) {
            ctx->pc = 0x2928B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2928B4u;
            // 0x2928b8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2928CCu;
            goto label_2928cc;
        }
    }
    ctx->pc = 0x2928BCu;
    // 0x2928bc: 0xc087502  jal         func_21D408
    ctx->pc = 0x2928BCu;
    SET_GPR_U32(ctx, 31, 0x2928C4u);
    ctx->pc = 0x2928C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2928BCu;
    // 0x2928c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2928BCu, 0x2928C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2928C4u;
label_2928c4:
    // 0x2928c4: 0xa0500266  sb          $s0, 0x266($v0)
    ctx->pc = 0x2928c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 614), (uint8_t)GPR_U32(ctx, 16));
    // 0x2928c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2928c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2928cc:
    // 0x2928cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2928ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2928d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2928D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2928D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2928D0u;
        // 0x2928d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2928D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2928D8u;
}
