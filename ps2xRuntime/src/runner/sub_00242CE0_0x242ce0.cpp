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

// Function: sub_00242CE0
// Address: 0x242ce0 - 0x2432b0
void sub_00242CE0_0x242ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242CE0_0x242ce0");
#endif

    switch (ctx->pc) {
        case 0x242ce0u: goto label_242ce0;
        case 0x242ce4u: goto label_242ce4;
        case 0x242ce8u: goto label_242ce8;
        case 0x242cecu: goto label_242cec;
        case 0x242cf0u: goto label_242cf0;
        case 0x242cf4u: goto label_242cf4;
        case 0x242cf8u: goto label_242cf8;
        case 0x242cfcu: goto label_242cfc;
        case 0x242d00u: goto label_242d00;
        case 0x242d04u: goto label_242d04;
        case 0x242d08u: goto label_242d08;
        case 0x242d0cu: goto label_242d0c;
        case 0x242d10u: goto label_242d10;
        case 0x242d14u: goto label_242d14;
        case 0x242d18u: goto label_242d18;
        case 0x242d1cu: goto label_242d1c;
        case 0x242d20u: goto label_242d20;
        case 0x242d24u: goto label_242d24;
        case 0x242d28u: goto label_242d28;
        case 0x242d2cu: goto label_242d2c;
        case 0x242d30u: goto label_242d30;
        case 0x242d34u: goto label_242d34;
        case 0x242d38u: goto label_242d38;
        case 0x242d3cu: goto label_242d3c;
        case 0x242d40u: goto label_242d40;
        case 0x242d44u: goto label_242d44;
        case 0x242d48u: goto label_242d48;
        case 0x242d4cu: goto label_242d4c;
        case 0x242d50u: goto label_242d50;
        case 0x242d54u: goto label_242d54;
        case 0x242d58u: goto label_242d58;
        case 0x242d5cu: goto label_242d5c;
        case 0x242d60u: goto label_242d60;
        case 0x242d64u: goto label_242d64;
        case 0x242d68u: goto label_242d68;
        case 0x242d6cu: goto label_242d6c;
        case 0x242d70u: goto label_242d70;
        case 0x242d74u: goto label_242d74;
        case 0x242d78u: goto label_242d78;
        case 0x242d7cu: goto label_242d7c;
        case 0x242d80u: goto label_242d80;
        case 0x242d84u: goto label_242d84;
        case 0x242d88u: goto label_242d88;
        case 0x242d8cu: goto label_242d8c;
        case 0x242d90u: goto label_242d90;
        case 0x242d94u: goto label_242d94;
        case 0x242d98u: goto label_242d98;
        case 0x242d9cu: goto label_242d9c;
        case 0x242da0u: goto label_242da0;
        case 0x242da4u: goto label_242da4;
        case 0x242da8u: goto label_242da8;
        case 0x242dacu: goto label_242dac;
        case 0x242db0u: goto label_242db0;
        case 0x242db4u: goto label_242db4;
        case 0x242db8u: goto label_242db8;
        case 0x242dbcu: goto label_242dbc;
        case 0x242dc0u: goto label_242dc0;
        case 0x242dc4u: goto label_242dc4;
        case 0x242dc8u: goto label_242dc8;
        case 0x242dccu: goto label_242dcc;
        case 0x242dd0u: goto label_242dd0;
        case 0x242dd4u: goto label_242dd4;
        case 0x242dd8u: goto label_242dd8;
        case 0x242ddcu: goto label_242ddc;
        case 0x242de0u: goto label_242de0;
        case 0x242de4u: goto label_242de4;
        case 0x242de8u: goto label_242de8;
        case 0x242decu: goto label_242dec;
        case 0x242df0u: goto label_242df0;
        case 0x242df4u: goto label_242df4;
        case 0x242df8u: goto label_242df8;
        case 0x242dfcu: goto label_242dfc;
        case 0x242e00u: goto label_242e00;
        case 0x242e04u: goto label_242e04;
        case 0x242e08u: goto label_242e08;
        case 0x242e0cu: goto label_242e0c;
        case 0x242e10u: goto label_242e10;
        case 0x242e14u: goto label_242e14;
        case 0x242e18u: goto label_242e18;
        case 0x242e1cu: goto label_242e1c;
        case 0x242e20u: goto label_242e20;
        case 0x242e24u: goto label_242e24;
        case 0x242e28u: goto label_242e28;
        case 0x242e2cu: goto label_242e2c;
        case 0x242e30u: goto label_242e30;
        case 0x242e34u: goto label_242e34;
        case 0x242e38u: goto label_242e38;
        case 0x242e3cu: goto label_242e3c;
        case 0x242e40u: goto label_242e40;
        case 0x242e44u: goto label_242e44;
        case 0x242e48u: goto label_242e48;
        case 0x242e4cu: goto label_242e4c;
        case 0x242e50u: goto label_242e50;
        case 0x242e54u: goto label_242e54;
        case 0x242e58u: goto label_242e58;
        case 0x242e5cu: goto label_242e5c;
        case 0x242e60u: goto label_242e60;
        case 0x242e64u: goto label_242e64;
        case 0x242e68u: goto label_242e68;
        case 0x242e6cu: goto label_242e6c;
        case 0x242e70u: goto label_242e70;
        case 0x242e74u: goto label_242e74;
        case 0x242e78u: goto label_242e78;
        case 0x242e7cu: goto label_242e7c;
        case 0x242e80u: goto label_242e80;
        case 0x242e84u: goto label_242e84;
        case 0x242e88u: goto label_242e88;
        case 0x242e8cu: goto label_242e8c;
        case 0x242e90u: goto label_242e90;
        case 0x242e94u: goto label_242e94;
        case 0x242e98u: goto label_242e98;
        case 0x242e9cu: goto label_242e9c;
        case 0x242ea0u: goto label_242ea0;
        case 0x242ea4u: goto label_242ea4;
        case 0x242ea8u: goto label_242ea8;
        case 0x242eacu: goto label_242eac;
        case 0x242eb0u: goto label_242eb0;
        case 0x242eb4u: goto label_242eb4;
        case 0x242eb8u: goto label_242eb8;
        case 0x242ebcu: goto label_242ebc;
        case 0x242ec0u: goto label_242ec0;
        case 0x242ec4u: goto label_242ec4;
        case 0x242ec8u: goto label_242ec8;
        case 0x242eccu: goto label_242ecc;
        case 0x242ed0u: goto label_242ed0;
        case 0x242ed4u: goto label_242ed4;
        case 0x242ed8u: goto label_242ed8;
        case 0x242edcu: goto label_242edc;
        case 0x242ee0u: goto label_242ee0;
        case 0x242ee4u: goto label_242ee4;
        case 0x242ee8u: goto label_242ee8;
        case 0x242eecu: goto label_242eec;
        case 0x242ef0u: goto label_242ef0;
        case 0x242ef4u: goto label_242ef4;
        case 0x242ef8u: goto label_242ef8;
        case 0x242efcu: goto label_242efc;
        case 0x242f00u: goto label_242f00;
        case 0x242f04u: goto label_242f04;
        case 0x242f08u: goto label_242f08;
        case 0x242f0cu: goto label_242f0c;
        case 0x242f10u: goto label_242f10;
        case 0x242f14u: goto label_242f14;
        case 0x242f18u: goto label_242f18;
        case 0x242f1cu: goto label_242f1c;
        case 0x242f20u: goto label_242f20;
        case 0x242f24u: goto label_242f24;
        case 0x242f28u: goto label_242f28;
        case 0x242f2cu: goto label_242f2c;
        case 0x242f30u: goto label_242f30;
        case 0x242f34u: goto label_242f34;
        case 0x242f38u: goto label_242f38;
        case 0x242f3cu: goto label_242f3c;
        case 0x242f40u: goto label_242f40;
        case 0x242f44u: goto label_242f44;
        case 0x242f48u: goto label_242f48;
        case 0x242f4cu: goto label_242f4c;
        case 0x242f50u: goto label_242f50;
        case 0x242f54u: goto label_242f54;
        case 0x242f58u: goto label_242f58;
        case 0x242f5cu: goto label_242f5c;
        case 0x242f60u: goto label_242f60;
        case 0x242f64u: goto label_242f64;
        case 0x242f68u: goto label_242f68;
        case 0x242f6cu: goto label_242f6c;
        case 0x242f70u: goto label_242f70;
        case 0x242f74u: goto label_242f74;
        case 0x242f78u: goto label_242f78;
        case 0x242f7cu: goto label_242f7c;
        case 0x242f80u: goto label_242f80;
        case 0x242f84u: goto label_242f84;
        case 0x242f88u: goto label_242f88;
        case 0x242f8cu: goto label_242f8c;
        case 0x242f90u: goto label_242f90;
        case 0x242f94u: goto label_242f94;
        case 0x242f98u: goto label_242f98;
        case 0x242f9cu: goto label_242f9c;
        case 0x242fa0u: goto label_242fa0;
        case 0x242fa4u: goto label_242fa4;
        case 0x242fa8u: goto label_242fa8;
        case 0x242facu: goto label_242fac;
        case 0x242fb0u: goto label_242fb0;
        case 0x242fb4u: goto label_242fb4;
        case 0x242fb8u: goto label_242fb8;
        case 0x242fbcu: goto label_242fbc;
        case 0x242fc0u: goto label_242fc0;
        case 0x242fc4u: goto label_242fc4;
        case 0x242fc8u: goto label_242fc8;
        case 0x242fccu: goto label_242fcc;
        case 0x242fd0u: goto label_242fd0;
        case 0x242fd4u: goto label_242fd4;
        case 0x242fd8u: goto label_242fd8;
        case 0x242fdcu: goto label_242fdc;
        case 0x242fe0u: goto label_242fe0;
        case 0x242fe4u: goto label_242fe4;
        case 0x242fe8u: goto label_242fe8;
        case 0x242fecu: goto label_242fec;
        case 0x242ff0u: goto label_242ff0;
        case 0x242ff4u: goto label_242ff4;
        case 0x242ff8u: goto label_242ff8;
        case 0x242ffcu: goto label_242ffc;
        case 0x243000u: goto label_243000;
        case 0x243004u: goto label_243004;
        case 0x243008u: goto label_243008;
        case 0x24300cu: goto label_24300c;
        case 0x243010u: goto label_243010;
        case 0x243014u: goto label_243014;
        case 0x243018u: goto label_243018;
        case 0x24301cu: goto label_24301c;
        case 0x243020u: goto label_243020;
        case 0x243024u: goto label_243024;
        case 0x243028u: goto label_243028;
        case 0x24302cu: goto label_24302c;
        case 0x243030u: goto label_243030;
        case 0x243034u: goto label_243034;
        case 0x243038u: goto label_243038;
        case 0x24303cu: goto label_24303c;
        case 0x243040u: goto label_243040;
        case 0x243044u: goto label_243044;
        case 0x243048u: goto label_243048;
        case 0x24304cu: goto label_24304c;
        case 0x243050u: goto label_243050;
        case 0x243054u: goto label_243054;
        case 0x243058u: goto label_243058;
        case 0x24305cu: goto label_24305c;
        case 0x243060u: goto label_243060;
        case 0x243064u: goto label_243064;
        case 0x243068u: goto label_243068;
        case 0x24306cu: goto label_24306c;
        case 0x243070u: goto label_243070;
        case 0x243074u: goto label_243074;
        case 0x243078u: goto label_243078;
        case 0x24307cu: goto label_24307c;
        case 0x243080u: goto label_243080;
        case 0x243084u: goto label_243084;
        case 0x243088u: goto label_243088;
        case 0x24308cu: goto label_24308c;
        case 0x243090u: goto label_243090;
        case 0x243094u: goto label_243094;
        case 0x243098u: goto label_243098;
        case 0x24309cu: goto label_24309c;
        case 0x2430a0u: goto label_2430a0;
        case 0x2430a4u: goto label_2430a4;
        case 0x2430a8u: goto label_2430a8;
        case 0x2430acu: goto label_2430ac;
        case 0x2430b0u: goto label_2430b0;
        case 0x2430b4u: goto label_2430b4;
        case 0x2430b8u: goto label_2430b8;
        case 0x2430bcu: goto label_2430bc;
        case 0x2430c0u: goto label_2430c0;
        case 0x2430c4u: goto label_2430c4;
        case 0x2430c8u: goto label_2430c8;
        case 0x2430ccu: goto label_2430cc;
        case 0x2430d0u: goto label_2430d0;
        case 0x2430d4u: goto label_2430d4;
        case 0x2430d8u: goto label_2430d8;
        case 0x2430dcu: goto label_2430dc;
        case 0x2430e0u: goto label_2430e0;
        case 0x2430e4u: goto label_2430e4;
        case 0x2430e8u: goto label_2430e8;
        case 0x2430ecu: goto label_2430ec;
        case 0x2430f0u: goto label_2430f0;
        case 0x2430f4u: goto label_2430f4;
        case 0x2430f8u: goto label_2430f8;
        case 0x2430fcu: goto label_2430fc;
        case 0x243100u: goto label_243100;
        case 0x243104u: goto label_243104;
        case 0x243108u: goto label_243108;
        case 0x24310cu: goto label_24310c;
        case 0x243110u: goto label_243110;
        case 0x243114u: goto label_243114;
        case 0x243118u: goto label_243118;
        case 0x24311cu: goto label_24311c;
        case 0x243120u: goto label_243120;
        case 0x243124u: goto label_243124;
        case 0x243128u: goto label_243128;
        case 0x24312cu: goto label_24312c;
        case 0x243130u: goto label_243130;
        case 0x243134u: goto label_243134;
        case 0x243138u: goto label_243138;
        case 0x24313cu: goto label_24313c;
        case 0x243140u: goto label_243140;
        case 0x243144u: goto label_243144;
        case 0x243148u: goto label_243148;
        case 0x24314cu: goto label_24314c;
        case 0x243150u: goto label_243150;
        case 0x243154u: goto label_243154;
        case 0x243158u: goto label_243158;
        case 0x24315cu: goto label_24315c;
        case 0x243160u: goto label_243160;
        case 0x243164u: goto label_243164;
        case 0x243168u: goto label_243168;
        case 0x24316cu: goto label_24316c;
        case 0x243170u: goto label_243170;
        case 0x243174u: goto label_243174;
        case 0x243178u: goto label_243178;
        case 0x24317cu: goto label_24317c;
        case 0x243180u: goto label_243180;
        case 0x243184u: goto label_243184;
        case 0x243188u: goto label_243188;
        case 0x24318cu: goto label_24318c;
        case 0x243190u: goto label_243190;
        case 0x243194u: goto label_243194;
        case 0x243198u: goto label_243198;
        case 0x24319cu: goto label_24319c;
        case 0x2431a0u: goto label_2431a0;
        case 0x2431a4u: goto label_2431a4;
        case 0x2431a8u: goto label_2431a8;
        case 0x2431acu: goto label_2431ac;
        case 0x2431b0u: goto label_2431b0;
        case 0x2431b4u: goto label_2431b4;
        case 0x2431b8u: goto label_2431b8;
        case 0x2431bcu: goto label_2431bc;
        case 0x2431c0u: goto label_2431c0;
        case 0x2431c4u: goto label_2431c4;
        case 0x2431c8u: goto label_2431c8;
        case 0x2431ccu: goto label_2431cc;
        case 0x2431d0u: goto label_2431d0;
        case 0x2431d4u: goto label_2431d4;
        case 0x2431d8u: goto label_2431d8;
        case 0x2431dcu: goto label_2431dc;
        case 0x2431e0u: goto label_2431e0;
        case 0x2431e4u: goto label_2431e4;
        case 0x2431e8u: goto label_2431e8;
        case 0x2431ecu: goto label_2431ec;
        case 0x2431f0u: goto label_2431f0;
        case 0x2431f4u: goto label_2431f4;
        case 0x2431f8u: goto label_2431f8;
        case 0x2431fcu: goto label_2431fc;
        case 0x243200u: goto label_243200;
        case 0x243204u: goto label_243204;
        case 0x243208u: goto label_243208;
        case 0x24320cu: goto label_24320c;
        case 0x243210u: goto label_243210;
        case 0x243214u: goto label_243214;
        case 0x243218u: goto label_243218;
        case 0x24321cu: goto label_24321c;
        case 0x243220u: goto label_243220;
        case 0x243224u: goto label_243224;
        case 0x243228u: goto label_243228;
        case 0x24322cu: goto label_24322c;
        case 0x243230u: goto label_243230;
        case 0x243234u: goto label_243234;
        case 0x243238u: goto label_243238;
        case 0x24323cu: goto label_24323c;
        case 0x243240u: goto label_243240;
        case 0x243244u: goto label_243244;
        case 0x243248u: goto label_243248;
        case 0x24324cu: goto label_24324c;
        case 0x243250u: goto label_243250;
        case 0x243254u: goto label_243254;
        case 0x243258u: goto label_243258;
        case 0x24325cu: goto label_24325c;
        case 0x243260u: goto label_243260;
        case 0x243264u: goto label_243264;
        case 0x243268u: goto label_243268;
        case 0x24326cu: goto label_24326c;
        case 0x243270u: goto label_243270;
        case 0x243274u: goto label_243274;
        case 0x243278u: goto label_243278;
        case 0x24327cu: goto label_24327c;
        case 0x243280u: goto label_243280;
        case 0x243284u: goto label_243284;
        case 0x243288u: goto label_243288;
        case 0x24328cu: goto label_24328c;
        case 0x243290u: goto label_243290;
        case 0x243294u: goto label_243294;
        case 0x243298u: goto label_243298;
        case 0x24329cu: goto label_24329c;
        case 0x2432a0u: goto label_2432a0;
        case 0x2432a4u: goto label_2432a4;
        case 0x2432a8u: goto label_2432a8;
        case 0x2432acu: goto label_2432ac;
        default: break;
    }

    ctx->pc = 0x242ce0u;

