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

// Function: sub_0046E570
// Address: 0x46e570 - 0x46e910
void sub_0046E570_0x46e570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046E570_0x46e570");
#endif

    switch (ctx->pc) {
        case 0x46e570u: goto label_46e570;
        case 0x46e574u: goto label_46e574;
        case 0x46e578u: goto label_46e578;
        case 0x46e57cu: goto label_46e57c;
        case 0x46e580u: goto label_46e580;
        case 0x46e584u: goto label_46e584;
        case 0x46e588u: goto label_46e588;
        case 0x46e58cu: goto label_46e58c;
        case 0x46e590u: goto label_46e590;
        case 0x46e594u: goto label_46e594;
        case 0x46e598u: goto label_46e598;
        case 0x46e59cu: goto label_46e59c;
        case 0x46e5a0u: goto label_46e5a0;
        case 0x46e5a4u: goto label_46e5a4;
        case 0x46e5a8u: goto label_46e5a8;
        case 0x46e5acu: goto label_46e5ac;
        case 0x46e5b0u: goto label_46e5b0;
        case 0x46e5b4u: goto label_46e5b4;
        case 0x46e5b8u: goto label_46e5b8;
        case 0x46e5bcu: goto label_46e5bc;
        case 0x46e5c0u: goto label_46e5c0;
        case 0x46e5c4u: goto label_46e5c4;
        case 0x46e5c8u: goto label_46e5c8;
        case 0x46e5ccu: goto label_46e5cc;
        case 0x46e5d0u: goto label_46e5d0;
        case 0x46e5d4u: goto label_46e5d4;
        case 0x46e5d8u: goto label_46e5d8;
        case 0x46e5dcu: goto label_46e5dc;
        case 0x46e5e0u: goto label_46e5e0;
        case 0x46e5e4u: goto label_46e5e4;
        case 0x46e5e8u: goto label_46e5e8;
        case 0x46e5ecu: goto label_46e5ec;
        case 0x46e5f0u: goto label_46e5f0;
        case 0x46e5f4u: goto label_46e5f4;
        case 0x46e5f8u: goto label_46e5f8;
        case 0x46e5fcu: goto label_46e5fc;
        case 0x46e600u: goto label_46e600;
        case 0x46e604u: goto label_46e604;
        case 0x46e608u: goto label_46e608;
        case 0x46e60cu: goto label_46e60c;
        case 0x46e610u: goto label_46e610;
        case 0x46e614u: goto label_46e614;
        case 0x46e618u: goto label_46e618;
        case 0x46e61cu: goto label_46e61c;
        case 0x46e620u: goto label_46e620;
        case 0x46e624u: goto label_46e624;
        case 0x46e628u: goto label_46e628;
        case 0x46e62cu: goto label_46e62c;
        case 0x46e630u: goto label_46e630;
        case 0x46e634u: goto label_46e634;
        case 0x46e638u: goto label_46e638;
        case 0x46e63cu: goto label_46e63c;
        case 0x46e640u: goto label_46e640;
        case 0x46e644u: goto label_46e644;
        case 0x46e648u: goto label_46e648;
        case 0x46e64cu: goto label_46e64c;
        case 0x46e650u: goto label_46e650;
        case 0x46e654u: goto label_46e654;
        case 0x46e658u: goto label_46e658;
        case 0x46e65cu: goto label_46e65c;
        case 0x46e660u: goto label_46e660;
        case 0x46e664u: goto label_46e664;
        case 0x46e668u: goto label_46e668;
        case 0x46e66cu: goto label_46e66c;
        case 0x46e670u: goto label_46e670;
        case 0x46e674u: goto label_46e674;
        case 0x46e678u: goto label_46e678;
        case 0x46e67cu: goto label_46e67c;
        case 0x46e680u: goto label_46e680;
        case 0x46e684u: goto label_46e684;
        case 0x46e688u: goto label_46e688;
        case 0x46e68cu: goto label_46e68c;
        case 0x46e690u: goto label_46e690;
        case 0x46e694u: goto label_46e694;
        case 0x46e698u: goto label_46e698;
        case 0x46e69cu: goto label_46e69c;
        case 0x46e6a0u: goto label_46e6a0;
        case 0x46e6a4u: goto label_46e6a4;
        case 0x46e6a8u: goto label_46e6a8;
        case 0x46e6acu: goto label_46e6ac;
        case 0x46e6b0u: goto label_46e6b0;
        case 0x46e6b4u: goto label_46e6b4;
        case 0x46e6b8u: goto label_46e6b8;
        case 0x46e6bcu: goto label_46e6bc;
        case 0x46e6c0u: goto label_46e6c0;
        case 0x46e6c4u: goto label_46e6c4;
        case 0x46e6c8u: goto label_46e6c8;
        case 0x46e6ccu: goto label_46e6cc;
        case 0x46e6d0u: goto label_46e6d0;
        case 0x46e6d4u: goto label_46e6d4;
        case 0x46e6d8u: goto label_46e6d8;
        case 0x46e6dcu: goto label_46e6dc;
        case 0x46e6e0u: goto label_46e6e0;
        case 0x46e6e4u: goto label_46e6e4;
        case 0x46e6e8u: goto label_46e6e8;
        case 0x46e6ecu: goto label_46e6ec;
        case 0x46e6f0u: goto label_46e6f0;
        case 0x46e6f4u: goto label_46e6f4;
        case 0x46e6f8u: goto label_46e6f8;
        case 0x46e6fcu: goto label_46e6fc;
        case 0x46e700u: goto label_46e700;
        case 0x46e704u: goto label_46e704;
        case 0x46e708u: goto label_46e708;
        case 0x46e70cu: goto label_46e70c;
        case 0x46e710u: goto label_46e710;
        case 0x46e714u: goto label_46e714;
        case 0x46e718u: goto label_46e718;
        case 0x46e71cu: goto label_46e71c;
        case 0x46e720u: goto label_46e720;
        case 0x46e724u: goto label_46e724;
        case 0x46e728u: goto label_46e728;
        case 0x46e72cu: goto label_46e72c;
        case 0x46e730u: goto label_46e730;
        case 0x46e734u: goto label_46e734;
        case 0x46e738u: goto label_46e738;
        case 0x46e73cu: goto label_46e73c;
        case 0x46e740u: goto label_46e740;
        case 0x46e744u: goto label_46e744;
        case 0x46e748u: goto label_46e748;
        case 0x46e74cu: goto label_46e74c;
        case 0x46e750u: goto label_46e750;
        case 0x46e754u: goto label_46e754;
        case 0x46e758u: goto label_46e758;
        case 0x46e75cu: goto label_46e75c;
        case 0x46e760u: goto label_46e760;
        case 0x46e764u: goto label_46e764;
        case 0x46e768u: goto label_46e768;
        case 0x46e76cu: goto label_46e76c;
        case 0x46e770u: goto label_46e770;
        case 0x46e774u: goto label_46e774;
        case 0x46e778u: goto label_46e778;
        case 0x46e77cu: goto label_46e77c;
        case 0x46e780u: goto label_46e780;
        case 0x46e784u: goto label_46e784;
        case 0x46e788u: goto label_46e788;
        case 0x46e78cu: goto label_46e78c;
        case 0x46e790u: goto label_46e790;
        case 0x46e794u: goto label_46e794;
        case 0x46e798u: goto label_46e798;
        case 0x46e79cu: goto label_46e79c;
        case 0x46e7a0u: goto label_46e7a0;
        case 0x46e7a4u: goto label_46e7a4;
        case 0x46e7a8u: goto label_46e7a8;
        case 0x46e7acu: goto label_46e7ac;
        case 0x46e7b0u: goto label_46e7b0;
        case 0x46e7b4u: goto label_46e7b4;
        case 0x46e7b8u: goto label_46e7b8;
        case 0x46e7bcu: goto label_46e7bc;
        case 0x46e7c0u: goto label_46e7c0;
        case 0x46e7c4u: goto label_46e7c4;
        case 0x46e7c8u: goto label_46e7c8;
        case 0x46e7ccu: goto label_46e7cc;
        case 0x46e7d0u: goto label_46e7d0;
        case 0x46e7d4u: goto label_46e7d4;
        case 0x46e7d8u: goto label_46e7d8;
        case 0x46e7dcu: goto label_46e7dc;
        case 0x46e7e0u: goto label_46e7e0;
        case 0x46e7e4u: goto label_46e7e4;
        case 0x46e7e8u: goto label_46e7e8;
        case 0x46e7ecu: goto label_46e7ec;
        case 0x46e7f0u: goto label_46e7f0;
        case 0x46e7f4u: goto label_46e7f4;
        case 0x46e7f8u: goto label_46e7f8;
        case 0x46e7fcu: goto label_46e7fc;
        case 0x46e800u: goto label_46e800;
        case 0x46e804u: goto label_46e804;
        case 0x46e808u: goto label_46e808;
        case 0x46e80cu: goto label_46e80c;
        case 0x46e810u: goto label_46e810;
        case 0x46e814u: goto label_46e814;
        case 0x46e818u: goto label_46e818;
        case 0x46e81cu: goto label_46e81c;
        case 0x46e820u: goto label_46e820;
        case 0x46e824u: goto label_46e824;
        case 0x46e828u: goto label_46e828;
        case 0x46e82cu: goto label_46e82c;
        case 0x46e830u: goto label_46e830;
        case 0x46e834u: goto label_46e834;
        case 0x46e838u: goto label_46e838;
        case 0x46e83cu: goto label_46e83c;
        case 0x46e840u: goto label_46e840;
        case 0x46e844u: goto label_46e844;
        case 0x46e848u: goto label_46e848;
        case 0x46e84cu: goto label_46e84c;
        case 0x46e850u: goto label_46e850;
        case 0x46e854u: goto label_46e854;
        case 0x46e858u: goto label_46e858;
        case 0x46e85cu: goto label_46e85c;
        case 0x46e860u: goto label_46e860;
        case 0x46e864u: goto label_46e864;
        case 0x46e868u: goto label_46e868;
        case 0x46e86cu: goto label_46e86c;
        case 0x46e870u: goto label_46e870;
        case 0x46e874u: goto label_46e874;
        case 0x46e878u: goto label_46e878;
        case 0x46e87cu: goto label_46e87c;
        case 0x46e880u: goto label_46e880;
        case 0x46e884u: goto label_46e884;
        case 0x46e888u: goto label_46e888;
        case 0x46e88cu: goto label_46e88c;
        case 0x46e890u: goto label_46e890;
        case 0x46e894u: goto label_46e894;
        case 0x46e898u: goto label_46e898;
        case 0x46e89cu: goto label_46e89c;
        case 0x46e8a0u: goto label_46e8a0;
        case 0x46e8a4u: goto label_46e8a4;
        case 0x46e8a8u: goto label_46e8a8;
        case 0x46e8acu: goto label_46e8ac;
        case 0x46e8b0u: goto label_46e8b0;
        case 0x46e8b4u: goto label_46e8b4;
        case 0x46e8b8u: goto label_46e8b8;
        case 0x46e8bcu: goto label_46e8bc;
        case 0x46e8c0u: goto label_46e8c0;
        case 0x46e8c4u: goto label_46e8c4;
        case 0x46e8c8u: goto label_46e8c8;
        case 0x46e8ccu: goto label_46e8cc;
        case 0x46e8d0u: goto label_46e8d0;
        case 0x46e8d4u: goto label_46e8d4;
        case 0x46e8d8u: goto label_46e8d8;
        case 0x46e8dcu: goto label_46e8dc;
        case 0x46e8e0u: goto label_46e8e0;
        case 0x46e8e4u: goto label_46e8e4;
        case 0x46e8e8u: goto label_46e8e8;
        case 0x46e8ecu: goto label_46e8ec;
        case 0x46e8f0u: goto label_46e8f0;
        case 0x46e8f4u: goto label_46e8f4;
        case 0x46e8f8u: goto label_46e8f8;
        case 0x46e8fcu: goto label_46e8fc;
        case 0x46e900u: goto label_46e900;
        case 0x46e904u: goto label_46e904;
        case 0x46e908u: goto label_46e908;
        case 0x46e90cu: goto label_46e90c;
        default: break;
    }

    ctx->pc = 0x46e570u;

