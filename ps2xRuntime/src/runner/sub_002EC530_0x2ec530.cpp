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

// Function: sub_002EC530
// Address: 0x2ec530 - 0x2ec780
void sub_002EC530_0x2ec530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC530_0x2ec530");
#endif

    switch (ctx->pc) {
        case 0x2ec530u: goto label_2ec530;
        case 0x2ec534u: goto label_2ec534;
        case 0x2ec538u: goto label_2ec538;
        case 0x2ec53cu: goto label_2ec53c;
        case 0x2ec540u: goto label_2ec540;
        case 0x2ec544u: goto label_2ec544;
        case 0x2ec548u: goto label_2ec548;
        case 0x2ec54cu: goto label_2ec54c;
        case 0x2ec550u: goto label_2ec550;
        case 0x2ec554u: goto label_2ec554;
        case 0x2ec558u: goto label_2ec558;
        case 0x2ec55cu: goto label_2ec55c;
        case 0x2ec560u: goto label_2ec560;
        case 0x2ec564u: goto label_2ec564;
        case 0x2ec568u: goto label_2ec568;
        case 0x2ec56cu: goto label_2ec56c;
        case 0x2ec570u: goto label_2ec570;
        case 0x2ec574u: goto label_2ec574;
        case 0x2ec578u: goto label_2ec578;
        case 0x2ec57cu: goto label_2ec57c;
        case 0x2ec580u: goto label_2ec580;
        case 0x2ec584u: goto label_2ec584;
        case 0x2ec588u: goto label_2ec588;
        case 0x2ec58cu: goto label_2ec58c;
        case 0x2ec590u: goto label_2ec590;
        case 0x2ec594u: goto label_2ec594;
        case 0x2ec598u: goto label_2ec598;
        case 0x2ec59cu: goto label_2ec59c;
        case 0x2ec5a0u: goto label_2ec5a0;
        case 0x2ec5a4u: goto label_2ec5a4;
        case 0x2ec5a8u: goto label_2ec5a8;
        case 0x2ec5acu: goto label_2ec5ac;
        case 0x2ec5b0u: goto label_2ec5b0;
        case 0x2ec5b4u: goto label_2ec5b4;
        case 0x2ec5b8u: goto label_2ec5b8;
        case 0x2ec5bcu: goto label_2ec5bc;
        case 0x2ec5c0u: goto label_2ec5c0;
        case 0x2ec5c4u: goto label_2ec5c4;
        case 0x2ec5c8u: goto label_2ec5c8;
        case 0x2ec5ccu: goto label_2ec5cc;
        case 0x2ec5d0u: goto label_2ec5d0;
        case 0x2ec5d4u: goto label_2ec5d4;
        case 0x2ec5d8u: goto label_2ec5d8;
        case 0x2ec5dcu: goto label_2ec5dc;
        case 0x2ec5e0u: goto label_2ec5e0;
        case 0x2ec5e4u: goto label_2ec5e4;
        case 0x2ec5e8u: goto label_2ec5e8;
        case 0x2ec5ecu: goto label_2ec5ec;
        case 0x2ec5f0u: goto label_2ec5f0;
        case 0x2ec5f4u: goto label_2ec5f4;
        case 0x2ec5f8u: goto label_2ec5f8;
        case 0x2ec5fcu: goto label_2ec5fc;
        case 0x2ec600u: goto label_2ec600;
        case 0x2ec604u: goto label_2ec604;
        case 0x2ec608u: goto label_2ec608;
        case 0x2ec60cu: goto label_2ec60c;
        case 0x2ec610u: goto label_2ec610;
        case 0x2ec614u: goto label_2ec614;
        case 0x2ec618u: goto label_2ec618;
        case 0x2ec61cu: goto label_2ec61c;
        case 0x2ec620u: goto label_2ec620;
        case 0x2ec624u: goto label_2ec624;
        case 0x2ec628u: goto label_2ec628;
        case 0x2ec62cu: goto label_2ec62c;
        case 0x2ec630u: goto label_2ec630;
        case 0x2ec634u: goto label_2ec634;
        case 0x2ec638u: goto label_2ec638;
        case 0x2ec63cu: goto label_2ec63c;
        case 0x2ec640u: goto label_2ec640;
        case 0x2ec644u: goto label_2ec644;
        case 0x2ec648u: goto label_2ec648;
        case 0x2ec64cu: goto label_2ec64c;
        case 0x2ec650u: goto label_2ec650;
        case 0x2ec654u: goto label_2ec654;
        case 0x2ec658u: goto label_2ec658;
        case 0x2ec65cu: goto label_2ec65c;
        case 0x2ec660u: goto label_2ec660;
        case 0x2ec664u: goto label_2ec664;
        case 0x2ec668u: goto label_2ec668;
        case 0x2ec66cu: goto label_2ec66c;
        case 0x2ec670u: goto label_2ec670;
        case 0x2ec674u: goto label_2ec674;
        case 0x2ec678u: goto label_2ec678;
        case 0x2ec67cu: goto label_2ec67c;
        case 0x2ec680u: goto label_2ec680;
        case 0x2ec684u: goto label_2ec684;
        case 0x2ec688u: goto label_2ec688;
        case 0x2ec68cu: goto label_2ec68c;
        case 0x2ec690u: goto label_2ec690;
        case 0x2ec694u: goto label_2ec694;
        case 0x2ec698u: goto label_2ec698;
        case 0x2ec69cu: goto label_2ec69c;
        case 0x2ec6a0u: goto label_2ec6a0;
        case 0x2ec6a4u: goto label_2ec6a4;
        case 0x2ec6a8u: goto label_2ec6a8;
        case 0x2ec6acu: goto label_2ec6ac;
        case 0x2ec6b0u: goto label_2ec6b0;
        case 0x2ec6b4u: goto label_2ec6b4;
        case 0x2ec6b8u: goto label_2ec6b8;
        case 0x2ec6bcu: goto label_2ec6bc;
        case 0x2ec6c0u: goto label_2ec6c0;
        case 0x2ec6c4u: goto label_2ec6c4;
        case 0x2ec6c8u: goto label_2ec6c8;
        case 0x2ec6ccu: goto label_2ec6cc;
        case 0x2ec6d0u: goto label_2ec6d0;
        case 0x2ec6d4u: goto label_2ec6d4;
        case 0x2ec6d8u: goto label_2ec6d8;
        case 0x2ec6dcu: goto label_2ec6dc;
        case 0x2ec6e0u: goto label_2ec6e0;
        case 0x2ec6e4u: goto label_2ec6e4;
        case 0x2ec6e8u: goto label_2ec6e8;
        case 0x2ec6ecu: goto label_2ec6ec;
        case 0x2ec6f0u: goto label_2ec6f0;
        case 0x2ec6f4u: goto label_2ec6f4;
        case 0x2ec6f8u: goto label_2ec6f8;
        case 0x2ec6fcu: goto label_2ec6fc;
        case 0x2ec700u: goto label_2ec700;
        case 0x2ec704u: goto label_2ec704;
        case 0x2ec708u: goto label_2ec708;
        case 0x2ec70cu: goto label_2ec70c;
        case 0x2ec710u: goto label_2ec710;
        case 0x2ec714u: goto label_2ec714;
        case 0x2ec718u: goto label_2ec718;
        case 0x2ec71cu: goto label_2ec71c;
        case 0x2ec720u: goto label_2ec720;
        case 0x2ec724u: goto label_2ec724;
        case 0x2ec728u: goto label_2ec728;
        case 0x2ec72cu: goto label_2ec72c;
        case 0x2ec730u: goto label_2ec730;
        case 0x2ec734u: goto label_2ec734;
        case 0x2ec738u: goto label_2ec738;
        case 0x2ec73cu: goto label_2ec73c;
        case 0x2ec740u: goto label_2ec740;
        case 0x2ec744u: goto label_2ec744;
        case 0x2ec748u: goto label_2ec748;
        case 0x2ec74cu: goto label_2ec74c;
        case 0x2ec750u: goto label_2ec750;
        case 0x2ec754u: goto label_2ec754;
        case 0x2ec758u: goto label_2ec758;
        case 0x2ec75cu: goto label_2ec75c;
        case 0x2ec760u: goto label_2ec760;
        case 0x2ec764u: goto label_2ec764;
        case 0x2ec768u: goto label_2ec768;
        case 0x2ec76cu: goto label_2ec76c;
        case 0x2ec770u: goto label_2ec770;
        case 0x2ec774u: goto label_2ec774;
        case 0x2ec778u: goto label_2ec778;
        case 0x2ec77cu: goto label_2ec77c;
        default: break;
    }

    ctx->pc = 0x2ec530u;

