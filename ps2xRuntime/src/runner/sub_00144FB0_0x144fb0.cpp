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

// Function: sub_00144FB0
// Address: 0x144fb0 - 0x1454a8
void sub_00144FB0_0x144fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144FB0_0x144fb0");
#endif

    switch (ctx->pc) {
        case 0x144fb0u: goto label_144fb0;
        case 0x144fb4u: goto label_144fb4;
        case 0x144fb8u: goto label_144fb8;
        case 0x144fbcu: goto label_144fbc;
        case 0x144fc0u: goto label_144fc0;
        case 0x144fc4u: goto label_144fc4;
        case 0x144fc8u: goto label_144fc8;
        case 0x144fccu: goto label_144fcc;
        case 0x144fd0u: goto label_144fd0;
        case 0x144fd4u: goto label_144fd4;
        case 0x144fd8u: goto label_144fd8;
        case 0x144fdcu: goto label_144fdc;
        case 0x144fe0u: goto label_144fe0;
        case 0x144fe4u: goto label_144fe4;
        case 0x144fe8u: goto label_144fe8;
        case 0x144fecu: goto label_144fec;
        case 0x144ff0u: goto label_144ff0;
        case 0x144ff4u: goto label_144ff4;
        case 0x144ff8u: goto label_144ff8;
        case 0x144ffcu: goto label_144ffc;
        case 0x145000u: goto label_145000;
        case 0x145004u: goto label_145004;
        case 0x145008u: goto label_145008;
        case 0x14500cu: goto label_14500c;
        case 0x145010u: goto label_145010;
        case 0x145014u: goto label_145014;
        case 0x145018u: goto label_145018;
        case 0x14501cu: goto label_14501c;
        case 0x145020u: goto label_145020;
        case 0x145024u: goto label_145024;
        case 0x145028u: goto label_145028;
        case 0x14502cu: goto label_14502c;
        case 0x145030u: goto label_145030;
        case 0x145034u: goto label_145034;
        case 0x145038u: goto label_145038;
        case 0x14503cu: goto label_14503c;
        case 0x145040u: goto label_145040;
        case 0x145044u: goto label_145044;
        case 0x145048u: goto label_145048;
        case 0x14504cu: goto label_14504c;
        case 0x145050u: goto label_145050;
        case 0x145054u: goto label_145054;
        case 0x145058u: goto label_145058;
        case 0x14505cu: goto label_14505c;
        case 0x145060u: goto label_145060;
        case 0x145064u: goto label_145064;
        case 0x145068u: goto label_145068;
        case 0x14506cu: goto label_14506c;
        case 0x145070u: goto label_145070;
        case 0x145074u: goto label_145074;
        case 0x145078u: goto label_145078;
        case 0x14507cu: goto label_14507c;
        case 0x145080u: goto label_145080;
        case 0x145084u: goto label_145084;
        case 0x145088u: goto label_145088;
        case 0x14508cu: goto label_14508c;
        case 0x145090u: goto label_145090;
        case 0x145094u: goto label_145094;
        case 0x145098u: goto label_145098;
        case 0x14509cu: goto label_14509c;
        case 0x1450a0u: goto label_1450a0;
        case 0x1450a4u: goto label_1450a4;
        case 0x1450a8u: goto label_1450a8;
        case 0x1450acu: goto label_1450ac;
        case 0x1450b0u: goto label_1450b0;
        case 0x1450b4u: goto label_1450b4;
        case 0x1450b8u: goto label_1450b8;
        case 0x1450bcu: goto label_1450bc;
        case 0x1450c0u: goto label_1450c0;
        case 0x1450c4u: goto label_1450c4;
        case 0x1450c8u: goto label_1450c8;
        case 0x1450ccu: goto label_1450cc;
        case 0x1450d0u: goto label_1450d0;
        case 0x1450d4u: goto label_1450d4;
        case 0x1450d8u: goto label_1450d8;
        case 0x1450dcu: goto label_1450dc;
        case 0x1450e0u: goto label_1450e0;
        case 0x1450e4u: goto label_1450e4;
        case 0x1450e8u: goto label_1450e8;
        case 0x1450ecu: goto label_1450ec;
        case 0x1450f0u: goto label_1450f0;
        case 0x1450f4u: goto label_1450f4;
        case 0x1450f8u: goto label_1450f8;
        case 0x1450fcu: goto label_1450fc;
        case 0x145100u: goto label_145100;
        case 0x145104u: goto label_145104;
        case 0x145108u: goto label_145108;
        case 0x14510cu: goto label_14510c;
        case 0x145110u: goto label_145110;
        case 0x145114u: goto label_145114;
        case 0x145118u: goto label_145118;
        case 0x14511cu: goto label_14511c;
        case 0x145120u: goto label_145120;
        case 0x145124u: goto label_145124;
        case 0x145128u: goto label_145128;
        case 0x14512cu: goto label_14512c;
        case 0x145130u: goto label_145130;
        case 0x145134u: goto label_145134;
        case 0x145138u: goto label_145138;
        case 0x14513cu: goto label_14513c;
        case 0x145140u: goto label_145140;
        case 0x145144u: goto label_145144;
        case 0x145148u: goto label_145148;
        case 0x14514cu: goto label_14514c;
        case 0x145150u: goto label_145150;
        case 0x145154u: goto label_145154;
        case 0x145158u: goto label_145158;
        case 0x14515cu: goto label_14515c;
        case 0x145160u: goto label_145160;
        case 0x145164u: goto label_145164;
        case 0x145168u: goto label_145168;
        case 0x14516cu: goto label_14516c;
        case 0x145170u: goto label_145170;
        case 0x145174u: goto label_145174;
        case 0x145178u: goto label_145178;
        case 0x14517cu: goto label_14517c;
        case 0x145180u: goto label_145180;
        case 0x145184u: goto label_145184;
        case 0x145188u: goto label_145188;
        case 0x14518cu: goto label_14518c;
        case 0x145190u: goto label_145190;
        case 0x145194u: goto label_145194;
        case 0x145198u: goto label_145198;
        case 0x14519cu: goto label_14519c;
        case 0x1451a0u: goto label_1451a0;
        case 0x1451a4u: goto label_1451a4;
        case 0x1451a8u: goto label_1451a8;
        case 0x1451acu: goto label_1451ac;
        case 0x1451b0u: goto label_1451b0;
        case 0x1451b4u: goto label_1451b4;
        case 0x1451b8u: goto label_1451b8;
        case 0x1451bcu: goto label_1451bc;
        case 0x1451c0u: goto label_1451c0;
        case 0x1451c4u: goto label_1451c4;
        case 0x1451c8u: goto label_1451c8;
        case 0x1451ccu: goto label_1451cc;
        case 0x1451d0u: goto label_1451d0;
        case 0x1451d4u: goto label_1451d4;
        case 0x1451d8u: goto label_1451d8;
        case 0x1451dcu: goto label_1451dc;
        case 0x1451e0u: goto label_1451e0;
        case 0x1451e4u: goto label_1451e4;
        case 0x1451e8u: goto label_1451e8;
        case 0x1451ecu: goto label_1451ec;
        case 0x1451f0u: goto label_1451f0;
        case 0x1451f4u: goto label_1451f4;
        case 0x1451f8u: goto label_1451f8;
        case 0x1451fcu: goto label_1451fc;
        case 0x145200u: goto label_145200;
        case 0x145204u: goto label_145204;
        case 0x145208u: goto label_145208;
        case 0x14520cu: goto label_14520c;
        case 0x145210u: goto label_145210;
        case 0x145214u: goto label_145214;
        case 0x145218u: goto label_145218;
        case 0x14521cu: goto label_14521c;
        case 0x145220u: goto label_145220;
        case 0x145224u: goto label_145224;
        case 0x145228u: goto label_145228;
        case 0x14522cu: goto label_14522c;
        case 0x145230u: goto label_145230;
        case 0x145234u: goto label_145234;
        case 0x145238u: goto label_145238;
        case 0x14523cu: goto label_14523c;
        case 0x145240u: goto label_145240;
        case 0x145244u: goto label_145244;
        case 0x145248u: goto label_145248;
        case 0x14524cu: goto label_14524c;
        case 0x145250u: goto label_145250;
        case 0x145254u: goto label_145254;
        case 0x145258u: goto label_145258;
        case 0x14525cu: goto label_14525c;
        case 0x145260u: goto label_145260;
        case 0x145264u: goto label_145264;
        case 0x145268u: goto label_145268;
        case 0x14526cu: goto label_14526c;
        case 0x145270u: goto label_145270;
        case 0x145274u: goto label_145274;
        case 0x145278u: goto label_145278;
        case 0x14527cu: goto label_14527c;
        case 0x145280u: goto label_145280;
        case 0x145284u: goto label_145284;
        case 0x145288u: goto label_145288;
        case 0x14528cu: goto label_14528c;
        case 0x145290u: goto label_145290;
        case 0x145294u: goto label_145294;
        case 0x145298u: goto label_145298;
        case 0x14529cu: goto label_14529c;
        case 0x1452a0u: goto label_1452a0;
        case 0x1452a4u: goto label_1452a4;
        case 0x1452a8u: goto label_1452a8;
        case 0x1452acu: goto label_1452ac;
        case 0x1452b0u: goto label_1452b0;
        case 0x1452b4u: goto label_1452b4;
        case 0x1452b8u: goto label_1452b8;
        case 0x1452bcu: goto label_1452bc;
        case 0x1452c0u: goto label_1452c0;
        case 0x1452c4u: goto label_1452c4;
        case 0x1452c8u: goto label_1452c8;
        case 0x1452ccu: goto label_1452cc;
        case 0x1452d0u: goto label_1452d0;
        case 0x1452d4u: goto label_1452d4;
        case 0x1452d8u: goto label_1452d8;
        case 0x1452dcu: goto label_1452dc;
        case 0x1452e0u: goto label_1452e0;
        case 0x1452e4u: goto label_1452e4;
        case 0x1452e8u: goto label_1452e8;
        case 0x1452ecu: goto label_1452ec;
        case 0x1452f0u: goto label_1452f0;
        case 0x1452f4u: goto label_1452f4;
        case 0x1452f8u: goto label_1452f8;
        case 0x1452fcu: goto label_1452fc;
        case 0x145300u: goto label_145300;
        case 0x145304u: goto label_145304;
        case 0x145308u: goto label_145308;
        case 0x14530cu: goto label_14530c;
        case 0x145310u: goto label_145310;
        case 0x145314u: goto label_145314;
        case 0x145318u: goto label_145318;
        case 0x14531cu: goto label_14531c;
        case 0x145320u: goto label_145320;
        case 0x145324u: goto label_145324;
        case 0x145328u: goto label_145328;
        case 0x14532cu: goto label_14532c;
        case 0x145330u: goto label_145330;
        case 0x145334u: goto label_145334;
        case 0x145338u: goto label_145338;
        case 0x14533cu: goto label_14533c;
        case 0x145340u: goto label_145340;
        case 0x145344u: goto label_145344;
        case 0x145348u: goto label_145348;
        case 0x14534cu: goto label_14534c;
        case 0x145350u: goto label_145350;
        case 0x145354u: goto label_145354;
        case 0x145358u: goto label_145358;
        case 0x14535cu: goto label_14535c;
        case 0x145360u: goto label_145360;
        case 0x145364u: goto label_145364;
        case 0x145368u: goto label_145368;
        case 0x14536cu: goto label_14536c;
        case 0x145370u: goto label_145370;
        case 0x145374u: goto label_145374;
        case 0x145378u: goto label_145378;
        case 0x14537cu: goto label_14537c;
        case 0x145380u: goto label_145380;
        case 0x145384u: goto label_145384;
        case 0x145388u: goto label_145388;
        case 0x14538cu: goto label_14538c;
        case 0x145390u: goto label_145390;
        case 0x145394u: goto label_145394;
        case 0x145398u: goto label_145398;
        case 0x14539cu: goto label_14539c;
        case 0x1453a0u: goto label_1453a0;
        case 0x1453a4u: goto label_1453a4;
        case 0x1453a8u: goto label_1453a8;
        case 0x1453acu: goto label_1453ac;
        case 0x1453b0u: goto label_1453b0;
        case 0x1453b4u: goto label_1453b4;
        case 0x1453b8u: goto label_1453b8;
        case 0x1453bcu: goto label_1453bc;
        case 0x1453c0u: goto label_1453c0;
        case 0x1453c4u: goto label_1453c4;
        case 0x1453c8u: goto label_1453c8;
        case 0x1453ccu: goto label_1453cc;
        case 0x1453d0u: goto label_1453d0;
        case 0x1453d4u: goto label_1453d4;
        case 0x1453d8u: goto label_1453d8;
        case 0x1453dcu: goto label_1453dc;
        case 0x1453e0u: goto label_1453e0;
        case 0x1453e4u: goto label_1453e4;
        case 0x1453e8u: goto label_1453e8;
        case 0x1453ecu: goto label_1453ec;
        case 0x1453f0u: goto label_1453f0;
        case 0x1453f4u: goto label_1453f4;
        case 0x1453f8u: goto label_1453f8;
        case 0x1453fcu: goto label_1453fc;
        case 0x145400u: goto label_145400;
        case 0x145404u: goto label_145404;
        case 0x145408u: goto label_145408;
        case 0x14540cu: goto label_14540c;
        case 0x145410u: goto label_145410;
        case 0x145414u: goto label_145414;
        case 0x145418u: goto label_145418;
        case 0x14541cu: goto label_14541c;
        case 0x145420u: goto label_145420;
        case 0x145424u: goto label_145424;
        case 0x145428u: goto label_145428;
        case 0x14542cu: goto label_14542c;
        case 0x145430u: goto label_145430;
        case 0x145434u: goto label_145434;
        case 0x145438u: goto label_145438;
        case 0x14543cu: goto label_14543c;
        case 0x145440u: goto label_145440;
        case 0x145444u: goto label_145444;
        case 0x145448u: goto label_145448;
        case 0x14544cu: goto label_14544c;
        case 0x145450u: goto label_145450;
        case 0x145454u: goto label_145454;
        case 0x145458u: goto label_145458;
        case 0x14545cu: goto label_14545c;
        case 0x145460u: goto label_145460;
        case 0x145464u: goto label_145464;
        case 0x145468u: goto label_145468;
        case 0x14546cu: goto label_14546c;
        case 0x145470u: goto label_145470;
        case 0x145474u: goto label_145474;
        case 0x145478u: goto label_145478;
        case 0x14547cu: goto label_14547c;
        case 0x145480u: goto label_145480;
        case 0x145484u: goto label_145484;
        case 0x145488u: goto label_145488;
        case 0x14548cu: goto label_14548c;
        case 0x145490u: goto label_145490;
        case 0x145494u: goto label_145494;
        case 0x145498u: goto label_145498;
        case 0x14549cu: goto label_14549c;
        case 0x1454a0u: goto label_1454a0;
        case 0x1454a4u: goto label_1454a4;
        default: break;
    }

    ctx->pc = 0x144fb0u;

