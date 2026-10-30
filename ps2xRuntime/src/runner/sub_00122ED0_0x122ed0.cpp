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

// Function: sub_00122ED0
// Address: 0x122ed0 - 0x1233c0
void sub_00122ED0_0x122ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122ED0_0x122ed0");
#endif

    switch (ctx->pc) {
        case 0x122ed0u: goto label_122ed0;
        case 0x122ed4u: goto label_122ed4;
        case 0x122ed8u: goto label_122ed8;
        case 0x122edcu: goto label_122edc;
        case 0x122ee0u: goto label_122ee0;
        case 0x122ee4u: goto label_122ee4;
        case 0x122ee8u: goto label_122ee8;
        case 0x122eecu: goto label_122eec;
        case 0x122ef0u: goto label_122ef0;
        case 0x122ef4u: goto label_122ef4;
        case 0x122ef8u: goto label_122ef8;
        case 0x122efcu: goto label_122efc;
        case 0x122f00u: goto label_122f00;
        case 0x122f04u: goto label_122f04;
        case 0x122f08u: goto label_122f08;
        case 0x122f0cu: goto label_122f0c;
        case 0x122f10u: goto label_122f10;
        case 0x122f14u: goto label_122f14;
        case 0x122f18u: goto label_122f18;
        case 0x122f1cu: goto label_122f1c;
        case 0x122f20u: goto label_122f20;
        case 0x122f24u: goto label_122f24;
        case 0x122f28u: goto label_122f28;
        case 0x122f2cu: goto label_122f2c;
        case 0x122f30u: goto label_122f30;
        case 0x122f34u: goto label_122f34;
        case 0x122f38u: goto label_122f38;
        case 0x122f3cu: goto label_122f3c;
        case 0x122f40u: goto label_122f40;
        case 0x122f44u: goto label_122f44;
        case 0x122f48u: goto label_122f48;
        case 0x122f4cu: goto label_122f4c;
        case 0x122f50u: goto label_122f50;
        case 0x122f54u: goto label_122f54;
        case 0x122f58u: goto label_122f58;
        case 0x122f5cu: goto label_122f5c;
        case 0x122f60u: goto label_122f60;
        case 0x122f64u: goto label_122f64;
        case 0x122f68u: goto label_122f68;
        case 0x122f6cu: goto label_122f6c;
        case 0x122f70u: goto label_122f70;
        case 0x122f74u: goto label_122f74;
        case 0x122f78u: goto label_122f78;
        case 0x122f7cu: goto label_122f7c;
        case 0x122f80u: goto label_122f80;
        case 0x122f84u: goto label_122f84;
        case 0x122f88u: goto label_122f88;
        case 0x122f8cu: goto label_122f8c;
        case 0x122f90u: goto label_122f90;
        case 0x122f94u: goto label_122f94;
        case 0x122f98u: goto label_122f98;
        case 0x122f9cu: goto label_122f9c;
        case 0x122fa0u: goto label_122fa0;
        case 0x122fa4u: goto label_122fa4;
        case 0x122fa8u: goto label_122fa8;
        case 0x122facu: goto label_122fac;
        case 0x122fb0u: goto label_122fb0;
        case 0x122fb4u: goto label_122fb4;
        case 0x122fb8u: goto label_122fb8;
        case 0x122fbcu: goto label_122fbc;
        case 0x122fc0u: goto label_122fc0;
        case 0x122fc4u: goto label_122fc4;
        case 0x122fc8u: goto label_122fc8;
        case 0x122fccu: goto label_122fcc;
        case 0x122fd0u: goto label_122fd0;
        case 0x122fd4u: goto label_122fd4;
        case 0x122fd8u: goto label_122fd8;
        case 0x122fdcu: goto label_122fdc;
        case 0x122fe0u: goto label_122fe0;
        case 0x122fe4u: goto label_122fe4;
        case 0x122fe8u: goto label_122fe8;
        case 0x122fecu: goto label_122fec;
        case 0x122ff0u: goto label_122ff0;
        case 0x122ff4u: goto label_122ff4;
        case 0x122ff8u: goto label_122ff8;
        case 0x122ffcu: goto label_122ffc;
        case 0x123000u: goto label_123000;
        case 0x123004u: goto label_123004;
        case 0x123008u: goto label_123008;
        case 0x12300cu: goto label_12300c;
        case 0x123010u: goto label_123010;
        case 0x123014u: goto label_123014;
        case 0x123018u: goto label_123018;
        case 0x12301cu: goto label_12301c;
        case 0x123020u: goto label_123020;
        case 0x123024u: goto label_123024;
        case 0x123028u: goto label_123028;
        case 0x12302cu: goto label_12302c;
        case 0x123030u: goto label_123030;
        case 0x123034u: goto label_123034;
        case 0x123038u: goto label_123038;
        case 0x12303cu: goto label_12303c;
        case 0x123040u: goto label_123040;
        case 0x123044u: goto label_123044;
        case 0x123048u: goto label_123048;
        case 0x12304cu: goto label_12304c;
        case 0x123050u: goto label_123050;
        case 0x123054u: goto label_123054;
        case 0x123058u: goto label_123058;
        case 0x12305cu: goto label_12305c;
        case 0x123060u: goto label_123060;
        case 0x123064u: goto label_123064;
        case 0x123068u: goto label_123068;
        case 0x12306cu: goto label_12306c;
        case 0x123070u: goto label_123070;
        case 0x123074u: goto label_123074;
        case 0x123078u: goto label_123078;
        case 0x12307cu: goto label_12307c;
        case 0x123080u: goto label_123080;
        case 0x123084u: goto label_123084;
        case 0x123088u: goto label_123088;
        case 0x12308cu: goto label_12308c;
        case 0x123090u: goto label_123090;
        case 0x123094u: goto label_123094;
        case 0x123098u: goto label_123098;
        case 0x12309cu: goto label_12309c;
        case 0x1230a0u: goto label_1230a0;
        case 0x1230a4u: goto label_1230a4;
        case 0x1230a8u: goto label_1230a8;
        case 0x1230acu: goto label_1230ac;
        case 0x1230b0u: goto label_1230b0;
        case 0x1230b4u: goto label_1230b4;
        case 0x1230b8u: goto label_1230b8;
        case 0x1230bcu: goto label_1230bc;
        case 0x1230c0u: goto label_1230c0;
        case 0x1230c4u: goto label_1230c4;
        case 0x1230c8u: goto label_1230c8;
        case 0x1230ccu: goto label_1230cc;
        case 0x1230d0u: goto label_1230d0;
        case 0x1230d4u: goto label_1230d4;
        case 0x1230d8u: goto label_1230d8;
        case 0x1230dcu: goto label_1230dc;
        case 0x1230e0u: goto label_1230e0;
        case 0x1230e4u: goto label_1230e4;
        case 0x1230e8u: goto label_1230e8;
        case 0x1230ecu: goto label_1230ec;
        case 0x1230f0u: goto label_1230f0;
        case 0x1230f4u: goto label_1230f4;
        case 0x1230f8u: goto label_1230f8;
        case 0x1230fcu: goto label_1230fc;
        case 0x123100u: goto label_123100;
        case 0x123104u: goto label_123104;
        case 0x123108u: goto label_123108;
        case 0x12310cu: goto label_12310c;
        case 0x123110u: goto label_123110;
        case 0x123114u: goto label_123114;
        case 0x123118u: goto label_123118;
        case 0x12311cu: goto label_12311c;
        case 0x123120u: goto label_123120;
        case 0x123124u: goto label_123124;
        case 0x123128u: goto label_123128;
        case 0x12312cu: goto label_12312c;
        case 0x123130u: goto label_123130;
        case 0x123134u: goto label_123134;
        case 0x123138u: goto label_123138;
        case 0x12313cu: goto label_12313c;
        case 0x123140u: goto label_123140;
        case 0x123144u: goto label_123144;
        case 0x123148u: goto label_123148;
        case 0x12314cu: goto label_12314c;
        case 0x123150u: goto label_123150;
        case 0x123154u: goto label_123154;
        case 0x123158u: goto label_123158;
        case 0x12315cu: goto label_12315c;
        case 0x123160u: goto label_123160;
        case 0x123164u: goto label_123164;
        case 0x123168u: goto label_123168;
        case 0x12316cu: goto label_12316c;
        case 0x123170u: goto label_123170;
        case 0x123174u: goto label_123174;
        case 0x123178u: goto label_123178;
        case 0x12317cu: goto label_12317c;
        case 0x123180u: goto label_123180;
        case 0x123184u: goto label_123184;
        case 0x123188u: goto label_123188;
        case 0x12318cu: goto label_12318c;
        case 0x123190u: goto label_123190;
        case 0x123194u: goto label_123194;
        case 0x123198u: goto label_123198;
        case 0x12319cu: goto label_12319c;
        case 0x1231a0u: goto label_1231a0;
        case 0x1231a4u: goto label_1231a4;
        case 0x1231a8u: goto label_1231a8;
        case 0x1231acu: goto label_1231ac;
        case 0x1231b0u: goto label_1231b0;
        case 0x1231b4u: goto label_1231b4;
        case 0x1231b8u: goto label_1231b8;
        case 0x1231bcu: goto label_1231bc;
        case 0x1231c0u: goto label_1231c0;
        case 0x1231c4u: goto label_1231c4;
        case 0x1231c8u: goto label_1231c8;
        case 0x1231ccu: goto label_1231cc;
        case 0x1231d0u: goto label_1231d0;
        case 0x1231d4u: goto label_1231d4;
        case 0x1231d8u: goto label_1231d8;
        case 0x1231dcu: goto label_1231dc;
        case 0x1231e0u: goto label_1231e0;
        case 0x1231e4u: goto label_1231e4;
        case 0x1231e8u: goto label_1231e8;
        case 0x1231ecu: goto label_1231ec;
        case 0x1231f0u: goto label_1231f0;
        case 0x1231f4u: goto label_1231f4;
        case 0x1231f8u: goto label_1231f8;
        case 0x1231fcu: goto label_1231fc;
        case 0x123200u: goto label_123200;
        case 0x123204u: goto label_123204;
        case 0x123208u: goto label_123208;
        case 0x12320cu: goto label_12320c;
        case 0x123210u: goto label_123210;
        case 0x123214u: goto label_123214;
        case 0x123218u: goto label_123218;
        case 0x12321cu: goto label_12321c;
        case 0x123220u: goto label_123220;
        case 0x123224u: goto label_123224;
        case 0x123228u: goto label_123228;
        case 0x12322cu: goto label_12322c;
        case 0x123230u: goto label_123230;
        case 0x123234u: goto label_123234;
        case 0x123238u: goto label_123238;
        case 0x12323cu: goto label_12323c;
        case 0x123240u: goto label_123240;
        case 0x123244u: goto label_123244;
        case 0x123248u: goto label_123248;
        case 0x12324cu: goto label_12324c;
        case 0x123250u: goto label_123250;
        case 0x123254u: goto label_123254;
        case 0x123258u: goto label_123258;
        case 0x12325cu: goto label_12325c;
        case 0x123260u: goto label_123260;
        case 0x123264u: goto label_123264;
        case 0x123268u: goto label_123268;
        case 0x12326cu: goto label_12326c;
        case 0x123270u: goto label_123270;
        case 0x123274u: goto label_123274;
        case 0x123278u: goto label_123278;
        case 0x12327cu: goto label_12327c;
        case 0x123280u: goto label_123280;
        case 0x123284u: goto label_123284;
        case 0x123288u: goto label_123288;
        case 0x12328cu: goto label_12328c;
        case 0x123290u: goto label_123290;
        case 0x123294u: goto label_123294;
        case 0x123298u: goto label_123298;
        case 0x12329cu: goto label_12329c;
        case 0x1232a0u: goto label_1232a0;
        case 0x1232a4u: goto label_1232a4;
        case 0x1232a8u: goto label_1232a8;
        case 0x1232acu: goto label_1232ac;
        case 0x1232b0u: goto label_1232b0;
        case 0x1232b4u: goto label_1232b4;
        case 0x1232b8u: goto label_1232b8;
        case 0x1232bcu: goto label_1232bc;
        case 0x1232c0u: goto label_1232c0;
        case 0x1232c4u: goto label_1232c4;
        case 0x1232c8u: goto label_1232c8;
        case 0x1232ccu: goto label_1232cc;
        case 0x1232d0u: goto label_1232d0;
        case 0x1232d4u: goto label_1232d4;
        case 0x1232d8u: goto label_1232d8;
        case 0x1232dcu: goto label_1232dc;
        case 0x1232e0u: goto label_1232e0;
        case 0x1232e4u: goto label_1232e4;
        case 0x1232e8u: goto label_1232e8;
        case 0x1232ecu: goto label_1232ec;
        case 0x1232f0u: goto label_1232f0;
        case 0x1232f4u: goto label_1232f4;
        case 0x1232f8u: goto label_1232f8;
        case 0x1232fcu: goto label_1232fc;
        case 0x123300u: goto label_123300;
        case 0x123304u: goto label_123304;
        case 0x123308u: goto label_123308;
        case 0x12330cu: goto label_12330c;
        case 0x123310u: goto label_123310;
        case 0x123314u: goto label_123314;
        case 0x123318u: goto label_123318;
        case 0x12331cu: goto label_12331c;
        case 0x123320u: goto label_123320;
        case 0x123324u: goto label_123324;
        case 0x123328u: goto label_123328;
        case 0x12332cu: goto label_12332c;
        case 0x123330u: goto label_123330;
        case 0x123334u: goto label_123334;
        case 0x123338u: goto label_123338;
        case 0x12333cu: goto label_12333c;
        case 0x123340u: goto label_123340;
        case 0x123344u: goto label_123344;
        case 0x123348u: goto label_123348;
        case 0x12334cu: goto label_12334c;
        case 0x123350u: goto label_123350;
        case 0x123354u: goto label_123354;
        case 0x123358u: goto label_123358;
        case 0x12335cu: goto label_12335c;
        case 0x123360u: goto label_123360;
        case 0x123364u: goto label_123364;
        case 0x123368u: goto label_123368;
        case 0x12336cu: goto label_12336c;
        case 0x123370u: goto label_123370;
        case 0x123374u: goto label_123374;
        case 0x123378u: goto label_123378;
        case 0x12337cu: goto label_12337c;
        case 0x123380u: goto label_123380;
        case 0x123384u: goto label_123384;
        case 0x123388u: goto label_123388;
        case 0x12338cu: goto label_12338c;
        case 0x123390u: goto label_123390;
        case 0x123394u: goto label_123394;
        case 0x123398u: goto label_123398;
        case 0x12339cu: goto label_12339c;
        case 0x1233a0u: goto label_1233a0;
        case 0x1233a4u: goto label_1233a4;
        case 0x1233a8u: goto label_1233a8;
        case 0x1233acu: goto label_1233ac;
        case 0x1233b0u: goto label_1233b0;
        case 0x1233b4u: goto label_1233b4;
        case 0x1233b8u: goto label_1233b8;
        case 0x1233bcu: goto label_1233bc;
        default: break;
    }

    ctx->pc = 0x122ed0u;

