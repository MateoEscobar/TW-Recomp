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

// Function: sub_004041A8
// Address: 0x4041a8 - 0x404660
void sub_004041A8_0x4041a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004041A8_0x4041a8");
#endif

    switch (ctx->pc) {
        case 0x4041a8u: goto label_4041a8;
        case 0x4041acu: goto label_4041ac;
        case 0x4041b0u: goto label_4041b0;
        case 0x4041b4u: goto label_4041b4;
        case 0x4041b8u: goto label_4041b8;
        case 0x4041bcu: goto label_4041bc;
        case 0x4041c0u: goto label_4041c0;
        case 0x4041c4u: goto label_4041c4;
        case 0x4041c8u: goto label_4041c8;
        case 0x4041ccu: goto label_4041cc;
        case 0x4041d0u: goto label_4041d0;
        case 0x4041d4u: goto label_4041d4;
        case 0x4041d8u: goto label_4041d8;
        case 0x4041dcu: goto label_4041dc;
        case 0x4041e0u: goto label_4041e0;
        case 0x4041e4u: goto label_4041e4;
        case 0x4041e8u: goto label_4041e8;
        case 0x4041ecu: goto label_4041ec;
        case 0x4041f0u: goto label_4041f0;
        case 0x4041f4u: goto label_4041f4;
        case 0x4041f8u: goto label_4041f8;
        case 0x4041fcu: goto label_4041fc;
        case 0x404200u: goto label_404200;
        case 0x404204u: goto label_404204;
        case 0x404208u: goto label_404208;
        case 0x40420cu: goto label_40420c;
        case 0x404210u: goto label_404210;
        case 0x404214u: goto label_404214;
        case 0x404218u: goto label_404218;
        case 0x40421cu: goto label_40421c;
        case 0x404220u: goto label_404220;
        case 0x404224u: goto label_404224;
        case 0x404228u: goto label_404228;
        case 0x40422cu: goto label_40422c;
        case 0x404230u: goto label_404230;
        case 0x404234u: goto label_404234;
        case 0x404238u: goto label_404238;
        case 0x40423cu: goto label_40423c;
        case 0x404240u: goto label_404240;
        case 0x404244u: goto label_404244;
        case 0x404248u: goto label_404248;
        case 0x40424cu: goto label_40424c;
        case 0x404250u: goto label_404250;
        case 0x404254u: goto label_404254;
        case 0x404258u: goto label_404258;
        case 0x40425cu: goto label_40425c;
        case 0x404260u: goto label_404260;
        case 0x404264u: goto label_404264;
        case 0x404268u: goto label_404268;
        case 0x40426cu: goto label_40426c;
        case 0x404270u: goto label_404270;
        case 0x404274u: goto label_404274;
        case 0x404278u: goto label_404278;
        case 0x40427cu: goto label_40427c;
        case 0x404280u: goto label_404280;
        case 0x404284u: goto label_404284;
        case 0x404288u: goto label_404288;
        case 0x40428cu: goto label_40428c;
        case 0x404290u: goto label_404290;
        case 0x404294u: goto label_404294;
        case 0x404298u: goto label_404298;
        case 0x40429cu: goto label_40429c;
        case 0x4042a0u: goto label_4042a0;
        case 0x4042a4u: goto label_4042a4;
        case 0x4042a8u: goto label_4042a8;
        case 0x4042acu: goto label_4042ac;
        case 0x4042b0u: goto label_4042b0;
        case 0x4042b4u: goto label_4042b4;
        case 0x4042b8u: goto label_4042b8;
        case 0x4042bcu: goto label_4042bc;
        case 0x4042c0u: goto label_4042c0;
        case 0x4042c4u: goto label_4042c4;
        case 0x4042c8u: goto label_4042c8;
        case 0x4042ccu: goto label_4042cc;
        case 0x4042d0u: goto label_4042d0;
        case 0x4042d4u: goto label_4042d4;
        case 0x4042d8u: goto label_4042d8;
        case 0x4042dcu: goto label_4042dc;
        case 0x4042e0u: goto label_4042e0;
        case 0x4042e4u: goto label_4042e4;
        case 0x4042e8u: goto label_4042e8;
        case 0x4042ecu: goto label_4042ec;
        case 0x4042f0u: goto label_4042f0;
        case 0x4042f4u: goto label_4042f4;
        case 0x4042f8u: goto label_4042f8;
        case 0x4042fcu: goto label_4042fc;
        case 0x404300u: goto label_404300;
        case 0x404304u: goto label_404304;
        case 0x404308u: goto label_404308;
        case 0x40430cu: goto label_40430c;
        case 0x404310u: goto label_404310;
        case 0x404314u: goto label_404314;
        case 0x404318u: goto label_404318;
        case 0x40431cu: goto label_40431c;
        case 0x404320u: goto label_404320;
        case 0x404324u: goto label_404324;
        case 0x404328u: goto label_404328;
        case 0x40432cu: goto label_40432c;
        case 0x404330u: goto label_404330;
        case 0x404334u: goto label_404334;
        case 0x404338u: goto label_404338;
        case 0x40433cu: goto label_40433c;
        case 0x404340u: goto label_404340;
        case 0x404344u: goto label_404344;
        case 0x404348u: goto label_404348;
        case 0x40434cu: goto label_40434c;
        case 0x404350u: goto label_404350;
        case 0x404354u: goto label_404354;
        case 0x404358u: goto label_404358;
        case 0x40435cu: goto label_40435c;
        case 0x404360u: goto label_404360;
        case 0x404364u: goto label_404364;
        case 0x404368u: goto label_404368;
        case 0x40436cu: goto label_40436c;
        case 0x404370u: goto label_404370;
        case 0x404374u: goto label_404374;
        case 0x404378u: goto label_404378;
        case 0x40437cu: goto label_40437c;
        case 0x404380u: goto label_404380;
        case 0x404384u: goto label_404384;
        case 0x404388u: goto label_404388;
        case 0x40438cu: goto label_40438c;
        case 0x404390u: goto label_404390;
        case 0x404394u: goto label_404394;
        case 0x404398u: goto label_404398;
        case 0x40439cu: goto label_40439c;
        case 0x4043a0u: goto label_4043a0;
        case 0x4043a4u: goto label_4043a4;
        case 0x4043a8u: goto label_4043a8;
        case 0x4043acu: goto label_4043ac;
        case 0x4043b0u: goto label_4043b0;
        case 0x4043b4u: goto label_4043b4;
        case 0x4043b8u: goto label_4043b8;
        case 0x4043bcu: goto label_4043bc;
        case 0x4043c0u: goto label_4043c0;
        case 0x4043c4u: goto label_4043c4;
        case 0x4043c8u: goto label_4043c8;
        case 0x4043ccu: goto label_4043cc;
        case 0x4043d0u: goto label_4043d0;
        case 0x4043d4u: goto label_4043d4;
        case 0x4043d8u: goto label_4043d8;
        case 0x4043dcu: goto label_4043dc;
        case 0x4043e0u: goto label_4043e0;
        case 0x4043e4u: goto label_4043e4;
        case 0x4043e8u: goto label_4043e8;
        case 0x4043ecu: goto label_4043ec;
        case 0x4043f0u: goto label_4043f0;
        case 0x4043f4u: goto label_4043f4;
        case 0x4043f8u: goto label_4043f8;
        case 0x4043fcu: goto label_4043fc;
        case 0x404400u: goto label_404400;
        case 0x404404u: goto label_404404;
        case 0x404408u: goto label_404408;
        case 0x40440cu: goto label_40440c;
        case 0x404410u: goto label_404410;
        case 0x404414u: goto label_404414;
        case 0x404418u: goto label_404418;
        case 0x40441cu: goto label_40441c;
        case 0x404420u: goto label_404420;
        case 0x404424u: goto label_404424;
        case 0x404428u: goto label_404428;
        case 0x40442cu: goto label_40442c;
        case 0x404430u: goto label_404430;
        case 0x404434u: goto label_404434;
        case 0x404438u: goto label_404438;
        case 0x40443cu: goto label_40443c;
        case 0x404440u: goto label_404440;
        case 0x404444u: goto label_404444;
        case 0x404448u: goto label_404448;
        case 0x40444cu: goto label_40444c;
        case 0x404450u: goto label_404450;
        case 0x404454u: goto label_404454;
        case 0x404458u: goto label_404458;
        case 0x40445cu: goto label_40445c;
        case 0x404460u: goto label_404460;
        case 0x404464u: goto label_404464;
        case 0x404468u: goto label_404468;
        case 0x40446cu: goto label_40446c;
        case 0x404470u: goto label_404470;
        case 0x404474u: goto label_404474;
        case 0x404478u: goto label_404478;
        case 0x40447cu: goto label_40447c;
        case 0x404480u: goto label_404480;
        case 0x404484u: goto label_404484;
        case 0x404488u: goto label_404488;
        case 0x40448cu: goto label_40448c;
        case 0x404490u: goto label_404490;
        case 0x404494u: goto label_404494;
        case 0x404498u: goto label_404498;
        case 0x40449cu: goto label_40449c;
        case 0x4044a0u: goto label_4044a0;
        case 0x4044a4u: goto label_4044a4;
        case 0x4044a8u: goto label_4044a8;
        case 0x4044acu: goto label_4044ac;
        case 0x4044b0u: goto label_4044b0;
        case 0x4044b4u: goto label_4044b4;
        case 0x4044b8u: goto label_4044b8;
        case 0x4044bcu: goto label_4044bc;
        case 0x4044c0u: goto label_4044c0;
        case 0x4044c4u: goto label_4044c4;
        case 0x4044c8u: goto label_4044c8;
        case 0x4044ccu: goto label_4044cc;
        case 0x4044d0u: goto label_4044d0;
        case 0x4044d4u: goto label_4044d4;
        case 0x4044d8u: goto label_4044d8;
        case 0x4044dcu: goto label_4044dc;
        case 0x4044e0u: goto label_4044e0;
        case 0x4044e4u: goto label_4044e4;
        case 0x4044e8u: goto label_4044e8;
        case 0x4044ecu: goto label_4044ec;
        case 0x4044f0u: goto label_4044f0;
        case 0x4044f4u: goto label_4044f4;
        case 0x4044f8u: goto label_4044f8;
        case 0x4044fcu: goto label_4044fc;
        case 0x404500u: goto label_404500;
        case 0x404504u: goto label_404504;
        case 0x404508u: goto label_404508;
        case 0x40450cu: goto label_40450c;
        case 0x404510u: goto label_404510;
        case 0x404514u: goto label_404514;
        case 0x404518u: goto label_404518;
        case 0x40451cu: goto label_40451c;
        case 0x404520u: goto label_404520;
        case 0x404524u: goto label_404524;
        case 0x404528u: goto label_404528;
        case 0x40452cu: goto label_40452c;
        case 0x404530u: goto label_404530;
        case 0x404534u: goto label_404534;
        case 0x404538u: goto label_404538;
        case 0x40453cu: goto label_40453c;
        case 0x404540u: goto label_404540;
        case 0x404544u: goto label_404544;
        case 0x404548u: goto label_404548;
        case 0x40454cu: goto label_40454c;
        case 0x404550u: goto label_404550;
        case 0x404554u: goto label_404554;
        case 0x404558u: goto label_404558;
        case 0x40455cu: goto label_40455c;
        case 0x404560u: goto label_404560;
        case 0x404564u: goto label_404564;
        case 0x404568u: goto label_404568;
        case 0x40456cu: goto label_40456c;
        case 0x404570u: goto label_404570;
        case 0x404574u: goto label_404574;
        case 0x404578u: goto label_404578;
        case 0x40457cu: goto label_40457c;
        case 0x404580u: goto label_404580;
        case 0x404584u: goto label_404584;
        case 0x404588u: goto label_404588;
        case 0x40458cu: goto label_40458c;
        case 0x404590u: goto label_404590;
        case 0x404594u: goto label_404594;
        case 0x404598u: goto label_404598;
        case 0x40459cu: goto label_40459c;
        case 0x4045a0u: goto label_4045a0;
        case 0x4045a4u: goto label_4045a4;
        case 0x4045a8u: goto label_4045a8;
        case 0x4045acu: goto label_4045ac;
        case 0x4045b0u: goto label_4045b0;
        case 0x4045b4u: goto label_4045b4;
        case 0x4045b8u: goto label_4045b8;
        case 0x4045bcu: goto label_4045bc;
        case 0x4045c0u: goto label_4045c0;
        case 0x4045c4u: goto label_4045c4;
        case 0x4045c8u: goto label_4045c8;
        case 0x4045ccu: goto label_4045cc;
        case 0x4045d0u: goto label_4045d0;
        case 0x4045d4u: goto label_4045d4;
        case 0x4045d8u: goto label_4045d8;
        case 0x4045dcu: goto label_4045dc;
        case 0x4045e0u: goto label_4045e0;
        case 0x4045e4u: goto label_4045e4;
        case 0x4045e8u: goto label_4045e8;
        case 0x4045ecu: goto label_4045ec;
        case 0x4045f0u: goto label_4045f0;
        case 0x4045f4u: goto label_4045f4;
        case 0x4045f8u: goto label_4045f8;
        case 0x4045fcu: goto label_4045fc;
        case 0x404600u: goto label_404600;
        case 0x404604u: goto label_404604;
        case 0x404608u: goto label_404608;
        case 0x40460cu: goto label_40460c;
        case 0x404610u: goto label_404610;
        case 0x404614u: goto label_404614;
        case 0x404618u: goto label_404618;
        case 0x40461cu: goto label_40461c;
        case 0x404620u: goto label_404620;
        case 0x404624u: goto label_404624;
        case 0x404628u: goto label_404628;
        case 0x40462cu: goto label_40462c;
        case 0x404630u: goto label_404630;
        case 0x404634u: goto label_404634;
        case 0x404638u: goto label_404638;
        case 0x40463cu: goto label_40463c;
        case 0x404640u: goto label_404640;
        case 0x404644u: goto label_404644;
        case 0x404648u: goto label_404648;
        case 0x40464cu: goto label_40464c;
        case 0x404650u: goto label_404650;
        case 0x404654u: goto label_404654;
        case 0x404658u: goto label_404658;
        case 0x40465cu: goto label_40465c;
        default: break;
    }

    ctx->pc = 0x4041a8u;