label_242ce0:
    // 0x242ce0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x242ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_242ce4:
    // 0x242ce4: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x242ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_242ce8:
    // 0x242ce8: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x242ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_242cec:
    // 0x242cec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x242cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_242cf0:
    // 0x242cf0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x242cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_242cf4:
    // 0x242cf4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x242cf4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_242cf8:
    // 0x242cf8: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x242cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_242cfc:
    // 0x242cfc: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x242cfcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_242d00:
    // 0x242d00: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x242d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_242d04:
    // 0x242d04: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x242d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_242d08:
    // 0x242d08: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x242d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_242d0c:
    // 0x242d0c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x242d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_242d10:
    // 0x242d10: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x242d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_242d14:
    // 0x242d14: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x242d14u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_242d18:
    // 0x242d18: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x242d18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_242d1c:
    // 0x242d1c: 0xc0874fa  jal         func_21D3E8
label_242d20:
    if (ctx->pc == 0x242D20u) {
        ctx->pc = 0x242D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D1Cu;
        // 0x242d20: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x242D24u;
        goto label_242d24;
    }
    ctx->pc = 0x242D1Cu;
    SET_GPR_U32(ctx, 31, 0x242D24u);
    ctx->pc = 0x242D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242D1Cu;
    // 0x242d20: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x242D1Cu, 0x242D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242D24u;
