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

// Function: sub_00243420
// Address: 0x243420 - 0x243848
void sub_00243420_0x243420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243420_0x243420");
#endif

    switch (ctx->pc) {
        case 0x243420u: goto label_243420;
        case 0x243424u: goto label_243424;
        case 0x243428u: goto label_243428;
        case 0x24342cu: goto label_24342c;
        case 0x243430u: goto label_243430;
        case 0x243434u: goto label_243434;
        case 0x243438u: goto label_243438;
        case 0x24343cu: goto label_24343c;
        case 0x243440u: goto label_243440;
        case 0x243444u: goto label_243444;
        case 0x243448u: goto label_243448;
        case 0x24344cu: goto label_24344c;
        case 0x243450u: goto label_243450;
        case 0x243454u: goto label_243454;
        case 0x243458u: goto label_243458;
        case 0x24345cu: goto label_24345c;
        case 0x243460u: goto label_243460;
        case 0x243464u: goto label_243464;
        case 0x243468u: goto label_243468;
        case 0x24346cu: goto label_24346c;
        case 0x243470u: goto label_243470;
        case 0x243474u: goto label_243474;
        case 0x243478u: goto label_243478;
        case 0x24347cu: goto label_24347c;
        case 0x243480u: goto label_243480;
        case 0x243484u: goto label_243484;
        case 0x243488u: goto label_243488;
        case 0x24348cu: goto label_24348c;
        case 0x243490u: goto label_243490;
        case 0x243494u: goto label_243494;
        case 0x243498u: goto label_243498;
        case 0x24349cu: goto label_24349c;
        case 0x2434a0u: goto label_2434a0;
        case 0x2434a4u: goto label_2434a4;
        case 0x2434a8u: goto label_2434a8;
        case 0x2434acu: goto label_2434ac;
        case 0x2434b0u: goto label_2434b0;
        case 0x2434b4u: goto label_2434b4;
        case 0x2434b8u: goto label_2434b8;
        case 0x2434bcu: goto label_2434bc;
        case 0x2434c0u: goto label_2434c0;
        case 0x2434c4u: goto label_2434c4;
        case 0x2434c8u: goto label_2434c8;
        case 0x2434ccu: goto label_2434cc;
        case 0x2434d0u: goto label_2434d0;
        case 0x2434d4u: goto label_2434d4;
        case 0x2434d8u: goto label_2434d8;
        case 0x2434dcu: goto label_2434dc;
        case 0x2434e0u: goto label_2434e0;
        case 0x2434e4u: goto label_2434e4;
        case 0x2434e8u: goto label_2434e8;
        case 0x2434ecu: goto label_2434ec;
        case 0x2434f0u: goto label_2434f0;
        case 0x2434f4u: goto label_2434f4;
        case 0x2434f8u: goto label_2434f8;
        case 0x2434fcu: goto label_2434fc;
        case 0x243500u: goto label_243500;
        case 0x243504u: goto label_243504;
        case 0x243508u: goto label_243508;
        case 0x24350cu: goto label_24350c;
        case 0x243510u: goto label_243510;
        case 0x243514u: goto label_243514;
        case 0x243518u: goto label_243518;
        case 0x24351cu: goto label_24351c;
        case 0x243520u: goto label_243520;
        case 0x243524u: goto label_243524;
        case 0x243528u: goto label_243528;
        case 0x24352cu: goto label_24352c;
        case 0x243530u: goto label_243530;
        case 0x243534u: goto label_243534;
        case 0x243538u: goto label_243538;
        case 0x24353cu: goto label_24353c;
        case 0x243540u: goto label_243540;
        case 0x243544u: goto label_243544;
        case 0x243548u: goto label_243548;
        case 0x24354cu: goto label_24354c;
        case 0x243550u: goto label_243550;
        case 0x243554u: goto label_243554;
        case 0x243558u: goto label_243558;
        case 0x24355cu: goto label_24355c;
        case 0x243560u: goto label_243560;
        case 0x243564u: goto label_243564;
        case 0x243568u: goto label_243568;
        case 0x24356cu: goto label_24356c;
        case 0x243570u: goto label_243570;
        case 0x243574u: goto label_243574;
        case 0x243578u: goto label_243578;
        case 0x24357cu: goto label_24357c;
        case 0x243580u: goto label_243580;
        case 0x243584u: goto label_243584;
        case 0x243588u: goto label_243588;
        case 0x24358cu: goto label_24358c;
        case 0x243590u: goto label_243590;
        case 0x243594u: goto label_243594;
        case 0x243598u: goto label_243598;
        case 0x24359cu: goto label_24359c;
        case 0x2435a0u: goto label_2435a0;
        case 0x2435a4u: goto label_2435a4;
        case 0x2435a8u: goto label_2435a8;
        case 0x2435acu: goto label_2435ac;
        case 0x2435b0u: goto label_2435b0;
        case 0x2435b4u: goto label_2435b4;
        case 0x2435b8u: goto label_2435b8;
        case 0x2435bcu: goto label_2435bc;
        case 0x2435c0u: goto label_2435c0;
        case 0x2435c4u: goto label_2435c4;
        case 0x2435c8u: goto label_2435c8;
        case 0x2435ccu: goto label_2435cc;
        case 0x2435d0u: goto label_2435d0;
        case 0x2435d4u: goto label_2435d4;
        case 0x2435d8u: goto label_2435d8;
        case 0x2435dcu: goto label_2435dc;
        case 0x2435e0u: goto label_2435e0;
        case 0x2435e4u: goto label_2435e4;
        case 0x2435e8u: goto label_2435e8;
        case 0x2435ecu: goto label_2435ec;
        case 0x2435f0u: goto label_2435f0;
        case 0x2435f4u: goto label_2435f4;
        case 0x2435f8u: goto label_2435f8;
        case 0x2435fcu: goto label_2435fc;
        case 0x243600u: goto label_243600;
        case 0x243604u: goto label_243604;
        case 0x243608u: goto label_243608;
        case 0x24360cu: goto label_24360c;
        case 0x243610u: goto label_243610;
        case 0x243614u: goto label_243614;
        case 0x243618u: goto label_243618;
        case 0x24361cu: goto label_24361c;
        case 0x243620u: goto label_243620;
        case 0x243624u: goto label_243624;
        case 0x243628u: goto label_243628;
        case 0x24362cu: goto label_24362c;
        case 0x243630u: goto label_243630;
        case 0x243634u: goto label_243634;
        case 0x243638u: goto label_243638;
        case 0x24363cu: goto label_24363c;
        case 0x243640u: goto label_243640;
        case 0x243644u: goto label_243644;
        case 0x243648u: goto label_243648;
        case 0x24364cu: goto label_24364c;
        case 0x243650u: goto label_243650;
        case 0x243654u: goto label_243654;
        case 0x243658u: goto label_243658;
        case 0x24365cu: goto label_24365c;
        case 0x243660u: goto label_243660;
        case 0x243664u: goto label_243664;
        case 0x243668u: goto label_243668;
        case 0x24366cu: goto label_24366c;
        case 0x243670u: goto label_243670;
        case 0x243674u: goto label_243674;
        case 0x243678u: goto label_243678;
        case 0x24367cu: goto label_24367c;
        case 0x243680u: goto label_243680;
        case 0x243684u: goto label_243684;
        case 0x243688u: goto label_243688;
        case 0x24368cu: goto label_24368c;
        case 0x243690u: goto label_243690;
        case 0x243694u: goto label_243694;
        case 0x243698u: goto label_243698;
        case 0x24369cu: goto label_24369c;
        case 0x2436a0u: goto label_2436a0;
        case 0x2436a4u: goto label_2436a4;
        case 0x2436a8u: goto label_2436a8;
        case 0x2436acu: goto label_2436ac;
        case 0x2436b0u: goto label_2436b0;
        case 0x2436b4u: goto label_2436b4;
        case 0x2436b8u: goto label_2436b8;
        case 0x2436bcu: goto label_2436bc;
        case 0x2436c0u: goto label_2436c0;
        case 0x2436c4u: goto label_2436c4;
        case 0x2436c8u: goto label_2436c8;
        case 0x2436ccu: goto label_2436cc;
        case 0x2436d0u: goto label_2436d0;
        case 0x2436d4u: goto label_2436d4;
        case 0x2436d8u: goto label_2436d8;
        case 0x2436dcu: goto label_2436dc;
        case 0x2436e0u: goto label_2436e0;
        case 0x2436e4u: goto label_2436e4;
        case 0x2436e8u: goto label_2436e8;
        case 0x2436ecu: goto label_2436ec;
        case 0x2436f0u: goto label_2436f0;
        case 0x2436f4u: goto label_2436f4;
        case 0x2436f8u: goto label_2436f8;
        case 0x2436fcu: goto label_2436fc;
        case 0x243700u: goto label_243700;
        case 0x243704u: goto label_243704;
        case 0x243708u: goto label_243708;
        case 0x24370cu: goto label_24370c;
        case 0x243710u: goto label_243710;
        case 0x243714u: goto label_243714;
        case 0x243718u: goto label_243718;
        case 0x24371cu: goto label_24371c;
        case 0x243720u: goto label_243720;
        case 0x243724u: goto label_243724;
        case 0x243728u: goto label_243728;
        case 0x24372cu: goto label_24372c;
        case 0x243730u: goto label_243730;
        case 0x243734u: goto label_243734;
        case 0x243738u: goto label_243738;
        case 0x24373cu: goto label_24373c;
        case 0x243740u: goto label_243740;
        case 0x243744u: goto label_243744;
        case 0x243748u: goto label_243748;
        case 0x24374cu: goto label_24374c;
        case 0x243750u: goto label_243750;
        case 0x243754u: goto label_243754;
        case 0x243758u: goto label_243758;
        case 0x24375cu: goto label_24375c;
        case 0x243760u: goto label_243760;
        case 0x243764u: goto label_243764;
        case 0x243768u: goto label_243768;
        case 0x24376cu: goto label_24376c;
        case 0x243770u: goto label_243770;
        case 0x243774u: goto label_243774;
        case 0x243778u: goto label_243778;
        case 0x24377cu: goto label_24377c;
        case 0x243780u: goto label_243780;
        case 0x243784u: goto label_243784;
        case 0x243788u: goto label_243788;
        case 0x24378cu: goto label_24378c;
        case 0x243790u: goto label_243790;
        case 0x243794u: goto label_243794;
        case 0x243798u: goto label_243798;
        case 0x24379cu: goto label_24379c;
        case 0x2437a0u: goto label_2437a0;
        case 0x2437a4u: goto label_2437a4;
        case 0x2437a8u: goto label_2437a8;
        case 0x2437acu: goto label_2437ac;
        case 0x2437b0u: goto label_2437b0;
        case 0x2437b4u: goto label_2437b4;
        case 0x2437b8u: goto label_2437b8;
        case 0x2437bcu: goto label_2437bc;
        case 0x2437c0u: goto label_2437c0;
        case 0x2437c4u: goto label_2437c4;
        case 0x2437c8u: goto label_2437c8;
        case 0x2437ccu: goto label_2437cc;
        case 0x2437d0u: goto label_2437d0;
        case 0x2437d4u: goto label_2437d4;
        case 0x2437d8u: goto label_2437d8;
        case 0x2437dcu: goto label_2437dc;
        case 0x2437e0u: goto label_2437e0;
        case 0x2437e4u: goto label_2437e4;
        case 0x2437e8u: goto label_2437e8;
        case 0x2437ecu: goto label_2437ec;
        case 0x2437f0u: goto label_2437f0;
        case 0x2437f4u: goto label_2437f4;
        case 0x2437f8u: goto label_2437f8;
        case 0x2437fcu: goto label_2437fc;
        case 0x243800u: goto label_243800;
        case 0x243804u: goto label_243804;
        case 0x243808u: goto label_243808;
        case 0x24380cu: goto label_24380c;
        case 0x243810u: goto label_243810;
        case 0x243814u: goto label_243814;
        case 0x243818u: goto label_243818;
        case 0x24381cu: goto label_24381c;
        case 0x243820u: goto label_243820;
        case 0x243824u: goto label_243824;
        case 0x243828u: goto label_243828;
        case 0x24382cu: goto label_24382c;
        case 0x243830u: goto label_243830;
        case 0x243834u: goto label_243834;
        case 0x243838u: goto label_243838;
        case 0x24383cu: goto label_24383c;
        case 0x243840u: goto label_243840;
        case 0x243844u: goto label_243844;
        default: break;
    }

    ctx->pc = 0x243420u;

