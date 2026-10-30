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

// Function: sub_002A9188
// Address: 0x2a9188 - 0x2a9508
void sub_002A9188_0x2a9188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9188_0x2a9188");
#endif

    switch (ctx->pc) {
        case 0x2a9188u: goto label_2a9188;
        case 0x2a918cu: goto label_2a918c;
        case 0x2a9190u: goto label_2a9190;
        case 0x2a9194u: goto label_2a9194;
        case 0x2a9198u: goto label_2a9198;
        case 0x2a919cu: goto label_2a919c;
        case 0x2a91a0u: goto label_2a91a0;
        case 0x2a91a4u: goto label_2a91a4;
        case 0x2a91a8u: goto label_2a91a8;
        case 0x2a91acu: goto label_2a91ac;
        case 0x2a91b0u: goto label_2a91b0;
        case 0x2a91b4u: goto label_2a91b4;
        case 0x2a91b8u: goto label_2a91b8;
        case 0x2a91bcu: goto label_2a91bc;
        case 0x2a91c0u: goto label_2a91c0;
        case 0x2a91c4u: goto label_2a91c4;
        case 0x2a91c8u: goto label_2a91c8;
        case 0x2a91ccu: goto label_2a91cc;
        case 0x2a91d0u: goto label_2a91d0;
        case 0x2a91d4u: goto label_2a91d4;
        case 0x2a91d8u: goto label_2a91d8;
        case 0x2a91dcu: goto label_2a91dc;
        case 0x2a91e0u: goto label_2a91e0;
        case 0x2a91e4u: goto label_2a91e4;
        case 0x2a91e8u: goto label_2a91e8;
        case 0x2a91ecu: goto label_2a91ec;
        case 0x2a91f0u: goto label_2a91f0;
        case 0x2a91f4u: goto label_2a91f4;
        case 0x2a91f8u: goto label_2a91f8;
        case 0x2a91fcu: goto label_2a91fc;
        case 0x2a9200u: goto label_2a9200;
        case 0x2a9204u: goto label_2a9204;
        case 0x2a9208u: goto label_2a9208;
        case 0x2a920cu: goto label_2a920c;
        case 0x2a9210u: goto label_2a9210;
        case 0x2a9214u: goto label_2a9214;
        case 0x2a9218u: goto label_2a9218;
        case 0x2a921cu: goto label_2a921c;
        case 0x2a9220u: goto label_2a9220;
        case 0x2a9224u: goto label_2a9224;
        case 0x2a9228u: goto label_2a9228;
        case 0x2a922cu: goto label_2a922c;
        case 0x2a9230u: goto label_2a9230;
        case 0x2a9234u: goto label_2a9234;
        case 0x2a9238u: goto label_2a9238;
        case 0x2a923cu: goto label_2a923c;
        case 0x2a9240u: goto label_2a9240;
        case 0x2a9244u: goto label_2a9244;
        case 0x2a9248u: goto label_2a9248;
        case 0x2a924cu: goto label_2a924c;
        case 0x2a9250u: goto label_2a9250;
        case 0x2a9254u: goto label_2a9254;
        case 0x2a9258u: goto label_2a9258;
        case 0x2a925cu: goto label_2a925c;
        case 0x2a9260u: goto label_2a9260;
        case 0x2a9264u: goto label_2a9264;
        case 0x2a9268u: goto label_2a9268;
        case 0x2a926cu: goto label_2a926c;
        case 0x2a9270u: goto label_2a9270;
        case 0x2a9274u: goto label_2a9274;
        case 0x2a9278u: goto label_2a9278;
        case 0x2a927cu: goto label_2a927c;
        case 0x2a9280u: goto label_2a9280;
        case 0x2a9284u: goto label_2a9284;
        case 0x2a9288u: goto label_2a9288;
        case 0x2a928cu: goto label_2a928c;
        case 0x2a9290u: goto label_2a9290;
        case 0x2a9294u: goto label_2a9294;
        case 0x2a9298u: goto label_2a9298;
        case 0x2a929cu: goto label_2a929c;
        case 0x2a92a0u: goto label_2a92a0;
        case 0x2a92a4u: goto label_2a92a4;
        case 0x2a92a8u: goto label_2a92a8;
        case 0x2a92acu: goto label_2a92ac;
        case 0x2a92b0u: goto label_2a92b0;
        case 0x2a92b4u: goto label_2a92b4;
        case 0x2a92b8u: goto label_2a92b8;
        case 0x2a92bcu: goto label_2a92bc;
        case 0x2a92c0u: goto label_2a92c0;
        case 0x2a92c4u: goto label_2a92c4;
        case 0x2a92c8u: goto label_2a92c8;
        case 0x2a92ccu: goto label_2a92cc;
        case 0x2a92d0u: goto label_2a92d0;
        case 0x2a92d4u: goto label_2a92d4;
        case 0x2a92d8u: goto label_2a92d8;
        case 0x2a92dcu: goto label_2a92dc;
        case 0x2a92e0u: goto label_2a92e0;
        case 0x2a92e4u: goto label_2a92e4;
        case 0x2a92e8u: goto label_2a92e8;
        case 0x2a92ecu: goto label_2a92ec;
        case 0x2a92f0u: goto label_2a92f0;
        case 0x2a92f4u: goto label_2a92f4;
        case 0x2a92f8u: goto label_2a92f8;
        case 0x2a92fcu: goto label_2a92fc;
        case 0x2a9300u: goto label_2a9300;
        case 0x2a9304u: goto label_2a9304;
        case 0x2a9308u: goto label_2a9308;
        case 0x2a930cu: goto label_2a930c;
        case 0x2a9310u: goto label_2a9310;
        case 0x2a9314u: goto label_2a9314;
        case 0x2a9318u: goto label_2a9318;
        case 0x2a931cu: goto label_2a931c;
        case 0x2a9320u: goto label_2a9320;
        case 0x2a9324u: goto label_2a9324;
        case 0x2a9328u: goto label_2a9328;
        case 0x2a932cu: goto label_2a932c;
        case 0x2a9330u: goto label_2a9330;
        case 0x2a9334u: goto label_2a9334;
        case 0x2a9338u: goto label_2a9338;
        case 0x2a933cu: goto label_2a933c;
        case 0x2a9340u: goto label_2a9340;
        case 0x2a9344u: goto label_2a9344;
        case 0x2a9348u: goto label_2a9348;
        case 0x2a934cu: goto label_2a934c;
        case 0x2a9350u: goto label_2a9350;
        case 0x2a9354u: goto label_2a9354;
        case 0x2a9358u: goto label_2a9358;
        case 0x2a935cu: goto label_2a935c;
        case 0x2a9360u: goto label_2a9360;
        case 0x2a9364u: goto label_2a9364;
        case 0x2a9368u: goto label_2a9368;
        case 0x2a936cu: goto label_2a936c;
        case 0x2a9370u: goto label_2a9370;
        case 0x2a9374u: goto label_2a9374;
        case 0x2a9378u: goto label_2a9378;
        case 0x2a937cu: goto label_2a937c;
        case 0x2a9380u: goto label_2a9380;
        case 0x2a9384u: goto label_2a9384;
        case 0x2a9388u: goto label_2a9388;
        case 0x2a938cu: goto label_2a938c;
        case 0x2a9390u: goto label_2a9390;
        case 0x2a9394u: goto label_2a9394;
        case 0x2a9398u: goto label_2a9398;
        case 0x2a939cu: goto label_2a939c;
        case 0x2a93a0u: goto label_2a93a0;
        case 0x2a93a4u: goto label_2a93a4;
        case 0x2a93a8u: goto label_2a93a8;
        case 0x2a93acu: goto label_2a93ac;
        case 0x2a93b0u: goto label_2a93b0;
        case 0x2a93b4u: goto label_2a93b4;
        case 0x2a93b8u: goto label_2a93b8;
        case 0x2a93bcu: goto label_2a93bc;
        case 0x2a93c0u: goto label_2a93c0;
        case 0x2a93c4u: goto label_2a93c4;
        case 0x2a93c8u: goto label_2a93c8;
        case 0x2a93ccu: goto label_2a93cc;
        case 0x2a93d0u: goto label_2a93d0;
        case 0x2a93d4u: goto label_2a93d4;
        case 0x2a93d8u: goto label_2a93d8;
        case 0x2a93dcu: goto label_2a93dc;
        case 0x2a93e0u: goto label_2a93e0;
        case 0x2a93e4u: goto label_2a93e4;
        case 0x2a93e8u: goto label_2a93e8;
        case 0x2a93ecu: goto label_2a93ec;
        case 0x2a93f0u: goto label_2a93f0;
        case 0x2a93f4u: goto label_2a93f4;
        case 0x2a93f8u: goto label_2a93f8;
        case 0x2a93fcu: goto label_2a93fc;
        case 0x2a9400u: goto label_2a9400;
        case 0x2a9404u: goto label_2a9404;
        case 0x2a9408u: goto label_2a9408;
        case 0x2a940cu: goto label_2a940c;
        case 0x2a9410u: goto label_2a9410;
        case 0x2a9414u: goto label_2a9414;
        case 0x2a9418u: goto label_2a9418;
        case 0x2a941cu: goto label_2a941c;
        case 0x2a9420u: goto label_2a9420;
        case 0x2a9424u: goto label_2a9424;
        case 0x2a9428u: goto label_2a9428;
        case 0x2a942cu: goto label_2a942c;
        case 0x2a9430u: goto label_2a9430;
        case 0x2a9434u: goto label_2a9434;
        case 0x2a9438u: goto label_2a9438;
        case 0x2a943cu: goto label_2a943c;
        case 0x2a9440u: goto label_2a9440;
        case 0x2a9444u: goto label_2a9444;
        case 0x2a9448u: goto label_2a9448;
        case 0x2a944cu: goto label_2a944c;
        case 0x2a9450u: goto label_2a9450;
        case 0x2a9454u: goto label_2a9454;
        case 0x2a9458u: goto label_2a9458;
        case 0x2a945cu: goto label_2a945c;
        case 0x2a9460u: goto label_2a9460;
        case 0x2a9464u: goto label_2a9464;
        case 0x2a9468u: goto label_2a9468;
        case 0x2a946cu: goto label_2a946c;
        case 0x2a9470u: goto label_2a9470;
        case 0x2a9474u: goto label_2a9474;
        case 0x2a9478u: goto label_2a9478;
        case 0x2a947cu: goto label_2a947c;
        case 0x2a9480u: goto label_2a9480;
        case 0x2a9484u: goto label_2a9484;
        case 0x2a9488u: goto label_2a9488;
        case 0x2a948cu: goto label_2a948c;
        case 0x2a9490u: goto label_2a9490;
        case 0x2a9494u: goto label_2a9494;
        case 0x2a9498u: goto label_2a9498;
        case 0x2a949cu: goto label_2a949c;
        case 0x2a94a0u: goto label_2a94a0;
        case 0x2a94a4u: goto label_2a94a4;
        case 0x2a94a8u: goto label_2a94a8;
        case 0x2a94acu: goto label_2a94ac;
        case 0x2a94b0u: goto label_2a94b0;
        case 0x2a94b4u: goto label_2a94b4;
        case 0x2a94b8u: goto label_2a94b8;
        case 0x2a94bcu: goto label_2a94bc;
        case 0x2a94c0u: goto label_2a94c0;
        case 0x2a94c4u: goto label_2a94c4;
        case 0x2a94c8u: goto label_2a94c8;
        case 0x2a94ccu: goto label_2a94cc;
        case 0x2a94d0u: goto label_2a94d0;
        case 0x2a94d4u: goto label_2a94d4;
        case 0x2a94d8u: goto label_2a94d8;
        case 0x2a94dcu: goto label_2a94dc;
        case 0x2a94e0u: goto label_2a94e0;
        case 0x2a94e4u: goto label_2a94e4;
        case 0x2a94e8u: goto label_2a94e8;
        case 0x2a94ecu: goto label_2a94ec;
        case 0x2a94f0u: goto label_2a94f0;
        case 0x2a94f4u: goto label_2a94f4;
        case 0x2a94f8u: goto label_2a94f8;
        case 0x2a94fcu: goto label_2a94fc;
        case 0x2a9500u: goto label_2a9500;
        case 0x2a9504u: goto label_2a9504;
        default: break;
    }

    ctx->pc = 0x2a9188u;

