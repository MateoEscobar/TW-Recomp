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

// Function: sub_0038A4D8
// Address: 0x38a4d8 - 0x38a7e8
void sub_0038A4D8_0x38a4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A4D8_0x38a4d8");
#endif

    switch (ctx->pc) {
        case 0x38a4d8u: goto label_38a4d8;
        case 0x38a4dcu: goto label_38a4dc;
        case 0x38a4e0u: goto label_38a4e0;
        case 0x38a4e4u: goto label_38a4e4;
        case 0x38a4e8u: goto label_38a4e8;
        case 0x38a4ecu: goto label_38a4ec;
        case 0x38a4f0u: goto label_38a4f0;
        case 0x38a4f4u: goto label_38a4f4;
        case 0x38a4f8u: goto label_38a4f8;
        case 0x38a4fcu: goto label_38a4fc;
        case 0x38a500u: goto label_38a500;
        case 0x38a504u: goto label_38a504;
        case 0x38a508u: goto label_38a508;
        case 0x38a50cu: goto label_38a50c;
        case 0x38a510u: goto label_38a510;
        case 0x38a514u: goto label_38a514;
        case 0x38a518u: goto label_38a518;
        case 0x38a51cu: goto label_38a51c;
        case 0x38a520u: goto label_38a520;
        case 0x38a524u: goto label_38a524;
        case 0x38a528u: goto label_38a528;
        case 0x38a52cu: goto label_38a52c;
        case 0x38a530u: goto label_38a530;
        case 0x38a534u: goto label_38a534;
        case 0x38a538u: goto label_38a538;
        case 0x38a53cu: goto label_38a53c;
        case 0x38a540u: goto label_38a540;
        case 0x38a544u: goto label_38a544;
        case 0x38a548u: goto label_38a548;
        case 0x38a54cu: goto label_38a54c;
        case 0x38a550u: goto label_38a550;
        case 0x38a554u: goto label_38a554;
        case 0x38a558u: goto label_38a558;
        case 0x38a55cu: goto label_38a55c;
        case 0x38a560u: goto label_38a560;
        case 0x38a564u: goto label_38a564;
        case 0x38a568u: goto label_38a568;
        case 0x38a56cu: goto label_38a56c;
        case 0x38a570u: goto label_38a570;
        case 0x38a574u: goto label_38a574;
        case 0x38a578u: goto label_38a578;
        case 0x38a57cu: goto label_38a57c;
        case 0x38a580u: goto label_38a580;
        case 0x38a584u: goto label_38a584;
        case 0x38a588u: goto label_38a588;
        case 0x38a58cu: goto label_38a58c;
        case 0x38a590u: goto label_38a590;
        case 0x38a594u: goto label_38a594;
        case 0x38a598u: goto label_38a598;
        case 0x38a59cu: goto label_38a59c;
        case 0x38a5a0u: goto label_38a5a0;
        case 0x38a5a4u: goto label_38a5a4;
        case 0x38a5a8u: goto label_38a5a8;
        case 0x38a5acu: goto label_38a5ac;
        case 0x38a5b0u: goto label_38a5b0;
        case 0x38a5b4u: goto label_38a5b4;
        case 0x38a5b8u: goto label_38a5b8;
        case 0x38a5bcu: goto label_38a5bc;
        case 0x38a5c0u: goto label_38a5c0;
        case 0x38a5c4u: goto label_38a5c4;
        case 0x38a5c8u: goto label_38a5c8;
        case 0x38a5ccu: goto label_38a5cc;
        case 0x38a5d0u: goto label_38a5d0;
        case 0x38a5d4u: goto label_38a5d4;
        case 0x38a5d8u: goto label_38a5d8;
        case 0x38a5dcu: goto label_38a5dc;
        case 0x38a5e0u: goto label_38a5e0;
        case 0x38a5e4u: goto label_38a5e4;
        case 0x38a5e8u: goto label_38a5e8;
        case 0x38a5ecu: goto label_38a5ec;
        case 0x38a5f0u: goto label_38a5f0;
        case 0x38a5f4u: goto label_38a5f4;
        case 0x38a5f8u: goto label_38a5f8;
        case 0x38a5fcu: goto label_38a5fc;
        case 0x38a600u: goto label_38a600;
        case 0x38a604u: goto label_38a604;
        case 0x38a608u: goto label_38a608;
        case 0x38a60cu: goto label_38a60c;
        case 0x38a610u: goto label_38a610;
        case 0x38a614u: goto label_38a614;
        case 0x38a618u: goto label_38a618;
        case 0x38a61cu: goto label_38a61c;
        case 0x38a620u: goto label_38a620;
        case 0x38a624u: goto label_38a624;
        case 0x38a628u: goto label_38a628;
        case 0x38a62cu: goto label_38a62c;
        case 0x38a630u: goto label_38a630;
        case 0x38a634u: goto label_38a634;
        case 0x38a638u: goto label_38a638;
        case 0x38a63cu: goto label_38a63c;
        case 0x38a640u: goto label_38a640;
        case 0x38a644u: goto label_38a644;
        case 0x38a648u: goto label_38a648;
        case 0x38a64cu: goto label_38a64c;
        case 0x38a650u: goto label_38a650;
        case 0x38a654u: goto label_38a654;
        case 0x38a658u: goto label_38a658;
        case 0x38a65cu: goto label_38a65c;
        case 0x38a660u: goto label_38a660;
        case 0x38a664u: goto label_38a664;
        case 0x38a668u: goto label_38a668;
        case 0x38a66cu: goto label_38a66c;
        case 0x38a670u: goto label_38a670;
        case 0x38a674u: goto label_38a674;
        case 0x38a678u: goto label_38a678;
        case 0x38a67cu: goto label_38a67c;
        case 0x38a680u: goto label_38a680;
        case 0x38a684u: goto label_38a684;
        case 0x38a688u: goto label_38a688;
        case 0x38a68cu: goto label_38a68c;
        case 0x38a690u: goto label_38a690;
        case 0x38a694u: goto label_38a694;
        case 0x38a698u: goto label_38a698;
        case 0x38a69cu: goto label_38a69c;
        case 0x38a6a0u: goto label_38a6a0;
        case 0x38a6a4u: goto label_38a6a4;
        case 0x38a6a8u: goto label_38a6a8;
        case 0x38a6acu: goto label_38a6ac;
        case 0x38a6b0u: goto label_38a6b0;
        case 0x38a6b4u: goto label_38a6b4;
        case 0x38a6b8u: goto label_38a6b8;
        case 0x38a6bcu: goto label_38a6bc;
        case 0x38a6c0u: goto label_38a6c0;
        case 0x38a6c4u: goto label_38a6c4;
        case 0x38a6c8u: goto label_38a6c8;
        case 0x38a6ccu: goto label_38a6cc;
        case 0x38a6d0u: goto label_38a6d0;
        case 0x38a6d4u: goto label_38a6d4;
        case 0x38a6d8u: goto label_38a6d8;
        case 0x38a6dcu: goto label_38a6dc;
        case 0x38a6e0u: goto label_38a6e0;
        case 0x38a6e4u: goto label_38a6e4;
        case 0x38a6e8u: goto label_38a6e8;
        case 0x38a6ecu: goto label_38a6ec;
        case 0x38a6f0u: goto label_38a6f0;
        case 0x38a6f4u: goto label_38a6f4;
        case 0x38a6f8u: goto label_38a6f8;
        case 0x38a6fcu: goto label_38a6fc;
        case 0x38a700u: goto label_38a700;
        case 0x38a704u: goto label_38a704;
        case 0x38a708u: goto label_38a708;
        case 0x38a70cu: goto label_38a70c;
        case 0x38a710u: goto label_38a710;
        case 0x38a714u: goto label_38a714;
        case 0x38a718u: goto label_38a718;
        case 0x38a71cu: goto label_38a71c;
        case 0x38a720u: goto label_38a720;
        case 0x38a724u: goto label_38a724;
        case 0x38a728u: goto label_38a728;
        case 0x38a72cu: goto label_38a72c;
        case 0x38a730u: goto label_38a730;
        case 0x38a734u: goto label_38a734;
        case 0x38a738u: goto label_38a738;
        case 0x38a73cu: goto label_38a73c;
        case 0x38a740u: goto label_38a740;
        case 0x38a744u: goto label_38a744;
        case 0x38a748u: goto label_38a748;
        case 0x38a74cu: goto label_38a74c;
        case 0x38a750u: goto label_38a750;
        case 0x38a754u: goto label_38a754;
        case 0x38a758u: goto label_38a758;
        case 0x38a75cu: goto label_38a75c;
        case 0x38a760u: goto label_38a760;
        case 0x38a764u: goto label_38a764;
        case 0x38a768u: goto label_38a768;
        case 0x38a76cu: goto label_38a76c;
        case 0x38a770u: goto label_38a770;
        case 0x38a774u: goto label_38a774;
        case 0x38a778u: goto label_38a778;
        case 0x38a77cu: goto label_38a77c;
        case 0x38a780u: goto label_38a780;
        case 0x38a784u: goto label_38a784;
        case 0x38a788u: goto label_38a788;
        case 0x38a78cu: goto label_38a78c;
        case 0x38a790u: goto label_38a790;
        case 0x38a794u: goto label_38a794;
        case 0x38a798u: goto label_38a798;
        case 0x38a79cu: goto label_38a79c;
        case 0x38a7a0u: goto label_38a7a0;
        case 0x38a7a4u: goto label_38a7a4;
        case 0x38a7a8u: goto label_38a7a8;
        case 0x38a7acu: goto label_38a7ac;
        case 0x38a7b0u: goto label_38a7b0;
        case 0x38a7b4u: goto label_38a7b4;
        case 0x38a7b8u: goto label_38a7b8;
        case 0x38a7bcu: goto label_38a7bc;
        case 0x38a7c0u: goto label_38a7c0;
        case 0x38a7c4u: goto label_38a7c4;
        case 0x38a7c8u: goto label_38a7c8;
        case 0x38a7ccu: goto label_38a7cc;
        case 0x38a7d0u: goto label_38a7d0;
        case 0x38a7d4u: goto label_38a7d4;
        case 0x38a7d8u: goto label_38a7d8;
        case 0x38a7dcu: goto label_38a7dc;
        case 0x38a7e0u: goto label_38a7e0;
        case 0x38a7e4u: goto label_38a7e4;
        default: break;
    }

    ctx->pc = 0x38a4d8u;

