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

// Function: sub_0044E588
// Address: 0x44e588 - 0x44e918
void sub_0044E588_0x44e588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044E588_0x44e588");
#endif

    switch (ctx->pc) {
        case 0x44e588u: goto label_44e588;
        case 0x44e58cu: goto label_44e58c;
        case 0x44e590u: goto label_44e590;
        case 0x44e594u: goto label_44e594;
        case 0x44e598u: goto label_44e598;
        case 0x44e59cu: goto label_44e59c;
        case 0x44e5a0u: goto label_44e5a0;
        case 0x44e5a4u: goto label_44e5a4;
        case 0x44e5a8u: goto label_44e5a8;
        case 0x44e5acu: goto label_44e5ac;
        case 0x44e5b0u: goto label_44e5b0;
        case 0x44e5b4u: goto label_44e5b4;
        case 0x44e5b8u: goto label_44e5b8;
        case 0x44e5bcu: goto label_44e5bc;
        case 0x44e5c0u: goto label_44e5c0;
        case 0x44e5c4u: goto label_44e5c4;
        case 0x44e5c8u: goto label_44e5c8;
        case 0x44e5ccu: goto label_44e5cc;
        case 0x44e5d0u: goto label_44e5d0;
        case 0x44e5d4u: goto label_44e5d4;
        case 0x44e5d8u: goto label_44e5d8;
        case 0x44e5dcu: goto label_44e5dc;
        case 0x44e5e0u: goto label_44e5e0;
        case 0x44e5e4u: goto label_44e5e4;
        case 0x44e5e8u: goto label_44e5e8;
        case 0x44e5ecu: goto label_44e5ec;
        case 0x44e5f0u: goto label_44e5f0;
        case 0x44e5f4u: goto label_44e5f4;
        case 0x44e5f8u: goto label_44e5f8;
        case 0x44e5fcu: goto label_44e5fc;
        case 0x44e600u: goto label_44e600;
        case 0x44e604u: goto label_44e604;
        case 0x44e608u: goto label_44e608;
        case 0x44e60cu: goto label_44e60c;
        case 0x44e610u: goto label_44e610;
        case 0x44e614u: goto label_44e614;
        case 0x44e618u: goto label_44e618;
        case 0x44e61cu: goto label_44e61c;
        case 0x44e620u: goto label_44e620;
        case 0x44e624u: goto label_44e624;
        case 0x44e628u: goto label_44e628;
        case 0x44e62cu: goto label_44e62c;
        case 0x44e630u: goto label_44e630;
        case 0x44e634u: goto label_44e634;
        case 0x44e638u: goto label_44e638;
        case 0x44e63cu: goto label_44e63c;
        case 0x44e640u: goto label_44e640;
        case 0x44e644u: goto label_44e644;
        case 0x44e648u: goto label_44e648;
        case 0x44e64cu: goto label_44e64c;
        case 0x44e650u: goto label_44e650;
        case 0x44e654u: goto label_44e654;
        case 0x44e658u: goto label_44e658;
        case 0x44e65cu: goto label_44e65c;
        case 0x44e660u: goto label_44e660;
        case 0x44e664u: goto label_44e664;
        case 0x44e668u: goto label_44e668;
        case 0x44e66cu: goto label_44e66c;
        case 0x44e670u: goto label_44e670;
        case 0x44e674u: goto label_44e674;
        case 0x44e678u: goto label_44e678;
        case 0x44e67cu: goto label_44e67c;
        case 0x44e680u: goto label_44e680;
        case 0x44e684u: goto label_44e684;
        case 0x44e688u: goto label_44e688;
        case 0x44e68cu: goto label_44e68c;
        case 0x44e690u: goto label_44e690;
        case 0x44e694u: goto label_44e694;
        case 0x44e698u: goto label_44e698;
        case 0x44e69cu: goto label_44e69c;
        case 0x44e6a0u: goto label_44e6a0;
        case 0x44e6a4u: goto label_44e6a4;
        case 0x44e6a8u: goto label_44e6a8;
        case 0x44e6acu: goto label_44e6ac;
        case 0x44e6b0u: goto label_44e6b0;
        case 0x44e6b4u: goto label_44e6b4;
        case 0x44e6b8u: goto label_44e6b8;
        case 0x44e6bcu: goto label_44e6bc;
        case 0x44e6c0u: goto label_44e6c0;
        case 0x44e6c4u: goto label_44e6c4;
        case 0x44e6c8u: goto label_44e6c8;
        case 0x44e6ccu: goto label_44e6cc;
        case 0x44e6d0u: goto label_44e6d0;
        case 0x44e6d4u: goto label_44e6d4;
        case 0x44e6d8u: goto label_44e6d8;
        case 0x44e6dcu: goto label_44e6dc;
        case 0x44e6e0u: goto label_44e6e0;
        case 0x44e6e4u: goto label_44e6e4;
        case 0x44e6e8u: goto label_44e6e8;
        case 0x44e6ecu: goto label_44e6ec;
        case 0x44e6f0u: goto label_44e6f0;
        case 0x44e6f4u: goto label_44e6f4;
        case 0x44e6f8u: goto label_44e6f8;
        case 0x44e6fcu: goto label_44e6fc;
        case 0x44e700u: goto label_44e700;
        case 0x44e704u: goto label_44e704;
        case 0x44e708u: goto label_44e708;
        case 0x44e70cu: goto label_44e70c;
        case 0x44e710u: goto label_44e710;
        case 0x44e714u: goto label_44e714;
        case 0x44e718u: goto label_44e718;
        case 0x44e71cu: goto label_44e71c;
        case 0x44e720u: goto label_44e720;
        case 0x44e724u: goto label_44e724;
        case 0x44e728u: goto label_44e728;
        case 0x44e72cu: goto label_44e72c;
        case 0x44e730u: goto label_44e730;
        case 0x44e734u: goto label_44e734;
        case 0x44e738u: goto label_44e738;
        case 0x44e73cu: goto label_44e73c;
        case 0x44e740u: goto label_44e740;
        case 0x44e744u: goto label_44e744;
        case 0x44e748u: goto label_44e748;
        case 0x44e74cu: goto label_44e74c;
        case 0x44e750u: goto label_44e750;
        case 0x44e754u: goto label_44e754;
        case 0x44e758u: goto label_44e758;
        case 0x44e75cu: goto label_44e75c;
        case 0x44e760u: goto label_44e760;
        case 0x44e764u: goto label_44e764;
        case 0x44e768u: goto label_44e768;
        case 0x44e76cu: goto label_44e76c;
        case 0x44e770u: goto label_44e770;
        case 0x44e774u: goto label_44e774;
        case 0x44e778u: goto label_44e778;
        case 0x44e77cu: goto label_44e77c;
        case 0x44e780u: goto label_44e780;
        case 0x44e784u: goto label_44e784;
        case 0x44e788u: goto label_44e788;
        case 0x44e78cu: goto label_44e78c;
        case 0x44e790u: goto label_44e790;
        case 0x44e794u: goto label_44e794;
        case 0x44e798u: goto label_44e798;
        case 0x44e79cu: goto label_44e79c;
        case 0x44e7a0u: goto label_44e7a0;
        case 0x44e7a4u: goto label_44e7a4;
        case 0x44e7a8u: goto label_44e7a8;
        case 0x44e7acu: goto label_44e7ac;
        case 0x44e7b0u: goto label_44e7b0;
        case 0x44e7b4u: goto label_44e7b4;
        case 0x44e7b8u: goto label_44e7b8;
        case 0x44e7bcu: goto label_44e7bc;
        case 0x44e7c0u: goto label_44e7c0;
        case 0x44e7c4u: goto label_44e7c4;
        case 0x44e7c8u: goto label_44e7c8;
        case 0x44e7ccu: goto label_44e7cc;
        case 0x44e7d0u: goto label_44e7d0;
        case 0x44e7d4u: goto label_44e7d4;
        case 0x44e7d8u: goto label_44e7d8;
        case 0x44e7dcu: goto label_44e7dc;
        case 0x44e7e0u: goto label_44e7e0;
        case 0x44e7e4u: goto label_44e7e4;
        case 0x44e7e8u: goto label_44e7e8;
        case 0x44e7ecu: goto label_44e7ec;
        case 0x44e7f0u: goto label_44e7f0;
        case 0x44e7f4u: goto label_44e7f4;
        case 0x44e7f8u: goto label_44e7f8;
        case 0x44e7fcu: goto label_44e7fc;
        case 0x44e800u: goto label_44e800;
        case 0x44e804u: goto label_44e804;
        case 0x44e808u: goto label_44e808;
        case 0x44e80cu: goto label_44e80c;
        case 0x44e810u: goto label_44e810;
        case 0x44e814u: goto label_44e814;
        case 0x44e818u: goto label_44e818;
        case 0x44e81cu: goto label_44e81c;
        case 0x44e820u: goto label_44e820;
        case 0x44e824u: goto label_44e824;
        case 0x44e828u: goto label_44e828;
        case 0x44e82cu: goto label_44e82c;
        case 0x44e830u: goto label_44e830;
        case 0x44e834u: goto label_44e834;
        case 0x44e838u: goto label_44e838;
        case 0x44e83cu: goto label_44e83c;
        case 0x44e840u: goto label_44e840;
        case 0x44e844u: goto label_44e844;
        case 0x44e848u: goto label_44e848;
        case 0x44e84cu: goto label_44e84c;
        case 0x44e850u: goto label_44e850;
        case 0x44e854u: goto label_44e854;
        case 0x44e858u: goto label_44e858;
        case 0x44e85cu: goto label_44e85c;
        case 0x44e860u: goto label_44e860;
        case 0x44e864u: goto label_44e864;
        case 0x44e868u: goto label_44e868;
        case 0x44e86cu: goto label_44e86c;
        case 0x44e870u: goto label_44e870;
        case 0x44e874u: goto label_44e874;
        case 0x44e878u: goto label_44e878;
        case 0x44e87cu: goto label_44e87c;
        case 0x44e880u: goto label_44e880;
        case 0x44e884u: goto label_44e884;
        case 0x44e888u: goto label_44e888;
        case 0x44e88cu: goto label_44e88c;
        case 0x44e890u: goto label_44e890;
        case 0x44e894u: goto label_44e894;
        case 0x44e898u: goto label_44e898;
        case 0x44e89cu: goto label_44e89c;
        case 0x44e8a0u: goto label_44e8a0;
        case 0x44e8a4u: goto label_44e8a4;
        case 0x44e8a8u: goto label_44e8a8;
        case 0x44e8acu: goto label_44e8ac;
        case 0x44e8b0u: goto label_44e8b0;
        case 0x44e8b4u: goto label_44e8b4;
        case 0x44e8b8u: goto label_44e8b8;
        case 0x44e8bcu: goto label_44e8bc;
        case 0x44e8c0u: goto label_44e8c0;
        case 0x44e8c4u: goto label_44e8c4;
        case 0x44e8c8u: goto label_44e8c8;
        case 0x44e8ccu: goto label_44e8cc;
        case 0x44e8d0u: goto label_44e8d0;
        case 0x44e8d4u: goto label_44e8d4;
        case 0x44e8d8u: goto label_44e8d8;
        case 0x44e8dcu: goto label_44e8dc;
        case 0x44e8e0u: goto label_44e8e0;
        case 0x44e8e4u: goto label_44e8e4;
        case 0x44e8e8u: goto label_44e8e8;
        case 0x44e8ecu: goto label_44e8ec;
        case 0x44e8f0u: goto label_44e8f0;
        case 0x44e8f4u: goto label_44e8f4;
        case 0x44e8f8u: goto label_44e8f8;
        case 0x44e8fcu: goto label_44e8fc;
        case 0x44e900u: goto label_44e900;
        case 0x44e904u: goto label_44e904;
        case 0x44e908u: goto label_44e908;
        case 0x44e90cu: goto label_44e90c;
        case 0x44e910u: goto label_44e910;
        case 0x44e914u: goto label_44e914;
        default: break;
    }

    ctx->pc = 0x44e588u;

