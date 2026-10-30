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

// Function: sub_0027A4B0
// Address: 0x27a4b0 - 0x27a6c0
void sub_0027A4B0_0x27a4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A4B0_0x27a4b0");
#endif

    switch (ctx->pc) {
        case 0x27a4b0u: goto label_27a4b0;
        case 0x27a4b4u: goto label_27a4b4;
        case 0x27a4b8u: goto label_27a4b8;
        case 0x27a4bcu: goto label_27a4bc;
        case 0x27a4c0u: goto label_27a4c0;
        case 0x27a4c4u: goto label_27a4c4;
        case 0x27a4c8u: goto label_27a4c8;
        case 0x27a4ccu: goto label_27a4cc;
        case 0x27a4d0u: goto label_27a4d0;
        case 0x27a4d4u: goto label_27a4d4;
        case 0x27a4d8u: goto label_27a4d8;
        case 0x27a4dcu: goto label_27a4dc;
        case 0x27a4e0u: goto label_27a4e0;
        case 0x27a4e4u: goto label_27a4e4;
        case 0x27a4e8u: goto label_27a4e8;
        case 0x27a4ecu: goto label_27a4ec;
        case 0x27a4f0u: goto label_27a4f0;
        case 0x27a4f4u: goto label_27a4f4;
        case 0x27a4f8u: goto label_27a4f8;
        case 0x27a4fcu: goto label_27a4fc;
        case 0x27a500u: goto label_27a500;
        case 0x27a504u: goto label_27a504;
        case 0x27a508u: goto label_27a508;
        case 0x27a50cu: goto label_27a50c;
        case 0x27a510u: goto label_27a510;
        case 0x27a514u: goto label_27a514;
        case 0x27a518u: goto label_27a518;
        case 0x27a51cu: goto label_27a51c;
        case 0x27a520u: goto label_27a520;
        case 0x27a524u: goto label_27a524;
        case 0x27a528u: goto label_27a528;
        case 0x27a52cu: goto label_27a52c;
        case 0x27a530u: goto label_27a530;
        case 0x27a534u: goto label_27a534;
        case 0x27a538u: goto label_27a538;
        case 0x27a53cu: goto label_27a53c;
        case 0x27a540u: goto label_27a540;
        case 0x27a544u: goto label_27a544;
        case 0x27a548u: goto label_27a548;
        case 0x27a54cu: goto label_27a54c;
        case 0x27a550u: goto label_27a550;
        case 0x27a554u: goto label_27a554;
        case 0x27a558u: goto label_27a558;
        case 0x27a55cu: goto label_27a55c;
        case 0x27a560u: goto label_27a560;
        case 0x27a564u: goto label_27a564;
        case 0x27a568u: goto label_27a568;
        case 0x27a56cu: goto label_27a56c;
        case 0x27a570u: goto label_27a570;
        case 0x27a574u: goto label_27a574;
        case 0x27a578u: goto label_27a578;
        case 0x27a57cu: goto label_27a57c;
        case 0x27a580u: goto label_27a580;
        case 0x27a584u: goto label_27a584;
        case 0x27a588u: goto label_27a588;
        case 0x27a58cu: goto label_27a58c;
        case 0x27a590u: goto label_27a590;
        case 0x27a594u: goto label_27a594;
        case 0x27a598u: goto label_27a598;
        case 0x27a59cu: goto label_27a59c;
        case 0x27a5a0u: goto label_27a5a0;
        case 0x27a5a4u: goto label_27a5a4;
        case 0x27a5a8u: goto label_27a5a8;
        case 0x27a5acu: goto label_27a5ac;
        case 0x27a5b0u: goto label_27a5b0;
        case 0x27a5b4u: goto label_27a5b4;
        case 0x27a5b8u: goto label_27a5b8;
        case 0x27a5bcu: goto label_27a5bc;
        case 0x27a5c0u: goto label_27a5c0;
        case 0x27a5c4u: goto label_27a5c4;
        case 0x27a5c8u: goto label_27a5c8;
        case 0x27a5ccu: goto label_27a5cc;
        case 0x27a5d0u: goto label_27a5d0;
        case 0x27a5d4u: goto label_27a5d4;
        case 0x27a5d8u: goto label_27a5d8;
        case 0x27a5dcu: goto label_27a5dc;
        case 0x27a5e0u: goto label_27a5e0;
        case 0x27a5e4u: goto label_27a5e4;
        case 0x27a5e8u: goto label_27a5e8;
        case 0x27a5ecu: goto label_27a5ec;
        case 0x27a5f0u: goto label_27a5f0;
        case 0x27a5f4u: goto label_27a5f4;
        case 0x27a5f8u: goto label_27a5f8;
        case 0x27a5fcu: goto label_27a5fc;
        case 0x27a600u: goto label_27a600;
        case 0x27a604u: goto label_27a604;
        case 0x27a608u: goto label_27a608;
        case 0x27a60cu: goto label_27a60c;
        case 0x27a610u: goto label_27a610;
        case 0x27a614u: goto label_27a614;
        case 0x27a618u: goto label_27a618;
        case 0x27a61cu: goto label_27a61c;
        case 0x27a620u: goto label_27a620;
        case 0x27a624u: goto label_27a624;
        case 0x27a628u: goto label_27a628;
        case 0x27a62cu: goto label_27a62c;
        case 0x27a630u: goto label_27a630;
        case 0x27a634u: goto label_27a634;
        case 0x27a638u: goto label_27a638;
        case 0x27a63cu: goto label_27a63c;
        case 0x27a640u: goto label_27a640;
        case 0x27a644u: goto label_27a644;
        case 0x27a648u: goto label_27a648;
        case 0x27a64cu: goto label_27a64c;
        case 0x27a650u: goto label_27a650;
        case 0x27a654u: goto label_27a654;
        case 0x27a658u: goto label_27a658;
        case 0x27a65cu: goto label_27a65c;
        case 0x27a660u: goto label_27a660;
        case 0x27a664u: goto label_27a664;
        case 0x27a668u: goto label_27a668;
        case 0x27a66cu: goto label_27a66c;
        case 0x27a670u: goto label_27a670;
        case 0x27a674u: goto label_27a674;
        case 0x27a678u: goto label_27a678;
        case 0x27a67cu: goto label_27a67c;
        case 0x27a680u: goto label_27a680;
        case 0x27a684u: goto label_27a684;
        case 0x27a688u: goto label_27a688;
        case 0x27a68cu: goto label_27a68c;
        case 0x27a690u: goto label_27a690;
        case 0x27a694u: goto label_27a694;
        case 0x27a698u: goto label_27a698;
        case 0x27a69cu: goto label_27a69c;
        case 0x27a6a0u: goto label_27a6a0;
        case 0x27a6a4u: goto label_27a6a4;
        case 0x27a6a8u: goto label_27a6a8;
        case 0x27a6acu: goto label_27a6ac;
        case 0x27a6b0u: goto label_27a6b0;
        case 0x27a6b4u: goto label_27a6b4;
        case 0x27a6b8u: goto label_27a6b8;
        case 0x27a6bcu: goto label_27a6bc;
        default: break;
    }

    ctx->pc = 0x27a4b0u;