label_2a9188:
    // 0x2a9188: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x2a9188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_2a918c:
    // 0x2a918c: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2a918cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2a9190:
    // 0x2a9190: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2a9190u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2a9194:
    // 0x2a9194: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a9194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a9198:
    // 0x2a9198: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x2a9198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
label_2a919c:
    // 0x2a919c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2a919cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2a91a0:
    // 0x2a91a0: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x2a91a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
label_2a91a4:
    // 0x2a91a4: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2a91a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2a91a8:
    // 0x2a91a8: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x2a91a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
label_2a91ac:
    // 0x2a91ac: 0x24514b00  addiu       $s1, $v0, 0x4B00
    ctx->pc = 0x2a91acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2a91b0:
    // 0x2a91b0: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x2a91b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
label_2a91b4:
    // 0x2a91b4: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x2a91b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
label_2a91b8:
    // 0x2a91b8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2a91b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a91bc:
    // 0x2a91bc: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x2a91bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
label_2a91c0:
    // 0x2a91c0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2a91c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a91c4:
    // 0x2a91c4: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x2a91c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
label_2a91c8:
    // 0x2a91c8: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x2a91c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
label_2a91cc:
    // 0x2a91cc: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x2a91ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
label_2a91d0:
    // 0x2a91d0: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2a91d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_2a91d4:
    // 0x2a91d4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2a91d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2a91d8:
    // 0x2a91d8: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x2a91d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a91dc:
    // 0x2a91dc: 0x8c64020c  lw          $a0, 0x20C($v1)
    ctx->pc = 0x2a91dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
