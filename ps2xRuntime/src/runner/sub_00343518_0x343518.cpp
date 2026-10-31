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

// Function: sub_00343518
// Address: 0x343518 - 0x343798
void sub_00343518_0x343518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343518_0x343518");
#endif

    switch (ctx->pc) {
        case 0x343518u: goto label_343518;
        case 0x34351cu: goto label_34351c;
        case 0x343520u: goto label_343520;
        case 0x343524u: goto label_343524;
        case 0x343528u: goto label_343528;
        case 0x34352cu: goto label_34352c;
        case 0x343530u: goto label_343530;
        case 0x343534u: goto label_343534;
        case 0x343538u: goto label_343538;
        case 0x34353cu: goto label_34353c;
        case 0x343540u: goto label_343540;
        case 0x343544u: goto label_343544;
        case 0x343548u: goto label_343548;
        case 0x34354cu: goto label_34354c;
        case 0x343550u: goto label_343550;
        case 0x343554u: goto label_343554;
        case 0x343558u: goto label_343558;
        case 0x34355cu: goto label_34355c;
        case 0x343560u: goto label_343560;
        case 0x343564u: goto label_343564;
        case 0x343568u: goto label_343568;
        case 0x34356cu: goto label_34356c;
        case 0x343570u: goto label_343570;
        case 0x343574u: goto label_343574;
        case 0x343578u: goto label_343578;
        case 0x34357cu: goto label_34357c;
        case 0x343580u: goto label_343580;
        case 0x343584u: goto label_343584;
        case 0x343588u: goto label_343588;
        case 0x34358cu: goto label_34358c;
        case 0x343590u: goto label_343590;
        case 0x343594u: goto label_343594;
        case 0x343598u: goto label_343598;
        case 0x34359cu: goto label_34359c;
        case 0x3435a0u: goto label_3435a0;
        case 0x3435a4u: goto label_3435a4;
        case 0x3435a8u: goto label_3435a8;
        case 0x3435acu: goto label_3435ac;
        case 0x3435b0u: goto label_3435b0;
        case 0x3435b4u: goto label_3435b4;
        case 0x3435b8u: goto label_3435b8;
        case 0x3435bcu: goto label_3435bc;
        case 0x3435c0u: goto label_3435c0;
        case 0x3435c4u: goto label_3435c4;
        case 0x3435c8u: goto label_3435c8;
        case 0x3435ccu: goto label_3435cc;
        case 0x3435d0u: goto label_3435d0;
        case 0x3435d4u: goto label_3435d4;
        case 0x3435d8u: goto label_3435d8;
        case 0x3435dcu: goto label_3435dc;
        case 0x3435e0u: goto label_3435e0;
        case 0x3435e4u: goto label_3435e4;
        case 0x3435e8u: goto label_3435e8;
        case 0x3435ecu: goto label_3435ec;
        case 0x3435f0u: goto label_3435f0;
        case 0x3435f4u: goto label_3435f4;
        case 0x3435f8u: goto label_3435f8;
        case 0x3435fcu: goto label_3435fc;
        case 0x343600u: goto label_343600;
        case 0x343604u: goto label_343604;
        case 0x343608u: goto label_343608;
        case 0x34360cu: goto label_34360c;
        case 0x343610u: goto label_343610;
        case 0x343614u: goto label_343614;
        case 0x343618u: goto label_343618;
        case 0x34361cu: goto label_34361c;
        case 0x343620u: goto label_343620;
        case 0x343624u: goto label_343624;
        case 0x343628u: goto label_343628;
        case 0x34362cu: goto label_34362c;
        case 0x343630u: goto label_343630;
        case 0x343634u: goto label_343634;
        case 0x343638u: goto label_343638;
        case 0x34363cu: goto label_34363c;
        case 0x343640u: goto label_343640;
        case 0x343644u: goto label_343644;
        case 0x343648u: goto label_343648;
        case 0x34364cu: goto label_34364c;
        case 0x343650u: goto label_343650;
        case 0x343654u: goto label_343654;
        case 0x343658u: goto label_343658;
        case 0x34365cu: goto label_34365c;
        case 0x343660u: goto label_343660;
        case 0x343664u: goto label_343664;
        case 0x343668u: goto label_343668;
        case 0x34366cu: goto label_34366c;
        case 0x343670u: goto label_343670;
        case 0x343674u: goto label_343674;
        case 0x343678u: goto label_343678;
        case 0x34367cu: goto label_34367c;
        case 0x343680u: goto label_343680;
        case 0x343684u: goto label_343684;
        case 0x343688u: goto label_343688;
        case 0x34368cu: goto label_34368c;
        case 0x343690u: goto label_343690;
        case 0x343694u: goto label_343694;
        case 0x343698u: goto label_343698;
        case 0x34369cu: goto label_34369c;
        case 0x3436a0u: goto label_3436a0;
        case 0x3436a4u: goto label_3436a4;
        case 0x3436a8u: goto label_3436a8;
        case 0x3436acu: goto label_3436ac;
        case 0x3436b0u: goto label_3436b0;
        case 0x3436b4u: goto label_3436b4;
        case 0x3436b8u: goto label_3436b8;
        case 0x3436bcu: goto label_3436bc;
        case 0x3436c0u: goto label_3436c0;
        case 0x3436c4u: goto label_3436c4;
        case 0x3436c8u: goto label_3436c8;
        case 0x3436ccu: goto label_3436cc;
        case 0x3436d0u: goto label_3436d0;
        case 0x3436d4u: goto label_3436d4;
        case 0x3436d8u: goto label_3436d8;
        case 0x3436dcu: goto label_3436dc;
        case 0x3436e0u: goto label_3436e0;
        case 0x3436e4u: goto label_3436e4;
        case 0x3436e8u: goto label_3436e8;
        case 0x3436ecu: goto label_3436ec;
        case 0x3436f0u: goto label_3436f0;
        case 0x3436f4u: goto label_3436f4;
        case 0x3436f8u: goto label_3436f8;
        case 0x3436fcu: goto label_3436fc;
        case 0x343700u: goto label_343700;
        case 0x343704u: goto label_343704;
        case 0x343708u: goto label_343708;
        case 0x34370cu: goto label_34370c;
        case 0x343710u: goto label_343710;
        case 0x343714u: goto label_343714;
        case 0x343718u: goto label_343718;
        case 0x34371cu: goto label_34371c;
        case 0x343720u: goto label_343720;
        case 0x343724u: goto label_343724;
        case 0x343728u: goto label_343728;
        case 0x34372cu: goto label_34372c;
        case 0x343730u: goto label_343730;
        case 0x343734u: goto label_343734;
        case 0x343738u: goto label_343738;
        case 0x34373cu: goto label_34373c;
        case 0x343740u: goto label_343740;
        case 0x343744u: goto label_343744;
        case 0x343748u: goto label_343748;
        case 0x34374cu: goto label_34374c;
        case 0x343750u: goto label_343750;
        case 0x343754u: goto label_343754;
        case 0x343758u: goto label_343758;
        case 0x34375cu: goto label_34375c;
        case 0x343760u: goto label_343760;
        case 0x343764u: goto label_343764;
        case 0x343768u: goto label_343768;
        case 0x34376cu: goto label_34376c;
        case 0x343770u: goto label_343770;
        case 0x343774u: goto label_343774;
        case 0x343778u: goto label_343778;
        case 0x34377cu: goto label_34377c;
        case 0x343780u: goto label_343780;
        case 0x343784u: goto label_343784;
        case 0x343788u: goto label_343788;
        case 0x34378cu: goto label_34378c;
        case 0x343790u: goto label_343790;
        case 0x343794u: goto label_343794;
        default: break;
    }

    ctx->pc = 0x343518u;