label_27a4b0:
    // 0x27a4b0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x27a4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_27a4b4:
    // 0x27a4b4: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x27a4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
label_27a4b8:
    // 0x27a4b8: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x27a4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
label_27a4bc:
    // 0x27a4bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x27a4bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27a4c0:
    // 0x27a4c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27a4c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27a4c4:
    // 0x27a4c4: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x27a4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
label_27a4c8:
    // 0x27a4c8: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x27a4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
label_27a4cc:
    // 0x27a4cc: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x27a4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
label_27a4d0:
    // 0x27a4d0: 0xe7b40170  swc1        $f20, 0x170($sp)
    ctx->pc = 0x27a4d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_27a4d4:
    // 0x27a4d4: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x27a4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
label_27a4d8:
    // 0x27a4d8: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x27a4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_27a4dc:
    // 0x27a4dc: 0xc095142  jal         func_254508
label_27a4e0:
    if (ctx->pc == 0x27A4E0u) {
        ctx->pc = 0x27A4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A4DCu;
        // 0x27a4e0: 0x26320090  addiu       $s2, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A4E4u;
        goto label_27a4e4;
    }
    ctx->pc = 0x27A4DCu;
    SET_GPR_U32(ctx, 31, 0x27A4E4u);
    ctx->pc = 0x27A4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A4DCu;
    // 0x27a4e0: 0x26320090  addiu       $s2, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254508u, 0x27A4DCu, 0x27A4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A4E4u;
