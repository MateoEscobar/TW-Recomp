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

// Function: sub_002796A0
// Address: 0x2796a0 - 0x2797b0
void sub_002796A0_0x2796a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002796A0_0x2796a0");
#endif

    switch (ctx->pc) {
        case 0x2796a0u: goto label_2796a0;
        case 0x2796a4u: goto label_2796a4;
        case 0x2796a8u: goto label_2796a8;
        case 0x2796acu: goto label_2796ac;
        case 0x2796b0u: goto label_2796b0;
        case 0x2796b4u: goto label_2796b4;
        case 0x2796b8u: goto label_2796b8;
        case 0x2796bcu: goto label_2796bc;
        case 0x2796c0u: goto label_2796c0;
        case 0x2796c4u: goto label_2796c4;
        case 0x2796c8u: goto label_2796c8;
        case 0x2796ccu: goto label_2796cc;
        case 0x2796d0u: goto label_2796d0;
        case 0x2796d4u: goto label_2796d4;
        case 0x2796d8u: goto label_2796d8;
        case 0x2796dcu: goto label_2796dc;
        case 0x2796e0u: goto label_2796e0;
        case 0x2796e4u: goto label_2796e4;
        case 0x2796e8u: goto label_2796e8;
        case 0x2796ecu: goto label_2796ec;
        case 0x2796f0u: goto label_2796f0;
        case 0x2796f4u: goto label_2796f4;
        case 0x2796f8u: goto label_2796f8;
        case 0x2796fcu: goto label_2796fc;
        case 0x279700u: goto label_279700;
        case 0x279704u: goto label_279704;
        case 0x279708u: goto label_279708;
        case 0x27970cu: goto label_27970c;
        case 0x279710u: goto label_279710;
        case 0x279714u: goto label_279714;
        case 0x279718u: goto label_279718;
        case 0x27971cu: goto label_27971c;
        case 0x279720u: goto label_279720;
        case 0x279724u: goto label_279724;
        case 0x279728u: goto label_279728;
        case 0x27972cu: goto label_27972c;
        case 0x279730u: goto label_279730;
        case 0x279734u: goto label_279734;
        case 0x279738u: goto label_279738;
        case 0x27973cu: goto label_27973c;
        case 0x279740u: goto label_279740;
        case 0x279744u: goto label_279744;
        case 0x279748u: goto label_279748;
        case 0x27974cu: goto label_27974c;
        case 0x279750u: goto label_279750;
        case 0x279754u: goto label_279754;
        case 0x279758u: goto label_279758;
        case 0x27975cu: goto label_27975c;
        case 0x279760u: goto label_279760;
        case 0x279764u: goto label_279764;
        case 0x279768u: goto label_279768;
        case 0x27976cu: goto label_27976c;
        case 0x279770u: goto label_279770;
        case 0x279774u: goto label_279774;
        case 0x279778u: goto label_279778;
        case 0x27977cu: goto label_27977c;
        case 0x279780u: goto label_279780;
        case 0x279784u: goto label_279784;
        case 0x279788u: goto label_279788;
        case 0x27978cu: goto label_27978c;
        case 0x279790u: goto label_279790;
        case 0x279794u: goto label_279794;
        case 0x279798u: goto label_279798;
        case 0x27979cu: goto label_27979c;
        case 0x2797a0u: goto label_2797a0;
        case 0x2797a4u: goto label_2797a4;
        case 0x2797a8u: goto label_2797a8;
        case 0x2797acu: goto label_2797ac;
        default: break;
    }

    ctx->pc = 0x2796a0u;

label_2796a0:
    // 0x2796a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2796a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2796a4:
    // 0x2796a4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2796a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2796a8:
    // 0x2796a8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2796a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2796ac:
    // 0x2796ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2796acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2796b0:
    // 0x2796b0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2796b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2796b4:
    // 0x2796b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2796b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2796b8:
    // 0x2796b8: 0xc08a61a  jal         func_229868