label_44e588:
    // 0x44e588: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x44e588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_44e58c:
    // 0x44e58c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x44e58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_44e590:
    // 0x44e590: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x44e590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_44e594:
    // 0x44e594: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x44e594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_44e598:
    // 0x44e598: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x44e598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_44e59c:
    // 0x44e59c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x44e59cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_44e5a0:
    // 0x44e5a0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x44e5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_44e5a4:
    // 0x44e5a4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x44e5a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44e5a8:
    // 0x44e5a8: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x44e5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_44e5ac:
    // 0x44e5ac: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x44e5acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_44e5b0:
    // 0x44e5b0: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x44e5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_44e5b4:
    // 0x44e5b4: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x44e5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_44e5b8:
    // 0x44e5b8: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x44e5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_44e5bc:
    // 0x44e5bc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x44e5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_44e5c0:
    // 0x44e5c0: 0xc11a4b6  jal         func_4692D8
label_44e5c4:
    if (ctx->pc == 0x44E5C4u) {
        ctx->pc = 0x44E5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E5C0u;
        // 0x44e5c4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E5C8u;
        goto label_44e5c8;
    }
    ctx->pc = 0x44E5C0u;
    SET_GPR_U32(ctx, 31, 0x44E5C8u);
    ctx->pc = 0x44E5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44E5C0u;
    // 0x44e5c4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4692D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4692D8u, 0x44E5C0u, 0x44E5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E5C8u;
