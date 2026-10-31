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

// Function: sub_00216EB0
// Address: 0x216eb0 - 0x217350
void sub_00216EB0_0x216eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216EB0_0x216eb0");
#endif

    switch (ctx->pc) {
        case 0x216eb0u: goto label_216eb0;
        case 0x216eb4u: goto label_216eb4;
        case 0x216eb8u: goto label_216eb8;
        case 0x216ebcu: goto label_216ebc;
        case 0x216ec0u: goto label_216ec0;
        case 0x216ec4u: goto label_216ec4;
        case 0x216ec8u: goto label_216ec8;
        case 0x216eccu: goto label_216ecc;
        case 0x216ed0u: goto label_216ed0;
        case 0x216ed4u: goto label_216ed4;
        case 0x216ed8u: goto label_216ed8;
        case 0x216edcu: goto label_216edc;
        case 0x216ee0u: goto label_216ee0;
        case 0x216ee4u: goto label_216ee4;
        case 0x216ee8u: goto label_216ee8;
        case 0x216eecu: goto label_216eec;
        case 0x216ef0u: goto label_216ef0;
        case 0x216ef4u: goto label_216ef4;
        case 0x216ef8u: goto label_216ef8;
        case 0x216efcu: goto label_216efc;
        case 0x216f00u: goto label_216f00;
        case 0x216f04u: goto label_216f04;
        case 0x216f08u: goto label_216f08;
        case 0x216f0cu: goto label_216f0c;
        case 0x216f10u: goto label_216f10;
        case 0x216f14u: goto label_216f14;
        case 0x216f18u: goto label_216f18;
        case 0x216f1cu: goto label_216f1c;
        case 0x216f20u: goto label_216f20;
        case 0x216f24u: goto label_216f24;
        case 0x216f28u: goto label_216f28;
        case 0x216f2cu: goto label_216f2c;
        case 0x216f30u: goto label_216f30;
        case 0x216f34u: goto label_216f34;
        case 0x216f38u: goto label_216f38;
        case 0x216f3cu: goto label_216f3c;
        case 0x216f40u: goto label_216f40;
        case 0x216f44u: goto label_216f44;
        case 0x216f48u: goto label_216f48;
        case 0x216f4cu: goto label_216f4c;
        case 0x216f50u: goto label_216f50;
        case 0x216f54u: goto label_216f54;
        case 0x216f58u: goto label_216f58;
        case 0x216f5cu: goto label_216f5c;
        case 0x216f60u: goto label_216f60;
        case 0x216f64u: goto label_216f64;
        case 0x216f68u: goto label_216f68;
        case 0x216f6cu: goto label_216f6c;
        case 0x216f70u: goto label_216f70;
        case 0x216f74u: goto label_216f74;
        case 0x216f78u: goto label_216f78;
        case 0x216f7cu: goto label_216f7c;
        case 0x216f80u: goto label_216f80;
        case 0x216f84u: goto label_216f84;
        case 0x216f88u: goto label_216f88;
        case 0x216f8cu: goto label_216f8c;
        case 0x216f90u: goto label_216f90;
        case 0x216f94u: goto label_216f94;
        case 0x216f98u: goto label_216f98;
        case 0x216f9cu: goto label_216f9c;
        case 0x216fa0u: goto label_216fa0;
        case 0x216fa4u: goto label_216fa4;
        case 0x216fa8u: goto label_216fa8;
        case 0x216facu: goto label_216fac;
        case 0x216fb0u: goto label_216fb0;
        case 0x216fb4u: goto label_216fb4;
        case 0x216fb8u: goto label_216fb8;
        case 0x216fbcu: goto label_216fbc;
        case 0x216fc0u: goto label_216fc0;
        case 0x216fc4u: goto label_216fc4;
        case 0x216fc8u: goto label_216fc8;
        case 0x216fccu: goto label_216fcc;
        case 0x216fd0u: goto label_216fd0;
        case 0x216fd4u: goto label_216fd4;
        case 0x216fd8u: goto label_216fd8;
        case 0x216fdcu: goto label_216fdc;
        case 0x216fe0u: goto label_216fe0;
        case 0x216fe4u: goto label_216fe4;
        case 0x216fe8u: goto label_216fe8;
        case 0x216fecu: goto label_216fec;
        case 0x216ff0u: goto label_216ff0;
        case 0x216ff4u: goto label_216ff4;
        case 0x216ff8u: goto label_216ff8;
        case 0x216ffcu: goto label_216ffc;
        case 0x217000u: goto label_217000;
        case 0x217004u: goto label_217004;
        case 0x217008u: goto label_217008;
        case 0x21700cu: goto label_21700c;
        case 0x217010u: goto label_217010;
        case 0x217014u: goto label_217014;
        case 0x217018u: goto label_217018;
        case 0x21701cu: goto label_21701c;
        case 0x217020u: goto label_217020;
        case 0x217024u: goto label_217024;
        case 0x217028u: goto label_217028;
        case 0x21702cu: goto label_21702c;
        case 0x217030u: goto label_217030;
        case 0x217034u: goto label_217034;
        case 0x217038u: goto label_217038;
        case 0x21703cu: goto label_21703c;
        case 0x217040u: goto label_217040;
        case 0x217044u: goto label_217044;
        case 0x217048u: goto label_217048;
        case 0x21704cu: goto label_21704c;
        case 0x217050u: goto label_217050;
        case 0x217054u: goto label_217054;
        case 0x217058u: goto label_217058;
        case 0x21705cu: goto label_21705c;
        case 0x217060u: goto label_217060;
        case 0x217064u: goto label_217064;
        case 0x217068u: goto label_217068;
        case 0x21706cu: goto label_21706c;
        case 0x217070u: goto label_217070;
        case 0x217074u: goto label_217074;
        case 0x217078u: goto label_217078;
        case 0x21707cu: goto label_21707c;
        case 0x217080u: goto label_217080;
        case 0x217084u: goto label_217084;
        case 0x217088u: goto label_217088;
        case 0x21708cu: goto label_21708c;
        case 0x217090u: goto label_217090;
        case 0x217094u: goto label_217094;
        case 0x217098u: goto label_217098;
        case 0x21709cu: goto label_21709c;
        case 0x2170a0u: goto label_2170a0;
        case 0x2170a4u: goto label_2170a4;
        case 0x2170a8u: goto label_2170a8;
        case 0x2170acu: goto label_2170ac;
        case 0x2170b0u: goto label_2170b0;
        case 0x2170b4u: goto label_2170b4;
        case 0x2170b8u: goto label_2170b8;
        case 0x2170bcu: goto label_2170bc;
        case 0x2170c0u: goto label_2170c0;
        case 0x2170c4u: goto label_2170c4;
        case 0x2170c8u: goto label_2170c8;
        case 0x2170ccu: goto label_2170cc;
        case 0x2170d0u: goto label_2170d0;
        case 0x2170d4u: goto label_2170d4;
        case 0x2170d8u: goto label_2170d8;
        case 0x2170dcu: goto label_2170dc;
        case 0x2170e0u: goto label_2170e0;
        case 0x2170e4u: goto label_2170e4;
        case 0x2170e8u: goto label_2170e8;
        case 0x2170ecu: goto label_2170ec;
        case 0x2170f0u: goto label_2170f0;
        case 0x2170f4u: goto label_2170f4;
        case 0x2170f8u: goto label_2170f8;
        case 0x2170fcu: goto label_2170fc;
        case 0x217100u: goto label_217100;
        case 0x217104u: goto label_217104;
        case 0x217108u: goto label_217108;
        case 0x21710cu: goto label_21710c;
        case 0x217110u: goto label_217110;
        case 0x217114u: goto label_217114;
        case 0x217118u: goto label_217118;
        case 0x21711cu: goto label_21711c;
        case 0x217120u: goto label_217120;
        case 0x217124u: goto label_217124;
        case 0x217128u: goto label_217128;
        case 0x21712cu: goto label_21712c;
        case 0x217130u: goto label_217130;
        case 0x217134u: goto label_217134;
        case 0x217138u: goto label_217138;
        case 0x21713cu: goto label_21713c;
        case 0x217140u: goto label_217140;
        case 0x217144u: goto label_217144;
        case 0x217148u: goto label_217148;
        case 0x21714cu: goto label_21714c;
        case 0x217150u: goto label_217150;
        case 0x217154u: goto label_217154;
        case 0x217158u: goto label_217158;
        case 0x21715cu: goto label_21715c;
        case 0x217160u: goto label_217160;
        case 0x217164u: goto label_217164;
        case 0x217168u: goto label_217168;
        case 0x21716cu: goto label_21716c;
        case 0x217170u: goto label_217170;
        case 0x217174u: goto label_217174;
        case 0x217178u: goto label_217178;
        case 0x21717cu: goto label_21717c;
        case 0x217180u: goto label_217180;
        case 0x217184u: goto label_217184;
        case 0x217188u: goto label_217188;
        case 0x21718cu: goto label_21718c;
        case 0x217190u: goto label_217190;
        case 0x217194u: goto label_217194;
        case 0x217198u: goto label_217198;
        case 0x21719cu: goto label_21719c;
        case 0x2171a0u: goto label_2171a0;
        case 0x2171a4u: goto label_2171a4;
        case 0x2171a8u: goto label_2171a8;
        case 0x2171acu: goto label_2171ac;
        case 0x2171b0u: goto label_2171b0;
        case 0x2171b4u: goto label_2171b4;
        case 0x2171b8u: goto label_2171b8;
        case 0x2171bcu: goto label_2171bc;
        case 0x2171c0u: goto label_2171c0;
        case 0x2171c4u: goto label_2171c4;
        case 0x2171c8u: goto label_2171c8;
        case 0x2171ccu: goto label_2171cc;
        case 0x2171d0u: goto label_2171d0;
        case 0x2171d4u: goto label_2171d4;
        case 0x2171d8u: goto label_2171d8;
        case 0x2171dcu: goto label_2171dc;
        case 0x2171e0u: goto label_2171e0;
        case 0x2171e4u: goto label_2171e4;
        case 0x2171e8u: goto label_2171e8;
        case 0x2171ecu: goto label_2171ec;
        case 0x2171f0u: goto label_2171f0;
        case 0x2171f4u: goto label_2171f4;
        case 0x2171f8u: goto label_2171f8;
        case 0x2171fcu: goto label_2171fc;
        case 0x217200u: goto label_217200;
        case 0x217204u: goto label_217204;
        case 0x217208u: goto label_217208;
        case 0x21720cu: goto label_21720c;
        case 0x217210u: goto label_217210;
        case 0x217214u: goto label_217214;
        case 0x217218u: goto label_217218;
        case 0x21721cu: goto label_21721c;
        case 0x217220u: goto label_217220;
        case 0x217224u: goto label_217224;
        case 0x217228u: goto label_217228;
        case 0x21722cu: goto label_21722c;
        case 0x217230u: goto label_217230;
        case 0x217234u: goto label_217234;
        case 0x217238u: goto label_217238;
        case 0x21723cu: goto label_21723c;
        case 0x217240u: goto label_217240;
        case 0x217244u: goto label_217244;
        case 0x217248u: goto label_217248;
        case 0x21724cu: goto label_21724c;
        case 0x217250u: goto label_217250;
        case 0x217254u: goto label_217254;
        case 0x217258u: goto label_217258;
        case 0x21725cu: goto label_21725c;
        case 0x217260u: goto label_217260;
        case 0x217264u: goto label_217264;
        case 0x217268u: goto label_217268;
        case 0x21726cu: goto label_21726c;
        case 0x217270u: goto label_217270;
        case 0x217274u: goto label_217274;
        case 0x217278u: goto label_217278;
        case 0x21727cu: goto label_21727c;
        case 0x217280u: goto label_217280;
        case 0x217284u: goto label_217284;
        case 0x217288u: goto label_217288;
        case 0x21728cu: goto label_21728c;
        case 0x217290u: goto label_217290;
        case 0x217294u: goto label_217294;
        case 0x217298u: goto label_217298;
        case 0x21729cu: goto label_21729c;
        case 0x2172a0u: goto label_2172a0;
        case 0x2172a4u: goto label_2172a4;
        case 0x2172a8u: goto label_2172a8;
        case 0x2172acu: goto label_2172ac;
        case 0x2172b0u: goto label_2172b0;
        case 0x2172b4u: goto label_2172b4;
        case 0x2172b8u: goto label_2172b8;
        case 0x2172bcu: goto label_2172bc;
        case 0x2172c0u: goto label_2172c0;
        case 0x2172c4u: goto label_2172c4;
        case 0x2172c8u: goto label_2172c8;
        case 0x2172ccu: goto label_2172cc;
        case 0x2172d0u: goto label_2172d0;
        case 0x2172d4u: goto label_2172d4;
        case 0x2172d8u: goto label_2172d8;
        case 0x2172dcu: goto label_2172dc;
        case 0x2172e0u: goto label_2172e0;
        case 0x2172e4u: goto label_2172e4;
        case 0x2172e8u: goto label_2172e8;
        case 0x2172ecu: goto label_2172ec;
        case 0x2172f0u: goto label_2172f0;
        case 0x2172f4u: goto label_2172f4;
        case 0x2172f8u: goto label_2172f8;
        case 0x2172fcu: goto label_2172fc;
        case 0x217300u: goto label_217300;
        case 0x217304u: goto label_217304;
        case 0x217308u: goto label_217308;
        case 0x21730cu: goto label_21730c;
        case 0x217310u: goto label_217310;
        case 0x217314u: goto label_217314;
        case 0x217318u: goto label_217318;
        case 0x21731cu: goto label_21731c;
        case 0x217320u: goto label_217320;
        case 0x217324u: goto label_217324;
        case 0x217328u: goto label_217328;
        case 0x21732cu: goto label_21732c;
        case 0x217330u: goto label_217330;
        case 0x217334u: goto label_217334;
        case 0x217338u: goto label_217338;
        case 0x21733cu: goto label_21733c;
        case 0x217340u: goto label_217340;
        case 0x217344u: goto label_217344;
        case 0x217348u: goto label_217348;
        case 0x21734cu: goto label_21734c;
        default: break;
    }

    ctx->pc = 0x216eb0u;