label_343518:
    // 0x343518: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x343518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_34351c:
    // 0x34351c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x34351cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_343520:
    // 0x343520: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x343520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_343524:
    // 0x343524: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x343524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_343528:
    // 0x343528: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x343528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_34352c:
    // 0x34352c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34352cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_343530:
    // 0x343530: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x343530u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_343534:
    // 0x343534: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x343534u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_343538:
    // 0x343538: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x343538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_34353c:
    // 0x34353c: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x34353cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_343540:
    // 0x343540: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x343540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_343544:
    // 0x343544: 0x40f809  jalr        $v0
label_343548:
    if (ctx->pc == 0x343548u) {
        ctx->pc = 0x343548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343544u;
        // 0x343548: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34354Cu;
        goto label_34354c;
    }
    ctx->pc = 0x343544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34354Cu);
        ctx->pc = 0x343548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343544u;
        // 0x343548: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343544u, 0x34354Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34354Cu;
label_34354c:
    // 0x34354c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x34354cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_343550:
    // 0x343550: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
label_343554:
    if (ctx->pc == 0x343554u) {
        ctx->pc = 0x343554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343550u;
        // 0x343554: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343558u;
        goto label_343558;
    }
    ctx->pc = 0x343550u;
    {
        const bool branch_taken_0x343550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x343554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343550u;
        // 0x343554: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343550) {
            ctx->pc = 0x343734u;
            goto label_343734;
        }
    }
    ctx->pc = 0x343558u;
