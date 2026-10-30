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

// Function: sub_004115D0
// Address: 0x4115d0 - 0x411880
void sub_004115D0_0x4115d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004115D0_0x4115d0");
#endif

    switch (ctx->pc) {
        case 0x4115d0u: goto label_4115d0;
        case 0x4115d4u: goto label_4115d4;
        case 0x4115d8u: goto label_4115d8;
        case 0x4115dcu: goto label_4115dc;
        case 0x4115e0u: goto label_4115e0;
        case 0x4115e4u: goto label_4115e4;
        case 0x4115e8u: goto label_4115e8;
        case 0x4115ecu: goto label_4115ec;
        case 0x4115f0u: goto label_4115f0;
        case 0x4115f4u: goto label_4115f4;
        case 0x4115f8u: goto label_4115f8;
        case 0x4115fcu: goto label_4115fc;
        case 0x411600u: goto label_411600;
        case 0x411604u: goto label_411604;
        case 0x411608u: goto label_411608;
        case 0x41160cu: goto label_41160c;
        case 0x411610u: goto label_411610;
        case 0x411614u: goto label_411614;
        case 0x411618u: goto label_411618;
        case 0x41161cu: goto label_41161c;
        case 0x411620u: goto label_411620;
        case 0x411624u: goto label_411624;
        case 0x411628u: goto label_411628;
        case 0x41162cu: goto label_41162c;
        case 0x411630u: goto label_411630;
        case 0x411634u: goto label_411634;
        case 0x411638u: goto label_411638;
        case 0x41163cu: goto label_41163c;
        case 0x411640u: goto label_411640;
        case 0x411644u: goto label_411644;
        case 0x411648u: goto label_411648;
        case 0x41164cu: goto label_41164c;
        case 0x411650u: goto label_411650;
        case 0x411654u: goto label_411654;
        case 0x411658u: goto label_411658;
        case 0x41165cu: goto label_41165c;
        case 0x411660u: goto label_411660;
        case 0x411664u: goto label_411664;
        case 0x411668u: goto label_411668;
        case 0x41166cu: goto label_41166c;
        case 0x411670u: goto label_411670;
        case 0x411674u: goto label_411674;
        case 0x411678u: goto label_411678;
        case 0x41167cu: goto label_41167c;
        case 0x411680u: goto label_411680;
        case 0x411684u: goto label_411684;
        case 0x411688u: goto label_411688;
        case 0x41168cu: goto label_41168c;
        case 0x411690u: goto label_411690;
        case 0x411694u: goto label_411694;
        case 0x411698u: goto label_411698;
        case 0x41169cu: goto label_41169c;
        case 0x4116a0u: goto label_4116a0;
        case 0x4116a4u: goto label_4116a4;
        case 0x4116a8u: goto label_4116a8;
        case 0x4116acu: goto label_4116ac;
        case 0x4116b0u: goto label_4116b0;
        case 0x4116b4u: goto label_4116b4;
        case 0x4116b8u: goto label_4116b8;
        case 0x4116bcu: goto label_4116bc;
        case 0x4116c0u: goto label_4116c0;
        case 0x4116c4u: goto label_4116c4;
        case 0x4116c8u: goto label_4116c8;
        case 0x4116ccu: goto label_4116cc;
        case 0x4116d0u: goto label_4116d0;
        case 0x4116d4u: goto label_4116d4;
        case 0x4116d8u: goto label_4116d8;
        case 0x4116dcu: goto label_4116dc;
        case 0x4116e0u: goto label_4116e0;
        case 0x4116e4u: goto label_4116e4;
        case 0x4116e8u: goto label_4116e8;
        case 0x4116ecu: goto label_4116ec;
        case 0x4116f0u: goto label_4116f0;
        case 0x4116f4u: goto label_4116f4;
        case 0x4116f8u: goto label_4116f8;
        case 0x4116fcu: goto label_4116fc;
        case 0x411700u: goto label_411700;
        case 0x411704u: goto label_411704;
        case 0x411708u: goto label_411708;
        case 0x41170cu: goto label_41170c;
        case 0x411710u: goto label_411710;
        case 0x411714u: goto label_411714;
        case 0x411718u: goto label_411718;
        case 0x41171cu: goto label_41171c;
        case 0x411720u: goto label_411720;
        case 0x411724u: goto label_411724;
        case 0x411728u: goto label_411728;
        case 0x41172cu: goto label_41172c;
        case 0x411730u: goto label_411730;
        case 0x411734u: goto label_411734;
        case 0x411738u: goto label_411738;
        case 0x41173cu: goto label_41173c;
        case 0x411740u: goto label_411740;
        case 0x411744u: goto label_411744;
        case 0x411748u: goto label_411748;
        case 0x41174cu: goto label_41174c;
        case 0x411750u: goto label_411750;
        case 0x411754u: goto label_411754;
        case 0x411758u: goto label_411758;
        case 0x41175cu: goto label_41175c;
        case 0x411760u: goto label_411760;
        case 0x411764u: goto label_411764;
        case 0x411768u: goto label_411768;
        case 0x41176cu: goto label_41176c;
        case 0x411770u: goto label_411770;
        case 0x411774u: goto label_411774;
        case 0x411778u: goto label_411778;
        case 0x41177cu: goto label_41177c;
        case 0x411780u: goto label_411780;
        case 0x411784u: goto label_411784;
        case 0x411788u: goto label_411788;
        case 0x41178cu: goto label_41178c;
        case 0x411790u: goto label_411790;
        case 0x411794u: goto label_411794;
        case 0x411798u: goto label_411798;
        case 0x41179cu: goto label_41179c;
        case 0x4117a0u: goto label_4117a0;
        case 0x4117a4u: goto label_4117a4;
        case 0x4117a8u: goto label_4117a8;
        case 0x4117acu: goto label_4117ac;
        case 0x4117b0u: goto label_4117b0;
        case 0x4117b4u: goto label_4117b4;
        case 0x4117b8u: goto label_4117b8;
        case 0x4117bcu: goto label_4117bc;
        case 0x4117c0u: goto label_4117c0;
        case 0x4117c4u: goto label_4117c4;
        case 0x4117c8u: goto label_4117c8;
        case 0x4117ccu: goto label_4117cc;
        case 0x4117d0u: goto label_4117d0;
        case 0x4117d4u: goto label_4117d4;
        case 0x4117d8u: goto label_4117d8;
        case 0x4117dcu: goto label_4117dc;
        case 0x4117e0u: goto label_4117e0;
        case 0x4117e4u: goto label_4117e4;
        case 0x4117e8u: goto label_4117e8;
        case 0x4117ecu: goto label_4117ec;
        case 0x4117f0u: goto label_4117f0;
        case 0x4117f4u: goto label_4117f4;
        case 0x4117f8u: goto label_4117f8;
        case 0x4117fcu: goto label_4117fc;
        case 0x411800u: goto label_411800;
        case 0x411804u: goto label_411804;
        case 0x411808u: goto label_411808;
        case 0x41180cu: goto label_41180c;
        case 0x411810u: goto label_411810;
        case 0x411814u: goto label_411814;
        case 0x411818u: goto label_411818;
        case 0x41181cu: goto label_41181c;
        case 0x411820u: goto label_411820;
        case 0x411824u: goto label_411824;
        case 0x411828u: goto label_411828;
        case 0x41182cu: goto label_41182c;
        case 0x411830u: goto label_411830;
        case 0x411834u: goto label_411834;
        case 0x411838u: goto label_411838;
        case 0x41183cu: goto label_41183c;
        case 0x411840u: goto label_411840;
        case 0x411844u: goto label_411844;
        case 0x411848u: goto label_411848;
        case 0x41184cu: goto label_41184c;
        case 0x411850u: goto label_411850;
        case 0x411854u: goto label_411854;
        case 0x411858u: goto label_411858;
        case 0x41185cu: goto label_41185c;
        case 0x411860u: goto label_411860;
        case 0x411864u: goto label_411864;
        case 0x411868u: goto label_411868;
        case 0x41186cu: goto label_41186c;
        case 0x411870u: goto label_411870;
        case 0x411874u: goto label_411874;
        case 0x411878u: goto label_411878;
        case 0x41187cu: goto label_41187c;
        default: break;
    }

    ctx->pc = 0x4115d0u;