label_216eb0:
    // 0x216eb0: 0x27bdf9e0  addiu       $sp, $sp, -0x620
    ctx->pc = 0x216eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965728));
label_216eb4:
    // 0x216eb4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x216eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_216eb8:
    // 0x216eb8: 0x7fb00610  sq          $s0, 0x610($sp)
    ctx->pc = 0x216eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1552), GPR_VEC(ctx, 16));
label_216ebc:
    // 0x216ebc: 0x24a5e490  addiu       $a1, $a1, -0x1B70
    ctx->pc = 0x216ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960272));
label_216ec0:
    // 0x216ec0: 0x7fb10600  sq          $s1, 0x600($sp)
    ctx->pc = 0x216ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1536), GPR_VEC(ctx, 17));
label_216ec4:
    // 0x216ec4: 0x7fb305e0  sq          $s3, 0x5E0($sp)
    ctx->pc = 0x216ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1504), GPR_VEC(ctx, 19));
label_216ec8:
    // 0x216ec8: 0x7fb405d0  sq          $s4, 0x5D0($sp)
    ctx->pc = 0x216ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1488), GPR_VEC(ctx, 20));
label_216ecc:
    // 0x216ecc: 0x7fb505c0  sq          $s5, 0x5C0($sp)
    ctx->pc = 0x216eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1472), GPR_VEC(ctx, 21));