label_144fb0:
    // 0x144fb0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x144fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_144fb4:
    // 0x144fb4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x144fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_144fb8:
    // 0x144fb8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x144fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_144fbc:
    // 0x144fbc: 0x2463d810  addiu       $v1, $v1, -0x27F0
    ctx->pc = 0x144fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957072));
label_144fc0:
    // 0x144fc0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x144fc0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_144fc4:
    // 0x144fc4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x144fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_144fc8:
    // 0x144fc8: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x144fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_144fcc:
    // 0x144fcc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x144fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_144fd0:
    // 0x144fd0: 0x2c42018  mult        $a0, $s6, $a0
    ctx->pc = 0x144fd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_144fd4:
    // 0x144fd4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x144fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_144fd8:
    // 0x144fd8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x144fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_144fdc:
    // 0x144fdc: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x144fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_144fe0:
    // 0x144fe0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x144fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_144fe4:
    // 0x144fe4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x144fe4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_144fe8:
    // 0x144fe8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x144fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_144fec:
    // 0x144fec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x144fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_144ff0:
    // 0x144ff0: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x144ff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_144ff4:
    // 0x144ff4: 0x8e06b8b8  lw          $a2, -0x4748($s0)
    ctx->pc = 0x144ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_144ff8:
    // 0x144ff8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x144ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_144ffc:
    // 0x144ffc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x144ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_145000:
    // 0x145000: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x145000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_145004:
    // 0x145004: 0x10c00020  beqz        $a2, . + 4 + (0x20 << 2)
