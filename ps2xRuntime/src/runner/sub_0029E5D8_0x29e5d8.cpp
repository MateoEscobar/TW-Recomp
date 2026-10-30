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

// Function: sub_0029E5D8
// Address: 0x29e5d8 - 0x29e980
void sub_0029E5D8_0x29e5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E5D8_0x29e5d8");
#endif

    switch (ctx->pc) {
        case 0x29e5d8u: goto label_29e5d8;
        case 0x29e5dcu: goto label_29e5dc;
        case 0x29e5e0u: goto label_29e5e0;
        case 0x29e5e4u: goto label_29e5e4;
        case 0x29e5e8u: goto label_29e5e8;
        case 0x29e5ecu: goto label_29e5ec;
        case 0x29e5f0u: goto label_29e5f0;
        case 0x29e5f4u: goto label_29e5f4;
        case 0x29e5f8u: goto label_29e5f8;
        case 0x29e5fcu: goto label_29e5fc;
        case 0x29e600u: goto label_29e600;
        case 0x29e604u: goto label_29e604;
        case 0x29e608u: goto label_29e608;
        case 0x29e60cu: goto label_29e60c;
        case 0x29e610u: goto label_29e610;
        case 0x29e614u: goto label_29e614;
        case 0x29e618u: goto label_29e618;
        case 0x29e61cu: goto label_29e61c;
        case 0x29e620u: goto label_29e620;
        case 0x29e624u: goto label_29e624;
        case 0x29e628u: goto label_29e628;
        case 0x29e62cu: goto label_29e62c;
        case 0x29e630u: goto label_29e630;
        case 0x29e634u: goto label_29e634;
        case 0x29e638u: goto label_29e638;
        case 0x29e63cu: goto label_29e63c;
        case 0x29e640u: goto label_29e640;
        case 0x29e644u: goto label_29e644;
        case 0x29e648u: goto label_29e648;
        case 0x29e64cu: goto label_29e64c;
        case 0x29e650u: goto label_29e650;
        case 0x29e654u: goto label_29e654;
        case 0x29e658u: goto label_29e658;
        case 0x29e65cu: goto label_29e65c;
        case 0x29e660u: goto label_29e660;
        case 0x29e664u: goto label_29e664;
        case 0x29e668u: goto label_29e668;
        case 0x29e66cu: goto label_29e66c;
        case 0x29e670u: goto label_29e670;
        case 0x29e674u: goto label_29e674;
        case 0x29e678u: goto label_29e678;
        case 0x29e67cu: goto label_29e67c;
        case 0x29e680u: goto label_29e680;
        case 0x29e684u: goto label_29e684;
        case 0x29e688u: goto label_29e688;
        case 0x29e68cu: goto label_29e68c;
        case 0x29e690u: goto label_29e690;
        case 0x29e694u: goto label_29e694;
        case 0x29e698u: goto label_29e698;
        case 0x29e69cu: goto label_29e69c;
        case 0x29e6a0u: goto label_29e6a0;
        case 0x29e6a4u: goto label_29e6a4;
        case 0x29e6a8u: goto label_29e6a8;
        case 0x29e6acu: goto label_29e6ac;
        case 0x29e6b0u: goto label_29e6b0;
        case 0x29e6b4u: goto label_29e6b4;
        case 0x29e6b8u: goto label_29e6b8;
        case 0x29e6bcu: goto label_29e6bc;
        case 0x29e6c0u: goto label_29e6c0;
        case 0x29e6c4u: goto label_29e6c4;
        case 0x29e6c8u: goto label_29e6c8;
        case 0x29e6ccu: goto label_29e6cc;
        case 0x29e6d0u: goto label_29e6d0;
        case 0x29e6d4u: goto label_29e6d4;
        case 0x29e6d8u: goto label_29e6d8;
        case 0x29e6dcu: goto label_29e6dc;
        case 0x29e6e0u: goto label_29e6e0;
        case 0x29e6e4u: goto label_29e6e4;
        case 0x29e6e8u: goto label_29e6e8;
        case 0x29e6ecu: goto label_29e6ec;
        case 0x29e6f0u: goto label_29e6f0;
        case 0x29e6f4u: goto label_29e6f4;
        case 0x29e6f8u: goto label_29e6f8;
        case 0x29e6fcu: goto label_29e6fc;
        case 0x29e700u: goto label_29e700;
        case 0x29e704u: goto label_29e704;
        case 0x29e708u: goto label_29e708;
        case 0x29e70cu: goto label_29e70c;
        case 0x29e710u: goto label_29e710;
        case 0x29e714u: goto label_29e714;
        case 0x29e718u: goto label_29e718;
        case 0x29e71cu: goto label_29e71c;
        case 0x29e720u: goto label_29e720;
        case 0x29e724u: goto label_29e724;
        case 0x29e728u: goto label_29e728;
        case 0x29e72cu: goto label_29e72c;
        case 0x29e730u: goto label_29e730;
        case 0x29e734u: goto label_29e734;
        case 0x29e738u: goto label_29e738;
        case 0x29e73cu: goto label_29e73c;
        case 0x29e740u: goto label_29e740;
        case 0x29e744u: goto label_29e744;
        case 0x29e748u: goto label_29e748;
        case 0x29e74cu: goto label_29e74c;
        case 0x29e750u: goto label_29e750;
        case 0x29e754u: goto label_29e754;
        case 0x29e758u: goto label_29e758;
        case 0x29e75cu: goto label_29e75c;
        case 0x29e760u: goto label_29e760;
        case 0x29e764u: goto label_29e764;
        case 0x29e768u: goto label_29e768;
        case 0x29e76cu: goto label_29e76c;
        case 0x29e770u: goto label_29e770;
        case 0x29e774u: goto label_29e774;
        case 0x29e778u: goto label_29e778;
        case 0x29e77cu: goto label_29e77c;
        case 0x29e780u: goto label_29e780;
        case 0x29e784u: goto label_29e784;
        case 0x29e788u: goto label_29e788;
        case 0x29e78cu: goto label_29e78c;
        case 0x29e790u: goto label_29e790;
        case 0x29e794u: goto label_29e794;
        case 0x29e798u: goto label_29e798;
        case 0x29e79cu: goto label_29e79c;
        case 0x29e7a0u: goto label_29e7a0;
        case 0x29e7a4u: goto label_29e7a4;
        case 0x29e7a8u: goto label_29e7a8;
        case 0x29e7acu: goto label_29e7ac;
        case 0x29e7b0u: goto label_29e7b0;
        case 0x29e7b4u: goto label_29e7b4;
        case 0x29e7b8u: goto label_29e7b8;
        case 0x29e7bcu: goto label_29e7bc;
        case 0x29e7c0u: goto label_29e7c0;
        case 0x29e7c4u: goto label_29e7c4;
        case 0x29e7c8u: goto label_29e7c8;
        case 0x29e7ccu: goto label_29e7cc;
        case 0x29e7d0u: goto label_29e7d0;
        case 0x29e7d4u: goto label_29e7d4;
        case 0x29e7d8u: goto label_29e7d8;
        case 0x29e7dcu: goto label_29e7dc;
        case 0x29e7e0u: goto label_29e7e0;
        case 0x29e7e4u: goto label_29e7e4;
        case 0x29e7e8u: goto label_29e7e8;
        case 0x29e7ecu: goto label_29e7ec;
        case 0x29e7f0u: goto label_29e7f0;
        case 0x29e7f4u: goto label_29e7f4;
        case 0x29e7f8u: goto label_29e7f8;
        case 0x29e7fcu: goto label_29e7fc;
        case 0x29e800u: goto label_29e800;
        case 0x29e804u: goto label_29e804;
        case 0x29e808u: goto label_29e808;
        case 0x29e80cu: goto label_29e80c;
        case 0x29e810u: goto label_29e810;
        case 0x29e814u: goto label_29e814;
        case 0x29e818u: goto label_29e818;
        case 0x29e81cu: goto label_29e81c;
        case 0x29e820u: goto label_29e820;
        case 0x29e824u: goto label_29e824;
        case 0x29e828u: goto label_29e828;
        case 0x29e82cu: goto label_29e82c;
        case 0x29e830u: goto label_29e830;
        case 0x29e834u: goto label_29e834;
        case 0x29e838u: goto label_29e838;
        case 0x29e83cu: goto label_29e83c;
        case 0x29e840u: goto label_29e840;
        case 0x29e844u: goto label_29e844;
        case 0x29e848u: goto label_29e848;
        case 0x29e84cu: goto label_29e84c;
        case 0x29e850u: goto label_29e850;
        case 0x29e854u: goto label_29e854;
        case 0x29e858u: goto label_29e858;
        case 0x29e85cu: goto label_29e85c;
        case 0x29e860u: goto label_29e860;
        case 0x29e864u: goto label_29e864;
        case 0x29e868u: goto label_29e868;
        case 0x29e86cu: goto label_29e86c;
        case 0x29e870u: goto label_29e870;
        case 0x29e874u: goto label_29e874;
        case 0x29e878u: goto label_29e878;
        case 0x29e87cu: goto label_29e87c;
        case 0x29e880u: goto label_29e880;
        case 0x29e884u: goto label_29e884;
        case 0x29e888u: goto label_29e888;
        case 0x29e88cu: goto label_29e88c;
        case 0x29e890u: goto label_29e890;
        case 0x29e894u: goto label_29e894;
        case 0x29e898u: goto label_29e898;
        case 0x29e89cu: goto label_29e89c;
        case 0x29e8a0u: goto label_29e8a0;
        case 0x29e8a4u: goto label_29e8a4;
        case 0x29e8a8u: goto label_29e8a8;
        case 0x29e8acu: goto label_29e8ac;
        case 0x29e8b0u: goto label_29e8b0;
        case 0x29e8b4u: goto label_29e8b4;
        case 0x29e8b8u: goto label_29e8b8;
        case 0x29e8bcu: goto label_29e8bc;
        case 0x29e8c0u: goto label_29e8c0;
        case 0x29e8c4u: goto label_29e8c4;
        case 0x29e8c8u: goto label_29e8c8;
        case 0x29e8ccu: goto label_29e8cc;
        case 0x29e8d0u: goto label_29e8d0;
        case 0x29e8d4u: goto label_29e8d4;
        case 0x29e8d8u: goto label_29e8d8;
        case 0x29e8dcu: goto label_29e8dc;
        case 0x29e8e0u: goto label_29e8e0;
        case 0x29e8e4u: goto label_29e8e4;
        case 0x29e8e8u: goto label_29e8e8;
        case 0x29e8ecu: goto label_29e8ec;
        case 0x29e8f0u: goto label_29e8f0;
        case 0x29e8f4u: goto label_29e8f4;
        case 0x29e8f8u: goto label_29e8f8;
        case 0x29e8fcu: goto label_29e8fc;
        case 0x29e900u: goto label_29e900;
        case 0x29e904u: goto label_29e904;
        case 0x29e908u: goto label_29e908;
        case 0x29e90cu: goto label_29e90c;
        case 0x29e910u: goto label_29e910;
        case 0x29e914u: goto label_29e914;
        case 0x29e918u: goto label_29e918;
        case 0x29e91cu: goto label_29e91c;
        case 0x29e920u: goto label_29e920;
        case 0x29e924u: goto label_29e924;
        case 0x29e928u: goto label_29e928;
        case 0x29e92cu: goto label_29e92c;
        case 0x29e930u: goto label_29e930;
        case 0x29e934u: goto label_29e934;
        case 0x29e938u: goto label_29e938;
        case 0x29e93cu: goto label_29e93c;
        case 0x29e940u: goto label_29e940;
        case 0x29e944u: goto label_29e944;
        case 0x29e948u: goto label_29e948;
        case 0x29e94cu: goto label_29e94c;
        case 0x29e950u: goto label_29e950;
        case 0x29e954u: goto label_29e954;
        case 0x29e958u: goto label_29e958;
        case 0x29e95cu: goto label_29e95c;
        case 0x29e960u: goto label_29e960;
        case 0x29e964u: goto label_29e964;
        case 0x29e968u: goto label_29e968;
        case 0x29e96cu: goto label_29e96c;
        case 0x29e970u: goto label_29e970;
        case 0x29e974u: goto label_29e974;
        case 0x29e978u: goto label_29e978;
        case 0x29e97cu: goto label_29e97c;
        default: break;
    }

    ctx->pc = 0x29e5d8u;

