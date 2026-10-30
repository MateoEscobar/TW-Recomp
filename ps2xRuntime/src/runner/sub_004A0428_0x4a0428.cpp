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

// Function: sub_004A0428
// Address: 0x4a0428 - 0x4a0650
void sub_004A0428_0x4a0428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A0428_0x4a0428");
#endif

    switch (ctx->pc) {
        case 0x4a0428u: goto label_4a0428;
        case 0x4a042cu: goto label_4a042c;
        case 0x4a0430u: goto label_4a0430;
        case 0x4a0434u: goto label_4a0434;
        case 0x4a0438u: goto label_4a0438;
        case 0x4a043cu: goto label_4a043c;
        case 0x4a0440u: goto label_4a0440;
        case 0x4a0444u: goto label_4a0444;
        case 0x4a0448u: goto label_4a0448;
        case 0x4a044cu: goto label_4a044c;
        case 0x4a0450u: goto label_4a0450;
        case 0x4a0454u: goto label_4a0454;
        case 0x4a0458u: goto label_4a0458;
        case 0x4a045cu: goto label_4a045c;
        case 0x4a0460u: goto label_4a0460;
        case 0x4a0464u: goto label_4a0464;
        case 0x4a0468u: goto label_4a0468;
        case 0x4a046cu: goto label_4a046c;
        case 0x4a0470u: goto label_4a0470;
        case 0x4a0474u: goto label_4a0474;
        case 0x4a0478u: goto label_4a0478;
        case 0x4a047cu: goto label_4a047c;
        case 0x4a0480u: goto label_4a0480;
        case 0x4a0484u: goto label_4a0484;
        case 0x4a0488u: goto label_4a0488;
        case 0x4a048cu: goto label_4a048c;
        case 0x4a0490u: goto label_4a0490;
        case 0x4a0494u: goto label_4a0494;
        case 0x4a0498u: goto label_4a0498;
        case 0x4a049cu: goto label_4a049c;
        case 0x4a04a0u: goto label_4a04a0;
        case 0x4a04a4u: goto label_4a04a4;
        case 0x4a04a8u: goto label_4a04a8;
        case 0x4a04acu: goto label_4a04ac;
        case 0x4a04b0u: goto label_4a04b0;
        case 0x4a04b4u: goto label_4a04b4;
        case 0x4a04b8u: goto label_4a04b8;
        case 0x4a04bcu: goto label_4a04bc;
        case 0x4a04c0u: goto label_4a04c0;
        case 0x4a04c4u: goto label_4a04c4;
        case 0x4a04c8u: goto label_4a04c8;
        case 0x4a04ccu: goto label_4a04cc;
        case 0x4a04d0u: goto label_4a04d0;
        case 0x4a04d4u: goto label_4a04d4;
        case 0x4a04d8u: goto label_4a04d8;
        case 0x4a04dcu: goto label_4a04dc;
        case 0x4a04e0u: goto label_4a04e0;
        case 0x4a04e4u: goto label_4a04e4;
        case 0x4a04e8u: goto label_4a04e8;
        case 0x4a04ecu: goto label_4a04ec;
        case 0x4a04f0u: goto label_4a04f0;
        case 0x4a04f4u: goto label_4a04f4;
        case 0x4a04f8u: goto label_4a04f8;
        case 0x4a04fcu: goto label_4a04fc;
        case 0x4a0500u: goto label_4a0500;
        case 0x4a0504u: goto label_4a0504;
        case 0x4a0508u: goto label_4a0508;
        case 0x4a050cu: goto label_4a050c;
        case 0x4a0510u: goto label_4a0510;
        case 0x4a0514u: goto label_4a0514;
        case 0x4a0518u: goto label_4a0518;
        case 0x4a051cu: goto label_4a051c;
        case 0x4a0520u: goto label_4a0520;
        case 0x4a0524u: goto label_4a0524;
        case 0x4a0528u: goto label_4a0528;
        case 0x4a052cu: goto label_4a052c;
        case 0x4a0530u: goto label_4a0530;
        case 0x4a0534u: goto label_4a0534;
        case 0x4a0538u: goto label_4a0538;
        case 0x4a053cu: goto label_4a053c;
        case 0x4a0540u: goto label_4a0540;
        case 0x4a0544u: goto label_4a0544;
        case 0x4a0548u: goto label_4a0548;
        case 0x4a054cu: goto label_4a054c;
        case 0x4a0550u: goto label_4a0550;
        case 0x4a0554u: goto label_4a0554;
        case 0x4a0558u: goto label_4a0558;
        case 0x4a055cu: goto label_4a055c;
        case 0x4a0560u: goto label_4a0560;
        case 0x4a0564u: goto label_4a0564;
        case 0x4a0568u: goto label_4a0568;
        case 0x4a056cu: goto label_4a056c;
        case 0x4a0570u: goto label_4a0570;
        case 0x4a0574u: goto label_4a0574;
        case 0x4a0578u: goto label_4a0578;
        case 0x4a057cu: goto label_4a057c;
        case 0x4a0580u: goto label_4a0580;
        case 0x4a0584u: goto label_4a0584;
        case 0x4a0588u: goto label_4a0588;
        case 0x4a058cu: goto label_4a058c;
        case 0x4a0590u: goto label_4a0590;
        case 0x4a0594u: goto label_4a0594;
        case 0x4a0598u: goto label_4a0598;
        case 0x4a059cu: goto label_4a059c;
        case 0x4a05a0u: goto label_4a05a0;
        case 0x4a05a4u: goto label_4a05a4;
        case 0x4a05a8u: goto label_4a05a8;
        case 0x4a05acu: goto label_4a05ac;
        case 0x4a05b0u: goto label_4a05b0;
        case 0x4a05b4u: goto label_4a05b4;
        case 0x4a05b8u: goto label_4a05b8;
        case 0x4a05bcu: goto label_4a05bc;
        case 0x4a05c0u: goto label_4a05c0;
        case 0x4a05c4u: goto label_4a05c4;
        case 0x4a05c8u: goto label_4a05c8;
        case 0x4a05ccu: goto label_4a05cc;
        case 0x4a05d0u: goto label_4a05d0;
        case 0x4a05d4u: goto label_4a05d4;
        case 0x4a05d8u: goto label_4a05d8;
        case 0x4a05dcu: goto label_4a05dc;
        case 0x4a05e0u: goto label_4a05e0;
        case 0x4a05e4u: goto label_4a05e4;
        case 0x4a05e8u: goto label_4a05e8;
        case 0x4a05ecu: goto label_4a05ec;
        case 0x4a05f0u: goto label_4a05f0;
        case 0x4a05f4u: goto label_4a05f4;
        case 0x4a05f8u: goto label_4a05f8;
        case 0x4a05fcu: goto label_4a05fc;
        case 0x4a0600u: goto label_4a0600;
        case 0x4a0604u: goto label_4a0604;
        case 0x4a0608u: goto label_4a0608;
        case 0x4a060cu: goto label_4a060c;
        case 0x4a0610u: goto label_4a0610;
        case 0x4a0614u: goto label_4a0614;
        case 0x4a0618u: goto label_4a0618;
        case 0x4a061cu: goto label_4a061c;
        case 0x4a0620u: goto label_4a0620;
        case 0x4a0624u: goto label_4a0624;
        case 0x4a0628u: goto label_4a0628;
        case 0x4a062cu: goto label_4a062c;
        case 0x4a0630u: goto label_4a0630;
        case 0x4a0634u: goto label_4a0634;
        case 0x4a0638u: goto label_4a0638;
        case 0x4a063cu: goto label_4a063c;
        case 0x4a0640u: goto label_4a0640;
        case 0x4a0644u: goto label_4a0644;
        case 0x4a0648u: goto label_4a0648;
        case 0x4a064cu: goto label_4a064c;
        default: break;
    }

    ctx->pc = 0x4a0428u;