label_343558:
    // 0x343558: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x343558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_34355c:
    // 0x34355c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x34355cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_343560:
    // 0x343560: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x343560u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_343564:
    // 0x343564: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x343564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_343568:
    // 0x343568: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x343568u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_34356c:
    // 0x34356c: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x34356cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_343570:
    // 0x343570: 0x40f809  jalr        $v0
label_343574:
    if (ctx->pc == 0x343574u) {
        ctx->pc = 0x343574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343570u;
        // 0x343574: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343578u;
        goto label_343578;
    }
    ctx->pc = 0x343570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x343578u);
        ctx->pc = 0x343574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343570u;
        // 0x343574: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343570u, 0x343578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x343578u;
label_343578:
    // 0x343578: 0x7ba40040  lq          $a0, 0x40($sp)
    ctx->pc = 0x343578u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_34357c:
    // 0x34357c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x34357cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_343580:
    // 0x343580: 0x7a030050  lq          $v1, 0x50($s0)
    ctx->pc = 0x343580u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 80)));
label_343584:
    // 0x343584: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x343584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_343588:
    // 0x343588: 0x7e040050  sq          $a0, 0x50($s0)
    ctx->pc = 0x343588u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 4));
label_34358c:
    // 0x34358c: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x34358cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_343590:
    // 0x343590: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x343590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_343594:
    // 0x343594: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x343594u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_343598:
    // 0x343598: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x343598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_34359c:
    // 0x34359c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x34359cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3435a0:
    // 0x3435a0: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x3435a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_3435a4:
    // 0x3435a4: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x3435a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_3435a8:
    // 0x3435a8: 0x40f809  jalr        $v0
label_3435ac:
    if (ctx->pc == 0x3435ACu) {
        ctx->pc = 0x3435ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3435A8u;
        // 0x3435ac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3435B0u;
        goto label_3435b0;
    }
    ctx->pc = 0x3435A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3435B0u);
        ctx->pc = 0x3435ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3435A8u;
        // 0x3435ac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3435A8u, 0x3435B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3435B0u;
label_3435b0:
    // 0x3435b0: 0xc087408  jal         func_21D020
label_3435b4:
    if (ctx->pc == 0x3435B4u) {
        ctx->pc = 0x3435B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3435B0u;
        // 0x3435b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3435B8u;
        goto label_3435b8;
    }
    ctx->pc = 0x3435B0u;
    SET_GPR_U32(ctx, 31, 0x3435B8u);
    ctx->pc = 0x3435B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3435B0u;
    // 0x3435b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x3435B0u, 0x3435B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3435B8u;