label_29e5d8:
    // 0x29e5d8: 0x27bdfd00  addiu       $sp, $sp, -0x300
    ctx->pc = 0x29e5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966528));
label_29e5dc:
    // 0x29e5dc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x29e5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_29e5e0:
    // 0x29e5e0: 0x7fb50290  sq          $s5, 0x290($sp)
    ctx->pc = 0x29e5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 21));
label_29e5e4:
    // 0x29e5e4: 0x7fb002e0  sq          $s0, 0x2E0($sp)
    ctx->pc = 0x29e5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 16));
label_29e5e8:
    // 0x29e5e8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x29e5e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29e5ec:
    // 0x29e5ec: 0x7fb102d0  sq          $s1, 0x2D0($sp)
    ctx->pc = 0x29e5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 17));
label_29e5f0:
    // 0x29e5f0: 0x7fb202c0  sq          $s2, 0x2C0($sp)
    ctx->pc = 0x29e5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 18));
label_29e5f4:
    // 0x29e5f4: 0x7fb302b0  sq          $s3, 0x2B0($sp)
    ctx->pc = 0x29e5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 19));
label_29e5f8:
    // 0x29e5f8: 0x7fb402a0  sq          $s4, 0x2A0($sp)
    ctx->pc = 0x29e5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 20));
