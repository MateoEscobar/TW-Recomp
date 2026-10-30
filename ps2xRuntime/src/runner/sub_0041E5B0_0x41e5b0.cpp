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

// Function: sub_0041E5B0
// Address: 0x41e5b0 - 0x41e9d8
void sub_0041E5B0_0x41e5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041E5B0_0x41e5b0");
#endif

    switch (ctx->pc) {
        case 0x41e5b0u: goto label_41e5b0;
        case 0x41e5b4u: goto label_41e5b4;
        case 0x41e5b8u: goto label_41e5b8;
        case 0x41e5bcu: goto label_41e5bc;
        case 0x41e5c0u: goto label_41e5c0;
        case 0x41e5c4u: goto label_41e5c4;
        case 0x41e5c8u: goto label_41e5c8;
        case 0x41e5ccu: goto label_41e5cc;
        case 0x41e5d0u: goto label_41e5d0;
        case 0x41e5d4u: goto label_41e5d4;
        case 0x41e5d8u: goto label_41e5d8;
        case 0x41e5dcu: goto label_41e5dc;
        case 0x41e5e0u: goto label_41e5e0;
        case 0x41e5e4u: goto label_41e5e4;
        case 0x41e5e8u: goto label_41e5e8;
        case 0x41e5ecu: goto label_41e5ec;
        case 0x41e5f0u: goto label_41e5f0;
        case 0x41e5f4u: goto label_41e5f4;
        case 0x41e5f8u: goto label_41e5f8;
        case 0x41e5fcu: goto label_41e5fc;
        case 0x41e600u: goto label_41e600;
        case 0x41e604u: goto label_41e604;
        case 0x41e608u: goto label_41e608;
        case 0x41e60cu: goto label_41e60c;
        case 0x41e610u: goto label_41e610;
        case 0x41e614u: goto label_41e614;
        case 0x41e618u: goto label_41e618;
        case 0x41e61cu: goto label_41e61c;
        case 0x41e620u: goto label_41e620;
        case 0x41e624u: goto label_41e624;
        case 0x41e628u: goto label_41e628;
        case 0x41e62cu: goto label_41e62c;
        case 0x41e630u: goto label_41e630;
        case 0x41e634u: goto label_41e634;
        case 0x41e638u: goto label_41e638;
        case 0x41e63cu: goto label_41e63c;
        case 0x41e640u: goto label_41e640;
        case 0x41e644u: goto label_41e644;
        case 0x41e648u: goto label_41e648;
        case 0x41e64cu: goto label_41e64c;
        case 0x41e650u: goto label_41e650;
        case 0x41e654u: goto label_41e654;
        case 0x41e658u: goto label_41e658;
        case 0x41e65cu: goto label_41e65c;
        case 0x41e660u: goto label_41e660;
        case 0x41e664u: goto label_41e664;
        case 0x41e668u: goto label_41e668;
        case 0x41e66cu: goto label_41e66c;
        case 0x41e670u: goto label_41e670;
        case 0x41e674u: goto label_41e674;
        case 0x41e678u: goto label_41e678;
        case 0x41e67cu: goto label_41e67c;
        case 0x41e680u: goto label_41e680;
        case 0x41e684u: goto label_41e684;
        case 0x41e688u: goto label_41e688;
        case 0x41e68cu: goto label_41e68c;
        case 0x41e690u: goto label_41e690;
        case 0x41e694u: goto label_41e694;
        case 0x41e698u: goto label_41e698;
        case 0x41e69cu: goto label_41e69c;
        case 0x41e6a0u: goto label_41e6a0;
        case 0x41e6a4u: goto label_41e6a4;
        case 0x41e6a8u: goto label_41e6a8;
        case 0x41e6acu: goto label_41e6ac;
        case 0x41e6b0u: goto label_41e6b0;
        case 0x41e6b4u: goto label_41e6b4;
        case 0x41e6b8u: goto label_41e6b8;
        case 0x41e6bcu: goto label_41e6bc;
        case 0x41e6c0u: goto label_41e6c0;
        case 0x41e6c4u: goto label_41e6c4;
        case 0x41e6c8u: goto label_41e6c8;
        case 0x41e6ccu: goto label_41e6cc;
        case 0x41e6d0u: goto label_41e6d0;
        case 0x41e6d4u: goto label_41e6d4;
        case 0x41e6d8u: goto label_41e6d8;
        case 0x41e6dcu: goto label_41e6dc;
        case 0x41e6e0u: goto label_41e6e0;
        case 0x41e6e4u: goto label_41e6e4;
        case 0x41e6e8u: goto label_41e6e8;
        case 0x41e6ecu: goto label_41e6ec;
        case 0x41e6f0u: goto label_41e6f0;
        case 0x41e6f4u: goto label_41e6f4;
        case 0x41e6f8u: goto label_41e6f8;
        case 0x41e6fcu: goto label_41e6fc;
        case 0x41e700u: goto label_41e700;
        case 0x41e704u: goto label_41e704;
        case 0x41e708u: goto label_41e708;
        case 0x41e70cu: goto label_41e70c;
        case 0x41e710u: goto label_41e710;
        case 0x41e714u: goto label_41e714;
        case 0x41e718u: goto label_41e718;
        case 0x41e71cu: goto label_41e71c;
        case 0x41e720u: goto label_41e720;
        case 0x41e724u: goto label_41e724;
        case 0x41e728u: goto label_41e728;
        case 0x41e72cu: goto label_41e72c;
        case 0x41e730u: goto label_41e730;
        case 0x41e734u: goto label_41e734;
        case 0x41e738u: goto label_41e738;
        case 0x41e73cu: goto label_41e73c;
        case 0x41e740u: goto label_41e740;
        case 0x41e744u: goto label_41e744;
        case 0x41e748u: goto label_41e748;
        case 0x41e74cu: goto label_41e74c;
        case 0x41e750u: goto label_41e750;
        case 0x41e754u: goto label_41e754;
        case 0x41e758u: goto label_41e758;
        case 0x41e75cu: goto label_41e75c;
        case 0x41e760u: goto label_41e760;
        case 0x41e764u: goto label_41e764;
        case 0x41e768u: goto label_41e768;
        case 0x41e76cu: goto label_41e76c;
        case 0x41e770u: goto label_41e770;
        case 0x41e774u: goto label_41e774;
        case 0x41e778u: goto label_41e778;
        case 0x41e77cu: goto label_41e77c;
        case 0x41e780u: goto label_41e780;
        case 0x41e784u: goto label_41e784;
        case 0x41e788u: goto label_41e788;
        case 0x41e78cu: goto label_41e78c;
        case 0x41e790u: goto label_41e790;
        case 0x41e794u: goto label_41e794;
        case 0x41e798u: goto label_41e798;
        case 0x41e79cu: goto label_41e79c;
        case 0x41e7a0u: goto label_41e7a0;
        case 0x41e7a4u: goto label_41e7a4;
        case 0x41e7a8u: goto label_41e7a8;
        case 0x41e7acu: goto label_41e7ac;
        case 0x41e7b0u: goto label_41e7b0;
        case 0x41e7b4u: goto label_41e7b4;
        case 0x41e7b8u: goto label_41e7b8;
        case 0x41e7bcu: goto label_41e7bc;
        case 0x41e7c0u: goto label_41e7c0;
        case 0x41e7c4u: goto label_41e7c4;
        case 0x41e7c8u: goto label_41e7c8;
        case 0x41e7ccu: goto label_41e7cc;
        case 0x41e7d0u: goto label_41e7d0;
        case 0x41e7d4u: goto label_41e7d4;
        case 0x41e7d8u: goto label_41e7d8;
        case 0x41e7dcu: goto label_41e7dc;
        case 0x41e7e0u: goto label_41e7e0;
        case 0x41e7e4u: goto label_41e7e4;
        case 0x41e7e8u: goto label_41e7e8;
        case 0x41e7ecu: goto label_41e7ec;
        case 0x41e7f0u: goto label_41e7f0;
        case 0x41e7f4u: goto label_41e7f4;
        case 0x41e7f8u: goto label_41e7f8;
        case 0x41e7fcu: goto label_41e7fc;
        case 0x41e800u: goto label_41e800;
        case 0x41e804u: goto label_41e804;
        case 0x41e808u: goto label_41e808;
        case 0x41e80cu: goto label_41e80c;
        case 0x41e810u: goto label_41e810;
        case 0x41e814u: goto label_41e814;
        case 0x41e818u: goto label_41e818;
        case 0x41e81cu: goto label_41e81c;
        case 0x41e820u: goto label_41e820;
        case 0x41e824u: goto label_41e824;
        case 0x41e828u: goto label_41e828;
        case 0x41e82cu: goto label_41e82c;
        case 0x41e830u: goto label_41e830;
        case 0x41e834u: goto label_41e834;
        case 0x41e838u: goto label_41e838;
        case 0x41e83cu: goto label_41e83c;
        case 0x41e840u: goto label_41e840;
        case 0x41e844u: goto label_41e844;
        case 0x41e848u: goto label_41e848;
        case 0x41e84cu: goto label_41e84c;
        case 0x41e850u: goto label_41e850;
        case 0x41e854u: goto label_41e854;
        case 0x41e858u: goto label_41e858;
        case 0x41e85cu: goto label_41e85c;
        case 0x41e860u: goto label_41e860;
        case 0x41e864u: goto label_41e864;
        case 0x41e868u: goto label_41e868;
        case 0x41e86cu: goto label_41e86c;
        case 0x41e870u: goto label_41e870;
        case 0x41e874u: goto label_41e874;
        case 0x41e878u: goto label_41e878;
        case 0x41e87cu: goto label_41e87c;
        case 0x41e880u: goto label_41e880;
        case 0x41e884u: goto label_41e884;
        case 0x41e888u: goto label_41e888;
        case 0x41e88cu: goto label_41e88c;
        case 0x41e890u: goto label_41e890;
        case 0x41e894u: goto label_41e894;
        case 0x41e898u: goto label_41e898;
        case 0x41e89cu: goto label_41e89c;
        case 0x41e8a0u: goto label_41e8a0;
        case 0x41e8a4u: goto label_41e8a4;
        case 0x41e8a8u: goto label_41e8a8;
        case 0x41e8acu: goto label_41e8ac;
        case 0x41e8b0u: goto label_41e8b0;
        case 0x41e8b4u: goto label_41e8b4;
        case 0x41e8b8u: goto label_41e8b8;
        case 0x41e8bcu: goto label_41e8bc;
        case 0x41e8c0u: goto label_41e8c0;
        case 0x41e8c4u: goto label_41e8c4;
        case 0x41e8c8u: goto label_41e8c8;
        case 0x41e8ccu: goto label_41e8cc;
        case 0x41e8d0u: goto label_41e8d0;
        case 0x41e8d4u: goto label_41e8d4;
        case 0x41e8d8u: goto label_41e8d8;
        case 0x41e8dcu: goto label_41e8dc;
        case 0x41e8e0u: goto label_41e8e0;
        case 0x41e8e4u: goto label_41e8e4;
        case 0x41e8e8u: goto label_41e8e8;
        case 0x41e8ecu: goto label_41e8ec;
        case 0x41e8f0u: goto label_41e8f0;
        case 0x41e8f4u: goto label_41e8f4;
        case 0x41e8f8u: goto label_41e8f8;
        case 0x41e8fcu: goto label_41e8fc;
        case 0x41e900u: goto label_41e900;
        case 0x41e904u: goto label_41e904;
        case 0x41e908u: goto label_41e908;
        case 0x41e90cu: goto label_41e90c;
        case 0x41e910u: goto label_41e910;
        case 0x41e914u: goto label_41e914;
        case 0x41e918u: goto label_41e918;
        case 0x41e91cu: goto label_41e91c;
        case 0x41e920u: goto label_41e920;
        case 0x41e924u: goto label_41e924;
        case 0x41e928u: goto label_41e928;
        case 0x41e92cu: goto label_41e92c;
        case 0x41e930u: goto label_41e930;
        case 0x41e934u: goto label_41e934;
        case 0x41e938u: goto label_41e938;
        case 0x41e93cu: goto label_41e93c;
        case 0x41e940u: goto label_41e940;
        case 0x41e944u: goto label_41e944;
        case 0x41e948u: goto label_41e948;
        case 0x41e94cu: goto label_41e94c;
        case 0x41e950u: goto label_41e950;
        case 0x41e954u: goto label_41e954;
        case 0x41e958u: goto label_41e958;
        case 0x41e95cu: goto label_41e95c;
        case 0x41e960u: goto label_41e960;
        case 0x41e964u: goto label_41e964;
        case 0x41e968u: goto label_41e968;
        case 0x41e96cu: goto label_41e96c;
        case 0x41e970u: goto label_41e970;
        case 0x41e974u: goto label_41e974;
        case 0x41e978u: goto label_41e978;
        case 0x41e97cu: goto label_41e97c;
        case 0x41e980u: goto label_41e980;
        case 0x41e984u: goto label_41e984;
        case 0x41e988u: goto label_41e988;
        case 0x41e98cu: goto label_41e98c;
        case 0x41e990u: goto label_41e990;
        case 0x41e994u: goto label_41e994;
        case 0x41e998u: goto label_41e998;
        case 0x41e99cu: goto label_41e99c;
        case 0x41e9a0u: goto label_41e9a0;
        case 0x41e9a4u: goto label_41e9a4;
        case 0x41e9a8u: goto label_41e9a8;
        case 0x41e9acu: goto label_41e9ac;
        case 0x41e9b0u: goto label_41e9b0;
        case 0x41e9b4u: goto label_41e9b4;
        case 0x41e9b8u: goto label_41e9b8;
        case 0x41e9bcu: goto label_41e9bc;
        case 0x41e9c0u: goto label_41e9c0;
        case 0x41e9c4u: goto label_41e9c4;
        case 0x41e9c8u: goto label_41e9c8;
        case 0x41e9ccu: goto label_41e9cc;
        case 0x41e9d0u: goto label_41e9d0;
        case 0x41e9d4u: goto label_41e9d4;
        default: break;
    }

    ctx->pc = 0x41e5b0u;