label_4041a8:
    // 0x4041a8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x4041a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_4041ac:
    // 0x4041ac: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x4041acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_4041b0:
    // 0x4041b0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x4041b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_4041b4:
    // 0x4041b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4041b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4041b8:
    // 0x4041b8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x4041b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_4041bc:
    // 0x4041bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4041bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4041c0:
    // 0x4041c0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4041c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4041c4:
    // 0x4041c4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4041c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4041c8:
    // 0x4041c8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x4041c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_4041cc:
    // 0x4041cc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x4041ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_4041d0:
    // 0x4041d0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4041d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4041d4:
    // 0x4041d4: 0xe7b800d0  swc1        $f24, 0xD0($sp)
    ctx->pc = 0x4041d4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_4041d8:
    // 0x4041d8: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x4041d8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_4041dc:
    // 0x4041dc: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x4041dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_4041e0:
    // 0x4041e0: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x4041e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_4041e4:
    // 0x4041e4: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x4041e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_4041e8:
    // 0x4041e8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4041e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4041ec:
    // 0x4041ec: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x4041ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_4041f0:
    // 0x4041f0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x4041f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_4041f4:
    // 0x4041f4: 0x40f809  jalr        $v0
label_4041f8:
    if (ctx->pc == 0x4041F8u) {
        ctx->pc = 0x4041F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4041F4u;
        // 0x4041f8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4041FCu;
        goto label_4041fc;
    }
    ctx->pc = 0x4041F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4041FCu);
        ctx->pc = 0x4041F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4041F4u;
        // 0x4041f8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4041F4u, 0x4041FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4041FCu;