label_29e5fc:
    // 0x29e5fc: 0x7fb60280  sq          $s6, 0x280($sp)
    ctx->pc = 0x29e5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 22));
label_29e600:
    // 0x29e600: 0x7fb70270  sq          $s7, 0x270($sp)
    ctx->pc = 0x29e600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 23));
label_29e604:
    // 0x29e604: 0x7fbe0260  sq          $fp, 0x260($sp)
    ctx->pc = 0x29e604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 30));
label_29e608:
    // 0x29e608: 0xffbf0250  sd          $ra, 0x250($sp)
    ctx->pc = 0x29e608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 31));
label_29e60c:
    // 0x29e60c: 0xe7b402f0  swc1        $f20, 0x2F0($sp)
    ctx->pc = 0x29e60cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 752), bits); }
label_29e610:
    // 0x29e610: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x29e610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_29e614:
    // 0x29e614: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x29e614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_29e618:
    // 0x29e618: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x29e618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_29e61c:
    // 0x29e61c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x29e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_29e620:
    // 0x29e620: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x29e620u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29e624:
    // 0x29e624: 0x146000c9  bnez        $v1, . + 4 + (0xC9 << 2)
label_29e628:
    if (ctx->pc == 0x29E628u) {
        ctx->pc = 0x29E628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E624u;
        // 0x29e628: 0x7bb002e0  lq          $s0, 0x2E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E62Cu;
        goto label_29e62c;
    }
    ctx->pc = 0x29E624u;
    {
        const bool branch_taken_0x29e624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E624u;
        // 0x29e628: 0x7bb002e0  lq          $s0, 0x2E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e624) {
            ctx->pc = 0x29E94Cu;
            goto label_29e94c;
        }
    }
    ctx->pc = 0x29E62Cu;
label_29e62c:
    // 0x29e62c: 0xc0a791c  jal         func_29E470
label_29e630:
    if (ctx->pc == 0x29E630u) {
        ctx->pc = 0x29E630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E62Cu;
        // 0x29e630: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E634u;
        goto label_29e634;
    }
    ctx->pc = 0x29E62Cu;
    SET_GPR_U32(ctx, 31, 0x29E634u);
    ctx->pc = 0x29E630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E62Cu;
    // 0x29e630: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E470u, 0x29E62Cu, 0x29E634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E634u;
label_29e634:
    // 0x29e634: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x29e634u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29e638:
    // 0x29e638: 0xc087502  jal         func_21D408
label_29e63c:
    if (ctx->pc == 0x29E63Cu) {
        ctx->pc = 0x29E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E638u;
        // 0x29e63c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E640u;
        goto label_29e640;
    }
    ctx->pc = 0x29E638u;
    SET_GPR_U32(ctx, 31, 0x29E640u);
    ctx->pc = 0x29E63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E638u;
    // 0x29e63c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29E638u, 0x29E640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E640u;
label_29e640:
    // 0x29e640: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x29e640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
label_29e644:
    // 0x29e644: 0x26e60090  addiu       $a2, $s7, 0x90
    ctx->pc = 0x29e644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 144));
label_29e648:
    // 0x29e648: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x29e648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_29e64c:
    // 0x29e64c: 0x84c30002  lh          $v1, 0x2($a2)
    ctx->pc = 0x29e64cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_29e650:
    // 0x29e650: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x29e650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_29e654:
    // 0x29e654: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x29e654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_29e658:
    // 0x29e658: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x29e658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_29e65c:
    // 0x29e65c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x29e65cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_29e660:
    // 0x29e660: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x29e660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_29e664:
    // 0x29e664: 0x84c40002  lh          $a0, 0x2($a2)
    ctx->pc = 0x29e664u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_29e668:
    // 0x29e668: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x29e668u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_29e66c:
    // 0x29e66c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x29e66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_29e670:
    // 0x29e670: 0xc0cd7d2  jal         func_335F48
label_29e674:
    if (ctx->pc == 0x29E674u) {
        ctx->pc = 0x29E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E670u;
        // 0x29e674: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E678u;
        goto label_29e678;
    }
    ctx->pc = 0x29E670u;
    SET_GPR_U32(ctx, 31, 0x29E678u);
    ctx->pc = 0x29E674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E670u;
    // 0x29e674: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x29E670u, 0x29E678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E678u;
