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

// Function: sub_0025E5A8
// Address: 0x25e5a8 - 0x25e900
void sub_0025E5A8_0x25e5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E5A8_0x25e5a8");
#endif

    switch (ctx->pc) {
        case 0x25e5a8u: goto label_25e5a8;
        case 0x25e5acu: goto label_25e5ac;
        case 0x25e5b0u: goto label_25e5b0;
        case 0x25e5b4u: goto label_25e5b4;
        case 0x25e5b8u: goto label_25e5b8;
        case 0x25e5bcu: goto label_25e5bc;
        case 0x25e5c0u: goto label_25e5c0;
        case 0x25e5c4u: goto label_25e5c4;
        case 0x25e5c8u: goto label_25e5c8;
        case 0x25e5ccu: goto label_25e5cc;
        case 0x25e5d0u: goto label_25e5d0;
        case 0x25e5d4u: goto label_25e5d4;
        case 0x25e5d8u: goto label_25e5d8;
        case 0x25e5dcu: goto label_25e5dc;
        case 0x25e5e0u: goto label_25e5e0;
        case 0x25e5e4u: goto label_25e5e4;
        case 0x25e5e8u: goto label_25e5e8;
        case 0x25e5ecu: goto label_25e5ec;
        case 0x25e5f0u: goto label_25e5f0;
        case 0x25e5f4u: goto label_25e5f4;
        case 0x25e5f8u: goto label_25e5f8;
        case 0x25e5fcu: goto label_25e5fc;
        case 0x25e600u: goto label_25e600;
        case 0x25e604u: goto label_25e604;
        case 0x25e608u: goto label_25e608;
        case 0x25e60cu: goto label_25e60c;
        case 0x25e610u: goto label_25e610;
        case 0x25e614u: goto label_25e614;
        case 0x25e618u: goto label_25e618;
        case 0x25e61cu: goto label_25e61c;
        case 0x25e620u: goto label_25e620;
        case 0x25e624u: goto label_25e624;
        case 0x25e628u: goto label_25e628;
        case 0x25e62cu: goto label_25e62c;
        case 0x25e630u: goto label_25e630;
        case 0x25e634u: goto label_25e634;
        case 0x25e638u: goto label_25e638;
        case 0x25e63cu: goto label_25e63c;
        case 0x25e640u: goto label_25e640;
        case 0x25e644u: goto label_25e644;
        case 0x25e648u: goto label_25e648;
        case 0x25e64cu: goto label_25e64c;
        case 0x25e650u: goto label_25e650;
        case 0x25e654u: goto label_25e654;
        case 0x25e658u: goto label_25e658;
        case 0x25e65cu: goto label_25e65c;
        case 0x25e660u: goto label_25e660;
        case 0x25e664u: goto label_25e664;
        case 0x25e668u: goto label_25e668;
        case 0x25e66cu: goto label_25e66c;
        case 0x25e670u: goto label_25e670;
        case 0x25e674u: goto label_25e674;
        case 0x25e678u: goto label_25e678;
        case 0x25e67cu: goto label_25e67c;
        case 0x25e680u: goto label_25e680;
        case 0x25e684u: goto label_25e684;
        case 0x25e688u: goto label_25e688;
        case 0x25e68cu: goto label_25e68c;
        case 0x25e690u: goto label_25e690;
        case 0x25e694u: goto label_25e694;
        case 0x25e698u: goto label_25e698;
        case 0x25e69cu: goto label_25e69c;
        case 0x25e6a0u: goto label_25e6a0;
        case 0x25e6a4u: goto label_25e6a4;
        case 0x25e6a8u: goto label_25e6a8;
        case 0x25e6acu: goto label_25e6ac;
        case 0x25e6b0u: goto label_25e6b0;
        case 0x25e6b4u: goto label_25e6b4;
        case 0x25e6b8u: goto label_25e6b8;
        case 0x25e6bcu: goto label_25e6bc;
        case 0x25e6c0u: goto label_25e6c0;
        case 0x25e6c4u: goto label_25e6c4;
        case 0x25e6c8u: goto label_25e6c8;
        case 0x25e6ccu: goto label_25e6cc;
        case 0x25e6d0u: goto label_25e6d0;
        case 0x25e6d4u: goto label_25e6d4;
        case 0x25e6d8u: goto label_25e6d8;
        case 0x25e6dcu: goto label_25e6dc;
        case 0x25e6e0u: goto label_25e6e0;
        case 0x25e6e4u: goto label_25e6e4;
        case 0x25e6e8u: goto label_25e6e8;
        case 0x25e6ecu: goto label_25e6ec;
        case 0x25e6f0u: goto label_25e6f0;
        case 0x25e6f4u: goto label_25e6f4;
        case 0x25e6f8u: goto label_25e6f8;
        case 0x25e6fcu: goto label_25e6fc;
        case 0x25e700u: goto label_25e700;
        case 0x25e704u: goto label_25e704;
        case 0x25e708u: goto label_25e708;
        case 0x25e70cu: goto label_25e70c;
        case 0x25e710u: goto label_25e710;
        case 0x25e714u: goto label_25e714;
        case 0x25e718u: goto label_25e718;
        case 0x25e71cu: goto label_25e71c;
        case 0x25e720u: goto label_25e720;
        case 0x25e724u: goto label_25e724;
        case 0x25e728u: goto label_25e728;
        case 0x25e72cu: goto label_25e72c;
        case 0x25e730u: goto label_25e730;
        case 0x25e734u: goto label_25e734;
        case 0x25e738u: goto label_25e738;
        case 0x25e73cu: goto label_25e73c;
        case 0x25e740u: goto label_25e740;
        case 0x25e744u: goto label_25e744;
        case 0x25e748u: goto label_25e748;
        case 0x25e74cu: goto label_25e74c;
        case 0x25e750u: goto label_25e750;
        case 0x25e754u: goto label_25e754;
        case 0x25e758u: goto label_25e758;
        case 0x25e75cu: goto label_25e75c;
        case 0x25e760u: goto label_25e760;
        case 0x25e764u: goto label_25e764;
        case 0x25e768u: goto label_25e768;
        case 0x25e76cu: goto label_25e76c;
        case 0x25e770u: goto label_25e770;
        case 0x25e774u: goto label_25e774;
        case 0x25e778u: goto label_25e778;
        case 0x25e77cu: goto label_25e77c;
        case 0x25e780u: goto label_25e780;
        case 0x25e784u: goto label_25e784;
        case 0x25e788u: goto label_25e788;
        case 0x25e78cu: goto label_25e78c;
        case 0x25e790u: goto label_25e790;
        case 0x25e794u: goto label_25e794;
        case 0x25e798u: goto label_25e798;
        case 0x25e79cu: goto label_25e79c;
        case 0x25e7a0u: goto label_25e7a0;
        case 0x25e7a4u: goto label_25e7a4;
        case 0x25e7a8u: goto label_25e7a8;
        case 0x25e7acu: goto label_25e7ac;
        case 0x25e7b0u: goto label_25e7b0;
        case 0x25e7b4u: goto label_25e7b4;
        case 0x25e7b8u: goto label_25e7b8;
        case 0x25e7bcu: goto label_25e7bc;
        case 0x25e7c0u: goto label_25e7c0;
        case 0x25e7c4u: goto label_25e7c4;
        case 0x25e7c8u: goto label_25e7c8;
        case 0x25e7ccu: goto label_25e7cc;
        case 0x25e7d0u: goto label_25e7d0;
        case 0x25e7d4u: goto label_25e7d4;
        case 0x25e7d8u: goto label_25e7d8;
        case 0x25e7dcu: goto label_25e7dc;
        case 0x25e7e0u: goto label_25e7e0;
        case 0x25e7e4u: goto label_25e7e4;
        case 0x25e7e8u: goto label_25e7e8;
        case 0x25e7ecu: goto label_25e7ec;
        case 0x25e7f0u: goto label_25e7f0;
        case 0x25e7f4u: goto label_25e7f4;
        case 0x25e7f8u: goto label_25e7f8;
        case 0x25e7fcu: goto label_25e7fc;
        case 0x25e800u: goto label_25e800;
        case 0x25e804u: goto label_25e804;
        case 0x25e808u: goto label_25e808;
        case 0x25e80cu: goto label_25e80c;
        case 0x25e810u: goto label_25e810;
        case 0x25e814u: goto label_25e814;
        case 0x25e818u: goto label_25e818;
        case 0x25e81cu: goto label_25e81c;
        case 0x25e820u: goto label_25e820;
        case 0x25e824u: goto label_25e824;
        case 0x25e828u: goto label_25e828;
        case 0x25e82cu: goto label_25e82c;
        case 0x25e830u: goto label_25e830;
        case 0x25e834u: goto label_25e834;
        case 0x25e838u: goto label_25e838;
        case 0x25e83cu: goto label_25e83c;
        case 0x25e840u: goto label_25e840;
        case 0x25e844u: goto label_25e844;
        case 0x25e848u: goto label_25e848;
        case 0x25e84cu: goto label_25e84c;
        case 0x25e850u: goto label_25e850;
        case 0x25e854u: goto label_25e854;
        case 0x25e858u: goto label_25e858;
        case 0x25e85cu: goto label_25e85c;
        case 0x25e860u: goto label_25e860;
        case 0x25e864u: goto label_25e864;
        case 0x25e868u: goto label_25e868;
        case 0x25e86cu: goto label_25e86c;
        case 0x25e870u: goto label_25e870;
        case 0x25e874u: goto label_25e874;
        case 0x25e878u: goto label_25e878;
        case 0x25e87cu: goto label_25e87c;
        case 0x25e880u: goto label_25e880;
        case 0x25e884u: goto label_25e884;
        case 0x25e888u: goto label_25e888;
        case 0x25e88cu: goto label_25e88c;
        case 0x25e890u: goto label_25e890;
        case 0x25e894u: goto label_25e894;
        case 0x25e898u: goto label_25e898;
        case 0x25e89cu: goto label_25e89c;
        case 0x25e8a0u: goto label_25e8a0;
        case 0x25e8a4u: goto label_25e8a4;
        case 0x25e8a8u: goto label_25e8a8;
        case 0x25e8acu: goto label_25e8ac;
        case 0x25e8b0u: goto label_25e8b0;
        case 0x25e8b4u: goto label_25e8b4;
        case 0x25e8b8u: goto label_25e8b8;
        case 0x25e8bcu: goto label_25e8bc;
        case 0x25e8c0u: goto label_25e8c0;
        case 0x25e8c4u: goto label_25e8c4;
        case 0x25e8c8u: goto label_25e8c8;
        case 0x25e8ccu: goto label_25e8cc;
        case 0x25e8d0u: goto label_25e8d0;
        case 0x25e8d4u: goto label_25e8d4;
        case 0x25e8d8u: goto label_25e8d8;
        case 0x25e8dcu: goto label_25e8dc;
        case 0x25e8e0u: goto label_25e8e0;
        case 0x25e8e4u: goto label_25e8e4;
        case 0x25e8e8u: goto label_25e8e8;
        case 0x25e8ecu: goto label_25e8ec;
        case 0x25e8f0u: goto label_25e8f0;
        case 0x25e8f4u: goto label_25e8f4;
        case 0x25e8f8u: goto label_25e8f8;
        case 0x25e8fcu: goto label_25e8fc;
        default: break;
    }

    ctx->pc = 0x25e5a8u;