label_46e570:
    // 0x46e570: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x46e570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_46e574:
    // 0x46e574: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x46e574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_46e578:
    // 0x46e578: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x46e578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_46e57c:
    // 0x46e57c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x46e57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_46e580:
    // 0x46e580: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x46e580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_46e584:
    // 0x46e584: 0x2450ad18  addiu       $s0, $v0, -0x52E8
    ctx->pc = 0x46e584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_46e588:
    // 0x46e588: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x46e588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_46e58c:
    // 0x46e58c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x46e58cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_46e590:
    // 0x46e590: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x46e590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_46e594:
    // 0x46e594: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x46e594u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_46e598:
    // 0x46e598: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x46e598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_46e59c:
    // 0x46e59c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x46e59cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46e5a0:
    // 0x46e5a0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x46e5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_46e5a4:
    // 0x46e5a4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x46e5a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_46e5a8:
    // 0x46e5a8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x46e5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_46e5ac:
    // 0x46e5ac: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x46e5acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_46e5b0:
    // 0x46e5b0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x46e5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_46e5b4:
    // 0x46e5b4: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x46e5b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_46e5b8:
    // 0x46e5b8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x46e5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_46e5bc:
    // 0x46e5bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x46e5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_46e5c0:
    // 0x46e5c0: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x46e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_46e5c4:
    // 0x46e5c4: 0x40f809  jalr        $v0
