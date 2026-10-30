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

// Function: sub_003EA530
// Address: 0x3ea530 - 0x3ea7b0
void sub_003EA530_0x3ea530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EA530_0x3ea530");
#endif

    switch (ctx->pc) {
        case 0x3ea530u: goto label_3ea530;
        case 0x3ea534u: goto label_3ea534;
        case 0x3ea538u: goto label_3ea538;
        case 0x3ea53cu: goto label_3ea53c;
        case 0x3ea540u: goto label_3ea540;
        case 0x3ea544u: goto label_3ea544;
        case 0x3ea548u: goto label_3ea548;
        case 0x3ea54cu: goto label_3ea54c;
        case 0x3ea550u: goto label_3ea550;
        case 0x3ea554u: goto label_3ea554;
        case 0x3ea558u: goto label_3ea558;
        case 0x3ea55cu: goto label_3ea55c;
        case 0x3ea560u: goto label_3ea560;
        case 0x3ea564u: goto label_3ea564;
        case 0x3ea568u: goto label_3ea568;
        case 0x3ea56cu: goto label_3ea56c;
        case 0x3ea570u: goto label_3ea570;
        case 0x3ea574u: goto label_3ea574;
        case 0x3ea578u: goto label_3ea578;
        case 0x3ea57cu: goto label_3ea57c;
        case 0x3ea580u: goto label_3ea580;
        case 0x3ea584u: goto label_3ea584;
        case 0x3ea588u: goto label_3ea588;
        case 0x3ea58cu: goto label_3ea58c;
        case 0x3ea590u: goto label_3ea590;
        case 0x3ea594u: goto label_3ea594;
        case 0x3ea598u: goto label_3ea598;
        case 0x3ea59cu: goto label_3ea59c;
        case 0x3ea5a0u: goto label_3ea5a0;
        case 0x3ea5a4u: goto label_3ea5a4;
        case 0x3ea5a8u: goto label_3ea5a8;
        case 0x3ea5acu: goto label_3ea5ac;
        case 0x3ea5b0u: goto label_3ea5b0;
        case 0x3ea5b4u: goto label_3ea5b4;
        case 0x3ea5b8u: goto label_3ea5b8;
        case 0x3ea5bcu: goto label_3ea5bc;
        case 0x3ea5c0u: goto label_3ea5c0;
        case 0x3ea5c4u: goto label_3ea5c4;
        case 0x3ea5c8u: goto label_3ea5c8;
        case 0x3ea5ccu: goto label_3ea5cc;
        case 0x3ea5d0u: goto label_3ea5d0;
        case 0x3ea5d4u: goto label_3ea5d4;
        case 0x3ea5d8u: goto label_3ea5d8;
        case 0x3ea5dcu: goto label_3ea5dc;
        case 0x3ea5e0u: goto label_3ea5e0;
        case 0x3ea5e4u: goto label_3ea5e4;
        case 0x3ea5e8u: goto label_3ea5e8;
        case 0x3ea5ecu: goto label_3ea5ec;
        case 0x3ea5f0u: goto label_3ea5f0;
        case 0x3ea5f4u: goto label_3ea5f4;
        case 0x3ea5f8u: goto label_3ea5f8;
        case 0x3ea5fcu: goto label_3ea5fc;
        case 0x3ea600u: goto label_3ea600;
        case 0x3ea604u: goto label_3ea604;
        case 0x3ea608u: goto label_3ea608;
        case 0x3ea60cu: goto label_3ea60c;
        case 0x3ea610u: goto label_3ea610;
        case 0x3ea614u: goto label_3ea614;
        case 0x3ea618u: goto label_3ea618;
        case 0x3ea61cu: goto label_3ea61c;
        case 0x3ea620u: goto label_3ea620;
        case 0x3ea624u: goto label_3ea624;
        case 0x3ea628u: goto label_3ea628;
        case 0x3ea62cu: goto label_3ea62c;
        case 0x3ea630u: goto label_3ea630;
        case 0x3ea634u: goto label_3ea634;
        case 0x3ea638u: goto label_3ea638;
        case 0x3ea63cu: goto label_3ea63c;
        case 0x3ea640u: goto label_3ea640;
        case 0x3ea644u: goto label_3ea644;
        case 0x3ea648u: goto label_3ea648;
        case 0x3ea64cu: goto label_3ea64c;
        case 0x3ea650u: goto label_3ea650;
        case 0x3ea654u: goto label_3ea654;
        case 0x3ea658u: goto label_3ea658;
        case 0x3ea65cu: goto label_3ea65c;
        case 0x3ea660u: goto label_3ea660;
        case 0x3ea664u: goto label_3ea664;
        case 0x3ea668u: goto label_3ea668;
        case 0x3ea66cu: goto label_3ea66c;
        case 0x3ea670u: goto label_3ea670;
        case 0x3ea674u: goto label_3ea674;
        case 0x3ea678u: goto label_3ea678;
        case 0x3ea67cu: goto label_3ea67c;
        case 0x3ea680u: goto label_3ea680;
        case 0x3ea684u: goto label_3ea684;
        case 0x3ea688u: goto label_3ea688;
        case 0x3ea68cu: goto label_3ea68c;
        case 0x3ea690u: goto label_3ea690;
        case 0x3ea694u: goto label_3ea694;
        case 0x3ea698u: goto label_3ea698;
        case 0x3ea69cu: goto label_3ea69c;
        case 0x3ea6a0u: goto label_3ea6a0;
        case 0x3ea6a4u: goto label_3ea6a4;
        case 0x3ea6a8u: goto label_3ea6a8;
        case 0x3ea6acu: goto label_3ea6ac;
        case 0x3ea6b0u: goto label_3ea6b0;
        case 0x3ea6b4u: goto label_3ea6b4;
        case 0x3ea6b8u: goto label_3ea6b8;
        case 0x3ea6bcu: goto label_3ea6bc;
        case 0x3ea6c0u: goto label_3ea6c0;
        case 0x3ea6c4u: goto label_3ea6c4;
        case 0x3ea6c8u: goto label_3ea6c8;
        case 0x3ea6ccu: goto label_3ea6cc;
        case 0x3ea6d0u: goto label_3ea6d0;
        case 0x3ea6d4u: goto label_3ea6d4;
        case 0x3ea6d8u: goto label_3ea6d8;
        case 0x3ea6dcu: goto label_3ea6dc;
        case 0x3ea6e0u: goto label_3ea6e0;
        case 0x3ea6e4u: goto label_3ea6e4;
        case 0x3ea6e8u: goto label_3ea6e8;
        case 0x3ea6ecu: goto label_3ea6ec;
        case 0x3ea6f0u: goto label_3ea6f0;
        case 0x3ea6f4u: goto label_3ea6f4;
        case 0x3ea6f8u: goto label_3ea6f8;
        case 0x3ea6fcu: goto label_3ea6fc;
        case 0x3ea700u: goto label_3ea700;
        case 0x3ea704u: goto label_3ea704;
        case 0x3ea708u: goto label_3ea708;
        case 0x3ea70cu: goto label_3ea70c;
        case 0x3ea710u: goto label_3ea710;
        case 0x3ea714u: goto label_3ea714;
        case 0x3ea718u: goto label_3ea718;
        case 0x3ea71cu: goto label_3ea71c;
        case 0x3ea720u: goto label_3ea720;
        case 0x3ea724u: goto label_3ea724;
        case 0x3ea728u: goto label_3ea728;
        case 0x3ea72cu: goto label_3ea72c;
        case 0x3ea730u: goto label_3ea730;
        case 0x3ea734u: goto label_3ea734;
        case 0x3ea738u: goto label_3ea738;
        case 0x3ea73cu: goto label_3ea73c;
        case 0x3ea740u: goto label_3ea740;
        case 0x3ea744u: goto label_3ea744;
        case 0x3ea748u: goto label_3ea748;
        case 0x3ea74cu: goto label_3ea74c;
        case 0x3ea750u: goto label_3ea750;
        case 0x3ea754u: goto label_3ea754;
        case 0x3ea758u: goto label_3ea758;
        case 0x3ea75cu: goto label_3ea75c;
        case 0x3ea760u: goto label_3ea760;
        case 0x3ea764u: goto label_3ea764;
        case 0x3ea768u: goto label_3ea768;
        case 0x3ea76cu: goto label_3ea76c;
        case 0x3ea770u: goto label_3ea770;
        case 0x3ea774u: goto label_3ea774;
        case 0x3ea778u: goto label_3ea778;
        case 0x3ea77cu: goto label_3ea77c;
        case 0x3ea780u: goto label_3ea780;
        case 0x3ea784u: goto label_3ea784;
        case 0x3ea788u: goto label_3ea788;
        case 0x3ea78cu: goto label_3ea78c;
        case 0x3ea790u: goto label_3ea790;
        case 0x3ea794u: goto label_3ea794;
        case 0x3ea798u: goto label_3ea798;
        case 0x3ea79cu: goto label_3ea79c;
        case 0x3ea7a0u: goto label_3ea7a0;
        case 0x3ea7a4u: goto label_3ea7a4;
        case 0x3ea7a8u: goto label_3ea7a8;
        case 0x3ea7acu: goto label_3ea7ac;
        default: break;
    }

    ctx->pc = 0x3ea530u;