label_27a4e4:
    // 0x27a4e4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27a4e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_27a4e8:
    // 0x27a4e8: 0xc089baa  jal         func_226EA8
label_27a4ec:
    if (ctx->pc == 0x27A4ECu) {
        ctx->pc = 0x27A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A4E8u;
        // 0x27a4ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A4F0u;
        goto label_27a4f0;
    }
    ctx->pc = 0x27A4E8u;
    SET_GPR_U32(ctx, 31, 0x27A4F0u);
    ctx->pc = 0x27A4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A4E8u;
    // 0x27a4ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226EA8u, 0x27A4E8u, 0x27A4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A4F0u;
label_27a4f0:
    // 0x27a4f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27a4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27a4f4:
    // 0x27a4f4: 0xc089b98  jal         func_226E60
label_27a4f8:
    if (ctx->pc == 0x27A4F8u) {
        ctx->pc = 0x27A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A4F4u;
        // 0x27a4f8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A4FCu;
        goto label_27a4fc;
    }
    ctx->pc = 0x27A4F4u;
    SET_GPR_U32(ctx, 31, 0x27A4FCu);
    ctx->pc = 0x27A4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A4F4u;
    // 0x27a4f8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27A4F4u, 0x27A4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A4FCu;
label_27a4fc:
    // 0x27a4fc: 0x3c013f71  lui         $at, 0x3F71
    ctx->pc = 0x27a4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16241 << 16));
label_27a500:
    // 0x27a500: 0x3421463b  ori         $at, $at, 0x463B
    ctx->pc = 0x27a500u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17979);
label_27a504:
    // 0x27a504: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27a504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27a508:
    // 0x27a508: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x27a508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_27a50c:
    // 0x27a50c: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x27a50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_27a510:
    // 0x27a510: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27a510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27a514:
    // 0x27a514: 0xe460096c  swc1        $f0, 0x96C($v1)
    ctx->pc = 0x27a514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2412), bits); }
label_27a518:
    // 0x27a518: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27a518u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a51c:
    // 0x27a51c: 0xac8000d8  sw          $zero, 0xD8($a0)
    ctx->pc = 0x27a51cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
label_27a520:
    // 0x27a520: 0xc087446  jal         func_21D118
label_27a524:
    if (ctx->pc == 0x27A524u) {
        ctx->pc = 0x27A524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A520u;
        // 0x27a524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A528u;
        goto label_27a528;
    }
    ctx->pc = 0x27A520u;
    SET_GPR_U32(ctx, 31, 0x27A528u);
    ctx->pc = 0x27A524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A520u;
    // 0x27a524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D118u, 0x27A520u, 0x27A528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A528u;
label_27a528:
    // 0x27a528: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x27a528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_27a52c:
    // 0x27a52c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x27a52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_27a530:
    // 0x27a530: 0x24504b00  addiu       $s0, $v0, 0x4B00
    ctx->pc = 0x27a530u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_27a534:
    // 0x27a534: 0x3c080028  lui         $t0, 0x28
    ctx->pc = 0x27a534u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
label_27a538:
    // 0x27a538: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x27a538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_27a53c:
    // 0x27a53c: 0x25089568  addiu       $t0, $t0, -0x6A98
    ctx->pc = 0x27a53cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294940008));
