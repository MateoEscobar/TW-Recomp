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

// Function: sub_001255F8
// Address: 0x1255f8 - 0x125870
void sub_001255F8_0x1255f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001255F8_0x1255f8");
#endif

    switch (ctx->pc) {
        case 0x1255f8u: goto label_1255f8;
        case 0x1255fcu: goto label_1255fc;
        case 0x125600u: goto label_125600;
        case 0x125604u: goto label_125604;
        case 0x125608u: goto label_125608;
        case 0x12560cu: goto label_12560c;
        case 0x125610u: goto label_125610;
        case 0x125614u: goto label_125614;
        case 0x125618u: goto label_125618;
        case 0x12561cu: goto label_12561c;
        case 0x125620u: goto label_125620;
        case 0x125624u: goto label_125624;
        case 0x125628u: goto label_125628;
        case 0x12562cu: goto label_12562c;
        case 0x125630u: goto label_125630;
        case 0x125634u: goto label_125634;
        case 0x125638u: goto label_125638;
        case 0x12563cu: goto label_12563c;
        case 0x125640u: goto label_125640;
        case 0x125644u: goto label_125644;
        case 0x125648u: goto label_125648;
        case 0x12564cu: goto label_12564c;
        case 0x125650u: goto label_125650;
        case 0x125654u: goto label_125654;
        case 0x125658u: goto label_125658;
        case 0x12565cu: goto label_12565c;
        case 0x125660u: goto label_125660;
        case 0x125664u: goto label_125664;
        case 0x125668u: goto label_125668;
        case 0x12566cu: goto label_12566c;
        case 0x125670u: goto label_125670;
        case 0x125674u: goto label_125674;
        case 0x125678u: goto label_125678;
        case 0x12567cu: goto label_12567c;
        case 0x125680u: goto label_125680;
        case 0x125684u: goto label_125684;
        case 0x125688u: goto label_125688;
        case 0x12568cu: goto label_12568c;
        case 0x125690u: goto label_125690;
        case 0x125694u: goto label_125694;
        case 0x125698u: goto label_125698;
        case 0x12569cu: goto label_12569c;
        case 0x1256a0u: goto label_1256a0;
        case 0x1256a4u: goto label_1256a4;
        case 0x1256a8u: goto label_1256a8;
        case 0x1256acu: goto label_1256ac;
        case 0x1256b0u: goto label_1256b0;
        case 0x1256b4u: goto label_1256b4;
        case 0x1256b8u: goto label_1256b8;
        case 0x1256bcu: goto label_1256bc;
        case 0x1256c0u: goto label_1256c0;
        case 0x1256c4u: goto label_1256c4;
        case 0x1256c8u: goto label_1256c8;
        case 0x1256ccu: goto label_1256cc;
        case 0x1256d0u: goto label_1256d0;
        case 0x1256d4u: goto label_1256d4;
        case 0x1256d8u: goto label_1256d8;
        case 0x1256dcu: goto label_1256dc;
        case 0x1256e0u: goto label_1256e0;
        case 0x1256e4u: goto label_1256e4;
        case 0x1256e8u: goto label_1256e8;
        case 0x1256ecu: goto label_1256ec;
        case 0x1256f0u: goto label_1256f0;
        case 0x1256f4u: goto label_1256f4;
        case 0x1256f8u: goto label_1256f8;
        case 0x1256fcu: goto label_1256fc;
        case 0x125700u: goto label_125700;
        case 0x125704u: goto label_125704;
        case 0x125708u: goto label_125708;
        case 0x12570cu: goto label_12570c;
        case 0x125710u: goto label_125710;
        case 0x125714u: goto label_125714;
        case 0x125718u: goto label_125718;
        case 0x12571cu: goto label_12571c;
        case 0x125720u: goto label_125720;
        case 0x125724u: goto label_125724;
        case 0x125728u: goto label_125728;
        case 0x12572cu: goto label_12572c;
        case 0x125730u: goto label_125730;
        case 0x125734u: goto label_125734;
        case 0x125738u: goto label_125738;
        case 0x12573cu: goto label_12573c;
        case 0x125740u: goto label_125740;
        case 0x125744u: goto label_125744;
        case 0x125748u: goto label_125748;
        case 0x12574cu: goto label_12574c;
        case 0x125750u: goto label_125750;
        case 0x125754u: goto label_125754;
        case 0x125758u: goto label_125758;
        case 0x12575cu: goto label_12575c;
        case 0x125760u: goto label_125760;
        case 0x125764u: goto label_125764;
        case 0x125768u: goto label_125768;
        case 0x12576cu: goto label_12576c;
        case 0x125770u: goto label_125770;
        case 0x125774u: goto label_125774;
        case 0x125778u: goto label_125778;
        case 0x12577cu: goto label_12577c;
        case 0x125780u: goto label_125780;
        case 0x125784u: goto label_125784;
        case 0x125788u: goto label_125788;
        case 0x12578cu: goto label_12578c;
        case 0x125790u: goto label_125790;
        case 0x125794u: goto label_125794;
        case 0x125798u: goto label_125798;
        case 0x12579cu: goto label_12579c;
        case 0x1257a0u: goto label_1257a0;
        case 0x1257a4u: goto label_1257a4;
        case 0x1257a8u: goto label_1257a8;
        case 0x1257acu: goto label_1257ac;
        case 0x1257b0u: goto label_1257b0;
        case 0x1257b4u: goto label_1257b4;
        case 0x1257b8u: goto label_1257b8;
        case 0x1257bcu: goto label_1257bc;
        case 0x1257c0u: goto label_1257c0;
        case 0x1257c4u: goto label_1257c4;
        case 0x1257c8u: goto label_1257c8;
        case 0x1257ccu: goto label_1257cc;
        case 0x1257d0u: goto label_1257d0;
        case 0x1257d4u: goto label_1257d4;
        case 0x1257d8u: goto label_1257d8;
        case 0x1257dcu: goto label_1257dc;
        case 0x1257e0u: goto label_1257e0;
        case 0x1257e4u: goto label_1257e4;
        case 0x1257e8u: goto label_1257e8;
        case 0x1257ecu: goto label_1257ec;
        case 0x1257f0u: goto label_1257f0;
        case 0x1257f4u: goto label_1257f4;
        case 0x1257f8u: goto label_1257f8;
        case 0x1257fcu: goto label_1257fc;
        case 0x125800u: goto label_125800;
        case 0x125804u: goto label_125804;
        case 0x125808u: goto label_125808;
        case 0x12580cu: goto label_12580c;
        case 0x125810u: goto label_125810;
        case 0x125814u: goto label_125814;
        case 0x125818u: goto label_125818;
        case 0x12581cu: goto label_12581c;
        case 0x125820u: goto label_125820;
        case 0x125824u: goto label_125824;
        case 0x125828u: goto label_125828;
        case 0x12582cu: goto label_12582c;
        case 0x125830u: goto label_125830;
        case 0x125834u: goto label_125834;
        case 0x125838u: goto label_125838;
        case 0x12583cu: goto label_12583c;
        case 0x125840u: goto label_125840;
        case 0x125844u: goto label_125844;
        case 0x125848u: goto label_125848;
        case 0x12584cu: goto label_12584c;
        case 0x125850u: goto label_125850;
        case 0x125854u: goto label_125854;
        case 0x125858u: goto label_125858;
        case 0x12585cu: goto label_12585c;
        case 0x125860u: goto label_125860;
        case 0x125864u: goto label_125864;
        case 0x125868u: goto label_125868;
        case 0x12586cu: goto label_12586c;
        default: break;
    }

    ctx->pc = 0x1255f8u;