label_4115d0:
    // 0x4115d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4115d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_4115d4:
    // 0x4115d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4115d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4115d8:
    // 0x4115d8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x4115d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_4115dc:
    // 0x4115dc: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x4115dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4115e0:
    // 0x4115e0: 0x8c4727e4  lw          $a3, 0x27E4($v0)
    ctx->pc = 0x4115e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4115e4:
    // 0x4115e4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x4115e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4115e8:
    // 0x4115e8: 0x2e31818  mult        $v1, $s7, $v1
    ctx->pc = 0x4115e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4115ec:
    // 0x4115ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4115ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4115f0:
    // 0x4115f0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x4115f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_4115f4:
    // 0x4115f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4115f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4115f8:
    // 0x4115f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4115f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4115fc:
    // 0x4115fc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4115fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_411600:
    // 0x411600: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x411600u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_411604:
    // 0x411604: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x411604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_411608:
    // 0x411608: 0x2a31021  addu        $v0, $s5, $v1
    ctx->pc = 0x411608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_41160c:
    // 0x41160c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x41160cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_411610:
    // 0x411610: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x411610u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_411614:
    // 0x411614: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x411614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_411618:
    // 0x411618: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x411618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_41161c:
    // 0x41161c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x41161cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_411620:
    // 0x411620: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x411620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_411624:
    // 0x411624: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x411624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_411628:
    // 0x411628: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x411628u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_41162c:
    // 0x41162c: 0x8c54120c  lw          $s4, 0x120C($v0)
    ctx->pc = 0x41162cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4620)));