label_29e678:
    // 0x29e678: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x29e678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_29e67c:
    // 0x29e67c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x29e67cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_29e680:
    // 0x29e680: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29e680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_29e684:
    // 0x29e684: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29e684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29e688:
    // 0x29e688: 0xe6a00040  swc1        $f0, 0x40($s5)
    ctx->pc = 0x29e688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 64), bits); }
label_29e68c:
    // 0x29e68c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x29e68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_29e690:
    // 0x29e690: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x29e690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_29e694:
    // 0x29e694: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x29e694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29e698:
    // 0x29e698: 0xc089d2a  jal         func_2274A8
label_29e69c:
    if (ctx->pc == 0x29E69Cu) {
        ctx->pc = 0x29E69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E698u;
        // 0x29e69c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E6A0u;
        goto label_29e6a0;
    }
    ctx->pc = 0x29E698u;
    SET_GPR_U32(ctx, 31, 0x29E6A0u);
    ctx->pc = 0x29E69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E698u;
    // 0x29e69c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2274A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2274A8u, 0x29E698u, 0x29E6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E6A0u;
label_29e6a0:
    // 0x29e6a0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x29e6a0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29e6a4:
    // 0x29e6a4: 0x27b601f0  addiu       $s6, $sp, 0x1F0
    ctx->pc = 0x29e6a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_29e6a8:
    // 0x29e6a8: 0x27a20210  addiu       $v0, $sp, 0x210
    ctx->pc = 0x29e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_29e6ac:
    // 0x29e6ac: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x29e6acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_29e6b0:
    // 0x29e6b0: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x29e6b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_29e6b4:
    // 0x29e6b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29e6b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29e6b8:
    // 0x29e6b8: 0xafa20244  sw          $v0, 0x244($sp)
    ctx->pc = 0x29e6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 2));
label_29e6bc:
    // 0x29e6bc: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x29e6bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_29e6c0:
    // 0x29e6c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29e6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29e6c4:
    // 0x29e6c4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x29e6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29e6c8:
    // 0x29e6c8: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x29e6c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29e6cc:
    // 0x29e6cc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x29e6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_29e6d0:
    // 0x29e6d0: 0x8ce2bd30  lw          $v0, -0x42D0($a3)
    ctx->pc = 0x29e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294950192)));
label_29e6d4:
    // 0x29e6d4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x29e6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_29e6d8:
    // 0x29e6d8: 0xa0660006  sb          $a2, 0x6($v1)
    ctx->pc = 0x29e6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 6));
label_29e6dc:
    // 0x29e6dc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x29e6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_29e6e0:
    // 0x29e6e0: 0xa0600007  sb          $zero, 0x7($v1)
    ctx->pc = 0x29e6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 0));
label_29e6e4:
    // 0x29e6e4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x29e6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_29e6e8:
    // 0x29e6e8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x29e6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_29e6ec:
    // 0x29e6ec: 0x481fff8  bgez        $a0, . + 4 + (-0x8 << 2)
label_29e6f0:
    if (ctx->pc == 0x29E6F0u) {
        ctx->pc = 0x29E6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E6ECu;
        // 0x29e6f0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E6F4u;
        goto label_29e6f4;
    }
    ctx->pc = 0x29E6ECu;
    {
        const bool branch_taken_0x29e6ec = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x29E6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E6ECu;
        // 0x29e6f0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e6ec) {
            ctx->pc = 0x29E6D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e6d0;
        }
    }
    ctx->pc = 0x29E6F4u;
label_29e6f4:
    // 0x29e6f4: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x29e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_29e6f8:
    // 0x29e6f8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x29e6f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e6fc:
    // 0x29e6fc: 0x8fa40244  lw          $a0, 0x244($sp)
    ctx->pc = 0x29e6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
label_29e700:
    // 0x29e700: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x29e700u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_29e704:
    // 0x29e704: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x29e704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_29e708:
    // 0x29e708: 0x60f809  jalr        $v1
label_29e70c:
    if (ctx->pc == 0x29E70Cu) {
        ctx->pc = 0x29E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E708u;
        // 0x29e70c: 0x2e52821  addu        $a1, $s7, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E710u;
        goto label_29e710;
    }
    ctx->pc = 0x29E708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x29E710u);
        ctx->pc = 0x29E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E708u;
        // 0x29e70c: 0x2e52821  addu        $a1, $s7, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E708u, 0x29E710u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29E710u;
label_29e710:
    // 0x29e710: 0x13c00022  beqz        $fp, . + 4 + (0x22 << 2)
label_29e714:
    if (ctx->pc == 0x29E714u) {
        ctx->pc = 0x29E718u;
        goto label_29e718;
    }
    ctx->pc = 0x29E710u;
    {
        const bool branch_taken_0x29e710 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e710) {
            ctx->pc = 0x29E79Cu;
            goto label_29e79c;
        }
    }
    ctx->pc = 0x29E718u;
label_29e718:
    // 0x29e718: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x29e718u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29e71c:
    // 0x29e71c: 0x0  nop
    ctx->pc = 0x29e71cu;
    // NOP
label_29e720:
    // 0x29e720: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x29e720u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_29e724:
    // 0x29e724: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x29e724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_29e728:
    // 0x29e728: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x29e728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_29e72c:
    // 0x29e72c: 0x8fa40244  lw          $a0, 0x244($sp)
    ctx->pc = 0x29e72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
label_29e730:
    // 0x29e730: 0x86250092  lh          $a1, 0x92($s1)
    ctx->pc = 0x29e730u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_29e734:
    // 0x29e734: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x29e734u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_29e738:
    // 0x29e738: 0xc0a7ac4  jal         func_29EB10
label_29e73c:
    if (ctx->pc == 0x29E73Cu) {
        ctx->pc = 0x29E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E738u;
        // 0x29e73c: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E740u;
        goto label_29e740;
    }
    ctx->pc = 0x29E738u;
    SET_GPR_U32(ctx, 31, 0x29E740u);
    ctx->pc = 0x29E73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E738u;
    // 0x29e73c: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EB10u, 0x29E738u, 0x29E740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E740u;