label_27a540:
    // 0x27a540: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27a540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27a544:
    // 0x27a544: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x27a544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_27a548:
    // 0x27a548: 0x86470002  lh          $a3, 0x2($s2)
    ctx->pc = 0x27a548u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_27a54c:
    // 0x27a54c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27a54cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27a550:
    // 0x27a550: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27a550u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_27a554:
    // 0x27a554: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x27a554u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_27a558:
    // 0x27a558: 0xc089d66  jal         func_227598
label_27a55c:
    if (ctx->pc == 0x27A55Cu) {
        ctx->pc = 0x27A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A558u;
        // 0x27a55c: 0xf03821  addu        $a3, $a3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A560u;
        goto label_27a560;
    }
    ctx->pc = 0x27A558u;
    SET_GPR_U32(ctx, 31, 0x27A560u);
    ctx->pc = 0x27A55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A558u;
    // 0x27a55c: 0xf03821  addu        $a3, $a3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227598u, 0x27A558u, 0x27A560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A560u;
label_27a560:
    // 0x27a560: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_27a564:
    if (ctx->pc == 0x27A564u) {
        ctx->pc = 0x27A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A560u;
        // 0x27a564: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A568u;
        goto label_27a568;
    }
    ctx->pc = 0x27A560u;
    {
        const bool branch_taken_0x27a560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A560u;
        // 0x27a564: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a560) {
            ctx->pc = 0x27A644u;
            goto label_27a644;
        }
    }
    ctx->pc = 0x27A568u;
label_27a568:
    // 0x27a568: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x27a568u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_27a56c:
    // 0x27a56c: 0x86480002  lh          $t0, 0x2($s2)
    ctx->pc = 0x27a56cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_27a570:
    // 0x27a570: 0x8ea22c7c  lw          $v0, 0x2C7C($s5)
    ctx->pc = 0x27a570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11388)));
label_27a574:
    // 0x27a574: 0x3c090028  lui         $t1, 0x28
    ctx->pc = 0x27a574u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)40 << 16));
label_27a578:
    // 0x27a578: 0x84140  sll         $t0, $t0, 5
    ctx->pc = 0x27a578u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_27a57c:
    // 0x27a57c: 0x2529a120  addiu       $t1, $t1, -0x5EE0
    ctx->pc = 0x27a57cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294943008));
label_27a580:
    // 0x27a580: 0x8c440840  lw          $a0, 0x840($v0)
    ctx->pc = 0x27a580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
label_27a584:
    // 0x27a584: 0x1104021  addu        $t0, $t0, $s0
    ctx->pc = 0x27a584u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
label_27a588:
    // 0x27a588: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27a588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27a58c:
    // 0x27a58c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x27a58cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_27a590:
    // 0x27a590: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x27a590u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27a594:
    // 0x27a594: 0xc0e6ac8  jal         func_39AB20
label_27a598:
    if (ctx->pc == 0x27A598u) {
        ctx->pc = 0x27A598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A594u;
        // 0x27a598: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A59Cu;
        goto label_27a59c;
    }
    ctx->pc = 0x27A594u;
    SET_GPR_U32(ctx, 31, 0x27A59Cu);
    ctx->pc = 0x27A598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A594u;
    // 0x27a598: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AB20u, 0x27A594u, 0x27A59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A59Cu;
label_27a59c:
    // 0x27a59c: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_27a5a0:
    if (ctx->pc == 0x27A5A0u) {
        ctx->pc = 0x27A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A59Cu;
        // 0x27a5a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A5A4u;
        goto label_27a5a4;
    }
    ctx->pc = 0x27A59Cu;
    {
        const bool branch_taken_0x27a59c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A59Cu;
        // 0x27a5a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a59c) {
            ctx->pc = 0x27A644u;
            goto label_27a644;
        }
    }
    ctx->pc = 0x27A5A4u;
label_27a5a4:
    // 0x27a5a4: 0x8ea22c7c  lw          $v0, 0x2C7C($s5)
    ctx->pc = 0x27a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11388)));
label_27a5a8:
    // 0x27a5a8: 0x3c090028  lui         $t1, 0x28
    ctx->pc = 0x27a5a8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)40 << 16));