label_242d24:
    // 0x242d24: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x242d24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_242d28:
    // 0x242d28: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
label_242d2c:
    if (ctx->pc == 0x242D2Cu) {
        ctx->pc = 0x242D30u;
        goto label_242d30;
    }
    ctx->pc = 0x242D28u;
    {
        const bool branch_taken_0x242d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x242d28) {
            ctx->pc = 0x242D90u;
            goto label_242d90;
        }
    }
    ctx->pc = 0x242D30u;
label_242d30:
    // 0x242d30: 0x860201c6  lh          $v0, 0x1C6($s0)
    ctx->pc = 0x242d30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 454)));
label_242d34:
    // 0x242d34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_242d38:
    if (ctx->pc == 0x242D38u) {
        ctx->pc = 0x242D3Cu;
        goto label_242d3c;
    }
    ctx->pc = 0x242D34u;
    {
        const bool branch_taken_0x242d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242d34) {
            ctx->pc = 0x242D44u;
            goto label_242d44;
        }
    }
    ctx->pc = 0x242D3Cu;
label_242d3c:
    // 0x242d3c: 0xc088420  jal         func_221080
label_242d40:
    if (ctx->pc == 0x242D40u) {
        ctx->pc = 0x242D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D3Cu;
        // 0x242d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242D44u;
        goto label_242d44;
    }
    ctx->pc = 0x242D3Cu;
    SET_GPR_U32(ctx, 31, 0x242D44u);
    ctx->pc = 0x242D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242D3Cu;
    // 0x242d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221080u, 0x242D3Cu, 0x242D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242D44u;
label_242d44:
    // 0x242d44: 0xc089f12  jal         func_227C48
label_242d48:
    if (ctx->pc == 0x242D48u) {
        ctx->pc = 0x242D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D44u;
        // 0x242d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242D4Cu;
        goto label_242d4c;
    }
    ctx->pc = 0x242D44u;
    SET_GPR_U32(ctx, 31, 0x242D4Cu);
    ctx->pc = 0x242D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242D44u;
    // 0x242d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C48u, 0x242D44u, 0x242D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242D4Cu;
label_242d4c:
    // 0x242d4c: 0x860501be  lh          $a1, 0x1BE($s0)
    ctx->pc = 0x242d4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
label_242d50:
    // 0x242d50: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
label_242d54:
    if (ctx->pc == 0x242D54u) {
        ctx->pc = 0x242D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D50u;
        // 0x242d54: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242D58u;
        goto label_242d58;
    }
    ctx->pc = 0x242D50u;
    {
        const bool branch_taken_0x242d50 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x242D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D50u;
        // 0x242d54: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d50) {
            ctx->pc = 0x242D78u;
            goto label_242d78;
        }
    }
    ctx->pc = 0x242D58u;
label_242d58:
    // 0x242d58: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x242d58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
label_242d5c:
    // 0x242d5c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x242d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_242d60:
    // 0x242d60: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x242d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_242d64:
    // 0x242d64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x242d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_242d68:
    // 0x242d68: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x242d68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_242d6c:
    // 0x242d6c: 0x11383f  dsra32      $a3, $s1, 0
    ctx->pc = 0x242d6cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 17) >> (32 + 0));
label_242d70:
    // 0x242d70: 0x10000003  b           . + 4 + (0x3 << 2)
label_242d74:
    if (ctx->pc == 0x242D74u) {
        ctx->pc = 0x242D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D70u;
        // 0x242d74: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242D78u;
        goto label_242d78;
    }
    ctx->pc = 0x242D70u;
    {
        const bool branch_taken_0x242d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D70u;
        // 0x242d74: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d70) {
            ctx->pc = 0x242D80u;
            goto label_242d80;
        }
    }
    ctx->pc = 0x242D78u;
label_242d78:
    // 0x242d78: 0x8e0701c0  lw          $a3, 0x1C0($s0)
    ctx->pc = 0x242d78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_242d7c:
    // 0x242d7c: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x242d7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_242d80:
    // 0x242d80: 0x4a00025  bltz        $a1, . + 4 + (0x25 << 2)
label_242d84:
    if (ctx->pc == 0x242D84u) {
        ctx->pc = 0x242D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D80u;
        // 0x242d84: 0x3222ffff  andi        $v0, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242D88u;
        goto label_242d88;
    }
    ctx->pc = 0x242D80u;
    {
        const bool branch_taken_0x242d80 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x242D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D80u;
        // 0x242d84: 0x3222ffff  andi        $v0, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d80) {
            ctx->pc = 0x242E18u;
            goto label_242e18;
        }
    }
    ctx->pc = 0x242D88u;
label_242d88:
    // 0x242d88: 0x10000020  b           . + 4 + (0x20 << 2)
label_242d8c:
    if (ctx->pc == 0x242D8Cu) {
        ctx->pc = 0x242D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D88u;
        // 0x242d8c: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242D90u;
        goto label_242d90;
    }
    ctx->pc = 0x242D88u;
    {
        const bool branch_taken_0x242d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D88u;
        // 0x242d8c: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d88) {
            ctx->pc = 0x242E0Cu;
            goto label_242e0c;
        }
    }
    ctx->pc = 0x242D90u;
label_242d90:
    // 0x242d90: 0xc089e8e  jal         func_227A38
label_242d94:
    if (ctx->pc == 0x242D94u) {
        ctx->pc = 0x242D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D90u;
        // 0x242d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242D98u;
        goto label_242d98;
    }
    ctx->pc = 0x242D90u;
    SET_GPR_U32(ctx, 31, 0x242D98u);
    ctx->pc = 0x242D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242D90u;
    // 0x242d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A38u, 0x242D90u, 0x242D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242D98u;
label_242d98:
    // 0x242d98: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_242d9c:
    if (ctx->pc == 0x242D9Cu) {
        ctx->pc = 0x242DA0u;
        goto label_242da0;
    }
    ctx->pc = 0x242D98u;
    {
        const bool branch_taken_0x242d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242d98) {
            ctx->pc = 0x242E34u;
            goto label_242e34;
        }
    }
    ctx->pc = 0x242DA0u;
label_242da0:
    // 0x242da0: 0x860201c6  lh          $v0, 0x1C6($s0)
    ctx->pc = 0x242da0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 454)));
label_242da4:
    // 0x242da4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_242da8:
    if (ctx->pc == 0x242DA8u) {
        ctx->pc = 0x242DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DA4u;
        // 0x242da8: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242DACu;
        goto label_242dac;
    }
    ctx->pc = 0x242DA4u;
    {
        const bool branch_taken_0x242da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DA4u;
        // 0x242da8: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242da4) {
            ctx->pc = 0x242DB8u;
            goto label_242db8;
        }
    }
    ctx->pc = 0x242DACu;
