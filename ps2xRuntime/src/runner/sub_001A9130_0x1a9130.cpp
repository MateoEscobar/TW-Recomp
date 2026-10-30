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

// Function: sub_001A9130
// Address: 0x1a9130 - 0x1a9480
void sub_001A9130_0x1a9130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9130_0x1a9130");
#endif

    switch (ctx->pc) {
        case 0x1a9130u: goto label_1a9130;
        case 0x1a9134u: goto label_1a9134;
        case 0x1a9138u: goto label_1a9138;
        case 0x1a913cu: goto label_1a913c;
        case 0x1a9140u: goto label_1a9140;
        case 0x1a9144u: goto label_1a9144;
        case 0x1a9148u: goto label_1a9148;
        case 0x1a914cu: goto label_1a914c;
        case 0x1a9150u: goto label_1a9150;
        case 0x1a9154u: goto label_1a9154;
        case 0x1a9158u: goto label_1a9158;
        case 0x1a915cu: goto label_1a915c;
        case 0x1a9160u: goto label_1a9160;
        case 0x1a9164u: goto label_1a9164;
        case 0x1a9168u: goto label_1a9168;
        case 0x1a916cu: goto label_1a916c;
        case 0x1a9170u: goto label_1a9170;
        case 0x1a9174u: goto label_1a9174;
        case 0x1a9178u: goto label_1a9178;
        case 0x1a917cu: goto label_1a917c;
        case 0x1a9180u: goto label_1a9180;
        case 0x1a9184u: goto label_1a9184;
        case 0x1a9188u: goto label_1a9188;
        case 0x1a918cu: goto label_1a918c;
        case 0x1a9190u: goto label_1a9190;
        case 0x1a9194u: goto label_1a9194;
        case 0x1a9198u: goto label_1a9198;
        case 0x1a919cu: goto label_1a919c;
        case 0x1a91a0u: goto label_1a91a0;
        case 0x1a91a4u: goto label_1a91a4;
        case 0x1a91a8u: goto label_1a91a8;
        case 0x1a91acu: goto label_1a91ac;
        case 0x1a91b0u: goto label_1a91b0;
        case 0x1a91b4u: goto label_1a91b4;
        case 0x1a91b8u: goto label_1a91b8;
        case 0x1a91bcu: goto label_1a91bc;
        case 0x1a91c0u: goto label_1a91c0;
        case 0x1a91c4u: goto label_1a91c4;
        case 0x1a91c8u: goto label_1a91c8;
        case 0x1a91ccu: goto label_1a91cc;
        case 0x1a91d0u: goto label_1a91d0;
        case 0x1a91d4u: goto label_1a91d4;
        case 0x1a91d8u: goto label_1a91d8;
        case 0x1a91dcu: goto label_1a91dc;
        case 0x1a91e0u: goto label_1a91e0;
        case 0x1a91e4u: goto label_1a91e4;
        case 0x1a91e8u: goto label_1a91e8;
        case 0x1a91ecu: goto label_1a91ec;
        case 0x1a91f0u: goto label_1a91f0;
        case 0x1a91f4u: goto label_1a91f4;
        case 0x1a91f8u: goto label_1a91f8;
        case 0x1a91fcu: goto label_1a91fc;
        case 0x1a9200u: goto label_1a9200;
        case 0x1a9204u: goto label_1a9204;
        case 0x1a9208u: goto label_1a9208;
        case 0x1a920cu: goto label_1a920c;
        case 0x1a9210u: goto label_1a9210;
        case 0x1a9214u: goto label_1a9214;
        case 0x1a9218u: goto label_1a9218;
        case 0x1a921cu: goto label_1a921c;
        case 0x1a9220u: goto label_1a9220;
        case 0x1a9224u: goto label_1a9224;
        case 0x1a9228u: goto label_1a9228;
        case 0x1a922cu: goto label_1a922c;
        case 0x1a9230u: goto label_1a9230;
        case 0x1a9234u: goto label_1a9234;
        case 0x1a9238u: goto label_1a9238;
        case 0x1a923cu: goto label_1a923c;
        case 0x1a9240u: goto label_1a9240;
        case 0x1a9244u: goto label_1a9244;
        case 0x1a9248u: goto label_1a9248;
        case 0x1a924cu: goto label_1a924c;
        case 0x1a9250u: goto label_1a9250;
        case 0x1a9254u: goto label_1a9254;
        case 0x1a9258u: goto label_1a9258;
        case 0x1a925cu: goto label_1a925c;
        case 0x1a9260u: goto label_1a9260;
        case 0x1a9264u: goto label_1a9264;
        case 0x1a9268u: goto label_1a9268;
        case 0x1a926cu: goto label_1a926c;
        case 0x1a9270u: goto label_1a9270;
        case 0x1a9274u: goto label_1a9274;
        case 0x1a9278u: goto label_1a9278;
        case 0x1a927cu: goto label_1a927c;
        case 0x1a9280u: goto label_1a9280;
        case 0x1a9284u: goto label_1a9284;
        case 0x1a9288u: goto label_1a9288;
        case 0x1a928cu: goto label_1a928c;
        case 0x1a9290u: goto label_1a9290;
        case 0x1a9294u: goto label_1a9294;
        case 0x1a9298u: goto label_1a9298;
        case 0x1a929cu: goto label_1a929c;
        case 0x1a92a0u: goto label_1a92a0;
        case 0x1a92a4u: goto label_1a92a4;
        case 0x1a92a8u: goto label_1a92a8;
        case 0x1a92acu: goto label_1a92ac;
        case 0x1a92b0u: goto label_1a92b0;
        case 0x1a92b4u: goto label_1a92b4;
        case 0x1a92b8u: goto label_1a92b8;
        case 0x1a92bcu: goto label_1a92bc;
        case 0x1a92c0u: goto label_1a92c0;
        case 0x1a92c4u: goto label_1a92c4;
        case 0x1a92c8u: goto label_1a92c8;
        case 0x1a92ccu: goto label_1a92cc;
        case 0x1a92d0u: goto label_1a92d0;
        case 0x1a92d4u: goto label_1a92d4;
        case 0x1a92d8u: goto label_1a92d8;
        case 0x1a92dcu: goto label_1a92dc;
        case 0x1a92e0u: goto label_1a92e0;
        case 0x1a92e4u: goto label_1a92e4;
        case 0x1a92e8u: goto label_1a92e8;
        case 0x1a92ecu: goto label_1a92ec;
        case 0x1a92f0u: goto label_1a92f0;
        case 0x1a92f4u: goto label_1a92f4;
        case 0x1a92f8u: goto label_1a92f8;
        case 0x1a92fcu: goto label_1a92fc;
        case 0x1a9300u: goto label_1a9300;
        case 0x1a9304u: goto label_1a9304;
        case 0x1a9308u: goto label_1a9308;
        case 0x1a930cu: goto label_1a930c;
        case 0x1a9310u: goto label_1a9310;
        case 0x1a9314u: goto label_1a9314;
        case 0x1a9318u: goto label_1a9318;
        case 0x1a931cu: goto label_1a931c;
        case 0x1a9320u: goto label_1a9320;
        case 0x1a9324u: goto label_1a9324;
        case 0x1a9328u: goto label_1a9328;
        case 0x1a932cu: goto label_1a932c;
        case 0x1a9330u: goto label_1a9330;
        case 0x1a9334u: goto label_1a9334;
        case 0x1a9338u: goto label_1a9338;
        case 0x1a933cu: goto label_1a933c;
        case 0x1a9340u: goto label_1a9340;
        case 0x1a9344u: goto label_1a9344;
        case 0x1a9348u: goto label_1a9348;
        case 0x1a934cu: goto label_1a934c;
        case 0x1a9350u: goto label_1a9350;
        case 0x1a9354u: goto label_1a9354;
        case 0x1a9358u: goto label_1a9358;
        case 0x1a935cu: goto label_1a935c;
        case 0x1a9360u: goto label_1a9360;
        case 0x1a9364u: goto label_1a9364;
        case 0x1a9368u: goto label_1a9368;
        case 0x1a936cu: goto label_1a936c;
        case 0x1a9370u: goto label_1a9370;
        case 0x1a9374u: goto label_1a9374;
        case 0x1a9378u: goto label_1a9378;
        case 0x1a937cu: goto label_1a937c;
        case 0x1a9380u: goto label_1a9380;
        case 0x1a9384u: goto label_1a9384;
        case 0x1a9388u: goto label_1a9388;
        case 0x1a938cu: goto label_1a938c;
        case 0x1a9390u: goto label_1a9390;
        case 0x1a9394u: goto label_1a9394;
        case 0x1a9398u: goto label_1a9398;
        case 0x1a939cu: goto label_1a939c;
        case 0x1a93a0u: goto label_1a93a0;
        case 0x1a93a4u: goto label_1a93a4;
        case 0x1a93a8u: goto label_1a93a8;
        case 0x1a93acu: goto label_1a93ac;
        case 0x1a93b0u: goto label_1a93b0;
        case 0x1a93b4u: goto label_1a93b4;
        case 0x1a93b8u: goto label_1a93b8;
        case 0x1a93bcu: goto label_1a93bc;
        case 0x1a93c0u: goto label_1a93c0;
        case 0x1a93c4u: goto label_1a93c4;
        case 0x1a93c8u: goto label_1a93c8;
        case 0x1a93ccu: goto label_1a93cc;
        case 0x1a93d0u: goto label_1a93d0;
        case 0x1a93d4u: goto label_1a93d4;
        case 0x1a93d8u: goto label_1a93d8;
        case 0x1a93dcu: goto label_1a93dc;
        case 0x1a93e0u: goto label_1a93e0;
        case 0x1a93e4u: goto label_1a93e4;
        case 0x1a93e8u: goto label_1a93e8;
        case 0x1a93ecu: goto label_1a93ec;
        case 0x1a93f0u: goto label_1a93f0;
        case 0x1a93f4u: goto label_1a93f4;
        case 0x1a93f8u: goto label_1a93f8;
        case 0x1a93fcu: goto label_1a93fc;
        case 0x1a9400u: goto label_1a9400;
        case 0x1a9404u: goto label_1a9404;
        case 0x1a9408u: goto label_1a9408;
        case 0x1a940cu: goto label_1a940c;
        case 0x1a9410u: goto label_1a9410;
        case 0x1a9414u: goto label_1a9414;
        case 0x1a9418u: goto label_1a9418;
        case 0x1a941cu: goto label_1a941c;
        case 0x1a9420u: goto label_1a9420;
        case 0x1a9424u: goto label_1a9424;
        case 0x1a9428u: goto label_1a9428;
        case 0x1a942cu: goto label_1a942c;
        case 0x1a9430u: goto label_1a9430;
        case 0x1a9434u: goto label_1a9434;
        case 0x1a9438u: goto label_1a9438;
        case 0x1a943cu: goto label_1a943c;
        case 0x1a9440u: goto label_1a9440;
        case 0x1a9444u: goto label_1a9444;
        case 0x1a9448u: goto label_1a9448;
        case 0x1a944cu: goto label_1a944c;
        case 0x1a9450u: goto label_1a9450;
        case 0x1a9454u: goto label_1a9454;
        case 0x1a9458u: goto label_1a9458;
        case 0x1a945cu: goto label_1a945c;
        case 0x1a9460u: goto label_1a9460;
        case 0x1a9464u: goto label_1a9464;
        case 0x1a9468u: goto label_1a9468;
        case 0x1a946cu: goto label_1a946c;
        case 0x1a9470u: goto label_1a9470;
        case 0x1a9474u: goto label_1a9474;
        case 0x1a9478u: goto label_1a9478;
        case 0x1a947cu: goto label_1a947c;
        default: break;
    }

    ctx->pc = 0x1a9130u;