label_46e5c8:
    if (ctx->pc == 0x46E5C8u) {
        ctx->pc = 0x46E5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E5C4u;
        // 0x46e5c8: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E5CCu;
        goto label_46e5cc;
    }
    ctx->pc = 0x46E5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46E5CCu);
        ctx->pc = 0x46E5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E5C4u;
        // 0x46e5c8: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46E5C4u, 0x46E5CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46E5CCu;
label_46e5cc:
    // 0x46e5cc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x46e5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_46e5d0:
    // 0x46e5d0: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x46e5d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_46e5d4:
    // 0x46e5d4: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x46e5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_46e5d8:
    // 0x46e5d8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x46e5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_46e5dc:
    // 0x46e5dc: 0x34e70502  ori         $a3, $a3, 0x502
    ctx->pc = 0x46e5dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1282);
label_46e5e0:
    // 0x46e5e0: 0xc11f604  jal         func_47D810
label_46e5e4:
    if (ctx->pc == 0x46E5E4u) {
        ctx->pc = 0x46E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E5E0u;
        // 0x46e5e4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E5E8u;
        goto label_46e5e8;
    }
    ctx->pc = 0x46E5E0u;
    SET_GPR_U32(ctx, 31, 0x46E5E8u);
    ctx->pc = 0x46E5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46E5E0u;
    // 0x46e5e4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D810u, 0x46E5E0u, 0x46E5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46E5E8u;
label_46e5e8:
    // 0x46e5e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x46e5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_46e5ec:
    // 0x46e5ec: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x46e5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_46e5f0:
    // 0x46e5f0: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x46e5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_46e5f4:
    // 0x46e5f4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x46e5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_46e5f8:
    // 0x46e5f8: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x46e5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_46e5fc:
    // 0x46e5fc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x46e5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_46e600:
    // 0x46e600: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x46e600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_46e604:
    // 0x46e604: 0xc11f604  jal         func_47D810