label_4041fc:
    // 0x4041fc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4041fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_404200:
    // 0x404200: 0x2e020033  sltiu       $v0, $s0, 0x33
    ctx->pc = 0x404200u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
label_404204:
    // 0x404204: 0x10400107  beqz        $v0, . + 4 + (0x107 << 2)
label_404208:
    if (ctx->pc == 0x404208u) {
        ctx->pc = 0x404208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404204u;
        // 0x404208: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40420Cu;
        goto label_40420c;
    }
    ctx->pc = 0x404204u;
    {
        const bool branch_taken_0x404204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x404208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404204u;
        // 0x404208: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404204) {
            ctx->pc = 0x404624u;
            goto label_404624;
        }
    }
    ctx->pc = 0x40420Cu;
label_40420c:
    // 0x40420c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x40420cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_404210:
    // 0x404210: 0x24427940  addiu       $v0, $v0, 0x7940
    ctx->pc = 0x404210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31040));
label_404214:
    // 0x404214: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x404214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_404218:
    // 0x404218: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x404218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_40421c:
    // 0x40421c: 0x800008  jr          $a0
label_404220:
    if (ctx->pc == 0x404220u) {
        ctx->pc = 0x404224u;
        goto label_404224;
    }
    ctx->pc = 0x40421Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x404224u: goto label_404224;
            case 0x404268u: goto label_404268;
            case 0x404278u: goto label_404278;
            case 0x4042D8u: goto label_4042d8;
            case 0x40434Cu: goto label_40434c;
            case 0x404364u: goto label_404364;
            case 0x40437Cu: goto label_40437c;
            case 0x404388u: goto label_404388;
            case 0x4044DCu: goto label_4044dc;
            case 0x4045ACu: goto label_4045ac;
            case 0x4045E0u: goto label_4045e0;
            case 0x404624u: goto label_404624;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40421Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x404224u;
label_404224:
    // 0x404224: 0xc0ea146  jal         func_3A8518
label_404228:
    if (ctx->pc == 0x404228u) {
        ctx->pc = 0x404228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404224u;
        // 0x404228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40422Cu;
        goto label_40422c;
    }
    ctx->pc = 0x404224u;
    SET_GPR_U32(ctx, 31, 0x40422Cu);
    ctx->pc = 0x404228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404224u;
    // 0x404228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x404224u, 0x40422Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40422Cu;
label_40422c:
    // 0x40422c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_404230:
    if (ctx->pc == 0x404230u) {
        ctx->pc = 0x404230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40422Cu;
        // 0x404230: 0x8e820054  lw          $v0, 0x54($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404234u;
        goto label_404234;
    }
    ctx->pc = 0x40422Cu;
    {
        const bool branch_taken_0x40422c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x404230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40422Cu;
        // 0x404230: 0x8e820054  lw          $v0, 0x54($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40422c) {
            ctx->pc = 0x404258u;
            goto label_404258;
        }
    }
    ctx->pc = 0x404234u;
label_404234:
    // 0x404234: 0x26a40030  addiu       $a0, $s5, 0x30
    ctx->pc = 0x404234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
label_404238:
    // 0x404238: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x404238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_40423c:
    // 0x40423c: 0xc0e4060  jal         func_390180
label_404240:
    if (ctx->pc == 0x404240u) {
        ctx->pc = 0x404240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40423Cu;
        // 0x404240: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404244u;
        goto label_404244;
    }
    ctx->pc = 0x40423Cu;
    SET_GPR_U32(ctx, 31, 0x404244u);
    ctx->pc = 0x404240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40423Cu;
    // 0x404240: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x40423Cu, 0x404244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404244u;
label_404244:
    // 0x404244: 0x104000f7  beqz        $v0, . + 4 + (0xF7 << 2)
label_404248:
    if (ctx->pc == 0x404248u) {
        ctx->pc = 0x404248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404244u;
        // 0x404248: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40424Cu;
        goto label_40424c;
    }
    ctx->pc = 0x404244u;
    {
        const bool branch_taken_0x404244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x404248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404244u;
        // 0x404248: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404244) {
            ctx->pc = 0x404624u;
            goto label_404624;
        }
    }
    ctx->pc = 0x40424Cu;
label_40424c:
    // 0x40424c: 0xaea20038  sw          $v0, 0x38($s5)
    ctx->pc = 0x40424cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 2));
label_404250:
    // 0x404250: 0x100000f4  b           . + 4 + (0xF4 << 2)
label_404254:
    if (ctx->pc == 0x404254u) {
        ctx->pc = 0x404254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404250u;
        // 0x404254: 0xaea20034  sw          $v0, 0x34($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404258u;
        goto label_404258;
    }
    ctx->pc = 0x404250u;
    {
        const bool branch_taken_0x404250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x404254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404250u;
        // 0x404254: 0xaea20034  sw          $v0, 0x34($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404250) {
            ctx->pc = 0x404624u;
            goto label_404624;
        }
    }
    ctx->pc = 0x404258u;
label_404258:
    // 0x404258: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x404258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_40425c:
    // 0x40425c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x40425cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_404260:
    // 0x404260: 0x100000f0  b           . + 4 + (0xF0 << 2)
label_404264:
    if (ctx->pc == 0x404264u) {
        ctx->pc = 0x404264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404260u;
        // 0x404264: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404268u;
        goto label_404268;
    }
    ctx->pc = 0x404260u;
    {
        const bool branch_taken_0x404260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x404264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404260u;
        // 0x404264: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404260) {
            ctx->pc = 0x404624u;
            goto label_404624;
        }
    }
    ctx->pc = 0x404268u;
label_404268:
    // 0x404268: 0xc0e8616  jal         func_3A1858
label_40426c:
    if (ctx->pc == 0x40426Cu) {
        ctx->pc = 0x40426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404268u;
        // 0x40426c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404270u;
        goto label_404270;
    }
    ctx->pc = 0x404268u;
    SET_GPR_U32(ctx, 31, 0x404270u);
    ctx->pc = 0x40426Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404268u;
    // 0x40426c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x404268u, 0x404270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404270u;