label_216ed0:
    // 0x216ed0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x216ed0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_216ed4:
    // 0x216ed4: 0x7fbe0590  sq          $fp, 0x590($sp)
    ctx->pc = 0x216ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1424), GPR_VEC(ctx, 30));
label_216ed8:
    // 0x216ed8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x216ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_216edc:
    // 0x216edc: 0x7fb205f0  sq          $s2, 0x5F0($sp)
    ctx->pc = 0x216edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1520), GPR_VEC(ctx, 18));
label_216ee0:
    // 0x216ee0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x216ee0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216ee4:
    // 0x216ee4: 0x7fb605b0  sq          $s6, 0x5B0($sp)
    ctx->pc = 0x216ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1456), GPR_VEC(ctx, 22));
label_216ee8:
    // 0x216ee8: 0x7fb705a0  sq          $s7, 0x5A0($sp)
    ctx->pc = 0x216ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1440), GPR_VEC(ctx, 23));
label_216eec:
    // 0x216eec: 0xffbf0580  sd          $ra, 0x580($sp)
    ctx->pc = 0x216eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1408), GPR_U64(ctx, 31));
label_216ef0:
    // 0x216ef0: 0xc108c14  jal         func_423050
label_216ef4:
    if (ctx->pc == 0x216EF4u) {
        ctx->pc = 0x216EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216EF0u;
        // 0x216ef4: 0x8e860074  lw          $a2, 0x74($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216EF8u;
        goto label_216ef8;
    }
    ctx->pc = 0x216EF0u;
    SET_GPR_U32(ctx, 31, 0x216EF8u);
    ctx->pc = 0x216EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216EF0u;
    // 0x216ef4: 0x8e860074  lw          $a2, 0x74($s4) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423050u, 0x216EF0u, 0x216EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216EF8u;
label_216ef8:
    // 0x216ef8: 0x8e830074  lw          $v1, 0x74($s4)
    ctx->pc = 0x216ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_216efc:
    // 0x216efc: 0x24050084  addiu       $a1, $zero, 0x84
    ctx->pc = 0x216efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_216f00:
    // 0x216f00: 0x8fb00014  lw          $s0, 0x14($sp)
    ctx->pc = 0x216f00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_216f04:
    // 0x216f04: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x216f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_216f08:
    // 0x216f08: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x216f08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_216f0c:
    // 0x216f0c: 0x8c82489c  lw          $v0, 0x489C($a0)
    ctx->pc = 0x216f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
label_216f10:
    // 0x216f10: 0x8fb30010  lw          $s3, 0x10($sp)
    ctx->pc = 0x216f10u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_216f14:
    // 0x216f14: 0x27a90578  addiu       $t1, $sp, 0x578
    ctx->pc = 0x216f14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1400));
label_216f18:
    // 0x216f18: 0xae900078  sw          $s0, 0x78($s4)
    ctx->pc = 0x216f18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 120), GPR_U32(ctx, 16));
label_216f1c:
    // 0x216f1c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x216f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_216f20:
    // 0x216f20: 0xafa00560  sw          $zero, 0x560($sp)
    ctx->pc = 0x216f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1376), GPR_U32(ctx, 0));
label_216f24:
    // 0x216f24: 0x27a70564  addiu       $a3, $sp, 0x564
    ctx->pc = 0x216f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1380));
label_216f28:
    // 0x216f28: 0xafa00564  sw          $zero, 0x564($sp)
    ctx->pc = 0x216f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1380), GPR_U32(ctx, 0));
label_216f2c:
    // 0x216f2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x216f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_216f30:
    // 0x216f30: 0x27a60560  addiu       $a2, $sp, 0x560
    ctx->pc = 0x216f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
label_216f34:
    // 0x216f34: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x216f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
label_216f38:
    // 0x216f38: 0x8c5114d8  lw          $s1, 0x14D8($v0)
    ctx->pc = 0x216f38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_216f3c:
    // 0x216f3c: 0x27a80568  addiu       $t0, $sp, 0x568
    ctx->pc = 0x216f3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1384));
label_216f40:
    // 0x216f40: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x216f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
label_216f44:
    // 0x216f44: 0x27aa0570  addiu       $t2, $sp, 0x570
    ctx->pc = 0x216f44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1392));
label_216f48:
    // 0x216f48: 0x27a9056c  addiu       $t1, $sp, 0x56C
    ctx->pc = 0x216f48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1388));
label_216f4c:
    // 0x216f4c: 0xafa00568  sw          $zero, 0x568($sp)
    ctx->pc = 0x216f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1384), GPR_U32(ctx, 0));
label_216f50:
    // 0x216f50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x216f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_216f54:
    // 0x216f54: 0xafa0056c  sw          $zero, 0x56C($sp)
    ctx->pc = 0x216f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1388), GPR_U32(ctx, 0));
label_216f58:
    // 0x216f58: 0xafa00570  sw          $zero, 0x570($sp)
    ctx->pc = 0x216f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1392), GPR_U32(ctx, 0));
label_216f5c:
    // 0x216f5c: 0x27ab0574  addiu       $t3, $sp, 0x574
    ctx->pc = 0x216f5cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 1396));
label_216f60:
    // 0x216f60: 0xafa00574  sw          $zero, 0x574($sp)
    ctx->pc = 0x216f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1396), GPR_U32(ctx, 0));
label_216f64:
    // 0x216f64: 0xc1090a6  jal         func_424298
label_216f68:
    if (ctx->pc == 0x216F68u) {
        ctx->pc = 0x216F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216F64u;
        // 0x216f68: 0xafa00578  sw          $zero, 0x578($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216F6Cu;
        goto label_216f6c;
    }
    ctx->pc = 0x216F64u;
    SET_GPR_U32(ctx, 31, 0x216F6Cu);
    ctx->pc = 0x216F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216F64u;
    // 0x216f68: 0xafa00578  sw          $zero, 0x578($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1400), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424298u, 0x216F64u, 0x216F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216F6Cu;
label_216f6c:
    // 0x216f6c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x216f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_216f70:
    // 0x216f70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x216f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216f74:
    // 0x216f74: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x216f74u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_216f78:
    // 0x216f78: 0xc0853d6  jal         func_214F58
label_216f7c:
    if (ctx->pc == 0x216F7Cu) {
        ctx->pc = 0x216F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216F78u;
        // 0x216f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216F80u;
        goto label_216f80;
    }
    ctx->pc = 0x216F78u;
    SET_GPR_U32(ctx, 31, 0x216F80u);
    ctx->pc = 0x216F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216F78u;
    // 0x216f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214F58u, 0x216F78u, 0x216F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216F80u;
label_216f80:
    // 0x216f80: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x216f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_216f84:
    // 0x216f84: 0x3c030056  lui         $v1, 0x56
    ctx->pc = 0x216f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)86 << 16));
label_216f88:
    // 0x216f88: 0x2447a228  addiu       $a3, $v0, -0x5DD8
    ctx->pc = 0x216f88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943272));
label_216f8c:
    // 0x216f8c: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x216f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_216f90:
    // 0x216f90: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x216f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_216f94:
    // 0x216f94: 0x80e50008  lb          $a1, 0x8($a3)
    ctx->pc = 0x216f94u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
label_216f98:
    // 0x216f98: 0xb3a40127  sdl         $a0, 0x127($sp)
    ctx->pc = 0x216f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_216f9c:
    // 0x216f9c: 0xb7a40120  sdr         $a0, 0x120($sp)
    ctx->pc = 0x216f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_216fa0:
    // 0x216fa0: 0xa3a50128  sb          $a1, 0x128($sp)
    ctx->pc = 0x216fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 296), (uint8_t)GPR_U32(ctx, 5));
label_216fa4:
    // 0x216fa4: 0x2467a238  addiu       $a3, $v1, -0x5DC8
    ctx->pc = 0x216fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943288));
