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

// Function: sub_0012F858
// Address: 0x12f858 - 0x12fd20
void sub_0012F858_0x12f858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F858_0x12f858");
#endif

    switch (ctx->pc) {
        case 0x12f858u: goto label_12f858;
        case 0x12f85cu: goto label_12f85c;
        case 0x12f860u: goto label_12f860;
        case 0x12f864u: goto label_12f864;
        case 0x12f868u: goto label_12f868;
        case 0x12f86cu: goto label_12f86c;
        case 0x12f870u: goto label_12f870;
        case 0x12f874u: goto label_12f874;
        case 0x12f878u: goto label_12f878;
        case 0x12f87cu: goto label_12f87c;
        case 0x12f880u: goto label_12f880;
        case 0x12f884u: goto label_12f884;
        case 0x12f888u: goto label_12f888;
        case 0x12f88cu: goto label_12f88c;
        case 0x12f890u: goto label_12f890;
        case 0x12f894u: goto label_12f894;
        case 0x12f898u: goto label_12f898;
        case 0x12f89cu: goto label_12f89c;
        case 0x12f8a0u: goto label_12f8a0;
        case 0x12f8a4u: goto label_12f8a4;
        case 0x12f8a8u: goto label_12f8a8;
        case 0x12f8acu: goto label_12f8ac;
        case 0x12f8b0u: goto label_12f8b0;
        case 0x12f8b4u: goto label_12f8b4;
        case 0x12f8b8u: goto label_12f8b8;
        case 0x12f8bcu: goto label_12f8bc;
        case 0x12f8c0u: goto label_12f8c0;
        case 0x12f8c4u: goto label_12f8c4;
        case 0x12f8c8u: goto label_12f8c8;
        case 0x12f8ccu: goto label_12f8cc;
        case 0x12f8d0u: goto label_12f8d0;
        case 0x12f8d4u: goto label_12f8d4;
        case 0x12f8d8u: goto label_12f8d8;
        case 0x12f8dcu: goto label_12f8dc;
        case 0x12f8e0u: goto label_12f8e0;
        case 0x12f8e4u: goto label_12f8e4;
        case 0x12f8e8u: goto label_12f8e8;
        case 0x12f8ecu: goto label_12f8ec;
        case 0x12f8f0u: goto label_12f8f0;
        case 0x12f8f4u: goto label_12f8f4;
        case 0x12f8f8u: goto label_12f8f8;
        case 0x12f8fcu: goto label_12f8fc;
        case 0x12f900u: goto label_12f900;
        case 0x12f904u: goto label_12f904;
        case 0x12f908u: goto label_12f908;
        case 0x12f90cu: goto label_12f90c;
        case 0x12f910u: goto label_12f910;
        case 0x12f914u: goto label_12f914;
        case 0x12f918u: goto label_12f918;
        case 0x12f91cu: goto label_12f91c;
        case 0x12f920u: goto label_12f920;
        case 0x12f924u: goto label_12f924;
        case 0x12f928u: goto label_12f928;
        case 0x12f92cu: goto label_12f92c;
        case 0x12f930u: goto label_12f930;
        case 0x12f934u: goto label_12f934;
        case 0x12f938u: goto label_12f938;
        case 0x12f93cu: goto label_12f93c;
        case 0x12f940u: goto label_12f940;
        case 0x12f944u: goto label_12f944;
        case 0x12f948u: goto label_12f948;
        case 0x12f94cu: goto label_12f94c;
        case 0x12f950u: goto label_12f950;
        case 0x12f954u: goto label_12f954;
        case 0x12f958u: goto label_12f958;
        case 0x12f95cu: goto label_12f95c;
        case 0x12f960u: goto label_12f960;
        case 0x12f964u: goto label_12f964;
        case 0x12f968u: goto label_12f968;
        case 0x12f96cu: goto label_12f96c;
        case 0x12f970u: goto label_12f970;
        case 0x12f974u: goto label_12f974;
        case 0x12f978u: goto label_12f978;
        case 0x12f97cu: goto label_12f97c;
        case 0x12f980u: goto label_12f980;
        case 0x12f984u: goto label_12f984;
        case 0x12f988u: goto label_12f988;
        case 0x12f98cu: goto label_12f98c;
        case 0x12f990u: goto label_12f990;
        case 0x12f994u: goto label_12f994;
        case 0x12f998u: goto label_12f998;
        case 0x12f99cu: goto label_12f99c;
        case 0x12f9a0u: goto label_12f9a0;
        case 0x12f9a4u: goto label_12f9a4;
        case 0x12f9a8u: goto label_12f9a8;
        case 0x12f9acu: goto label_12f9ac;
        case 0x12f9b0u: goto label_12f9b0;
        case 0x12f9b4u: goto label_12f9b4;
        case 0x12f9b8u: goto label_12f9b8;
        case 0x12f9bcu: goto label_12f9bc;
        case 0x12f9c0u: goto label_12f9c0;
        case 0x12f9c4u: goto label_12f9c4;
        case 0x12f9c8u: goto label_12f9c8;
        case 0x12f9ccu: goto label_12f9cc;
        case 0x12f9d0u: goto label_12f9d0;
        case 0x12f9d4u: goto label_12f9d4;
        case 0x12f9d8u: goto label_12f9d8;
        case 0x12f9dcu: goto label_12f9dc;
        case 0x12f9e0u: goto label_12f9e0;
        case 0x12f9e4u: goto label_12f9e4;
        case 0x12f9e8u: goto label_12f9e8;
        case 0x12f9ecu: goto label_12f9ec;
        case 0x12f9f0u: goto label_12f9f0;
        case 0x12f9f4u: goto label_12f9f4;
        case 0x12f9f8u: goto label_12f9f8;
        case 0x12f9fcu: goto label_12f9fc;
        case 0x12fa00u: goto label_12fa00;
        case 0x12fa04u: goto label_12fa04;
        case 0x12fa08u: goto label_12fa08;
        case 0x12fa0cu: goto label_12fa0c;
        case 0x12fa10u: goto label_12fa10;
        case 0x12fa14u: goto label_12fa14;
        case 0x12fa18u: goto label_12fa18;
        case 0x12fa1cu: goto label_12fa1c;
        case 0x12fa20u: goto label_12fa20;
        case 0x12fa24u: goto label_12fa24;
        case 0x12fa28u: goto label_12fa28;
        case 0x12fa2cu: goto label_12fa2c;
        case 0x12fa30u: goto label_12fa30;
        case 0x12fa34u: goto label_12fa34;
        case 0x12fa38u: goto label_12fa38;
        case 0x12fa3cu: goto label_12fa3c;
        case 0x12fa40u: goto label_12fa40;
        case 0x12fa44u: goto label_12fa44;
        case 0x12fa48u: goto label_12fa48;
        case 0x12fa4cu: goto label_12fa4c;
        case 0x12fa50u: goto label_12fa50;
        case 0x12fa54u: goto label_12fa54;
        case 0x12fa58u: goto label_12fa58;
        case 0x12fa5cu: goto label_12fa5c;
        case 0x12fa60u: goto label_12fa60;
        case 0x12fa64u: goto label_12fa64;
        case 0x12fa68u: goto label_12fa68;
        case 0x12fa6cu: goto label_12fa6c;
        case 0x12fa70u: goto label_12fa70;
        case 0x12fa74u: goto label_12fa74;
        case 0x12fa78u: goto label_12fa78;
        case 0x12fa7cu: goto label_12fa7c;
        case 0x12fa80u: goto label_12fa80;
        case 0x12fa84u: goto label_12fa84;
        case 0x12fa88u: goto label_12fa88;
        case 0x12fa8cu: goto label_12fa8c;
        case 0x12fa90u: goto label_12fa90;
        case 0x12fa94u: goto label_12fa94;
        case 0x12fa98u: goto label_12fa98;
        case 0x12fa9cu: goto label_12fa9c;
        case 0x12faa0u: goto label_12faa0;
        case 0x12faa4u: goto label_12faa4;
        case 0x12faa8u: goto label_12faa8;
        case 0x12faacu: goto label_12faac;
        case 0x12fab0u: goto label_12fab0;
        case 0x12fab4u: goto label_12fab4;
        case 0x12fab8u: goto label_12fab8;
        case 0x12fabcu: goto label_12fabc;
        case 0x12fac0u: goto label_12fac0;
        case 0x12fac4u: goto label_12fac4;
        case 0x12fac8u: goto label_12fac8;
        case 0x12faccu: goto label_12facc;
        case 0x12fad0u: goto label_12fad0;
        case 0x12fad4u: goto label_12fad4;
        case 0x12fad8u: goto label_12fad8;
        case 0x12fadcu: goto label_12fadc;
        case 0x12fae0u: goto label_12fae0;
        case 0x12fae4u: goto label_12fae4;
        case 0x12fae8u: goto label_12fae8;
        case 0x12faecu: goto label_12faec;
        case 0x12faf0u: goto label_12faf0;
        case 0x12faf4u: goto label_12faf4;
        case 0x12faf8u: goto label_12faf8;
        case 0x12fafcu: goto label_12fafc;
        case 0x12fb00u: goto label_12fb00;
        case 0x12fb04u: goto label_12fb04;
        case 0x12fb08u: goto label_12fb08;
        case 0x12fb0cu: goto label_12fb0c;
        case 0x12fb10u: goto label_12fb10;
        case 0x12fb14u: goto label_12fb14;
        case 0x12fb18u: goto label_12fb18;
        case 0x12fb1cu: goto label_12fb1c;
        case 0x12fb20u: goto label_12fb20;
        case 0x12fb24u: goto label_12fb24;
        case 0x12fb28u: goto label_12fb28;
        case 0x12fb2cu: goto label_12fb2c;
        case 0x12fb30u: goto label_12fb30;
        case 0x12fb34u: goto label_12fb34;
        case 0x12fb38u: goto label_12fb38;
        case 0x12fb3cu: goto label_12fb3c;
        case 0x12fb40u: goto label_12fb40;
        case 0x12fb44u: goto label_12fb44;
        case 0x12fb48u: goto label_12fb48;
        case 0x12fb4cu: goto label_12fb4c;
        case 0x12fb50u: goto label_12fb50;
        case 0x12fb54u: goto label_12fb54;
        case 0x12fb58u: goto label_12fb58;
        case 0x12fb5cu: goto label_12fb5c;
        case 0x12fb60u: goto label_12fb60;
        case 0x12fb64u: goto label_12fb64;
        case 0x12fb68u: goto label_12fb68;
        case 0x12fb6cu: goto label_12fb6c;
        case 0x12fb70u: goto label_12fb70;
        case 0x12fb74u: goto label_12fb74;
        case 0x12fb78u: goto label_12fb78;
        case 0x12fb7cu: goto label_12fb7c;
        case 0x12fb80u: goto label_12fb80;
        case 0x12fb84u: goto label_12fb84;
        case 0x12fb88u: goto label_12fb88;
        case 0x12fb8cu: goto label_12fb8c;
        case 0x12fb90u: goto label_12fb90;
        case 0x12fb94u: goto label_12fb94;
        case 0x12fb98u: goto label_12fb98;
        case 0x12fb9cu: goto label_12fb9c;
        case 0x12fba0u: goto label_12fba0;
        case 0x12fba4u: goto label_12fba4;
        case 0x12fba8u: goto label_12fba8;
        case 0x12fbacu: goto label_12fbac;
        case 0x12fbb0u: goto label_12fbb0;
        case 0x12fbb4u: goto label_12fbb4;
        case 0x12fbb8u: goto label_12fbb8;
        case 0x12fbbcu: goto label_12fbbc;
        case 0x12fbc0u: goto label_12fbc0;
        case 0x12fbc4u: goto label_12fbc4;
        case 0x12fbc8u: goto label_12fbc8;
        case 0x12fbccu: goto label_12fbcc;
        case 0x12fbd0u: goto label_12fbd0;
        case 0x12fbd4u: goto label_12fbd4;
        case 0x12fbd8u: goto label_12fbd8;
        case 0x12fbdcu: goto label_12fbdc;
        case 0x12fbe0u: goto label_12fbe0;
        case 0x12fbe4u: goto label_12fbe4;
        case 0x12fbe8u: goto label_12fbe8;
        case 0x12fbecu: goto label_12fbec;
        case 0x12fbf0u: goto label_12fbf0;
        case 0x12fbf4u: goto label_12fbf4;
        case 0x12fbf8u: goto label_12fbf8;
        case 0x12fbfcu: goto label_12fbfc;
        case 0x12fc00u: goto label_12fc00;
        case 0x12fc04u: goto label_12fc04;
        case 0x12fc08u: goto label_12fc08;
        case 0x12fc0cu: goto label_12fc0c;
        case 0x12fc10u: goto label_12fc10;
        case 0x12fc14u: goto label_12fc14;
        case 0x12fc18u: goto label_12fc18;
        case 0x12fc1cu: goto label_12fc1c;
        case 0x12fc20u: goto label_12fc20;
        case 0x12fc24u: goto label_12fc24;
        case 0x12fc28u: goto label_12fc28;
        case 0x12fc2cu: goto label_12fc2c;
        case 0x12fc30u: goto label_12fc30;
        case 0x12fc34u: goto label_12fc34;
        case 0x12fc38u: goto label_12fc38;
        case 0x12fc3cu: goto label_12fc3c;
        case 0x12fc40u: goto label_12fc40;
        case 0x12fc44u: goto label_12fc44;
        case 0x12fc48u: goto label_12fc48;
        case 0x12fc4cu: goto label_12fc4c;
        case 0x12fc50u: goto label_12fc50;
        case 0x12fc54u: goto label_12fc54;
        case 0x12fc58u: goto label_12fc58;
        case 0x12fc5cu: goto label_12fc5c;
        case 0x12fc60u: goto label_12fc60;
        case 0x12fc64u: goto label_12fc64;
        case 0x12fc68u: goto label_12fc68;
        case 0x12fc6cu: goto label_12fc6c;
        case 0x12fc70u: goto label_12fc70;
        case 0x12fc74u: goto label_12fc74;
        case 0x12fc78u: goto label_12fc78;
        case 0x12fc7cu: goto label_12fc7c;
        case 0x12fc80u: goto label_12fc80;
        case 0x12fc84u: goto label_12fc84;
        case 0x12fc88u: goto label_12fc88;
        case 0x12fc8cu: goto label_12fc8c;
        case 0x12fc90u: goto label_12fc90;
        case 0x12fc94u: goto label_12fc94;
        case 0x12fc98u: goto label_12fc98;
        case 0x12fc9cu: goto label_12fc9c;
        case 0x12fca0u: goto label_12fca0;
        case 0x12fca4u: goto label_12fca4;
        case 0x12fca8u: goto label_12fca8;
        case 0x12fcacu: goto label_12fcac;
        case 0x12fcb0u: goto label_12fcb0;
        case 0x12fcb4u: goto label_12fcb4;
        case 0x12fcb8u: goto label_12fcb8;
        case 0x12fcbcu: goto label_12fcbc;
        case 0x12fcc0u: goto label_12fcc0;
        case 0x12fcc4u: goto label_12fcc4;
        case 0x12fcc8u: goto label_12fcc8;
        case 0x12fcccu: goto label_12fccc;
        case 0x12fcd0u: goto label_12fcd0;
        case 0x12fcd4u: goto label_12fcd4;
        case 0x12fcd8u: goto label_12fcd8;
        case 0x12fcdcu: goto label_12fcdc;
        case 0x12fce0u: goto label_12fce0;
        case 0x12fce4u: goto label_12fce4;
        case 0x12fce8u: goto label_12fce8;
        case 0x12fcecu: goto label_12fcec;
        case 0x12fcf0u: goto label_12fcf0;
        case 0x12fcf4u: goto label_12fcf4;
        case 0x12fcf8u: goto label_12fcf8;
        case 0x12fcfcu: goto label_12fcfc;
        case 0x12fd00u: goto label_12fd00;
        case 0x12fd04u: goto label_12fd04;
        case 0x12fd08u: goto label_12fd08;
        case 0x12fd0cu: goto label_12fd0c;
        case 0x12fd10u: goto label_12fd10;
        case 0x12fd14u: goto label_12fd14;
        case 0x12fd18u: goto label_12fd18;
        case 0x12fd1cu: goto label_12fd1c;
        default: break;
    }

    ctx->pc = 0x12f858u;