label_38a4d8:
    // 0x38a4d8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x38a4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_38a4dc:
    // 0x38a4dc: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x38a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_38a4e0:
    // 0x38a4e0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x38a4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_38a4e4:
    // 0x38a4e4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x38a4e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38a4e8:
    // 0x38a4e8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x38a4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_38a4ec:
    // 0x38a4ec: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x38a4ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_38a4f0:
    // 0x38a4f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x38a4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_38a4f4:
    // 0x38a4f4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x38a4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_38a4f8:
    // 0x38a4f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x38a4f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38a4fc:
    // 0x38a4fc: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x38a4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_38a500:
    // 0x38a500: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x38a500u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38a504:
    // 0x38a504: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x38a504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_38a508:
    // 0x38a508: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x38a508u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_38a50c:
    // 0x38a50c: 0x244201a0  addiu       $v0, $v0, 0x1A0
    ctx->pc = 0x38a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
label_38a510:
    // 0x38a510: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x38a510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_38a514:
    // 0x38a514: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x38a514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_38a518:
    // 0x38a518: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x38a518u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_38a51c:
    // 0x38a51c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38a520:
    // 0x38a520: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_38a524:
    if (ctx->pc == 0x38A524u) {
        ctx->pc = 0x38A524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A520u;
        // 0x38a524: 0x2421821  addu        $v1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A528u;
        goto label_38a528;
    }
    ctx->pc = 0x38A520u;
    {
        const bool branch_taken_0x38a520 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A520u;
        // 0x38a524: 0x2421821  addu        $v1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a520) {
            ctx->pc = 0x38A538u;
            goto label_38a538;
        }
    }
    ctx->pc = 0x38A528u;