label_29e740:
    // 0x29e740: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29e740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_29e744:
    // 0x29e744: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x29e744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29e748:
    // 0x29e748: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29e748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_29e74c:
    // 0x29e74c: 0x2c39821  addu        $s3, $s6, $v1
    ctx->pc = 0x29e74cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_29e750:
    // 0x29e750: 0x2a28021  addu        $s0, $s5, $v0
    ctx->pc = 0x29e750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_29e754:
    // 0x29e754: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x29e754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29e758:
    // 0x29e758: 0x92020007  lbu         $v0, 0x7($s0)
    ctx->pc = 0x29e758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_29e75c:
    // 0x29e75c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29e75cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29e760:
    // 0x29e760: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29e760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_29e764:
    // 0x29e764: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_29e768:
    if (ctx->pc == 0x29E768u) {
        ctx->pc = 0x29E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E764u;
        // 0x29e768: 0xa2020007  sb          $v0, 0x7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E76Cu;
        goto label_29e76c;
    }
    ctx->pc = 0x29E764u;
    {
        const bool branch_taken_0x29e764 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E764u;
        // 0x29e768: 0xa2020007  sb          $v0, 0x7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e764) {
            ctx->pc = 0x29E78Cu;
            goto label_29e78c;
        }
    }
    ctx->pc = 0x29E76Cu;
label_29e76c:
    // 0x29e76c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x29e76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29e770:
    // 0x29e770: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x29e770u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_29e774:
    // 0x29e774: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x29e774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_29e778:
    // 0x29e778: 0x40f809  jalr        $v0
label_29e77c:
    if (ctx->pc == 0x29E77Cu) {
        ctx->pc = 0x29E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E778u;
        // 0x29e77c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E780u;
        goto label_29e780;
    }
    ctx->pc = 0x29E778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29E780u);
        ctx->pc = 0x29E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E778u;
        // 0x29e77c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E778u, 0x29E780u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29E780u;
label_29e780:
    // 0x29e780: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x29e780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29e784:
    // 0x29e784: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29e784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29e788:
    // 0x29e788: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x29e788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_29e78c:
    // 0x29e78c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x29e78cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_29e790:
    // 0x29e790: 0x29e102b  sltu        $v0, $s4, $fp
    ctx->pc = 0x29e790u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_29e794:
    // 0x29e794: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_29e798:
    if (ctx->pc == 0x29E798u) {
        ctx->pc = 0x29E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E794u;
        // 0x29e798: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E79Cu;
        goto label_29e79c;
    }
    ctx->pc = 0x29E794u;
    {
        const bool branch_taken_0x29e794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E794u;
        // 0x29e798: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e794) {
            ctx->pc = 0x29E720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e720;
        }
    }
    ctx->pc = 0x29E79Cu;
label_29e79c:
    // 0x29e79c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x29e79cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_29e7a0:
    // 0x29e7a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29e7a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_29e7a4:
    // 0x29e7a4: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x29e7a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29e7a8:
    // 0x29e7a8: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x29e7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_29e7ac:
    // 0x29e7ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29e7acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29e7b0:
    // 0x29e7b0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x29e7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29e7b4:
    // 0x29e7b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29e7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29e7b8:
    // 0x29e7b8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x29e7b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29e7bc:
    // 0x29e7bc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x29e7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_29e7c0:
    // 0x29e7c0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x29e7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29e7c4:
    // 0x29e7c4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x29e7c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29e7c8:
    // 0x29e7c8: 0x0  nop
    ctx->pc = 0x29e7c8u;
    // NOP
label_29e7cc:
    // 0x29e7cc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_29e7d0:
    if (ctx->pc == 0x29E7D0u) {
        ctx->pc = 0x29E7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E7CCu;
        // 0x29e7d0: 0xa4400004  sh          $zero, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E7D4u;
        goto label_29e7d4;
    }
    ctx->pc = 0x29E7CCu;
    {
        const bool branch_taken_0x29e7cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29E7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E7CCu;
        // 0x29e7d0: 0xa4400004  sh          $zero, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e7cc) {
            ctx->pc = 0x29E7DCu;
            goto label_29e7dc;
        }
    }
    ctx->pc = 0x29E7D4u;
label_29e7d4:
    // 0x29e7d4: 0x10000005  b           . + 4 + (0x5 << 2)
label_29e7d8:
    if (ctx->pc == 0x29E7D8u) {
        ctx->pc = 0x29E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E7D4u;
        // 0x29e7d8: 0xa4460004  sh          $a2, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E7DCu;
        goto label_29e7dc;
    }
    ctx->pc = 0x29E7D4u;
    {
        const bool branch_taken_0x29e7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E7D4u;
        // 0x29e7d8: 0xa4460004  sh          $a2, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e7d4) {
            ctx->pc = 0x29E7ECu;
            goto label_29e7ec;
        }
    }
    ctx->pc = 0x29E7DCu;
label_29e7dc:
    // 0x29e7dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29e7dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29e7e0:
    // 0x29e7e0: 0x0  nop
    ctx->pc = 0x29e7e0u;
    // NOP
label_29e7e4:
    // 0x29e7e4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_29e7e8:
    if (ctx->pc == 0x29E7E8u) {
        ctx->pc = 0x29E7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E7E4u;
        // 0x29e7e8: 0xa4450004  sh          $a1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E7ECu;
        goto label_29e7ec;
    }
    ctx->pc = 0x29E7E4u;
    {
        const bool branch_taken_0x29e7e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29e7e4) {
            ctx->pc = 0x29E7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E7E4u;
            // 0x29e7e8: 0xa4450004  sh          $a1, 0x4($v0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E7ECu;
            goto label_29e7ec;
        }
    }
    ctx->pc = 0x29E7ECu;
label_29e7ec:
    // 0x29e7ec: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x29e7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_29e7f0:
    // 0x29e7f0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x29e7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_29e7f4:
    // 0x29e7f4: 0x481fff2  bgez        $a0, . + 4 + (-0xE << 2)
