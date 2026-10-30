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

// Function: sub_00143590
// Address: 0x143590 - 0x143918
void sub_00143590_0x143590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143590_0x143590");
#endif

    switch (ctx->pc) {
        case 0x143590u: goto label_143590;
        case 0x143594u: goto label_143594;
        case 0x143598u: goto label_143598;
        case 0x14359cu: goto label_14359c;
        case 0x1435a0u: goto label_1435a0;
        case 0x1435a4u: goto label_1435a4;
        case 0x1435a8u: goto label_1435a8;
        case 0x1435acu: goto label_1435ac;
        case 0x1435b0u: goto label_1435b0;
        case 0x1435b4u: goto label_1435b4;
        case 0x1435b8u: goto label_1435b8;
        case 0x1435bcu: goto label_1435bc;
        case 0x1435c0u: goto label_1435c0;
        case 0x1435c4u: goto label_1435c4;
        case 0x1435c8u: goto label_1435c8;
        case 0x1435ccu: goto label_1435cc;
        case 0x1435d0u: goto label_1435d0;
        case 0x1435d4u: goto label_1435d4;
        case 0x1435d8u: goto label_1435d8;
        case 0x1435dcu: goto label_1435dc;
        case 0x1435e0u: goto label_1435e0;
        case 0x1435e4u: goto label_1435e4;
        case 0x1435e8u: goto label_1435e8;
        case 0x1435ecu: goto label_1435ec;
        case 0x1435f0u: goto label_1435f0;
        case 0x1435f4u: goto label_1435f4;
        case 0x1435f8u: goto label_1435f8;
        case 0x1435fcu: goto label_1435fc;
        case 0x143600u: goto label_143600;
        case 0x143604u: goto label_143604;
        case 0x143608u: goto label_143608;
        case 0x14360cu: goto label_14360c;
        case 0x143610u: goto label_143610;
        case 0x143614u: goto label_143614;
        case 0x143618u: goto label_143618;
        case 0x14361cu: goto label_14361c;
        case 0x143620u: goto label_143620;
        case 0x143624u: goto label_143624;
        case 0x143628u: goto label_143628;
        case 0x14362cu: goto label_14362c;
        case 0x143630u: goto label_143630;
        case 0x143634u: goto label_143634;
        case 0x143638u: goto label_143638;
        case 0x14363cu: goto label_14363c;
        case 0x143640u: goto label_143640;
        case 0x143644u: goto label_143644;
        case 0x143648u: goto label_143648;
        case 0x14364cu: goto label_14364c;
        case 0x143650u: goto label_143650;
        case 0x143654u: goto label_143654;
        case 0x143658u: goto label_143658;
        case 0x14365cu: goto label_14365c;
        case 0x143660u: goto label_143660;
        case 0x143664u: goto label_143664;
        case 0x143668u: goto label_143668;
        case 0x14366cu: goto label_14366c;
        case 0x143670u: goto label_143670;
        case 0x143674u: goto label_143674;
        case 0x143678u: goto label_143678;
        case 0x14367cu: goto label_14367c;
        case 0x143680u: goto label_143680;
        case 0x143684u: goto label_143684;
        case 0x143688u: goto label_143688;
        case 0x14368cu: goto label_14368c;
        case 0x143690u: goto label_143690;
        case 0x143694u: goto label_143694;
        case 0x143698u: goto label_143698;
        case 0x14369cu: goto label_14369c;
        case 0x1436a0u: goto label_1436a0;
        case 0x1436a4u: goto label_1436a4;
        case 0x1436a8u: goto label_1436a8;
        case 0x1436acu: goto label_1436ac;
        case 0x1436b0u: goto label_1436b0;
        case 0x1436b4u: goto label_1436b4;
        case 0x1436b8u: goto label_1436b8;
        case 0x1436bcu: goto label_1436bc;
        case 0x1436c0u: goto label_1436c0;
        case 0x1436c4u: goto label_1436c4;
        case 0x1436c8u: goto label_1436c8;
        case 0x1436ccu: goto label_1436cc;
        case 0x1436d0u: goto label_1436d0;
        case 0x1436d4u: goto label_1436d4;
        case 0x1436d8u: goto label_1436d8;
        case 0x1436dcu: goto label_1436dc;
        case 0x1436e0u: goto label_1436e0;
        case 0x1436e4u: goto label_1436e4;
        case 0x1436e8u: goto label_1436e8;
        case 0x1436ecu: goto label_1436ec;
        case 0x1436f0u: goto label_1436f0;
        case 0x1436f4u: goto label_1436f4;
        case 0x1436f8u: goto label_1436f8;
        case 0x1436fcu: goto label_1436fc;
        case 0x143700u: goto label_143700;
        case 0x143704u: goto label_143704;
        case 0x143708u: goto label_143708;
        case 0x14370cu: goto label_14370c;
        case 0x143710u: goto label_143710;
        case 0x143714u: goto label_143714;
        case 0x143718u: goto label_143718;
        case 0x14371cu: goto label_14371c;
        case 0x143720u: goto label_143720;
        case 0x143724u: goto label_143724;
        case 0x143728u: goto label_143728;
        case 0x14372cu: goto label_14372c;
        case 0x143730u: goto label_143730;
        case 0x143734u: goto label_143734;
        case 0x143738u: goto label_143738;
        case 0x14373cu: goto label_14373c;
        case 0x143740u: goto label_143740;
        case 0x143744u: goto label_143744;
        case 0x143748u: goto label_143748;
        case 0x14374cu: goto label_14374c;
        case 0x143750u: goto label_143750;
        case 0x143754u: goto label_143754;
        case 0x143758u: goto label_143758;
        case 0x14375cu: goto label_14375c;
        case 0x143760u: goto label_143760;
        case 0x143764u: goto label_143764;
        case 0x143768u: goto label_143768;
        case 0x14376cu: goto label_14376c;
        case 0x143770u: goto label_143770;
        case 0x143774u: goto label_143774;
        case 0x143778u: goto label_143778;
        case 0x14377cu: goto label_14377c;
        case 0x143780u: goto label_143780;
        case 0x143784u: goto label_143784;
        case 0x143788u: goto label_143788;
        case 0x14378cu: goto label_14378c;
        case 0x143790u: goto label_143790;
        case 0x143794u: goto label_143794;
        case 0x143798u: goto label_143798;
        case 0x14379cu: goto label_14379c;
        case 0x1437a0u: goto label_1437a0;
        case 0x1437a4u: goto label_1437a4;
        case 0x1437a8u: goto label_1437a8;
        case 0x1437acu: goto label_1437ac;
        case 0x1437b0u: goto label_1437b0;
        case 0x1437b4u: goto label_1437b4;
        case 0x1437b8u: goto label_1437b8;
        case 0x1437bcu: goto label_1437bc;
        case 0x1437c0u: goto label_1437c0;
        case 0x1437c4u: goto label_1437c4;
        case 0x1437c8u: goto label_1437c8;
        case 0x1437ccu: goto label_1437cc;
        case 0x1437d0u: goto label_1437d0;
        case 0x1437d4u: goto label_1437d4;
        case 0x1437d8u: goto label_1437d8;
        case 0x1437dcu: goto label_1437dc;
        case 0x1437e0u: goto label_1437e0;
        case 0x1437e4u: goto label_1437e4;
        case 0x1437e8u: goto label_1437e8;
        case 0x1437ecu: goto label_1437ec;
        case 0x1437f0u: goto label_1437f0;
        case 0x1437f4u: goto label_1437f4;
        case 0x1437f8u: goto label_1437f8;
        case 0x1437fcu: goto label_1437fc;
        case 0x143800u: goto label_143800;
        case 0x143804u: goto label_143804;
        case 0x143808u: goto label_143808;
        case 0x14380cu: goto label_14380c;
        case 0x143810u: goto label_143810;
        case 0x143814u: goto label_143814;
        case 0x143818u: goto label_143818;
        case 0x14381cu: goto label_14381c;
        case 0x143820u: goto label_143820;
        case 0x143824u: goto label_143824;
        case 0x143828u: goto label_143828;
        case 0x14382cu: goto label_14382c;
        case 0x143830u: goto label_143830;
        case 0x143834u: goto label_143834;
        case 0x143838u: goto label_143838;
        case 0x14383cu: goto label_14383c;
        case 0x143840u: goto label_143840;
        case 0x143844u: goto label_143844;
        case 0x143848u: goto label_143848;
        case 0x14384cu: goto label_14384c;
        case 0x143850u: goto label_143850;
        case 0x143854u: goto label_143854;
        case 0x143858u: goto label_143858;
        case 0x14385cu: goto label_14385c;
        case 0x143860u: goto label_143860;
        case 0x143864u: goto label_143864;
        case 0x143868u: goto label_143868;
        case 0x14386cu: goto label_14386c;
        case 0x143870u: goto label_143870;
        case 0x143874u: goto label_143874;
        case 0x143878u: goto label_143878;
        case 0x14387cu: goto label_14387c;
        case 0x143880u: goto label_143880;
        case 0x143884u: goto label_143884;
        case 0x143888u: goto label_143888;
        case 0x14388cu: goto label_14388c;
        case 0x143890u: goto label_143890;
        case 0x143894u: goto label_143894;
        case 0x143898u: goto label_143898;
        case 0x14389cu: goto label_14389c;
        case 0x1438a0u: goto label_1438a0;
        case 0x1438a4u: goto label_1438a4;
        case 0x1438a8u: goto label_1438a8;
        case 0x1438acu: goto label_1438ac;
        case 0x1438b0u: goto label_1438b0;
        case 0x1438b4u: goto label_1438b4;
        case 0x1438b8u: goto label_1438b8;
        case 0x1438bcu: goto label_1438bc;
        case 0x1438c0u: goto label_1438c0;
        case 0x1438c4u: goto label_1438c4;
        case 0x1438c8u: goto label_1438c8;
        case 0x1438ccu: goto label_1438cc;
        case 0x1438d0u: goto label_1438d0;
        case 0x1438d4u: goto label_1438d4;
        case 0x1438d8u: goto label_1438d8;
        case 0x1438dcu: goto label_1438dc;
        case 0x1438e0u: goto label_1438e0;
        case 0x1438e4u: goto label_1438e4;
        case 0x1438e8u: goto label_1438e8;
        case 0x1438ecu: goto label_1438ec;
        case 0x1438f0u: goto label_1438f0;
        case 0x1438f4u: goto label_1438f4;
        case 0x1438f8u: goto label_1438f8;
        case 0x1438fcu: goto label_1438fc;
        case 0x143900u: goto label_143900;
        case 0x143904u: goto label_143904;
        case 0x143908u: goto label_143908;
        case 0x14390cu: goto label_14390c;
        case 0x143910u: goto label_143910;
        case 0x143914u: goto label_143914;
        default: break;
    }

    ctx->pc = 0x143590u;

