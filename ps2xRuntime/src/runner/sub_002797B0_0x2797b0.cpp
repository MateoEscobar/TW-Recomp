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

// Function: sub_002797B0
// Address: 0x2797b0 - 0x2798c0
void sub_002797B0_0x2797b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002797B0_0x2797b0");
#endif

    switch (ctx->pc) {
        case 0x2797b0u: goto label_2797b0;
        case 0x2797b4u: goto label_2797b4;
        case 0x2797b8u: goto label_2797b8;
        case 0x2797bcu: goto label_2797bc;
        case 0x2797c0u: goto label_2797c0;
        case 0x2797c4u: goto label_2797c4;
        case 0x2797c8u: goto label_2797c8;
        case 0x2797ccu: goto label_2797cc;
        case 0x2797d0u: goto label_2797d0;
        case 0x2797d4u: goto label_2797d4;
        case 0x2797d8u: goto label_2797d8;
        case 0x2797dcu: goto label_2797dc;
        case 0x2797e0u: goto label_2797e0;
        case 0x2797e4u: goto label_2797e4;
        case 0x2797e8u: goto label_2797e8;
        case 0x2797ecu: goto label_2797ec;
        case 0x2797f0u: goto label_2797f0;
        case 0x2797f4u: goto label_2797f4;
        case 0x2797f8u: goto label_2797f8;
        case 0x2797fcu: goto label_2797fc;
        case 0x279800u: goto label_279800;
        case 0x279804u: goto label_279804;
        case 0x279808u: goto label_279808;
        case 0x27980cu: goto label_27980c;
        case 0x279810u: goto label_279810;
        case 0x279814u: goto label_279814;
        case 0x279818u: goto label_279818;
        case 0x27981cu: goto label_27981c;
        case 0x279820u: goto label_279820;
        case 0x279824u: goto label_279824;
        case 0x279828u: goto label_279828;
        case 0x27982cu: goto label_27982c;
        case 0x279830u: goto label_279830;
        case 0x279834u: goto label_279834;
        case 0x279838u: goto label_279838;
        case 0x27983cu: goto label_27983c;
        case 0x279840u: goto label_279840;
        case 0x279844u: goto label_279844;
        case 0x279848u: goto label_279848;
        case 0x27984cu: goto label_27984c;
        case 0x279850u: goto label_279850;
        case 0x279854u: goto label_279854;
        case 0x279858u: goto label_279858;
        case 0x27985cu: goto label_27985c;
        case 0x279860u: goto label_279860;
        case 0x279864u: goto label_279864;
        case 0x279868u: goto label_279868;
        case 0x27986cu: goto label_27986c;
        case 0x279870u: goto label_279870;
        case 0x279874u: goto label_279874;
        case 0x279878u: goto label_279878;
        case 0x27987cu: goto label_27987c;
        case 0x279880u: goto label_279880;
        case 0x279884u: goto label_279884;
        case 0x279888u: goto label_279888;
        case 0x27988cu: goto label_27988c;
        case 0x279890u: goto label_279890;
        case 0x279894u: goto label_279894;
        case 0x279898u: goto label_279898;
        case 0x27989cu: goto label_27989c;
        case 0x2798a0u: goto label_2798a0;
        case 0x2798a4u: goto label_2798a4;
        case 0x2798a8u: goto label_2798a8;
        case 0x2798acu: goto label_2798ac;
        case 0x2798b0u: goto label_2798b0;
        case 0x2798b4u: goto label_2798b4;
        case 0x2798b8u: goto label_2798b8;
        case 0x2798bcu: goto label_2798bc;
        default: break;
    }

    ctx->pc = 0x2797b0u;

label_2797b0:
    // 0x2797b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2797b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2797b4:
    // 0x2797b4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2797b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2797b8:
    // 0x2797b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2797b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2797bc:
    // 0x2797bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2797bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2797c0:
    // 0x2797c0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2797c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2797c4:
    // 0x2797c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2797c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2797c8:
    // 0x2797c8: 0xc08a61a  jal         func_229868