label_145008:
    if (ctx->pc == 0x145008u) {
        ctx->pc = 0x145008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145004u;
        // 0x145008: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14500Cu;
        goto label_14500c;
    }
    ctx->pc = 0x145004u;
    {
        const bool branch_taken_0x145004 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x145008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145004u;
        // 0x145008: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145004) {
            ctx->pc = 0x145088u;
            goto label_145088;
        }
    }
    ctx->pc = 0x14500Cu;
label_14500c:
    // 0x14500c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x14500cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_145010:
    // 0x145010: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x145010u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_145014:
    // 0x145014: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x145014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_145018:
    // 0x145018: 0x40f809  jalr        $v0
label_14501c:
    if (ctx->pc == 0x14501Cu) {
        ctx->pc = 0x14501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145018u;
        // 0x14501c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145020u;
        goto label_145020;
    }
    ctx->pc = 0x145018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145020u);
        ctx->pc = 0x14501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145018u;
        // 0x14501c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145018u, 0x145020u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145020u;
label_145020:
    // 0x145020: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x145020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_145024:
    // 0x145024: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x145024u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_145028:
    // 0x145028: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x145028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_14502c:
    // 0x14502c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_145030:
    if (ctx->pc == 0x145030u) {
        ctx->pc = 0x145030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14502Cu;
        // 0x145030: 0x8e24002c  lw          $a0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145034u;
        goto label_145034;
    }
    ctx->pc = 0x14502Cu;
    {
        const bool branch_taken_0x14502c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14502c) {
            ctx->pc = 0x145030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14502Cu;
            // 0x145030: 0x8e24002c  lw          $a0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145060u;
            goto label_145060;
        }
    }
    ctx->pc = 0x145034u;
label_145034:
    // 0x145034: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x145034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_145038:
    // 0x145038: 0xc05262a  jal         func_1498A8
label_14503c:
    if (ctx->pc == 0x14503Cu) {
        ctx->pc = 0x14503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145038u;
        // 0x14503c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145040u;
        goto label_145040;
    }
    ctx->pc = 0x145038u;
    SET_GPR_U32(ctx, 31, 0x145040u);
    ctx->pc = 0x14503Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145038u;
    // 0x14503c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1498A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1498A8u, 0x145038u, 0x145040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145040u;
label_145040:
    // 0x145040: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x145040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_145044:
    // 0x145044: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x145044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_145048:
    // 0x145048: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x145048u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_14504c:
    // 0x14504c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x14504cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_145050:
    // 0x145050: 0x40f809  jalr        $v0
label_145054:
    if (ctx->pc == 0x145054u) {
        ctx->pc = 0x145054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145050u;
        // 0x145054: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145058u;
        goto label_145058;
    }
    ctx->pc = 0x145050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145058u);
        ctx->pc = 0x145054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145050u;
        // 0x145054: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145050u, 0x145058u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145058u;
label_145058:
    // 0x145058: 0x1000000e  b           . + 4 + (0xE << 2)
label_14505c:
    if (ctx->pc == 0x14505Cu) {
        ctx->pc = 0x14505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145058u;
        // 0x14505c: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145060u;
        goto label_145060;
    }
    ctx->pc = 0x145058u;
    {
        const bool branch_taken_0x145058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145058u;
        // 0x14505c: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145058) {
            ctx->pc = 0x145094u;
            goto label_145094;
        }
    }
    ctx->pc = 0x145060u;
label_145060:
    // 0x145060: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x145060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_145064:
    // 0x145064: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x145064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_145068:
    // 0x145068: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x145068u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_14506c:
    // 0x14506c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x14506cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_145070:
    // 0x145070: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x145070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_145074:
    // 0x145074: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x145074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_145078:
    // 0x145078: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x145078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_14507c:
    // 0x14507c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x14507cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_145080:
    // 0x145080: 0x10000004  b           . + 4 + (0x4 << 2)
label_145084:
    if (ctx->pc == 0x145084u) {
        ctx->pc = 0x145084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145080u;
        // 0x145084: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145088u;
        goto label_145088;
    }
    ctx->pc = 0x145080u;
    {
        const bool branch_taken_0x145080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145080u;
        // 0x145084: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145080) {
            ctx->pc = 0x145094u;
            goto label_145094;
        }
    }
    ctx->pc = 0x145088u;
label_145088:
    // 0x145088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x145088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14508c:
    // 0x14508c: 0xc05262a  jal         func_1498A8
label_145090:
    if (ctx->pc == 0x145090u) {
        ctx->pc = 0x145090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14508Cu;
        // 0x145090: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145094u;
        goto label_145094;
    }
    ctx->pc = 0x14508Cu;
    SET_GPR_U32(ctx, 31, 0x145094u);
    ctx->pc = 0x145090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14508Cu;
    // 0x145090: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1498A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1498A8u, 0x14508Cu, 0x145094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145094u;
label_145094:
    // 0x145094: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x145094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_145098:
    // 0x145098: 0x104000f9  beqz        $v0, . + 4 + (0xF9 << 2)
label_14509c:
    if (ctx->pc == 0x14509Cu) {
        ctx->pc = 0x14509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145098u;
        // 0x14509c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1450A0u;
        goto label_1450a0;
    }
    ctx->pc = 0x145098u;
    {
        const bool branch_taken_0x145098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145098u;
        // 0x14509c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145098) {
            ctx->pc = 0x145480u;
            goto label_145480;
        }
    }
    ctx->pc = 0x1450A0u;
label_1450a0:
    // 0x1450a0: 0x12600063  beqz        $s3, . + 4 + (0x63 << 2)
label_1450a4:
    if (ctx->pc == 0x1450A4u) {
        ctx->pc = 0x1450A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1450A0u;
        // 0x1450a4: 0x700014a9  por         $v0, $zero, $zero (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1450A8u;
        goto label_1450a8;
    }
    ctx->pc = 0x1450A0u;
    {
        const bool branch_taken_0x1450a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1450A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1450A0u;
        // 0x1450a4: 0x700014a9  por         $v0, $zero, $zero (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1450a0) {
            ctx->pc = 0x145230u;
            goto label_145230;
        }
    }
    ctx->pc = 0x1450A8u;
label_1450a8:
    // 0x1450a8: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1450a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1450ac:
    // 0x1450ac: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1450acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1450b0:
    // 0x1450b0: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1450b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1450b4:
    // 0x1450b4: 0x86320042  lh          $s2, 0x42($s1)
    ctx->pc = 0x1450b4u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
label_1450b8:
    // 0x1450b8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1450b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1450bc:
    // 0x1450bc: 0x6400018  bltz        $s2, . + 4 + (0x18 << 2)
label_1450c0:
    if (ctx->pc == 0x1450C0u) {
        ctx->pc = 0x1450C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1450BCu;
        // 0x1450c0: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1450C4u;
        goto label_1450c4;
    }
    ctx->pc = 0x1450BCu;
    {
        const bool branch_taken_0x1450bc = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x1450C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1450BCu;
        // 0x1450c0: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1450bc) {
            ctx->pc = 0x145120u;
            goto label_145120;
        }
    }
    ctx->pc = 0x1450C4u;
label_1450c4:
    // 0x1450c4: 0xc047e6c  jal         func_11F9B0