label_143590:
    // 0x143590: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x143590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_143594:
    // 0x143594: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x143594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_143598:
    // 0x143598: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x143598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_14359c:
    // 0x14359c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14359cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1435a0:
    // 0x1435a0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1435a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1435a4:
    // 0x1435a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1435a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1435a8:
    // 0x1435a8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1435a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1435ac:
    // 0x1435ac: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1435acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1435b0:
    // 0x1435b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1435b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1435b4:
    // 0x1435b4: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1435b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1435b8:
    // 0x1435b8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1435b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1435bc:
    // 0x1435bc: 0x844401f0  lh          $a0, 0x1F0($v0)
    ctx->pc = 0x1435bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
label_1435c0:
    // 0x1435c0: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x1435c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_1435c4:
    // 0x1435c4: 0x60f809  jalr        $v1
label_1435c8:
    if (ctx->pc == 0x1435C8u) {
        ctx->pc = 0x1435C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1435C4u;
        // 0x1435c8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1435CCu;
        goto label_1435cc;
    }
    ctx->pc = 0x1435C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1435CCu);
        ctx->pc = 0x1435C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1435C4u;
        // 0x1435c8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1435C4u, 0x1435CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1435CCu;
label_1435cc:
    // 0x1435cc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1435ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1435d0:
    // 0x1435d0: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x1435d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