label_3ea530:
    // 0x3ea530: 0x27bdfb60  addiu       $sp, $sp, -0x4A0
    ctx->pc = 0x3ea530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966112));
label_3ea534:
    // 0x3ea534: 0x7fb10480  sq          $s1, 0x480($sp)
    ctx->pc = 0x3ea534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 17));
label_3ea538:
    // 0x3ea538: 0x7fb20470  sq          $s2, 0x470($sp)
    ctx->pc = 0x3ea538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 18));
label_3ea53c:
    // 0x3ea53c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ea53cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ea540:
    // 0x3ea540: 0x7fb00490  sq          $s0, 0x490($sp)
    ctx->pc = 0x3ea540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 16));
label_3ea544:
    // 0x3ea544: 0x7fb30460  sq          $s3, 0x460($sp)
    ctx->pc = 0x3ea544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 19));
label_3ea548:
    // 0x3ea548: 0xffbf0450  sd          $ra, 0x450($sp)
    ctx->pc = 0x3ea548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 31));
label_3ea54c:
    // 0x3ea54c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ea54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea550:
    // 0x3ea550: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ea550u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ea554:
    // 0x3ea554: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ea554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ea558:
    // 0x3ea558: 0x40f809  jalr        $v0
label_3ea55c:
    if (ctx->pc == 0x3EA55Cu) {
        ctx->pc = 0x3EA55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA558u;
        // 0x3ea55c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA560u;
        goto label_3ea560;
    }
    ctx->pc = 0x3EA558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EA560u);
        ctx->pc = 0x3EA55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA558u;
        // 0x3ea55c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA558u, 0x3EA560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA560u;
