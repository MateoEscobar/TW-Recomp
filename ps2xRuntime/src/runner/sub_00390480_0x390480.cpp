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

// Function: sub_00390480
// Address: 0x390480 - 0x3906b8
void sub_00390480_0x390480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390480_0x390480");
#endif

    switch (ctx->pc) {
        case 0x390480u: goto label_390480;
        case 0x390484u: goto label_390484;
        case 0x390488u: goto label_390488;
        case 0x39048cu: goto label_39048c;
        case 0x390490u: goto label_390490;
        case 0x390494u: goto label_390494;
        case 0x390498u: goto label_390498;
        case 0x39049cu: goto label_39049c;
        case 0x3904a0u: goto label_3904a0;
        case 0x3904a4u: goto label_3904a4;
        case 0x3904a8u: goto label_3904a8;
        case 0x3904acu: goto label_3904ac;
        case 0x3904b0u: goto label_3904b0;
        case 0x3904b4u: goto label_3904b4;
        case 0x3904b8u: goto label_3904b8;
        case 0x3904bcu: goto label_3904bc;
        case 0x3904c0u: goto label_3904c0;
        case 0x3904c4u: goto label_3904c4;
        case 0x3904c8u: goto label_3904c8;
        case 0x3904ccu: goto label_3904cc;
        case 0x3904d0u: goto label_3904d0;
        case 0x3904d4u: goto label_3904d4;
        case 0x3904d8u: goto label_3904d8;
        case 0x3904dcu: goto label_3904dc;
        case 0x3904e0u: goto label_3904e0;
        case 0x3904e4u: goto label_3904e4;
        case 0x3904e8u: goto label_3904e8;
        case 0x3904ecu: goto label_3904ec;
        case 0x3904f0u: goto label_3904f0;
        case 0x3904f4u: goto label_3904f4;
        case 0x3904f8u: goto label_3904f8;
        case 0x3904fcu: goto label_3904fc;
        case 0x390500u: goto label_390500;
        case 0x390504u: goto label_390504;
        case 0x390508u: goto label_390508;
        case 0x39050cu: goto label_39050c;
        case 0x390510u: goto label_390510;
        case 0x390514u: goto label_390514;
        case 0x390518u: goto label_390518;
        case 0x39051cu: goto label_39051c;
        case 0x390520u: goto label_390520;
        case 0x390524u: goto label_390524;
        case 0x390528u: goto label_390528;
        case 0x39052cu: goto label_39052c;
        case 0x390530u: goto label_390530;
        case 0x390534u: goto label_390534;
        case 0x390538u: goto label_390538;
        case 0x39053cu: goto label_39053c;
        case 0x390540u: goto label_390540;
        case 0x390544u: goto label_390544;
        case 0x390548u: goto label_390548;
        case 0x39054cu: goto label_39054c;
        case 0x390550u: goto label_390550;
        case 0x390554u: goto label_390554;
        case 0x390558u: goto label_390558;
        case 0x39055cu: goto label_39055c;
        case 0x390560u: goto label_390560;
        case 0x390564u: goto label_390564;
        case 0x390568u: goto label_390568;
        case 0x39056cu: goto label_39056c;
        case 0x390570u: goto label_390570;
        case 0x390574u: goto label_390574;
        case 0x390578u: goto label_390578;
        case 0x39057cu: goto label_39057c;
        case 0x390580u: goto label_390580;
        case 0x390584u: goto label_390584;
        case 0x390588u: goto label_390588;
        case 0x39058cu: goto label_39058c;
        case 0x390590u: goto label_390590;
        case 0x390594u: goto label_390594;
        case 0x390598u: goto label_390598;
        case 0x39059cu: goto label_39059c;
        case 0x3905a0u: goto label_3905a0;
        case 0x3905a4u: goto label_3905a4;
        case 0x3905a8u: goto label_3905a8;
        case 0x3905acu: goto label_3905ac;
        case 0x3905b0u: goto label_3905b0;
        case 0x3905b4u: goto label_3905b4;
        case 0x3905b8u: goto label_3905b8;
        case 0x3905bcu: goto label_3905bc;
        case 0x3905c0u: goto label_3905c0;
        case 0x3905c4u: goto label_3905c4;
        case 0x3905c8u: goto label_3905c8;
        case 0x3905ccu: goto label_3905cc;
        case 0x3905d0u: goto label_3905d0;
        case 0x3905d4u: goto label_3905d4;
        case 0x3905d8u: goto label_3905d8;
        case 0x3905dcu: goto label_3905dc;
        case 0x3905e0u: goto label_3905e0;
        case 0x3905e4u: goto label_3905e4;
        case 0x3905e8u: goto label_3905e8;
        case 0x3905ecu: goto label_3905ec;
        case 0x3905f0u: goto label_3905f0;
        case 0x3905f4u: goto label_3905f4;
        case 0x3905f8u: goto label_3905f8;
        case 0x3905fcu: goto label_3905fc;
        case 0x390600u: goto label_390600;
        case 0x390604u: goto label_390604;
        case 0x390608u: goto label_390608;
        case 0x39060cu: goto label_39060c;
        case 0x390610u: goto label_390610;
        case 0x390614u: goto label_390614;
        case 0x390618u: goto label_390618;
        case 0x39061cu: goto label_39061c;
        case 0x390620u: goto label_390620;
        case 0x390624u: goto label_390624;
        case 0x390628u: goto label_390628;
        case 0x39062cu: goto label_39062c;
        case 0x390630u: goto label_390630;
        case 0x390634u: goto label_390634;
        case 0x390638u: goto label_390638;
        case 0x39063cu: goto label_39063c;
        case 0x390640u: goto label_390640;
        case 0x390644u: goto label_390644;
        case 0x390648u: goto label_390648;
        case 0x39064cu: goto label_39064c;
        case 0x390650u: goto label_390650;
        case 0x390654u: goto label_390654;
        case 0x390658u: goto label_390658;
        case 0x39065cu: goto label_39065c;
        case 0x390660u: goto label_390660;
        case 0x390664u: goto label_390664;
        case 0x390668u: goto label_390668;
        case 0x39066cu: goto label_39066c;
        case 0x390670u: goto label_390670;
        case 0x390674u: goto label_390674;
        case 0x390678u: goto label_390678;
        case 0x39067cu: goto label_39067c;
        case 0x390680u: goto label_390680;
        case 0x390684u: goto label_390684;
        case 0x390688u: goto label_390688;
        case 0x39068cu: goto label_39068c;
        case 0x390690u: goto label_390690;
        case 0x390694u: goto label_390694;
        case 0x390698u: goto label_390698;
        case 0x39069cu: goto label_39069c;
        case 0x3906a0u: goto label_3906a0;
        case 0x3906a4u: goto label_3906a4;
        case 0x3906a8u: goto label_3906a8;
        case 0x3906acu: goto label_3906ac;
        case 0x3906b0u: goto label_3906b0;
        case 0x3906b4u: goto label_3906b4;
        default: break;
    }

    ctx->pc = 0x390480u;

