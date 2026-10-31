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

// Function: sub_00258330
// Address: 0x258330 - 0x2586d8
void sub_00258330_0x258330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258330_0x258330");
#endif

    switch (ctx->pc) {
        case 0x258330u: goto label_258330;
        case 0x258334u: goto label_258334;
        case 0x258338u: goto label_258338;
        case 0x25833cu: goto label_25833c;
        case 0x258340u: goto label_258340;
        case 0x258344u: goto label_258344;
        case 0x258348u: goto label_258348;
        case 0x25834cu: goto label_25834c;
        case 0x258350u: goto label_258350;
        case 0x258354u: goto label_258354;
        case 0x258358u: goto label_258358;
        case 0x25835cu: goto label_25835c;
        case 0x258360u: goto label_258360;
        case 0x258364u: goto label_258364;
        case 0x258368u: goto label_258368;
        case 0x25836cu: goto label_25836c;
        case 0x258370u: goto label_258370;
        case 0x258374u: goto label_258374;
        case 0x258378u: goto label_258378;
        case 0x25837cu: goto label_25837c;
        case 0x258380u: goto label_258380;
        case 0x258384u: goto label_258384;
        case 0x258388u: goto label_258388;
        case 0x25838cu: goto label_25838c;
        case 0x258390u: goto label_258390;
        case 0x258394u: goto label_258394;
        case 0x258398u: goto label_258398;
        case 0x25839cu: goto label_25839c;
        case 0x2583a0u: goto label_2583a0;
        case 0x2583a4u: goto label_2583a4;
        case 0x2583a8u: goto label_2583a8;
        case 0x2583acu: goto label_2583ac;
        case 0x2583b0u: goto label_2583b0;
        case 0x2583b4u: goto label_2583b4;
        case 0x2583b8u: goto label_2583b8;
        case 0x2583bcu: goto label_2583bc;
        case 0x2583c0u: goto label_2583c0;
        case 0x2583c4u: goto label_2583c4;
        case 0x2583c8u: goto label_2583c8;
        case 0x2583ccu: goto label_2583cc;
        case 0x2583d0u: goto label_2583d0;
        case 0x2583d4u: goto label_2583d4;
        case 0x2583d8u: goto label_2583d8;
        case 0x2583dcu: goto label_2583dc;
        case 0x2583e0u: goto label_2583e0;
        case 0x2583e4u: goto label_2583e4;
        case 0x2583e8u: goto label_2583e8;
        case 0x2583ecu: goto label_2583ec;
        case 0x2583f0u: goto label_2583f0;
        case 0x2583f4u: goto label_2583f4;
        case 0x2583f8u: goto label_2583f8;
        case 0x2583fcu: goto label_2583fc;
        case 0x258400u: goto label_258400;
        case 0x258404u: goto label_258404;
        case 0x258408u: goto label_258408;
        case 0x25840cu: goto label_25840c;
        case 0x258410u: goto label_258410;
        case 0x258414u: goto label_258414;
        case 0x258418u: goto label_258418;
        case 0x25841cu: goto label_25841c;
        case 0x258420u: goto label_258420;
        case 0x258424u: goto label_258424;
        case 0x258428u: goto label_258428;
        case 0x25842cu: goto label_25842c;
        case 0x258430u: goto label_258430;
        case 0x258434u: goto label_258434;
        case 0x258438u: goto label_258438;
        case 0x25843cu: goto label_25843c;
        case 0x258440u: goto label_258440;
        case 0x258444u: goto label_258444;
        case 0x258448u: goto label_258448;
        case 0x25844cu: goto label_25844c;
        case 0x258450u: goto label_258450;
        case 0x258454u: goto label_258454;
        case 0x258458u: goto label_258458;
        case 0x25845cu: goto label_25845c;
        case 0x258460u: goto label_258460;
        case 0x258464u: goto label_258464;
        case 0x258468u: goto label_258468;
        case 0x25846cu: goto label_25846c;
        case 0x258470u: goto label_258470;
        case 0x258474u: goto label_258474;
        case 0x258478u: goto label_258478;
        case 0x25847cu: goto label_25847c;
        case 0x258480u: goto label_258480;
        case 0x258484u: goto label_258484;
        case 0x258488u: goto label_258488;
        case 0x25848cu: goto label_25848c;
        case 0x258490u: goto label_258490;
        case 0x258494u: goto label_258494;
        case 0x258498u: goto label_258498;
        case 0x25849cu: goto label_25849c;
        case 0x2584a0u: goto label_2584a0;
        case 0x2584a4u: goto label_2584a4;
        case 0x2584a8u: goto label_2584a8;
        case 0x2584acu: goto label_2584ac;
        case 0x2584b0u: goto label_2584b0;
        case 0x2584b4u: goto label_2584b4;
        case 0x2584b8u: goto label_2584b8;
        case 0x2584bcu: goto label_2584bc;
        case 0x2584c0u: goto label_2584c0;
        case 0x2584c4u: goto label_2584c4;
        case 0x2584c8u: goto label_2584c8;
        case 0x2584ccu: goto label_2584cc;
        case 0x2584d0u: goto label_2584d0;
        case 0x2584d4u: goto label_2584d4;
        case 0x2584d8u: goto label_2584d8;
        case 0x2584dcu: goto label_2584dc;
        case 0x2584e0u: goto label_2584e0;
        case 0x2584e4u: goto label_2584e4;
        case 0x2584e8u: goto label_2584e8;
        case 0x2584ecu: goto label_2584ec;
        case 0x2584f0u: goto label_2584f0;
        case 0x2584f4u: goto label_2584f4;
        case 0x2584f8u: goto label_2584f8;
        case 0x2584fcu: goto label_2584fc;
        case 0x258500u: goto label_258500;
        case 0x258504u: goto label_258504;
        case 0x258508u: goto label_258508;
        case 0x25850cu: goto label_25850c;
        case 0x258510u: goto label_258510;
        case 0x258514u: goto label_258514;
        case 0x258518u: goto label_258518;
        case 0x25851cu: goto label_25851c;
        case 0x258520u: goto label_258520;
        case 0x258524u: goto label_258524;
        case 0x258528u: goto label_258528;
        case 0x25852cu: goto label_25852c;
        case 0x258530u: goto label_258530;
        case 0x258534u: goto label_258534;
        case 0x258538u: goto label_258538;
        case 0x25853cu: goto label_25853c;
        case 0x258540u: goto label_258540;
        case 0x258544u: goto label_258544;
        case 0x258548u: goto label_258548;
        case 0x25854cu: goto label_25854c;
        case 0x258550u: goto label_258550;
        case 0x258554u: goto label_258554;
        case 0x258558u: goto label_258558;
        case 0x25855cu: goto label_25855c;
        case 0x258560u: goto label_258560;
        case 0x258564u: goto label_258564;
        case 0x258568u: goto label_258568;
        case 0x25856cu: goto label_25856c;
        case 0x258570u: goto label_258570;
        case 0x258574u: goto label_258574;
        case 0x258578u: goto label_258578;
        case 0x25857cu: goto label_25857c;
        case 0x258580u: goto label_258580;
        case 0x258584u: goto label_258584;
        case 0x258588u: goto label_258588;
        case 0x25858cu: goto label_25858c;
        case 0x258590u: goto label_258590;
        case 0x258594u: goto label_258594;
        case 0x258598u: goto label_258598;
        case 0x25859cu: goto label_25859c;
        case 0x2585a0u: goto label_2585a0;
        case 0x2585a4u: goto label_2585a4;
        case 0x2585a8u: goto label_2585a8;
        case 0x2585acu: goto label_2585ac;
        case 0x2585b0u: goto label_2585b0;
        case 0x2585b4u: goto label_2585b4;
        case 0x2585b8u: goto label_2585b8;
        case 0x2585bcu: goto label_2585bc;
        case 0x2585c0u: goto label_2585c0;
        case 0x2585c4u: goto label_2585c4;
        case 0x2585c8u: goto label_2585c8;
        case 0x2585ccu: goto label_2585cc;
        case 0x2585d0u: goto label_2585d0;
        case 0x2585d4u: goto label_2585d4;
        case 0x2585d8u: goto label_2585d8;
        case 0x2585dcu: goto label_2585dc;
        case 0x2585e0u: goto label_2585e0;
        case 0x2585e4u: goto label_2585e4;
        case 0x2585e8u: goto label_2585e8;
        case 0x2585ecu: goto label_2585ec;
        case 0x2585f0u: goto label_2585f0;
        case 0x2585f4u: goto label_2585f4;
        case 0x2585f8u: goto label_2585f8;
        case 0x2585fcu: goto label_2585fc;
        case 0x258600u: goto label_258600;
        case 0x258604u: goto label_258604;
        case 0x258608u: goto label_258608;
        case 0x25860cu: goto label_25860c;
        case 0x258610u: goto label_258610;
        case 0x258614u: goto label_258614;
        case 0x258618u: goto label_258618;
        case 0x25861cu: goto label_25861c;
        case 0x258620u: goto label_258620;
        case 0x258624u: goto label_258624;
        case 0x258628u: goto label_258628;
        case 0x25862cu: goto label_25862c;
        case 0x258630u: goto label_258630;
        case 0x258634u: goto label_258634;
        case 0x258638u: goto label_258638;
        case 0x25863cu: goto label_25863c;
        case 0x258640u: goto label_258640;
        case 0x258644u: goto label_258644;
        case 0x258648u: goto label_258648;
        case 0x25864cu: goto label_25864c;
        case 0x258650u: goto label_258650;
        case 0x258654u: goto label_258654;
        case 0x258658u: goto label_258658;
        case 0x25865cu: goto label_25865c;
        case 0x258660u: goto label_258660;
        case 0x258664u: goto label_258664;
        case 0x258668u: goto label_258668;
        case 0x25866cu: goto label_25866c;
        case 0x258670u: goto label_258670;
        case 0x258674u: goto label_258674;
        case 0x258678u: goto label_258678;
        case 0x25867cu: goto label_25867c;
        case 0x258680u: goto label_258680;
        case 0x258684u: goto label_258684;
        case 0x258688u: goto label_258688;
        case 0x25868cu: goto label_25868c;
        case 0x258690u: goto label_258690;
        case 0x258694u: goto label_258694;
        case 0x258698u: goto label_258698;
        case 0x25869cu: goto label_25869c;
        case 0x2586a0u: goto label_2586a0;
        case 0x2586a4u: goto label_2586a4;
        case 0x2586a8u: goto label_2586a8;
        case 0x2586acu: goto label_2586ac;
        case 0x2586b0u: goto label_2586b0;
        case 0x2586b4u: goto label_2586b4;
        case 0x2586b8u: goto label_2586b8;
        case 0x2586bcu: goto label_2586bc;
        case 0x2586c0u: goto label_2586c0;
        case 0x2586c4u: goto label_2586c4;
        case 0x2586c8u: goto label_2586c8;
        case 0x2586ccu: goto label_2586cc;
        case 0x2586d0u: goto label_2586d0;
        case 0x2586d4u: goto label_2586d4;
        default: break;
    }

    ctx->pc = 0x258330u;