label_12f858:
    // 0x12f858: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x12f858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_12f85c:
    // 0x12f85c: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x12f85cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_12f860:
    // 0x12f860: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x12f860u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_12f864:
    // 0x12f864: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12f864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12f868:
    // 0x12f868: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x12f868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_12f86c:
    // 0x12f86c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x12f86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_12f870:
    // 0x12f870: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x12f870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_12f874:
    // 0x12f874: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x12f874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_12f878:
    // 0x12f878: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12f878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12f87c:
    // 0x12f87c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x12f87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_12f880:
    // 0x12f880: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x12f880u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_12f884:
    // 0x12f884: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x12f884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_12f888:
    // 0x12f888: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x12f888u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_12f88c:
    // 0x12f88c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x12f88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_12f890:
    // 0x12f890: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x12f890u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_12f894:
    // 0x12f894: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x12f894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_12f898:
    // 0x12f898: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x12f898u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12f89c:
    // 0x12f89c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x12f89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_12f8a0:
    // 0x12f8a0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x12f8a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12f8a4:
    // 0x12f8a4: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x12f8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_12f8a8:
    // 0x12f8a8: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x12f8a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_12f8ac:
    // 0x12f8ac: 0xe7bc0100  swc1        $f28, 0x100($sp)
    ctx->pc = 0x12f8acu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_12f8b0:
    // 0x12f8b0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x12f8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_12f8b4:
    // 0x12f8b4: 0xe7bb00f8  swc1        $f27, 0xF8($sp)
    ctx->pc = 0x12f8b4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_12f8b8:
    // 0x12f8b8: 0x46006706  mov.s       $f28, $f12
    ctx->pc = 0x12f8b8u;
    ctx->f[28] = FPU_MOV_S(ctx->f[12]);