label_2a91e0:
    // 0x2a91e0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2a91e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2a91e4:
    // 0x2a91e4: 0x26700090  addiu       $s0, $s3, 0x90
    ctx->pc = 0x2a91e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_2a91e8:
    // 0x2a91e8: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x2a91e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
label_2a91ec:
    // 0x2a91ec: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2a91ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a91f0:
    // 0x2a91f0: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x2a91f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2a91f4:
    // 0x2a91f4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2a91f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2a91f8:
    // 0x2a91f8: 0xc136d6c  jal         func_4DB5B0
label_2a91fc:
    if (ctx->pc == 0x2A91FCu) {
        ctx->pc = 0x2A91FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A91F8u;
        // 0x2a91fc: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9200u;
        goto label_2a9200;
    }
    ctx->pc = 0x2A91F8u;
    SET_GPR_U32(ctx, 31, 0x2A9200u);
    ctx->pc = 0x2A91FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A91F8u;
    // 0x2a91fc: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB5B0u, 0x2A91F8u, 0x2A9200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9200u;
label_2a9200:
    // 0x2a9200: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x2a9200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_2a9204:
    // 0x2a9204: 0xc0e409a  jal         func_390268
label_2a9208:
    if (ctx->pc == 0x2A9208u) {
        ctx->pc = 0x2A9208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9204u;
        // 0x2a9208: 0x27a400c4  addiu       $a0, $sp, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A920Cu;
        goto label_2a920c;
    }
    ctx->pc = 0x2A9204u;
    SET_GPR_U32(ctx, 31, 0x2A920Cu);
    ctx->pc = 0x2A9208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9204u;
    // 0x2a9208: 0x27a400c4  addiu       $a0, $sp, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A9204u, 0x2A920Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A920Cu;
label_2a920c:
    // 0x2a920c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a920cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9210:
    // 0x2a9210: 0x124000af  beqz        $s2, . + 4 + (0xAF << 2)
label_2a9214:
    if (ctx->pc == 0x2A9214u) {
        ctx->pc = 0x2A9214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9210u;
        // 0x2a9214: 0x26420090  addiu       $v0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9218u;
        goto label_2a9218;
    }
    ctx->pc = 0x2A9210u;
    {
        const bool branch_taken_0x2a9210 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9210u;
        // 0x2a9214: 0x26420090  addiu       $v0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9210) {
            ctx->pc = 0x2A94D0u;
            goto label_2a94d0;
        }
    }
    ctx->pc = 0x2A9218u;
label_2a9218:
    // 0x2a9218: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x2a9218u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2a921c:
    // 0x2a921c: 0x84440002  lh          $a0, 0x2($v0)
    ctx->pc = 0x2a921cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2a9220:
    // 0x2a9220: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2a9220u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9224:
    // 0x2a9224: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2a9224u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2a9228:
    // 0x2a9228: 0x3c014244  lui         $at, 0x4244
    ctx->pc = 0x2a9228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16964 << 16));