label_2796bc:
    if (ctx->pc == 0x2796BCu) {
        ctx->pc = 0x2796BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2796B8u;
        // 0x2796bc: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2796C0u;
        goto label_2796c0;
    }
    ctx->pc = 0x2796B8u;
    SET_GPR_U32(ctx, 31, 0x2796C0u);
    ctx->pc = 0x2796BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2796B8u;
    // 0x2796bc: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2796B8u, 0x2796C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2796C0u;
label_2796c0:
    // 0x2796c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2796c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2796c4:
    // 0x2796c4: 0xc08a61a  jal         func_229868
label_2796c8:
    if (ctx->pc == 0x2796C8u) {
        ctx->pc = 0x2796C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2796C4u;
        // 0x2796c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2796CCu;
        goto label_2796cc;
    }
    ctx->pc = 0x2796C4u;
    SET_GPR_U32(ctx, 31, 0x2796CCu);
    ctx->pc = 0x2796C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2796C4u;
    // 0x2796c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2796C4u, 0x2796CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2796CCu;
label_2796cc:
    // 0x2796cc: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
label_2796d0:
    if (ctx->pc == 0x2796D0u) {
        ctx->pc = 0x2796D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2796CCu;
        // 0x2796d0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2796D4u;
        goto label_2796d4;
    }
    ctx->pc = 0x2796CCu;
    {
        const bool branch_taken_0x2796cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2796D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2796CCu;
        // 0x2796d0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2796cc) {
            ctx->pc = 0x27975Cu;
            goto label_27975c;
        }
    }
    ctx->pc = 0x2796D4u;
label_2796d4:
    // 0x2796d4: 0x1220002f  beqz        $s1, . + 4 + (0x2F << 2)
label_2796d8:
    if (ctx->pc == 0x2796D8u) {
        ctx->pc = 0x2796D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2796D4u;
        // 0x2796d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2796DCu;
        goto label_2796dc;
    }
    ctx->pc = 0x2796D4u;
    {
        const bool branch_taken_0x2796d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2796D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2796D4u;
        // 0x2796d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2796d4) {
            ctx->pc = 0x279794u;
            goto label_279794;
        }
    }
    ctx->pc = 0x2796DCu;
label_2796dc:
    // 0x2796dc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2796dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2796e0:
    // 0x2796e0: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x2796e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_2796e4:
    // 0x2796e4: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x2796e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_2796e8:
    // 0x2796e8: 0x40f809  jalr        $v0
label_2796ec:
    if (ctx->pc == 0x2796ECu) {
        ctx->pc = 0x2796ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2796E8u;
        // 0x2796ec: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2796F0u;
        goto label_2796f0;
    }
    ctx->pc = 0x2796E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2796F0u);
        ctx->pc = 0x2796ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2796E8u;
        // 0x2796ec: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2796E8u, 0x2796F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2796F0u;
label_2796f0:
    // 0x2796f0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_2796f4:
    if (ctx->pc == 0x2796F4u) {
        ctx->pc = 0x2796F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2796F0u;
        // 0x2796f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2796F8u;
        goto label_2796f8;
    }
    ctx->pc = 0x2796F0u;
    {
        const bool branch_taken_0x2796f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2796F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2796F0u;
        // 0x2796f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2796f0) {
            ctx->pc = 0x279794u;
            goto label_279794;
        }
    }
    ctx->pc = 0x2796F8u;
label_2796f8:
    // 0x2796f8: 0xc089f5e  jal         func_227D78
label_2796fc:
    if (ctx->pc == 0x2796FCu) {
        ctx->pc = 0x2796FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2796F8u;
        // 0x2796fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279700u;
        goto label_279700;
    }
    ctx->pc = 0x2796F8u;
    SET_GPR_U32(ctx, 31, 0x279700u);
    ctx->pc = 0x2796FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2796F8u;
    // 0x2796fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D78u, 0x2796F8u, 0x279700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279700u;