label_12f8bc:
    // 0x12f8bc: 0xe7ba00f0  swc1        $f26, 0xF0($sp)
    ctx->pc = 0x12f8bcu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_12f8c0:
    // 0x12f8c0: 0x46008ec6  mov.s       $f27, $f17
    ctx->pc = 0x12f8c0u;
    ctx->f[27] = FPU_MOV_S(ctx->f[17]);
label_12f8c4:
    // 0x12f8c4: 0xe7b900e8  swc1        $f25, 0xE8($sp)
    ctx->pc = 0x12f8c4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_12f8c8:
    // 0x12f8c8: 0x46007e86  mov.s       $f26, $f15
    ctx->pc = 0x12f8c8u;
    ctx->f[26] = FPU_MOV_S(ctx->f[15]);
label_12f8cc:
    // 0x12f8cc: 0xe7b800e0  swc1        $f24, 0xE0($sp)
    ctx->pc = 0x12f8ccu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_12f8d0:
    // 0x12f8d0: 0x46006e46  mov.s       $f25, $f13
    ctx->pc = 0x12f8d0u;
    ctx->f[25] = FPU_MOV_S(ctx->f[13]);
label_12f8d4:
    // 0x12f8d4: 0xe7b700d8  swc1        $f23, 0xD8($sp)
    ctx->pc = 0x12f8d4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_12f8d8:
    // 0x12f8d8: 0x46007606  mov.s       $f24, $f14
    ctx->pc = 0x12f8d8u;
    ctx->f[24] = FPU_MOV_S(ctx->f[14]);
label_12f8dc:
    // 0x12f8dc: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x12f8dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_12f8e0:
    // 0x12f8e0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12f8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12f8e4:
    // 0x12f8e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12f8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_12f8e8:
    // 0x12f8e8: 0x46008586  mov.s       $f22, $f16
    ctx->pc = 0x12f8e8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[16]);
label_12f8ec:
    // 0x12f8ec: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x12f8ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_12f8f0:
    // 0x12f8f0: 0x26260180  addiu       $a2, $s1, 0x180
    ctx->pc = 0x12f8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
label_12f8f4:
    // 0x12f8f4: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x12f8f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_12f8f8:
    // 0x12f8f8: 0xc634032c  lwc1        $f20, 0x32C($s1)
    ctx->pc = 0x12f8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12f8fc:
    // 0x12f8fc: 0xc6200300  lwc1        $f0, 0x300($s1)
    ctx->pc = 0x12f8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12f900:
    // 0x12f900: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x12f900u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_12f904:
    // 0x12f904: 0x8fbe0128  lw          $fp, 0x128($sp)
    ctx->pc = 0x12f904u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_12f908:
    // 0x12f908: 0x4600a528  max.s       $f20, $f20, $f0
    ctx->pc = 0x12f908u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[0]);
label_12f90c:
    // 0x12f90c: 0xc136afa  jal         func_4DABE8
label_12f910:
    if (ctx->pc == 0x12F910u) {
        ctx->pc = 0x12F914u;
        goto label_12f914;
    }
    ctx->pc = 0x12F90Cu;
    SET_GPR_U32(ctx, 31, 0x12F914u);
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x12F90Cu, 0x12F914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F914u;
label_12f914:
    // 0x12f914: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x12f914u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12f918:
    // 0x12f918: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12f918u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12f91c:
    // 0x12f91c: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x12f91cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12f920:
    // 0x12f920: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12f920u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12f924:
    // 0x12f924: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x12f924u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_12f928:
    // 0x12f928: 0x4a0003bf  vwaitq
    ctx->pc = 0x12f928u;
    // VWAITQ (Q already resolved in this runtime)
label_12f92c:
    // 0x12f92c: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x12f92cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12f930:
    // 0x12f930: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x12f930u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_12f934:
    // 0x12f934: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12f934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12f938:
    // 0x12f938: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12f938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12f93c:
    // 0x12f93c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12f93cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12f940:
    // 0x12f940: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12f940u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12f944:
    // 0x12f944: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x12f944u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_12f948:
    // 0x12f948: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x12f948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_12f94c:
    // 0x12f94c: 0x4602a501  sub.s       $f20, $f20, $f2
    ctx->pc = 0x12f94cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
label_12f950:
    // 0x12f950: 0x0  nop
    ctx->pc = 0x12f950u;
    // NOP
label_12f954:
    // 0x12f954: 0x461405c3  div.s       $f23, $f0, $f20
    ctx->pc = 0x12f954u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_12f958:
    // 0x12f958: 0x4602bde9  min.s       $f23, $f23, $f2
    ctx->pc = 0x12f958u;
    ctx->f[23] = std::min(ctx->f[23], ctx->f[2]);