label_3435b8:
    // 0x3435b8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3435b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_3435bc:
    // 0x3435bc: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x3435bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3435c0:
    // 0x3435c0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3435c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3435c4:
    // 0x3435c4: 0xe6010044  swc1        $f1, 0x44($s0)
    ctx->pc = 0x3435c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_3435c8:
    // 0x3435c8: 0x922203be  lbu         $v0, 0x3BE($s1)
    ctx->pc = 0x3435c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 958)));
label_3435cc:
    // 0x3435cc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_3435d0:
    if (ctx->pc == 0x3435D0u) {
        ctx->pc = 0x3435D4u;
        goto label_3435d4;
    }
    ctx->pc = 0x3435CCu;
    {
        const bool branch_taken_0x3435cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3435cc) {
            ctx->pc = 0x343614u;
            goto label_343614;
        }
    }
    ctx->pc = 0x3435D4u;
label_3435d4:
    // 0x3435d4: 0x3c013f1c  lui         $at, 0x3F1C
    ctx->pc = 0x3435d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16156 << 16));
label_3435d8:
    // 0x3435d8: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x3435d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_3435dc:
    // 0x3435dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3435dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3435e0:
    // 0x3435e0: 0xc087408  jal         func_21D020
label_3435e4:
    if (ctx->pc == 0x3435E4u) {
        ctx->pc = 0x3435E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3435E0u;
        // 0x3435e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3435E8u;
        goto label_3435e8;
    }
    ctx->pc = 0x3435E0u;
    SET_GPR_U32(ctx, 31, 0x3435E8u);
    ctx->pc = 0x3435E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3435E0u;
    // 0x3435e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x3435E0u, 0x3435E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3435E8u;
label_3435e8:
    // 0x3435e8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3435e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3435ec:
    // 0x3435ec: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x3435ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3435f0:
    // 0x3435f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3435f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3435f4:
    // 0x3435f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3435f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3435f8:
    // 0x3435f8: 0xc087408  jal         func_21D020
label_3435fc:
    if (ctx->pc == 0x3435FCu) {
        ctx->pc = 0x3435FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3435F8u;
        // 0x3435fc: 0xe6010058  swc1        $f1, 0x58($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x343600u;
        goto label_343600;
    }
    ctx->pc = 0x3435F8u;
    SET_GPR_U32(ctx, 31, 0x343600u);
    ctx->pc = 0x3435FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3435F8u;
    // 0x3435fc: 0xe6010058  swc1        $f1, 0x58($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x3435F8u, 0x343600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343600u;
label_343600:
    // 0x343600: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x343600u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_343604:
    // 0x343604: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x343604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_343608:
    // 0x343608: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x343608u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_34360c:
    // 0x34360c: 0x10000039  b           . + 4 + (0x39 << 2)
label_343610:
    if (ctx->pc == 0x343610u) {
        ctx->pc = 0x343610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34360Cu;
        // 0x343610: 0xe6010044  swc1        $f1, 0x44($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x343614u;
        goto label_343614;
    }
    ctx->pc = 0x34360Cu;
    {
        const bool branch_taken_0x34360c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34360Cu;
        // 0x343610: 0xe6010044  swc1        $f1, 0x44($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34360c) {
            ctx->pc = 0x3436F4u;
            goto label_3436f4;
        }
    }
    ctx->pc = 0x343614u;
label_343614:
    // 0x343614: 0xc089fda  jal         func_227F68
label_343618:
    if (ctx->pc == 0x343618u) {
        ctx->pc = 0x343618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343614u;
        // 0x343618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34361Cu;
        goto label_34361c;
    }
    ctx->pc = 0x343614u;
    SET_GPR_U32(ctx, 31, 0x34361Cu);
    ctx->pc = 0x343618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343614u;
    // 0x343618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F68u, 0x343614u, 0x34361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34361Cu;
label_34361c:
    // 0x34361c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_343620:
    if (ctx->pc == 0x343620u) {
        ctx->pc = 0x343624u;
        goto label_343624;
    }
    ctx->pc = 0x34361Cu;
    {
        const bool branch_taken_0x34361c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34361c) {
            ctx->pc = 0x3436C4u;
            goto label_3436c4;
        }
    }
    ctx->pc = 0x343624u;