label_243420:
    // 0x243420: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x243420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_243424:
    // 0x243424: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x243424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_243428:
    // 0x243428: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x243428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_24342c:
    // 0x24342c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24342cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_243430:
    // 0x243430: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x243430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_243434:
    // 0x243434: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x243434u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_243438:
    // 0x243438: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x243438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_24343c:
    // 0x24343c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x24343cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_243440:
    // 0x243440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_243444:
    // 0x243444: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x243444u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_243448:
    // 0x243448: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x243448u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_24344c:
    // 0x24344c: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x24344cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_243450:
    // 0x243450: 0xc0874fa  jal         func_21D3E8
label_243454:
    if (ctx->pc == 0x243454u) {
        ctx->pc = 0x243454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243450u;
        // 0x243454: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x243458u;
        goto label_243458;
    }
    ctx->pc = 0x243450u;
    SET_GPR_U32(ctx, 31, 0x243458u);
    ctx->pc = 0x243454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243450u;
    // 0x243454: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x243450u, 0x243458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243458u;
label_243458:
    // 0x243458: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x243458u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_24345c:
    // 0x24345c: 0x50600045  beql        $v1, $zero, . + 4 + (0x45 << 2)
label_243460:
    if (ctx->pc == 0x243460u) {
        ctx->pc = 0x243460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24345Cu;
        // 0x243460: 0x86030092  lh          $v1, 0x92($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243464u;
        goto label_243464;
    }
    ctx->pc = 0x24345Cu;
    {
        const bool branch_taken_0x24345c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24345c) {
            ctx->pc = 0x243460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24345Cu;
            // 0x243460: 0x86030092  lh          $v1, 0x92($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243574u;
            goto label_243574;
        }
    }
    ctx->pc = 0x243464u;