label_2ec530:
    // 0x2ec530: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ec530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2ec534:
    // 0x2ec534: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2ec534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2ec538:
    // 0x2ec538: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ec538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2ec53c:
    // 0x2ec53c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ec53cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ec540:
    // 0x2ec540: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ec540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2ec544:
    // 0x2ec544: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ec544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ec548:
    // 0x2ec548: 0x92030025  lbu         $v1, 0x25($s0)
    ctx->pc = 0x2ec548u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 37)));
label_2ec54c:
    // 0x2ec54c: 0x14600072  bnez        $v1, . + 4 + (0x72 << 2)
label_2ec550:
    if (ctx->pc == 0x2EC550u) {
        ctx->pc = 0x2EC550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC54Cu;
        // 0x2ec550: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC554u;
        goto label_2ec554;
    }
    ctx->pc = 0x2EC54Cu;
    {
        const bool branch_taken_0x2ec54c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC54Cu;
        // 0x2ec550: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec54c) {
            ctx->pc = 0x2EC718u;
            goto label_2ec718;
        }
    }
    ctx->pc = 0x2EC554u;
label_2ec554:
    // 0x2ec554: 0xc088bbc  jal         func_222EF0
label_2ec558:
    if (ctx->pc == 0x2EC558u) {
        ctx->pc = 0x2EC558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC554u;
        // 0x2ec558: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC55Cu;
        goto label_2ec55c;
    }
    ctx->pc = 0x2EC554u;
    SET_GPR_U32(ctx, 31, 0x2EC55Cu);
    ctx->pc = 0x2EC558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC554u;
    // 0x2ec558: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x2EC554u, 0x2EC55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC55Cu;