label_390480:
    // 0x390480: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x390480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_390484:
    // 0x390484: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x390484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_390488:
    // 0x390488: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x390488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_39048c:
    // 0x39048c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39048cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_390490:
    // 0x390490: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x390490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_390494:
    // 0x390494: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x390494u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_390498:
    // 0x390498: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x390498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_39049c:
    // 0x39049c: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x39049cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_3904a0:
    // 0x3904a0: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x3904a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_3904a4:
    // 0x3904a4: 0x16400029  bnez        $s2, . + 4 + (0x29 << 2)
label_3904a8:
    if (ctx->pc == 0x3904A8u) {
        ctx->pc = 0x3904A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3904A4u;
        // 0x3904a8: 0xffbf00a0  sd          $ra, 0xA0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3904ACu;
        goto label_3904ac;
    }
    ctx->pc = 0x3904A4u;
    {
        const bool branch_taken_0x3904a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3904A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3904A4u;
        // 0x3904a8: 0xffbf00a0  sd          $ra, 0xA0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3904a4) {
            ctx->pc = 0x39054Cu;
            goto label_39054c;
        }
    }
    ctx->pc = 0x3904ACu;
label_3904ac:
    // 0x3904ac: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3904acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3904b0:
    // 0x3904b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3904b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3904b4:
    // 0x3904b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3904b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3904b8:
    // 0x3904b8: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x3904b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_3904bc:
    // 0x3904bc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3904bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_3904c0:
    // 0x3904c0: 0xc620008c  lwc1        $f0, 0x8C($s1)
    ctx->pc = 0x3904c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3904c4:
    // 0x3904c4: 0x82280b  movn        $a1, $a0, $v0
    ctx->pc = 0x3904c4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_3904c8:
    // 0x3904c8: 0x92290080  lbu         $t1, 0x80($s1)
    ctx->pc = 0x3904c8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 128)));