label_38a528:
    // 0x38a528: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38a528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_38a52c:
    // 0x38a52c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38a52cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38a530:
    // 0x38a530: 0x1000000a  b           . + 4 + (0xA << 2)
label_38a534:
    if (ctx->pc == 0x38A534u) {
        ctx->pc = 0x38A534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A530u;
        // 0x38a534: 0xe4600090  swc1        $f0, 0x90($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A538u;
        goto label_38a538;
    }
    ctx->pc = 0x38A530u;
    {
        const bool branch_taken_0x38a530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A530u;
        // 0x38a534: 0xe4600090  swc1        $f0, 0x90($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a530) {
            ctx->pc = 0x38A55Cu;
            goto label_38a55c;
        }
    }
    ctx->pc = 0x38A538u;
label_38a538:
    // 0x38a538: 0x92a20001  lbu         $v0, 0x1($s5)
    ctx->pc = 0x38a538u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
label_38a53c:
    // 0x38a53c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x38a53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_38a540:
    // 0x38a540: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38a540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_38a544:
    // 0x38a544: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38a544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38a548:
    // 0x38a548: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_38a54c:
    if (ctx->pc == 0x38A54Cu) {
        ctx->pc = 0x38A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A548u;
        // 0x38a54c: 0xe4600090  swc1        $f0, 0x90($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A550u;
        goto label_38a550;
    }
    ctx->pc = 0x38A548u;
    {
        const bool branch_taken_0x38a548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38a548) {
            ctx->pc = 0x38A54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38A548u;
            // 0x38a54c: 0xe4600090  swc1        $f0, 0x90($v1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x38A55Cu;
            goto label_38a55c;
        }
    }
    ctx->pc = 0x38A550u;
label_38a550:
    // 0x38a550: 0xc4600090  lwc1        $f0, 0x90($v1)
    ctx->pc = 0x38a550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38a554:
    // 0x38a554: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x38a554u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_38a558:
    // 0x38a558: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x38a558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
label_38a55c:
    // 0x38a55c: 0xc4600090  lwc1        $f0, 0x90($v1)
    ctx->pc = 0x38a55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38a560:
    // 0x38a560: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38a560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_38a564:
    // 0x38a564: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x38a564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38a568:
    // 0x38a568: 0x0  nop
    ctx->pc = 0x38a568u;
    // NOP
label_38a56c:
    // 0x38a56c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x38a56cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38a570:
    // 0x38a570: 0x0  nop
    ctx->pc = 0x38a570u;
    // NOP
label_38a574:
    // 0x38a574: 0x45000091  bc1f        . + 4 + (0x91 << 2)
label_38a578:
    if (ctx->pc == 0x38A578u) {
        ctx->pc = 0x38A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A574u;
        // 0x38a578: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A57Cu;
        goto label_38a57c;
    }
    ctx->pc = 0x38A574u;
    {
        const bool branch_taken_0x38a574 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x38A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A574u;
        // 0x38a578: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a574) {
            ctx->pc = 0x38A7BCu;
            goto label_38a7bc;
        }
    }
    ctx->pc = 0x38A57Cu;
label_38a57c:
    // 0x38a57c: 0xe4610090  swc1        $f1, 0x90($v1)
    ctx->pc = 0x38a57cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
label_38a580:
    // 0x38a580: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38a580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38a584:
    // 0x38a584: 0x8e4211f8  lw          $v0, 0x11F8($s2)
    ctx->pc = 0x38a584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4600)));
label_38a588:
    // 0x38a588: 0x2631804  sllv        $v1, $v1, $s3
    ctx->pc = 0x38a588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 19) & 0x1F));
label_38a58c:
    // 0x38a58c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x38a58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_38a590:
    // 0x38a590: 0x16800020  bnez        $s4, . + 4 + (0x20 << 2)
label_38a594:
    if (ctx->pc == 0x38A594u) {
        ctx->pc = 0x38A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A590u;
        // 0x38a594: 0xae4211f8  sw          $v0, 0x11F8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A598u;
        goto label_38a598;
    }
    ctx->pc = 0x38A590u;
    {
        const bool branch_taken_0x38a590 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x38A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A590u;
        // 0x38a594: 0xae4211f8  sw          $v0, 0x11F8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a590) {
            ctx->pc = 0x38A614u;
            goto label_38a614;
        }
    }
    ctx->pc = 0x38A598u;