label_2ec55c:
    // 0x2ec55c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2ec55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_2ec560:
    // 0x2ec560: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ec560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ec564:
    // 0x2ec564: 0x0  nop
    ctx->pc = 0x2ec564u;
    // NOP
label_2ec568:
    // 0x2ec568: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x2ec568u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ec56c:
    // 0x2ec56c: 0x0  nop
    ctx->pc = 0x2ec56cu;
    // NOP
label_2ec570:
    // 0x2ec570: 0x4500007e  bc1f        . + 4 + (0x7E << 2)
label_2ec574:
    if (ctx->pc == 0x2EC574u) {
        ctx->pc = 0x2EC574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC570u;
        // 0x2ec574: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC578u;
        goto label_2ec578;
    }
    ctx->pc = 0x2EC570u;
    {
        const bool branch_taken_0x2ec570 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EC574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC570u;
        // 0x2ec574: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec570) {
            ctx->pc = 0x2EC76Cu;
            goto label_2ec76c;
        }
    }
    ctx->pc = 0x2EC578u;
label_2ec578:
    // 0x2ec578: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x2ec578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
label_2ec57c:
    // 0x2ec57c: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
label_2ec580:
    if (ctx->pc == 0x2EC580u) {
        ctx->pc = 0x2EC580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC57Cu;
        // 0x2ec580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC584u;
        goto label_2ec584;
    }
    ctx->pc = 0x2EC57Cu;
    {
        const bool branch_taken_0x2ec57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC57Cu;
        // 0x2ec580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec57c) {
            ctx->pc = 0x2EC76Cu;
            goto label_2ec76c;
        }
    }
    ctx->pc = 0x2EC584u;
label_2ec584:
    // 0x2ec584: 0xc088ba0  jal         func_222E80
