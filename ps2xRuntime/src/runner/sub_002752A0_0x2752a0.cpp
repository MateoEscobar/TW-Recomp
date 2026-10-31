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

// Function: sub_002752A0
// Address: 0x2752a0 - 0x275678
void sub_002752A0_0x2752a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002752A0_0x2752a0");
#endif

    switch (ctx->pc) {
        case 0x2752a0u: goto label_2752a0;
        case 0x2752a4u: goto label_2752a4;
        case 0x2752a8u: goto label_2752a8;
        case 0x2752acu: goto label_2752ac;
        case 0x2752b0u: goto label_2752b0;
        case 0x2752b4u: goto label_2752b4;
        case 0x2752b8u: goto label_2752b8;
        case 0x2752bcu: goto label_2752bc;
        case 0x2752c0u: goto label_2752c0;
        case 0x2752c4u: goto label_2752c4;
        case 0x2752c8u: goto label_2752c8;
        case 0x2752ccu: goto label_2752cc;
        case 0x2752d0u: goto label_2752d0;
        case 0x2752d4u: goto label_2752d4;
        case 0x2752d8u: goto label_2752d8;
        case 0x2752dcu: goto label_2752dc;
        case 0x2752e0u: goto label_2752e0;
        case 0x2752e4u: goto label_2752e4;
        case 0x2752e8u: goto label_2752e8;
        case 0x2752ecu: goto label_2752ec;
        case 0x2752f0u: goto label_2752f0;
        case 0x2752f4u: goto label_2752f4;
        case 0x2752f8u: goto label_2752f8;
        case 0x2752fcu: goto label_2752fc;
        case 0x275300u: goto label_275300;
        case 0x275304u: goto label_275304;
        case 0x275308u: goto label_275308;
        case 0x27530cu: goto label_27530c;
        case 0x275310u: goto label_275310;
        case 0x275314u: goto label_275314;
        case 0x275318u: goto label_275318;
        case 0x27531cu: goto label_27531c;
        case 0x275320u: goto label_275320;
        case 0x275324u: goto label_275324;
        case 0x275328u: goto label_275328;
        case 0x27532cu: goto label_27532c;
        case 0x275330u: goto label_275330;
        case 0x275334u: goto label_275334;
        case 0x275338u: goto label_275338;
        case 0x27533cu: goto label_27533c;
        case 0x275340u: goto label_275340;
        case 0x275344u: goto label_275344;
        case 0x275348u: goto label_275348;
        case 0x27534cu: goto label_27534c;
        case 0x275350u: goto label_275350;
        case 0x275354u: goto label_275354;
        case 0x275358u: goto label_275358;
        case 0x27535cu: goto label_27535c;
        case 0x275360u: goto label_275360;
        case 0x275364u: goto label_275364;
        case 0x275368u: goto label_275368;
        case 0x27536cu: goto label_27536c;
        case 0x275370u: goto label_275370;
        case 0x275374u: goto label_275374;
        case 0x275378u: goto label_275378;
        case 0x27537cu: goto label_27537c;
        case 0x275380u: goto label_275380;
        case 0x275384u: goto label_275384;
        case 0x275388u: goto label_275388;
        case 0x27538cu: goto label_27538c;
        case 0x275390u: goto label_275390;
        case 0x275394u: goto label_275394;
        case 0x275398u: goto label_275398;
        case 0x27539cu: goto label_27539c;
        case 0x2753a0u: goto label_2753a0;
        case 0x2753a4u: goto label_2753a4;
        case 0x2753a8u: goto label_2753a8;
        case 0x2753acu: goto label_2753ac;
        case 0x2753b0u: goto label_2753b0;
        case 0x2753b4u: goto label_2753b4;
        case 0x2753b8u: goto label_2753b8;
        case 0x2753bcu: goto label_2753bc;
        case 0x2753c0u: goto label_2753c0;
        case 0x2753c4u: goto label_2753c4;
        case 0x2753c8u: goto label_2753c8;
        case 0x2753ccu: goto label_2753cc;
        case 0x2753d0u: goto label_2753d0;
        case 0x2753d4u: goto label_2753d4;
        case 0x2753d8u: goto label_2753d8;
        case 0x2753dcu: goto label_2753dc;
        case 0x2753e0u: goto label_2753e0;
        case 0x2753e4u: goto label_2753e4;
        case 0x2753e8u: goto label_2753e8;
        case 0x2753ecu: goto label_2753ec;
        case 0x2753f0u: goto label_2753f0;
        case 0x2753f4u: goto label_2753f4;
        case 0x2753f8u: goto label_2753f8;
        case 0x2753fcu: goto label_2753fc;
        case 0x275400u: goto label_275400;
        case 0x275404u: goto label_275404;
        case 0x275408u: goto label_275408;
        case 0x27540cu: goto label_27540c;
        case 0x275410u: goto label_275410;
        case 0x275414u: goto label_275414;
        case 0x275418u: goto label_275418;
        case 0x27541cu: goto label_27541c;
        case 0x275420u: goto label_275420;
        case 0x275424u: goto label_275424;
        case 0x275428u: goto label_275428;
        case 0x27542cu: goto label_27542c;
        case 0x275430u: goto label_275430;
        case 0x275434u: goto label_275434;
        case 0x275438u: goto label_275438;
        case 0x27543cu: goto label_27543c;
        case 0x275440u: goto label_275440;
        case 0x275444u: goto label_275444;
        case 0x275448u: goto label_275448;
        case 0x27544cu: goto label_27544c;
        case 0x275450u: goto label_275450;
        case 0x275454u: goto label_275454;
        case 0x275458u: goto label_275458;
        case 0x27545cu: goto label_27545c;
        case 0x275460u: goto label_275460;
        case 0x275464u: goto label_275464;
        case 0x275468u: goto label_275468;
        case 0x27546cu: goto label_27546c;
        case 0x275470u: goto label_275470;
        case 0x275474u: goto label_275474;
        case 0x275478u: goto label_275478;
        case 0x27547cu: goto label_27547c;
        case 0x275480u: goto label_275480;
        case 0x275484u: goto label_275484;
        case 0x275488u: goto label_275488;
        case 0x27548cu: goto label_27548c;
        case 0x275490u: goto label_275490;
        case 0x275494u: goto label_275494;
        case 0x275498u: goto label_275498;
        case 0x27549cu: goto label_27549c;
        case 0x2754a0u: goto label_2754a0;
        case 0x2754a4u: goto label_2754a4;
        case 0x2754a8u: goto label_2754a8;
        case 0x2754acu: goto label_2754ac;
        case 0x2754b0u: goto label_2754b0;
        case 0x2754b4u: goto label_2754b4;
        case 0x2754b8u: goto label_2754b8;
        case 0x2754bcu: goto label_2754bc;
        case 0x2754c0u: goto label_2754c0;
        case 0x2754c4u: goto label_2754c4;
        case 0x2754c8u: goto label_2754c8;
        case 0x2754ccu: goto label_2754cc;
        case 0x2754d0u: goto label_2754d0;
        case 0x2754d4u: goto label_2754d4;
        case 0x2754d8u: goto label_2754d8;
        case 0x2754dcu: goto label_2754dc;
        case 0x2754e0u: goto label_2754e0;
        case 0x2754e4u: goto label_2754e4;
        case 0x2754e8u: goto label_2754e8;
        case 0x2754ecu: goto label_2754ec;
        case 0x2754f0u: goto label_2754f0;
        case 0x2754f4u: goto label_2754f4;
        case 0x2754f8u: goto label_2754f8;
        case 0x2754fcu: goto label_2754fc;
        case 0x275500u: goto label_275500;
        case 0x275504u: goto label_275504;
        case 0x275508u: goto label_275508;
        case 0x27550cu: goto label_27550c;
        case 0x275510u: goto label_275510;
        case 0x275514u: goto label_275514;
        case 0x275518u: goto label_275518;
        case 0x27551cu: goto label_27551c;
        case 0x275520u: goto label_275520;
        case 0x275524u: goto label_275524;
        case 0x275528u: goto label_275528;
        case 0x27552cu: goto label_27552c;
        case 0x275530u: goto label_275530;
        case 0x275534u: goto label_275534;
        case 0x275538u: goto label_275538;
        case 0x27553cu: goto label_27553c;
        case 0x275540u: goto label_275540;
        case 0x275544u: goto label_275544;
        case 0x275548u: goto label_275548;
        case 0x27554cu: goto label_27554c;
        case 0x275550u: goto label_275550;
        case 0x275554u: goto label_275554;
        case 0x275558u: goto label_275558;
        case 0x27555cu: goto label_27555c;
        case 0x275560u: goto label_275560;
        case 0x275564u: goto label_275564;
        case 0x275568u: goto label_275568;
        case 0x27556cu: goto label_27556c;
        case 0x275570u: goto label_275570;
        case 0x275574u: goto label_275574;
        case 0x275578u: goto label_275578;
        case 0x27557cu: goto label_27557c;
        case 0x275580u: goto label_275580;
        case 0x275584u: goto label_275584;
        case 0x275588u: goto label_275588;
        case 0x27558cu: goto label_27558c;
        case 0x275590u: goto label_275590;
        case 0x275594u: goto label_275594;
        case 0x275598u: goto label_275598;
        case 0x27559cu: goto label_27559c;
        case 0x2755a0u: goto label_2755a0;
        case 0x2755a4u: goto label_2755a4;
        case 0x2755a8u: goto label_2755a8;
        case 0x2755acu: goto label_2755ac;
        case 0x2755b0u: goto label_2755b0;
        case 0x2755b4u: goto label_2755b4;
        case 0x2755b8u: goto label_2755b8;
        case 0x2755bcu: goto label_2755bc;
        case 0x2755c0u: goto label_2755c0;
        case 0x2755c4u: goto label_2755c4;
        case 0x2755c8u: goto label_2755c8;
        case 0x2755ccu: goto label_2755cc;
        case 0x2755d0u: goto label_2755d0;
        case 0x2755d4u: goto label_2755d4;
        case 0x2755d8u: goto label_2755d8;
        case 0x2755dcu: goto label_2755dc;
        case 0x2755e0u: goto label_2755e0;
        case 0x2755e4u: goto label_2755e4;
        case 0x2755e8u: goto label_2755e8;
        case 0x2755ecu: goto label_2755ec;
        case 0x2755f0u: goto label_2755f0;
        case 0x2755f4u: goto label_2755f4;
        case 0x2755f8u: goto label_2755f8;
        case 0x2755fcu: goto label_2755fc;
        case 0x275600u: goto label_275600;
        case 0x275604u: goto label_275604;
        case 0x275608u: goto label_275608;
        case 0x27560cu: goto label_27560c;
        case 0x275610u: goto label_275610;
        case 0x275614u: goto label_275614;
        case 0x275618u: goto label_275618;
        case 0x27561cu: goto label_27561c;
        case 0x275620u: goto label_275620;
        case 0x275624u: goto label_275624;
        case 0x275628u: goto label_275628;
        case 0x27562cu: goto label_27562c;
        case 0x275630u: goto label_275630;
        case 0x275634u: goto label_275634;
        case 0x275638u: goto label_275638;
        case 0x27563cu: goto label_27563c;
        case 0x275640u: goto label_275640;
        case 0x275644u: goto label_275644;
        case 0x275648u: goto label_275648;
        case 0x27564cu: goto label_27564c;
        case 0x275650u: goto label_275650;
        case 0x275654u: goto label_275654;
        case 0x275658u: goto label_275658;
        case 0x27565cu: goto label_27565c;
        case 0x275660u: goto label_275660;
        case 0x275664u: goto label_275664;
        case 0x275668u: goto label_275668;
        case 0x27566cu: goto label_27566c;
        case 0x275670u: goto label_275670;
        case 0x275674u: goto label_275674;
        default: break;
    }

    ctx->pc = 0x2752a0u;