label_25e5a8:
    // 0x25e5a8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x25e5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_25e5ac:
    // 0x25e5ac: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x25e5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_25e5b0:
    // 0x25e5b0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x25e5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_25e5b4:
    // 0x25e5b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25e5b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25e5b8:
    // 0x25e5b8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x25e5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_25e5bc:
    // 0x25e5bc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x25e5bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_25e5c0:
    // 0x25e5c0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x25e5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_25e5c4:
    // 0x25e5c4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25e5c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25e5c8:
    // 0x25e5c8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x25e5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_25e5cc:
    // 0x25e5cc: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x25e5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_25e5d0:
    // 0x25e5d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x25e5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_25e5d4:
    // 0x25e5d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x25e5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_25e5d8:
    // 0x25e5d8: 0xc089c18  jal         func_227060
label_25e5dc:
    if (ctx->pc == 0x25E5DCu) {
        ctx->pc = 0x25E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E5D8u;
        // 0x25e5dc: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E5E0u;
        goto label_25e5e0;
    }
    ctx->pc = 0x25E5D8u;
    SET_GPR_U32(ctx, 31, 0x25E5E0u);
    ctx->pc = 0x25E5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E5D8u;
    // 0x25e5dc: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x25E5D8u, 0x25E5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E5E0u;