label_122ed0:
    // 0x122ed0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x122ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_122ed4:
    // 0x122ed4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x122ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_122ed8:
    // 0x122ed8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x122ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_122edc:
    // 0x122edc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x122edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_122ee0:
    // 0x122ee0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x122ee0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122ee4:
    // 0x122ee4: 0x8c469148  lw          $a2, -0x6EB8($v0)
    ctx->pc = 0x122ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938952)));
label_122ee8:
    // 0x122ee8: 0x8c63b198  lw          $v1, -0x4E68($v1)
    ctx->pc = 0x122ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947224)));
label_122eec:
    // 0x122eec: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x122eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_122ef0:
    // 0x122ef0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x122ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_122ef4:
    // 0x122ef4: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x122ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_122ef8:
    // 0x122ef8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x122ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122efc:
    // 0x122efc: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x122efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_122f00:
    // 0x122f00: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x122f00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122f04:
    // 0x122f04: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x122f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_122f08:
    // 0x122f08: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x122f08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122f0c:
    // 0x122f0c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x122f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_122f10:
    // 0x122f10: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x122f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_122f14:
    // 0x122f14: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x122f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_122f18:
    // 0x122f18: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x122f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_122f1c:
    // 0x122f1c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x122f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_122f20:
    // 0x122f20: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x122f20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_122f24:
    // 0x122f24: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x122f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_122f28:
    // 0x122f28: 0x10c0002a  beqz        $a2, . + 4 + (0x2A << 2)