label_404270:
    // 0x404270: 0x100000ed  b           . + 4 + (0xED << 2)
label_404274:
    if (ctx->pc == 0x404274u) {
        ctx->pc = 0x404274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404270u;
        // 0x404274: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404278u;
        goto label_404278;
    }
    ctx->pc = 0x404270u;
    {
        const bool branch_taken_0x404270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x404274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404270u;
        // 0x404274: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404270) {
            ctx->pc = 0x404628u;
            goto label_404628;
        }
    }
    ctx->pc = 0x404278u;
label_404278:
    // 0x404278: 0xc0ea146  jal         func_3A8518
label_40427c:
    if (ctx->pc == 0x40427Cu) {
        ctx->pc = 0x40427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404278u;
        // 0x40427c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404280u;
        goto label_404280;
    }
    ctx->pc = 0x404278u;
    SET_GPR_U32(ctx, 31, 0x404280u);
    ctx->pc = 0x40427Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404278u;
    // 0x40427c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x404278u, 0x404280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404280u;
label_404280:
    // 0x404280: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x404280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_404284:
    // 0x404284: 0xc0ea12a  jal         func_3A84A8
label_404288:
    if (ctx->pc == 0x404288u) {
        ctx->pc = 0x404288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404284u;
        // 0x404288: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40428Cu;
        goto label_40428c;
    }
    ctx->pc = 0x404284u;
    SET_GPR_U32(ctx, 31, 0x40428Cu);
    ctx->pc = 0x404288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404284u;
    // 0x404288: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x404284u, 0x40428Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40428Cu;
label_40428c:
    // 0x40428c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x40428cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_404290:
    // 0x404290: 0xc0ea12a  jal         func_3A84A8
label_404294:
    if (ctx->pc == 0x404294u) {
        ctx->pc = 0x404294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404290u;
        // 0x404294: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404298u;
        goto label_404298;
    }
    ctx->pc = 0x404290u;
    SET_GPR_U32(ctx, 31, 0x404298u);
    ctx->pc = 0x404294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404290u;
    // 0x404294: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x404290u, 0x404298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404298u;
label_404298:
    // 0x404298: 0xc0ea146  jal         func_3A8518
label_40429c:
    if (ctx->pc == 0x40429Cu) {
        ctx->pc = 0x40429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404298u;
        // 0x40429c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4042A0u;
        goto label_4042a0;
    }
    ctx->pc = 0x404298u;
    SET_GPR_U32(ctx, 31, 0x4042A0u);
    ctx->pc = 0x40429Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404298u;
    // 0x40429c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x404298u, 0x4042A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4042A0u;
label_4042a0:
    // 0x4042a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4042a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4042a4:
    // 0x4042a4: 0xc0ea14c  jal         func_3A8530
label_4042a8:
    if (ctx->pc == 0x4042A8u) {
        ctx->pc = 0x4042A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4042A4u;
        // 0x4042a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4042ACu;
        goto label_4042ac;
    }
    ctx->pc = 0x4042A4u;
    SET_GPR_U32(ctx, 31, 0x4042ACu);
    ctx->pc = 0x4042A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4042A4u;
    // 0x4042a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x4042A4u, 0x4042ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4042ACu;
label_4042ac:
    // 0x4042ac: 0xc08a61a  jal         func_229868
label_4042b0:
    if (ctx->pc == 0x4042B0u) {
        ctx->pc = 0x4042B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4042ACu;
        // 0x4042b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4042B4u;
        goto label_4042b4;
    }
    ctx->pc = 0x4042ACu;
    SET_GPR_U32(ctx, 31, 0x4042B4u);
    ctx->pc = 0x4042B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4042ACu;
    // 0x4042b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x4042ACu, 0x4042B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4042B4u;
label_4042b4:
    // 0x4042b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4042b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4042b8:
    // 0x4042b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4042b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4042bc:
    // 0x4042bc: 0xc0e8604  jal         func_3A1810
label_4042c0:
    if (ctx->pc == 0x4042C0u) {
        ctx->pc = 0x4042C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4042BCu;
        // 0x4042c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4042C4u;
        goto label_4042c4;
    }
    ctx->pc = 0x4042BCu;
    SET_GPR_U32(ctx, 31, 0x4042C4u);
    ctx->pc = 0x4042C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4042BCu;
    // 0x4042c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1810u, 0x4042BCu, 0x4042C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4042C4u;
label_4042c4:
    // 0x4042c4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x4042c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4042c8:
    // 0x4042c8: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x4042c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4042cc:
    // 0x4042cc: 0x7e820010  sq          $v0, 0x10($s4)
    ctx->pc = 0x4042ccu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
label_4042d0:
    // 0x4042d0: 0x100000d4  b           . + 4 + (0xD4 << 2)
label_4042d4:
    if (ctx->pc == 0x4042D4u) {
        ctx->pc = 0x4042D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4042D0u;
        // 0x4042d4: 0x7e830020  sq          $v1, 0x20($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4042D8u;
        goto label_4042d8;
    }
    ctx->pc = 0x4042D0u;
    {
        const bool branch_taken_0x4042d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4042D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4042D0u;
        // 0x4042d4: 0x7e830020  sq          $v1, 0x20($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4042d0) {
            ctx->pc = 0x404624u;
            goto label_404624;
        }
    }
    ctx->pc = 0x4042D8u;
label_4042d8:
    // 0x4042d8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4042d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4042dc:
    // 0x4042dc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4042dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4042e0:
    // 0x4042e0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4042e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4042e4:
    // 0x4042e4: 0x40f809  jalr        $v0
label_4042e8:
    if (ctx->pc == 0x4042E8u) {
        ctx->pc = 0x4042E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4042E4u;
        // 0x4042e8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4042ECu;
        goto label_4042ec;
    }
    ctx->pc = 0x4042E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4042ECu);
        ctx->pc = 0x4042E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4042E4u;
        // 0x4042e8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4042E4u, 0x4042ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4042ECu;
label_4042ec:
    // 0x4042ec: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x4042ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_4042f0:
    // 0x4042f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4042f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4042f4:
    // 0x4042f4: 0x144000cc  bnez        $v0, . + 4 + (0xCC << 2)
label_4042f8:
    if (ctx->pc == 0x4042F8u) {
        ctx->pc = 0x4042F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4042F4u;
        // 0x4042f8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4042FCu;
        goto label_4042fc;
    }
    ctx->pc = 0x4042F4u;
    {
        const bool branch_taken_0x4042f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4042F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4042F4u;
        // 0x4042f8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4042f4) {
            ctx->pc = 0x404628u;
            goto label_404628;
        }
    }
    ctx->pc = 0x4042FCu;
label_4042fc:
    // 0x4042fc: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x4042fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_404300:
    // 0x404300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x404300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_404304:
    // 0x404304: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x404304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_404308:
    // 0x404308: 0xc0ea14c  jal         func_3A8530
label_40430c:
    if (ctx->pc == 0x40430Cu) {
        ctx->pc = 0x40430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404308u;
        // 0x40430c: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404310u;
        goto label_404310;
    }
    ctx->pc = 0x404308u;
    SET_GPR_U32(ctx, 31, 0x404310u);
    ctx->pc = 0x40430Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404308u;
    // 0x40430c: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x404308u, 0x404310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404310u;