label_1a9130:
    // 0x1a9130: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1a9130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_1a9134:
    // 0x1a9134: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a9134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a9138:
    // 0x1a9138: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1a9138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_1a913c:
    // 0x1a913c: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x1a913cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
label_1a9140:
    // 0x1a9140: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a9140u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1a9144:
    // 0x1a9144: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a9144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a9148:
    // 0x1a9148: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a9148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a914c:
    // 0x1a914c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a914cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a9150:
    // 0x1a9150: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a9150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a9154:
    // 0x1a9154: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1a9154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1a9158:
    // 0x1a9158: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1a9158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_1a915c:
    // 0x1a915c: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1a915cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_1a9160:
    // 0x1a9160: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1a9160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_1a9164:
    // 0x1a9164: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x1a9164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_1a9168:
    // 0x1a9168: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x1a9168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_1a916c:
    // 0x1a916c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1a916cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_1a9170:
    // 0x1a9170: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1a9170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1a9174:
    // 0x1a9174: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x1a9174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_1a9178:
    // 0x1a9178: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a9178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1a917c:
    // 0x1a917c: 0xe6000174  swc1        $f0, 0x174($s0)
    ctx->pc = 0x1a917cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 372), bits); }
label_1a9180:
    // 0x1a9180: 0xe6010170  swc1        $f1, 0x170($s0)
    ctx->pc = 0x1a9180u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 368), bits); }