label_1450c8:
    if (ctx->pc == 0x1450C8u) {
        ctx->pc = 0x1450C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1450C4u;
        // 0x1450c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1450CCu;
        goto label_1450cc;
    }
    ctx->pc = 0x1450C4u;
    SET_GPR_U32(ctx, 31, 0x1450CCu);
    ctx->pc = 0x1450C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1450C4u;
    // 0x1450c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1450C4u, 0x1450CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1450CCu;
label_1450cc:
    // 0x1450cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1450ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1450d0:
    // 0x1450d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1450d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1450d4:
    // 0x1450d4: 0xc047e78  jal         func_11F9E0
label_1450d8:
    if (ctx->pc == 0x1450D8u) {
        ctx->pc = 0x1450D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1450D4u;
        // 0x1450d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1450DCu;
        goto label_1450dc;
    }
    ctx->pc = 0x1450D4u;
    SET_GPR_U32(ctx, 31, 0x1450DCu);
    ctx->pc = 0x1450D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1450D4u;
    // 0x1450d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x1450D4u, 0x1450DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1450DCu;
label_1450dc:
    // 0x1450dc: 0x16020011  bne         $s0, $v0, . + 4 + (0x11 << 2)
label_1450e0:
    if (ctx->pc == 0x1450E0u) {
        ctx->pc = 0x1450E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1450DCu;
        // 0x1450e0: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1450E4u;
        goto label_1450e4;
    }
    ctx->pc = 0x1450DCu;
    {
        const bool branch_taken_0x1450dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1450E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1450DCu;
        // 0x1450e0: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1450dc) {
            ctx->pc = 0x145124u;
            goto label_145124;
        }
    }
    ctx->pc = 0x1450E4u;
label_1450e4:
    // 0x1450e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1450e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1450e8:
    // 0x1450e8: 0xc047e78  jal         func_11F9E0
label_1450ec:
    if (ctx->pc == 0x1450ECu) {
        ctx->pc = 0x1450ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1450E8u;
        // 0x1450ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1450F0u;
        goto label_1450f0;
    }
    ctx->pc = 0x1450E8u;
    SET_GPR_U32(ctx, 31, 0x1450F0u);
    ctx->pc = 0x1450ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1450E8u;
    // 0x1450ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x1450E8u, 0x1450F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1450F0u;
label_1450f0:
    // 0x1450f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1450f4:
    if (ctx->pc == 0x1450F4u) {
        ctx->pc = 0x1450F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1450F0u;
        // 0x1450f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1450F8u;
        goto label_1450f8;
    }
    ctx->pc = 0x1450F0u;
    {
        const bool branch_taken_0x1450f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1450F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1450F0u;
        // 0x1450f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1450f0) {
            ctx->pc = 0x145120u;
            goto label_145120;
        }
    }
    ctx->pc = 0x1450F8u;
label_1450f8:
    // 0x1450f8: 0xc047e78  jal         func_11F9E0
label_1450fc:
    if (ctx->pc == 0x1450FCu) {
        ctx->pc = 0x1450FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1450F8u;
        // 0x1450fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145100u;
        goto label_145100;
    }
    ctx->pc = 0x1450F8u;
    SET_GPR_U32(ctx, 31, 0x145100u);
    ctx->pc = 0x1450FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1450F8u;
    // 0x1450fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x1450F8u, 0x145100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145100u;
label_145100:
    // 0x145100: 0x90430455  lbu         $v1, 0x455($v0)
    ctx->pc = 0x145100u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1109)));
label_145104:
    // 0x145104: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_145108:
    if (ctx->pc == 0x145108u) {
        ctx->pc = 0x145108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145104u;
        // 0x145108: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14510Cu;
        goto label_14510c;
    }
    ctx->pc = 0x145104u;
    {
        const bool branch_taken_0x145104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x145108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145104u;
        // 0x145108: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x145104) {
            ctx->pc = 0x145120u;
            goto label_145120;
        }
    }
    ctx->pc = 0x14510Cu;
label_14510c:
    // 0x14510c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x14510cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_145110:
    // 0x145110: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x145110u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_145114:
    // 0x145114: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x145114u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_145118:
    // 0x145118: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x145118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_14511c:
    // 0x14511c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x14511cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_145120:
    // 0x145120: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x145120u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_145124:
    // 0x145124: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x145124u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_145128:
    // 0x145128: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x145128u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_14512c:
    // 0x14512c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x14512cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_145130:
    // 0x145130: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x145130u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_145134:
    // 0x145134: 0x4a0003bf  vwaitq
    ctx->pc = 0x145134u;
    // VWAITQ (Q already resolved in this runtime)
label_145138:
    // 0x145138: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x145138u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_14513c:
    // 0x14513c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x14513cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_145140:
    // 0x145140: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x145140u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_145144:
    // 0x145144: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x145144u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_145148:
    // 0x145148: 0x0  nop
    ctx->pc = 0x145148u;
    // NOP
label_14514c:
    // 0x14514c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x14514cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_145150:
    // 0x145150: 0x0  nop
    ctx->pc = 0x145150u;
    // NOP
label_145154:
    // 0x145154: 0x45000028  bc1f        . + 4 + (0x28 << 2)
label_145158:
    if (ctx->pc == 0x145158u) {
        ctx->pc = 0x145158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145154u;
        // 0x145158: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14515Cu;
        goto label_14515c;
    }
    ctx->pc = 0x145154u;
    {
        const bool branch_taken_0x145154 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x145158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145154u;
        // 0x145158: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145154) {
            ctx->pc = 0x1451F8u;
            goto label_1451f8;
        }
    }
    ctx->pc = 0x14515Cu;
label_14515c:
    // 0x14515c: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x14515cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_145160:
    // 0x145160: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x145160u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_145164:
    // 0x145164: 0xda620010  lqc2        $vf2, 0x10($s3)
    ctx->pc = 0x145164u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_145168:
    // 0x145168: 0xda630020  lqc2        $vf3, 0x20($s3)
    ctx->pc = 0x145168u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
label_14516c:
    // 0x14516c: 0xda640030  lqc2        $vf4, 0x30($s3)
    ctx->pc = 0x14516cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
label_145170:
    // 0x145170: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x145170u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_145174:
    // 0x145174: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x145174u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_145178:
    // 0x145178: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x145178u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_14517c:
    // 0x14517c: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x14517cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_145180:
    // 0x145180: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x145180u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_145184:
    // 0x145184: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x145184u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_145188:
    // 0x145188: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x145188u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_14518c:
    // 0x14518c: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x14518cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_145190:
    // 0x145190: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x145190u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_145194:
    // 0x145194: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x145194u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_145198:
    // 0x145198: 0x4a0003bf  vwaitq
    ctx->pc = 0x145198u;
    // VWAITQ (Q already resolved in this runtime)
label_14519c:
    // 0x14519c: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x14519cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1451a0:
    // 0x1451a0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x1451a0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_1451a4:
    // 0x1451a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1451a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1451a8:
    // 0x1451a8: 0x0  nop
    ctx->pc = 0x1451a8u;
    // NOP
label_1451ac:
    // 0x1451ac: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x1451acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1451b0:
    // 0x1451b0: 0x0  nop
    ctx->pc = 0x1451b0u;
    // NOP
label_1451b4:
    // 0x1451b4: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
label_1451b8:
    if (ctx->pc == 0x1451B8u) {
        ctx->pc = 0x1451B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1451B4u;
        // 0x1451b8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1451BCu;
        goto label_1451bc;
    }
    ctx->pc = 0x1451B4u;
    {
        const bool branch_taken_0x1451b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1451b4) {
            ctx->pc = 0x1451B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1451B4u;
            // 0x1451b8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1451E8u;
            goto label_1451e8;
        }
    }
    ctx->pc = 0x1451BCu;
label_1451bc:
    // 0x1451bc: 0x0  nop
    ctx->pc = 0x1451bcu;
    // NOP
label_1451c0:
    // 0x1451c0: 0x0  nop
    ctx->pc = 0x1451c0u;
    // NOP