label_25e5e0:
    // 0x25e5e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25e5e4:
    // 0x25e5e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e5e8:
    // 0x25e5e8: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x25e5e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_25e5ec:
    // 0x25e5ec: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x25e5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_25e5f0:
    // 0x25e5f0: 0xc0f809  jalr        $a2
label_25e5f4:
    if (ctx->pc == 0x25E5F4u) {
        ctx->pc = 0x25E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E5F0u;
        // 0x25e5f4: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E5F8u;
        goto label_25e5f8;
    }
    ctx->pc = 0x25E5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x25E5F8u);
        ctx->pc = 0x25E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E5F0u;
        // 0x25e5f4: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E5F0u, 0x25E5F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25E5F8u;
label_25e5f8:
    // 0x25e5f8: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x25e5f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_25e5fc:
    // 0x25e5fc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x25e5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_25e600:
    // 0x25e600: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x25e600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_25e604:
    // 0x25e604: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x25e604u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25e608:
    // 0x25e608: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x25e608u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_25e60c:
    // 0x25e60c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x25e60cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_25e610:
    // 0x25e610: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25e610u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_25e614:
    // 0x25e614: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25e614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25e618:
    // 0x25e618: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x25e618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25e61c:
    // 0x25e61c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25e61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25e620:
    // 0x25e620: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x25e620u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_25e624:
    // 0x25e624: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x25e624u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_25e628:
    // 0x25e628: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x25e628u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_25e62c:
    // 0x25e62c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x25e62cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_25e630:
    // 0x25e630: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x25e630u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_25e634:
    // 0x25e634: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x25e634u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_25e638:
    // 0x25e638: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x25e638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_25e63c:
    // 0x25e63c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x25e63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_25e640:
    // 0x25e640: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x25e640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e644:
    // 0x25e644: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25e644u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25e648:
    // 0x25e648: 0x0  nop
    ctx->pc = 0x25e648u;
    // NOP
label_25e64c:
    // 0x25e64c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_25e650:
    if (ctx->pc == 0x25E650u) {
        ctx->pc = 0x25E650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E64Cu;
        // 0x25e650: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E654u;
        goto label_25e654;
    }
    ctx->pc = 0x25E64Cu;
    {
        const bool branch_taken_0x25e64c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25E650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E64Cu;
        // 0x25e650: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e64c) {
            ctx->pc = 0x25E658u;
            goto label_25e658;
        }
    }
    ctx->pc = 0x25E654u;
label_25e654:
    // 0x25e654: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25e654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e658:
    // 0x25e658: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x25e658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_25e65c:
    // 0x25e65c: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x25e65cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_25e660:
    // 0x25e660: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_25e664:
    if (ctx->pc == 0x25E664u) {
        ctx->pc = 0x25E664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E660u;
        // 0x25e664: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E668u;
        goto label_25e668;
    }
    ctx->pc = 0x25E660u;
    {
        const bool branch_taken_0x25e660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E660u;
        // 0x25e664: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e660) {
            ctx->pc = 0x25E6C4u;
            goto label_25e6c4;
        }
    }
    ctx->pc = 0x25E668u;
label_25e668:
    // 0x25e668: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25e668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_25e66c:
    // 0x25e66c: 0x2442db30  addiu       $v0, $v0, -0x24D0
    ctx->pc = 0x25e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957872));
label_25e670:
    // 0x25e670: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25e670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25e674:
    // 0x25e674: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25e674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25e678:
    // 0x25e678: 0x800008  jr          $a0
label_25e67c:
    if (ctx->pc == 0x25E67Cu) {
        ctx->pc = 0x25E680u;
        goto label_25e680;
    }
    ctx->pc = 0x25E678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25E680u: goto label_25e680;
            case 0x25E68Cu: goto label_25e68c;
            case 0x25E698u: goto label_25e698;
            case 0x25E6A4u: goto label_25e6a4;
            case 0x25E6B0u: goto label_25e6b0;
            case 0x25E6BCu: goto label_25e6bc;
            case 0x25E6C4u: goto label_25e6c4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E678u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25E680u;
label_25e680:
    // 0x25e680: 0x241301f7  addiu       $s3, $zero, 0x1F7
    ctx->pc = 0x25e680u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 503));
label_25e684:
    // 0x25e684: 0x10000011  b           . + 4 + (0x11 << 2)