label_44e5c8:
    // 0x44e5c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x44e5c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44e5cc:
    // 0x44e5cc: 0x124000c4  beqz        $s2, . + 4 + (0xC4 << 2)
label_44e5d0:
    if (ctx->pc == 0x44E5D0u) {
        ctx->pc = 0x44E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E5CCu;
        // 0x44e5d0: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E5D4u;
        goto label_44e5d4;
    }
    ctx->pc = 0x44E5CCu;
    {
        const bool branch_taken_0x44e5cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x44E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E5CCu;
        // 0x44e5d0: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e5cc) {
            ctx->pc = 0x44E8E0u;
            goto label_44e8e0;
        }
    }
    ctx->pc = 0x44E5D4u;
label_44e5d4:
    // 0x44e5d4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x44e5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_44e5d8:
    // 0x44e5d8: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x44e5d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_44e5dc:
    // 0x44e5dc: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x44e5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_44e5e0:
    // 0x44e5e0: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x44e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_44e5e4:
    // 0x44e5e4: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x44e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_44e5e8:
    // 0x44e5e8: 0x40f809  jalr        $v0
label_44e5ec:
    if (ctx->pc == 0x44E5ECu) {
        ctx->pc = 0x44E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E5E8u;
        // 0x44e5ec: 0x34a5012f  ori         $a1, $a1, 0x12F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)303);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E5F0u;
        goto label_44e5f0;
    }
    ctx->pc = 0x44E5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44E5F0u);
        ctx->pc = 0x44E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E5E8u;
        // 0x44e5ec: 0x34a5012f  ori         $a1, $a1, 0x12F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)303);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E5E8u, 0x44E5F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44E5F0u;
label_44e5f0:
    // 0x44e5f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x44e5f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44e5f4:
    // 0x44e5f4: 0x122000ba  beqz        $s1, . + 4 + (0xBA << 2)
label_44e5f8:
    if (ctx->pc == 0x44E5F8u) {
        ctx->pc = 0x44E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E5F4u;
        // 0x44e5f8: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E5FCu;
        goto label_44e5fc;
    }
    ctx->pc = 0x44E5F4u;
    {
        const bool branch_taken_0x44e5f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x44E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E5F4u;
        // 0x44e5f8: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e5f4) {
            ctx->pc = 0x44E8E0u;
            goto label_44e8e0;
        }
    }
    ctx->pc = 0x44E5FCu;
label_44e5fc:
    // 0x44e5fc: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x44e5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_44e600:
    // 0x44e600: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x44e600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_44e604:
    // 0x44e604: 0x2442ecf8  addiu       $v0, $v0, -0x1308
    ctx->pc = 0x44e604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962424));