label_243464:
    // 0x243464: 0x860201c6  lh          $v0, 0x1C6($s0)
    ctx->pc = 0x243464u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 454)));
label_243468:
    // 0x243468: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_24346c:
    if (ctx->pc == 0x24346Cu) {
        ctx->pc = 0x243470u;
        goto label_243470;
    }
    ctx->pc = 0x243468u;
    {
        const bool branch_taken_0x243468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243468) {
            ctx->pc = 0x243478u;
            goto label_243478;
        }
    }
    ctx->pc = 0x243470u;
label_243470:
    // 0x243470: 0xc088420  jal         func_221080
label_243474:
    if (ctx->pc == 0x243474u) {
        ctx->pc = 0x243474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243470u;
        // 0x243474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243478u;
        goto label_243478;
    }
    ctx->pc = 0x243470u;
    SET_GPR_U32(ctx, 31, 0x243478u);
    ctx->pc = 0x243474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243470u;
    // 0x243474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221080u, 0x243470u, 0x243478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243478u;
label_243478:
    // 0x243478: 0xc089fda  jal         func_227F68
label_24347c:
    if (ctx->pc == 0x24347Cu) {
        ctx->pc = 0x24347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243478u;
        // 0x24347c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243480u;
        goto label_243480;
    }
    ctx->pc = 0x243478u;
    SET_GPR_U32(ctx, 31, 0x243480u);
    ctx->pc = 0x24347Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243478u;
    // 0x24347c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F68u, 0x243478u, 0x243480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243480u;
label_243480:
    // 0x243480: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_243484:
    if (ctx->pc == 0x243484u) {
        ctx->pc = 0x243488u;
        goto label_243488;
    }
    ctx->pc = 0x243480u;
    {
        const bool branch_taken_0x243480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243480) {
            ctx->pc = 0x243498u;
            goto label_243498;
        }
    }
    ctx->pc = 0x243488u;
label_243488:
    // 0x243488: 0xc089f0a  jal         func_227C28
label_24348c:
    if (ctx->pc == 0x24348Cu) {
        ctx->pc = 0x24348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243488u;
        // 0x24348c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243490u;
        goto label_243490;
    }
    ctx->pc = 0x243488u;
    SET_GPR_U32(ctx, 31, 0x243490u);
    ctx->pc = 0x24348Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243488u;
    // 0x24348c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C28u, 0x243488u, 0x243490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243490u;
label_243490:
    // 0x243490: 0x1000001f  b           . + 4 + (0x1F << 2)
label_243494:
    if (ctx->pc == 0x243494u) {
        ctx->pc = 0x243494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243490u;
        // 0x243494: 0x860501be  lh          $a1, 0x1BE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243498u;
        goto label_243498;
    }
    ctx->pc = 0x243490u;
    {
        const bool branch_taken_0x243490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243490u;
        // 0x243494: 0x860501be  lh          $a1, 0x1BE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243490) {
            ctx->pc = 0x243510u;
            goto label_243510;
        }
    }
    ctx->pc = 0x243498u;
label_243498:
    // 0x243498: 0xc089f1a  jal         func_227C68
label_24349c:
    if (ctx->pc == 0x24349Cu) {
        ctx->pc = 0x24349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243498u;
        // 0x24349c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2434A0u;
        goto label_2434a0;
    }
    ctx->pc = 0x243498u;
    SET_GPR_U32(ctx, 31, 0x2434A0u);
    ctx->pc = 0x24349Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243498u;
    // 0x24349c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C68u, 0x243498u, 0x2434A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2434A0u;
label_2434a0:
    // 0x2434a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2434a4:
    if (ctx->pc == 0x2434A4u) {
        ctx->pc = 0x2434A8u;
        goto label_2434a8;
    }
    ctx->pc = 0x2434A0u;
    {
        const bool branch_taken_0x2434a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2434a0) {
            ctx->pc = 0x2434B8u;
            goto label_2434b8;
        }
    }
    ctx->pc = 0x2434A8u;
label_2434a8:
    // 0x2434a8: 0xc089ede  jal         func_227B78
label_2434ac:
    if (ctx->pc == 0x2434ACu) {
        ctx->pc = 0x2434ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2434A8u;
        // 0x2434ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2434B0u;
        goto label_2434b0;
    }
    ctx->pc = 0x2434A8u;
    SET_GPR_U32(ctx, 31, 0x2434B0u);
    ctx->pc = 0x2434ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2434A8u;
    // 0x2434ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B78u, 0x2434A8u, 0x2434B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2434B0u;
label_2434b0:
    // 0x2434b0: 0x10000017  b           . + 4 + (0x17 << 2)
label_2434b4:
    if (ctx->pc == 0x2434B4u) {
        ctx->pc = 0x2434B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2434B0u;
        // 0x2434b4: 0x860501be  lh          $a1, 0x1BE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2434B8u;
        goto label_2434b8;
    }
    ctx->pc = 0x2434B0u;
    {
        const bool branch_taken_0x2434b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2434B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2434B0u;
        // 0x2434b4: 0x860501be  lh          $a1, 0x1BE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2434b0) {
            ctx->pc = 0x243510u;
            goto label_243510;
        }
    }
    ctx->pc = 0x2434B8u;
label_2434b8:
    // 0x2434b8: 0xc089e8e  jal         func_227A38
label_2434bc:
    if (ctx->pc == 0x2434BCu) {
        ctx->pc = 0x2434BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2434B8u;
        // 0x2434bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2434C0u;
        goto label_2434c0;
    }
    ctx->pc = 0x2434B8u;
    SET_GPR_U32(ctx, 31, 0x2434C0u);
    ctx->pc = 0x2434BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2434B8u;
    // 0x2434bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A38u, 0x2434B8u, 0x2434C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2434C0u;
label_2434c0:
    // 0x2434c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2434c4:
    if (ctx->pc == 0x2434C4u) {
        ctx->pc = 0x2434C8u;
        goto label_2434c8;
    }
    ctx->pc = 0x2434C0u;
    {
        const bool branch_taken_0x2434c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2434c0) {
            ctx->pc = 0x2434D8u;
            goto label_2434d8;
        }
    }
    ctx->pc = 0x2434C8u;
label_2434c8:
    // 0x2434c8: 0xc09117e  jal         func_2445F8
label_2434cc:
    if (ctx->pc == 0x2434CCu) {
        ctx->pc = 0x2434CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2434C8u;
        // 0x2434cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2434D0u;
        goto label_2434d0;
    }
    ctx->pc = 0x2434C8u;
    SET_GPR_U32(ctx, 31, 0x2434D0u);
    ctx->pc = 0x2434CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2434C8u;
    // 0x2434cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2445F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2445F8u, 0x2434C8u, 0x2434D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2434D0u;
label_2434d0:
    // 0x2434d0: 0x1000000f  b           . + 4 + (0xF << 2)
