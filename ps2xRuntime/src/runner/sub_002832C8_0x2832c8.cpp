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

// Function: sub_002832C8
// Address: 0x2832c8 - 0x2833c0
void sub_002832C8_0x2832c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002832C8_0x2832c8");
#endif

    switch (ctx->pc) {
        case 0x2832e0u: goto label_2832e0;
        case 0x2832f4u: goto label_2832f4;
        case 0x283318u: goto label_283318;
        case 0x283328u: goto label_283328;
        case 0x283338u: goto label_283338;
        case 0x283350u: goto label_283350;
        case 0x283364u: goto label_283364;
        case 0x283384u: goto label_283384;
        case 0x2833a0u: goto label_2833a0;
        default: break;
    }

    ctx->pc = 0x2832c8u;

    // 0x2832c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2832c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2832cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2832ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2832d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2832d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2832d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2832d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2832d8: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2832D8u;
    SET_GPR_U32(ctx, 31, 0x2832E0u);
    ctx->pc = 0x2832DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2832D8u;
    // 0x2832dc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2832D8u, 0x2832E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2832E0u;
label_2832e0:
    // 0x2832e0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2832e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2832e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2832e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2832e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2832e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2832ec: 0xc089998  jal         func_226660
    ctx->pc = 0x2832ECu;
    SET_GPR_U32(ctx, 31, 0x2832F4u);
    ctx->pc = 0x2832F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2832ECu;
    // 0x2832f0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2832ECu, 0x2832F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2832F4u;
label_2832f4:
    // 0x2832f4: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2832F4u;
    {
        const bool branch_taken_0x2832f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2832F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2832F4u;
        // 0x2832f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2832f4) {
            ctx->pc = 0x2833ACu;
            goto label_2833ac;
        }
    }
    ctx->pc = 0x2832FCu;
    // 0x2832fc: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x2832fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x283300: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x283300u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x283304: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x283304u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
    // 0x283308: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x283308u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x28330c: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x28330cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
    // 0x283310: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x283310u;
    SET_GPR_U32(ctx, 31, 0x283318u);
    ctx->pc = 0x283314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283310u;
    // 0x283314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x283310u, 0x283318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283318u;
label_283318:
    // 0x283318: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x283318u;
    {
        const bool branch_taken_0x283318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283318u;
        // 0x28331c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283318) {
            ctx->pc = 0x2833ACu;
            goto label_2833ac;
        }
    }
    ctx->pc = 0x283320u;
    // 0x283320: 0xc09ef08  jal         func_27BC20
    ctx->pc = 0x283320u;
    SET_GPR_U32(ctx, 31, 0x283328u);
    ctx->pc = 0x283324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283320u;
    // 0x283324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BC20u, 0x283320u, 0x283328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283328u;
label_283328:
    // 0x283328: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x283328u;
    {
        const bool branch_taken_0x283328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283328u;
        // 0x28332c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283328) {
            ctx->pc = 0x2833ACu;
            goto label_2833ac;
        }
    }
    ctx->pc = 0x283330u;
    // 0x283330: 0xc09e414  jal         func_279050
    ctx->pc = 0x283330u;
    SET_GPR_U32(ctx, 31, 0x283338u);
    ctx->pc = 0x283334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283330u;
    // 0x283334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279050u, 0x283330u, 0x283338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283338u;
label_283338:
    // 0x283338: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x283338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28333c: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x28333Cu;
    {
        const bool branch_taken_0x28333c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x283340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28333Cu;
        // 0x283340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28333c) {
            ctx->pc = 0x2833A8u;
            goto label_2833a8;
        }
    }
    ctx->pc = 0x283344u;
    // 0x283344: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x283344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x283348: 0xc089998  jal         func_226660
    ctx->pc = 0x283348u;
    SET_GPR_U32(ctx, 31, 0x283350u);
    ctx->pc = 0x28334Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283348u;
    // 0x28334c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x283348u, 0x283350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283350u;
label_283350:
    // 0x283350: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x283350u;
    {
        const bool branch_taken_0x283350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283350u;
        // 0x283354: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283350) {
            ctx->pc = 0x2833ACu;
            goto label_2833ac;
        }
    }
    ctx->pc = 0x283358u;
    // 0x283358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28335c: 0xc08702a  jal         func_21C0A8
    ctx->pc = 0x28335Cu;
    SET_GPR_U32(ctx, 31, 0x283364u);
    ctx->pc = 0x283360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28335Cu;
    // 0x283360: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C0A8u, 0x28335Cu, 0x283364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283364u;
label_283364:
    // 0x283364: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x283364u;
    {
        const bool branch_taken_0x283364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283364u;
        // 0x283368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283364) {
            ctx->pc = 0x283398u;
            goto label_283398;
        }
    }
    ctx->pc = 0x28336Cu;
    // 0x28336c: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x28336cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x283370: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x283370u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x283374: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x283374u;
    {
        const bool branch_taken_0x283374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283374u;
        // 0x283378: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283374) {
            ctx->pc = 0x2833ACu;
            goto label_2833ac;
        }
    }
    ctx->pc = 0x28337Cu;
    // 0x28337c: 0xc087502  jal         func_21D408
    ctx->pc = 0x28337Cu;
    SET_GPR_U32(ctx, 31, 0x283384u);
    ctx->pc = 0x283380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28337Cu;
    // 0x283380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x28337Cu, 0x283384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283384u;
label_283384:
    // 0x283384: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x283384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x283388: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x283388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28338c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28338Cu;
    {
        const bool branch_taken_0x28338c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x283390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28338Cu;
        // 0x283390: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28338c) {
            ctx->pc = 0x2833ACu;
            goto label_2833ac;
        }
    }
    ctx->pc = 0x283394u;
    // 0x283394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_283398:
    // 0x283398: 0xc0983f4  jal         func_260FD0
    ctx->pc = 0x283398u;
    SET_GPR_U32(ctx, 31, 0x2833A0u);
    ctx->pc = 0x28339Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283398u;
    // 0x28339c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260FD0u, 0x283398u, 0x2833A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2833A0u;
label_2833a0:
    // 0x2833a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2833A0u;
    {
        const bool branch_taken_0x2833a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2833A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2833A0u;
        // 0x2833a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2833a0) {
            ctx->pc = 0x2833ACu;
            goto label_2833ac;
        }
    }
    ctx->pc = 0x2833A8u;
label_2833a8:
    // 0x2833a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2833a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2833ac:
    // 0x2833ac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2833acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2833b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2833b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2833b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2833b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2833b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2833B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2833BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2833B8u;
        // 0x2833bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2833B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2833C0u;
}