label_258330:
    // 0x258330: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x258330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_258334:
    // 0x258334: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x258334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_258338:
    // 0x258338: 0x31e78  dsll        $v1, $v1, 25
    ctx->pc = 0x258338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 25);
label_25833c:
    // 0x25833c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x25833cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_258340:
    // 0x258340: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x258340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_258344:
    // 0x258344: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x258344u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_258348:
    // 0x258348: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x258348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_25834c:
    // 0x25834c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x25834cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_258350:
    // 0x258350: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x258350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_258354:
    // 0x258354: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x258354u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_258358:
    // 0x258358: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x258358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_25835c:
    // 0x25835c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x25835cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_258360:
    // 0x258360: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x258360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_258364:
    // 0x258364: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x258364u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_258368:
    // 0x258368: 0x144000d4  bnez        $v0, . + 4 + (0xD4 << 2)
label_25836c:
    if (ctx->pc == 0x25836Cu) {
        ctx->pc = 0x25836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258368u;
        // 0x25836c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258370u;
        goto label_258370;
    }
    ctx->pc = 0x258368u;
    {
        const bool branch_taken_0x258368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258368u;
        // 0x25836c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258368) {
            ctx->pc = 0x2586BCu;
            goto label_2586bc;
        }
    }
    ctx->pc = 0x258370u;