label_122f2c:
    if (ctx->pc == 0x122F2Cu) {
        ctx->pc = 0x122F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F28u;
        // 0x122f2c: 0xac409150  sw          $zero, -0x6EB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294938960), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122F30u;
        goto label_122f30;
    }
    ctx->pc = 0x122F28u;
    {
        const bool branch_taken_0x122f28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x122F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F28u;
        // 0x122f2c: 0xac409150  sw          $zero, -0x6EB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294938960), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f28) {
            ctx->pc = 0x122FD4u;
            goto label_122fd4;
        }
    }
    ctx->pc = 0x122F30u;
label_122f30:
    // 0x122f30: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x122f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_122f34:
    // 0x122f34: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x122f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_122f38:
    // 0x122f38: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x122f38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_122f3c:
    // 0x122f3c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x122f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_122f40:
    // 0x122f40: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_122f44:
    if (ctx->pc == 0x122F44u) {
        ctx->pc = 0x122F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F40u;
        // 0x122f44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122F48u;
        goto label_122f48;
    }
    ctx->pc = 0x122F40u;
    {
        const bool branch_taken_0x122f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F40u;
        // 0x122f44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f40) {
            ctx->pc = 0x122F68u;
            goto label_122f68;
        }
    }
    ctx->pc = 0x122F48u;
label_122f48:
    // 0x122f48: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x122f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_122f4c:
    // 0x122f4c: 0x84440290  lh          $a0, 0x290($v0)
    ctx->pc = 0x122f4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 656)));
label_122f50:
    // 0x122f50: 0x8c430294  lw          $v1, 0x294($v0)
    ctx->pc = 0x122f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 660)));
label_122f54:
    // 0x122f54: 0x60f809  jalr        $v1
label_122f58:
    if (ctx->pc == 0x122F58u) {
        ctx->pc = 0x122F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F54u;
        // 0x122f58: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122F5Cu;
        goto label_122f5c;
    }
    ctx->pc = 0x122F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x122F5Cu);
        ctx->pc = 0x122F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F54u;
        // 0x122f58: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122F54u, 0x122F5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x122F5Cu;
label_122f5c:
    // 0x122f5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x122f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122f60:
    // 0x122f60: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x122f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_122f64:
    // 0x122f64: 0xac44b1e8  sw          $a0, -0x4E18($v0)
    ctx->pc = 0x122f64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294947304), GPR_U32(ctx, 4));
label_122f68:
    // 0x122f68: 0x8e659148  lw          $a1, -0x6EB8($s3)
    ctx->pc = 0x122f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294938952)));
label_122f6c:
    // 0x122f6c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x122f6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122f70:
    // 0x122f70: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x122f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_122f74:
    // 0x122f74: 0x84640288  lh          $a0, 0x288($v1)
    ctx->pc = 0x122f74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 648)));
label_122f78:
    // 0x122f78: 0x8c62028c  lw          $v0, 0x28C($v1)
    ctx->pc = 0x122f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 652)));
label_122f7c:
    // 0x122f7c: 0x40f809  jalr        $v0
label_122f80:
    if (ctx->pc == 0x122F80u) {
        ctx->pc = 0x122F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F7Cu;
        // 0x122f80: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122F84u;
        goto label_122f84;
    }
    ctx->pc = 0x122F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x122F84u);
        ctx->pc = 0x122F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F7Cu;
        // 0x122f80: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122F7Cu, 0x122F84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x122F84u;
label_122f84:
    // 0x122f84: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_122f88:
    if (ctx->pc == 0x122F88u) {
        ctx->pc = 0x122F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F84u;
        // 0x122f88: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122F8Cu;
        goto label_122f8c;
    }
    ctx->pc = 0x122F84u;
    {
        const bool branch_taken_0x122f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F84u;
        // 0x122f88: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f84) {
            ctx->pc = 0x122FA4u;
            goto label_122fa4;
        }
    }
    ctx->pc = 0x122F8Cu;
label_122f8c:
    // 0x122f8c: 0x8c43b1c0  lw          $v1, -0x4E40($v0)
    ctx->pc = 0x122f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947264)));
label_122f90:
    // 0x122f90: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_122f94:
    if (ctx->pc == 0x122F94u) {
        ctx->pc = 0x122F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F90u;
        // 0x122f94: 0x8e629148  lw          $v0, -0x6EB8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294938952)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122F98u;
        goto label_122f98;
    }
    ctx->pc = 0x122F90u;
    {
        const bool branch_taken_0x122f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x122F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F90u;
        // 0x122f94: 0x8e629148  lw          $v0, -0x6EB8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294938952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f90) {
            ctx->pc = 0x122FB0u;
            goto label_122fb0;
        }
    }
    ctx->pc = 0x122F98u;
label_122f98:
    // 0x122f98: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x122f98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122f9c:
    // 0x122f9c: 0x1000000d  b           . + 4 + (0xD << 2)
label_122fa0:
    if (ctx->pc == 0x122FA0u) {
        ctx->pc = 0x122FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F9Cu;
        // 0x122fa0: 0xae029150  sw          $v0, -0x6EB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294938960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122FA4u;
        goto label_122fa4;
    }
    ctx->pc = 0x122F9Cu;
    {
        const bool branch_taken_0x122f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F9Cu;
        // 0x122fa0: 0xae029150  sw          $v0, -0x6EB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294938960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f9c) {
            ctx->pc = 0x122FD4u;
            goto label_122fd4;
        }
    }
    ctx->pc = 0x122FA4u;
label_122fa4:
    // 0x122fa4: 0x8c43b1c0  lw          $v1, -0x4E40($v0)
    ctx->pc = 0x122fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947264)));