label_2a922c:
    // 0x2a922c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a922cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a9230:
    // 0x2a9230: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2a9230u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2a9234:
    // 0x2a9234: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2a9234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_2a9238:
    // 0x2a9238: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2a9238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_2a923c:
    // 0x2a923c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2a923cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2a9240:
    // 0x2a9240: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2a9240u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2a9244:
    // 0x2a9244: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2a9244u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2a9248:
    // 0x2a9248: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2a9248u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2a924c:
    // 0x2a924c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2a924cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2a9250:
    // 0x2a9250: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2a9250u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2a9254:
    // 0x2a9254: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2a9254u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2a9258:
    // 0x2a9258: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2a9258u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2a925c:
    // 0x2a925c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2a925cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2a9260:
    // 0x2a9260: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2a9260u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2a9264:
    // 0x2a9264: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2a9264u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2a9268:
    // 0x2a9268: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2a9268u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_2a926c:
    // 0x2a926c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2a926cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2a9270:
    // 0x2a9270: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9270u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a9274:
    // 0x2a9274: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2a9274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2a9278:
    // 0x2a9278: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a9278u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a927c:
    // 0x2a927c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2a927cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2a9280:
    // 0x2a9280: 0x45010093  bc1t        . + 4 + (0x93 << 2)
label_2a9284:
    if (ctx->pc == 0x2A9284u) {
        ctx->pc = 0x2A9284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9280u;
        // 0x2a9284: 0xe7a000c0  swc1        $f0, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9288u;
        goto label_2a9288;
    }
    ctx->pc = 0x2A9280u;
    {
        const bool branch_taken_0x2a9280 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A9284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9280u;
        // 0x2a9284: 0xe7a000c0  swc1        $f0, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9280) {
            ctx->pc = 0x2A94D0u;
            goto label_2a94d0;
        }
    }
    ctx->pc = 0x2A9288u;
label_2a9288:
    // 0x2a9288: 0xc089000  jal         func_224000
label_2a928c:
    if (ctx->pc == 0x2A928Cu) {
        ctx->pc = 0x2A928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9288u;
        // 0x2a928c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9290u;
        goto label_2a9290;
    }
    ctx->pc = 0x2A9288u;
    SET_GPR_U32(ctx, 31, 0x2A9290u);
    ctx->pc = 0x2A928Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9288u;
    // 0x2a928c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x2A9288u, 0x2A9290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9290u;
label_2a9290:
    // 0x2a9290: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a9290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a9294:
    // 0x2a9294: 0x1043008f  beq         $v0, $v1, . + 4 + (0x8F << 2)
label_2a9298:
    if (ctx->pc == 0x2A9298u) {
        ctx->pc = 0x2A9298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9294u;
        // 0x2a9298: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A929Cu;
        goto label_2a929c;
    }
    ctx->pc = 0x2A9294u;
    {
        const bool branch_taken_0x2a9294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A9298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9294u;
        // 0x2a9298: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9294) {
            ctx->pc = 0x2A94D4u;
            goto label_2a94d4;
        }
    }
    ctx->pc = 0x2A929Cu;
label_2a929c:
    // 0x2a929c: 0x8e6303b0  lw          $v1, 0x3B0($s3)
    ctx->pc = 0x2a929cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 944)));
label_2a92a0:
    // 0x2a92a0: 0x8e4203b0  lw          $v0, 0x3B0($s2)
    ctx->pc = 0x2a92a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
label_2a92a4:
    // 0x2a92a4: 0x1062008b  beq         $v1, $v0, . + 4 + (0x8B << 2)
label_2a92a8:
    if (ctx->pc == 0x2A92A8u) {
        ctx->pc = 0x2A92A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A92A4u;
        // 0x2a92a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A92ACu;
        goto label_2a92ac;
    }
    ctx->pc = 0x2A92A4u;
    {
        const bool branch_taken_0x2a92a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A92A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A92A4u;
        // 0x2a92a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a92a4) {
            ctx->pc = 0x2A94D4u;
            goto label_2a94d4;
        }
    }
    ctx->pc = 0x2A92ACu;
label_2a92ac:
    // 0x2a92ac: 0xc087502  jal         func_21D408
label_2a92b0:
    if (ctx->pc == 0x2A92B0u) {
        ctx->pc = 0x2A92B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A92ACu;
        // 0x2a92b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A92B4u;
        goto label_2a92b4;
    }
    ctx->pc = 0x2A92ACu;
    SET_GPR_U32(ctx, 31, 0x2A92B4u);
    ctx->pc = 0x2A92B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A92ACu;
    // 0x2a92b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2A92ACu, 0x2A92B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A92B4u;
label_2a92b4:
    // 0x2a92b4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a92b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a92b8:
    // 0x2a92b8: 0x8282002c  lb          $v0, 0x2C($s4)
    ctx->pc = 0x2a92b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 44)));
label_2a92bc:
    // 0x2a92bc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2a92c0:
    if (ctx->pc == 0x2A92C0u) {
        ctx->pc = 0x2A92C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A92BCu;
        // 0x2a92c0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A92C4u;
        goto label_2a92c4;
    }
    ctx->pc = 0x2A92BCu;
    {
        const bool branch_taken_0x2a92bc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A92C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A92BCu;
        // 0x2a92c0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a92bc) {
            ctx->pc = 0x2A92D0u;
            goto label_2a92d0;
        }
    }
    ctx->pc = 0x2A92C4u;