label_343624:
    // 0x343624: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x343624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_343628:
    // 0x343628: 0x52d78  dsll        $a1, $a1, 21
    ctx->pc = 0x343628u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 21);
label_34362c:
    // 0x34362c: 0xc08997c  jal         func_2265F0
label_343630:
    if (ctx->pc == 0x343630u) {
        ctx->pc = 0x343630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34362Cu;
        // 0x343630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343634u;
        goto label_343634;
    }
    ctx->pc = 0x34362Cu;
    SET_GPR_U32(ctx, 31, 0x343634u);
    ctx->pc = 0x343630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34362Cu;
    // 0x343630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x34362Cu, 0x343634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343634u;
label_343634:
    // 0x343634: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_343638:
    if (ctx->pc == 0x343638u) {
        ctx->pc = 0x34363Cu;
        goto label_34363c;
    }
    ctx->pc = 0x343634u;
    {
        const bool branch_taken_0x343634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x343634) {
            ctx->pc = 0x3436C4u;
            goto label_3436c4;
        }
    }
    ctx->pc = 0x34363Cu;
label_34363c:
    // 0x34363c: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x34363cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_343640:
    // 0x343640: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x343640u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_343644:
    // 0x343644: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x343644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_343648:
    // 0x343648: 0xc087408  jal         func_21D020
label_34364c:
    if (ctx->pc == 0x34364Cu) {
        ctx->pc = 0x34364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343648u;
        // 0x34364c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343650u;
        goto label_343650;
    }
    ctx->pc = 0x343648u;
    SET_GPR_U32(ctx, 31, 0x343650u);
    ctx->pc = 0x34364Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343648u;
    // 0x34364c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x343648u, 0x343650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343650u;
label_343650:
    // 0x343650: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x343650u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_343654:
    // 0x343654: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x343654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_343658:
    // 0x343658: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x343658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34365c:
    // 0x34365c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x34365cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_343660:
    // 0x343660: 0xc087408  jal         func_21D020
label_343664:
    if (ctx->pc == 0x343664u) {
        ctx->pc = 0x343664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343660u;
        // 0x343664: 0xe6010058  swc1        $f1, 0x58($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x343668u;
        goto label_343668;
    }
    ctx->pc = 0x343660u;
    SET_GPR_U32(ctx, 31, 0x343668u);
    ctx->pc = 0x343664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343660u;
    // 0x343664: 0xe6010058  swc1        $f1, 0x58($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x343660u, 0x343668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343668u;
label_343668:
    // 0x343668: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x343668u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_34366c:
    // 0x34366c: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x34366cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_343670:
    // 0x343670: 0xc6020058  lwc1        $f2, 0x58($s0)
    ctx->pc = 0x343670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_343674:
    // 0x343674: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x343674u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_343678:
    // 0x343678: 0xe6010044  swc1        $f1, 0x44($s0)
    ctx->pc = 0x343678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_34367c:
    // 0x34367c: 0xc6200560  lwc1        $f0, 0x560($s1)
    ctx->pc = 0x34367cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_343680:
    // 0x343680: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x343680u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_343684:
    // 0x343684: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x343684u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_343688:
    // 0x343688: 0x0  nop
    ctx->pc = 0x343688u;
    // NOP
label_34368c:
    // 0x34368c: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_343690:
    if (ctx->pc == 0x343690u) {
        ctx->pc = 0x343690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34368Cu;
        // 0x343690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343694u;
        goto label_343694;
    }
    ctx->pc = 0x34368Cu;
    {
        const bool branch_taken_0x34368c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x343690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34368Cu;
        // 0x343690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34368c) {
            ctx->pc = 0x3436F4u;
            goto label_3436f4;
        }
    }
    ctx->pc = 0x343694u;
label_343694:
    // 0x343694: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x343694u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_343698:
    // 0x343698: 0xc087408  jal         func_21D020