label_258370:
    // 0x258370: 0xc0e4060  jal         func_390180
label_258374:
    if (ctx->pc == 0x258374u) {
        ctx->pc = 0x258374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258370u;
        // 0x258374: 0x26440364  addiu       $a0, $s2, 0x364 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 868));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258378u;
        goto label_258378;
    }
    ctx->pc = 0x258370u;
    SET_GPR_U32(ctx, 31, 0x258378u);
    ctx->pc = 0x258374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258370u;
    // 0x258374: 0x26440364  addiu       $a0, $s2, 0x364 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 868));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x258370u, 0x258378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258378u;
label_258378:
    // 0x258378: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x258378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25837c:
    // 0x25837c: 0x520000cf  beql        $s0, $zero, . + 4 + (0xCF << 2)
label_258380:
    if (ctx->pc == 0x258380u) {
        ctx->pc = 0x258380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25837Cu;
        // 0x258380: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258384u;
        goto label_258384;
    }
    ctx->pc = 0x25837Cu;
    {
        const bool branch_taken_0x25837c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25837c) {
            ctx->pc = 0x258380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25837Cu;
            // 0x258380: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2586BCu;
            goto label_2586bc;
        }
    }
    ctx->pc = 0x258384u;
label_258384:
    // 0x258384: 0xc0e57ce  jal         func_395F38
label_258388:
    if (ctx->pc == 0x258388u) {
        ctx->pc = 0x258388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258384u;
        // 0x258388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25838Cu;
        goto label_25838c;
    }
    ctx->pc = 0x258384u;
    SET_GPR_U32(ctx, 31, 0x25838Cu);
    ctx->pc = 0x258388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258384u;
    // 0x258388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x258384u, 0x25838Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25838Cu;
label_25838c:
    // 0x25838c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25838cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_258390:
    // 0x258390: 0x122000c9  beqz        $s1, . + 4 + (0xC9 << 2)
label_258394:
    if (ctx->pc == 0x258394u) {
        ctx->pc = 0x258394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258390u;
        // 0x258394: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258398u;
        goto label_258398;
    }
    ctx->pc = 0x258390u;
    {
        const bool branch_taken_0x258390 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x258394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258390u;
        // 0x258394: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258390) {
            ctx->pc = 0x2586B8u;
            goto label_2586b8;
        }
    }
    ctx->pc = 0x258398u;
label_258398:
    // 0x258398: 0x96250112  lhu         $a1, 0x112($s1)
    ctx->pc = 0x258398u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
label_25839c:
    // 0x25839c: 0xc0e44cc  jal         func_391330
label_2583a0:
    if (ctx->pc == 0x2583A0u) {
        ctx->pc = 0x2583A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25839Cu;
        // 0x2583a0: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2583A4u;
        goto label_2583a4;
    }
    ctx->pc = 0x25839Cu;
    SET_GPR_U32(ctx, 31, 0x2583A4u);
    ctx->pc = 0x2583A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25839Cu;
    // 0x2583a0: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x25839Cu, 0x2583A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2583A4u;
label_2583a4:
    // 0x2583a4: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x2583a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_2583a8:
    // 0x2583a8: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x2583a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_2583ac:
    // 0x2583ac: 0x506200c3  beql        $v1, $v0, . + 4 + (0xC3 << 2)
label_2583b0:
    if (ctx->pc == 0x2583B0u) {
        ctx->pc = 0x2583B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2583ACu;
        // 0x2583b0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2583B4u;
        goto label_2583b4;
    }
    ctx->pc = 0x2583ACu;
    {
        const bool branch_taken_0x2583ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2583ac) {
            ctx->pc = 0x2583B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2583ACu;
            // 0x2583b0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2586BCu;
            goto label_2586bc;
        }
    }
    ctx->pc = 0x2583B4u;