label_38a598:
    // 0x38a598: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x38a598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_38a59c:
    // 0x38a59c: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
label_38a5a0:
    if (ctx->pc == 0x38A5A0u) {
        ctx->pc = 0x38A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A59Cu;
        // 0x38a5a0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A5A4u;
        goto label_38a5a4;
    }
    ctx->pc = 0x38A59Cu;
    {
        const bool branch_taken_0x38a59c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x38A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A59Cu;
        // 0x38a5a0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a59c) {
            ctx->pc = 0x38A5BCu;
            goto label_38a5bc;
        }
    }
    ctx->pc = 0x38A5A4u;
label_38a5a4:
    // 0x38a5a4: 0x12620005  beq         $s3, $v0, . + 4 + (0x5 << 2)
label_38a5a8:
    if (ctx->pc == 0x38A5A8u) {
        ctx->pc = 0x38A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A5A4u;
        // 0x38a5a8: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A5ACu;
        goto label_38a5ac;
    }
    ctx->pc = 0x38A5A4u;
    {
        const bool branch_taken_0x38a5a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x38A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A5A4u;
        // 0x38a5a8: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a5a4) {
            ctx->pc = 0x38A5BCu;
            goto label_38a5bc;
        }
    }
    ctx->pc = 0x38A5ACu;
label_38a5ac:
    // 0x38a5ac: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_38a5b0:
    if (ctx->pc == 0x38A5B0u) {
        ctx->pc = 0x38A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A5ACu;
        // 0x38a5b0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A5B4u;
        goto label_38a5b4;
    }
    ctx->pc = 0x38A5ACu;
    {
        const bool branch_taken_0x38a5ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x38A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A5ACu;
        // 0x38a5b0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a5ac) {
            ctx->pc = 0x38A5BCu;
            goto label_38a5bc;
        }
    }
    ctx->pc = 0x38A5B4u;
label_38a5b4:
    // 0x38a5b4: 0x16620018  bne         $s3, $v0, . + 4 + (0x18 << 2)
label_38a5b8:
    if (ctx->pc == 0x38A5B8u) {
        ctx->pc = 0x38A5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A5B4u;
        // 0x38a5b8: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A5BCu;
        goto label_38a5bc;
    }
    ctx->pc = 0x38A5B4u;
    {
        const bool branch_taken_0x38a5b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x38A5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A5B4u;
        // 0x38a5b8: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a5b4) {
            ctx->pc = 0x38A618u;
            goto label_38a618;
        }
    }
    ctx->pc = 0x38A5BCu;
label_38a5bc:
    // 0x38a5bc: 0x26660001  addiu       $a2, $s3, 0x1
    ctx->pc = 0x38a5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_38a5c0:
    // 0x38a5c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38a5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38a5c4:
    // 0x38a5c4: 0x8e4311f8  lw          $v1, 0x11F8($s2)
    ctx->pc = 0x38a5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4600)));
label_38a5c8:
    // 0x38a5c8: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x38a5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
label_38a5cc:
    // 0x38a5cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x38a5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_38a5d0:
    // 0x38a5d0: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_38a5d4:
    if (ctx->pc == 0x38A5D4u) {
        ctx->pc = 0x38A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A5D0u;
        // 0x38a5d4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A5D8u;
        goto label_38a5d8;
    }
    ctx->pc = 0x38A5D0u;
    {
        const bool branch_taken_0x38a5d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A5D0u;
        // 0x38a5d4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a5d0) {
            ctx->pc = 0x38A618u;
            goto label_38a618;
        }
    }
    ctx->pc = 0x38A5D8u;
label_38a5d8:
    // 0x38a5d8: 0x8e4511e0  lw          $a1, 0x11E0($s2)
    ctx->pc = 0x38a5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4576)));
label_38a5dc:
    // 0x38a5dc: 0x240405f0  addiu       $a0, $zero, 0x5F0
    ctx->pc = 0x38a5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
label_38a5e0:
    // 0x38a5e0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x38a5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_38a5e4:
    // 0x38a5e4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x38a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_38a5e8:
    // 0x38a5e8: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x38a5e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_38a5ec:
    // 0x38a5ec: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x38a5ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_38a5f0:
    // 0x38a5f0: 0x2442e5b0  addiu       $v0, $v0, -0x1A50
    ctx->pc = 0x38a5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960560));
label_38a5f4:
    // 0x38a5f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38a5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_38a5f8:
    // 0x38a5f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x38a5f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38a5fc:
    // 0x38a5fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38a5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38a600:
    // 0x38a600: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38a600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38a604:
    // 0x38a604: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38a604u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38a608:
    // 0x38a608: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x38a608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_38a60c:
    // 0x38a60c: 0xc0e2936  jal         func_38A4D8
label_38a610:
    if (ctx->pc == 0x38A610u) {
        ctx->pc = 0x38A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A60Cu;
        // 0x38a610: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A614u;
        goto label_38a614;
    }
    ctx->pc = 0x38A60Cu;
    SET_GPR_U32(ctx, 31, 0x38A614u);
    ctx->pc = 0x38A610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A60Cu;
    // 0x38a610: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A4D8u;
    goto label_38a4d8;
    ctx->pc = 0x38A614u;
label_38a614:
    // 0x38a614: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x38a614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_38a618:
    // 0x38a618: 0x56620018  bnel        $s3, $v0, . + 4 + (0x18 << 2)