label_1255f8:
    // 0x1255f8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1255f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1255fc:
    // 0x1255fc: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1255fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_125600:
    // 0x125600: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x125600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_125604:
    // 0x125604: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x125604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_125608:
    // 0x125608: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x125608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_12560c:
    // 0x12560c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x12560cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_125610:
    // 0x125610: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x125610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_125614:
    // 0x125614: 0x248491a8  addiu       $a0, $a0, -0x6E58
    ctx->pc = 0x125614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939048));
label_125618:
    // 0x125618: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x125618u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_12561c:
    // 0x12561c: 0xc136b50  jal         func_4DAD40
label_125620:
    if (ctx->pc == 0x125620u) {
        ctx->pc = 0x125620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12561Cu;
        // 0x125620: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125624u;
        goto label_125624;
    }
    ctx->pc = 0x12561Cu;
    SET_GPR_U32(ctx, 31, 0x125624u);
    ctx->pc = 0x125620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12561Cu;
    // 0x125620: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAD40u, 0x12561Cu, 0x125624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125624u;
label_125624:
    // 0x125624: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x125624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_125628:
    // 0x125628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x125628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12562c:
    // 0x12562c: 0xac62b194  sw          $v0, -0x4E6C($v1)
    ctx->pc = 0x12562cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947220), GPR_U32(ctx, 2));