label_1a9184:
    // 0x1a9184: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a9184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a9188:
    // 0x1a9188: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1a9188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1a918c:
    // 0x1a918c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a9190:
    if (ctx->pc == 0x1A9190u) {
        ctx->pc = 0x1A9190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A918Cu;
        // 0x1a9190: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9194u;
        goto label_1a9194;
    }
    ctx->pc = 0x1A918Cu;
    {
        const bool branch_taken_0x1a918c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A918Cu;
        // 0x1a9190: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a918c) {
            ctx->pc = 0x1A91B0u;
            goto label_1a91b0;
        }
    }
    ctx->pc = 0x1A9194u;
label_1a9194:
    // 0x1a9194: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x1a9194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_1a9198:
    // 0x1a9198: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a9198u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1a919c:
    // 0x1a919c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a919cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a91a0:
    // 0x1a91a0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1a91a4:
    if (ctx->pc == 0x1A91A4u) {
        ctx->pc = 0x1A91A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A91A0u;
        // 0x1a91a4: 0xe6000174  swc1        $f0, 0x174($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 372), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A91A8u;
        goto label_1a91a8;
    }
    ctx->pc = 0x1A91A0u;
    {
        const bool branch_taken_0x1a91a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A91A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A91A0u;
        // 0x1a91a4: 0xe6000174  swc1        $f0, 0x174($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 372), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a91a0) {
            ctx->pc = 0x1A91D0u;
            goto label_1a91d0;
        }
    }
    ctx->pc = 0x1A91A8u;