label_3ea560:
    // 0x3ea560: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3ea560u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ea564:
    // 0x3ea564: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3ea564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ea568:
    // 0x3ea568: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ea568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ea56c:
    // 0x3ea56c: 0x14620079  bne         $v1, $v0, . + 4 + (0x79 << 2)
label_3ea570:
    if (ctx->pc == 0x3EA570u) {
        ctx->pc = 0x3EA570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA56Cu;
        // 0x3ea570: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA574u;
        goto label_3ea574;
    }
    ctx->pc = 0x3EA56Cu;
    {
        const bool branch_taken_0x3ea56c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EA570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA56Cu;
        // 0x3ea570: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea56c) {
            ctx->pc = 0x3EA754u;
            goto label_3ea754;
        }
    }
    ctx->pc = 0x3EA574u;
label_3ea574:
    // 0x3ea574: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ea574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ea578:
    // 0x3ea578: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3ea578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3ea57c:
    // 0x3ea57c: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x3ea57cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3ea580:
    // 0x3ea580: 0x27b30410  addiu       $s3, $sp, 0x410
    ctx->pc = 0x3ea580u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3ea584:
    // 0x3ea584: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3ea584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ea588:
    // 0x3ea588: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ea588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3ea58c:
    // 0x3ea58c: 0x0  nop
    ctx->pc = 0x3ea58cu;
    // NOP
label_3ea590:
    // 0x3ea590: 0x0  nop
    ctx->pc = 0x3ea590u;
    // NOP
label_3ea594:
    // 0x3ea594: 0x0  nop
    ctx->pc = 0x3ea594u;
    // NOP
label_3ea598:
    // 0x3ea598: 0x0  nop
    ctx->pc = 0x3ea598u;
    // NOP
label_3ea59c:
    // 0x3ea59c: 0x0  nop
    ctx->pc = 0x3ea59cu;
    // NOP