label_41e5b0:
    // 0x41e5b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x41e5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_41e5b4:
    // 0x41e5b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x41e5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_41e5b8:
    // 0x41e5b8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x41e5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_41e5bc:
    // 0x41e5bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x41e5bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41e5c0:
    // 0x41e5c0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x41e5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_41e5c4:
    // 0x41e5c4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x41e5c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_41e5c8:
    // 0x41e5c8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x41e5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_41e5cc:
    // 0x41e5cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x41e5ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41e5d0:
    // 0x41e5d0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x41e5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_41e5d4:
    // 0x41e5d4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x41e5d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_41e5d8:
    // 0x41e5d8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x41e5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_41e5dc:
    // 0x41e5dc: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x41e5dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_41e5e0:
    // 0x41e5e0: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x41e5e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_41e5e4:
    // 0x41e5e4: 0x104000f2  beqz        $v0, . + 4 + (0xF2 << 2)
label_41e5e8:
    if (ctx->pc == 0x41E5E8u) {
        ctx->pc = 0x41E5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E5E4u;
        // 0x41e5e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E5ECu;
        goto label_41e5ec;
    }
    ctx->pc = 0x41E5E4u;
    {
        const bool branch_taken_0x41e5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E5E4u;
        // 0x41e5e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e5e4) {
            ctx->pc = 0x41E9B0u;
            goto label_41e9b0;
        }
    }
    ctx->pc = 0x41E5ECu;
