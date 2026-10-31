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

// Function: sub_0023D790
// Address: 0x23d790 - 0x23d8c8
void sub_0023D790_0x23d790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D790_0x23d790");
#endif

    switch (ctx->pc) {
        case 0x23d790u: goto label_23d790;
        case 0x23d794u: goto label_23d794;
        case 0x23d798u: goto label_23d798;
        case 0x23d79cu: goto label_23d79c;
        case 0x23d7a0u: goto label_23d7a0;
        case 0x23d7a4u: goto label_23d7a4;
        case 0x23d7a8u: goto label_23d7a8;
        case 0x23d7acu: goto label_23d7ac;
        case 0x23d7b0u: goto label_23d7b0;
        case 0x23d7b4u: goto label_23d7b4;
        case 0x23d7b8u: goto label_23d7b8;
        case 0x23d7bcu: goto label_23d7bc;
        case 0x23d7c0u: goto label_23d7c0;
        case 0x23d7c4u: goto label_23d7c4;
        case 0x23d7c8u: goto label_23d7c8;
        case 0x23d7ccu: goto label_23d7cc;
        case 0x23d7d0u: goto label_23d7d0;
        case 0x23d7d4u: goto label_23d7d4;
        case 0x23d7d8u: goto label_23d7d8;
        case 0x23d7dcu: goto label_23d7dc;
        case 0x23d7e0u: goto label_23d7e0;
        case 0x23d7e4u: goto label_23d7e4;
        case 0x23d7e8u: goto label_23d7e8;
        case 0x23d7ecu: goto label_23d7ec;
        case 0x23d7f0u: goto label_23d7f0;
        case 0x23d7f4u: goto label_23d7f4;
        case 0x23d7f8u: goto label_23d7f8;
        case 0x23d7fcu: goto label_23d7fc;
        case 0x23d800u: goto label_23d800;
        case 0x23d804u: goto label_23d804;
        case 0x23d808u: goto label_23d808;
        case 0x23d80cu: goto label_23d80c;
        case 0x23d810u: goto label_23d810;
        case 0x23d814u: goto label_23d814;
        case 0x23d818u: goto label_23d818;
        case 0x23d81cu: goto label_23d81c;
        case 0x23d820u: goto label_23d820;
        case 0x23d824u: goto label_23d824;
        case 0x23d828u: goto label_23d828;
        case 0x23d82cu: goto label_23d82c;
        case 0x23d830u: goto label_23d830;
        case 0x23d834u: goto label_23d834;
        case 0x23d838u: goto label_23d838;
        case 0x23d83cu: goto label_23d83c;
        case 0x23d840u: goto label_23d840;
        case 0x23d844u: goto label_23d844;
        case 0x23d848u: goto label_23d848;
        case 0x23d84cu: goto label_23d84c;
        case 0x23d850u: goto label_23d850;
        case 0x23d854u: goto label_23d854;
        case 0x23d858u: goto label_23d858;
        case 0x23d85cu: goto label_23d85c;
        case 0x23d860u: goto label_23d860;
        case 0x23d864u: goto label_23d864;
        case 0x23d868u: goto label_23d868;
        case 0x23d86cu: goto label_23d86c;
        case 0x23d870u: goto label_23d870;
        case 0x23d874u: goto label_23d874;
        case 0x23d878u: goto label_23d878;
        case 0x23d87cu: goto label_23d87c;
        case 0x23d880u: goto label_23d880;
        case 0x23d884u: goto label_23d884;
        case 0x23d888u: goto label_23d888;
        case 0x23d88cu: goto label_23d88c;
        case 0x23d890u: goto label_23d890;
        case 0x23d894u: goto label_23d894;
        case 0x23d898u: goto label_23d898;
        case 0x23d89cu: goto label_23d89c;
        case 0x23d8a0u: goto label_23d8a0;
        case 0x23d8a4u: goto label_23d8a4;
        case 0x23d8a8u: goto label_23d8a8;
        case 0x23d8acu: goto label_23d8ac;
        case 0x23d8b0u: goto label_23d8b0;
        case 0x23d8b4u: goto label_23d8b4;
        case 0x23d8b8u: goto label_23d8b8;
        case 0x23d8bcu: goto label_23d8bc;
        case 0x23d8c0u: goto label_23d8c0;
        case 0x23d8c4u: goto label_23d8c4;
        default: break;
    }

    ctx->pc = 0x23d790u;