label_38a61c:
    if (ctx->pc == 0x38A61Cu) {
        ctx->pc = 0x38A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A618u;
        // 0x38a61c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A620u;
        goto label_38a620;
    }
    ctx->pc = 0x38A618u;
    {
        const bool branch_taken_0x38a618 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x38a618) {
            ctx->pc = 0x38A61Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38A618u;
            // 0x38a61c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38A67Cu;
            goto label_38a67c;
        }
    }
    ctx->pc = 0x38A620u;
label_38a620:
    // 0x38a620: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38a620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38a624:
    // 0x38a624: 0x8e441204  lw          $a0, 0x1204($s2)
    ctx->pc = 0x38a624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4612)));
label_38a628:
    // 0x38a628: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x38a628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_38a62c:
    // 0x38a62c: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
label_38a630:
    if (ctx->pc == 0x38A630u) {
        ctx->pc = 0x38A630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A62Cu;
        // 0x38a630: 0x26421204  addiu       $v0, $s2, 0x1204 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4612));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A634u;
        goto label_38a634;
    }
    ctx->pc = 0x38A62Cu;
    {
        const bool branch_taken_0x38a62c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x38A630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A62Cu;
        // 0x38a630: 0x26421204  addiu       $v0, $s2, 0x1204 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4612));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a62c) {
            ctx->pc = 0x38A678u;
            goto label_38a678;
        }
    }
    ctx->pc = 0x38A634u;
label_38a634:
    // 0x38a634: 0xc0e4060  jal         func_390180
label_38a638:
    if (ctx->pc == 0x38A638u) {
        ctx->pc = 0x38A638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A634u;
        // 0x38a638: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A63Cu;
        goto label_38a63c;
    }
    ctx->pc = 0x38A634u;
    SET_GPR_U32(ctx, 31, 0x38A63Cu);
    ctx->pc = 0x38A638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A634u;
    // 0x38a638: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x38A634u, 0x38A63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A63Cu;
label_38a63c:
    // 0x38a63c: 0xc0e57ce  jal         func_395F38
label_38a640:
    if (ctx->pc == 0x38A640u) {
        ctx->pc = 0x38A640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A63Cu;
        // 0x38a640: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A644u;
        goto label_38a644;
    }
    ctx->pc = 0x38A63Cu;
    SET_GPR_U32(ctx, 31, 0x38A644u);
    ctx->pc = 0x38A640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A63Cu;
    // 0x38a640: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x38A63Cu, 0x38A644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A644u;
label_38a644:
    // 0x38a644: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x38a644u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38a648:
    // 0x38a648: 0x1100000b  beqz        $t0, . + 4 + (0xB << 2)
label_38a64c:
    if (ctx->pc == 0x38A64Cu) {
        ctx->pc = 0x38A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A648u;
        // 0x38a64c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A650u;
        goto label_38a650;
    }
    ctx->pc = 0x38A648u;
    {
        const bool branch_taken_0x38a648 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A648u;
        // 0x38a64c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a648) {
            ctx->pc = 0x38A678u;
            goto label_38a678;
        }
    }
    ctx->pc = 0x38A650u;
label_38a650:
    // 0x38a650: 0x8d020054  lw          $v0, 0x54($t0)
    ctx->pc = 0x38a650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
label_38a654:
    // 0x38a654: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x38a654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_38a658:
    // 0x38a658: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38a658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38a65c:
    // 0x38a65c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x38a65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_38a660:
    // 0x38a660: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38a660u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38a664:
    // 0x38a664: 0xad020054  sw          $v0, 0x54($t0)
    ctx->pc = 0x38a664u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 84), GPR_U32(ctx, 2));
label_38a668:
    // 0x38a668: 0x84640120  lh          $a0, 0x120($v1)
    ctx->pc = 0x38a668u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 288)));
label_38a66c:
    // 0x38a66c: 0x8c620124  lw          $v0, 0x124($v1)
    ctx->pc = 0x38a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
label_38a670:
    // 0x38a670: 0x40f809  jalr        $v0
label_38a674:
    if (ctx->pc == 0x38A674u) {
        ctx->pc = 0x38A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A670u;
        // 0x38a674: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A678u;
        goto label_38a678;
    }
    ctx->pc = 0x38A670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38A678u);
        ctx->pc = 0x38A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A670u;
        // 0x38a674: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A670u, 0x38A678u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38A678u;
label_38a678:
    // 0x38a678: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38a678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38a67c:
    // 0x38a67c: 0x1662001c  bne         $s3, $v0, . + 4 + (0x1C << 2)
label_38a680:
    if (ctx->pc == 0x38A680u) {
        ctx->pc = 0x38A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A67Cu;
        // 0x38a680: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A684u;
        goto label_38a684;
    }
    ctx->pc = 0x38A67Cu;
    {
        const bool branch_taken_0x38a67c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x38A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A67Cu;
        // 0x38a680: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a67c) {
            ctx->pc = 0x38A6F0u;
            goto label_38a6f0;
        }
    }
    ctx->pc = 0x38A684u;
label_38a684:
    // 0x38a684: 0x3c16006f  lui         $s6, 0x6F
    ctx->pc = 0x38a684u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)111 << 16));
label_38a688:
    // 0x38a688: 0x8e431210  lw          $v1, 0x1210($s2)
    ctx->pc = 0x38a688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4624)));