label_41e5ec:
    // 0x41e5ec: 0x60000f0  bltz        $s0, . + 4 + (0xF0 << 2)
label_41e5f0:
    if (ctx->pc == 0x41E5F0u) {
        ctx->pc = 0x41E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E5ECu;
        // 0x41e5f0: 0x2a020017  slti        $v0, $s0, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)23) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E5F4u;
        goto label_41e5f4;
    }
    ctx->pc = 0x41E5ECu;
    {
        const bool branch_taken_0x41e5ec = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x41E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E5ECu;
        // 0x41e5f0: 0x2a020017  slti        $v0, $s0, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)23) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e5ec) {
            ctx->pc = 0x41E9B0u;
            goto label_41e9b0;
        }
    }
    ctx->pc = 0x41E5F4u;
label_41e5f4:
    // 0x41e5f4: 0x104000ee  beqz        $v0, . + 4 + (0xEE << 2)
label_41e5f8:
    if (ctx->pc == 0x41E5F8u) {
        ctx->pc = 0x41E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E5F4u;
        // 0x41e5f8: 0x240303f4  addiu       $v1, $zero, 0x3F4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1012));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E5FCu;
        goto label_41e5fc;
    }
    ctx->pc = 0x41E5F4u;
    {
        const bool branch_taken_0x41e5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E5F4u;
        // 0x41e5f8: 0x240303f4  addiu       $v1, $zero, 0x3F4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1012));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e5f4) {
            ctx->pc = 0x41E9B0u;
            goto label_41e9b0;
        }
    }
    ctx->pc = 0x41E5FCu;
label_41e5fc:
    // 0x41e5fc: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x41e5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_41e600:
    // 0x41e600: 0x2632018  mult        $a0, $s3, $v1
    ctx->pc = 0x41e600u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_41e604:
    // 0x41e604: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x41e604u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_41e608:
    // 0x41e608: 0x928821  addu        $s1, $a0, $s2
    ctx->pc = 0x41e608u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_41e60c:
    // 0x41e60c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x41e60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_41e610:
    // 0x41e610: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x41e610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_41e614:
    // 0x41e614: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x41e614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_41e618:
    // 0x41e618: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x41e618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_41e61c:
    // 0x41e61c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_41e620:
    if (ctx->pc == 0x41E620u) {
        ctx->pc = 0x41E620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E61Cu;
        // 0x41e620: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E624u;
        goto label_41e624;
    }
    ctx->pc = 0x41E61Cu;
    {
        const bool branch_taken_0x41e61c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x41E620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E61Cu;
        // 0x41e620: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e61c) {
            ctx->pc = 0x41E628u;
            goto label_41e628;
        }
    }
    ctx->pc = 0x41E624u;
label_41e624:
    // 0x41e624: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x41e624u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
label_41e628:
    // 0x41e628: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x41e628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_41e62c:
    // 0x41e62c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x41e62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_41e630:
    // 0x41e630: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x41e630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
label_41e634:
    // 0x41e634: 0xc10904c  jal         func_424130
label_41e638:
    if (ctx->pc == 0x41E638u) {
        ctx->pc = 0x41E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E634u;
        // 0x41e638: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E63Cu;
        goto label_41e63c;
    }
    ctx->pc = 0x41E634u;
    SET_GPR_U32(ctx, 31, 0x41E63Cu);
    ctx->pc = 0x41E638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E634u;
    // 0x41e638: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x41E634u, 0x41E63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E63Cu;
label_41e63c:
    // 0x41e63c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_41e640:
    if (ctx->pc == 0x41E640u) {
        ctx->pc = 0x41E640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E63Cu;
        // 0x41e640: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E644u;
        goto label_41e644;
    }
    ctx->pc = 0x41E63Cu;
    {
        const bool branch_taken_0x41e63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E63Cu;
        // 0x41e640: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e63c) {
            ctx->pc = 0x41E6CCu;
            goto label_41e6cc;
        }
    }
    ctx->pc = 0x41E644u;
label_41e644:
    // 0x41e644: 0x56020022  bnel        $s0, $v0, . + 4 + (0x22 << 2)
label_41e648:
    if (ctx->pc == 0x41E648u) {
        ctx->pc = 0x41E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E644u;
        // 0x41e648: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E64Cu;
        goto label_41e64c;
    }
    ctx->pc = 0x41E644u;
    {
        const bool branch_taken_0x41e644 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x41e644) {
            ctx->pc = 0x41E648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41E644u;
            // 0x41e648: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41E6D0u;
            goto label_41e6d0;
        }
    }
    ctx->pc = 0x41E64Cu;