label_125630:
    // 0x125630: 0xc049f52  jal         func_127D48
label_125634:
    if (ctx->pc == 0x125634u) {
        ctx->pc = 0x125634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125630u;
        // 0x125634: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125638u;
        goto label_125638;
    }
    ctx->pc = 0x125630u;
    SET_GPR_U32(ctx, 31, 0x125638u);
    ctx->pc = 0x125634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125630u;
    // 0x125634: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D48u, 0x125630u, 0x125638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125638u;
label_125638:
    // 0x125638: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x125638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12563c:
    // 0x12563c: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x12563cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_125640:
    // 0x125640: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x125640u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_125644:
    // 0x125644: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x125644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_125648:
    // 0x125648: 0x40f809  jalr        $v0
label_12564c:
    if (ctx->pc == 0x12564Cu) {
        ctx->pc = 0x12564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125648u;
        // 0x12564c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125650u;
        goto label_125650;
    }
    ctx->pc = 0x125648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125650u);
        ctx->pc = 0x12564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125648u;
        // 0x12564c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125648u, 0x125650u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125650u;
label_125650:
    // 0x125650: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x125650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125654:
    // 0x125654: 0xc0cd8ec  jal         func_3363B0
label_125658:
    if (ctx->pc == 0x125658u) {
        ctx->pc = 0x125658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125654u;
        // 0x125658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12565Cu;
        goto label_12565c;
    }
    ctx->pc = 0x125654u;
    SET_GPR_U32(ctx, 31, 0x12565Cu);
    ctx->pc = 0x125658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125654u;
    // 0x125658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x125654u, 0x12565Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12565Cu;
label_12565c:
    // 0x12565c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12565cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_125660:
    // 0x125660: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x125660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_125664:
    // 0x125664: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x125664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_125668:
    // 0x125668: 0xc136b24  jal         func_4DAC90
label_12566c:
    if (ctx->pc == 0x12566Cu) {
        ctx->pc = 0x12566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125668u;
        // 0x12566c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125670u;
        goto label_125670;
    }
    ctx->pc = 0x125668u;
    SET_GPR_U32(ctx, 31, 0x125670u);
    ctx->pc = 0x12566Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125668u;
    // 0x12566c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x125668u, 0x125670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125670u;
label_125670:
    // 0x125670: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x125670u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_125674:
    // 0x125674: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x125674u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_125678:
    // 0x125678: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x125678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12567c:
    // 0x12567c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12567cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_125680:
    // 0x125680: 0xc0cd8ec  jal         func_3363B0
label_125684:
    if (ctx->pc == 0x125684u) {
        ctx->pc = 0x125684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125680u;
        // 0x125684: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125688u;
        goto label_125688;
    }
    ctx->pc = 0x125680u;
    SET_GPR_U32(ctx, 31, 0x125688u);
    ctx->pc = 0x125684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125680u;
    // 0x125684: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x125680u, 0x125688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125688u;
label_125688:
    // 0x125688: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x125688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_12568c:
    // 0x12568c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12568cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_125690:
    // 0x125690: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x125690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_125694:
    // 0x125694: 0xc136b24  jal         func_4DAC90