label_2797cc:
    if (ctx->pc == 0x2797CCu) {
        ctx->pc = 0x2797CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2797C8u;
        // 0x2797cc: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2797D0u;
        goto label_2797d0;
    }
    ctx->pc = 0x2797C8u;
    SET_GPR_U32(ctx, 31, 0x2797D0u);
    ctx->pc = 0x2797CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2797C8u;
    // 0x2797cc: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2797C8u, 0x2797D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2797D0u;
label_2797d0:
    // 0x2797d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2797d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2797d4:
    // 0x2797d4: 0xc08a61a  jal         func_229868
label_2797d8:
    if (ctx->pc == 0x2797D8u) {
        ctx->pc = 0x2797D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2797D4u;
        // 0x2797d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2797DCu;
        goto label_2797dc;
    }
    ctx->pc = 0x2797D4u;
    SET_GPR_U32(ctx, 31, 0x2797DCu);
    ctx->pc = 0x2797D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2797D4u;
    // 0x2797d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2797D4u, 0x2797DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2797DCu;
label_2797dc:
    // 0x2797dc: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
label_2797e0:
    if (ctx->pc == 0x2797E0u) {
        ctx->pc = 0x2797E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2797DCu;
        // 0x2797e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2797E4u;
        goto label_2797e4;
    }
    ctx->pc = 0x2797DCu;
    {
        const bool branch_taken_0x2797dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2797E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2797DCu;
        // 0x2797e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2797dc) {
            ctx->pc = 0x27986Cu;
            goto label_27986c;
        }
    }
    ctx->pc = 0x2797E4u;
label_2797e4:
    // 0x2797e4: 0x1220002f  beqz        $s1, . + 4 + (0x2F << 2)
label_2797e8:
    if (ctx->pc == 0x2797E8u) {
        ctx->pc = 0x2797E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2797E4u;
        // 0x2797e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2797ECu;
        goto label_2797ec;
    }
    ctx->pc = 0x2797E4u;
    {
        const bool branch_taken_0x2797e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2797E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2797E4u;
        // 0x2797e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2797e4) {
            ctx->pc = 0x2798A4u;
            goto label_2798a4;
        }
    }
    ctx->pc = 0x2797ECu;
label_2797ec:
    // 0x2797ec: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2797ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2797f0:
    // 0x2797f0: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x2797f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_2797f4:
    // 0x2797f4: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x2797f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_2797f8:
    // 0x2797f8: 0x40f809  jalr        $v0
label_2797fc:
    if (ctx->pc == 0x2797FCu) {
        ctx->pc = 0x2797FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2797F8u;
        // 0x2797fc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279800u;
        goto label_279800;
    }
    ctx->pc = 0x2797F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x279800u);
        ctx->pc = 0x2797FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2797F8u;
        // 0x2797fc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2797F8u, 0x279800u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x279800u;
label_279800:
    // 0x279800: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_279804:
    if (ctx->pc == 0x279804u) {
        ctx->pc = 0x279804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279800u;
        // 0x279804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279808u;
        goto label_279808;
    }
    ctx->pc = 0x279800u;
    {
        const bool branch_taken_0x279800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279800u;
        // 0x279804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279800) {
            ctx->pc = 0x2798A4u;
            goto label_2798a4;
        }
    }
    ctx->pc = 0x279808u;
label_279808:
    // 0x279808: 0xc089f5e  jal         func_227D78
label_27980c:
    if (ctx->pc == 0x27980Cu) {
        ctx->pc = 0x27980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279808u;
        // 0x27980c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279810u;
        goto label_279810;
    }
    ctx->pc = 0x279808u;
    SET_GPR_U32(ctx, 31, 0x279810u);
    ctx->pc = 0x27980Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279808u;
    // 0x27980c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D78u, 0x279808u, 0x279810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279810u;