label_2583b4:
    // 0x2583b4: 0x8e420668  lw          $v0, 0x668($s2)
    ctx->pc = 0x2583b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1640)));
label_2583b8:
    // 0x2583b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2583b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2583bc:
    // 0x2583bc: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x2583bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2583c0:
    // 0x2583c0: 0x50830026  beql        $a0, $v1, . + 4 + (0x26 << 2)
label_2583c4:
    if (ctx->pc == 0x2583C4u) {
        ctx->pc = 0x2583C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2583C0u;
        // 0x2583c4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2583C8u;
        goto label_2583c8;
    }
    ctx->pc = 0x2583C0u;
    {
        const bool branch_taken_0x2583c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2583c0) {
            ctx->pc = 0x2583C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2583C0u;
            // 0x2583c4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25845Cu;
            goto label_25845c;
        }
    }
    ctx->pc = 0x2583C8u;
label_2583c8:
    // 0x2583c8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2583cc:
    if (ctx->pc == 0x2583CCu) {
        ctx->pc = 0x2583CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2583C8u;
        // 0x2583cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2583D0u;
        goto label_2583d0;
    }
    ctx->pc = 0x2583C8u;
    {
        const bool branch_taken_0x2583c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2583CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2583C8u;
        // 0x2583cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2583c8) {
            ctx->pc = 0x2583E8u;
            goto label_2583e8;
        }
    }
    ctx->pc = 0x2583D0u;
label_2583d0:
    // 0x2583d0: 0x10820032  beq         $a0, $v0, . + 4 + (0x32 << 2)
label_2583d4:
    if (ctx->pc == 0x2583D4u) {
        ctx->pc = 0x2583D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2583D0u;
        // 0x2583d4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2583D8u;
        goto label_2583d8;
    }
    ctx->pc = 0x2583D0u;
    {
        const bool branch_taken_0x2583d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2583D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2583D0u;
        // 0x2583d4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2583d0) {
            ctx->pc = 0x25849Cu;
            goto label_25849c;
        }
    }
    ctx->pc = 0x2583D8u;
label_2583d8:
    // 0x2583d8: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
label_2583dc:
    if (ctx->pc == 0x2583DCu) {
        ctx->pc = 0x2583DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2583D8u;
        // 0x2583dc: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2583E0u;
        goto label_2583e0;
    }
    ctx->pc = 0x2583D8u;
    {
        const bool branch_taken_0x2583d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2583DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2583D8u;
        // 0x2583dc: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2583d8) {
            ctx->pc = 0x25840Cu;
            goto label_25840c;
        }
    }
    ctx->pc = 0x2583E0u;
label_2583e0:
    // 0x2583e0: 0x10000030  b           . + 4 + (0x30 << 2)
label_2583e4:
    if (ctx->pc == 0x2583E4u) {
        ctx->pc = 0x2583E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2583E0u;
        // 0x2583e4: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2583E8u;
        goto label_2583e8;
    }
    ctx->pc = 0x2583E0u;
    {
        const bool branch_taken_0x2583e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2583E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2583E0u;
        // 0x2583e4: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2583e0) {
            ctx->pc = 0x2584A4u;
            goto label_2584a4;
        }
    }
    ctx->pc = 0x2583E8u;
label_2583e8:
    // 0x2583e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2583e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2583ec:
    // 0x2583ec: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2583ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2583f0:
    // 0x2583f0: 0x24421730  addiu       $v0, $v0, 0x1730
    ctx->pc = 0x2583f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5936));
label_2583f4:
    // 0x2583f4: 0x24631720  addiu       $v1, $v1, 0x1720
    ctx->pc = 0x2583f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5920));
label_2583f8:
    // 0x2583f8: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x2583f8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2583fc:
    // 0x2583fc: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x2583fcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_258400:
    // 0x258400: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x258400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_258404:
    // 0x258404: 0x10000044  b           . + 4 + (0x44 << 2)
label_258408:
    if (ctx->pc == 0x258408u) {
        ctx->pc = 0x258408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258404u;
        // 0x258408: 0x7fa50010  sq          $a1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25840Cu;
        goto label_25840c;
    }
    ctx->pc = 0x258404u;
    {
        const bool branch_taken_0x258404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258404u;
        // 0x258408: 0x7fa50010  sq          $a1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258404) {
            ctx->pc = 0x258518u;
            goto label_258518;
        }
    }
    ctx->pc = 0x25840Cu;
label_25840c:
    // 0x25840c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x25840cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_258410:
    // 0x258410: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x258410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_258414:
    // 0x258414: 0x24621720  addiu       $v0, $v1, 0x1720
    ctx->pc = 0x258414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 5920));
label_258418:
    // 0x258418: 0xc4611720  lwc1        $f1, 0x1720($v1)
    ctx->pc = 0x258418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25841c:
    // 0x25841c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x25841cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_258420:
    // 0x258420: 0x24841730  addiu       $a0, $a0, 0x1730
    ctx->pc = 0x258420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5936));
label_258424:
    // 0x258424: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x258424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258428:
    // 0x258428: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x258428u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_25842c:
    // 0x25842c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x25842cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_258430:
    // 0x258430: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x258430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_258434:
    // 0x258434: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x258434u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_258438:
    // 0x258438: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x258438u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_25843c:
    // 0x25843c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x25843cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_258440:
    // 0x258440: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x258440u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_258444:
    // 0x258444: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x258444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_258448:
    // 0x258448: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x258448u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_25844c:
    // 0x25844c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x25844cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_258450:
    // 0x258450: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x258450u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_258454:
    // 0x258454: 0x1000002f  b           . + 4 + (0x2F << 2)