label_216fa8:
    // 0x216fa8: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x216fa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_216fac:
    // 0x216fac: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x216facu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_216fb0:
    // 0x216fb0: 0x80e50008  lb          $a1, 0x8($a3)
    ctx->pc = 0x216fb0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
label_216fb4:
    // 0x216fb4: 0xb3a20137  sdl         $v0, 0x137($sp)
    ctx->pc = 0x216fb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_216fb8:
    // 0x216fb8: 0xb7a20130  sdr         $v0, 0x130($sp)
    ctx->pc = 0x216fb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_216fbc:
    // 0x216fbc: 0xa3a50138  sb          $a1, 0x138($sp)
    ctx->pc = 0x216fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 312), (uint8_t)GPR_U32(ctx, 5));
label_216fc0:
    // 0x216fc0: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x216fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_216fc4:
    // 0x216fc4: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x216fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_216fc8:
    // 0x216fc8: 0x2487a248  addiu       $a3, $a0, -0x5DB8
    ctx->pc = 0x216fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943304));
label_216fcc:
    // 0x216fcc: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x216fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_216fd0:
    // 0x216fd0: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x216fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_216fd4:
    // 0x216fd4: 0x80e50008  lb          $a1, 0x8($a3)
    ctx->pc = 0x216fd4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
label_216fd8:
    // 0x216fd8: 0xb3a30147  sdl         $v1, 0x147($sp)
    ctx->pc = 0x216fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_216fdc:
    // 0x216fdc: 0xb7a30140  sdr         $v1, 0x140($sp)
    ctx->pc = 0x216fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_216fe0:
    // 0x216fe0: 0xa3a50148  sb          $a1, 0x148($sp)
    ctx->pc = 0x216fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 328), (uint8_t)GPR_U32(ctx, 5));
label_216fe4:
    // 0x216fe4: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_216fe8:
    if (ctx->pc == 0x216FE8u) {
        ctx->pc = 0x216FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216FE4u;
        // 0x216fe8: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216FECu;
        goto label_216fec;
    }
    ctx->pc = 0x216FE4u;
    {
        const bool branch_taken_0x216fe4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x216FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216FE4u;
        // 0x216fe8: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216fe4) {
            ctx->pc = 0x216FF4u;
            goto label_216ff4;
        }
    }
    ctx->pc = 0x216FECu;
label_216fec:
    // 0x216fec: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
label_216ff0:
    if (ctx->pc == 0x216FF0u) {
        ctx->pc = 0x216FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216FECu;
        // 0x216ff0: 0x8fa20560  lw          $v0, 0x560($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216FF4u;
        goto label_216ff4;
    }
    ctx->pc = 0x216FECu;
    {
        const bool branch_taken_0x216fec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x216FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216FECu;
        // 0x216ff0: 0x8fa20560  lw          $v0, 0x560($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216fec) {
            ctx->pc = 0x217018u;
            goto label_217018;
        }
    }
    ctx->pc = 0x216FF4u;
label_216ff4:
    // 0x216ff4: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x216ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_216ff8:
    // 0x216ff8: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x216ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_216ffc:
    // 0x216ffc: 0x24c6a258  addiu       $a2, $a2, -0x5DA8
    ctx->pc = 0x216ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943320));
label_217000:
    // 0x217000: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x217000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_217004:
    // 0x217004: 0x240500c7  addiu       $a1, $zero, 0xC7
    ctx->pc = 0x217004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
label_217008:
    // 0x217008: 0xc10ca04  jal         func_432810
label_21700c:
    if (ctx->pc == 0x21700Cu) {
        ctx->pc = 0x21700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217008u;
        // 0x21700c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217010u;
        goto label_217010;
    }
    ctx->pc = 0x217008u;
    SET_GPR_U32(ctx, 31, 0x217010u);
    ctx->pc = 0x21700Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217008u;
    // 0x21700c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x217008u, 0x217010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217010u;
label_217010:
    // 0x217010: 0x10000025  b           . + 4 + (0x25 << 2)
label_217014:
    if (ctx->pc == 0x217014u) {
        ctx->pc = 0x217014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217010u;
        // 0x217014: 0x8fa20568  lw          $v0, 0x568($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217018u;
        goto label_217018;
    }
    ctx->pc = 0x217010u;
    {
        const bool branch_taken_0x217010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217010u;
        // 0x217014: 0x8fa20568  lw          $v0, 0x568($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217010) {
            ctx->pc = 0x2170A8u;
            goto label_2170a8;
        }
    }
    ctx->pc = 0x217018u;
label_217018:
    // 0x217018: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x217018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_21701c:
    // 0x21701c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_217020:
    if (ctx->pc == 0x217020u) {
        ctx->pc = 0x217020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21701Cu;
        // 0x217020: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217024u;
        goto label_217024;
    }
    ctx->pc = 0x21701Cu;
    {
        const bool branch_taken_0x21701c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21701Cu;
        // 0x217020: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21701c) {
            ctx->pc = 0x217070u;
            goto label_217070;
        }
    }
    ctx->pc = 0x217024u;
label_217024:
    // 0x217024: 0x27b20150  addiu       $s2, $sp, 0x150
    ctx->pc = 0x217024u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_217028:
    // 0x217028: 0x2610a268  addiu       $s0, $s0, -0x5D98
    ctx->pc = 0x217028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943336));
label_21702c:
    // 0x21702c: 0xc067b9c  jal         func_19EE70
label_217030:
    if (ctx->pc == 0x217030u) {
        ctx->pc = 0x217030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21702Cu;
        // 0x217030: 0x2404006d  addiu       $a0, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217034u;
        goto label_217034;
    }
    ctx->pc = 0x21702Cu;
    SET_GPR_U32(ctx, 31, 0x217034u);
    ctx->pc = 0x217030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21702Cu;
    // 0x217030: 0x2404006d  addiu       $a0, $zero, 0x6D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x21702Cu, 0x217034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217034u;
label_217034:
    // 0x217034: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x217034u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_217038:
    // 0x217038: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x217038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21703c:
    // 0x21703c: 0xc067b9c  jal         func_19EE70
label_217040:
    if (ctx->pc == 0x217040u) {
        ctx->pc = 0x217040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21703Cu;
        // 0x217040: 0x2404006e  addiu       $a0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217044u;
        goto label_217044;
    }
    ctx->pc = 0x21703Cu;
    SET_GPR_U32(ctx, 31, 0x217044u);
    ctx->pc = 0x217040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21703Cu;
    // 0x217040: 0x2404006e  addiu       $a0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x21703Cu, 0x217044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217044u;
label_217044:
    // 0x217044: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x217044u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_217048:
    // 0x217048: 0x8faa0560  lw          $t2, 0x560($sp)
    ctx->pc = 0x217048u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1376)));
label_21704c:
    // 0x21704c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21704cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_217050:
    // 0x217050: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x217050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_217054:
    // 0x217054: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x217054u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_217058:
    // 0x217058: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x217058u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21705c:
    // 0x21705c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21705cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_217060:
    // 0x217060: 0xc10ca04  jal         func_432810
label_217064:
    if (ctx->pc == 0x217064u) {
        ctx->pc = 0x217064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217060u;
        // 0x217064: 0x240500c7  addiu       $a1, $zero, 0xC7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217068u;
        goto label_217068;
    }
    ctx->pc = 0x217060u;
    SET_GPR_U32(ctx, 31, 0x217068u);
    ctx->pc = 0x217064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217060u;
    // 0x217064: 0x240500c7  addiu       $a1, $zero, 0xC7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x217060u, 0x217068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217068u;
label_217068:
    // 0x217068: 0x1000000f  b           . + 4 + (0xF << 2)