label_2752a0:
    // 0x2752a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2752a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2752a4:
    // 0x2752a4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2752a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_2752a8:
    // 0x2752a8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2752a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2752ac:
    // 0x2752ac: 0x3406fffd  ori         $a2, $zero, 0xFFFD
    ctx->pc = 0x2752acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
label_2752b0:
    // 0x2752b0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2752b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2752b4:
    // 0x2752b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2752b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2752b8:
    // 0x2752b8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2752b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2752bc:
    // 0x2752bc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2752bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2752c0:
    // 0x2752c0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2752c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2752c4:
    // 0x2752c4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2752c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2752c8:
    // 0x2752c8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2752c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_2752cc:
    // 0x2752cc: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2752ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_2752d0:
    // 0x2752d0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2752d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_2752d4:
    // 0x2752d4: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2752d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_2752d8:
    // 0x2752d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2752d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2752dc:
    // 0x2752dc: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2752dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2752e0:
    // 0x2752e0: 0x8c477198  lw          $a3, 0x7198($v0)
    ctx->pc = 0x2752e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
label_2752e4:
    // 0x2752e4: 0x94e20010  lhu         $v0, 0x10($a3)
    ctx->pc = 0x2752e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 16)));
label_2752e8:
    // 0x2752e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2752e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2752ec:
    // 0x2752ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2752ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2752f0:
    // 0x2752f0: 0xc3302b  sltu        $a2, $a2, $v1
    ctx->pc = 0x2752f0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2752f4:
    // 0x2752f4: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_2752f8:
    if (ctx->pc == 0x2752F8u) {
        ctx->pc = 0x2752F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2752F4u;
        // 0x2752f8: 0xa4e20010  sh          $v0, 0x10($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2752FCu;
        goto label_2752fc;
    }
    ctx->pc = 0x2752F4u;
    {
        const bool branch_taken_0x2752f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2752F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2752F4u;
        // 0x2752f8: 0xa4e20010  sh          $v0, 0x10($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2752f4) {
            ctx->pc = 0x275304u;
            goto label_275304;
        }
    }
    ctx->pc = 0x2752FCu;