label_3ea5a0:
    // 0x3ea5a0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3ea5a4:
    if (ctx->pc == 0x3EA5A4u) {
        ctx->pc = 0x3EA5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA5A0u;
        // 0x3ea5a4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA5A8u;
        goto label_3ea5a8;
    }
    ctx->pc = 0x3EA5A0u;
    {
        const bool branch_taken_0x3ea5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EA5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA5A0u;
        // 0x3ea5a4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea5a0) {
            ctx->pc = 0x3EA590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea590;
        }
    }
    ctx->pc = 0x3EA5A8u;
label_3ea5a8:
    // 0x3ea5a8: 0xc138ddc  jal         func_4E3770
label_3ea5ac:
    if (ctx->pc == 0x3EA5ACu) {
        ctx->pc = 0x3EA5B0u;
        goto label_3ea5b0;
    }
    ctx->pc = 0x3EA5A8u;
    SET_GPR_U32(ctx, 31, 0x3EA5B0u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3EA5A8u, 0x3EA5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA5B0u;
label_3ea5b0:
    // 0x3ea5b0: 0x8e470020  lw          $a3, 0x20($s2)
    ctx->pc = 0x3ea5b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3ea5b4:
    // 0x3ea5b4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3ea5b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ea5b8:
    // 0x3ea5b8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x3ea5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3ea5bc:
    // 0x3ea5bc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3ea5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3ea5c0:
    // 0x3ea5c0: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3ea5c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3ea5c4:
    // 0x3ea5c4: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3ea5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3ea5c8:
    // 0x3ea5c8: 0x60f809  jalr        $v1
label_3ea5cc:
    if (ctx->pc == 0x3EA5CCu) {
        ctx->pc = 0x3EA5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA5C8u;
        // 0x3ea5cc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA5D0u;
        goto label_3ea5d0;
    }
    ctx->pc = 0x3EA5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3EA5D0u);
        ctx->pc = 0x3EA5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA5C8u;
        // 0x3ea5cc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA5C8u, 0x3EA5D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA5D0u;
label_3ea5d0:
    // 0x3ea5d0: 0x8e470024  lw          $a3, 0x24($s2)
    ctx->pc = 0x3ea5d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3ea5d4:
    // 0x3ea5d4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3ea5d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ea5d8:
    // 0x3ea5d8: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x3ea5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_3ea5dc:
    // 0x3ea5dc: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x3ea5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3ea5e0:
    // 0x3ea5e0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3ea5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3ea5e4:
    // 0x3ea5e4: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3ea5e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3ea5e8:
    // 0x3ea5e8: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3ea5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3ea5ec:
    // 0x3ea5ec: 0x60f809  jalr        $v1
label_3ea5f0:
    if (ctx->pc == 0x3EA5F0u) {
        ctx->pc = 0x3EA5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA5ECu;
        // 0x3ea5f0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA5F4u;
        goto label_3ea5f4;
    }
    ctx->pc = 0x3EA5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3EA5F4u);
        ctx->pc = 0x3EA5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA5ECu;
        // 0x3ea5f0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA5ECu, 0x3EA5F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA5F4u;
label_3ea5f4:
    // 0x3ea5f4: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x3ea5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_3ea5f8:
    // 0x3ea5f8: 0xc0e9168  jal         func_3A45A0
label_3ea5fc:
    if (ctx->pc == 0x3EA5FCu) {
        ctx->pc = 0x3EA5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA5F8u;
        // 0x3ea5fc: 0x8e2400c4  lw          $a0, 0xC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA600u;
        goto label_3ea600;
    }
    ctx->pc = 0x3EA5F8u;
    SET_GPR_U32(ctx, 31, 0x3EA600u);
    ctx->pc = 0x3EA5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA5F8u;
    // 0x3ea5fc: 0x8e2400c4  lw          $a0, 0xC4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A45A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A45A0u, 0x3EA5F8u, 0x3EA600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA600u;
label_3ea600:
    // 0x3ea600: 0x3c05c727  lui         $a1, 0xC727
    ctx->pc = 0x3ea600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50983 << 16));
label_3ea604:
    // 0x3ea604: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ea604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ea608:
    // 0x3ea608: 0xc0e9132  jal         func_3A44C8