label_12f95c:
    // 0x12f95c: 0x4601bde8  max.s       $f23, $f23, $f1
    ctx->pc = 0x12f95cu;
    ctx->f[23] = std::max(ctx->f[23], ctx->f[1]);
label_12f960:
    // 0x12f960: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_12f964:
    if (ctx->pc == 0x12F964u) {
        ctx->pc = 0x12F964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F960u;
        // 0x12f964: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F968u;
        goto label_12f968;
    }
    ctx->pc = 0x12F960u;
    {
        const bool branch_taken_0x12f960 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F960u;
        // 0x12f964: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f960) {
            ctx->pc = 0x12F994u;
            goto label_12f994;
        }
    }
    ctx->pc = 0x12F968u;
label_12f968:
    // 0x12f968: 0x3c013f2c  lui         $at, 0x3F2C
    ctx->pc = 0x12f968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16172 << 16));
label_12f96c:
    // 0x12f96c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12f96cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_12f970:
    // 0x12f970: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12f970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12f974:
    // 0x12f974: 0xc136b24  jal         func_4DAC90
label_12f978:
    if (ctx->pc == 0x12F978u) {
        ctx->pc = 0x12F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F974u;
        // 0x12f978: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F97Cu;
        goto label_12f97c;
    }
    ctx->pc = 0x12F974u;
    SET_GPR_U32(ctx, 31, 0x12F97Cu);
    ctx->pc = 0x12F978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F974u;
    // 0x12f978: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x12F974u, 0x12F97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F97Cu;
label_12f97c:
    // 0x12f97c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x12f97cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12f980:
    // 0x12f980: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12f980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12f984:
    // 0x12f984: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12f984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12f988:
    // 0x12f988: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x12f988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12f98c:
    // 0x12f98c: 0xc136b18  jal         func_4DAC60
label_12f990:
    if (ctx->pc == 0x12F990u) {
        ctx->pc = 0x12F990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F98Cu;
        // 0x12f990: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F994u;
        goto label_12f994;
    }
    ctx->pc = 0x12F98Cu;
    SET_GPR_U32(ctx, 31, 0x12F994u);
    ctx->pc = 0x12F990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F98Cu;
    // 0x12f990: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x12F98Cu, 0x12F994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F994u;
label_12f994:
    // 0x12f994: 0xc6200188  lwc1        $f0, 0x188($s1)
    ctx->pc = 0x12f994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12f998:
    // 0x12f998: 0x3c013e9e  lui         $at, 0x3E9E
    ctx->pc = 0x12f998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16030 << 16));
label_12f99c:
    // 0x12f99c: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x12f99cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_12f9a0:
    // 0x12f9a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12f9a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12f9a4:
    // 0x12f9a4: 0x96220444  lhu         $v0, 0x444($s1)
    ctx->pc = 0x12f9a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
label_12f9a8:
    // 0x12f9a8: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
label_12f9ac:
    if (ctx->pc == 0x12F9ACu) {
        ctx->pc = 0x12F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F9A8u;
        // 0x12f9ac: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F9B0u;
        goto label_12f9b0;
    }
    ctx->pc = 0x12F9A8u;
    {
        const bool branch_taken_0x12f9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F9A8u;
        // 0x12f9ac: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f9a8) {
            ctx->pc = 0x12FB7Cu;
            goto label_12fb7c;
        }
    }
    ctx->pc = 0x12F9B0u;
label_12f9b0:
    // 0x12f9b0: 0x9222045b  lbu         $v0, 0x45B($s1)
    ctx->pc = 0x12f9b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1115)));
label_12f9b4:
    // 0x12f9b4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_12f9b8:
    if (ctx->pc == 0x12F9B8u) {
        ctx->pc = 0x12F9BCu;
        goto label_12f9bc;
    }
    ctx->pc = 0x12F9B4u;
    {
        const bool branch_taken_0x12f9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f9b4) {
            ctx->pc = 0x12F9F8u;
            goto label_12f9f8;
        }
    }
    ctx->pc = 0x12F9BCu;
label_12f9bc:
    // 0x12f9bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12f9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12f9c0:
    // 0x12f9c0: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x12f9c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_12f9c4:
    // 0x12f9c4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x12f9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_12f9c8:
    // 0x12f9c8: 0x60f809  jalr        $v1
label_12f9cc:
    if (ctx->pc == 0x12F9CCu) {
        ctx->pc = 0x12F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F9C8u;
        // 0x12f9cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F9D0u;
        goto label_12f9d0;
    }
    ctx->pc = 0x12F9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12F9D0u);
        ctx->pc = 0x12F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F9C8u;
        // 0x12f9cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F9C8u, 0x12F9D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12F9D0u;
label_12f9d0:
    // 0x12f9d0: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x12f9d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
label_12f9d4:
    // 0x12f9d4: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x12f9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_12f9d8:
    // 0x12f9d8: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x12f9d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_12f9dc:
    // 0x12f9dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12f9dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12f9e0:
    // 0x12f9e0: 0x0  nop
    ctx->pc = 0x12f9e0u;
    // NOP
label_12f9e4:
    // 0x12f9e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x12f9e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_12f9e8:
    // 0x12f9e8: 0x46180034  c.lt.s      $f0, $f24
    ctx->pc = 0x12f9e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12f9ec:
    // 0x12f9ec: 0x0  nop
    ctx->pc = 0x12f9ecu;
    // NOP
label_12f9f0:
    // 0x12f9f0: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_12f9f4:
    if (ctx->pc == 0x12F9F4u) {
        ctx->pc = 0x12F9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F9F0u;
        // 0x12f9f4: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F9F8u;
        goto label_12f9f8;
    }
    ctx->pc = 0x12F9F0u;
    {
        const bool branch_taken_0x12f9f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F9F0u;
        // 0x12f9f4: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f9f0) {
            ctx->pc = 0x12FA24u;
            goto label_12fa24;
        }
    }
    ctx->pc = 0x12F9F8u;
label_12f9f8:
    // 0x12f9f8: 0x52e00061  beql        $s7, $zero, . + 4 + (0x61 << 2)
label_12f9fc:
    if (ctx->pc == 0x12F9FCu) {
        ctx->pc = 0x12F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F9F8u;
        // 0x12f9fc: 0x96230444  lhu         $v1, 0x444($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12FA00u;
        goto label_12fa00;
    }
    ctx->pc = 0x12F9F8u;
    {
        const bool branch_taken_0x12f9f8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f9f8) {
            ctx->pc = 0x12F9FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F9F8u;
            // 0x12f9fc: 0x96230444  lhu         $v1, 0x444($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FB80u;
            goto label_12fb80;
        }
    }
    ctx->pc = 0x12FA00u;
label_12fa00:
    // 0x12fa00: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x12fa00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_12fa04:
    // 0x12fa04: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x12fa04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_12fa08:
    // 0x12fa08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12fa08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12fa0c:
    // 0x12fa0c: 0x0  nop
    ctx->pc = 0x12fa0cu;
    // NOP
label_12fa10:
    // 0x12fa10: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x12fa10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
label_12fa14:
    // 0x12fa14: 0x46180034  c.lt.s      $f0, $f24
    ctx->pc = 0x12fa14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12fa18:
    // 0x12fa18: 0x0  nop
    ctx->pc = 0x12fa18u;
    // NOP
label_12fa1c:
    // 0x12fa1c: 0x45000057  bc1f        . + 4 + (0x57 << 2)
label_12fa20:
    if (ctx->pc == 0x12FA20u) {
        ctx->pc = 0x12FA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FA1Cu;
        // 0x12fa20: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12FA24u;
        goto label_12fa24;
    }
    ctx->pc = 0x12FA1Cu;
    {
        const bool branch_taken_0x12fa1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12FA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FA1Cu;
        // 0x12fa20: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fa1c) {
            ctx->pc = 0x12FB7Cu;
            goto label_12fb7c;
        }
    }
    ctx->pc = 0x12FA24u;