label_2752fc:
    // 0x2752fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2752fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_275300:
    // 0x275300: 0xa4e20010  sh          $v0, 0x10($a3)
    ctx->pc = 0x275300u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 16), (uint16_t)GPR_U32(ctx, 2));
label_275304:
    // 0x275304: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x275304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_275308:
    // 0x275308: 0x94f00010  lhu         $s0, 0x10($a3)
    ctx->pc = 0x275308u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 16)));
label_27530c:
    // 0x27530c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x27530cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_275310:
    // 0x275310: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x275310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_275314:
    // 0x275314: 0x40f809  jalr        $v0
label_275318:
    if (ctx->pc == 0x275318u) {
        ctx->pc = 0x275318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275314u;
        // 0x275318: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27531Cu;
        goto label_27531c;
    }
    ctx->pc = 0x275314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27531Cu);
        ctx->pc = 0x275318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275314u;
        // 0x275318: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275314u, 0x27531Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27531Cu;
label_27531c:
    // 0x27531c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_275320:
    if (ctx->pc == 0x275320u) {
        ctx->pc = 0x275320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27531Cu;
        // 0x275320: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275324u;
        goto label_275324;
    }
    ctx->pc = 0x27531Cu;
    {
        const bool branch_taken_0x27531c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27531c) {
            ctx->pc = 0x275320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27531Cu;
            // 0x275320: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275340u;
            goto label_275340;
        }
    }
    ctx->pc = 0x275324u;
label_275324:
    // 0x275324: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x275324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_275328:
    // 0x275328: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x275328u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_27532c:
    // 0x27532c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x27532cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_275330:
    // 0x275330: 0x40f809  jalr        $v0
label_275334:
    if (ctx->pc == 0x275334u) {
        ctx->pc = 0x275334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275330u;
        // 0x275334: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275338u;
        goto label_275338;
    }
    ctx->pc = 0x275330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x275338u);
        ctx->pc = 0x275334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275330u;
        // 0x275334: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275330u, 0x275338u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x275338u;
label_275338:
    // 0x275338: 0xa450003c  sh          $s0, 0x3C($v0)
    ctx->pc = 0x275338u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 16));
label_27533c:
    // 0x27533c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x27533cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_275340:
    // 0x275340: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x275340u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_275344:
    // 0x275344: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x275344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_275348:
    // 0x275348: 0x40f809  jalr        $v0