label_1435d4:
    // 0x1435d4: 0x84440200  lh          $a0, 0x200($v0)
    ctx->pc = 0x1435d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 512)));
label_1435d8:
    // 0x1435d8: 0x8c430204  lw          $v1, 0x204($v0)
    ctx->pc = 0x1435d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
label_1435dc:
    // 0x1435dc: 0x60f809  jalr        $v1
label_1435e0:
    if (ctx->pc == 0x1435E0u) {
        ctx->pc = 0x1435E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1435DCu;
        // 0x1435e0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1435E4u;
        goto label_1435e4;
    }
    ctx->pc = 0x1435DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1435E4u);
        ctx->pc = 0x1435E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1435DCu;
        // 0x1435e0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1435DCu, 0x1435E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1435E4u;
label_1435e4:
    // 0x1435e4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1435e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1435e8:
    // 0x1435e8: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x1435e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
label_1435ec:
    // 0x1435ec: 0x84440208  lh          $a0, 0x208($v0)
    ctx->pc = 0x1435ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 520)));
label_1435f0:
    // 0x1435f0: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x1435f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_1435f4:
    // 0x1435f4: 0x60f809  jalr        $v1
label_1435f8:
    if (ctx->pc == 0x1435F8u) {
        ctx->pc = 0x1435F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1435F4u;
        // 0x1435f8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1435FCu;
        goto label_1435fc;
    }
    ctx->pc = 0x1435F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1435FCu);
        ctx->pc = 0x1435F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1435F4u;
        // 0x1435f8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1435F4u, 0x1435FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1435FCu;
label_1435fc:
    // 0x1435fc: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x1435fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
label_143600:
    // 0x143600: 0x8e650214  lw          $a1, 0x214($s3)
    ctx->pc = 0x143600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
label_143604:
    // 0x143604: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x143604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_143608:
    // 0x143608: 0x84440208  lh          $a0, 0x208($v0)
    ctx->pc = 0x143608u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 520)));