label_21706c:
    if (ctx->pc == 0x21706Cu) {
        ctx->pc = 0x21706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217068u;
        // 0x21706c: 0x8fa20568  lw          $v0, 0x568($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217070u;
        goto label_217070;
    }
    ctx->pc = 0x217068u;
    {
        const bool branch_taken_0x217068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217068u;
        // 0x21706c: 0x8fa20568  lw          $v0, 0x568($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217068) {
            ctx->pc = 0x2170A8u;
            goto label_2170a8;
        }
    }
    ctx->pc = 0x217070u;
label_217070:
    // 0x217070: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x217070u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_217074:
    // 0x217074: 0x27b10150  addiu       $s1, $sp, 0x150
    ctx->pc = 0x217074u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_217078:
    // 0x217078: 0x2610a2d8  addiu       $s0, $s0, -0x5D28
    ctx->pc = 0x217078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943448));
label_21707c:
    // 0x21707c: 0xc067b9c  jal         func_19EE70
label_217080:
    if (ctx->pc == 0x217080u) {
        ctx->pc = 0x217080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21707Cu;
        // 0x217080: 0x2404006d  addiu       $a0, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217084u;
        goto label_217084;
    }
    ctx->pc = 0x21707Cu;
    SET_GPR_U32(ctx, 31, 0x217084u);
    ctx->pc = 0x217080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21707Cu;
    // 0x217080: 0x2404006d  addiu       $a0, $zero, 0x6D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x21707Cu, 0x217084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217084u;
label_217084:
    // 0x217084: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x217084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_217088:
    // 0x217088: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x217088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21708c:
    // 0x21708c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x21708cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_217090:
    // 0x217090: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_217094:
    // 0x217094: 0x240500c7  addiu       $a1, $zero, 0xC7
    ctx->pc = 0x217094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
label_217098:
    // 0x217098: 0xc10ca04  jal         func_432810
label_21709c:
    if (ctx->pc == 0x21709Cu) {
        ctx->pc = 0x21709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217098u;
        // 0x21709c: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2170A0u;
        goto label_2170a0;
    }
    ctx->pc = 0x217098u;
    SET_GPR_U32(ctx, 31, 0x2170A0u);
    ctx->pc = 0x21709Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217098u;
    // 0x21709c: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x217098u, 0x2170A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2170A0u;
label_2170a0:
    // 0x2170a0: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x2170a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2170a4:
    // 0x2170a4: 0x8fa20568  lw          $v0, 0x568($sp)
    ctx->pc = 0x2170a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1384)));
label_2170a8:
    // 0x2170a8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_2170ac:
    if (ctx->pc == 0x2170ACu) {
        ctx->pc = 0x2170ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170A8u;
        // 0x2170ac: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2170B0u;
        goto label_2170b0;
    }
    ctx->pc = 0x2170A8u;
    {
        const bool branch_taken_0x2170a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2170ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170A8u;
        // 0x2170ac: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2170a8) {
            ctx->pc = 0x217100u;
            goto label_217100;
        }
    }
    ctx->pc = 0x2170B0u;
label_2170b0:
    // 0x2170b0: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x2170b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_2170b4:
    // 0x2170b4: 0x27b10220  addiu       $s1, $sp, 0x220
    ctx->pc = 0x2170b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_2170b8:
    // 0x2170b8: 0x2610a310  addiu       $s0, $s0, -0x5CF0
    ctx->pc = 0x2170b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943504));
label_2170bc:
    // 0x2170bc: 0x2404006f  addiu       $a0, $zero, 0x6F
    ctx->pc = 0x2170bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_2170c0:
    // 0x2170c0: 0xc067b9c  jal         func_19EE70
label_2170c4:
    if (ctx->pc == 0x2170C4u) {
        ctx->pc = 0x2170C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170C0u;
        // 0x2170c4: 0x305500ff  andi        $s5, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2170C8u;
        goto label_2170c8;
    }
    ctx->pc = 0x2170C0u;
    SET_GPR_U32(ctx, 31, 0x2170C8u);
    ctx->pc = 0x2170C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2170C0u;
    // 0x2170c4: 0x305500ff  andi        $s5, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x2170C0u, 0x2170C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2170C8u;
label_2170c8:
    // 0x2170c8: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x2170c8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2170cc:
    // 0x2170cc: 0x8fa90564  lw          $t1, 0x564($sp)
    ctx->pc = 0x2170ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1380)));
label_2170d0:
    // 0x2170d0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2170d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2170d4:
    // 0x2170d4: 0x8faa0568  lw          $t2, 0x568($sp)
    ctx->pc = 0x2170d4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1384)));
label_2170d8:
    // 0x2170d8: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x2170d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2170dc:
    // 0x2170dc: 0x27a80120  addiu       $t0, $sp, 0x120
    ctx->pc = 0x2170dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2170e0:
    // 0x2170e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2170e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2170e4:
    // 0x2170e4: 0x12a1026  xor         $v0, $t1, $t2
    ctx->pc = 0x2170e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 10));
label_2170e8:
    // 0x2170e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2170e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2170ec:
    // 0x2170ec: 0x62400b  movn        $t0, $v1, $v0
    ctx->pc = 0x2170ecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
label_2170f0:
    // 0x2170f0: 0xc10ca04  jal         func_432810
label_2170f4:
    if (ctx->pc == 0x2170F4u) {
        ctx->pc = 0x2170F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170F0u;
        // 0x2170f4: 0x240500c7  addiu       $a1, $zero, 0xC7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2170F8u;
        goto label_2170f8;
    }
    ctx->pc = 0x2170F0u;
    SET_GPR_U32(ctx, 31, 0x2170F8u);
    ctx->pc = 0x2170F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2170F0u;
    // 0x2170f4: 0x240500c7  addiu       $a1, $zero, 0xC7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x2170F0u, 0x2170F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2170F8u;
label_2170f8:
    // 0x2170f8: 0x10000009  b           . + 4 + (0x9 << 2)
label_2170fc:
    if (ctx->pc == 0x2170FCu) {
        ctx->pc = 0x2170FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170F8u;
        // 0x2170fc: 0x8fa20570  lw          $v0, 0x570($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1392)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217100u;
        goto label_217100;
    }
    ctx->pc = 0x2170F8u;
    {
        const bool branch_taken_0x2170f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2170FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170F8u;
        // 0x2170fc: 0x8fa20570  lw          $v0, 0x570($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2170f8) {
            ctx->pc = 0x217120u;
            goto label_217120;
        }
    }
    ctx->pc = 0x217100u;
label_217100:
    // 0x217100: 0x27b00220  addiu       $s0, $sp, 0x220
    ctx->pc = 0x217100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_217104:
    // 0x217104: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x217104u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_217108:
    // 0x217108: 0x24c6a338  addiu       $a2, $a2, -0x5CC8
    ctx->pc = 0x217108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943544));
label_21710c:
    // 0x21710c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21710cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_217110:
    // 0x217110: 0xc10ca04  jal         func_432810
label_217114:
    if (ctx->pc == 0x217114u) {
        ctx->pc = 0x217114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217110u;
        // 0x217114: 0x240500c7  addiu       $a1, $zero, 0xC7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217118u;
        goto label_217118;
    }
    ctx->pc = 0x217110u;
    SET_GPR_U32(ctx, 31, 0x217118u);
    ctx->pc = 0x217114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217110u;
    // 0x217114: 0x240500c7  addiu       $a1, $zero, 0xC7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x217110u, 0x217118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217118u;
label_217118:
    // 0x217118: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x217118u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21711c:
    // 0x21711c: 0x8fa20570  lw          $v0, 0x570($sp)
    ctx->pc = 0x21711cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1392)));
label_217120:
    // 0x217120: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_217124:
    if (ctx->pc == 0x217124u) {
        ctx->pc = 0x217124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217120u;
        // 0x217124: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217128u;
        goto label_217128;
    }
    ctx->pc = 0x217120u;
    {
        const bool branch_taken_0x217120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217120u;
        // 0x217124: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217120) {
            ctx->pc = 0x217178u;
            goto label_217178;
        }
    }
    ctx->pc = 0x217128u;