label_27534c:
    if (ctx->pc == 0x27534Cu) {
        ctx->pc = 0x27534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275348u;
        // 0x27534c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275350u;
        goto label_275350;
    }
    ctx->pc = 0x275348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x275350u);
        ctx->pc = 0x27534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275348u;
        // 0x27534c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275348u, 0x275350u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x275350u;
label_275350:
    // 0x275350: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_275354:
    if (ctx->pc == 0x275354u) {
        ctx->pc = 0x275358u;
        goto label_275358;
    }
    ctx->pc = 0x275350u;
    {
        const bool branch_taken_0x275350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x275350) {
            ctx->pc = 0x275370u;
            goto label_275370;
        }
    }
    ctx->pc = 0x275358u;
label_275358:
    // 0x275358: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x275358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_27535c:
    // 0x27535c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x27535cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_275360:
    // 0x275360: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x275360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_275364:
    // 0x275364: 0x40f809  jalr        $v0
label_275368:
    if (ctx->pc == 0x275368u) {
        ctx->pc = 0x275368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275364u;
        // 0x275368: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27536Cu;
        goto label_27536c;
    }
    ctx->pc = 0x275364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27536Cu);
        ctx->pc = 0x275368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275364u;
        // 0x275368: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275364u, 0x27536Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27536Cu;
label_27536c:
    // 0x27536c: 0xa450003c  sh          $s0, 0x3C($v0)
    ctx->pc = 0x27536cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 16));
label_275370:
    // 0x275370: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x275370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_275374:
    // 0x275374: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x275374u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_275378:
    // 0x275378: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x275378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27537c:
    // 0x27537c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27537cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275380:
    // 0x275380: 0x2407015f  addiu       $a3, $zero, 0x15F
    ctx->pc = 0x275380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
label_275384:
    // 0x275384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_275388:
    // 0x275388: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x275388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_27538c:
    // 0x27538c: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x27538cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_275390:
    // 0x275390: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x275390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_275394:
    // 0x275394: 0xc09d59e  jal         func_275678
label_275398:
    if (ctx->pc == 0x275398u) {
        ctx->pc = 0x275398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275394u;
        // 0x275398: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27539Cu;
        goto label_27539c;
    }
    ctx->pc = 0x275394u;
    SET_GPR_U32(ctx, 31, 0x27539Cu);
    ctx->pc = 0x275398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275394u;
    // 0x275398: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275678u, 0x275394u, 0x27539Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27539Cu;
label_27539c:
    // 0x27539c: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x27539cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_2753a0:
    // 0x2753a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2753a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2753a4:
    // 0x2753a4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2753a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2753a8:
    // 0x2753a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2753a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2753ac:
    // 0x2753ac: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x2753acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2753b0:
    // 0x2753b0: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x2753b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_2753b4:
    // 0x2753b4: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x2753b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_2753b8:
    // 0x2753b8: 0x40f809  jalr        $v0
label_2753bc:
    if (ctx->pc == 0x2753BCu) {
        ctx->pc = 0x2753BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753B8u;
        // 0x2753bc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2753C0u;
        goto label_2753c0;
    }
    ctx->pc = 0x2753B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2753C0u);
        ctx->pc = 0x2753BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753B8u;
        // 0x2753bc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2753B8u, 0x2753C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2753C0u;
label_2753c0:
    // 0x2753c0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2753c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2753c4:
    // 0x2753c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2753c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2753c8:
    // 0x2753c8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2753c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2753cc:
    // 0x2753cc: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x2753ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_2753d0:
    // 0x2753d0: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x2753d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_2753d4:
    // 0x2753d4: 0x40f809  jalr        $v0
label_2753d8:
    if (ctx->pc == 0x2753D8u) {
        ctx->pc = 0x2753D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753D4u;
        // 0x2753d8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2753DCu;
        goto label_2753dc;
    }
    ctx->pc = 0x2753D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2753DCu);
        ctx->pc = 0x2753D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753D4u;
        // 0x2753d8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2753D4u, 0x2753DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2753DCu;
label_2753dc:
    // 0x2753dc: 0x8e09bd30  lw          $t1, -0x42D0($s0)
    ctx->pc = 0x2753dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950192)));
label_2753e0:
    // 0x2753e0: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x2753e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_2753e4:
    // 0x2753e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2753e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2753e8:
    // 0x2753e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2753e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2753ec:
    // 0x2753ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2753ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2753f0:
    // 0x2753f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2753f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2753f4:
    // 0x2753f4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2753f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2753f8:
    // 0x2753f8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2753f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2753fc:
    // 0x2753fc: 0xc088178  jal         func_2205E0
label_275400:
    if (ctx->pc == 0x275400u) {
        ctx->pc = 0x275400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753FCu;
        // 0x275400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275404u;
        goto label_275404;
    }
    ctx->pc = 0x2753FCu;
    SET_GPR_U32(ctx, 31, 0x275404u);
    ctx->pc = 0x275400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2753FCu;
    // 0x275400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2753FCu, 0x275404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275404u;
label_275404:
    // 0x275404: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x275404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_275408:
    // 0x275408: 0x8e3300d8  lw          $s3, 0xD8($s1)
    ctx->pc = 0x275408u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_27540c:
    // 0x27540c: 0x2450e568  addiu       $s0, $v0, -0x1A98
    ctx->pc = 0x27540cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960488));