label_279810:
    // 0x279810: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_279814:
    if (ctx->pc == 0x279814u) {
        ctx->pc = 0x279814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279810u;
        // 0x279814: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279818u;
        goto label_279818;
    }
    ctx->pc = 0x279810u;
    {
        const bool branch_taken_0x279810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279810u;
        // 0x279814: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279810) {
            ctx->pc = 0x27986Cu;
            goto label_27986c;
        }
    }
    ctx->pc = 0x279818u;
label_279818:
    // 0x279818: 0xc088aa4  jal         func_222A90
label_27981c:
    if (ctx->pc == 0x27981Cu) {
        ctx->pc = 0x27981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279818u;
        // 0x27981c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279820u;
        goto label_279820;
    }
    ctx->pc = 0x279818u;
    SET_GPR_U32(ctx, 31, 0x279820u);
    ctx->pc = 0x27981Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279818u;
    // 0x27981c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x279818u, 0x279820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279820u;
label_279820:
    // 0x279820: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_279824:
    if (ctx->pc == 0x279824u) {
        ctx->pc = 0x279824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279820u;
        // 0x279824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279828u;
        goto label_279828;
    }
    ctx->pc = 0x279820u;
    {
        const bool branch_taken_0x279820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279820u;
        // 0x279824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279820) {
            ctx->pc = 0x2798A4u;
            goto label_2798a4;
        }
    }
    ctx->pc = 0x279828u;
label_279828:
    // 0x279828: 0xc087502  jal         func_21D408
label_27982c:
    if (ctx->pc == 0x27982Cu) {
        ctx->pc = 0x27982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279828u;
        // 0x27982c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279830u;
        goto label_279830;
    }
    ctx->pc = 0x279828u;
    SET_GPR_U32(ctx, 31, 0x279830u);
    ctx->pc = 0x27982Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279828u;
    // 0x27982c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x279828u, 0x279830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279830u;
label_279830:
    // 0x279830: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x279830u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_279834:
    // 0x279834: 0xc087502  jal         func_21D408
label_279838:
    if (ctx->pc == 0x279838u) {
        ctx->pc = 0x279838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279834u;
        // 0x279838: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27983Cu;
        goto label_27983c;
    }
    ctx->pc = 0x279834u;
    SET_GPR_U32(ctx, 31, 0x27983Cu);
    ctx->pc = 0x279838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279834u;
    // 0x279838: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x279834u, 0x27983Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27983Cu;
label_27983c:
    // 0x27983c: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x27983cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_279840:
    // 0x279840: 0x1203000a  beq         $s0, $v1, . + 4 + (0xA << 2)
label_279844:
    if (ctx->pc == 0x279844u) {
        ctx->pc = 0x279844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279840u;
        // 0x279844: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279848u;
        goto label_279848;
    }
    ctx->pc = 0x279840u;
    {
        const bool branch_taken_0x279840 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x279844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279840u;
        // 0x279844: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279840) {
            ctx->pc = 0x27986Cu;
            goto label_27986c;
        }
    }
    ctx->pc = 0x279848u;
label_279848:
    // 0x279848: 0xc08a684  jal         func_229A10
label_27984c:
    if (ctx->pc == 0x27984Cu) {
        ctx->pc = 0x27984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279848u;
        // 0x27984c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279850u;
        goto label_279850;
    }
    ctx->pc = 0x279848u;
    SET_GPR_U32(ctx, 31, 0x279850u);
    ctx->pc = 0x27984Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279848u;
    // 0x27984c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229A10u, 0x279848u, 0x279850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279850u;
label_279850:
    // 0x279850: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x279850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_279854:
    // 0x279854: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x279854u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_279858:
    // 0x279858: 0xc4410970  lwc1        $f1, 0x970($v0)
    ctx->pc = 0x279858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27985c:
    // 0x27985c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27985cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279860:
    // 0x279860: 0x0  nop
    ctx->pc = 0x279860u;
    // NOP
label_279864:
    // 0x279864: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_279868:
    if (ctx->pc == 0x279868u) {
        ctx->pc = 0x279868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279864u;
        // 0x279868: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27986Cu;
        goto label_27986c;
    }
    ctx->pc = 0x279864u;
    {
        const bool branch_taken_0x279864 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x279868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279864u;
        // 0x279868: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279864) {
            ctx->pc = 0x279874u;
            goto label_279874;
        }
    }
    ctx->pc = 0x27986Cu;