label_2a92c4:
    // 0x2a92c4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2a92c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2a92c8:
    // 0x2a92c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2a92cc:
    if (ctx->pc == 0x2A92CCu) {
        ctx->pc = 0x2A92CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A92C8u;
        // 0x2a92cc: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A92D0u;
        goto label_2a92d0;
    }
    ctx->pc = 0x2A92C8u;
    {
        const bool branch_taken_0x2a92c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A92CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A92C8u;
        // 0x2a92cc: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a92c8) {
            ctx->pc = 0x2A92D4u;
            goto label_2a92d4;
        }
    }
    ctx->pc = 0x2A92D0u;
label_2a92d0:
    // 0x2a92d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a92d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a92d4:
    // 0x2a92d4: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_2a92d8:
    if (ctx->pc == 0x2A92D8u) {
        ctx->pc = 0x2A92D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A92D4u;
        // 0x2a92d8: 0x8e6400cc  lw          $a0, 0xCC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A92DCu;
        goto label_2a92dc;
    }
    ctx->pc = 0x2A92D4u;
    {
        const bool branch_taken_0x2a92d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a92d4) {
            ctx->pc = 0x2A92D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A92D4u;
            // 0x2a92d8: 0x8e6400cc  lw          $a0, 0xCC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A931Cu;
            goto label_2a931c;
        }
    }
    ctx->pc = 0x2A92DCu;
label_2a92dc:
    // 0x2a92dc: 0x8282002c  lb          $v0, 0x2C($s4)
    ctx->pc = 0x2a92dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 44)));
label_2a92e0:
    // 0x2a92e0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2a92e4:
    if (ctx->pc == 0x2A92E4u) {
        ctx->pc = 0x2A92E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A92E0u;
        // 0x2a92e4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A92E8u;
        goto label_2a92e8;
    }
    ctx->pc = 0x2A92E0u;
    {
        const bool branch_taken_0x2a92e0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A92E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A92E0u;
        // 0x2a92e4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a92e0) {
            ctx->pc = 0x2A92F4u;
            goto label_2a92f4;
        }
    }
    ctx->pc = 0x2A92E8u;
label_2a92e8:
    // 0x2a92e8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2a92e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2a92ec:
    // 0x2a92ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_2a92f0:
    if (ctx->pc == 0x2A92F0u) {
        ctx->pc = 0x2A92F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A92ECu;
        // 0x2a92f0: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A92F4u;
        goto label_2a92f4;
    }
    ctx->pc = 0x2A92ECu;
    {
        const bool branch_taken_0x2a92ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A92F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A92ECu;
        // 0x2a92f0: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a92ec) {
            ctx->pc = 0x2A92F8u;
            goto label_2a92f8;
        }
    }
    ctx->pc = 0x2A92F4u;
label_2a92f4:
    // 0x2a92f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a92f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a92f8:
    // 0x2a92f8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2a92f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2a92fc:
    // 0x2a92fc: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2a92fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2a9300:
    // 0x2a9300: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2a9300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2a9304:
    // 0x2a9304: 0x40f809  jalr        $v0
label_2a9308:
    if (ctx->pc == 0x2A9308u) {
        ctx->pc = 0x2A9308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9304u;
        // 0x2a9308: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A930Cu;
        goto label_2a930c;
    }
    ctx->pc = 0x2A9304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A930Cu);
        ctx->pc = 0x2A9308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9304u;
        // 0x2a9308: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9304u, 0x2A930Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A930Cu;
label_2a930c:
    // 0x2a930c: 0x38420069  xori        $v0, $v0, 0x69
    ctx->pc = 0x2a930cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)105);
label_2a9310:
    // 0x2a9310: 0x54400070  bnel        $v0, $zero, . + 4 + (0x70 << 2)
label_2a9314:
    if (ctx->pc == 0x2A9314u) {
        ctx->pc = 0x2A9314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9310u;
        // 0x2a9314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9318u;
        goto label_2a9318;
    }
    ctx->pc = 0x2A9310u;
    {
        const bool branch_taken_0x2a9310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9310) {
            ctx->pc = 0x2A9314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9310u;
            // 0x2a9314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A94D4u;
            goto label_2a94d4;
        }
    }
    ctx->pc = 0x2A9318u;
label_2a9318:
    // 0x2a9318: 0x8e6400cc  lw          $a0, 0xCC($s3)
    ctx->pc = 0x2a9318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_2a931c:
    // 0x2a931c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2a931cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a9320:
    // 0x2a9320: 0xc08a200  jal         func_228800
label_2a9324:
    if (ctx->pc == 0x2A9324u) {
        ctx->pc = 0x2A9324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9320u;
        // 0x2a9324: 0x8e5000cc  lw          $s0, 0xCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9328u;
        goto label_2a9328;
    }
    ctx->pc = 0x2A9320u;
    SET_GPR_U32(ctx, 31, 0x2A9328u);
    ctx->pc = 0x2A9324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9320u;
    // 0x2a9324: 0x8e5000cc  lw          $s0, 0xCC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2A9320u, 0x2A9328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9328u;
label_2a9328:
    // 0x2a9328: 0x9051011b  lbu         $s1, 0x11B($v0)
    ctx->pc = 0x2a9328u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
label_2a932c:
    // 0x2a932c: 0xc08a200  jal         func_228800
label_2a9330:
    if (ctx->pc == 0x2A9330u) {
        ctx->pc = 0x2A9330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A932Cu;
        // 0x2a9330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9334u;
        goto label_2a9334;
    }
    ctx->pc = 0x2A932Cu;
    SET_GPR_U32(ctx, 31, 0x2A9334u);
    ctx->pc = 0x2A9330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A932Cu;
    // 0x2a9330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2A932Cu, 0x2A9334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9334u;
