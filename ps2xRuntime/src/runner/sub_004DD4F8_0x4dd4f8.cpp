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

// Function: sub_004DD4F8
// Address: 0x4dd4f8 - 0x4dd718
void sub_004DD4F8_0x4dd4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DD4F8_0x4dd4f8");
#endif

    switch (ctx->pc) {
        case 0x4dd4f8u: goto label_4dd4f8;
        case 0x4dd4fcu: goto label_4dd4fc;
        case 0x4dd500u: goto label_4dd500;
        case 0x4dd504u: goto label_4dd504;
        case 0x4dd508u: goto label_4dd508;
        case 0x4dd50cu: goto label_4dd50c;
        case 0x4dd510u: goto label_4dd510;
        case 0x4dd514u: goto label_4dd514;
        case 0x4dd518u: goto label_4dd518;
        case 0x4dd51cu: goto label_4dd51c;
        case 0x4dd520u: goto label_4dd520;
        case 0x4dd524u: goto label_4dd524;
        case 0x4dd528u: goto label_4dd528;
        case 0x4dd52cu: goto label_4dd52c;
        case 0x4dd530u: goto label_4dd530;
        case 0x4dd534u: goto label_4dd534;
        case 0x4dd538u: goto label_4dd538;
        case 0x4dd53cu: goto label_4dd53c;
        case 0x4dd540u: goto label_4dd540;
        case 0x4dd544u: goto label_4dd544;
        case 0x4dd548u: goto label_4dd548;
        case 0x4dd54cu: goto label_4dd54c;
        case 0x4dd550u: goto label_4dd550;
        case 0x4dd554u: goto label_4dd554;
        case 0x4dd558u: goto label_4dd558;
        case 0x4dd55cu: goto label_4dd55c;
        case 0x4dd560u: goto label_4dd560;
        case 0x4dd564u: goto label_4dd564;
        case 0x4dd568u: goto label_4dd568;
        case 0x4dd56cu: goto label_4dd56c;
        case 0x4dd570u: goto label_4dd570;
        case 0x4dd574u: goto label_4dd574;
        case 0x4dd578u: goto label_4dd578;
        case 0x4dd57cu: goto label_4dd57c;
        case 0x4dd580u: goto label_4dd580;
        case 0x4dd584u: goto label_4dd584;
        case 0x4dd588u: goto label_4dd588;
        case 0x4dd58cu: goto label_4dd58c;
        case 0x4dd590u: goto label_4dd590;
        case 0x4dd594u: goto label_4dd594;
        case 0x4dd598u: goto label_4dd598;
        case 0x4dd59cu: goto label_4dd59c;
        case 0x4dd5a0u: goto label_4dd5a0;
        case 0x4dd5a4u: goto label_4dd5a4;
        case 0x4dd5a8u: goto label_4dd5a8;
        case 0x4dd5acu: goto label_4dd5ac;
        case 0x4dd5b0u: goto label_4dd5b0;
        case 0x4dd5b4u: goto label_4dd5b4;
        case 0x4dd5b8u: goto label_4dd5b8;
        case 0x4dd5bcu: goto label_4dd5bc;
        case 0x4dd5c0u: goto label_4dd5c0;
        case 0x4dd5c4u: goto label_4dd5c4;
        case 0x4dd5c8u: goto label_4dd5c8;
        case 0x4dd5ccu: goto label_4dd5cc;
        case 0x4dd5d0u: goto label_4dd5d0;
        case 0x4dd5d4u: goto label_4dd5d4;
        case 0x4dd5d8u: goto label_4dd5d8;
        case 0x4dd5dcu: goto label_4dd5dc;
        case 0x4dd5e0u: goto label_4dd5e0;
        case 0x4dd5e4u: goto label_4dd5e4;
        case 0x4dd5e8u: goto label_4dd5e8;
        case 0x4dd5ecu: goto label_4dd5ec;
        case 0x4dd5f0u: goto label_4dd5f0;
        case 0x4dd5f4u: goto label_4dd5f4;
        case 0x4dd5f8u: goto label_4dd5f8;
        case 0x4dd5fcu: goto label_4dd5fc;
        case 0x4dd600u: goto label_4dd600;
        case 0x4dd604u: goto label_4dd604;
        case 0x4dd608u: goto label_4dd608;
        case 0x4dd60cu: goto label_4dd60c;
        case 0x4dd610u: goto label_4dd610;
        case 0x4dd614u: goto label_4dd614;
        case 0x4dd618u: goto label_4dd618;
        case 0x4dd61cu: goto label_4dd61c;
        case 0x4dd620u: goto label_4dd620;
        case 0x4dd624u: goto label_4dd624;
        case 0x4dd628u: goto label_4dd628;
        case 0x4dd62cu: goto label_4dd62c;
        case 0x4dd630u: goto label_4dd630;
        case 0x4dd634u: goto label_4dd634;
        case 0x4dd638u: goto label_4dd638;
        case 0x4dd63cu: goto label_4dd63c;
        case 0x4dd640u: goto label_4dd640;
        case 0x4dd644u: goto label_4dd644;
        case 0x4dd648u: goto label_4dd648;
        case 0x4dd64cu: goto label_4dd64c;
        case 0x4dd650u: goto label_4dd650;
        case 0x4dd654u: goto label_4dd654;
        case 0x4dd658u: goto label_4dd658;
        case 0x4dd65cu: goto label_4dd65c;
        case 0x4dd660u: goto label_4dd660;
        case 0x4dd664u: goto label_4dd664;
        case 0x4dd668u: goto label_4dd668;
        case 0x4dd66cu: goto label_4dd66c;
        case 0x4dd670u: goto label_4dd670;
        case 0x4dd674u: goto label_4dd674;
        case 0x4dd678u: goto label_4dd678;
        case 0x4dd67cu: goto label_4dd67c;
        case 0x4dd680u: goto label_4dd680;
        case 0x4dd684u: goto label_4dd684;
        case 0x4dd688u: goto label_4dd688;
        case 0x4dd68cu: goto label_4dd68c;
        case 0x4dd690u: goto label_4dd690;
        case 0x4dd694u: goto label_4dd694;
        case 0x4dd698u: goto label_4dd698;
        case 0x4dd69cu: goto label_4dd69c;
        case 0x4dd6a0u: goto label_4dd6a0;
        case 0x4dd6a4u: goto label_4dd6a4;
        case 0x4dd6a8u: goto label_4dd6a8;
        case 0x4dd6acu: goto label_4dd6ac;
        case 0x4dd6b0u: goto label_4dd6b0;
        case 0x4dd6b4u: goto label_4dd6b4;
        case 0x4dd6b8u: goto label_4dd6b8;
        case 0x4dd6bcu: goto label_4dd6bc;
        case 0x4dd6c0u: goto label_4dd6c0;
        case 0x4dd6c4u: goto label_4dd6c4;
        case 0x4dd6c8u: goto label_4dd6c8;
        case 0x4dd6ccu: goto label_4dd6cc;
        case 0x4dd6d0u: goto label_4dd6d0;
        case 0x4dd6d4u: goto label_4dd6d4;
        case 0x4dd6d8u: goto label_4dd6d8;
        case 0x4dd6dcu: goto label_4dd6dc;
        case 0x4dd6e0u: goto label_4dd6e0;
        case 0x4dd6e4u: goto label_4dd6e4;
        case 0x4dd6e8u: goto label_4dd6e8;
        case 0x4dd6ecu: goto label_4dd6ec;
        case 0x4dd6f0u: goto label_4dd6f0;
        case 0x4dd6f4u: goto label_4dd6f4;
        case 0x4dd6f8u: goto label_4dd6f8;
        case 0x4dd6fcu: goto label_4dd6fc;
        case 0x4dd700u: goto label_4dd700;
        case 0x4dd704u: goto label_4dd704;
        case 0x4dd708u: goto label_4dd708;
        case 0x4dd70cu: goto label_4dd70c;
        case 0x4dd710u: goto label_4dd710;
        case 0x4dd714u: goto label_4dd714;
        default: break;
    }

    ctx->pc = 0x4dd4f8u;