label_46e608:
    if (ctx->pc == 0x46E608u) {
        ctx->pc = 0x46E608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E604u;
        // 0x46e608: 0x34e70502  ori         $a3, $a3, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E60Cu;
        goto label_46e60c;
    }
    ctx->pc = 0x46E604u;
    SET_GPR_U32(ctx, 31, 0x46E60Cu);
    ctx->pc = 0x46E608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46E604u;
    // 0x46e608: 0x34e70502  ori         $a3, $a3, 0x502 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1282);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D810u, 0x46E604u, 0x46E60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46E60Cu;
label_46e60c:
    // 0x46e60c: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x46e60cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
label_46e610:
    // 0x46e610: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x46e610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_46e614:
    // 0x46e614: 0x104000b0  beqz        $v0, . + 4 + (0xB0 << 2)
label_46e618:
    if (ctx->pc == 0x46E618u) {
        ctx->pc = 0x46E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E614u;
        // 0x46e618: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E61Cu;
        goto label_46e61c;
    }
    ctx->pc = 0x46E614u;
    {
        const bool branch_taken_0x46e614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E614u;
        // 0x46e618: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e614) {
            ctx->pc = 0x46E8D8u;
            goto label_46e8d8;
        }
    }
    ctx->pc = 0x46E61Cu;
label_46e61c:
    // 0x46e61c: 0x0  nop
    ctx->pc = 0x46e61cu;
    // NOP
label_46e620:
    // 0x46e620: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x46e620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_46e624:
    // 0x46e624: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x46e624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_46e628:
    // 0x46e628: 0x8ee20118  lw          $v0, 0x118($s7)
    ctx->pc = 0x46e628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 280)));
label_46e62c:
    // 0x46e62c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x46e62cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_46e630:
    // 0x46e630: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x46e630u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_46e634:
    // 0x46e634: 0x40f809  jalr        $v0
label_46e638:
    if (ctx->pc == 0x46E638u) {
        ctx->pc = 0x46E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E634u;
        // 0x46e638: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E63Cu;
        goto label_46e63c;
    }
    ctx->pc = 0x46E634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46E63Cu);
        ctx->pc = 0x46E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E634u;
        // 0x46e638: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46E634u, 0x46E63Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46E63Cu;
label_46e63c:
    // 0x46e63c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x46e63cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_46e640:
    // 0x46e640: 0x743021  addu        $a2, $v1, $s4
    ctx->pc = 0x46e640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_46e644:
    // 0x46e644: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x46e644u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_46e648:
    // 0x46e648: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x46e648u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_46e64c:
    // 0x46e64c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x46e64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_46e650:
    // 0x46e650: 0xa0400020  sb          $zero, 0x20($v0)
    ctx->pc = 0x46e650u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 0));
label_46e654:
    // 0x46e654: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x46e654u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_46e658:
    // 0x46e658: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x46e658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_46e65c:
    // 0x46e65c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x46e65cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_46e660:
    // 0x46e660: 0x7e2021  addu        $a0, $v1, $fp
    ctx->pc = 0x46e660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_46e664:
    // 0x46e664: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x46e664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_46e668:
    // 0x46e668: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x46e668u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_46e66c:
    // 0x46e66c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x46e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_46e670:
    // 0x46e670: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x46e670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_46e674:
    // 0x46e674: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x46e674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_46e678:
    // 0x46e678: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x46e678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
label_46e67c:
    // 0x46e67c: 0x94910002  lhu         $s1, 0x2($a0)
    ctx->pc = 0x46e67cu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_46e680:
    // 0x46e680: 0x94900000  lhu         $s0, 0x0($a0)
    ctx->pc = 0x46e680u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_46e684:
    // 0x46e684: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x46e684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_46e688:
    // 0x46e688: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
label_46e68c:
    if (ctx->pc == 0x46E68Cu) {
        ctx->pc = 0x46E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E688u;
        // 0x46e68c: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E690u;
        goto label_46e690;
    }
    ctx->pc = 0x46E688u;
    {
        const bool branch_taken_0x46e688 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E688u;
        // 0x46e68c: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e688) {
            ctx->pc = 0x46E6F0u;
            goto label_46e6f0;
        }
    }
    ctx->pc = 0x46E690u;
label_46e690:
    // 0x46e690: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x46e690u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_46e694:
    // 0x46e694: 0x0  nop
    ctx->pc = 0x46e694u;
    // NOP
label_46e698:
    // 0x46e698: 0x56020013  bnel        $s0, $v0, . + 4 + (0x13 << 2)
label_46e69c:
    if (ctx->pc == 0x46E69Cu) {
        ctx->pc = 0x46E69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E698u;
        // 0x46e69c: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E6A0u;
        goto label_46e6a0;
    }
    ctx->pc = 0x46E698u;
    {
        const bool branch_taken_0x46e698 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x46e698) {
            ctx->pc = 0x46E69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46E698u;
            // 0x46e69c: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46E6E8u;
            goto label_46e6e8;
        }
    }
    ctx->pc = 0x46E6A0u;
label_46e6a0:
    // 0x46e6a0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x46e6a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_46e6a4:
    // 0x46e6a4: 0x56220010  bnel        $s1, $v0, . + 4 + (0x10 << 2)