label_25e688:
    if (ctx->pc == 0x25E688u) {
        ctx->pc = 0x25E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E684u;
        // 0x25e688: 0x240201f8  addiu       $v0, $zero, 0x1F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 504));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E68Cu;
        goto label_25e68c;
    }
    ctx->pc = 0x25E684u;
    {
        const bool branch_taken_0x25e684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E684u;
        // 0x25e688: 0x240201f8  addiu       $v0, $zero, 0x1F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e684) {
            ctx->pc = 0x25E6CCu;
            goto label_25e6cc;
        }
    }
    ctx->pc = 0x25E68Cu;
label_25e68c:
    // 0x25e68c: 0x24130225  addiu       $s3, $zero, 0x225
    ctx->pc = 0x25e68cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 549));
label_25e690:
    // 0x25e690: 0x1000000e  b           . + 4 + (0xE << 2)
label_25e694:
    if (ctx->pc == 0x25E694u) {
        ctx->pc = 0x25E694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E690u;
        // 0x25e694: 0x24020226  addiu       $v0, $zero, 0x226 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E698u;
        goto label_25e698;
    }
    ctx->pc = 0x25E690u;
    {
        const bool branch_taken_0x25e690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E690u;
        // 0x25e694: 0x24020226  addiu       $v0, $zero, 0x226 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e690) {
            ctx->pc = 0x25E6CCu;
            goto label_25e6cc;
        }
    }
    ctx->pc = 0x25E698u;
label_25e698:
    // 0x25e698: 0x241301e1  addiu       $s3, $zero, 0x1E1
    ctx->pc = 0x25e698u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 481));
label_25e69c:
    // 0x25e69c: 0x1000000b  b           . + 4 + (0xB << 2)
label_25e6a0:
    if (ctx->pc == 0x25E6A0u) {
        ctx->pc = 0x25E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E69Cu;
        // 0x25e6a0: 0x240201e2  addiu       $v0, $zero, 0x1E2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 482));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E6A4u;
        goto label_25e6a4;
    }
    ctx->pc = 0x25E69Cu;
    {
        const bool branch_taken_0x25e69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E69Cu;
        // 0x25e6a0: 0x240201e2  addiu       $v0, $zero, 0x1E2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 482));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e69c) {
            ctx->pc = 0x25E6CCu;
            goto label_25e6cc;
        }
    }
    ctx->pc = 0x25E6A4u;
label_25e6a4:
    // 0x25e6a4: 0x241301f2  addiu       $s3, $zero, 0x1F2
    ctx->pc = 0x25e6a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 498));
label_25e6a8:
    // 0x25e6a8: 0x10000008  b           . + 4 + (0x8 << 2)
label_25e6ac:
    if (ctx->pc == 0x25E6ACu) {
        ctx->pc = 0x25E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E6A8u;
        // 0x25e6ac: 0x240201f3  addiu       $v0, $zero, 0x1F3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 499));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E6B0u;
        goto label_25e6b0;
    }
    ctx->pc = 0x25E6A8u;
    {
        const bool branch_taken_0x25e6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E6A8u;
        // 0x25e6ac: 0x240201f3  addiu       $v0, $zero, 0x1F3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 499));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e6a8) {
            ctx->pc = 0x25E6CCu;
            goto label_25e6cc;
        }
    }
    ctx->pc = 0x25E6B0u;
label_25e6b0:
    // 0x25e6b0: 0x241301cf  addiu       $s3, $zero, 0x1CF
    ctx->pc = 0x25e6b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 463));
label_25e6b4:
    // 0x25e6b4: 0x10000005  b           . + 4 + (0x5 << 2)
label_25e6b8:
    if (ctx->pc == 0x25E6B8u) {
        ctx->pc = 0x25E6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E6B4u;
        // 0x25e6b8: 0x240201d0  addiu       $v0, $zero, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E6BCu;
        goto label_25e6bc;
    }
    ctx->pc = 0x25E6B4u;
    {
        const bool branch_taken_0x25e6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E6B4u;
        // 0x25e6b8: 0x240201d0  addiu       $v0, $zero, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e6b4) {
            ctx->pc = 0x25E6CCu;
            goto label_25e6cc;
        }
    }
    ctx->pc = 0x25E6BCu;
label_25e6bc:
    // 0x25e6bc: 0x10000004  b           . + 4 + (0x4 << 2)
label_25e6c0:
    if (ctx->pc == 0x25E6C0u) {
        ctx->pc = 0x25E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E6BCu;
        // 0x25e6c0: 0x241301d1  addiu       $s3, $zero, 0x1D1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 465));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E6C4u;
        goto label_25e6c4;
    }
    ctx->pc = 0x25E6BCu;
    {
        const bool branch_taken_0x25e6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E6BCu;
        // 0x25e6c0: 0x241301d1  addiu       $s3, $zero, 0x1D1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 465));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e6bc) {
            ctx->pc = 0x25E6D0u;
            goto label_25e6d0;
        }
    }
    ctx->pc = 0x25E6C4u;
label_25e6c4:
    // 0x25e6c4: 0x241301cd  addiu       $s3, $zero, 0x1CD
    ctx->pc = 0x25e6c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 461));
label_25e6c8:
    // 0x25e6c8: 0x240201ce  addiu       $v0, $zero, 0x1CE
    ctx->pc = 0x25e6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 462));
label_25e6cc:
    // 0x25e6cc: 0x45980b  movn        $s3, $v0, $a1
    ctx->pc = 0x25e6ccu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
label_25e6d0:
    // 0x25e6d0: 0x8e3400d8  lw          $s4, 0xD8($s1)
    ctx->pc = 0x25e6d0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25e6d4:
    // 0x25e6d4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x25e6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_25e6d8:
    // 0x25e6d8: 0xc05dc0e  jal         func_177038
label_25e6dc:
    if (ctx->pc == 0x25E6DCu) {
        ctx->pc = 0x25E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E6D8u;
        // 0x25e6dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E6E0u;
        goto label_25e6e0;
    }
    ctx->pc = 0x25E6D8u;
    SET_GPR_U32(ctx, 31, 0x25E6E0u);
    ctx->pc = 0x25E6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E6D8u;
    // 0x25e6dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177038u, 0x25E6D8u, 0x25E6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E6E0u;