label_2ec588:
    if (ctx->pc == 0x2EC588u) {
        ctx->pc = 0x2EC588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC584u;
        // 0x2ec588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC58Cu;
        goto label_2ec58c;
    }
    ctx->pc = 0x2EC584u;
    SET_GPR_U32(ctx, 31, 0x2EC58Cu);
    ctx->pc = 0x2EC588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC584u;
    // 0x2ec588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E80u, 0x2EC584u, 0x2EC58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC58Cu;
label_2ec58c:
    // 0x2ec58c: 0x9203001c  lbu         $v1, 0x1C($s0)
    ctx->pc = 0x2ec58cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
label_2ec590:
    // 0x2ec590: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ec590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ec594:
    // 0x2ec594: 0x10620074  beq         $v1, $v0, . + 4 + (0x74 << 2)
label_2ec598:
    if (ctx->pc == 0x2EC598u) {
        ctx->pc = 0x2EC598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC594u;
        // 0x2ec598: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC59Cu;
        goto label_2ec59c;
    }
    ctx->pc = 0x2EC594u;
    {
        const bool branch_taken_0x2ec594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EC598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC594u;
        // 0x2ec598: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec594) {
            ctx->pc = 0x2EC768u;
            goto label_2ec768;
        }
    }
    ctx->pc = 0x2EC59Cu;
label_2ec59c:
    // 0x2ec59c: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2ec59cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_2ec5a0:
    // 0x2ec5a0: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x2ec5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_2ec5a4:
    // 0x2ec5a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ec5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2ec5a8:
    // 0x2ec5a8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2ec5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2ec5ac:
    // 0x2ec5ac: 0xfe2200e0  sd          $v0, 0xE0($s1)
    ctx->pc = 0x2ec5acu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
label_2ec5b0:
    // 0x2ec5b0: 0xc0a36c8  jal         func_28DB20
label_2ec5b4:
    if (ctx->pc == 0x2EC5B4u) {
        ctx->pc = 0x2EC5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC5B0u;
        // 0x2ec5b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC5B8u;
        goto label_2ec5b8;
    }
    ctx->pc = 0x2EC5B0u;
    SET_GPR_U32(ctx, 31, 0x2EC5B8u);
    ctx->pc = 0x2EC5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC5B0u;
    // 0x2ec5b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2EC5B0u, 0x2EC5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC5B8u;
label_2ec5b8:
    // 0x2ec5b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ec5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ec5bc:
    // 0x2ec5bc: 0x1443006b  bne         $v0, $v1, . + 4 + (0x6B << 2)
label_2ec5c0:
    if (ctx->pc == 0x2EC5C0u) {
        ctx->pc = 0x2EC5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC5BCu;
        // 0x2ec5c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC5C4u;
        goto label_2ec5c4;
    }
    ctx->pc = 0x2EC5BCu;
    {
        const bool branch_taken_0x2ec5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EC5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC5BCu;
        // 0x2ec5c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec5bc) {
            ctx->pc = 0x2EC76Cu;
            goto label_2ec76c;
        }
    }
    ctx->pc = 0x2EC5C4u;
label_2ec5c4:
    // 0x2ec5c4: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2ec5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
label_2ec5c8:
    // 0x2ec5c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ec5cc:
    // 0x2ec5cc: 0xc089998  jal         func_226660
label_2ec5d0:
    if (ctx->pc == 0x2EC5D0u) {
        ctx->pc = 0x2EC5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC5CCu;
        // 0x2ec5d0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC5D4u;
        goto label_2ec5d4;
    }
    ctx->pc = 0x2EC5CCu;
    SET_GPR_U32(ctx, 31, 0x2EC5D4u);
    ctx->pc = 0x2EC5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC5CCu;
    // 0x2ec5d0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2EC5CCu, 0x2EC5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC5D4u;
label_2ec5d4:
    // 0x2ec5d4: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
label_2ec5d8:
    if (ctx->pc == 0x2EC5D8u) {
        ctx->pc = 0x2EC5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC5D4u;
        // 0x2ec5d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC5DCu;
        goto label_2ec5dc;
    }
    ctx->pc = 0x2EC5D4u;
    {
        const bool branch_taken_0x2ec5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC5D4u;
        // 0x2ec5d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec5d4) {
            ctx->pc = 0x2EC76Cu;
            goto label_2ec76c;
        }
    }
    ctx->pc = 0x2EC5DCu;