label_122fa8:
    // 0x122fa8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_122fac:
    if (ctx->pc == 0x122FACu) {
        ctx->pc = 0x122FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FA8u;
        // 0x122fac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122FB0u;
        goto label_122fb0;
    }
    ctx->pc = 0x122FA8u;
    {
        const bool branch_taken_0x122fa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x122FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FA8u;
        // 0x122fac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122fa8) {
            ctx->pc = 0x122FD8u;
            goto label_122fd8;
        }
    }
    ctx->pc = 0x122FB0u;
label_122fb0:
    // 0x122fb0: 0x8e649148  lw          $a0, -0x6EB8($s3)
    ctx->pc = 0x122fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294938952)));
label_122fb4:
    // 0x122fb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x122fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122fb8:
    // 0x122fb8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x122fb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122fbc:
    // 0x122fbc: 0xae049150  sw          $a0, -0x6EB0($s0)
    ctx->pc = 0x122fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294938960), GPR_U32(ctx, 4));
label_122fc0:
    // 0x122fc0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x122fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_122fc4:
    // 0x122fc4: 0x84430290  lh          $v1, 0x290($v0)
    ctx->pc = 0x122fc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 656)));
label_122fc8:
    // 0x122fc8: 0x8c460294  lw          $a2, 0x294($v0)
    ctx->pc = 0x122fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 660)));
label_122fcc:
    // 0x122fcc: 0xc0f809  jalr        $a2
label_122fd0:
    if (ctx->pc == 0x122FD0u) {
        ctx->pc = 0x122FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FCCu;
        // 0x122fd0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122FD4u;
        goto label_122fd4;
    }
    ctx->pc = 0x122FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x122FD4u);
        ctx->pc = 0x122FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FCCu;
        // 0x122fd0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122FCCu, 0x122FD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x122FD4u;
label_122fd4:
    // 0x122fd4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x122fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_122fd8:
    // 0x122fd8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x122fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_122fdc:
    // 0x122fdc: 0x8c43b1c8  lw          $v1, -0x4E38($v0)
    ctx->pc = 0x122fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947272)));
label_122fe0:
    // 0x122fe0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_122fe4:
    if (ctx->pc == 0x122FE4u) {
        ctx->pc = 0x122FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FE0u;
        // 0x122fe4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122FE8u;
        goto label_122fe8;
    }
    ctx->pc = 0x122FE0u;
    {
        const bool branch_taken_0x122fe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x122FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FE0u;
        // 0x122fe4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122fe0) {
            ctx->pc = 0x122FF4u;
            goto label_122ff4;
        }
    }
    ctx->pc = 0x122FE8u;
label_122fe8:
    // 0x122fe8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x122fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_122fec:
    // 0x122fec: 0x8c43b1c4  lw          $v1, -0x4E3C($v0)
    ctx->pc = 0x122fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947268)));
label_122ff0:
    // 0x122ff0: 0x3202b  sltu        $a0, $zero, $v1
    ctx->pc = 0x122ff0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_122ff4:
    // 0x122ff4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x122ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122ff8:
    // 0x122ff8: 0x54820062  bnel        $a0, $v0, . + 4 + (0x62 << 2)
label_122ffc:
    if (ctx->pc == 0x122FFCu) {
        ctx->pc = 0x122FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FF8u;
        // 0x122ffc: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123000u;
        goto label_123000;
    }
    ctx->pc = 0x122FF8u;
    {
        const bool branch_taken_0x122ff8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x122ff8) {
            ctx->pc = 0x122FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122FF8u;
            // 0x122ffc: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123184u;
            goto label_123184;
        }
    }
    ctx->pc = 0x123000u;
label_123000:
    // 0x123000: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x123000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_123004:
    // 0x123004: 0x8c51b1c4  lw          $s1, -0x4E3C($v0)
    ctx->pc = 0x123004u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947268)));
label_123008:
    // 0x123008: 0x5624005e  bnel        $s1, $a0, . + 4 + (0x5E << 2)
label_12300c:
    if (ctx->pc == 0x12300Cu) {
        ctx->pc = 0x12300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123008u;
        // 0x12300c: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123010u;
        goto label_123010;
    }
    ctx->pc = 0x123008u;
    {
        const bool branch_taken_0x123008 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        if (branch_taken_0x123008) {
            ctx->pc = 0x12300Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123008u;
            // 0x12300c: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123184u;
            goto label_123184;
        }
    }
    ctx->pc = 0x123010u;
label_123010:
    // 0x123010: 0x1280005b  beqz        $s4, . + 4 + (0x5B << 2)
label_123014:
    if (ctx->pc == 0x123014u) {
        ctx->pc = 0x123014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123010u;
        // 0x123014: 0x8e659148  lw          $a1, -0x6EB8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294938952)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123018u;
        goto label_123018;
    }
    ctx->pc = 0x123010u;
    {
        const bool branch_taken_0x123010 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x123014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123010u;
        // 0x123014: 0x8e659148  lw          $a1, -0x6EB8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294938952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123010) {
            ctx->pc = 0x123180u;
            goto label_123180;
        }
    }
    ctx->pc = 0x123018u;
label_123018:
    // 0x123018: 0x10a00059  beqz        $a1, . + 4 + (0x59 << 2)
label_12301c:
    if (ctx->pc == 0x12301Cu) {
        ctx->pc = 0x12301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123018u;
        // 0x12301c: 0x26729148  addiu       $s2, $s3, -0x6EB8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123020u;
        goto label_123020;
    }
    ctx->pc = 0x123018u;
    {
        const bool branch_taken_0x123018 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123018u;
        // 0x12301c: 0x26729148  addiu       $s2, $s3, -0x6EB8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123018) {
            ctx->pc = 0x123180u;
            goto label_123180;
        }
    }
    ctx->pc = 0x123020u;
label_123020:
    // 0x123020: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x123020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_123024:
    // 0x123024: 0x50400057  beql        $v0, $zero, . + 4 + (0x57 << 2)
label_123028:
    if (ctx->pc == 0x123028u) {
        ctx->pc = 0x123028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123024u;
        // 0x123028: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12302Cu;
        goto label_12302c;
    }
    ctx->pc = 0x123024u;
    {
        const bool branch_taken_0x123024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123024) {
            ctx->pc = 0x123028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123024u;
            // 0x123028: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123184u;
            goto label_123184;
        }
    }
    ctx->pc = 0x12302Cu;
label_12302c:
    // 0x12302c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x12302cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_123030:
    // 0x123030: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x123030u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_123034:
    // 0x123034: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x123034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_123038:
    // 0x123038: 0x40f809  jalr        $v0
label_12303c:
    if (ctx->pc == 0x12303Cu) {
        ctx->pc = 0x12303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123038u;
        // 0x12303c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123040u;
        goto label_123040;
    }
    ctx->pc = 0x123038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x123040u);
        ctx->pc = 0x12303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123038u;
        // 0x12303c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123038u, 0x123040u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123040u;
label_123040:
    // 0x123040: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x123040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123044:
    // 0x123044: 0x5611004f  bnel        $s0, $s1, . + 4 + (0x4F << 2)
label_123048:
    if (ctx->pc == 0x123048u) {
        ctx->pc = 0x123048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123044u;
        // 0x123048: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12304Cu;
        goto label_12304c;
    }
    ctx->pc = 0x123044u;
    {
        const bool branch_taken_0x123044 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x123044) {
            ctx->pc = 0x123048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123044u;
            // 0x123048: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123184u;
            goto label_123184;
        }
    }
    ctx->pc = 0x12304Cu;
label_12304c:
    // 0x12304c: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x12304cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_123050:
    // 0x123050: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x123050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_123054:
    // 0x123054: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x123054u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_123058:
    // 0x123058: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x123058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_12305c:
    // 0x12305c: 0x40f809  jalr        $v0