label_29e7f8:
    if (ctx->pc == 0x29E7F8u) {
        ctx->pc = 0x29E7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E7F4u;
        // 0x29e7f8: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E7FCu;
        goto label_29e7fc;
    }
    ctx->pc = 0x29E7F4u;
    {
        const bool branch_taken_0x29e7f4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x29E7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E7F4u;
        // 0x29e7f8: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e7f4) {
            ctx->pc = 0x29E7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e7c0;
        }
    }
    ctx->pc = 0x29E7FCu;
label_29e7fc:
    // 0x29e7fc: 0x82e201b0  lb          $v0, 0x1B0($s7)
    ctx->pc = 0x29e7fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 432)));
label_29e800:
    // 0x29e800: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x29e800u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_29e804:
    // 0x29e804: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
label_29e808:
    if (ctx->pc == 0x29E808u) {
        ctx->pc = 0x29E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E804u;
        // 0x29e808: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E80Cu;
        goto label_29e80c;
    }
    ctx->pc = 0x29E804u;
    {
        const bool branch_taken_0x29e804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E804u;
        // 0x29e808: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e804) {
            ctx->pc = 0x29E93Cu;
            goto label_29e93c;
        }
    }
    ctx->pc = 0x29E80Cu;
label_29e80c:
    // 0x29e80c: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x29e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_29e810:
    // 0x29e810: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x29e810u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e814:
    // 0x29e814: 0xc0e409a  jal         func_390268
label_29e818:
    if (ctx->pc == 0x29E818u) {
        ctx->pc = 0x29E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E814u;
        // 0x29e818: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E81Cu;
        goto label_29e81c;
    }
    ctx->pc = 0x29E814u;
    SET_GPR_U32(ctx, 31, 0x29E81Cu);
    ctx->pc = 0x29E818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E814u;
    // 0x29e818: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x29E814u, 0x29E81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E81Cu;
label_29e81c:
    // 0x29e81c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x29e81cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29e820:
    // 0x29e820: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_29e824:
    if (ctx->pc == 0x29E824u) {
        ctx->pc = 0x29E824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E820u;
        // 0x29e824: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E828u;
        goto label_29e828;
    }
    ctx->pc = 0x29E820u;
    {
        const bool branch_taken_0x29e820 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E820u;
        // 0x29e824: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e820) {
            ctx->pc = 0x29E840u;
            goto label_29e840;
        }
    }
    ctx->pc = 0x29E828u;
label_29e828:
    // 0x29e828: 0xc087502  jal         func_21D408
label_29e82c:
    if (ctx->pc == 0x29E82Cu) {
        ctx->pc = 0x29E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E828u;
        // 0x29e82c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E830u;
        goto label_29e830;
    }
    ctx->pc = 0x29E828u;
    SET_GPR_U32(ctx, 31, 0x29E830u);
    ctx->pc = 0x29E82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E828u;
    // 0x29e82c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29E828u, 0x29E830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E830u;
label_29e830:
    // 0x29e830: 0xc0e409a  jal         func_390268
label_29e834:
    if (ctx->pc == 0x29E834u) {
        ctx->pc = 0x29E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E830u;
        // 0x29e834: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E838u;
        goto label_29e838;
    }
    ctx->pc = 0x29E830u;
    SET_GPR_U32(ctx, 31, 0x29E838u);
    ctx->pc = 0x29E834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E830u;
    // 0x29e834: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x29E830u, 0x29E838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E838u;
label_29e838:
    // 0x29e838: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x29e838u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29e83c:
    // 0x29e83c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x29e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_29e840:
    // 0x29e840: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29e840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e844:
    // 0x29e844: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x29e844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_29e848:
    // 0x29e848: 0x84640224  lh          $a0, 0x224($v1)
    ctx->pc = 0x29e848u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_29e84c:
    // 0x29e84c: 0x1880003a  blez        $a0, . + 4 + (0x3A << 2)
label_29e850:
    if (ctx->pc == 0x29E850u) {
        ctx->pc = 0x29E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E84Cu;
        // 0x29e850: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E854u;
        goto label_29e854;
    }
    ctx->pc = 0x29E84Cu;
    {
        const bool branch_taken_0x29e84c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x29E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E84Cu;
        // 0x29e850: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e84c) {
            ctx->pc = 0x29E938u;
            goto label_29e938;
        }
    }
    ctx->pc = 0x29E854u;
label_29e854:
    // 0x29e854: 0x3c0141f2  lui         $at, 0x41F2
    ctx->pc = 0x29e854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16882 << 16));
label_29e858:
    // 0x29e858: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x29e858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_29e85c:
    // 0x29e85c: 0x24140228  addiu       $s4, $zero, 0x228
    ctx->pc = 0x29e85cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_29e860:
    // 0x29e860: 0x8fc4489c  lw          $a0, 0x489C($fp)
    ctx->pc = 0x29e860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_29e864:
    // 0x29e864: 0xc0e409a  jal         func_390268
label_29e868:
    if (ctx->pc == 0x29E868u) {
        ctx->pc = 0x29E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E864u;
        // 0x29e868: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E86Cu;
        goto label_29e86c;
    }
    ctx->pc = 0x29E864u;
    SET_GPR_U32(ctx, 31, 0x29E86Cu);
    ctx->pc = 0x29E868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E864u;
    // 0x29e868: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x29E864u, 0x29E86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E86Cu;
label_29e86c:
    // 0x29e86c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29e86cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29e870:
    // 0x29e870: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
label_29e874:
    if (ctx->pc == 0x29E874u) {
        ctx->pc = 0x29E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E870u;
        // 0x29e874: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E878u;
        goto label_29e878;
    }
    ctx->pc = 0x29E870u;
    {
        const bool branch_taken_0x29e870 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E870u;
        // 0x29e874: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e870) {
            ctx->pc = 0x29E924u;
            goto label_29e924;
        }
    }
    ctx->pc = 0x29E878u;
label_29e878:
    // 0x29e878: 0xc08a096  jal         func_228258