label_4a0428:
    // 0x4a0428: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4a0428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4a042c:
    // 0x4a042c: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4a042cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4a0430:
    // 0x4a0430: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4a0430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_4a0434:
    // 0x4a0434: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4a0434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_4a0438:
    // 0x4a0438: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4a0438u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a043c:
    // 0x4a043c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a043cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4a0440:
    // 0x4a0440: 0x24f2ffff  addiu       $s2, $a3, -0x1
    ctx->pc = 0x4a0440u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_4a0444:
    // 0x4a0444: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x4a0444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_4a0448:
    // 0x4a0448: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4a0448u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a044c:
    // 0x4a044c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x4a044cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_4a0450:
    // 0x4a0450: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4a0450u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a0454:
    // 0x4a0454: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4a0454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_4a0458:
    // 0x4a0458: 0x2455f7a0  addiu       $s5, $v0, -0x860
    ctx->pc = 0x4a0458u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965152));
label_4a045c:
    // 0x4a045c: 0x10000062  b           . + 4 + (0x62 << 2)
label_4a0460:
    if (ctx->pc == 0x4A0460u) {
        ctx->pc = 0x4A0460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A045Cu;
        // 0x4a0460: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0464u;
        goto label_4a0464;
    }
    ctx->pc = 0x4A045Cu;
    {
        const bool branch_taken_0x4a045c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A045Cu;
        // 0x4a0460: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a045c) {
            ctx->pc = 0x4A05E8u;
            goto label_4a05e8;
        }
    }
    ctx->pc = 0x4A0464u;