label_46e6a8:
    if (ctx->pc == 0x46E6A8u) {
        ctx->pc = 0x46E6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E6A4u;
        // 0x46e6a8: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E6ACu;
        goto label_46e6ac;
    }
    ctx->pc = 0x46E6A4u;
    {
        const bool branch_taken_0x46e6a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x46e6a4) {
            ctx->pc = 0x46E6A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46E6A4u;
            // 0x46e6a8: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46E6E8u;
            goto label_46e6e8;
        }
    }
    ctx->pc = 0x46E6ACu;
label_46e6ac:
    // 0x46e6ac: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x46e6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_46e6b0:
    // 0x46e6b0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_46e6b4:
    if (ctx->pc == 0x46E6B4u) {
        ctx->pc = 0x46E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E6B0u;
        // 0x46e6b4: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E6B8u;
        goto label_46e6b8;
    }
    ctx->pc = 0x46E6B0u;
    {
        const bool branch_taken_0x46e6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46e6b0) {
            ctx->pc = 0x46E6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46E6B0u;
            // 0x46e6b4: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46E6E8u;
            goto label_46e6e8;
        }
    }
    ctx->pc = 0x46E6B8u;
label_46e6b8:
    // 0x46e6b8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x46e6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_46e6bc:
    // 0x46e6bc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x46e6bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_46e6c0:
    // 0x46e6c0: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x46e6c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
label_46e6c4:
    // 0x46e6c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_46e6c8:
    // 0x46e6c8: 0xa0620020  sb          $v0, 0x20($v1)
    ctx->pc = 0x46e6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 2));
label_46e6cc:
    // 0x46e6cc: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x46e6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_46e6d0:
    // 0x46e6d0: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x46e6d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_46e6d4:
    // 0x46e6d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46e6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_46e6d8:
    // 0x46e6d8: 0xa0820020  sb          $v0, 0x20($a0)
    ctx->pc = 0x46e6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 2));
label_46e6dc:
    // 0x46e6dc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x46e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_46e6e0:
    // 0x46e6e0: 0x10000011  b           . + 4 + (0x11 << 2)
label_46e6e4:
    if (ctx->pc == 0x46E6E4u) {
        ctx->pc = 0x46E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E6E0u;
        // 0x46e6e4: 0xaca30008  sw          $v1, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E6E8u;
        goto label_46e6e8;
    }
    ctx->pc = 0x46E6E0u;
    {
        const bool branch_taken_0x46e6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E6E0u;
        // 0x46e6e4: 0xaca30008  sw          $v1, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e6e0) {
            ctx->pc = 0x46E728u;
            goto label_46e728;
        }
    }
    ctx->pc = 0x46E6E8u;
label_46e6e8:
    // 0x46e6e8: 0x54a0ffeb  bnel        $a1, $zero, . + 4 + (-0x15 << 2)
label_46e6ec:
    if (ctx->pc == 0x46E6ECu) {
        ctx->pc = 0x46E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E6E8u;
        // 0x46e6ec: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E6F0u;
        goto label_46e6f0;
    }
    ctx->pc = 0x46E6E8u;
    {
        const bool branch_taken_0x46e6e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x46e6e8) {
            ctx->pc = 0x46E6ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46E6E8u;
            // 0x46e6ec: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46E698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46e698;
        }
    }
    ctx->pc = 0x46E6F0u;
label_46e6f0:
    // 0x46e6f0: 0x8ee20118  lw          $v0, 0x118($s7)
    ctx->pc = 0x46e6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 280)));
label_46e6f4:
    // 0x46e6f4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x46e6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_46e6f8:
    // 0x46e6f8: 0x40f809  jalr        $v0
label_46e6fc:
    if (ctx->pc == 0x46E6FCu) {
        ctx->pc = 0x46E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E6F8u;
        // 0x46e6fc: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E700u;
        goto label_46e700;
    }
    ctx->pc = 0x46E6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46E700u);
        ctx->pc = 0x46E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E6F8u;
        // 0x46e6fc: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46E6F8u, 0x46E700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46E700u;
label_46e700:
    // 0x46e700: 0xa4500000  sh          $s0, 0x0($v0)
    ctx->pc = 0x46e700u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 16));
label_46e704:
    // 0x46e704: 0x2b41821  addu        $v1, $s5, $s4
    ctx->pc = 0x46e704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_46e708:
    // 0x46e708: 0xa4510002  sh          $s1, 0x2($v0)
    ctx->pc = 0x46e708u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 17));
label_46e70c:
    // 0x46e70c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x46e70cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46e710:
    // 0x46e710: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x46e710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_46e714:
    // 0x46e714: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x46e714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_46e718:
    // 0x46e718: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x46e718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_46e71c:
    // 0x46e71c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x46e71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_46e720:
    // 0x46e720: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x46e720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_46e724:
    // 0x46e724: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x46e724u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_46e728:
    // 0x46e728: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x46e728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_46e72c:
    // 0x46e72c: 0x2b42021  addu        $a0, $s5, $s4
    ctx->pc = 0x46e72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_46e730:
    // 0x46e730: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x46e730u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_46e734:
    // 0x46e734: 0x5e1821  addu        $v1, $v0, $fp
    ctx->pc = 0x46e734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_46e738:
    // 0x46e738: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x46e738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46e73c:
    // 0x46e73c: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x46e73cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