label_411630:
    // 0x411630: 0x84c400b8  lh          $a0, 0xB8($a2)
    ctx->pc = 0x411630u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 184)));
label_411634:
    // 0x411634: 0x8cc200bc  lw          $v0, 0xBC($a2)
    ctx->pc = 0x411634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
label_411638:
    // 0x411638: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x411638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_41163c:
    // 0x41163c: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x41163cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_411640:
    // 0x411640: 0x40f809  jalr        $v0
label_411644:
    if (ctx->pc == 0x411644u) {
        ctx->pc = 0x411644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411640u;
        // 0x411644: 0x8c761208  lw          $s6, 0x1208($v1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411648u;
        goto label_411648;
    }
    ctx->pc = 0x411640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x411648u);
        ctx->pc = 0x411644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411640u;
        // 0x411644: 0x8c761208  lw          $s6, 0x1208($v1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4616)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411640u, 0x411648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x411648u;
label_411648:
    // 0x411648: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x411648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_41164c:
    // 0x41164c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41164cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_411650:
    // 0x411650: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x411650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_411654:
    // 0x411654: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x411654u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_411658:
    // 0x411658: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x411658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_41165c:
    // 0x41165c: 0x40f809  jalr        $v0
label_411660:
    if (ctx->pc == 0x411660u) {
        ctx->pc = 0x411660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41165Cu;
        // 0x411660: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411664u;
        goto label_411664;
    }
    ctx->pc = 0x41165Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x411664u);
        ctx->pc = 0x411660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41165Cu;
        // 0x411660: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41165Cu, 0x411664u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x411664u;
label_411664:
    // 0x411664: 0x172900  sll         $a1, $s7, 4
    ctx->pc = 0x411664u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
label_411668:
    // 0x411668: 0xb51821  addu        $v1, $a1, $s5
    ctx->pc = 0x411668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
label_41166c:
    // 0x41166c: 0x24630940  addiu       $v1, $v1, 0x940
    ctx->pc = 0x41166cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2368));