label_41e64c:
    // 0x41e64c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x41e64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_41e650:
    // 0x41e650: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x41e650u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_41e654:
    // 0x41e654: 0x2443b300  addiu       $v1, $v0, -0x4D00
    ctx->pc = 0x41e654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947584));
label_41e658:
    // 0x41e658: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x41e658u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41e65c:
    // 0x41e65c: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x41e65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_41e660:
    // 0x41e660: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x41e660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_41e664:
    // 0x41e664: 0xa6202a  slt         $a0, $a1, $a2
    ctx->pc = 0x41e664u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_41e668:
    // 0x41e668: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_41e66c:
    if (ctx->pc == 0x41E66Cu) {
        ctx->pc = 0x41E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E668u;
        // 0x41e66c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E670u;
        goto label_41e670;
    }
    ctx->pc = 0x41E668u;
    {
        const bool branch_taken_0x41e668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E668u;
        // 0x41e66c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e668) {
            ctx->pc = 0x41E684u;
            goto label_41e684;
        }
    }
    ctx->pc = 0x41E670u;
label_41e670:
    // 0x41e670: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x41e670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_41e674:
    // 0x41e674: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_41e678:
    if (ctx->pc == 0x41E678u) {
        ctx->pc = 0x41E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E674u;
        // 0x41e678: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E67Cu;
        goto label_41e67c;
    }
    ctx->pc = 0x41E674u;
    {
        const bool branch_taken_0x41e674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E674u;
        // 0x41e678: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e674) {
            ctx->pc = 0x41E690u;
            goto label_41e690;
        }
    }
    ctx->pc = 0x41E67Cu;
label_41e67c:
    // 0x41e67c: 0x1000000e  b           . + 4 + (0xE << 2)
label_41e680:
    if (ctx->pc == 0x41E680u) {
        ctx->pc = 0x41E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E67Cu;
        // 0x41e680: 0x2522b300  addiu       $v0, $t1, -0x4D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294947584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E684u;
        goto label_41e684;
    }
    ctx->pc = 0x41E67Cu;
    {
        const bool branch_taken_0x41e67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E67Cu;
        // 0x41e680: 0x2522b300  addiu       $v0, $t1, -0x4D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294947584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e67c) {
            ctx->pc = 0x41E6B8u;
            goto label_41e6b8;
        }
    }
    ctx->pc = 0x41E684u;
label_41e684:
    // 0x41e684: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x41e684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_41e688:
    // 0x41e688: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_41e68c:
    if (ctx->pc == 0x41E68Cu) {
        ctx->pc = 0x41E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E688u;
        // 0x41e68c: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E690u;
        goto label_41e690;
    }
    ctx->pc = 0x41E688u;
    {
        const bool branch_taken_0x41e688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E688u;
        // 0x41e68c: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e688) {
            ctx->pc = 0x41E6B4u;
            goto label_41e6b4;
        }
    }
    ctx->pc = 0x41E690u;
label_41e690:
    // 0x41e690: 0x240303f4  addiu       $v1, $zero, 0x3F4
    ctx->pc = 0x41e690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1012));
label_41e694:
    // 0x41e694: 0x2023018  mult        $a2, $s0, $v0
    ctx->pc = 0x41e694u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_41e698:
    // 0x41e698: 0x2524b300  addiu       $a0, $t1, -0x4D00
    ctx->pc = 0x41e698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294947584));
label_41e69c:
    // 0x41e69c: 0x2631018  mult        $v0, $s3, $v1
    ctx->pc = 0x41e69cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_41e6a0:
    // 0x41e6a0: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x41e6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_41e6a4:
    // 0x41e6a4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x41e6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_41e6a8:
    // 0x41e6a8: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x41e6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_41e6ac:
    // 0x41e6ac: 0x1000002c  b           . + 4 + (0x2C << 2)
label_41e6b0:
    if (ctx->pc == 0x41E6B0u) {
        ctx->pc = 0x41E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E6ACu;
        // 0x41e6b0: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E6B4u;
        goto label_41e6b4;
    }
    ctx->pc = 0x41E6ACu;
    {
        const bool branch_taken_0x41e6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E6ACu;
        // 0x41e6b0: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e6ac) {
            ctx->pc = 0x41E760u;
            goto label_41e760;
        }
    }
    ctx->pc = 0x41E6B4u;
label_41e6b4:
    // 0x41e6b4: 0x2522b300  addiu       $v0, $t1, -0x4D00
    ctx->pc = 0x41e6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294947584));
label_41e6b8:
    // 0x41e6b8: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x41e6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_41e6bc:
    // 0x41e6bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x41e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_41e6c0:
    // 0x41e6c0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x41e6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_41e6c4:
    // 0x41e6c4: 0x10000030  b           . + 4 + (0x30 << 2)
label_41e6c8:
    if (ctx->pc == 0x41E6C8u) {
        ctx->pc = 0x41E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E6C4u;
        // 0x41e6c8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E6CCu;
        goto label_41e6cc;
    }
    ctx->pc = 0x41E6C4u;
    {
        const bool branch_taken_0x41e6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E6C4u;
        // 0x41e6c8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e6c4) {
            ctx->pc = 0x41E788u;
            goto label_41e788;
        }
    }
    ctx->pc = 0x41E6CCu;
label_41e6cc:
    // 0x41e6cc: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x41e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_41e6d0:
    // 0x41e6d0: 0x240303f4  addiu       $v1, $zero, 0x3F4
    ctx->pc = 0x41e6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1012));
label_41e6d4:
    // 0x41e6d4: 0x2024018  mult        $t0, $s0, $v0
    ctx->pc = 0x41e6d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_41e6d8:
    // 0x41e6d8: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x41e6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_41e6dc:
    // 0x41e6dc: 0x2631018  mult        $v0, $s3, $v1
    ctx->pc = 0x41e6dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_41e6e0:
    // 0x41e6e0: 0x2485b300  addiu       $a1, $a0, -0x4D00
    ctx->pc = 0x41e6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947584));
label_41e6e4:
    // 0x41e6e4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x41e6e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41e6e8:
    // 0x41e6e8: 0x523821  addu        $a3, $v0, $s2
    ctx->pc = 0x41e6e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_41e6ec:
    // 0x41e6ec: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x41e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_41e6f0:
    // 0x41e6f0: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x41e6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_41e6f4:
    // 0x41e6f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x41e6f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41e6f8:
    // 0x41e6f8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x41e6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_41e6fc:
    // 0x41e6fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x41e6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_41e700:
    // 0x41e700: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x41e700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_41e704:
    // 0x41e704: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x41e704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_41e708:
    // 0x41e708: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_41e70c:
    if (ctx->pc == 0x41E70Cu) {
        ctx->pc = 0x41E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E708u;
        // 0x41e70c: 0xa61821  addu        $v1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E710u;
        goto label_41e710;
    }
    ctx->pc = 0x41E708u;
    {
        const bool branch_taken_0x41e708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41e708) {
            ctx->pc = 0x41E70Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41E708u;
            // 0x41e70c: 0xa61821  addu        $v1, $a1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41E734u;
            goto label_41e734;
        }
    }
    ctx->pc = 0x41E710u;