label_38a68c:
    // 0x38a68c: 0x8ec2bd30  lw          $v0, -0x42D0($s6)
    ctx->pc = 0x38a68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950192)));
label_38a690:
    // 0x38a690: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_38a694:
    if (ctx->pc == 0x38A694u) {
        ctx->pc = 0x38A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A690u;
        // 0x38a694: 0x26441210  addiu       $a0, $s2, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A698u;
        goto label_38a698;
    }
    ctx->pc = 0x38A690u;
    {
        const bool branch_taken_0x38a690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A690u;
        // 0x38a694: 0x26441210  addiu       $a0, $s2, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a690) {
            ctx->pc = 0x38A6ECu;
            goto label_38a6ec;
        }
    }
    ctx->pc = 0x38A698u;
label_38a698:
    // 0x38a698: 0xc0e4060  jal         func_390180
label_38a69c:
    if (ctx->pc == 0x38A69Cu) {
        ctx->pc = 0x38A6A0u;
        goto label_38a6a0;
    }
    ctx->pc = 0x38A698u;
    SET_GPR_U32(ctx, 31, 0x38A6A0u);
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x38A698u, 0x38A6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A6A0u;
label_38a6a0:
    // 0x38a6a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x38a6a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38a6a4:
    // 0x38a6a4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_38a6a8:
    if (ctx->pc == 0x38A6A8u) {
        ctx->pc = 0x38A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A6A4u;
        // 0x38a6a8: 0x8ec2bd30  lw          $v0, -0x42D0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A6ACu;
        goto label_38a6ac;
    }
    ctx->pc = 0x38A6A4u;
    {
        const bool branch_taken_0x38a6a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A6A4u;
        // 0x38a6a8: 0x8ec2bd30  lw          $v0, -0x42D0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a6a4) {
            ctx->pc = 0x38A6E8u;
            goto label_38a6e8;
        }
    }
    ctx->pc = 0x38A6ACu;
label_38a6ac:
    // 0x38a6ac: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x38a6acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_38a6b0:
    // 0x38a6b0: 0xc0e8b48  jal         func_3A2D20
label_38a6b4:
    if (ctx->pc == 0x38A6B4u) {
        ctx->pc = 0x38A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A6B0u;
        // 0x38a6b4: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A6B8u;
        goto label_38a6b8;
    }
    ctx->pc = 0x38A6B0u;
    SET_GPR_U32(ctx, 31, 0x38A6B8u);
    ctx->pc = 0x38A6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A6B0u;
    // 0x38a6b4: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x38A6B0u, 0x38A6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A6B8u;
label_38a6b8:
    // 0x38a6b8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x38a6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_38a6bc:
    // 0x38a6bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38a6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38a6c0:
    // 0x38a6c0: 0xc0e8b80  jal         func_3A2E00
label_38a6c4:
    if (ctx->pc == 0x38A6C4u) {
        ctx->pc = 0x38A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A6C0u;
        // 0x38a6c4: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A6C8u;
        goto label_38a6c8;
    }
    ctx->pc = 0x38A6C0u;
    SET_GPR_U32(ctx, 31, 0x38A6C8u);
    ctx->pc = 0x38A6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A6C0u;
    // 0x38a6c4: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x38A6C0u, 0x38A6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A6C8u;
label_38a6c8:
    // 0x38a6c8: 0xc0e8b50  jal         func_3A2D40
label_38a6cc:
    if (ctx->pc == 0x38A6CCu) {
        ctx->pc = 0x38A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A6C8u;
        // 0x38a6cc: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A6D0u;
        goto label_38a6d0;
    }
    ctx->pc = 0x38A6C8u;
    SET_GPR_U32(ctx, 31, 0x38A6D0u);
    ctx->pc = 0x38A6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A6C8u;
    // 0x38a6cc: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x38A6C8u, 0x38A6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A6D0u;
label_38a6d0:
    // 0x38a6d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x38a6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38a6d4:
    // 0x38a6d4: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x38a6d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_38a6d8:
    // 0x38a6d8: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x38a6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_38a6dc:
    // 0x38a6dc: 0x60f809  jalr        $v1
label_38a6e0:
    if (ctx->pc == 0x38A6E0u) {
        ctx->pc = 0x38A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A6DCu;
        // 0x38a6e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A6E4u;
        goto label_38a6e4;
    }
    ctx->pc = 0x38A6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38A6E4u);
        ctx->pc = 0x38A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A6DCu;
        // 0x38a6e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A6DCu, 0x38A6E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38A6E4u;
label_38a6e4:
    // 0x38a6e4: 0x8ec2bd30  lw          $v0, -0x42D0($s6)
    ctx->pc = 0x38a6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950192)));
label_38a6e8:
    // 0x38a6e8: 0xae421210  sw          $v0, 0x1210($s2)
    ctx->pc = 0x38a6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4624), GPR_U32(ctx, 2));
label_38a6ec:
    // 0x38a6ec: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x38a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_38a6f0:
    // 0x38a6f0: 0x16620009  bne         $s3, $v0, . + 4 + (0x9 << 2)
label_38a6f4:
    if (ctx->pc == 0x38A6F4u) {
        ctx->pc = 0x38A6F8u;
        goto label_38a6f8;
    }
    ctx->pc = 0x38A6F0u;
    {
        const bool branch_taken_0x38a6f0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x38a6f0) {
            ctx->pc = 0x38A718u;
            goto label_38a718;
        }
    }
    ctx->pc = 0x38A6F8u;