label_44e608:
    // 0x44e608: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_44e60c:
    if (ctx->pc == 0x44E60Cu) {
        ctx->pc = 0x44E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E608u;
        // 0x44e60c: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E610u;
        goto label_44e610;
    }
    ctx->pc = 0x44E608u;
    {
        const bool branch_taken_0x44e608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E608u;
        // 0x44e60c: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e608) {
            ctx->pc = 0x44E620u;
            goto label_44e620;
        }
    }
    ctx->pc = 0x44E610u;
label_44e610:
    // 0x44e610: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x44e610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_44e614:
    // 0x44e614: 0x24429ef8  addiu       $v0, $v0, -0x6108
    ctx->pc = 0x44e614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942456));
label_44e618:
    // 0x44e618: 0xae420048  sw          $v0, 0x48($s2)
    ctx->pc = 0x44e618u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
label_44e61c:
    // 0x44e61c: 0x0  nop
    ctx->pc = 0x44e61cu;
    // NOP
label_44e620:
    // 0x44e620: 0x8f838418  lw          $v1, -0x7BE8($gp)
    ctx->pc = 0x44e620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
label_44e624:
    // 0x44e624: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x44e624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_44e628:
    // 0x44e628: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x44e628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_44e62c:
    // 0x44e62c: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x44e62cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
label_44e630:
    // 0x44e630: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x44e630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_44e634:
    // 0x44e634: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x44e634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_44e638:
    // 0x44e638: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x44e638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_44e63c:
    // 0x44e63c: 0xae3000a8  sw          $s0, 0xA8($s1)
    ctx->pc = 0x44e63cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 16));
label_44e640:
    // 0x44e640: 0xae330044  sw          $s3, 0x44($s1)
    ctx->pc = 0x44e640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 19));
label_44e644:
    // 0x44e644: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x44e644u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_44e648:
    // 0x44e648: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x44e648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_44e64c:
    // 0x44e64c: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x44e64cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_44e650:
    // 0x44e650: 0x6ac20007  ldl         $v0, 0x7($s6)
    ctx->pc = 0x44e650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_44e654:
    // 0x44e654: 0x6ec20000  ldr         $v0, 0x0($s6)
    ctx->pc = 0x44e654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_44e658:
    // 0x44e658: 0x6ac3000f  ldl         $v1, 0xF($s6)
    ctx->pc = 0x44e658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_44e65c:
    // 0x44e65c: 0x6ec30008  ldr         $v1, 0x8($s6)
    ctx->pc = 0x44e65cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_44e660:
    // 0x44e660: 0xb222001b  sdl         $v0, 0x1B($s1)
    ctx->pc = 0x44e660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44e664:
    // 0x44e664: 0xb6220014  sdr         $v0, 0x14($s1)
    ctx->pc = 0x44e664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44e668:
    // 0x44e668: 0xb2230023  sdl         $v1, 0x23($s1)
    ctx->pc = 0x44e668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44e66c:
    // 0x44e66c: 0xb623001c  sdr         $v1, 0x1C($s1)
    ctx->pc = 0x44e66cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44e670:
    // 0x44e670: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x44e670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_44e674:
    // 0x44e674: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_44e678:
    if (ctx->pc == 0x44E678u) {
        ctx->pc = 0x44E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E674u;
        // 0x44e678: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E67Cu;
        goto label_44e67c;
    }
    ctx->pc = 0x44E674u;
    {
        const bool branch_taken_0x44e674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E674u;
        // 0x44e678: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e674) {
            ctx->pc = 0x44E694u;
            goto label_44e694;
        }
    }
    ctx->pc = 0x44E67Cu;
label_44e67c:
    // 0x44e67c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x44e67cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_44e680:
    // 0x44e680: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x44e680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44e684:
    // 0x44e684: 0x40f809  jalr        $v0
label_44e688:
    if (ctx->pc == 0x44E688u) {
        ctx->pc = 0x44E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E684u;
        // 0x44e688: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E68Cu;
        goto label_44e68c;
    }
    ctx->pc = 0x44E684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44E68Cu);
        ctx->pc = 0x44E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E684u;
        // 0x44e688: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E684u, 0x44E68Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44E68Cu;
label_44e68c:
    // 0x44e68c: 0x1000000e  b           . + 4 + (0xE << 2)
label_44e690:
    if (ctx->pc == 0x44E690u) {
        ctx->pc = 0x44E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E68Cu;
        // 0x44e690: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E694u;
        goto label_44e694;
    }
    ctx->pc = 0x44E68Cu;
    {
        const bool branch_taken_0x44e68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E68Cu;
        // 0x44e690: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e68c) {
            ctx->pc = 0x44E6C8u;
            goto label_44e6c8;
        }
    }
    ctx->pc = 0x44E694u;
label_44e694:
    // 0x44e694: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x44e694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_44e698:
    // 0x44e698: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x44e698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_44e69c:
    // 0x44e69c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_44e6a0:
    if (ctx->pc == 0x44E6A0u) {
        ctx->pc = 0x44E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E69Cu;
        // 0x44e6a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E6A4u;
        goto label_44e6a4;
    }
    ctx->pc = 0x44E69Cu;
    {
        const bool branch_taken_0x44e69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E69Cu;
        // 0x44e6a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e69c) {
            ctx->pc = 0x44E6B8u;
            goto label_44e6b8;
        }
    }
    ctx->pc = 0x44E6A4u;
label_44e6a4:
    // 0x44e6a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x44e6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44e6a8:
    // 0x44e6a8: 0xc113818  jal         func_44E060