label_41e710:
    // 0x41e710: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x41e710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_41e714:
    // 0x41e714: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x41e714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_41e718:
    // 0x41e718: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x41e718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_41e71c:
    // 0x41e71c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x41e71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_41e720:
    // 0x41e720: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x41e720u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_41e724:
    // 0x41e724: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_41e728:
    if (ctx->pc == 0x41E728u) {
        ctx->pc = 0x41E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E724u;
        // 0x41e728: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E72Cu;
        goto label_41e72c;
    }
    ctx->pc = 0x41E724u;
    {
        const bool branch_taken_0x41e724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E724u;
        // 0x41e728: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e724) {
            ctx->pc = 0x41E744u;
            goto label_41e744;
        }
    }
    ctx->pc = 0x41E72Cu;
label_41e72c:
    // 0x41e72c: 0x10000014  b           . + 4 + (0x14 << 2)
label_41e730:
    if (ctx->pc == 0x41E730u) {
        ctx->pc = 0x41E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E72Cu;
        // 0x41e730: 0x2522b300  addiu       $v0, $t1, -0x4D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294947584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E734u;
        goto label_41e734;
    }
    ctx->pc = 0x41E72Cu;
    {
        const bool branch_taken_0x41e72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E72Cu;
        // 0x41e730: 0x2522b300  addiu       $v0, $t1, -0x4D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294947584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e72c) {
            ctx->pc = 0x41E780u;
            goto label_41e780;
        }
    }
    ctx->pc = 0x41E734u;
label_41e734:
    // 0x41e734: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x41e734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_41e738:
    // 0x41e738: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x41e738u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_41e73c:
    // 0x41e73c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_41e740:
    if (ctx->pc == 0x41E740u) {
        ctx->pc = 0x41E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E73Cu;
        // 0x41e740: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E744u;
        goto label_41e744;
    }
    ctx->pc = 0x41E73Cu;
    {
        const bool branch_taken_0x41e73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E73Cu;
        // 0x41e740: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e73c) {
            ctx->pc = 0x41E77Cu;
            goto label_41e77c;
        }
    }
    ctx->pc = 0x41E744u;
label_41e744:
    // 0x41e744: 0x240303f4  addiu       $v1, $zero, 0x3F4
    ctx->pc = 0x41e744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1012));
label_41e748:
    // 0x41e748: 0x2023818  mult        $a3, $s0, $v0
    ctx->pc = 0x41e748u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_41e74c:
    // 0x41e74c: 0x2631018  mult        $v0, $s3, $v1
    ctx->pc = 0x41e74cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_41e750:
    // 0x41e750: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x41e750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_41e754:
    // 0x41e754: 0x2522b300  addiu       $v0, $t1, -0x4D00
    ctx->pc = 0x41e754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294947584));
label_41e758:
    // 0x41e758: 0xe51821  addu        $v1, $a3, $a1
    ctx->pc = 0x41e758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_41e75c:
    // 0x41e75c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x41e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_41e760:
    // 0x41e760: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x41e760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_41e764:
    // 0x41e764: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x41e764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_41e768:
    // 0x41e768: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x41e768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_41e76c:
    // 0x41e76c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_41e770:
    if (ctx->pc == 0x41E770u) {
        ctx->pc = 0x41E770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E76Cu;
        // 0x41e770: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E774u;
        goto label_41e774;
    }
    ctx->pc = 0x41E76Cu;
    {
        const bool branch_taken_0x41e76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E76Cu;
        // 0x41e770: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e76c) {
            ctx->pc = 0x41E788u;
            goto label_41e788;
        }
    }
    ctx->pc = 0x41E774u;
label_41e774:
    // 0x41e774: 0x10000004  b           . + 4 + (0x4 << 2)
label_41e778:
    if (ctx->pc == 0x41E778u) {
        ctx->pc = 0x41E778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E774u;
        // 0x41e778: 0x8c440024  lw          $a0, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E77Cu;
        goto label_41e77c;
    }
    ctx->pc = 0x41E774u;
    {
        const bool branch_taken_0x41e774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E774u;
        // 0x41e778: 0x8c440024  lw          $a0, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e774) {
            ctx->pc = 0x41E788u;
            goto label_41e788;
        }
    }
    ctx->pc = 0x41E77Cu;
label_41e77c:
    // 0x41e77c: 0x2522b300  addiu       $v0, $t1, -0x4D00
    ctx->pc = 0x41e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294947584));
label_41e780:
    // 0x41e780: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x41e780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_41e784:
    // 0x41e784: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x41e784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_41e788:
    // 0x41e788: 0x240203f4  addiu       $v0, $zero, 0x3F4
    ctx->pc = 0x41e788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1012));
label_41e78c:
    // 0x41e78c: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x41e78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_41e790:
    // 0x41e790: 0x2622818  mult        $a1, $s3, $v0
    ctx->pc = 0x41e790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_41e794:
    // 0x41e794: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x41e794u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_41e798:
    // 0x41e798: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x41e798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_41e79c:
    // 0x41e79c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x41e79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_41e7a0:
    // 0x41e7a0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x41e7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_41e7a4:
    // 0x41e7a4: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
label_41e7a8:
    if (ctx->pc == 0x41E7A8u) {
        ctx->pc = 0x41E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E7A4u;
        // 0x41e7a8: 0xac640020  sw          $a0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E7ACu;
        goto label_41e7ac;
    }
    ctx->pc = 0x41E7A4u;
    {
        const bool branch_taken_0x41e7a4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x41E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E7A4u;
        // 0x41e7a8: 0xac640020  sw          $a0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e7a4) {
            ctx->pc = 0x41E7B0u;
            goto label_41e7b0;
        }
    }
    ctx->pc = 0x41E7ACu;
label_41e7ac:
    // 0x41e7ac: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x41e7acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
label_41e7b0:
    // 0x41e7b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x41e7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_41e7b4:
    // 0x41e7b4: 0x1602001d  bne         $s0, $v0, . + 4 + (0x1D << 2)