label_1a91a8:
    // 0x1a91a8: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a91ac:
    if (ctx->pc == 0x1A91ACu) {
        ctx->pc = 0x1A91ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A91A8u;
        // 0x1a91ac: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A91B0u;
        goto label_1a91b0;
    }
    ctx->pc = 0x1A91A8u;
    {
        const bool branch_taken_0x1a91a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A91ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A91A8u;
        // 0x1a91ac: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a91a8) {
            ctx->pc = 0x1A91D4u;
            goto label_1a91d4;
        }
    }
    ctx->pc = 0x1A91B0u;
label_1a91b0:
    // 0x1a91b0: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1a91b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1a91b4:
    // 0x1a91b4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1a91b8:
    if (ctx->pc == 0x1A91B8u) {
        ctx->pc = 0x1A91B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A91B4u;
        // 0x1a91b8: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A91BCu;
        goto label_1a91bc;
    }
    ctx->pc = 0x1A91B4u;
    {
        const bool branch_taken_0x1a91b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a91b4) {
            ctx->pc = 0x1A91B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A91B4u;
            // 0x1a91b8: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A91BCu;
            goto label_1a91bc;
        }
    }
    ctx->pc = 0x1A91BCu;
label_1a91bc:
    // 0x1a91bc: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x1a91bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_1a91c0:
    // 0x1a91c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a91c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1a91c4:
    // 0x1a91c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a91c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a91c8:
    // 0x1a91c8: 0xe6010170  swc1        $f1, 0x170($s0)
    ctx->pc = 0x1a91c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 368), bits); }
label_1a91cc:
    // 0x1a91cc: 0xe6000174  swc1        $f0, 0x174($s0)
    ctx->pc = 0x1a91ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 372), bits); }
label_1a91d0:
    // 0x1a91d0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a91d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a91d4:
    // 0x1a91d4: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x1a91d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
label_1a91d8:
    // 0x1a91d8: 0xae000184  sw          $zero, 0x184($s0)
    ctx->pc = 0x1a91d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 0));
label_1a91dc:
    // 0x1a91dc: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x1a91dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a91e0:
    // 0x1a91e0: 0x8c6927e4  lw          $t1, 0x27E4($v1)
    ctx->pc = 0x1a91e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_1a91e4:
    // 0x1a91e4: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1a91e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1a91e8:
    // 0x1a91e8: 0x245140b8  addiu       $s1, $v0, 0x40B8
    ctx->pc = 0x1a91e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16568));
label_1a91ec:
    // 0x1a91ec: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1a91ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1a91f0:
    // 0x1a91f0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1a91f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1a91f4:
    // 0x1a91f4: 0x24a54108  addiu       $a1, $a1, 0x4108
    ctx->pc = 0x1a91f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16648));
label_1a91f8:
    // 0x1a91f8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1a91f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a91fc:
    // 0x1a91fc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1a91fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a9200:
    // 0x1a9200: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1a9200u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1a9204:
    // 0x1a9204: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1a9204u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a9208:
    // 0x1a9208: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1a9208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1a920c:
    // 0x1a920c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a920cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9210:
    // 0x1a9210: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x1a9210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_1a9214:
    // 0x1a9214: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1a9214u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9218:
    // 0x1a9218: 0x40f809  jalr        $v0
label_1a921c:
    if (ctx->pc == 0x1A921Cu) {
        ctx->pc = 0x1A921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9218u;
        // 0x1a921c: 0x2409007d  addiu       $t1, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9220u;
        goto label_1a9220;
    }
    ctx->pc = 0x1A9218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A9220u);
        ctx->pc = 0x1A921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9218u;
        // 0x1a921c: 0x2409007d  addiu       $t1, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9218u, 0x1A9220u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9220u;