label_4dd4f8:
    // 0x4dd4f8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4dd4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_4dd4fc:
    // 0x4dd4fc: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x4dd4fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4dd500:
    // 0x4dd500: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x4dd500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_4dd504:
    // 0x4dd504: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x4dd504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_4dd508:
    // 0x4dd508: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x4dd508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_4dd50c:
    // 0x4dd50c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x4dd50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_4dd510:
    // 0x4dd510: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4dd510u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dd514:
    // 0x4dd514: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x4dd514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_4dd518:
    // 0x4dd518: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x4dd518u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4dd51c:
    // 0x4dd51c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4dd51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4dd520:
    // 0x4dd520: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x4dd520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_4dd524:
    // 0x4dd524: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x4dd524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_4dd528:
    // 0x4dd528: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4dd528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4dd52c:
    // 0x4dd52c: 0x8e4a0028  lw          $t2, 0x28($s2)
    ctx->pc = 0x4dd52cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_4dd530:
    // 0x4dd530: 0x8e470018  lw          $a3, 0x18($s2)
    ctx->pc = 0x4dd530u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_4dd534:
    // 0x4dd534: 0x8e490008  lw          $t1, 0x8($s2)
    ctx->pc = 0x4dd534u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4dd538:
    // 0x4dd538: 0x1471023  subu        $v0, $t2, $a3
    ctx->pc = 0x4dd538u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_4dd53c:
    // 0x4dd53c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4dd53cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4dd540:
    // 0x4dd540: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x4dd540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4dd544:
    // 0x4dd544: 0x2088821  addu        $s1, $s0, $t0
    ctx->pc = 0x4dd544u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_4dd548:
    // 0x4dd548: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x4dd548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_4dd54c:
    // 0x4dd54c: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x4dd54cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_4dd550:
    // 0x4dd550: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4dd554:
    if (ctx->pc == 0x4DD554u) {
        ctx->pc = 0x4DD554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD550u;
        // 0x4dd554: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD558u;
        goto label_4dd558;
    }
    ctx->pc = 0x4DD550u;
    {
        const bool branch_taken_0x4dd550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD550u;
        // 0x4dd554: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd550) {
            ctx->pc = 0x4DD5CCu;
            goto label_4dd5cc;
        }
    }
    ctx->pc = 0x4DD558u;