label_12fa24:
    // 0x12fa24: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x12fa24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12fa28:
    // 0x12fa28: 0xc44191cc  lwc1        $f1, -0x6E34($v0)
    ctx->pc = 0x12fa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294939084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12fa2c:
    // 0x12fa2c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x12fa2cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_12fa30:
    // 0x12fa30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12fa30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12fa34:
    // 0x12fa34: 0x0  nop
    ctx->pc = 0x12fa34u;
    // NOP
label_12fa38:
    // 0x12fa38: 0x45020051  bc1fl       . + 4 + (0x51 << 2)
label_12fa3c:
    if (ctx->pc == 0x12FA3Cu) {
        ctx->pc = 0x12FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FA38u;
        // 0x12fa3c: 0x96230444  lhu         $v1, 0x444($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12FA40u;
        goto label_12fa40;
    }
    ctx->pc = 0x12FA38u;
    {
        const bool branch_taken_0x12fa38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fa38) {
            ctx->pc = 0x12FA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FA38u;
            // 0x12fa3c: 0x96230444  lhu         $v1, 0x444($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FB80u;
            goto label_12fb80;
        }
    }
    ctx->pc = 0x12FA40u;
label_12fa40:
    // 0x12fa40: 0x92220454  lbu         $v0, 0x454($s1)
    ctx->pc = 0x12fa40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1108)));
label_12fa44:
    // 0x12fa44: 0x5440004e  bnel        $v0, $zero, . + 4 + (0x4E << 2)
label_12fa48:
    if (ctx->pc == 0x12FA48u) {
        ctx->pc = 0x12FA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FA44u;
        // 0x12fa48: 0x96230444  lhu         $v1, 0x444($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12FA4Cu;
        goto label_12fa4c;
    }
    ctx->pc = 0x12FA44u;
    {
        const bool branch_taken_0x12fa44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fa44) {
            ctx->pc = 0x12FA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FA44u;
            // 0x12fa48: 0x96230444  lhu         $v1, 0x444($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FB80u;
            goto label_12fb80;
        }
    }
    ctx->pc = 0x12FA4Cu;
label_12fa4c:
    // 0x12fa4c: 0x8e240314  lw          $a0, 0x314($s1)
    ctx->pc = 0x12fa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
label_12fa50:
    // 0x12fa50: 0x808201b0  lb          $v0, 0x1B0($a0)
    ctx->pc = 0x12fa50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
label_12fa54:
    // 0x12fa54: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x12fa54u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_12fa58:
    // 0x12fa58: 0x50400049  beql        $v0, $zero, . + 4 + (0x49 << 2)
label_12fa5c:
    if (ctx->pc == 0x12FA5Cu) {
        ctx->pc = 0x12FA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FA58u;
        // 0x12fa5c: 0x96230444  lhu         $v1, 0x444($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12FA60u;
        goto label_12fa60;
    }
    ctx->pc = 0x12FA58u;
    {
        const bool branch_taken_0x12fa58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fa58) {
            ctx->pc = 0x12FA5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FA58u;
            // 0x12fa5c: 0x96230444  lhu         $v1, 0x444($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FB80u;
            goto label_12fb80;
        }
    }
    ctx->pc = 0x12FA60u;
label_12fa60:
    // 0x12fa60: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x12fa60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_12fa64:
    // 0x12fa64: 0x3c013e8a  lui         $at, 0x3E8A
    ctx->pc = 0x12fa64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16010 << 16));
label_12fa68:
    // 0x12fa68: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x12fa68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
label_12fa6c:
    // 0x12fa6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12fa6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12fa70:
    // 0x12fa70: 0x4600b005  abs.s       $f0, $f22
    ctx->pc = 0x12fa70u;
    ctx->f[0] = FPU_ABS_S(ctx->f[22]);
label_12fa74:
    // 0x12fa74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x12fa74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12fa78:
    // 0x12fa78: 0x0  nop
    ctx->pc = 0x12fa78u;
    // NOP
label_12fa7c:
    // 0x12fa7c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_12fa80:
    if (ctx->pc == 0x12FA80u) {
        ctx->pc = 0x12FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FA7Cu;
        // 0x12fa80: 0xc6200378  lwc1        $f0, 0x378($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12FA84u;
        goto label_12fa84;
    }
    ctx->pc = 0x12FA7Cu;
    {
        const bool branch_taken_0x12fa7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fa7c) {
            ctx->pc = 0x12FA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FA7Cu;
            // 0x12fa80: 0xc6200378  lwc1        $f0, 0x378($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FA9Cu;
            goto label_12fa9c;
        }
    }
    ctx->pc = 0x12FA84u;
label_12fa84:
    // 0x12fa84: 0xc48104e8  lwc1        $f1, 0x4E8($a0)
    ctx->pc = 0x12fa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12fa88:
    // 0x12fa88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12fa88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12fa8c:
    // 0x12fa8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12fa8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12fa90:
    // 0x12fa90: 0x0  nop
    ctx->pc = 0x12fa90u;
    // NOP
label_12fa94:
    // 0x12fa94: 0x46000d81  sub.s       $f22, $f1, $f0
    ctx->pc = 0x12fa94u;
    ctx->f[22] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_12fa98:
    // 0x12fa98: 0xc6200378  lwc1        $f0, 0x378($s1)
    ctx->pc = 0x12fa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12fa9c:
    // 0x12fa9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12fa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12faa0:
    // 0x12faa0: 0xc6210208  lwc1        $f1, 0x208($s1)
    ctx->pc = 0x12faa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12faa4:
    // 0x12faa4: 0x3c013dae  lui         $at, 0x3DAE
    ctx->pc = 0x12faa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15790 << 16));
label_12faa8:
    // 0x12faa8: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x12faa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_12faac:
    // 0x12faac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12faacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12fab0:
    // 0x12fab0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x12fab0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_12fab4:
    // 0x12fab4: 0x96220444  lhu         $v0, 0x444($s1)
    ctx->pc = 0x12fab4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
label_12fab8:
    // 0x12fab8: 0x46190000  add.s       $f0, $f0, $f25
    ctx->pc = 0x12fab8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
label_12fabc:
    // 0x12fabc: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x12fabcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_12fac0:
    // 0x12fac0: 0x46020540  add.s       $f21, $f0, $f2
    ctx->pc = 0x12fac0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_12fac4:
    // 0x12fac4: 0x14430024  bne         $v0, $v1, . + 4 + (0x24 << 2)
label_12fac8:
    if (ctx->pc == 0x12FAC8u) {
        ctx->pc = 0x12FAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FAC4u;
        // 0x12fac8: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12FACCu;
        goto label_12facc;
    }
    ctx->pc = 0x12FAC4u;
    {
        const bool branch_taken_0x12fac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x12FAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FAC4u;
        // 0x12fac8: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fac4) {
            ctx->pc = 0x12FB58u;
            goto label_12fb58;
        }
    }
    ctx->pc = 0x12FACCu;
label_12facc:
    // 0x12facc: 0x3c05000e  lui         $a1, 0xE
    ctx->pc = 0x12faccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)14 << 16));
label_12fad0:
    // 0x12fad0: 0x34a50c00  ori         $a1, $a1, 0xC00
    ctx->pc = 0x12fad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3072);
label_12fad4:
    // 0x12fad4: 0xc08997c  jal         func_2265F0