label_23d790:
    // 0x23d790: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23d790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_23d794:
    // 0x23d794: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x23d794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_23d798:
    // 0x23d798: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x23d798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_23d79c:
    // 0x23d79c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x23d79cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_23d7a0:
    // 0x23d7a0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x23d7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_23d7a4:
    // 0x23d7a4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x23d7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_23d7a8:
    // 0x23d7a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23d7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23d7ac:
    // 0x23d7ac: 0xc089998  jal         func_226660
label_23d7b0:
    if (ctx->pc == 0x23D7B0u) {
        ctx->pc = 0x23D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7ACu;
        // 0x23d7b0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D7B4u;
        goto label_23d7b4;
    }
    ctx->pc = 0x23D7ACu;
    SET_GPR_U32(ctx, 31, 0x23D7B4u);
    ctx->pc = 0x23D7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D7ACu;
    // 0x23d7b0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x23D7ACu, 0x23D7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D7B4u;
label_23d7b4:
    // 0x23d7b4: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
label_23d7b8:
    if (ctx->pc == 0x23D7B8u) {
        ctx->pc = 0x23D7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7B4u;
        // 0x23d7b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D7BCu;
        goto label_23d7bc;
    }
    ctx->pc = 0x23D7B4u;
    {
        const bool branch_taken_0x23d7b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7B4u;
        // 0x23d7b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d7b4) {
            ctx->pc = 0x23D8ACu;
            goto label_23d8ac;
        }
    }
    ctx->pc = 0x23D7BCu;
label_23d7bc:
    // 0x23d7bc: 0xc089ff6  jal         func_227FD8
label_23d7c0:
    if (ctx->pc == 0x23D7C0u) {
        ctx->pc = 0x23D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7BCu;
        // 0x23d7c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D7C4u;
        goto label_23d7c4;
    }
    ctx->pc = 0x23D7BCu;
    SET_GPR_U32(ctx, 31, 0x23D7C4u);
    ctx->pc = 0x23D7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D7BCu;
    // 0x23d7c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227FD8u, 0x23D7BCu, 0x23D7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D7C4u;
label_23d7c4:
    // 0x23d7c4: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
label_23d7c8:
    if (ctx->pc == 0x23D7C8u) {
        ctx->pc = 0x23D7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7C4u;
        // 0x23d7c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D7CCu;
        goto label_23d7cc;
    }
    ctx->pc = 0x23D7C4u;
    {
        const bool branch_taken_0x23d7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7C4u;
        // 0x23d7c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d7c4) {
            ctx->pc = 0x23D8ACu;
            goto label_23d8ac;
        }
    }
    ctx->pc = 0x23D7CCu;
label_23d7cc:
    // 0x23d7cc: 0xc089f4a  jal         func_227D28
label_23d7d0:
    if (ctx->pc == 0x23D7D0u) {
        ctx->pc = 0x23D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7CCu;
        // 0x23d7d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D7D4u;
        goto label_23d7d4;
    }
    ctx->pc = 0x23D7CCu;
    SET_GPR_U32(ctx, 31, 0x23D7D4u);
    ctx->pc = 0x23D7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D7CCu;
    // 0x23d7d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x23D7CCu, 0x23D7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D7D4u;
label_23d7d4:
    // 0x23d7d4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_23d7d8:
    if (ctx->pc == 0x23D7D8u) {
        ctx->pc = 0x23D7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7D4u;
        // 0x23d7d8: 0x8e2201a8  lw          $v0, 0x1A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D7DCu;
        goto label_23d7dc;
    }
    ctx->pc = 0x23D7D4u;
    {
        const bool branch_taken_0x23d7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d7d4) {
            ctx->pc = 0x23D7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D7D4u;
            // 0x23d7d8: 0x8e2201a8  lw          $v0, 0x1A8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D7E4u;
            goto label_23d7e4;
        }
    }
    ctx->pc = 0x23D7DCu;
label_23d7dc:
    // 0x23d7dc: 0x10000033  b           . + 4 + (0x33 << 2)
label_23d7e0:
    if (ctx->pc == 0x23D7E0u) {
        ctx->pc = 0x23D7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7DCu;
        // 0x23d7e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D7E4u;
        goto label_23d7e4;
    }
    ctx->pc = 0x23D7DCu;
    {
        const bool branch_taken_0x23d7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7DCu;
        // 0x23d7e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d7dc) {
            ctx->pc = 0x23D8ACu;
            goto label_23d8ac;
        }
    }
    ctx->pc = 0x23D7E4u;
label_23d7e4:
    // 0x23d7e4: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