label_1451c4:
    // 0x1451c4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1451c4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1451c8:
    // 0x1451c8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1451c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1451cc:
    // 0x1451cc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1451ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1451d0:
    // 0x1451d0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1451d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1451d4:
    // 0x1451d4: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1451d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1451d8:
    // 0x1451d8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1451d8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_1451dc:
    // 0x1451dc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1451dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1451e0:
    // 0x1451e0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1451e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1451e4:
    // 0x1451e4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1451e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1451e8:
    // 0x1451e8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1451e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1451ec:
    // 0x1451ec: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1451ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1451f0:
    // 0x1451f0: 0x1000000f  b           . + 4 + (0xF << 2)
label_1451f4:
    if (ctx->pc == 0x1451F4u) {
        ctx->pc = 0x1451F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1451F0u;
        // 0x1451f4: 0xe6210004  swc1        $f1, 0x4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1451F8u;
        goto label_1451f8;
    }
    ctx->pc = 0x1451F0u;
    {
        const bool branch_taken_0x1451f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1451F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1451F0u;
        // 0x1451f4: 0xe6210004  swc1        $f1, 0x4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1451f0) {
            ctx->pc = 0x145230u;
            goto label_145230;
        }
    }
    ctx->pc = 0x1451F8u;
label_1451f8:
    // 0x1451f8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1451f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1451fc:
    // 0x1451fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1451fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_145200:
    // 0x145200: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x145200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_145204:
    // 0x145204: 0x86240042  lh          $a0, 0x42($s1)
    ctx->pc = 0x145204u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
label_145208:
    // 0x145208: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x145208u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_14520c:
    // 0x14520c: 0xc047e78  jal         func_11F9E0
label_145210:
    if (ctx->pc == 0x145210u) {
        ctx->pc = 0x145210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14520Cu;
        // 0x145210: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x145214u;
        goto label_145214;
    }
    ctx->pc = 0x14520Cu;
    SET_GPR_U32(ctx, 31, 0x145214u);
    ctx->pc = 0x145210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14520Cu;
    // 0x145210: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x14520Cu, 0x145214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145214u;
label_145214:
    // 0x145214: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_145218:
    if (ctx->pc == 0x145218u) {
        ctx->pc = 0x145218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145214u;
        // 0x145218: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14521Cu;
        goto label_14521c;
    }
    ctx->pc = 0x145214u;
    {
        const bool branch_taken_0x145214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145214u;
        // 0x145218: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145214) {
            ctx->pc = 0x145234u;
            goto label_145234;
        }
    }
    ctx->pc = 0x14521Cu;
label_14521c:
    // 0x14521c: 0x86240042  lh          $a0, 0x42($s1)
    ctx->pc = 0x14521cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
label_145220:
    // 0x145220: 0xc047e78  jal         func_11F9E0
label_145224:
    if (ctx->pc == 0x145224u) {
        ctx->pc = 0x145224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145220u;
        // 0x145224: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145228u;
        goto label_145228;
    }
    ctx->pc = 0x145220u;
    SET_GPR_U32(ctx, 31, 0x145228u);
    ctx->pc = 0x145224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145220u;
    // 0x145224: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x145220u, 0x145228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145228u;
label_145228:
    // 0x145228: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x145228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14522c:
    // 0x14522c: 0xa0430473  sb          $v1, 0x473($v0)
    ctx->pc = 0x14522cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1139), (uint8_t)GPR_U32(ctx, 3));
label_145230:
    // 0x145230: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x145230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_145234:
    // 0x145234: 0xc0512e2  jal         func_144B88
label_145238:
    if (ctx->pc == 0x145238u) {
        ctx->pc = 0x145238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145234u;
        // 0x145238: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14523Cu;
        goto label_14523c;
    }
    ctx->pc = 0x145234u;
    SET_GPR_U32(ctx, 31, 0x14523Cu);
    ctx->pc = 0x145238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145234u;
    // 0x145238: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B88u, 0x145234u, 0x14523Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14523Cu;
label_14523c:
    // 0x14523c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_145240:
    if (ctx->pc == 0x145240u) {
        ctx->pc = 0x145240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14523Cu;
        // 0x145240: 0xa2200032  sb          $zero, 0x32($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 50), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145244u;
        goto label_145244;
    }
    ctx->pc = 0x14523Cu;
    {
        const bool branch_taken_0x14523c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14523c) {
            ctx->pc = 0x145240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14523Cu;
            // 0x145240: 0xa2200032  sb          $zero, 0x32($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 50), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145264u;
            goto label_145264;
        }
    }
    ctx->pc = 0x145244u;
label_145244:
    // 0x145244: 0x92230032  lbu         $v1, 0x32($s1)
    ctx->pc = 0x145244u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 50)));
label_145248:
    // 0x145248: 0x2c62000f  sltiu       $v0, $v1, 0xF
    ctx->pc = 0x145248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_14524c:
    // 0x14524c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_145250:
    if (ctx->pc == 0x145250u) {
        ctx->pc = 0x145250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14524Cu;
        // 0x145250: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145254u;
        goto label_145254;
    }
    ctx->pc = 0x14524Cu;
    {
        const bool branch_taken_0x14524c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14524Cu;
        // 0x145250: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14524c) {
            ctx->pc = 0x14525Cu;
            goto label_14525c;
        }
    }
    ctx->pc = 0x145254u;
label_145254:
    // 0x145254: 0x10000003  b           . + 4 + (0x3 << 2)
label_145258:
    if (ctx->pc == 0x145258u) {
        ctx->pc = 0x145258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145254u;
        // 0x145258: 0xa2220032  sb          $v0, 0x32($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 50), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14525Cu;
        goto label_14525c;
    }
    ctx->pc = 0x145254u;
    {
        const bool branch_taken_0x145254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145254u;
        // 0x145258: 0xa2220032  sb          $v0, 0x32($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 50), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145254) {
            ctx->pc = 0x145264u;
            goto label_145264;
        }
    }
    ctx->pc = 0x14525Cu;
label_14525c:
    // 0x14525c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x14525cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_145260:
    // 0x145260: 0xa2220032  sb          $v0, 0x32($s1)
    ctx->pc = 0x145260u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 50), (uint8_t)GPR_U32(ctx, 2));
label_145264:
    // 0x145264: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x145264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_145268:
    // 0x145268: 0xc0512e2  jal         func_144B88
label_14526c:
    if (ctx->pc == 0x14526Cu) {
        ctx->pc = 0x14526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145268u;
        // 0x14526c: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145270u;
        goto label_145270;
    }
    ctx->pc = 0x145268u;
    SET_GPR_U32(ctx, 31, 0x145270u);
    ctx->pc = 0x14526Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145268u;
    // 0x14526c: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B88u, 0x145268u, 0x145270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145270u;
label_145270:
    // 0x145270: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_145274:
    if (ctx->pc == 0x145274u) {
        ctx->pc = 0x145274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145270u;
        // 0x145274: 0xa2200031  sb          $zero, 0x31($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 49), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145278u;
        goto label_145278;
    }
    ctx->pc = 0x145270u;
    {
        const bool branch_taken_0x145270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145270) {
            ctx->pc = 0x145274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145270u;
            // 0x145274: 0xa2200031  sb          $zero, 0x31($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 49), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145298u;
            goto label_145298;
        }
    }
    ctx->pc = 0x145278u;
label_145278:
    // 0x145278: 0x92230031  lbu         $v1, 0x31($s1)
    ctx->pc = 0x145278u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
label_14527c:
    // 0x14527c: 0x2c62000f  sltiu       $v0, $v1, 0xF
    ctx->pc = 0x14527cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_145280:
    // 0x145280: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_145284:
    if (ctx->pc == 0x145284u) {
        ctx->pc = 0x145284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145280u;
        // 0x145284: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145288u;
        goto label_145288;
    }
    ctx->pc = 0x145280u;
    {
        const bool branch_taken_0x145280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145280u;
        // 0x145284: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145280) {
            ctx->pc = 0x145290u;
            goto label_145290;
        }
    }
    ctx->pc = 0x145288u;