label_2434d4:
    if (ctx->pc == 0x2434D4u) {
        ctx->pc = 0x2434D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2434D0u;
        // 0x2434d4: 0x860501be  lh          $a1, 0x1BE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2434D8u;
        goto label_2434d8;
    }
    ctx->pc = 0x2434D0u;
    {
        const bool branch_taken_0x2434d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2434D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2434D0u;
        // 0x2434d4: 0x860501be  lh          $a1, 0x1BE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2434d0) {
            ctx->pc = 0x243510u;
            goto label_243510;
        }
    }
    ctx->pc = 0x2434D8u;
label_2434d8:
    // 0x2434d8: 0xc089e98  jal         func_227A60
label_2434dc:
    if (ctx->pc == 0x2434DCu) {
        ctx->pc = 0x2434DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2434D8u;
        // 0x2434dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2434E0u;
        goto label_2434e0;
    }
    ctx->pc = 0x2434D8u;
    SET_GPR_U32(ctx, 31, 0x2434E0u);
    ctx->pc = 0x2434DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2434D8u;
    // 0x2434dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A60u, 0x2434D8u, 0x2434E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2434E0u;
label_2434e0:
    // 0x2434e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2434e4:
    if (ctx->pc == 0x2434E4u) {
        ctx->pc = 0x2434E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2434E0u;
        // 0x2434e4: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2434E8u;
        goto label_2434e8;
    }
    ctx->pc = 0x2434E0u;
    {
        const bool branch_taken_0x2434e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2434E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2434E0u;
        // 0x2434e4: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2434e0) {
            ctx->pc = 0x2434F8u;
            goto label_2434f8;
        }
    }
    ctx->pc = 0x2434E8u;
label_2434e8:
    // 0x2434e8: 0xc091188  jal         func_244620
label_2434ec:
    if (ctx->pc == 0x2434ECu) {
        ctx->pc = 0x2434ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2434E8u;
        // 0x2434ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2434F0u;
        goto label_2434f0;
    }
    ctx->pc = 0x2434E8u;
    SET_GPR_U32(ctx, 31, 0x2434F0u);
    ctx->pc = 0x2434ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2434E8u;
    // 0x2434ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244620u, 0x2434E8u, 0x2434F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2434F0u;
label_2434f0:
    // 0x2434f0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2434f4:
    if (ctx->pc == 0x2434F4u) {
        ctx->pc = 0x2434F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2434F0u;
        // 0x2434f4: 0x860501be  lh          $a1, 0x1BE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2434F8u;
        goto label_2434f8;
    }
    ctx->pc = 0x2434F0u;
    {
        const bool branch_taken_0x2434f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2434F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2434F0u;
        // 0x2434f4: 0x860501be  lh          $a1, 0x1BE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2434f0) {
            ctx->pc = 0x243510u;
            goto label_243510;
        }
    }
    ctx->pc = 0x2434F8u;
label_2434f8:
    // 0x2434f8: 0x2446c770  addiu       $a2, $v0, -0x3890
    ctx->pc = 0x2434f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952816));
label_2434fc:
    // 0x2434fc: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x2434fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_243500:
    // 0x243500: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x243500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_243504:
    // 0x243504: 0xb20301c3  sdl         $v1, 0x1C3($s0)
    ctx->pc = 0x243504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 451); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_243508:
    // 0x243508: 0xb60301bc  sdr         $v1, 0x1BC($s0)
    ctx->pc = 0x243508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 444); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_24350c:
    // 0x24350c: 0x860501be  lh          $a1, 0x1BE($s0)
    ctx->pc = 0x24350cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
label_243510:
    // 0x243510: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
label_243514:
    if (ctx->pc == 0x243514u) {
        ctx->pc = 0x243514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243510u;
        // 0x243514: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243518u;
        goto label_243518;
    }
    ctx->pc = 0x243510u;
    {
        const bool branch_taken_0x243510 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x243514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243510u;
        // 0x243514: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243510) {
            ctx->pc = 0x243538u;
            goto label_243538;
        }
    }
    ctx->pc = 0x243518u;
label_243518:
    // 0x243518: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x243518u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
label_24351c:
    // 0x24351c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x24351cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_243520:
    // 0x243520: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x243520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_243524:
    // 0x243524: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x243524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_243528:
    // 0x243528: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x243528u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_24352c:
    // 0x24352c: 0x11383f  dsra32      $a3, $s1, 0
    ctx->pc = 0x24352cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 17) >> (32 + 0));
label_243530:
    // 0x243530: 0x10000003  b           . + 4 + (0x3 << 2)
label_243534:
    if (ctx->pc == 0x243534u) {
        ctx->pc = 0x243534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243530u;
        // 0x243534: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243538u;
        goto label_243538;
    }
    ctx->pc = 0x243530u;
    {
        const bool branch_taken_0x243530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243530u;
        // 0x243534: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243530) {
            ctx->pc = 0x243540u;
            goto label_243540;
        }
    }
    ctx->pc = 0x243538u;
label_243538:
    // 0x243538: 0x8e0701c0  lw          $a3, 0x1C0($s0)
    ctx->pc = 0x243538u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_24353c:
    // 0x24353c: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x24353cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_243540:
    // 0x243540: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
label_243544:
    if (ctx->pc == 0x243544u) {
        ctx->pc = 0x243544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243540u;
        // 0x243544: 0x3222ffff  andi        $v0, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x243548u;
        goto label_243548;
    }
    ctx->pc = 0x243540u;
    {
        const bool branch_taken_0x243540 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x243544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243540u;
        // 0x243544: 0x3222ffff  andi        $v0, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x243540) {
            ctx->pc = 0x243558u;
            goto label_243558;
        }
    }
    ctx->pc = 0x243548u;
label_243548:
    // 0x243548: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x243548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_24354c:
    // 0x24354c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x24354cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_243550:
    // 0x243550: 0x10000002  b           . + 4 + (0x2 << 2)
label_243554:
    if (ctx->pc == 0x243554u) {
        ctx->pc = 0x243554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243550u;
        // 0x243554: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243558u;
        goto label_243558;
    }
    ctx->pc = 0x243550u;
    {
        const bool branch_taken_0x243550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243550u;
        // 0x243554: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243550) {
            ctx->pc = 0x24355Cu;
            goto label_24355c;
        }
    }
    ctx->pc = 0x243558u;
label_243558:
    // 0x243558: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x243558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_24355c:
    // 0x24355c: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x24355cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_243560:
    // 0x243560: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x243560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_243564:
    // 0x243564: 0xe0f809  jalr        $a3
label_243568:
    if (ctx->pc == 0x243568u) {
        ctx->pc = 0x243568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243564u;
        // 0x243568: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24356Cu;
        goto label_24356c;
    }
    ctx->pc = 0x243564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x24356Cu);
        ctx->pc = 0x243568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243564u;
        // 0x243568: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243564u, 0x24356Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24356Cu;
label_24356c:
    // 0x24356c: 0x100000ac  b           . + 4 + (0xAC << 2)
label_243570:
    if (ctx->pc == 0x243570u) {
        ctx->pc = 0x243570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24356Cu;
        // 0x243570: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243574u;
        goto label_243574;
    }
    ctx->pc = 0x24356Cu;
    {
        const bool branch_taken_0x24356c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24356Cu;
        // 0x243570: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24356c) {
            ctx->pc = 0x243820u;
            goto label_243820;
        }
    }
    ctx->pc = 0x243574u;