label_242dac:
    // 0x242dac: 0xc088420  jal         func_221080
label_242db0:
    if (ctx->pc == 0x242DB0u) {
        ctx->pc = 0x242DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DACu;
        // 0x242db0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242DB4u;
        goto label_242db4;
    }
    ctx->pc = 0x242DACu;
    SET_GPR_U32(ctx, 31, 0x242DB4u);
    ctx->pc = 0x242DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242DACu;
    // 0x242db0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221080u, 0x242DACu, 0x242DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242DB4u;
label_242db4:
    // 0x242db4: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x242db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_242db8:
    // 0x242db8: 0x2446c770  addiu       $a2, $v0, -0x3890
    ctx->pc = 0x242db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952816));
label_242dbc:
    // 0x242dbc: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x242dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_242dc0:
    // 0x242dc0: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x242dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_242dc4:
    // 0x242dc4: 0xb20301c3  sdl         $v1, 0x1C3($s0)
    ctx->pc = 0x242dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 451); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_242dc8:
    // 0x242dc8: 0xb60301bc  sdr         $v1, 0x1BC($s0)
    ctx->pc = 0x242dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 444); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_242dcc:
    // 0x242dcc: 0x860501be  lh          $a1, 0x1BE($s0)
    ctx->pc = 0x242dccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
label_242dd0:
    // 0x242dd0: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
label_242dd4:
    if (ctx->pc == 0x242DD4u) {
        ctx->pc = 0x242DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DD0u;
        // 0x242dd4: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242DD8u;
        goto label_242dd8;
    }
    ctx->pc = 0x242DD0u;
    {
        const bool branch_taken_0x242dd0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x242DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DD0u;
        // 0x242dd4: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242dd0) {
            ctx->pc = 0x242DF8u;
            goto label_242df8;
        }
    }
    ctx->pc = 0x242DD8u;
label_242dd8:
    // 0x242dd8: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x242dd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
label_242ddc:
    // 0x242ddc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x242ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_242de0:
    // 0x242de0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x242de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_242de4:
    // 0x242de4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x242de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_242de8:
    // 0x242de8: 0xdc72fff8  ld          $s2, -0x8($v1)
    ctx->pc = 0x242de8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_242dec:
    // 0x242dec: 0x12383f  dsra32      $a3, $s2, 0
    ctx->pc = 0x242decu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 18) >> (32 + 0));
label_242df0:
    // 0x242df0: 0x10000003  b           . + 4 + (0x3 << 2)
label_242df4:
    if (ctx->pc == 0x242DF4u) {
        ctx->pc = 0x242DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DF0u;
        // 0x242df4: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242DF8u;
        goto label_242df8;
    }
    ctx->pc = 0x242DF0u;
    {
        const bool branch_taken_0x242df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DF0u;
        // 0x242df4: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242df0) {
            ctx->pc = 0x242E00u;
            goto label_242e00;
        }
    }
    ctx->pc = 0x242DF8u;
label_242df8:
    // 0x242df8: 0x8e0701c0  lw          $a3, 0x1C0($s0)
    ctx->pc = 0x242df8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_242dfc:
    // 0x242dfc: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x242dfcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_242e00:
    // 0x242e00: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
label_242e04:
    if (ctx->pc == 0x242E04u) {
        ctx->pc = 0x242E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E00u;
        // 0x242e04: 0x3242ffff  andi        $v0, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242E08u;
        goto label_242e08;
    }
    ctx->pc = 0x242E00u;
    {
        const bool branch_taken_0x242e00 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x242E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E00u;
        // 0x242e04: 0x3242ffff  andi        $v0, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e00) {
            ctx->pc = 0x242E18u;
            goto label_242e18;
        }
    }
    ctx->pc = 0x242E08u;
label_242e08:
    // 0x242e08: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x242e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_242e0c:
    // 0x242e0c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x242e0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_242e10:
    // 0x242e10: 0x10000002  b           . + 4 + (0x2 << 2)
label_242e14:
    if (ctx->pc == 0x242E14u) {
        ctx->pc = 0x242E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E10u;
        // 0x242e14: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242E18u;
        goto label_242e18;
    }
    ctx->pc = 0x242E10u;
    {
        const bool branch_taken_0x242e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E10u;
        // 0x242e14: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e10) {
            ctx->pc = 0x242E1Cu;
            goto label_242e1c;
        }
    }
    ctx->pc = 0x242E18u;
label_242e18:
    // 0x242e18: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x242e18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_242e1c:
    // 0x242e1c: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x242e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_242e20:
    // 0x242e20: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x242e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_242e24:
    // 0x242e24: 0xe0f809  jalr        $a3
label_242e28:
    if (ctx->pc == 0x242E28u) {
        ctx->pc = 0x242E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E24u;
        // 0x242e28: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242E2Cu;
        goto label_242e2c;
    }
    ctx->pc = 0x242E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x242E2Cu);
        ctx->pc = 0x242E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E24u;
        // 0x242e28: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242E24u, 0x242E2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x242E2Cu;
label_242e2c:
    // 0x242e2c: 0x10000113  b           . + 4 + (0x113 << 2)
label_242e30:
    if (ctx->pc == 0x242E30u) {
        ctx->pc = 0x242E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E2Cu;
        // 0x242e30: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242E34u;
        goto label_242e34;
    }
    ctx->pc = 0x242E2Cu;
    {
        const bool branch_taken_0x242e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E2Cu;
        // 0x242e30: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e2c) {
            ctx->pc = 0x24327Cu;
            goto label_24327c;
        }
    }
    ctx->pc = 0x242E34u;
label_242e34:
    // 0x242e34: 0xc089f98  jal         func_227E60
label_242e38:
    if (ctx->pc == 0x242E38u) {
        ctx->pc = 0x242E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E34u;
        // 0x242e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242E3Cu;
        goto label_242e3c;
    }
    ctx->pc = 0x242E34u;
    SET_GPR_U32(ctx, 31, 0x242E3Cu);
    ctx->pc = 0x242E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242E34u;
    // 0x242e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x242E34u, 0x242E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242E3Cu;
label_242e3c:
    // 0x242e3c: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
label_242e40:
    if (ctx->pc == 0x242E40u) {
        ctx->pc = 0x242E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E3Cu;
        // 0x242e40: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242E44u;
        goto label_242e44;
    }
    ctx->pc = 0x242E3Cu;
    {
        const bool branch_taken_0x242e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E3Cu;
        // 0x242e40: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e3c) {
            ctx->pc = 0x242F4Cu;
            goto label_242f4c;
        }
    }
    ctx->pc = 0x242E44u;
label_242e44:
    // 0x242e44: 0x8e030678  lw          $v1, 0x678($s0)
    ctx->pc = 0x242e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
label_242e48:
    // 0x242e48: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x242e48u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_242e4c:
    // 0x242e4c: 0x8c44bd30  lw          $a0, -0x42D0($v0)
    ctx->pc = 0x242e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_242e50:
    // 0x242e50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x242e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_242e54:
    // 0x242e54: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x242e54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_242e58:
    // 0x242e58: 0x2463067c  addiu       $v1, $v1, 0x67C
    ctx->pc = 0x242e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1660));
label_242e5c:
    // 0x242e5c: 0x2038821  addu        $s1, $s0, $v1
    ctx->pc = 0x242e5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_242e60:
    // 0x242e60: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x242e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_242e64:
    // 0x242e64: 0x50440033  beql        $v0, $a0, . + 4 + (0x33 << 2)
label_242e68:
    if (ctx->pc == 0x242E68u) {
        ctx->pc = 0x242E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E64u;
        // 0x242e68: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242E6Cu;
        goto label_242e6c;
    }
    ctx->pc = 0x242E64u;
    {
        const bool branch_taken_0x242e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x242e64) {
            ctx->pc = 0x242E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242E64u;
            // 0x242e68: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242F34u;
            goto label_242f34;
        }
    }
    ctx->pc = 0x242E6Cu;
label_242e6c:
    // 0x242e6c: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x242e6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_242e70:
    // 0x242e70: 0x26120090  addiu       $s2, $s0, 0x90
    ctx->pc = 0x242e70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_242e74:
    // 0x242e74: 0x1000000b  b           . + 4 + (0xB << 2)
label_242e78:
    if (ctx->pc == 0x242E78u) {
        ctx->pc = 0x242E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E74u;
        // 0x242e78: 0x3c150071  lui         $s5, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242E7Cu;
        goto label_242e7c;
    }
    ctx->pc = 0x242E74u;
    {
        const bool branch_taken_0x242e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E74u;
        // 0x242e78: 0x3c150071  lui         $s5, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e74) {
            ctx->pc = 0x242EA4u;
            goto label_242ea4;
        }
    }
    ctx->pc = 0x242E7Cu;