label_12fad8:
    if (ctx->pc == 0x12FAD8u) {
        ctx->pc = 0x12FADCu;
        goto label_12fadc;
    }
    ctx->pc = 0x12FAD4u;
    SET_GPR_U32(ctx, 31, 0x12FADCu);
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x12FAD4u, 0x12FADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FADCu;
label_12fadc:
    // 0x12fadc: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_12fae0:
    if (ctx->pc == 0x12FAE0u) {
        ctx->pc = 0x12FAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FADCu;
        // 0x12fae0: 0x8e240314  lw          $a0, 0x314($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12FAE4u;
        goto label_12fae4;
    }
    ctx->pc = 0x12FADCu;
    {
        const bool branch_taken_0x12fadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fadc) {
            ctx->pc = 0x12FAE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FADCu;
            // 0x12fae0: 0x8e240314  lw          $a0, 0x314($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FB08u;
            goto label_12fb08;
        }
    }
    ctx->pc = 0x12FAE4u;
label_12fae4:
    // 0x12fae4: 0xc6200378  lwc1        $f0, 0x378($s1)
    ctx->pc = 0x12fae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12fae8:
    // 0x12fae8: 0xc6210208  lwc1        $f1, 0x208($s1)
    ctx->pc = 0x12fae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12faec:
    // 0x12faec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12faecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_12faf0:
    // 0x12faf0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12faf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12faf4:
    // 0x12faf4: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x12faf4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_12faf8:
    // 0x12faf8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x12faf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_12fafc:
    // 0x12fafc: 0x46010569  min.s       $f21, $f0, $f1
    ctx->pc = 0x12fafcu;
    ctx->f[21] = std::min(ctx->f[0], ctx->f[1]);
label_12fb00:
    // 0x12fb00: 0x10000016  b           . + 4 + (0x16 << 2)
label_12fb04:
    if (ctx->pc == 0x12FB04u) {
        ctx->pc = 0x12FB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FB00u;
        // 0x12fb04: 0xc6a10008  lwc1        $f1, 0x8($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12FB08u;
        goto label_12fb08;
    }
    ctx->pc = 0x12FB00u;
    {
        const bool branch_taken_0x12fb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FB00u;
        // 0x12fb04: 0xc6a10008  lwc1        $f1, 0x8($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fb00) {
            ctx->pc = 0x12FB5Cu;
            goto label_12fb5c;
        }
    }
    ctx->pc = 0x12FB08u;
label_12fb08:
    // 0x12fb08: 0xc08997c  jal         func_2265F0
label_12fb0c:
    if (ctx->pc == 0x12FB0Cu) {
        ctx->pc = 0x12FB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FB08u;
        // 0x12fb0c: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12FB10u;
        goto label_12fb10;
    }
    ctx->pc = 0x12FB08u;
    SET_GPR_U32(ctx, 31, 0x12FB10u);
    ctx->pc = 0x12FB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FB08u;
    // 0x12fb0c: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x12FB08u, 0x12FB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FB10u;
label_12fb10:
    // 0x12fb10: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_12fb14:
    if (ctx->pc == 0x12FB14u) {
        ctx->pc = 0x12FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FB10u;
        // 0x12fb14: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12FB18u;
        goto label_12fb18;
    }
    ctx->pc = 0x12FB10u;
    {
        const bool branch_taken_0x12fb10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FB10u;
        // 0x12fb14: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fb10) {
            ctx->pc = 0x12FB2Cu;
            goto label_12fb2c;
        }
    }
    ctx->pc = 0x12FB18u;
label_12fb18:
    // 0x12fb18: 0xc6210378  lwc1        $f1, 0x378($s1)
    ctx->pc = 0x12fb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12fb1c:
    // 0x12fb1c: 0x46160800  add.s       $f0, $f1, $f22
    ctx->pc = 0x12fb1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
label_12fb20:
    // 0x12fb20: 0x46000d69  min.s       $f21, $f1, $f0
    ctx->pc = 0x12fb20u;
    ctx->f[21] = std::min(ctx->f[1], ctx->f[0]);
label_12fb24:
    // 0x12fb24: 0x1000000d  b           . + 4 + (0xD << 2)
label_12fb28:
    if (ctx->pc == 0x12FB28u) {
        ctx->pc = 0x12FB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FB24u;
        // 0x12fb28: 0xc6a10008  lwc1        $f1, 0x8($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12FB2Cu;
        goto label_12fb2c;
    }
    ctx->pc = 0x12FB24u;
    {
        const bool branch_taken_0x12fb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FB24u;
        // 0x12fb28: 0xc6a10008  lwc1        $f1, 0x8($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fb24) {
            ctx->pc = 0x12FB5Cu;
            goto label_12fb5c;
        }
    }
    ctx->pc = 0x12FB2Cu;
label_12fb2c:
    // 0x12fb2c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_12fb30:
    if (ctx->pc == 0x12FB30u) {
        ctx->pc = 0x12FB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FB2Cu;
        // 0x12fb30: 0xc6a10008  lwc1        $f1, 0x8($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12FB34u;
        goto label_12fb34;
    }
    ctx->pc = 0x12FB2Cu;
    {
        const bool branch_taken_0x12fb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fb2c) {
            ctx->pc = 0x12FB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FB2Cu;
            // 0x12fb30: 0xc6a10008  lwc1        $f1, 0x8($s5) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FB5Cu;
            goto label_12fb5c;
        }
    }
    ctx->pc = 0x12FB34u;
label_12fb34:
    // 0x12fb34: 0xc087408  jal         func_21D020
label_12fb38:
    if (ctx->pc == 0x12FB38u) {
        ctx->pc = 0x12FB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FB34u;
        // 0x12fb38: 0x8e240314  lw          $a0, 0x314($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12FB3Cu;
        goto label_12fb3c;
    }
    ctx->pc = 0x12FB34u;
    SET_GPR_U32(ctx, 31, 0x12FB3Cu);
    ctx->pc = 0x12FB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FB34u;
    // 0x12fb38: 0x8e240314  lw          $a0, 0x314($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x12FB34u, 0x12FB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FB3Cu;
label_12fb3c:
    // 0x12fb3c: 0x3c013e14  lui         $at, 0x3E14
    ctx->pc = 0x12fb3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15892 << 16));
label_12fb40:
    // 0x12fb40: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x12fb40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_12fb44:
    // 0x12fb44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12fb44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12fb48:
    // 0x12fb48: 0xc6220188  lwc1        $f2, 0x188($s1)
    ctx->pc = 0x12fb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12fb4c:
    // 0x12fb4c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12fb4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_12fb50:
    // 0x12fb50: 0x46001540  add.s       $f21, $f2, $f0
    ctx->pc = 0x12fb50u;
    ctx->f[21] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_12fb54:
    // 0x12fb54: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x12fb54u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
label_12fb58:
    // 0x12fb58: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x12fb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12fb5c:
    // 0x12fb5c: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x12fb5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12fb60:
    // 0x12fb60: 0x0  nop
    ctx->pc = 0x12fb60u;
    // NOP
label_12fb64:
    // 0x12fb64: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_12fb68:
    if (ctx->pc == 0x12FB68u) {
        ctx->pc = 0x12FB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FB64u;
        // 0x12fb68: 0x96230444  lhu         $v1, 0x444($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12FB6Cu;
        goto label_12fb6c;
    }
    ctx->pc = 0x12FB64u;
    {
        const bool branch_taken_0x12fb64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fb64) {
            ctx->pc = 0x12FB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FB64u;
            // 0x12fb68: 0x96230444  lhu         $v1, 0x444($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FB80u;
            goto label_12fb80;
        }
    }
    ctx->pc = 0x12FB6Cu;