label_411670:
    // 0x411670: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x411670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_411674:
    // 0x411674: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x411674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_411678:
    // 0x411678: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x411678u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_41167c:
    // 0x41167c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x41167cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_411680:
    // 0x411680: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_411684:
    if (ctx->pc == 0x411684u) {
        ctx->pc = 0x411684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411680u;
        // 0x411684: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411688u;
        goto label_411688;
    }
    ctx->pc = 0x411680u;
    {
        const bool branch_taken_0x411680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x411684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411680u;
        // 0x411684: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411680) {
            ctx->pc = 0x4116F8u;
            goto label_4116f8;
        }
    }
    ctx->pc = 0x411688u;
label_411688:
    // 0x411688: 0xb58821  addu        $s1, $a1, $s5
    ctx->pc = 0x411688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
label_41168c:
    // 0x41168c: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x41168cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_411690:
    // 0x411690: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x411690u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_411694:
    // 0x411694: 0x26730940  addiu       $s3, $s3, 0x940
    ctx->pc = 0x411694u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2368));
label_411698:
    // 0x411698: 0x26310940  addiu       $s1, $s1, 0x940
    ctx->pc = 0x411698u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2368));
label_41169c:
    // 0x41169c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x41169cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4116a0:
    // 0x4116a0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x4116a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_4116a4:
    // 0x4116a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4116a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4116a8:
    // 0x4116a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4116a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4116ac:
    // 0x4116ac: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x4116acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4116b0:
    // 0x4116b0: 0xc10462e  jal         func_4118B8
label_4116b4:
    if (ctx->pc == 0x4116B4u) {
        ctx->pc = 0x4116B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4116B0u;
        // 0x4116b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4116B8u;
        goto label_4116b8;
    }
    ctx->pc = 0x4116B0u;
    SET_GPR_U32(ctx, 31, 0x4116B8u);
    ctx->pc = 0x4116B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4116B0u;
    // 0x4116b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4118B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4118B8u, 0x4116B0u, 0x4116B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4116B8u;
label_4116b8:
    // 0x4116b8: 0x8fc3ced0  lw          $v1, -0x3130($fp)
    ctx->pc = 0x4116b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294954704)));
label_4116bc:
    // 0x4116bc: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x4116bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_4116c0:
    // 0x4116c0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4116c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4116c4:
    // 0x4116c4: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x4116c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_4116c8:
    // 0x4116c8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_4116cc:
    if (ctx->pc == 0x4116CCu) {
        ctx->pc = 0x4116CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4116C8u;
        // 0x4116cc: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4116D0u;
        goto label_4116d0;
    }
    ctx->pc = 0x4116C8u;
    {
        const bool branch_taken_0x4116c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4116c8) {
            ctx->pc = 0x4116CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4116C8u;
            // 0x4116cc: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4116D8u;
            goto label_4116d8;
        }
    }
    ctx->pc = 0x4116D0u;
label_4116d0:
    // 0x4116d0: 0x10000008  b           . + 4 + (0x8 << 2)
label_4116d4:
    if (ctx->pc == 0x4116D4u) {
        ctx->pc = 0x4116D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4116D0u;
        // 0x4116d4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4116D8u;
        goto label_4116d8;
    }
    ctx->pc = 0x4116D0u;
    {
        const bool branch_taken_0x4116d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4116D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4116D0u;
        // 0x4116d4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4116d0) {
            ctx->pc = 0x4116F4u;
            goto label_4116f4;
        }
    }
    ctx->pc = 0x4116D8u;
label_4116d8:
    // 0x4116d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4116d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4116dc:
    // 0x4116dc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x4116dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4116e0:
    // 0x4116e0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4116e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4116e4:
    // 0x4116e4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4116e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4116e8:
    // 0x4116e8: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x4116e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4116ec:
    // 0x4116ec: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