label_242e7c:
    // 0x242e7c: 0x0  nop
    ctx->pc = 0x242e7cu;
    // NOP
label_242e80:
    // 0x242e80: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x242e80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_242e84:
    // 0x242e84: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x242e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_242e88:
    // 0x242e88: 0xae040678  sw          $a0, 0x678($s0)
    ctx->pc = 0x242e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1656), GPR_U32(ctx, 4));
label_242e8c:
    // 0x242e8c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x242e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_242e90:
    // 0x242e90: 0x8ee2bd30  lw          $v0, -0x42D0($s7)
    ctx->pc = 0x242e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294950192)));
label_242e94:
    // 0x242e94: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
label_242e98:
    if (ctx->pc == 0x242E98u) {
        ctx->pc = 0x242E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E94u;
        // 0x242e98: 0x2c820010  sltiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242E9Cu;
        goto label_242e9c;
    }
    ctx->pc = 0x242E94u;
    {
        const bool branch_taken_0x242e94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x242E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E94u;
        // 0x242e98: 0x2c820010  sltiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e94) {
            ctx->pc = 0x242F34u;
            goto label_242f34;
        }
    }
    ctx->pc = 0x242E9Cu;
label_242e9c:
    // 0x242e9c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_242ea0:
    if (ctx->pc == 0x242EA0u) {
        ctx->pc = 0x242EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E9Cu;
        // 0x242ea0: 0x8ee2bd30  lw          $v0, -0x42D0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242EA4u;
        goto label_242ea4;
    }
    ctx->pc = 0x242E9Cu;
    {
        const bool branch_taken_0x242e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E9Cu;
        // 0x242ea0: 0x8ee2bd30  lw          $v0, -0x42D0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e9c) {
            ctx->pc = 0x242F38u;
            goto label_242f38;
        }
    }
    ctx->pc = 0x242EA4u;
label_242ea4:
    // 0x242ea4: 0xc0e4060  jal         func_390180
label_242ea8:
    if (ctx->pc == 0x242EA8u) {
        ctx->pc = 0x242EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242EA4u;
        // 0x242ea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242EACu;
        goto label_242eac;
    }
    ctx->pc = 0x242EA4u;
    SET_GPR_U32(ctx, 31, 0x242EACu);
    ctx->pc = 0x242EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242EA4u;
    // 0x242ea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x242EA4u, 0x242EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242EACu;
label_242eac:
    // 0x242eac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x242eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_242eb0:
    // 0x242eb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x242eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_242eb4:
    // 0x242eb4: 0x846500a0  lh          $a1, 0xA0($v1)
    ctx->pc = 0x242eb4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_242eb8:
    // 0x242eb8: 0x8c6600a4  lw          $a2, 0xA4($v1)
    ctx->pc = 0x242eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_242ebc:
    // 0x242ebc: 0xc0f809  jalr        $a2
label_242ec0:
    if (ctx->pc == 0x242EC0u) {
        ctx->pc = 0x242EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242EBCu;
        // 0x242ec0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242EC4u;
        goto label_242ec4;
    }
    ctx->pc = 0x242EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x242EC4u);
        ctx->pc = 0x242EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242EBCu;
        // 0x242ec0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242EBCu, 0x242EC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x242EC4u;
label_242ec4:
    // 0x242ec4: 0x86460002  lh          $a2, 0x2($s2)
    ctx->pc = 0x242ec4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_242ec8:
    // 0x242ec8: 0x26a34b00  addiu       $v1, $s5, 0x4B00
    ctx->pc = 0x242ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 19200));
label_242ecc:
    // 0x242ecc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x242eccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_242ed0:
    // 0x242ed0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x242ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_242ed4:
    // 0x242ed4: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x242ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_242ed8:
    // 0x242ed8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x242ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_242edc:
    // 0x242edc: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x242edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_242ee0:
    // 0x242ee0: 0xc136afa  jal         func_4DABE8
label_242ee4:
    if (ctx->pc == 0x242EE4u) {
        ctx->pc = 0x242EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242EE0u;
        // 0x242ee4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242EE8u;
        goto label_242ee8;
    }
    ctx->pc = 0x242EE0u;
    SET_GPR_U32(ctx, 31, 0x242EE8u);
    ctx->pc = 0x242EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242EE0u;
    // 0x242ee4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x242EE0u, 0x242EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242EE8u;
label_242ee8:
    // 0x242ee8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x242ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_242eec:
    // 0x242eec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x242eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_242ef0:
    // 0x242ef0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x242ef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_242ef4:
    // 0x242ef4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x242ef4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_242ef8:
    // 0x242ef8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x242ef8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_242efc:
    // 0x242efc: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x242efcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_242f00:
    // 0x242f00: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x242f00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_242f04:
    // 0x242f04: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x242f04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_242f08:
    // 0x242f08: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x242f08u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_242f0c:
    // 0x242f0c: 0x4a0003bf  vwaitq
    ctx->pc = 0x242f0cu;
    // VWAITQ (Q already resolved in this runtime)
label_242f10:
    // 0x242f10: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x242f10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_242f14:
    // 0x242f14: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x242f14u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_242f18:
    // 0x242f18: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x242f18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_242f1c:
    // 0x242f1c: 0x0  nop
    ctx->pc = 0x242f1cu;
    // NOP
label_242f20:
    // 0x242f20: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x242f20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_242f24:
    // 0x242f24: 0x0  nop
    ctx->pc = 0x242f24u;
    // NOP
label_242f28:
    // 0x242f28: 0x4502ffd5  bc1fl       . + 4 + (-0x2B << 2)
label_242f2c:
    if (ctx->pc == 0x242F2Cu) {
        ctx->pc = 0x242F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F28u;
        // 0x242f2c: 0x8e020678  lw          $v0, 0x678($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242F30u;
        goto label_242f30;
    }
    ctx->pc = 0x242F28u;
    {
        const bool branch_taken_0x242f28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x242f28) {
            ctx->pc = 0x242F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242F28u;
            // 0x242f2c: 0x8e020678  lw          $v0, 0x678($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242e80;
        }
    }
    ctx->pc = 0x242F30u;
label_242f30:
    // 0x242f30: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x242f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_242f34:
    // 0x242f34: 0x8ee2bd30  lw          $v0, -0x42D0($s7)
    ctx->pc = 0x242f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294950192)));
label_242f38:
    // 0x242f38: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_242f3c:
    if (ctx->pc == 0x242F3Cu) {
        ctx->pc = 0x242F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F38u;
        // 0x242f3c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242F40u;
        goto label_242f40;
    }
    ctx->pc = 0x242F38u;
    {
        const bool branch_taken_0x242f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x242F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F38u;
        // 0x242f3c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242f38) {
            ctx->pc = 0x242F4Cu;
            goto label_242f4c;
        }
    }
    ctx->pc = 0x242F40u;
label_242f40:
    // 0x242f40: 0x8e030678  lw          $v1, 0x678($s0)
    ctx->pc = 0x242f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
label_242f44:
    // 0x242f44: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_242f48:
    if (ctx->pc == 0x242F48u) {
        ctx->pc = 0x242F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F44u;
        // 0x242f48: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242F4Cu;
        goto label_242f4c;
    }
    ctx->pc = 0x242F44u;
    {
        const bool branch_taken_0x242f44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x242F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F44u;
        // 0x242f48: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242f44) {
            ctx->pc = 0x242F68u;
            goto label_242f68;
        }
    }
    ctx->pc = 0x242F4Cu;
label_242f4c:
    // 0x242f4c: 0xc088420  jal         func_221080
label_242f50:
    if (ctx->pc == 0x242F50u) {
        ctx->pc = 0x242F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F4Cu;
        // 0x242f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242F54u;
        goto label_242f54;
    }
    ctx->pc = 0x242F4Cu;
    SET_GPR_U32(ctx, 31, 0x242F54u);
    ctx->pc = 0x242F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242F4Cu;
    // 0x242f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221080u, 0x242F4Cu, 0x242F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242F54u;
label_242f54:
    // 0x242f54: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x242f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_242f58:
    // 0x242f58: 0xc0518f8  jal         func_1463E0
label_242f5c:
    if (ctx->pc == 0x242F5Cu) {
        ctx->pc = 0x242F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F58u;
        // 0x242f5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242F60u;
        goto label_242f60;
    }
    ctx->pc = 0x242F58u;
    SET_GPR_U32(ctx, 31, 0x242F60u);
    ctx->pc = 0x242F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242F58u;
    // 0x242f5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1463E0u, 0x242F58u, 0x242F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242F60u;