label_275410:
    // 0x275410: 0xc041532  jal         func_1054C8
label_275414:
    if (ctx->pc == 0x275414u) {
        ctx->pc = 0x275414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275410u;
        // 0x275414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275418u;
        goto label_275418;
    }
    ctx->pc = 0x275410u;
    SET_GPR_U32(ctx, 31, 0x275418u);
    ctx->pc = 0x275414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275410u;
    // 0x275414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x275410u, 0x275418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275418u;
label_275418:
    // 0x275418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27541c:
    // 0x27541c: 0xc041532  jal         func_1054C8
label_275420:
    if (ctx->pc == 0x275420u) {
        ctx->pc = 0x275420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27541Cu;
        // 0x275420: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275424u;
        goto label_275424;
    }
    ctx->pc = 0x27541Cu;
    SET_GPR_U32(ctx, 31, 0x275424u);
    ctx->pc = 0x275420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27541Cu;
    // 0x275420: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x27541Cu, 0x275424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275424u;
label_275424:
    // 0x275424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_275428:
    // 0x275428: 0xc041532  jal         func_1054C8
label_27542c:
    if (ctx->pc == 0x27542Cu) {
        ctx->pc = 0x27542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275428u;
        // 0x27542c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275430u;
        goto label_275430;
    }
    ctx->pc = 0x275428u;
    SET_GPR_U32(ctx, 31, 0x275430u);
    ctx->pc = 0x27542Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275428u;
    // 0x27542c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x275428u, 0x275430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275430u;
label_275430:
    // 0x275430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_275434:
    // 0x275434: 0xc041532  jal         func_1054C8
label_275438:
    if (ctx->pc == 0x275438u) {
        ctx->pc = 0x275438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275434u;
        // 0x275438: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27543Cu;
        goto label_27543c;
    }
    ctx->pc = 0x275434u;
    SET_GPR_U32(ctx, 31, 0x27543Cu);
    ctx->pc = 0x275438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275434u;
    // 0x275438: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x275434u, 0x27543Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27543Cu;
label_27543c:
    // 0x27543c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x27543cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_275440:
    // 0x275440: 0xc08a0d0  jal         func_228340
label_275444:
    if (ctx->pc == 0x275444u) {
        ctx->pc = 0x275444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275440u;
        // 0x275444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275448u;
        goto label_275448;
    }
    ctx->pc = 0x275440u;
    SET_GPR_U32(ctx, 31, 0x275448u);
    ctx->pc = 0x275444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275440u;
    // 0x275444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x275440u, 0x275448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275448u;
label_275448:
    // 0x275448: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
label_27544c:
    if (ctx->pc == 0x27544Cu) {
        ctx->pc = 0x27544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275448u;
        // 0x27544c: 0x8e2300d4  lw          $v1, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275450u;
        goto label_275450;
    }
    ctx->pc = 0x275448u;
    {
        const bool branch_taken_0x275448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275448) {
            ctx->pc = 0x27544Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275448u;
            // 0x27544c: 0x8e2300d4  lw          $v1, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275500u;
            goto label_275500;
        }
    }
    ctx->pc = 0x275450u;
label_275450:
    // 0x275450: 0xc041532  jal         func_1054C8
label_275454:
    if (ctx->pc == 0x275454u) {
        ctx->pc = 0x275454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275450u;
        // 0x275454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275458u;
        goto label_275458;
    }
    ctx->pc = 0x275450u;
    SET_GPR_U32(ctx, 31, 0x275458u);
    ctx->pc = 0x275454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275450u;
    // 0x275454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x275450u, 0x275458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275458u;
label_275458:
    // 0x275458: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x275458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27545c:
    // 0x27545c: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x27545cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_275460:
    // 0x275460: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
label_275464:
    if (ctx->pc == 0x275464u) {
        ctx->pc = 0x275464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275460u;
        // 0x275464: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275468u;
        goto label_275468;
    }
    ctx->pc = 0x275460u;
    {
        const bool branch_taken_0x275460 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x275464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275460u;
        // 0x275464: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275460) {
            ctx->pc = 0x275490u;
            goto label_275490;
        }
    }
    ctx->pc = 0x275468u;
label_275468:
    // 0x275468: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x275468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_27546c:
    // 0x27546c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27546cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_275470:
    // 0x275470: 0x8fc7bd30  lw          $a3, -0x42D0($fp)
    ctx->pc = 0x275470u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
label_275474:
    // 0x275474: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x275474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_275478:
    // 0x275478: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x275478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_27547c:
    // 0x27547c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27547cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275480:
    // 0x275480: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x275480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_275484:
    // 0x275484: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x275484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_275488:
    // 0x275488: 0xc04159e  jal         func_105678
label_27548c:
    if (ctx->pc == 0x27548Cu) {
        ctx->pc = 0x27548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275488u;
        // 0x27548c: 0x8c660028  lw          $a2, 0x28($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275490u;
        goto label_275490;
    }
    ctx->pc = 0x275488u;
    SET_GPR_U32(ctx, 31, 0x275490u);
    ctx->pc = 0x27548Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275488u;
    // 0x27548c: 0x8c660028  lw          $a2, 0x28($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x275488u, 0x275490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275490u;
label_275490:
    // 0x275490: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_275494:
    if (ctx->pc == 0x275494u) {
        ctx->pc = 0x275494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275490u;
        // 0x275494: 0x8fc9bd30  lw          $t1, -0x42D0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275498u;
        goto label_275498;
    }
    ctx->pc = 0x275490u;
    {
        const bool branch_taken_0x275490 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x275494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275490u;
        // 0x275494: 0x8fc9bd30  lw          $t1, -0x42D0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275490) {
            ctx->pc = 0x2754B8u;
            goto label_2754b8;
        }
    }
    ctx->pc = 0x275498u;