label_4dd558:
    // 0x4dd558: 0x1311023  subu        $v0, $t1, $s1
    ctx->pc = 0x4dd558u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
label_4dd55c:
    // 0x4dd55c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4dd55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4dd560:
    // 0x4dd560: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x4dd560u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_4dd564:
    // 0x4dd564: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4dd564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4dd568:
    // 0x4dd568: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_4dd56c:
    if (ctx->pc == 0x4DD56Cu) {
        ctx->pc = 0x4DD56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD568u;
        // 0x4dd56c: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD570u;
        goto label_4dd570;
    }
    ctx->pc = 0x4DD568u;
    {
        const bool branch_taken_0x4dd568 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD568u;
        // 0x4dd56c: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd568) {
            ctx->pc = 0x4DD578u;
            goto label_4dd578;
        }
    }
    ctx->pc = 0x4DD570u;
label_4dd570:
    // 0x4dd570: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x4dd570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_4dd574:
    // 0x4dd574: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4dd574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4dd578:
    // 0x4dd578: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4dd578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dd57c:
    // 0x4dd57c: 0x227102b  sltu        $v0, $s1, $a3
    ctx->pc = 0x4dd57cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_4dd580:
    // 0x4dd580: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4dd584:
    if (ctx->pc == 0x4DD584u) {
        ctx->pc = 0x4DD584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD580u;
        // 0x4dd584: 0x25460004  addiu       $a2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD588u;
        goto label_4dd588;
    }
    ctx->pc = 0x4DD580u;
    {
        const bool branch_taken_0x4dd580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD580u;
        // 0x4dd584: 0x25460004  addiu       $a2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd580) {
            ctx->pc = 0x4DD5A4u;
            goto label_4dd5a4;
        }
    }
    ctx->pc = 0x4DD588u;
label_4dd588:
    // 0x4dd588: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x4dd588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4dd58c:
    // 0x4dd58c: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x4dd58cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_4dd590:
    // 0x4dd590: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4dd590u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4dd594:
    // 0x4dd594: 0xc10c1bb  jal         func_4306EC