label_243574:
    // 0x243574: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x243574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_243578:
    // 0x243578: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x243578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_24357c:
    // 0x24357c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x24357cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_243580:
    // 0x243580: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x243580u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_243584:
    // 0x243584: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x243584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_243588:
    // 0x243588: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x243588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24358c:
    // 0x24358c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24358cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_243590:
    // 0x243590: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x243590u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_243594:
    // 0x243594: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x243594u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_243598:
    // 0x243598: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x243598u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_24359c:
    // 0x24359c: 0xc088f2c  jal         func_223CB0
label_2435a0:
    if (ctx->pc == 0x2435A0u) {
        ctx->pc = 0x2435A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24359Cu;
        // 0x2435a0: 0x7e630000  sq          $v1, 0x0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2435A4u;
        goto label_2435a4;
    }
    ctx->pc = 0x24359Cu;
    SET_GPR_U32(ctx, 31, 0x2435A4u);
    ctx->pc = 0x2435A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24359Cu;
    // 0x2435a0: 0x7e630000  sq          $v1, 0x0($s3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223CB0u, 0x24359Cu, 0x2435A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2435A4u;
label_2435a4:
    // 0x2435a4: 0x5440009e  bnel        $v0, $zero, . + 4 + (0x9E << 2)
label_2435a8:
    if (ctx->pc == 0x2435A8u) {
        ctx->pc = 0x2435A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2435A4u;
        // 0x2435a8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2435ACu;
        goto label_2435ac;
    }
    ctx->pc = 0x2435A4u;
    {
        const bool branch_taken_0x2435a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2435a4) {
            ctx->pc = 0x2435A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2435A4u;
            // 0x2435a8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243820u;
            goto label_243820;
        }
    }
    ctx->pc = 0x2435ACu;
label_2435ac:
    // 0x2435ac: 0xc088e60  jal         func_223980
label_2435b0:
    if (ctx->pc == 0x2435B0u) {
        ctx->pc = 0x2435B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2435ACu;
        // 0x2435b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2435B4u;
        goto label_2435b4;
    }
    ctx->pc = 0x2435ACu;
    SET_GPR_U32(ctx, 31, 0x2435B4u);
    ctx->pc = 0x2435B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2435ACu;
    // 0x2435b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x2435ACu, 0x2435B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2435B4u;
label_2435b4:
    // 0x2435b4: 0x5440009a  bnel        $v0, $zero, . + 4 + (0x9A << 2)
label_2435b8:
    if (ctx->pc == 0x2435B8u) {
        ctx->pc = 0x2435B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2435B4u;
        // 0x2435b8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2435BCu;
        goto label_2435bc;
    }
    ctx->pc = 0x2435B4u;
    {
        const bool branch_taken_0x2435b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2435b4) {
            ctx->pc = 0x2435B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2435B4u;
            // 0x2435b8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243820u;
            goto label_243820;
        }
    }
    ctx->pc = 0x2435BCu;
label_2435bc:
    // 0x2435bc: 0x8e020280  lw          $v0, 0x280($s0)
    ctx->pc = 0x2435bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
label_2435c0:
    // 0x2435c0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2435c0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2435c4:
    // 0x2435c4: 0x54400096  bnel        $v0, $zero, . + 4 + (0x96 << 2)
label_2435c8:
    if (ctx->pc == 0x2435C8u) {
        ctx->pc = 0x2435C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2435C4u;
        // 0x2435c8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2435CCu;
        goto label_2435cc;
    }
    ctx->pc = 0x2435C4u;
    {
        const bool branch_taken_0x2435c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2435c4) {
            ctx->pc = 0x2435C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2435C4u;
            // 0x2435c8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243820u;
            goto label_243820;
        }
    }
    ctx->pc = 0x2435CCu;
label_2435cc:
    // 0x2435cc: 0xc089f66  jal         func_227D98
label_2435d0:
    if (ctx->pc == 0x2435D0u) {
        ctx->pc = 0x2435D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2435CCu;
        // 0x2435d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2435D4u;
        goto label_2435d4;
    }
    ctx->pc = 0x2435CCu;
    SET_GPR_U32(ctx, 31, 0x2435D4u);
    ctx->pc = 0x2435D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2435CCu;
    // 0x2435d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x2435CCu, 0x2435D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2435D4u;
label_2435d4:
    // 0x2435d4: 0x54400092  bnel        $v0, $zero, . + 4 + (0x92 << 2)
label_2435d8:
    if (ctx->pc == 0x2435D8u) {
        ctx->pc = 0x2435D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2435D4u;
        // 0x2435d8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2435DCu;
        goto label_2435dc;
    }
    ctx->pc = 0x2435D4u;
    {
        const bool branch_taken_0x2435d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2435d4) {
            ctx->pc = 0x2435D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2435D4u;
            // 0x2435d8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243820u;
            goto label_243820;
        }
    }
    ctx->pc = 0x2435DCu;
label_2435dc:
    // 0x2435dc: 0xc088ed2  jal         func_223B48
label_2435e0:
    if (ctx->pc == 0x2435E0u) {
        ctx->pc = 0x2435E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2435DCu;
        // 0x2435e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2435E4u;
        goto label_2435e4;
    }
    ctx->pc = 0x2435DCu;
    SET_GPR_U32(ctx, 31, 0x2435E4u);
    ctx->pc = 0x2435E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2435DCu;
    // 0x2435e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x2435DCu, 0x2435E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2435E4u;
label_2435e4:
    // 0x2435e4: 0x5440008e  bnel        $v0, $zero, . + 4 + (0x8E << 2)
label_2435e8:
    if (ctx->pc == 0x2435E8u) {
        ctx->pc = 0x2435E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2435E4u;
        // 0x2435e8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2435ECu;
        goto label_2435ec;
    }
    ctx->pc = 0x2435E4u;
    {
        const bool branch_taken_0x2435e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2435e4) {
            ctx->pc = 0x2435E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2435E4u;
            // 0x2435e8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243820u;
            goto label_243820;
        }
    }
    ctx->pc = 0x2435ECu;
label_2435ec:
    // 0x2435ec: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2435ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2435f0:
    // 0x2435f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2435f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2435f4:
    // 0x2435f4: 0xc089998  jal         func_226660
label_2435f8:
    if (ctx->pc == 0x2435F8u) {
        ctx->pc = 0x2435F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2435F4u;
        // 0x2435f8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2435FCu;
        goto label_2435fc;
    }
    ctx->pc = 0x2435F4u;
    SET_GPR_U32(ctx, 31, 0x2435FCu);
    ctx->pc = 0x2435F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2435F4u;
    // 0x2435f8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2435F4u, 0x2435FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2435FCu;
label_2435fc:
    // 0x2435fc: 0x54400088  bnel        $v0, $zero, . + 4 + (0x88 << 2)