label_2a9334:
    // 0x2a9334: 0x12360066  beq         $s1, $s6, . + 4 + (0x66 << 2)
label_2a9338:
    if (ctx->pc == 0x2A9338u) {
        ctx->pc = 0x2A9338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9334u;
        // 0x2a9338: 0x9042011b  lbu         $v0, 0x11B($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A933Cu;
        goto label_2a933c;
    }
    ctx->pc = 0x2A9334u;
    {
        const bool branch_taken_0x2a9334 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 22));
        ctx->pc = 0x2A9338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9334u;
        // 0x2a9338: 0x9042011b  lbu         $v0, 0x11B($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9334) {
            ctx->pc = 0x2A94D0u;
            goto label_2a94d0;
        }
    }
    ctx->pc = 0x2A933Cu;
label_2a933c:
    // 0x2a933c: 0x10560064  beq         $v0, $s6, . + 4 + (0x64 << 2)
label_2a9340:
    if (ctx->pc == 0x2A9340u) {
        ctx->pc = 0x2A9340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A933Cu;
        // 0x2a9340: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9344u;
        goto label_2a9344;
    }
    ctx->pc = 0x2A933Cu;
    {
        const bool branch_taken_0x2a933c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x2A9340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A933Cu;
        // 0x2a9340: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a933c) {
            ctx->pc = 0x2A94D0u;
            goto label_2a94d0;
        }
    }
    ctx->pc = 0x2A9344u;
label_2a9344:
    // 0x2a9344: 0x52230063  beql        $s1, $v1, . + 4 + (0x63 << 2)
label_2a9348:
    if (ctx->pc == 0x2A9348u) {
        ctx->pc = 0x2A9348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9344u;
        // 0x2a9348: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A934Cu;
        goto label_2a934c;
    }
    ctx->pc = 0x2A9344u;
    {
        const bool branch_taken_0x2a9344 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a9344) {
            ctx->pc = 0x2A9348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9344u;
            // 0x2a9348: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A94D4u;
            goto label_2a94d4;
        }
    }
    ctx->pc = 0x2A934Cu;
label_2a934c:
    // 0x2a934c: 0x10430060  beq         $v0, $v1, . + 4 + (0x60 << 2)
label_2a9350:
    if (ctx->pc == 0x2A9350u) {
        ctx->pc = 0x2A9350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A934Cu;
        // 0x2a9350: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9354u;
        goto label_2a9354;
    }
    ctx->pc = 0x2A934Cu;
    {
        const bool branch_taken_0x2a934c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A9350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A934Cu;
        // 0x2a9350: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a934c) {
            ctx->pc = 0x2A94D0u;
            goto label_2a94d0;
        }
    }
    ctx->pc = 0x2A9354u;
label_2a9354:
    // 0x2a9354: 0x5223005f  beql        $s1, $v1, . + 4 + (0x5F << 2)
label_2a9358:
    if (ctx->pc == 0x2A9358u) {
        ctx->pc = 0x2A9358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9354u;
        // 0x2a9358: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A935Cu;
        goto label_2a935c;
    }
    ctx->pc = 0x2A9354u;
    {
        const bool branch_taken_0x2a9354 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a9354) {
            ctx->pc = 0x2A9358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9354u;
            // 0x2a9358: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A94D4u;
            goto label_2a94d4;
        }
    }
    ctx->pc = 0x2A935Cu;
label_2a935c:
    // 0x2a935c: 0x1043005c  beq         $v0, $v1, . + 4 + (0x5C << 2)
label_2a9360:
    if (ctx->pc == 0x2A9360u) {
        ctx->pc = 0x2A9360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A935Cu;
        // 0x2a9360: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9364u;
        goto label_2a9364;
    }
    ctx->pc = 0x2A935Cu;
    {
        const bool branch_taken_0x2a935c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A9360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A935Cu;
        // 0x2a9360: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a935c) {
            ctx->pc = 0x2A94D0u;
            goto label_2a94d0;
        }
    }
    ctx->pc = 0x2A9364u;
label_2a9364:
    // 0x2a9364: 0x5223005b  beql        $s1, $v1, . + 4 + (0x5B << 2)
label_2a9368:
    if (ctx->pc == 0x2A9368u) {
        ctx->pc = 0x2A9368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9364u;
        // 0x2a9368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A936Cu;
        goto label_2a936c;
    }
    ctx->pc = 0x2A9364u;
    {
        const bool branch_taken_0x2a9364 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a9364) {
            ctx->pc = 0x2A9368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9364u;
            // 0x2a9368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A94D4u;
            goto label_2a94d4;
        }
    }
    ctx->pc = 0x2A936Cu;
label_2a936c:
    // 0x2a936c: 0x10430058  beq         $v0, $v1, . + 4 + (0x58 << 2)
label_2a9370:
    if (ctx->pc == 0x2A9370u) {
        ctx->pc = 0x2A9370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A936Cu;
        // 0x2a9370: 0x266c0090  addiu       $t4, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9374u;
        goto label_2a9374;
    }
    ctx->pc = 0x2A936Cu;
    {
        const bool branch_taken_0x2a936c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A9370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A936Cu;
        // 0x2a9370: 0x266c0090  addiu       $t4, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a936c) {
            ctx->pc = 0x2A94D0u;
            goto label_2a94d0;
        }
    }
    ctx->pc = 0x2A9374u;
label_2a9374:
    // 0x2a9374: 0x27cb4b00  addiu       $t3, $fp, 0x4B00
    ctx->pc = 0x2a9374u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