label_258458:
    if (ctx->pc == 0x258458u) {
        ctx->pc = 0x258458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258454u;
        // 0x258458: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25845Cu;
        goto label_25845c;
    }
    ctx->pc = 0x258454u;
    {
        const bool branch_taken_0x258454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258454u;
        // 0x258458: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258454) {
            ctx->pc = 0x258514u;
            goto label_258514;
        }
    }
    ctx->pc = 0x25845Cu;
label_25845c:
    // 0x25845c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x25845cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_258460:
    // 0x258460: 0x24621730  addiu       $v0, $v1, 0x1730
    ctx->pc = 0x258460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 5936));
label_258464:
    // 0x258464: 0xc4611730  lwc1        $f1, 0x1730($v1)
    ctx->pc = 0x258464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_258468:
    // 0x258468: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x258468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25846c:
    // 0x25846c: 0x24841720  addiu       $a0, $a0, 0x1720
    ctx->pc = 0x25846cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5920));
label_258470:
    // 0x258470: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x258470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_258474:
    // 0x258474: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x258474u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_258478:
    // 0x258478: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x258478u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_25847c:
    // 0x25847c: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x25847cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_258480:
    // 0x258480: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x258480u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_258484:
    // 0x258484: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x258484u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_258488:
    // 0x258488: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x258488u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_25848c:
    // 0x25848c: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x25848cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_258490:
    // 0x258490: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x258490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_258494:
    // 0x258494: 0x1000001c  b           . + 4 + (0x1C << 2)
label_258498:
    if (ctx->pc == 0x258498u) {
        ctx->pc = 0x258498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258494u;
        // 0x258498: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25849Cu;
        goto label_25849c;
    }
    ctx->pc = 0x258494u;
    {
        const bool branch_taken_0x258494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258494u;
        // 0x258498: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x258494) {
            ctx->pc = 0x258508u;
            goto label_258508;
        }
    }
    ctx->pc = 0x25849Cu;
label_25849c:
    // 0x25849c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x25849cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2584a0:
    // 0x2584a0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2584a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2584a4:
    // 0x2584a4: 0x24621730  addiu       $v0, $v1, 0x1730
    ctx->pc = 0x2584a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 5936));
label_2584a8:
    // 0x2584a8: 0xc4601730  lwc1        $f0, 0x1730($v1)
    ctx->pc = 0x2584a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2584ac:
    // 0x2584ac: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x2584acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2584b0:
    // 0x2584b0: 0x24a41720  addiu       $a0, $a1, 0x1720
    ctx->pc = 0x2584b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 5920));
label_2584b4:
    // 0x2584b4: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x2584b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2584b8:
    // 0x2584b8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2584b8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2584bc:
    // 0x2584bc: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x2584bcu;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
label_2584c0:
    // 0x2584c0: 0xc446000c  lwc1        $f6, 0xC($v0)
    ctx->pc = 0x2584c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2584c4:
    // 0x2584c4: 0x46002947  neg.s       $f5, $f5
    ctx->pc = 0x2584c4u;
    ctx->f[5] = FPU_NEG_S(ctx->f[5]);
label_2584c8:
    // 0x2584c8: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2584c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2584cc:
    // 0x2584cc: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x2584ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2584d0:
    // 0x2584d0: 0xc4a11720  lwc1        $f1, 0x1720($a1)
    ctx->pc = 0x2584d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 5920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2584d4:
    // 0x2584d4: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2584d4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_2584d8:
    // 0x2584d8: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x2584d8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2584dc:
    // 0x2584dc: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x2584dcu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_2584e0:
    // 0x2584e0: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x2584e0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2584e4:
    // 0x2584e4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2584e4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2584e8:
    // 0x2584e8: 0xe7a6003c  swc1        $f6, 0x3C($sp)
    ctx->pc = 0x2584e8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2584ec:
    // 0x2584ec: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2584ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2584f0:
    // 0x2584f0: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2584f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2584f4:
    // 0x2584f4: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x2584f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2584f8:
    // 0x2584f8: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2584f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2584fc:
    // 0x2584fc: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x2584fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_258500:
    // 0x258500: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x258500u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_258504:
    // 0x258504: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x258504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_258508:
    // 0x258508: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x258508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_25850c:
    // 0x25850c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x25850cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_258510:
    // 0x258510: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x258510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_258514:
    // 0x258514: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x258514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_258518:
    // 0x258518: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x258518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_25851c:
    // 0x25851c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25851cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_258520:
    // 0x258520: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x258520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_258524:
    // 0x258524: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x258524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_258528:
    // 0x258528: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x258528u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_25852c:
    // 0x25852c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x25852cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_258530:
    // 0x258530: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x258530u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_258534:
    // 0x258534: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x258534u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_258538:
    // 0x258538: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x258538u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_25853c:
    // 0x25853c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x25853cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_258540:
    // 0x258540: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x258540u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_258544:
    // 0x258544: 0x84c40078  lh          $a0, 0x78($a2)
    ctx->pc = 0x258544u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 120)));