label_27a5ac:
    // 0x27a5ac: 0x86480002  lh          $t0, 0x2($s2)
    ctx->pc = 0x27a5acu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_27a5b0:
    // 0x27a5b0: 0x2529a070  addiu       $t1, $t1, -0x5F90
    ctx->pc = 0x27a5b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294942832));
label_27a5b4:
    // 0x27a5b4: 0x8c44084c  lw          $a0, 0x84C($v0)
    ctx->pc = 0x27a5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2124)));
label_27a5b8:
    // 0x27a5b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27a5b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27a5bc:
    // 0x27a5bc: 0x84140  sll         $t0, $t0, 5
    ctx->pc = 0x27a5bcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_27a5c0:
    // 0x27a5c0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x27a5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_27a5c4:
    // 0x27a5c4: 0x1104021  addu        $t0, $t0, $s0
    ctx->pc = 0x27a5c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
label_27a5c8:
    // 0x27a5c8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x27a5c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27a5cc:
    // 0x27a5cc: 0xc0e3f1c  jal         func_38FC70
label_27a5d0:
    if (ctx->pc == 0x27A5D0u) {
        ctx->pc = 0x27A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A5CCu;
        // 0x27a5d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A5D4u;
        goto label_27a5d4;
    }
    ctx->pc = 0x27A5CCu;
    SET_GPR_U32(ctx, 31, 0x27A5D4u);
    ctx->pc = 0x27A5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A5CCu;
    // 0x27a5d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x27A5CCu, 0x27A5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A5D4u;
label_27a5d4:
    // 0x27a5d4: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_27a5d8:
    if (ctx->pc == 0x27A5D8u) {
        ctx->pc = 0x27A5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A5D4u;
        // 0x27a5d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A5DCu;
        goto label_27a5dc;
    }
    ctx->pc = 0x27A5D4u;
    {
        const bool branch_taken_0x27a5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A5D4u;
        // 0x27a5d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a5d4) {
            ctx->pc = 0x27A644u;
            goto label_27a644;
        }
    }
    ctx->pc = 0x27A5DCu;
label_27a5dc:
    // 0x27a5dc: 0x1660000a  bnez        $s3, . + 4 + (0xA << 2)
label_27a5e0:
    if (ctx->pc == 0x27A5E0u) {
        ctx->pc = 0x27A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A5DCu;
        // 0x27a5e0: 0x3c080028  lui         $t0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A5E4u;
        goto label_27a5e4;
    }
    ctx->pc = 0x27A5DCu;
    {
        const bool branch_taken_0x27a5dc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A5DCu;
        // 0x27a5e0: 0x3c080028  lui         $t0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a5dc) {
            ctx->pc = 0x27A608u;
            goto label_27a608;
        }
    }
    ctx->pc = 0x27A5E4u;
label_27a5e4:
    // 0x27a5e4: 0x86470002  lh          $a3, 0x2($s2)
    ctx->pc = 0x27a5e4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_27a5e8:
    // 0x27a5e8: 0x250897b0  addiu       $t0, $t0, -0x6850
    ctx->pc = 0x27a5e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294940592));
label_27a5ec:
    // 0x27a5ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27a5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27a5f0:
    // 0x27a5f0: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x27a5f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_27a5f4:
    // 0x27a5f4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x27a5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_27a5f8:
    // 0x27a5f8: 0xf03821  addu        $a3, $a3, $s0
    ctx->pc = 0x27a5f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
label_27a5fc:
    // 0x27a5fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27a5fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27a600:
    // 0x27a600: 0xc089d66  jal         func_227598
label_27a604:
    if (ctx->pc == 0x27A604u) {
        ctx->pc = 0x27A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A600u;
        // 0x27a604: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A608u;
        goto label_27a608;
    }
    ctx->pc = 0x27A600u;
    SET_GPR_U32(ctx, 31, 0x27A608u);
    ctx->pc = 0x27A604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A600u;
    // 0x27a604: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x227598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227598u, 0x27A600u, 0x27A608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A608u;