label_243600:
    if (ctx->pc == 0x243600u) {
        ctx->pc = 0x243600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2435FCu;
        // 0x243600: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243604u;
        goto label_243604;
    }
    ctx->pc = 0x2435FCu;
    {
        const bool branch_taken_0x2435fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2435fc) {
            ctx->pc = 0x243600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2435FCu;
            // 0x243600: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243820u;
            goto label_243820;
        }
    }
    ctx->pc = 0x243604u;
label_243604:
    // 0x243604: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x243604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_243608:
    // 0x243608: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x243608u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_24360c:
    // 0x24360c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x24360cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_243610:
    // 0x243610: 0xc087502  jal         func_21D408
label_243614:
    if (ctx->pc == 0x243614u) {
        ctx->pc = 0x243614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243610u;
        // 0x243614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243618u;
        goto label_243618;
    }
    ctx->pc = 0x243610u;
    SET_GPR_U32(ctx, 31, 0x243618u);
    ctx->pc = 0x243614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243610u;
    // 0x243614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x243610u, 0x243618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243618u;
label_243618:
    // 0x243618: 0xc4550110  lwc1        $f21, 0x110($v0)
    ctx->pc = 0x243618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_24361c:
    // 0x24361c: 0xc087438  jal         func_21D0E0
label_243620:
    if (ctx->pc == 0x243620u) {
        ctx->pc = 0x243620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24361Cu;
        // 0x243620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243624u;
        goto label_243624;
    }
    ctx->pc = 0x24361Cu;
    SET_GPR_U32(ctx, 31, 0x243624u);
    ctx->pc = 0x243620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24361Cu;
    // 0x243620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D0E0u, 0x24361Cu, 0x243624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243624u;
label_243624:
    // 0x243624: 0x4600ad01  sub.s       $f20, $f21, $f0
    ctx->pc = 0x243624u;
    ctx->f[20] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_243628:
    // 0x243628: 0x4614b834  c.lt.s      $f23, $f20
    ctx->pc = 0x243628u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24362c:
    // 0x24362c: 0x0  nop
    ctx->pc = 0x24362cu;
    // NOP
label_243630:
    // 0x243630: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_243634:
    if (ctx->pc == 0x243634u) {
        ctx->pc = 0x243638u;
        goto label_243638;
    }
    ctx->pc = 0x243630u;
    {
        const bool branch_taken_0x243630 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243630) {
            ctx->pc = 0x24364Cu;
            goto label_24364c;
        }
    }
    ctx->pc = 0x243638u;
label_243638:
    // 0x243638: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x243638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_24363c:
    // 0x24363c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24363cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_243640:
    // 0x243640: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243644:
    // 0x243644: 0x0  nop
    ctx->pc = 0x243644u;
    // NOP
label_243648:
    // 0x243648: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x243648u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_24364c:
    // 0x24364c: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x24364cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_243650:
    // 0x243650: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x243650u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_243654:
    // 0x243654: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243658:
    // 0x243658: 0x0  nop
    ctx->pc = 0x243658u;
    // NOP
label_24365c:
    // 0x24365c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x24365cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243660:
    // 0x243660: 0x0  nop
    ctx->pc = 0x243660u;
    // NOP
label_243664:
    // 0x243664: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_243668:
    if (ctx->pc == 0x243668u) {
        ctx->pc = 0x243668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243664u;
        // 0x243668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24366Cu;
        goto label_24366c;
    }
    ctx->pc = 0x243664u;
    {
        const bool branch_taken_0x243664 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243664u;
        // 0x243668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243664) {
            ctx->pc = 0x243680u;
            goto label_243680;
        }
    }
    ctx->pc = 0x24366Cu;
label_24366c:
    // 0x24366c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x24366cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_243670:
    // 0x243670: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x243670u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_243674:
    // 0x243674: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243678:
    // 0x243678: 0x0  nop
    ctx->pc = 0x243678u;
    // NOP
label_24367c:
    // 0x24367c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x24367cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_243680:
    // 0x243680: 0x4600a585  abs.s       $f22, $f20
    ctx->pc = 0x243680u;
    ctx->f[22] = FPU_ABS_S(ctx->f[20]);
label_243684:
    // 0x243684: 0xc087502  jal         func_21D408
label_243688:
    if (ctx->pc == 0x243688u) {
        ctx->pc = 0x24368Cu;
        goto label_24368c;
    }
    ctx->pc = 0x243684u;
    SET_GPR_U32(ctx, 31, 0x24368Cu);
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x243684u, 0x24368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24368Cu;
label_24368c:
    // 0x24368c: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x24368cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
label_243690:
    // 0x243690: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x243690u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_243694:
    // 0x243694: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243698:
    // 0x243698: 0x8043000b  lb          $v1, 0xB($v0)
    ctx->pc = 0x243698u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
label_24369c:
    // 0x24369c: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x24369cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2436a0:
    // 0x2436a0: 0x0  nop
    ctx->pc = 0x2436a0u;
    // NOP
label_2436a4:
    // 0x2436a4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_2436a8:
    if (ctx->pc == 0x2436A8u) {
        ctx->pc = 0x2436A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2436A4u;
        // 0x2436a8: 0x3902a  slt         $s2, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2436ACu;
        goto label_2436ac;
    }
    ctx->pc = 0x2436A4u;
    {
        const bool branch_taken_0x2436a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2436A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2436A4u;
        // 0x2436a8: 0x3902a  slt         $s2, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2436a4) {
            ctx->pc = 0x2436CCu;
            goto label_2436cc;
        }
    }
    ctx->pc = 0x2436ACu;
label_2436ac:
    // 0x2436ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2436acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2436b0:
    // 0x2436b0: 0xc08a0d0  jal         func_228340
label_2436b4:
    if (ctx->pc == 0x2436B4u) {
        ctx->pc = 0x2436B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2436B0u;
        // 0x2436b4: 0x2411016e  addiu       $s1, $zero, 0x16E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 366));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2436B8u;
        goto label_2436b8;
    }
    ctx->pc = 0x2436B0u;
    SET_GPR_U32(ctx, 31, 0x2436B8u);
    ctx->pc = 0x2436B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2436B0u;
    // 0x2436b4: 0x2411016e  addiu       $s1, $zero, 0x16E (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 366));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x2436B0u, 0x2436B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2436B8u;
label_2436b8:
    // 0x2436b8: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_2436bc:
    if (ctx->pc == 0x2436BCu) {
        ctx->pc = 0x2436BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2436B8u;
        // 0x2436bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2436C0u;
        goto label_2436c0;
    }
    ctx->pc = 0x2436B8u;
    {
        const bool branch_taken_0x2436b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2436BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2436B8u;
        // 0x2436bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2436b8) {
            ctx->pc = 0x24377Cu;
            goto label_24377c;
        }
    }
    ctx->pc = 0x2436C0u;
label_2436c0:
    // 0x2436c0: 0x24110191  addiu       $s1, $zero, 0x191
    ctx->pc = 0x2436c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 401));
label_2436c4:
    // 0x2436c4: 0x1000002b  b           . + 4 + (0x2B << 2)