label_29e87c:
    if (ctx->pc == 0x29E87Cu) {
        ctx->pc = 0x29E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E878u;
        // 0x29e87c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E880u;
        goto label_29e880;
    }
    ctx->pc = 0x29E878u;
    SET_GPR_U32(ctx, 31, 0x29E880u);
    ctx->pc = 0x29E87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E878u;
    // 0x29e87c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x29E878u, 0x29E880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E880u;
label_29e880:
    // 0x29e880: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29e880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29e884:
    // 0x29e884: 0x10430026  beq         $v0, $v1, . + 4 + (0x26 << 2)
label_29e888:
    if (ctx->pc == 0x29E888u) {
        ctx->pc = 0x29E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E884u;
        // 0x29e888: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E88Cu;
        goto label_29e88c;
    }
    ctx->pc = 0x29E884u;
    {
        const bool branch_taken_0x29e884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x29E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E884u;
        // 0x29e888: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e884) {
            ctx->pc = 0x29E920u;
            goto label_29e920;
        }
    }
    ctx->pc = 0x29E88Cu;
label_29e88c:
    // 0x29e88c: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x29e88cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_29e890:
    // 0x29e890: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x29e890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_29e894:
    // 0x29e894: 0x27b10230  addiu       $s1, $sp, 0x230
    ctx->pc = 0x29e894u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_29e898:
    // 0x29e898: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x29e898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_29e89c:
    // 0x29e89c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29e89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29e8a0:
    // 0x29e8a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29e8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29e8a4:
    // 0x29e8a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29e8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29e8a8:
    // 0x29e8a8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x29e8a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_29e8ac:
    // 0x29e8ac: 0xc0cdb38  jal         func_336CE0
label_29e8b0:
    if (ctx->pc == 0x29E8B0u) {
        ctx->pc = 0x29E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8ACu;
        // 0x29e8b0: 0x7fa20230  sq          $v0, 0x230($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E8B4u;
        goto label_29e8b4;
    }
    ctx->pc = 0x29E8ACu;
    SET_GPR_U32(ctx, 31, 0x29E8B4u);
    ctx->pc = 0x29E8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E8ACu;
    // 0x29e8b0: 0x7fa20230  sq          $v0, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x29E8ACu, 0x29E8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E8B4u;
label_29e8b4:
    // 0x29e8b4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x29e8b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29e8b8:
    // 0x29e8b8: 0x0  nop
    ctx->pc = 0x29e8b8u;
    // NOP
label_29e8bc:
    // 0x29e8bc: 0x45010019  bc1t        . + 4 + (0x19 << 2)
label_29e8c0:
    if (ctx->pc == 0x29E8C0u) {
        ctx->pc = 0x29E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8BCu;
        // 0x29e8c0: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E8C4u;
        goto label_29e8c4;
    }
    ctx->pc = 0x29E8BCu;
    {
        const bool branch_taken_0x29e8bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8BCu;
        // 0x29e8c0: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e8bc) {
            ctx->pc = 0x29E924u;
            goto label_29e924;
        }
    }
    ctx->pc = 0x29E8C4u;
label_29e8c4:
    // 0x29e8c4: 0xc087502  jal         func_21D408
label_29e8c8:
    if (ctx->pc == 0x29E8C8u) {
        ctx->pc = 0x29E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8C4u;
        // 0x29e8c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E8CCu;
        goto label_29e8cc;
    }
    ctx->pc = 0x29E8C4u;
    SET_GPR_U32(ctx, 31, 0x29E8CCu);
    ctx->pc = 0x29E8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E8C4u;
    // 0x29e8c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29E8C4u, 0x29E8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E8CCu;
label_29e8cc:
    // 0x29e8cc: 0xc0e409a  jal         func_390268
label_29e8d0:
    if (ctx->pc == 0x29E8D0u) {
        ctx->pc = 0x29E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8CCu;
        // 0x29e8d0: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E8D4u;
        goto label_29e8d4;
    }
    ctx->pc = 0x29E8CCu;
    SET_GPR_U32(ctx, 31, 0x29E8D4u);
    ctx->pc = 0x29E8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E8CCu;
    // 0x29e8d0: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x29E8CCu, 0x29E8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E8D4u;
label_29e8d4:
    // 0x29e8d4: 0x12130013  beq         $s0, $s3, . + 4 + (0x13 << 2)
label_29e8d8:
    if (ctx->pc == 0x29E8D8u) {
        ctx->pc = 0x29E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8D4u;
        // 0x29e8d8: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E8DCu;
        goto label_29e8dc;
    }
    ctx->pc = 0x29E8D4u;
    {
        const bool branch_taken_0x29e8d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x29E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8D4u;
        // 0x29e8d8: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e8d4) {
            ctx->pc = 0x29E924u;
            goto label_29e924;
        }
    }
    ctx->pc = 0x29E8DCu;
label_29e8dc:
    // 0x29e8dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_29e8e0:
    if (ctx->pc == 0x29E8E0u) {
        ctx->pc = 0x29E8E4u;
        goto label_29e8e4;
    }
    ctx->pc = 0x29E8DCu;
    {
        const bool branch_taken_0x29e8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e8dc) {
            ctx->pc = 0x29E8F4u;
            goto label_29e8f4;
        }
    }
    ctx->pc = 0x29E8E4u;
label_29e8e4:
    // 0x29e8e4: 0x50530010  beql        $v0, $s3, . + 4 + (0x10 << 2)
label_29e8e8:
    if (ctx->pc == 0x29E8E8u) {
        ctx->pc = 0x29E8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8E4u;
        // 0x29e8e8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E8ECu;
        goto label_29e8ec;
    }
    ctx->pc = 0x29E8E4u;
    {
        const bool branch_taken_0x29e8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x29e8e4) {
            ctx->pc = 0x29E8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E8E4u;
            // 0x29e8e8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E928u;
            goto label_29e928;
        }
    }
    ctx->pc = 0x29E8ECu;
label_29e8ec:
    // 0x29e8ec: 0x5057000e  beql        $v0, $s7, . + 4 + (0xE << 2)