label_145288:
    // 0x145288: 0x10000003  b           . + 4 + (0x3 << 2)
label_14528c:
    if (ctx->pc == 0x14528Cu) {
        ctx->pc = 0x14528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145288u;
        // 0x14528c: 0xa2220031  sb          $v0, 0x31($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 49), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145290u;
        goto label_145290;
    }
    ctx->pc = 0x145288u;
    {
        const bool branch_taken_0x145288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145288u;
        // 0x14528c: 0xa2220031  sb          $v0, 0x31($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 49), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145288) {
            ctx->pc = 0x145298u;
            goto label_145298;
        }
    }
    ctx->pc = 0x145290u;
label_145290:
    // 0x145290: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x145290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_145294:
    // 0x145294: 0xa2220031  sb          $v0, 0x31($s1)
    ctx->pc = 0x145294u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 49), (uint8_t)GPR_U32(ctx, 2));
label_145298:
    // 0x145298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x145298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14529c:
    // 0x14529c: 0xc0512e2  jal         func_144B88
label_1452a0:
    if (ctx->pc == 0x1452A0u) {
        ctx->pc = 0x1452A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14529Cu;
        // 0x1452a0: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1452A4u;
        goto label_1452a4;
    }
    ctx->pc = 0x14529Cu;
    SET_GPR_U32(ctx, 31, 0x1452A4u);
    ctx->pc = 0x1452A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14529Cu;
    // 0x1452a0: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B88u, 0x14529Cu, 0x1452A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1452A4u;
label_1452a4:
    // 0x1452a4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1452a8:
    if (ctx->pc == 0x1452A8u) {
        ctx->pc = 0x1452A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452A4u;
        // 0x1452a8: 0xa2200030  sb          $zero, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1452ACu;
        goto label_1452ac;
    }
    ctx->pc = 0x1452A4u;
    {
        const bool branch_taken_0x1452a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1452a4) {
            ctx->pc = 0x1452A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1452A4u;
            // 0x1452a8: 0xa2200030  sb          $zero, 0x30($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1452CCu;
            goto label_1452cc;
        }
    }
    ctx->pc = 0x1452ACu;
label_1452ac:
    // 0x1452ac: 0x92230030  lbu         $v1, 0x30($s1)
    ctx->pc = 0x1452acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
label_1452b0:
    // 0x1452b0: 0x2c62000f  sltiu       $v0, $v1, 0xF
    ctx->pc = 0x1452b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_1452b4:
    // 0x1452b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1452b8:
    if (ctx->pc == 0x1452B8u) {
        ctx->pc = 0x1452B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452B4u;
        // 0x1452b8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1452BCu;
        goto label_1452bc;
    }
    ctx->pc = 0x1452B4u;
    {
        const bool branch_taken_0x1452b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1452B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452B4u;
        // 0x1452b8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1452b4) {
            ctx->pc = 0x1452C4u;
            goto label_1452c4;
        }
    }
    ctx->pc = 0x1452BCu;
label_1452bc:
    // 0x1452bc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1452c0:
    if (ctx->pc == 0x1452C0u) {
        ctx->pc = 0x1452C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452BCu;
        // 0x1452c0: 0xa2220030  sb          $v0, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1452C4u;
        goto label_1452c4;
    }
    ctx->pc = 0x1452BCu;
    {
        const bool branch_taken_0x1452bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1452C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452BCu;
        // 0x1452c0: 0xa2220030  sb          $v0, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1452bc) {
            ctx->pc = 0x1452CCu;
            goto label_1452cc;
        }
    }
    ctx->pc = 0x1452C4u;
label_1452c4:
    // 0x1452c4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1452c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1452c8:
    // 0x1452c8: 0xa2220030  sb          $v0, 0x30($s1)
    ctx->pc = 0x1452c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 2));
label_1452cc:
    // 0x1452cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1452ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1452d0:
    // 0x1452d0: 0xc0512e2  jal         func_144B88
label_1452d4:
    if (ctx->pc == 0x1452D4u) {
        ctx->pc = 0x1452D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452D0u;
        // 0x1452d4: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1452D8u;
        goto label_1452d8;
    }
    ctx->pc = 0x1452D0u;
    SET_GPR_U32(ctx, 31, 0x1452D8u);
    ctx->pc = 0x1452D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1452D0u;
    // 0x1452d4: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x144B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B88u, 0x1452D0u, 0x1452D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1452D8u;
label_1452d8:
    // 0x1452d8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1452dc:
    if (ctx->pc == 0x1452DCu) {
        ctx->pc = 0x1452DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452D8u;
        // 0x1452dc: 0xa2200033  sb          $zero, 0x33($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 51), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1452E0u;
        goto label_1452e0;
    }
    ctx->pc = 0x1452D8u;
    {
        const bool branch_taken_0x1452d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1452d8) {
            ctx->pc = 0x1452DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1452D8u;
            // 0x1452dc: 0xa2200033  sb          $zero, 0x33($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 51), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145300u;
            goto label_145300;
        }
    }
    ctx->pc = 0x1452E0u;
label_1452e0:
    // 0x1452e0: 0x92230033  lbu         $v1, 0x33($s1)
    ctx->pc = 0x1452e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 51)));
label_1452e4:
    // 0x1452e4: 0x2c62000f  sltiu       $v0, $v1, 0xF
    ctx->pc = 0x1452e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_1452e8:
    // 0x1452e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1452ec:
    if (ctx->pc == 0x1452ECu) {
        ctx->pc = 0x1452ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452E8u;
        // 0x1452ec: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1452F0u;
        goto label_1452f0;
    }
    ctx->pc = 0x1452E8u;
    {
        const bool branch_taken_0x1452e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1452ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452E8u;
        // 0x1452ec: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1452e8) {
            ctx->pc = 0x1452F8u;
            goto label_1452f8;
        }
    }
    ctx->pc = 0x1452F0u;
label_1452f0:
    // 0x1452f0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1452f4:
    if (ctx->pc == 0x1452F4u) {
        ctx->pc = 0x1452F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452F0u;
        // 0x1452f4: 0xa2220033  sb          $v0, 0x33($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 51), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1452F8u;
        goto label_1452f8;
    }
    ctx->pc = 0x1452F0u;
    {
        const bool branch_taken_0x1452f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1452F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452F0u;
        // 0x1452f4: 0xa2220033  sb          $v0, 0x33($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 51), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1452f0) {
            ctx->pc = 0x145300u;
            goto label_145300;
        }
    }
    ctx->pc = 0x1452F8u;
label_1452f8:
    // 0x1452f8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1452f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1452fc:
    // 0x1452fc: 0xa2220033  sb          $v0, 0x33($s1)
    ctx->pc = 0x1452fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 51), (uint8_t)GPR_U32(ctx, 2));
label_145300:
    // 0x145300: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x145300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_145304:
    // 0x145304: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x145304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_145308:
    // 0x145308: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x145308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_14530c:
    // 0x14530c: 0x2224021  addu        $t0, $s1, $v0
    ctx->pc = 0x14530cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_145310:
    // 0x145310: 0x95040000  lhu         $a0, 0x0($t0)
    ctx->pc = 0x145310u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_145314:
    // 0x145314: 0x3083f000  andi        $v1, $a0, 0xF000
    ctx->pc = 0x145314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
label_145318:
    // 0x145318: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
label_14531c:
    if (ctx->pc == 0x14531Cu) {
        ctx->pc = 0x14531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145318u;
        // 0x14531c: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145320u;
        goto label_145320;
    }
    ctx->pc = 0x145318u;
    {
        const bool branch_taken_0x145318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145318u;
        // 0x14531c: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145318) {
            ctx->pc = 0x1453C4u;
            goto label_1453c4;
        }
    }
    ctx->pc = 0x145320u;
label_145320:
    // 0x145320: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
label_145324:
    if (ctx->pc == 0x145324u) {
        ctx->pc = 0x145324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145320u;
        // 0x145324: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145328u;
        goto label_145328;
    }
    ctx->pc = 0x145320u;
    {
        const bool branch_taken_0x145320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x145324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145320u;
        // 0x145324: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145320) {
            ctx->pc = 0x1453C4u;
            goto label_1453c4;
        }
    }
    ctx->pc = 0x145328u;