label_258548:
    // 0x258548: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x258548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_25854c:
    // 0x25854c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x25854cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_258550:
    // 0x258550: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x258550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_258554:
    // 0x258554: 0x8cc3007c  lw          $v1, 0x7C($a2)
    ctx->pc = 0x258554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
label_258558:
    // 0x258558: 0x60f809  jalr        $v1
label_25855c:
    if (ctx->pc == 0x25855Cu) {
        ctx->pc = 0x25855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258558u;
        // 0x25855c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258560u;
        goto label_258560;
    }
    ctx->pc = 0x258558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x258560u);
        ctx->pc = 0x25855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258558u;
        // 0x25855c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258558u, 0x258560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x258560u;
label_258560:
    // 0x258560: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x258560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_258564:
    // 0x258564: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x258564u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_258568:
    // 0x258568: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x258568u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25856c:
    // 0x25856c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25856cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_258570:
    // 0x258570: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x258570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_258574:
    // 0x258574: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x258574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_258578:
    // 0x258578: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x258578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25857c:
    // 0x25857c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x25857cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_258580:
    // 0x258580: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x258580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_258584:
    // 0x258584: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x258584u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_258588:
    // 0x258588: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x258588u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_25858c:
    // 0x25858c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x25858cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_258590:
    // 0x258590: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x258590u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_258594:
    // 0x258594: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x258594u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_258598:
    // 0x258598: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x258598u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_25859c:
    // 0x25859c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x25859cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2585a0:
    // 0x2585a0: 0x4a0003bf  vwaitq
    ctx->pc = 0x2585a0u;
    // VWAITQ (Q already resolved in this runtime)
label_2585a4:
    // 0x2585a4: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x2585a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2585a8:
    // 0x2585a8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2585a8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2585ac:
    // 0x2585ac: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2585acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2585b0:
    // 0x2585b0: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x2585b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_2585b4:
    // 0x2585b4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2585b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2585b8:
    // 0x2585b8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2585b8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_2585bc:
    // 0x2585bc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2585bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2585c0:
    // 0x2585c0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2585c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2585c4:
    // 0x2585c4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2585c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_2585c8:
    // 0x2585c8: 0xc08a5b0  jal         func_2296C0
label_2585cc:
    if (ctx->pc == 0x2585CCu) {
        ctx->pc = 0x2585CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2585C8u;
        // 0x2585cc: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2585D0u;
        goto label_2585d0;
    }
    ctx->pc = 0x2585C8u;
    SET_GPR_U32(ctx, 31, 0x2585D0u);
    ctx->pc = 0x2585CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2585C8u;
    // 0x2585cc: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2296C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2296C0u, 0x2585C8u, 0x2585D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2585D0u;
label_2585d0:
    // 0x2585d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2585d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2585d4:
    // 0x2585d4: 0x8e65489c  lw          $a1, 0x489C($s3)
    ctx->pc = 0x2585d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_2585d8:
    // 0x2585d8: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x2585d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2585dc:
    // 0x2585dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2585dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2585e0:
    // 0x2585e0: 0xae430364  sw          $v1, 0x364($s2)
    ctx->pc = 0x2585e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 868), GPR_U32(ctx, 3));
label_2585e4:
    // 0x2585e4: 0x8ca2035c  lw          $v0, 0x35C($a1)
    ctx->pc = 0x2585e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 860)));
label_2585e8:
    // 0x2585e8: 0x14440029  bne         $v0, $a0, . + 4 + (0x29 << 2)
label_2585ec:
    if (ctx->pc == 0x2585ECu) {
        ctx->pc = 0x2585F0u;
        goto label_2585f0;
    }
    ctx->pc = 0x2585E8u;
    {
        const bool branch_taken_0x2585e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2585e8) {
            ctx->pc = 0x258690u;
            goto label_258690;
        }
    }
    ctx->pc = 0x2585F0u;
label_2585f0:
    // 0x2585f0: 0x3c02bbbe  lui         $v0, 0xBBBE
    ctx->pc = 0x2585f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48062 << 16));
label_2585f4:
    // 0x2585f4: 0x8e3000c4  lw          $s0, 0xC4($s1)
    ctx->pc = 0x2585f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_2585f8:
    // 0x2585f8: 0x3442f927  ori         $v0, $v0, 0xF927
    ctx->pc = 0x2585f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63783);
label_2585fc:
    // 0x2585fc: 0x12020024  beq         $s0, $v0, . + 4 + (0x24 << 2)
label_258600:
    if (ctx->pc == 0x258600u) {
        ctx->pc = 0x258600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2585FCu;
        // 0x258600: 0x3c020331  lui         $v0, 0x331 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)817 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258604u;
        goto label_258604;
    }
    ctx->pc = 0x2585FCu;
    {
        const bool branch_taken_0x2585fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x258600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2585FCu;
        // 0x258600: 0x3c020331  lui         $v0, 0x331 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)817 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2585fc) {
            ctx->pc = 0x258690u;
            goto label_258690;
        }
    }
    ctx->pc = 0x258604u;
label_258604:
    // 0x258604: 0x3442fd29  ori         $v0, $v0, 0xFD29
    ctx->pc = 0x258604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64809);
label_258608:
    // 0x258608: 0x12020014  beq         $s0, $v0, . + 4 + (0x14 << 2)