label_4dd598:
    if (ctx->pc == 0x4DD598u) {
        ctx->pc = 0x4DD598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD594u;
        // 0x4dd598: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD59Cu;
        goto label_4dd59c;
    }
    ctx->pc = 0x4DD594u;
    SET_GPR_U32(ctx, 31, 0x4DD59Cu);
    ctx->pc = 0x4DD598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD594u;
    // 0x4dd598: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4DD594u, 0x4DD59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DD59Cu;
label_4dd59c:
    // 0x4dd59c: 0x10000041  b           . + 4 + (0x41 << 2)
label_4dd5a0:
    if (ctx->pc == 0x4DD5A0u) {
        ctx->pc = 0x4DD5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD59Cu;
        // 0x4dd5a0: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD5A4u;
        goto label_4dd5a4;
    }
    ctx->pc = 0x4DD59Cu;
    {
        const bool branch_taken_0x4dd59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD59Cu;
        // 0x4dd5a0: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd59c) {
            ctx->pc = 0x4DD6A4u;
            goto label_4dd6a4;
        }
    }
    ctx->pc = 0x4DD5A4u;
label_4dd5a4:
    // 0x4dd5a4: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x4dd5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4dd5a8:
    // 0x4dd5a8: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x4dd5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_4dd5ac:
    // 0x4dd5ac: 0x2112021  addu        $a0, $s0, $s1
    ctx->pc = 0x4dd5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_4dd5b0:
    // 0x4dd5b0: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4dd5b0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4dd5b4:
    // 0x4dd5b4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x4dd5b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4dd5b8:
    // 0x4dd5b8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4dd5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4dd5bc:
    // 0x4dd5bc: 0xc10c1bb  jal         func_4306EC
label_4dd5c0:
    if (ctx->pc == 0x4DD5C0u) {
        ctx->pc = 0x4DD5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD5BCu;
        // 0x4dd5c0: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD5C4u;
        goto label_4dd5c4;
    }
    ctx->pc = 0x4DD5BCu;
    SET_GPR_U32(ctx, 31, 0x4DD5C4u);
    ctx->pc = 0x4DD5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD5BCu;
    // 0x4dd5c0: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4DD5BCu, 0x4DD5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DD5C4u;
label_4dd5c4:
    // 0x4dd5c4: 0x10000038  b           . + 4 + (0x38 << 2)
label_4dd5c8:
    if (ctx->pc == 0x4DD5C8u) {
        ctx->pc = 0x4DD5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD5C4u;
        // 0x4dd5c8: 0x2644000c  addiu       $a0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD5CCu;
        goto label_4dd5cc;
    }
    ctx->pc = 0x4DD5C4u;
    {
        const bool branch_taken_0x4dd5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD5C4u;
        // 0x4dd5c8: 0x2644000c  addiu       $a0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd5c4) {
            ctx->pc = 0x4DD6A8u;
            goto label_4dd6a8;
        }
    }
    ctx->pc = 0x4DD5CCu;
label_4dd5cc:
    // 0x4dd5cc: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x4dd5ccu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_4dd5d0:
    // 0x4dd5d0: 0x128182b  sltu        $v1, $t1, $t0
    ctx->pc = 0x4dd5d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_4dd5d4:
    // 0x4dd5d4: 0x8ee7b9c0  lw          $a3, -0x4640($s7)
    ctx->pc = 0x4dd5d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
label_4dd5d8:
    // 0x4dd5d8: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x4dd5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_4dd5dc:
    // 0x4dd5dc: 0x3a3100b  movn        $v0, $sp, $v1
    ctx->pc = 0x4dd5dcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 29));
label_4dd5e0:
    // 0x4dd5e0: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x4dd5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_4dd5e4:
    // 0x4dd5e4: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4dd5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4dd5e8:
    // 0x4dd5e8: 0x2496e600  addiu       $s6, $a0, -0x1A00
    ctx->pc = 0x4dd5e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960640));
label_4dd5ec:
    // 0x4dd5ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4dd5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4dd5f0:
    // 0x4dd5f0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4dd5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4dd5f4:
    // 0x4dd5f4: 0x84c40050  lh          $a0, 0x50($a2)
    ctx->pc = 0x4dd5f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 80)));