label_2ec5dc:
    // 0x2ec5dc: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x2ec5dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_2ec5e0:
    // 0x2ec5e0: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2ec5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_2ec5e4:
    // 0x2ec5e4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ec5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ec5e8:
    // 0x2ec5e8: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2ec5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_2ec5ec:
    // 0x2ec5ec: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2ec5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2ec5f0:
    // 0x2ec5f0: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2ec5f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2ec5f4:
    // 0x2ec5f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ec5f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ec5f8:
    // 0x2ec5f8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2ec5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2ec5fc:
    // 0x2ec5fc: 0x24840164  addiu       $a0, $a0, 0x164
    ctx->pc = 0x2ec5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
label_2ec600:
    // 0x2ec600: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x2ec600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2ec604:
    // 0x2ec604: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2ec604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2ec608:
    // 0x2ec608: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2ec608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ec60c:
    // 0x2ec60c: 0xc136d6c  jal         func_4DB5B0
label_2ec610:
    if (ctx->pc == 0x2EC610u) {
        ctx->pc = 0x2EC610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC60Cu;
        // 0x2ec610: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC614u;
        goto label_2ec614;
    }
    ctx->pc = 0x2EC60Cu;
    SET_GPR_U32(ctx, 31, 0x2EC614u);
    ctx->pc = 0x2EC610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC60Cu;
    // 0x2ec610: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB5B0u, 0x2EC60Cu, 0x2EC614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC614u;
label_2ec614:
    // 0x2ec614: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2ec614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2ec618:
    // 0x2ec618: 0xc0e409a  jal         func_390268
label_2ec61c:
    if (ctx->pc == 0x2EC61Cu) {
        ctx->pc = 0x2EC61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC618u;
        // 0x2ec61c: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC620u;
        goto label_2ec620;
    }
    ctx->pc = 0x2EC618u;
    SET_GPR_U32(ctx, 31, 0x2EC620u);
    ctx->pc = 0x2EC61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC618u;
    // 0x2ec61c: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2EC618u, 0x2EC620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC620u;
label_2ec620:
    // 0x2ec620: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2ec624:
    if (ctx->pc == 0x2EC624u) {
        ctx->pc = 0x2EC624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC620u;
        // 0x2ec624: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC628u;
        goto label_2ec628;
    }
    ctx->pc = 0x2EC620u;
    {
        const bool branch_taken_0x2ec620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC620u;
        // 0x2ec624: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec620) {
            ctx->pc = 0x2EC674u;
            goto label_2ec674;
        }
    }
    ctx->pc = 0x2EC628u;
label_2ec628:
    // 0x2ec628: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x2ec628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
label_2ec62c:
    // 0x2ec62c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ec62cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ec630:
    // 0x2ec630: 0x0  nop
    ctx->pc = 0x2ec630u;
    // NOP
label_2ec634:
    // 0x2ec634: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ec634u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ec638:
    // 0x2ec638: 0x0  nop
    ctx->pc = 0x2ec638u;
    // NOP
label_2ec63c:
    // 0x2ec63c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_2ec640:
    if (ctx->pc == 0x2EC640u) {
        ctx->pc = 0x2EC644u;
        goto label_2ec644;
    }
    ctx->pc = 0x2EC63Cu;
    {
        const bool branch_taken_0x2ec63c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ec63c) {
            ctx->pc = 0x2EC674u;
            goto label_2ec674;
        }
    }
    ctx->pc = 0x2EC644u;
label_2ec644:
    // 0x2ec644: 0xc0a367c  jal         func_28D9F0
label_2ec648:
    if (ctx->pc == 0x2EC648u) {
        ctx->pc = 0x2EC648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC644u;
        // 0x2ec648: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC64Cu;
        goto label_2ec64c;
    }
    ctx->pc = 0x2EC644u;
    SET_GPR_U32(ctx, 31, 0x2EC64Cu);
    ctx->pc = 0x2EC648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC644u;
    // 0x2ec648: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EC644u, 0x2EC64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC64Cu;