label_25e6e0:
    // 0x25e6e0: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x25e6e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_25e6e4:
    // 0x25e6e4: 0x2610d9f0  addiu       $s0, $s0, -0x2610
    ctx->pc = 0x25e6e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957552));
label_25e6e8:
    // 0x25e6e8: 0xc041532  jal         func_1054C8
label_25e6ec:
    if (ctx->pc == 0x25E6ECu) {
        ctx->pc = 0x25E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E6E8u;
        // 0x25e6ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E6F0u;
        goto label_25e6f0;
    }
    ctx->pc = 0x25E6E8u;
    SET_GPR_U32(ctx, 31, 0x25E6F0u);
    ctx->pc = 0x25E6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E6E8u;
    // 0x25e6ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25E6E8u, 0x25E6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E6F0u;
label_25e6f0:
    // 0x25e6f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e6f4:
    // 0x25e6f4: 0xc041532  jal         func_1054C8
label_25e6f8:
    if (ctx->pc == 0x25E6F8u) {
        ctx->pc = 0x25E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E6F4u;
        // 0x25e6f8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E6FCu;
        goto label_25e6fc;
    }
    ctx->pc = 0x25E6F4u;
    SET_GPR_U32(ctx, 31, 0x25E6FCu);
    ctx->pc = 0x25E6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E6F4u;
    // 0x25e6f8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25E6F4u, 0x25E6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E6FCu;
label_25e6fc:
    // 0x25e6fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e700:
    // 0x25e700: 0xc041532  jal         func_1054C8
label_25e704:
    if (ctx->pc == 0x25E704u) {
        ctx->pc = 0x25E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E700u;
        // 0x25e704: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E708u;
        goto label_25e708;
    }
    ctx->pc = 0x25E700u;
    SET_GPR_U32(ctx, 31, 0x25E708u);
    ctx->pc = 0x25E704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E700u;
    // 0x25e704: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25E700u, 0x25E708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E708u;
label_25e708:
    // 0x25e708: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25e708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25e70c:
    // 0x25e70c: 0xc08a05a  jal         func_228168
label_25e710:
    if (ctx->pc == 0x25E710u) {
        ctx->pc = 0x25E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E70Cu;
        // 0x25e710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E714u;
        goto label_25e714;
    }
    ctx->pc = 0x25E70Cu;
    SET_GPR_U32(ctx, 31, 0x25E714u);
    ctx->pc = 0x25E710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E70Cu;
    // 0x25e710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x25E70Cu, 0x25E714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E714u;
label_25e714:
    // 0x25e714: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_25e718:
    if (ctx->pc == 0x25E718u) {
        ctx->pc = 0x25E718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E714u;
        // 0x25e718: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E71Cu;
        goto label_25e71c;
    }
    ctx->pc = 0x25E714u;
    {
        const bool branch_taken_0x25e714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E714u;
        // 0x25e718: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e714) {
            ctx->pc = 0x25E72Cu;
            goto label_25e72c;
        }
    }
    ctx->pc = 0x25E71Cu;
label_25e71c:
    // 0x25e71c: 0x12a20003  beq         $s5, $v0, . + 4 + (0x3 << 2)
label_25e720:
    if (ctx->pc == 0x25E720u) {
        ctx->pc = 0x25E720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E71Cu;
        // 0x25e720: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E724u;
        goto label_25e724;
    }
    ctx->pc = 0x25E71Cu;
    {
        const bool branch_taken_0x25e71c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x25E720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E71Cu;
        // 0x25e720: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e71c) {
            ctx->pc = 0x25E72Cu;
            goto label_25e72c;
        }
    }
    ctx->pc = 0x25E724u;
label_25e724:
    // 0x25e724: 0x16a20004  bne         $s5, $v0, . + 4 + (0x4 << 2)
label_25e728:
    if (ctx->pc == 0x25E728u) {
        ctx->pc = 0x25E72Cu;
        goto label_25e72c;
    }
    ctx->pc = 0x25E724u;
    {
        const bool branch_taken_0x25e724 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x25e724) {
            ctx->pc = 0x25E738u;
            goto label_25e738;
        }
    }
    ctx->pc = 0x25E72Cu;
label_25e72c:
    // 0x25e72c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25e72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25e730:
    // 0x25e730: 0xc094fb4  jal         func_253ED0
label_25e734:
    if (ctx->pc == 0x25E734u) {
        ctx->pc = 0x25E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E730u;
        // 0x25e734: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E738u;
        goto label_25e738;
    }
    ctx->pc = 0x25E730u;
    SET_GPR_U32(ctx, 31, 0x25E738u);
    ctx->pc = 0x25E734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E730u;
    // 0x25e734: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x25E730u, 0x25E738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E738u;
label_25e738:
    // 0x25e738: 0xc08a0d0  jal         func_228340
label_25e73c:
    if (ctx->pc == 0x25E73Cu) {
        ctx->pc = 0x25E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E738u;
        // 0x25e73c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E740u;
        goto label_25e740;
    }
    ctx->pc = 0x25E738u;
    SET_GPR_U32(ctx, 31, 0x25E740u);
    ctx->pc = 0x25E73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E738u;
    // 0x25e73c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x25E738u, 0x25E740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E740u;
label_25e740:
    // 0x25e740: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_25e744:
    if (ctx->pc == 0x25E744u) {
        ctx->pc = 0x25E748u;
        goto label_25e748;
    }
    ctx->pc = 0x25E740u;
    {
        const bool branch_taken_0x25e740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e740) {
            ctx->pc = 0x25E788u;
            goto label_25e788;
        }
    }
    ctx->pc = 0x25E748u;