label_404310:
    // 0x404310: 0xc08a61a  jal         func_229868
label_404314:
    if (ctx->pc == 0x404314u) {
        ctx->pc = 0x404314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404310u;
        // 0x404314: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404318u;
        goto label_404318;
    }
    ctx->pc = 0x404310u;
    SET_GPR_U32(ctx, 31, 0x404318u);
    ctx->pc = 0x404314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404310u;
    // 0x404314: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x404310u, 0x404318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404318u;
label_404318:
    // 0x404318: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x404318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40431c:
    // 0x40431c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40431cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_404320:
    // 0x404320: 0xc0ea176  jal         func_3A85D8
label_404324:
    if (ctx->pc == 0x404324u) {
        ctx->pc = 0x404324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404320u;
        // 0x404324: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404328u;
        goto label_404328;
    }
    ctx->pc = 0x404320u;
    SET_GPR_U32(ctx, 31, 0x404328u);
    ctx->pc = 0x404324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404320u;
    // 0x404324: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x404320u, 0x404328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404328u;
label_404328:
    // 0x404328: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x404328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_40432c:
    // 0x40432c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x40432cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_404330:
    // 0x404330: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x404330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_404334:
    // 0x404334: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x404334u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_404338:
    // 0x404338: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x404338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_40433c:
    // 0x40433c: 0x40f809  jalr        $v0
label_404340:
    if (ctx->pc == 0x404340u) {
        ctx->pc = 0x404340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40433Cu;
        // 0x404340: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404344u;
        goto label_404344;
    }
    ctx->pc = 0x40433Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x404344u);
        ctx->pc = 0x404340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40433Cu;
        // 0x404340: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40433Cu, 0x404344u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x404344u;
label_404344:
    // 0x404344: 0x100000b8  b           . + 4 + (0xB8 << 2)
label_404348:
    if (ctx->pc == 0x404348u) {
        ctx->pc = 0x404348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404344u;
        // 0x404348: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40434Cu;
        goto label_40434c;
    }
    ctx->pc = 0x404344u;
    {
        const bool branch_taken_0x404344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x404348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404344u;
        // 0x404348: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404344) {
            ctx->pc = 0x404628u;
            goto label_404628;
        }
    }
    ctx->pc = 0x40434Cu;
label_40434c:
    // 0x40434c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x40434cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_404350:
    // 0x404350: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x404350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_404354:
    // 0x404354: 0xc100cb0  jal         func_4032C0
label_404358:
    if (ctx->pc == 0x404358u) {
        ctx->pc = 0x404358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404354u;
        // 0x404358: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40435Cu;
        goto label_40435c;
    }
    ctx->pc = 0x404354u;
    SET_GPR_U32(ctx, 31, 0x40435Cu);
    ctx->pc = 0x404358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404354u;
    // 0x404358: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4032C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4032C0u, 0x404354u, 0x40435Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40435Cu;
label_40435c:
    // 0x40435c: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_404360:
    if (ctx->pc == 0x404360u) {
        ctx->pc = 0x404360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40435Cu;
        // 0x404360: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404364u;
        goto label_404364;
    }
    ctx->pc = 0x40435Cu;
    {
        const bool branch_taken_0x40435c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x404360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40435Cu;
        // 0x404360: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40435c) {
            ctx->pc = 0x404628u;
            goto label_404628;
        }
    }
    ctx->pc = 0x404364u;
label_404364:
    // 0x404364: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x404364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_404368:
    // 0x404368: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x404368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_40436c:
    // 0x40436c: 0xc100d2e  jal         func_4034B8
label_404370:
    if (ctx->pc == 0x404370u) {
        ctx->pc = 0x404370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40436Cu;
        // 0x404370: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404374u;
        goto label_404374;
    }
    ctx->pc = 0x40436Cu;
    SET_GPR_U32(ctx, 31, 0x404374u);
    ctx->pc = 0x404370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40436Cu;
    // 0x404370: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4034B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4034B8u, 0x40436Cu, 0x404374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404374u;
label_404374:
    // 0x404374: 0x100000ac  b           . + 4 + (0xAC << 2)
label_404378:
    if (ctx->pc == 0x404378u) {
        ctx->pc = 0x404378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404374u;
        // 0x404378: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40437Cu;
        goto label_40437c;
    }
    ctx->pc = 0x404374u;
    {
        const bool branch_taken_0x404374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x404378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404374u;
        // 0x404378: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404374) {
            ctx->pc = 0x404628u;
            goto label_404628;
        }
    }
    ctx->pc = 0x40437Cu;
label_40437c:
    // 0x40437c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x40437cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_404380:
    // 0x404380: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_404384:
    if (ctx->pc == 0x404384u) {
        ctx->pc = 0x404384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404380u;
        // 0x404384: 0xaea20024  sw          $v0, 0x24($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404388u;
        goto label_404388;
    }
    ctx->pc = 0x404380u;
    {
        const bool branch_taken_0x404380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x404384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404380u;
        // 0x404384: 0xaea20024  sw          $v0, 0x24($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404380) {
            ctx->pc = 0x404624u;
            goto label_404624;
        }
    }
    ctx->pc = 0x404388u;
label_404388:
    // 0x404388: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x404388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_40438c:
    // 0x40438c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x40438cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_404390:
    // 0x404390: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x404390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_404394:
    // 0x404394: 0x40f809  jalr        $v0
label_404398:
    if (ctx->pc == 0x404398u) {
        ctx->pc = 0x404398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404394u;
        // 0x404398: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40439Cu;
        goto label_40439c;
    }
    ctx->pc = 0x404394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40439Cu);
        ctx->pc = 0x404398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404394u;
        // 0x404398: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x404394u, 0x40439Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40439Cu;
label_40439c:
    // 0x40439c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x40439cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_4043a0:
    // 0x4043a0: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_4043a4:
    if (ctx->pc == 0x4043A4u) {
        ctx->pc = 0x4043A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4043A0u;
        // 0x4043a4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4043A8u;
        goto label_4043a8;
    }
    ctx->pc = 0x4043A0u;
    {
        const bool branch_taken_0x4043a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4043A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4043A0u;
        // 0x4043a4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4043a0) {
            ctx->pc = 0x4044CCu;
            goto label_4044cc;
        }
    }
    ctx->pc = 0x4043A8u;
label_4043a8:
    // 0x4043a8: 0xc0ea12a  jal         func_3A84A8
label_4043ac:
    if (ctx->pc == 0x4043ACu) {
        ctx->pc = 0x4043ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4043A8u;
        // 0x4043ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4043B0u;
        goto label_4043b0;
    }
    ctx->pc = 0x4043A8u;
    SET_GPR_U32(ctx, 31, 0x4043B0u);
    ctx->pc = 0x4043ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4043A8u;
    // 0x4043ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x4043A8u, 0x4043B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4043B0u;
label_4043b0:
    // 0x4043b0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x4043b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4043b4:
    // 0x4043b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4043b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4043b8:
    // 0x4043b8: 0xc0ea14c  jal         func_3A8530
label_4043bc:
    if (ctx->pc == 0x4043BCu) {
        ctx->pc = 0x4043BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4043B8u;
        // 0x4043bc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4043C0u;
        goto label_4043c0;
    }
    ctx->pc = 0x4043B8u;
    SET_GPR_U32(ctx, 31, 0x4043C0u);
    ctx->pc = 0x4043BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4043B8u;
    // 0x4043bc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x4043B8u, 0x4043C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4043C0u;
