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

// Function: sub_002923A0
// Address: 0x2923a0 - 0x292410
void sub_002923A0_0x2923a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002923A0_0x2923a0");
#endif

    switch (ctx->pc) {
        case 0x2923c0u: goto label_2923c0;
        case 0x2923c8u: goto label_2923c8;
        case 0x2923dcu: goto label_2923dc;
        case 0x2923e4u: goto label_2923e4;
        case 0x2923ecu: goto label_2923ec;
        default: break;
    }

    ctx->pc = 0x2923a0u;

    // 0x2923a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2923a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2923a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2923a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2923a8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2923a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2923ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2923acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2923b0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2923b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2923b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2923b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2923b8: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2923B8u;
    SET_GPR_U32(ctx, 31, 0x2923C0u);
    ctx->pc = 0x2923BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2923B8u;
    // 0x2923bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2923B8u, 0x2923C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2923C0u;
label_2923c0:
    // 0x2923c0: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2923C0u;
    SET_GPR_U32(ctx, 31, 0x2923C8u);
    ctx->pc = 0x2923C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2923C0u;
    // 0x2923c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2923C0u, 0x2923C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2923C8u;
label_2923c8:
    // 0x2923c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2923c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2923cc: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2923CCu;
    {
        const bool branch_taken_0x2923cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2923cc) {
            ctx->pc = 0x2923D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2923CCu;
            // 0x2923d0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2923F4u;
            goto label_2923f4;
        }
    }
    ctx->pc = 0x2923D4u;
    // 0x2923d4: 0xc087502  jal         func_21D408
    ctx->pc = 0x2923D4u;
    SET_GPR_U32(ctx, 31, 0x2923DCu);
    ctx->pc = 0x2923D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2923D4u;
    // 0x2923d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2923D4u, 0x2923DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2923DCu;
label_2923dc:
    // 0x2923dc: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2923DCu;
    SET_GPR_U32(ctx, 31, 0x2923E4u);
    ctx->pc = 0x2923E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2923DCu;
    // 0x2923e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2923DCu, 0x2923E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2923E4u;
label_2923e4:
    // 0x2923e4: 0xc087502  jal         func_21D408
    ctx->pc = 0x2923E4u;
    SET_GPR_U32(ctx, 31, 0x2923ECu);
    ctx->pc = 0x2923E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2923E4u;
    // 0x2923e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2923E4u, 0x2923ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2923ECu;
label_2923ec:
    // 0x2923ec: 0xa051000a  sb          $s1, 0xA($v0)
    ctx->pc = 0x2923ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 17));
    // 0x2923f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2923f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2923f4:
    // 0x2923f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2923f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2923f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2923f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2923fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2923FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2923FCu;
        // 0x292400: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2923FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292404u;
    // 0x292404: 0x0  nop
    ctx->pc = 0x292404u;
    // NOP
    // 0x292408: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x292408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29240c: 0x0  nop
    ctx->pc = 0x29240cu;
    // NOP
    ctx->pc = 0x292410u;
}