label_4dd5f8:
    // 0x4dd5f8: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4dd5f8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4dd5fc:
    // 0x4dd5fc: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x4dd5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_4dd600:
    // 0x4dd600: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x4dd600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_4dd604:
    // 0x4dd604: 0x24730002  addiu       $s3, $v1, 0x2
    ctx->pc = 0x4dd604u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_4dd608:
    // 0x4dd608: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x4dd608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_4dd60c:
    // 0x4dd60c: 0x24a5e5f8  addiu       $a1, $a1, -0x1A08
    ctx->pc = 0x4dd60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960632));
label_4dd610:
    // 0x4dd610: 0x254ae628  addiu       $t2, $t2, -0x19D8
    ctx->pc = 0x4dd610u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294960680));
label_4dd614:
    // 0x4dd614: 0x133080  sll         $a2, $s3, 2
    ctx->pc = 0x4dd614u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_4dd618:
    // 0x4dd618: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4dd618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4dd61c:
    // 0x4dd61c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4dd61cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4dd620:
    // 0x4dd620: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4dd620u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4dd624:
    // 0x4dd624: 0x40f809  jalr        $v0
label_4dd628:
    if (ctx->pc == 0x4DD628u) {
        ctx->pc = 0x4DD628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD624u;
        // 0x4dd628: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD62Cu;
        goto label_4dd62c;
    }
    ctx->pc = 0x4DD624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DD62Cu);
        ctx->pc = 0x4DD628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD624u;
        // 0x4dd628: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DD624u, 0x4DD62Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DD62Cu;
label_4dd62c:
    // 0x4dd62c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4dd62cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dd630:
    // 0x4dd630: 0x2711023  subu        $v0, $s3, $s1
    ctx->pc = 0x4dd630u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_4dd634:
    // 0x4dd634: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x4dd634u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_4dd638:
    // 0x4dd638: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4dd638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4dd63c:
    // 0x4dd63c: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_4dd640:
    if (ctx->pc == 0x4DD640u) {
        ctx->pc = 0x4DD640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD63Cu;
        // 0x4dd640: 0x2822021  addu        $a0, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD644u;
        goto label_4dd644;
    }
    ctx->pc = 0x4DD63Cu;
    {
        const bool branch_taken_0x4dd63c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD63Cu;
        // 0x4dd640: 0x2822021  addu        $a0, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd63c) {
            ctx->pc = 0x4DD650u;
            goto label_4dd650;
        }
    }
    ctx->pc = 0x4DD644u;
label_4dd644:
    // 0x4dd644: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4dd644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4dd648:
    // 0x4dd648: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4dd648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4dd64c:
    // 0x4dd64c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4dd64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4dd650:
    // 0x4dd650: 0x8e460028  lw          $a2, 0x28($s2)
    ctx->pc = 0x4dd650u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_4dd654:
    // 0x4dd654: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4dd654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dd658:
    // 0x4dd658: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x4dd658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_4dd65c:
    // 0x4dd65c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x4dd65cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_4dd660:
    // 0x4dd660: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x4dd660u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_4dd664:
    // 0x4dd664: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4dd664u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4dd668:
    // 0x4dd668: 0xc10c1bb  jal         func_4306EC
label_4dd66c:
    if (ctx->pc == 0x4DD66Cu) {
        ctx->pc = 0x4DD66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD668u;
        // 0x4dd66c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD670u;
        goto label_4dd670;
    }
    ctx->pc = 0x4DD668u;
    SET_GPR_U32(ctx, 31, 0x4DD670u);
    ctx->pc = 0x4DD66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD668u;
    // 0x4dd66c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4DD668u, 0x4DD670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DD670u;
label_4dd670:
    // 0x4dd670: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x4dd670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4dd674:
    // 0x4dd674: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4dd678:
    if (ctx->pc == 0x4DD678u) {
        ctx->pc = 0x4DD678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD674u;
        // 0x4dd678: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD67Cu;
        goto label_4dd67c;
    }
    ctx->pc = 0x4DD674u;
    {
        const bool branch_taken_0x4dd674 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD674u;
        // 0x4dd678: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd674) {
            ctx->pc = 0x4DD698u;
            goto label_4dd698;
        }
    }
    ctx->pc = 0x4DD67Cu;