label_14360c:
    // 0x14360c: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x14360cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_143610:
    // 0x143610: 0x60f809  jalr        $v1
label_143614:
    if (ctx->pc == 0x143614u) {
        ctx->pc = 0x143614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143610u;
        // 0x143614: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143618u;
        goto label_143618;
    }
    ctx->pc = 0x143610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x143618u);
        ctx->pc = 0x143614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143610u;
        // 0x143614: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143610u, 0x143618u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143618u;
label_143618:
    // 0x143618: 0xc6640220  lwc1        $f4, 0x220($s3)
    ctx->pc = 0x143618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_14361c:
    // 0x14361c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14361cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_143620:
    // 0x143620: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x143620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_143624:
    // 0x143624: 0xc6630230  lwc1        $f3, 0x230($s3)
    ctx->pc = 0x143624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_143628:
    // 0x143628: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x143628u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_14362c:
    // 0x14362c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x14362cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_143630:
    // 0x143630: 0xc6610058  lwc1        $f1, 0x58($s3)
    ctx->pc = 0x143630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_143634:
    // 0x143634: 0x8e710214  lw          $s1, 0x214($s3)
    ctx->pc = 0x143634u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
label_143638:
    // 0x143638: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x143638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_14363c:
    // 0x14363c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x14363cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_143640:
    // 0x143640: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x143640u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_143644:
    // 0x143644: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x143644u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
label_143648:
    // 0x143648: 0xe6610058  swc1        $f1, 0x58($s3)
    ctx->pc = 0x143648u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
label_14364c:
    // 0x14364c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x14364cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_143650:
    // 0x143650: 0x84a40210  lh          $a0, 0x210($a1)
    ctx->pc = 0x143650u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 528)));
label_143654:
    // 0x143654: 0x860301b0  lh          $v1, 0x1B0($s0)
    ctx->pc = 0x143654u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 432)));
label_143658:
    // 0x143658: 0x8ca20214  lw          $v0, 0x214($a1)
    ctx->pc = 0x143658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_14365c:
    // 0x14365c: 0x261001b0  addiu       $s0, $s0, 0x1B0
    ctx->pc = 0x14365cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
label_143660:
    // 0x143660: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x143660u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_143664:
    // 0x143664: 0x40f809  jalr        $v0
label_143668:
    if (ctx->pc == 0x143668u) {
        ctx->pc = 0x143668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143664u;
        // 0x143668: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14366Cu;
        goto label_14366c;
    }
    ctx->pc = 0x143664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14366Cu);
        ctx->pc = 0x143668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143664u;
        // 0x143668: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143664u, 0x14366Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14366Cu;
label_14366c:
    // 0x14366c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14366cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_143670:
    // 0x143670: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x143670u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_143674:
    // 0x143674: 0x60f809  jalr        $v1
label_143678:
    if (ctx->pc == 0x143678u) {
        ctx->pc = 0x143678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143674u;
        // 0x143678: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14367Cu;
        goto label_14367c;
    }
    ctx->pc = 0x143674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14367Cu);
        ctx->pc = 0x143678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143674u;
        // 0x143678: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143674u, 0x14367Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14367Cu;
label_14367c:
    // 0x14367c: 0x8e650214  lw          $a1, 0x214($s3)
    ctx->pc = 0x14367cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
label_143680:
    // 0x143680: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x143680u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_143684:
    // 0x143684: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x143684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_143688:
    // 0x143688: 0x84440130  lh          $a0, 0x130($v0)
    ctx->pc = 0x143688u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 304)));
label_14368c:
    // 0x14368c: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x14368cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_143690:
    // 0x143690: 0x60f809  jalr        $v1
label_143694:
    if (ctx->pc == 0x143694u) {
        ctx->pc = 0x143694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143690u;
        // 0x143694: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143698u;
        goto label_143698;
    }
    ctx->pc = 0x143690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x143698u);
        ctx->pc = 0x143694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143690u;
        // 0x143694: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143690u, 0x143698u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143698u;
label_143698:
    // 0x143698: 0x8e650210  lw          $a1, 0x210($s3)
    ctx->pc = 0x143698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
label_14369c:
    // 0x14369c: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
label_1436a0:
    if (ctx->pc == 0x1436A0u) {
        ctx->pc = 0x1436A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14369Cu;
        // 0x1436a0: 0xc660021c  lwc1        $f0, 0x21C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1436A4u;
        goto label_1436a4;
    }
    ctx->pc = 0x14369Cu;
    {
        const bool branch_taken_0x14369c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14369c) {
            ctx->pc = 0x1436A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14369Cu;
            // 0x1436a0: 0xc660021c  lwc1        $f0, 0x21C($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1436D0u;
            goto label_1436d0;
        }
    }
    ctx->pc = 0x1436A4u;