label_4a0464:
    // 0x4a0464: 0x0  nop
    ctx->pc = 0x4a0464u;
    // NOP
label_4a0468:
    // 0x4a0468: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4a0468u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_4a046c:
    // 0x4a046c: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4a046cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4a0470:
    // 0x4a0470: 0x7aa80000  lq          $t0, 0x0($s5)
    ctx->pc = 0x4a0470u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_4a0474:
    // 0x4a0474: 0x244ff700  addiu       $t7, $v0, -0x900
    ctx->pc = 0x4a0474u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
label_4a0478:
    // 0x4a0478: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x4a0478u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_4a047c:
    // 0x4a047c: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x4a047cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4a0480:
    // 0x4a0480: 0x3c0d1000  lui         $t5, 0x1000
    ctx->pc = 0x4a0480u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4096 << 16));
label_4a0484:
    // 0x4a0484: 0x3c0c0400  lui         $t4, 0x400
    ctx->pc = 0x4a0484u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)1024 << 16));
label_4a0488:
    // 0x4a0488: 0x3c0b0100  lui         $t3, 0x100
    ctx->pc = 0x4a0488u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)256 << 16));
label_4a048c:
    // 0x4a048c: 0x356b0404  ori         $t3, $t3, 0x404
    ctx->pc = 0x4a048cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)1028);
label_4a0490:
    // 0x4a0490: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x4a0490u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
label_4a0494:
    // 0x4a0494: 0x354a8000  ori         $t2, $t2, 0x8000
    ctx->pc = 0x4a0494u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32768);
label_4a0498:
    // 0x4a0498: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4a0498u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_4a049c:
    // 0x4a049c: 0x0  nop
    ctx->pc = 0x4a049cu;
    // NOP
label_4a04a0:
    // 0x4a04a0: 0x2e030011  sltiu       $v1, $s0, 0x11
    ctx->pc = 0x4a04a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_4a04a4:
    // 0x4a04a4: 0x1c0302d  daddu       $a2, $t6, $zero
    ctx->pc = 0x4a04a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_4a04a8:
    // 0x4a04a8: 0x203300b  movn        $a2, $s0, $v1
    ctx->pc = 0x4a04a8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 16));
label_4a04ac:
    // 0x4a04ac: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x4a04acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_4a04b0:
    // 0x4a04b0: 0xcc1825  or          $v1, $a2, $t4
    ctx->pc = 0x4a04b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 12));