label_123060:
    if (ctx->pc == 0x123060u) {
        ctx->pc = 0x123060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12305Cu;
        // 0x123060: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123064u;
        goto label_123064;
    }
    ctx->pc = 0x12305Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x123064u);
        ctx->pc = 0x123060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12305Cu;
        // 0x123060: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12305Cu, 0x123064u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123064u;
label_123064:
    // 0x123064: 0x54500047  bnel        $v0, $s0, . + 4 + (0x47 << 2)
label_123068:
    if (ctx->pc == 0x123068u) {
        ctx->pc = 0x123068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123064u;
        // 0x123068: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12306Cu;
        goto label_12306c;
    }
    ctx->pc = 0x123064u;
    {
        const bool branch_taken_0x123064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x123064) {
            ctx->pc = 0x123068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123064u;
            // 0x123068: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123184u;
            goto label_123184;
        }
    }
    ctx->pc = 0x12306Cu;
label_12306c:
    // 0x12306c: 0x8e719148  lw          $s1, -0x6EB8($s3)
    ctx->pc = 0x12306cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294938952)));
label_123070:
    // 0x123070: 0x8e520004  lw          $s2, 0x4($s2)
    ctx->pc = 0x123070u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_123074:
    // 0x123074: 0x12320041  beq         $s1, $s2, . + 4 + (0x41 << 2)
label_123078:
    if (ctx->pc == 0x123078u) {
        ctx->pc = 0x123078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123074u;
        // 0x123078: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12307Cu;
        goto label_12307c;
    }
    ctx->pc = 0x123074u;
    {
        const bool branch_taken_0x123074 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x123078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123074u;
        // 0x123078: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123074) {
            ctx->pc = 0x12317Cu;
            goto label_12317c;
        }
    }
    ctx->pc = 0x12307Cu;
label_12307c:
    // 0x12307c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x12307cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_123080:
    // 0x123080: 0x3c012edb  lui         $at, 0x2EDB
    ctx->pc = 0x123080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11995 << 16));
label_123084:
    // 0x123084: 0x3421e6fe  ori         $at, $at, 0xE6FE
    ctx->pc = 0x123084u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59134);
label_123088:
    // 0x123088: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x123088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_12308c:
    // 0x12308c: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x12308cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_123090:
    // 0x123090: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x123090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_123094:
    // 0x123094: 0x40f809  jalr        $v0
label_123098:
    if (ctx->pc == 0x123098u) {
        ctx->pc = 0x123098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123094u;
        // 0x123098: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12309Cu;
        goto label_12309c;
    }
    ctx->pc = 0x123094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12309Cu);
        ctx->pc = 0x123098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123094u;
        // 0x123098: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123094u, 0x12309Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12309Cu;
label_12309c:
    // 0x12309c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12309cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1230a0:
    // 0x1230a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1230a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1230a4:
    // 0x1230a4: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x1230a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_1230a8:
    // 0x1230a8: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x1230a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_1230ac:
    // 0x1230ac: 0x40f809  jalr        $v0
label_1230b0:
    if (ctx->pc == 0x1230B0u) {
        ctx->pc = 0x1230B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230ACu;
        // 0x1230b0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1230B4u;
        goto label_1230b4;
    }
    ctx->pc = 0x1230ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1230B4u);
        ctx->pc = 0x1230B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230ACu;
        // 0x1230b0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1230ACu, 0x1230B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1230B4u;
label_1230b4:
    // 0x1230b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1230b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1230b8:
    // 0x1230b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1230b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1230bc:
    // 0x1230bc: 0xc136afa  jal         func_4DABE8
label_1230c0:
    if (ctx->pc == 0x1230C0u) {
        ctx->pc = 0x1230C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230BCu;
        // 0x1230c0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1230C4u;
        goto label_1230c4;
    }
    ctx->pc = 0x1230BCu;
    SET_GPR_U32(ctx, 31, 0x1230C4u);
    ctx->pc = 0x1230C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1230BCu;
    // 0x1230c0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x1230BCu, 0x1230C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1230C4u;
label_1230c4:
    // 0x1230c4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1230c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1230c8:
    // 0x1230c8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1230c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1230cc:
    // 0x1230cc: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x1230ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1230d0:
    // 0x1230d0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1230d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1230d4:
    // 0x1230d4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1230d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1230d8:
    // 0x1230d8: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x1230d8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_1230dc:
    // 0x1230dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1230dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1230e0:
    // 0x1230e0: 0x0  nop
    ctx->pc = 0x1230e0u;
    // NOP
label_1230e4:
    // 0x1230e4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1230e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1230e8:
    // 0x1230e8: 0x0  nop
    ctx->pc = 0x1230e8u;
    // NOP
label_1230ec:
    // 0x1230ec: 0x45010020  bc1t        . + 4 + (0x20 << 2)
label_1230f0:
    if (ctx->pc == 0x1230F0u) {
        ctx->pc = 0x1230F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230ECu;
        // 0x1230f0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1230F4u;
        goto label_1230f4;
    }
    ctx->pc = 0x1230ECu;
    {
        const bool branch_taken_0x1230ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1230F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230ECu;
        // 0x1230f0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1230ec) {
            ctx->pc = 0x123170u;
            goto label_123170;
        }
    }
    ctx->pc = 0x1230F4u;
label_1230f4:
    // 0x1230f4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1230f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1230f8:
    // 0x1230f8: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x1230f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_1230fc:
    // 0x1230fc: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x1230fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_123100:
    // 0x123100: 0x40f809  jalr        $v0
label_123104:
    if (ctx->pc == 0x123104u) {
        ctx->pc = 0x123104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123100u;
        // 0x123104: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123108u;
        goto label_123108;
    }
    ctx->pc = 0x123100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x123108u);
        ctx->pc = 0x123104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123100u;
        // 0x123104: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123100u, 0x123108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123108u;
label_123108:
    // 0x123108: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x123108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12310c:
    // 0x12310c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12310cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123110:
    // 0x123110: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x123110u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_123114:
    // 0x123114: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x123114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_123118:
    // 0x123118: 0x40f809  jalr        $v0
label_12311c:
    if (ctx->pc == 0x12311Cu) {
        ctx->pc = 0x12311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123118u;
        // 0x12311c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123120u;
        goto label_123120;
    }
    ctx->pc = 0x123118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x123120u);
        ctx->pc = 0x12311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123118u;
        // 0x12311c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123118u, 0x123120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123120u;
label_123120:
    // 0x123120: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x123120u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_123124:
    // 0x123124: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x123124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123128:
    // 0x123128: 0x7a040000  lq          $a0, 0x0($s0)
    ctx->pc = 0x123128u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_12312c:
    // 0x12312c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x12312cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_123130:
    // 0x123130: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x123130u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_123134:
    // 0x123134: 0x4be208ac  vsub.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x123134u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_123138:
    // 0x123138: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x123138u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_12313c:
    // 0x12313c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x12313cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_123140:
    // 0x123140: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x123140u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_123144:
    // 0x123144: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x123144u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_123148:
    // 0x123148: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x123148u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12314c:
    // 0x12314c: 0x4b0318c3  vaddw.x     $vf3, $vf3, $vf3w
    ctx->pc = 0x12314cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_123150:
    // 0x123150: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x123150u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_123154:
    // 0x123154: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x123154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
label_123158:
    // 0x123158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x123158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12315c:
    // 0x12315c: 0x0  nop
    ctx->pc = 0x12315cu;
    // NOP