label_3ea60c:
    if (ctx->pc == 0x3EA60Cu) {
        ctx->pc = 0x3EA60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA608u;
        // 0x3ea60c: 0x34a5685b  ori         $a1, $a1, 0x685B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26715);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA610u;
        goto label_3ea610;
    }
    ctx->pc = 0x3EA608u;
    SET_GPR_U32(ctx, 31, 0x3EA610u);
    ctx->pc = 0x3EA60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA608u;
    // 0x3ea60c: 0x34a5685b  ori         $a1, $a1, 0x685B (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26715);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3EA608u, 0x3EA610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA610u;
label_3ea610:
    // 0x3ea610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ea610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ea614:
    // 0x3ea614: 0xc0e94d0  jal         func_3A5340
label_3ea618:
    if (ctx->pc == 0x3EA618u) {
        ctx->pc = 0x3EA618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA614u;
        // 0x3ea618: 0xae2200c4  sw          $v0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA61Cu;
        goto label_3ea61c;
    }
    ctx->pc = 0x3EA614u;
    SET_GPR_U32(ctx, 31, 0x3EA61Cu);
    ctx->pc = 0x3EA618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA614u;
    // 0x3ea618: 0xae2200c4  sw          $v0, 0xC4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5340u, 0x3EA614u, 0x3EA61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA61Cu;
label_3ea61c:
    // 0x3ea61c: 0x7a230010  lq          $v1, 0x10($s1)
    ctx->pc = 0x3ea61cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3ea620:
    // 0x3ea620: 0x3c04f164  lui         $a0, 0xF164
    ctx->pc = 0x3ea620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61796 << 16));
label_3ea624:
    // 0x3ea624: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3ea624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ea628:
    // 0x3ea628: 0x3484dfe0  ori         $a0, $a0, 0xDFE0
    ctx->pc = 0x3ea628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)57312);
label_3ea62c:
    // 0x3ea62c: 0xc045c8e  jal         func_117238
label_3ea630:
    if (ctx->pc == 0x3EA630u) {
        ctx->pc = 0x3EA630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA62Cu;
        // 0x3ea630: 0x7fa30410  sq          $v1, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA634u;
        goto label_3ea634;
    }
    ctx->pc = 0x3EA62Cu;
    SET_GPR_U32(ctx, 31, 0x3EA634u);
    ctx->pc = 0x3EA630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA62Cu;
    // 0x3ea630: 0x7fa30410  sq          $v1, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117238u, 0x3EA62Cu, 0x3EA634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA634u;
label_3ea634:
    // 0x3ea634: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3ea634u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3ea638:
    // 0x3ea638: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3ea638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3ea63c:
    // 0x3ea63c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3ea63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3ea640:
    // 0x3ea640: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3ea640u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3ea644:
    // 0x3ea644: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ea644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ea648:
    // 0x3ea648: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3ea648u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3ea64c:
    // 0x3ea64c: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3ea64cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3ea650:
    // 0x3ea650: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3ea650u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3ea654:
    // 0x3ea654: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3ea654u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3ea658:
    // 0x3ea658: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3ea658u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3ea65c:
    // 0x3ea65c: 0x4a0003bf  vwaitq
    ctx->pc = 0x3ea65cu;
    // VWAITQ (Q already resolved in this runtime)
label_3ea660:
    // 0x3ea660: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3ea660u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3ea664:
    // 0x3ea664: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3ea664u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3ea668:
    // 0x3ea668: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x3ea668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_3ea66c:
    // 0x3ea66c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ea66cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ea670:
    // 0x3ea670: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3ea670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3ea674:
    // 0x3ea674: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3ea674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3ea678:
    // 0x3ea678: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3ea678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3ea67c:
    // 0x3ea67c: 0xc0cd518  jal         func_335460
label_3ea680:
    if (ctx->pc == 0x3EA680u) {
        ctx->pc = 0x3EA680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA67Cu;
        // 0x3ea680: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA684u;
        goto label_3ea684;
    }
    ctx->pc = 0x3EA67Cu;
    SET_GPR_U32(ctx, 31, 0x3EA684u);
    ctx->pc = 0x3EA680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA67Cu;
    // 0x3ea680: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3EA67Cu, 0x3EA684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA684u;
label_3ea684:
    // 0x3ea684: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3ea684u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3ea688:
    // 0x3ea688: 0x27a40430  addiu       $a0, $sp, 0x430
    ctx->pc = 0x3ea688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3ea68c:
    // 0x3ea68c: 0xc136b24  jal         func_4DAC90