label_38a6f8:
    // 0x38a6f8: 0x5680000a  bnel        $s4, $zero, . + 4 + (0xA << 2)
label_38a6fc:
    if (ctx->pc == 0x38A6FCu) {
        ctx->pc = 0x38A6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A6F8u;
        // 0x38a6fc: 0x92a20001  lbu         $v0, 0x1($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A700u;
        goto label_38a700;
    }
    ctx->pc = 0x38A6F8u;
    {
        const bool branch_taken_0x38a6f8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x38a6f8) {
            ctx->pc = 0x38A6FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38A6F8u;
            // 0x38a6fc: 0x92a20001  lbu         $v0, 0x1($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38A724u;
            goto label_38a724;
        }
    }
    ctx->pc = 0x38A700u;
label_38a700:
    // 0x38a700: 0x924212e4  lbu         $v0, 0x12E4($s2)
    ctx->pc = 0x38a700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4836)));
label_38a704:
    // 0x38a704: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_38a708:
    if (ctx->pc == 0x38A708u) {
        ctx->pc = 0x38A70Cu;
        goto label_38a70c;
    }
    ctx->pc = 0x38A704u;
    {
        const bool branch_taken_0x38a704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a704) {
            ctx->pc = 0x38A718u;
            goto label_38a718;
        }
    }
    ctx->pc = 0x38A70Cu;
label_38a70c:
    // 0x38a70c: 0xa24012e4  sb          $zero, 0x12E4($s2)
    ctx->pc = 0x38a70cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4836), (uint8_t)GPR_U32(ctx, 0));
label_38a710:
    // 0x38a710: 0xc0e3462  jal         func_38D188
label_38a714:
    if (ctx->pc == 0x38A714u) {
        ctx->pc = 0x38A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A710u;
        // 0x38a714: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A718u;
        goto label_38a718;
    }
    ctx->pc = 0x38A710u;
    SET_GPR_U32(ctx, 31, 0x38A718u);
    ctx->pc = 0x38A714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A710u;
    // 0x38a714: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D188u, 0x38A710u, 0x38A718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A718u;
label_38a718:
    // 0x38a718: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_38a71c:
    if (ctx->pc == 0x38A71Cu) {
        ctx->pc = 0x38A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A718u;
        // 0x38a71c: 0x92a30001  lbu         $v1, 0x1($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A720u;
        goto label_38a720;
    }
    ctx->pc = 0x38A718u;
    {
        const bool branch_taken_0x38a718 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A718u;
        // 0x38a71c: 0x92a30001  lbu         $v1, 0x1($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a718) {
            ctx->pc = 0x38A73Cu;
            goto label_38a73c;
        }
    }
    ctx->pc = 0x38A720u;
label_38a720:
    // 0x38a720: 0x92a20001  lbu         $v0, 0x1($s5)
    ctx->pc = 0x38a720u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
label_38a724:
    // 0x38a724: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x38a724u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38a728:
    // 0x38a728: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x38a728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_38a72c:
    // 0x38a72c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_38a730:
    if (ctx->pc == 0x38A730u) {
        ctx->pc = 0x38A734u;
        goto label_38a734;
    }
    ctx->pc = 0x38A72Cu;
    {
        const bool branch_taken_0x38a72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38a72c) {
            ctx->pc = 0x38A748u;
            goto label_38a748;
        }
    }
    ctx->pc = 0x38A734u;
label_38a734:
    // 0x38a734: 0x56800021  bnel        $s4, $zero, . + 4 + (0x21 << 2)
label_38a738:
    if (ctx->pc == 0x38A738u) {
        ctx->pc = 0x38A738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A734u;
        // 0x38a738: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A73Cu;
        goto label_38a73c;
    }
    ctx->pc = 0x38A734u;
    {
        const bool branch_taken_0x38a734 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x38a734) {
            ctx->pc = 0x38A738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38A734u;
            // 0x38a738: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38A7BCu;
            goto label_38a7bc;
        }
    }
    ctx->pc = 0x38A73Cu;
label_38a73c:
    // 0x38a73c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x38a73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_38a740:
    // 0x38a740: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
label_38a744:
    if (ctx->pc == 0x38A744u) {
        ctx->pc = 0x38A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A740u;
        // 0x38a744: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A748u;
        goto label_38a748;
    }
    ctx->pc = 0x38A740u;
    {
        const bool branch_taken_0x38a740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a740) {
            ctx->pc = 0x38A744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38A740u;
            // 0x38a744: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38A7BCu;
            goto label_38a7bc;
        }
    }
    ctx->pc = 0x38A748u;
label_38a748:
    // 0x38a748: 0x12e00009  beqz        $s7, . + 4 + (0x9 << 2)
label_38a74c:
    if (ctx->pc == 0x38A74Cu) {
        ctx->pc = 0x38A74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A748u;
        // 0x38a74c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A750u;
        goto label_38a750;
    }
    ctx->pc = 0x38A748u;
    {
        const bool branch_taken_0x38a748 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A748u;
        // 0x38a74c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a748) {
            ctx->pc = 0x38A770u;
            goto label_38a770;
        }
    }
    ctx->pc = 0x38A750u;
label_38a750:
    // 0x38a750: 0x8e4211f8  lw          $v0, 0x11F8($s2)
    ctx->pc = 0x38a750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4600)));
label_38a754:
    // 0x38a754: 0x8e4411f0  lw          $a0, 0x11F0($s2)
    ctx->pc = 0x38a754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4592)));