label_1a9220:
    // 0x1a9220: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a9220u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a9224:
    // 0x1a9224: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_1a9228:
    if (ctx->pc == 0x1A9228u) {
        ctx->pc = 0x1A9228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9224u;
        // 0x1a9228: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A922Cu;
        goto label_1a922c;
    }
    ctx->pc = 0x1A9224u;
    {
        const bool branch_taken_0x1a9224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9224) {
            ctx->pc = 0x1A9228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9224u;
            // 0x1a9228: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A923Cu;
            goto label_1a923c;
        }
    }
    ctx->pc = 0x1A922Cu;
label_1a922c:
    // 0x1a922c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1a922cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1a9230:
    // 0x1a9230: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1a9230u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_1a9234:
    // 0x1a9234: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1a9234u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_1a9238:
    // 0x1a9238: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x1a9238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_1a923c:
    // 0x1a923c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a923cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a9240:
    // 0x1a9240: 0x8eab27e4  lw          $t3, 0x27E4($s5)
    ctx->pc = 0x1a9240u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_1a9244:
    // 0x1a9244: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1a9244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1a9248:
    // 0x1a9248: 0xac43d340  sw          $v1, -0x2CC0($v0)
    ctx->pc = 0x1a9248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955840), GPR_U32(ctx, 3));
label_1a924c:
    // 0x1a924c: 0x24a54118  addiu       $a1, $a1, 0x4118
    ctx->pc = 0x1a924cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16664));
label_1a9250:
    // 0x1a9250: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1a9250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1a9254:
    // 0x1a9254: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1a9254u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a9258:
    // 0x1a9258: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x1a9258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1a925c:
    // 0x1a925c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1a925cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a9260:
    // 0x1a9260: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1a9260u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1a9264:
    // 0x1a9264: 0x2409007f  addiu       $t1, $zero, 0x7F
    ctx->pc = 0x1a9264u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1a9268:
    // 0x1a9268: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1a9268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1a926c:
    // 0x1a926c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a926cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9270:
    // 0x1a9270: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1a9270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_1a9274:
    // 0x1a9274: 0x40f809  jalr        $v0
label_1a9278:
    if (ctx->pc == 0x1A9278u) {
        ctx->pc = 0x1A9278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9274u;
        // 0x1a9278: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A927Cu;
        goto label_1a927c;
    }
    ctx->pc = 0x1A9274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A927Cu);
        ctx->pc = 0x1A9278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9274u;
        // 0x1a9278: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9274u, 0x1A927Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A927Cu;
label_1a927c:
    // 0x1a927c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a927cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a9280:
    // 0x1a9280: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1a9284:
    if (ctx->pc == 0x1A9284u) {
        ctx->pc = 0x1A9284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9280u;
        // 0x1a9284: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9288u;
        goto label_1a9288;
    }
    ctx->pc = 0x1A9280u;
    {
        const bool branch_taken_0x1a9280 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9280u;
        // 0x1a9284: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9280) {
            ctx->pc = 0x1A9298u;
            goto label_1a9298;
        }
    }
    ctx->pc = 0x1A9288u;
label_1a9288:
    // 0x1a9288: 0xc0e1a60  jal         func_386980
label_1a928c:
    if (ctx->pc == 0x1A928Cu) {
        ctx->pc = 0x1A9290u;
        goto label_1a9290;
    }
    ctx->pc = 0x1A9288u;
    SET_GPR_U32(ctx, 31, 0x1A9290u);
    ctx->pc = 0x386980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386980u, 0x1A9288u, 0x1A9290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9290u;
label_1a9290:
    // 0x1a9290: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a9290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a9294:
    // 0x1a9294: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a9294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a9298:
    // 0x1a9298: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x1a9298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
label_1a929c:
    // 0x1a929c: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x1a929cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_1a92a0:
    // 0x1a92a0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1a92a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a92a4:
    // 0x1a92a4: 0x24694140  addiu       $t1, $v1, 0x4140
    ctx->pc = 0x1a92a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 16704));
label_1a92a8:
    // 0x1a92a8: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x1a92a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1a92ac:
    // 0x1a92ac: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x1a92acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1a92b0:
    // 0x1a92b0: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x1a92b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a92b4:
    // 0x1a92b4: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x1a92b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a92b8:
    // 0x1a92b8: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x1a92b8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_1a92bc:
    // 0x1a92bc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a92bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a92c0:
    // 0x1a92c0: 0x3c170060  lui         $s7, 0x60
    ctx->pc = 0x1a92c0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)96 << 16));