label_46e740:
    // 0x46e740: 0x94710004  lhu         $s1, 0x4($v1)
    ctx->pc = 0x46e740u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_46e744:
    // 0x46e744: 0x94700002  lhu         $s0, 0x2($v1)
    ctx->pc = 0x46e744u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_46e748:
    // 0x46e748: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x46e748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_46e74c:
    // 0x46e74c: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
label_46e750:
    if (ctx->pc == 0x46E750u) {
        ctx->pc = 0x46E750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E74Cu;
        // 0x46e750: 0x8ec30004  lw          $v1, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E754u;
        goto label_46e754;
    }
    ctx->pc = 0x46E74Cu;
    {
        const bool branch_taken_0x46e74c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E74Cu;
        // 0x46e750: 0x8ec30004  lw          $v1, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e74c) {
            ctx->pc = 0x46E7B8u;
            goto label_46e7b8;
        }
    }
    ctx->pc = 0x46E754u;
label_46e754:
    // 0x46e754: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x46e754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46e758:
    // 0x46e758: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x46e758u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_46e75c:
    // 0x46e75c: 0x0  nop
    ctx->pc = 0x46e75cu;
    // NOP
label_46e760:
    // 0x46e760: 0x56020013  bnel        $s0, $v0, . + 4 + (0x13 << 2)
label_46e764:
    if (ctx->pc == 0x46E764u) {
        ctx->pc = 0x46E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E760u;
        // 0x46e764: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E768u;
        goto label_46e768;
    }
    ctx->pc = 0x46E760u;
    {
        const bool branch_taken_0x46e760 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x46e760) {
            ctx->pc = 0x46E764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46E760u;
            // 0x46e764: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46E7B0u;
            goto label_46e7b0;
        }
    }
    ctx->pc = 0x46E768u;
label_46e768:
    // 0x46e768: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x46e768u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_46e76c:
    // 0x46e76c: 0x56220010  bnel        $s1, $v0, . + 4 + (0x10 << 2)
label_46e770:
    if (ctx->pc == 0x46E770u) {
        ctx->pc = 0x46E770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E76Cu;
        // 0x46e770: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E774u;
        goto label_46e774;
    }
    ctx->pc = 0x46E76Cu;
    {
        const bool branch_taken_0x46e76c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x46e76c) {
            ctx->pc = 0x46E770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46E76Cu;
            // 0x46e770: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46E7B0u;
            goto label_46e7b0;
        }
    }
    ctx->pc = 0x46E774u;
label_46e774:
    // 0x46e774: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x46e774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_46e778:
    // 0x46e778: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_46e77c:
    if (ctx->pc == 0x46E77Cu) {
        ctx->pc = 0x46E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E778u;
        // 0x46e77c: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E780u;
        goto label_46e780;
    }
    ctx->pc = 0x46E778u;
    {
        const bool branch_taken_0x46e778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46e778) {
            ctx->pc = 0x46E77Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46E778u;
            // 0x46e77c: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46E7B0u;
            goto label_46e7b0;
        }
    }
    ctx->pc = 0x46E780u;
label_46e780:
    // 0x46e780: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x46e780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_46e784:
    // 0x46e784: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x46e784u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_46e788:
    // 0x46e788: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x46e788u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
label_46e78c:
    // 0x46e78c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46e78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_46e790:
    // 0x46e790: 0xa0620020  sb          $v0, 0x20($v1)
    ctx->pc = 0x46e790u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 2));
label_46e794:
    // 0x46e794: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x46e794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_46e798:
    // 0x46e798: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x46e798u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_46e79c:
    // 0x46e79c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_46e7a0:
    // 0x46e7a0: 0xa0820020  sb          $v0, 0x20($a0)
    ctx->pc = 0x46e7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 2));
label_46e7a4:
    // 0x46e7a4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x46e7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_46e7a8:
    // 0x46e7a8: 0x10000012  b           . + 4 + (0x12 << 2)
label_46e7ac:
    if (ctx->pc == 0x46E7ACu) {
        ctx->pc = 0x46E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E7A8u;
        // 0x46e7ac: 0xaca30008  sw          $v1, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E7B0u;
        goto label_46e7b0;
    }
    ctx->pc = 0x46E7A8u;
    {
        const bool branch_taken_0x46e7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E7A8u;
        // 0x46e7ac: 0xaca30008  sw          $v1, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e7a8) {
            ctx->pc = 0x46E7F4u;
            goto label_46e7f4;
        }
    }
    ctx->pc = 0x46E7B0u;
label_46e7b0:
    // 0x46e7b0: 0x54a0ffeb  bnel        $a1, $zero, . + 4 + (-0x15 << 2)
label_46e7b4:
    if (ctx->pc == 0x46E7B4u) {
        ctx->pc = 0x46E7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E7B0u;
        // 0x46e7b4: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E7B8u;
        goto label_46e7b8;
    }
    ctx->pc = 0x46E7B0u;
    {
        const bool branch_taken_0x46e7b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x46e7b0) {
            ctx->pc = 0x46E7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46E7B0u;
            // 0x46e7b4: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46E760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46e760;
        }
    }
    ctx->pc = 0x46E7B8u;
label_46e7b8:
    // 0x46e7b8: 0x8ee20118  lw          $v0, 0x118($s7)
    ctx->pc = 0x46e7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 280)));
label_46e7bc:
    // 0x46e7bc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x46e7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_46e7c0:
    // 0x46e7c0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x46e7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_46e7c4:
    // 0x46e7c4: 0x40f809  jalr        $v0
