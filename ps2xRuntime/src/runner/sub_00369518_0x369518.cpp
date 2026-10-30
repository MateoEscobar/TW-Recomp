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

// Function: sub_00369518
// Address: 0x369518 - 0x3695e0
void sub_00369518_0x369518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369518_0x369518");
#endif

    switch (ctx->pc) {
        case 0x369548u: goto label_369548;
        case 0x369550u: goto label_369550;
        case 0x369564u: goto label_369564;
        case 0x36956cu: goto label_36956c;
        case 0x369580u: goto label_369580;
        case 0x369588u: goto label_369588;
        case 0x36959cu: goto label_36959c;
        case 0x3695a4u: goto label_3695a4;
        case 0x3695b8u: goto label_3695b8;
        default: break;
    }

    ctx->pc = 0x369518u;

    // 0x369518: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x369518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x36951c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36951cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x369520: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x369520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x369524: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x369524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x369528: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x369528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36952c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36952cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369530: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x369530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x369534: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x369534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x369538: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x369538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x36953c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36953cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x369540: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369540u;
    SET_GPR_U32(ctx, 31, 0x369548u);
    ctx->pc = 0x369544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369540u;
    // 0x369544: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369540u, 0x369548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369548u;
label_369548:
    // 0x369548: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x369548u;
    SET_GPR_U32(ctx, 31, 0x369550u);
    ctx->pc = 0x36954Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369548u;
    // 0x36954c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x369548u, 0x369550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369550u;
label_369550:
    // 0x369550: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369554: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x369554u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369558: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x369558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36955c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36955Cu;
    SET_GPR_U32(ctx, 31, 0x369564u);
    ctx->pc = 0x369560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36955Cu;
    // 0x369560: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36955Cu, 0x369564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369564u;
label_369564:
    // 0x369564: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x369564u;
    SET_GPR_U32(ctx, 31, 0x36956Cu);
    ctx->pc = 0x369568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369564u;
    // 0x369568: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x369564u, 0x36956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36956Cu;
label_36956c:
    // 0x36956c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36956cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369570: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x369570u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369574: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x369574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x369578: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369578u;
    SET_GPR_U32(ctx, 31, 0x369580u);
    ctx->pc = 0x36957Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369578u;
    // 0x36957c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369578u, 0x369580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369580u;
label_369580:
    // 0x369580: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x369580u;
    SET_GPR_U32(ctx, 31, 0x369588u);
    ctx->pc = 0x369584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369580u;
    // 0x369584: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x369580u, 0x369588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369588u;
label_369588:
    // 0x369588: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36958c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36958cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369590: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x369590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369594: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369594u;
    SET_GPR_U32(ctx, 31, 0x36959Cu);
    ctx->pc = 0x369598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369594u;
    // 0x369598: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369594u, 0x36959Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36959Cu;
label_36959c:
    // 0x36959c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36959Cu;
    SET_GPR_U32(ctx, 31, 0x3695A4u);
    ctx->pc = 0x3695A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36959Cu;
    // 0x3695a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36959Cu, 0x3695A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3695A4u;
label_3695a4:
    // 0x3695a4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3695a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3695a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3695a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3695ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3695acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3695b0: 0xc051d0c  jal         func_147430
    ctx->pc = 0x3695B0u;
    SET_GPR_U32(ctx, 31, 0x3695B8u);
    ctx->pc = 0x3695B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3695B0u;
    // 0x3695b4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147430u, 0x3695B0u, 0x3695B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3695B8u;
label_3695b8:
    // 0x3695b8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3695b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3695bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3695bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3695c0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3695c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3695c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3695c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3695c8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3695c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3695cc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3695ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3695d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3695d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3695d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3695D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3695D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3695D4u;
        // 0x3695d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3695D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3695DCu;
    // 0x3695dc: 0x0  nop
    ctx->pc = 0x3695dcu;
    // NOP
    ctx->pc = 0x3695e0u;
}