label_23d7e8:
    if (ctx->pc == 0x23D7E8u) {
        ctx->pc = 0x23D7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7E4u;
        // 0x23d7e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D7ECu;
        goto label_23d7ec;
    }
    ctx->pc = 0x23D7E4u;
    {
        const bool branch_taken_0x23d7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7E4u;
        // 0x23d7e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d7e4) {
            ctx->pc = 0x23D8ACu;
            goto label_23d8ac;
        }
    }
    ctx->pc = 0x23D7ECu;
label_23d7ec:
    // 0x23d7ec: 0xc087502  jal         func_21D408
label_23d7f0:
    if (ctx->pc == 0x23D7F0u) {
        ctx->pc = 0x23D7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7ECu;
        // 0x23d7f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D7F4u;
        goto label_23d7f4;
    }
    ctx->pc = 0x23D7ECu;
    SET_GPR_U32(ctx, 31, 0x23D7F4u);
    ctx->pc = 0x23D7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D7ECu;
    // 0x23d7f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x23D7ECu, 0x23D7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D7F4u;
label_23d7f4:
    // 0x23d7f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23d7f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23d7f8:
    // 0x23d7f8: 0x920202d7  lbu         $v0, 0x2D7($s0)
    ctx->pc = 0x23d7f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 727)));
label_23d7fc:
    // 0x23d7fc: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_23d800:
    if (ctx->pc == 0x23D800u) {
        ctx->pc = 0x23D800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7FCu;
        // 0x23d800: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D804u;
        goto label_23d804;
    }
    ctx->pc = 0x23D7FCu;
    {
        const bool branch_taken_0x23d7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7FCu;
        // 0x23d800: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d7fc) {
            ctx->pc = 0x23D8ACu;
            goto label_23d8ac;
        }
    }
    ctx->pc = 0x23D804u;
label_23d804:
    // 0x23d804: 0xc0a33be  jal         func_28CEF8
label_23d808:
    if (ctx->pc == 0x23D808u) {
        ctx->pc = 0x23D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D804u;
        // 0x23d808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D80Cu;
        goto label_23d80c;
    }
    ctx->pc = 0x23D804u;
    SET_GPR_U32(ctx, 31, 0x23D80Cu);
    ctx->pc = 0x23D808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D804u;
    // 0x23d808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CEF8u, 0x23D804u, 0x23D80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D80Cu;
label_23d80c:
    // 0x23d80c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_23d810:
    if (ctx->pc == 0x23D810u) {
        ctx->pc = 0x23D810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D80Cu;
        // 0x23d810: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D814u;
        goto label_23d814;
    }
    ctx->pc = 0x23D80Cu;
    {
        const bool branch_taken_0x23d80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D80Cu;
        // 0x23d810: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d80c) {
            ctx->pc = 0x23D83Cu;
            goto label_23d83c;
        }
    }
    ctx->pc = 0x23D814u;
label_23d814:
    // 0x23d814: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x23d814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_23d818:
    // 0x23d818: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x23d818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_23d81c:
    // 0x23d81c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x23d81cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_23d820:
    // 0x23d820: 0xdc4300d8  ld          $v1, 0xD8($v0)
    ctx->pc = 0x23d820u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 216)));
label_23d824:
    // 0x23d824: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x23d824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_23d828:
    // 0x23d828: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x23d828u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_23d82c:
    // 0x23d82c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x23d82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_23d830:
    // 0x23d830: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x23d830u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_23d834:
    // 0x23d834: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_23d838:
    if (ctx->pc == 0x23D838u) {
        ctx->pc = 0x23D838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D834u;
        // 0x23d838: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D83Cu;
        goto label_23d83c;
    }
    ctx->pc = 0x23D834u;
    {
        const bool branch_taken_0x23d834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D834u;
        // 0x23d838: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d834) {
            ctx->pc = 0x23D8ACu;
            goto label_23d8ac;
        }
    }
    ctx->pc = 0x23D83Cu;
label_23d83c:
    // 0x23d83c: 0x8e3002a0  lw          $s0, 0x2A0($s1)
    ctx->pc = 0x23d83cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 672)));
label_23d840:
    // 0x23d840: 0x8e45b734  lw          $a1, -0x48CC($s2)
    ctx->pc = 0x23d840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948660)));
label_23d844:
    // 0x23d844: 0x261001f4  addiu       $s0, $s0, 0x1F4
    ctx->pc = 0x23d844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 500));
label_23d848:
    // 0x23d848: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x23d848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_23d84c:
    // 0x23d84c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x23d84cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_23d850:
    // 0x23d850: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x23d850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_23d854:
    // 0x23d854: 0x40f809  jalr        $v0