label_4dd67c:
    // 0x4dd67c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4dd67cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4dd680:
    // 0x4dd680: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4dd680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4dd684:
    // 0x4dd684: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4dd684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4dd688:
    // 0x4dd688: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4dd688u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4dd68c:
    // 0x4dd68c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4dd68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4dd690:
    // 0x4dd690: 0x60f809  jalr        $v1
label_4dd694:
    if (ctx->pc == 0x4DD694u) {
        ctx->pc = 0x4DD694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD690u;
        // 0x4dd694: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD698u;
        goto label_4dd698;
    }
    ctx->pc = 0x4DD690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DD698u);
        ctx->pc = 0x4DD694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD690u;
        // 0x4dd694: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DD690u, 0x4DD698u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DD698u;
label_4dd698:
    // 0x4dd698: 0xae540004  sw          $s4, 0x4($s2)
    ctx->pc = 0x4dd698u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 20));
label_4dd69c:
    // 0x4dd69c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x4dd69cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4dd6a0:
    // 0x4dd6a0: 0xae530008  sw          $s3, 0x8($s2)
    ctx->pc = 0x4dd6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 19));
label_4dd6a4:
    // 0x4dd6a4: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x4dd6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_4dd6a8:
    // 0x4dd6a8: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x4dd6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4dd6ac:
    // 0x4dd6ac: 0xac91000c  sw          $s1, 0xC($a0)
    ctx->pc = 0x4dd6acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 17));
label_4dd6b0:
    // 0x4dd6b0: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x4dd6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_4dd6b4:
    // 0x4dd6b4: 0x2645001c  addiu       $a1, $s2, 0x1C
    ctx->pc = 0x4dd6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_4dd6b8:
    // 0x4dd6b8: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x4dd6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_4dd6bc:
    // 0x4dd6bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4dd6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4dd6c0:
    // 0x4dd6c0: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4dd6c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4dd6c4:
    // 0x4dd6c4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4dd6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4dd6c8:
    // 0x4dd6c8: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_4dd6cc:
    if (ctx->pc == 0x4DD6CCu) {
        ctx->pc = 0x4DD6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD6C8u;
        // 0x4dd6cc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD6D0u;
        goto label_4dd6d0;
    }
    ctx->pc = 0x4DD6C8u;
    {
        const bool branch_taken_0x4dd6c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd6c8) {
            ctx->pc = 0x4DD6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DD6C8u;
            // 0x4dd6cc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DD6D0u;
            goto label_4dd6d0;
        }
    }
    ctx->pc = 0x4DD6D0u;
label_4dd6d0:
    // 0x4dd6d0: 0x244201f8  addiu       $v0, $v0, 0x1F8
    ctx->pc = 0x4dd6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 504));
label_4dd6d4:
    // 0x4dd6d4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x4dd6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_4dd6d8:
    // 0x4dd6d8: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x4dd6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_4dd6dc:
    // 0x4dd6dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4dd6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4dd6e0:
    // 0x4dd6e0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x4dd6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_4dd6e4:
    // 0x4dd6e4: 0x244201f8  addiu       $v0, $v0, 0x1F8
    ctx->pc = 0x4dd6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 504));
label_4dd6e8:
    // 0x4dd6e8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x4dd6e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4dd6ec:
    // 0x4dd6ec: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x4dd6ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4dd6f0:
    // 0x4dd6f0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x4dd6f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4dd6f4:
    // 0x4dd6f4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x4dd6f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4dd6f8:
    // 0x4dd6f8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4dd6f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4dd6fc:
    // 0x4dd6fc: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x4dd6fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4dd700:
    // 0x4dd700: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x4dd700u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4dd704:
    // 0x4dd704: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x4dd704u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4dd708:
    // 0x4dd708: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4dd708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4dd70c:
    // 0x4dd70c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x4dd70cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_4dd710:
    // 0x4dd710: 0x3e00008  jr          $ra
label_4dd714:
    if (ctx->pc == 0x4DD714u) {
        ctx->pc = 0x4DD714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD710u;
        // 0x4dd714: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD718u;
        goto label_fallthrough_0x4dd710;
    }
    ctx->pc = 0x4DD710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DD714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD710u;
        // 0x4dd714: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DD710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4dd710:
    ctx->pc = 0x4DD718u;
}