label_3904cc:
    // 0x3904cc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x3904ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3904d0:
    // 0x3904d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3904d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3904d4:
    // 0x3904d4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3904d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3904d8:
    // 0x3904d8: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x3904d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3904dc:
    // 0x3904dc: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x3904dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3904e0:
    // 0x3904e0: 0xa7a4004e  sh          $a0, 0x4E($sp)
    ctx->pc = 0x3904e0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 78), (uint16_t)GPR_U32(ctx, 4));
label_3904e4:
    // 0x3904e4: 0xafa50044  sw          $a1, 0x44($sp)
    ctx->pc = 0x3904e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
label_3904e8:
    // 0x3904e8: 0x3066ff00  andi        $a2, $v1, 0xFF00
    ctx->pc = 0x3904e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
label_3904ec:
    // 0x3904ec: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3904ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3904f0:
    // 0x3904f0: 0x34602  srl         $t0, $v1, 24
    ctx->pc = 0x3904f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
label_3904f4:
    // 0x3904f4: 0xa7a7004c  sh          $a3, 0x4C($sp)
    ctx->pc = 0x3904f4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 76), (uint16_t)GPR_U32(ctx, 7));
label_3904f8:
    // 0x3904f8: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x3904f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
label_3904fc:
    // 0x3904fc: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x3904fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_390500:
    // 0x390500: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x390500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_390504:
    // 0x390504: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x390504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_390508:
    // 0x390508: 0x63202  srl         $a2, $a2, 8
    ctx->pc = 0x390508u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
label_39050c:
    // 0x39050c: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x39050cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_390510:
    // 0x390510: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x390510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_390514:
    // 0x390514: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x390514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_390518:
    // 0x390518: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x390518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_39051c:
    // 0x39051c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x39051cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_390520:
    // 0x390520: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x390520u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_390524:
    // 0x390524: 0xa0490003  sb          $t1, 0x3($v0)
    ctx->pc = 0x390524u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 9));
label_390528:
    // 0x390528: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x390528u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_39052c:
    // 0x39052c: 0xa3a80090  sb          $t0, 0x90($sp)
    ctx->pc = 0x39052cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 8));
label_390530:
    // 0x390530: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x390530u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_390534:
    // 0x390534: 0xc05eb6c  jal         func_17ADB0
label_390538:
    if (ctx->pc == 0x390538u) {
        ctx->pc = 0x390538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390534u;
        // 0x390538: 0xa0460002  sb          $a2, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39053Cu;
        goto label_39053c;
    }
    ctx->pc = 0x390534u;
    SET_GPR_U32(ctx, 31, 0x39053Cu);
    ctx->pc = 0x390538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390534u;
    // 0x390538: 0xa0460002  sb          $a2, 0x2($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ADB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ADB0u, 0x390534u, 0x39053Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39053Cu;
label_39053c:
    // 0x39053c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x39053cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_390540:
    // 0x390540: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x390540u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_390544:
    // 0x390544: 0x10000026  b           . + 4 + (0x26 << 2)
label_390548:
    if (ctx->pc == 0x390548u) {
        ctx->pc = 0x390548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390544u;
        // 0x390548: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39054Cu;
        goto label_39054c;
    }
    ctx->pc = 0x390544u;
    {
        const bool branch_taken_0x390544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390544u;
        // 0x390548: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390544) {
            ctx->pc = 0x3905E0u;
            goto label_3905e0;
        }
    }
    ctx->pc = 0x39054Cu;