label_125698:
    if (ctx->pc == 0x125698u) {
        ctx->pc = 0x125698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125694u;
        // 0x125698: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12569Cu;
        goto label_12569c;
    }
    ctx->pc = 0x125694u;
    SET_GPR_U32(ctx, 31, 0x12569Cu);
    ctx->pc = 0x125698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125694u;
    // 0x125698: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x125694u, 0x12569Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12569Cu;
label_12569c:
    // 0x12569c: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x12569cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1256a0:
    // 0x1256a0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1256a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1256a4:
    // 0x1256a4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1256a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1256a8:
    // 0x1256a8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1256a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1256ac:
    // 0x1256ac: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x1256acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1256b0:
    // 0x1256b0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1256b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1256b4:
    // 0x1256b4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1256b4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_1256b8:
    // 0x1256b8: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x1256b8u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1256bc:
    // 0x1256bc: 0x4a0003bf  vwaitq
    ctx->pc = 0x1256bcu;
    // VWAITQ (Q already resolved in this runtime)
label_1256c0:
    // 0x1256c0: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x1256c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1256c4:
    // 0x1256c4: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x1256c4u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
label_1256c8:
    // 0x1256c8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1256c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1256cc:
    // 0x1256cc: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x1256ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1256d0:
    // 0x1256d0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1256d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1256d4:
    // 0x1256d4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1256d4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_1256d8:
    // 0x1256d8: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x1256d8u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1256dc:
    // 0x1256dc: 0x4a0003bf  vwaitq
    ctx->pc = 0x1256dcu;
    // VWAITQ (Q already resolved in this runtime)
label_1256e0:
    // 0x1256e0: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x1256e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1256e4:
    // 0x1256e4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1256e4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_1256e8:
    // 0x1256e8: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x1256e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_1256ec:
    // 0x1256ec: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1256ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_1256f0:
    // 0x1256f0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1256f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1256f4:
    // 0x1256f4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1256f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1256f8:
    // 0x1256f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1256f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1256fc:
    // 0x1256fc: 0x7fa70030  sq          $a3, 0x30($sp)
    ctx->pc = 0x1256fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 7));
label_125700:
    // 0x125700: 0xc136b18  jal         func_4DAC60
label_125704:
    if (ctx->pc == 0x125704u) {
        ctx->pc = 0x125704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125700u;
        // 0x125704: 0x7fa70040  sq          $a3, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125708u;
        goto label_125708;
    }
    ctx->pc = 0x125700u;
    SET_GPR_U32(ctx, 31, 0x125708u);
    ctx->pc = 0x125704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125700u;
    // 0x125704: 0x7fa70040  sq          $a3, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x125700u, 0x125708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125708u;
label_125708:
    // 0x125708: 0x7ba50050  lq          $a1, 0x50($sp)
    ctx->pc = 0x125708u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_12570c:
    // 0x12570c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x12570cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_125710:
    // 0x125710: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x125710u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_125714:
    // 0x125714: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x125714u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_125718:
    // 0x125718: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x125718u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_12571c:
    // 0x12571c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x12571cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_125720:
    // 0x125720: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x125720u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_125724:
    // 0x125724: 0x4a0003bf  vwaitq
    ctx->pc = 0x125724u;
    // VWAITQ (Q already resolved in this runtime)
label_125728:
    // 0x125728: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x125728u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_12572c:
    // 0x12572c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x12572cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_125730:
    // 0x125730: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x125730u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_125734:
    // 0x125734: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x125734u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_125738:
    // 0x125738: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x125738u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12573c:
    // 0x12573c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12573cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_125740:
    // 0x125740: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x125740u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_125744:
    // 0x125744: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x125744u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_125748:
    // 0x125748: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x125748u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12574c:
    // 0x12574c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x12574cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_125750:
    // 0x125750: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x125750u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_125754:
    // 0x125754: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x125754u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_125758:
    // 0x125758: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x125758u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_12575c:
    // 0x12575c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x12575cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_125760:
    // 0x125760: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x125760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
label_125764:
    // 0x125764: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x125764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_125768:
    // 0x125768: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x125768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
label_12576c:
    // 0x12576c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x12576cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_125770:
    // 0x125770: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x125770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