label_2ec64c:
    // 0x2ec64c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2ec650:
    if (ctx->pc == 0x2EC650u) {
        ctx->pc = 0x2EC650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC64Cu;
        // 0x2ec650: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC654u;
        goto label_2ec654;
    }
    ctx->pc = 0x2EC64Cu;
    {
        const bool branch_taken_0x2ec64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC64Cu;
        // 0x2ec650: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec64c) {
            ctx->pc = 0x2EC674u;
            goto label_2ec674;
        }
    }
    ctx->pc = 0x2EC654u;
label_2ec654:
    // 0x2ec654: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ec654u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ec658:
    // 0x2ec658: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2ec658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ec65c:
    // 0x2ec65c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x2ec65cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2ec660:
    // 0x2ec660: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ec660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ec664:
    // 0x2ec664: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2ec664u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2ec668:
    // 0x2ec668: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ec668u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ec66c:
    // 0x2ec66c: 0xc0be968  jal         func_2FA5A0
label_2ec670:
    if (ctx->pc == 0x2EC670u) {
        ctx->pc = 0x2EC670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC66Cu;
        // 0x2ec670: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC674u;
        goto label_2ec674;
    }
    ctx->pc = 0x2EC66Cu;
    SET_GPR_U32(ctx, 31, 0x2EC674u);
    ctx->pc = 0x2EC670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC66Cu;
    // 0x2ec670: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2EC66Cu, 0x2EC674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC674u;
label_2ec674:
    // 0x2ec674: 0xc0a367c  jal         func_28D9F0
label_2ec678:
    if (ctx->pc == 0x2EC678u) {
        ctx->pc = 0x2EC678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC674u;
        // 0x2ec678: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC67Cu;
        goto label_2ec67c;
    }
    ctx->pc = 0x2EC674u;
    SET_GPR_U32(ctx, 31, 0x2EC67Cu);
    ctx->pc = 0x2EC678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC674u;
    // 0x2ec678: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EC674u, 0x2EC67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC67Cu;
label_2ec67c:
    // 0x2ec67c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2ec680:
    if (ctx->pc == 0x2EC680u) {
        ctx->pc = 0x2EC680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC67Cu;
        // 0x2ec680: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC684u;
        goto label_2ec684;
    }
    ctx->pc = 0x2EC67Cu;
    {
        const bool branch_taken_0x2ec67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC67Cu;
        // 0x2ec680: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec67c) {
            ctx->pc = 0x2EC6ACu;
            goto label_2ec6ac;
        }
    }
    ctx->pc = 0x2EC684u;
label_2ec684:
    // 0x2ec684: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2ec684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2ec688:
    // 0x2ec688: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2ec688u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2ec68c:
    // 0x2ec68c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ec68cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ec690:
    // 0x2ec690: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2ec690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ec694:
    // 0x2ec694: 0x24060299  addiu       $a2, $zero, 0x299
    ctx->pc = 0x2ec694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 665));
label_2ec698:
    // 0x2ec698: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ec698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ec69c:
    // 0x2ec69c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2ec69cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2ec6a0:
    // 0x2ec6a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ec6a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ec6a4:
    // 0x2ec6a4: 0xc0be968  jal         func_2FA5A0
label_2ec6a8:
    if (ctx->pc == 0x2EC6A8u) {
        ctx->pc = 0x2EC6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC6A4u;
        // 0x2ec6a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC6ACu;
        goto label_2ec6ac;
    }
    ctx->pc = 0x2EC6A4u;
    SET_GPR_U32(ctx, 31, 0x2EC6ACu);
    ctx->pc = 0x2EC6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC6A4u;
    // 0x2ec6a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2EC6A4u, 0x2EC6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC6ACu;
label_2ec6ac:
    // 0x2ec6ac: 0x92030028  lbu         $v1, 0x28($s0)
    ctx->pc = 0x2ec6acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
label_2ec6b0:
    // 0x2ec6b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ec6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ec6b4:
    // 0x2ec6b4: 0xa2020025  sb          $v0, 0x25($s0)
    ctx->pc = 0x2ec6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 2));