label_2a9378:
    // 0x2a9378: 0x85820002  lh          $v0, 0x2($t4)
    ctx->pc = 0x2a9378u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
label_2a937c:
    // 0x2a937c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2a937cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2a9380:
    // 0x2a9380: 0x8c6447c4  lw          $a0, 0x47C4($v1)
    ctx->pc = 0x2a9380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18372)));
label_2a9384:
    // 0x2a9384: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a9384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a9388:
    // 0x2a9388: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2a9388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2a938c:
    // 0x2a938c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a938cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a9390:
    // 0x2a9390: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a9390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a9394:
    // 0x2a9394: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2a9394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_2a9398:
    // 0x2a9398: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2a9398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2a939c:
    // 0x2a939c: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x2a939cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2a93a0:
    // 0x2a93a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a93a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a93a4:
    // 0x2a93a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a93a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a93a8:
    // 0x2a93a8: 0x7fa90070  sq          $t1, 0x70($sp)
    ctx->pc = 0x2a93a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 9));
label_2a93ac:
    // 0x2a93ac: 0x86e30002  lh          $v1, 0x2($s7)
    ctx->pc = 0x2a93acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_2a93b0:
    // 0x2a93b0: 0x7fa90000  sq          $t1, 0x0($sp)
    ctx->pc = 0x2a93b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 9));
label_2a93b4:
    // 0x2a93b4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2a93b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2a93b8:
    // 0x2a93b8: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x2a93b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_2a93bc:
    // 0x2a93bc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2a93bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2a93c0:
    // 0x2a93c0: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x2a93c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_2a93c4:
    // 0x2a93c4: 0x86e90002  lh          $t1, 0x2($s7)
    ctx->pc = 0x2a93c4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_2a93c8:
    // 0x2a93c8: 0x858a0002  lh          $t2, 0x2($t4)
    ctx->pc = 0x2a93c8u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
label_2a93cc:
    // 0x2a93cc: 0x94940  sll         $t1, $t1, 5
    ctx->pc = 0x2a93ccu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
label_2a93d0:
    // 0x2a93d0: 0xa5140  sll         $t2, $t2, 5
    ctx->pc = 0x2a93d0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_2a93d4:
    // 0x2a93d4: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x2a93d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
label_2a93d8:
    // 0x2a93d8: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x2a93d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_2a93dc:
    // 0x2a93dc: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x2a93dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
label_2a93e0:
    // 0x2a93e0: 0x79430000  lq          $v1, 0x0($t2)
    ctx->pc = 0x2a93e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_2a93e4:
    // 0x2a93e4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2a93e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2a93e8:
    // 0x2a93e8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2a93e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2a93ec:
    // 0x2a93ec: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2a93ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2a93f0:
    // 0x2a93f0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2a93f0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2a93f4:
    // 0x2a93f4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2a93f4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2a93f8:
    // 0x2a93f8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2a93f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2a93fc:
    // 0x2a93fc: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2a93fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2a9400:
    // 0x2a9400: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2a9400u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2a9404:
    // 0x2a9404: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2a9404u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2a9408:
    // 0x2a9408: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2a9408u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_2a940c:
    // 0x2a940c: 0x4a0003bf  vwaitq
    ctx->pc = 0x2a940cu;
    // VWAITQ (Q already resolved in this runtime)
label_2a9410:
    // 0x2a9410: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2a9410u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2a9414:
    // 0x2a9414: 0x48291800  qmfc2.ni    $t1, $vf3
    ctx->pc = 0x2a9414u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[3]));
label_2a9418:
    // 0x2a9418: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x2a9418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_2a941c:
    // 0x2a941c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2a941cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a9420:
    // 0x2a9420: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2a9420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2a9424:
    // 0x2a9424: 0x0  nop
    ctx->pc = 0x2a9424u;
    // NOP
label_2a9428:
    // 0x2a9428: 0x0  nop
    ctx->pc = 0x2a9428u;
    // NOP
label_2a942c:
    // 0x2a942c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2a942cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2a9430:
    // 0x2a9430: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2a9430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_2a9434:
    // 0x2a9434: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2a9434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_2a9438:
    // 0x2a9438: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2a9438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2a943c:
    // 0x2a943c: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x2a943cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_2a9440:
    // 0x2a9440: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2a9440u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2a9444:
    // 0x2a9444: 0x48a91000  qmtc2.ni    $t1, $vf2
    ctx->pc = 0x2a9444u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_2a9448:
    // 0x2a9448: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2a9448u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2a944c:
    // 0x2a944c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2a944cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_2a9450:
    // 0x2a9450: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2a9450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_2a9454:
    // 0x2a9454: 0xc1036e2  jal         func_40DB88
label_2a9458:
    if (ctx->pc == 0x2A9458u) {
        ctx->pc = 0x2A9458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9454u;
        // 0x2a9458: 0x7fa30090  sq          $v1, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A945Cu;
        goto label_2a945c;
    }
    ctx->pc = 0x2A9454u;
    SET_GPR_U32(ctx, 31, 0x2A945Cu);
    ctx->pc = 0x2A9458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9454u;
    // 0x2a9458: 0x7fa30090  sq          $v1, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x2A9454u, 0x2A945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A945Cu;
label_2a945c:
    // 0x2a945c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a945cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a9460:
    // 0x2a9460: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_2a9464:
    if (ctx->pc == 0x2A9464u) {
        ctx->pc = 0x2A9464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9460u;
        // 0x2a9464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9468u;
        goto label_2a9468;
    }
    ctx->pc = 0x2A9460u;
    {
        const bool branch_taken_0x2a9460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9460) {
            ctx->pc = 0x2A9464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9460u;
            // 0x2a9464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A94D4u;
            goto label_2a94d4;
        }
    }
    ctx->pc = 0x2A9468u;