label_217128:
    // 0x217128: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x217128u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_21712c:
    // 0x21712c: 0x27b102f0  addiu       $s1, $sp, 0x2F0
    ctx->pc = 0x21712cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_217130:
    // 0x217130: 0x2610a310  addiu       $s0, $s0, -0x5CF0
    ctx->pc = 0x217130u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943504));
label_217134:
    // 0x217134: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x217134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_217138:
    // 0x217138: 0xc067b9c  jal         func_19EE70
label_21713c:
    if (ctx->pc == 0x21713Cu) {
        ctx->pc = 0x21713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217138u;
        // 0x21713c: 0x305500ff  andi        $s5, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x217140u;
        goto label_217140;
    }
    ctx->pc = 0x217138u;
    SET_GPR_U32(ctx, 31, 0x217140u);
    ctx->pc = 0x21713Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217138u;
    // 0x21713c: 0x305500ff  andi        $s5, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x217138u, 0x217140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217140u;
label_217140:
    // 0x217140: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x217140u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_217144:
    // 0x217144: 0x8fa9056c  lw          $t1, 0x56C($sp)
    ctx->pc = 0x217144u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1388)));
label_217148:
    // 0x217148: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x217148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21714c:
    // 0x21714c: 0x8faa0570  lw          $t2, 0x570($sp)
    ctx->pc = 0x21714cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1392)));
label_217150:
    // 0x217150: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x217150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_217154:
    // 0x217154: 0x27a80120  addiu       $t0, $sp, 0x120
    ctx->pc = 0x217154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_217158:
    // 0x217158: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x217158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21715c:
    // 0x21715c: 0x12a1026  xor         $v0, $t1, $t2
    ctx->pc = 0x21715cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 10));
label_217160:
    // 0x217160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_217164:
    // 0x217164: 0x62400b  movn        $t0, $v1, $v0
    ctx->pc = 0x217164u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
label_217168:
    // 0x217168: 0xc10ca04  jal         func_432810
label_21716c:
    if (ctx->pc == 0x21716Cu) {
        ctx->pc = 0x21716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217168u;
        // 0x21716c: 0x240500c7  addiu       $a1, $zero, 0xC7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217170u;
        goto label_217170;
    }
    ctx->pc = 0x217168u;
    SET_GPR_U32(ctx, 31, 0x217170u);
    ctx->pc = 0x21716Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217168u;
    // 0x21716c: 0x240500c7  addiu       $a1, $zero, 0xC7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x217168u, 0x217170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217170u;
label_217170:
    // 0x217170: 0x10000009  b           . + 4 + (0x9 << 2)
label_217174:
    if (ctx->pc == 0x217174u) {
        ctx->pc = 0x217174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217170u;
        // 0x217174: 0x8fa20578  lw          $v0, 0x578($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217178u;
        goto label_217178;
    }
    ctx->pc = 0x217170u;
    {
        const bool branch_taken_0x217170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217170u;
        // 0x217174: 0x8fa20578  lw          $v0, 0x578($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217170) {
            ctx->pc = 0x217198u;
            goto label_217198;
        }
    }
    ctx->pc = 0x217178u;
label_217178:
    // 0x217178: 0x27b002f0  addiu       $s0, $sp, 0x2F0
    ctx->pc = 0x217178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_21717c:
    // 0x21717c: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x21717cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_217180:
    // 0x217180: 0x24c6a338  addiu       $a2, $a2, -0x5CC8
    ctx->pc = 0x217180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943544));
label_217184:
    // 0x217184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_217188:
    // 0x217188: 0xc10ca04  jal         func_432810
label_21718c:
    if (ctx->pc == 0x21718Cu) {
        ctx->pc = 0x21718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217188u;
        // 0x21718c: 0x240500c7  addiu       $a1, $zero, 0xC7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217190u;
        goto label_217190;
    }
    ctx->pc = 0x217188u;
    SET_GPR_U32(ctx, 31, 0x217190u);
    ctx->pc = 0x21718Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217188u;
    // 0x21718c: 0x240500c7  addiu       $a1, $zero, 0xC7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x217188u, 0x217190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217190u;
label_217190:
    // 0x217190: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x217190u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_217194:
    // 0x217194: 0x8fa20578  lw          $v0, 0x578($sp)
    ctx->pc = 0x217194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1400)));
label_217198:
    // 0x217198: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_21719c:
    if (ctx->pc == 0x21719Cu) {
        ctx->pc = 0x21719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217198u;
        // 0x21719c: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2171A0u;
        goto label_2171a0;
    }
    ctx->pc = 0x217198u;
    {
        const bool branch_taken_0x217198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217198u;
        // 0x21719c: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217198) {
            ctx->pc = 0x2171F0u;
            goto label_2171f0;
        }
    }
    ctx->pc = 0x2171A0u;
label_2171a0:
    // 0x2171a0: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x2171a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_2171a4:
    // 0x2171a4: 0x27b103c0  addiu       $s1, $sp, 0x3C0
    ctx->pc = 0x2171a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_2171a8:
    // 0x2171a8: 0x2610a310  addiu       $s0, $s0, -0x5CF0
    ctx->pc = 0x2171a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943504));
label_2171ac:
    // 0x2171ac: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x2171acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2171b0:
    // 0x2171b0: 0xc067b9c  jal         func_19EE70
label_2171b4:
    if (ctx->pc == 0x2171B4u) {
        ctx->pc = 0x2171B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2171B0u;
        // 0x2171b4: 0x305500ff  andi        $s5, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2171B8u;
        goto label_2171b8;
    }
    ctx->pc = 0x2171B0u;
    SET_GPR_U32(ctx, 31, 0x2171B8u);
    ctx->pc = 0x2171B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2171B0u;
    // 0x2171b4: 0x305500ff  andi        $s5, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x2171B0u, 0x2171B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2171B8u;
label_2171b8:
    // 0x2171b8: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2171b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2171bc:
    // 0x2171bc: 0x8fa90574  lw          $t1, 0x574($sp)
    ctx->pc = 0x2171bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1396)));
label_2171c0:
    // 0x2171c0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2171c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2171c4:
    // 0x2171c4: 0x8faa0578  lw          $t2, 0x578($sp)
    ctx->pc = 0x2171c4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1400)));
label_2171c8:
    // 0x2171c8: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x2171c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2171cc:
    // 0x2171cc: 0x27a80120  addiu       $t0, $sp, 0x120
    ctx->pc = 0x2171ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2171d0:
    // 0x2171d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2171d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2171d4:
    // 0x2171d4: 0x12a1026  xor         $v0, $t1, $t2
    ctx->pc = 0x2171d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 10));
label_2171d8:
    // 0x2171d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2171d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2171dc:
    // 0x2171dc: 0x62400b  movn        $t0, $v1, $v0
    ctx->pc = 0x2171dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
label_2171e0:
    // 0x2171e0: 0xc10ca04  jal         func_432810
label_2171e4:
    if (ctx->pc == 0x2171E4u) {
        ctx->pc = 0x2171E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2171E0u;
        // 0x2171e4: 0x240500c7  addiu       $a1, $zero, 0xC7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2171E8u;
        goto label_2171e8;
    }
    ctx->pc = 0x2171E0u;
    SET_GPR_U32(ctx, 31, 0x2171E8u);
    ctx->pc = 0x2171E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2171E0u;
    // 0x2171e4: 0x240500c7  addiu       $a1, $zero, 0xC7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x2171E0u, 0x2171E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2171E8u;
label_2171e8:
    // 0x2171e8: 0x10000009  b           . + 4 + (0x9 << 2)
label_2171ec:
    if (ctx->pc == 0x2171ECu) {
        ctx->pc = 0x2171ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2171E8u;
        // 0x2171ec: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2171F0u;
        goto label_2171f0;
    }
    ctx->pc = 0x2171E8u;
    {
        const bool branch_taken_0x2171e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2171ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2171E8u;
        // 0x2171ec: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2171e8) {
            ctx->pc = 0x217210u;
            goto label_217210;
        }
    }
    ctx->pc = 0x2171F0u;