label_38a758:
    // 0x38a758: 0x2631804  sllv        $v1, $v1, $s3
    ctx->pc = 0x38a758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 19) & 0x1F));
label_38a75c:
    // 0x38a75c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x38a75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_38a760:
    // 0x38a760: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x38a760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_38a764:
    // 0x38a764: 0xae4211f8  sw          $v0, 0x11F8($s2)
    ctx->pc = 0x38a764u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4600), GPR_U32(ctx, 2));
label_38a768:
    // 0x38a768: 0x10000013  b           . + 4 + (0x13 << 2)
label_38a76c:
    if (ctx->pc == 0x38A76Cu) {
        ctx->pc = 0x38A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A768u;
        // 0x38a76c: 0xae4411f0  sw          $a0, 0x11F0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4592), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A770u;
        goto label_38a770;
    }
    ctx->pc = 0x38A768u;
    {
        const bool branch_taken_0x38a768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A768u;
        // 0x38a76c: 0xae4411f0  sw          $a0, 0x11F0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4592), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a768) {
            ctx->pc = 0x38A7B8u;
            goto label_38a7b8;
        }
    }
    ctx->pc = 0x38A770u;
label_38a770:
    // 0x38a770: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x38a770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_38a774:
    // 0x38a774: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x38a774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38a778:
    // 0x38a778: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38a778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38a77c:
    // 0x38a77c: 0xc0e2804  jal         func_38A010
label_38a780:
    if (ctx->pc == 0x38A780u) {
        ctx->pc = 0x38A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A77Cu;
        // 0x38a780: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A784u;
        goto label_38a784;
    }
    ctx->pc = 0x38A77Cu;
    SET_GPR_U32(ctx, 31, 0x38A784u);
    ctx->pc = 0x38A780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A77Cu;
    // 0x38a780: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A010u, 0x38A77Cu, 0x38A784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A784u;
label_38a784:
    // 0x38a784: 0x1680000d  bnez        $s4, . + 4 + (0xD << 2)
label_38a788:
    if (ctx->pc == 0x38A788u) {
        ctx->pc = 0x38A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A784u;
        // 0x38a788: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A78Cu;
        goto label_38a78c;
    }
    ctx->pc = 0x38A784u;
    {
        const bool branch_taken_0x38a784 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x38A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A784u;
        // 0x38a788: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a784) {
            ctx->pc = 0x38A7BCu;
            goto label_38a7bc;
        }
    }
    ctx->pc = 0x38A78Cu;
label_38a78c:
    // 0x38a78c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38a78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38a790:
    // 0x38a790: 0xc0e858c  jal         func_3A1630
label_38a794:
    if (ctx->pc == 0x38A794u) {
        ctx->pc = 0x38A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A790u;
        // 0x38a794: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A798u;
        goto label_38a798;
    }
    ctx->pc = 0x38A790u;
    SET_GPR_U32(ctx, 31, 0x38A798u);
    ctx->pc = 0x38A794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A790u;
    // 0x38a794: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x38A790u, 0x38A798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A798u;
label_38a798:
    // 0x38a798: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x38a798u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_38a79c:
    // 0x38a79c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x38a79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_38a7a0:
    // 0x38a7a0: 0xc0e8cda  jal         func_3A3368
label_38a7a4:
    if (ctx->pc == 0x38A7A4u) {
        ctx->pc = 0x38A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A7A0u;
        // 0x38a7a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A7A8u;
        goto label_38a7a8;
    }
    ctx->pc = 0x38A7A0u;
    SET_GPR_U32(ctx, 31, 0x38A7A8u);
    ctx->pc = 0x38A7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A7A0u;
    // 0x38a7a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3368u, 0x38A7A0u, 0x38A7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A7A8u;
label_38a7a8:
    // 0x38a7a8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x38a7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_38a7ac:
    // 0x38a7ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38a7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38a7b0:
    // 0x38a7b0: 0xc0e8cbc  jal         func_3A32F0
label_38a7b4:
    if (ctx->pc == 0x38A7B4u) {
        ctx->pc = 0x38A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A7B0u;
        // 0x38a7b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A7B8u;
        goto label_38a7b8;
    }
    ctx->pc = 0x38A7B0u;
    SET_GPR_U32(ctx, 31, 0x38A7B8u);
    ctx->pc = 0x38A7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A7B0u;
    // 0x38a7b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x38A7B0u, 0x38A7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A7B8u;
label_38a7b8:
    // 0x38a7b8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x38a7b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_38a7bc:
    // 0x38a7bc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x38a7bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_38a7c0:
    // 0x38a7c0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x38a7c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_38a7c4:
    // 0x38a7c4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x38a7c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38a7c8:
    // 0x38a7c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x38a7c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38a7cc:
    // 0x38a7cc: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x38a7ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38a7d0:
    // 0x38a7d0: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x38a7d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38a7d4:
    // 0x38a7d4: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x38a7d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38a7d8:
    // 0x38a7d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38a7dc:
    // 0x38a7dc: 0x3e00008  jr          $ra
label_38a7e0:
    if (ctx->pc == 0x38A7E0u) {
        ctx->pc = 0x38A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A7DCu;
        // 0x38a7e0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A7E4u;
        goto label_38a7e4;
    }
    ctx->pc = 0x38A7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A7DCu;
        // 0x38a7e0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A7E4u;
label_38a7e4:
    // 0x38a7e4: 0x0  nop
    ctx->pc = 0x38a7e4u;
    // NOP
    ctx->pc = 0x38a7e8u;
}