label_44e6ac:
    if (ctx->pc == 0x44E6ACu) {
        ctx->pc = 0x44E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E6A8u;
        // 0x44e6ac: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E6B0u;
        goto label_44e6b0;
    }
    ctx->pc = 0x44E6A8u;
    SET_GPR_U32(ctx, 31, 0x44E6B0u);
    ctx->pc = 0x44E6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44E6A8u;
    // 0x44e6ac: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44E060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E060u, 0x44E6A8u, 0x44E6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E6B0u;
label_44e6b0:
    // 0x44e6b0: 0x10000005  b           . + 4 + (0x5 << 2)
label_44e6b4:
    if (ctx->pc == 0x44E6B4u) {
        ctx->pc = 0x44E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E6B0u;
        // 0x44e6b4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E6B8u;
        goto label_44e6b8;
    }
    ctx->pc = 0x44E6B0u;
    {
        const bool branch_taken_0x44e6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E6B0u;
        // 0x44e6b4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e6b0) {
            ctx->pc = 0x44E6C8u;
            goto label_44e6c8;
        }
    }
    ctx->pc = 0x44E6B8u;
label_44e6b8:
    // 0x44e6b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x44e6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44e6bc:
    // 0x44e6bc: 0xc113704  jal         func_44DC10
label_44e6c0:
    if (ctx->pc == 0x44E6C0u) {
        ctx->pc = 0x44E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E6BCu;
        // 0x44e6c0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E6C4u;
        goto label_44e6c4;
    }
    ctx->pc = 0x44E6BCu;
    SET_GPR_U32(ctx, 31, 0x44E6C4u);
    ctx->pc = 0x44E6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44E6BCu;
    // 0x44e6c0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44DC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44DC10u, 0x44E6BCu, 0x44E6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E6C4u;
label_44e6c4:
    // 0x44e6c4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x44e6c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44e6c8:
    // 0x44e6c8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x44e6c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44e6cc:
    // 0x44e6cc: 0x52b40005  beql        $s5, $s4, . + 4 + (0x5 << 2)
label_44e6d0:
    if (ctx->pc == 0x44E6D0u) {
        ctx->pc = 0x44E6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E6CCu;
        // 0x44e6d0: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E6D4u;
        goto label_44e6d4;
    }
    ctx->pc = 0x44E6CCu;
    {
        const bool branch_taken_0x44e6cc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 20));
        if (branch_taken_0x44e6cc) {
            ctx->pc = 0x44E6D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44E6CCu;
            // 0x44e6d0: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44E6E4u;
            goto label_44e6e4;
        }
    }
    ctx->pc = 0x44E6D4u;
label_44e6d4:
    // 0x44e6d4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x44e6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_44e6d8:
    // 0x44e6d8: 0x10400081  beqz        $v0, . + 4 + (0x81 << 2)
label_44e6dc:
    if (ctx->pc == 0x44E6DCu) {
        ctx->pc = 0x44E6E0u;
        goto label_44e6e0;
    }
    ctx->pc = 0x44E6D8u;
    {
        const bool branch_taken_0x44e6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e6d8) {
            ctx->pc = 0x44E8E0u;
            goto label_44e8e0;
        }
    }
    ctx->pc = 0x44E6E0u;
label_44e6e0:
    // 0x44e6e0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x44e6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_44e6e4:
    // 0x44e6e4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x44e6e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44e6e8:
    // 0x44e6e8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x44e6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_44e6ec:
    // 0x44e6ec: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x44e6ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_44e6f0:
    // 0x44e6f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x44e6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_44e6f4:
    // 0x44e6f4: 0x40f809  jalr        $v0
label_44e6f8:
    if (ctx->pc == 0x44E6F8u) {
        ctx->pc = 0x44E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E6F4u;
        // 0x44e6f8: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E6FCu;
        goto label_44e6fc;
    }
    ctx->pc = 0x44E6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44E6FCu);
        ctx->pc = 0x44E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E6F4u;
        // 0x44e6f8: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E6F4u, 0x44E6FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44E6FCu;
label_44e6fc:
    // 0x44e6fc: 0x14540078  bne         $v0, $s4, . + 4 + (0x78 << 2)
label_44e700:
    if (ctx->pc == 0x44E700u) {
        ctx->pc = 0x44E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E6FCu;
        // 0x44e700: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E704u;
        goto label_44e704;
    }
    ctx->pc = 0x44E6FCu;
    {
        const bool branch_taken_0x44e6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x44E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E6FCu;
        // 0x44e700: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e6fc) {
            ctx->pc = 0x44E8E0u;
            goto label_44e8e0;
        }
    }
    ctx->pc = 0x44E704u;
label_44e704:
    // 0x44e704: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44e704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44e708:
    // 0x44e708: 0xc10c1fa  jal         func_4307E8
label_44e70c:
    if (ctx->pc == 0x44E70Cu) {
        ctx->pc = 0x44E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E708u;
        // 0x44e70c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E710u;
        goto label_44e710;
    }
    ctx->pc = 0x44E708u;
    SET_GPR_U32(ctx, 31, 0x44E710u);
    ctx->pc = 0x44E70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44E708u;
    // 0x44e70c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x44E708u, 0x44E710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E710u;
label_44e710:
    // 0x44e710: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x44e710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_44e714:
    // 0x44e714: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x44e714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_44e718:
    // 0x44e718: 0x24626b10  addiu       $v0, $v1, 0x6B10
    ctx->pc = 0x44e718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 27408));