label_145328:
    // 0x145328: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
label_14532c:
    if (ctx->pc == 0x14532Cu) {
        ctx->pc = 0x14532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145328u;
        // 0x14532c: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x145330u;
        goto label_145330;
    }
    ctx->pc = 0x145328u;
    {
        const bool branch_taken_0x145328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145328u;
        // 0x14532c: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x145328) {
            ctx->pc = 0x1453C4u;
            goto label_1453c4;
        }
    }
    ctx->pc = 0x145330u;
label_145330:
    // 0x145330: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
label_145334:
    if (ctx->pc == 0x145334u) {
        ctx->pc = 0x145334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145330u;
        // 0x145334: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145338u;
        goto label_145338;
    }
    ctx->pc = 0x145330u;
    {
        const bool branch_taken_0x145330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x145334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145330u;
        // 0x145334: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145330) {
            ctx->pc = 0x1453C4u;
            goto label_1453c4;
        }
    }
    ctx->pc = 0x145338u;
label_145338:
    // 0x145338: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
label_14533c:
    if (ctx->pc == 0x14533Cu) {
        ctx->pc = 0x14533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145338u;
        // 0x14533c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145340u;
        goto label_145340;
    }
    ctx->pc = 0x145338u;
    {
        const bool branch_taken_0x145338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145338u;
        // 0x14533c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145338) {
            ctx->pc = 0x1453C4u;
            goto label_1453c4;
        }
    }
    ctx->pc = 0x145340u;
label_145340:
    // 0x145340: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x145340u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_145344:
    // 0x145344: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x145344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_145348:
    // 0x145348: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x145348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14534c:
    // 0x14534c: 0x26290034  addiu       $t1, $s1, 0x34
    ctx->pc = 0x14534cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
label_145350:
    // 0x145350: 0x1241021  addu        $v0, $t1, $a0
    ctx->pc = 0x145350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_145354:
    // 0x145354: 0x0  nop
    ctx->pc = 0x145354u;
    // NOP
label_145358:
    // 0x145358: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x145358u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_14535c:
    // 0x14535c: 0xc2182b  sltu        $v1, $a2, $v0
    ctx->pc = 0x14535cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_145360:
    // 0x145360: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_145364:
    if (ctx->pc == 0x145364u) {
        ctx->pc = 0x145364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145360u;
        // 0x145364: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145368u;
        goto label_145368;
    }
    ctx->pc = 0x145360u;
    {
        const bool branch_taken_0x145360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x145360) {
            ctx->pc = 0x145364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145360u;
            // 0x145364: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145374u;
            goto label_145374;
        }
    }
    ctx->pc = 0x145368u;
label_145368:
    // 0x145368: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x145368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14536c:
    // 0x14536c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x14536cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_145370:
    // 0x145370: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x145370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_145374:
    // 0x145374: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x145374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_145378:
    // 0x145378: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_14537c:
    if (ctx->pc == 0x14537Cu) {
        ctx->pc = 0x14537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145378u;
        // 0x14537c: 0x1241021  addu        $v0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145380u;
        goto label_145380;
    }
    ctx->pc = 0x145378u;
    {
        const bool branch_taken_0x145378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145378u;
        // 0x14537c: 0x1241021  addu        $v0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145378) {
            ctx->pc = 0x145358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145358;
        }
    }
    ctx->pc = 0x145380u;
label_145380:
    // 0x145380: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x145380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_145384:
    // 0x145384: 0x10e2000e  beq         $a3, $v0, . + 4 + (0xE << 2)
label_145388:
    if (ctx->pc == 0x145388u) {
        ctx->pc = 0x145388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145384u;
        // 0x145388: 0x30a28fff  andi        $v0, $a1, 0x8FFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)36863);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14538Cu;
        goto label_14538c;
    }
    ctx->pc = 0x145384u;
    {
        const bool branch_taken_0x145384 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x145388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145384u;
        // 0x145388: 0x30a28fff  andi        $v0, $a1, 0x8FFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)36863);
        ctx->in_delay_slot = false;
        if (branch_taken_0x145384) {
            ctx->pc = 0x1453C0u;
            goto label_1453c0;
        }
    }
    ctx->pc = 0x14538Cu;
label_14538c:
    // 0x14538c: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
label_145390:
    if (ctx->pc == 0x145390u) {
        ctx->pc = 0x145390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14538Cu;
        // 0x145390: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145394u;
        goto label_145394;
    }
    ctx->pc = 0x14538Cu;
    {
        const bool branch_taken_0x14538c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x145390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14538Cu;
        // 0x145390: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14538c) {
            ctx->pc = 0x1453ACu;
            goto label_1453ac;
        }
    }
    ctx->pc = 0x145394u;
label_145394:
    // 0x145394: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
label_145398:
    if (ctx->pc == 0x145398u) {
        ctx->pc = 0x145398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145394u;
        // 0x145398: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14539Cu;
        goto label_14539c;
    }
    ctx->pc = 0x145394u;
    {
        const bool branch_taken_0x145394 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x145398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145394u;
        // 0x145398: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145394) {
            ctx->pc = 0x1453B4u;
            goto label_1453b4;
        }
    }
    ctx->pc = 0x14539Cu;
label_14539c:
    // 0x14539c: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
label_1453a0:
    if (ctx->pc == 0x1453A0u) {
        ctx->pc = 0x1453A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14539Cu;
        // 0x1453a0: 0x30a20fff  andi        $v0, $a1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1453A4u;
        goto label_1453a4;
    }
    ctx->pc = 0x14539Cu;
    {
        const bool branch_taken_0x14539c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1453A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14539Cu;
        // 0x1453a0: 0x30a20fff  andi        $v0, $a1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14539c) {
            ctx->pc = 0x1453BCu;
            goto label_1453bc;
        }
    }
    ctx->pc = 0x1453A4u;
label_1453a4:
    // 0x1453a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1453a8:
    if (ctx->pc == 0x1453A8u) {
        ctx->pc = 0x1453A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1453A4u;
        // 0x1453a8: 0xa5020000  sh          $v0, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1453ACu;
        goto label_1453ac;
    }
    ctx->pc = 0x1453A4u;
    {
        const bool branch_taken_0x1453a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1453A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1453A4u;
        // 0x1453a8: 0xa5020000  sh          $v0, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1453a4) {
            ctx->pc = 0x1453C4u;
            goto label_1453c4;
        }
    }
    ctx->pc = 0x1453ACu;
label_1453ac:
    // 0x1453ac: 0x10000004  b           . + 4 + (0x4 << 2)
label_1453b0:
    if (ctx->pc == 0x1453B0u) {
        ctx->pc = 0x1453B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1453ACu;
        // 0x1453b0: 0x30a22fff  andi        $v0, $a1, 0x2FFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12287);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1453B4u;
        goto label_1453b4;
    }
    ctx->pc = 0x1453ACu;
    {
        const bool branch_taken_0x1453ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1453B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1453ACu;
        // 0x1453b0: 0x30a22fff  andi        $v0, $a1, 0x2FFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12287);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1453ac) {
            ctx->pc = 0x1453C0u;
            goto label_1453c0;
        }
    }
    ctx->pc = 0x1453B4u;
label_1453b4:
    // 0x1453b4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1453b8:
    if (ctx->pc == 0x1453B8u) {
        ctx->pc = 0x1453B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1453B4u;
        // 0x1453b8: 0x30a21fff  andi        $v0, $a1, 0x1FFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8191);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1453BCu;
        goto label_1453bc;
    }
    ctx->pc = 0x1453B4u;
    {
        const bool branch_taken_0x1453b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1453B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1453B4u;
        // 0x1453b8: 0x30a21fff  andi        $v0, $a1, 0x1FFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8191);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1453b4) {
            ctx->pc = 0x1453C0u;
            goto label_1453c0;
        }
    }
    ctx->pc = 0x1453BCu;