label_125774:
    // 0x125774: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x125774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_125778:
    // 0x125778: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x125778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12577c:
    // 0x12577c: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x12577cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
label_125780:
    // 0x125780: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x125780u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_125784:
    // 0x125784: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x125784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_125788:
    // 0x125788: 0x40f809  jalr        $v0
label_12578c:
    if (ctx->pc == 0x12578Cu) {
        ctx->pc = 0x12578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125788u;
        // 0x12578c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125790u;
        goto label_125790;
    }
    ctx->pc = 0x125788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125790u);
        ctx->pc = 0x12578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125788u;
        // 0x12578c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125788u, 0x125790u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125790u;
label_125790:
    // 0x125790: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x125790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_125794:
    // 0x125794: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x125794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125798:
    // 0x125798: 0xc136d44  jal         func_4DB510
label_12579c:
    if (ctx->pc == 0x12579Cu) {
        ctx->pc = 0x12579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125798u;
        // 0x12579c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1257A0u;
        goto label_1257a0;
    }
    ctx->pc = 0x125798u;
    SET_GPR_U32(ctx, 31, 0x1257A0u);
    ctx->pc = 0x12579Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125798u;
    // 0x12579c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB510u, 0x125798u, 0x1257A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1257A0u;
label_1257a0:
    // 0x1257a0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1257a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1257a4:
    // 0x1257a4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1257a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1257a8:
    // 0x1257a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1257a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1257ac:
    // 0x1257ac: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1257acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1257b0:
    // 0x1257b0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1257b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1257b4:
    // 0x1257b4: 0x846401c0  lh          $a0, 0x1C0($v1)
    ctx->pc = 0x1257b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 448)));
label_1257b8:
    // 0x1257b8: 0x8c6201c4  lw          $v0, 0x1C4($v1)
    ctx->pc = 0x1257b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 452)));
label_1257bc:
    // 0x1257bc: 0x40f809  jalr        $v0
label_1257c0:
    if (ctx->pc == 0x1257C0u) {
        ctx->pc = 0x1257C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1257BCu;
        // 0x1257c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1257C4u;
        goto label_1257c4;
    }
    ctx->pc = 0x1257BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1257C4u);
        ctx->pc = 0x1257C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1257BCu;
        // 0x1257c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1257BCu, 0x1257C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1257C4u;
label_1257c4:
    // 0x1257c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1257c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1257c8:
    // 0x1257c8: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1257c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1257cc:
    // 0x1257cc: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x1257ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_1257d0:
    // 0x1257d0: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x1257d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_1257d4:
    // 0x1257d4: 0x40f809  jalr        $v0
label_1257d8:
    if (ctx->pc == 0x1257D8u) {
        ctx->pc = 0x1257D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1257D4u;
        // 0x1257d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1257DCu;
        goto label_1257dc;
    }
    ctx->pc = 0x1257D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1257DCu);
        ctx->pc = 0x1257D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1257D4u;
        // 0x1257d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1257D4u, 0x1257DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1257DCu;
label_1257dc:
    // 0x1257dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1257dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1257e0:
    // 0x1257e0: 0xc0cd8ec  jal         func_3363B0
label_1257e4:
    if (ctx->pc == 0x1257E4u) {
        ctx->pc = 0x1257E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1257E0u;
        // 0x1257e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1257E8u;
        goto label_1257e8;
    }
    ctx->pc = 0x1257E0u;
    SET_GPR_U32(ctx, 31, 0x1257E8u);
    ctx->pc = 0x1257E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1257E0u;
    // 0x1257e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x1257E0u, 0x1257E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1257E8u;
label_1257e8:
    // 0x1257e8: 0xc60c032c  lwc1        $f12, 0x32C($s0)
    ctx->pc = 0x1257e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1257ec:
    // 0x1257ec: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1257ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1257f0:
    // 0x1257f0: 0xc136b24  jal         func_4DAC90
label_1257f4:
    if (ctx->pc == 0x1257F4u) {
        ctx->pc = 0x1257F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1257F0u;
        // 0x1257f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1257F8u;
        goto label_1257f8;
    }
    ctx->pc = 0x1257F0u;
    SET_GPR_U32(ctx, 31, 0x1257F8u);
    ctx->pc = 0x1257F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1257F0u;
    // 0x1257f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x1257F0u, 0x1257F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1257F8u;