label_46e7c8:
    if (ctx->pc == 0x46E7C8u) {
        ctx->pc = 0x46E7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E7C4u;
        // 0x46e7c8: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E7CCu;
        goto label_46e7cc;
    }
    ctx->pc = 0x46E7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46E7CCu);
        ctx->pc = 0x46E7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E7C4u;
        // 0x46e7c8: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46E7C4u, 0x46E7CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46E7CCu;
label_46e7cc:
    // 0x46e7cc: 0xa4500000  sh          $s0, 0x0($v0)
    ctx->pc = 0x46e7ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 16));
label_46e7d0:
    // 0x46e7d0: 0x2b41821  addu        $v1, $s5, $s4
    ctx->pc = 0x46e7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_46e7d4:
    // 0x46e7d4: 0xa4510002  sh          $s1, 0x2($v0)
    ctx->pc = 0x46e7d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 17));
label_46e7d8:
    // 0x46e7d8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x46e7d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46e7dc:
    // 0x46e7dc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x46e7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_46e7e0:
    // 0x46e7e0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x46e7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_46e7e4:
    // 0x46e7e4: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x46e7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_46e7e8:
    // 0x46e7e8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x46e7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_46e7ec:
    // 0x46e7ec: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x46e7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_46e7f0:
    // 0x46e7f0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x46e7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_46e7f4:
    // 0x46e7f4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x46e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_46e7f8:
    // 0x46e7f8: 0x2b42021  addu        $a0, $s5, $s4
    ctx->pc = 0x46e7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_46e7fc:
    // 0x46e7fc: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x46e7fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_46e800:
    // 0x46e800: 0x5e1821  addu        $v1, $v0, $fp
    ctx->pc = 0x46e800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_46e804:
    // 0x46e804: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x46e804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46e808:
    // 0x46e808: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x46e808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
label_46e80c:
    // 0x46e80c: 0x94710000  lhu         $s1, 0x0($v1)
    ctx->pc = 0x46e80cu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_46e810:
    // 0x46e810: 0x94700004  lhu         $s0, 0x4($v1)
    ctx->pc = 0x46e810u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_46e814:
    // 0x46e814: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x46e814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_46e818:
    // 0x46e818: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
label_46e81c:
    if (ctx->pc == 0x46E81Cu) {
        ctx->pc = 0x46E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E818u;
        // 0x46e81c: 0x8ec30004  lw          $v1, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E820u;
        goto label_46e820;
    }
    ctx->pc = 0x46E818u;
    {
        const bool branch_taken_0x46e818 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E818u;
        // 0x46e81c: 0x8ec30004  lw          $v1, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e818) {
            ctx->pc = 0x46E880u;
            goto label_46e880;
        }
    }
    ctx->pc = 0x46E820u;
label_46e820:
    // 0x46e820: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x46e820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46e824:
    // 0x46e824: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x46e824u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_46e828:
    // 0x46e828: 0x56020013  bnel        $s0, $v0, . + 4 + (0x13 << 2)
label_46e82c:
    if (ctx->pc == 0x46E82Cu) {
        ctx->pc = 0x46E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E828u;
        // 0x46e82c: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E830u;
        goto label_46e830;
    }
    ctx->pc = 0x46E828u;
    {
        const bool branch_taken_0x46e828 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x46e828) {
            ctx->pc = 0x46E82Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46E828u;
            // 0x46e82c: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46E878u;
            goto label_46e878;
        }
    }
    ctx->pc = 0x46E830u;
label_46e830:
    // 0x46e830: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x46e830u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_46e834:
    // 0x46e834: 0x56220010  bnel        $s1, $v0, . + 4 + (0x10 << 2)
label_46e838:
    if (ctx->pc == 0x46E838u) {
        ctx->pc = 0x46E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E834u;
        // 0x46e838: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E83Cu;
        goto label_46e83c;
    }
    ctx->pc = 0x46E834u;
    {
        const bool branch_taken_0x46e834 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x46e834) {
            ctx->pc = 0x46E838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46E834u;
            // 0x46e838: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46E878u;
            goto label_46e878;
        }
    }
    ctx->pc = 0x46E83Cu;
label_46e83c:
    // 0x46e83c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x46e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_46e840:
    // 0x46e840: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_46e844:
    if (ctx->pc == 0x46E844u) {
        ctx->pc = 0x46E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E840u;
        // 0x46e844: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E848u;
        goto label_46e848;
    }
    ctx->pc = 0x46E840u;
    {
        const bool branch_taken_0x46e840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46e840) {
            ctx->pc = 0x46E844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46E840u;
            // 0x46e844: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46E878u;
            goto label_46e878;
        }
    }
    ctx->pc = 0x46E848u;
label_46e848:
    // 0x46e848: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x46e848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_46e84c:
    // 0x46e84c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x46e84cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_46e850:
    // 0x46e850: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x46e850u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
label_46e854:
    // 0x46e854: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46e854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_46e858:
    // 0x46e858: 0xa0620020  sb          $v0, 0x20($v1)
    ctx->pc = 0x46e858u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 2));