label_12fb6c:
    // 0x12fb6c: 0x4601a001  sub.s       $f0, $f20, $f1
    ctx->pc = 0x12fb6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_12fb70:
    // 0x12fb70: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x12fb70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_12fb74:
    // 0x12fb74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12fb74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_12fb78:
    // 0x12fb78: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x12fb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_12fb7c:
    // 0x12fb7c: 0x96230444  lhu         $v1, 0x444($s1)
    ctx->pc = 0x12fb7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
label_12fb80:
    // 0x12fb80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12fb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12fb84:
    // 0x12fb84: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
label_12fb88:
    if (ctx->pc == 0x12FB88u) {
        ctx->pc = 0x12FB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FB84u;
        // 0x12fb88: 0x96230444  lhu         $v1, 0x444($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12FB8Cu;
        goto label_12fb8c;
    }
    ctx->pc = 0x12FB84u;
    {
        const bool branch_taken_0x12fb84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12fb84) {
            ctx->pc = 0x12FB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FB84u;
            // 0x12fb88: 0x96230444  lhu         $v1, 0x444($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FBD4u;
            goto label_12fbd4;
        }
    }
    ctx->pc = 0x12FB8Cu;
label_12fb8c:
    // 0x12fb8c: 0x9222045b  lbu         $v0, 0x45B($s1)
    ctx->pc = 0x12fb8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1115)));
label_12fb90:
    // 0x12fb90: 0x54430010  bnel        $v0, $v1, . + 4 + (0x10 << 2)
label_12fb94:
    if (ctx->pc == 0x12FB94u) {
        ctx->pc = 0x12FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FB90u;
        // 0x12fb94: 0x96230444  lhu         $v1, 0x444($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12FB98u;
        goto label_12fb98;
    }
    ctx->pc = 0x12FB90u;
    {
        const bool branch_taken_0x12fb90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x12fb90) {
            ctx->pc = 0x12FB94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FB90u;
            // 0x12fb94: 0x96230444  lhu         $v1, 0x444($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FBD4u;
            goto label_12fbd4;
        }
    }
    ctx->pc = 0x12FB98u;
label_12fb98:
    // 0x12fb98: 0x92220463  lbu         $v0, 0x463($s1)
    ctx->pc = 0x12fb98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1123)));
label_12fb9c:
    // 0x12fb9c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_12fba0:
    if (ctx->pc == 0x12FBA0u) {
        ctx->pc = 0x12FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FB9Cu;
        // 0x12fba0: 0x96230444  lhu         $v1, 0x444($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12FBA4u;
        goto label_12fba4;
    }
    ctx->pc = 0x12FB9Cu;
    {
        const bool branch_taken_0x12fb9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fb9c) {
            ctx->pc = 0x12FBA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FB9Cu;
            // 0x12fba0: 0x96230444  lhu         $v1, 0x444($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FBD4u;
            goto label_12fbd4;
        }
    }
    ctx->pc = 0x12FBA4u;
label_12fba4:
    // 0x12fba4: 0x92220475  lbu         $v0, 0x475($s1)
    ctx->pc = 0x12fba4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1141)));
label_12fba8:
    // 0x12fba8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_12fbac:
    if (ctx->pc == 0x12FBACu) {
        ctx->pc = 0x12FBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FBA8u;
        // 0x12fbac: 0x96230444  lhu         $v1, 0x444($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12FBB0u;
        goto label_12fbb0;
    }
    ctx->pc = 0x12FBA8u;
    {
        const bool branch_taken_0x12fba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fba8) {
            ctx->pc = 0x12FBACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FBA8u;
            // 0x12fbac: 0x96230444  lhu         $v1, 0x444($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FBD4u;
            goto label_12fbd4;
        }
    }
    ctx->pc = 0x12FBB0u;
label_12fbb0:
    // 0x12fbb0: 0x8fa70120  lw          $a3, 0x120($sp)
    ctx->pc = 0x12fbb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_12fbb4:
    // 0x12fbb4: 0x4600e306  mov.s       $f12, $f28
    ctx->pc = 0x12fbb4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
label_12fbb8:
    // 0x12fbb8: 0x4600db46  mov.s       $f13, $f27
    ctx->pc = 0x12fbb8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
label_12fbbc:
    // 0x12fbbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12fbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12fbc0:
    // 0x12fbc0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x12fbc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12fbc4:
    // 0x12fbc4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x12fbc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12fbc8:
    // 0x12fbc8: 0xc04bf48  jal         func_12FD20
label_12fbcc:
    if (ctx->pc == 0x12FBCCu) {
        ctx->pc = 0x12FBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FBC8u;
        // 0x12fbcc: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12FBD0u;
        goto label_12fbd0;
    }
    ctx->pc = 0x12FBC8u;
    SET_GPR_U32(ctx, 31, 0x12FBD0u);
    ctx->pc = 0x12FBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FBC8u;
    // 0x12fbcc: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FD20u, 0x12FBC8u, 0x12FBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FBD0u;
label_12fbd0:
    // 0x12fbd0: 0x96230444  lhu         $v1, 0x444($s1)
    ctx->pc = 0x12fbd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
label_12fbd4:
    // 0x12fbd4: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
label_12fbd8:
    if (ctx->pc == 0x12FBD8u) {
        ctx->pc = 0x12FBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FBD4u;
        // 0x12fbd8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12FBDCu;
        goto label_12fbdc;
    }
    ctx->pc = 0x12FBD4u;
    {
        const bool branch_taken_0x12fbd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FBD4u;
        // 0x12fbd8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fbd4) {
            ctx->pc = 0x12FCCCu;
            goto label_12fccc;
        }
    }
    ctx->pc = 0x12FBDCu;
label_12fbdc:
    // 0x12fbdc: 0x92220454  lbu         $v0, 0x454($s1)
    ctx->pc = 0x12fbdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1108)));
label_12fbe0:
    // 0x12fbe0: 0x5440003b  bnel        $v0, $zero, . + 4 + (0x3B << 2)
label_12fbe4:
    if (ctx->pc == 0x12FBE4u) {
        ctx->pc = 0x12FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FBE0u;
        // 0x12fbe4: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12FBE8u;
        goto label_12fbe8;
    }
    ctx->pc = 0x12FBE0u;
    {
        const bool branch_taken_0x12fbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fbe0) {
            ctx->pc = 0x12FBE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FBE0u;
            // 0x12fbe4: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FCD0u;
            goto label_12fcd0;
        }
    }
    ctx->pc = 0x12FBE8u;
label_12fbe8:
    // 0x12fbe8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12fbec:
    // 0x12fbec: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
label_12fbf0:
    if (ctx->pc == 0x12FBF0u) {
        ctx->pc = 0x12FBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FBECu;
        // 0x12fbf0: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12FBF4u;
        goto label_12fbf4;
    }
    ctx->pc = 0x12FBECu;
    {
        const bool branch_taken_0x12fbec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12FBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FBECu;
        // 0x12fbf0: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fbec) {
            ctx->pc = 0x12FC60u;
            goto label_12fc60;
        }
    }
    ctx->pc = 0x12FBF4u;
label_12fbf4:
    // 0x12fbf4: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x12fbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12fbf8:
    // 0x12fbf8: 0xc44191cc  lwc1        $f1, -0x6E34($v0)
    ctx->pc = 0x12fbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294939084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12fbfc:
    // 0x12fbfc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x12fbfcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_12fc00:
    // 0x12fc00: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12fc00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12fc04:
    // 0x12fc04: 0x0  nop
    ctx->pc = 0x12fc04u;
    // NOP
label_12fc08:
    // 0x12fc08: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_12fc0c:
    if (ctx->pc == 0x12FC0Cu) {
        ctx->pc = 0x12FC10u;
        goto label_12fc10;
    }
    ctx->pc = 0x12FC08u;
    {
        const bool branch_taken_0x12fc08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fc08) {
            ctx->pc = 0x12FC4Cu;
            goto label_12fc4c;
        }
    }
    ctx->pc = 0x12FC10u;