label_1257f8:
    // 0x1257f8: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x1257f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1257fc:
    // 0x1257fc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1257fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_125800:
    // 0x125800: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x125800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_125804:
    // 0x125804: 0x26050180  addiu       $a1, $s0, 0x180
    ctx->pc = 0x125804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_125808:
    // 0x125808: 0xc136afa  jal         func_4DABE8
label_12580c:
    if (ctx->pc == 0x12580Cu) {
        ctx->pc = 0x12580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125808u;
        // 0x12580c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125810u;
        goto label_125810;
    }
    ctx->pc = 0x125808u;
    SET_GPR_U32(ctx, 31, 0x125810u);
    ctx->pc = 0x12580Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125808u;
    // 0x12580c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x125808u, 0x125810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125810u;
label_125810:
    // 0x125810: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x125810u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_125814:
    // 0x125814: 0x26050260  addiu       $a1, $s0, 0x260
    ctx->pc = 0x125814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
label_125818:
    // 0x125818: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x125818u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12581c:
    // 0x12581c: 0x7e020260  sq          $v0, 0x260($s0)
    ctx->pc = 0x12581cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 608), GPR_VEC(ctx, 2));
label_125820:
    // 0x125820: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x125820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_125824:
    // 0x125824: 0x84c401b8  lh          $a0, 0x1B8($a2)
    ctx->pc = 0x125824u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 440)));
label_125828:
    // 0x125828: 0x8cc301bc  lw          $v1, 0x1BC($a2)
    ctx->pc = 0x125828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 444)));
label_12582c:
    // 0x12582c: 0x60f809  jalr        $v1
label_125830:
    if (ctx->pc == 0x125830u) {
        ctx->pc = 0x125830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12582Cu;
        // 0x125830: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125834u;
        goto label_125834;
    }
    ctx->pc = 0x12582Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x125834u);
        ctx->pc = 0x125830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12582Cu;
        // 0x125830: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12582Cu, 0x125834u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125834u;
label_125834:
    // 0x125834: 0x7a020260  lq          $v0, 0x260($s0)
    ctx->pc = 0x125834u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 608)));
label_125838:
    // 0x125838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x125838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12583c:
    // 0x12583c: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x12583cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_125840:
    // 0x125840: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x125840u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_125844:
    // 0x125844: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x125844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_125848:
    // 0x125848: 0x7e020250  sq          $v0, 0x250($s0)
    ctx->pc = 0x125848u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 592), GPR_VEC(ctx, 2));
label_12584c:
    // 0x12584c: 0x7e0201e0  sq          $v0, 0x1E0($s0)
    ctx->pc = 0x12584cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 480), GPR_VEC(ctx, 2));
label_125850:
    // 0x125850: 0xc04ab96  jal         func_12AE58
label_125854:
    if (ctx->pc == 0x125854u) {
        ctx->pc = 0x125854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125850u;
        // 0x125854: 0x7e0202b0  sq          $v0, 0x2B0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 688), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125858u;
        goto label_125858;
    }
    ctx->pc = 0x125850u;
    SET_GPR_U32(ctx, 31, 0x125858u);
    ctx->pc = 0x125854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125850u;
    // 0x125854: 0x7e0202b0  sq          $v0, 0x2B0($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 688), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AE58u, 0x125850u, 0x125858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125858u;
label_125858:
    // 0x125858: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x125858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_12585c:
    // 0x12585c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x12585cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_125860:
    // 0x125860: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x125860u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_125864:
    // 0x125864: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x125864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_125868:
    // 0x125868: 0x3e00008  jr          $ra
label_12586c:
    if (ctx->pc == 0x12586Cu) {
        ctx->pc = 0x12586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125868u;
        // 0x12586c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125870u;
        goto label_fallthrough_0x125868;
    }
    ctx->pc = 0x125868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125868u;
        // 0x12586c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x125868:
    ctx->pc = 0x125870u;
}