label_1a92c4:
    // 0x1a92c4: 0xac44d33c  sw          $a0, -0x2CC4($v0)
    ctx->pc = 0x1a92c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955836), GPR_U32(ctx, 4));
label_1a92c8:
    // 0x1a92c8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1a92c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1a92cc:
    // 0x1a92cc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1a92ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1a92d0:
    // 0x1a92d0: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1a92d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1a92d4:
    // 0x1a92d4: 0x60f809  jalr        $v1
label_1a92d8:
    if (ctx->pc == 0x1A92D8u) {
        ctx->pc = 0x1A92D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A92D4u;
        // 0x1a92d8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A92DCu;
        goto label_1a92dc;
    }
    ctx->pc = 0x1A92D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A92DCu);
        ctx->pc = 0x1A92D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A92D4u;
        // 0x1a92d8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A92D4u, 0x1A92DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A92DCu;
label_1a92dc:
    // 0x1a92dc: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x1a92dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1a92e0:
    // 0x1a92e0: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x1a92e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a92e4:
    // 0x1a92e4: 0x26060048  addiu       $a2, $s0, 0x48
    ctx->pc = 0x1a92e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_1a92e8:
    // 0x1a92e8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1a92e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1a92ec:
    // 0x1a92ec: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a92ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a92f0:
    // 0x1a92f0: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
label_1a92f4:
    if (ctx->pc == 0x1A92F4u) {
        ctx->pc = 0x1A92F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A92F0u;
        // 0x1a92f4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A92F8u;
        goto label_1a92f8;
    }
    ctx->pc = 0x1A92F0u;
    {
        const bool branch_taken_0x1a92f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A92F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A92F0u;
        // 0x1a92f4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a92f0) {
            ctx->pc = 0x1A9318u;
            goto label_1a9318;
        }
    }
    ctx->pc = 0x1A92F8u;
label_1a92f8:
    // 0x1a92f8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a92f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1a92fc:
    // 0x1a92fc: 0x0  nop
    ctx->pc = 0x1a92fcu;
    // NOP
label_1a9300:
    // 0x1a9300: 0x0  nop
    ctx->pc = 0x1a9300u;
    // NOP
label_1a9304:
    // 0x1a9304: 0x0  nop
    ctx->pc = 0x1a9304u;
    // NOP
label_1a9308:
    // 0x1a9308: 0x0  nop
    ctx->pc = 0x1a9308u;
    // NOP
label_1a930c:
    // 0x1a930c: 0x0  nop
    ctx->pc = 0x1a930cu;
    // NOP
label_1a9310:
    // 0x1a9310: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_1a9314:
    if (ctx->pc == 0x1A9314u) {
        ctx->pc = 0x1A9314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9310u;
        // 0x1a9314: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9318u;
        goto label_1a9318;
    }
    ctx->pc = 0x1A9310u;
    {
        const bool branch_taken_0x1a9310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A9314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9310u;
        // 0x1a9314: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9310) {
            ctx->pc = 0x1A9300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9300;
        }
    }
    ctx->pc = 0x1A9318u;
label_1a9318:
    // 0x1a9318: 0xc6030174  lwc1        $f3, 0x174($s0)
    ctx->pc = 0x1a9318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a931c:
    // 0x1a931c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a931cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a9320:
    // 0x1a9320: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a9320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a9324:
    // 0x1a9324: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1a9324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1a9328:
    // 0x1a9328: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a9328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a932c:
    // 0x1a932c: 0xc442d344  lwc1        $f2, -0x2CBC($v0)
    ctx->pc = 0x1a932cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a9330:
    // 0x1a9330: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a9330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a9334:
    // 0x1a9334: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1a9334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_1a9338:
    // 0x1a9338: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a9338u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1a933c:
    // 0x1a933c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a933cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a9340:
    // 0x1a9340: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a9340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a9344:
    // 0x1a9344: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x1a9344u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1a9348:
    // 0x1a9348: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a9348u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a934c:
    // 0x1a934c: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x1a934cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1a9350:
    // 0x1a9350: 0x24160006  addiu       $s6, $zero, 0x6
    ctx->pc = 0x1a9350u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a9354:
    // 0x1a9354: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1a9354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_1a9358:
    // 0x1a9358: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a9358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a935c:
    // 0x1a935c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a935cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a9360:
    // 0x1a9360: 0xe6020180  swc1        $f2, 0x180($s0)
    ctx->pc = 0x1a9360u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 384), bits); }