label_23d858:
    if (ctx->pc == 0x23D858u) {
        ctx->pc = 0x23D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D854u;
        // 0x23d858: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D85Cu;
        goto label_23d85c;
    }
    ctx->pc = 0x23D854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D85Cu);
        ctx->pc = 0x23D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D854u;
        // 0x23d858: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D854u, 0x23D85Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D85Cu;
label_23d85c:
    // 0x23d85c: 0x202802b  sltu        $s0, $s0, $v0
    ctx->pc = 0x23d85cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_23d860:
    // 0x23d860: 0x16000012  bnez        $s0, . + 4 + (0x12 << 2)
label_23d864:
    if (ctx->pc == 0x23D864u) {
        ctx->pc = 0x23D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D860u;
        // 0x23d864: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D868u;
        goto label_23d868;
    }
    ctx->pc = 0x23D860u;
    {
        const bool branch_taken_0x23d860 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D860u;
        // 0x23d864: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d860) {
            ctx->pc = 0x23D8ACu;
            goto label_23d8ac;
        }
    }
    ctx->pc = 0x23D868u;
label_23d868:
    // 0x23d868: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x23d868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_23d86c:
    // 0x23d86c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_23d870:
    if (ctx->pc == 0x23D870u) {
        ctx->pc = 0x23D870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D86Cu;
        // 0x23d870: 0x8e43b734  lw          $v1, -0x48CC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D874u;
        goto label_23d874;
    }
    ctx->pc = 0x23D86Cu;
    {
        const bool branch_taken_0x23d86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D86Cu;
        // 0x23d870: 0x8e43b734  lw          $v1, -0x48CC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d86c) {
            ctx->pc = 0x23D89Cu;
            goto label_23d89c;
        }
    }
    ctx->pc = 0x23D874u;
label_23d874:
    // 0x23d874: 0xc6210334  lwc1        $f1, 0x334($s1)
    ctx->pc = 0x23d874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23d878:
    // 0x23d878: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x23d878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_23d87c:
    // 0x23d87c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23d87cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23d880:
    // 0x23d880: 0x0  nop
    ctx->pc = 0x23d880u;
    // NOP
label_23d884:
    // 0x23d884: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23d884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23d888:
    // 0x23d888: 0x0  nop
    ctx->pc = 0x23d888u;
    // NOP
label_23d88c:
    // 0x23d88c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_23d890:
    if (ctx->pc == 0x23D890u) {
        ctx->pc = 0x23D890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D88Cu;
        // 0x23d890: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D894u;
        goto label_23d894;
    }
    ctx->pc = 0x23D88Cu;
    {
        const bool branch_taken_0x23d88c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x23D890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D88Cu;
        // 0x23d890: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d88c) {
            ctx->pc = 0x23D8ACu;
            goto label_23d8ac;
        }
    }
    ctx->pc = 0x23D894u;
label_23d894:
    // 0x23d894: 0x10000005  b           . + 4 + (0x5 << 2)
label_23d898:
    if (ctx->pc == 0x23D898u) {
        ctx->pc = 0x23D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D894u;
        // 0x23d898: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D89Cu;
        goto label_23d89c;
    }
    ctx->pc = 0x23D894u;
    {
        const bool branch_taken_0x23d894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D894u;
        // 0x23d898: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d894) {
            ctx->pc = 0x23D8ACu;
            goto label_23d8ac;
        }
    }
    ctx->pc = 0x23D89Cu;
label_23d89c:
    // 0x23d89c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x23d89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_23d8a0:
    // 0x23d8a0: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x23d8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_23d8a4:
    // 0x23d8a4: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x23d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
label_23d8a8:
    // 0x23d8a8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x23d8a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_23d8ac:
    // 0x23d8ac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x23d8acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23d8b0:
    // 0x23d8b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x23d8b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23d8b4:
    // 0x23d8b4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x23d8b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23d8b8:
    // 0x23d8b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23d8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23d8bc:
    // 0x23d8bc: 0x3e00008  jr          $ra
label_23d8c0:
    if (ctx->pc == 0x23D8C0u) {
        ctx->pc = 0x23D8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8BCu;
        // 0x23d8c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D8C4u;
        goto label_23d8c4;
    }
    ctx->pc = 0x23D8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8BCu;
        // 0x23d8c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D8C4u;
label_23d8c4:
    // 0x23d8c4: 0x0  nop
    ctx->pc = 0x23d8c4u;
    // NOP
    ctx->pc = 0x23d8c8u;
}