label_41e7b8:
    if (ctx->pc == 0x41E7B8u) {
        ctx->pc = 0x41E7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E7B4u;
        // 0x41e7b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E7BCu;
        goto label_41e7bc;
    }
    ctx->pc = 0x41E7B4u;
    {
        const bool branch_taken_0x41e7b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x41E7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E7B4u;
        // 0x41e7b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e7b4) {
            ctx->pc = 0x41E82Cu;
            goto label_41e82c;
        }
    }
    ctx->pc = 0x41E7BCu;
label_41e7bc:
    // 0x41e7bc: 0x1a80001b  blez        $s4, . + 4 + (0x1B << 2)
label_41e7c0:
    if (ctx->pc == 0x41E7C0u) {
        ctx->pc = 0x41E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E7BCu;
        // 0x41e7c0: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E7C4u;
        goto label_41e7c4;
    }
    ctx->pc = 0x41E7BCu;
    {
        const bool branch_taken_0x41e7bc = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x41E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E7BCu;
        // 0x41e7c0: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e7bc) {
            ctx->pc = 0x41E82Cu;
            goto label_41e82c;
        }
    }
    ctx->pc = 0x41E7C4u;
label_41e7c4:
    // 0x41e7c4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x41e7c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_41e7c8:
    // 0x41e7c8: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x41e7c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
label_41e7cc:
    // 0x41e7cc: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x41e7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_41e7d0:
    // 0x41e7d0: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x41e7d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_41e7d4:
    // 0x41e7d4: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x41e7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_41e7d8:
    // 0x41e7d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_41e7dc:
    if (ctx->pc == 0x41E7DCu) {
        ctx->pc = 0x41E7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E7D8u;
        // 0x41e7dc: 0x651025  or          $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E7E0u;
        goto label_41e7e0;
    }
    ctx->pc = 0x41E7D8u;
    {
        const bool branch_taken_0x41e7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41E7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E7D8u;
        // 0x41e7dc: 0x651025  or          $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e7d8) {
            ctx->pc = 0x41E7E8u;
            goto label_41e7e8;
        }
    }
    ctx->pc = 0x41E7E0u;
label_41e7e0:
    // 0x41e7e0: 0x10000011  b           . + 4 + (0x11 << 2)
label_41e7e4:
    if (ctx->pc == 0x41E7E4u) {
        ctx->pc = 0x41E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E7E0u;
        // 0x41e7e4: 0xfc820000  sd          $v0, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E7E8u;
        goto label_41e7e8;
    }
    ctx->pc = 0x41E7E0u;
    {
        const bool branch_taken_0x41e7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E7E0u;
        // 0x41e7e4: 0xfc820000  sd          $v0, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e7e0) {
            ctx->pc = 0x41E828u;
            goto label_41e828;
        }
    }
    ctx->pc = 0x41E7E8u;
label_41e7e8:
    // 0x41e7e8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x41e7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_41e7ec:
    // 0x41e7ec: 0x214b8  dsll        $v0, $v0, 18
    ctx->pc = 0x41e7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 18);
label_41e7f0:
    // 0x41e7f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x41e7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_41e7f4:
    // 0x41e7f4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_41e7f8:
    if (ctx->pc == 0x41E7F8u) {
        ctx->pc = 0x41E7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E7F4u;
        // 0x41e7f8: 0x3c040061  lui         $a0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E7FCu;
        goto label_41e7fc;
    }
    ctx->pc = 0x41E7F4u;
    {
        const bool branch_taken_0x41e7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E7F4u;
        // 0x41e7f8: 0x3c040061  lui         $a0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e7f4) {
            ctx->pc = 0x41E828u;
            goto label_41e828;
        }
    }
    ctx->pc = 0x41E7FCu;
label_41e7fc:
    // 0x41e7fc: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x41e7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_41e800:
    // 0x41e800: 0xc0739c6  jal         func_1CE718
label_41e804:
    if (ctx->pc == 0x41E804u) {
        ctx->pc = 0x41E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E800u;
        // 0x41e804: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E808u;
        goto label_41e808;
    }
    ctx->pc = 0x41E800u;
    SET_GPR_U32(ctx, 31, 0x41E808u);
    ctx->pc = 0x41E804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E800u;
    // 0x41e804: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE718u, 0x41E800u, 0x41E808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E808u;
label_41e808:
    // 0x41e808: 0x8e25489c  lw          $a1, 0x489C($s1)
    ctx->pc = 0x41e808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_41e80c:
    // 0x41e80c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x41e80cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_41e810:
    // 0x41e810: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x41e810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_41e814:
    // 0x41e814: 0x424f8  dsll        $a0, $a0, 19
    ctx->pc = 0x41e814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 19);
label_41e818:
    // 0x41e818: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x41e818u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_41e81c:
    // 0x41e81c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x41e81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_41e820:
    // 0x41e820: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x41e820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_41e824:
    // 0x41e824: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x41e824u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_41e828:
    // 0x41e828: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x41e828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_41e82c:
    // 0x41e82c: 0x16020023  bne         $s0, $v0, . + 4 + (0x23 << 2)
label_41e830:
    if (ctx->pc == 0x41E830u) {
        ctx->pc = 0x41E830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E82Cu;
        // 0x41e830: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E834u;
        goto label_41e834;
    }
    ctx->pc = 0x41E82Cu;
    {
        const bool branch_taken_0x41e82c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x41E830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E82Cu;
        // 0x41e830: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e82c) {
            ctx->pc = 0x41E8BCu;
            goto label_41e8bc;
        }
    }
    ctx->pc = 0x41E834u;
label_41e834:
    // 0x41e834: 0x82421034  lb          $v0, 0x1034($s2)
    ctx->pc = 0x41e834u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4148)));
label_41e838:
    // 0x41e838: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_41e83c:
    if (ctx->pc == 0x41E83Cu) {
        ctx->pc = 0x41E83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E838u;
        // 0x41e83c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E840u;
        goto label_41e840;
    }
    ctx->pc = 0x41E838u;
    {
        const bool branch_taken_0x41e838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E838u;
        // 0x41e83c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e838) {
            ctx->pc = 0x41E8B8u;
            goto label_41e8b8;
        }
    }
    ctx->pc = 0x41E840u;
label_41e840:
    // 0x41e840: 0x26451034  addiu       $a1, $s2, 0x1034
    ctx->pc = 0x41e840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4148));
label_41e844:
    // 0x41e844: 0x8e262b04  lw          $a2, 0x2B04($s1)
    ctx->pc = 0x41e844u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
label_41e848:
    // 0x41e848: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x41e848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41e84c:
    // 0x41e84c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x41e84cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_41e850:
    // 0x41e850: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x41e850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_41e854:
    // 0x41e854: 0x40f809  jalr        $v0