label_275498:
    // 0x275498: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x275498u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27549c:
    // 0x27549c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27549cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2754a0:
    // 0x2754a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2754a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2754a4:
    // 0x2754a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2754a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2754a8:
    // 0x2754a8: 0x24060185  addiu       $a2, $zero, 0x185
    ctx->pc = 0x2754a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 389));
label_2754ac:
    // 0x2754ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2754acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2754b0:
    // 0x2754b0: 0xc041664  jal         func_105990
label_2754b4:
    if (ctx->pc == 0x2754B4u) {
        ctx->pc = 0x2754B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754B0u;
        // 0x2754b4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2754B8u;
        goto label_2754b8;
    }
    ctx->pc = 0x2754B0u;
    SET_GPR_U32(ctx, 31, 0x2754B8u);
    ctx->pc = 0x2754B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2754B0u;
    // 0x2754b4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x2754B0u, 0x2754B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2754B8u;
label_2754b8:
    // 0x2754b8: 0x12a0002e  beqz        $s5, . + 4 + (0x2E << 2)
label_2754bc:
    if (ctx->pc == 0x2754BCu) {
        ctx->pc = 0x2754C0u;
        goto label_2754c0;
    }
    ctx->pc = 0x2754B8u;
    {
        const bool branch_taken_0x2754b8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2754b8) {
            ctx->pc = 0x275574u;
            goto label_275574;
        }
    }
    ctx->pc = 0x2754C0u;
label_2754c0:
    // 0x2754c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2754c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2754c4:
    // 0x2754c4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2754c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2754c8:
    // 0x2754c8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2754c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2754cc:
    // 0x2754cc: 0x40f809  jalr        $v0
label_2754d0:
    if (ctx->pc == 0x2754D0u) {
        ctx->pc = 0x2754D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754CCu;
        // 0x2754d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2754D4u;
        goto label_2754d4;
    }
    ctx->pc = 0x2754CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2754D4u);
        ctx->pc = 0x2754D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754CCu;
        // 0x2754d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2754CCu, 0x2754D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2754D4u;
label_2754d4:
    // 0x2754d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2754d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2754d8:
    // 0x2754d8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2754d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2754dc:
    // 0x2754dc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2754dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2754e0:
    // 0x2754e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2754e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2754e4:
    // 0x2754e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2754e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2754e8:
    // 0x2754e8: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x2754e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
label_2754ec:
    // 0x2754ec: 0x3c080800  lui         $t0, 0x800
    ctx->pc = 0x2754ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2048 << 16));
label_2754f0:
    // 0x2754f0: 0xc041664  jal         func_105990
label_2754f4:
    if (ctx->pc == 0x2754F4u) {
        ctx->pc = 0x2754F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754F0u;
        // 0x2754f4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2754F8u;
        goto label_2754f8;
    }
    ctx->pc = 0x2754F0u;
    SET_GPR_U32(ctx, 31, 0x2754F8u);
    ctx->pc = 0x2754F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2754F0u;
    // 0x2754f4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x2754F0u, 0x2754F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2754F8u;
label_2754f8:
    // 0x2754f8: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2754fc:
    if (ctx->pc == 0x2754FCu) {
        ctx->pc = 0x275500u;
        goto label_275500;
    }
    ctx->pc = 0x2754F8u;
    {
        const bool branch_taken_0x2754f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2754f8) {
            ctx->pc = 0x275574u;
            goto label_275574;
        }
    }
    ctx->pc = 0x275500u;
label_275500:
    // 0x275500: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x275500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_275504:
    // 0x275504: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
label_275508:
    if (ctx->pc == 0x275508u) {
        ctx->pc = 0x275508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275504u;
        // 0x275508: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27550Cu;
        goto label_27550c;
    }
    ctx->pc = 0x275504u;
    {
        const bool branch_taken_0x275504 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x275508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275504u;
        // 0x275508: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275504) {
            ctx->pc = 0x275534u;
            goto label_275534;
        }
    }
    ctx->pc = 0x27550Cu;
label_27550c:
    // 0x27550c: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x27550cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_275510:
    // 0x275510: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x275510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_275514:
    // 0x275514: 0x8fc7bd30  lw          $a3, -0x42D0($fp)
    ctx->pc = 0x275514u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
label_275518:
    // 0x275518: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x275518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27551c:
    // 0x27551c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x27551cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_275520:
    // 0x275520: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x275520u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275524:
    // 0x275524: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x275524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_275528:
    // 0x275528: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x275528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27552c:
    // 0x27552c: 0xc04159e  jal         func_105678
label_275530:
    if (ctx->pc == 0x275530u) {
        ctx->pc = 0x275530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27552Cu;
        // 0x275530: 0x8c660028  lw          $a2, 0x28($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275534u;
        goto label_275534;
    }
    ctx->pc = 0x27552Cu;
    SET_GPR_U32(ctx, 31, 0x275534u);
    ctx->pc = 0x275530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27552Cu;
    // 0x275530: 0x8c660028  lw          $a2, 0x28($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x27552Cu, 0x275534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275534u;
label_275534:
    // 0x275534: 0x12a0000f  beqz        $s5, . + 4 + (0xF << 2)