label_25860c:
    if (ctx->pc == 0x25860Cu) {
        ctx->pc = 0x25860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258608u;
        // 0x25860c: 0x3c0250e8  lui         $v0, 0x50E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20712 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258610u;
        goto label_258610;
    }
    ctx->pc = 0x258608u;
    {
        const bool branch_taken_0x258608 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x25860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258608u;
        // 0x25860c: 0x3c0250e8  lui         $v0, 0x50E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20712 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258608) {
            ctx->pc = 0x25865Cu;
            goto label_25865c;
        }
    }
    ctx->pc = 0x258610u;
label_258610:
    // 0x258610: 0x3442de39  ori         $v0, $v0, 0xDE39
    ctx->pc = 0x258610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56889);
label_258614:
    // 0x258614: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
label_258618:
    if (ctx->pc == 0x258618u) {
        ctx->pc = 0x258618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258614u;
        // 0x258618: 0x3c0217d7  lui         $v0, 0x17D7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25861Cu;
        goto label_25861c;
    }
    ctx->pc = 0x258614u;
    {
        const bool branch_taken_0x258614 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x258618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258614u;
        // 0x258618: 0x3c0217d7  lui         $v0, 0x17D7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258614) {
            ctx->pc = 0x25865Cu;
            goto label_25865c;
        }
    }
    ctx->pc = 0x25861Cu;
label_25861c:
    // 0x25861c: 0x3442194b  ori         $v0, $v0, 0x194B
    ctx->pc = 0x25861cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6475);
label_258620:
    // 0x258620: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
label_258624:
    if (ctx->pc == 0x258624u) {
        ctx->pc = 0x258624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258620u;
        // 0x258624: 0x3c021d5e  lui         $v0, 0x1D5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7518 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258628u;
        goto label_258628;
    }
    ctx->pc = 0x258620u;
    {
        const bool branch_taken_0x258620 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x258624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258620u;
        // 0x258624: 0x3c021d5e  lui         $v0, 0x1D5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7518 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258620) {
            ctx->pc = 0x25865Cu;
            goto label_25865c;
        }
    }
    ctx->pc = 0x258628u;
label_258628:
    // 0x258628: 0x3442e290  ori         $v0, $v0, 0xE290
    ctx->pc = 0x258628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58000);
label_25862c:
    // 0x25862c: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
label_258630:
    if (ctx->pc == 0x258630u) {
        ctx->pc = 0x258630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25862Cu;
        // 0x258630: 0x8e62489c  lw          $v0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258634u;
        goto label_258634;
    }
    ctx->pc = 0x25862Cu;
    {
        const bool branch_taken_0x25862c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x258630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25862Cu;
        // 0x258630: 0x8e62489c  lw          $v0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25862c) {
            ctx->pc = 0x258648u;
            goto label_258648;
        }
    }
    ctx->pc = 0x258634u;
label_258634:
    // 0x258634: 0xc0874fa  jal         func_21D3E8
label_258638:
    if (ctx->pc == 0x258638u) {
        ctx->pc = 0x258638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258634u;
        // 0x258638: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25863Cu;
        goto label_25863c;
    }
    ctx->pc = 0x258634u;
    SET_GPR_U32(ctx, 31, 0x25863Cu);
    ctx->pc = 0x258638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258634u;
    // 0x258638: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x258634u, 0x25863Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25863Cu;
label_25863c:
    // 0x25863c: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x25863cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_258640:
    // 0x258640: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_258644:
    if (ctx->pc == 0x258644u) {
        ctx->pc = 0x258644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258640u;
        // 0x258644: 0x8e62489c  lw          $v0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258648u;
        goto label_258648;
    }
    ctx->pc = 0x258640u;
    {
        const bool branch_taken_0x258640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x258644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258640u;
        // 0x258644: 0x8e62489c  lw          $v0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258640) {
            ctx->pc = 0x25865Cu;
            goto label_25865c;
        }
    }
    ctx->pc = 0x258648u;
label_258648:
    // 0x258648: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25864c:
    // 0x25864c: 0xc0e5748  jal         func_395D20
label_258650:
    if (ctx->pc == 0x258650u) {
        ctx->pc = 0x258650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25864Cu;
        // 0x258650: 0x8c45026c  lw          $a1, 0x26C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258654u;
        goto label_258654;
    }
    ctx->pc = 0x25864Cu;
    SET_GPR_U32(ctx, 31, 0x258654u);
    ctx->pc = 0x258650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25864Cu;
    // 0x258650: 0x8c45026c  lw          $a1, 0x26C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395D20u, 0x25864Cu, 0x258654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258654u;
label_258654:
    // 0x258654: 0x1000000e  b           . + 4 + (0xE << 2)
label_258658:
    if (ctx->pc == 0x258658u) {
        ctx->pc = 0x25865Cu;
        goto label_25865c;
    }
    ctx->pc = 0x258654u;
    {
        const bool branch_taken_0x258654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258654) {
            ctx->pc = 0x258690u;
            goto label_258690;
        }
    }
    ctx->pc = 0x25865Cu;
label_25865c:
    // 0x25865c: 0xc0874fa  jal         func_21D3E8
label_258660:
    if (ctx->pc == 0x258660u) {
        ctx->pc = 0x258660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25865Cu;
        // 0x258660: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258664u;
        goto label_258664;
    }
    ctx->pc = 0x25865Cu;
    SET_GPR_U32(ctx, 31, 0x258664u);
    ctx->pc = 0x258660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25865Cu;
    // 0x258660: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x25865Cu, 0x258664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258664u;