label_41e858:
    if (ctx->pc == 0x41E858u) {
        ctx->pc = 0x41E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E854u;
        // 0x41e858: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E85Cu;
        goto label_41e85c;
    }
    ctx->pc = 0x41E854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41E85Cu);
        ctx->pc = 0x41E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E854u;
        // 0x41e858: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E854u, 0x41E85Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41E85Cu;
label_41e85c:
    // 0x41e85c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_41e860:
    if (ctx->pc == 0x41E860u) {
        ctx->pc = 0x41E860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E85Cu;
        // 0x41e860: 0x8e262b04  lw          $a2, 0x2B04($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E864u;
        goto label_41e864;
    }
    ctx->pc = 0x41E85Cu;
    {
        const bool branch_taken_0x41e85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E85Cu;
        // 0x41e860: 0x8e262b04  lw          $a2, 0x2B04($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e85c) {
            ctx->pc = 0x41E8B8u;
            goto label_41e8b8;
        }
    }
    ctx->pc = 0x41E864u;
label_41e864:
    // 0x41e864: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x41e864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41e868:
    // 0x41e868: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x41e868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41e86c:
    // 0x41e86c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x41e86cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_41e870:
    // 0x41e870: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x41e870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_41e874:
    // 0x41e874: 0x60f809  jalr        $v1
label_41e878:
    if (ctx->pc == 0x41E878u) {
        ctx->pc = 0x41E878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E874u;
        // 0x41e878: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E87Cu;
        goto label_41e87c;
    }
    ctx->pc = 0x41E874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41E87Cu);
        ctx->pc = 0x41E878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E874u;
        // 0x41e878: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E874u, 0x41E87Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41E87Cu;
label_41e87c:
    // 0x41e87c: 0x8e262b04  lw          $a2, 0x2B04($s1)
    ctx->pc = 0x41e87cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
label_41e880:
    // 0x41e880: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x41e880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_41e884:
    // 0x41e884: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x41e884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41e888:
    // 0x41e888: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x41e888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_41e88c:
    // 0x41e88c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x41e88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_41e890:
    // 0x41e890: 0x60f809  jalr        $v1
label_41e894:
    if (ctx->pc == 0x41E894u) {
        ctx->pc = 0x41E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E890u;
        // 0x41e894: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E898u;
        goto label_41e898;
    }
    ctx->pc = 0x41E890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41E898u);
        ctx->pc = 0x41E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E890u;
        // 0x41e894: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E890u, 0x41E898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41E898u;
label_41e898:
    // 0x41e898: 0x8e272b04  lw          $a3, 0x2B04($s1)
    ctx->pc = 0x41e898u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
label_41e89c:
    // 0x41e89c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x41e89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_41e8a0:
    // 0x41e8a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41e8a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41e8a4:
    // 0x41e8a4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x41e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_41e8a8:
    // 0x41e8a8: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x41e8a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_41e8ac:
    // 0x41e8ac: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x41e8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_41e8b0:
    // 0x41e8b0: 0x60f809  jalr        $v1
label_41e8b4:
    if (ctx->pc == 0x41E8B4u) {
        ctx->pc = 0x41E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E8B0u;
        // 0x41e8b4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E8B8u;
        goto label_41e8b8;
    }
    ctx->pc = 0x41E8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41E8B8u);
        ctx->pc = 0x41E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E8B0u;
        // 0x41e8b4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E8B0u, 0x41E8B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41E8B8u;
label_41e8b8:
    // 0x41e8b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41e8bc:
    // 0x41e8bc: 0x56a2003d  bnel        $s5, $v0, . + 4 + (0x3D << 2)
label_41e8c0:
    if (ctx->pc == 0x41E8C0u) {
        ctx->pc = 0x41E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E8BCu;
        // 0x41e8c0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E8C4u;
        goto label_41e8c4;
    }
    ctx->pc = 0x41E8BCu;
    {
        const bool branch_taken_0x41e8bc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x41e8bc) {
            ctx->pc = 0x41E8C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41E8BCu;
            // 0x41e8c0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41E9B4u;
            goto label_41e9b4;
        }
    }
    ctx->pc = 0x41E8C4u;
label_41e8c4:
    // 0x41e8c4: 0x82420fd4  lb          $v0, 0xFD4($s2)
    ctx->pc = 0x41e8c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4052)));
label_41e8c8:
    // 0x41e8c8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_41e8cc:
    if (ctx->pc == 0x41E8CCu) {
        ctx->pc = 0x41E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E8C8u;
        // 0x41e8cc: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E8D0u;
        goto label_41e8d0;
    }
    ctx->pc = 0x41E8C8u;
    {
        const bool branch_taken_0x41e8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E8C8u;
        // 0x41e8cc: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e8c8) {
            ctx->pc = 0x41E92Cu;
            goto label_41e92c;
        }
    }
    ctx->pc = 0x41E8D0u;
label_41e8d0:
    // 0x41e8d0: 0x26450fd4  addiu       $a1, $s2, 0xFD4
    ctx->pc = 0x41e8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4052));
label_41e8d4:
    // 0x41e8d4: 0x8e262b04  lw          $a2, 0x2B04($s1)
    ctx->pc = 0x41e8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
label_41e8d8:
    // 0x41e8d8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x41e8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41e8dc:
    // 0x41e8dc: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x41e8dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_41e8e0:
    // 0x41e8e0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x41e8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_41e8e4:
    // 0x41e8e4: 0x40f809  jalr        $v0
label_41e8e8:
    if (ctx->pc == 0x41E8E8u) {
        ctx->pc = 0x41E8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E8E4u;
        // 0x41e8e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E8ECu;
        goto label_41e8ec;
    }
    ctx->pc = 0x41E8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41E8ECu);
        ctx->pc = 0x41E8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E8E4u;
        // 0x41e8e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E8E4u, 0x41E8ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41E8ECu;
label_41e8ec:
    // 0x41e8ec: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_41e8f0:
    if (ctx->pc == 0x41E8F0u) {
        ctx->pc = 0x41E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E8ECu;
        // 0x41e8f0: 0x8e262b04  lw          $a2, 0x2B04($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E8F4u;
        goto label_41e8f4;
    }
    ctx->pc = 0x41E8ECu;
    {
        const bool branch_taken_0x41e8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E8ECu;
        // 0x41e8f0: 0x8e262b04  lw          $a2, 0x2B04($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e8ec) {
            ctx->pc = 0x41E92Cu;
            goto label_41e92c;
        }
    }
    ctx->pc = 0x41E8F4u;
label_41e8f4:
    // 0x41e8f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41e8f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41e8f8:
    // 0x41e8f8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x41e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41e8fc:
    // 0x41e8fc: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x41e8fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_41e900:
    // 0x41e900: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x41e900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_41e904:
    // 0x41e904: 0x60f809  jalr        $v1