label_1a9364:
    // 0x1a9364: 0xe600017c  swc1        $f0, 0x17C($s0)
    ctx->pc = 0x1a9364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 380), bits); }
label_1a9368:
    // 0x1a9368: 0xae03018c  sw          $v1, 0x18C($s0)
    ctx->pc = 0x1a9368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 3));
label_1a936c:
    // 0x1a936c: 0xe681000c  swc1        $f1, 0xC($s4)
    ctx->pc = 0x1a936cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_1a9370:
    // 0x1a9370: 0xe6040178  swc1        $f4, 0x178($s0)
    ctx->pc = 0x1a9370u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 376), bits); }
label_1a9374:
    // 0x1a9374: 0xae000188  sw          $zero, 0x188($s0)
    ctx->pc = 0x1a9374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 0));
label_1a9378:
    // 0x1a9378: 0x8eac27e4  lw          $t4, 0x27E4($s5)
    ctx->pc = 0x1a9378u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_1a937c:
    // 0x1a937c: 0x0  nop
    ctx->pc = 0x1a937cu;
    // NOP
label_1a9380:
    // 0x1a9380: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1a9380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1a9384:
    // 0x1a9384: 0x24454148  addiu       $a1, $v0, 0x4148
    ctx->pc = 0x1a9384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16712));
label_1a9388:
    // 0x1a9388: 0x3c090055  lui         $t1, 0x55
    ctx->pc = 0x1a9388u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)85 << 16));
label_1a938c:
    // 0x1a938c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1a938cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1a9390:
    // 0x1a9390: 0x252840b8  addiu       $t0, $t1, 0x40B8
    ctx->pc = 0x1a9390u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 16568));
label_1a9394:
    // 0x1a9394: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1a9394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1a9398:
    // 0x1a9398: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1a9398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a939c:
    // 0x1a939c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1a939cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1a93a0:
    // 0x1a93a0: 0x24090099  addiu       $t1, $zero, 0x99
    ctx->pc = 0x1a93a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
label_1a93a4:
    // 0x1a93a4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1a93a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1a93a8:
    // 0x1a93a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a93a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a93ac:
    // 0x1a93ac: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1a93acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a93b0:
    // 0x1a93b0: 0x40f809  jalr        $v0
label_1a93b4:
    if (ctx->pc == 0x1A93B4u) {
        ctx->pc = 0x1A93B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93B0u;
        // 0x1a93b4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A93B8u;
        goto label_1a93b8;
    }
    ctx->pc = 0x1A93B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A93B8u);
        ctx->pc = 0x1A93B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93B0u;
        // 0x1a93b4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A93B0u, 0x1A93B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A93B8u;
label_1a93b8:
    // 0x1a93b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a93bc:
    if (ctx->pc == 0x1A93BCu) {
        ctx->pc = 0x1A93BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93B8u;
        // 0x1a93bc: 0xc7ccd348  lwc1        $f12, -0x2CB8($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294955848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A93C0u;
        goto label_1a93c0;
    }
    ctx->pc = 0x1A93B8u;
    {
        const bool branch_taken_0x1a93b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A93BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93B8u;
        // 0x1a93bc: 0xc7ccd348  lwc1        $f12, -0x2CB8($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294955848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a93b8) {
            ctx->pc = 0x1A93CCu;
            goto label_1a93cc;
        }
    }
    ctx->pc = 0x1A93C0u;
label_1a93c0:
    // 0x1a93c0: 0xc0733e2  jal         func_1CCF88
label_1a93c4:
    if (ctx->pc == 0x1A93C4u) {
        ctx->pc = 0x1A93C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93C0u;
        // 0x1a93c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A93C8u;
        goto label_1a93c8;
    }
    ctx->pc = 0x1A93C0u;
    SET_GPR_U32(ctx, 31, 0x1A93C8u);
    ctx->pc = 0x1A93C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A93C0u;
    // 0x1a93c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1A93C0u, 0x1A93C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A93C8u;
label_1a93c8:
    // 0x1a93c8: 0xc7ccd348  lwc1        $f12, -0x2CB8($fp)
    ctx->pc = 0x1a93c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294955848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a93cc:
    // 0x1a93cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a93ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a93d0:
    // 0x1a93d0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1a93d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1a93d4:
    // 0x1a93d4: 0xc05e602  jal         func_179808
label_1a93d8:
    if (ctx->pc == 0x1A93D8u) {
        ctx->pc = 0x1A93D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93D4u;
        // 0x1a93d8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A93DCu;
        goto label_1a93dc;
    }
    ctx->pc = 0x1A93D4u;
    SET_GPR_U32(ctx, 31, 0x1A93DCu);
    ctx->pc = 0x1A93D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A93D4u;
    // 0x1a93d8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1A93D4u, 0x1A93DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A93DCu;