label_123160:
    // 0x123160: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x123160u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_123164:
    // 0x123164: 0x0  nop
    ctx->pc = 0x123164u;
    // NOP
label_123168:
    // 0x123168: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_12316c:
    if (ctx->pc == 0x12316Cu) {
        ctx->pc = 0x12316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123168u;
        // 0x12316c: 0x7fa40000  sq          $a0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123170u;
        goto label_123170;
    }
    ctx->pc = 0x123168u;
    {
        const bool branch_taken_0x123168 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123168u;
        // 0x12316c: 0x7fa40000  sq          $a0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123168) {
            ctx->pc = 0x123174u;
            goto label_123174;
        }
    }
    ctx->pc = 0x123170u;
label_123170:
    // 0x123170: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x123170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123174:
    // 0x123174: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_123178:
    if (ctx->pc == 0x123178u) {
        ctx->pc = 0x123178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123174u;
        // 0x123178: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12317Cu;
        goto label_12317c;
    }
    ctx->pc = 0x123174u;
    {
        const bool branch_taken_0x123174 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x123178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123174u;
        // 0x123178: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123174) {
            ctx->pc = 0x123180u;
            goto label_123180;
        }
    }
    ctx->pc = 0x12317Cu;
label_12317c:
    // 0x12317c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x12317cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_123180:
    // 0x123180: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x123180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_123184:
    // 0x123184: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x123184u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123188:
    // 0x123188: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x123188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
label_12318c:
    // 0x12318c: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x12318cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_123190:
    // 0x123190: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x123190u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_123194:
    // 0x123194: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x123194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_123198:
    // 0x123198: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_12319c:
    if (ctx->pc == 0x12319Cu) {
        ctx->pc = 0x12319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123198u;
        // 0x12319c: 0x3c1e0051  lui         $fp, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1231A0u;
        goto label_1231a0;
    }
    ctx->pc = 0x123198u;
    {
        const bool branch_taken_0x123198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123198u;
        // 0x12319c: 0x3c1e0051  lui         $fp, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123198) {
            ctx->pc = 0x123234u;
            goto label_123234;
        }
    }
    ctx->pc = 0x1231A0u;
label_1231a0:
    // 0x1231a0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1231a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_1231a4:
    // 0x1231a4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x1231a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_1231a8:
    // 0x1231a8: 0x24429150  addiu       $v0, $v0, -0x6EB0
    ctx->pc = 0x1231a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938960));
label_1231ac:
    // 0x1231ac: 0x24639148  addiu       $v1, $v1, -0x6EB8
    ctx->pc = 0x1231acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938952));
label_1231b0:
    // 0x1231b0: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x1231b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_1231b4:
    // 0x1231b4: 0x24710004  addiu       $s1, $v1, 0x4
    ctx->pc = 0x1231b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1231b8:
    // 0x1231b8: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x1231b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1231bc:
    // 0x1231bc: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x1231bcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_1231c0:
    // 0x1231c0: 0x24530004  addiu       $s3, $v0, 0x4
    ctx->pc = 0x1231c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1231c4:
    // 0x1231c4: 0x0  nop
    ctx->pc = 0x1231c4u;
    // NOP
label_1231c8:
    // 0x1231c8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1231c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1231cc:
    // 0x1231cc: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
label_1231d0:
    if (ctx->pc == 0x1231D0u) {
        ctx->pc = 0x1231D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231CCu;
        // 0x1231d0: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1231D4u;
        goto label_1231d4;
    }
    ctx->pc = 0x1231CCu;
    {
        const bool branch_taken_0x1231cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1231D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231CCu;
        // 0x1231d0: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1231cc) {
            ctx->pc = 0x123214u;
            goto label_123214;
        }
    }
    ctx->pc = 0x1231D4u;
label_1231d4:
    // 0x1231d4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1231d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1231d8:
    // 0x1231d8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1231d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1231dc:
    // 0x1231dc: 0x84640288  lh          $a0, 0x288($v1)
    ctx->pc = 0x1231dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 648)));
label_1231e0:
    // 0x1231e0: 0x8c62028c  lw          $v0, 0x28C($v1)
    ctx->pc = 0x1231e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 652)));
label_1231e4:
    // 0x1231e4: 0x40f809  jalr        $v0
label_1231e8:
    if (ctx->pc == 0x1231E8u) {
        ctx->pc = 0x1231E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231E4u;
        // 0x1231e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1231ECu;
        goto label_1231ec;
    }
    ctx->pc = 0x1231E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1231ECu);
        ctx->pc = 0x1231E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231E4u;
        // 0x1231e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1231E4u, 0x1231ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1231ECu;
label_1231ec:
    // 0x1231ec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1231f0:
    if (ctx->pc == 0x1231F0u) {
        ctx->pc = 0x1231F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231ECu;
        // 0x1231f0: 0x8ec2b1c0  lw          $v0, -0x4E40($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294947264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1231F4u;
        goto label_1231f4;
    }
    ctx->pc = 0x1231ECu;
    {
        const bool branch_taken_0x1231ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1231F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231ECu;
        // 0x1231f0: 0x8ec2b1c0  lw          $v0, -0x4E40($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294947264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1231ec) {
            ctx->pc = 0x123214u;
            goto label_123214;
        }
    }
    ctx->pc = 0x1231F4u;
label_1231f4:
    // 0x1231f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1231f8:
    if (ctx->pc == 0x1231F8u) {
        ctx->pc = 0x1231F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231F4u;
        // 0x1231f8: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1231FCu;
        goto label_1231fc;
    }
    ctx->pc = 0x1231F4u;
    {
        const bool branch_taken_0x1231f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1231F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231F4u;
        // 0x1231f8: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1231f4) {
            ctx->pc = 0x123214u;
            goto label_123214;
        }
    }
    ctx->pc = 0x1231FCu;
label_1231fc:
    // 0x1231fc: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_123200:
    if (ctx->pc == 0x123200u) {
        ctx->pc = 0x123200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231FCu;
        // 0x123200: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123204u;
        goto label_123204;
    }
    ctx->pc = 0x1231FCu;
    {
        const bool branch_taken_0x1231fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x123200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231FCu;
        // 0x123200: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1231fc) {
            ctx->pc = 0x123218u;
            goto label_123218;
        }
    }
    ctx->pc = 0x123204u;
label_123204:
    // 0x123204: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x123204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_123208:
    // 0x123208: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x123208u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_12320c:
    // 0x12320c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x12320cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_123210:
    // 0x123210: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x123210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_123214:
    // 0x123214: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x123214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_123218:
    // 0x123218: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x123218u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_12321c:
    // 0x12321c: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x12321cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_123220:
    // 0x123220: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x123220u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_123224:
    // 0x123224: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x123224u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_123228:
    // 0x123228: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x123228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_12322c:
    // 0x12322c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_123230:
    if (ctx->pc == 0x123230u) {
        ctx->pc = 0x123230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12322Cu;
        // 0x123230: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123234u;
        goto label_123234;
    }
    ctx->pc = 0x12322Cu;
    {
        const bool branch_taken_0x12322c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12322Cu;
        // 0x123230: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12322c) {
            ctx->pc = 0x1231C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1231c8;
        }
    }
    ctx->pc = 0x123234u;
label_123234:
    // 0x123234: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x123234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_123238:
    // 0x123238: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x123238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_12323c:
    // 0x12323c: 0xac74b198  sw          $s4, -0x4E68($v1)
    ctx->pc = 0x12323cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947224), GPR_U32(ctx, 20));
label_123240:
    // 0x123240: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123244:
    // 0x123244: 0x14820028  bne         $a0, $v0, . + 4 + (0x28 << 2)