label_25e748:
    // 0x25e748: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_25e74c:
    if (ctx->pc == 0x25E74Cu) {
        ctx->pc = 0x25E74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E748u;
        // 0x25e74c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E750u;
        goto label_25e750;
    }
    ctx->pc = 0x25E748u;
    {
        const bool branch_taken_0x25e748 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E748u;
        // 0x25e74c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e748) {
            ctx->pc = 0x25E76Cu;
            goto label_25e76c;
        }
    }
    ctx->pc = 0x25E750u;
label_25e750:
    // 0x25e750: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x25e750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25e754:
    // 0x25e754: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25e754u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25e758:
    // 0x25e758: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25e758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25e75c:
    // 0x25e75c: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x25e75cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_25e760:
    // 0x25e760: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25e760u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e764:
    // 0x25e764: 0xc04159e  jal         func_105678
label_25e768:
    if (ctx->pc == 0x25E768u) {
        ctx->pc = 0x25E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E764u;
        // 0x25e768: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E76Cu;
        goto label_25e76c;
    }
    ctx->pc = 0x25E764u;
    SET_GPR_U32(ctx, 31, 0x25E76Cu);
    ctx->pc = 0x25E768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E764u;
    // 0x25e768: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x25E764u, 0x25E76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E76Cu;
label_25e76c:
    // 0x25e76c: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x25e76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25e770:
    // 0x25e770: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25e770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25e774:
    // 0x25e774: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25e774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e778:
    // 0x25e778: 0xc0899aa  jal         func_2266A8
label_25e77c:
    if (ctx->pc == 0x25E77Cu) {
        ctx->pc = 0x25E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E778u;
        // 0x25e77c: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E780u;
        goto label_25e780;
    }
    ctx->pc = 0x25E778u;
    SET_GPR_U32(ctx, 31, 0x25E780u);
    ctx->pc = 0x25E77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E778u;
    // 0x25e77c: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25E778u, 0x25E780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E780u;
label_25e780:
    // 0x25e780: 0x10000011  b           . + 4 + (0x11 << 2)
label_25e784:
    if (ctx->pc == 0x25E784u) {
        ctx->pc = 0x25E788u;
        goto label_25e788;
    }
    ctx->pc = 0x25E780u;
    {
        const bool branch_taken_0x25e780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e780) {
            ctx->pc = 0x25E7C8u;
            goto label_25e7c8;
        }
    }
    ctx->pc = 0x25E788u;
label_25e788:
    // 0x25e788: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_25e78c:
    if (ctx->pc == 0x25E78Cu) {
        ctx->pc = 0x25E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E788u;
        // 0x25e78c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E790u;
        goto label_25e790;
    }
    ctx->pc = 0x25E788u;
    {
        const bool branch_taken_0x25e788 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E788u;
        // 0x25e78c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e788) {
            ctx->pc = 0x25E7B0u;
            goto label_25e7b0;
        }
    }
    ctx->pc = 0x25E790u;
label_25e790:
    // 0x25e790: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x25e790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25e794:
    // 0x25e794: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25e794u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25e798:
    // 0x25e798: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25e798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25e79c:
    // 0x25e79c: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x25e79cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_25e7a0:
    // 0x25e7a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25e7a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e7a4:
    // 0x25e7a4: 0xc04159e  jal         func_105678
label_25e7a8:
    if (ctx->pc == 0x25E7A8u) {
        ctx->pc = 0x25E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E7A4u;
        // 0x25e7a8: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E7ACu;
        goto label_25e7ac;
    }
    ctx->pc = 0x25E7A4u;
    SET_GPR_U32(ctx, 31, 0x25E7ACu);
    ctx->pc = 0x25E7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E7A4u;
    // 0x25e7a8: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x25E7A4u, 0x25E7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E7ACu;
label_25e7ac:
    // 0x25e7ac: 0x0  nop
    ctx->pc = 0x25e7acu;
    // NOP
label_25e7b0:
    // 0x25e7b0: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x25e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25e7b4:
    // 0x25e7b4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x25e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_25e7b8:
    // 0x25e7b8: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x25e7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_25e7bc:
    // 0x25e7bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25e7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25e7c0:
    // 0x25e7c0: 0xc0899aa  jal         func_2266A8
label_25e7c4:
    if (ctx->pc == 0x25E7C4u) {
        ctx->pc = 0x25E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E7C0u;
        // 0x25e7c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E7C8u;
        goto label_25e7c8;
    }
    ctx->pc = 0x25E7C0u;
    SET_GPR_U32(ctx, 31, 0x25E7C8u);
    ctx->pc = 0x25E7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E7C0u;
    // 0x25e7c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25E7C0u, 0x25E7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E7C8u;
label_25e7c8:
    // 0x25e7c8: 0xc08a05a  jal         func_228168
label_25e7cc:
    if (ctx->pc == 0x25E7CCu) {
        ctx->pc = 0x25E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E7C8u;
        // 0x25e7cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E7D0u;
        goto label_25e7d0;
    }
    ctx->pc = 0x25E7C8u;
    SET_GPR_U32(ctx, 31, 0x25E7D0u);
    ctx->pc = 0x25E7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E7C8u;
    // 0x25e7cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x25E7C8u, 0x25E7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E7D0u;
label_25e7d0:
    // 0x25e7d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_25e7d4:
    if (ctx->pc == 0x25E7D4u) {
        ctx->pc = 0x25E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E7D0u;
        // 0x25e7d4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E7D8u;
        goto label_25e7d8;
    }
    ctx->pc = 0x25E7D0u;
    {
        const bool branch_taken_0x25e7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E7D0u;
        // 0x25e7d4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e7d0) {
            ctx->pc = 0x25E7E8u;
            goto label_25e7e8;
        }
    }
    ctx->pc = 0x25E7D8u;