label_34369c:
    if (ctx->pc == 0x34369Cu) {
        ctx->pc = 0x34369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343698u;
        // 0x34369c: 0xe6000058  swc1        $f0, 0x58($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3436A0u;
        goto label_3436a0;
    }
    ctx->pc = 0x343698u;
    SET_GPR_U32(ctx, 31, 0x3436A0u);
    ctx->pc = 0x34369Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343698u;
    // 0x34369c: 0xe6000058  swc1        $f0, 0x58($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x343698u, 0x3436A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3436A0u;
label_3436a0:
    // 0x3436a0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3436a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_3436a4:
    // 0x3436a4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x3436a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3436a8:
    // 0x3436a8: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x3436a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3436ac:
    // 0x3436ac: 0xc6030058  lwc1        $f3, 0x58($s0)
    ctx->pc = 0x3436acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3436b0:
    // 0x3436b0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3436b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3436b4:
    // 0x3436b4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3436b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3436b8:
    // 0x3436b8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x3436b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_3436bc:
    // 0x3436bc: 0x1000000d  b           . + 4 + (0xD << 2)
label_3436c0:
    if (ctx->pc == 0x3436C0u) {
        ctx->pc = 0x3436C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3436BCu;
        // 0x3436c0: 0xe6010044  swc1        $f1, 0x44($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3436C4u;
        goto label_3436c4;
    }
    ctx->pc = 0x3436BCu;
    {
        const bool branch_taken_0x3436bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3436C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3436BCu;
        // 0x3436c0: 0xe6010044  swc1        $f1, 0x44($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3436bc) {
            ctx->pc = 0x3436F4u;
            goto label_3436f4;
        }
    }
    ctx->pc = 0x3436C4u;
label_3436c4:
    // 0x3436c4: 0xc088edc  jal         func_223B70
label_3436c8:
    if (ctx->pc == 0x3436C8u) {
        ctx->pc = 0x3436C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3436C4u;
        // 0x3436c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3436CCu;
        goto label_3436cc;
    }
    ctx->pc = 0x3436C4u;
    SET_GPR_U32(ctx, 31, 0x3436CCu);
    ctx->pc = 0x3436C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3436C4u;
    // 0x3436c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x3436C4u, 0x3436CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3436CCu;
label_3436cc:
    // 0x3436cc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3436d0:
    if (ctx->pc == 0x3436D0u) {
        ctx->pc = 0x3436D4u;
        goto label_3436d4;
    }
    ctx->pc = 0x3436CCu;
    {
        const bool branch_taken_0x3436cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3436cc) {
            ctx->pc = 0x3436F4u;
            goto label_3436f4;
        }
    }
    ctx->pc = 0x3436D4u;
label_3436d4:
    // 0x3436d4: 0xc087408  jal         func_21D020
label_3436d8:
    if (ctx->pc == 0x3436D8u) {
        ctx->pc = 0x3436D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3436D4u;
        // 0x3436d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3436DCu;
        goto label_3436dc;
    }
    ctx->pc = 0x3436D4u;
    SET_GPR_U32(ctx, 31, 0x3436DCu);
    ctx->pc = 0x3436D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3436D4u;
    // 0x3436d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x3436D4u, 0x3436DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3436DCu;
label_3436dc:
    // 0x3436dc: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x3436dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_3436e0:
    // 0x3436e0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3436e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3436e4:
    // 0x3436e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3436e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3436e8:
    // 0x3436e8: 0x0  nop
    ctx->pc = 0x3436e8u;
    // NOP
label_3436ec:
    // 0x3436ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3436ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3436f0:
    // 0x3436f0: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x3436f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_3436f4:
    // 0x3436f4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3436f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_3436f8:
    // 0x3436f8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3436f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3436fc:
    // 0x3436fc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3436fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_343700:
    // 0x343700: 0xc087408  jal         func_21D020
label_343704:
    if (ctx->pc == 0x343704u) {
        ctx->pc = 0x343704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343700u;
        // 0x343704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343708u;
        goto label_343708;
    }
    ctx->pc = 0x343700u;
    SET_GPR_U32(ctx, 31, 0x343708u);
    ctx->pc = 0x343704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343700u;
    // 0x343704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x343700u, 0x343708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343708u;