label_2436c8:
    if (ctx->pc == 0x2436C8u) {
        ctx->pc = 0x2436C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2436C4u;
        // 0x2436c8: 0x24020193  addiu       $v0, $zero, 0x193 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 403));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2436CCu;
        goto label_2436cc;
    }
    ctx->pc = 0x2436C4u;
    {
        const bool branch_taken_0x2436c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2436C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2436C4u;
        // 0x2436c8: 0x24020193  addiu       $v0, $zero, 0x193 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 403));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2436c4) {
            ctx->pc = 0x243774u;
            goto label_243774;
        }
    }
    ctx->pc = 0x2436CCu;
label_2436cc:
    // 0x2436cc: 0x3c013ffb  lui         $at, 0x3FFB
    ctx->pc = 0x2436ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16379 << 16));
label_2436d0:
    // 0x2436d0: 0x342153d2  ori         $at, $at, 0x53D2
    ctx->pc = 0x2436d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21458);
label_2436d4:
    // 0x2436d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2436d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2436d8:
    // 0x2436d8: 0x0  nop
    ctx->pc = 0x2436d8u;
    // NOP
label_2436dc:
    // 0x2436dc: 0x46160036  c.le.s      $f0, $f22
    ctx->pc = 0x2436dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2436e0:
    // 0x2436e0: 0x0  nop
    ctx->pc = 0x2436e0u;
    // NOP
label_2436e4:
    // 0x2436e4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_2436e8:
    if (ctx->pc == 0x2436E8u) {
        ctx->pc = 0x2436E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2436E4u;
        // 0x2436e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2436ECu;
        goto label_2436ec;
    }
    ctx->pc = 0x2436E4u;
    {
        const bool branch_taken_0x2436e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2436E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2436E4u;
        // 0x2436e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2436e4) {
            ctx->pc = 0x243708u;
            goto label_243708;
        }
    }
    ctx->pc = 0x2436ECu;
label_2436ec:
    // 0x2436ec: 0xc08a0d0  jal         func_228340
label_2436f0:
    if (ctx->pc == 0x2436F0u) {
        ctx->pc = 0x2436F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2436ECu;
        // 0x2436f0: 0x4617ad41  sub.s       $f21, $f21, $f23 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2436F4u;
        goto label_2436f4;
    }
    ctx->pc = 0x2436ECu;
    SET_GPR_U32(ctx, 31, 0x2436F4u);
    ctx->pc = 0x2436F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2436ECu;
    // 0x2436f0: 0x4617ad41  sub.s       $f21, $f21, $f23 (Delay Slot)
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x2436ECu, 0x2436F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2436F4u;
label_2436f4:
    // 0x2436f4: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_2436f8:
    if (ctx->pc == 0x2436F8u) {
        ctx->pc = 0x2436F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2436F4u;
        // 0x2436f8: 0x2411016f  addiu       $s1, $zero, 0x16F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 367));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2436FCu;
        goto label_2436fc;
    }
    ctx->pc = 0x2436F4u;
    {
        const bool branch_taken_0x2436f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2436F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2436F4u;
        // 0x2436f8: 0x2411016f  addiu       $s1, $zero, 0x16F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 367));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2436f4) {
            ctx->pc = 0x243778u;
            goto label_243778;
        }
    }
    ctx->pc = 0x2436FCu;
label_2436fc:
    // 0x2436fc: 0x24110192  addiu       $s1, $zero, 0x192
    ctx->pc = 0x2436fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 402));
label_243700:
    // 0x243700: 0x1000001c  b           . + 4 + (0x1C << 2)
label_243704:
    if (ctx->pc == 0x243704u) {
        ctx->pc = 0x243704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243700u;
        // 0x243704: 0x24020194  addiu       $v0, $zero, 0x194 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 404));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243708u;
        goto label_243708;
    }
    ctx->pc = 0x243700u;
    {
        const bool branch_taken_0x243700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243700u;
        // 0x243704: 0x24020194  addiu       $v0, $zero, 0x194 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 404));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243700) {
            ctx->pc = 0x243774u;
            goto label_243774;
        }
    }
    ctx->pc = 0x243708u;
label_243708:
    // 0x243708: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x243708u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24370c:
    // 0x24370c: 0x0  nop
    ctx->pc = 0x24370cu;
    // NOP
label_243710:
    // 0x243710: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x243710u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243714:
    // 0x243714: 0x0  nop
    ctx->pc = 0x243714u;
    // NOP
label_243718:
    // 0x243718: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_24371c:
    if (ctx->pc == 0x24371Cu) {
        ctx->pc = 0x24371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243718u;
        // 0x24371c: 0x2411016d  addiu       $s1, $zero, 0x16D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 365));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243720u;
        goto label_243720;
    }
    ctx->pc = 0x243718u;
    {
        const bool branch_taken_0x243718 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243718u;
        // 0x24371c: 0x2411016d  addiu       $s1, $zero, 0x16D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 365));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243718) {
            ctx->pc = 0x243748u;
            goto label_243748;
        }
    }
    ctx->pc = 0x243720u;
label_243720:
    // 0x243720: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x243720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_243724:
    // 0x243724: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x243724u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_243728:
    // 0x243728: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24372c:
    // 0x24372c: 0xc08a0d0  jal         func_228340
label_243730:
    if (ctx->pc == 0x243730u) {
        ctx->pc = 0x243730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24372Cu;
        // 0x243730: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x243734u;
        goto label_243734;
    }
    ctx->pc = 0x24372Cu;
    SET_GPR_U32(ctx, 31, 0x243734u);
    ctx->pc = 0x243730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24372Cu;
    // 0x243730: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x24372Cu, 0x243734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243734u;
label_243734:
    // 0x243734: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_243738:
    if (ctx->pc == 0x243738u) {
        ctx->pc = 0x243738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243734u;
        // 0x243738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24373Cu;
        goto label_24373c;
    }
    ctx->pc = 0x243734u;
    {
        const bool branch_taken_0x243734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243734u;
        // 0x243738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243734) {
            ctx->pc = 0x24377Cu;
            goto label_24377c;
        }
    }
    ctx->pc = 0x24373Cu;
label_24373c:
    // 0x24373c: 0x24110190  addiu       $s1, $zero, 0x190
    ctx->pc = 0x24373cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_243740:
    // 0x243740: 0x1000000c  b           . + 4 + (0xC << 2)
label_243744:
    if (ctx->pc == 0x243744u) {
        ctx->pc = 0x243744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243740u;
        // 0x243744: 0x24020196  addiu       $v0, $zero, 0x196 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 406));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243748u;
        goto label_243748;
    }
    ctx->pc = 0x243740u;
    {
        const bool branch_taken_0x243740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243740u;
        // 0x243744: 0x24020196  addiu       $v0, $zero, 0x196 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 406));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243740) {
            ctx->pc = 0x243774u;
            goto label_243774;
        }
    }
    ctx->pc = 0x243748u;
label_243748:
    // 0x243748: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x243748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_24374c:
    // 0x24374c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24374cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_243750:
    // 0x243750: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243754:
    // 0x243754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_243758:
    // 0x243758: 0x2411016c  addiu       $s1, $zero, 0x16C
    ctx->pc = 0x243758u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 364));
label_24375c:
    // 0x24375c: 0xc08a0d0  jal         func_228340