label_44e71c:
    // 0x44e71c: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x44e71cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_44e720:
    // 0x44e720: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x44e720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_44e724:
    // 0x44e724: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x44e724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44e728:
    // 0x44e728: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x44e728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44e72c:
    // 0x44e72c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44e72cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44e730:
    // 0x44e730: 0xc10c1fa  jal         func_4307E8
label_44e734:
    if (ctx->pc == 0x44E734u) {
        ctx->pc = 0x44E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E730u;
        // 0x44e734: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E738u;
        goto label_44e738;
    }
    ctx->pc = 0x44E730u;
    SET_GPR_U32(ctx, 31, 0x44E738u);
    ctx->pc = 0x44E734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44E730u;
    // 0x44e734: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x44E730u, 0x44E738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E738u;
label_44e738:
    // 0x44e738: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x44e738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_44e73c:
    // 0x44e73c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x44e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_44e740:
    // 0x44e740: 0xa3a30023  sb          $v1, 0x23($sp)
    ctx->pc = 0x44e740u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 35), (uint8_t)GPR_U32(ctx, 3));
label_44e744:
    // 0x44e744: 0x2446e7b0  addiu       $a2, $v0, -0x1850
    ctx->pc = 0x44e744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961072));
label_44e748:
    // 0x44e748: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x44e748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_44e74c:
    // 0x44e74c: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x44e74cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_44e750:
    // 0x44e750: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x44e750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_44e754:
    // 0x44e754: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x44e754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_44e758:
    // 0x44e758: 0x68c50017  ldl         $a1, 0x17($a2)
    ctx->pc = 0x44e758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_44e75c:
    // 0x44e75c: 0x6cc50010  ldr         $a1, 0x10($a2)
    ctx->pc = 0x44e75cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_44e760:
    // 0x44e760: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x44e760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44e764:
    // 0x44e764: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x44e764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44e768:
    // 0x44e768: 0xb3a4003f  sdl         $a0, 0x3F($sp)
    ctx->pc = 0x44e768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44e76c:
    // 0x44e76c: 0xb7a40038  sdr         $a0, 0x38($sp)
    ctx->pc = 0x44e76cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44e770:
    // 0x44e770: 0xb3a50047  sdl         $a1, 0x47($sp)
    ctx->pc = 0x44e770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44e774:
    // 0x44e774: 0xb7a50040  sdr         $a1, 0x40($sp)
    ctx->pc = 0x44e774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44e778:
    // 0x44e778: 0x68c3001f  ldl         $v1, 0x1F($a2)
    ctx->pc = 0x44e778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_44e77c:
    // 0x44e77c: 0x6cc30018  ldr         $v1, 0x18($a2)
    ctx->pc = 0x44e77cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_44e780:
    // 0x44e780: 0xb3a3004f  sdl         $v1, 0x4F($sp)
    ctx->pc = 0x44e780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44e784:
    // 0x44e784: 0xb7a30048  sdr         $v1, 0x48($sp)
    ctx->pc = 0x44e784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44e788:
    // 0x44e788: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x44e788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_44e78c:
    // 0x44e78c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44e78cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44e790:
    // 0x44e790: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x44e790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_44e794:
    // 0x44e794: 0xc11b404  jal         func_46D010
label_44e798:
    if (ctx->pc == 0x44E798u) {
        ctx->pc = 0x44E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E794u;
        // 0x44e798: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E79Cu;
        goto label_44e79c;
    }
    ctx->pc = 0x44E794u;
    SET_GPR_U32(ctx, 31, 0x44E79Cu);
    ctx->pc = 0x44E798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44E794u;
    // 0x44e798: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D010u, 0x44E794u, 0x44E79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E79Cu;
label_44e79c:
    // 0x44e79c: 0x6ba70017  ldl         $a3, 0x17($sp)
    ctx->pc = 0x44e79cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_44e7a0:
    // 0x44e7a0: 0x6fa70010  ldr         $a3, 0x10($sp)
    ctx->pc = 0x44e7a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_44e7a4:
    // 0x44e7a4: 0xb22700c7  sdl         $a3, 0xC7($s1)
    ctx->pc = 0x44e7a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44e7a8:
    // 0x44e7a8: 0xb62700c0  sdr         $a3, 0xC0($s1)
    ctx->pc = 0x44e7a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44e7ac:
    // 0x44e7ac: 0xae2000c8  sw          $zero, 0xC8($s1)
    ctx->pc = 0x44e7acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
label_44e7b0:
    // 0x44e7b0: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x44e7b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_44e7b4:
    // 0x44e7b4: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x44e7b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_44e7b8:
    // 0x44e7b8: 0xb22300bf  sdl         $v1, 0xBF($s1)
    ctx->pc = 0x44e7b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44e7bc:
    // 0x44e7bc: 0xb62300b8  sdr         $v1, 0xB8($s1)
    ctx->pc = 0x44e7bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44e7c0:
    // 0x44e7c0: 0x26220100  addiu       $v0, $s1, 0x100
    ctx->pc = 0x44e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_44e7c4:
    // 0x44e7c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x44e7c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_44e7c8:
    // 0x44e7c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x44e7c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_44e7cc:
    // 0x44e7cc: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x44e7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_44e7d0:
    // 0x44e7d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x44e7d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_44e7d4:
    // 0x44e7d4: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x44e7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_44e7d8:
    // 0x44e7d8: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x44e7d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_44e7dc:
    // 0x44e7dc: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x44e7dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_44e7e0:
    // 0x44e7e0: 0xe6210100  swc1        $f1, 0x100($s1)
    ctx->pc = 0x44e7e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