label_1436a4:
    // 0x1436a4: 0x8e620214  lw          $v0, 0x214($s3)
    ctx->pc = 0x1436a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
label_1436a8:
    // 0x1436a8: 0x50a20009  beql        $a1, $v0, . + 4 + (0x9 << 2)
label_1436ac:
    if (ctx->pc == 0x1436ACu) {
        ctx->pc = 0x1436ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1436A8u;
        // 0x1436ac: 0xc660021c  lwc1        $f0, 0x21C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1436B0u;
        goto label_1436b0;
    }
    ctx->pc = 0x1436A8u;
    {
        const bool branch_taken_0x1436a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1436a8) {
            ctx->pc = 0x1436ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1436A8u;
            // 0x1436ac: 0xc660021c  lwc1        $f0, 0x21C($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1436D0u;
            goto label_1436d0;
        }
    }
    ctx->pc = 0x1436B0u;
label_1436b0:
    // 0x1436b0: 0x10b30006  beq         $a1, $s3, . + 4 + (0x6 << 2)
label_1436b4:
    if (ctx->pc == 0x1436B4u) {
        ctx->pc = 0x1436B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1436B0u;
        // 0x1436b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1436B8u;
        goto label_1436b8;
    }
    ctx->pc = 0x1436B0u;
    {
        const bool branch_taken_0x1436b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        ctx->pc = 0x1436B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1436B0u;
        // 0x1436b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1436b0) {
            ctx->pc = 0x1436CCu;
            goto label_1436cc;
        }
    }
    ctx->pc = 0x1436B8u;
label_1436b8:
    // 0x1436b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1436b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1436bc:
    // 0x1436bc: 0x84440130  lh          $a0, 0x130($v0)
    ctx->pc = 0x1436bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 304)));
label_1436c0:
    // 0x1436c0: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x1436c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_1436c4:
    // 0x1436c4: 0x60f809  jalr        $v1
label_1436c8:
    if (ctx->pc == 0x1436C8u) {
        ctx->pc = 0x1436C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1436C4u;
        // 0x1436c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1436CCu;
        goto label_1436cc;
    }
    ctx->pc = 0x1436C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1436CCu);
        ctx->pc = 0x1436C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1436C4u;
        // 0x1436c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1436C4u, 0x1436CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1436CCu;
label_1436cc:
    // 0x1436cc: 0xc660021c  lwc1        $f0, 0x21C($s3)
    ctx->pc = 0x1436ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1436d0:
    // 0x1436d0: 0xc6620218  lwc1        $f2, 0x218($s3)
    ctx->pc = 0x1436d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1436d4:
    // 0x1436d4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1436d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1436d8:
    // 0x1436d8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1436d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1436dc:
    // 0x1436dc: 0xe67401a0  swc1        $f20, 0x1A0($s3)
    ctx->pc = 0x1436dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 416), bits); }
label_1436e0:
    // 0x1436e0: 0x4602a834  c.lt.s      $f21, $f2
    ctx->pc = 0x1436e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1436e4:
    // 0x1436e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1436e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1436e8:
    // 0x1436e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1436e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1436ec:
    // 0x1436ec: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1436f0:
    if (ctx->pc == 0x1436F0u) {
        ctx->pc = 0x1436F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1436ECu;
        // 0x1436f0: 0xe660021c  swc1        $f0, 0x21C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 540), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1436F4u;
        goto label_1436f4;
    }
    ctx->pc = 0x1436ECu;
    {
        const bool branch_taken_0x1436ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1436F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1436ECu;
        // 0x1436f0: 0xe660021c  swc1        $f0, 0x21C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1436ec) {
            ctx->pc = 0x143700u;
            goto label_143700;
        }
    }
    ctx->pc = 0x1436F4u;
label_1436f4:
    // 0x1436f4: 0x0  nop
    ctx->pc = 0x1436f4u;
    // NOP
label_1436f8:
    // 0x1436f8: 0x0  nop
    ctx->pc = 0x1436f8u;
    // NOP
label_1436fc:
    // 0x1436fc: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x1436fcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_143700:
    // 0x143700: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x143700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_143704:
    // 0x143704: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x143704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_143708:
    // 0x143708: 0x267001e0  addiu       $s0, $s3, 0x1E0
    ctx->pc = 0x143708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 480));
label_14370c:
    // 0x14370c: 0xe6610220  swc1        $f1, 0x220($s3)
    ctx->pc = 0x14370cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 544), bits); }
label_143710:
    // 0x143710: 0x46140829  min.s       $f0, $f1, $f20
    ctx->pc = 0x143710u;
    ctx->f[0] = std::min(ctx->f[1], ctx->f[20]);