label_123248:
    if (ctx->pc == 0x123248u) {
        ctx->pc = 0x123248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123244u;
        // 0x123248: 0xaef5b19c  sw          $s5, -0x4E64($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4294947228), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12324Cu;
        goto label_12324c;
    }
    ctx->pc = 0x123244u;
    {
        const bool branch_taken_0x123244 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x123248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123244u;
        // 0x123248: 0xaef5b19c  sw          $s5, -0x4E64($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4294947228), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123244) {
            ctx->pc = 0x1232E8u;
            goto label_1232e8;
        }
    }
    ctx->pc = 0x12324Cu;
label_12324c:
    // 0x12324c: 0x2e820002  sltiu       $v0, $s4, 0x2
    ctx->pc = 0x12324cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_123250:
    // 0x123250: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_123254:
    if (ctx->pc == 0x123254u) {
        ctx->pc = 0x123254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123250u;
        // 0x123254: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123258u;
        goto label_123258;
    }
    ctx->pc = 0x123250u;
    {
        const bool branch_taken_0x123250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123250u;
        // 0x123254: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123250) {
            ctx->pc = 0x1232ECu;
            goto label_1232ec;
        }
    }
    ctx->pc = 0x123258u;
label_123258:
    // 0x123258: 0x12a00024  beqz        $s5, . + 4 + (0x24 << 2)
label_12325c:
    if (ctx->pc == 0x12325Cu) {
        ctx->pc = 0x12325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123258u;
        // 0x12325c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123260u;
        goto label_123260;
    }
    ctx->pc = 0x123258u;
    {
        const bool branch_taken_0x123258 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x12325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123258u;
        // 0x12325c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123258) {
            ctx->pc = 0x1232ECu;
            goto label_1232ec;
        }
    }
    ctx->pc = 0x123260u;
label_123260:
    // 0x123260: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x123260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_123264:
    // 0x123264: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x123264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_123268:
    // 0x123268: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x123268u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_12326c:
    // 0x12326c: 0x0  nop
    ctx->pc = 0x12326cu;
    // NOP
label_123270:
    // 0x123270: 0xc047e6c  jal         func_11F9B0
label_123274:
    if (ctx->pc == 0x123274u) {
        ctx->pc = 0x123274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123270u;
        // 0x123274: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123278u;
        goto label_123278;
    }
    ctx->pc = 0x123270u;
    SET_GPR_U32(ctx, 31, 0x123278u);
    ctx->pc = 0x123274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123270u;
    // 0x123274: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x123270u, 0x123278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123278u;
label_123278:
    // 0x123278: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_12327c:
    if (ctx->pc == 0x12327Cu) {
        ctx->pc = 0x12327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123278u;
        // 0x12327c: 0x8ee2b19c  lw          $v0, -0x4E64($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294947228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123280u;
        goto label_123280;
    }
    ctx->pc = 0x123278u;
    {
        const bool branch_taken_0x123278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123278u;
        // 0x12327c: 0x8ee2b19c  lw          $v0, -0x4E64($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294947228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123278) {
            ctx->pc = 0x1232D8u;
            goto label_1232d8;
        }
    }
    ctx->pc = 0x123280u;
label_123280:
    // 0x123280: 0xc047e6c  jal         func_11F9B0
label_123284:
    if (ctx->pc == 0x123284u) {
        ctx->pc = 0x123284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123280u;
        // 0x123284: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123288u;
        goto label_123288;
    }
    ctx->pc = 0x123280u;
    SET_GPR_U32(ctx, 31, 0x123288u);
    ctx->pc = 0x123284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123280u;
    // 0x123284: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x123280u, 0x123288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123288u;
label_123288:
    // 0x123288: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x123288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12328c:
    // 0x12328c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12328cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_123290:
    // 0x123290: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x123290u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_123294:
    // 0x123294: 0x860201b0  lh          $v0, 0x1B0($s0)
    ctx->pc = 0x123294u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 432)));
label_123298:
    // 0x123298: 0x261001b0  addiu       $s0, $s0, 0x1B0
    ctx->pc = 0x123298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
label_12329c:
    // 0x12329c: 0xc047e6c  jal         func_11F9B0
label_1232a0:
    if (ctx->pc == 0x1232A0u) {
        ctx->pc = 0x1232A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12329Cu;
        // 0x1232a0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1232A4u;
        goto label_1232a4;
    }
    ctx->pc = 0x12329Cu;
    SET_GPR_U32(ctx, 31, 0x1232A4u);
    ctx->pc = 0x1232A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12329Cu;
    // 0x1232a0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x12329Cu, 0x1232A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1232A4u;
label_1232a4:
    // 0x1232a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1232a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1232a8:
    // 0x1232a8: 0x84640210  lh          $a0, 0x210($v1)
    ctx->pc = 0x1232a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 528)));
label_1232ac:
    // 0x1232ac: 0x8c650214  lw          $a1, 0x214($v1)
    ctx->pc = 0x1232acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 532)));
label_1232b0:
    // 0x1232b0: 0xa0f809  jalr        $a1
label_1232b4:
    if (ctx->pc == 0x1232B4u) {
        ctx->pc = 0x1232B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1232B0u;
        // 0x1232b4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1232B8u;
        goto label_1232b8;
    }
    ctx->pc = 0x1232B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1232B8u);
        ctx->pc = 0x1232B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1232B0u;
        // 0x1232b4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1232B0u, 0x1232B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1232B8u;
label_1232b8:
    // 0x1232b8: 0xc661b200  lwc1        $f1, -0x4E00($s3)
    ctx->pc = 0x1232b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294947328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1232bc:
    // 0x1232bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1232bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1232c0:
    // 0x1232c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1232c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1232c4:
    // 0x1232c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1232c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1232c8:
    // 0x1232c8: 0x4600a328  max.s       $f12, $f20, $f0
    ctx->pc = 0x1232c8u;
    ctx->f[12] = std::max(ctx->f[20], ctx->f[0]);
label_1232cc:
    // 0x1232cc: 0x40f809  jalr        $v0
label_1232d0:
    if (ctx->pc == 0x1232D0u) {
        ctx->pc = 0x1232D4u;
        goto label_1232d4;
    }
    ctx->pc = 0x1232CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1232D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1232CCu, 0x1232D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1232D4u;
label_1232d4:
    // 0x1232d4: 0x8ee2b19c  lw          $v0, -0x4E64($s7)
    ctx->pc = 0x1232d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294947228)));
label_1232d8:
    // 0x1232d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1232d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1232dc:
    // 0x1232dc: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1232dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1232e0:
    // 0x1232e0: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_1232e4:
    if (ctx->pc == 0x1232E4u) {
        ctx->pc = 0x1232E8u;
        goto label_1232e8;
    }
    ctx->pc = 0x1232E0u;
    {
        const bool branch_taken_0x1232e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1232e0) {
            ctx->pc = 0x123270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123270;
        }
    }
    ctx->pc = 0x1232E8u;
label_1232e8:
    // 0x1232e8: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1232e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1232ec:
    // 0x1232ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1232ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1232f0:
    // 0x1232f0: 0x8ca2b198  lw          $v0, -0x4E68($a1)
    ctx->pc = 0x1232f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294947224)));
label_1232f4:
    // 0x1232f4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1232f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1232f8:
    // 0x1232f8: 0xa7c3b1aa  sh          $v1, -0x4E56($fp)
    ctx->pc = 0x1232f8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 4294947242), (uint16_t)GPR_U32(ctx, 3));