label_3ea690:
    if (ctx->pc == 0x3EA690u) {
        ctx->pc = 0x3EA690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA68Cu;
        // 0x3ea690: 0x27a50420  addiu       $a1, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA694u;
        goto label_3ea694;
    }
    ctx->pc = 0x3EA68Cu;
    SET_GPR_U32(ctx, 31, 0x3EA694u);
    ctx->pc = 0x3EA690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA68Cu;
    // 0x3ea690: 0x27a50420  addiu       $a1, $sp, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3EA68Cu, 0x3EA694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA694u;
label_3ea694:
    // 0x3ea694: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3ea694u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3ea698:
    // 0x3ea698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ea698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ea69c:
    // 0x3ea69c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3ea69cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ea6a0:
    // 0x3ea6a0: 0xc0f1778  jal         func_3C5DE0
label_3ea6a4:
    if (ctx->pc == 0x3EA6A4u) {
        ctx->pc = 0x3EA6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA6A0u;
        // 0x3ea6a4: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA6A8u;
        goto label_3ea6a8;
    }
    ctx->pc = 0x3EA6A0u;
    SET_GPR_U32(ctx, 31, 0x3EA6A8u);
    ctx->pc = 0x3EA6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA6A0u;
    // 0x3ea6a4: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5DE0u, 0x3EA6A0u, 0x3EA6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA6A8u;
label_3ea6a8:
    // 0x3ea6a8: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x3ea6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
label_3ea6ac:
    // 0x3ea6ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ea6acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ea6b0:
    // 0x3ea6b0: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3ea6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3ea6b4:
    // 0x3ea6b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ea6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ea6b8:
    // 0x3ea6b8: 0xc0f15f6  jal         func_3C57D8
label_3ea6bc:
    if (ctx->pc == 0x3EA6BCu) {
        ctx->pc = 0x3EA6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA6B8u;
        // 0x3ea6bc: 0x34a56994  ori         $a1, $a1, 0x6994 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27028);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA6C0u;
        goto label_3ea6c0;
    }
    ctx->pc = 0x3EA6B8u;
    SET_GPR_U32(ctx, 31, 0x3EA6C0u);
    ctx->pc = 0x3EA6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA6B8u;
    // 0x3ea6bc: 0x34a56994  ori         $a1, $a1, 0x6994 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27028);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3EA6B8u, 0x3EA6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA6C0u;
label_3ea6c0:
    // 0x3ea6c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ea6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ea6c4:
    // 0x3ea6c4: 0xc0e92f4  jal         func_3A4BD0
label_3ea6c8:
    if (ctx->pc == 0x3EA6C8u) {
        ctx->pc = 0x3EA6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA6C4u;
        // 0x3ea6c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA6CCu;
        goto label_3ea6cc;
    }
    ctx->pc = 0x3EA6C4u;
    SET_GPR_U32(ctx, 31, 0x3EA6CCu);
    ctx->pc = 0x3EA6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA6C4u;
    // 0x3ea6c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4BD0u, 0x3EA6C4u, 0x3EA6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA6CCu;
label_3ea6cc:
    // 0x3ea6cc: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3ea6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_3ea6d0:
    // 0x3ea6d0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3ea6d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3ea6d4:
    // 0x3ea6d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ea6d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ea6d8:
    // 0x3ea6d8: 0x3c064a48  lui         $a2, 0x4A48
    ctx->pc = 0x3ea6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)19016 << 16));
label_3ea6dc:
    // 0x3ea6dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3ea6dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ea6e0:
    // 0x3ea6e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ea6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ea6e4:
    // 0x3ea6e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3ea6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ea6e8:
    // 0x3ea6e8: 0xc0f1658  jal         func_3C5960
label_3ea6ec:
    if (ctx->pc == 0x3EA6ECu) {
        ctx->pc = 0x3EA6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA6E8u;
        // 0x3ea6ec: 0x34c64220  ori         $a2, $a2, 0x4220 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16928);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA6F0u;
        goto label_3ea6f0;
    }
    ctx->pc = 0x3EA6E8u;
    SET_GPR_U32(ctx, 31, 0x3EA6F0u);
    ctx->pc = 0x3EA6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA6E8u;
    // 0x3ea6ec: 0x34c64220  ori         $a2, $a2, 0x4220 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16928);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5960u, 0x3EA6E8u, 0x3EA6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA6F0u;