label_39054c:
    // 0x39054c: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x39054cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_390550:
    // 0x390550: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x390550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_390554:
    // 0x390554: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x390554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_390558:
    // 0x390558: 0x27b00094  addiu       $s0, $sp, 0x94
    ctx->pc = 0x390558u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_39055c:
    // 0x39055c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x39055cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_390560:
    // 0x390560: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x390560u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_390564:
    // 0x390564: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x390564u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_390568:
    // 0x390568: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x390568u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_39056c:
    // 0x39056c: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x39056cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_390570:
    // 0x390570: 0x78470010  lq          $a3, 0x10($v0)
    ctx->pc = 0x390570u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_390574:
    // 0x390574: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x390574u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
label_390578:
    // 0x390578: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x390578u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
label_39057c:
    // 0x39057c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x39057cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_390580:
    // 0x390580: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
label_390584:
    if (ctx->pc == 0x390584u) {
        ctx->pc = 0x390584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390580u;
        // 0x390584: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390588u;
        goto label_390588;
    }
    ctx->pc = 0x390580u;
    {
        const bool branch_taken_0x390580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x390584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390580u;
        // 0x390584: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390580) {
            ctx->pc = 0x39056Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39056c;
        }
    }
    ctx->pc = 0x390588u;
label_390588:
    // 0x390588: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x390588u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_39058c:
    // 0x39058c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39058cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_390590:
    // 0x390590: 0xc05eb4c  jal         func_17AD30
label_390594:
    if (ctx->pc == 0x390594u) {
        ctx->pc = 0x390594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390590u;
        // 0x390594: 0x7c660000  sq          $a2, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390598u;
        goto label_390598;
    }
    ctx->pc = 0x390590u;
    SET_GPR_U32(ctx, 31, 0x390598u);
    ctx->pc = 0x390594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390590u;
    // 0x390594: 0x7c660000  sq          $a2, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AD30u, 0x390590u, 0x390598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390598u;
label_390598:
    // 0x390598: 0x93a30094  lbu         $v1, 0x94($sp)
    ctx->pc = 0x390598u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 148)));
label_39059c:
    // 0x39059c: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x39059cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_3905a0:
    // 0x3905a0: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x3905a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_3905a4:
    // 0x3905a4: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x3905a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_3905a8:
    // 0x3905a8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3905a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_3905ac:
    // 0x3905ac: 0x92050003  lbu         $a1, 0x3($s0)
    ctx->pc = 0x3905acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_3905b0:
    // 0x3905b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3905b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3905b4:
    // 0x3905b4: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3905b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_3905b8:
    // 0x3905b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3905b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_3905bc:
    // 0x3905bc: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x3905bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3905c0:
    // 0x3905c0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3905c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_3905c4:
    // 0x3905c4: 0xae230084  sw          $v1, 0x84($s1)
    ctx->pc = 0x3905c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
label_3905c8:
    // 0x3905c8: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x3905c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
label_3905cc:
    // 0x3905cc: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x3905ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3905d0:
    // 0x3905d0: 0xe620008c  swc1        $f0, 0x8C($s1)
    ctx->pc = 0x3905d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
label_3905d4:
    // 0x3905d4: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x3905d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3905d8:
    // 0x3905d8: 0xe6220098  swc1        $f2, 0x98($s1)
    ctx->pc = 0x3905d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
label_3905dc:
    // 0x3905dc: 0xe6210090  swc1        $f1, 0x90($s1)
    ctx->pc = 0x3905dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
label_3905e0:
    // 0x3905e0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3905e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3905e4:
    // 0x3905e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3905e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3905e8:
    // 0x3905e8: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x3905e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_3905ec:
    // 0x3905ec: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x3905ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_3905f0:
    // 0x3905f0: 0x60f809  jalr        $v1
label_3905f4:
    if (ctx->pc == 0x3905F4u) {
        ctx->pc = 0x3905F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3905F0u;
        // 0x3905f4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3905F8u;
        goto label_3905f8;
    }
    ctx->pc = 0x3905F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3905F8u);
        ctx->pc = 0x3905F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3905F0u;
        // 0x3905f4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3905F0u, 0x3905F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3905F8u;