label_279700:
    // 0x279700: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_279704:
    if (ctx->pc == 0x279704u) {
        ctx->pc = 0x279704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279700u;
        // 0x279704: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279708u;
        goto label_279708;
    }
    ctx->pc = 0x279700u;
    {
        const bool branch_taken_0x279700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279700u;
        // 0x279704: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279700) {
            ctx->pc = 0x27975Cu;
            goto label_27975c;
        }
    }
    ctx->pc = 0x279708u;
label_279708:
    // 0x279708: 0xc088aa4  jal         func_222A90
label_27970c:
    if (ctx->pc == 0x27970Cu) {
        ctx->pc = 0x27970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279708u;
        // 0x27970c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279710u;
        goto label_279710;
    }
    ctx->pc = 0x279708u;
    SET_GPR_U32(ctx, 31, 0x279710u);
    ctx->pc = 0x27970Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279708u;
    // 0x27970c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x279708u, 0x279710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279710u;
label_279710:
    // 0x279710: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_279714:
    if (ctx->pc == 0x279714u) {
        ctx->pc = 0x279714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279710u;
        // 0x279714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279718u;
        goto label_279718;
    }
    ctx->pc = 0x279710u;
    {
        const bool branch_taken_0x279710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279710u;
        // 0x279714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279710) {
            ctx->pc = 0x279794u;
            goto label_279794;
        }
    }
    ctx->pc = 0x279718u;
label_279718:
    // 0x279718: 0xc087502  jal         func_21D408
label_27971c:
    if (ctx->pc == 0x27971Cu) {
        ctx->pc = 0x27971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279718u;
        // 0x27971c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279720u;
        goto label_279720;
    }
    ctx->pc = 0x279718u;
    SET_GPR_U32(ctx, 31, 0x279720u);
    ctx->pc = 0x27971Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279718u;
    // 0x27971c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x279718u, 0x279720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279720u;
label_279720:
    // 0x279720: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x279720u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_279724:
    // 0x279724: 0xc087502  jal         func_21D408
label_279728:
    if (ctx->pc == 0x279728u) {
        ctx->pc = 0x279728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279724u;
        // 0x279728: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27972Cu;
        goto label_27972c;
    }
    ctx->pc = 0x279724u;
    SET_GPR_U32(ctx, 31, 0x27972Cu);
    ctx->pc = 0x279728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279724u;
    // 0x279728: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x279724u, 0x27972Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27972Cu;
label_27972c:
    // 0x27972c: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x27972cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_279730:
    // 0x279730: 0x1203000a  beq         $s0, $v1, . + 4 + (0xA << 2)
label_279734:
    if (ctx->pc == 0x279734u) {
        ctx->pc = 0x279734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279730u;
        // 0x279734: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279738u;
        goto label_279738;
    }
    ctx->pc = 0x279730u;
    {
        const bool branch_taken_0x279730 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x279734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279730u;
        // 0x279734: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279730) {
            ctx->pc = 0x27975Cu;
            goto label_27975c;
        }
    }
    ctx->pc = 0x279738u;
label_279738:
    // 0x279738: 0xc08a684  jal         func_229A10
label_27973c:
    if (ctx->pc == 0x27973Cu) {
        ctx->pc = 0x27973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279738u;
        // 0x27973c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279740u;
        goto label_279740;
    }
    ctx->pc = 0x279738u;
    SET_GPR_U32(ctx, 31, 0x279740u);
    ctx->pc = 0x27973Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279738u;
    // 0x27973c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229A10u, 0x279738u, 0x279740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279740u;
label_279740:
    // 0x279740: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x279740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_279744:
    // 0x279744: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x279744u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_279748:
    // 0x279748: 0xc4410970  lwc1        $f1, 0x970($v0)
    ctx->pc = 0x279748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27974c:
    // 0x27974c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27974cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279750:
    // 0x279750: 0x0  nop
    ctx->pc = 0x279750u;
    // NOP
label_279754:
    // 0x279754: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_279758:
    if (ctx->pc == 0x279758u) {
        ctx->pc = 0x279758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279754u;
        // 0x279758: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27975Cu;
        goto label_27975c;
    }
    ctx->pc = 0x279754u;
    {
        const bool branch_taken_0x279754 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x279758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279754u;
        // 0x279758: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279754) {
            ctx->pc = 0x279764u;
            goto label_279764;
        }
    }
    ctx->pc = 0x27975Cu;