label_25e7d8:
    // 0x25e7d8: 0x12a20003  beq         $s5, $v0, . + 4 + (0x3 << 2)
label_25e7dc:
    if (ctx->pc == 0x25E7DCu) {
        ctx->pc = 0x25E7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E7D8u;
        // 0x25e7dc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E7E0u;
        goto label_25e7e0;
    }
    ctx->pc = 0x25E7D8u;
    {
        const bool branch_taken_0x25e7d8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x25E7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E7D8u;
        // 0x25e7dc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e7d8) {
            ctx->pc = 0x25E7E8u;
            goto label_25e7e8;
        }
    }
    ctx->pc = 0x25E7E0u;
label_25e7e0:
    // 0x25e7e0: 0x16a20003  bne         $s5, $v0, . + 4 + (0x3 << 2)
label_25e7e4:
    if (ctx->pc == 0x25E7E4u) {
        ctx->pc = 0x25E7E8u;
        goto label_25e7e8;
    }
    ctx->pc = 0x25E7E0u;
    {
        const bool branch_taken_0x25e7e0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x25e7e0) {
            ctx->pc = 0x25E7F0u;
            goto label_25e7f0;
        }
    }
    ctx->pc = 0x25E7E8u;
label_25e7e8:
    // 0x25e7e8: 0xc094fca  jal         func_253F28
label_25e7ec:
    if (ctx->pc == 0x25E7ECu) {
        ctx->pc = 0x25E7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E7E8u;
        // 0x25e7ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E7F0u;
        goto label_25e7f0;
    }
    ctx->pc = 0x25E7E8u;
    SET_GPR_U32(ctx, 31, 0x25E7F0u);
    ctx->pc = 0x25E7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E7E8u;
    // 0x25e7ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x25E7E8u, 0x25E7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E7F0u;
label_25e7f0:
    // 0x25e7f0: 0x12c00011  beqz        $s6, . + 4 + (0x11 << 2)
label_25e7f4:
    if (ctx->pc == 0x25E7F4u) {
        ctx->pc = 0x25E7F8u;
        goto label_25e7f8;
    }
    ctx->pc = 0x25E7F0u;
    {
        const bool branch_taken_0x25e7f0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e7f0) {
            ctx->pc = 0x25E838u;
            goto label_25e838;
        }
    }
    ctx->pc = 0x25E7F8u;
label_25e7f8:
    // 0x25e7f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25e7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25e7fc:
    // 0x25e7fc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25e7fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25e800:
    // 0x25e800: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25e800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25e804:
    // 0x25e804: 0x40f809  jalr        $v0
label_25e808:
    if (ctx->pc == 0x25E808u) {
        ctx->pc = 0x25E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E804u;
        // 0x25e808: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E80Cu;
        goto label_25e80c;
    }
    ctx->pc = 0x25E804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25E80Cu);
        ctx->pc = 0x25E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E804u;
        // 0x25e808: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E804u, 0x25E80Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25E80Cu;
label_25e80c:
    // 0x25e80c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x25e80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_25e810:
    // 0x25e810: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x25e810u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_25e814:
    // 0x25e814: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25e814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25e818:
    // 0x25e818: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x25e818u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25e81c:
    // 0x25e81c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x25e81cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25e820:
    // 0x25e820: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x25e820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25e824:
    // 0x25e824: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25e824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25e828:
    // 0x25e828: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x25e828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25e82c:
    // 0x25e82c: 0x24084000  addiu       $t0, $zero, 0x4000
    ctx->pc = 0x25e82cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_25e830:
    // 0x25e830: 0xc041664  jal         func_105990
label_25e834:
    if (ctx->pc == 0x25E834u) {
        ctx->pc = 0x25E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E830u;
        // 0x25e834: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E838u;
        goto label_25e838;
    }
    ctx->pc = 0x25E830u;
    SET_GPR_U32(ctx, 31, 0x25E838u);
    ctx->pc = 0x25E834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E830u;
    // 0x25e834: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x25E830u, 0x25E838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E838u;
label_25e838:
    // 0x25e838: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_25e83c:
    if (ctx->pc == 0x25E83Cu) {
        ctx->pc = 0x25E83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E838u;
        // 0x25e83c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E840u;
        goto label_25e840;
    }
    ctx->pc = 0x25E838u;
    {
        const bool branch_taken_0x25e838 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E838u;
        // 0x25e83c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e838) {
            ctx->pc = 0x25E860u;
            goto label_25e860;
        }
    }
    ctx->pc = 0x25E840u;
label_25e840:
    // 0x25e840: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x25e840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25e844:
    // 0x25e844: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25e844u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25e848:
    // 0x25e848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e84c:
    // 0x25e84c: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x25e84cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_25e850:
    // 0x25e850: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x25e850u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_25e854:
    // 0x25e854: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25e854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25e858:
    // 0x25e858: 0xc041b20  jal         func_106C80
label_25e85c:
    if (ctx->pc == 0x25E85Cu) {
        ctx->pc = 0x25E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E858u;
        // 0x25e85c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E860u;
        goto label_25e860;
    }
    ctx->pc = 0x25E858u;
    SET_GPR_U32(ctx, 31, 0x25E860u);
    ctx->pc = 0x25E85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E858u;
    // 0x25e85c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25E858u, 0x25E860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E860u;
label_25e860:
    // 0x25e860: 0xc05d484  jal         func_175210
label_25e864:
    if (ctx->pc == 0x25E864u) {
        ctx->pc = 0x25E864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E860u;
        // 0x25e864: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E868u;
        goto label_25e868;
    }
    ctx->pc = 0x25E860u;
    SET_GPR_U32(ctx, 31, 0x25E868u);
    ctx->pc = 0x25E864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E860u;
    // 0x25e864: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25E860u, 0x25E868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E868u;