label_27986c:
    // 0x27986c: 0x1000000d  b           . + 4 + (0xD << 2)
label_279870:
    if (ctx->pc == 0x279870u) {
        ctx->pc = 0x279870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27986Cu;
        // 0x279870: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279874u;
        goto label_279874;
    }
    ctx->pc = 0x27986Cu;
    {
        const bool branch_taken_0x27986c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27986Cu;
        // 0x279870: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27986c) {
            ctx->pc = 0x2798A4u;
            goto label_2798a4;
        }
    }
    ctx->pc = 0x279874u;
label_279874:
    // 0x279874: 0xc089f98  jal         func_227E60
label_279878:
    if (ctx->pc == 0x279878u) {
        ctx->pc = 0x279878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279874u;
        // 0x279878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27987Cu;
        goto label_27987c;
    }
    ctx->pc = 0x279874u;
    SET_GPR_U32(ctx, 31, 0x27987Cu);
    ctx->pc = 0x279878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279874u;
    // 0x279878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x279874u, 0x27987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27987Cu;
label_27987c:
    // 0x27987c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_279880:
    if (ctx->pc == 0x279880u) {
        ctx->pc = 0x279880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27987Cu;
        // 0x279880: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279884u;
        goto label_279884;
    }
    ctx->pc = 0x27987Cu;
    {
        const bool branch_taken_0x27987c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27987Cu;
        // 0x279880: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27987c) {
            ctx->pc = 0x2798A4u;
            goto label_2798a4;
        }
    }
    ctx->pc = 0x279884u;
label_279884:
    // 0x279884: 0xc088f04  jal         func_223C10
label_279888:
    if (ctx->pc == 0x279888u) {
        ctx->pc = 0x279888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279884u;
        // 0x279888: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27988Cu;
        goto label_27988c;
    }
    ctx->pc = 0x279884u;
    SET_GPR_U32(ctx, 31, 0x27988Cu);
    ctx->pc = 0x279888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279884u;
    // 0x279888: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C10u, 0x279884u, 0x27988Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27988Cu;
label_27988c:
    // 0x27988c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_279890:
    if (ctx->pc == 0x279890u) {
        ctx->pc = 0x279890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27988Cu;
        // 0x279890: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279894u;
        goto label_279894;
    }
    ctx->pc = 0x27988Cu;
    {
        const bool branch_taken_0x27988c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27988Cu;
        // 0x279890: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27988c) {
            ctx->pc = 0x2798A4u;
            goto label_2798a4;
        }
    }
    ctx->pc = 0x279894u;
label_279894:
    // 0x279894: 0xc089fe4  jal         func_227F90
label_279898:
    if (ctx->pc == 0x279898u) {
        ctx->pc = 0x279898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279894u;
        // 0x279898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27989Cu;
        goto label_27989c;
    }
    ctx->pc = 0x279894u;
    SET_GPR_U32(ctx, 31, 0x27989Cu);
    ctx->pc = 0x279898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279894u;
    // 0x279898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x279894u, 0x27989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27989Cu;
label_27989c:
    // 0x27989c: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x27989cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2798a0:
    // 0x2798a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2798a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2798a4:
    // 0x2798a4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2798a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2798a8:
    // 0x2798a8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2798a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2798ac:
    // 0x2798ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2798acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2798b0:
    // 0x2798b0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2798b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2798b4:
    // 0x2798b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2798b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2798b8:
    // 0x2798b8: 0x3e00008  jr          $ra
label_2798bc:
    if (ctx->pc == 0x2798BCu) {
        ctx->pc = 0x2798BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2798B8u;
        // 0x2798bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2798C0u;
        goto label_fallthrough_0x2798b8;
    }
    ctx->pc = 0x2798B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2798BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2798B8u;
        // 0x2798bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2798B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2798b8:
    ctx->pc = 0x2798C0u;
}