label_242f60:
    // 0x242f60: 0x100000c6  b           . + 4 + (0xC6 << 2)
label_242f64:
    if (ctx->pc == 0x242F64u) {
        ctx->pc = 0x242F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F60u;
        // 0x242f64: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242F68u;
        goto label_242f68;
    }
    ctx->pc = 0x242F60u;
    {
        const bool branch_taken_0x242f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F60u;
        // 0x242f64: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242f60) {
            ctx->pc = 0x24327Cu;
            goto label_24327c;
        }
    }
    ctx->pc = 0x242F68u;
label_242f68:
    // 0x242f68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x242f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_242f6c:
    // 0x242f6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x242f6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_242f70:
    // 0x242f70: 0x0  nop
    ctx->pc = 0x242f70u;
    // NOP
label_242f74:
    // 0x242f74: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x242f74u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[1]); }
label_242f78:
    // 0x242f78: 0xc136b24  jal         func_4DAC90
label_242f7c:
    if (ctx->pc == 0x242F7Cu) {
        ctx->pc = 0x242F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F78u;
        // 0x242f7c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242F80u;
        goto label_242f80;
    }
    ctx->pc = 0x242F78u;
    SET_GPR_U32(ctx, 31, 0x242F80u);
    ctx->pc = 0x242F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242F78u;
    // 0x242f7c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x242F78u, 0x242F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242F80u;
label_242f80:
    // 0x242f80: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x242f80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_242f84:
    // 0x242f84: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x242f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_242f88:
    // 0x242f88: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x242f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_242f8c:
    // 0x242f8c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x242f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_242f90:
    // 0x242f90: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x242f90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_242f94:
    // 0x242f94: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x242f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_242f98:
    // 0x242f98: 0xc0cd8ec  jal         func_3363B0
label_242f9c:
    if (ctx->pc == 0x242F9Cu) {
        ctx->pc = 0x242F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F98u;
        // 0x242f9c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242FA0u;
        goto label_242fa0;
    }
    ctx->pc = 0x242F98u;
    SET_GPR_U32(ctx, 31, 0x242FA0u);
    ctx->pc = 0x242F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242F98u;
    // 0x242f9c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x242F98u, 0x242FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242FA0u;
label_242fa0:
    // 0x242fa0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x242fa0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_242fa4:
    // 0x242fa4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x242fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_242fa8:
    // 0x242fa8: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x242fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_242fac:
    // 0x242fac: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x242facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_242fb0:
    // 0x242fb0: 0xc0cd5ea  jal         func_3357A8
label_242fb4:
    if (ctx->pc == 0x242FB4u) {
        ctx->pc = 0x242FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242FB0u;
        // 0x242fb4: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242FB8u;
        goto label_242fb8;
    }
    ctx->pc = 0x242FB0u;
    SET_GPR_U32(ctx, 31, 0x242FB8u);
    ctx->pc = 0x242FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242FB0u;
    // 0x242fb4: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x242FB0u, 0x242FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242FB8u;
label_242fb8:
    // 0x242fb8: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x242fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_242fbc:
    // 0x242fbc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x242fbcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_242fc0:
    // 0x242fc0: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x242fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_242fc4:
    // 0x242fc4: 0xc0cd5ea  jal         func_3357A8
label_242fc8:
    if (ctx->pc == 0x242FC8u) {
        ctx->pc = 0x242FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242FC4u;
        // 0x242fc8: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242FCCu;
        goto label_242fcc;
    }
    ctx->pc = 0x242FC4u;
    SET_GPR_U32(ctx, 31, 0x242FCCu);
    ctx->pc = 0x242FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242FC4u;
    // 0x242fc8: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x242FC4u, 0x242FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242FCCu;
label_242fcc:
    // 0x242fcc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x242fccu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_242fd0:
    // 0x242fd0: 0xc0884f6  jal         func_2213D8
label_242fd4:
    if (ctx->pc == 0x242FD4u) {
        ctx->pc = 0x242FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242FD0u;
        // 0x242fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242FD8u;
        goto label_242fd8;
    }
    ctx->pc = 0x242FD0u;
    SET_GPR_U32(ctx, 31, 0x242FD8u);
    ctx->pc = 0x242FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242FD0u;
    // 0x242fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x242FD0u, 0x242FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242FD8u;
label_242fd8:
    // 0x242fd8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x242fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_242fdc:
    // 0x242fdc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x242fdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_242fe0:
    // 0x242fe0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x242fe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_242fe4:
    // 0x242fe4: 0x0  nop
    ctx->pc = 0x242fe4u;
    // NOP
label_242fe8:
    // 0x242fe8: 0x46152034  c.lt.s      $f4, $f21
    ctx->pc = 0x242fe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_242fec:
    // 0x242fec: 0x0  nop
    ctx->pc = 0x242fecu;
    // NOP
label_242ff0:
    // 0x242ff0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_242ff4:
    if (ctx->pc == 0x242FF4u) {
        ctx->pc = 0x242FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242FF0u;
        // 0x242ff4: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242FF8u;
        goto label_242ff8;
    }
    ctx->pc = 0x242FF0u;
    {
        const bool branch_taken_0x242ff0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x242FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242FF0u;
        // 0x242ff4: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x242ff0) {
            ctx->pc = 0x24300Cu;
            goto label_24300c;
        }
    }
    ctx->pc = 0x242FF8u;
label_242ff8:
    // 0x242ff8: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x242ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_242ffc:
    // 0x242ffc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x242ffcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_243000:
    // 0x243000: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243004:
    // 0x243004: 0x0  nop
    ctx->pc = 0x243004u;
    // NOP
label_243008:
    // 0x243008: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x243008u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_24300c:
    // 0x24300c: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x24300cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_243010:
    // 0x243010: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x243010u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_243014:
    // 0x243014: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x243014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_243018:
    // 0x243018: 0x0  nop
    ctx->pc = 0x243018u;
    // NOP
label_24301c:
    // 0x24301c: 0x4603a836  c.le.s      $f21, $f3
    ctx->pc = 0x24301cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243020:
    // 0x243020: 0x0  nop
    ctx->pc = 0x243020u;
    // NOP
label_243024:
    // 0x243024: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_243028:
    if (ctx->pc == 0x243028u) {
        ctx->pc = 0x243028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243024u;
        // 0x243028: 0x4614a841  sub.s       $f1, $f21, $f20 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24302Cu;
        goto label_24302c;
    }
    ctx->pc = 0x243024u;
    {
        const bool branch_taken_0x243024 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243024) {
            ctx->pc = 0x243028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243024u;
            // 0x243028: 0x4614a841  sub.s       $f1, $f21, $f20 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x243044u;
            goto label_243044;
        }
    }
    ctx->pc = 0x24302Cu;
label_24302c:
    // 0x24302c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x24302cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_243030:
    // 0x243030: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x243030u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_243034:
    // 0x243034: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243038:
    // 0x243038: 0x0  nop
    ctx->pc = 0x243038u;
    // NOP
label_24303c:
    // 0x24303c: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x24303cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_243040:
    // 0x243040: 0x4614a841  sub.s       $f1, $f21, $f20
    ctx->pc = 0x243040u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
label_243044:
    // 0x243044: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x243044u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243048:
    // 0x243048: 0x0  nop
    ctx->pc = 0x243048u;
    // NOP
label_24304c:
    // 0x24304c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_243050:
    if (ctx->pc == 0x243050u) {
        ctx->pc = 0x243054u;
        goto label_243054;
    }
    ctx->pc = 0x24304Cu;
    {
        const bool branch_taken_0x24304c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24304c) {
            ctx->pc = 0x243068u;
            goto label_243068;
        }
    }
    ctx->pc = 0x243054u;
label_243054:
    // 0x243054: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x243054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_243058:
    // 0x243058: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x243058u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_24305c:
    // 0x24305c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24305cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243060:
    // 0x243060: 0x0  nop
    ctx->pc = 0x243060u;
    // NOP
label_243064:
    // 0x243064: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x243064u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_243068:
    // 0x243068: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x243068u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24306c:
    // 0x24306c: 0x0  nop
    ctx->pc = 0x24306cu;
    // NOP
label_243070:
    // 0x243070: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_243074:
    if (ctx->pc == 0x243074u) {
        ctx->pc = 0x243078u;
        goto label_243078;
    }
    ctx->pc = 0x243070u;
    {
        const bool branch_taken_0x243070 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243070) {
            ctx->pc = 0x24308Cu;
            goto label_24308c;
        }
    }
    ctx->pc = 0x243078u;
label_243078:
    // 0x243078: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x243078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_24307c:
    // 0x24307c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24307cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_243080:
    // 0x243080: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243080u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243084:
    // 0x243084: 0x0  nop
    ctx->pc = 0x243084u;
    // NOP