label_41e908:
    if (ctx->pc == 0x41E908u) {
        ctx->pc = 0x41E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E904u;
        // 0x41e908: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E90Cu;
        goto label_41e90c;
    }
    ctx->pc = 0x41E904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41E90Cu);
        ctx->pc = 0x41E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E904u;
        // 0x41e908: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E904u, 0x41E90Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41E90Cu;
label_41e90c:
    // 0x41e90c: 0x8e272b04  lw          $a3, 0x2B04($s1)
    ctx->pc = 0x41e90cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
label_41e910:
    // 0x41e910: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x41e910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41e914:
    // 0x41e914: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41e914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41e918:
    // 0x41e918: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x41e918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_41e91c:
    // 0x41e91c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x41e91cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_41e920:
    // 0x41e920: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x41e920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_41e924:
    // 0x41e924: 0x60f809  jalr        $v1
label_41e928:
    if (ctx->pc == 0x41E928u) {
        ctx->pc = 0x41E928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E924u;
        // 0x41e928: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E92Cu;
        goto label_41e92c;
    }
    ctx->pc = 0x41E924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41E92Cu);
        ctx->pc = 0x41E928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E924u;
        // 0x41e928: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E924u, 0x41E92Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41E92Cu;
label_41e92c:
    // 0x41e92c: 0x82420ff4  lb          $v0, 0xFF4($s2)
    ctx->pc = 0x41e92cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4084)));
label_41e930:
    // 0x41e930: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_41e934:
    if (ctx->pc == 0x41E934u) {
        ctx->pc = 0x41E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E930u;
        // 0x41e934: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E938u;
        goto label_41e938;
    }
    ctx->pc = 0x41E930u;
    {
        const bool branch_taken_0x41e930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E930u;
        // 0x41e934: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e930) {
            ctx->pc = 0x41E9B0u;
            goto label_41e9b0;
        }
    }
    ctx->pc = 0x41E938u;
label_41e938:
    // 0x41e938: 0x26450ff4  addiu       $a1, $s2, 0xFF4
    ctx->pc = 0x41e938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4084));
label_41e93c:
    // 0x41e93c: 0x8e262b04  lw          $a2, 0x2B04($s1)
    ctx->pc = 0x41e93cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
label_41e940:
    // 0x41e940: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x41e940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41e944:
    // 0x41e944: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x41e944u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_41e948:
    // 0x41e948: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x41e948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_41e94c:
    // 0x41e94c: 0x40f809  jalr        $v0
label_41e950:
    if (ctx->pc == 0x41E950u) {
        ctx->pc = 0x41E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E94Cu;
        // 0x41e950: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E954u;
        goto label_41e954;
    }
    ctx->pc = 0x41E94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41E954u);
        ctx->pc = 0x41E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E94Cu;
        // 0x41e950: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E94Cu, 0x41E954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41E954u;
label_41e954:
    // 0x41e954: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_41e958:
    if (ctx->pc == 0x41E958u) {
        ctx->pc = 0x41E958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E954u;
        // 0x41e958: 0x8e262b04  lw          $a2, 0x2B04($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E95Cu;
        goto label_41e95c;
    }
    ctx->pc = 0x41E954u;
    {
        const bool branch_taken_0x41e954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E954u;
        // 0x41e958: 0x8e262b04  lw          $a2, 0x2B04($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e954) {
            ctx->pc = 0x41E9B0u;
            goto label_41e9b0;
        }
    }
    ctx->pc = 0x41E95Cu;
label_41e95c:
    // 0x41e95c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x41e95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41e960:
    // 0x41e960: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x41e960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41e964:
    // 0x41e964: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x41e964u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_41e968:
    // 0x41e968: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x41e968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_41e96c:
    // 0x41e96c: 0x60f809  jalr        $v1
label_41e970:
    if (ctx->pc == 0x41E970u) {
        ctx->pc = 0x41E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E96Cu;
        // 0x41e970: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E974u;
        goto label_41e974;
    }
    ctx->pc = 0x41E96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41E974u);
        ctx->pc = 0x41E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E96Cu;
        // 0x41e970: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E96Cu, 0x41E974u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41E974u;
label_41e974:
    // 0x41e974: 0x8e262b04  lw          $a2, 0x2B04($s1)
    ctx->pc = 0x41e974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
label_41e978:
    // 0x41e978: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41e978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41e97c:
    // 0x41e97c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x41e97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41e980:
    // 0x41e980: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x41e980u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_41e984:
    // 0x41e984: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x41e984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_41e988:
    // 0x41e988: 0x60f809  jalr        $v1
label_41e98c:
    if (ctx->pc == 0x41E98Cu) {
        ctx->pc = 0x41E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E988u;
        // 0x41e98c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E990u;
        goto label_41e990;
    }
    ctx->pc = 0x41E988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41E990u);
        ctx->pc = 0x41E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E988u;
        // 0x41e98c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E988u, 0x41E990u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41E990u;
label_41e990:
    // 0x41e990: 0x8e272b04  lw          $a3, 0x2B04($s1)
    ctx->pc = 0x41e990u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
label_41e994:
    // 0x41e994: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x41e994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_41e998:
    // 0x41e998: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41e998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41e99c:
    // 0x41e99c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x41e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_41e9a0:
    // 0x41e9a0: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x41e9a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_41e9a4:
    // 0x41e9a4: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x41e9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_41e9a8:
    // 0x41e9a8: 0x60f809  jalr        $v1
label_41e9ac:
    if (ctx->pc == 0x41E9ACu) {
        ctx->pc = 0x41E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E9A8u;
        // 0x41e9ac: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E9B0u;
        goto label_41e9b0;
    }
    ctx->pc = 0x41E9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41E9B0u);
        ctx->pc = 0x41E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E9A8u;
        // 0x41e9ac: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E9A8u, 0x41E9B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41E9B0u;
label_41e9b0:
    // 0x41e9b0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x41e9b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_41e9b4:
    // 0x41e9b4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x41e9b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41e9b8:
    // 0x41e9b8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x41e9b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41e9bc:
    // 0x41e9bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x41e9bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41e9c0:
    // 0x41e9c0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x41e9c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41e9c4:
    // 0x41e9c4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x41e9c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41e9c8:
    // 0x41e9c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41e9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41e9cc:
    // 0x41e9cc: 0x3e00008  jr          $ra
label_41e9d0:
    if (ctx->pc == 0x41E9D0u) {
        ctx->pc = 0x41E9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E9CCu;
        // 0x41e9d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E9D4u;
        goto label_41e9d4;
    }
    ctx->pc = 0x41E9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E9CCu;
        // 0x41e9d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E9CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41E9D4u;
label_41e9d4:
    // 0x41e9d4: 0x0  nop
    ctx->pc = 0x41e9d4u;
    // NOP
    ctx->pc = 0x41e9d8u;
}