label_4043c0:
    // 0x4043c0: 0xc0e8630  jal         func_3A18C0
label_4043c4:
    if (ctx->pc == 0x4043C4u) {
        ctx->pc = 0x4043C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4043C0u;
        // 0x4043c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4043C8u;
        goto label_4043c8;
    }
    ctx->pc = 0x4043C0u;
    SET_GPR_U32(ctx, 31, 0x4043C8u);
    ctx->pc = 0x4043C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4043C0u;
    // 0x4043c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x4043C0u, 0x4043C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4043C8u;
label_4043c8:
    // 0x4043c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4043c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4043cc:
    // 0x4043cc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x4043ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_4043d0:
    // 0x4043d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4043d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4043d4:
    // 0x4043d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4043d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4043d8:
    // 0x4043d8: 0xaea20024  sw          $v0, 0x24($s5)
    ctx->pc = 0x4043d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 2));
label_4043dc:
    // 0x4043dc: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x4043dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_4043e0:
    // 0x4043e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4043e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4043e4:
    // 0x4043e4: 0xc0e8616  jal         func_3A1858
label_4043e8:
    if (ctx->pc == 0x4043E8u) {
        ctx->pc = 0x4043E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4043E4u;
        // 0x4043e8: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4043ECu;
        goto label_4043ec;
    }
    ctx->pc = 0x4043E4u;
    SET_GPR_U32(ctx, 31, 0x4043ECu);
    ctx->pc = 0x4043E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4043E4u;
    // 0x4043e8: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x4043E4u, 0x4043ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4043ECu;
label_4043ec:
    // 0x4043ec: 0x12000036  beqz        $s0, . + 4 + (0x36 << 2)
label_4043f0:
    if (ctx->pc == 0x4043F0u) {
        ctx->pc = 0x4043F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4043ECu;
        // 0x4043f0: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4043F4u;
        goto label_4043f4;
    }
    ctx->pc = 0x4043ECu;
    {
        const bool branch_taken_0x4043ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4043F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4043ECu;
        // 0x4043f0: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4043ec) {
            ctx->pc = 0x4044C8u;
            goto label_4044c8;
        }
    }
    ctx->pc = 0x4043F4u;
label_4043f4:
    // 0x4043f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4043f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4043f8:
    // 0x4043f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4043f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_4043fc:
    // 0x4043fc: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x4043fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_404400:
    // 0x404400: 0xc0e911e  jal         func_3A4478
label_404404:
    if (ctx->pc == 0x404404u) {
        ctx->pc = 0x404404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404400u;
        // 0x404404: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404408u;
        goto label_404408;
    }
    ctx->pc = 0x404400u;
    SET_GPR_U32(ctx, 31, 0x404408u);
    ctx->pc = 0x404404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404400u;
    // 0x404404: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x404400u, 0x404408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404408u;
label_404408:
    // 0x404408: 0x3c014116  lui         $at, 0x4116
    ctx->pc = 0x404408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16662 << 16));
label_40440c:
    // 0x40440c: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x40440cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
label_404410:
    // 0x404410: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x404410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_404414:
    // 0x404414: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x404414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_404418:
    // 0x404418: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x404418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_40441c:
    // 0x40441c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x40441cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_404420:
    // 0x404420: 0xc136b30  jal         func_4DACC0
label_404424:
    if (ctx->pc == 0x404424u) {
        ctx->pc = 0x404424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404420u;
        // 0x404424: 0x4600a547  neg.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x404428u;
        goto label_404428;
    }
    ctx->pc = 0x404420u;
    SET_GPR_U32(ctx, 31, 0x404428u);
    ctx->pc = 0x404424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404420u;
    // 0x404424: 0x4600a547  neg.s       $f21, $f20 (Delay Slot)
    ctx->f[21] = FPU_NEG_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x404420u, 0x404428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404428u;
label_404428:
    // 0x404428: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x404428u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40442c:
    // 0x40442c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x40442cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_404430:
    // 0x404430: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x404430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_404434:
    // 0x404434: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x404434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_404438:
    // 0x404438: 0xe7b8001c  swc1        $f24, 0x1C($sp)
    ctx->pc = 0x404438u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_40443c:
    // 0x40443c: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x40443cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_404440:
    // 0x404440: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x404440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_404444:
    // 0x404444: 0x40f809  jalr        $v0
label_404448:
    if (ctx->pc == 0x404448u) {
        ctx->pc = 0x404448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404444u;
        // 0x404448: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40444Cu;
        goto label_40444c;
    }
    ctx->pc = 0x404444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40444Cu);
        ctx->pc = 0x404448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404444u;
        // 0x404448: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x404444u, 0x40444Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40444Cu;
label_40444c:
    // 0x40444c: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x40444cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_404450:
    // 0x404450: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x404450u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_404454:
    // 0x404454: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x404454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_404458:
    // 0x404458: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x404458u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_40445c:
    // 0x40445c: 0x86510078  lh          $s1, 0x78($s2)
    ctx->pc = 0x40445cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 120)));
label_404460:
    // 0x404460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x404460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_404464:
    // 0x404464: 0x26520078  addiu       $s2, $s2, 0x78
    ctx->pc = 0x404464u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
label_404468:
    // 0x404468: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x404468u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_40446c:
    // 0x40446c: 0xc0cd518  jal         func_335460
label_404470:
    if (ctx->pc == 0x404470u) {
        ctx->pc = 0x404470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40446Cu;
        // 0x404470: 0x2918821  addu        $s1, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404474u;
        goto label_404474;
    }
    ctx->pc = 0x40446Cu;
    SET_GPR_U32(ctx, 31, 0x404474u);
    ctx->pc = 0x404470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40446Cu;
    // 0x404470: 0x2918821  addu        $s1, $s4, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x40446Cu, 0x404474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404474u;
label_404474:
    // 0x404474: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x404474u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_404478:
    // 0x404478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x404478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40447c:
    // 0x40447c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x40447cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_404480:
    // 0x404480: 0xc0cd518  jal         func_335460
label_404484:
    if (ctx->pc == 0x404484u) {
        ctx->pc = 0x404484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404480u;
        // 0x404484: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x404488u;
        goto label_404488;
    }
    ctx->pc = 0x404480u;
    SET_GPR_U32(ctx, 31, 0x404488u);
    ctx->pc = 0x404484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404480u;
    // 0x404484: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x404480u, 0x404488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404488u;
label_404488:
    // 0x404488: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x404488u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_40448c:
    // 0x40448c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40448cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_404490:
    // 0x404490: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x404490u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_404494:
    // 0x404494: 0xc0cd518  jal         func_335460
label_404498:
    if (ctx->pc == 0x404498u) {
        ctx->pc = 0x404498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404494u;
        // 0x404498: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40449Cu;
        goto label_40449c;
    }
    ctx->pc = 0x404494u;
    SET_GPR_U32(ctx, 31, 0x40449Cu);
    ctx->pc = 0x404498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404494u;
    // 0x404498: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x404494u, 0x40449Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40449Cu;