label_1453bc:
    // 0x1453bc: 0x30a24fff  andi        $v0, $a1, 0x4FFF
    ctx->pc = 0x1453bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)20479);
label_1453c0:
    // 0x1453c0: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x1453c0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
label_1453c4:
    // 0x1453c4: 0xc0579d2  jal         func_15E748
label_1453c8:
    if (ctx->pc == 0x1453C8u) {
        ctx->pc = 0x1453CCu;
        goto label_1453cc;
    }
    ctx->pc = 0x1453C4u;
    SET_GPR_U32(ctx, 31, 0x1453CCu);
    ctx->pc = 0x15E748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E748u, 0x1453C4u, 0x1453CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1453CCu;
label_1453cc:
    // 0x1453cc: 0x3842000a  xori        $v0, $v0, 0xA
    ctx->pc = 0x1453ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
label_1453d0:
    // 0x1453d0: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_1453d4:
    if (ctx->pc == 0x1453D4u) {
        ctx->pc = 0x1453D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1453D0u;
        // 0x1453d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1453D8u;
        goto label_1453d8;
    }
    ctx->pc = 0x1453D0u;
    {
        const bool branch_taken_0x1453d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1453D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1453D0u;
        // 0x1453d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1453d0) {
            ctx->pc = 0x14546Cu;
            goto label_14546c;
        }
    }
    ctx->pc = 0x1453D8u;
label_1453d8:
    // 0x1453d8: 0xc0512a0  jal         func_144A80
label_1453dc:
    if (ctx->pc == 0x1453DCu) {
        ctx->pc = 0x1453DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1453D8u;
        // 0x1453dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1453E0u;
        goto label_1453e0;
    }
    ctx->pc = 0x1453D8u;
    SET_GPR_U32(ctx, 31, 0x1453E0u);
    ctx->pc = 0x1453DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1453D8u;
    // 0x1453dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A80u, 0x1453D8u, 0x1453E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1453E0u;
label_1453e0:
    // 0x1453e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1453e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1453e4:
    // 0x1453e4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1453e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1453e8:
    // 0x1453e8: 0x161980  sll         $v1, $s6, 6
    ctx->pc = 0x1453e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
label_1453ec:
    // 0x1453ec: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1453ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_1453f0:
    // 0x1453f0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1453f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1453f4:
    // 0x1453f4: 0x2442da90  addiu       $v0, $v0, -0x2570
    ctx->pc = 0x1453f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957712));
label_1453f8:
    // 0x1453f8: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1453f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1453fc:
    // 0x1453fc: 0x0  nop
    ctx->pc = 0x1453fcu;
    // NOP
label_145400:
    // 0x145400: 0x2741004  sllv        $v0, $s4, $s3
    ctx->pc = 0x145400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 19) & 0x1F));
label_145404:
    // 0x145404: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x145404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_145408:
    // 0x145408: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_14540c:
    if (ctx->pc == 0x14540Cu) {
        ctx->pc = 0x14540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145408u;
        // 0x14540c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145410u;
        goto label_145410;
    }
    ctx->pc = 0x145408u;
    {
        const bool branch_taken_0x145408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145408) {
            ctx->pc = 0x14540Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145408u;
            // 0x14540c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145460u;
            goto label_145460;
        }
    }
    ctx->pc = 0x145410u;
label_145410:
    // 0x145410: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x145410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_145414:
    // 0x145414: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
label_145418:
    if (ctx->pc == 0x145418u) {
        ctx->pc = 0x145418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145414u;
        // 0x145418: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14541Cu;
        goto label_14541c;
    }
    ctx->pc = 0x145414u;
    {
        const bool branch_taken_0x145414 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x145418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145414u;
        // 0x145418: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145414) {
            ctx->pc = 0x14545Cu;
            goto label_14545c;
        }
    }
    ctx->pc = 0x14541Cu;
label_14541c:
    // 0x14541c: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x14541cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_145420:
    // 0x145420: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x145420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_145424:
    // 0x145424: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x145424u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_145428:
    // 0x145428: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x145428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_14542c:
    // 0x14542c: 0x40f809  jalr        $v0
label_145430:
    if (ctx->pc == 0x145430u) {
        ctx->pc = 0x145430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14542Cu;
        // 0x145430: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145434u;
        goto label_145434;
    }
    ctx->pc = 0x14542Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145434u);
        ctx->pc = 0x145430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14542Cu;
        // 0x145430: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14542Cu, 0x145434u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145434u;
label_145434:
    // 0x145434: 0x5454000a  bnel        $v0, $s4, . + 4 + (0xA << 2)
label_145438:
    if (ctx->pc == 0x145438u) {
        ctx->pc = 0x145438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145434u;
        // 0x145438: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14543Cu;
        goto label_14543c;
    }
    ctx->pc = 0x145434u;
    {
        const bool branch_taken_0x145434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x145434) {
            ctx->pc = 0x145438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145434u;
            // 0x145438: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145460u;
            goto label_145460;
        }
    }
    ctx->pc = 0x14543Cu;
label_14543c:
    // 0x14543c: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x14543cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_145440:
    // 0x145440: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x145440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_145444:
    // 0x145444: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x145444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_145448:
    // 0x145448: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x145448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_14544c:
    // 0x14544c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x14544cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_145450:
    // 0x145450: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x145450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_145454:
    // 0x145454: 0x60f809  jalr        $v1
label_145458:
    if (ctx->pc == 0x145458u) {
        ctx->pc = 0x145458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145454u;
        // 0x145458: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14545Cu;
        goto label_14545c;
    }
    ctx->pc = 0x145454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14545Cu);
        ctx->pc = 0x145458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145454u;
        // 0x145458: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145454u, 0x14545Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14545Cu;
label_14545c:
    // 0x14545c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x14545cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_145460:
    // 0x145460: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x145460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_145464:
    // 0x145464: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_145468:
    if (ctx->pc == 0x145468u) {
        ctx->pc = 0x145468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145464u;
        // 0x145468: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14546Cu;
        goto label_14546c;
    }
    ctx->pc = 0x145464u;
    {
        const bool branch_taken_0x145464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x145468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145464u;
        // 0x145468: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145464) {
            ctx->pc = 0x145400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145400;
        }
    }
    ctx->pc = 0x14546Cu;
label_14546c:
    // 0x14546c: 0x92260041  lbu         $a2, 0x41($s1)
    ctx->pc = 0x14546cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 65)));
label_145470:
    // 0x145470: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x145470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_145474:
    // 0x145474: 0xc05259a  jal         func_149668
label_145478:
    if (ctx->pc == 0x145478u) {
        ctx->pc = 0x145478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145474u;
        // 0x145478: 0x92250040  lbu         $a1, 0x40($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14547Cu;
        goto label_14547c;
    }
    ctx->pc = 0x145474u;
    SET_GPR_U32(ctx, 31, 0x14547Cu);
    ctx->pc = 0x145478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145474u;
    // 0x145478: 0x92250040  lbu         $a1, 0x40($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149668u, 0x145474u, 0x14547Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14547Cu;
label_14547c:
    // 0x14547c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x14547cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_145480:
    // 0x145480: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x145480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_145484:
    // 0x145484: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x145484u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_145488:
    // 0x145488: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x145488u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_14548c:
    // 0x14548c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x14548cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_145490:
    // 0x145490: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x145490u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_145494:
    // 0x145494: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x145494u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_145498:
    // 0x145498: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x145498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_14549c:
    // 0x14549c: 0x3e00008  jr          $ra
label_1454a0:
    if (ctx->pc == 0x1454A0u) {
        ctx->pc = 0x1454A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14549Cu;
        // 0x1454a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1454A4u;
        goto label_1454a4;
    }
    ctx->pc = 0x14549Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1454A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14549Cu;
        // 0x1454a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14549Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1454A4u;
label_1454a4:
    // 0x1454a4: 0x0  nop
    ctx->pc = 0x1454a4u;
    // NOP
    ctx->pc = 0x1454a8u;
}