label_3ea6f0:
    // 0x3ea6f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3ea6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3ea6f4:
    // 0x3ea6f4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3ea6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ea6f8:
    // 0x3ea6f8: 0xc1073cc  jal         func_41CF30
label_3ea6fc:
    if (ctx->pc == 0x3EA6FCu) {
        ctx->pc = 0x3EA6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA6F8u;
        // 0x3ea6fc: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA700u;
        goto label_3ea700;
    }
    ctx->pc = 0x3EA6F8u;
    SET_GPR_U32(ctx, 31, 0x3EA700u);
    ctx->pc = 0x3EA6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA6F8u;
    // 0x3ea6fc: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3EA6F8u, 0x3EA700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA700u;
label_3ea700:
    // 0x3ea700: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3ea700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3ea704:
    // 0x3ea704: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_3ea708:
    if (ctx->pc == 0x3EA708u) {
        ctx->pc = 0x3EA708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA704u;
        // 0x3ea708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA70Cu;
        goto label_3ea70c;
    }
    ctx->pc = 0x3EA704u;
    {
        const bool branch_taken_0x3ea704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EA708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA704u;
        // 0x3ea708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea704) {
            ctx->pc = 0x3EA740u;
            goto label_3ea740;
        }
    }
    ctx->pc = 0x3EA70Cu;
label_3ea70c:
    // 0x3ea70c: 0xc0e8dee  jal         func_3A37B8
label_3ea710:
    if (ctx->pc == 0x3EA710u) {
        ctx->pc = 0x3EA710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA70Cu;
        // 0x3ea710: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA714u;
        goto label_3ea714;
    }
    ctx->pc = 0x3EA70Cu;
    SET_GPR_U32(ctx, 31, 0x3EA714u);
    ctx->pc = 0x3EA710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA70Cu;
    // 0x3ea710: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3EA70Cu, 0x3EA714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA714u;
label_3ea714:
    // 0x3ea714: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ea714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ea718:
    // 0x3ea718: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ea718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ea71c:
    // 0x3ea71c: 0xc0e8dee  jal         func_3A37B8
label_3ea720:
    if (ctx->pc == 0x3EA720u) {
        ctx->pc = 0x3EA720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA71Cu;
        // 0x3ea720: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA724u;
        goto label_3ea724;
    }
    ctx->pc = 0x3EA71Cu;
    SET_GPR_U32(ctx, 31, 0x3EA724u);
    ctx->pc = 0x3EA720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA71Cu;
    // 0x3ea720: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3EA71Cu, 0x3EA724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA724u;
label_3ea724:
    // 0x3ea724: 0x7a230010  lq          $v1, 0x10($s1)
    ctx->pc = 0x3ea724u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3ea728:
    // 0x3ea728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ea728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ea72c:
    // 0x3ea72c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3ea72cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ea730:
    // 0x3ea730: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3ea730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ea734:
    // 0x3ea734: 0xc045ca0  jal         func_117280
label_3ea738:
    if (ctx->pc == 0x3EA738u) {
        ctx->pc = 0x3EA738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA734u;
        // 0x3ea738: 0x7fa30410  sq          $v1, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA73Cu;
        goto label_3ea73c;
    }
    ctx->pc = 0x3EA734u;
    SET_GPR_U32(ctx, 31, 0x3EA73Cu);
    ctx->pc = 0x3EA738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA734u;
    // 0x3ea738: 0x7fa30410  sq          $v1, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x3EA734u, 0x3EA73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA73Cu;
label_3ea73c:
    // 0x3ea73c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ea73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ea740:
    // 0x3ea740: 0xc0e858c  jal         func_3A1630
label_3ea744:
    if (ctx->pc == 0x3EA744u) {
        ctx->pc = 0x3EA744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA740u;
        // 0x3ea744: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA748u;
        goto label_3ea748;
    }
    ctx->pc = 0x3EA740u;
    SET_GPR_U32(ctx, 31, 0x3EA748u);
    ctx->pc = 0x3EA744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA740u;
    // 0x3ea744: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3EA740u, 0x3EA748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA748u;
label_3ea748:
    // 0x3ea748: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3ea748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ea74c:
    // 0x3ea74c: 0x1000000f  b           . + 4 + (0xF << 2)