label_2171f0:
    // 0x2171f0: 0x27b003c0  addiu       $s0, $sp, 0x3C0
    ctx->pc = 0x2171f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_2171f4:
    // 0x2171f4: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x2171f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_2171f8:
    // 0x2171f8: 0x24c6a338  addiu       $a2, $a2, -0x5CC8
    ctx->pc = 0x2171f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943544));
label_2171fc:
    // 0x2171fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2171fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_217200:
    // 0x217200: 0xc10ca04  jal         func_432810
label_217204:
    if (ctx->pc == 0x217204u) {
        ctx->pc = 0x217204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217200u;
        // 0x217204: 0x240500c7  addiu       $a1, $zero, 0xC7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217208u;
        goto label_217208;
    }
    ctx->pc = 0x217200u;
    SET_GPR_U32(ctx, 31, 0x217208u);
    ctx->pc = 0x217204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217200u;
    // 0x217204: 0x240500c7  addiu       $a1, $zero, 0xC7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x217200u, 0x217208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217208u;
label_217208:
    // 0x217208: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x217208u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21720c:
    // 0x21720c: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x21720cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_217210:
    // 0x217210: 0x27b10490  addiu       $s1, $sp, 0x490
    ctx->pc = 0x217210u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_217214:
    // 0x217214: 0x2610a340  addiu       $s0, $s0, -0x5CC0
    ctx->pc = 0x217214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943552));
label_217218:
    // 0x217218: 0xc067b9c  jal         func_19EE70
label_21721c:
    if (ctx->pc == 0x21721Cu) {
        ctx->pc = 0x21721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217218u;
        // 0x21721c: 0x24040066  addiu       $a0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217220u;
        goto label_217220;
    }
    ctx->pc = 0x217218u;
    SET_GPR_U32(ctx, 31, 0x217220u);
    ctx->pc = 0x21721Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217218u;
    // 0x21721c: 0x24040066  addiu       $a0, $zero, 0x66 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x217218u, 0x217220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217220u;
label_217220:
    // 0x217220: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x217220u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_217224:
    // 0x217224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_217228:
    // 0x217228: 0x240500c7  addiu       $a1, $zero, 0xC7
    ctx->pc = 0x217228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
label_21722c:
    // 0x21722c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21722cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_217230:
    // 0x217230: 0xc10ca04  jal         func_432810
label_217234:
    if (ctx->pc == 0x217234u) {
        ctx->pc = 0x217234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217230u;
        // 0x217234: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217238u;
        goto label_217238;
    }
    ctx->pc = 0x217230u;
    SET_GPR_U32(ctx, 31, 0x217238u);
    ctx->pc = 0x217234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217230u;
    // 0x217234: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x217230u, 0x217238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217238u;
label_217238:
    // 0x217238: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x217238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_21723c:
    // 0x21723c: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x21723cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_217240:
    // 0x217240: 0x8c6c27e4  lw          $t4, 0x27E4($v1)
    ctx->pc = 0x217240u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_217244:
    // 0x217244: 0x3c080056  lui         $t0, 0x56
    ctx->pc = 0x217244u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)86 << 16));
label_217248:
    // 0x217248: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x217248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_21724c:
    // 0x21724c: 0x24a5a368  addiu       $a1, $a1, -0x5C98
    ctx->pc = 0x21724cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943592));
label_217250:
    // 0x217250: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x217250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_217254:
    // 0x217254: 0x2508a370  addiu       $t0, $t0, -0x5C90
    ctx->pc = 0x217254u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294943600));
label_217258:
    // 0x217258: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x217258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_21725c:
    // 0x21725c: 0x24090072  addiu       $t1, $zero, 0x72
    ctx->pc = 0x21725cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_217260:
    // 0x217260: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x217260u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_217264:
    // 0x217264: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x217264u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217268:
    // 0x217268: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x217268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_21726c:
    // 0x21726c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x21726cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217270:
    // 0x217270: 0x40f809  jalr        $v0
label_217274:
    if (ctx->pc == 0x217274u) {
        ctx->pc = 0x217274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217270u;
        // 0x217274: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217278u;
        goto label_217278;
    }
    ctx->pc = 0x217270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x217278u);
        ctx->pc = 0x217274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217270u;
        // 0x217274: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217270u, 0x217278u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x217278u;
label_217278:
    // 0x217278: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x217278u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_21727c:
    // 0x21727c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21727cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_217280:
    // 0x217280: 0x24c6a3a0  addiu       $a2, $a2, -0x5C60
    ctx->pc = 0x217280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943648));
label_217284:
    // 0x217284: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x217284u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_217288:
    // 0x217288: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x217288u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21728c:
    // 0x21728c: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x21728cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_217290:
    // 0x217290: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x217290u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_217294:
    // 0x217294: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x217294u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_217298:
    // 0x217298: 0xae820070  sw          $v0, 0x70($s4)
    ctx->pc = 0x217298u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 2));
label_21729c:
    // 0x21729c: 0xc10ca04  jal         func_432810
label_2172a0:
    if (ctx->pc == 0x2172A0u) {
        ctx->pc = 0x2172A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21729Cu;
        // 0x2172a0: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2172A4u;
        goto label_2172a4;
    }
    ctx->pc = 0x21729Cu;
    SET_GPR_U32(ctx, 31, 0x2172A4u);
    ctx->pc = 0x2172A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21729Cu;
    // 0x2172a0: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x21729Cu, 0x2172A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2172A4u;
label_2172a4:
    // 0x2172a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2172a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2172a8:
    // 0x2172a8: 0x16a30007  bne         $s5, $v1, . + 4 + (0x7 << 2)
label_2172ac:
    if (ctx->pc == 0x2172ACu) {
        ctx->pc = 0x2172ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172A8u;
        // 0x2172ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2172B0u;
        goto label_2172b0;
    }
    ctx->pc = 0x2172A8u;
    {
        const bool branch_taken_0x2172a8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x2172ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172A8u;
        // 0x2172ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2172a8) {
            ctx->pc = 0x2172C8u;
            goto label_2172c8;
        }
    }
    ctx->pc = 0x2172B0u;
label_2172b0:
    // 0x2172b0: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2172b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2172b4:
    // 0x2172b4: 0x8e840070  lw          $a0, 0x70($s4)
    ctx->pc = 0x2172b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2172b8:
    // 0x2172b8: 0xc10c25f  jal         func_43097C
label_2172bc:
    if (ctx->pc == 0x2172BCu) {
        ctx->pc = 0x2172BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172B8u;
        // 0x2172bc: 0x24a5a3b0  addiu       $a1, $a1, -0x5C50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943664));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2172C0u;
        goto label_2172c0;
    }
    ctx->pc = 0x2172B8u;
    SET_GPR_U32(ctx, 31, 0x2172C0u);
    ctx->pc = 0x2172BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2172B8u;
    // 0x2172bc: 0x24a5a3b0  addiu       $a1, $a1, -0x5C50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x2172B8u, 0x2172C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2172C0u;
label_2172c0:
    // 0x2172c0: 0x10000018  b           . + 4 + (0x18 << 2)
label_2172c4:
    if (ctx->pc == 0x2172C4u) {
        ctx->pc = 0x2172C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172C0u;
        // 0x2172c4: 0x7bb00610  lq          $s0, 0x610($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2172C8u;
        goto label_2172c8;
    }
    ctx->pc = 0x2172C0u;
    {
        const bool branch_taken_0x2172c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2172C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172C0u;
        // 0x2172c4: 0x7bb00610  lq          $s0, 0x610($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2172c0) {
            ctx->pc = 0x217324u;
            goto label_217324;
        }
    }
    ctx->pc = 0x2172C8u;