label_4116f0:
    if (ctx->pc == 0x4116F0u) {
        ctx->pc = 0x4116F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4116ECu;
        // 0x4116f0: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4116F4u;
        goto label_4116f4;
    }
    ctx->pc = 0x4116ECu;
    {
        const bool branch_taken_0x4116ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4116ec) {
            ctx->pc = 0x4116F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4116ECu;
            // 0x4116f0: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4116A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4116a0;
        }
    }
    ctx->pc = 0x4116F4u;
label_4116f4:
    // 0x4116f4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4116f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4116f8:
    // 0x4116f8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_4116fc:
    if (ctx->pc == 0x4116FCu) {
        ctx->pc = 0x4116FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4116F8u;
        // 0x4116fc: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411700u;
        goto label_411700;
    }
    ctx->pc = 0x4116F8u;
    {
        const bool branch_taken_0x4116f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4116FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4116F8u;
        // 0x4116fc: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4116f8) {
            ctx->pc = 0x411718u;
            goto label_411718;
        }
    }
    ctx->pc = 0x411700u;
label_411700:
    // 0x411700: 0x2e21818  mult        $v1, $s7, $v0
    ctx->pc = 0x411700u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_411704:
    // 0x411704: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x411704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_411708:
    // 0x411708: 0xc122316  jal         func_488C58
label_41170c:
    if (ctx->pc == 0x41170Cu) {
        ctx->pc = 0x41170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411708u;
        // 0x41170c: 0x8c441204  lw          $a0, 0x1204($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411710u;
        goto label_411710;
    }
    ctx->pc = 0x411708u;
    SET_GPR_U32(ctx, 31, 0x411710u);
    ctx->pc = 0x41170Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411708u;
    // 0x41170c: 0x8c441204  lw          $a0, 0x1204($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4612)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488C58u, 0x411708u, 0x411710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411710u;
label_411710:
    // 0x411710: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x411710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_411714:
    // 0x411714: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x411714u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
label_411718:
    // 0x411718: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x411718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_41171c:
    // 0x41171c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x41171cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_411720:
    // 0x411720: 0x8c4627e4  lw          $a2, 0x27E4($v0)
    ctx->pc = 0x411720u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_411724:
    // 0x411724: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x411724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_411728:
    // 0x411728: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x411728u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_41172c:
    // 0x41172c: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x41172cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_411730:
    // 0x411730: 0x60f809  jalr        $v1
label_411734:
    if (ctx->pc == 0x411734u) {
        ctx->pc = 0x411734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411730u;
        // 0x411734: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411738u;
        goto label_411738;
    }
    ctx->pc = 0x411730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x411738u);
        ctx->pc = 0x411734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411730u;
        // 0x411734: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411730u, 0x411738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x411738u;
label_411738:
    // 0x411738: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x411738u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_41173c:
    // 0x41173c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41173cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_411740:
    // 0x411740: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x411740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_411744:
    // 0x411744: 0x84e40068  lh          $a0, 0x68($a3)
    ctx->pc = 0x411744u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 104)));
label_411748:
    // 0x411748: 0x8ce2006c  lw          $v0, 0x6C($a3)
    ctx->pc = 0x411748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 108)));
label_41174c:
    // 0x41174c: 0x40f809  jalr        $v0
label_411750:
    if (ctx->pc == 0x411750u) {
        ctx->pc = 0x411750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41174Cu;
        // 0x411750: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411754u;
        goto label_411754;
    }
    ctx->pc = 0x41174Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x411754u);
        ctx->pc = 0x411750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41174Cu;
        // 0x411750: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41174Cu, 0x411754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x411754u;
label_411754:
    // 0x411754: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x411754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_411758:
    // 0x411758: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
label_41175c:
    if (ctx->pc == 0x41175Cu) {
        ctx->pc = 0x41175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411758u;
        // 0x41175c: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411760u;
        goto label_411760;
    }
    ctx->pc = 0x411758u;
    {
        const bool branch_taken_0x411758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411758u;
        // 0x41175c: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411758) {
            ctx->pc = 0x411848u;
            goto label_411848;
        }
    }
    ctx->pc = 0x411760u;