label_143714:
    // 0x143714: 0x46150068  max.s       $f1, $f0, $f21
    ctx->pc = 0x143714u;
    ctx->f[1] = std::max(ctx->f[0], ctx->f[21]);
label_143718:
    // 0x143718: 0x8e650214  lw          $a1, 0x214($s3)
    ctx->pc = 0x143718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
label_14371c:
    // 0x14371c: 0xe6610220  swc1        $f1, 0x220($s3)
    ctx->pc = 0x14371cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 544), bits); }
label_143720:
    // 0x143720: 0x26710020  addiu       $s1, $s3, 0x20
    ctx->pc = 0x143720u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_143724:
    // 0x143724: 0x26720010  addiu       $s2, $s3, 0x10
    ctx->pc = 0x143724u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_143728:
    // 0x143728: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x143728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_14372c:
    // 0x14372c: 0x84640248  lh          $a0, 0x248($v1)
    ctx->pc = 0x14372cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 584)));
label_143730:
    // 0x143730: 0x8c62024c  lw          $v0, 0x24C($v1)
    ctx->pc = 0x143730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 588)));
label_143734:
    // 0x143734: 0x40f809  jalr        $v0
label_143738:
    if (ctx->pc == 0x143738u) {
        ctx->pc = 0x143738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143734u;
        // 0x143738: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14373Cu;
        goto label_14373c;
    }
    ctx->pc = 0x143734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14373Cu);
        ctx->pc = 0x143738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143734u;
        // 0x143738: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143734u, 0x14373Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14373Cu;
label_14373c:
    // 0x14373c: 0xc6610220  lwc1        $f1, 0x220($s3)
    ctx->pc = 0x14373cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_143740:
    // 0x143740: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x143740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_143744:
    // 0x143744: 0x7a650200  lq          $a1, 0x200($s3)
    ctx->pc = 0x143744u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 19), 512)));
label_143748:
    // 0x143748: 0x4601a001  sub.s       $f0, $f20, $f1
    ctx->pc = 0x143748u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_14374c:
    // 0x14374c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14374cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_143750:
    // 0x143750: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x143750u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_143754:
    // 0x143754: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x143754u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_143758:
    // 0x143758: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x143758u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_14375c:
    // 0x14375c: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x14375cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
label_143760:
    // 0x143760: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x143760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
label_143764:
    // 0x143764: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x143764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
label_143768:
    // 0x143768: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x143768u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_14376c:
    // 0x14376c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x14376cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_143770:
    // 0x143770: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x143770u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_143774:
    // 0x143774: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x143774u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_143778:
    // 0x143778: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x143778u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_14377c:
    // 0x14377c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x14377cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_143780:
    // 0x143780: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x143780u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_143784:
    // 0x143784: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x143784u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_143788:
    // 0x143788: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x143788u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_14378c:
    // 0x14378c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x14378cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_143790:
    // 0x143790: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x143790u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
label_143794:
    // 0x143794: 0x7e650180  sq          $a1, 0x180($s3)
    ctx->pc = 0x143794u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 384), GPR_VEC(ctx, 5));
label_143798:
    // 0x143798: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x143798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_14379c:
    // 0x14379c: 0xe674018c  swc1        $f20, 0x18C($s3)
    ctx->pc = 0x14379cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 396), bits); }
label_1437a0:
    // 0x1437a0: 0xc0482a6  jal         func_120A98
label_1437a4:
    if (ctx->pc == 0x1437A4u) {
        ctx->pc = 0x1437A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1437A0u;
        // 0x1437a4: 0x7fa50010  sq          $a1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1437A8u;
        goto label_1437a8;
    }
    ctx->pc = 0x1437A0u;
    SET_GPR_U32(ctx, 31, 0x1437A8u);
    ctx->pc = 0x1437A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1437A0u;
    // 0x1437a4: 0x7fa50010  sq          $a1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A98u, 0x1437A0u, 0x1437A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1437A8u;
label_1437a8:
    // 0x1437a8: 0x8e650214  lw          $a1, 0x214($s3)
    ctx->pc = 0x1437a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
label_1437ac:
    // 0x1437ac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1437acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1437b0:
    // 0x1437b0: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x1437b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_1437b4:
    // 0x1437b4: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x1437b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_1437b8:
    // 0x1437b8: 0x40f809  jalr        $v0
label_1437bc:
    if (ctx->pc == 0x1437BCu) {
        ctx->pc = 0x1437BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1437B8u;
        // 0x1437bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1437C0u;
        goto label_1437c0;
    }
    ctx->pc = 0x1437B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1437C0u);
        ctx->pc = 0x1437BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1437B8u;
        // 0x1437bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1437B8u, 0x1437C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1437C0u;