label_4a04b4:
    // 0x4a04b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4a04b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_4a04b8:
    // 0x4a04b8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4a04b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_4a04bc:
    // 0x4a04bc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4a04bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_4a04c0:
    // 0x4a04c0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x4a04c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_4a04c4:
    // 0x4a04c4: 0x64420002  daddiu      $v0, $v0, 0x2
    ctx->pc = 0x4a04c4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2);
label_4a04c8:
    // 0x4a04c8: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x4a04c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
label_4a04cc:
    // 0x4a04cc: 0x4d2025  or          $a0, $v0, $t5
    ctx->pc = 0x4a04ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
label_4a04d0:
    // 0x4a04d0: 0x2068023  subu        $s0, $s0, $a2
    ctx->pc = 0x4a04d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_4a04d4:
    // 0x4a04d4: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x4a04d4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_4a04d8:
    // 0x4a04d8: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x4a04d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a04dc:
    // 0x4a04dc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x4a04dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_4a04e0:
    // 0x4a04e0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a04e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a04e4:
    // 0x4a04e4: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a04e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_4a04e8:
    // 0x4a04e8: 0x61cc0  sll         $v1, $a2, 19
    ctx->pc = 0x4a04e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 19));
label_4a04ec:
    // 0x4a04ec: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4a04ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
label_4a04f0:
    // 0x4a04f0: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x4a04f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_4a04f4:
    // 0x4a04f4: 0x3484c000  ori         $a0, $a0, 0xC000
    ctx->pc = 0x4a04f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
label_4a04f8:
    // 0x4a04f8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x4a04f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_4a04fc:
    // 0x4a04fc: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x4a04fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
label_4a0500:
    // 0x4a0500: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x4a0500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_4a0504:
    // 0x4a0504: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4a0504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_4a0508:
    // 0x4a0508: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x4a0508u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_4a050c:
    // 0x4a050c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x4a050cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_4a0510:
    // 0x4a0510: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a0510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a0514:
    // 0x4a0514: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4a0514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_4a0518:
    // 0x4a0518: 0x10c9002b  beq         $a2, $t1, . + 4 + (0x2B << 2)
label_4a051c:
    if (ctx->pc == 0x4A051Cu) {
        ctx->pc = 0x4A051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0518u;
        // 0x4a051c: 0xaf82898c  sw          $v0, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0520u;
        goto label_4a0520;
    }
    ctx->pc = 0x4A0518u;
    {
        const bool branch_taken_0x4a0518 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        ctx->pc = 0x4A051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0518u;
        // 0x4a051c: 0xaf82898c  sw          $v0, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0518) {
            ctx->pc = 0x4A05C8u;
            goto label_4a05c8;
        }
    }
    ctx->pc = 0x4A0520u;
label_4a0520:
    // 0x4a0520: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4a0520u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_4a0524:
    // 0x4a0524: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x4a0524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_4a0528:
    // 0x4a0528: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4a0528u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_4a052c:
    // 0x4a052c: 0x0  nop
    ctx->pc = 0x4a052cu;
    // NOP
label_4a0530:
    // 0x4a0530: 0x8f84898c  lw          $a0, -0x7674($gp)
    ctx->pc = 0x4a0530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a0534:
    // 0x4a0534: 0x78a2ffc0  lq          $v0, -0x40($a1)
    ctx->pc = 0x4a0534u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967232)));
label_4a0538:
    // 0x4a0538: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4a0538u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_4a053c:
    // 0x4a053c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4a053cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4a0540:
    // 0x4a0540: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x4a0540u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
label_4a0544:
    // 0x4a0544: 0x78a2ffd0  lq          $v0, -0x30($a1)
    ctx->pc = 0x4a0544u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967248)));
label_4a0548:
    // 0x4a0548: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4a0548u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_4a054c:
    // 0x4a054c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x4a054cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4a0550:
    // 0x4a0550: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0550u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0554:
    // 0x4a0554: 0x78a2ffe0  lq          $v0, -0x20($a1)
    ctx->pc = 0x4a0554u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967264)));