label_258664:
    // 0x258664: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x258664u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_258668:
    // 0x258668: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_25866c:
    if (ctx->pc == 0x25866Cu) {
        ctx->pc = 0x25866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258668u;
        // 0x25866c: 0x3c020331  lui         $v0, 0x331 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)817 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258670u;
        goto label_258670;
    }
    ctx->pc = 0x258668u;
    {
        const bool branch_taken_0x258668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258668u;
        // 0x25866c: 0x3c020331  lui         $v0, 0x331 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)817 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258668) {
            ctx->pc = 0x258690u;
            goto label_258690;
        }
    }
    ctx->pc = 0x258670u;
label_258670:
    // 0x258670: 0x3442fd29  ori         $v0, $v0, 0xFD29
    ctx->pc = 0x258670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64809);
label_258674:
    // 0x258674: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
label_258678:
    if (ctx->pc == 0x258678u) {
        ctx->pc = 0x258678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258674u;
        // 0x258678: 0x3c021d5e  lui         $v0, 0x1D5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7518 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25867Cu;
        goto label_25867c;
    }
    ctx->pc = 0x258674u;
    {
        const bool branch_taken_0x258674 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x258678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258674u;
        // 0x258678: 0x3c021d5e  lui         $v0, 0x1D5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7518 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258674) {
            ctx->pc = 0x258690u;
            goto label_258690;
        }
    }
    ctx->pc = 0x25867Cu;
label_25867c:
    // 0x25867c: 0x3442e290  ori         $v0, $v0, 0xE290
    ctx->pc = 0x25867cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58000);
label_258680:
    // 0x258680: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_258684:
    if (ctx->pc == 0x258684u) {
        ctx->pc = 0x258684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258680u;
        // 0x258684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258688u;
        goto label_258688;
    }
    ctx->pc = 0x258680u;
    {
        const bool branch_taken_0x258680 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x258684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258680u;
        // 0x258684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258680) {
            ctx->pc = 0x258690u;
            goto label_258690;
        }
    }
    ctx->pc = 0x258688u;
label_258688:
    // 0x258688: 0xc0e5748  jal         func_395D20
label_25868c:
    if (ctx->pc == 0x25868Cu) {
        ctx->pc = 0x25868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258688u;
        // 0x25868c: 0x24051f40  addiu       $a1, $zero, 0x1F40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258690u;
        goto label_258690;
    }
    ctx->pc = 0x258688u;
    SET_GPR_U32(ctx, 31, 0x258690u);
    ctx->pc = 0x25868Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258688u;
    // 0x25868c: 0x24051f40  addiu       $a1, $zero, 0x1F40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395D20u, 0x258688u, 0x258690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258690u;
label_258690:
    // 0x258690: 0xc087502  jal         func_21D408
label_258694:
    if (ctx->pc == 0x258694u) {
        ctx->pc = 0x258694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258690u;
        // 0x258694: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258698u;
        goto label_258698;
    }
    ctx->pc = 0x258690u;
    SET_GPR_U32(ctx, 31, 0x258698u);
    ctx->pc = 0x258694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258690u;
    // 0x258694: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x258690u, 0x258698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258698u;
label_258698:
    // 0x258698: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x258698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_25869c:
    // 0x25869c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x25869cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2586a0:
    // 0x2586a0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2586a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2586a4:
    // 0x2586a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2586a8:
    if (ctx->pc == 0x2586A8u) {
        ctx->pc = 0x2586A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2586A4u;
        // 0x2586a8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2586ACu;
        goto label_2586ac;
    }
    ctx->pc = 0x2586A4u;
    {
        const bool branch_taken_0x2586a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2586A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2586A4u;
        // 0x2586a8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2586a4) {
            ctx->pc = 0x2586BCu;
            goto label_2586bc;
        }
    }
    ctx->pc = 0x2586ACu;
label_2586ac:
    // 0x2586ac: 0x9222010b  lbu         $v0, 0x10B($s1)
    ctx->pc = 0x2586acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 267)));
label_2586b0:
    // 0x2586b0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_2586b4:
    if (ctx->pc == 0x2586B4u) {
        ctx->pc = 0x2586B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2586B0u;
        // 0x2586b4: 0xa223010b  sb          $v1, 0x10B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 267), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2586B8u;
        goto label_2586b8;
    }
    ctx->pc = 0x2586B0u;
    {
        const bool branch_taken_0x2586b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2586b0) {
            ctx->pc = 0x2586B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2586B0u;
            // 0x2586b4: 0xa223010b  sb          $v1, 0x10B($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 267), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2586BCu;
            goto label_2586bc;
        }
    }
    ctx->pc = 0x2586B8u;
label_2586b8:
    // 0x2586b8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2586b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2586bc:
    // 0x2586bc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2586bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2586c0:
    // 0x2586c0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2586c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2586c4:
    // 0x2586c4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2586c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2586c8:
    // 0x2586c8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2586c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2586cc:
    // 0x2586cc: 0x3e00008  jr          $ra
label_2586d0:
    if (ctx->pc == 0x2586D0u) {
        ctx->pc = 0x2586D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2586CCu;
        // 0x2586d0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2586D4u;
        goto label_2586d4;
    }
    ctx->pc = 0x2586CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2586D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2586CCu;
        // 0x2586d0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2586CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2586D4u;
label_2586d4:
    // 0x2586d4: 0x0  nop
    ctx->pc = 0x2586d4u;
    // NOP
    ctx->pc = 0x2586d8u;
}