label_411760:
    // 0x411760: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x411760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_411764:
    // 0x411764: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x411764u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_411768:
    // 0x411768: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x411768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_41176c:
    // 0x41176c: 0x40f809  jalr        $v0
label_411770:
    if (ctx->pc == 0x411770u) {
        ctx->pc = 0x411770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41176Cu;
        // 0x411770: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411774u;
        goto label_411774;
    }
    ctx->pc = 0x41176Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x411774u);
        ctx->pc = 0x411770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41176Cu;
        // 0x411770: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41176Cu, 0x411774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x411774u;
label_411774:
    // 0x411774: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x411774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_411778:
    // 0x411778: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x411778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_41177c:
    // 0x41177c: 0x8c4627e4  lw          $a2, 0x27E4($v0)
    ctx->pc = 0x41177cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_411780:
    // 0x411780: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x411780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_411784:
    // 0x411784: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x411784u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_411788:
    // 0x411788: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x411788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_41178c:
    // 0x41178c: 0x60f809  jalr        $v1
label_411790:
    if (ctx->pc == 0x411790u) {
        ctx->pc = 0x411790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41178Cu;
        // 0x411790: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411794u;
        goto label_411794;
    }
    ctx->pc = 0x41178Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x411794u);
        ctx->pc = 0x411790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41178Cu;
        // 0x411790: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41178Cu, 0x411794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x411794u;
label_411794:
    // 0x411794: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x411794u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_411798:
    // 0x411798: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x411798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41179c:
    // 0x41179c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41179cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4117a0:
    // 0x4117a0: 0x84e40068  lh          $a0, 0x68($a3)
    ctx->pc = 0x4117a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 104)));
label_4117a4:
    // 0x4117a4: 0x8ce2006c  lw          $v0, 0x6C($a3)
    ctx->pc = 0x4117a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 108)));
label_4117a8:
    // 0x4117a8: 0x40f809  jalr        $v0
label_4117ac:
    if (ctx->pc == 0x4117ACu) {
        ctx->pc = 0x4117ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4117A8u;
        // 0x4117ac: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4117B0u;
        goto label_4117b0;
    }
    ctx->pc = 0x4117A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4117B0u);
        ctx->pc = 0x4117ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4117A8u;
        // 0x4117ac: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4117A8u, 0x4117B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4117B0u;
label_4117b0:
    // 0x4117b0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x4117b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_4117b4:
    // 0x4117b4: 0x8e05b9b8  lw          $a1, -0x4648($s0)
    ctx->pc = 0x4117b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949304)));
label_4117b8:
    // 0x4117b8: 0x8c6627e4  lw          $a2, 0x27E4($v1)
    ctx->pc = 0x4117b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_4117bc:
    // 0x4117bc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4117bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4117c0:
    // 0x4117c0: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x4117c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_4117c4:
    // 0x4117c4: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x4117c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_4117c8:
    // 0x4117c8: 0x60f809  jalr        $v1
label_4117cc:
    if (ctx->pc == 0x4117CCu) {
        ctx->pc = 0x4117CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4117C8u;
        // 0x4117cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4117D0u;
        goto label_4117d0;
    }
    ctx->pc = 0x4117C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4117D0u);
        ctx->pc = 0x4117CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4117C8u;
        // 0x4117cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4117C8u, 0x4117D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4117D0u;
label_4117d0:
    // 0x4117d0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4117d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4117d4:
    // 0x4117d4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4117d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4117d8:
    // 0x4117d8: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x4117d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_4117dc:
    // 0x4117dc: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x4117dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_4117e0:
    // 0x4117e0: 0x60f809  jalr        $v1
label_4117e4:
    if (ctx->pc == 0x4117E4u) {
        ctx->pc = 0x4117E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4117E0u;
        // 0x4117e4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4117E8u;
        goto label_4117e8;
    }
    ctx->pc = 0x4117E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4117E8u);
        ctx->pc = 0x4117E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4117E0u;
        // 0x4117e4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4117E0u, 0x4117E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4117E8u;