label_243088:
    // 0x243088: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x243088u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_24308c:
    // 0x24308c: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x24308cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
label_243090:
    // 0x243090: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x243090u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243094:
    // 0x243094: 0x0  nop
    ctx->pc = 0x243094u;
    // NOP
label_243098:
    // 0x243098: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_24309c:
    if (ctx->pc == 0x24309Cu) {
        ctx->pc = 0x2430A0u;
        goto label_2430a0;
    }
    ctx->pc = 0x243098u;
    {
        const bool branch_taken_0x243098 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243098) {
            ctx->pc = 0x2430BCu;
            goto label_2430bc;
        }
    }
    ctx->pc = 0x2430A0u;
label_2430a0:
    // 0x2430a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2430a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2430a4:
    // 0x2430a4: 0x0  nop
    ctx->pc = 0x2430a4u;
    // NOP
label_2430a8:
    // 0x2430a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2430a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2430ac:
    // 0x2430ac: 0x0  nop
    ctx->pc = 0x2430acu;
    // NOP
label_2430b0:
    // 0x2430b0: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_2430b4:
    if (ctx->pc == 0x2430B4u) {
        ctx->pc = 0x2430B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2430B0u;
        // 0x2430b4: 0x4602a540  add.s       $f21, $f20, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2430B8u;
        goto label_2430b8;
    }
    ctx->pc = 0x2430B0u;
    {
        const bool branch_taken_0x2430b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2430b0) {
            ctx->pc = 0x2430B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2430B0u;
            // 0x2430b4: 0x4602a540  add.s       $f21, $f20, $f2 (Delay Slot)
            ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2430BCu;
            goto label_2430bc;
        }
    }
    ctx->pc = 0x2430B8u;
label_2430b8:
    // 0x2430b8: 0x4602a541  sub.s       $f21, $f20, $f2
    ctx->pc = 0x2430b8u;
    ctx->f[21] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
label_2430bc:
    // 0x2430bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2430bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2430c0:
    // 0x2430c0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2430c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2430c4:
    // 0x2430c4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2430c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2430c8:
    // 0x2430c8: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x2430c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_2430cc:
    // 0x2430cc: 0x4614ad02  mul.s       $f20, $f21, $f20
    ctx->pc = 0x2430ccu;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
label_2430d0:
    // 0x2430d0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2430d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2430d4:
    // 0x2430d4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2430d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2430d8:
    // 0x2430d8: 0xc12e310  jal         func_4B8C40
label_2430dc:
    if (ctx->pc == 0x2430DCu) {
        ctx->pc = 0x2430DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2430D8u;
        // 0x2430dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2430E0u;
        goto label_2430e0;
    }
    ctx->pc = 0x2430D8u;
    SET_GPR_U32(ctx, 31, 0x2430E0u);
    ctx->pc = 0x2430DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2430D8u;
    // 0x2430dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x2430D8u, 0x2430E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2430E0u;
label_2430e0:
    // 0x2430e0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2430e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2430e4:
    // 0x2430e4: 0xc12e29c  jal         func_4B8A70
label_2430e8:
    if (ctx->pc == 0x2430E8u) {
        ctx->pc = 0x2430E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2430E4u;
        // 0x2430e8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2430ECu;
        goto label_2430ec;
    }
    ctx->pc = 0x2430E4u;
    SET_GPR_U32(ctx, 31, 0x2430ECu);
    ctx->pc = 0x2430E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2430E4u;
    // 0x2430e8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x2430E4u, 0x2430ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2430ECu;
label_2430ec:
    // 0x2430ec: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2430ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2430f0:
    // 0x2430f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2430f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2430f4:
    // 0x2430f4: 0x4405a800  mfc1        $a1, $f21
    ctx->pc = 0x2430f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_2430f8:
    // 0x2430f8: 0xe6c0000c  swc1        $f0, 0xC($s6)
    ctx->pc = 0x2430f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
label_2430fc:
    // 0x2430fc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2430fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_243100:
    // 0x243100: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x243100u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_243104:
    // 0x243104: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x243104u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_243108:
    // 0x243108: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x243108u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_24310c:
    // 0x24310c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x24310cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_243110:
    // 0x243110: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x243110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_243114:
    // 0x243114: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x243114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243118:
    // 0x243118: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x243118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24311c:
    // 0x24311c: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x24311cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_243120:
    // 0x243120: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x243120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_243124:
    // 0x243124: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x243124u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
label_243128:
    // 0x243128: 0xc0874fa  jal         func_21D3E8
label_24312c:
    if (ctx->pc == 0x24312Cu) {
        ctx->pc = 0x24312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243128u;
        // 0x24312c: 0xe6c20008  swc1        $f2, 0x8($s6) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x243130u;
        goto label_243130;
    }
    ctx->pc = 0x243128u;
    SET_GPR_U32(ctx, 31, 0x243130u);
    ctx->pc = 0x24312Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243128u;
    // 0x24312c: 0xe6c20008  swc1        $f2, 0x8($s6) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x243128u, 0x243130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243130u;
label_243130:
    // 0x243130: 0xc051fbe  jal         func_147EF8
label_243134:
    if (ctx->pc == 0x243134u) {
        ctx->pc = 0x243134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243130u;
        // 0x243134: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243138u;
        goto label_243138;
    }
    ctx->pc = 0x243130u;
    SET_GPR_U32(ctx, 31, 0x243138u);
    ctx->pc = 0x243134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243130u;
    // 0x243134: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x243130u, 0x243138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243138u;
label_243138:
    // 0x243138: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x243138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_24313c:
    // 0x24313c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_243140:
    if (ctx->pc == 0x243140u) {
        ctx->pc = 0x243140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24313Cu;
        // 0x243140: 0x8e020674  lw          $v0, 0x674($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1652)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243144u;
        goto label_243144;
    }
    ctx->pc = 0x24313Cu;
    {
        const bool branch_taken_0x24313c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x243140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24313Cu;
        // 0x243140: 0x8e020674  lw          $v0, 0x674($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1652)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24313c) {
            ctx->pc = 0x243150u;
            goto label_243150;
        }
    }
    ctx->pc = 0x243144u;
label_243144:
    // 0x243144: 0xae000674  sw          $zero, 0x674($s0)
    ctx->pc = 0x243144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1652), GPR_U32(ctx, 0));
label_243148:
    // 0x243148: 0x10000003  b           . + 4 + (0x3 << 2)
label_24314c:
    if (ctx->pc == 0x24314Cu) {
        ctx->pc = 0x24314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243148u;
        // 0x24314c: 0xae020670  sw          $v0, 0x670($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1648), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243150u;
        goto label_243150;
    }
    ctx->pc = 0x243148u;
    {
        const bool branch_taken_0x243148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243148u;
        // 0x24314c: 0xae020670  sw          $v0, 0x670($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1648), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243148) {
            ctx->pc = 0x243158u;
            goto label_243158;
        }
    }
    ctx->pc = 0x243150u;
label_243150:
    // 0x243150: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x243150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_243154:
    // 0x243154: 0xae020674  sw          $v0, 0x674($s0)
    ctx->pc = 0x243154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1652), GPR_U32(ctx, 2));
label_243158:
    // 0x243158: 0x8e020674  lw          $v0, 0x674($s0)
    ctx->pc = 0x243158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1652)));
label_24315c:
    // 0x24315c: 0x2842000b  slti        $v0, $v0, 0xB
    ctx->pc = 0x24315cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
label_243160:
    // 0x243160: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_243164:
    if (ctx->pc == 0x243164u) {
        ctx->pc = 0x243164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243160u;
        // 0x243164: 0x8e020670  lw          $v0, 0x670($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243168u;
        goto label_243168;
    }
    ctx->pc = 0x243160u;
    {
        const bool branch_taken_0x243160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243160) {
            ctx->pc = 0x243164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243160u;
            // 0x243164: 0x8e020670  lw          $v0, 0x670($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243178u;
            goto label_243178;
        }
    }
    ctx->pc = 0x243168u;
label_243168:
    // 0x243168: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x243168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_24316c:
    // 0x24316c: 0xae020670  sw          $v0, 0x670($s0)
    ctx->pc = 0x24316cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1648), GPR_U32(ctx, 2));
label_243170:
    // 0x243170: 0xae020674  sw          $v0, 0x674($s0)
    ctx->pc = 0x243170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1652), GPR_U32(ctx, 2));
label_243174:
    // 0x243174: 0x8e020670  lw          $v0, 0x670($s0)
    ctx->pc = 0x243174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
label_243178:
    // 0x243178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24317c:
    // 0x24317c: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x24317cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