label_343708:
    // 0x343708: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x343708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_34370c:
    // 0x34370c: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x34370cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_343710:
    // 0x343710: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x343710u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_343714:
    // 0x343714: 0x0  nop
    ctx->pc = 0x343714u;
    // NOP
label_343718:
    // 0x343718: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
label_34371c:
    if (ctx->pc == 0x34371Cu) {
        ctx->pc = 0x34371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343718u;
        // 0x34371c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343720u;
        goto label_343720;
    }
    ctx->pc = 0x343718u;
    {
        const bool branch_taken_0x343718 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x343718) {
            ctx->pc = 0x34371Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343718u;
            // 0x34371c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34377Cu;
            goto label_34377c;
        }
    }
    ctx->pc = 0x343720u;
label_343720:
    // 0x343720: 0xc087408  jal         func_21D020
label_343724:
    if (ctx->pc == 0x343724u) {
        ctx->pc = 0x343724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343720u;
        // 0x343724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343728u;
        goto label_343728;
    }
    ctx->pc = 0x343720u;
    SET_GPR_U32(ctx, 31, 0x343728u);
    ctx->pc = 0x343724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343720u;
    // 0x343724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x343720u, 0x343728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343728u;
label_343728:
    // 0x343728: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x343728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_34372c:
    // 0x34372c: 0x10000012  b           . + 4 + (0x12 << 2)
label_343730:
    if (ctx->pc == 0x343730u) {
        ctx->pc = 0x343730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34372Cu;
        // 0x343730: 0xe6000044  swc1        $f0, 0x44($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x343734u;
        goto label_343734;
    }
    ctx->pc = 0x34372Cu;
    {
        const bool branch_taken_0x34372c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34372Cu;
        // 0x343730: 0xe6000044  swc1        $f0, 0x44($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34372c) {
            ctx->pc = 0x343778u;
            goto label_343778;
        }
    }
    ctx->pc = 0x343734u;
label_343734:
    // 0x343734: 0x7a020050  lq          $v0, 0x50($s0)
    ctx->pc = 0x343734u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 80)));
label_343738:
    // 0x343738: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x343738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34373c:
    // 0x34373c: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x34373cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
label_343740:
    // 0x343740: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x343740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_343744:
    // 0x343744: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x343744u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_343748:
    // 0x343748: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x343748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_34374c:
    // 0x34374c: 0x40f809  jalr        $v0
label_343750:
    if (ctx->pc == 0x343750u) {
        ctx->pc = 0x343750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34374Cu;
        // 0x343750: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343754u;
        goto label_343754;
    }
    ctx->pc = 0x34374Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x343754u);
        ctx->pc = 0x343750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34374Cu;
        // 0x343750: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34374Cu, 0x343754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x343754u;
label_343754:
    // 0x343754: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x343754u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_343758:
    // 0x343758: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x343758u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_34375c:
    // 0x34375c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34375cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_343760:
    // 0x343760: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x343760u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_343764:
    // 0x343764: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x343764u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_343768:
    // 0x343768: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x343768u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_34376c:
    // 0x34376c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x34376cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_343770:
    // 0x343770: 0x7e020050  sq          $v0, 0x50($s0)
    ctx->pc = 0x343770u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 2));
label_343774:
    // 0x343774: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x343774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_343778:
    // 0x343778: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x343778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_34377c:
    // 0x34377c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x34377cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_343780:
    // 0x343780: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x343780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_343784:
    // 0x343784: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x343784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_343788:
    // 0x343788: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x343788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_34378c:
    // 0x34378c: 0x3e00008  jr          $ra
label_343790:
    if (ctx->pc == 0x343790u) {
        ctx->pc = 0x343790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34378Cu;
        // 0x343790: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343794u;
        goto label_343794;
    }
    ctx->pc = 0x34378Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34378Cu;
        // 0x343790: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34378Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343794u;
label_343794:
    // 0x343794: 0x0  nop
    ctx->pc = 0x343794u;
    // NOP
    ctx->pc = 0x343798u;
}
