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

// Function: sub_00358870
// Address: 0x358870 - 0x3588d0
void sub_00358870_0x358870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358870_0x358870");
#endif

    switch (ctx->pc) {
        case 0x358890u: goto label_358890;
        case 0x358898u: goto label_358898;
        case 0x3588acu: goto label_3588ac;
        case 0x3588b8u: goto label_3588b8;
        default: break;
    }

    ctx->pc = 0x358870u;

    // 0x358870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x358870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x358874: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x358874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358878: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x358878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35887c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35887cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358880: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x358880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x358884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358888: 0xc102472  jal         func_4091C8
    ctx->pc = 0x358888u;
    SET_GPR_U32(ctx, 31, 0x358890u);
    ctx->pc = 0x35888Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358888u;
    // 0x35888c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x358888u, 0x358890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358890u;
label_358890:
    // 0x358890: 0xc10b108  jal         func_42C420
    ctx->pc = 0x358890u;
    SET_GPR_U32(ctx, 31, 0x358898u);
    ctx->pc = 0x358894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358890u;
    // 0x358894: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x358890u, 0x358898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358898u;
label_358898:
    // 0x358898: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x358898u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35889c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35889cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3588a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3588a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3588a4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x3588A4u;
    SET_GPR_U32(ctx, 31, 0x3588ACu);
    ctx->pc = 0x3588A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3588A4u;
    // 0x3588a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x3588A4u, 0x3588ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3588ACu;
label_3588ac:
    // 0x3588ac: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x3588acu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3588b0: 0xc08d342  jal         func_234D08
    ctx->pc = 0x3588B0u;
    SET_GPR_U32(ctx, 31, 0x3588B8u);
    ctx->pc = 0x3588B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3588B0u;
    // 0x3588b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234D08u, 0x3588B0u, 0x3588B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3588B8u;
label_3588b8:
    // 0x3588b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3588b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3588bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3588bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3588c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3588c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3588c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3588c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3588c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3588C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3588CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3588C8u;
        // 0x3588cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3588C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3588D0u;
}