label_275538:
    if (ctx->pc == 0x275538u) {
        ctx->pc = 0x27553Cu;
        goto label_27553c;
    }
    ctx->pc = 0x275534u;
    {
        const bool branch_taken_0x275534 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x275534) {
            ctx->pc = 0x275574u;
            goto label_275574;
        }
    }
    ctx->pc = 0x27553Cu;
label_27553c:
    // 0x27553c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x27553cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_275540:
    // 0x275540: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x275540u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_275544:
    // 0x275544: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x275544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_275548:
    // 0x275548: 0x40f809  jalr        $v0
label_27554c:
    if (ctx->pc == 0x27554Cu) {
        ctx->pc = 0x27554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275548u;
        // 0x27554c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275550u;
        goto label_275550;
    }
    ctx->pc = 0x275548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x275550u);
        ctx->pc = 0x27554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275548u;
        // 0x27554c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275548u, 0x275550u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x275550u;
label_275550:
    // 0x275550: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x275550u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_275554:
    // 0x275554: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x275554u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_275558:
    // 0x275558: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x275558u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27555c:
    // 0x27555c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27555cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_275560:
    // 0x275560: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x275560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_275564:
    // 0x275564: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x275564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
label_275568:
    // 0x275568: 0x3c080800  lui         $t0, 0x800
    ctx->pc = 0x275568u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2048 << 16));
label_27556c:
    // 0x27556c: 0xc041664  jal         func_105990
label_275570:
    if (ctx->pc == 0x275570u) {
        ctx->pc = 0x275570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27556Cu;
        // 0x275570: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275574u;
        goto label_275574;
    }
    ctx->pc = 0x27556Cu;
    SET_GPR_U32(ctx, 31, 0x275574u);
    ctx->pc = 0x275570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27556Cu;
    // 0x275570: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x27556Cu, 0x275574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275574u;
label_275574:
    // 0x275574: 0x12c00010  beqz        $s6, . + 4 + (0x10 << 2)
label_275578:
    if (ctx->pc == 0x275578u) {
        ctx->pc = 0x27557Cu;
        goto label_27557c;
    }
    ctx->pc = 0x275574u;
    {
        const bool branch_taken_0x275574 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x275574) {
            ctx->pc = 0x2755B8u;
            goto label_2755b8;
        }
    }
    ctx->pc = 0x27557Cu;
label_27557c:
    // 0x27557c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x27557cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_275580:
    // 0x275580: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x275580u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_275584:
    // 0x275584: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x275584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_275588:
    // 0x275588: 0x40f809  jalr        $v0
label_27558c:
    if (ctx->pc == 0x27558Cu) {
        ctx->pc = 0x27558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275588u;
        // 0x27558c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275590u;
        goto label_275590;
    }
    ctx->pc = 0x275588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x275590u);
        ctx->pc = 0x27558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275588u;
        // 0x27558c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275588u, 0x275590u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x275590u;
label_275590:
    // 0x275590: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x275590u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_275594:
    // 0x275594: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x275594u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_275598:
    // 0x275598: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x275598u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27559c:
    // 0x27559c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x27559cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2755a0:
    // 0x2755a0: 0x254a4ee0  addiu       $t2, $t2, 0x4EE0
    ctx->pc = 0x2755a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 20192));
label_2755a4:
    // 0x2755a4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2755a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2755a8:
    // 0x2755a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2755a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2755ac:
    // 0x2755ac: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x2755acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
label_2755b0:
    // 0x2755b0: 0xc041664  jal         func_105990
label_2755b4:
    if (ctx->pc == 0x2755B4u) {
        ctx->pc = 0x2755B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2755B0u;
        // 0x2755b4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2755B8u;
        goto label_2755b8;
    }
    ctx->pc = 0x2755B0u;
    SET_GPR_U32(ctx, 31, 0x2755B8u);
    ctx->pc = 0x2755B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2755B0u;
    // 0x2755b4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x2755B0u, 0x2755B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2755B8u;
label_2755b8:
    // 0x2755b8: 0x12e00008  beqz        $s7, . + 4 + (0x8 << 2)
label_2755bc:
    if (ctx->pc == 0x2755BCu) {
        ctx->pc = 0x2755BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2755B8u;
        // 0x2755bc: 0x8fc7bd30  lw          $a3, -0x42D0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2755C0u;
        goto label_2755c0;
    }
    ctx->pc = 0x2755B8u;
    {
        const bool branch_taken_0x2755b8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2755BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2755B8u;
        // 0x2755bc: 0x8fc7bd30  lw          $a3, -0x42D0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2755b8) {
            ctx->pc = 0x2755DCu;
            goto label_2755dc;
        }
    }
    ctx->pc = 0x2755C0u;
label_2755c0:
    // 0x2755c0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2755c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2755c4:
    // 0x2755c4: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x2755c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_2755c8:
    // 0x2755c8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2755c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_2755cc:
    // 0x2755cc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2755ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_2755d0:
    // 0x2755d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2755d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2755d4:
    // 0x2755d4: 0xc041b20  jal         func_106C80
label_2755d8:
    if (ctx->pc == 0x2755D8u) {
        ctx->pc = 0x2755D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2755D4u;
        // 0x2755d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2755DCu;
        goto label_2755dc;
    }
    ctx->pc = 0x2755D4u;
    SET_GPR_U32(ctx, 31, 0x2755DCu);
    ctx->pc = 0x2755D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2755D4u;
    // 0x2755d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x2755D4u, 0x2755DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2755DCu;