label_2172c8:
    // 0x2172c8: 0x16a20007  bne         $s5, $v0, . + 4 + (0x7 << 2)
label_2172cc:
    if (ctx->pc == 0x2172CCu) {
        ctx->pc = 0x2172CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172C8u;
        // 0x2172cc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2172D0u;
        goto label_2172d0;
    }
    ctx->pc = 0x2172C8u;
    {
        const bool branch_taken_0x2172c8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x2172CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172C8u;
        // 0x2172cc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2172c8) {
            ctx->pc = 0x2172E8u;
            goto label_2172e8;
        }
    }
    ctx->pc = 0x2172D0u;
label_2172d0:
    // 0x2172d0: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2172d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2172d4:
    // 0x2172d4: 0x8e840070  lw          $a0, 0x70($s4)
    ctx->pc = 0x2172d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2172d8:
    // 0x2172d8: 0xc10c25f  jal         func_43097C
label_2172dc:
    if (ctx->pc == 0x2172DCu) {
        ctx->pc = 0x2172DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172D8u;
        // 0x2172dc: 0x24a5a3c8  addiu       $a1, $a1, -0x5C38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2172E0u;
        goto label_2172e0;
    }
    ctx->pc = 0x2172D8u;
    SET_GPR_U32(ctx, 31, 0x2172E0u);
    ctx->pc = 0x2172DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2172D8u;
    // 0x2172dc: 0x24a5a3c8  addiu       $a1, $a1, -0x5C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x2172D8u, 0x2172E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2172E0u;
label_2172e0:
    // 0x2172e0: 0x10000010  b           . + 4 + (0x10 << 2)
label_2172e4:
    if (ctx->pc == 0x2172E4u) {
        ctx->pc = 0x2172E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172E0u;
        // 0x2172e4: 0x7bb00610  lq          $s0, 0x610($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2172E8u;
        goto label_2172e8;
    }
    ctx->pc = 0x2172E0u;
    {
        const bool branch_taken_0x2172e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2172E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172E0u;
        // 0x2172e4: 0x7bb00610  lq          $s0, 0x610($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2172e0) {
            ctx->pc = 0x217324u;
            goto label_217324;
        }
    }
    ctx->pc = 0x2172E8u;
label_2172e8:
    // 0x2172e8: 0x16a20007  bne         $s5, $v0, . + 4 + (0x7 << 2)
label_2172ec:
    if (ctx->pc == 0x2172ECu) {
        ctx->pc = 0x2172ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172E8u;
        // 0x2172ec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2172F0u;
        goto label_2172f0;
    }
    ctx->pc = 0x2172E8u;
    {
        const bool branch_taken_0x2172e8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x2172ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172E8u;
        // 0x2172ec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2172e8) {
            ctx->pc = 0x217308u;
            goto label_217308;
        }
    }
    ctx->pc = 0x2172F0u;
label_2172f0:
    // 0x2172f0: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2172f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2172f4:
    // 0x2172f4: 0x8e840070  lw          $a0, 0x70($s4)
    ctx->pc = 0x2172f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2172f8:
    // 0x2172f8: 0xc10c25f  jal         func_43097C
label_2172fc:
    if (ctx->pc == 0x2172FCu) {
        ctx->pc = 0x2172FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172F8u;
        // 0x2172fc: 0x24a5a3d8  addiu       $a1, $a1, -0x5C28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217300u;
        goto label_217300;
    }
    ctx->pc = 0x2172F8u;
    SET_GPR_U32(ctx, 31, 0x217300u);
    ctx->pc = 0x2172FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2172F8u;
    // 0x2172fc: 0x24a5a3d8  addiu       $a1, $a1, -0x5C28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x2172F8u, 0x217300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217300u;
label_217300:
    // 0x217300: 0x10000008  b           . + 4 + (0x8 << 2)
label_217304:
    if (ctx->pc == 0x217304u) {
        ctx->pc = 0x217304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217300u;
        // 0x217304: 0x7bb00610  lq          $s0, 0x610($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217308u;
        goto label_217308;
    }
    ctx->pc = 0x217300u;
    {
        const bool branch_taken_0x217300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217300u;
        // 0x217304: 0x7bb00610  lq          $s0, 0x610($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217300) {
            ctx->pc = 0x217324u;
            goto label_217324;
        }
    }
    ctx->pc = 0x217308u;
label_217308:
    // 0x217308: 0x16a20006  bne         $s5, $v0, . + 4 + (0x6 << 2)
label_21730c:
    if (ctx->pc == 0x21730Cu) {
        ctx->pc = 0x21730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217308u;
        // 0x21730c: 0x7bb00610  lq          $s0, 0x610($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217310u;
        goto label_217310;
    }
    ctx->pc = 0x217308u;
    {
        const bool branch_taken_0x217308 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x21730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217308u;
        // 0x21730c: 0x7bb00610  lq          $s0, 0x610($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217308) {
            ctx->pc = 0x217324u;
            goto label_217324;
        }
    }
    ctx->pc = 0x217310u;
label_217310:
    // 0x217310: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x217310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_217314:
    // 0x217314: 0x8e840070  lw          $a0, 0x70($s4)
    ctx->pc = 0x217314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_217318:
    // 0x217318: 0xc10c25f  jal         func_43097C
label_21731c:
    if (ctx->pc == 0x21731Cu) {
        ctx->pc = 0x21731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217318u;
        // 0x21731c: 0x24a5a3e8  addiu       $a1, $a1, -0x5C18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217320u;
        goto label_217320;
    }
    ctx->pc = 0x217318u;
    SET_GPR_U32(ctx, 31, 0x217320u);
    ctx->pc = 0x21731Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217318u;
    // 0x21731c: 0x24a5a3e8  addiu       $a1, $a1, -0x5C18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x217318u, 0x217320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217320u;
label_217320:
    // 0x217320: 0x7bb00610  lq          $s0, 0x610($sp)
    ctx->pc = 0x217320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1552)));
label_217324:
    // 0x217324: 0x7bb10600  lq          $s1, 0x600($sp)
    ctx->pc = 0x217324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1536)));
label_217328:
    // 0x217328: 0x7bb205f0  lq          $s2, 0x5F0($sp)
    ctx->pc = 0x217328u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1520)));
label_21732c:
    // 0x21732c: 0x7bb305e0  lq          $s3, 0x5E0($sp)
    ctx->pc = 0x21732cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1504)));
label_217330:
    // 0x217330: 0x7bb405d0  lq          $s4, 0x5D0($sp)
    ctx->pc = 0x217330u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1488)));
label_217334:
    // 0x217334: 0x7bb505c0  lq          $s5, 0x5C0($sp)
    ctx->pc = 0x217334u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1472)));
label_217338:
    // 0x217338: 0x7bb605b0  lq          $s6, 0x5B0($sp)
    ctx->pc = 0x217338u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1456)));
label_21733c:
    // 0x21733c: 0x7bb705a0  lq          $s7, 0x5A0($sp)
    ctx->pc = 0x21733cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1440)));
label_217340:
    // 0x217340: 0x7bbe0590  lq          $fp, 0x590($sp)
    ctx->pc = 0x217340u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1424)));
label_217344:
    // 0x217344: 0xdfbf0580  ld          $ra, 0x580($sp)
    ctx->pc = 0x217344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1408)));
label_217348:
    // 0x217348: 0x3e00008  jr          $ra
label_21734c:
    if (ctx->pc == 0x21734Cu) {
        ctx->pc = 0x21734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217348u;
        // 0x21734c: 0x27bd0620  addiu       $sp, $sp, 0x620 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217350u;
        goto label_fallthrough_0x217348;
    }
    ctx->pc = 0x217348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217348u;
        // 0x21734c: 0x27bd0620  addiu       $sp, $sp, 0x620 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x217348:
    ctx->pc = 0x217350u;
}