label_1a93dc:
    // 0x1a93dc: 0x8e2c0000  lw          $t4, 0x0($s1)
    ctx->pc = 0x1a93dcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a93e0:
    // 0x1a93e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a93e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a93e4:
    // 0x1a93e4: 0x8ee7d310  lw          $a3, -0x2CF0($s7)
    ctx->pc = 0x1a93e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294955792)));
label_1a93e8:
    // 0x1a93e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1a93e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a93ec:
    // 0x1a93ec: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1a93ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1a93f0:
    // 0x1a93f0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a93f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a93f4:
    // 0x1a93f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a93f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a93f8:
    // 0x1a93f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a93f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a93fc:
    // 0x1a93fc: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1a93fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1a9400:
    // 0x1a9400: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x1a9400u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a9404:
    // 0x1a9404: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x1a9404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
label_1a9408:
    // 0x1a9408: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1a9408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1a940c:
    // 0x1a940c: 0x40f809  jalr        $v0
label_1a9410:
    if (ctx->pc == 0x1A9410u) {
        ctx->pc = 0x1A9410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A940Cu;
        // 0x1a9410: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9414u;
        goto label_1a9414;
    }
    ctx->pc = 0x1A940Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A9414u);
        ctx->pc = 0x1A9410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A940Cu;
        // 0x1a9410: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A940Cu, 0x1A9414u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9414u;
label_1a9414:
    // 0x1a9414: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1a9414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a9418:
    // 0x1a9418: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a941c:
    // 0x1a941c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1a941cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1a9420:
    // 0x1a9420: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1a9420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1a9424:
    // 0x1a9424: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1a9424u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1a9428:
    // 0x1a9428: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1a9428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1a942c:
    // 0x1a942c: 0x60f809  jalr        $v1
label_1a9430:
    if (ctx->pc == 0x1A9430u) {
        ctx->pc = 0x1A9430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A942Cu;
        // 0x1a9430: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9434u;
        goto label_1a9434;
    }
    ctx->pc = 0x1A942Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A9434u);
        ctx->pc = 0x1A9430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A942Cu;
        // 0x1a9430: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A942Cu, 0x1A9434u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9434u;
label_1a9434:
    // 0x1a9434: 0x2e620046  sltiu       $v0, $s3, 0x46
    ctx->pc = 0x1a9434u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)70) ? 1 : 0);
label_1a9438:
    // 0x1a9438: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_1a943c:
    if (ctx->pc == 0x1A943Cu) {
        ctx->pc = 0x1A943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9438u;
        // 0x1a943c: 0x8eac27e4  lw          $t4, 0x27E4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9440u;
        goto label_1a9440;
    }
    ctx->pc = 0x1A9438u;
    {
        const bool branch_taken_0x1a9438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9438u;
        // 0x1a943c: 0x8eac27e4  lw          $t4, 0x27E4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9438) {
            ctx->pc = 0x1A9380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9380;
        }
    }
    ctx->pc = 0x1A9440u;
label_1a9440:
    // 0x1a9440: 0x24031f40  addiu       $v1, $zero, 0x1F40
    ctx->pc = 0x1a9440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8000));
label_1a9444:
    // 0x1a9444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9448:
    // 0x1a9448: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x1a9448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_1a944c:
    // 0x1a944c: 0xae03016c  sw          $v1, 0x16C($s0)
    ctx->pc = 0x1a944cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 3));
label_1a9450:
    // 0x1a9450: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1a9450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1a9454:
    // 0x1a9454: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1a9454u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1a9458:
    // 0x1a9458: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1a9458u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1a945c:
    // 0x1a945c: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1a945cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1a9460:
    // 0x1a9460: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x1a9460u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1a9464:
    // 0x1a9464: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x1a9464u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1a9468:
    // 0x1a9468: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1a9468u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1a946c:
    // 0x1a946c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1a946cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a9470:
    // 0x1a9470: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x1a9470u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a9474:
    // 0x1a9474: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a9474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a9478:
    // 0x1a9478: 0x3e00008  jr          $ra
label_1a947c:
    if (ctx->pc == 0x1A947Cu) {
        ctx->pc = 0x1A947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9478u;
        // 0x1a947c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9480u;
        goto label_fallthrough_0x1a9478;
    }
    ctx->pc = 0x1A9478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9478u;
        // 0x1a947c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a9478:
    ctx->pc = 0x1A9480u;
}