label_46e85c:
    // 0x46e85c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x46e85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_46e860:
    // 0x46e860: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x46e860u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_46e864:
    // 0x46e864: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46e864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_46e868:
    // 0x46e868: 0xa0820020  sb          $v0, 0x20($a0)
    ctx->pc = 0x46e868u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 2));
label_46e86c:
    // 0x46e86c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x46e86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_46e870:
    // 0x46e870: 0x10000012  b           . + 4 + (0x12 << 2)
label_46e874:
    if (ctx->pc == 0x46E874u) {
        ctx->pc = 0x46E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E870u;
        // 0x46e874: 0xaca30008  sw          $v1, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E878u;
        goto label_46e878;
    }
    ctx->pc = 0x46E870u;
    {
        const bool branch_taken_0x46e870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E870u;
        // 0x46e874: 0xaca30008  sw          $v1, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e870) {
            ctx->pc = 0x46E8BCu;
            goto label_46e8bc;
        }
    }
    ctx->pc = 0x46E878u;
label_46e878:
    // 0x46e878: 0x54a0ffeb  bnel        $a1, $zero, . + 4 + (-0x15 << 2)
label_46e87c:
    if (ctx->pc == 0x46E87Cu) {
        ctx->pc = 0x46E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E878u;
        // 0x46e87c: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E880u;
        goto label_46e880;
    }
    ctx->pc = 0x46E878u;
    {
        const bool branch_taken_0x46e878 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x46e878) {
            ctx->pc = 0x46E87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46E878u;
            // 0x46e87c: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46E828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46e828;
        }
    }
    ctx->pc = 0x46E880u;
label_46e880:
    // 0x46e880: 0x8ee20118  lw          $v0, 0x118($s7)
    ctx->pc = 0x46e880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 280)));
label_46e884:
    // 0x46e884: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x46e884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_46e888:
    // 0x46e888: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x46e888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_46e88c:
    // 0x46e88c: 0x40f809  jalr        $v0
label_46e890:
    if (ctx->pc == 0x46E890u) {
        ctx->pc = 0x46E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E88Cu;
        // 0x46e890: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E894u;
        goto label_46e894;
    }
    ctx->pc = 0x46E88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46E894u);
        ctx->pc = 0x46E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E88Cu;
        // 0x46e890: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46E88Cu, 0x46E894u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46E894u;
label_46e894:
    // 0x46e894: 0xa4500000  sh          $s0, 0x0($v0)
    ctx->pc = 0x46e894u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 16));
label_46e898:
    // 0x46e898: 0x2b41821  addu        $v1, $s5, $s4
    ctx->pc = 0x46e898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_46e89c:
    // 0x46e89c: 0xa4510002  sh          $s1, 0x2($v0)
    ctx->pc = 0x46e89cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 17));
label_46e8a0:
    // 0x46e8a0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x46e8a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46e8a4:
    // 0x46e8a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x46e8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_46e8a8:
    // 0x46e8a8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x46e8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_46e8ac:
    // 0x46e8ac: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x46e8acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_46e8b0:
    // 0x46e8b0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x46e8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_46e8b4:
    // 0x46e8b4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x46e8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_46e8b8:
    // 0x46e8b8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x46e8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_46e8bc:
    // 0x46e8bc: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x46e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_46e8c0:
    // 0x46e8c0: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x46e8c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_46e8c4:
    // 0x46e8c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x46e8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46e8c8:
    // 0x46e8c8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x46e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_46e8cc:
    // 0x46e8cc: 0x242202b  sltu        $a0, $s2, $v0
    ctx->pc = 0x46e8ccu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_46e8d0:
    // 0x46e8d0: 0x1480ff53  bnez        $a0, . + 4 + (-0xAD << 2)
label_46e8d4:
    if (ctx->pc == 0x46E8D4u) {
        ctx->pc = 0x46E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E8D0u;
        // 0x46e8d4: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E8D8u;
        goto label_46e8d8;
    }
    ctx->pc = 0x46E8D0u;
    {
        const bool branch_taken_0x46e8d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x46E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E8D0u;
        // 0x46e8d4: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e8d0) {
            ctx->pc = 0x46E620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46e620;
        }
    }
    ctx->pc = 0x46E8D8u;
label_46e8d8:
    // 0x46e8d8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x46e8d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46e8dc:
    // 0x46e8dc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x46e8dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_46e8e0:
    // 0x46e8e0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x46e8e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_46e8e4:
    // 0x46e8e4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x46e8e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_46e8e8:
    // 0x46e8e8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x46e8e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_46e8ec:
    // 0x46e8ec: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x46e8ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_46e8f0:
    // 0x46e8f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x46e8f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_46e8f4:
    // 0x46e8f4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x46e8f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46e8f8:
    // 0x46e8f8: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x46e8f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46e8fc:
    // 0x46e8fc: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x46e8fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46e900:
    // 0x46e900: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46e900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_46e904:
    // 0x46e904: 0x3e00008  jr          $ra
label_46e908:
    if (ctx->pc == 0x46E908u) {
        ctx->pc = 0x46E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E904u;
        // 0x46e908: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E90Cu;
        goto label_46e90c;
    }
    ctx->pc = 0x46E904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E904u;
        // 0x46e908: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46E904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46E90Cu;
label_46e90c:
    // 0x46e90c: 0x0  nop
    ctx->pc = 0x46e90cu;
    // NOP
    ctx->pc = 0x46e910u;
}