label_25e868:
    // 0x25e868: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25e868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25e86c:
    // 0x25e86c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25e86cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25e870:
    // 0x25e870: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25e870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25e874:
    // 0x25e874: 0xa0f809  jalr        $a1
label_25e878:
    if (ctx->pc == 0x25E878u) {
        ctx->pc = 0x25E878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E874u;
        // 0x25e878: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E87Cu;
        goto label_25e87c;
    }
    ctx->pc = 0x25E874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25E87Cu);
        ctx->pc = 0x25E878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E874u;
        // 0x25e878: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E874u, 0x25E87Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25E87Cu;
label_25e87c:
    // 0x25e87c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25e87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25e880:
    // 0x25e880: 0xc087016  jal         func_21C058
label_25e884:
    if (ctx->pc == 0x25E884u) {
        ctx->pc = 0x25E884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E880u;
        // 0x25e884: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E888u;
        goto label_25e888;
    }
    ctx->pc = 0x25E880u;
    SET_GPR_U32(ctx, 31, 0x25E888u);
    ctx->pc = 0x25E884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E880u;
    // 0x25e884: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25E880u, 0x25E888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E888u;
label_25e888:
    // 0x25e888: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x25e888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25e88c:
    // 0x25e88c: 0xc05d53a  jal         func_1754E8
label_25e890:
    if (ctx->pc == 0x25E890u) {
        ctx->pc = 0x25E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E88Cu;
        // 0x25e890: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E894u;
        goto label_25e894;
    }
    ctx->pc = 0x25E88Cu;
    SET_GPR_U32(ctx, 31, 0x25E894u);
    ctx->pc = 0x25E890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E88Cu;
    // 0x25e890: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25E88Cu, 0x25E894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E894u;
label_25e894:
    // 0x25e894: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25e894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25e898:
    // 0x25e898: 0xc05d4f6  jal         func_1753D8
label_25e89c:
    if (ctx->pc == 0x25E89Cu) {
        ctx->pc = 0x25E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E898u;
        // 0x25e89c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E8A0u;
        goto label_25e8a0;
    }
    ctx->pc = 0x25E898u;
    SET_GPR_U32(ctx, 31, 0x25E8A0u);
    ctx->pc = 0x25E89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E898u;
    // 0x25e89c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25E898u, 0x25E8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E8A0u;
label_25e8a0:
    // 0x25e8a0: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x25e8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_25e8a4:
    // 0x25e8a4: 0xc089990  jal         func_226640
label_25e8a8:
    if (ctx->pc == 0x25E8A8u) {
        ctx->pc = 0x25E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E8A4u;
        // 0x25e8a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E8ACu;
        goto label_25e8ac;
    }
    ctx->pc = 0x25E8A4u;
    SET_GPR_U32(ctx, 31, 0x25E8ACu);
    ctx->pc = 0x25E8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E8A4u;
    // 0x25e8a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x25E8A4u, 0x25E8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E8ACu;
label_25e8ac:
    // 0x25e8ac: 0xc089c18  jal         func_227060
label_25e8b0:
    if (ctx->pc == 0x25E8B0u) {
        ctx->pc = 0x25E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E8ACu;
        // 0x25e8b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E8B4u;
        goto label_25e8b4;
    }
    ctx->pc = 0x25E8ACu;
    SET_GPR_U32(ctx, 31, 0x25E8B4u);
    ctx->pc = 0x25E8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E8ACu;
    // 0x25e8b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x25E8ACu, 0x25E8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E8B4u;
label_25e8b4:
    // 0x25e8b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25e8b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25e8b8:
    // 0x25e8b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25e8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25e8bc:
    // 0x25e8bc: 0xc040596  jal         func_101658
label_25e8c0:
    if (ctx->pc == 0x25E8C0u) {
        ctx->pc = 0x25E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E8BCu;
        // 0x25e8c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E8C4u;
        goto label_25e8c4;
    }
    ctx->pc = 0x25E8BCu;
    SET_GPR_U32(ctx, 31, 0x25E8C4u);
    ctx->pc = 0x25E8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E8BCu;
    // 0x25e8c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101658u, 0x25E8BCu, 0x25E8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E8C4u;
label_25e8c4:
    // 0x25e8c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25e8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25e8c8:
    // 0x25e8c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25e8c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e8cc:
    // 0x25e8cc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x25e8ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25e8d0:
    // 0x25e8d0: 0xc09d744  jal         func_275D10
label_25e8d4:
    if (ctx->pc == 0x25E8D4u) {
        ctx->pc = 0x25E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E8D0u;
        // 0x25e8d4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E8D8u;
        goto label_25e8d8;
    }
    ctx->pc = 0x25E8D0u;
    SET_GPR_U32(ctx, 31, 0x25E8D8u);
    ctx->pc = 0x25E8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E8D0u;
    // 0x25e8d4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x275D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275D10u, 0x25E8D0u, 0x25E8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E8D8u;
label_25e8d8:
    // 0x25e8d8: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x25e8d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_25e8dc:
    // 0x25e8dc: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x25e8dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_25e8e0:
    // 0x25e8e0: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x25e8e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_25e8e4:
    // 0x25e8e4: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x25e8e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_25e8e8:
    // 0x25e8e8: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x25e8e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_25e8ec:
    // 0x25e8ec: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x25e8ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25e8f0:
    // 0x25e8f0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25e8f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25e8f4:
    // 0x25e8f4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x25e8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_25e8f8:
    // 0x25e8f8: 0x3e00008  jr          $ra
label_25e8fc:
    if (ctx->pc == 0x25E8FCu) {
        ctx->pc = 0x25E8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E8F8u;
        // 0x25e8fc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E900u;
        goto label_fallthrough_0x25e8f8;
    }
    ctx->pc = 0x25E8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E8F8u;
        // 0x25e8fc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25e8f8:
    ctx->pc = 0x25E900u;
}