label_243760:
    if (ctx->pc == 0x243760u) {
        ctx->pc = 0x243760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24375Cu;
        // 0x243760: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x243764u;
        goto label_243764;
    }
    ctx->pc = 0x24375Cu;
    SET_GPR_U32(ctx, 31, 0x243764u);
    ctx->pc = 0x243760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24375Cu;
    // 0x243760: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x24375Cu, 0x243764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243764u;
label_243764:
    // 0x243764: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_243768:
    if (ctx->pc == 0x243768u) {
        ctx->pc = 0x243768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243764u;
        // 0x243768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24376Cu;
        goto label_24376c;
    }
    ctx->pc = 0x243764u;
    {
        const bool branch_taken_0x243764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243764u;
        // 0x243768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243764) {
            ctx->pc = 0x24377Cu;
            goto label_24377c;
        }
    }
    ctx->pc = 0x24376Cu;
label_24376c:
    // 0x24376c: 0x2411018f  addiu       $s1, $zero, 0x18F
    ctx->pc = 0x24376cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 399));
label_243770:
    // 0x243770: 0x24020195  addiu       $v0, $zero, 0x195
    ctx->pc = 0x243770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
label_243774:
    // 0x243774: 0x52880b  movn        $s1, $v0, $s2
    ctx->pc = 0x243774u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_243778:
    // 0x243778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24377c:
    // 0x24377c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24377cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_243780:
    // 0x243780: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x243780u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_243784:
    // 0x243784: 0xc0972e4  jal         func_25CB90
label_243788:
    if (ctx->pc == 0x243788u) {
        ctx->pc = 0x243788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243784u;
        // 0x243788: 0x4600ad07  neg.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24378Cu;
        goto label_24378c;
    }
    ctx->pc = 0x243784u;
    SET_GPR_U32(ctx, 31, 0x24378Cu);
    ctx->pc = 0x243788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243784u;
    // 0x243788: 0x4600ad07  neg.s       $f20, $f21 (Delay Slot)
    ctx->f[20] = FPU_NEG_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB90u, 0x243784u, 0x24378Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24378Cu;
label_24378c:
    // 0x24378c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x24378cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_243790:
    // 0x243790: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x243790u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_243794:
    // 0x243794: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243798:
    // 0x243798: 0x0  nop
    ctx->pc = 0x243798u;
    // NOP
label_24379c:
    // 0x24379c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x24379cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2437a0:
    // 0x2437a0: 0x0  nop
    ctx->pc = 0x2437a0u;
    // NOP
label_2437a4:
    // 0x2437a4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2437a8:
    if (ctx->pc == 0x2437A8u) {
        ctx->pc = 0x2437ACu;
        goto label_2437ac;
    }
    ctx->pc = 0x2437A4u;
    {
        const bool branch_taken_0x2437a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2437a4) {
            ctx->pc = 0x2437C0u;
            goto label_2437c0;
        }
    }
    ctx->pc = 0x2437ACu;
label_2437ac:
    // 0x2437ac: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2437acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2437b0:
    // 0x2437b0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2437b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2437b4:
    // 0x2437b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2437b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2437b8:
    // 0x2437b8: 0x0  nop
    ctx->pc = 0x2437b8u;
    // NOP
label_2437bc:
    // 0x2437bc: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2437bcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_2437c0:
    // 0x2437c0: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x2437c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_2437c4:
    // 0x2437c4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2437c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2437c8:
    // 0x2437c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2437c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2437cc:
    // 0x2437cc: 0x0  nop
    ctx->pc = 0x2437ccu;
    // NOP
label_2437d0:
    // 0x2437d0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2437d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2437d4:
    // 0x2437d4: 0x0  nop
    ctx->pc = 0x2437d4u;
    // NOP
label_2437d8:
    // 0x2437d8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2437dc:
    if (ctx->pc == 0x2437DCu) {
        ctx->pc = 0x2437DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2437D8u;
        // 0x2437dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2437E0u;
        goto label_2437e0;
    }
    ctx->pc = 0x2437D8u;
    {
        const bool branch_taken_0x2437d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2437DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2437D8u;
        // 0x2437dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2437d8) {
            ctx->pc = 0x2437F4u;
            goto label_2437f4;
        }
    }
    ctx->pc = 0x2437E0u;
label_2437e0:
    // 0x2437e0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2437e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2437e4:
    // 0x2437e4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2437e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2437e8:
    // 0x2437e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2437e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2437ec:
    // 0x2437ec: 0x0  nop
    ctx->pc = 0x2437ecu;
    // NOP
label_2437f0:
    // 0x2437f0: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2437f0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2437f4:
    // 0x2437f4: 0xc040680  jal         func_101A00
label_2437f8:
    if (ctx->pc == 0x2437F8u) {
        ctx->pc = 0x2437F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2437F4u;
        // 0x2437f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2437FCu;
        goto label_2437fc;
    }
    ctx->pc = 0x2437F4u;
    SET_GPR_U32(ctx, 31, 0x2437FCu);
    ctx->pc = 0x2437F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2437F4u;
    // 0x2437f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x2437F4u, 0x2437FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2437FCu;
label_2437fc:
    // 0x2437fc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2437fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_243800:
    // 0x243800: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x243800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_243804:
    // 0x243804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_243808:
    // 0x243808: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x243808u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_24380c:
    // 0x24380c: 0xc08f3e2  jal         func_23CF88
label_243810:
    if (ctx->pc == 0x243810u) {
        ctx->pc = 0x243810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24380Cu;
        // 0x243810: 0x460d0342  mul.s       $f13, $f0, $f13 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x243814u;
        goto label_243814;
    }
    ctx->pc = 0x24380Cu;
    SET_GPR_U32(ctx, 31, 0x243814u);
    ctx->pc = 0x243810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24380Cu;
    // 0x243810: 0x460d0342  mul.s       $f13, $f0, $f13 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x24380Cu, 0x243814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243814u;
label_243814:
    // 0x243814: 0xc090cd8  jal         func_243360
label_243818:
    if (ctx->pc == 0x243818u) {
        ctx->pc = 0x243818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243814u;
        // 0x243818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24381Cu;
        goto label_24381c;
    }
    ctx->pc = 0x243814u;
    SET_GPR_U32(ctx, 31, 0x24381Cu);
    ctx->pc = 0x243818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243814u;
    // 0x243818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243360u, 0x243814u, 0x24381Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24381Cu;
label_24381c:
    // 0x24381c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x24381cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_243820:
    // 0x243820: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x243820u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_243824:
    // 0x243824: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x243824u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_243828:
    // 0x243828: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x243828u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24382c:
    // 0x24382c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24382cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_243830:
    // 0x243830: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x243830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_243834:
    // 0x243834: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x243834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_243838:
    // 0x243838: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x243838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_24383c:
    // 0x24383c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x24383cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_243840:
    // 0x243840: 0x3e00008  jr          $ra
label_243844:
    if (ctx->pc == 0x243844u) {
        ctx->pc = 0x243844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243840u;
        // 0x243844: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243848u;
        goto label_fallthrough_0x243840;
    }
    ctx->pc = 0x243840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243840u;
        // 0x243844: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x243840:
    ctx->pc = 0x243848u;
}