label_2755dc:
    // 0x2755dc: 0xc05d484  jal         func_175210
label_2755e0:
    if (ctx->pc == 0x2755E0u) {
        ctx->pc = 0x2755E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2755DCu;
        // 0x2755e0: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2755E4u;
        goto label_2755e4;
    }
    ctx->pc = 0x2755DCu;
    SET_GPR_U32(ctx, 31, 0x2755E4u);
    ctx->pc = 0x2755E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2755DCu;
    // 0x2755e0: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x2755DCu, 0x2755E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2755E4u;
label_2755e4:
    // 0x2755e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2755e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2755e8:
    // 0x2755e8: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x2755e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2755ec:
    // 0x2755ec: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2755ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2755f0:
    // 0x2755f0: 0xa0f809  jalr        $a1
label_2755f4:
    if (ctx->pc == 0x2755F4u) {
        ctx->pc = 0x2755F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2755F0u;
        // 0x2755f4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2755F8u;
        goto label_2755f8;
    }
    ctx->pc = 0x2755F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2755F8u);
        ctx->pc = 0x2755F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2755F0u;
        // 0x2755f4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2755F0u, 0x2755F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2755F8u;
label_2755f8:
    // 0x2755f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2755f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2755fc:
    // 0x2755fc: 0xc087016  jal         func_21C058
label_275600:
    if (ctx->pc == 0x275600u) {
        ctx->pc = 0x275600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2755FCu;
        // 0x275600: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275604u;
        goto label_275604;
    }
    ctx->pc = 0x2755FCu;
    SET_GPR_U32(ctx, 31, 0x275604u);
    ctx->pc = 0x275600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2755FCu;
    // 0x275600: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x2755FCu, 0x275604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275604u;
label_275604:
    // 0x275604: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x275604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_275608:
    // 0x275608: 0xc05d53a  jal         func_1754E8
label_27560c:
    if (ctx->pc == 0x27560Cu) {
        ctx->pc = 0x27560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275608u;
        // 0x27560c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275610u;
        goto label_275610;
    }
    ctx->pc = 0x275608u;
    SET_GPR_U32(ctx, 31, 0x275610u);
    ctx->pc = 0x27560Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275608u;
    // 0x27560c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x275608u, 0x275610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275610u;
label_275610:
    // 0x275610: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x275610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_275614:
    // 0x275614: 0xc05d4f6  jal         func_1753D8
label_275618:
    if (ctx->pc == 0x275618u) {
        ctx->pc = 0x275618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275614u;
        // 0x275618: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27561Cu;
        goto label_27561c;
    }
    ctx->pc = 0x275614u;
    SET_GPR_U32(ctx, 31, 0x27561Cu);
    ctx->pc = 0x275618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275614u;
    // 0x275618: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x275614u, 0x27561Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27561Cu;
label_27561c:
    // 0x27561c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27561cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_275620:
    // 0x275620: 0xc089990  jal         func_226640
label_275624:
    if (ctx->pc == 0x275624u) {
        ctx->pc = 0x275624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275620u;
        // 0x275624: 0x3c050800  lui         $a1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275628u;
        goto label_275628;
    }
    ctx->pc = 0x275620u;
    SET_GPR_U32(ctx, 31, 0x275628u);
    ctx->pc = 0x275624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275620u;
    // 0x275624: 0x3c050800  lui         $a1, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x275620u, 0x275628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275628u;
label_275628:
    // 0x275628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27562c:
    // 0x27562c: 0xc089a44  jal         func_226910
label_275630:
    if (ctx->pc == 0x275630u) {
        ctx->pc = 0x275630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27562Cu;
        // 0x275630: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275634u;
        goto label_275634;
    }
    ctx->pc = 0x27562Cu;
    SET_GPR_U32(ctx, 31, 0x275634u);
    ctx->pc = 0x275630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27562Cu;
    // 0x275630: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226910u, 0x27562Cu, 0x275634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275634u;
label_275634:
    // 0x275634: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x275634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_275638:
    // 0x275638: 0xc089a44  jal         func_226910
label_27563c:
    if (ctx->pc == 0x27563Cu) {
        ctx->pc = 0x27563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275638u;
        // 0x27563c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275640u;
        goto label_275640;
    }
    ctx->pc = 0x275638u;
    SET_GPR_U32(ctx, 31, 0x275640u);
    ctx->pc = 0x27563Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275638u;
    // 0x27563c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226910u, 0x275638u, 0x275640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275640u;
label_275640:
    // 0x275640: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x275640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_275644:
    // 0x275644: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x275644u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_275648:
    // 0x275648: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x275648u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_27564c:
    // 0x27564c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x27564cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_275650:
    // 0x275650: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x275650u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_275654:
    // 0x275654: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x275654u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_275658:
    // 0x275658: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x275658u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27565c:
    // 0x27565c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x27565cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_275660:
    // 0x275660: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x275660u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_275664:
    // 0x275664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_275668:
    // 0x275668: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x275668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27566c:
    // 0x27566c: 0x3e00008  jr          $ra
label_275670:
    if (ctx->pc == 0x275670u) {
        ctx->pc = 0x275670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27566Cu;
        // 0x275670: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275674u;
        goto label_275674;
    }
    ctx->pc = 0x27566Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27566Cu;
        // 0x275670: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27566Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275674u;
label_275674:
    // 0x275674: 0x0  nop
    ctx->pc = 0x275674u;
    // NOP
    ctx->pc = 0x275678u;
}