label_2a9468:
    // 0x2a9468: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2a9468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a946c:
    // 0x2a946c: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x2a946cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_2a9470:
    // 0x2a9470: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a9470u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a9474:
    // 0x2a9474: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a9474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a9478:
    // 0x2a9478: 0x40f809  jalr        $v0
label_2a947c:
    if (ctx->pc == 0x2A947Cu) {
        ctx->pc = 0x2A947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9478u;
        // 0x2a947c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9480u;
        goto label_2a9480;
    }
    ctx->pc = 0x2A9478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A9480u);
        ctx->pc = 0x2A947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9478u;
        // 0x2a947c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9478u, 0x2A9480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A9480u;
label_2a9480:
    // 0x2a9480: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2a9480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2a9484:
    // 0x2a9484: 0xc0a36c8  jal         func_28DB20
label_2a9488:
    if (ctx->pc == 0x2A9488u) {
        ctx->pc = 0x2A9488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9484u;
        // 0x2a9488: 0xaea20010  sw          $v0, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A948Cu;
        goto label_2a948c;
    }
    ctx->pc = 0x2A9484u;
    SET_GPR_U32(ctx, 31, 0x2A948Cu);
    ctx->pc = 0x2A9488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9484u;
    // 0x2a9488: 0xaea20010  sw          $v0, 0x10($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2A9484u, 0x2A948Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A948Cu;
label_2a948c:
    // 0x2a948c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2a948cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a9490:
    // 0x2a9490: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a9490u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a9494:
    // 0x2a9494: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a9494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a9498:
    // 0x2a9498: 0x40f809  jalr        $v0
label_2a949c:
    if (ctx->pc == 0x2A949Cu) {
        ctx->pc = 0x2A949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9498u;
        // 0x2a949c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A94A0u;
        goto label_2a94a0;
    }
    ctx->pc = 0x2A9498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A94A0u);
        ctx->pc = 0x2A949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9498u;
        // 0x2a949c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9498u, 0x2A94A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A94A0u;
label_2a94a0:
    // 0x2a94a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a94a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a94a4:
    // 0x2a94a4: 0xc0aa3a4  jal         func_2A8E90
label_2a94a8:
    if (ctx->pc == 0x2A94A8u) {
        ctx->pc = 0x2A94A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A94A4u;
        // 0x2a94a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A94ACu;
        goto label_2a94ac;
    }
    ctx->pc = 0x2A94A4u;
    SET_GPR_U32(ctx, 31, 0x2A94ACu);
    ctx->pc = 0x2A94A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A94A4u;
    // 0x2a94a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8E90u, 0x2A94A4u, 0x2A94ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A94ACu;
label_2a94ac:
    // 0x2a94ac: 0xaeb60014  sw          $s6, 0x14($s5)
    ctx->pc = 0x2a94acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 22));
label_2a94b0:
    // 0x2a94b0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2a94b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a94b4:
    // 0x2a94b4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a94b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a94b8:
    // 0x2a94b8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a94b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a94bc:
    // 0x2a94bc: 0x40f809  jalr        $v0
label_2a94c0:
    if (ctx->pc == 0x2A94C0u) {
        ctx->pc = 0x2A94C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A94BCu;
        // 0x2a94c0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A94C4u;
        goto label_2a94c4;
    }
    ctx->pc = 0x2A94BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A94C4u);
        ctx->pc = 0x2A94C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A94BCu;
        // 0x2a94c0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A94BCu, 0x2A94C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A94C4u;
label_2a94c4:
    // 0x2a94c4: 0xae029438  sw          $v0, -0x6BC8($s0)
    ctx->pc = 0x2a94c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294939704), GPR_U32(ctx, 2));
label_2a94c8:
    // 0x2a94c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2a94cc:
    if (ctx->pc == 0x2A94CCu) {
        ctx->pc = 0x2A94CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A94C8u;
        // 0x2a94cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A94D0u;
        goto label_2a94d0;
    }
    ctx->pc = 0x2A94C8u;
    {
        const bool branch_taken_0x2a94c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A94CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A94C8u;
        // 0x2a94cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a94c8) {
            ctx->pc = 0x2A94D4u;
            goto label_2a94d4;
        }
    }
    ctx->pc = 0x2A94D0u;
label_2a94d0:
    // 0x2a94d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a94d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a94d4:
    // 0x2a94d4: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x2a94d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_2a94d8:
    // 0x2a94d8: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x2a94d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_2a94dc:
    // 0x2a94dc: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x2a94dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_2a94e0:
    // 0x2a94e0: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x2a94e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_2a94e4:
    // 0x2a94e4: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x2a94e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_2a94e8:
    // 0x2a94e8: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x2a94e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2a94ec:
    // 0x2a94ec: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x2a94ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2a94f0:
    // 0x2a94f0: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x2a94f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2a94f4:
    // 0x2a94f4: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x2a94f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2a94f8:
    // 0x2a94f8: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x2a94f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_2a94fc:
    // 0x2a94fc: 0x3e00008  jr          $ra
label_2a9500:
    if (ctx->pc == 0x2A9500u) {
        ctx->pc = 0x2A9500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A94FCu;
        // 0x2a9500: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9504u;
        goto label_2a9504;
    }
    ctx->pc = 0x2A94FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A94FCu;
        // 0x2a9500: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A94FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9504u;
label_2a9504:
    // 0x2a9504: 0x0  nop
    ctx->pc = 0x2a9504u;
    // NOP
    ctx->pc = 0x2a9508u;
}