label_4a0558:
    // 0x4a0558: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x4a0558u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_4a055c:
    // 0x4a055c: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x4a055cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_4a0560:
    // 0x4a0560: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0560u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0564:
    // 0x4a0564: 0x78a2fff0  lq          $v0, -0x10($a1)
    ctx->pc = 0x4a0564u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967280)));
label_4a0568:
    // 0x4a0568: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x4a0568u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_4a056c:
    // 0x4a056c: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x4a056cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_4a0570:
    // 0x4a0570: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0570u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0574:
    // 0x4a0574: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x4a0574u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_4a0578:
    // 0x4a0578: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x4a0578u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_4a057c:
    // 0x4a057c: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x4a057cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_4a0580:
    // 0x4a0580: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0580u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0584:
    // 0x4a0584: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x4a0584u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_4a0588:
    // 0x4a0588: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x4a0588u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_4a058c:
    // 0x4a058c: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x4a058cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_4a0590:
    // 0x4a0590: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0590u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0594:
    // 0x4a0594: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x4a0594u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_4a0598:
    // 0x4a0598: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x4a0598u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
label_4a059c:
    // 0x4a059c: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x4a059cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_4a05a0:
    // 0x4a05a0: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a05a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a05a4:
    // 0x4a05a4: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x4a05a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_4a05a8:
    // 0x4a05a8: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x4a05a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
label_4a05ac:
    // 0x4a05ac: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x4a05acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_4a05b0:
    // 0x4a05b0: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x4a05b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
label_4a05b4:
    // 0x4a05b4: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x4a05b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_4a05b8:
    // 0x4a05b8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4a05b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_4a05bc:
    // 0x4a05bc: 0x14c7ffdc  bne         $a2, $a3, . + 4 + (-0x24 << 2)
label_4a05c0:
    if (ctx->pc == 0x4A05C0u) {
        ctx->pc = 0x4A05C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A05BCu;
        // 0x4a05c0: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A05C4u;
        goto label_4a05c4;
    }
    ctx->pc = 0x4A05BCu;
    {
        const bool branch_taken_0x4a05bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x4A05C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A05BCu;
        // 0x4a05c0: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a05bc) {
            ctx->pc = 0x4A0530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0530;
        }
    }
    ctx->pc = 0x4A05C4u;
label_4a05c4:
    // 0x4a05c4: 0x0  nop
    ctx->pc = 0x4a05c4u;
    // NOP
label_4a05c8:
    // 0x4a05c8: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x4a05c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a05cc:
    // 0x4a05cc: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x4a05ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
label_4a05d0:
    // 0x4a05d0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a05d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a05d4:
    // 0x4a05d4: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a05d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_4a05d8:
    // 0x4a05d8: 0x1600ffb1  bnez        $s0, . + 4 + (-0x4F << 2)
label_4a05dc:
    if (ctx->pc == 0x4A05DCu) {
        ctx->pc = 0x4A05DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A05D8u;
        // 0x4a05dc: 0x79e80000  lq          $t0, 0x0($t7) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A05E0u;
        goto label_4a05e0;
    }
    ctx->pc = 0x4A05D8u;
    {
        const bool branch_taken_0x4a05d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A05DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A05D8u;
        // 0x4a05dc: 0x79e80000  lq          $t0, 0x0($t7) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a05d8) {
            ctx->pc = 0x4A04A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a04a0;
        }
    }
    ctx->pc = 0x4A05E0u;
label_4a05e0:
    // 0x4a05e0: 0xc127ec8  jal         func_49FB20
label_4a05e4:
    if (ctx->pc == 0x4A05E4u) {
        ctx->pc = 0x4A05E8u;
        goto label_4a05e8;
    }
    ctx->pc = 0x4A05E0u;
    SET_GPR_U32(ctx, 31, 0x4A05E8u);
    ctx->pc = 0x49FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FB20u, 0x4A05E0u, 0x4A05E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A05E8u;