label_12fc10:
    // 0x12fc10: 0x8e230314  lw          $v1, 0x314($s1)
    ctx->pc = 0x12fc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
label_12fc14:
    // 0x12fc14: 0x806201b0  lb          $v0, 0x1B0($v1)
    ctx->pc = 0x12fc14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
label_12fc18:
    // 0x12fc18: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x12fc18u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_12fc1c:
    // 0x12fc1c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_12fc20:
    if (ctx->pc == 0x12FC20u) {
        ctx->pc = 0x12FC24u;
        goto label_12fc24;
    }
    ctx->pc = 0x12FC1Cu;
    {
        const bool branch_taken_0x12fc1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fc1c) {
            ctx->pc = 0x12FC4Cu;
            goto label_12fc4c;
        }
    }
    ctx->pc = 0x12FC24u;
label_12fc24:
    // 0x12fc24: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x12fc24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
label_12fc28:
    // 0x12fc28: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12fc28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_12fc2c:
    // 0x12fc2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12fc2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12fc30:
    // 0x12fc30: 0xc6220188  lwc1        $f2, 0x188($s1)
    ctx->pc = 0x12fc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12fc34:
    // 0x12fc34: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x12fc34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_12fc38:
    // 0x12fc38: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x12fc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12fc3c:
    // 0x12fc3c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x12fc3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_12fc40:
    // 0x12fc40: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x12fc40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_12fc44:
    // 0x12fc44: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x12fc44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_12fc48:
    // 0x12fc48: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x12fc48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_12fc4c:
    // 0x12fc4c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12fc4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_12fc50:
    // 0x12fc50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12fc50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12fc54:
    // 0x12fc54: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12fc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12fc58:
    // 0x12fc58: 0x10000015  b           . + 4 + (0x15 << 2)
label_12fc5c:
    if (ctx->pc == 0x12FC5Cu) {
        ctx->pc = 0x12FC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC58u;
        // 0x12fc5c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12FC60u;
        goto label_12fc60;
    }
    ctx->pc = 0x12FC58u;
    {
        const bool branch_taken_0x12fc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC58u;
        // 0x12fc5c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc58) {
            ctx->pc = 0x12FCB0u;
            goto label_12fcb0;
        }
    }
    ctx->pc = 0x12FC60u;
label_12fc60:
    // 0x12fc60: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x12fc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12fc64:
    // 0x12fc64: 0xc44191cc  lwc1        $f1, -0x6E34($v0)
    ctx->pc = 0x12fc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294939084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12fc68:
    // 0x12fc68: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x12fc68u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_12fc6c:
    // 0x12fc6c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12fc6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12fc70:
    // 0x12fc70: 0x0  nop
    ctx->pc = 0x12fc70u;
    // NOP
label_12fc74:
    // 0x12fc74: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_12fc78:
    if (ctx->pc == 0x12FC78u) {
        ctx->pc = 0x12FC7Cu;
        goto label_12fc7c;
    }
    ctx->pc = 0x12FC74u;
    {
        const bool branch_taken_0x12fc74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fc74) {
            ctx->pc = 0x12FCA0u;
            goto label_12fca0;
        }
    }
    ctx->pc = 0x12FC7Cu;
label_12fc7c:
    // 0x12fc7c: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x12fc7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
label_12fc80:
    // 0x12fc80: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12fc80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_12fc84:
    // 0x12fc84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12fc84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12fc88:
    // 0x12fc88: 0xc6210188  lwc1        $f1, 0x188($s1)
    ctx->pc = 0x12fc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12fc8c:
    // 0x12fc8c: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x12fc8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_12fc90:
    // 0x12fc90: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x12fc90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_12fc94:
    // 0x12fc94: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x12fc94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_12fc98:
    // 0x12fc98: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x12fc98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_12fc9c:
    // 0x12fc9c: 0xe6210248  swc1        $f1, 0x248($s1)
    ctx->pc = 0x12fc9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 584), bits); }
label_12fca0:
    // 0x12fca0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12fca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_12fca4:
    // 0x12fca4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12fca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12fca8:
    // 0x12fca8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12fca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12fcac:
    // 0x12fcac: 0x26250240  addiu       $a1, $s1, 0x240
    ctx->pc = 0x12fcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
label_12fcb0:
    // 0x12fcb0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x12fcb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12fcb4:
    // 0x12fcb4: 0x460cd302  mul.s       $f12, $f26, $f12
    ctx->pc = 0x12fcb4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[26], ctx->f[12]);
label_12fcb8:
    // 0x12fcb8: 0xc0d467e  jal         func_3519F8
label_12fcbc:
    if (ctx->pc == 0x12FCBCu) {
        ctx->pc = 0x12FCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FCB8u;
        // 0x12fcbc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12FCC0u;
        goto label_12fcc0;
    }
    ctx->pc = 0x12FCB8u;
    SET_GPR_U32(ctx, 31, 0x12FCC0u);
    ctx->pc = 0x12FCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FCB8u;
    // 0x12fcbc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3519F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3519F8u, 0x12FCB8u, 0x12FCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FCC0u;
label_12fcc0:
    // 0x12fcc0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x12fcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_12fcc4:
    // 0x12fcc4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x12fcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_12fcc8:
    // 0x12fcc8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x12fcc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_12fccc:
    // 0x12fccc: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x12fcccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_12fcd0:
    // 0x12fcd0: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x12fcd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_12fcd4:
    // 0x12fcd4: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x12fcd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_12fcd8:
    // 0x12fcd8: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x12fcd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_12fcdc:
    // 0x12fcdc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x12fcdcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_12fce0:
    // 0x12fce0: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x12fce0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_12fce4:
    // 0x12fce4: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x12fce4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12fce8:
    // 0x12fce8: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x12fce8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_12fcec:
    // 0x12fcec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12fcecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12fcf0:
    // 0x12fcf0: 0xc7bc0100  lwc1        $f28, 0x100($sp)
    ctx->pc = 0x12fcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_12fcf4:
    // 0x12fcf4: 0xc7bb00f8  lwc1        $f27, 0xF8($sp)
    ctx->pc = 0x12fcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_12fcf8:
    // 0x12fcf8: 0xc7ba00f0  lwc1        $f26, 0xF0($sp)
    ctx->pc = 0x12fcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_12fcfc:
    // 0x12fcfc: 0xc7b900e8  lwc1        $f25, 0xE8($sp)
    ctx->pc = 0x12fcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_12fd00:
    // 0x12fd00: 0xc7b800e0  lwc1        $f24, 0xE0($sp)
    ctx->pc = 0x12fd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_12fd04:
    // 0x12fd04: 0xc7b700d8  lwc1        $f23, 0xD8($sp)
    ctx->pc = 0x12fd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_12fd08:
    // 0x12fd08: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x12fd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_12fd0c:
    // 0x12fd0c: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x12fd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_12fd10:
    // 0x12fd10: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x12fd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12fd14:
    // 0x12fd14: 0x3e00008  jr          $ra
label_12fd18:
    if (ctx->pc == 0x12FD18u) {
        ctx->pc = 0x12FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD14u;
        // 0x12fd18: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12FD1Cu;
        goto label_12fd1c;
    }
    ctx->pc = 0x12FD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD14u;
        // 0x12fd18: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FD14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FD1Cu;
label_12fd1c:
    // 0x12fd1c: 0x0  nop
    ctx->pc = 0x12fd1cu;
    // NOP
    ctx->pc = 0x12fd20u;
}