label_27a608:
    // 0x27a608: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_27a60c:
    if (ctx->pc == 0x27A60Cu) {
        ctx->pc = 0x27A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A608u;
        // 0x27a60c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A610u;
        goto label_27a610;
    }
    ctx->pc = 0x27A608u;
    {
        const bool branch_taken_0x27a608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A608u;
        // 0x27a60c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a608) {
            ctx->pc = 0x27A644u;
            goto label_27a644;
        }
    }
    ctx->pc = 0x27A610u;
label_27a610:
    // 0x27a610: 0x1660000a  bnez        $s3, . + 4 + (0xA << 2)
label_27a614:
    if (ctx->pc == 0x27A614u) {
        ctx->pc = 0x27A614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A610u;
        // 0x27a614: 0x3c080028  lui         $t0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A618u;
        goto label_27a618;
    }
    ctx->pc = 0x27A610u;
    {
        const bool branch_taken_0x27a610 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A610u;
        // 0x27a614: 0x3c080028  lui         $t0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a610) {
            ctx->pc = 0x27A63Cu;
            goto label_27a63c;
        }
    }
    ctx->pc = 0x27A618u;
label_27a618:
    // 0x27a618: 0x86470002  lh          $a3, 0x2($s2)
    ctx->pc = 0x27a618u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_27a61c:
    // 0x27a61c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27a61cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27a620:
    // 0x27a620: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27a620u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_27a624:
    // 0x27a624: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x27a624u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_27a628:
    // 0x27a628: 0x250896a0  addiu       $t0, $t0, -0x6960
    ctx->pc = 0x27a628u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294940320));
label_27a62c:
    // 0x27a62c: 0xf03821  addu        $a3, $a3, $s0
    ctx->pc = 0x27a62cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
label_27a630:
    // 0x27a630: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27a630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27a634:
    // 0x27a634: 0xc089d66  jal         func_227598
label_27a638:
    if (ctx->pc == 0x27A638u) {
        ctx->pc = 0x27A638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A634u;
        // 0x27a638: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A63Cu;
        goto label_27a63c;
    }
    ctx->pc = 0x27A634u;
    SET_GPR_U32(ctx, 31, 0x27A63Cu);
    ctx->pc = 0x27A638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A634u;
    // 0x27a638: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227598u, 0x27A634u, 0x27A63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A63Cu;
label_27a63c:
    // 0x27a63c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_27a640:
    if (ctx->pc == 0x27A640u) {
        ctx->pc = 0x27A640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A63Cu;
        // 0x27a640: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A644u;
        goto label_27a644;
    }
    ctx->pc = 0x27A63Cu;
    {
        const bool branch_taken_0x27a63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A63Cu;
        // 0x27a640: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a63c) {
            ctx->pc = 0x27A650u;
            goto label_27a650;
        }
    }
    ctx->pc = 0x27A644u;
label_27a644:
    // 0x27a644: 0xc0e1a34  jal         func_3868D0
label_27a648:
    if (ctx->pc == 0x27A648u) {
        ctx->pc = 0x27A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A644u;
        // 0x27a648: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A64Cu;
        goto label_27a64c;
    }
    ctx->pc = 0x27A644u;
    SET_GPR_U32(ctx, 31, 0x27A64Cu);
    ctx->pc = 0x27A648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A644u;
    // 0x27a648: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3868D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3868D0u, 0x27A644u, 0x27A64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A64Cu;
label_27a64c:
    // 0x27a64c: 0x8fb30000  lw          $s3, 0x0($sp)
    ctx->pc = 0x27a64cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_27a650:
    // 0x27a650: 0x16600010  bnez        $s3, . + 4 + (0x10 << 2)
label_27a654:
    if (ctx->pc == 0x27A654u) {
        ctx->pc = 0x27A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A650u;
        // 0x27a654: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A658u;
        goto label_27a658;
    }
    ctx->pc = 0x27A650u;
    {
        const bool branch_taken_0x27a650 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A650u;
        // 0x27a654: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a650) {
            ctx->pc = 0x27A694u;
            goto label_27a694;
        }
    }
    ctx->pc = 0x27A658u;