label_3905f8:
    // 0x3905f8: 0x6ba20067  ldl         $v0, 0x67($sp)
    ctx->pc = 0x3905f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3905fc:
    // 0x3905fc: 0x6fa20060  ldr         $v0, 0x60($sp)
    ctx->pc = 0x3905fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_390600:
    // 0x390600: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x390600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_390604:
    // 0x390604: 0xb3a2000b  sdl         $v0, 0xB($sp)
    ctx->pc = 0x390604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_390608:
    // 0x390608: 0xb7a20004  sdr         $v0, 0x4($sp)
    ctx->pc = 0x390608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_39060c:
    // 0x39060c: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x39060cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_390610:
    // 0x390610: 0x26831730  addiu       $v1, $s4, 0x1730
    ctx->pc = 0x390610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 5936));
label_390614:
    // 0x390614: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x390614u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_390618:
    // 0x390618: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x390618u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_39061c:
    // 0x39061c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x39061cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_390620:
    // 0x390620: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x390620u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_390624:
    // 0x390624: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x390624u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_390628:
    // 0x390628: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x390628u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_39062c:
    // 0x39062c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x39062cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_390630:
    // 0x390630: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x390630u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_390634:
    // 0x390634: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x390634u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_390638:
    // 0x390638: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x390638u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_39063c:
    // 0x39063c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x39063cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_390640:
    // 0x390640: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x390640u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_390644:
    // 0x390644: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x390644u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_390648:
    // 0x390648: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x390648u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39064c:
    // 0x39064c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x39064cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_390650:
    // 0x390650: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x390650u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_390654:
    // 0x390654: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x390654u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_390658:
    // 0x390658: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x390658u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39065c:
    // 0x39065c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x39065cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_390660:
    // 0x390660: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x390660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_390664:
    // 0x390664: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x390664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_390668:
    // 0x390668: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x390668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_39066c:
    // 0x39066c: 0x6ba60057  ldl         $a2, 0x57($sp)
    ctx->pc = 0x39066cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_390670:
    // 0x390670: 0x6fa60050  ldr         $a2, 0x50($sp)
    ctx->pc = 0x390670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_390674:
    // 0x390674: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x390674u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_390678:
    // 0x390678: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x390678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_39067c:
    // 0x39067c: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x39067cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_390680:
    // 0x390680: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x390680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
label_390684:
    // 0x390684: 0xc05f55e  jal         func_17D578
label_390688:
    if (ctx->pc == 0x390688u) {
        ctx->pc = 0x390688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390684u;
        // 0x390688: 0x8ea4cce4  lw          $a0, -0x331C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39068Cu;
        goto label_39068c;
    }
    ctx->pc = 0x390684u;
    SET_GPR_U32(ctx, 31, 0x39068Cu);
    ctx->pc = 0x390688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390684u;
    // 0x390688: 0x8ea4cce4  lw          $a0, -0x331C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D578u, 0x390684u, 0x39068Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39068Cu;
label_39068c:
    // 0x39068c: 0xae22009c  sw          $v0, 0x9C($s1)
    ctx->pc = 0x39068cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
label_390690:
    // 0x390690: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x390690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_390694:
    // 0x390694: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x390694u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_390698:
    // 0x390698: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x390698u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_39069c:
    // 0x39069c: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x39069cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3906a0:
    // 0x3906a0: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x3906a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3906a4:
    // 0x3906a4: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x3906a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3906a8:
    // 0x3906a8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3906a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3906ac:
    // 0x3906ac: 0x3e00008  jr          $ra
label_3906b0:
    if (ctx->pc == 0x3906B0u) {
        ctx->pc = 0x3906B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3906ACu;
        // 0x3906b0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3906B4u;
        goto label_3906b4;
    }
    ctx->pc = 0x3906ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3906B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3906ACu;
        // 0x3906b0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3906ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3906B4u;
label_3906b4:
    // 0x3906b4: 0x0  nop
    ctx->pc = 0x3906b4u;
    // NOP
    ctx->pc = 0x3906b8u;
}