label_2ec6b8:
    // 0x2ec6b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ec6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2ec6bc:
    // 0x2ec6bc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ec6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ec6c0:
    // 0x2ec6c0: 0xa2030028  sb          $v1, 0x28($s0)
    ctx->pc = 0x2ec6c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 3));
label_2ec6c4:
    // 0x2ec6c4: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2ec6c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2ec6c8:
    // 0x2ec6c8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2ec6c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_2ec6cc:
    // 0x2ec6cc: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_2ec6d0:
    if (ctx->pc == 0x2EC6D0u) {
        ctx->pc = 0x2EC6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC6CCu;
        // 0x2ec6d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC6D4u;
        goto label_2ec6d4;
    }
    ctx->pc = 0x2EC6CCu;
    {
        const bool branch_taken_0x2ec6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC6CCu;
        // 0x2ec6d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec6cc) {
            ctx->pc = 0x2EC76Cu;
            goto label_2ec76c;
        }
    }
    ctx->pc = 0x2EC6D4u;
label_2ec6d4:
    // 0x2ec6d4: 0x8c82020c  lw          $v0, 0x20C($a0)
    ctx->pc = 0x2ec6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
label_2ec6d8:
    // 0x2ec6d8: 0x8c500040  lw          $s0, 0x40($v0)
    ctx->pc = 0x2ec6d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2ec6dc:
    // 0x2ec6dc: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
label_2ec6e0:
    if (ctx->pc == 0x2EC6E0u) {
        ctx->pc = 0x2EC6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC6DCu;
        // 0x2ec6e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC6E4u;
        goto label_2ec6e4;
    }
    ctx->pc = 0x2EC6DCu;
    {
        const bool branch_taken_0x2ec6dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC6DCu;
        // 0x2ec6e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec6dc) {
            ctx->pc = 0x2EC76Cu;
            goto label_2ec76c;
        }
    }
    ctx->pc = 0x2EC6E4u;
label_2ec6e4:
    // 0x2ec6e4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2ec6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2ec6e8:
    // 0x2ec6e8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2ec6e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2ec6ec:
    // 0x2ec6ec: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2ec6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2ec6f0:
    // 0x2ec6f0: 0x40f809  jalr        $v0
label_2ec6f4:
    if (ctx->pc == 0x2EC6F4u) {
        ctx->pc = 0x2EC6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC6F0u;
        // 0x2ec6f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC6F8u;
        goto label_2ec6f8;
    }
    ctx->pc = 0x2EC6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EC6F8u);
        ctx->pc = 0x2EC6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC6F0u;
        // 0x2ec6f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC6F0u, 0x2EC6F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EC6F8u;
label_2ec6f8:
    // 0x2ec6f8: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x2ec6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2ec6fc:
    // 0x2ec6fc: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
label_2ec700:
    if (ctx->pc == 0x2EC700u) {
        ctx->pc = 0x2EC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC6FCu;
        // 0x2ec700: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC704u;
        goto label_2ec704;
    }
    ctx->pc = 0x2EC6FCu;
    {
        const bool branch_taken_0x2ec6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC6FCu;
        // 0x2ec700: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec6fc) {
            ctx->pc = 0x2EC76Cu;
            goto label_2ec76c;
        }
    }
    ctx->pc = 0x2EC704u;
label_2ec704:
    // 0x2ec704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ec708:
    // 0x2ec708: 0xc0c3932  jal         func_30E4C8
label_2ec70c:
    if (ctx->pc == 0x2EC70Cu) {
        ctx->pc = 0x2EC70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC708u;
        // 0x2ec70c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC710u;
        goto label_2ec710;
    }
    ctx->pc = 0x2EC708u;
    SET_GPR_U32(ctx, 31, 0x2EC710u);
    ctx->pc = 0x2EC70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC708u;
    // 0x2ec70c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E4C8u, 0x2EC708u, 0x2EC710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC710u;
label_2ec710:
    // 0x2ec710: 0x10000016  b           . + 4 + (0x16 << 2)