label_4a05e8:
    // 0x4a05e8: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_4a05ec:
    if (ctx->pc == 0x4A05ECu) {
        ctx->pc = 0x4A05ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A05E8u;
        // 0x4a05ec: 0x8f908798  lw          $s0, -0x7868($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A05F0u;
        goto label_4a05f0;
    }
    ctx->pc = 0x4A05E8u;
    {
        const bool branch_taken_0x4a05e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A05ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A05E8u;
        // 0x4a05ec: 0x8f908798  lw          $s0, -0x7868($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a05e8) {
            ctx->pc = 0x4A0620u;
            goto label_4a0620;
        }
    }
    ctx->pc = 0x4A05F0u;
label_4a05f0:
    // 0x4a05f0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a05f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a05f4:
    // 0x4a05f4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4a05f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a05f8:
    // 0x4a05f8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4a05f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4a05fc:
    // 0x4a05fc: 0x212182b  sltu        $v1, $s0, $s2
    ctx->pc = 0x4a05fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_4a0600:
    // 0x4a0600: 0x8e680004  lw          $t0, 0x4($s3)
    ctx->pc = 0x4a0600u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4a0604:
    // 0x4a0604: 0x243800a  movz        $s0, $s2, $v1
    ctx->pc = 0x4a0604u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_4a0608:
    // 0x4a0608: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4a0608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a060c:
    // 0x4a060c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4a060cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a0610:
    // 0x4a0610: 0x40f809  jalr        $v0
label_4a0614:
    if (ctx->pc == 0x4A0614u) {
        ctx->pc = 0x4A0614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0610u;
        // 0x4a0614: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0618u;
        goto label_4a0618;
    }
    ctx->pc = 0x4A0610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A0618u);
        ctx->pc = 0x4A0614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0610u;
        // 0x4a0614: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0610u, 0x4A0618u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A0618u;
label_4a0618:
    // 0x4a0618: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4a061c:
    if (ctx->pc == 0x4A061Cu) {
        ctx->pc = 0x4A0620u;
        goto label_4a0620;
    }
    ctx->pc = 0x4A0618u;
    {
        const bool branch_taken_0x4a0618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a0618) {
            ctx->pc = 0x4A0624u;
            goto label_4a0624;
        }
    }
    ctx->pc = 0x4A0620u;
label_4a0620:
    // 0x4a0620: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4a0620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a0624:
    // 0x4a0624: 0x1600ff90  bnez        $s0, . + 4 + (-0x70 << 2)
label_4a0628:
    if (ctx->pc == 0x4A0628u) {
        ctx->pc = 0x4A0628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0624u;
        // 0x4a0628: 0x3c0a7c00  lui         $t2, 0x7C00 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)31744 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A062Cu;
        goto label_4a062c;
    }
    ctx->pc = 0x4A0624u;
    {
        const bool branch_taken_0x4a0624 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A0628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0624u;
        // 0x4a0628: 0x3c0a7c00  lui         $t2, 0x7C00 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)31744 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0624) {
            ctx->pc = 0x4A0468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0468;
        }
    }
    ctx->pc = 0x4A062Cu;
label_4a062c:
    // 0x4a062c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4a062cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a0630:
    // 0x4a0630: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4a0630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a0634:
    // 0x4a0634: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4a0634u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a0638:
    // 0x4a0638: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4a0638u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a063c:
    // 0x4a063c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x4a063cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a0640:
    // 0x4a0640: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x4a0640u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a0644:
    // 0x4a0644: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a0644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a0648:
    // 0x4a0648: 0x3e00008  jr          $ra
label_4a064c:
    if (ctx->pc == 0x4A064Cu) {
        ctx->pc = 0x4A064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0648u;
        // 0x4a064c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0650u;
        goto label_fallthrough_0x4a0648;
    }
    ctx->pc = 0x4A0648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0648u;
        // 0x4a064c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4a0648:
    ctx->pc = 0x4A0650u;
}