label_4117e8:
    // 0x4117e8: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4117e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_4117ec:
    // 0x4117ec: 0x2406027a  addiu       $a2, $zero, 0x27A
    ctx->pc = 0x4117ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_4117f0:
    // 0x4117f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4117f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4117f4:
    // 0x4117f4: 0xc1378f6  jal         func_4DE3D8
label_4117f8:
    if (ctx->pc == 0x4117F8u) {
        ctx->pc = 0x4117F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4117F4u;
        // 0x4117f8: 0x24a58dc0  addiu       $a1, $a1, -0x7240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4117FCu;
        goto label_4117fc;
    }
    ctx->pc = 0x4117F4u;
    SET_GPR_U32(ctx, 31, 0x4117FCu);
    ctx->pc = 0x4117F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4117F4u;
    // 0x4117f8: 0x24a58dc0  addiu       $a1, $a1, -0x7240 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE3D8u, 0x4117F4u, 0x4117FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4117FCu;
label_4117fc:
    // 0x4117fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4117fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_411800:
    // 0x411800: 0x8e05b9b8  lw          $a1, -0x4648($s0)
    ctx->pc = 0x411800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949304)));
label_411804:
    // 0x411804: 0x8c4627e4  lw          $a2, 0x27E4($v0)
    ctx->pc = 0x411804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_411808:
    // 0x411808: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x411808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41180c:
    // 0x41180c: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x41180cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_411810:
    // 0x411810: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x411810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_411814:
    // 0x411814: 0x60f809  jalr        $v1
label_411818:
    if (ctx->pc == 0x411818u) {
        ctx->pc = 0x411818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411814u;
        // 0x411818: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41181Cu;
        goto label_41181c;
    }
    ctx->pc = 0x411814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41181Cu);
        ctx->pc = 0x411818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411814u;
        // 0x411818: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411814u, 0x41181Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41181Cu;
label_41181c:
    // 0x41181c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x41181cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_411820:
    // 0x411820: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x411820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_411824:
    // 0x411824: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x411824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_411828:
    // 0x411828: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x411828u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_41182c:
    // 0x41182c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x41182cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_411830:
    // 0x411830: 0x60f809  jalr        $v1
label_411834:
    if (ctx->pc == 0x411834u) {
        ctx->pc = 0x411834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411830u;
        // 0x411834: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411838u;
        goto label_411838;
    }
    ctx->pc = 0x411830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x411838u);
        ctx->pc = 0x411834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411830u;
        // 0x411834: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411830u, 0x411838u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x411838u;
label_411838:
    // 0x411838: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x411838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_41183c:
    // 0x41183c: 0x2e21818  mult        $v1, $s7, $v0
    ctx->pc = 0x41183cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_411840:
    // 0x411840: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x411840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_411844:
    // 0x411844: 0xac40120c  sw          $zero, 0x120C($v0)
    ctx->pc = 0x411844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4620), GPR_U32(ctx, 0));
label_411848:
    // 0x411848: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x411848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_41184c:
    // 0x41184c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x41184cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_411850:
    // 0x411850: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x411850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_411854:
    // 0x411854: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x411854u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_411858:
    // 0x411858: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x411858u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_41185c:
    // 0x41185c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x41185cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_411860:
    // 0x411860: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x411860u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_411864:
    // 0x411864: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x411864u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_411868:
    // 0x411868: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x411868u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41186c:
    // 0x41186c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x41186cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_411870:
    // 0x411870: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x411870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_411874:
    // 0x411874: 0x3e00008  jr          $ra
label_411878:
    if (ctx->pc == 0x411878u) {
        ctx->pc = 0x411878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411874u;
        // 0x411878: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41187Cu;
        goto label_41187c;
    }
    ctx->pc = 0x411874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x411878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411874u;
        // 0x411878: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41187Cu;
label_41187c:
    // 0x41187c: 0x0  nop
    ctx->pc = 0x41187cu;
    // NOP
    ctx->pc = 0x411880u;
}