label_40449c:
    // 0x40449c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x40449cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_4044a0:
    // 0x4044a0: 0xe7b70030  swc1        $f23, 0x30($sp)
    ctx->pc = 0x4044a0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_4044a4:
    // 0x4044a4: 0xe7b60034  swc1        $f22, 0x34($sp)
    ctx->pc = 0x4044a4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_4044a8:
    // 0x4044a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4044a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4044ac:
    // 0x4044ac: 0xe7b8003c  swc1        $f24, 0x3C($sp)
    ctx->pc = 0x4044acu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_4044b0:
    // 0x4044b0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x4044b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_4044b4:
    // 0x4044b4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x4044b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4044b8:
    // 0x4044b8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x4044b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_4044bc:
    // 0x4044bc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4044bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4044c0:
    // 0x4044c0: 0x60f809  jalr        $v1
label_4044c4:
    if (ctx->pc == 0x4044C4u) {
        ctx->pc = 0x4044C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4044C0u;
        // 0x4044c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4044C8u;
        goto label_4044c8;
    }
    ctx->pc = 0x4044C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4044C8u);
        ctx->pc = 0x4044C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4044C0u;
        // 0x4044c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4044C0u, 0x4044C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4044C8u;
label_4044c8:
    // 0x4044c8: 0xaea00020  sw          $zero, 0x20($s5)
    ctx->pc = 0x4044c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 0));
label_4044cc:
    // 0x4044cc: 0x8e830054  lw          $v1, 0x54($s4)
    ctx->pc = 0x4044ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_4044d0:
    // 0x4044d0: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x4044d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
label_4044d4:
    // 0x4044d4: 0x1000003c  b           . + 4 + (0x3C << 2)
label_4044d8:
    if (ctx->pc == 0x4044D8u) {
        ctx->pc = 0x4044D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4044D4u;
        // 0x4044d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4044DCu;
        goto label_4044dc;
    }
    ctx->pc = 0x4044D4u;
    {
        const bool branch_taken_0x4044d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4044D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4044D4u;
        // 0x4044d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4044d4) {
            ctx->pc = 0x4045C8u;
            goto label_4045c8;
        }
    }
    ctx->pc = 0x4044DCu;
label_4044dc:
    // 0x4044dc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4044dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4044e0:
    // 0x4044e0: 0xc0ea12a  jal         func_3A84A8
label_4044e4:
    if (ctx->pc == 0x4044E4u) {
        ctx->pc = 0x4044E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4044E0u;
        // 0x4044e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4044E8u;
        goto label_4044e8;
    }
    ctx->pc = 0x4044E0u;
    SET_GPR_U32(ctx, 31, 0x4044E8u);
    ctx->pc = 0x4044E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4044E0u;
    // 0x4044e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x4044E0u, 0x4044E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4044E8u;
label_4044e8:
    // 0x4044e8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x4044e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4044ec:
    // 0x4044ec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4044ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4044f0:
    // 0x4044f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4044f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4044f4:
    // 0x4044f4: 0xc0ea12a  jal         func_3A84A8
label_4044f8:
    if (ctx->pc == 0x4044F8u) {
        ctx->pc = 0x4044F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4044F4u;
        // 0x4044f8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4044FCu;
        goto label_4044fc;
    }
    ctx->pc = 0x4044F4u;
    SET_GPR_U32(ctx, 31, 0x4044FCu);
    ctx->pc = 0x4044F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4044F4u;
    // 0x4044f8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x4044F4u, 0x4044FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4044FCu;
label_4044fc:
    // 0x4044fc: 0x8e830054  lw          $v1, 0x54($s4)
    ctx->pc = 0x4044fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_404500:
    // 0x404500: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x404500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
label_404504:
    // 0x404504: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x404504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_404508:
    // 0x404508: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x404508u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40450c:
    // 0x40450c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x40450cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_404510:
    // 0x404510: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x404510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_404514:
    // 0x404514: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x404514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_404518:
    // 0x404518: 0xae830054  sw          $v1, 0x54($s4)
    ctx->pc = 0x404518u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 3));
label_40451c:
    // 0x40451c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x40451cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_404520:
    // 0x404520: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x404520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_404524:
    // 0x404524: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x404524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_404528:
    // 0x404528: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x404528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_40452c:
    // 0x40452c: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x40452cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
label_404530:
    // 0x404530: 0xc0cd518  jal         func_335460
label_404534:
    if (ctx->pc == 0x404534u) {
        ctx->pc = 0x404534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404530u;
        // 0x404534: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404538u;
        goto label_404538;
    }
    ctx->pc = 0x404530u;
    SET_GPR_U32(ctx, 31, 0x404538u);
    ctx->pc = 0x404534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404530u;
    // 0x404534: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x404530u, 0x404538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404538u;
label_404538:
    // 0x404538: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x404538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_40453c:
    // 0x40453c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x40453cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_404540:
    // 0x404540: 0xc136b24  jal         func_4DAC90
label_404544:
    if (ctx->pc == 0x404544u) {
        ctx->pc = 0x404544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404540u;
        // 0x404544: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404548u;
        goto label_404548;
    }
    ctx->pc = 0x404540u;
    SET_GPR_U32(ctx, 31, 0x404548u);
    ctx->pc = 0x404544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404540u;
    // 0x404544: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x404540u, 0x404548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404548u;
label_404548:
    // 0x404548: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x404548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_40454c:
    // 0x40454c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x40454cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_404550:
    // 0x404550: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x404550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_404554:
    // 0x404554: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x404554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_404558:
    // 0x404558: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x404558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_40455c:
    // 0x40455c: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x40455cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_404560:
    // 0x404560: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x404560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_404564:
    // 0x404564: 0x60f809  jalr        $v1
label_404568:
    if (ctx->pc == 0x404568u) {
        ctx->pc = 0x404568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404564u;
        // 0x404568: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40456Cu;
        goto label_40456c;
    }
    ctx->pc = 0x404564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40456Cu);
        ctx->pc = 0x404568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404564u;
        // 0x404568: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x404564u, 0x40456Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40456Cu;
label_40456c:
    // 0x40456c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x40456cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_404570:
    // 0x404570: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x404570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_404574:
    // 0x404574: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x404574u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_404578:
    // 0x404578: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x404578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_40457c:
    // 0x40457c: 0x60f809  jalr        $v1
label_404580:
    if (ctx->pc == 0x404580u) {
        ctx->pc = 0x404580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40457Cu;
        // 0x404580: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404584u;
        goto label_404584;
    }
    ctx->pc = 0x40457Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x404584u);
        ctx->pc = 0x404580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40457Cu;
        // 0x404580: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40457Cu, 0x404584u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x404584u;
label_404584:
    // 0x404584: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x404584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_404588:
    // 0x404588: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x404588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_40458c:
    // 0x40458c: 0xaea20024  sw          $v0, 0x24($s5)
    ctx->pc = 0x40458cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 2));
label_404590:
    // 0x404590: 0xc0e858c  jal         func_3A1630
label_404594:
    if (ctx->pc == 0x404594u) {
        ctx->pc = 0x404594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404590u;
        // 0x404594: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404598u;
        goto label_404598;
    }
    ctx->pc = 0x404590u;
    SET_GPR_U32(ctx, 31, 0x404598u);
    ctx->pc = 0x404594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404590u;
    // 0x404594: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x404590u, 0x404598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404598u;
label_404598:
    // 0x404598: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x404598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_40459c:
    // 0x40459c: 0x3c030420  lui         $v1, 0x420
    ctx->pc = 0x40459cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1056 << 16));