label_3ea750:
    if (ctx->pc == 0x3EA750u) {
        ctx->pc = 0x3EA750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA74Cu;
        // 0x3ea750: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA754u;
        goto label_3ea754;
    }
    ctx->pc = 0x3EA74Cu;
    {
        const bool branch_taken_0x3ea74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA74Cu;
        // 0x3ea750: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea74c) {
            ctx->pc = 0x3EA78Cu;
            goto label_3ea78c;
        }
    }
    ctx->pc = 0x3EA754u;
label_3ea754:
    // 0x3ea754: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_3ea758:
    if (ctx->pc == 0x3EA758u) {
        ctx->pc = 0x3EA758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA754u;
        // 0x3ea758: 0x7bb00490  lq          $s0, 0x490($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA75Cu;
        goto label_3ea75c;
    }
    ctx->pc = 0x3EA754u;
    {
        const bool branch_taken_0x3ea754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EA758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA754u;
        // 0x3ea758: 0x7bb00490  lq          $s0, 0x490($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea754) {
            ctx->pc = 0x3EA790u;
            goto label_3ea790;
        }
    }
    ctx->pc = 0x3EA75Cu;
label_3ea75c:
    // 0x3ea75c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3ea75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3ea760:
    // 0x3ea760: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3ea760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3ea764:
    // 0x3ea764: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3ea764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3ea768:
    // 0x3ea768: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3ea768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3ea76c:
    // 0x3ea76c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ea76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ea770:
    // 0x3ea770: 0xc0cd4ee  jal         func_3353B8
label_3ea774:
    if (ctx->pc == 0x3EA774u) {
        ctx->pc = 0x3EA774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA770u;
        // 0x3ea774: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA778u;
        goto label_3ea778;
    }
    ctx->pc = 0x3EA770u;
    SET_GPR_U32(ctx, 31, 0x3EA778u);
    ctx->pc = 0x3EA774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA770u;
    // 0x3ea774: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3EA770u, 0x3EA778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA778u;
label_3ea778:
    // 0x3ea778: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3ea778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3ea77c:
    // 0x3ea77c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x3ea77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_3ea780:
    // 0x3ea780: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3ea780u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3ea784:
    // 0x3ea784: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_3ea788:
    if (ctx->pc == 0x3EA788u) {
        ctx->pc = 0x3EA788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA784u;
        // 0x3ea788: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA78Cu;
        goto label_3ea78c;
    }
    ctx->pc = 0x3EA784u;
    {
        const bool branch_taken_0x3ea784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ea784) {
            ctx->pc = 0x3EA788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA784u;
            // 0x3ea788: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA78Cu;
            goto label_3ea78c;
        }
    }
    ctx->pc = 0x3EA78Cu;
label_3ea78c:
    // 0x3ea78c: 0x7bb00490  lq          $s0, 0x490($sp)
    ctx->pc = 0x3ea78cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3ea790:
    // 0x3ea790: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ea790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ea794:
    // 0x3ea794: 0x7bb10480  lq          $s1, 0x480($sp)
    ctx->pc = 0x3ea794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3ea798:
    // 0x3ea798: 0x7bb20470  lq          $s2, 0x470($sp)
    ctx->pc = 0x3ea798u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3ea79c:
    // 0x3ea79c: 0x7bb30460  lq          $s3, 0x460($sp)
    ctx->pc = 0x3ea79cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3ea7a0:
    // 0x3ea7a0: 0xdfbf0450  ld          $ra, 0x450($sp)
    ctx->pc = 0x3ea7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
label_3ea7a4:
    // 0x3ea7a4: 0x3e00008  jr          $ra
label_3ea7a8:
    if (ctx->pc == 0x3EA7A8u) {
        ctx->pc = 0x3EA7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA7A4u;
        // 0x3ea7a8: 0x27bd04a0  addiu       $sp, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA7ACu;
        goto label_3ea7ac;
    }
    ctx->pc = 0x3EA7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EA7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA7A4u;
        // 0x3ea7a8: 0x27bd04a0  addiu       $sp, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA7A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EA7ACu;
label_3ea7ac:
    // 0x3ea7ac: 0x0  nop
    ctx->pc = 0x3ea7acu;
    // NOP
    ctx->pc = 0x3ea7b0u;
}