label_44e7e4:
    // 0x44e7e4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x44e7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_44e7e8:
    // 0x44e7e8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x44e7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_44e7ec:
    // 0x44e7ec: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x44e7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_44e7f0:
    // 0x44e7f0: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x44e7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_44e7f4:
    // 0x44e7f4: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x44e7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_44e7f8:
    // 0x44e7f8: 0xe6200118  swc1        $f0, 0x118($s1)
    ctx->pc = 0x44e7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 280), bits); }
label_44e7fc:
    // 0x44e7fc: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x44e7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_44e800:
    // 0x44e800: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x44e800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_44e804:
    // 0x44e804: 0xe6200130  swc1        $f0, 0x130($s1)
    ctx->pc = 0x44e804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
label_44e808:
    // 0x44e808: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x44e808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_44e80c:
    // 0x44e80c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x44e80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_44e810:
    // 0x44e810: 0xae22010c  sw          $v0, 0x10C($s1)
    ctx->pc = 0x44e810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 2));
label_44e814:
    // 0x44e814: 0x8ba70023  lwl         $a3, 0x23($sp)
    ctx->pc = 0x44e814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
label_44e818:
    // 0x44e818: 0x9ba70020  lwr         $a3, 0x20($sp)
    ctx->pc = 0x44e818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
label_44e81c:
    // 0x44e81c: 0xaa2700cf  swl         $a3, 0xCF($s1)
    ctx->pc = 0x44e81cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 207); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_44e820:
    // 0x44e820: 0xba2700cc  swr         $a3, 0xCC($s1)
    ctx->pc = 0x44e820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 204); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_44e824:
    // 0x44e824: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x44e824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_44e828:
    // 0x44e828: 0x8ba30023  lwl         $v1, 0x23($sp)
    ctx->pc = 0x44e828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_44e82c:
    // 0x44e82c: 0x9ba30020  lwr         $v1, 0x20($sp)
    ctx->pc = 0x44e82cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_44e830:
    // 0x44e830: 0xaa2300d3  swl         $v1, 0xD3($s1)
    ctx->pc = 0x44e830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 211); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_44e834:
    // 0x44e834: 0xba2300d0  swr         $v1, 0xD0($s1)
    ctx->pc = 0x44e834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 208); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_44e838:
    // 0x44e838: 0x26f0ad18  addiu       $s0, $s7, -0x52E8
    ctx->pc = 0x44e838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946072));
label_44e83c:
    // 0x44e83c: 0x8ba80023  lwl         $t0, 0x23($sp)
    ctx->pc = 0x44e83cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
label_44e840:
    // 0x44e840: 0x9ba80020  lwr         $t0, 0x20($sp)
    ctx->pc = 0x44e840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
label_44e844:
    // 0x44e844: 0xaa2800d7  swl         $t0, 0xD7($s1)
    ctx->pc = 0x44e844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 215); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_44e848:
    // 0x44e848: 0xba2800d4  swr         $t0, 0xD4($s1)
    ctx->pc = 0x44e848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 212); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_44e84c:
    // 0x44e84c: 0x8ba60023  lwl         $a2, 0x23($sp)
    ctx->pc = 0x44e84cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
label_44e850:
    // 0x44e850: 0x9ba60020  lwr         $a2, 0x20($sp)
    ctx->pc = 0x44e850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
label_44e854:
    // 0x44e854: 0xaa2600db  swl         $a2, 0xDB($s1)
    ctx->pc = 0x44e854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 219); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_44e858:
    // 0x44e858: 0xba2600d8  swr         $a2, 0xD8($s1)
    ctx->pc = 0x44e858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 216); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_44e85c:
    // 0x44e85c: 0x8ba20023  lwl         $v0, 0x23($sp)
    ctx->pc = 0x44e85cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_44e860:
    // 0x44e860: 0x9ba20020  lwr         $v0, 0x20($sp)
    ctx->pc = 0x44e860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_44e864:
    // 0x44e864: 0xaa2200df  swl         $v0, 0xDF($s1)
    ctx->pc = 0x44e864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 223); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_44e868:
    // 0x44e868: 0xba2200dc  swr         $v0, 0xDC($s1)
    ctx->pc = 0x44e868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 220); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_44e86c:
    // 0x44e86c: 0x6ba80037  ldl         $t0, 0x37($sp)
    ctx->pc = 0x44e86cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_44e870:
    // 0x44e870: 0x6fa80030  ldr         $t0, 0x30($sp)
    ctx->pc = 0x44e870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_44e874:
    // 0x44e874: 0xb22800e7  sdl         $t0, 0xE7($s1)
    ctx->pc = 0x44e874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44e878:
    // 0x44e878: 0xb62800e0  sdr         $t0, 0xE0($s1)
    ctx->pc = 0x44e878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44e87c:
    // 0x44e87c: 0x6ba6003f  ldl         $a2, 0x3F($sp)
    ctx->pc = 0x44e87cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_44e880:
    // 0x44e880: 0x6fa60038  ldr         $a2, 0x38($sp)
    ctx->pc = 0x44e880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_44e884:
    // 0x44e884: 0xb22600ef  sdl         $a2, 0xEF($s1)
    ctx->pc = 0x44e884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 239); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44e888:
    // 0x44e888: 0xb62600e8  sdr         $a2, 0xE8($s1)
    ctx->pc = 0x44e888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 232); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44e88c:
    // 0x44e88c: 0x6ba20047  ldl         $v0, 0x47($sp)
    ctx->pc = 0x44e88cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_44e890:
    // 0x44e890: 0x6fa20040  ldr         $v0, 0x40($sp)
    ctx->pc = 0x44e890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_44e894:
    // 0x44e894: 0xb22200f7  sdl         $v0, 0xF7($s1)
    ctx->pc = 0x44e894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44e898:
    // 0x44e898: 0xb62200f0  sdr         $v0, 0xF0($s1)
    ctx->pc = 0x44e898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44e89c:
    // 0x44e89c: 0x6ba8004f  ldl         $t0, 0x4F($sp)
    ctx->pc = 0x44e89cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_44e8a0:
    // 0x44e8a0: 0x6fa80048  ldr         $t0, 0x48($sp)
    ctx->pc = 0x44e8a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_44e8a4:
    // 0x44e8a4: 0xb22800ff  sdl         $t0, 0xFF($s1)
    ctx->pc = 0x44e8a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44e8a8:
    // 0x44e8a8: 0xb62800f8  sdr         $t0, 0xF8($s1)
    ctx->pc = 0x44e8a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44e8ac:
    // 0x44e8ac: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x44e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_44e8b0:
    // 0x44e8b0: 0x40f809  jalr        $v0