label_1437c0:
    // 0x1437c0: 0xc66c0220  lwc1        $f12, 0x220($s3)
    ctx->pc = 0x1437c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1437c4:
    // 0x1437c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1437c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1437c8:
    // 0x1437c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1437c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1437cc:
    // 0x1437cc: 0xc0cda80  jal         func_336A00
label_1437d0:
    if (ctx->pc == 0x1437D0u) {
        ctx->pc = 0x1437D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1437CCu;
        // 0x1437d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1437D4u;
        goto label_1437d4;
    }
    ctx->pc = 0x1437CCu;
    SET_GPR_U32(ctx, 31, 0x1437D4u);
    ctx->pc = 0x1437D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1437CCu;
    // 0x1437d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A00u, 0x1437CCu, 0x1437D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1437D4u;
label_1437d4:
    // 0x1437d4: 0x8e650214  lw          $a1, 0x214($s3)
    ctx->pc = 0x1437d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
label_1437d8:
    // 0x1437d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1437d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1437dc:
    // 0x1437dc: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x1437dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_1437e0:
    // 0x1437e0: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x1437e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_1437e4:
    // 0x1437e4: 0x40f809  jalr        $v0
label_1437e8:
    if (ctx->pc == 0x1437E8u) {
        ctx->pc = 0x1437E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1437E4u;
        // 0x1437e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1437ECu;
        goto label_1437ec;
    }
    ctx->pc = 0x1437E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1437ECu);
        ctx->pc = 0x1437E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1437E4u;
        // 0x1437e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1437E4u, 0x1437ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1437ECu;
label_1437ec:
    // 0x1437ec: 0xc6610220  lwc1        $f1, 0x220($s3)
    ctx->pc = 0x1437ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1437f0:
    // 0x1437f0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1437f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1437f4:
    // 0x1437f4: 0x8c6547c4  lw          $a1, 0x47C4($v1)
    ctx->pc = 0x1437f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18372)));
label_1437f8:
    // 0x1437f8: 0x4601a001  sub.s       $f0, $f20, $f1
    ctx->pc = 0x1437f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_1437fc:
    // 0x1437fc: 0x7a6401f0  lq          $a0, 0x1F0($s3)
    ctx->pc = 0x1437fcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 19), 496)));
label_143800:
    // 0x143800: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x143800u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_143804:
    // 0x143804: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x143804u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_143808:
    // 0x143808: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x143808u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_14380c:
    // 0x14380c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x14380cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_143810:
    // 0x143810: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x143810u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_143814:
    // 0x143814: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x143814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
label_143818:
    // 0x143818: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x143818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_14381c:
    // 0x14381c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x14381cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_143820:
    // 0x143820: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x143820u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_143824:
    // 0x143824: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x143824u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_143828:
    // 0x143828: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x143828u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_14382c:
    // 0x14382c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x14382cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_143830:
    // 0x143830: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x143830u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_143834:
    // 0x143834: 0x7e630010  sq          $v1, 0x10($s3)
    ctx->pc = 0x143834u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 3));
label_143838:
    // 0x143838: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x143838u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_14383c:
    // 0x14383c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x14383cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_143840:
    // 0x143840: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x143840u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_143844:
    // 0x143844: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x143844u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_143848:
    // 0x143848: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x143848u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_14384c:
    // 0x14384c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x14384cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_143850:
    // 0x143850: 0x7e640010  sq          $a0, 0x10($s3)
    ctx->pc = 0x143850u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 4));
label_143854:
    // 0x143854: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x143854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
label_143858:
    // 0x143858: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x143858u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_14385c:
    // 0x14385c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x14385cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_143860:
    // 0x143860: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x143860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_143864:
    // 0x143864: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x143864u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_143868:
    // 0x143868: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x143868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_14386c:
    // 0x14386c: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x14386cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_143870:
    // 0x143870: 0xa0f809  jalr        $a1
label_143874:
    if (ctx->pc == 0x143874u) {
        ctx->pc = 0x143874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143870u;
        // 0x143874: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143878u;
        goto label_143878;
    }
    ctx->pc = 0x143870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x143878u);
        ctx->pc = 0x143874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143870u;
        // 0x143874: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143870u, 0x143878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143878u;
label_143878:
    // 0x143878: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x143878u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_14387c:
    // 0x14387c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14387cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_143880:
    // 0x143880: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x143880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_143884:
    // 0x143884: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x143884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_143888:
    // 0x143888: 0xc0d467e  jal         func_3519F8
label_14388c:
    if (ctx->pc == 0x14388Cu) {
        ctx->pc = 0x14388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143888u;
        // 0x14388c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143890u;
        goto label_143890;
    }
    ctx->pc = 0x143888u;
    SET_GPR_U32(ctx, 31, 0x143890u);
    ctx->pc = 0x14388Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143888u;
    // 0x14388c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3519F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3519F8u, 0x143888u, 0x143890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143890u;