label_243180:
    // 0x243180: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x243180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_243184:
    // 0x243184: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x243184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_243188:
    // 0x243188: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x243188u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_24318c:
    // 0x24318c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24318cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_243190:
    // 0x243190: 0x0  nop
    ctx->pc = 0x243190u;
    // NOP
label_243194:
    // 0x243194: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x243194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_243198:
    // 0x243198: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x243198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_24319c:
    // 0x24319c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x24319cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2431a0:
    // 0x2431a0: 0x46030d02  mul.s       $f20, $f1, $f3
    ctx->pc = 0x2431a0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_2431a4:
    // 0x2431a4: 0x4614b028  max.s       $f0, $f22, $f20
    ctx->pc = 0x2431a4u;
    ctx->f[0] = std::max(ctx->f[22], ctx->f[20]);
label_2431a8:
    // 0x2431a8: 0x46001029  min.s       $f0, $f2, $f0
    ctx->pc = 0x2431a8u;
    ctx->f[0] = std::min(ctx->f[2], ctx->f[0]);
label_2431ac:
    // 0x2431ac: 0xc0885b0  jal         func_2216C0
label_2431b0:
    if (ctx->pc == 0x2431B0u) {
        ctx->pc = 0x2431B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2431ACu;
        // 0x2431b0: 0x46001501  sub.s       $f20, $f2, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2431B4u;
        goto label_2431b4;
    }
    ctx->pc = 0x2431ACu;
    SET_GPR_U32(ctx, 31, 0x2431B4u);
    ctx->pc = 0x2431B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2431ACu;
    // 0x2431b0: 0x46001501  sub.s       $f20, $f2, $f0 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2216C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2216C0u, 0x2431ACu, 0x2431B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2431B4u;
label_2431b4:
    // 0x2431b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2431b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2431b8:
    // 0x2431b8: 0xc0e87c0  jal         func_3A1F00
label_2431bc:
    if (ctx->pc == 0x2431BCu) {
        ctx->pc = 0x2431BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2431B8u;
        // 0x2431bc: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2431C0u;
        goto label_2431c0;
    }
    ctx->pc = 0x2431B8u;
    SET_GPR_U32(ctx, 31, 0x2431C0u);
    ctx->pc = 0x2431BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2431B8u;
    // 0x2431bc: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x2431B8u, 0x2431C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2431C0u;
label_2431c0:
    // 0x2431c0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2431c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2431c4:
    // 0x2431c4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2431c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2431c8:
    // 0x2431c8: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2431c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2431cc:
    // 0x2431cc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2431ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2431d0:
    // 0x2431d0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2431d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2431d4:
    // 0x2431d4: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2431d4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_2431d8:
    // 0x2431d8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2431d8u;
    // VWAITQ (Q already resolved in this runtime)
label_2431dc:
    // 0x2431dc: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2431dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2431e0:
    // 0x2431e0: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x2431e0u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_2431e4:
    // 0x2431e4: 0x4486a800  mtc1        $a2, $f21
    ctx->pc = 0x2431e4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2431e8:
    // 0x2431e8: 0x0  nop
    ctx->pc = 0x2431e8u;
    // NOP
label_2431ec:
    // 0x2431ec: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x2431ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2431f0:
    // 0x2431f0: 0x0  nop
    ctx->pc = 0x2431f0u;
    // NOP
label_2431f4:
    // 0x2431f4: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_2431f8:
    if (ctx->pc == 0x2431F8u) {
        ctx->pc = 0x2431F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2431F4u;
        // 0x2431f8: 0xe6940004  swc1        $f20, 0x4($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2431FCu;
        goto label_2431fc;
    }
    ctx->pc = 0x2431F4u;
    {
        const bool branch_taken_0x2431f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2431f4) {
            ctx->pc = 0x2431F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2431F4u;
            // 0x2431f8: 0xe6940004  swc1        $f20, 0x4($s4) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x243218u;
            goto label_243218;
        }
    }
    ctx->pc = 0x2431FCu;
label_2431fc:
    // 0x2431fc: 0xc0885b0  jal         func_2216C0
label_243200:
    if (ctx->pc == 0x243200u) {
        ctx->pc = 0x243200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2431FCu;
        // 0x243200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243204u;
        goto label_243204;
    }
    ctx->pc = 0x2431FCu;
    SET_GPR_U32(ctx, 31, 0x243204u);
    ctx->pc = 0x243200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2431FCu;
    // 0x243200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2216C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2216C0u, 0x2431FCu, 0x243204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243204u;
label_243204:
    // 0x243204: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x243204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243208:
    // 0x243208: 0x0  nop
    ctx->pc = 0x243208u;
    // NOP
label_24320c:
    // 0x24320c: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_243210:
    if (ctx->pc == 0x243210u) {
        ctx->pc = 0x243210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24320Cu;
        // 0x243210: 0x4614a801  sub.s       $f0, $f21, $f20 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x243214u;
        goto label_243214;
    }
    ctx->pc = 0x24320Cu;
    {
        const bool branch_taken_0x24320c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24320c) {
            ctx->pc = 0x243210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24320Cu;
            // 0x243210: 0x4614a801  sub.s       $f0, $f21, $f20 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x243230u;
            goto label_243230;
        }
    }
    ctx->pc = 0x243214u;
label_243214:
    // 0x243214: 0xe6940004  swc1        $f20, 0x4($s4)
    ctx->pc = 0x243214u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_243218:
    // 0x243218: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x243218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_24321c:
    // 0x24321c: 0xe6960008  swc1        $f22, 0x8($s4)
    ctx->pc = 0x24321cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_243220:
    // 0x243220: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x243220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_243224:
    // 0x243224: 0xe6960000  swc1        $f22, 0x0($s4)
    ctx->pc = 0x243224u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_243228:
    // 0x243228: 0x1000000c  b           . + 4 + (0xC << 2)
label_24322c:
    if (ctx->pc == 0x24322Cu) {
        ctx->pc = 0x24322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243228u;
        // 0x24322c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243230u;
        goto label_243230;
    }
    ctx->pc = 0x243228u;
    {
        const bool branch_taken_0x243228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243228u;
        // 0x24322c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243228) {
            ctx->pc = 0x24325Cu;
            goto label_24325c;
        }
    }
    ctx->pc = 0x243230u;
label_243230:
    // 0x243230: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x243230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
label_243234:
    // 0x243234: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x243234u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_243238:
    // 0x243238: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x243238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24323c:
    // 0x24323c: 0xe6960008  swc1        $f22, 0x8($s4)
    ctx->pc = 0x24323cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_243240:
    // 0x243240: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x243240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_243244:
    // 0x243244: 0xe6960000  swc1        $f22, 0x0($s4)
    ctx->pc = 0x243244u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_243248:
    // 0x243248: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x243248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_24324c:
    // 0x24324c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24324cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_243250:
    // 0x243250: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x243250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_243254:
    // 0x243254: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x243254u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_243258:
    // 0x243258: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x243258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_24325c:
    // 0x24325c: 0xc136b30  jal         func_4DACC0
label_243260:
    if (ctx->pc == 0x243260u) {
        ctx->pc = 0x243264u;
        goto label_243264;
    }
    ctx->pc = 0x24325Cu;
    SET_GPR_U32(ctx, 31, 0x243264u);
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x24325Cu, 0x243264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243264u;
label_243264:
    // 0x243264: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x243264u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_243268:
    // 0x243268: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x243268u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
label_24326c:
    // 0x24326c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x24326cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_243270:
    // 0x243270: 0xae00029c  sw          $zero, 0x29C($s0)
    ctx->pc = 0x243270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 0));
label_243274:
    // 0x243274: 0xae000298  sw          $zero, 0x298($s0)
    ctx->pc = 0x243274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 0));
label_243278:
    // 0x243278: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x243278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_24327c:
    // 0x24327c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x24327cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_243280:
    // 0x243280: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x243280u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_243284:
    // 0x243284: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x243284u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_243288:
    // 0x243288: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x243288u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_24328c:
    // 0x24328c: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x24328cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_243290:
    // 0x243290: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x243290u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_243294:
    // 0x243294: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x243294u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_243298:
    // 0x243298: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x243298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_24329c:
    // 0x24329c: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x24329cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2432a0:
    // 0x2432a0: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x2432a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2432a4:
    // 0x2432a4: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x2432a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2432a8:
    // 0x2432a8: 0x3e00008  jr          $ra
label_2432ac:
    if (ctx->pc == 0x2432ACu) {
        ctx->pc = 0x2432ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2432A8u;
        // 0x2432ac: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2432B0u;
        goto label_fallthrough_0x2432a8;
    }
    ctx->pc = 0x2432A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2432ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2432A8u;
        // 0x2432ac: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2432A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2432a8:
    ctx->pc = 0x2432B0u;
}