label_27975c:
    // 0x27975c: 0x1000000d  b           . + 4 + (0xD << 2)
label_279760:
    if (ctx->pc == 0x279760u) {
        ctx->pc = 0x279760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27975Cu;
        // 0x279760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279764u;
        goto label_279764;
    }
    ctx->pc = 0x27975Cu;
    {
        const bool branch_taken_0x27975c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27975Cu;
        // 0x279760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27975c) {
            ctx->pc = 0x279794u;
            goto label_279794;
        }
    }
    ctx->pc = 0x279764u;
label_279764:
    // 0x279764: 0xc089fac  jal         func_227EB0
label_279768:
    if (ctx->pc == 0x279768u) {
        ctx->pc = 0x279768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279764u;
        // 0x279768: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27976Cu;
        goto label_27976c;
    }
    ctx->pc = 0x279764u;
    SET_GPR_U32(ctx, 31, 0x27976Cu);
    ctx->pc = 0x279768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279764u;
    // 0x279768: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x279764u, 0x27976Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27976Cu;
label_27976c:
    // 0x27976c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_279770:
    if (ctx->pc == 0x279770u) {
        ctx->pc = 0x279770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27976Cu;
        // 0x279770: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279774u;
        goto label_279774;
    }
    ctx->pc = 0x27976Cu;
    {
        const bool branch_taken_0x27976c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27976Cu;
        // 0x279770: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27976c) {
            ctx->pc = 0x279794u;
            goto label_279794;
        }
    }
    ctx->pc = 0x279774u;
label_279774:
    // 0x279774: 0xc088f04  jal         func_223C10
label_279778:
    if (ctx->pc == 0x279778u) {
        ctx->pc = 0x279778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279774u;
        // 0x279778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27977Cu;
        goto label_27977c;
    }
    ctx->pc = 0x279774u;
    SET_GPR_U32(ctx, 31, 0x27977Cu);
    ctx->pc = 0x279778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279774u;
    // 0x279778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C10u, 0x279774u, 0x27977Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27977Cu;
label_27977c:
    // 0x27977c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_279780:
    if (ctx->pc == 0x279780u) {
        ctx->pc = 0x279780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27977Cu;
        // 0x279780: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279784u;
        goto label_279784;
    }
    ctx->pc = 0x27977Cu;
    {
        const bool branch_taken_0x27977c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27977Cu;
        // 0x279780: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27977c) {
            ctx->pc = 0x279794u;
            goto label_279794;
        }
    }
    ctx->pc = 0x279784u;
label_279784:
    // 0x279784: 0xc089fe4  jal         func_227F90
label_279788:
    if (ctx->pc == 0x279788u) {
        ctx->pc = 0x279788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279784u;
        // 0x279788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27978Cu;
        goto label_27978c;
    }
    ctx->pc = 0x279784u;
    SET_GPR_U32(ctx, 31, 0x27978Cu);
    ctx->pc = 0x279788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279784u;
    // 0x279788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x279784u, 0x27978Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27978Cu;
label_27978c:
    // 0x27978c: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x27978cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_279790:
    // 0x279790: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x279790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_279794:
    // 0x279794: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x279794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_279798:
    // 0x279798: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x279798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27979c:
    // 0x27979c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27979cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2797a0:
    // 0x2797a0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2797a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2797a4:
    // 0x2797a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2797a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2797a8:
    // 0x2797a8: 0x3e00008  jr          $ra
label_2797ac:
    if (ctx->pc == 0x2797ACu) {
        ctx->pc = 0x2797ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2797A8u;
        // 0x2797ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2797B0u;
        goto label_fallthrough_0x2797a8;
    }
    ctx->pc = 0x2797A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2797ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2797A8u;
        // 0x2797ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2797A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2797a8:
    ctx->pc = 0x2797B0u;
}