label_29e8f0:
    if (ctx->pc == 0x29E8F0u) {
        ctx->pc = 0x29E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8ECu;
        // 0x29e8f0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E8F4u;
        goto label_29e8f4;
    }
    ctx->pc = 0x29E8ECu;
    {
        const bool branch_taken_0x29e8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x29e8ec) {
            ctx->pc = 0x29E8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E8ECu;
            // 0x29e8f0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E928u;
            goto label_29e928;
        }
    }
    ctx->pc = 0x29E8F4u;
label_29e8f4:
    // 0x29e8f4: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
label_29e8f8:
    if (ctx->pc == 0x29E8F8u) {
        ctx->pc = 0x29E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8F4u;
        // 0x29e8f8: 0x8fa40244  lw          $a0, 0x244($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E8FCu;
        goto label_29e8fc;
    }
    ctx->pc = 0x29E8F4u;
    {
        const bool branch_taken_0x29e8f4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8F4u;
        // 0x29e8f8: 0x8fa40244  lw          $a0, 0x244($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e8f4) {
            ctx->pc = 0x29E904u;
            goto label_29e904;
        }
    }
    ctx->pc = 0x29E8FCu;
label_29e8fc:
    // 0x29e8fc: 0x12d00009  beq         $s6, $s0, . + 4 + (0x9 << 2)
label_29e900:
    if (ctx->pc == 0x29E900u) {
        ctx->pc = 0x29E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8FCu;
        // 0x29e900: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E904u;
        goto label_29e904;
    }
    ctx->pc = 0x29E8FCu;
    {
        const bool branch_taken_0x29e8fc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 16));
        ctx->pc = 0x29E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8FCu;
        // 0x29e900: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e8fc) {
            ctx->pc = 0x29E924u;
            goto label_29e924;
        }
    }
    ctx->pc = 0x29E904u;
label_29e904:
    // 0x29e904: 0xc0a7ac4  jal         func_29EB10
label_29e908:
    if (ctx->pc == 0x29E908u) {
        ctx->pc = 0x29E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E904u;
        // 0x29e908: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E90Cu;
        goto label_29e90c;
    }
    ctx->pc = 0x29E904u;
    SET_GPR_U32(ctx, 31, 0x29E90Cu);
    ctx->pc = 0x29E908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E904u;
    // 0x29e908: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EB10u, 0x29E904u, 0x29E90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E90Cu;
label_29e90c:
    // 0x29e90c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29e90cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_29e910:
    // 0x29e910: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x29e910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_29e914:
    // 0x29e914: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x29e914u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_29e918:
    // 0x29e918: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x29e918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_29e91c:
    // 0x29e91c: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x29e91cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
label_29e920:
    // 0x29e920: 0x8fc3489c  lw          $v1, 0x489C($fp)
    ctx->pc = 0x29e920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_29e924:
    // 0x29e924: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29e924u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_29e928:
    // 0x29e928: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x29e928u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_29e92c:
    // 0x29e92c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x29e92cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_29e930:
    // 0x29e930: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
label_29e934:
    if (ctx->pc == 0x29E934u) {
        ctx->pc = 0x29E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E930u;
        // 0x29e934: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E938u;
        goto label_29e938;
    }
    ctx->pc = 0x29E930u;
    {
        const bool branch_taken_0x29e930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E930u;
        // 0x29e934: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e930) {
            ctx->pc = 0x29E860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e860;
        }
    }
    ctx->pc = 0x29E938u;
label_29e938:
    // 0x29e938: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x29e938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_29e93c:
    // 0x29e93c: 0x8c62b734  lw          $v0, -0x48CC($v1)
    ctx->pc = 0x29e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_29e940:
    // 0x29e940: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x29e940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_29e944:
    // 0x29e944: 0xaea30044  sw          $v1, 0x44($s5)
    ctx->pc = 0x29e944u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 3));
label_29e948:
    // 0x29e948: 0x7bb002e0  lq          $s0, 0x2E0($sp)
    ctx->pc = 0x29e948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 736)));
label_29e94c:
    // 0x29e94c: 0x7bb102d0  lq          $s1, 0x2D0($sp)
    ctx->pc = 0x29e94cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_29e950:
    // 0x29e950: 0x7bb202c0  lq          $s2, 0x2C0($sp)
    ctx->pc = 0x29e950u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_29e954:
    // 0x29e954: 0x7bb302b0  lq          $s3, 0x2B0($sp)
    ctx->pc = 0x29e954u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_29e958:
    // 0x29e958: 0x7bb402a0  lq          $s4, 0x2A0($sp)
    ctx->pc = 0x29e958u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_29e95c:
    // 0x29e95c: 0x7bb50290  lq          $s5, 0x290($sp)
    ctx->pc = 0x29e95cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_29e960:
    // 0x29e960: 0x7bb60280  lq          $s6, 0x280($sp)
    ctx->pc = 0x29e960u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_29e964:
    // 0x29e964: 0x7bb70270  lq          $s7, 0x270($sp)
    ctx->pc = 0x29e964u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_29e968:
    // 0x29e968: 0x7bbe0260  lq          $fp, 0x260($sp)
    ctx->pc = 0x29e968u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_29e96c:
    // 0x29e96c: 0xdfbf0250  ld          $ra, 0x250($sp)
    ctx->pc = 0x29e96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 592)));
label_29e970:
    // 0x29e970: 0xc7b402f0  lwc1        $f20, 0x2F0($sp)
    ctx->pc = 0x29e970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_29e974:
    // 0x29e974: 0x3e00008  jr          $ra
label_29e978:
    if (ctx->pc == 0x29E978u) {
        ctx->pc = 0x29E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E974u;
        // 0x29e978: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E97Cu;
        goto label_29e97c;
    }
    ctx->pc = 0x29E974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E974u;
        // 0x29e978: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E97Cu;
label_29e97c:
    // 0x29e97c: 0x0  nop
    ctx->pc = 0x29e97cu;
    // NOP
    ctx->pc = 0x29e980u;
}