label_2ec714:
    if (ctx->pc == 0x2EC714u) {
        ctx->pc = 0x2EC714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC710u;
        // 0x2ec714: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC718u;
        goto label_2ec718;
    }
    ctx->pc = 0x2EC710u;
    {
        const bool branch_taken_0x2ec710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC710u;
        // 0x2ec714: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec710) {
            ctx->pc = 0x2EC76Cu;
            goto label_2ec76c;
        }
    }
    ctx->pc = 0x2EC718u;
label_2ec718:
    // 0x2ec718: 0xc088bbc  jal         func_222EF0
label_2ec71c:
    if (ctx->pc == 0x2EC71Cu) {
        ctx->pc = 0x2EC71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC718u;
        // 0x2ec71c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC720u;
        goto label_2ec720;
    }
    ctx->pc = 0x2EC718u;
    SET_GPR_U32(ctx, 31, 0x2EC720u);
    ctx->pc = 0x2EC71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC718u;
    // 0x2ec71c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x2EC718u, 0x2EC720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC720u;
label_2ec720:
    // 0x2ec720: 0x3c0142c6  lui         $at, 0x42C6
    ctx->pc = 0x2ec720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17094 << 16));
label_2ec724:
    // 0x2ec724: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ec724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ec728:
    // 0x2ec728: 0x0  nop
    ctx->pc = 0x2ec728u;
    // NOP
label_2ec72c:
    // 0x2ec72c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ec72cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ec730:
    // 0x2ec730: 0x0  nop
    ctx->pc = 0x2ec730u;
    // NOP
label_2ec734:
    // 0x2ec734: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_2ec738:
    if (ctx->pc == 0x2EC738u) {
        ctx->pc = 0x2EC738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC734u;
        // 0x2ec738: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC73Cu;
        goto label_2ec73c;
    }
    ctx->pc = 0x2EC734u;
    {
        const bool branch_taken_0x2ec734 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EC738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC734u;
        // 0x2ec738: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec734) {
            ctx->pc = 0x2EC768u;
            goto label_2ec768;
        }
    }
    ctx->pc = 0x2EC73Cu;
label_2ec73c:
    // 0x2ec73c: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2ec73cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_2ec740:
    // 0x2ec740: 0x2405f7ff  addiu       $a1, $zero, -0x801
    ctx->pc = 0x2ec740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
label_2ec744:
    // 0x2ec744: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x2ec744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
label_2ec748:
    // 0x2ec748: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ec748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ec74c:
    // 0x2ec74c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ec74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ec750:
    // 0x2ec750: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ec754:
    // 0x2ec754: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2ec754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_2ec758:
    // 0x2ec758: 0xc088ba0  jal         func_222E80
label_2ec75c:
    if (ctx->pc == 0x2EC75Cu) {
        ctx->pc = 0x2EC75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC758u;
        // 0x2ec75c: 0xfe2200e0  sd          $v0, 0xE0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC760u;
        goto label_2ec760;
    }
    ctx->pc = 0x2EC758u;
    SET_GPR_U32(ctx, 31, 0x2EC760u);
    ctx->pc = 0x2EC75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC758u;
    // 0x2ec75c: 0xfe2200e0  sd          $v0, 0xE0($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E80u, 0x2EC758u, 0x2EC760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC760u;
label_2ec760:
    // 0x2ec760: 0xa2000025  sb          $zero, 0x25($s0)
    ctx->pc = 0x2ec760u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 0));
label_2ec764:
    // 0x2ec764: 0xa2000027  sb          $zero, 0x27($s0)
    ctx->pc = 0x2ec764u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 39), (uint8_t)GPR_U32(ctx, 0));
label_2ec768:
    // 0x2ec768: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ec768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ec76c:
    // 0x2ec76c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2ec76cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ec770:
    // 0x2ec770: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ec770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ec774:
    // 0x2ec774: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ec774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ec778:
    // 0x2ec778: 0x3e00008  jr          $ra
label_2ec77c:
    if (ctx->pc == 0x2EC77Cu) {
        ctx->pc = 0x2EC77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC778u;
        // 0x2ec77c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC780u;
        goto label_fallthrough_0x2ec778;
    }
    ctx->pc = 0x2EC778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC778u;
        // 0x2ec77c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ec778:
    ctx->pc = 0x2EC780u;
}