label_27a658:
    // 0x27a658: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
label_27a65c:
    if (ctx->pc == 0x27A65Cu) {
        ctx->pc = 0x27A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A658u;
        // 0x27a65c: 0x7bb00160  lq          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A660u;
        goto label_27a660;
    }
    ctx->pc = 0x27A658u;
    {
        const bool branch_taken_0x27a658 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A658u;
        // 0x27a65c: 0x7bb00160  lq          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a658) {
            ctx->pc = 0x27A698u;
            goto label_27a698;
        }
    }
    ctx->pc = 0x27A660u;
label_27a660:
    // 0x27a660: 0xc0e2612  jal         func_389848
label_27a664:
    if (ctx->pc == 0x27A664u) {
        ctx->pc = 0x27A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A660u;
        // 0x27a664: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A668u;
        goto label_27a668;
    }
    ctx->pc = 0x27A660u;
    SET_GPR_U32(ctx, 31, 0x27A668u);
    ctx->pc = 0x27A664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A660u;
    // 0x27a664: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x27A660u, 0x27A668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A668u;
label_27a668:
    // 0x27a668: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_27a66c:
    if (ctx->pc == 0x27A66Cu) {
        ctx->pc = 0x27A66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A668u;
        // 0x27a66c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A670u;
        goto label_27a670;
    }
    ctx->pc = 0x27A668u;
    {
        const bool branch_taken_0x27a668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a668) {
            ctx->pc = 0x27A66Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A668u;
            // 0x27a66c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A694u;
            goto label_27a694;
        }
    }
    ctx->pc = 0x27A670u;
label_27a670:
    // 0x27a670: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x27a670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_27a674:
    // 0x27a674: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x27a674u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_27a678:
    // 0x27a678: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x27a678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_27a67c:
    // 0x27a67c: 0x40f809  jalr        $v0
label_27a680:
    if (ctx->pc == 0x27A680u) {
        ctx->pc = 0x27A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A67Cu;
        // 0x27a680: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A684u;
        goto label_27a684;
    }
    ctx->pc = 0x27A67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27A684u);
        ctx->pc = 0x27A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A67Cu;
        // 0x27a680: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A67Cu, 0x27A684u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27A684u;
label_27a684:
    // 0x27a684: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27a684u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a688:
    // 0x27a688: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_27a68c:
    if (ctx->pc == 0x27A68Cu) {
        ctx->pc = 0x27A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A688u;
        // 0x27a68c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A690u;
        goto label_27a690;
    }
    ctx->pc = 0x27A688u;
    {
        const bool branch_taken_0x27a688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A688u;
        // 0x27a68c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a688) {
            ctx->pc = 0x27A694u;
            goto label_27a694;
        }
    }
    ctx->pc = 0x27A690u;
label_27a690:
    // 0x27a690: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x27a690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27a694:
    // 0x27a694: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x27a694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_27a698:
    // 0x27a698: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x27a698u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_27a69c:
    // 0x27a69c: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x27a69cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_27a6a0:
    // 0x27a6a0: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x27a6a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_27a6a4:
    // 0x27a6a4: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x27a6a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_27a6a8:
    // 0x27a6a8: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x27a6a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_27a6ac:
    // 0x27a6ac: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x27a6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_27a6b0:
    // 0x27a6b0: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x27a6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27a6b4:
    // 0x27a6b4: 0x3e00008  jr          $ra
label_27a6b8:
    if (ctx->pc == 0x27A6B8u) {
        ctx->pc = 0x27A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A6B4u;
        // 0x27a6b8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A6BCu;
        goto label_27a6bc;
    }
    ctx->pc = 0x27A6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A6B4u;
        // 0x27a6b8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A6BCu;
label_27a6bc:
    // 0x27a6bc: 0x0  nop
    ctx->pc = 0x27a6bcu;
    // NOP
    ctx->pc = 0x27a6c0u;
}