label_1232fc:
    // 0x1232fc: 0x24a4b1a4  addiu       $a0, $a1, -0x4E5C
    ctx->pc = 0x1232fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947236));
label_123300:
    // 0x123300: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x123300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_123304:
    // 0x123304: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x123304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_123308:
    // 0x123308: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_12330c:
    if (ctx->pc == 0x12330Cu) {
        ctx->pc = 0x12330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123308u;
        // 0x12330c: 0xa4a3b1a8  sh          $v1, -0x4E58($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 4294947240), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123310u;
        goto label_123310;
    }
    ctx->pc = 0x123308u;
    {
        const bool branch_taken_0x123308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123308u;
        // 0x12330c: 0xa4a3b1a8  sh          $v1, -0x4E58($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 4294947240), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123308) {
            ctx->pc = 0x12331Cu;
            goto label_12331c;
        }
    }
    ctx->pc = 0x123310u;
label_123310:
    // 0x123310: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x123310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_123314:
    // 0x123314: 0x10000002  b           . + 4 + (0x2 << 2)
label_123318:
    if (ctx->pc == 0x123318u) {
        ctx->pc = 0x123318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123314u;
        // 0x123318: 0x8c43b1a0  lw          $v1, -0x4E60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12331Cu;
        goto label_12331c;
    }
    ctx->pc = 0x123314u;
    {
        const bool branch_taken_0x123314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123314u;
        // 0x123318: 0x8c43b1a0  lw          $v1, -0x4E60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123314) {
            ctx->pc = 0x123320u;
            goto label_123320;
        }
    }
    ctx->pc = 0x12331Cu;
label_12331c:
    // 0x12331c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12331cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_123320:
    // 0x123320: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x123320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_123324:
    // 0x123324: 0x8ca2b198  lw          $v0, -0x4E68($a1)
    ctx->pc = 0x123324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294947224)));
label_123328:
    // 0x123328: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x123328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_12332c:
    // 0x12332c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_123330:
    if (ctx->pc == 0x123330u) {
        ctx->pc = 0x123330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12332Cu;
        // 0x123330: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123334u;
        goto label_123334;
    }
    ctx->pc = 0x12332Cu;
    {
        const bool branch_taken_0x12332c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12332Cu;
        // 0x123330: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12332c) {
            ctx->pc = 0x12338Cu;
            goto label_12338c;
        }
    }
    ctx->pc = 0x123334u;
label_123334:
    // 0x123334: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x123334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_123338:
    // 0x123338: 0x8c43b1a4  lw          $v1, -0x4E5C($v0)
    ctx->pc = 0x123338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947236)));
label_12333c:
    // 0x12333c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_123340:
    if (ctx->pc == 0x123340u) {
        ctx->pc = 0x123340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12333Cu;
        // 0x123340: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123344u;
        goto label_123344;
    }
    ctx->pc = 0x12333Cu;
    {
        const bool branch_taken_0x12333c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x123340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12333Cu;
        // 0x123340: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12333c) {
            ctx->pc = 0x12335Cu;
            goto label_12335c;
        }
    }
    ctx->pc = 0x123344u;
label_123344:
    // 0x123344: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x123344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_123348:
    // 0x123348: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x123348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12334c:
    // 0x12334c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x12334cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_123350:
    // 0x123350: 0xa7c3b1aa  sh          $v1, -0x4E56($fp)
    ctx->pc = 0x123350u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 4294947242), (uint16_t)GPR_U32(ctx, 3));
label_123354:
    // 0x123354: 0x1000000d  b           . + 4 + (0xD << 2)
label_123358:
    if (ctx->pc == 0x123358u) {
        ctx->pc = 0x123358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123354u;
        // 0x123358: 0xa482b1a8  sh          $v0, -0x4E58($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4294947240), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12335Cu;
        goto label_12335c;
    }
    ctx->pc = 0x123354u;
    {
        const bool branch_taken_0x123354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123354u;
        // 0x123358: 0xa482b1a8  sh          $v0, -0x4E58($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4294947240), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123354) {
            ctx->pc = 0x12338Cu;
            goto label_12338c;
        }
    }
    ctx->pc = 0x12335Cu;
label_12335c:
    // 0x12335c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_123360:
    if (ctx->pc == 0x123360u) {
        ctx->pc = 0x123360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12335Cu;
        // 0x123360: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123364u;
        goto label_123364;
    }
    ctx->pc = 0x12335Cu;
    {
        const bool branch_taken_0x12335c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x123360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12335Cu;
        // 0x123360: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12335c) {
            ctx->pc = 0x123378u;
            goto label_123378;
        }
    }
    ctx->pc = 0x123364u;
label_123364:
    // 0x123364: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x123364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_123368:
    // 0x123368: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x123368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_12336c:
    // 0x12336c: 0xa4a3b1a8  sh          $v1, -0x4E58($a1)
    ctx->pc = 0x12336cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294947240), (uint16_t)GPR_U32(ctx, 3));
label_123370:
    // 0x123370: 0x10000006  b           . + 4 + (0x6 << 2)
label_123374:
    if (ctx->pc == 0x123374u) {
        ctx->pc = 0x123374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123370u;
        // 0x123374: 0xa7c2b1aa  sh          $v0, -0x4E56($fp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 30), 4294947242), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123378u;
        goto label_123378;
    }
    ctx->pc = 0x123370u;
    {
        const bool branch_taken_0x123370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123370u;
        // 0x123374: 0xa7c2b1aa  sh          $v0, -0x4E56($fp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 30), 4294947242), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123370) {
            ctx->pc = 0x12338Cu;
            goto label_12338c;
        }
    }
    ctx->pc = 0x123378u;
label_123378:
    // 0x123378: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_12337c:
    if (ctx->pc == 0x12337Cu) {
        ctx->pc = 0x12337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123378u;
        // 0x12337c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123380u;
        goto label_123380;
    }
    ctx->pc = 0x123378u;
    {
        const bool branch_taken_0x123378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123378u;
        // 0x12337c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123378) {
            ctx->pc = 0x123390u;
            goto label_123390;
        }
    }
    ctx->pc = 0x123380u;
label_123380:
    // 0x123380: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x123380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_123384:
    // 0x123384: 0xa7c3b1aa  sh          $v1, -0x4E56($fp)
    ctx->pc = 0x123384u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 4294947242), (uint16_t)GPR_U32(ctx, 3));
label_123388:
    // 0x123388: 0xa443b1a8  sh          $v1, -0x4E58($v0)
    ctx->pc = 0x123388u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294947240), (uint16_t)GPR_U32(ctx, 3));
label_12338c:
    // 0x12338c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x12338cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_123390:
    // 0x123390: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x123390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_123394:
    // 0x123394: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x123394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_123398:
    // 0x123398: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x123398u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_12339c:
    // 0x12339c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x12339cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1233a0:
    // 0x1233a0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1233a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1233a4:
    // 0x1233a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1233a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1233a8:
    // 0x1233a8: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x1233a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1233ac:
    // 0x1233ac: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x1233acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1233b0:
    // 0x1233b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1233b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1233b4:
    // 0x1233b4: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1233b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1233b8:
    // 0x1233b8: 0x3e00008  jr          $ra
label_1233bc:
    if (ctx->pc == 0x1233BCu) {
        ctx->pc = 0x1233BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1233B8u;
        // 0x1233bc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1233C0u;
        goto label_fallthrough_0x1233b8;
    }
    ctx->pc = 0x1233B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1233BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1233B8u;
        // 0x1233bc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1233B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1233b8:
    ctx->pc = 0x1233C0u;
}