label_4045a0:
    // 0x4045a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4045a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4045a4:
    // 0x4045a4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_4045a8:
    if (ctx->pc == 0x4045A8u) {
        ctx->pc = 0x4045A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4045A4u;
        // 0x4045a8: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4045ACu;
        goto label_4045ac;
    }
    ctx->pc = 0x4045A4u;
    {
        const bool branch_taken_0x4045a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4045A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4045A4u;
        // 0x4045a8: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4045a4) {
            ctx->pc = 0x404624u;
            goto label_404624;
        }
    }
    ctx->pc = 0x4045ACu;
label_4045ac:
    // 0x4045ac: 0xc0ea146  jal         func_3A8518
label_4045b0:
    if (ctx->pc == 0x4045B0u) {
        ctx->pc = 0x4045B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4045ACu;
        // 0x4045b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4045B4u;
        goto label_4045b4;
    }
    ctx->pc = 0x4045ACu;
    SET_GPR_U32(ctx, 31, 0x4045B4u);
    ctx->pc = 0x4045B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4045ACu;
    // 0x4045b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x4045ACu, 0x4045B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4045B4u;
label_4045b4:
    // 0x4045b4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_4045b8:
    if (ctx->pc == 0x4045B8u) {
        ctx->pc = 0x4045B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4045B4u;
        // 0x4045b8: 0x8e820054  lw          $v0, 0x54($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4045BCu;
        goto label_4045bc;
    }
    ctx->pc = 0x4045B4u;
    {
        const bool branch_taken_0x4045b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4045b4) {
            ctx->pc = 0x4045B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4045B4u;
            // 0x4045b8: 0x8e820054  lw          $v0, 0x54($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4045D4u;
            goto label_4045d4;
        }
    }
    ctx->pc = 0x4045BCu;
label_4045bc:
    // 0x4045bc: 0x8e830054  lw          $v1, 0x54($s4)
    ctx->pc = 0x4045bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_4045c0:
    // 0x4045c0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4045c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4045c4:
    // 0x4045c4: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x4045c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_4045c8:
    // 0x4045c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4045c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4045cc:
    // 0x4045cc: 0x10000015  b           . + 4 + (0x15 << 2)
label_4045d0:
    if (ctx->pc == 0x4045D0u) {
        ctx->pc = 0x4045D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4045CCu;
        // 0x4045d0: 0xae830054  sw          $v1, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4045D4u;
        goto label_4045d4;
    }
    ctx->pc = 0x4045CCu;
    {
        const bool branch_taken_0x4045cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4045D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4045CCu;
        // 0x4045d0: 0xae830054  sw          $v1, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4045cc) {
            ctx->pc = 0x404624u;
            goto label_404624;
        }
    }
    ctx->pc = 0x4045D4u;
label_4045d4:
    // 0x4045d4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4045d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4045d8:
    // 0x4045d8: 0x10000012  b           . + 4 + (0x12 << 2)
label_4045dc:
    if (ctx->pc == 0x4045DCu) {
        ctx->pc = 0x4045DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4045D8u;
        // 0x4045dc: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4045E0u;
        goto label_4045e0;
    }
    ctx->pc = 0x4045D8u;
    {
        const bool branch_taken_0x4045d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4045DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4045D8u;
        // 0x4045dc: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4045d8) {
            ctx->pc = 0x404624u;
            goto label_404624;
        }
    }
    ctx->pc = 0x4045E0u;
label_4045e0:
    // 0x4045e0: 0x26b00030  addiu       $s0, $s5, 0x30
    ctx->pc = 0x4045e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
label_4045e4:
    // 0x4045e4: 0xc0e4060  jal         func_390180
label_4045e8:
    if (ctx->pc == 0x4045E8u) {
        ctx->pc = 0x4045E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4045E4u;
        // 0x4045e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4045ECu;
        goto label_4045ec;
    }
    ctx->pc = 0x4045E4u;
    SET_GPR_U32(ctx, 31, 0x4045ECu);
    ctx->pc = 0x4045E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4045E4u;
    // 0x4045e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x4045E4u, 0x4045ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4045ECu;
label_4045ec:
    // 0x4045ec: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_4045f0:
    if (ctx->pc == 0x4045F0u) {
        ctx->pc = 0x4045F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4045ECu;
        // 0x4045f0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4045F4u;
        goto label_4045f4;
    }
    ctx->pc = 0x4045ECu;
    {
        const bool branch_taken_0x4045ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4045ec) {
            ctx->pc = 0x4045F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4045ECu;
            // 0x4045f0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x404628u;
            goto label_404628;
        }
    }
    ctx->pc = 0x4045F4u;
label_4045f4:
    // 0x4045f4: 0xc0e4060  jal         func_390180
label_4045f8:
    if (ctx->pc == 0x4045F8u) {
        ctx->pc = 0x4045F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4045F4u;
        // 0x4045f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4045FCu;
        goto label_4045fc;
    }
    ctx->pc = 0x4045F4u;
    SET_GPR_U32(ctx, 31, 0x4045FCu);
    ctx->pc = 0x4045F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4045F4u;
    // 0x4045f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x4045F4u, 0x4045FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4045FCu;
label_4045fc:
    // 0x4045fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4045fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_404600:
    // 0x404600: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x404600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_404604:
    // 0x404604: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x404604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_404608:
    // 0x404608: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x404608u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_40460c:
    // 0x40460c: 0x8c6700cc  lw          $a3, 0xCC($v1)
    ctx->pc = 0x40460cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_404610:
    // 0x404610: 0xe0f809  jalr        $a3
label_404614:
    if (ctx->pc == 0x404614u) {
        ctx->pc = 0x404614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404610u;
        // 0x404614: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404618u;
        goto label_404618;
    }
    ctx->pc = 0x404610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x404618u);
        ctx->pc = 0x404614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404610u;
        // 0x404614: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x404610u, 0x404618u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x404618u;
label_404618:
    // 0x404618: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x404618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40461c:
    // 0x40461c: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x40461cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_404620:
    // 0x404620: 0xaea30030  sw          $v1, 0x30($s5)
    ctx->pc = 0x404620u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 3));
label_404624:
    // 0x404624: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x404624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_404628:
    // 0x404628: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x404628u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_40462c:
    // 0x40462c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x40462cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_404630:
    // 0x404630: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x404630u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_404634:
    // 0x404634: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x404634u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_404638:
    // 0x404638: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x404638u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_40463c:
    // 0x40463c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x40463cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_404640:
    // 0x404640: 0xc7b800d0  lwc1        $f24, 0xD0($sp)
    ctx->pc = 0x404640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_404644:
    // 0x404644: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x404644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_404648:
    // 0x404648: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x404648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_40464c:
    // 0x40464c: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x40464cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_404650:
    // 0x404650: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x404650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_404654:
    // 0x404654: 0x3e00008  jr          $ra
label_404658:
    if (ctx->pc == 0x404658u) {
        ctx->pc = 0x404658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404654u;
        // 0x404658: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40465Cu;
        goto label_40465c;
    }
    ctx->pc = 0x404654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x404658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404654u;
        // 0x404658: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x404654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40465Cu;
label_40465c:
    // 0x40465c: 0x0  nop
    ctx->pc = 0x40465cu;
    // NOP
    ctx->pc = 0x404660u;
}