label_44e8b4:
    if (ctx->pc == 0x44E8B4u) {
        ctx->pc = 0x44E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E8B0u;
        // 0x44e8b4: 0x262500ac  addiu       $a1, $s1, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 172));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E8B8u;
        goto label_44e8b8;
    }
    ctx->pc = 0x44E8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44E8B8u);
        ctx->pc = 0x44E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E8B0u;
        // 0x44e8b4: 0x262500ac  addiu       $a1, $s1, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 172));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E8B0u, 0x44E8B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44E8B8u;
label_44e8b8:
    // 0x44e8b8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x44e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_44e8bc:
    // 0x44e8bc: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x44e8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_44e8c0:
    // 0x44e8c0: 0x40f809  jalr        $v0
label_44e8c4:
    if (ctx->pc == 0x44E8C4u) {
        ctx->pc = 0x44E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E8C0u;
        // 0x44e8c4: 0x262500b0  addiu       $a1, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E8C8u;
        goto label_44e8c8;
    }
    ctx->pc = 0x44E8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44E8C8u);
        ctx->pc = 0x44E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E8C0u;
        // 0x44e8c4: 0x262500b0  addiu       $a1, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E8C0u, 0x44E8C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44E8C8u;
label_44e8c8:
    // 0x44e8c8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x44e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_44e8cc:
    // 0x44e8cc: 0x262500b4  addiu       $a1, $s1, 0xB4
    ctx->pc = 0x44e8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 180));
label_44e8d0:
    // 0x44e8d0: 0x40f809  jalr        $v0
label_44e8d4:
    if (ctx->pc == 0x44E8D4u) {
        ctx->pc = 0x44E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E8D0u;
        // 0x44e8d4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E8D8u;
        goto label_44e8d8;
    }
    ctx->pc = 0x44E8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44E8D8u);
        ctx->pc = 0x44E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E8D0u;
        // 0x44e8d4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E8D0u, 0x44E8D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44E8D8u;
label_44e8d8:
    // 0x44e8d8: 0x10000004  b           . + 4 + (0x4 << 2)
label_44e8dc:
    if (ctx->pc == 0x44E8DCu) {
        ctx->pc = 0x44E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E8D8u;
        // 0x44e8dc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E8E0u;
        goto label_44e8e0;
    }
    ctx->pc = 0x44E8D8u;
    {
        const bool branch_taken_0x44e8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E8D8u;
        // 0x44e8dc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e8d8) {
            ctx->pc = 0x44E8ECu;
            goto label_44e8ec;
        }
    }
    ctx->pc = 0x44E8E0u;
label_44e8e0:
    // 0x44e8e0: 0xc11a8fc  jal         func_46A3F0
label_44e8e4:
    if (ctx->pc == 0x44E8E4u) {
        ctx->pc = 0x44E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E8E0u;
        // 0x44e8e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E8E8u;
        goto label_44e8e8;
    }
    ctx->pc = 0x44E8E0u;
    SET_GPR_U32(ctx, 31, 0x44E8E8u);
    ctx->pc = 0x44E8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44E8E0u;
    // 0x44e8e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A3F0u, 0x44E8E0u, 0x44E8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44E8E8u;
label_44e8e8:
    // 0x44e8e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x44e8e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44e8ec:
    // 0x44e8ec: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x44e8ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_44e8f0:
    // 0x44e8f0: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x44e8f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_44e8f4:
    // 0x44e8f4: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x44e8f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_44e8f8:
    // 0x44e8f8: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x44e8f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_44e8fc:
    // 0x44e8fc: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x44e8fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_44e900:
    // 0x44e900: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x44e900u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_44e904:
    // 0x44e904: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x44e904u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_44e908:
    // 0x44e908: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x44e908u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_44e90c:
    // 0x44e90c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x44e90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_44e910:
    // 0x44e910: 0x3e00008  jr          $ra
label_44e914:
    if (ctx->pc == 0x44E914u) {
        ctx->pc = 0x44E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E910u;
        // 0x44e914: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44E918u;
        goto label_fallthrough_0x44e910;
    }
    ctx->pc = 0x44E910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E910u;
        // 0x44e914: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x44e910:
    ctx->pc = 0x44E918u;
}