label_143890:
    // 0x143890: 0xc66c01a0  lwc1        $f12, 0x1A0($s3)
    ctx->pc = 0x143890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_143894:
    // 0x143894: 0xc04828c  jal         func_120A30
label_143898:
    if (ctx->pc == 0x143898u) {
        ctx->pc = 0x143898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143894u;
        // 0x143898: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14389Cu;
        goto label_14389c;
    }
    ctx->pc = 0x143894u;
    SET_GPR_U32(ctx, 31, 0x14389Cu);
    ctx->pc = 0x143898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143894u;
    // 0x143898: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A30u, 0x143894u, 0x14389Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14389Cu;
label_14389c:
    // 0x14389c: 0xc661021c  lwc1        $f1, 0x21C($s3)
    ctx->pc = 0x14389cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1438a0:
    // 0x1438a0: 0xc6600218  lwc1        $f0, 0x218($s3)
    ctx->pc = 0x1438a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1438a4:
    // 0x1438a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1438a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1438a8:
    // 0x1438a8: 0x0  nop
    ctx->pc = 0x1438a8u;
    // NOP
label_1438ac:
    // 0x1438ac: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1438b0:
    if (ctx->pc == 0x1438B0u) {
        ctx->pc = 0x1438B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438ACu;
        // 0x1438b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1438B4u;
        goto label_1438b4;
    }
    ctx->pc = 0x1438ACu;
    {
        const bool branch_taken_0x1438ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1438B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438ACu;
        // 0x1438b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1438ac) {
            ctx->pc = 0x1438B8u;
            goto label_1438b8;
        }
    }
    ctx->pc = 0x1438B4u;
label_1438b4:
    // 0x1438b4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1438b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1438b8:
    // 0x1438b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1438b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1438bc:
    // 0x1438bc: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_1438c0:
    if (ctx->pc == 0x1438C0u) {
        ctx->pc = 0x1438C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438BCu;
        // 0x1438c0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1438C4u;
        goto label_1438c4;
    }
    ctx->pc = 0x1438BCu;
    {
        const bool branch_taken_0x1438bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1438C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438BCu;
        // 0x1438c0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1438bc) {
            ctx->pc = 0x1438F4u;
            goto label_1438f4;
        }
    }
    ctx->pc = 0x1438C4u;
label_1438c4:
    // 0x1438c4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1438c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1438c8:
    // 0x1438c8: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x1438c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_1438cc:
    // 0x1438cc: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x1438ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_1438d0:
    // 0x1438d0: 0x40f809  jalr        $v0
label_1438d4:
    if (ctx->pc == 0x1438D4u) {
        ctx->pc = 0x1438D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438D0u;
        // 0x1438d4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1438D8u;
        goto label_1438d8;
    }
    ctx->pc = 0x1438D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1438D8u);
        ctx->pc = 0x1438D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438D0u;
        // 0x1438d4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1438D0u, 0x1438D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1438D8u;
label_1438d8:
    // 0x1438d8: 0x8e640214  lw          $a0, 0x214($s3)
    ctx->pc = 0x1438d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
label_1438dc:
    // 0x1438dc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1438dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1438e0:
    // 0x1438e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1438e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1438e4:
    // 0x1438e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1438e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1438e8:
    // 0x1438e8: 0xc047b82  jal         func_11EE08
label_1438ec:
    if (ctx->pc == 0x1438ECu) {
        ctx->pc = 0x1438ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438E8u;
        // 0x1438ec: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1438F0u;
        goto label_1438f0;
    }
    ctx->pc = 0x1438E8u;
    SET_GPR_U32(ctx, 31, 0x1438F0u);
    ctx->pc = 0x1438ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1438E8u;
    // 0x1438ec: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE08u, 0x1438E8u, 0x1438F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1438F0u;
label_1438f0:
    // 0x1438f0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1438f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1438f4:
    // 0x1438f4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1438f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1438f8:
    // 0x1438f8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1438f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1438fc:
    // 0x1438fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1438fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_143900:
    // 0x143900: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x143900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_143904:
    // 0x143904: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x143904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_143908:
    // 0x143908: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x143908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_14390c:
    // 0x14390c: 0x3e00008  jr          $ra
label_143910:
    if (ctx->pc == 0x143910u) {
        ctx->pc = 0x143910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14390Cu;
        // 0x143910: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143914u;
        goto label_143914;
    }
    ctx->pc = 0x14390Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14390Cu;
        // 0x143910: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14390Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143914u;
label_143914:
    // 0x143914: 0x0  nop
    ctx->pc = 0x143914u;
    // NOP
    ctx->pc = 0x143918u;
}
