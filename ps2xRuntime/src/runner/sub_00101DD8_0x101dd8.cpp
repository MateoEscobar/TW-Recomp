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

// Function: sub_00101DD8
// Address: 0x101dd8 - 0x103e90
void sub_00101DD8_0x101dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101DD8_0x101dd8");
#endif

    switch (ctx->pc) {
        case 0x101dd8u: goto label_101dd8;
        case 0x101ddcu: goto label_101ddc;
        case 0x101de0u: goto label_101de0;
        case 0x101de4u: goto label_101de4;
        case 0x101de8u: goto label_101de8;
        case 0x101decu: goto label_101dec;
        case 0x101df0u: goto label_101df0;
        case 0x101df4u: goto label_101df4;
        case 0x101df8u: goto label_101df8;
        case 0x101dfcu: goto label_101dfc;
        case 0x101e00u: goto label_101e00;
        case 0x101e04u: goto label_101e04;
        case 0x101e08u: goto label_101e08;
        case 0x101e0cu: goto label_101e0c;
        case 0x101e10u: goto label_101e10;
        case 0x101e14u: goto label_101e14;
        case 0x101e18u: goto label_101e18;
        case 0x101e1cu: goto label_101e1c;
        case 0x101e20u: goto label_101e20;
        case 0x101e24u: goto label_101e24;
        case 0x101e28u: goto label_101e28;
        case 0x101e2cu: goto label_101e2c;
        case 0x101e30u: goto label_101e30;
        case 0x101e34u: goto label_101e34;
        case 0x101e38u: goto label_101e38;
        case 0x101e3cu: goto label_101e3c;
        case 0x101e40u: goto label_101e40;
        case 0x101e44u: goto label_101e44;
        case 0x101e48u: goto label_101e48;
        case 0x101e4cu: goto label_101e4c;
        case 0x101e50u: goto label_101e50;
        case 0x101e54u: goto label_101e54;
        case 0x101e58u: goto label_101e58;
        case 0x101e5cu: goto label_101e5c;
        case 0x101e60u: goto label_101e60;
        case 0x101e64u: goto label_101e64;
        case 0x101e68u: goto label_101e68;
        case 0x101e6cu: goto label_101e6c;
        case 0x101e70u: goto label_101e70;
        case 0x101e74u: goto label_101e74;
        case 0x101e78u: goto label_101e78;
        case 0x101e7cu: goto label_101e7c;
        case 0x101e80u: goto label_101e80;
        case 0x101e84u: goto label_101e84;
        case 0x101e88u: goto label_101e88;
        case 0x101e8cu: goto label_101e8c;
        case 0x101e90u: goto label_101e90;
        case 0x101e94u: goto label_101e94;
        case 0x101e98u: goto label_101e98;
        case 0x101e9cu: goto label_101e9c;
        case 0x101ea0u: goto label_101ea0;
        case 0x101ea4u: goto label_101ea4;
        case 0x101ea8u: goto label_101ea8;
        case 0x101eacu: goto label_101eac;
        case 0x101eb0u: goto label_101eb0;
        case 0x101eb4u: goto label_101eb4;
        case 0x101eb8u: goto label_101eb8;
        case 0x101ebcu: goto label_101ebc;
        case 0x101ec0u: goto label_101ec0;
        case 0x101ec4u: goto label_101ec4;
        case 0x101ec8u: goto label_101ec8;
        case 0x101eccu: goto label_101ecc;
        case 0x101ed0u: goto label_101ed0;
        case 0x101ed4u: goto label_101ed4;
        case 0x101ed8u: goto label_101ed8;
        case 0x101edcu: goto label_101edc;
        case 0x101ee0u: goto label_101ee0;
        case 0x101ee4u: goto label_101ee4;
        case 0x101ee8u: goto label_101ee8;
        case 0x101eecu: goto label_101eec;
        case 0x101ef0u: goto label_101ef0;
        case 0x101ef4u: goto label_101ef4;
        case 0x101ef8u: goto label_101ef8;
        case 0x101efcu: goto label_101efc;
        case 0x101f00u: goto label_101f00;
        case 0x101f04u: goto label_101f04;
        case 0x101f08u: goto label_101f08;
        case 0x101f0cu: goto label_101f0c;
        case 0x101f10u: goto label_101f10;
        case 0x101f14u: goto label_101f14;
        case 0x101f18u: goto label_101f18;
        case 0x101f1cu: goto label_101f1c;
        case 0x101f20u: goto label_101f20;
        case 0x101f24u: goto label_101f24;
        case 0x101f28u: goto label_101f28;
        case 0x101f2cu: goto label_101f2c;
        case 0x101f30u: goto label_101f30;
        case 0x101f34u: goto label_101f34;
        case 0x101f38u: goto label_101f38;
        case 0x101f3cu: goto label_101f3c;
        case 0x101f40u: goto label_101f40;
        case 0x101f44u: goto label_101f44;
        case 0x101f48u: goto label_101f48;
        case 0x101f4cu: goto label_101f4c;
        case 0x101f50u: goto label_101f50;
        case 0x101f54u: goto label_101f54;
        case 0x101f58u: goto label_101f58;
        case 0x101f5cu: goto label_101f5c;
        case 0x101f60u: goto label_101f60;
        case 0x101f64u: goto label_101f64;
        case 0x101f68u: goto label_101f68;
        case 0x101f6cu: goto label_101f6c;
        case 0x101f70u: goto label_101f70;
        case 0x101f74u: goto label_101f74;
        case 0x101f78u: goto label_101f78;
        case 0x101f7cu: goto label_101f7c;
        case 0x101f80u: goto label_101f80;
        case 0x101f84u: goto label_101f84;
        case 0x101f88u: goto label_101f88;
        case 0x101f8cu: goto label_101f8c;
        case 0x101f90u: goto label_101f90;
        case 0x101f94u: goto label_101f94;
        case 0x101f98u: goto label_101f98;
        case 0x101f9cu: goto label_101f9c;
        case 0x101fa0u: goto label_101fa0;
        case 0x101fa4u: goto label_101fa4;
        case 0x101fa8u: goto label_101fa8;
        case 0x101facu: goto label_101fac;
        case 0x101fb0u: goto label_101fb0;
        case 0x101fb4u: goto label_101fb4;
        case 0x101fb8u: goto label_101fb8;
        case 0x101fbcu: goto label_101fbc;
        case 0x101fc0u: goto label_101fc0;
        case 0x101fc4u: goto label_101fc4;
        case 0x101fc8u: goto label_101fc8;
        case 0x101fccu: goto label_101fcc;
        case 0x101fd0u: goto label_101fd0;
        case 0x101fd4u: goto label_101fd4;
        case 0x101fd8u: goto label_101fd8;
        case 0x101fdcu: goto label_101fdc;
        case 0x101fe0u: goto label_101fe0;
        case 0x101fe4u: goto label_101fe4;
        case 0x101fe8u: goto label_101fe8;
        case 0x101fecu: goto label_101fec;
        case 0x101ff0u: goto label_101ff0;
        case 0x101ff4u: goto label_101ff4;
        case 0x101ff8u: goto label_101ff8;
        case 0x101ffcu: goto label_101ffc;
        case 0x102000u: goto label_102000;
        case 0x102004u: goto label_102004;
        case 0x102008u: goto label_102008;
        case 0x10200cu: goto label_10200c;
        case 0x102010u: goto label_102010;
        case 0x102014u: goto label_102014;
        case 0x102018u: goto label_102018;
        case 0x10201cu: goto label_10201c;
        case 0x102020u: goto label_102020;
        case 0x102024u: goto label_102024;
        case 0x102028u: goto label_102028;
        case 0x10202cu: goto label_10202c;
        case 0x102030u: goto label_102030;
        case 0x102034u: goto label_102034;
        case 0x102038u: goto label_102038;
        case 0x10203cu: goto label_10203c;
        case 0x102040u: goto label_102040;
        case 0x102044u: goto label_102044;
        case 0x102048u: goto label_102048;
        case 0x10204cu: goto label_10204c;
        case 0x102050u: goto label_102050;
        case 0x102054u: goto label_102054;
        case 0x102058u: goto label_102058;
        case 0x10205cu: goto label_10205c;
        case 0x102060u: goto label_102060;
        case 0x102064u: goto label_102064;
        case 0x102068u: goto label_102068;
        case 0x10206cu: goto label_10206c;
        case 0x102070u: goto label_102070;
        case 0x102074u: goto label_102074;
        case 0x102078u: goto label_102078;
        case 0x10207cu: goto label_10207c;
        case 0x102080u: goto label_102080;
        case 0x102084u: goto label_102084;
        case 0x102088u: goto label_102088;
        case 0x10208cu: goto label_10208c;
        case 0x102090u: goto label_102090;
        case 0x102094u: goto label_102094;
        case 0x102098u: goto label_102098;
        case 0x10209cu: goto label_10209c;
        case 0x1020a0u: goto label_1020a0;
        case 0x1020a4u: goto label_1020a4;
        case 0x1020a8u: goto label_1020a8;
        case 0x1020acu: goto label_1020ac;
        case 0x1020b0u: goto label_1020b0;
        case 0x1020b4u: goto label_1020b4;
        case 0x1020b8u: goto label_1020b8;
        case 0x1020bcu: goto label_1020bc;
        case 0x1020c0u: goto label_1020c0;
        case 0x1020c4u: goto label_1020c4;
        case 0x1020c8u: goto label_1020c8;
        case 0x1020ccu: goto label_1020cc;
        case 0x1020d0u: goto label_1020d0;
        case 0x1020d4u: goto label_1020d4;
        case 0x1020d8u: goto label_1020d8;
        case 0x1020dcu: goto label_1020dc;
        case 0x1020e0u: goto label_1020e0;
        case 0x1020e4u: goto label_1020e4;
        case 0x1020e8u: goto label_1020e8;
        case 0x1020ecu: goto label_1020ec;
        case 0x1020f0u: goto label_1020f0;
        case 0x1020f4u: goto label_1020f4;
        case 0x1020f8u: goto label_1020f8;
        case 0x1020fcu: goto label_1020fc;
        case 0x102100u: goto label_102100;
        case 0x102104u: goto label_102104;
        case 0x102108u: goto label_102108;
        case 0x10210cu: goto label_10210c;
        case 0x102110u: goto label_102110;
        case 0x102114u: goto label_102114;
        case 0x102118u: goto label_102118;
        case 0x10211cu: goto label_10211c;
        case 0x102120u: goto label_102120;
        case 0x102124u: goto label_102124;
        case 0x102128u: goto label_102128;
        case 0x10212cu: goto label_10212c;
        case 0x102130u: goto label_102130;
        case 0x102134u: goto label_102134;
        case 0x102138u: goto label_102138;
        case 0x10213cu: goto label_10213c;
        case 0x102140u: goto label_102140;
        case 0x102144u: goto label_102144;
        case 0x102148u: goto label_102148;
        case 0x10214cu: goto label_10214c;
        case 0x102150u: goto label_102150;
        case 0x102154u: goto label_102154;
        case 0x102158u: goto label_102158;
        case 0x10215cu: goto label_10215c;
        case 0x102160u: goto label_102160;
        case 0x102164u: goto label_102164;
        case 0x102168u: goto label_102168;
        case 0x10216cu: goto label_10216c;
        case 0x102170u: goto label_102170;
        case 0x102174u: goto label_102174;
        case 0x102178u: goto label_102178;
        case 0x10217cu: goto label_10217c;
        case 0x102180u: goto label_102180;
        case 0x102184u: goto label_102184;
        case 0x102188u: goto label_102188;
        case 0x10218cu: goto label_10218c;
        case 0x102190u: goto label_102190;
        case 0x102194u: goto label_102194;
        case 0x102198u: goto label_102198;
        case 0x10219cu: goto label_10219c;
        case 0x1021a0u: goto label_1021a0;
        case 0x1021a4u: goto label_1021a4;
        case 0x1021a8u: goto label_1021a8;
        case 0x1021acu: goto label_1021ac;
        case 0x1021b0u: goto label_1021b0;
        case 0x1021b4u: goto label_1021b4;
        case 0x1021b8u: goto label_1021b8;
        case 0x1021bcu: goto label_1021bc;
        case 0x1021c0u: goto label_1021c0;
        case 0x1021c4u: goto label_1021c4;
        case 0x1021c8u: goto label_1021c8;
        case 0x1021ccu: goto label_1021cc;
        case 0x1021d0u: goto label_1021d0;
        case 0x1021d4u: goto label_1021d4;
        case 0x1021d8u: goto label_1021d8;
        case 0x1021dcu: goto label_1021dc;
        case 0x1021e0u: goto label_1021e0;
        case 0x1021e4u: goto label_1021e4;
        case 0x1021e8u: goto label_1021e8;
        case 0x1021ecu: goto label_1021ec;
        case 0x1021f0u: goto label_1021f0;
        case 0x1021f4u: goto label_1021f4;
        case 0x1021f8u: goto label_1021f8;
        case 0x1021fcu: goto label_1021fc;
        case 0x102200u: goto label_102200;
        case 0x102204u: goto label_102204;
        case 0x102208u: goto label_102208;
        case 0x10220cu: goto label_10220c;
        case 0x102210u: goto label_102210;
        case 0x102214u: goto label_102214;
        case 0x102218u: goto label_102218;
        case 0x10221cu: goto label_10221c;
        case 0x102220u: goto label_102220;
        case 0x102224u: goto label_102224;
        case 0x102228u: goto label_102228;
        case 0x10222cu: goto label_10222c;
        case 0x102230u: goto label_102230;
        case 0x102234u: goto label_102234;
        case 0x102238u: goto label_102238;
        case 0x10223cu: goto label_10223c;
        case 0x102240u: goto label_102240;
        case 0x102244u: goto label_102244;
        case 0x102248u: goto label_102248;
        case 0x10224cu: goto label_10224c;
        case 0x102250u: goto label_102250;
        case 0x102254u: goto label_102254;
        case 0x102258u: goto label_102258;
        case 0x10225cu: goto label_10225c;
        case 0x102260u: goto label_102260;
        case 0x102264u: goto label_102264;
        case 0x102268u: goto label_102268;
        case 0x10226cu: goto label_10226c;
        case 0x102270u: goto label_102270;
        case 0x102274u: goto label_102274;
        case 0x102278u: goto label_102278;
        case 0x10227cu: goto label_10227c;
        case 0x102280u: goto label_102280;
        case 0x102284u: goto label_102284;
        case 0x102288u: goto label_102288;
        case 0x10228cu: goto label_10228c;
        case 0x102290u: goto label_102290;
        case 0x102294u: goto label_102294;
        case 0x102298u: goto label_102298;
        case 0x10229cu: goto label_10229c;
        case 0x1022a0u: goto label_1022a0;
        case 0x1022a4u: goto label_1022a4;
        case 0x1022a8u: goto label_1022a8;
        case 0x1022acu: goto label_1022ac;
        case 0x1022b0u: goto label_1022b0;
        case 0x1022b4u: goto label_1022b4;
        case 0x1022b8u: goto label_1022b8;
        case 0x1022bcu: goto label_1022bc;
        case 0x1022c0u: goto label_1022c0;
        case 0x1022c4u: goto label_1022c4;
        case 0x1022c8u: goto label_1022c8;
        case 0x1022ccu: goto label_1022cc;
        case 0x1022d0u: goto label_1022d0;
        case 0x1022d4u: goto label_1022d4;
        case 0x1022d8u: goto label_1022d8;
        case 0x1022dcu: goto label_1022dc;
        case 0x1022e0u: goto label_1022e0;
        case 0x1022e4u: goto label_1022e4;
        case 0x1022e8u: goto label_1022e8;
        case 0x1022ecu: goto label_1022ec;
        case 0x1022f0u: goto label_1022f0;
        case 0x1022f4u: goto label_1022f4;
        case 0x1022f8u: goto label_1022f8;
        case 0x1022fcu: goto label_1022fc;
        case 0x102300u: goto label_102300;
        case 0x102304u: goto label_102304;
        case 0x102308u: goto label_102308;
        case 0x10230cu: goto label_10230c;
        case 0x102310u: goto label_102310;
        case 0x102314u: goto label_102314;
        case 0x102318u: goto label_102318;
        case 0x10231cu: goto label_10231c;
        case 0x102320u: goto label_102320;
        case 0x102324u: goto label_102324;
        case 0x102328u: goto label_102328;
        case 0x10232cu: goto label_10232c;
        case 0x102330u: goto label_102330;
        case 0x102334u: goto label_102334;
        case 0x102338u: goto label_102338;
        case 0x10233cu: goto label_10233c;
        case 0x102340u: goto label_102340;
        case 0x102344u: goto label_102344;
        case 0x102348u: goto label_102348;
        case 0x10234cu: goto label_10234c;
        case 0x102350u: goto label_102350;
        case 0x102354u: goto label_102354;
        case 0x102358u: goto label_102358;
        case 0x10235cu: goto label_10235c;
        case 0x102360u: goto label_102360;
        case 0x102364u: goto label_102364;
        case 0x102368u: goto label_102368;
        case 0x10236cu: goto label_10236c;
        case 0x102370u: goto label_102370;
        case 0x102374u: goto label_102374;
        case 0x102378u: goto label_102378;
        case 0x10237cu: goto label_10237c;
        case 0x102380u: goto label_102380;
        case 0x102384u: goto label_102384;
        case 0x102388u: goto label_102388;
        case 0x10238cu: goto label_10238c;
        case 0x102390u: goto label_102390;
        case 0x102394u: goto label_102394;
        case 0x102398u: goto label_102398;
        case 0x10239cu: goto label_10239c;
        case 0x1023a0u: goto label_1023a0;
        case 0x1023a4u: goto label_1023a4;
        case 0x1023a8u: goto label_1023a8;
        case 0x1023acu: goto label_1023ac;
        case 0x1023b0u: goto label_1023b0;
        case 0x1023b4u: goto label_1023b4;
        case 0x1023b8u: goto label_1023b8;
        case 0x1023bcu: goto label_1023bc;
        case 0x1023c0u: goto label_1023c0;
        case 0x1023c4u: goto label_1023c4;
        case 0x1023c8u: goto label_1023c8;
        case 0x1023ccu: goto label_1023cc;
        case 0x1023d0u: goto label_1023d0;
        case 0x1023d4u: goto label_1023d4;
        case 0x1023d8u: goto label_1023d8;
        case 0x1023dcu: goto label_1023dc;
        case 0x1023e0u: goto label_1023e0;
        case 0x1023e4u: goto label_1023e4;
        case 0x1023e8u: goto label_1023e8;
        case 0x1023ecu: goto label_1023ec;
        case 0x1023f0u: goto label_1023f0;
        case 0x1023f4u: goto label_1023f4;
        case 0x1023f8u: goto label_1023f8;
        case 0x1023fcu: goto label_1023fc;
        case 0x102400u: goto label_102400;
        case 0x102404u: goto label_102404;
        case 0x102408u: goto label_102408;
        case 0x10240cu: goto label_10240c;
        case 0x102410u: goto label_102410;
        case 0x102414u: goto label_102414;
        case 0x102418u: goto label_102418;
        case 0x10241cu: goto label_10241c;
        case 0x102420u: goto label_102420;
        case 0x102424u: goto label_102424;
        case 0x102428u: goto label_102428;
        case 0x10242cu: goto label_10242c;
        case 0x102430u: goto label_102430;
        case 0x102434u: goto label_102434;
        case 0x102438u: goto label_102438;
        case 0x10243cu: goto label_10243c;
        case 0x102440u: goto label_102440;
        case 0x102444u: goto label_102444;
        case 0x102448u: goto label_102448;
        case 0x10244cu: goto label_10244c;
        case 0x102450u: goto label_102450;
        case 0x102454u: goto label_102454;
        case 0x102458u: goto label_102458;
        case 0x10245cu: goto label_10245c;
        case 0x102460u: goto label_102460;
        case 0x102464u: goto label_102464;
        case 0x102468u: goto label_102468;
        case 0x10246cu: goto label_10246c;
        case 0x102470u: goto label_102470;
        case 0x102474u: goto label_102474;
        case 0x102478u: goto label_102478;
        case 0x10247cu: goto label_10247c;
        case 0x102480u: goto label_102480;
        case 0x102484u: goto label_102484;
        case 0x102488u: goto label_102488;
        case 0x10248cu: goto label_10248c;
        case 0x102490u: goto label_102490;
        case 0x102494u: goto label_102494;
        case 0x102498u: goto label_102498;
        case 0x10249cu: goto label_10249c;
        case 0x1024a0u: goto label_1024a0;
        case 0x1024a4u: goto label_1024a4;
        case 0x1024a8u: goto label_1024a8;
        case 0x1024acu: goto label_1024ac;
        case 0x1024b0u: goto label_1024b0;
        case 0x1024b4u: goto label_1024b4;
        case 0x1024b8u: goto label_1024b8;
        case 0x1024bcu: goto label_1024bc;
        case 0x1024c0u: goto label_1024c0;
        case 0x1024c4u: goto label_1024c4;
        case 0x1024c8u: goto label_1024c8;
        case 0x1024ccu: goto label_1024cc;
        case 0x1024d0u: goto label_1024d0;
        case 0x1024d4u: goto label_1024d4;
        case 0x1024d8u: goto label_1024d8;
        case 0x1024dcu: goto label_1024dc;
        case 0x1024e0u: goto label_1024e0;
        case 0x1024e4u: goto label_1024e4;
        case 0x1024e8u: goto label_1024e8;
        case 0x1024ecu: goto label_1024ec;
        case 0x1024f0u: goto label_1024f0;
        case 0x1024f4u: goto label_1024f4;
        case 0x1024f8u: goto label_1024f8;
        case 0x1024fcu: goto label_1024fc;
        case 0x102500u: goto label_102500;
        case 0x102504u: goto label_102504;
        case 0x102508u: goto label_102508;
        case 0x10250cu: goto label_10250c;
        case 0x102510u: goto label_102510;
        case 0x102514u: goto label_102514;
        case 0x102518u: goto label_102518;
        case 0x10251cu: goto label_10251c;
        case 0x102520u: goto label_102520;
        case 0x102524u: goto label_102524;
        case 0x102528u: goto label_102528;
        case 0x10252cu: goto label_10252c;
        case 0x102530u: goto label_102530;
        case 0x102534u: goto label_102534;
        case 0x102538u: goto label_102538;
        case 0x10253cu: goto label_10253c;
        case 0x102540u: goto label_102540;
        case 0x102544u: goto label_102544;
        case 0x102548u: goto label_102548;
        case 0x10254cu: goto label_10254c;
        case 0x102550u: goto label_102550;
        case 0x102554u: goto label_102554;
        case 0x102558u: goto label_102558;
        case 0x10255cu: goto label_10255c;
        case 0x102560u: goto label_102560;
        case 0x102564u: goto label_102564;
        case 0x102568u: goto label_102568;
        case 0x10256cu: goto label_10256c;
        case 0x102570u: goto label_102570;
        case 0x102574u: goto label_102574;
        case 0x102578u: goto label_102578;
        case 0x10257cu: goto label_10257c;
        case 0x102580u: goto label_102580;
        case 0x102584u: goto label_102584;
        case 0x102588u: goto label_102588;
        case 0x10258cu: goto label_10258c;
        case 0x102590u: goto label_102590;
        case 0x102594u: goto label_102594;
        case 0x102598u: goto label_102598;
        case 0x10259cu: goto label_10259c;
        case 0x1025a0u: goto label_1025a0;
        case 0x1025a4u: goto label_1025a4;
        case 0x1025a8u: goto label_1025a8;
        case 0x1025acu: goto label_1025ac;
        case 0x1025b0u: goto label_1025b0;
        case 0x1025b4u: goto label_1025b4;
        case 0x1025b8u: goto label_1025b8;
        case 0x1025bcu: goto label_1025bc;
        case 0x1025c0u: goto label_1025c0;
        case 0x1025c4u: goto label_1025c4;
        case 0x1025c8u: goto label_1025c8;
        case 0x1025ccu: goto label_1025cc;
        case 0x1025d0u: goto label_1025d0;
        case 0x1025d4u: goto label_1025d4;
        case 0x1025d8u: goto label_1025d8;
        case 0x1025dcu: goto label_1025dc;
        case 0x1025e0u: goto label_1025e0;
        case 0x1025e4u: goto label_1025e4;
        case 0x1025e8u: goto label_1025e8;
        case 0x1025ecu: goto label_1025ec;
        case 0x1025f0u: goto label_1025f0;
        case 0x1025f4u: goto label_1025f4;
        case 0x1025f8u: goto label_1025f8;
        case 0x1025fcu: goto label_1025fc;
        case 0x102600u: goto label_102600;
        case 0x102604u: goto label_102604;
        case 0x102608u: goto label_102608;
        case 0x10260cu: goto label_10260c;
        case 0x102610u: goto label_102610;
        case 0x102614u: goto label_102614;
        case 0x102618u: goto label_102618;
        case 0x10261cu: goto label_10261c;
        case 0x102620u: goto label_102620;
        case 0x102624u: goto label_102624;
        case 0x102628u: goto label_102628;
        case 0x10262cu: goto label_10262c;
        case 0x102630u: goto label_102630;
        case 0x102634u: goto label_102634;
        case 0x102638u: goto label_102638;
        case 0x10263cu: goto label_10263c;
        case 0x102640u: goto label_102640;
        case 0x102644u: goto label_102644;
        case 0x102648u: goto label_102648;
        case 0x10264cu: goto label_10264c;
        case 0x102650u: goto label_102650;
        case 0x102654u: goto label_102654;
        case 0x102658u: goto label_102658;
        case 0x10265cu: goto label_10265c;
        case 0x102660u: goto label_102660;
        case 0x102664u: goto label_102664;
        case 0x102668u: goto label_102668;
        case 0x10266cu: goto label_10266c;
        case 0x102670u: goto label_102670;
        case 0x102674u: goto label_102674;
        case 0x102678u: goto label_102678;
        case 0x10267cu: goto label_10267c;
        case 0x102680u: goto label_102680;
        case 0x102684u: goto label_102684;
        case 0x102688u: goto label_102688;
        case 0x10268cu: goto label_10268c;
        case 0x102690u: goto label_102690;
        case 0x102694u: goto label_102694;
        case 0x102698u: goto label_102698;
        case 0x10269cu: goto label_10269c;
        case 0x1026a0u: goto label_1026a0;
        case 0x1026a4u: goto label_1026a4;
        case 0x1026a8u: goto label_1026a8;
        case 0x1026acu: goto label_1026ac;
        case 0x1026b0u: goto label_1026b0;
        case 0x1026b4u: goto label_1026b4;
        case 0x1026b8u: goto label_1026b8;
        case 0x1026bcu: goto label_1026bc;
        case 0x1026c0u: goto label_1026c0;
        case 0x1026c4u: goto label_1026c4;
        case 0x1026c8u: goto label_1026c8;
        case 0x1026ccu: goto label_1026cc;
        case 0x1026d0u: goto label_1026d0;
        case 0x1026d4u: goto label_1026d4;
        case 0x1026d8u: goto label_1026d8;
        case 0x1026dcu: goto label_1026dc;
        case 0x1026e0u: goto label_1026e0;
        case 0x1026e4u: goto label_1026e4;
        case 0x1026e8u: goto label_1026e8;
        case 0x1026ecu: goto label_1026ec;
        case 0x1026f0u: goto label_1026f0;
        case 0x1026f4u: goto label_1026f4;
        case 0x1026f8u: goto label_1026f8;
        case 0x1026fcu: goto label_1026fc;
        case 0x102700u: goto label_102700;
        case 0x102704u: goto label_102704;
        case 0x102708u: goto label_102708;
        case 0x10270cu: goto label_10270c;
        case 0x102710u: goto label_102710;
        case 0x102714u: goto label_102714;
        case 0x102718u: goto label_102718;
        case 0x10271cu: goto label_10271c;
        case 0x102720u: goto label_102720;
        case 0x102724u: goto label_102724;
        case 0x102728u: goto label_102728;
        case 0x10272cu: goto label_10272c;
        case 0x102730u: goto label_102730;
        case 0x102734u: goto label_102734;
        case 0x102738u: goto label_102738;
        case 0x10273cu: goto label_10273c;
        case 0x102740u: goto label_102740;
        case 0x102744u: goto label_102744;
        case 0x102748u: goto label_102748;
        case 0x10274cu: goto label_10274c;
        case 0x102750u: goto label_102750;
        case 0x102754u: goto label_102754;
        case 0x102758u: goto label_102758;
        case 0x10275cu: goto label_10275c;
        case 0x102760u: goto label_102760;
        case 0x102764u: goto label_102764;
        case 0x102768u: goto label_102768;
        case 0x10276cu: goto label_10276c;
        case 0x102770u: goto label_102770;
        case 0x102774u: goto label_102774;
        case 0x102778u: goto label_102778;
        case 0x10277cu: goto label_10277c;
        case 0x102780u: goto label_102780;
        case 0x102784u: goto label_102784;
        case 0x102788u: goto label_102788;
        case 0x10278cu: goto label_10278c;
        case 0x102790u: goto label_102790;
        case 0x102794u: goto label_102794;
        case 0x102798u: goto label_102798;
        case 0x10279cu: goto label_10279c;
        case 0x1027a0u: goto label_1027a0;
        case 0x1027a4u: goto label_1027a4;
        case 0x1027a8u: goto label_1027a8;
        case 0x1027acu: goto label_1027ac;
        case 0x1027b0u: goto label_1027b0;
        case 0x1027b4u: goto label_1027b4;
        case 0x1027b8u: goto label_1027b8;
        case 0x1027bcu: goto label_1027bc;
        case 0x1027c0u: goto label_1027c0;
        case 0x1027c4u: goto label_1027c4;
        case 0x1027c8u: goto label_1027c8;
        case 0x1027ccu: goto label_1027cc;
        case 0x1027d0u: goto label_1027d0;
        case 0x1027d4u: goto label_1027d4;
        case 0x1027d8u: goto label_1027d8;
        case 0x1027dcu: goto label_1027dc;
        case 0x1027e0u: goto label_1027e0;
        case 0x1027e4u: goto label_1027e4;
        case 0x1027e8u: goto label_1027e8;
        case 0x1027ecu: goto label_1027ec;
        case 0x1027f0u: goto label_1027f0;
        case 0x1027f4u: goto label_1027f4;
        case 0x1027f8u: goto label_1027f8;
        case 0x1027fcu: goto label_1027fc;
        case 0x102800u: goto label_102800;
        case 0x102804u: goto label_102804;
        case 0x102808u: goto label_102808;
        case 0x10280cu: goto label_10280c;
        case 0x102810u: goto label_102810;
        case 0x102814u: goto label_102814;
        case 0x102818u: goto label_102818;
        case 0x10281cu: goto label_10281c;
        case 0x102820u: goto label_102820;
        case 0x102824u: goto label_102824;
        case 0x102828u: goto label_102828;
        case 0x10282cu: goto label_10282c;
        case 0x102830u: goto label_102830;
        case 0x102834u: goto label_102834;
        case 0x102838u: goto label_102838;
        case 0x10283cu: goto label_10283c;
        case 0x102840u: goto label_102840;
        case 0x102844u: goto label_102844;
        case 0x102848u: goto label_102848;
        case 0x10284cu: goto label_10284c;
        case 0x102850u: goto label_102850;
        case 0x102854u: goto label_102854;
        case 0x102858u: goto label_102858;
        case 0x10285cu: goto label_10285c;
        case 0x102860u: goto label_102860;
        case 0x102864u: goto label_102864;
        case 0x102868u: goto label_102868;
        case 0x10286cu: goto label_10286c;
        case 0x102870u: goto label_102870;
        case 0x102874u: goto label_102874;
        case 0x102878u: goto label_102878;
        case 0x10287cu: goto label_10287c;
        case 0x102880u: goto label_102880;
        case 0x102884u: goto label_102884;
        case 0x102888u: goto label_102888;
        case 0x10288cu: goto label_10288c;
        case 0x102890u: goto label_102890;
        case 0x102894u: goto label_102894;
        case 0x102898u: goto label_102898;
        case 0x10289cu: goto label_10289c;
        case 0x1028a0u: goto label_1028a0;
        case 0x1028a4u: goto label_1028a4;
        case 0x1028a8u: goto label_1028a8;
        case 0x1028acu: goto label_1028ac;
        case 0x1028b0u: goto label_1028b0;
        case 0x1028b4u: goto label_1028b4;
        case 0x1028b8u: goto label_1028b8;
        case 0x1028bcu: goto label_1028bc;
        case 0x1028c0u: goto label_1028c0;
        case 0x1028c4u: goto label_1028c4;
        case 0x1028c8u: goto label_1028c8;
        case 0x1028ccu: goto label_1028cc;
        case 0x1028d0u: goto label_1028d0;
        case 0x1028d4u: goto label_1028d4;
        case 0x1028d8u: goto label_1028d8;
        case 0x1028dcu: goto label_1028dc;
        case 0x1028e0u: goto label_1028e0;
        case 0x1028e4u: goto label_1028e4;
        case 0x1028e8u: goto label_1028e8;
        case 0x1028ecu: goto label_1028ec;
        case 0x1028f0u: goto label_1028f0;
        case 0x1028f4u: goto label_1028f4;
        case 0x1028f8u: goto label_1028f8;
        case 0x1028fcu: goto label_1028fc;
        case 0x102900u: goto label_102900;
        case 0x102904u: goto label_102904;
        case 0x102908u: goto label_102908;
        case 0x10290cu: goto label_10290c;
        case 0x102910u: goto label_102910;
        case 0x102914u: goto label_102914;
        case 0x102918u: goto label_102918;
        case 0x10291cu: goto label_10291c;
        case 0x102920u: goto label_102920;
        case 0x102924u: goto label_102924;
        case 0x102928u: goto label_102928;
        case 0x10292cu: goto label_10292c;
        case 0x102930u: goto label_102930;
        case 0x102934u: goto label_102934;
        case 0x102938u: goto label_102938;
        case 0x10293cu: goto label_10293c;
        case 0x102940u: goto label_102940;
        case 0x102944u: goto label_102944;
        case 0x102948u: goto label_102948;
        case 0x10294cu: goto label_10294c;
        case 0x102950u: goto label_102950;
        case 0x102954u: goto label_102954;
        case 0x102958u: goto label_102958;
        case 0x10295cu: goto label_10295c;
        case 0x102960u: goto label_102960;
        case 0x102964u: goto label_102964;
        case 0x102968u: goto label_102968;
        case 0x10296cu: goto label_10296c;
        case 0x102970u: goto label_102970;
        case 0x102974u: goto label_102974;
        case 0x102978u: goto label_102978;
        case 0x10297cu: goto label_10297c;
        case 0x102980u: goto label_102980;
        case 0x102984u: goto label_102984;
        case 0x102988u: goto label_102988;
        case 0x10298cu: goto label_10298c;
        case 0x102990u: goto label_102990;
        case 0x102994u: goto label_102994;
        case 0x102998u: goto label_102998;
        case 0x10299cu: goto label_10299c;
        case 0x1029a0u: goto label_1029a0;
        case 0x1029a4u: goto label_1029a4;
        case 0x1029a8u: goto label_1029a8;
        case 0x1029acu: goto label_1029ac;
        case 0x1029b0u: goto label_1029b0;
        case 0x1029b4u: goto label_1029b4;
        case 0x1029b8u: goto label_1029b8;
        case 0x1029bcu: goto label_1029bc;
        case 0x1029c0u: goto label_1029c0;
        case 0x1029c4u: goto label_1029c4;
        case 0x1029c8u: goto label_1029c8;
        case 0x1029ccu: goto label_1029cc;
        case 0x1029d0u: goto label_1029d0;
        case 0x1029d4u: goto label_1029d4;
        case 0x1029d8u: goto label_1029d8;
        case 0x1029dcu: goto label_1029dc;
        case 0x1029e0u: goto label_1029e0;
        case 0x1029e4u: goto label_1029e4;
        case 0x1029e8u: goto label_1029e8;
        case 0x1029ecu: goto label_1029ec;
        case 0x1029f0u: goto label_1029f0;
        case 0x1029f4u: goto label_1029f4;
        case 0x1029f8u: goto label_1029f8;
        case 0x1029fcu: goto label_1029fc;
        case 0x102a00u: goto label_102a00;
        case 0x102a04u: goto label_102a04;
        case 0x102a08u: goto label_102a08;
        case 0x102a0cu: goto label_102a0c;
        case 0x102a10u: goto label_102a10;
        case 0x102a14u: goto label_102a14;
        case 0x102a18u: goto label_102a18;
        case 0x102a1cu: goto label_102a1c;
        case 0x102a20u: goto label_102a20;
        case 0x102a24u: goto label_102a24;
        case 0x102a28u: goto label_102a28;
        case 0x102a2cu: goto label_102a2c;
        case 0x102a30u: goto label_102a30;
        case 0x102a34u: goto label_102a34;
        case 0x102a38u: goto label_102a38;
        case 0x102a3cu: goto label_102a3c;
        case 0x102a40u: goto label_102a40;
        case 0x102a44u: goto label_102a44;
        case 0x102a48u: goto label_102a48;
        case 0x102a4cu: goto label_102a4c;
        case 0x102a50u: goto label_102a50;
        case 0x102a54u: goto label_102a54;
        case 0x102a58u: goto label_102a58;
        case 0x102a5cu: goto label_102a5c;
        case 0x102a60u: goto label_102a60;
        case 0x102a64u: goto label_102a64;
        case 0x102a68u: goto label_102a68;
        case 0x102a6cu: goto label_102a6c;
        case 0x102a70u: goto label_102a70;
        case 0x102a74u: goto label_102a74;
        case 0x102a78u: goto label_102a78;
        case 0x102a7cu: goto label_102a7c;
        case 0x102a80u: goto label_102a80;
        case 0x102a84u: goto label_102a84;
        case 0x102a88u: goto label_102a88;
        case 0x102a8cu: goto label_102a8c;
        case 0x102a90u: goto label_102a90;
        case 0x102a94u: goto label_102a94;
        case 0x102a98u: goto label_102a98;
        case 0x102a9cu: goto label_102a9c;
        case 0x102aa0u: goto label_102aa0;
        case 0x102aa4u: goto label_102aa4;
        case 0x102aa8u: goto label_102aa8;
        case 0x102aacu: goto label_102aac;
        case 0x102ab0u: goto label_102ab0;
        case 0x102ab4u: goto label_102ab4;
        case 0x102ab8u: goto label_102ab8;
        case 0x102abcu: goto label_102abc;
        case 0x102ac0u: goto label_102ac0;
        case 0x102ac4u: goto label_102ac4;
        case 0x102ac8u: goto label_102ac8;
        case 0x102accu: goto label_102acc;
        case 0x102ad0u: goto label_102ad0;
        case 0x102ad4u: goto label_102ad4;
        case 0x102ad8u: goto label_102ad8;
        case 0x102adcu: goto label_102adc;
        case 0x102ae0u: goto label_102ae0;
        case 0x102ae4u: goto label_102ae4;
        case 0x102ae8u: goto label_102ae8;
        case 0x102aecu: goto label_102aec;
        case 0x102af0u: goto label_102af0;
        case 0x102af4u: goto label_102af4;
        case 0x102af8u: goto label_102af8;
        case 0x102afcu: goto label_102afc;
        case 0x102b00u: goto label_102b00;
        case 0x102b04u: goto label_102b04;
        case 0x102b08u: goto label_102b08;
        case 0x102b0cu: goto label_102b0c;
        case 0x102b10u: goto label_102b10;
        case 0x102b14u: goto label_102b14;
        case 0x102b18u: goto label_102b18;
        case 0x102b1cu: goto label_102b1c;
        case 0x102b20u: goto label_102b20;
        case 0x102b24u: goto label_102b24;
        case 0x102b28u: goto label_102b28;
        case 0x102b2cu: goto label_102b2c;
        case 0x102b30u: goto label_102b30;
        case 0x102b34u: goto label_102b34;
        case 0x102b38u: goto label_102b38;
        case 0x102b3cu: goto label_102b3c;
        case 0x102b40u: goto label_102b40;
        case 0x102b44u: goto label_102b44;
        case 0x102b48u: goto label_102b48;
        case 0x102b4cu: goto label_102b4c;
        case 0x102b50u: goto label_102b50;
        case 0x102b54u: goto label_102b54;
        case 0x102b58u: goto label_102b58;
        case 0x102b5cu: goto label_102b5c;
        case 0x102b60u: goto label_102b60;
        case 0x102b64u: goto label_102b64;
        case 0x102b68u: goto label_102b68;
        case 0x102b6cu: goto label_102b6c;
        case 0x102b70u: goto label_102b70;
        case 0x102b74u: goto label_102b74;
        case 0x102b78u: goto label_102b78;
        case 0x102b7cu: goto label_102b7c;
        case 0x102b80u: goto label_102b80;
        case 0x102b84u: goto label_102b84;
        case 0x102b88u: goto label_102b88;
        case 0x102b8cu: goto label_102b8c;
        case 0x102b90u: goto label_102b90;
        case 0x102b94u: goto label_102b94;
        case 0x102b98u: goto label_102b98;
        case 0x102b9cu: goto label_102b9c;
        case 0x102ba0u: goto label_102ba0;
        case 0x102ba4u: goto label_102ba4;
        case 0x102ba8u: goto label_102ba8;
        case 0x102bacu: goto label_102bac;
        case 0x102bb0u: goto label_102bb0;
        case 0x102bb4u: goto label_102bb4;
        case 0x102bb8u: goto label_102bb8;
        case 0x102bbcu: goto label_102bbc;
        case 0x102bc0u: goto label_102bc0;
        case 0x102bc4u: goto label_102bc4;
        case 0x102bc8u: goto label_102bc8;
        case 0x102bccu: goto label_102bcc;
        case 0x102bd0u: goto label_102bd0;
        case 0x102bd4u: goto label_102bd4;
        case 0x102bd8u: goto label_102bd8;
        case 0x102bdcu: goto label_102bdc;
        case 0x102be0u: goto label_102be0;
        case 0x102be4u: goto label_102be4;
        case 0x102be8u: goto label_102be8;
        case 0x102becu: goto label_102bec;
        case 0x102bf0u: goto label_102bf0;
        case 0x102bf4u: goto label_102bf4;
        case 0x102bf8u: goto label_102bf8;
        case 0x102bfcu: goto label_102bfc;
        case 0x102c00u: goto label_102c00;
        case 0x102c04u: goto label_102c04;
        case 0x102c08u: goto label_102c08;
        case 0x102c0cu: goto label_102c0c;
        case 0x102c10u: goto label_102c10;
        case 0x102c14u: goto label_102c14;
        case 0x102c18u: goto label_102c18;
        case 0x102c1cu: goto label_102c1c;
        case 0x102c20u: goto label_102c20;
        case 0x102c24u: goto label_102c24;
        case 0x102c28u: goto label_102c28;
        case 0x102c2cu: goto label_102c2c;
        case 0x102c30u: goto label_102c30;
        case 0x102c34u: goto label_102c34;
        case 0x102c38u: goto label_102c38;
        case 0x102c3cu: goto label_102c3c;
        case 0x102c40u: goto label_102c40;
        case 0x102c44u: goto label_102c44;
        case 0x102c48u: goto label_102c48;
        case 0x102c4cu: goto label_102c4c;
        case 0x102c50u: goto label_102c50;
        case 0x102c54u: goto label_102c54;
        case 0x102c58u: goto label_102c58;
        case 0x102c5cu: goto label_102c5c;
        case 0x102c60u: goto label_102c60;
        case 0x102c64u: goto label_102c64;
        case 0x102c68u: goto label_102c68;
        case 0x102c6cu: goto label_102c6c;
        case 0x102c70u: goto label_102c70;
        case 0x102c74u: goto label_102c74;
        case 0x102c78u: goto label_102c78;
        case 0x102c7cu: goto label_102c7c;
        case 0x102c80u: goto label_102c80;
        case 0x102c84u: goto label_102c84;
        case 0x102c88u: goto label_102c88;
        case 0x102c8cu: goto label_102c8c;
        case 0x102c90u: goto label_102c90;
        case 0x102c94u: goto label_102c94;
        case 0x102c98u: goto label_102c98;
        case 0x102c9cu: goto label_102c9c;
        case 0x102ca0u: goto label_102ca0;
        case 0x102ca4u: goto label_102ca4;
        case 0x102ca8u: goto label_102ca8;
        case 0x102cacu: goto label_102cac;
        case 0x102cb0u: goto label_102cb0;
        case 0x102cb4u: goto label_102cb4;
        case 0x102cb8u: goto label_102cb8;
        case 0x102cbcu: goto label_102cbc;
        case 0x102cc0u: goto label_102cc0;
        case 0x102cc4u: goto label_102cc4;
        case 0x102cc8u: goto label_102cc8;
        case 0x102cccu: goto label_102ccc;
        case 0x102cd0u: goto label_102cd0;
        case 0x102cd4u: goto label_102cd4;
        case 0x102cd8u: goto label_102cd8;
        case 0x102cdcu: goto label_102cdc;
        case 0x102ce0u: goto label_102ce0;
        case 0x102ce4u: goto label_102ce4;
        case 0x102ce8u: goto label_102ce8;
        case 0x102cecu: goto label_102cec;
        case 0x102cf0u: goto label_102cf0;
        case 0x102cf4u: goto label_102cf4;
        case 0x102cf8u: goto label_102cf8;
        case 0x102cfcu: goto label_102cfc;
        case 0x102d00u: goto label_102d00;
        case 0x102d04u: goto label_102d04;
        case 0x102d08u: goto label_102d08;
        case 0x102d0cu: goto label_102d0c;
        case 0x102d10u: goto label_102d10;
        case 0x102d14u: goto label_102d14;
        case 0x102d18u: goto label_102d18;
        case 0x102d1cu: goto label_102d1c;
        case 0x102d20u: goto label_102d20;
        case 0x102d24u: goto label_102d24;
        case 0x102d28u: goto label_102d28;
        case 0x102d2cu: goto label_102d2c;
        case 0x102d30u: goto label_102d30;
        case 0x102d34u: goto label_102d34;
        case 0x102d38u: goto label_102d38;
        case 0x102d3cu: goto label_102d3c;
        case 0x102d40u: goto label_102d40;
        case 0x102d44u: goto label_102d44;
        case 0x102d48u: goto label_102d48;
        case 0x102d4cu: goto label_102d4c;
        case 0x102d50u: goto label_102d50;
        case 0x102d54u: goto label_102d54;
        case 0x102d58u: goto label_102d58;
        case 0x102d5cu: goto label_102d5c;
        case 0x102d60u: goto label_102d60;
        case 0x102d64u: goto label_102d64;
        case 0x102d68u: goto label_102d68;
        case 0x102d6cu: goto label_102d6c;
        case 0x102d70u: goto label_102d70;
        case 0x102d74u: goto label_102d74;
        case 0x102d78u: goto label_102d78;
        case 0x102d7cu: goto label_102d7c;
        case 0x102d80u: goto label_102d80;
        case 0x102d84u: goto label_102d84;
        case 0x102d88u: goto label_102d88;
        case 0x102d8cu: goto label_102d8c;
        case 0x102d90u: goto label_102d90;
        case 0x102d94u: goto label_102d94;
        case 0x102d98u: goto label_102d98;
        case 0x102d9cu: goto label_102d9c;
        case 0x102da0u: goto label_102da0;
        case 0x102da4u: goto label_102da4;
        case 0x102da8u: goto label_102da8;
        case 0x102dacu: goto label_102dac;
        case 0x102db0u: goto label_102db0;
        case 0x102db4u: goto label_102db4;
        case 0x102db8u: goto label_102db8;
        case 0x102dbcu: goto label_102dbc;
        case 0x102dc0u: goto label_102dc0;
        case 0x102dc4u: goto label_102dc4;
        case 0x102dc8u: goto label_102dc8;
        case 0x102dccu: goto label_102dcc;
        case 0x102dd0u: goto label_102dd0;
        case 0x102dd4u: goto label_102dd4;
        case 0x102dd8u: goto label_102dd8;
        case 0x102ddcu: goto label_102ddc;
        case 0x102de0u: goto label_102de0;
        case 0x102de4u: goto label_102de4;
        case 0x102de8u: goto label_102de8;
        case 0x102decu: goto label_102dec;
        case 0x102df0u: goto label_102df0;
        case 0x102df4u: goto label_102df4;
        case 0x102df8u: goto label_102df8;
        case 0x102dfcu: goto label_102dfc;
        case 0x102e00u: goto label_102e00;
        case 0x102e04u: goto label_102e04;
        case 0x102e08u: goto label_102e08;
        case 0x102e0cu: goto label_102e0c;
        case 0x102e10u: goto label_102e10;
        case 0x102e14u: goto label_102e14;
        case 0x102e18u: goto label_102e18;
        case 0x102e1cu: goto label_102e1c;
        case 0x102e20u: goto label_102e20;
        case 0x102e24u: goto label_102e24;
        case 0x102e28u: goto label_102e28;
        case 0x102e2cu: goto label_102e2c;
        case 0x102e30u: goto label_102e30;
        case 0x102e34u: goto label_102e34;
        case 0x102e38u: goto label_102e38;
        case 0x102e3cu: goto label_102e3c;
        case 0x102e40u: goto label_102e40;
        case 0x102e44u: goto label_102e44;
        case 0x102e48u: goto label_102e48;
        case 0x102e4cu: goto label_102e4c;
        case 0x102e50u: goto label_102e50;
        case 0x102e54u: goto label_102e54;
        case 0x102e58u: goto label_102e58;
        case 0x102e5cu: goto label_102e5c;
        case 0x102e60u: goto label_102e60;
        case 0x102e64u: goto label_102e64;
        case 0x102e68u: goto label_102e68;
        case 0x102e6cu: goto label_102e6c;
        case 0x102e70u: goto label_102e70;
        case 0x102e74u: goto label_102e74;
        case 0x102e78u: goto label_102e78;
        case 0x102e7cu: goto label_102e7c;
        case 0x102e80u: goto label_102e80;
        case 0x102e84u: goto label_102e84;
        case 0x102e88u: goto label_102e88;
        case 0x102e8cu: goto label_102e8c;
        case 0x102e90u: goto label_102e90;
        case 0x102e94u: goto label_102e94;
        case 0x102e98u: goto label_102e98;
        case 0x102e9cu: goto label_102e9c;
        case 0x102ea0u: goto label_102ea0;
        case 0x102ea4u: goto label_102ea4;
        case 0x102ea8u: goto label_102ea8;
        case 0x102eacu: goto label_102eac;
        case 0x102eb0u: goto label_102eb0;
        case 0x102eb4u: goto label_102eb4;
        case 0x102eb8u: goto label_102eb8;
        case 0x102ebcu: goto label_102ebc;
        case 0x102ec0u: goto label_102ec0;
        case 0x102ec4u: goto label_102ec4;
        case 0x102ec8u: goto label_102ec8;
        case 0x102eccu: goto label_102ecc;
        case 0x102ed0u: goto label_102ed0;
        case 0x102ed4u: goto label_102ed4;
        case 0x102ed8u: goto label_102ed8;
        case 0x102edcu: goto label_102edc;
        case 0x102ee0u: goto label_102ee0;
        case 0x102ee4u: goto label_102ee4;
        case 0x102ee8u: goto label_102ee8;
        case 0x102eecu: goto label_102eec;
        case 0x102ef0u: goto label_102ef0;
        case 0x102ef4u: goto label_102ef4;
        case 0x102ef8u: goto label_102ef8;
        case 0x102efcu: goto label_102efc;
        case 0x102f00u: goto label_102f00;
        case 0x102f04u: goto label_102f04;
        case 0x102f08u: goto label_102f08;
        case 0x102f0cu: goto label_102f0c;
        case 0x102f10u: goto label_102f10;
        case 0x102f14u: goto label_102f14;
        case 0x102f18u: goto label_102f18;
        case 0x102f1cu: goto label_102f1c;
        case 0x102f20u: goto label_102f20;
        case 0x102f24u: goto label_102f24;
        case 0x102f28u: goto label_102f28;
        case 0x102f2cu: goto label_102f2c;
        case 0x102f30u: goto label_102f30;
        case 0x102f34u: goto label_102f34;
        case 0x102f38u: goto label_102f38;
        case 0x102f3cu: goto label_102f3c;
        case 0x102f40u: goto label_102f40;
        case 0x102f44u: goto label_102f44;
        case 0x102f48u: goto label_102f48;
        case 0x102f4cu: goto label_102f4c;
        case 0x102f50u: goto label_102f50;
        case 0x102f54u: goto label_102f54;
        case 0x102f58u: goto label_102f58;
        case 0x102f5cu: goto label_102f5c;
        case 0x102f60u: goto label_102f60;
        case 0x102f64u: goto label_102f64;
        case 0x102f68u: goto label_102f68;
        case 0x102f6cu: goto label_102f6c;
        case 0x102f70u: goto label_102f70;
        case 0x102f74u: goto label_102f74;
        case 0x102f78u: goto label_102f78;
        case 0x102f7cu: goto label_102f7c;
        case 0x102f80u: goto label_102f80;
        case 0x102f84u: goto label_102f84;
        case 0x102f88u: goto label_102f88;
        case 0x102f8cu: goto label_102f8c;
        case 0x102f90u: goto label_102f90;
        case 0x102f94u: goto label_102f94;
        case 0x102f98u: goto label_102f98;
        case 0x102f9cu: goto label_102f9c;
        case 0x102fa0u: goto label_102fa0;
        case 0x102fa4u: goto label_102fa4;
        case 0x102fa8u: goto label_102fa8;
        case 0x102facu: goto label_102fac;
        case 0x102fb0u: goto label_102fb0;
        case 0x102fb4u: goto label_102fb4;
        case 0x102fb8u: goto label_102fb8;
        case 0x102fbcu: goto label_102fbc;
        case 0x102fc0u: goto label_102fc0;
        case 0x102fc4u: goto label_102fc4;
        case 0x102fc8u: goto label_102fc8;
        case 0x102fccu: goto label_102fcc;
        case 0x102fd0u: goto label_102fd0;
        case 0x102fd4u: goto label_102fd4;
        case 0x102fd8u: goto label_102fd8;
        case 0x102fdcu: goto label_102fdc;
        case 0x102fe0u: goto label_102fe0;
        case 0x102fe4u: goto label_102fe4;
        case 0x102fe8u: goto label_102fe8;
        case 0x102fecu: goto label_102fec;
        case 0x102ff0u: goto label_102ff0;
        case 0x102ff4u: goto label_102ff4;
        case 0x102ff8u: goto label_102ff8;
        case 0x102ffcu: goto label_102ffc;
        case 0x103000u: goto label_103000;
        case 0x103004u: goto label_103004;
        case 0x103008u: goto label_103008;
        case 0x10300cu: goto label_10300c;
        case 0x103010u: goto label_103010;
        case 0x103014u: goto label_103014;
        case 0x103018u: goto label_103018;
        case 0x10301cu: goto label_10301c;
        case 0x103020u: goto label_103020;
        case 0x103024u: goto label_103024;
        case 0x103028u: goto label_103028;
        case 0x10302cu: goto label_10302c;
        case 0x103030u: goto label_103030;
        case 0x103034u: goto label_103034;
        case 0x103038u: goto label_103038;
        case 0x10303cu: goto label_10303c;
        case 0x103040u: goto label_103040;
        case 0x103044u: goto label_103044;
        case 0x103048u: goto label_103048;
        case 0x10304cu: goto label_10304c;
        case 0x103050u: goto label_103050;
        case 0x103054u: goto label_103054;
        case 0x103058u: goto label_103058;
        case 0x10305cu: goto label_10305c;
        case 0x103060u: goto label_103060;
        case 0x103064u: goto label_103064;
        case 0x103068u: goto label_103068;
        case 0x10306cu: goto label_10306c;
        case 0x103070u: goto label_103070;
        case 0x103074u: goto label_103074;
        case 0x103078u: goto label_103078;
        case 0x10307cu: goto label_10307c;
        case 0x103080u: goto label_103080;
        case 0x103084u: goto label_103084;
        case 0x103088u: goto label_103088;
        case 0x10308cu: goto label_10308c;
        case 0x103090u: goto label_103090;
        case 0x103094u: goto label_103094;
        case 0x103098u: goto label_103098;
        case 0x10309cu: goto label_10309c;
        case 0x1030a0u: goto label_1030a0;
        case 0x1030a4u: goto label_1030a4;
        case 0x1030a8u: goto label_1030a8;
        case 0x1030acu: goto label_1030ac;
        case 0x1030b0u: goto label_1030b0;
        case 0x1030b4u: goto label_1030b4;
        case 0x1030b8u: goto label_1030b8;
        case 0x1030bcu: goto label_1030bc;
        case 0x1030c0u: goto label_1030c0;
        case 0x1030c4u: goto label_1030c4;
        case 0x1030c8u: goto label_1030c8;
        case 0x1030ccu: goto label_1030cc;
        case 0x1030d0u: goto label_1030d0;
        case 0x1030d4u: goto label_1030d4;
        case 0x1030d8u: goto label_1030d8;
        case 0x1030dcu: goto label_1030dc;
        case 0x1030e0u: goto label_1030e0;
        case 0x1030e4u: goto label_1030e4;
        case 0x1030e8u: goto label_1030e8;
        case 0x1030ecu: goto label_1030ec;
        case 0x1030f0u: goto label_1030f0;
        case 0x1030f4u: goto label_1030f4;
        case 0x1030f8u: goto label_1030f8;
        case 0x1030fcu: goto label_1030fc;
        case 0x103100u: goto label_103100;
        case 0x103104u: goto label_103104;
        case 0x103108u: goto label_103108;
        case 0x10310cu: goto label_10310c;
        case 0x103110u: goto label_103110;
        case 0x103114u: goto label_103114;
        case 0x103118u: goto label_103118;
        case 0x10311cu: goto label_10311c;
        case 0x103120u: goto label_103120;
        case 0x103124u: goto label_103124;
        case 0x103128u: goto label_103128;
        case 0x10312cu: goto label_10312c;
        case 0x103130u: goto label_103130;
        case 0x103134u: goto label_103134;
        case 0x103138u: goto label_103138;
        case 0x10313cu: goto label_10313c;
        case 0x103140u: goto label_103140;
        case 0x103144u: goto label_103144;
        case 0x103148u: goto label_103148;
        case 0x10314cu: goto label_10314c;
        case 0x103150u: goto label_103150;
        case 0x103154u: goto label_103154;
        case 0x103158u: goto label_103158;
        case 0x10315cu: goto label_10315c;
        case 0x103160u: goto label_103160;
        case 0x103164u: goto label_103164;
        case 0x103168u: goto label_103168;
        case 0x10316cu: goto label_10316c;
        case 0x103170u: goto label_103170;
        case 0x103174u: goto label_103174;
        case 0x103178u: goto label_103178;
        case 0x10317cu: goto label_10317c;
        case 0x103180u: goto label_103180;
        case 0x103184u: goto label_103184;
        case 0x103188u: goto label_103188;
        case 0x10318cu: goto label_10318c;
        case 0x103190u: goto label_103190;
        case 0x103194u: goto label_103194;
        case 0x103198u: goto label_103198;
        case 0x10319cu: goto label_10319c;
        case 0x1031a0u: goto label_1031a0;
        case 0x1031a4u: goto label_1031a4;
        case 0x1031a8u: goto label_1031a8;
        case 0x1031acu: goto label_1031ac;
        case 0x1031b0u: goto label_1031b0;
        case 0x1031b4u: goto label_1031b4;
        case 0x1031b8u: goto label_1031b8;
        case 0x1031bcu: goto label_1031bc;
        case 0x1031c0u: goto label_1031c0;
        case 0x1031c4u: goto label_1031c4;
        case 0x1031c8u: goto label_1031c8;
        case 0x1031ccu: goto label_1031cc;
        case 0x1031d0u: goto label_1031d0;
        case 0x1031d4u: goto label_1031d4;
        case 0x1031d8u: goto label_1031d8;
        case 0x1031dcu: goto label_1031dc;
        case 0x1031e0u: goto label_1031e0;
        case 0x1031e4u: goto label_1031e4;
        case 0x1031e8u: goto label_1031e8;
        case 0x1031ecu: goto label_1031ec;
        case 0x1031f0u: goto label_1031f0;
        case 0x1031f4u: goto label_1031f4;
        case 0x1031f8u: goto label_1031f8;
        case 0x1031fcu: goto label_1031fc;
        case 0x103200u: goto label_103200;
        case 0x103204u: goto label_103204;
        case 0x103208u: goto label_103208;
        case 0x10320cu: goto label_10320c;
        case 0x103210u: goto label_103210;
        case 0x103214u: goto label_103214;
        case 0x103218u: goto label_103218;
        case 0x10321cu: goto label_10321c;
        case 0x103220u: goto label_103220;
        case 0x103224u: goto label_103224;
        case 0x103228u: goto label_103228;
        case 0x10322cu: goto label_10322c;
        case 0x103230u: goto label_103230;
        case 0x103234u: goto label_103234;
        case 0x103238u: goto label_103238;
        case 0x10323cu: goto label_10323c;
        case 0x103240u: goto label_103240;
        case 0x103244u: goto label_103244;
        case 0x103248u: goto label_103248;
        case 0x10324cu: goto label_10324c;
        case 0x103250u: goto label_103250;
        case 0x103254u: goto label_103254;
        case 0x103258u: goto label_103258;
        case 0x10325cu: goto label_10325c;
        case 0x103260u: goto label_103260;
        case 0x103264u: goto label_103264;
        case 0x103268u: goto label_103268;
        case 0x10326cu: goto label_10326c;
        case 0x103270u: goto label_103270;
        case 0x103274u: goto label_103274;
        case 0x103278u: goto label_103278;
        case 0x10327cu: goto label_10327c;
        case 0x103280u: goto label_103280;
        case 0x103284u: goto label_103284;
        case 0x103288u: goto label_103288;
        case 0x10328cu: goto label_10328c;
        case 0x103290u: goto label_103290;
        case 0x103294u: goto label_103294;
        case 0x103298u: goto label_103298;
        case 0x10329cu: goto label_10329c;
        case 0x1032a0u: goto label_1032a0;
        case 0x1032a4u: goto label_1032a4;
        case 0x1032a8u: goto label_1032a8;
        case 0x1032acu: goto label_1032ac;
        case 0x1032b0u: goto label_1032b0;
        case 0x1032b4u: goto label_1032b4;
        case 0x1032b8u: goto label_1032b8;
        case 0x1032bcu: goto label_1032bc;
        case 0x1032c0u: goto label_1032c0;
        case 0x1032c4u: goto label_1032c4;
        case 0x1032c8u: goto label_1032c8;
        case 0x1032ccu: goto label_1032cc;
        case 0x1032d0u: goto label_1032d0;
        case 0x1032d4u: goto label_1032d4;
        case 0x1032d8u: goto label_1032d8;
        case 0x1032dcu: goto label_1032dc;
        case 0x1032e0u: goto label_1032e0;
        case 0x1032e4u: goto label_1032e4;
        case 0x1032e8u: goto label_1032e8;
        case 0x1032ecu: goto label_1032ec;
        case 0x1032f0u: goto label_1032f0;
        case 0x1032f4u: goto label_1032f4;
        case 0x1032f8u: goto label_1032f8;
        case 0x1032fcu: goto label_1032fc;
        case 0x103300u: goto label_103300;
        case 0x103304u: goto label_103304;
        case 0x103308u: goto label_103308;
        case 0x10330cu: goto label_10330c;
        case 0x103310u: goto label_103310;
        case 0x103314u: goto label_103314;
        case 0x103318u: goto label_103318;
        case 0x10331cu: goto label_10331c;
        case 0x103320u: goto label_103320;
        case 0x103324u: goto label_103324;
        case 0x103328u: goto label_103328;
        case 0x10332cu: goto label_10332c;
        case 0x103330u: goto label_103330;
        case 0x103334u: goto label_103334;
        case 0x103338u: goto label_103338;
        case 0x10333cu: goto label_10333c;
        case 0x103340u: goto label_103340;
        case 0x103344u: goto label_103344;
        case 0x103348u: goto label_103348;
        case 0x10334cu: goto label_10334c;
        case 0x103350u: goto label_103350;
        case 0x103354u: goto label_103354;
        case 0x103358u: goto label_103358;
        case 0x10335cu: goto label_10335c;
        case 0x103360u: goto label_103360;
        case 0x103364u: goto label_103364;
        case 0x103368u: goto label_103368;
        case 0x10336cu: goto label_10336c;
        case 0x103370u: goto label_103370;
        case 0x103374u: goto label_103374;
        case 0x103378u: goto label_103378;
        case 0x10337cu: goto label_10337c;
        case 0x103380u: goto label_103380;
        case 0x103384u: goto label_103384;
        case 0x103388u: goto label_103388;
        case 0x10338cu: goto label_10338c;
        case 0x103390u: goto label_103390;
        case 0x103394u: goto label_103394;
        case 0x103398u: goto label_103398;
        case 0x10339cu: goto label_10339c;
        case 0x1033a0u: goto label_1033a0;
        case 0x1033a4u: goto label_1033a4;
        case 0x1033a8u: goto label_1033a8;
        case 0x1033acu: goto label_1033ac;
        case 0x1033b0u: goto label_1033b0;
        case 0x1033b4u: goto label_1033b4;
        case 0x1033b8u: goto label_1033b8;
        case 0x1033bcu: goto label_1033bc;
        case 0x1033c0u: goto label_1033c0;
        case 0x1033c4u: goto label_1033c4;
        case 0x1033c8u: goto label_1033c8;
        case 0x1033ccu: goto label_1033cc;
        case 0x1033d0u: goto label_1033d0;
        case 0x1033d4u: goto label_1033d4;
        case 0x1033d8u: goto label_1033d8;
        case 0x1033dcu: goto label_1033dc;
        case 0x1033e0u: goto label_1033e0;
        case 0x1033e4u: goto label_1033e4;
        case 0x1033e8u: goto label_1033e8;
        case 0x1033ecu: goto label_1033ec;
        case 0x1033f0u: goto label_1033f0;
        case 0x1033f4u: goto label_1033f4;
        case 0x1033f8u: goto label_1033f8;
        case 0x1033fcu: goto label_1033fc;
        case 0x103400u: goto label_103400;
        case 0x103404u: goto label_103404;
        case 0x103408u: goto label_103408;
        case 0x10340cu: goto label_10340c;
        case 0x103410u: goto label_103410;
        case 0x103414u: goto label_103414;
        case 0x103418u: goto label_103418;
        case 0x10341cu: goto label_10341c;
        case 0x103420u: goto label_103420;
        case 0x103424u: goto label_103424;
        case 0x103428u: goto label_103428;
        case 0x10342cu: goto label_10342c;
        case 0x103430u: goto label_103430;
        case 0x103434u: goto label_103434;
        case 0x103438u: goto label_103438;
        case 0x10343cu: goto label_10343c;
        case 0x103440u: goto label_103440;
        case 0x103444u: goto label_103444;
        case 0x103448u: goto label_103448;
        case 0x10344cu: goto label_10344c;
        case 0x103450u: goto label_103450;
        case 0x103454u: goto label_103454;
        case 0x103458u: goto label_103458;
        case 0x10345cu: goto label_10345c;
        case 0x103460u: goto label_103460;
        case 0x103464u: goto label_103464;
        case 0x103468u: goto label_103468;
        case 0x10346cu: goto label_10346c;
        case 0x103470u: goto label_103470;
        case 0x103474u: goto label_103474;
        case 0x103478u: goto label_103478;
        case 0x10347cu: goto label_10347c;
        case 0x103480u: goto label_103480;
        case 0x103484u: goto label_103484;
        case 0x103488u: goto label_103488;
        case 0x10348cu: goto label_10348c;
        case 0x103490u: goto label_103490;
        case 0x103494u: goto label_103494;
        case 0x103498u: goto label_103498;
        case 0x10349cu: goto label_10349c;
        case 0x1034a0u: goto label_1034a0;
        case 0x1034a4u: goto label_1034a4;
        case 0x1034a8u: goto label_1034a8;
        case 0x1034acu: goto label_1034ac;
        case 0x1034b0u: goto label_1034b0;
        case 0x1034b4u: goto label_1034b4;
        case 0x1034b8u: goto label_1034b8;
        case 0x1034bcu: goto label_1034bc;
        case 0x1034c0u: goto label_1034c0;
        case 0x1034c4u: goto label_1034c4;
        case 0x1034c8u: goto label_1034c8;
        case 0x1034ccu: goto label_1034cc;
        case 0x1034d0u: goto label_1034d0;
        case 0x1034d4u: goto label_1034d4;
        case 0x1034d8u: goto label_1034d8;
        case 0x1034dcu: goto label_1034dc;
        case 0x1034e0u: goto label_1034e0;
        case 0x1034e4u: goto label_1034e4;
        case 0x1034e8u: goto label_1034e8;
        case 0x1034ecu: goto label_1034ec;
        case 0x1034f0u: goto label_1034f0;
        case 0x1034f4u: goto label_1034f4;
        case 0x1034f8u: goto label_1034f8;
        case 0x1034fcu: goto label_1034fc;
        case 0x103500u: goto label_103500;
        case 0x103504u: goto label_103504;
        case 0x103508u: goto label_103508;
        case 0x10350cu: goto label_10350c;
        case 0x103510u: goto label_103510;
        case 0x103514u: goto label_103514;
        case 0x103518u: goto label_103518;
        case 0x10351cu: goto label_10351c;
        case 0x103520u: goto label_103520;
        case 0x103524u: goto label_103524;
        case 0x103528u: goto label_103528;
        case 0x10352cu: goto label_10352c;
        case 0x103530u: goto label_103530;
        case 0x103534u: goto label_103534;
        case 0x103538u: goto label_103538;
        case 0x10353cu: goto label_10353c;
        case 0x103540u: goto label_103540;
        case 0x103544u: goto label_103544;
        case 0x103548u: goto label_103548;
        case 0x10354cu: goto label_10354c;
        case 0x103550u: goto label_103550;
        case 0x103554u: goto label_103554;
        case 0x103558u: goto label_103558;
        case 0x10355cu: goto label_10355c;
        case 0x103560u: goto label_103560;
        case 0x103564u: goto label_103564;
        case 0x103568u: goto label_103568;
        case 0x10356cu: goto label_10356c;
        case 0x103570u: goto label_103570;
        case 0x103574u: goto label_103574;
        case 0x103578u: goto label_103578;
        case 0x10357cu: goto label_10357c;
        case 0x103580u: goto label_103580;
        case 0x103584u: goto label_103584;
        case 0x103588u: goto label_103588;
        case 0x10358cu: goto label_10358c;
        case 0x103590u: goto label_103590;
        case 0x103594u: goto label_103594;
        case 0x103598u: goto label_103598;
        case 0x10359cu: goto label_10359c;
        case 0x1035a0u: goto label_1035a0;
        case 0x1035a4u: goto label_1035a4;
        case 0x1035a8u: goto label_1035a8;
        case 0x1035acu: goto label_1035ac;
        case 0x1035b0u: goto label_1035b0;
        case 0x1035b4u: goto label_1035b4;
        case 0x1035b8u: goto label_1035b8;
        case 0x1035bcu: goto label_1035bc;
        case 0x1035c0u: goto label_1035c0;
        case 0x1035c4u: goto label_1035c4;
        case 0x1035c8u: goto label_1035c8;
        case 0x1035ccu: goto label_1035cc;
        case 0x1035d0u: goto label_1035d0;
        case 0x1035d4u: goto label_1035d4;
        case 0x1035d8u: goto label_1035d8;
        case 0x1035dcu: goto label_1035dc;
        case 0x1035e0u: goto label_1035e0;
        case 0x1035e4u: goto label_1035e4;
        case 0x1035e8u: goto label_1035e8;
        case 0x1035ecu: goto label_1035ec;
        case 0x1035f0u: goto label_1035f0;
        case 0x1035f4u: goto label_1035f4;
        case 0x1035f8u: goto label_1035f8;
        case 0x1035fcu: goto label_1035fc;
        case 0x103600u: goto label_103600;
        case 0x103604u: goto label_103604;
        case 0x103608u: goto label_103608;
        case 0x10360cu: goto label_10360c;
        case 0x103610u: goto label_103610;
        case 0x103614u: goto label_103614;
        case 0x103618u: goto label_103618;
        case 0x10361cu: goto label_10361c;
        case 0x103620u: goto label_103620;
        case 0x103624u: goto label_103624;
        case 0x103628u: goto label_103628;
        case 0x10362cu: goto label_10362c;
        case 0x103630u: goto label_103630;
        case 0x103634u: goto label_103634;
        case 0x103638u: goto label_103638;
        case 0x10363cu: goto label_10363c;
        case 0x103640u: goto label_103640;
        case 0x103644u: goto label_103644;
        case 0x103648u: goto label_103648;
        case 0x10364cu: goto label_10364c;
        case 0x103650u: goto label_103650;
        case 0x103654u: goto label_103654;
        case 0x103658u: goto label_103658;
        case 0x10365cu: goto label_10365c;
        case 0x103660u: goto label_103660;
        case 0x103664u: goto label_103664;
        case 0x103668u: goto label_103668;
        case 0x10366cu: goto label_10366c;
        case 0x103670u: goto label_103670;
        case 0x103674u: goto label_103674;
        case 0x103678u: goto label_103678;
        case 0x10367cu: goto label_10367c;
        case 0x103680u: goto label_103680;
        case 0x103684u: goto label_103684;
        case 0x103688u: goto label_103688;
        case 0x10368cu: goto label_10368c;
        case 0x103690u: goto label_103690;
        case 0x103694u: goto label_103694;
        case 0x103698u: goto label_103698;
        case 0x10369cu: goto label_10369c;
        case 0x1036a0u: goto label_1036a0;
        case 0x1036a4u: goto label_1036a4;
        case 0x1036a8u: goto label_1036a8;
        case 0x1036acu: goto label_1036ac;
        case 0x1036b0u: goto label_1036b0;
        case 0x1036b4u: goto label_1036b4;
        case 0x1036b8u: goto label_1036b8;
        case 0x1036bcu: goto label_1036bc;
        case 0x1036c0u: goto label_1036c0;
        case 0x1036c4u: goto label_1036c4;
        case 0x1036c8u: goto label_1036c8;
        case 0x1036ccu: goto label_1036cc;
        case 0x1036d0u: goto label_1036d0;
        case 0x1036d4u: goto label_1036d4;
        case 0x1036d8u: goto label_1036d8;
        case 0x1036dcu: goto label_1036dc;
        case 0x1036e0u: goto label_1036e0;
        case 0x1036e4u: goto label_1036e4;
        case 0x1036e8u: goto label_1036e8;
        case 0x1036ecu: goto label_1036ec;
        case 0x1036f0u: goto label_1036f0;
        case 0x1036f4u: goto label_1036f4;
        case 0x1036f8u: goto label_1036f8;
        case 0x1036fcu: goto label_1036fc;
        case 0x103700u: goto label_103700;
        case 0x103704u: goto label_103704;
        case 0x103708u: goto label_103708;
        case 0x10370cu: goto label_10370c;
        case 0x103710u: goto label_103710;
        case 0x103714u: goto label_103714;
        case 0x103718u: goto label_103718;
        case 0x10371cu: goto label_10371c;
        case 0x103720u: goto label_103720;
        case 0x103724u: goto label_103724;
        case 0x103728u: goto label_103728;
        case 0x10372cu: goto label_10372c;
        case 0x103730u: goto label_103730;
        case 0x103734u: goto label_103734;
        case 0x103738u: goto label_103738;
        case 0x10373cu: goto label_10373c;
        case 0x103740u: goto label_103740;
        case 0x103744u: goto label_103744;
        case 0x103748u: goto label_103748;
        case 0x10374cu: goto label_10374c;
        case 0x103750u: goto label_103750;
        case 0x103754u: goto label_103754;
        case 0x103758u: goto label_103758;
        case 0x10375cu: goto label_10375c;
        case 0x103760u: goto label_103760;
        case 0x103764u: goto label_103764;
        case 0x103768u: goto label_103768;
        case 0x10376cu: goto label_10376c;
        case 0x103770u: goto label_103770;
        case 0x103774u: goto label_103774;
        case 0x103778u: goto label_103778;
        case 0x10377cu: goto label_10377c;
        case 0x103780u: goto label_103780;
        case 0x103784u: goto label_103784;
        case 0x103788u: goto label_103788;
        case 0x10378cu: goto label_10378c;
        case 0x103790u: goto label_103790;
        case 0x103794u: goto label_103794;
        case 0x103798u: goto label_103798;
        case 0x10379cu: goto label_10379c;
        case 0x1037a0u: goto label_1037a0;
        case 0x1037a4u: goto label_1037a4;
        case 0x1037a8u: goto label_1037a8;
        case 0x1037acu: goto label_1037ac;
        case 0x1037b0u: goto label_1037b0;
        case 0x1037b4u: goto label_1037b4;
        case 0x1037b8u: goto label_1037b8;
        case 0x1037bcu: goto label_1037bc;
        case 0x1037c0u: goto label_1037c0;
        case 0x1037c4u: goto label_1037c4;
        case 0x1037c8u: goto label_1037c8;
        case 0x1037ccu: goto label_1037cc;
        case 0x1037d0u: goto label_1037d0;
        case 0x1037d4u: goto label_1037d4;
        case 0x1037d8u: goto label_1037d8;
        case 0x1037dcu: goto label_1037dc;
        case 0x1037e0u: goto label_1037e0;
        case 0x1037e4u: goto label_1037e4;
        case 0x1037e8u: goto label_1037e8;
        case 0x1037ecu: goto label_1037ec;
        case 0x1037f0u: goto label_1037f0;
        case 0x1037f4u: goto label_1037f4;
        case 0x1037f8u: goto label_1037f8;
        case 0x1037fcu: goto label_1037fc;
        case 0x103800u: goto label_103800;
        case 0x103804u: goto label_103804;
        case 0x103808u: goto label_103808;
        case 0x10380cu: goto label_10380c;
        case 0x103810u: goto label_103810;
        case 0x103814u: goto label_103814;
        case 0x103818u: goto label_103818;
        case 0x10381cu: goto label_10381c;
        case 0x103820u: goto label_103820;
        case 0x103824u: goto label_103824;
        case 0x103828u: goto label_103828;
        case 0x10382cu: goto label_10382c;
        case 0x103830u: goto label_103830;
        case 0x103834u: goto label_103834;
        case 0x103838u: goto label_103838;
        case 0x10383cu: goto label_10383c;
        case 0x103840u: goto label_103840;
        case 0x103844u: goto label_103844;
        case 0x103848u: goto label_103848;
        case 0x10384cu: goto label_10384c;
        case 0x103850u: goto label_103850;
        case 0x103854u: goto label_103854;
        case 0x103858u: goto label_103858;
        case 0x10385cu: goto label_10385c;
        case 0x103860u: goto label_103860;
        case 0x103864u: goto label_103864;
        case 0x103868u: goto label_103868;
        case 0x10386cu: goto label_10386c;
        case 0x103870u: goto label_103870;
        case 0x103874u: goto label_103874;
        case 0x103878u: goto label_103878;
        case 0x10387cu: goto label_10387c;
        case 0x103880u: goto label_103880;
        case 0x103884u: goto label_103884;
        case 0x103888u: goto label_103888;
        case 0x10388cu: goto label_10388c;
        case 0x103890u: goto label_103890;
        case 0x103894u: goto label_103894;
        case 0x103898u: goto label_103898;
        case 0x10389cu: goto label_10389c;
        case 0x1038a0u: goto label_1038a0;
        case 0x1038a4u: goto label_1038a4;
        case 0x1038a8u: goto label_1038a8;
        case 0x1038acu: goto label_1038ac;
        case 0x1038b0u: goto label_1038b0;
        case 0x1038b4u: goto label_1038b4;
        case 0x1038b8u: goto label_1038b8;
        case 0x1038bcu: goto label_1038bc;
        case 0x1038c0u: goto label_1038c0;
        case 0x1038c4u: goto label_1038c4;
        case 0x1038c8u: goto label_1038c8;
        case 0x1038ccu: goto label_1038cc;
        case 0x1038d0u: goto label_1038d0;
        case 0x1038d4u: goto label_1038d4;
        case 0x1038d8u: goto label_1038d8;
        case 0x1038dcu: goto label_1038dc;
        case 0x1038e0u: goto label_1038e0;
        case 0x1038e4u: goto label_1038e4;
        case 0x1038e8u: goto label_1038e8;
        case 0x1038ecu: goto label_1038ec;
        case 0x1038f0u: goto label_1038f0;
        case 0x1038f4u: goto label_1038f4;
        case 0x1038f8u: goto label_1038f8;
        case 0x1038fcu: goto label_1038fc;
        case 0x103900u: goto label_103900;
        case 0x103904u: goto label_103904;
        case 0x103908u: goto label_103908;
        case 0x10390cu: goto label_10390c;
        case 0x103910u: goto label_103910;
        case 0x103914u: goto label_103914;
        case 0x103918u: goto label_103918;
        case 0x10391cu: goto label_10391c;
        case 0x103920u: goto label_103920;
        case 0x103924u: goto label_103924;
        case 0x103928u: goto label_103928;
        case 0x10392cu: goto label_10392c;
        case 0x103930u: goto label_103930;
        case 0x103934u: goto label_103934;
        case 0x103938u: goto label_103938;
        case 0x10393cu: goto label_10393c;
        case 0x103940u: goto label_103940;
        case 0x103944u: goto label_103944;
        case 0x103948u: goto label_103948;
        case 0x10394cu: goto label_10394c;
        case 0x103950u: goto label_103950;
        case 0x103954u: goto label_103954;
        case 0x103958u: goto label_103958;
        case 0x10395cu: goto label_10395c;
        case 0x103960u: goto label_103960;
        case 0x103964u: goto label_103964;
        case 0x103968u: goto label_103968;
        case 0x10396cu: goto label_10396c;
        case 0x103970u: goto label_103970;
        case 0x103974u: goto label_103974;
        case 0x103978u: goto label_103978;
        case 0x10397cu: goto label_10397c;
        case 0x103980u: goto label_103980;
        case 0x103984u: goto label_103984;
        case 0x103988u: goto label_103988;
        case 0x10398cu: goto label_10398c;
        case 0x103990u: goto label_103990;
        case 0x103994u: goto label_103994;
        case 0x103998u: goto label_103998;
        case 0x10399cu: goto label_10399c;
        case 0x1039a0u: goto label_1039a0;
        case 0x1039a4u: goto label_1039a4;
        case 0x1039a8u: goto label_1039a8;
        case 0x1039acu: goto label_1039ac;
        case 0x1039b0u: goto label_1039b0;
        case 0x1039b4u: goto label_1039b4;
        case 0x1039b8u: goto label_1039b8;
        case 0x1039bcu: goto label_1039bc;
        case 0x1039c0u: goto label_1039c0;
        case 0x1039c4u: goto label_1039c4;
        case 0x1039c8u: goto label_1039c8;
        case 0x1039ccu: goto label_1039cc;
        case 0x1039d0u: goto label_1039d0;
        case 0x1039d4u: goto label_1039d4;
        case 0x1039d8u: goto label_1039d8;
        case 0x1039dcu: goto label_1039dc;
        case 0x1039e0u: goto label_1039e0;
        case 0x1039e4u: goto label_1039e4;
        case 0x1039e8u: goto label_1039e8;
        case 0x1039ecu: goto label_1039ec;
        case 0x1039f0u: goto label_1039f0;
        case 0x1039f4u: goto label_1039f4;
        case 0x1039f8u: goto label_1039f8;
        case 0x1039fcu: goto label_1039fc;
        case 0x103a00u: goto label_103a00;
        case 0x103a04u: goto label_103a04;
        case 0x103a08u: goto label_103a08;
        case 0x103a0cu: goto label_103a0c;
        case 0x103a10u: goto label_103a10;
        case 0x103a14u: goto label_103a14;
        case 0x103a18u: goto label_103a18;
        case 0x103a1cu: goto label_103a1c;
        case 0x103a20u: goto label_103a20;
        case 0x103a24u: goto label_103a24;
        case 0x103a28u: goto label_103a28;
        case 0x103a2cu: goto label_103a2c;
        case 0x103a30u: goto label_103a30;
        case 0x103a34u: goto label_103a34;
        case 0x103a38u: goto label_103a38;
        case 0x103a3cu: goto label_103a3c;
        case 0x103a40u: goto label_103a40;
        case 0x103a44u: goto label_103a44;
        case 0x103a48u: goto label_103a48;
        case 0x103a4cu: goto label_103a4c;
        case 0x103a50u: goto label_103a50;
        case 0x103a54u: goto label_103a54;
        case 0x103a58u: goto label_103a58;
        case 0x103a5cu: goto label_103a5c;
        case 0x103a60u: goto label_103a60;
        case 0x103a64u: goto label_103a64;
        case 0x103a68u: goto label_103a68;
        case 0x103a6cu: goto label_103a6c;
        case 0x103a70u: goto label_103a70;
        case 0x103a74u: goto label_103a74;
        case 0x103a78u: goto label_103a78;
        case 0x103a7cu: goto label_103a7c;
        case 0x103a80u: goto label_103a80;
        case 0x103a84u: goto label_103a84;
        case 0x103a88u: goto label_103a88;
        case 0x103a8cu: goto label_103a8c;
        case 0x103a90u: goto label_103a90;
        case 0x103a94u: goto label_103a94;
        case 0x103a98u: goto label_103a98;
        case 0x103a9cu: goto label_103a9c;
        case 0x103aa0u: goto label_103aa0;
        case 0x103aa4u: goto label_103aa4;
        case 0x103aa8u: goto label_103aa8;
        case 0x103aacu: goto label_103aac;
        case 0x103ab0u: goto label_103ab0;
        case 0x103ab4u: goto label_103ab4;
        case 0x103ab8u: goto label_103ab8;
        case 0x103abcu: goto label_103abc;
        case 0x103ac0u: goto label_103ac0;
        case 0x103ac4u: goto label_103ac4;
        case 0x103ac8u: goto label_103ac8;
        case 0x103accu: goto label_103acc;
        case 0x103ad0u: goto label_103ad0;
        case 0x103ad4u: goto label_103ad4;
        case 0x103ad8u: goto label_103ad8;
        case 0x103adcu: goto label_103adc;
        case 0x103ae0u: goto label_103ae0;
        case 0x103ae4u: goto label_103ae4;
        case 0x103ae8u: goto label_103ae8;
        case 0x103aecu: goto label_103aec;
        case 0x103af0u: goto label_103af0;
        case 0x103af4u: goto label_103af4;
        case 0x103af8u: goto label_103af8;
        case 0x103afcu: goto label_103afc;
        case 0x103b00u: goto label_103b00;
        case 0x103b04u: goto label_103b04;
        case 0x103b08u: goto label_103b08;
        case 0x103b0cu: goto label_103b0c;
        case 0x103b10u: goto label_103b10;
        case 0x103b14u: goto label_103b14;
        case 0x103b18u: goto label_103b18;
        case 0x103b1cu: goto label_103b1c;
        case 0x103b20u: goto label_103b20;
        case 0x103b24u: goto label_103b24;
        case 0x103b28u: goto label_103b28;
        case 0x103b2cu: goto label_103b2c;
        case 0x103b30u: goto label_103b30;
        case 0x103b34u: goto label_103b34;
        case 0x103b38u: goto label_103b38;
        case 0x103b3cu: goto label_103b3c;
        case 0x103b40u: goto label_103b40;
        case 0x103b44u: goto label_103b44;
        case 0x103b48u: goto label_103b48;
        case 0x103b4cu: goto label_103b4c;
        case 0x103b50u: goto label_103b50;
        case 0x103b54u: goto label_103b54;
        case 0x103b58u: goto label_103b58;
        case 0x103b5cu: goto label_103b5c;
        case 0x103b60u: goto label_103b60;
        case 0x103b64u: goto label_103b64;
        case 0x103b68u: goto label_103b68;
        case 0x103b6cu: goto label_103b6c;
        case 0x103b70u: goto label_103b70;
        case 0x103b74u: goto label_103b74;
        case 0x103b78u: goto label_103b78;
        case 0x103b7cu: goto label_103b7c;
        case 0x103b80u: goto label_103b80;
        case 0x103b84u: goto label_103b84;
        case 0x103b88u: goto label_103b88;
        case 0x103b8cu: goto label_103b8c;
        case 0x103b90u: goto label_103b90;
        case 0x103b94u: goto label_103b94;
        case 0x103b98u: goto label_103b98;
        case 0x103b9cu: goto label_103b9c;
        case 0x103ba0u: goto label_103ba0;
        case 0x103ba4u: goto label_103ba4;
        case 0x103ba8u: goto label_103ba8;
        case 0x103bacu: goto label_103bac;
        case 0x103bb0u: goto label_103bb0;
        case 0x103bb4u: goto label_103bb4;
        case 0x103bb8u: goto label_103bb8;
        case 0x103bbcu: goto label_103bbc;
        case 0x103bc0u: goto label_103bc0;
        case 0x103bc4u: goto label_103bc4;
        case 0x103bc8u: goto label_103bc8;
        case 0x103bccu: goto label_103bcc;
        case 0x103bd0u: goto label_103bd0;
        case 0x103bd4u: goto label_103bd4;
        case 0x103bd8u: goto label_103bd8;
        case 0x103bdcu: goto label_103bdc;
        case 0x103be0u: goto label_103be0;
        case 0x103be4u: goto label_103be4;
        case 0x103be8u: goto label_103be8;
        case 0x103becu: goto label_103bec;
        case 0x103bf0u: goto label_103bf0;
        case 0x103bf4u: goto label_103bf4;
        case 0x103bf8u: goto label_103bf8;
        case 0x103bfcu: goto label_103bfc;
        case 0x103c00u: goto label_103c00;
        case 0x103c04u: goto label_103c04;
        case 0x103c08u: goto label_103c08;
        case 0x103c0cu: goto label_103c0c;
        case 0x103c10u: goto label_103c10;
        case 0x103c14u: goto label_103c14;
        case 0x103c18u: goto label_103c18;
        case 0x103c1cu: goto label_103c1c;
        case 0x103c20u: goto label_103c20;
        case 0x103c24u: goto label_103c24;
        case 0x103c28u: goto label_103c28;
        case 0x103c2cu: goto label_103c2c;
        case 0x103c30u: goto label_103c30;
        case 0x103c34u: goto label_103c34;
        case 0x103c38u: goto label_103c38;
        case 0x103c3cu: goto label_103c3c;
        case 0x103c40u: goto label_103c40;
        case 0x103c44u: goto label_103c44;
        case 0x103c48u: goto label_103c48;
        case 0x103c4cu: goto label_103c4c;
        case 0x103c50u: goto label_103c50;
        case 0x103c54u: goto label_103c54;
        case 0x103c58u: goto label_103c58;
        case 0x103c5cu: goto label_103c5c;
        case 0x103c60u: goto label_103c60;
        case 0x103c64u: goto label_103c64;
        case 0x103c68u: goto label_103c68;
        case 0x103c6cu: goto label_103c6c;
        case 0x103c70u: goto label_103c70;
        case 0x103c74u: goto label_103c74;
        case 0x103c78u: goto label_103c78;
        case 0x103c7cu: goto label_103c7c;
        case 0x103c80u: goto label_103c80;
        case 0x103c84u: goto label_103c84;
        case 0x103c88u: goto label_103c88;
        case 0x103c8cu: goto label_103c8c;
        case 0x103c90u: goto label_103c90;
        case 0x103c94u: goto label_103c94;
        case 0x103c98u: goto label_103c98;
        case 0x103c9cu: goto label_103c9c;
        case 0x103ca0u: goto label_103ca0;
        case 0x103ca4u: goto label_103ca4;
        case 0x103ca8u: goto label_103ca8;
        case 0x103cacu: goto label_103cac;
        case 0x103cb0u: goto label_103cb0;
        case 0x103cb4u: goto label_103cb4;
        case 0x103cb8u: goto label_103cb8;
        case 0x103cbcu: goto label_103cbc;
        case 0x103cc0u: goto label_103cc0;
        case 0x103cc4u: goto label_103cc4;
        case 0x103cc8u: goto label_103cc8;
        case 0x103cccu: goto label_103ccc;
        case 0x103cd0u: goto label_103cd0;
        case 0x103cd4u: goto label_103cd4;
        case 0x103cd8u: goto label_103cd8;
        case 0x103cdcu: goto label_103cdc;
        case 0x103ce0u: goto label_103ce0;
        case 0x103ce4u: goto label_103ce4;
        case 0x103ce8u: goto label_103ce8;
        case 0x103cecu: goto label_103cec;
        case 0x103cf0u: goto label_103cf0;
        case 0x103cf4u: goto label_103cf4;
        case 0x103cf8u: goto label_103cf8;
        case 0x103cfcu: goto label_103cfc;
        case 0x103d00u: goto label_103d00;
        case 0x103d04u: goto label_103d04;
        case 0x103d08u: goto label_103d08;
        case 0x103d0cu: goto label_103d0c;
        case 0x103d10u: goto label_103d10;
        case 0x103d14u: goto label_103d14;
        case 0x103d18u: goto label_103d18;
        case 0x103d1cu: goto label_103d1c;
        case 0x103d20u: goto label_103d20;
        case 0x103d24u: goto label_103d24;
        case 0x103d28u: goto label_103d28;
        case 0x103d2cu: goto label_103d2c;
        case 0x103d30u: goto label_103d30;
        case 0x103d34u: goto label_103d34;
        case 0x103d38u: goto label_103d38;
        case 0x103d3cu: goto label_103d3c;
        case 0x103d40u: goto label_103d40;
        case 0x103d44u: goto label_103d44;
        case 0x103d48u: goto label_103d48;
        case 0x103d4cu: goto label_103d4c;
        case 0x103d50u: goto label_103d50;
        case 0x103d54u: goto label_103d54;
        case 0x103d58u: goto label_103d58;
        case 0x103d5cu: goto label_103d5c;
        case 0x103d60u: goto label_103d60;
        case 0x103d64u: goto label_103d64;
        case 0x103d68u: goto label_103d68;
        case 0x103d6cu: goto label_103d6c;
        case 0x103d70u: goto label_103d70;
        case 0x103d74u: goto label_103d74;
        case 0x103d78u: goto label_103d78;
        case 0x103d7cu: goto label_103d7c;
        case 0x103d80u: goto label_103d80;
        case 0x103d84u: goto label_103d84;
        case 0x103d88u: goto label_103d88;
        case 0x103d8cu: goto label_103d8c;
        case 0x103d90u: goto label_103d90;
        case 0x103d94u: goto label_103d94;
        case 0x103d98u: goto label_103d98;
        case 0x103d9cu: goto label_103d9c;
        case 0x103da0u: goto label_103da0;
        case 0x103da4u: goto label_103da4;
        case 0x103da8u: goto label_103da8;
        case 0x103dacu: goto label_103dac;
        case 0x103db0u: goto label_103db0;
        case 0x103db4u: goto label_103db4;
        case 0x103db8u: goto label_103db8;
        case 0x103dbcu: goto label_103dbc;
        case 0x103dc0u: goto label_103dc0;
        case 0x103dc4u: goto label_103dc4;
        case 0x103dc8u: goto label_103dc8;
        case 0x103dccu: goto label_103dcc;
        case 0x103dd0u: goto label_103dd0;
        case 0x103dd4u: goto label_103dd4;
        case 0x103dd8u: goto label_103dd8;
        case 0x103ddcu: goto label_103ddc;
        case 0x103de0u: goto label_103de0;
        case 0x103de4u: goto label_103de4;
        case 0x103de8u: goto label_103de8;
        case 0x103decu: goto label_103dec;
        case 0x103df0u: goto label_103df0;
        case 0x103df4u: goto label_103df4;
        case 0x103df8u: goto label_103df8;
        case 0x103dfcu: goto label_103dfc;
        case 0x103e00u: goto label_103e00;
        case 0x103e04u: goto label_103e04;
        case 0x103e08u: goto label_103e08;
        case 0x103e0cu: goto label_103e0c;
        case 0x103e10u: goto label_103e10;
        case 0x103e14u: goto label_103e14;
        case 0x103e18u: goto label_103e18;
        case 0x103e1cu: goto label_103e1c;
        case 0x103e20u: goto label_103e20;
        case 0x103e24u: goto label_103e24;
        case 0x103e28u: goto label_103e28;
        case 0x103e2cu: goto label_103e2c;
        case 0x103e30u: goto label_103e30;
        case 0x103e34u: goto label_103e34;
        case 0x103e38u: goto label_103e38;
        case 0x103e3cu: goto label_103e3c;
        case 0x103e40u: goto label_103e40;
        case 0x103e44u: goto label_103e44;
        case 0x103e48u: goto label_103e48;
        case 0x103e4cu: goto label_103e4c;
        case 0x103e50u: goto label_103e50;
        case 0x103e54u: goto label_103e54;
        case 0x103e58u: goto label_103e58;
        case 0x103e5cu: goto label_103e5c;
        case 0x103e60u: goto label_103e60;
        case 0x103e64u: goto label_103e64;
        case 0x103e68u: goto label_103e68;
        case 0x103e6cu: goto label_103e6c;
        case 0x103e70u: goto label_103e70;
        case 0x103e74u: goto label_103e74;
        case 0x103e78u: goto label_103e78;
        case 0x103e7cu: goto label_103e7c;
        case 0x103e80u: goto label_103e80;
        case 0x103e84u: goto label_103e84;
        case 0x103e88u: goto label_103e88;
        case 0x103e8cu: goto label_103e8c;
        default: break;
    }

    ctx->pc = 0x101dd8u;

label_101dd8:
    // 0x101dd8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x101dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_101ddc:
    // 0x101ddc: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x101ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_101de0:
    // 0x101de0: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x101de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_101de4:
    // 0x101de4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x101de4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_101de8:
    // 0x101de8: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x101de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_101dec:
    // 0x101dec: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x101decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_101df0:
    // 0x101df0: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x101df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_101df4:
    // 0x101df4: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x101df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_101df8:
    // 0x101df8: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x101df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_101dfc:
    // 0x101dfc: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x101dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_101e00:
    // 0x101e00: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x101e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_101e04:
    // 0x101e04: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x101e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_101e08:
    // 0x101e08: 0xe7b70128  swc1        $f23, 0x128($sp)
    ctx->pc = 0x101e08u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_101e0c:
    // 0x101e0c: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x101e0cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_101e10:
    // 0x101e10: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x101e10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_101e14:
    // 0x101e14: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x101e14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_101e18:
    // 0x101e18: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x101e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
label_101e1c:
    // 0x101e1c: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x101e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_101e20:
    // 0x101e20: 0x8ef10120  lw          $s1, 0x120($s7)
    ctx->pc = 0x101e20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
label_101e24:
    // 0x101e24: 0x12200805  beqz        $s1, . + 4 + (0x805 << 2)
label_101e28:
    if (ctx->pc == 0x101E28u) {
        ctx->pc = 0x101E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E24u;
        // 0x101e28: 0x8c5202b8  lw          $s2, 0x2B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 696)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101E2Cu;
        goto label_101e2c;
    }
    ctx->pc = 0x101E24u;
    {
        const bool branch_taken_0x101e24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x101E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E24u;
        // 0x101e28: 0x8c5202b8  lw          $s2, 0x2B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e24) {
            ctx->pc = 0x103E3Cu;
            goto label_103e3c;
        }
    }
    ctx->pc = 0x101E2Cu;
label_101e2c:
    // 0x101e2c: 0x96e20124  lhu         $v0, 0x124($s7)
    ctx->pc = 0x101e2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 292)));
label_101e30:
    // 0x101e30: 0x96e30126  lhu         $v1, 0x126($s7)
    ctx->pc = 0x101e30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 294)));
label_101e34:
    // 0x101e34: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x101e34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_101e38:
    // 0x101e38: 0x50400801  beql        $v0, $zero, . + 4 + (0x801 << 2)
label_101e3c:
    if (ctx->pc == 0x101E3Cu) {
        ctx->pc = 0x101E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E38u;
        // 0x101e3c: 0x96e30124  lhu         $v1, 0x124($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101E40u;
        goto label_101e40;
    }
    ctx->pc = 0x101E38u;
    {
        const bool branch_taken_0x101e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x101e38) {
            ctx->pc = 0x101E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101E38u;
            // 0x101e3c: 0x96e30124  lhu         $v1, 0x124($s7) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103E40u;
            goto label_103e40;
        }
    }
    ctx->pc = 0x101E40u;
label_101e40:
    // 0x101e40: 0x96e20128  lhu         $v0, 0x128($s7)
    ctx->pc = 0x101e40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 296)));
label_101e44:
    // 0x101e44: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x101e44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_101e48:
    // 0x101e48: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x101e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_101e4c:
    // 0x101e4c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x101e4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_101e50:
    // 0x101e50: 0x544007fb  bnel        $v0, $zero, . + 4 + (0x7FB << 2)
label_101e54:
    if (ctx->pc == 0x101E54u) {
        ctx->pc = 0x101E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E50u;
        // 0x101e54: 0x96e30124  lhu         $v1, 0x124($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101E58u;
        goto label_101e58;
    }
    ctx->pc = 0x101E50u;
    {
        const bool branch_taken_0x101e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101e50) {
            ctx->pc = 0x101E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101E50u;
            // 0x101e54: 0x96e30124  lhu         $v1, 0x124($s7) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103E40u;
            goto label_103e40;
        }
    }
    ctx->pc = 0x101E58u;
label_101e58:
    // 0x101e58: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x101e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_101e5c:
    // 0x101e5c: 0x3c013a80  lui         $at, 0x3A80
    ctx->pc = 0x101e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14976 << 16));
label_101e60:
    // 0x101e60: 0x34212008  ori         $at, $at, 0x2008
    ctx->pc = 0x101e60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8200);
label_101e64:
    // 0x101e64: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x101e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_101e68:
    // 0x101e68: 0x3c013a00  lui         $at, 0x3A00
    ctx->pc = 0x101e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14848 << 16));
label_101e6c:
    // 0x101e6c: 0x34211002  ori         $at, $at, 0x1002
    ctx->pc = 0x101e6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4098);
label_101e70:
    // 0x101e70: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x101e70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_101e74:
    // 0x101e74: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x101e74u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_101e78:
    // 0x101e78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x101e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_101e7c:
    // 0x101e7c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x101e7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_101e80:
    // 0x101e80: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x101e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_101e84:
    // 0x101e84: 0x96e3001e  lhu         $v1, 0x1E($s7)
    ctx->pc = 0x101e84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 30)));
label_101e88:
    // 0x101e88: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x101e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_101e8c:
    // 0x101e8c: 0x544007d9  bnel        $v0, $zero, . + 4 + (0x7D9 << 2)
label_101e90:
    if (ctx->pc == 0x101E90u) {
        ctx->pc = 0x101E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E8Cu;
        // 0x101e90: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101E94u;
        goto label_101e94;
    }
    ctx->pc = 0x101E8Cu;
    {
        const bool branch_taken_0x101e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101e8c) {
            ctx->pc = 0x101E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101E8Cu;
            // 0x101e90: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x101E94u;
label_101e94:
    // 0x101e94: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x101e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_101e98:
    // 0x101e98: 0x544007d6  bnel        $v0, $zero, . + 4 + (0x7D6 << 2)
label_101e9c:
    if (ctx->pc == 0x101E9Cu) {
        ctx->pc = 0x101E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E98u;
        // 0x101e9c: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101EA0u;
        goto label_101ea0;
    }
    ctx->pc = 0x101E98u;
    {
        const bool branch_taken_0x101e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101e98) {
            ctx->pc = 0x101E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101E98u;
            // 0x101e9c: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x101EA0u;
label_101ea0:
    // 0x101ea0: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x101ea0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_101ea4:
    // 0x101ea4: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x101ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_101ea8:
    // 0x101ea8: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x101ea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_101eac:
    // 0x101eac: 0x1483001c  bne         $a0, $v1, . + 4 + (0x1C << 2)
label_101eb0:
    if (ctx->pc == 0x101EB0u) {
        ctx->pc = 0x101EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101EACu;
        // 0x101eb0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101EB4u;
        goto label_101eb4;
    }
    ctx->pc = 0x101EACu;
    {
        const bool branch_taken_0x101eac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x101EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101EACu;
        // 0x101eb0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101eac) {
            ctx->pc = 0x101F20u;
            goto label_101f20;
        }
    }
    ctx->pc = 0x101EB4u;
label_101eb4:
    // 0x101eb4: 0xc089b98  jal         func_226E60
label_101eb8:
    if (ctx->pc == 0x101EB8u) {
        ctx->pc = 0x101EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101EB4u;
        // 0x101eb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101EBCu;
        goto label_101ebc;
    }
    ctx->pc = 0x101EB4u;
    SET_GPR_U32(ctx, 31, 0x101EBCu);
    ctx->pc = 0x101EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101EB4u;
    // 0x101eb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x101EB4u, 0x101EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101EBCu;
label_101ebc:
    // 0x101ebc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x101ebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101ec0:
    // 0x101ec0: 0x120007cb  beqz        $s0, . + 4 + (0x7CB << 2)
label_101ec4:
    if (ctx->pc == 0x101EC4u) {
        ctx->pc = 0x101EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101EC0u;
        // 0x101ec4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101EC8u;
        goto label_101ec8;
    }
    ctx->pc = 0x101EC0u;
    {
        const bool branch_taken_0x101ec0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x101EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101EC0u;
        // 0x101ec4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ec0) {
            ctx->pc = 0x103DF0u;
            goto label_103df0;
        }
    }
    ctx->pc = 0x101EC8u;
label_101ec8:
    // 0x101ec8: 0xc08a658  jal         func_229960
label_101ecc:
    if (ctx->pc == 0x101ECCu) {
        ctx->pc = 0x101ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101EC8u;
        // 0x101ecc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101ED0u;
        goto label_101ed0;
    }
    ctx->pc = 0x101EC8u;
    SET_GPR_U32(ctx, 31, 0x101ED0u);
    ctx->pc = 0x101ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101EC8u;
    // 0x101ecc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229960u, 0x101EC8u, 0x101ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101ED0u;
label_101ed0:
    // 0x101ed0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x101ed0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_101ed4:
    // 0x101ed4: 0xc0899ae  jal         func_2266B8
label_101ed8:
    if (ctx->pc == 0x101ED8u) {
        ctx->pc = 0x101ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101ED4u;
        // 0x101ed8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101EDCu;
        goto label_101edc;
    }
    ctx->pc = 0x101ED4u;
    SET_GPR_U32(ctx, 31, 0x101EDCu);
    ctx->pc = 0x101ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101ED4u;
    // 0x101ed8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x101ED4u, 0x101EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101EDCu;
label_101edc:
    // 0x101edc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x101edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101ee0:
    // 0x101ee0: 0xc095128  jal         func_2544A0
label_101ee4:
    if (ctx->pc == 0x101EE4u) {
        ctx->pc = 0x101EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101EE0u;
        // 0x101ee4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101EE8u;
        goto label_101ee8;
    }
    ctx->pc = 0x101EE0u;
    SET_GPR_U32(ctx, 31, 0x101EE8u);
    ctx->pc = 0x101EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101EE0u;
    // 0x101ee4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x101EE0u, 0x101EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101EE8u;
label_101ee8:
    // 0x101ee8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x101ee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_101eec:
    // 0x101eec: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x101eecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_101ef0:
    // 0x101ef0: 0x0  nop
    ctx->pc = 0x101ef0u;
    // NOP
label_101ef4:
    // 0x101ef4: 0x450207bf  bc1fl       . + 4 + (0x7BF << 2)
label_101ef8:
    if (ctx->pc == 0x101EF8u) {
        ctx->pc = 0x101EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101EF4u;
        // 0x101ef8: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101EFCu;
        goto label_101efc;
    }
    ctx->pc = 0x101EF4u;
    {
        const bool branch_taken_0x101ef4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x101ef4) {
            ctx->pc = 0x101EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101EF4u;
            // 0x101ef8: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x101EFCu;
label_101efc:
    // 0x101efc: 0xc0e8b48  jal         func_3A2D20
label_101f00:
    if (ctx->pc == 0x101F00u) {
        ctx->pc = 0x101F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101EFCu;
        // 0x101f00: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101F04u;
        goto label_101f04;
    }
    ctx->pc = 0x101EFCu;
    SET_GPR_U32(ctx, 31, 0x101F04u);
    ctx->pc = 0x101F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101EFCu;
    // 0x101f00: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x101EFCu, 0x101F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F04u;
label_101f04:
    // 0x101f04: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x101f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_101f08:
    // 0x101f08: 0xc0e8b70  jal         func_3A2DC0
label_101f0c:
    if (ctx->pc == 0x101F0Cu) {
        ctx->pc = 0x101F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F08u;
        // 0x101f0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101F10u;
        goto label_101f10;
    }
    ctx->pc = 0x101F08u;
    SET_GPR_U32(ctx, 31, 0x101F10u);
    ctx->pc = 0x101F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F08u;
    // 0x101f0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x101F08u, 0x101F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F10u;
label_101f10:
    // 0x101f10: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x101f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_101f14:
    // 0x101f14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x101f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_101f18:
    // 0x101f18: 0x10000797  b           . + 4 + (0x797 << 2)
label_101f1c:
    if (ctx->pc == 0x101F1Cu) {
        ctx->pc = 0x101F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F18u;
        // 0x101f1c: 0x240600a6  addiu       $a2, $zero, 0xA6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101F20u;
        goto label_101f20;
    }
    ctx->pc = 0x101F18u;
    {
        const bool branch_taken_0x101f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F18u;
        // 0x101f1c: 0x240600a6  addiu       $a2, $zero, 0xA6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f18) {
            ctx->pc = 0x103D78u;
            goto label_103d78;
        }
    }
    ctx->pc = 0x101F20u;
label_101f20:
    // 0x101f20: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x101f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_101f24:
    // 0x101f24: 0x1482001c  bne         $a0, $v0, . + 4 + (0x1C << 2)
label_101f28:
    if (ctx->pc == 0x101F28u) {
        ctx->pc = 0x101F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F24u;
        // 0x101f28: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101F2Cu;
        goto label_101f2c;
    }
    ctx->pc = 0x101F24u;
    {
        const bool branch_taken_0x101f24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x101F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F24u;
        // 0x101f28: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f24) {
            ctx->pc = 0x101F98u;
            goto label_101f98;
        }
    }
    ctx->pc = 0x101F2Cu;
label_101f2c:
    // 0x101f2c: 0xc089b98  jal         func_226E60
label_101f30:
    if (ctx->pc == 0x101F30u) {
        ctx->pc = 0x101F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F2Cu;
        // 0x101f30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101F34u;
        goto label_101f34;
    }
    ctx->pc = 0x101F2Cu;
    SET_GPR_U32(ctx, 31, 0x101F34u);
    ctx->pc = 0x101F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F2Cu;
    // 0x101f30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x101F2Cu, 0x101F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F34u;
label_101f34:
    // 0x101f34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x101f34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101f38:
    // 0x101f38: 0x120007ad  beqz        $s0, . + 4 + (0x7AD << 2)
label_101f3c:
    if (ctx->pc == 0x101F3Cu) {
        ctx->pc = 0x101F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F38u;
        // 0x101f3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101F40u;
        goto label_101f40;
    }
    ctx->pc = 0x101F38u;
    {
        const bool branch_taken_0x101f38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x101F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F38u;
        // 0x101f3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f38) {
            ctx->pc = 0x103DF0u;
            goto label_103df0;
        }
    }
    ctx->pc = 0x101F40u;
label_101f40:
    // 0x101f40: 0xc08a658  jal         func_229960
label_101f44:
    if (ctx->pc == 0x101F44u) {
        ctx->pc = 0x101F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F40u;
        // 0x101f44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101F48u;
        goto label_101f48;
    }
    ctx->pc = 0x101F40u;
    SET_GPR_U32(ctx, 31, 0x101F48u);
    ctx->pc = 0x101F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F40u;
    // 0x101f44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229960u, 0x101F40u, 0x101F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F48u;
label_101f48:
    // 0x101f48: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x101f48u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_101f4c:
    // 0x101f4c: 0xc0899ae  jal         func_2266B8
label_101f50:
    if (ctx->pc == 0x101F50u) {
        ctx->pc = 0x101F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F4Cu;
        // 0x101f50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101F54u;
        goto label_101f54;
    }
    ctx->pc = 0x101F4Cu;
    SET_GPR_U32(ctx, 31, 0x101F54u);
    ctx->pc = 0x101F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F4Cu;
    // 0x101f50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x101F4Cu, 0x101F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F54u;
label_101f54:
    // 0x101f54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x101f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101f58:
    // 0x101f58: 0xc095128  jal         func_2544A0
label_101f5c:
    if (ctx->pc == 0x101F5Cu) {
        ctx->pc = 0x101F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F58u;
        // 0x101f5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101F60u;
        goto label_101f60;
    }
    ctx->pc = 0x101F58u;
    SET_GPR_U32(ctx, 31, 0x101F60u);
    ctx->pc = 0x101F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F58u;
    // 0x101f5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x101F58u, 0x101F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F60u;
label_101f60:
    // 0x101f60: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x101f60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_101f64:
    // 0x101f64: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x101f64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_101f68:
    // 0x101f68: 0x0  nop
    ctx->pc = 0x101f68u;
    // NOP
label_101f6c:
    // 0x101f6c: 0x450207a1  bc1fl       . + 4 + (0x7A1 << 2)
label_101f70:
    if (ctx->pc == 0x101F70u) {
        ctx->pc = 0x101F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F6Cu;
        // 0x101f70: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101F74u;
        goto label_101f74;
    }
    ctx->pc = 0x101F6Cu;
    {
        const bool branch_taken_0x101f6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x101f6c) {
            ctx->pc = 0x101F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101F6Cu;
            // 0x101f70: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x101F74u;
label_101f74:
    // 0x101f74: 0xc0e8b48  jal         func_3A2D20
label_101f78:
    if (ctx->pc == 0x101F78u) {
        ctx->pc = 0x101F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F74u;
        // 0x101f78: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101F7Cu;
        goto label_101f7c;
    }
    ctx->pc = 0x101F74u;
    SET_GPR_U32(ctx, 31, 0x101F7Cu);
    ctx->pc = 0x101F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F74u;
    // 0x101f78: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x101F74u, 0x101F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F7Cu;
label_101f7c:
    // 0x101f7c: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x101f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_101f80:
    // 0x101f80: 0xc0e8b70  jal         func_3A2DC0
label_101f84:
    if (ctx->pc == 0x101F84u) {
        ctx->pc = 0x101F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F80u;
        // 0x101f84: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101F88u;
        goto label_101f88;
    }
    ctx->pc = 0x101F80u;
    SET_GPR_U32(ctx, 31, 0x101F88u);
    ctx->pc = 0x101F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F80u;
    // 0x101f84: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x101F80u, 0x101F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F88u;
label_101f88:
    // 0x101f88: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x101f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_101f8c:
    // 0x101f8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x101f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_101f90:
    // 0x101f90: 0x10000779  b           . + 4 + (0x779 << 2)
label_101f94:
    if (ctx->pc == 0x101F94u) {
        ctx->pc = 0x101F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F90u;
        // 0x101f94: 0x240600a4  addiu       $a2, $zero, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101F98u;
        goto label_101f98;
    }
    ctx->pc = 0x101F90u;
    {
        const bool branch_taken_0x101f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F90u;
        // 0x101f94: 0x240600a4  addiu       $a2, $zero, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f90) {
            ctx->pc = 0x103D78u;
            goto label_103d78;
        }
    }
    ctx->pc = 0x101F98u;
label_101f98:
    // 0x101f98: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_101f9c:
    if (ctx->pc == 0x101F9Cu) {
        ctx->pc = 0x101F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F98u;
        // 0x101f9c: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101FA0u;
        goto label_101fa0;
    }
    ctx->pc = 0x101F98u;
    {
        const bool branch_taken_0x101f98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x101F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F98u;
        // 0x101f9c: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f98) {
            ctx->pc = 0x101FB8u;
            goto label_101fb8;
        }
    }
    ctx->pc = 0x101FA0u;
label_101fa0:
    // 0x101fa0: 0xc0e8b48  jal         func_3A2D20
label_101fa4:
    if (ctx->pc == 0x101FA4u) {
        ctx->pc = 0x101FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101FA0u;
        // 0x101fa4: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101FA8u;
        goto label_101fa8;
    }
    ctx->pc = 0x101FA0u;
    SET_GPR_U32(ctx, 31, 0x101FA8u);
    ctx->pc = 0x101FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101FA0u;
    // 0x101fa4: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x101FA0u, 0x101FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101FA8u;
label_101fa8:
    // 0x101fa8: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x101fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_101fac:
    // 0x101fac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x101facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_101fb0:
    // 0x101fb0: 0x10000771  b           . + 4 + (0x771 << 2)
label_101fb4:
    if (ctx->pc == 0x101FB4u) {
        ctx->pc = 0x101FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101FB0u;
        // 0x101fb4: 0x240600a5  addiu       $a2, $zero, 0xA5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101FB8u;
        goto label_101fb8;
    }
    ctx->pc = 0x101FB0u;
    {
        const bool branch_taken_0x101fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101FB0u;
        // 0x101fb4: 0x240600a5  addiu       $a2, $zero, 0xA5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101fb0) {
            ctx->pc = 0x103D78u;
            goto label_103d78;
        }
    }
    ctx->pc = 0x101FB8u;
label_101fb8:
    // 0x101fb8: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
label_101fbc:
    if (ctx->pc == 0x101FBCu) {
        ctx->pc = 0x101FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101FB8u;
        // 0x101fbc: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101FC0u;
        goto label_101fc0;
    }
    ctx->pc = 0x101FB8u;
    {
        const bool branch_taken_0x101fb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x101FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101FB8u;
        // 0x101fbc: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101fb8) {
            ctx->pc = 0x101FCCu;
            goto label_101fcc;
        }
    }
    ctx->pc = 0x101FC0u;
label_101fc0:
    // 0x101fc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x101fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_101fc4:
    // 0x101fc4: 0x1000078a  b           . + 4 + (0x78A << 2)
label_101fc8:
    if (ctx->pc == 0x101FC8u) {
        ctx->pc = 0x101FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101FC4u;
        // 0x101fc8: 0xa24203be  sb          $v0, 0x3BE($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 958), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101FCCu;
        goto label_101fcc;
    }
    ctx->pc = 0x101FC4u;
    {
        const bool branch_taken_0x101fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101FC4u;
        // 0x101fc8: 0xa24203be  sb          $v0, 0x3BE($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 958), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101fc4) {
            ctx->pc = 0x103DF0u;
            goto label_103df0;
        }
    }
    ctx->pc = 0x101FCCu;
label_101fcc:
    // 0x101fcc: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_101fd0:
    if (ctx->pc == 0x101FD0u) {
        ctx->pc = 0x101FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101FCCu;
        // 0x101fd0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101FD4u;
        goto label_101fd4;
    }
    ctx->pc = 0x101FCCu;
    {
        const bool branch_taken_0x101fcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x101FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101FCCu;
        // 0x101fd0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101fcc) {
            ctx->pc = 0x101FDCu;
            goto label_101fdc;
        }
    }
    ctx->pc = 0x101FD4u;
label_101fd4:
    // 0x101fd4: 0x10000786  b           . + 4 + (0x786 << 2)
label_101fd8:
    if (ctx->pc == 0x101FD8u) {
        ctx->pc = 0x101FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101FD4u;
        // 0x101fd8: 0xa24003be  sb          $zero, 0x3BE($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 958), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101FDCu;
        goto label_101fdc;
    }
    ctx->pc = 0x101FD4u;
    {
        const bool branch_taken_0x101fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101FD4u;
        // 0x101fd8: 0xa24003be  sb          $zero, 0x3BE($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 958), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101fd4) {
            ctx->pc = 0x103DF0u;
            goto label_103df0;
        }
    }
    ctx->pc = 0x101FDCu;
label_101fdc:
    // 0x101fdc: 0x1482000d  bne         $a0, $v0, . + 4 + (0xD << 2)
label_101fe0:
    if (ctx->pc == 0x101FE0u) {
        ctx->pc = 0x101FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101FDCu;
        // 0x101fe0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101FE4u;
        goto label_101fe4;
    }
    ctx->pc = 0x101FDCu;
    {
        const bool branch_taken_0x101fdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x101FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101FDCu;
        // 0x101fe0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101fdc) {
            ctx->pc = 0x102014u;
            goto label_102014;
        }
    }
    ctx->pc = 0x101FE4u;
label_101fe4:
    // 0x101fe4: 0xc0e8b48  jal         func_3A2D20
label_101fe8:
    if (ctx->pc == 0x101FE8u) {
        ctx->pc = 0x101FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101FE4u;
        // 0x101fe8: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101FECu;
        goto label_101fec;
    }
    ctx->pc = 0x101FE4u;
    SET_GPR_U32(ctx, 31, 0x101FECu);
    ctx->pc = 0x101FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101FE4u;
    // 0x101fe8: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x101FE4u, 0x101FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101FECu;
label_101fec:
    // 0x101fec: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x101fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_101ff0:
    // 0x101ff0: 0xc0e8b68  jal         func_3A2DA0
label_101ff4:
    if (ctx->pc == 0x101FF4u) {
        ctx->pc = 0x101FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101FF0u;
        // 0x101ff4: 0x86250006  lh          $a1, 0x6($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101FF8u;
        goto label_101ff8;
    }
    ctx->pc = 0x101FF0u;
    SET_GPR_U32(ctx, 31, 0x101FF8u);
    ctx->pc = 0x101FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101FF0u;
    // 0x101ff4: 0x86250006  lh          $a1, 0x6($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x101FF0u, 0x101FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101FF8u;
label_101ff8:
    // 0x101ff8: 0x86250004  lh          $a1, 0x4($s1)
    ctx->pc = 0x101ff8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_101ffc:
    // 0x101ffc: 0xc0e8b68  jal         func_3A2DA0
label_102000:
    if (ctx->pc == 0x102000u) {
        ctx->pc = 0x102000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101FFCu;
        // 0x102000: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102004u;
        goto label_102004;
    }
    ctx->pc = 0x101FFCu;
    SET_GPR_U32(ctx, 31, 0x102004u);
    ctx->pc = 0x102000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101FFCu;
    // 0x102000: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x101FFCu, 0x102004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102004u;
label_102004:
    // 0x102004: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x102004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_102008:
    // 0x102008: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x102008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10200c:
    // 0x10200c: 0x1000075a  b           . + 4 + (0x75A << 2)
label_102010:
    if (ctx->pc == 0x102010u) {
        ctx->pc = 0x102010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10200Cu;
        // 0x102010: 0x2406008f  addiu       $a2, $zero, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102014u;
        goto label_102014;
    }
    ctx->pc = 0x10200Cu;
    {
        const bool branch_taken_0x10200c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10200Cu;
        // 0x102010: 0x2406008f  addiu       $a2, $zero, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10200c) {
            ctx->pc = 0x103D78u;
            goto label_103d78;
        }
    }
    ctx->pc = 0x102014u;
label_102014:
    // 0x102014: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
label_102018:
    if (ctx->pc == 0x102018u) {
        ctx->pc = 0x102018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102014u;
        // 0x102018: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10201Cu;
        goto label_10201c;
    }
    ctx->pc = 0x102014u;
    {
        const bool branch_taken_0x102014 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x102018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102014u;
        // 0x102018: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102014) {
            ctx->pc = 0x102040u;
            goto label_102040;
        }
    }
    ctx->pc = 0x10201Cu;
label_10201c:
    // 0x10201c: 0xc0e8b48  jal         func_3A2D20
label_102020:
    if (ctx->pc == 0x102020u) {
        ctx->pc = 0x102020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10201Cu;
        // 0x102020: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102024u;
        goto label_102024;
    }
    ctx->pc = 0x10201Cu;
    SET_GPR_U32(ctx, 31, 0x102024u);
    ctx->pc = 0x102020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10201Cu;
    // 0x102020: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x10201Cu, 0x102024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102024u;
label_102024:
    // 0x102024: 0x86250006  lh          $a1, 0x6($s1)
    ctx->pc = 0x102024u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_102028:
    // 0x102028: 0xc0e8b68  jal         func_3A2DA0
label_10202c:
    if (ctx->pc == 0x10202Cu) {
        ctx->pc = 0x10202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102028u;
        // 0x10202c: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102030u;
        goto label_102030;
    }
    ctx->pc = 0x102028u;
    SET_GPR_U32(ctx, 31, 0x102030u);
    ctx->pc = 0x10202Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102028u;
    // 0x10202c: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x102028u, 0x102030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102030u;
label_102030:
    // 0x102030: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x102030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_102034:
    // 0x102034: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x102034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_102038:
    // 0x102038: 0x1000074f  b           . + 4 + (0x74F << 2)
label_10203c:
    if (ctx->pc == 0x10203Cu) {
        ctx->pc = 0x10203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102038u;
        // 0x10203c: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102040u;
        goto label_102040;
    }
    ctx->pc = 0x102038u;
    {
        const bool branch_taken_0x102038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102038u;
        // 0x10203c: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102038) {
            ctx->pc = 0x103D78u;
            goto label_103d78;
        }
    }
    ctx->pc = 0x102040u;
label_102040:
    // 0x102040: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
label_102044:
    if (ctx->pc == 0x102044u) {
        ctx->pc = 0x102044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102040u;
        // 0x102044: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102048u;
        goto label_102048;
    }
    ctx->pc = 0x102040u;
    {
        const bool branch_taken_0x102040 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x102044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102040u;
        // 0x102044: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102040) {
            ctx->pc = 0x10206Cu;
            goto label_10206c;
        }
    }
    ctx->pc = 0x102048u;
label_102048:
    // 0x102048: 0xc0e8b48  jal         func_3A2D20
label_10204c:
    if (ctx->pc == 0x10204Cu) {
        ctx->pc = 0x10204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102048u;
        // 0x10204c: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102050u;
        goto label_102050;
    }
    ctx->pc = 0x102048u;
    SET_GPR_U32(ctx, 31, 0x102050u);
    ctx->pc = 0x10204Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102048u;
    // 0x10204c: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x102048u, 0x102050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102050u;
label_102050:
    // 0x102050: 0x86250004  lh          $a1, 0x4($s1)
    ctx->pc = 0x102050u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_102054:
    // 0x102054: 0xc0e8b68  jal         func_3A2DA0
label_102058:
    if (ctx->pc == 0x102058u) {
        ctx->pc = 0x102058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102054u;
        // 0x102058: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10205Cu;
        goto label_10205c;
    }
    ctx->pc = 0x102054u;
    SET_GPR_U32(ctx, 31, 0x10205Cu);
    ctx->pc = 0x102058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102054u;
    // 0x102058: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x102054u, 0x10205Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10205Cu;
label_10205c:
    // 0x10205c: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x10205cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_102060:
    // 0x102060: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x102060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_102064:
    // 0x102064: 0x10000744  b           . + 4 + (0x744 << 2)
label_102068:
    if (ctx->pc == 0x102068u) {
        ctx->pc = 0x102068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102064u;
        // 0x102068: 0x24060093  addiu       $a2, $zero, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10206Cu;
        goto label_10206c;
    }
    ctx->pc = 0x102064u;
    {
        const bool branch_taken_0x102064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102064u;
        // 0x102068: 0x24060093  addiu       $a2, $zero, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102064) {
            ctx->pc = 0x103D78u;
            goto label_103d78;
        }
    }
    ctx->pc = 0x10206Cu;
label_10206c:
    // 0x10206c: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_102070:
    if (ctx->pc == 0x102070u) {
        ctx->pc = 0x102070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10206Cu;
        // 0x102070: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102074u;
        goto label_102074;
    }
    ctx->pc = 0x10206Cu;
    {
        const bool branch_taken_0x10206c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x102070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10206Cu;
        // 0x102070: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10206c) {
            ctx->pc = 0x10208Cu;
            goto label_10208c;
        }
    }
    ctx->pc = 0x102074u;
label_102074:
    // 0x102074: 0xc0e8b48  jal         func_3A2D20
label_102078:
    if (ctx->pc == 0x102078u) {
        ctx->pc = 0x102078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102074u;
        // 0x102078: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10207Cu;
        goto label_10207c;
    }
    ctx->pc = 0x102074u;
    SET_GPR_U32(ctx, 31, 0x10207Cu);
    ctx->pc = 0x102078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102074u;
    // 0x102078: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x102074u, 0x10207Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10207Cu;
label_10207c:
    // 0x10207c: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x10207cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_102080:
    // 0x102080: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x102080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_102084:
    // 0x102084: 0x1000073c  b           . + 4 + (0x73C << 2)
label_102088:
    if (ctx->pc == 0x102088u) {
        ctx->pc = 0x102088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102084u;
        // 0x102088: 0x24060094  addiu       $a2, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10208Cu;
        goto label_10208c;
    }
    ctx->pc = 0x102084u;
    {
        const bool branch_taken_0x102084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102084u;
        // 0x102088: 0x24060094  addiu       $a2, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102084) {
            ctx->pc = 0x103D78u;
            goto label_103d78;
        }
    }
    ctx->pc = 0x10208Cu;
label_10208c:
    // 0x10208c: 0x14820025  bne         $a0, $v0, . + 4 + (0x25 << 2)
label_102090:
    if (ctx->pc == 0x102090u) {
        ctx->pc = 0x102090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10208Cu;
        // 0x102090: 0x30a3ffff  andi        $v1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x102094u;
        goto label_102094;
    }
    ctx->pc = 0x10208Cu;
    {
        const bool branch_taken_0x10208c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x102090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10208Cu;
        // 0x102090: 0x30a3ffff  andi        $v1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10208c) {
            ctx->pc = 0x102124u;
            goto label_102124;
        }
    }
    ctx->pc = 0x102094u;
label_102094:
    // 0x102094: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x102094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_102098:
    // 0x102098: 0xc089998  jal         func_226660
label_10209c:
    if (ctx->pc == 0x10209Cu) {
        ctx->pc = 0x10209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102098u;
        // 0x10209c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1020A0u;
        goto label_1020a0;
    }
    ctx->pc = 0x102098u;
    SET_GPR_U32(ctx, 31, 0x1020A0u);
    ctx->pc = 0x10209Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102098u;
    // 0x10209c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x102098u, 0x1020A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1020A0u;
label_1020a0:
    // 0x1020a0: 0x50400754  beql        $v0, $zero, . + 4 + (0x754 << 2)
label_1020a4:
    if (ctx->pc == 0x1020A4u) {
        ctx->pc = 0x1020A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1020A0u;
        // 0x1020a4: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1020A8u;
        goto label_1020a8;
    }
    ctx->pc = 0x1020A0u;
    {
        const bool branch_taken_0x1020a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1020a0) {
            ctx->pc = 0x1020A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1020A0u;
            // 0x1020a4: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x1020A8u;
label_1020a8:
    // 0x1020a8: 0x8ee6000c  lw          $a2, 0xC($s7)
    ctx->pc = 0x1020a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_1020ac:
    // 0x1020ac: 0x10c00750  beqz        $a2, . + 4 + (0x750 << 2)
label_1020b0:
    if (ctx->pc == 0x1020B0u) {
        ctx->pc = 0x1020B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1020ACu;
        // 0x1020b0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1020B4u;
        goto label_1020b4;
    }
    ctx->pc = 0x1020ACu;
    {
        const bool branch_taken_0x1020ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1020B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1020ACu;
        // 0x1020b0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1020ac) {
            ctx->pc = 0x103DF0u;
            goto label_103df0;
        }
    }
    ctx->pc = 0x1020B4u;
label_1020b4:
    // 0x1020b4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1020b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1020b8:
    // 0x1020b8: 0x846400d8  lh          $a0, 0xD8($v1)
    ctx->pc = 0x1020b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 216)));
label_1020bc:
    // 0x1020bc: 0x8c6200dc  lw          $v0, 0xDC($v1)
    ctx->pc = 0x1020bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
label_1020c0:
    // 0x1020c0: 0x40f809  jalr        $v0
label_1020c4:
    if (ctx->pc == 0x1020C4u) {
        ctx->pc = 0x1020C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1020C0u;
        // 0x1020c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1020C8u;
        goto label_1020c8;
    }
    ctx->pc = 0x1020C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1020C8u);
        ctx->pc = 0x1020C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1020C0u;
        // 0x1020c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1020C0u, 0x1020C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1020C8u;
label_1020c8:
    // 0x1020c8: 0x10400749  beqz        $v0, . + 4 + (0x749 << 2)
label_1020cc:
    if (ctx->pc == 0x1020CCu) {
        ctx->pc = 0x1020CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1020C8u;
        // 0x1020cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1020D0u;
        goto label_1020d0;
    }
    ctx->pc = 0x1020C8u;
    {
        const bool branch_taken_0x1020c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1020CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1020C8u;
        // 0x1020cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1020c8) {
            ctx->pc = 0x103DF0u;
            goto label_103df0;
        }
    }
    ctx->pc = 0x1020D0u;
label_1020d0:
    // 0x1020d0: 0xc089990  jal         func_226640
label_1020d4:
    if (ctx->pc == 0x1020D4u) {
        ctx->pc = 0x1020D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1020D0u;
        // 0x1020d4: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1020D8u;
        goto label_1020d8;
    }
    ctx->pc = 0x1020D0u;
    SET_GPR_U32(ctx, 31, 0x1020D8u);
    ctx->pc = 0x1020D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1020D0u;
    // 0x1020d4: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x1020D0u, 0x1020D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1020D8u;
label_1020d8:
    // 0x1020d8: 0x8ee6000c  lw          $a2, 0xC($s7)
    ctx->pc = 0x1020d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_1020dc:
    // 0x1020dc: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x1020dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_1020e0:
    // 0x1020e0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1020e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1020e4:
    // 0x1020e4: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x1020e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_1020e8:
    // 0x1020e8: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x1020e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_1020ec:
    // 0x1020ec: 0x60f809  jalr        $v1
label_1020f0:
    if (ctx->pc == 0x1020F0u) {
        ctx->pc = 0x1020F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1020ECu;
        // 0x1020f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1020F4u;
        goto label_1020f4;
    }
    ctx->pc = 0x1020ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1020F4u);
        ctx->pc = 0x1020F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1020ECu;
        // 0x1020f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1020ECu, 0x1020F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1020F4u;
label_1020f4:
    // 0x1020f4: 0x8ee6000c  lw          $a2, 0xC($s7)
    ctx->pc = 0x1020f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_1020f8:
    // 0x1020f8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1020f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1020fc:
    // 0x1020fc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1020fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_102100:
    // 0x102100: 0x844400e8  lh          $a0, 0xE8($v0)
    ctx->pc = 0x102100u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 232)));
label_102104:
    // 0x102104: 0x8c4300ec  lw          $v1, 0xEC($v0)
    ctx->pc = 0x102104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
label_102108:
    // 0x102108: 0x60f809  jalr        $v1
label_10210c:
    if (ctx->pc == 0x10210Cu) {
        ctx->pc = 0x10210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102108u;
        // 0x10210c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102110u;
        goto label_102110;
    }
    ctx->pc = 0x102108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x102110u);
        ctx->pc = 0x10210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102108u;
        // 0x10210c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102108u, 0x102110u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102110u;
label_102110:
    // 0x102110: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x102110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_102114:
    // 0x102114: 0xc0899a2  jal         func_226688
label_102118:
    if (ctx->pc == 0x102118u) {
        ctx->pc = 0x102118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102114u;
        // 0x102118: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10211Cu;
        goto label_10211c;
    }
    ctx->pc = 0x102114u;
    SET_GPR_U32(ctx, 31, 0x10211Cu);
    ctx->pc = 0x102118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102114u;
    // 0x102118: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226688u, 0x102114u, 0x10211Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10211Cu;
label_10211c:
    // 0x10211c: 0x10000735  b           . + 4 + (0x735 << 2)
label_102120:
    if (ctx->pc == 0x102120u) {
        ctx->pc = 0x102120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10211Cu;
        // 0x102120: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102124u;
        goto label_102124;
    }
    ctx->pc = 0x10211Cu;
    {
        const bool branch_taken_0x10211c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10211Cu;
        // 0x102120: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10211c) {
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x102124u;
label_102124:
    // 0x102124: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x102124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_102128:
    // 0x102128: 0x14620088  bne         $v1, $v0, . + 4 + (0x88 << 2)
label_10212c:
    if (ctx->pc == 0x10212Cu) {
        ctx->pc = 0x10212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102128u;
        // 0x10212c: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102130u;
        goto label_102130;
    }
    ctx->pc = 0x102128u;
    {
        const bool branch_taken_0x102128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102128u;
        // 0x10212c: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102128) {
            ctx->pc = 0x10234Cu;
            goto label_10234c;
        }
    }
    ctx->pc = 0x102130u;
label_102130:
    // 0x102130: 0xc089f86  jal         func_227E18
label_102134:
    if (ctx->pc == 0x102134u) {
        ctx->pc = 0x102134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102130u;
        // 0x102134: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102138u;
        goto label_102138;
    }
    ctx->pc = 0x102130u;
    SET_GPR_U32(ctx, 31, 0x102138u);
    ctx->pc = 0x102134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102130u;
    // 0x102134: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x102130u, 0x102138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102138u;
label_102138:
    // 0x102138: 0x5440072e  bnel        $v0, $zero, . + 4 + (0x72E << 2)
label_10213c:
    if (ctx->pc == 0x10213Cu) {
        ctx->pc = 0x10213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102138u;
        // 0x10213c: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102140u;
        goto label_102140;
    }
    ctx->pc = 0x102138u;
    {
        const bool branch_taken_0x102138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102138) {
            ctx->pc = 0x10213Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102138u;
            // 0x10213c: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x102140u;
label_102140:
    // 0x102140: 0xc088e78  jal         func_2239E0
label_102144:
    if (ctx->pc == 0x102144u) {
        ctx->pc = 0x102144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102140u;
        // 0x102144: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102148u;
        goto label_102148;
    }
    ctx->pc = 0x102140u;
    SET_GPR_U32(ctx, 31, 0x102148u);
    ctx->pc = 0x102144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102140u;
    // 0x102144: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239E0u, 0x102140u, 0x102148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102148u;
label_102148:
    // 0x102148: 0x5440072a  bnel        $v0, $zero, . + 4 + (0x72A << 2)
label_10214c:
    if (ctx->pc == 0x10214Cu) {
        ctx->pc = 0x10214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102148u;
        // 0x10214c: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102150u;
        goto label_102150;
    }
    ctx->pc = 0x102148u;
    {
        const bool branch_taken_0x102148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102148) {
            ctx->pc = 0x10214Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102148u;
            // 0x10214c: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x102150u;
label_102150:
    // 0x102150: 0xc088e80  jal         func_223A00
label_102154:
    if (ctx->pc == 0x102154u) {
        ctx->pc = 0x102154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102150u;
        // 0x102154: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102158u;
        goto label_102158;
    }
    ctx->pc = 0x102150u;
    SET_GPR_U32(ctx, 31, 0x102158u);
    ctx->pc = 0x102154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102150u;
    // 0x102154: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A00u, 0x102150u, 0x102158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102158u;
label_102158:
    // 0x102158: 0x54400726  bnel        $v0, $zero, . + 4 + (0x726 << 2)
label_10215c:
    if (ctx->pc == 0x10215Cu) {
        ctx->pc = 0x10215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102158u;
        // 0x10215c: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102160u;
        goto label_102160;
    }
    ctx->pc = 0x102158u;
    {
        const bool branch_taken_0x102158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102158) {
            ctx->pc = 0x10215Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102158u;
            // 0x10215c: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x102160u;
label_102160:
    // 0x102160: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x102160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_102164:
    // 0x102164: 0xc089998  jal         func_226660
label_102168:
    if (ctx->pc == 0x102168u) {
        ctx->pc = 0x102168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102164u;
        // 0x102168: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10216Cu;
        goto label_10216c;
    }
    ctx->pc = 0x102164u;
    SET_GPR_U32(ctx, 31, 0x10216Cu);
    ctx->pc = 0x102168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102164u;
    // 0x102168: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x102164u, 0x10216Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10216Cu;
label_10216c:
    // 0x10216c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_102170:
    if (ctx->pc == 0x102170u) {
        ctx->pc = 0x102170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10216Cu;
        // 0x102170: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102174u;
        goto label_102174;
    }
    ctx->pc = 0x10216Cu;
    {
        const bool branch_taken_0x10216c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10216Cu;
        // 0x102170: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10216c) {
            ctx->pc = 0x1021F0u;
            goto label_1021f0;
        }
    }
    ctx->pc = 0x102174u;
label_102174:
    // 0x102174: 0x8ee6000c  lw          $a2, 0xC($s7)
    ctx->pc = 0x102174u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_102178:
    // 0x102178: 0x10c0001d  beqz        $a2, . + 4 + (0x1D << 2)
label_10217c:
    if (ctx->pc == 0x10217Cu) {
        ctx->pc = 0x10217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102178u;
        // 0x10217c: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102180u;
        goto label_102180;
    }
    ctx->pc = 0x102178u;
    {
        const bool branch_taken_0x102178 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102178u;
        // 0x10217c: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102178) {
            ctx->pc = 0x1021F0u;
            goto label_1021f0;
        }
    }
    ctx->pc = 0x102180u;
label_102180:
    // 0x102180: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x102180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_102184:
    // 0x102184: 0x846400d8  lh          $a0, 0xD8($v1)
    ctx->pc = 0x102184u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 216)));
label_102188:
    // 0x102188: 0x8c6200dc  lw          $v0, 0xDC($v1)
    ctx->pc = 0x102188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
label_10218c:
    // 0x10218c: 0x40f809  jalr        $v0
label_102190:
    if (ctx->pc == 0x102190u) {
        ctx->pc = 0x102190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10218Cu;
        // 0x102190: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102194u;
        goto label_102194;
    }
    ctx->pc = 0x10218Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x102194u);
        ctx->pc = 0x102190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10218Cu;
        // 0x102190: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10218Cu, 0x102194u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102194u;
label_102194:
    // 0x102194: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_102198:
    if (ctx->pc == 0x102198u) {
        ctx->pc = 0x102198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102194u;
        // 0x102198: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10219Cu;
        goto label_10219c;
    }
    ctx->pc = 0x102194u;
    {
        const bool branch_taken_0x102194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102194u;
        // 0x102198: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102194) {
            ctx->pc = 0x1021F0u;
            goto label_1021f0;
        }
    }
    ctx->pc = 0x10219Cu;
label_10219c:
    // 0x10219c: 0xc089990  jal         func_226640
label_1021a0:
    if (ctx->pc == 0x1021A0u) {
        ctx->pc = 0x1021A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10219Cu;
        // 0x1021a0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1021A4u;
        goto label_1021a4;
    }
    ctx->pc = 0x10219Cu;
    SET_GPR_U32(ctx, 31, 0x1021A4u);
    ctx->pc = 0x1021A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10219Cu;
    // 0x1021a0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x10219Cu, 0x1021A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1021A4u;
label_1021a4:
    // 0x1021a4: 0x8ee6000c  lw          $a2, 0xC($s7)
    ctx->pc = 0x1021a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_1021a8:
    // 0x1021a8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1021a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1021ac:
    // 0x1021ac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1021acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1021b0:
    // 0x1021b0: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x1021b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_1021b4:
    // 0x1021b4: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x1021b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_1021b8:
    // 0x1021b8: 0x60f809  jalr        $v1
label_1021bc:
    if (ctx->pc == 0x1021BCu) {
        ctx->pc = 0x1021BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1021B8u;
        // 0x1021bc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1021C0u;
        goto label_1021c0;
    }
    ctx->pc = 0x1021B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1021C0u);
        ctx->pc = 0x1021BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1021B8u;
        // 0x1021bc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1021B8u, 0x1021C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1021C0u;
label_1021c0:
    // 0x1021c0: 0x8ee6000c  lw          $a2, 0xC($s7)
    ctx->pc = 0x1021c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_1021c4:
    // 0x1021c4: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x1021c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_1021c8:
    // 0x1021c8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1021c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1021cc:
    // 0x1021cc: 0x844400e8  lh          $a0, 0xE8($v0)
    ctx->pc = 0x1021ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 232)));
label_1021d0:
    // 0x1021d0: 0x8c4300ec  lw          $v1, 0xEC($v0)
    ctx->pc = 0x1021d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
label_1021d4:
    // 0x1021d4: 0x60f809  jalr        $v1
label_1021d8:
    if (ctx->pc == 0x1021D8u) {
        ctx->pc = 0x1021D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1021D4u;
        // 0x1021d8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1021DCu;
        goto label_1021dc;
    }
    ctx->pc = 0x1021D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1021DCu);
        ctx->pc = 0x1021D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1021D4u;
        // 0x1021d8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1021D4u, 0x1021DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1021DCu;
label_1021dc:
    // 0x1021dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1021dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1021e0:
    // 0x1021e0: 0xc0899a2  jal         func_226688
label_1021e4:
    if (ctx->pc == 0x1021E4u) {
        ctx->pc = 0x1021E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1021E0u;
        // 0x1021e4: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1021E8u;
        goto label_1021e8;
    }
    ctx->pc = 0x1021E0u;
    SET_GPR_U32(ctx, 31, 0x1021E8u);
    ctx->pc = 0x1021E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1021E0u;
    // 0x1021e4: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226688u, 0x1021E0u, 0x1021E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1021E8u;
label_1021e8:
    // 0x1021e8: 0x10000702  b           . + 4 + (0x702 << 2)
label_1021ec:
    if (ctx->pc == 0x1021ECu) {
        ctx->pc = 0x1021ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1021E8u;
        // 0x1021ec: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1021F0u;
        goto label_1021f0;
    }
    ctx->pc = 0x1021E8u;
    {
        const bool branch_taken_0x1021e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1021ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1021E8u;
        // 0x1021ec: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1021e8) {
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x1021F0u;
label_1021f0:
    // 0x1021f0: 0xc089998  jal         func_226660
label_1021f4:
    if (ctx->pc == 0x1021F4u) {
        ctx->pc = 0x1021F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1021F0u;
        // 0x1021f4: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1021F8u;
        goto label_1021f8;
    }
    ctx->pc = 0x1021F0u;
    SET_GPR_U32(ctx, 31, 0x1021F8u);
    ctx->pc = 0x1021F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1021F0u;
    // 0x1021f4: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x1021F0u, 0x1021F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1021F8u;
label_1021f8:
    // 0x1021f8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1021fc:
    if (ctx->pc == 0x1021FCu) {
        ctx->pc = 0x1021FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1021F8u;
        // 0x1021fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102200u;
        goto label_102200;
    }
    ctx->pc = 0x1021F8u;
    {
        const bool branch_taken_0x1021f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1021FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1021F8u;
        // 0x1021fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1021f8) {
            ctx->pc = 0x10227Cu;
            goto label_10227c;
        }
    }
    ctx->pc = 0x102200u;
label_102200:
    // 0x102200: 0x8ee6000c  lw          $a2, 0xC($s7)
    ctx->pc = 0x102200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_102204:
    // 0x102204: 0x10c0001d  beqz        $a2, . + 4 + (0x1D << 2)
label_102208:
    if (ctx->pc == 0x102208u) {
        ctx->pc = 0x102208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102204u;
        // 0x102208: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10220Cu;
        goto label_10220c;
    }
    ctx->pc = 0x102204u;
    {
        const bool branch_taken_0x102204 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x102208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102204u;
        // 0x102208: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102204) {
            ctx->pc = 0x10227Cu;
            goto label_10227c;
        }
    }
    ctx->pc = 0x10220Cu;
label_10220c:
    // 0x10220c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10220cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_102210:
    // 0x102210: 0x846400d8  lh          $a0, 0xD8($v1)
    ctx->pc = 0x102210u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 216)));
label_102214:
    // 0x102214: 0x8c6200dc  lw          $v0, 0xDC($v1)
    ctx->pc = 0x102214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
label_102218:
    // 0x102218: 0x40f809  jalr        $v0
label_10221c:
    if (ctx->pc == 0x10221Cu) {
        ctx->pc = 0x10221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102218u;
        // 0x10221c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102220u;
        goto label_102220;
    }
    ctx->pc = 0x102218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x102220u);
        ctx->pc = 0x10221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102218u;
        // 0x10221c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102218u, 0x102220u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102220u;
label_102220:
    // 0x102220: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_102224:
    if (ctx->pc == 0x102224u) {
        ctx->pc = 0x102224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102220u;
        // 0x102224: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102228u;
        goto label_102228;
    }
    ctx->pc = 0x102220u;
    {
        const bool branch_taken_0x102220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102220u;
        // 0x102224: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102220) {
            ctx->pc = 0x10227Cu;
            goto label_10227c;
        }
    }
    ctx->pc = 0x102228u;
label_102228:
    // 0x102228: 0xc089990  jal         func_226640
label_10222c:
    if (ctx->pc == 0x10222Cu) {
        ctx->pc = 0x10222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102228u;
        // 0x10222c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102230u;
        goto label_102230;
    }
    ctx->pc = 0x102228u;
    SET_GPR_U32(ctx, 31, 0x102230u);
    ctx->pc = 0x10222Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102228u;
    // 0x10222c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x102228u, 0x102230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102230u;
label_102230:
    // 0x102230: 0x8ee6000c  lw          $a2, 0xC($s7)
    ctx->pc = 0x102230u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_102234:
    // 0x102234: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x102234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_102238:
    // 0x102238: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x102238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_10223c:
    // 0x10223c: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x10223cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_102240:
    // 0x102240: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x102240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_102244:
    // 0x102244: 0x60f809  jalr        $v1
label_102248:
    if (ctx->pc == 0x102248u) {
        ctx->pc = 0x102248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102244u;
        // 0x102248: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10224Cu;
        goto label_10224c;
    }
    ctx->pc = 0x102244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10224Cu);
        ctx->pc = 0x102248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102244u;
        // 0x102248: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102244u, 0x10224Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10224Cu;
label_10224c:
    // 0x10224c: 0x8ee6000c  lw          $a2, 0xC($s7)
    ctx->pc = 0x10224cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_102250:
    // 0x102250: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x102250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_102254:
    // 0x102254: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x102254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_102258:
    // 0x102258: 0x844400e8  lh          $a0, 0xE8($v0)
    ctx->pc = 0x102258u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 232)));
label_10225c:
    // 0x10225c: 0x8c4300ec  lw          $v1, 0xEC($v0)
    ctx->pc = 0x10225cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
label_102260:
    // 0x102260: 0x60f809  jalr        $v1
label_102264:
    if (ctx->pc == 0x102264u) {
        ctx->pc = 0x102264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102260u;
        // 0x102264: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102268u;
        goto label_102268;
    }
    ctx->pc = 0x102260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x102268u);
        ctx->pc = 0x102264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102260u;
        // 0x102264: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102260u, 0x102268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102268u;
label_102268:
    // 0x102268: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x102268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10226c:
    // 0x10226c: 0xc0899a2  jal         func_226688
label_102270:
    if (ctx->pc == 0x102270u) {
        ctx->pc = 0x102270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10226Cu;
        // 0x102270: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102274u;
        goto label_102274;
    }
    ctx->pc = 0x10226Cu;
    SET_GPR_U32(ctx, 31, 0x102274u);
    ctx->pc = 0x102270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10226Cu;
    // 0x102270: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226688u, 0x10226Cu, 0x102274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102274u;
label_102274:
    // 0x102274: 0x100006df  b           . + 4 + (0x6DF << 2)
label_102278:
    if (ctx->pc == 0x102278u) {
        ctx->pc = 0x102278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102274u;
        // 0x102278: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10227Cu;
        goto label_10227c;
    }
    ctx->pc = 0x102274u;
    {
        const bool branch_taken_0x102274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102274u;
        // 0x102278: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102274) {
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x10227Cu;
label_10227c:
    // 0x10227c: 0xc089998  jal         func_226660
label_102280:
    if (ctx->pc == 0x102280u) {
        ctx->pc = 0x102280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10227Cu;
        // 0x102280: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102284u;
        goto label_102284;
    }
    ctx->pc = 0x10227Cu;
    SET_GPR_U32(ctx, 31, 0x102284u);
    ctx->pc = 0x102280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10227Cu;
    // 0x102280: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x10227Cu, 0x102284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102284u;
label_102284:
    // 0x102284: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_102288:
    if (ctx->pc == 0x102288u) {
        ctx->pc = 0x102288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102284u;
        // 0x102288: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10228Cu;
        goto label_10228c;
    }
    ctx->pc = 0x102284u;
    {
        const bool branch_taken_0x102284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102284u;
        // 0x102288: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102284) {
            ctx->pc = 0x1022E0u;
            goto label_1022e0;
        }
    }
    ctx->pc = 0x10228Cu;
label_10228c:
    // 0x10228c: 0xc089990  jal         func_226640
label_102290:
    if (ctx->pc == 0x102290u) {
        ctx->pc = 0x102290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10228Cu;
        // 0x102290: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102294u;
        goto label_102294;
    }
    ctx->pc = 0x10228Cu;
    SET_GPR_U32(ctx, 31, 0x102294u);
    ctx->pc = 0x102290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10228Cu;
    // 0x102290: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x10228Cu, 0x102294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102294u;
label_102294:
    // 0x102294: 0x8ee6000c  lw          $a2, 0xC($s7)
    ctx->pc = 0x102294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_102298:
    // 0x102298: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x102298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_10229c:
    // 0x10229c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10229cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1022a0:
    // 0x1022a0: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x1022a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_1022a4:
    // 0x1022a4: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x1022a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_1022a8:
    // 0x1022a8: 0x60f809  jalr        $v1
label_1022ac:
    if (ctx->pc == 0x1022ACu) {
        ctx->pc = 0x1022ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022A8u;
        // 0x1022ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1022B0u;
        goto label_1022b0;
    }
    ctx->pc = 0x1022A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1022B0u);
        ctx->pc = 0x1022ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022A8u;
        // 0x1022ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1022A8u, 0x1022B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1022B0u;
label_1022b0:
    // 0x1022b0: 0x8ee6000c  lw          $a2, 0xC($s7)
    ctx->pc = 0x1022b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_1022b4:
    // 0x1022b4: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x1022b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_1022b8:
    // 0x1022b8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1022b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1022bc:
    // 0x1022bc: 0x844400e8  lh          $a0, 0xE8($v0)
    ctx->pc = 0x1022bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 232)));
label_1022c0:
    // 0x1022c0: 0x8c4300ec  lw          $v1, 0xEC($v0)
    ctx->pc = 0x1022c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
label_1022c4:
    // 0x1022c4: 0x60f809  jalr        $v1
label_1022c8:
    if (ctx->pc == 0x1022C8u) {
        ctx->pc = 0x1022C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022C4u;
        // 0x1022c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1022CCu;
        goto label_1022cc;
    }
    ctx->pc = 0x1022C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1022CCu);
        ctx->pc = 0x1022C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022C4u;
        // 0x1022c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1022C4u, 0x1022CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1022CCu;
label_1022cc:
    // 0x1022cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1022ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1022d0:
    // 0x1022d0: 0xc0899a2  jal         func_226688
label_1022d4:
    if (ctx->pc == 0x1022D4u) {
        ctx->pc = 0x1022D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022D0u;
        // 0x1022d4: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1022D8u;
        goto label_1022d8;
    }
    ctx->pc = 0x1022D0u;
    SET_GPR_U32(ctx, 31, 0x1022D8u);
    ctx->pc = 0x1022D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1022D0u;
    // 0x1022d4: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226688u, 0x1022D0u, 0x1022D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1022D8u;
label_1022d8:
    // 0x1022d8: 0x100006c6  b           . + 4 + (0x6C6 << 2)
label_1022dc:
    if (ctx->pc == 0x1022DCu) {
        ctx->pc = 0x1022DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022D8u;
        // 0x1022dc: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1022E0u;
        goto label_1022e0;
    }
    ctx->pc = 0x1022D8u;
    {
        const bool branch_taken_0x1022d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1022DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022D8u;
        // 0x1022dc: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022d8) {
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x1022E0u;
label_1022e0:
    // 0x1022e0: 0xc089998  jal         func_226660
label_1022e4:
    if (ctx->pc == 0x1022E4u) {
        ctx->pc = 0x1022E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022E0u;
        // 0x1022e4: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1022E8u;
        goto label_1022e8;
    }
    ctx->pc = 0x1022E0u;
    SET_GPR_U32(ctx, 31, 0x1022E8u);
    ctx->pc = 0x1022E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1022E0u;
    // 0x1022e4: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x1022E0u, 0x1022E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1022E8u;
label_1022e8:
    // 0x1022e8: 0x504006c2  beql        $v0, $zero, . + 4 + (0x6C2 << 2)
label_1022ec:
    if (ctx->pc == 0x1022ECu) {
        ctx->pc = 0x1022ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022E8u;
        // 0x1022ec: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1022F0u;
        goto label_1022f0;
    }
    ctx->pc = 0x1022E8u;
    {
        const bool branch_taken_0x1022e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1022e8) {
            ctx->pc = 0x1022ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1022E8u;
            // 0x1022ec: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x1022F0u;
label_1022f0:
    // 0x1022f0: 0x8ee6000c  lw          $a2, 0xC($s7)
    ctx->pc = 0x1022f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_1022f4:
    // 0x1022f4: 0x10c006be  beqz        $a2, . + 4 + (0x6BE << 2)
label_1022f8:
    if (ctx->pc == 0x1022F8u) {
        ctx->pc = 0x1022F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022F4u;
        // 0x1022f8: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1022FCu;
        goto label_1022fc;
    }
    ctx->pc = 0x1022F4u;
    {
        const bool branch_taken_0x1022f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1022F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022F4u;
        // 0x1022f8: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022f4) {
            ctx->pc = 0x103DF0u;
            goto label_103df0;
        }
    }
    ctx->pc = 0x1022FCu;
label_1022fc:
    // 0x1022fc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1022fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_102300:
    // 0x102300: 0x846400d8  lh          $a0, 0xD8($v1)
    ctx->pc = 0x102300u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 216)));
label_102304:
    // 0x102304: 0x8c6200dc  lw          $v0, 0xDC($v1)
    ctx->pc = 0x102304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
label_102308:
    // 0x102308: 0x40f809  jalr        $v0
label_10230c:
    if (ctx->pc == 0x10230Cu) {
        ctx->pc = 0x10230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102308u;
        // 0x10230c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102310u;
        goto label_102310;
    }
    ctx->pc = 0x102308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x102310u);
        ctx->pc = 0x10230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102308u;
        // 0x10230c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102308u, 0x102310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102310u;
label_102310:
    // 0x102310: 0x504006b8  beql        $v0, $zero, . + 4 + (0x6B8 << 2)
label_102314:
    if (ctx->pc == 0x102314u) {
        ctx->pc = 0x102314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102310u;
        // 0x102314: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102318u;
        goto label_102318;
    }
    ctx->pc = 0x102310u;
    {
        const bool branch_taken_0x102310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102310) {
            ctx->pc = 0x102314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102310u;
            // 0x102314: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x102318u;
label_102318:
    // 0x102318: 0xc05d484  jal         func_175210
label_10231c:
    if (ctx->pc == 0x10231Cu) {
        ctx->pc = 0x10231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102318u;
        // 0x10231c: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102320u;
        goto label_102320;
    }
    ctx->pc = 0x102318u;
    SET_GPR_U32(ctx, 31, 0x102320u);
    ctx->pc = 0x10231Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102318u;
    // 0x10231c: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x102318u, 0x102320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102320u;
label_102320:
    // 0x102320: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x102320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_102324:
    // 0x102324: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x102324u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_102328:
    // 0x102328: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x102328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_10232c:
    // 0x10232c: 0xa0f809  jalr        $a1
label_102330:
    if (ctx->pc == 0x102330u) {
        ctx->pc = 0x102330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10232Cu;
        // 0x102330: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102334u;
        goto label_102334;
    }
    ctx->pc = 0x10232Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x102334u);
        ctx->pc = 0x102330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10232Cu;
        // 0x102330: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10232Cu, 0x102334u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102334u;
label_102334:
    // 0x102334: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x102334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_102338:
    // 0x102338: 0xc089990  jal         func_226640
label_10233c:
    if (ctx->pc == 0x10233Cu) {
        ctx->pc = 0x10233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102338u;
        // 0x10233c: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102340u;
        goto label_102340;
    }
    ctx->pc = 0x102338u;
    SET_GPR_U32(ctx, 31, 0x102340u);
    ctx->pc = 0x10233Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102338u;
    // 0x10233c: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x102338u, 0x102340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102340u;
label_102340:
    // 0x102340: 0x8ee6000c  lw          $a2, 0xC($s7)
    ctx->pc = 0x102340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_102344:
    // 0x102344: 0x1000001b  b           . + 4 + (0x1B << 2)
label_102348:
    if (ctx->pc == 0x102348u) {
        ctx->pc = 0x102348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102344u;
        // 0x102348: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10234Cu;
        goto label_10234c;
    }
    ctx->pc = 0x102344u;
    {
        const bool branch_taken_0x102344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102344u;
        // 0x102348: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102344) {
            ctx->pc = 0x1023B4u;
            goto label_1023b4;
        }
    }
    ctx->pc = 0x10234Cu;
label_10234c:
    // 0x10234c: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
label_102350:
    if (ctx->pc == 0x102350u) {
        ctx->pc = 0x102350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10234Cu;
        // 0x102350: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102354u;
        goto label_102354;
    }
    ctx->pc = 0x10234Cu;
    {
        const bool branch_taken_0x10234c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x102350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10234Cu;
        // 0x102350: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10234c) {
            ctx->pc = 0x1023D0u;
            goto label_1023d0;
        }
    }
    ctx->pc = 0x102354u;
label_102354:
    // 0x102354: 0x8ee6000c  lw          $a2, 0xC($s7)
    ctx->pc = 0x102354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_102358:
    // 0x102358: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x102358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_10235c:
    // 0x10235c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x10235cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_102360:
    // 0x102360: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x102360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_102364:
    // 0x102364: 0x846400d8  lh          $a0, 0xD8($v1)
    ctx->pc = 0x102364u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 216)));
label_102368:
    // 0x102368: 0x8c6200dc  lw          $v0, 0xDC($v1)
    ctx->pc = 0x102368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
label_10236c:
    // 0x10236c: 0x40f809  jalr        $v0
label_102370:
    if (ctx->pc == 0x102370u) {
        ctx->pc = 0x102370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10236Cu;
        // 0x102370: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102374u;
        goto label_102374;
    }
    ctx->pc = 0x10236Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x102374u);
        ctx->pc = 0x102370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10236Cu;
        // 0x102370: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10236Cu, 0x102374u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102374u;
label_102374:
    // 0x102374: 0x8ee6000c  lw          $a2, 0xC($s7)
    ctx->pc = 0x102374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_102378:
    // 0x102378: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x102378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10237c:
    // 0x10237c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10237cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_102380:
    // 0x102380: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x102380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_102384:
    // 0x102384: 0x844400e8  lh          $a0, 0xE8($v0)
    ctx->pc = 0x102384u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 232)));
label_102388:
    // 0x102388: 0x8c4300ec  lw          $v1, 0xEC($v0)
    ctx->pc = 0x102388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
label_10238c:
    // 0x10238c: 0x60f809  jalr        $v1
label_102390:
    if (ctx->pc == 0x102390u) {
        ctx->pc = 0x102390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10238Cu;
        // 0x102390: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102394u;
        goto label_102394;
    }
    ctx->pc = 0x10238Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x102394u);
        ctx->pc = 0x102390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10238Cu;
        // 0x102390: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10238Cu, 0x102394u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102394u;
label_102394:
    // 0x102394: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x102394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_102398:
    // 0x102398: 0xc0899a2  jal         func_226688
label_10239c:
    if (ctx->pc == 0x10239Cu) {
        ctx->pc = 0x10239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102398u;
        // 0x10239c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1023A0u;
        goto label_1023a0;
    }
    ctx->pc = 0x102398u;
    SET_GPR_U32(ctx, 31, 0x1023A0u);
    ctx->pc = 0x10239Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102398u;
    // 0x10239c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226688u, 0x102398u, 0x1023A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1023A0u;
label_1023a0:
    // 0x1023a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1023a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1023a4:
    // 0x1023a4: 0xc089990  jal         func_226640
label_1023a8:
    if (ctx->pc == 0x1023A8u) {
        ctx->pc = 0x1023A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1023A4u;
        // 0x1023a8: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1023ACu;
        goto label_1023ac;
    }
    ctx->pc = 0x1023A4u;
    SET_GPR_U32(ctx, 31, 0x1023ACu);
    ctx->pc = 0x1023A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1023A4u;
    // 0x1023a8: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x1023A4u, 0x1023ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1023ACu;
label_1023ac:
    // 0x1023ac: 0x8ee6000c  lw          $a2, 0xC($s7)
    ctx->pc = 0x1023acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_1023b0:
    // 0x1023b0: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x1023b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_1023b4:
    // 0x1023b4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1023b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1023b8:
    // 0x1023b8: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x1023b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_1023bc:
    // 0x1023bc: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x1023bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_1023c0:
    // 0x1023c0: 0x60f809  jalr        $v1
label_1023c4:
    if (ctx->pc == 0x1023C4u) {
        ctx->pc = 0x1023C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1023C0u;
        // 0x1023c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1023C8u;
        goto label_1023c8;
    }
    ctx->pc = 0x1023C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1023C8u);
        ctx->pc = 0x1023C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1023C0u;
        // 0x1023c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1023C0u, 0x1023C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1023C8u;
label_1023c8:
    // 0x1023c8: 0x1000068a  b           . + 4 + (0x68A << 2)
label_1023cc:
    if (ctx->pc == 0x1023CCu) {
        ctx->pc = 0x1023CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1023C8u;
        // 0x1023cc: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1023D0u;
        goto label_1023d0;
    }
    ctx->pc = 0x1023C8u;
    {
        const bool branch_taken_0x1023c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1023CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1023C8u;
        // 0x1023cc: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1023c8) {
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x1023D0u;
label_1023d0:
    // 0x1023d0: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_1023d4:
    if (ctx->pc == 0x1023D4u) {
        ctx->pc = 0x1023D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1023D0u;
        // 0x1023d4: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1023D8u;
        goto label_1023d8;
    }
    ctx->pc = 0x1023D0u;
    {
        const bool branch_taken_0x1023d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1023D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1023D0u;
        // 0x1023d4: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1023d0) {
            ctx->pc = 0x102408u;
            goto label_102408;
        }
    }
    ctx->pc = 0x1023D8u;
label_1023d8:
    // 0x1023d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1023d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1023dc:
    // 0x1023dc: 0xc089998  jal         func_226660
label_1023e0:
    if (ctx->pc == 0x1023E0u) {
        ctx->pc = 0x1023E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1023DCu;
        // 0x1023e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1023E4u;
        goto label_1023e4;
    }
    ctx->pc = 0x1023DCu;
    SET_GPR_U32(ctx, 31, 0x1023E4u);
    ctx->pc = 0x1023E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1023DCu;
    // 0x1023e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x1023DCu, 0x1023E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1023E4u;
label_1023e4:
    // 0x1023e4: 0x10400682  beqz        $v0, . + 4 + (0x682 << 2)
label_1023e8:
    if (ctx->pc == 0x1023E8u) {
        ctx->pc = 0x1023E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1023E4u;
        // 0x1023e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1023ECu;
        goto label_1023ec;
    }
    ctx->pc = 0x1023E4u;
    {
        const bool branch_taken_0x1023e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1023E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1023E4u;
        // 0x1023e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1023e4) {
            ctx->pc = 0x103DF0u;
            goto label_103df0;
        }
    }
    ctx->pc = 0x1023ECu;
label_1023ec:
    // 0x1023ec: 0xc0899a2  jal         func_226688
label_1023f0:
    if (ctx->pc == 0x1023F0u) {
        ctx->pc = 0x1023F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1023ECu;
        // 0x1023f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1023F4u;
        goto label_1023f4;
    }
    ctx->pc = 0x1023ECu;
    SET_GPR_U32(ctx, 31, 0x1023F4u);
    ctx->pc = 0x1023F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1023ECu;
    // 0x1023f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226688u, 0x1023ECu, 0x1023F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1023F4u;
label_1023f4:
    // 0x1023f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1023f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1023f8:
    // 0x1023f8: 0xc089990  jal         func_226640
label_1023fc:
    if (ctx->pc == 0x1023FCu) {
        ctx->pc = 0x1023FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1023F8u;
        // 0x1023fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102400u;
        goto label_102400;
    }
    ctx->pc = 0x1023F8u;
    SET_GPR_U32(ctx, 31, 0x102400u);
    ctx->pc = 0x1023FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1023F8u;
    // 0x1023fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x1023F8u, 0x102400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102400u;
label_102400:
    // 0x102400: 0x1000067c  b           . + 4 + (0x67C << 2)
label_102404:
    if (ctx->pc == 0x102404u) {
        ctx->pc = 0x102404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102400u;
        // 0x102404: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102408u;
        goto label_102408;
    }
    ctx->pc = 0x102400u;
    {
        const bool branch_taken_0x102400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102400u;
        // 0x102404: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102400) {
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x102408u;
label_102408:
    // 0x102408: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_10240c:
    if (ctx->pc == 0x10240Cu) {
        ctx->pc = 0x10240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102408u;
        // 0x10240c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102410u;
        goto label_102410;
    }
    ctx->pc = 0x102408u;
    {
        const bool branch_taken_0x102408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102408u;
        // 0x10240c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102408) {
            ctx->pc = 0x10245Cu;
            goto label_10245c;
        }
    }
    ctx->pc = 0x102410u;
label_102410:
    // 0x102410: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x102410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_102414:
    // 0x102414: 0xc089998  jal         func_226660
label_102418:
    if (ctx->pc == 0x102418u) {
        ctx->pc = 0x102418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102414u;
        // 0x102418: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10241Cu;
        goto label_10241c;
    }
    ctx->pc = 0x102414u;
    SET_GPR_U32(ctx, 31, 0x10241Cu);
    ctx->pc = 0x102418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102414u;
    // 0x102418: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x102414u, 0x10241Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10241Cu;
label_10241c:
    // 0x10241c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_102420:
    if (ctx->pc == 0x102420u) {
        ctx->pc = 0x102420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10241Cu;
        // 0x102420: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102424u;
        goto label_102424;
    }
    ctx->pc = 0x10241Cu;
    {
        const bool branch_taken_0x10241c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10241Cu;
        // 0x102420: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10241c) {
            ctx->pc = 0x10242Cu;
            goto label_10242c;
        }
    }
    ctx->pc = 0x102424u;
label_102424:
    // 0x102424: 0x10000006  b           . + 4 + (0x6 << 2)
label_102428:
    if (ctx->pc == 0x102428u) {
        ctx->pc = 0x102428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102424u;
        // 0x102428: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10242Cu;
        goto label_10242c;
    }
    ctx->pc = 0x102424u;
    {
        const bool branch_taken_0x102424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102424u;
        // 0x102428: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102424) {
            ctx->pc = 0x102440u;
            goto label_102440;
        }
    }
    ctx->pc = 0x10242Cu;
label_10242c:
    // 0x10242c: 0xc089998  jal         func_226660
label_102430:
    if (ctx->pc == 0x102430u) {
        ctx->pc = 0x102430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10242Cu;
        // 0x102430: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102434u;
        goto label_102434;
    }
    ctx->pc = 0x10242Cu;
    SET_GPR_U32(ctx, 31, 0x102434u);
    ctx->pc = 0x102430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10242Cu;
    // 0x102430: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x10242Cu, 0x102434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102434u;
label_102434:
    // 0x102434: 0x1040066e  beqz        $v0, . + 4 + (0x66E << 2)
label_102438:
    if (ctx->pc == 0x102438u) {
        ctx->pc = 0x102438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102434u;
        // 0x102438: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10243Cu;
        goto label_10243c;
    }
    ctx->pc = 0x102434u;
    {
        const bool branch_taken_0x102434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102434u;
        // 0x102438: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102434) {
            ctx->pc = 0x103DF0u;
            goto label_103df0;
        }
    }
    ctx->pc = 0x10243Cu;
label_10243c:
    // 0x10243c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x10243cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_102440:
    // 0x102440: 0xc0899a2  jal         func_226688
label_102444:
    if (ctx->pc == 0x102444u) {
        ctx->pc = 0x102448u;
        goto label_102448;
    }
    ctx->pc = 0x102440u;
    SET_GPR_U32(ctx, 31, 0x102448u);
    ctx->pc = 0x226688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226688u, 0x102440u, 0x102448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102448u;
label_102448:
    // 0x102448: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x102448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10244c:
    // 0x10244c: 0xc089990  jal         func_226640
label_102450:
    if (ctx->pc == 0x102450u) {
        ctx->pc = 0x102450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10244Cu;
        // 0x102450: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102454u;
        goto label_102454;
    }
    ctx->pc = 0x10244Cu;
    SET_GPR_U32(ctx, 31, 0x102454u);
    ctx->pc = 0x102450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10244Cu;
    // 0x102450: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x10244Cu, 0x102454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102454u;
label_102454:
    // 0x102454: 0x10000667  b           . + 4 + (0x667 << 2)
label_102458:
    if (ctx->pc == 0x102458u) {
        ctx->pc = 0x102458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102454u;
        // 0x102458: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10245Cu;
        goto label_10245c;
    }
    ctx->pc = 0x102454u;
    {
        const bool branch_taken_0x102454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102454u;
        // 0x102458: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102454) {
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x10245Cu;
label_10245c:
    // 0x10245c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_102460:
    if (ctx->pc == 0x102460u) {
        ctx->pc = 0x102460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10245Cu;
        // 0x102460: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102464u;
        goto label_102464;
    }
    ctx->pc = 0x10245Cu;
    {
        const bool branch_taken_0x10245c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x102460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10245Cu;
        // 0x102460: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10245c) {
            ctx->pc = 0x102488u;
            goto label_102488;
        }
    }
    ctx->pc = 0x102464u;
label_102464:
    // 0x102464: 0xc0e8b48  jal         func_3A2D20
label_102468:
    if (ctx->pc == 0x102468u) {
        ctx->pc = 0x102468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102464u;
        // 0x102468: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10246Cu;
        goto label_10246c;
    }
    ctx->pc = 0x102464u;
    SET_GPR_U32(ctx, 31, 0x10246Cu);
    ctx->pc = 0x102468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102464u;
    // 0x102468: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x102464u, 0x10246Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10246Cu;
label_10246c:
    // 0x10246c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x10246cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_102470:
    // 0x102470: 0xc0e8b68  jal         func_3A2DA0
label_102474:
    if (ctx->pc == 0x102474u) {
        ctx->pc = 0x102474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102470u;
        // 0x102474: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102478u;
        goto label_102478;
    }
    ctx->pc = 0x102470u;
    SET_GPR_U32(ctx, 31, 0x102478u);
    ctx->pc = 0x102474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102470u;
    // 0x102474: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x102470u, 0x102478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102478u;
label_102478:
    // 0x102478: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x102478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_10247c:
    // 0x10247c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10247cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_102480:
    // 0x102480: 0x1000063d  b           . + 4 + (0x63D << 2)
label_102484:
    if (ctx->pc == 0x102484u) {
        ctx->pc = 0x102484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102480u;
        // 0x102484: 0x2406008b  addiu       $a2, $zero, 0x8B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102488u;
        goto label_102488;
    }
    ctx->pc = 0x102480u;
    {
        const bool branch_taken_0x102480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102480u;
        // 0x102484: 0x2406008b  addiu       $a2, $zero, 0x8B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102480) {
            ctx->pc = 0x103D78u;
            goto label_103d78;
        }
    }
    ctx->pc = 0x102488u;
label_102488:
    // 0x102488: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_10248c:
    if (ctx->pc == 0x10248Cu) {
        ctx->pc = 0x10248Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102488u;
        // 0x10248c: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102490u;
        goto label_102490;
    }
    ctx->pc = 0x102488u;
    {
        const bool branch_taken_0x102488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10248Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102488u;
        // 0x10248c: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102488) {
            ctx->pc = 0x1024B4u;
            goto label_1024b4;
        }
    }
    ctx->pc = 0x102490u;
label_102490:
    // 0x102490: 0xc0e8b48  jal         func_3A2D20
label_102494:
    if (ctx->pc == 0x102494u) {
        ctx->pc = 0x102494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102490u;
        // 0x102494: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102498u;
        goto label_102498;
    }
    ctx->pc = 0x102490u;
    SET_GPR_U32(ctx, 31, 0x102498u);
    ctx->pc = 0x102494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102490u;
    // 0x102494: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x102490u, 0x102498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102498u;
label_102498:
    // 0x102498: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x102498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_10249c:
    // 0x10249c: 0xc0e8b68  jal         func_3A2DA0
label_1024a0:
    if (ctx->pc == 0x1024A0u) {
        ctx->pc = 0x1024A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10249Cu;
        // 0x1024a0: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1024A4u;
        goto label_1024a4;
    }
    ctx->pc = 0x10249Cu;
    SET_GPR_U32(ctx, 31, 0x1024A4u);
    ctx->pc = 0x1024A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10249Cu;
    // 0x1024a0: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x10249Cu, 0x1024A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1024A4u;
label_1024a4:
    // 0x1024a4: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x1024a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_1024a8:
    // 0x1024a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1024a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1024ac:
    // 0x1024ac: 0x10000632  b           . + 4 + (0x632 << 2)
label_1024b0:
    if (ctx->pc == 0x1024B0u) {
        ctx->pc = 0x1024B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1024ACu;
        // 0x1024b0: 0x2406008c  addiu       $a2, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1024B4u;
        goto label_1024b4;
    }
    ctx->pc = 0x1024ACu;
    {
        const bool branch_taken_0x1024ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1024B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1024ACu;
        // 0x1024b0: 0x2406008c  addiu       $a2, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1024ac) {
            ctx->pc = 0x103D78u;
            goto label_103d78;
        }
    }
    ctx->pc = 0x1024B4u;
label_1024b4:
    // 0x1024b4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_1024b8:
    if (ctx->pc == 0x1024B8u) {
        ctx->pc = 0x1024B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1024B4u;
        // 0x1024b8: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1024BCu;
        goto label_1024bc;
    }
    ctx->pc = 0x1024B4u;
    {
        const bool branch_taken_0x1024b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1024B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1024B4u;
        // 0x1024b8: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1024b4) {
            ctx->pc = 0x1024E0u;
            goto label_1024e0;
        }
    }
    ctx->pc = 0x1024BCu;
label_1024bc:
    // 0x1024bc: 0xc0e8b48  jal         func_3A2D20
label_1024c0:
    if (ctx->pc == 0x1024C0u) {
        ctx->pc = 0x1024C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1024BCu;
        // 0x1024c0: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1024C4u;
        goto label_1024c4;
    }
    ctx->pc = 0x1024BCu;
    SET_GPR_U32(ctx, 31, 0x1024C4u);
    ctx->pc = 0x1024C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1024BCu;
    // 0x1024c0: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x1024BCu, 0x1024C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1024C4u;
label_1024c4:
    // 0x1024c4: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1024c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1024c8:
    // 0x1024c8: 0xc0e8b68  jal         func_3A2DA0
label_1024cc:
    if (ctx->pc == 0x1024CCu) {
        ctx->pc = 0x1024CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1024C8u;
        // 0x1024cc: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1024D0u;
        goto label_1024d0;
    }
    ctx->pc = 0x1024C8u;
    SET_GPR_U32(ctx, 31, 0x1024D0u);
    ctx->pc = 0x1024CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1024C8u;
    // 0x1024cc: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x1024C8u, 0x1024D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1024D0u;
label_1024d0:
    // 0x1024d0: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x1024d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_1024d4:
    // 0x1024d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1024d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1024d8:
    // 0x1024d8: 0x10000627  b           . + 4 + (0x627 << 2)
label_1024dc:
    if (ctx->pc == 0x1024DCu) {
        ctx->pc = 0x1024DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1024D8u;
        // 0x1024dc: 0x240600c6  addiu       $a2, $zero, 0xC6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1024E0u;
        goto label_1024e0;
    }
    ctx->pc = 0x1024D8u;
    {
        const bool branch_taken_0x1024d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1024DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1024D8u;
        // 0x1024dc: 0x240600c6  addiu       $a2, $zero, 0xC6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1024d8) {
            ctx->pc = 0x103D78u;
            goto label_103d78;
        }
    }
    ctx->pc = 0x1024E0u;
label_1024e0:
    // 0x1024e0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1024e4:
    if (ctx->pc == 0x1024E4u) {
        ctx->pc = 0x1024E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1024E0u;
        // 0x1024e4: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1024E8u;
        goto label_1024e8;
    }
    ctx->pc = 0x1024E0u;
    {
        const bool branch_taken_0x1024e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1024E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1024E0u;
        // 0x1024e4: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1024e0) {
            ctx->pc = 0x1024FCu;
            goto label_1024fc;
        }
    }
    ctx->pc = 0x1024E8u;
label_1024e8:
    // 0x1024e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1024e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1024ec:
    // 0x1024ec: 0xc044006  jal         func_110018
label_1024f0:
    if (ctx->pc == 0x1024F0u) {
        ctx->pc = 0x1024F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1024ECu;
        // 0x1024f0: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1024F4u;
        goto label_1024f4;
    }
    ctx->pc = 0x1024ECu;
    SET_GPR_U32(ctx, 31, 0x1024F4u);
    ctx->pc = 0x1024F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1024ECu;
    // 0x1024f0: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110018u, 0x1024ECu, 0x1024F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1024F4u;
label_1024f4:
    // 0x1024f4: 0x1000063f  b           . + 4 + (0x63F << 2)
label_1024f8:
    if (ctx->pc == 0x1024F8u) {
        ctx->pc = 0x1024F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1024F4u;
        // 0x1024f8: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1024FCu;
        goto label_1024fc;
    }
    ctx->pc = 0x1024F4u;
    {
        const bool branch_taken_0x1024f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1024F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1024F4u;
        // 0x1024f8: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1024f4) {
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x1024FCu;
label_1024fc:
    // 0x1024fc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_102500:
    if (ctx->pc == 0x102500u) {
        ctx->pc = 0x102500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1024FCu;
        // 0x102500: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102504u;
        goto label_102504;
    }
    ctx->pc = 0x1024FCu;
    {
        const bool branch_taken_0x1024fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x102500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1024FCu;
        // 0x102500: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1024fc) {
            ctx->pc = 0x102528u;
            goto label_102528;
        }
    }
    ctx->pc = 0x102504u;
label_102504:
    // 0x102504: 0xc0e8b48  jal         func_3A2D20
label_102508:
    if (ctx->pc == 0x102508u) {
        ctx->pc = 0x102508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102504u;
        // 0x102508: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10250Cu;
        goto label_10250c;
    }
    ctx->pc = 0x102504u;
    SET_GPR_U32(ctx, 31, 0x10250Cu);
    ctx->pc = 0x102508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102504u;
    // 0x102508: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x102504u, 0x10250Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10250Cu;
label_10250c:
    // 0x10250c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x10250cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_102510:
    // 0x102510: 0xc0e8b68  jal         func_3A2DA0
label_102514:
    if (ctx->pc == 0x102514u) {
        ctx->pc = 0x102514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102510u;
        // 0x102514: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102518u;
        goto label_102518;
    }
    ctx->pc = 0x102510u;
    SET_GPR_U32(ctx, 31, 0x102518u);
    ctx->pc = 0x102514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102510u;
    // 0x102514: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x102510u, 0x102518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102518u;
label_102518:
    // 0x102518: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x102518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_10251c:
    // 0x10251c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10251cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_102520:
    // 0x102520: 0x10000615  b           . + 4 + (0x615 << 2)
label_102524:
    if (ctx->pc == 0x102524u) {
        ctx->pc = 0x102524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102520u;
        // 0x102524: 0x2406008e  addiu       $a2, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102528u;
        goto label_102528;
    }
    ctx->pc = 0x102520u;
    {
        const bool branch_taken_0x102520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102520u;
        // 0x102524: 0x2406008e  addiu       $a2, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102520) {
            ctx->pc = 0x103D78u;
            goto label_103d78;
        }
    }
    ctx->pc = 0x102528u;
label_102528:
    // 0x102528: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_10252c:
    if (ctx->pc == 0x10252Cu) {
        ctx->pc = 0x10252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102528u;
        // 0x10252c: 0x30a3ffff  andi        $v1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x102530u;
        goto label_102530;
    }
    ctx->pc = 0x102528u;
    {
        const bool branch_taken_0x102528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102528u;
        // 0x10252c: 0x30a3ffff  andi        $v1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x102528) {
            ctx->pc = 0x102554u;
            goto label_102554;
        }
    }
    ctx->pc = 0x102530u;
label_102530:
    // 0x102530: 0xc0e8b48  jal         func_3A2D20
label_102534:
    if (ctx->pc == 0x102534u) {
        ctx->pc = 0x102534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102530u;
        // 0x102534: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102538u;
        goto label_102538;
    }
    ctx->pc = 0x102530u;
    SET_GPR_U32(ctx, 31, 0x102538u);
    ctx->pc = 0x102534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102530u;
    // 0x102534: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x102530u, 0x102538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102538u;
label_102538:
    // 0x102538: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x102538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_10253c:
    // 0x10253c: 0xc0e8b68  jal         func_3A2DA0
label_102540:
    if (ctx->pc == 0x102540u) {
        ctx->pc = 0x102540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10253Cu;
        // 0x102540: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102544u;
        goto label_102544;
    }
    ctx->pc = 0x10253Cu;
    SET_GPR_U32(ctx, 31, 0x102544u);
    ctx->pc = 0x102540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10253Cu;
    // 0x102540: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x10253Cu, 0x102544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102544u;
label_102544:
    // 0x102544: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x102544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_102548:
    // 0x102548: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x102548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10254c:
    // 0x10254c: 0x1000060a  b           . + 4 + (0x60A << 2)
label_102550:
    if (ctx->pc == 0x102550u) {
        ctx->pc = 0x102550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10254Cu;
        // 0x102550: 0x240600c7  addiu       $a2, $zero, 0xC7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102554u;
        goto label_102554;
    }
    ctx->pc = 0x10254Cu;
    {
        const bool branch_taken_0x10254c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10254Cu;
        // 0x102550: 0x240600c7  addiu       $a2, $zero, 0xC7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10254c) {
            ctx->pc = 0x103D78u;
            goto label_103d78;
        }
    }
    ctx->pc = 0x102554u;
label_102554:
    // 0x102554: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x102554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_102558:
    // 0x102558: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_10255c:
    if (ctx->pc == 0x10255Cu) {
        ctx->pc = 0x10255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102558u;
        // 0x10255c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102560u;
        goto label_102560;
    }
    ctx->pc = 0x102558u;
    {
        const bool branch_taken_0x102558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102558u;
        // 0x10255c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102558) {
            ctx->pc = 0x102578u;
            goto label_102578;
        }
    }
    ctx->pc = 0x102560u;
label_102560:
    // 0x102560: 0xc0e8b48  jal         func_3A2D20
label_102564:
    if (ctx->pc == 0x102564u) {
        ctx->pc = 0x102564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102560u;
        // 0x102564: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102568u;
        goto label_102568;
    }
    ctx->pc = 0x102560u;
    SET_GPR_U32(ctx, 31, 0x102568u);
    ctx->pc = 0x102564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102560u;
    // 0x102564: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x102560u, 0x102568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102568u;
label_102568:
    // 0x102568: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x102568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_10256c:
    // 0x10256c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10256cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_102570:
    // 0x102570: 0x10000601  b           . + 4 + (0x601 << 2)
label_102574:
    if (ctx->pc == 0x102574u) {
        ctx->pc = 0x102574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102570u;
        // 0x102574: 0x240600c5  addiu       $a2, $zero, 0xC5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 197));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102578u;
        goto label_102578;
    }
    ctx->pc = 0x102570u;
    {
        const bool branch_taken_0x102570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102570u;
        // 0x102574: 0x240600c5  addiu       $a2, $zero, 0xC5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 197));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102570) {
            ctx->pc = 0x103D78u;
            goto label_103d78;
        }
    }
    ctx->pc = 0x102578u;
label_102578:
    // 0x102578: 0x1462003f  bne         $v1, $v0, . + 4 + (0x3F << 2)
label_10257c:
    if (ctx->pc == 0x10257Cu) {
        ctx->pc = 0x10257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102578u;
        // 0x10257c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102580u;
        goto label_102580;
    }
    ctx->pc = 0x102578u;
    {
        const bool branch_taken_0x102578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102578u;
        // 0x10257c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102578) {
            ctx->pc = 0x102678u;
            goto label_102678;
        }
    }
    ctx->pc = 0x102580u;
label_102580:
    // 0x102580: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x102580u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_102584:
    // 0x102584: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x102584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_102588:
    // 0x102588: 0x2625000e  addiu       $a1, $s1, 0xE
    ctx->pc = 0x102588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 14));
label_10258c:
    // 0x10258c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10258cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_102590:
    // 0x102590: 0x0  nop
    ctx->pc = 0x102590u;
    // NOP
label_102594:
    // 0x102594: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x102594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_102598:
    // 0x102598: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x102598u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_10259c:
    // 0x10259c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x10259cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1025a0:
    // 0x1025a0: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x1025a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_1025a4:
    // 0x1025a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1025a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1025a8:
    // 0x1025a8: 0x0  nop
    ctx->pc = 0x1025a8u;
    // NOP
label_1025ac:
    // 0x1025ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1025acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1025b0:
    // 0x1025b0: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1025b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_1025b4:
    // 0x1025b4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1025b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1025b8:
    // 0x1025b8: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x1025b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_1025bc:
    // 0x1025bc: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x1025bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1025c0:
    // 0x1025c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1025c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1025c4:
    // 0x1025c4: 0x0  nop
    ctx->pc = 0x1025c4u;
    // NOP
label_1025c8:
    // 0x1025c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1025c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1025cc:
    // 0x1025cc: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x1025ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_1025d0:
    // 0x1025d0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1025d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1025d4:
    // 0x1025d4: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x1025d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_1025d8:
    // 0x1025d8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1025d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1025dc:
    // 0x1025dc: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x1025dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_1025e0:
    // 0x1025e0: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x1025e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_1025e4:
    // 0x1025e4: 0x84a40004  lh          $a0, 0x4($a1)
    ctx->pc = 0x1025e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_1025e8:
    // 0x1025e8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1025e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_1025ec:
    // 0x1025ec: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1025ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1025f0:
    // 0x1025f0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1025f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1025f4:
    // 0x1025f4: 0x3c033800  lui         $v1, 0x3800
    ctx->pc = 0x1025f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14336 << 16));
label_1025f8:
    // 0x1025f8: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1025f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_1025fc:
    // 0x1025fc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1025fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_102600:
    // 0x102600: 0x4bc3093c  vitof0.xyz  $vf3, $vf1
    ctx->pc = 0x102600u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_102604:
    // 0x102604: 0x4bc21858  vmulx.xyz   $vf1, $vf3, $vf2x
    ctx->pc = 0x102604u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_102608:
    // 0x102608: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x102608u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_10260c:
    // 0x10260c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x10260cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_102610:
    // 0x102610: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x102610u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_102614:
    // 0x102614: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x102614u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_102618:
    // 0x102618: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x102618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_10261c:
    // 0x10261c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x10261cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_102620:
    // 0x102620: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x102620u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_102624:
    // 0x102624: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x102624u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_102628:
    // 0x102628: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x102628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_10262c:
    // 0x10262c: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x10262cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_102630:
    // 0x102630: 0x0  nop
    ctx->pc = 0x102630u;
    // NOP
label_102634:
    // 0x102634: 0x0  nop
    ctx->pc = 0x102634u;
    // NOP
label_102638:
    // 0x102638: 0x46000004  c1          0x4
    ctx->pc = 0x102638u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_10263c:
    // 0x10263c: 0xc0e8b48  jal         func_3A2D20
label_102640:
    if (ctx->pc == 0x102640u) {
        ctx->pc = 0x102640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10263Cu;
        // 0x102640: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x102644u;
        goto label_102644;
    }
    ctx->pc = 0x10263Cu;
    SET_GPR_U32(ctx, 31, 0x102644u);
    ctx->pc = 0x102640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10263Cu;
    // 0x102640: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x10263Cu, 0x102644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102644u;
label_102644:
    // 0x102644: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x102644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_102648:
    // 0x102648: 0xc0e8b60  jal         func_3A2D80
label_10264c:
    if (ctx->pc == 0x10264Cu) {
        ctx->pc = 0x10264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102648u;
        // 0x10264c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102650u;
        goto label_102650;
    }
    ctx->pc = 0x102648u;
    SET_GPR_U32(ctx, 31, 0x102650u);
    ctx->pc = 0x10264Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102648u;
    // 0x10264c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D80u, 0x102648u, 0x102650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102650u;
label_102650:
    // 0x102650: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x102650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_102654:
    // 0x102654: 0xc0e8b58  jal         func_3A2D60
label_102658:
    if (ctx->pc == 0x102658u) {
        ctx->pc = 0x102658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102654u;
        // 0x102658: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10265Cu;
        goto label_10265c;
    }
    ctx->pc = 0x102654u;
    SET_GPR_U32(ctx, 31, 0x10265Cu);
    ctx->pc = 0x102658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102654u;
    // 0x102658: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x102654u, 0x10265Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10265Cu;
label_10265c:
    // 0x10265c: 0x86250006  lh          $a1, 0x6($s1)
    ctx->pc = 0x10265cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_102660:
    // 0x102660: 0xc0e8b68  jal         func_3A2DA0
label_102664:
    if (ctx->pc == 0x102664u) {
        ctx->pc = 0x102664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102660u;
        // 0x102664: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102668u;
        goto label_102668;
    }
    ctx->pc = 0x102660u;
    SET_GPR_U32(ctx, 31, 0x102668u);
    ctx->pc = 0x102664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102660u;
    // 0x102664: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x102660u, 0x102668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102668u;
label_102668:
    // 0x102668: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x102668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_10266c:
    // 0x10266c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10266cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_102670:
    // 0x102670: 0x100005c1  b           . + 4 + (0x5C1 << 2)
label_102674:
    if (ctx->pc == 0x102674u) {
        ctx->pc = 0x102674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102670u;
        // 0x102674: 0x24060089  addiu       $a2, $zero, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102678u;
        goto label_102678;
    }
    ctx->pc = 0x102670u;
    {
        const bool branch_taken_0x102670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102670u;
        // 0x102674: 0x24060089  addiu       $a2, $zero, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102670) {
            ctx->pc = 0x103D78u;
            goto label_103d78;
        }
    }
    ctx->pc = 0x102678u;
label_102678:
    // 0x102678: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
label_10267c:
    if (ctx->pc == 0x10267Cu) {
        ctx->pc = 0x10267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102678u;
        // 0x10267c: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102680u;
        goto label_102680;
    }
    ctx->pc = 0x102678u;
    {
        const bool branch_taken_0x102678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102678u;
        // 0x10267c: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102678) {
            ctx->pc = 0x1026E8u;
            goto label_1026e8;
        }
    }
    ctx->pc = 0x102680u;
label_102680:
    // 0x102680: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x102680u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_102684:
    // 0x102684: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x102684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_102688:
    // 0x102688: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x102688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_10268c:
    // 0x10268c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10268cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_102690:
    // 0x102690: 0x0  nop
    ctx->pc = 0x102690u;
    // NOP
label_102694:
    // 0x102694: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x102694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_102698:
    // 0x102698: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x102698u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_10269c:
    // 0x10269c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x10269cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1026a0:
    // 0x1026a0: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x1026a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_1026a4:
    // 0x1026a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1026a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1026a8:
    // 0x1026a8: 0x0  nop
    ctx->pc = 0x1026a8u;
    // NOP
label_1026ac:
    // 0x1026ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1026acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1026b0:
    // 0x1026b0: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1026b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_1026b4:
    // 0x1026b4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1026b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1026b8:
    // 0x1026b8: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x1026b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_1026bc:
    // 0x1026bc: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x1026bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1026c0:
    // 0x1026c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1026c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1026c4:
    // 0x1026c4: 0x0  nop
    ctx->pc = 0x1026c4u;
    // NOP
label_1026c8:
    // 0x1026c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1026c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1026cc:
    // 0x1026cc: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x1026ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_1026d0:
    // 0x1026d0: 0xc0e8b48  jal         func_3A2D20
label_1026d4:
    if (ctx->pc == 0x1026D4u) {
        ctx->pc = 0x1026D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026D0u;
        // 0x1026d4: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1026D8u;
        goto label_1026d8;
    }
    ctx->pc = 0x1026D0u;
    SET_GPR_U32(ctx, 31, 0x1026D8u);
    ctx->pc = 0x1026D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1026D0u;
    // 0x1026d4: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x1026D0u, 0x1026D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1026D8u;
label_1026d8:
    // 0x1026d8: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x1026d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_1026dc:
    // 0x1026dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1026dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1026e0:
    // 0x1026e0: 0x100005a5  b           . + 4 + (0x5A5 << 2)
label_1026e4:
    if (ctx->pc == 0x1026E4u) {
        ctx->pc = 0x1026E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026E0u;
        // 0x1026e4: 0x2406008a  addiu       $a2, $zero, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1026E8u;
        goto label_1026e8;
    }
    ctx->pc = 0x1026E0u;
    {
        const bool branch_taken_0x1026e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1026E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026E0u;
        // 0x1026e4: 0x2406008a  addiu       $a2, $zero, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1026e0) {
            ctx->pc = 0x103D78u;
            goto label_103d78;
        }
    }
    ctx->pc = 0x1026E8u;
label_1026e8:
    // 0x1026e8: 0x1462003f  bne         $v1, $v0, . + 4 + (0x3F << 2)
label_1026ec:
    if (ctx->pc == 0x1026ECu) {
        ctx->pc = 0x1026ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026E8u;
        // 0x1026ec: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1026F0u;
        goto label_1026f0;
    }
    ctx->pc = 0x1026E8u;
    {
        const bool branch_taken_0x1026e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1026ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026E8u;
        // 0x1026ec: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1026e8) {
            ctx->pc = 0x1027E8u;
            goto label_1027e8;
        }
    }
    ctx->pc = 0x1026F0u;
label_1026f0:
    // 0x1026f0: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x1026f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_1026f4:
    // 0x1026f4: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x1026f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_1026f8:
    // 0x1026f8: 0x2625000e  addiu       $a1, $s1, 0xE
    ctx->pc = 0x1026f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 14));
label_1026fc:
    // 0x1026fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1026fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_102700:
    // 0x102700: 0x0  nop
    ctx->pc = 0x102700u;
    // NOP
label_102704:
    // 0x102704: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x102704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_102708:
    // 0x102708: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x102708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_10270c:
    // 0x10270c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x10270cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_102710:
    // 0x102710: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x102710u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_102714:
    // 0x102714: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x102714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_102718:
    // 0x102718: 0x0  nop
    ctx->pc = 0x102718u;
    // NOP
label_10271c:
    // 0x10271c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10271cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_102720:
    // 0x102720: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x102720u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_102724:
    // 0x102724: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x102724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_102728:
    // 0x102728: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x102728u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_10272c:
    // 0x10272c: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x10272cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_102730:
    // 0x102730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x102730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_102734:
    // 0x102734: 0x0  nop
    ctx->pc = 0x102734u;
    // NOP
label_102738:
    // 0x102738: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x102738u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_10273c:
    // 0x10273c: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x10273cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_102740:
    // 0x102740: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x102740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_102744:
    // 0x102744: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x102744u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_102748:
    // 0x102748: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x102748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_10274c:
    // 0x10274c: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x10274cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_102750:
    // 0x102750: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x102750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_102754:
    // 0x102754: 0x84a40004  lh          $a0, 0x4($a1)
    ctx->pc = 0x102754u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_102758:
    // 0x102758: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x102758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_10275c:
    // 0x10275c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x10275cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_102760:
    // 0x102760: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x102760u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_102764:
    // 0x102764: 0x3c023800  lui         $v0, 0x3800
    ctx->pc = 0x102764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14336 << 16));
label_102768:
    // 0x102768: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x102768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_10276c:
    // 0x10276c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x10276cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_102770:
    // 0x102770: 0x4bc3093c  vitof0.xyz  $vf3, $vf1
    ctx->pc = 0x102770u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_102774:
    // 0x102774: 0x4bc21858  vmulx.xyz   $vf1, $vf3, $vf2x
    ctx->pc = 0x102774u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_102778:
    // 0x102778: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x102778u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_10277c:
    // 0x10277c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x10277cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_102780:
    // 0x102780: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x102780u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_102784:
    // 0x102784: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x102784u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_102788:
    // 0x102788: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x102788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_10278c:
    // 0x10278c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x10278cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_102790:
    // 0x102790: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x102790u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_102794:
    // 0x102794: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x102794u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_102798:
    // 0x102798: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x102798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_10279c:
    // 0x10279c: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x10279cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_1027a0:
    // 0x1027a0: 0x0  nop
    ctx->pc = 0x1027a0u;
    // NOP
label_1027a4:
    // 0x1027a4: 0x0  nop
    ctx->pc = 0x1027a4u;
    // NOP
label_1027a8:
    // 0x1027a8: 0x46000004  c1          0x4
    ctx->pc = 0x1027a8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_1027ac:
    // 0x1027ac: 0xc0e8b48  jal         func_3A2D20
label_1027b0:
    if (ctx->pc == 0x1027B0u) {
        ctx->pc = 0x1027B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027ACu;
        // 0x1027b0: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1027B4u;
        goto label_1027b4;
    }
    ctx->pc = 0x1027ACu;
    SET_GPR_U32(ctx, 31, 0x1027B4u);
    ctx->pc = 0x1027B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1027ACu;
    // 0x1027b0: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x1027ACu, 0x1027B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1027B4u;
label_1027b4:
    // 0x1027b4: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x1027b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_1027b8:
    // 0x1027b8: 0xc0e8b60  jal         func_3A2D80
label_1027bc:
    if (ctx->pc == 0x1027BCu) {
        ctx->pc = 0x1027BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027B8u;
        // 0x1027bc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1027C0u;
        goto label_1027c0;
    }
    ctx->pc = 0x1027B8u;
    SET_GPR_U32(ctx, 31, 0x1027C0u);
    ctx->pc = 0x1027BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1027B8u;
    // 0x1027bc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D80u, 0x1027B8u, 0x1027C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1027C0u;
label_1027c0:
    // 0x1027c0: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x1027c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_1027c4:
    // 0x1027c4: 0xc0e8b58  jal         func_3A2D60
label_1027c8:
    if (ctx->pc == 0x1027C8u) {
        ctx->pc = 0x1027C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027C4u;
        // 0x1027c8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1027CCu;
        goto label_1027cc;
    }
    ctx->pc = 0x1027C4u;
    SET_GPR_U32(ctx, 31, 0x1027CCu);
    ctx->pc = 0x1027C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1027C4u;
    // 0x1027c8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x1027C4u, 0x1027CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1027CCu;
label_1027cc:
    // 0x1027cc: 0x86250006  lh          $a1, 0x6($s1)
    ctx->pc = 0x1027ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_1027d0:
    // 0x1027d0: 0xc0e8b68  jal         func_3A2DA0
label_1027d4:
    if (ctx->pc == 0x1027D4u) {
        ctx->pc = 0x1027D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027D0u;
        // 0x1027d4: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1027D8u;
        goto label_1027d8;
    }
    ctx->pc = 0x1027D0u;
    SET_GPR_U32(ctx, 31, 0x1027D8u);
    ctx->pc = 0x1027D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1027D0u;
    // 0x1027d4: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x1027D0u, 0x1027D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1027D8u;
label_1027d8:
    // 0x1027d8: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x1027d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_1027dc:
    // 0x1027dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1027dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1027e0:
    // 0x1027e0: 0x10000565  b           . + 4 + (0x565 << 2)
label_1027e4:
    if (ctx->pc == 0x1027E4u) {
        ctx->pc = 0x1027E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027E0u;
        // 0x1027e4: 0x240600a2  addiu       $a2, $zero, 0xA2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1027E8u;
        goto label_1027e8;
    }
    ctx->pc = 0x1027E0u;
    {
        const bool branch_taken_0x1027e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1027E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027E0u;
        // 0x1027e4: 0x240600a2  addiu       $a2, $zero, 0xA2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1027e0) {
            ctx->pc = 0x103D78u;
            goto label_103d78;
        }
    }
    ctx->pc = 0x1027E8u;
label_1027e8:
    // 0x1027e8: 0x14620048  bne         $v1, $v0, . + 4 + (0x48 << 2)
label_1027ec:
    if (ctx->pc == 0x1027ECu) {
        ctx->pc = 0x1027ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027E8u;
        // 0x1027ec: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1027F0u;
        goto label_1027f0;
    }
    ctx->pc = 0x1027E8u;
    {
        const bool branch_taken_0x1027e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1027ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027E8u;
        // 0x1027ec: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1027e8) {
            ctx->pc = 0x10290Cu;
            goto label_10290c;
        }
    }
    ctx->pc = 0x1027F0u;
label_1027f0:
    // 0x1027f0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1027f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1027f4:
    // 0x1027f4: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x1027f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1027f8:
    // 0x1027f8: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x1027f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1027fc:
    // 0x1027fc: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x1027fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_102800:
    // 0x102800: 0x60f809  jalr        $v1
label_102804:
    if (ctx->pc == 0x102804u) {
        ctx->pc = 0x102804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102800u;
        // 0x102804: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102808u;
        goto label_102808;
    }
    ctx->pc = 0x102800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x102808u);
        ctx->pc = 0x102804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102800u;
        // 0x102804: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102800u, 0x102808u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102808u;
label_102808:
    // 0x102808: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x102808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_10280c:
    // 0x10280c: 0x7a4202c0  lq          $v0, 0x2C0($s2)
    ctx->pc = 0x10280cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 704)));
label_102810:
    // 0x102810: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x102810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
label_102814:
    // 0x102814: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x102814u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_102818:
    // 0x102818: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x102818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_10281c:
    // 0x10281c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x10281cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_102820:
    // 0x102820: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x102820u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_102824:
    // 0x102824: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x102824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_102828:
    // 0x102828: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x102828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_10282c:
    // 0x10282c: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x10282cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_102830:
    // 0x102830: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x102830u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_102834:
    // 0x102834: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x102834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_102838:
    // 0x102838: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x102838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_10283c:
    // 0x10283c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x10283cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_102840:
    // 0x102840: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x102840u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_102844:
    // 0x102844: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x102844u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_102848:
    // 0x102848: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x102848u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_10284c:
    // 0x10284c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x10284cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_102850:
    // 0x102850: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x102850u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_102854:
    // 0x102854: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x102854u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_102858:
    // 0x102858: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x102858u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_10285c:
    // 0x10285c: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x10285cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_102860:
    // 0x102860: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x102860u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_102864:
    // 0x102864: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x102864u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_102868:
    // 0x102868: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x102868u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_10286c:
    // 0x10286c: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x10286cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_102870:
    // 0x102870: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x102870u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_102874:
    // 0x102874: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x102874u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_102878:
    // 0x102878: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x102878u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_10287c:
    // 0x10287c: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x10287cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_102880:
    // 0x102880: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x102880u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
label_102884:
    // 0x102884: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x102884u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_102888:
    // 0x102888: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x102888u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_10288c:
    // 0x10288c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x10288cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_102890:
    // 0x102890: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x102890u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_102894:
    // 0x102894: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x102894u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_102898:
    // 0x102898: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x102898u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_10289c:
    // 0x10289c: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x10289cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
label_1028a0:
    // 0x1028a0: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x1028a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_1028a4:
    // 0x1028a4: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1028a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_1028a8:
    // 0x1028a8: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x1028a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1028ac:
    // 0x1028ac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1028acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1028b0:
    // 0x1028b0: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x1028b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_1028b4:
    // 0x1028b4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1028b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1028b8:
    // 0x1028b8: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1028b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1028bc:
    // 0x1028bc: 0x60f809  jalr        $v1
label_1028c0:
    if (ctx->pc == 0x1028C0u) {
        ctx->pc = 0x1028C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1028BCu;
        // 0x1028c0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1028C4u;
        goto label_1028c4;
    }
    ctx->pc = 0x1028BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1028C4u);
        ctx->pc = 0x1028C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1028BCu;
        // 0x1028c0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1028BCu, 0x1028C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1028C4u;
label_1028c4:
    // 0x1028c4: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x1028c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_1028c8:
    // 0x1028c8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1028c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1028cc:
    // 0x1028cc: 0xc6e10018  lwc1        $f1, 0x18($s7)
    ctx->pc = 0x1028ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1028d0:
    // 0x1028d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1028d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1028d4:
    // 0x1028d4: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x1028d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1028d8:
    // 0x1028d8: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1028d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_1028dc:
    // 0x1028dc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1028dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1028e0:
    // 0x1028e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1028e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1028e4:
    // 0x1028e4: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x1028e4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
label_1028e8:
    // 0x1028e8: 0xc08f4ae  jal         func_23D2B8
label_1028ec:
    if (ctx->pc == 0x1028ECu) {
        ctx->pc = 0x1028ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1028E8u;
        // 0x1028ec: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1028F0u;
        goto label_1028f0;
    }
    ctx->pc = 0x1028E8u;
    SET_GPR_U32(ctx, 31, 0x1028F0u);
    ctx->pc = 0x1028ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1028E8u;
    // 0x1028ec: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D2B8u, 0x1028E8u, 0x1028F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1028F0u;
label_1028f0:
    // 0x1028f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1028f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1028f4:
    // 0x1028f4: 0xc0864c8  jal         func_219320
label_1028f8:
    if (ctx->pc == 0x1028F8u) {
        ctx->pc = 0x1028F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1028F4u;
        // 0x1028f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1028FCu;
        goto label_1028fc;
    }
    ctx->pc = 0x1028F4u;
    SET_GPR_U32(ctx, 31, 0x1028FCu);
    ctx->pc = 0x1028F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1028F4u;
    // 0x1028f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219320u, 0x1028F4u, 0x1028FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1028FCu;
label_1028fc:
    // 0x1028fc: 0xc0866b4  jal         func_219AD0
label_102900:
    if (ctx->pc == 0x102900u) {
        ctx->pc = 0x102900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1028FCu;
        // 0x102900: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102904u;
        goto label_102904;
    }
    ctx->pc = 0x1028FCu;
    SET_GPR_U32(ctx, 31, 0x102904u);
    ctx->pc = 0x102900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1028FCu;
    // 0x102900: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219AD0u, 0x1028FCu, 0x102904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102904u;
label_102904:
    // 0x102904: 0x1000053b  b           . + 4 + (0x53B << 2)
label_102908:
    if (ctx->pc == 0x102908u) {
        ctx->pc = 0x102908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102904u;
        // 0x102908: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10290Cu;
        goto label_10290c;
    }
    ctx->pc = 0x102904u;
    {
        const bool branch_taken_0x102904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102904u;
        // 0x102908: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102904) {
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x10290Cu;
label_10290c:
    // 0x10290c: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_102910:
    if (ctx->pc == 0x102910u) {
        ctx->pc = 0x102910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10290Cu;
        // 0x102910: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102914u;
        goto label_102914;
    }
    ctx->pc = 0x10290Cu;
    {
        const bool branch_taken_0x10290c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x102910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10290Cu;
        // 0x102910: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10290c) {
            ctx->pc = 0x102960u;
            goto label_102960;
        }
    }
    ctx->pc = 0x102914u;
label_102914:
    // 0x102914: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x102914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_102918:
    // 0x102918: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x102918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_10291c:
    // 0x10291c: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x10291cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_102920:
    // 0x102920: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x102920u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_102924:
    // 0x102924: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x102924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_102928:
    // 0x102928: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x102928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10292c:
    // 0x10292c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x10292cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_102930:
    // 0x102930: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x102930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_102934:
    // 0x102934: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x102934u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_102938:
    // 0x102938: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x102938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10293c:
    // 0x10293c: 0xc0e8b48  jal         func_3A2D20
label_102940:
    if (ctx->pc == 0x102940u) {
        ctx->pc = 0x102940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10293Cu;
        // 0x102940: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x102944u;
        goto label_102944;
    }
    ctx->pc = 0x10293Cu;
    SET_GPR_U32(ctx, 31, 0x102944u);
    ctx->pc = 0x102940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10293Cu;
    // 0x102940: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x10293Cu, 0x102944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102944u;
label_102944:
    // 0x102944: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x102944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_102948:
    // 0x102948: 0xc0e8b58  jal         func_3A2D60
label_10294c:
    if (ctx->pc == 0x10294Cu) {
        ctx->pc = 0x10294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102948u;
        // 0x10294c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102950u;
        goto label_102950;
    }
    ctx->pc = 0x102948u;
    SET_GPR_U32(ctx, 31, 0x102950u);
    ctx->pc = 0x10294Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102948u;
    // 0x10294c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x102948u, 0x102950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102950u;
label_102950:
    // 0x102950: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x102950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_102954:
    // 0x102954: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x102954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_102958:
    // 0x102958: 0x10000507  b           . + 4 + (0x507 << 2)
label_10295c:
    if (ctx->pc == 0x10295Cu) {
        ctx->pc = 0x10295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102958u;
        // 0x10295c: 0x24060095  addiu       $a2, $zero, 0x95 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102960u;
        goto label_102960;
    }
    ctx->pc = 0x102958u;
    {
        const bool branch_taken_0x102958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102958u;
        // 0x10295c: 0x24060095  addiu       $a2, $zero, 0x95 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102958) {
            ctx->pc = 0x103D78u;
            goto label_103d78;
        }
    }
    ctx->pc = 0x102960u;
label_102960:
    // 0x102960: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_102964:
    if (ctx->pc == 0x102964u) {
        ctx->pc = 0x102964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102960u;
        // 0x102964: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102968u;
        goto label_102968;
    }
    ctx->pc = 0x102960u;
    {
        const bool branch_taken_0x102960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x102964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102960u;
        // 0x102964: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102960) {
            ctx->pc = 0x10298Cu;
            goto label_10298c;
        }
    }
    ctx->pc = 0x102968u;
label_102968:
    // 0x102968: 0xc0e8b48  jal         func_3A2D20
label_10296c:
    if (ctx->pc == 0x10296Cu) {
        ctx->pc = 0x10296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102968u;
        // 0x10296c: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102970u;
        goto label_102970;
    }
    ctx->pc = 0x102968u;
    SET_GPR_U32(ctx, 31, 0x102970u);
    ctx->pc = 0x10296Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102968u;
    // 0x10296c: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x102968u, 0x102970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102970u;
label_102970:
    // 0x102970: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x102970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_102974:
    // 0x102974: 0xc0e8b78  jal         func_3A2DE0
label_102978:
    if (ctx->pc == 0x102978u) {
        ctx->pc = 0x102978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102974u;
        // 0x102978: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10297Cu;
        goto label_10297c;
    }
    ctx->pc = 0x102974u;
    SET_GPR_U32(ctx, 31, 0x10297Cu);
    ctx->pc = 0x102978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102974u;
    // 0x102978: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x102974u, 0x10297Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10297Cu;
label_10297c:
    // 0x10297c: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x10297cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_102980:
    // 0x102980: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x102980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_102984:
    // 0x102984: 0x100004fc  b           . + 4 + (0x4FC << 2)
label_102988:
    if (ctx->pc == 0x102988u) {
        ctx->pc = 0x102988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102984u;
        // 0x102988: 0x24060096  addiu       $a2, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10298Cu;
        goto label_10298c;
    }
    ctx->pc = 0x102984u;
    {
        const bool branch_taken_0x102984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102984u;
        // 0x102988: 0x24060096  addiu       $a2, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102984) {
            ctx->pc = 0x103D78u;
            goto label_103d78;
        }
    }
    ctx->pc = 0x10298Cu;
label_10298c:
    // 0x10298c: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
label_102990:
    if (ctx->pc == 0x102990u) {
        ctx->pc = 0x102990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10298Cu;
        // 0x102990: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102994u;
        goto label_102994;
    }
    ctx->pc = 0x10298Cu;
    {
        const bool branch_taken_0x10298c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x102990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10298Cu;
        // 0x102990: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10298c) {
            ctx->pc = 0x102A24u;
            goto label_102a24;
        }
    }
    ctx->pc = 0x102994u;
label_102994:
    // 0x102994: 0x8623000e  lh          $v1, 0xE($s1)
    ctx->pc = 0x102994u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_102998:
    // 0x102998: 0x2624000e  addiu       $a0, $s1, 0xE
    ctx->pc = 0x102998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14));
label_10299c:
    // 0x10299c: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x10299cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_1029a0:
    // 0x1029a0: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x1029a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1029a4:
    // 0x1029a4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1029a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_1029a8:
    // 0x1029a8: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x1029a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1029ac:
    // 0x1029ac: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x1029acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_1029b0:
    // 0x1029b0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1029b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1029b4:
    // 0x1029b4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1029b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1029b8:
    // 0x1029b8: 0x3c043800  lui         $a0, 0x3800
    ctx->pc = 0x1029b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14336 << 16));
label_1029bc:
    // 0x1029bc: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x1029bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_1029c0:
    // 0x1029c0: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1029c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_1029c4:
    // 0x1029c4: 0x4bc3093c  vitof0.xyz  $vf3, $vf1
    ctx->pc = 0x1029c4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1029c8:
    // 0x1029c8: 0x4bc21858  vmulx.xyz   $vf1, $vf3, $vf2x
    ctx->pc = 0x1029c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1029cc:
    // 0x1029cc: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x1029ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1029d0:
    // 0x1029d0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1029d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1029d4:
    // 0x1029d4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1029d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1029d8:
    // 0x1029d8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1029d8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_1029dc:
    // 0x1029dc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1029dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1029e0:
    // 0x1029e0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1029e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_1029e4:
    // 0x1029e4: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x1029e4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_1029e8:
    // 0x1029e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1029e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1029ec:
    // 0x1029ec: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x1029ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_1029f0:
    // 0x1029f0: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x1029f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_1029f4:
    // 0x1029f4: 0x0  nop
    ctx->pc = 0x1029f4u;
    // NOP
label_1029f8:
    // 0x1029f8: 0x0  nop
    ctx->pc = 0x1029f8u;
    // NOP
label_1029fc:
    // 0x1029fc: 0x46000004  c1          0x4
    ctx->pc = 0x1029fcu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_102a00:
    // 0x102a00: 0xc0e8b48  jal         func_3A2D20
label_102a04:
    if (ctx->pc == 0x102A04u) {
        ctx->pc = 0x102A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A00u;
        // 0x102a04: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x102A08u;
        goto label_102a08;
    }
    ctx->pc = 0x102A00u;
    SET_GPR_U32(ctx, 31, 0x102A08u);
    ctx->pc = 0x102A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102A00u;
    // 0x102a04: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x102A00u, 0x102A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102A08u;
label_102a08:
    // 0x102a08: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x102a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_102a0c:
    // 0x102a0c: 0xc0e8b60  jal         func_3A2D80
label_102a10:
    if (ctx->pc == 0x102A10u) {
        ctx->pc = 0x102A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A0Cu;
        // 0x102a10: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102A14u;
        goto label_102a14;
    }
    ctx->pc = 0x102A0Cu;
    SET_GPR_U32(ctx, 31, 0x102A14u);
    ctx->pc = 0x102A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102A0Cu;
    // 0x102a10: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D80u, 0x102A0Cu, 0x102A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102A14u;
label_102a14:
    // 0x102a14: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x102a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_102a18:
    // 0x102a18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x102a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_102a1c:
    // 0x102a1c: 0x100004d6  b           . + 4 + (0x4D6 << 2)
label_102a20:
    if (ctx->pc == 0x102A20u) {
        ctx->pc = 0x102A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A1Cu;
        // 0x102a20: 0x24060097  addiu       $a2, $zero, 0x97 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102A24u;
        goto label_102a24;
    }
    ctx->pc = 0x102A1Cu;
    {
        const bool branch_taken_0x102a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A1Cu;
        // 0x102a20: 0x24060097  addiu       $a2, $zero, 0x97 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a1c) {
            ctx->pc = 0x103D78u;
            goto label_103d78;
        }
    }
    ctx->pc = 0x102A24u;
label_102a24:
    // 0x102a24: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_102a28:
    if (ctx->pc == 0x102A28u) {
        ctx->pc = 0x102A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A24u;
        // 0x102a28: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102A2Cu;
        goto label_102a2c;
    }
    ctx->pc = 0x102A24u;
    {
        const bool branch_taken_0x102a24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x102A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A24u;
        // 0x102a28: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a24) {
            ctx->pc = 0x102A4Cu;
            goto label_102a4c;
        }
    }
    ctx->pc = 0x102A2Cu;
label_102a2c:
    // 0x102a2c: 0x96e3001e  lhu         $v1, 0x1E($s7)
    ctx->pc = 0x102a2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 30)));
label_102a30:
    // 0x102a30: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x102a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_102a34:
    // 0x102a34: 0x104004ee  beqz        $v0, . + 4 + (0x4EE << 2)
label_102a38:
    if (ctx->pc == 0x102A38u) {
        ctx->pc = 0x102A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A34u;
        // 0x102a38: 0x34628000  ori         $v0, $v1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x102A3Cu;
        goto label_102a3c;
    }
    ctx->pc = 0x102A34u;
    {
        const bool branch_taken_0x102a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A34u;
        // 0x102a38: 0x34628000  ori         $v0, $v1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a34) {
            ctx->pc = 0x103DF0u;
            goto label_103df0;
        }
    }
    ctx->pc = 0x102A3Cu;
label_102a3c:
    // 0x102a3c: 0xa6e2001e  sh          $v0, 0x1E($s7)
    ctx->pc = 0x102a3cu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 30), (uint16_t)GPR_U32(ctx, 2));
label_102a40:
    // 0x102a40: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x102a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_102a44:
    // 0x102a44: 0x100004ea  b           . + 4 + (0x4EA << 2)
label_102a48:
    if (ctx->pc == 0x102A48u) {
        ctx->pc = 0x102A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A44u;
        // 0x102a48: 0xaee30020  sw          $v1, 0x20($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102A4Cu;
        goto label_102a4c;
    }
    ctx->pc = 0x102A44u;
    {
        const bool branch_taken_0x102a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A44u;
        // 0x102a48: 0xaee30020  sw          $v1, 0x20($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a44) {
            ctx->pc = 0x103DF0u;
            goto label_103df0;
        }
    }
    ctx->pc = 0x102A4Cu;
label_102a4c:
    // 0x102a4c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_102a50:
    if (ctx->pc == 0x102A50u) {
        ctx->pc = 0x102A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A4Cu;
        // 0x102a50: 0x30a3ffff  andi        $v1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x102A54u;
        goto label_102a54;
    }
    ctx->pc = 0x102A4Cu;
    {
        const bool branch_taken_0x102a4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x102A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A4Cu;
        // 0x102a50: 0x30a3ffff  andi        $v1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a4c) {
            ctx->pc = 0x102A88u;
            goto label_102a88;
        }
    }
    ctx->pc = 0x102A54u;
label_102a54:
    // 0x102a54: 0x824501b0  lb          $a1, 0x1B0($s2)
    ctx->pc = 0x102a54u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_102a58:
    // 0x102a58: 0x51027  nor         $v0, $zero, $a1
    ctx->pc = 0x102a58u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
label_102a5c:
    // 0x102a5c: 0x104004e4  beqz        $v0, . + 4 + (0x4E4 << 2)
label_102a60:
    if (ctx->pc == 0x102A60u) {
        ctx->pc = 0x102A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A5Cu;
        // 0x102a60: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102A64u;
        goto label_102a64;
    }
    ctx->pc = 0x102A5Cu;
    {
        const bool branch_taken_0x102a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A5Cu;
        // 0x102a60: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a5c) {
            ctx->pc = 0x103DF0u;
            goto label_103df0;
        }
    }
    ctx->pc = 0x102A64u;
label_102a64:
    // 0x102a64: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x102a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_102a68:
    // 0x102a68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x102a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_102a6c:
    // 0x102a6c: 0x84830224  lh          $v1, 0x224($a0)
    ctx->pc = 0x102a6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
label_102a70:
    // 0x102a70: 0x546204e0  bnel        $v1, $v0, . + 4 + (0x4E0 << 2)
label_102a74:
    if (ctx->pc == 0x102A74u) {
        ctx->pc = 0x102A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A70u;
        // 0x102a74: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102A78u;
        goto label_102a78;
    }
    ctx->pc = 0x102A70u;
    {
        const bool branch_taken_0x102a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x102a70) {
            ctx->pc = 0x102A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102A70u;
            // 0x102a74: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x102A78u;
label_102a78:
    // 0x102a78: 0xc106acc  jal         func_41AB30
label_102a7c:
    if (ctx->pc == 0x102A7Cu) {
        ctx->pc = 0x102A80u;
        goto label_102a80;
    }
    ctx->pc = 0x102A78u;
    SET_GPR_U32(ctx, 31, 0x102A80u);
    ctx->pc = 0x41AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41AB30u, 0x102A78u, 0x102A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102A80u;
label_102a80:
    // 0x102a80: 0x100004dc  b           . + 4 + (0x4DC << 2)
label_102a84:
    if (ctx->pc == 0x102A84u) {
        ctx->pc = 0x102A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A80u;
        // 0x102a84: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102A88u;
        goto label_102a88;
    }
    ctx->pc = 0x102A80u;
    {
        const bool branch_taken_0x102a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A80u;
        // 0x102a84: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a80) {
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x102A88u;
label_102a88:
    // 0x102a88: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x102a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_102a8c:
    // 0x102a8c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_102a90:
    if (ctx->pc == 0x102A90u) {
        ctx->pc = 0x102A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A8Cu;
        // 0x102a90: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102A94u;
        goto label_102a94;
    }
    ctx->pc = 0x102A8Cu;
    {
        const bool branch_taken_0x102a8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x102A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A8Cu;
        // 0x102a90: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a8c) {
            ctx->pc = 0x102AC8u;
            goto label_102ac8;
        }
    }
    ctx->pc = 0x102A94u;
label_102a94:
    // 0x102a94: 0x824501b0  lb          $a1, 0x1B0($s2)
    ctx->pc = 0x102a94u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_102a98:
    // 0x102a98: 0x51027  nor         $v0, $zero, $a1
    ctx->pc = 0x102a98u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
label_102a9c:
    // 0x102a9c: 0x104004d4  beqz        $v0, . + 4 + (0x4D4 << 2)
label_102aa0:
    if (ctx->pc == 0x102AA0u) {
        ctx->pc = 0x102AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A9Cu;
        // 0x102aa0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102AA4u;
        goto label_102aa4;
    }
    ctx->pc = 0x102A9Cu;
    {
        const bool branch_taken_0x102a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A9Cu;
        // 0x102aa0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a9c) {
            ctx->pc = 0x103DF0u;
            goto label_103df0;
        }
    }
    ctx->pc = 0x102AA4u;
label_102aa4:
    // 0x102aa4: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x102aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_102aa8:
    // 0x102aa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x102aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_102aac:
    // 0x102aac: 0x84830224  lh          $v1, 0x224($a0)
    ctx->pc = 0x102aacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
label_102ab0:
    // 0x102ab0: 0x546204d0  bnel        $v1, $v0, . + 4 + (0x4D0 << 2)
label_102ab4:
    if (ctx->pc == 0x102AB4u) {
        ctx->pc = 0x102AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102AB0u;
        // 0x102ab4: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102AB8u;
        goto label_102ab8;
    }
    ctx->pc = 0x102AB0u;
    {
        const bool branch_taken_0x102ab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x102ab0) {
            ctx->pc = 0x102AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102AB0u;
            // 0x102ab4: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x102AB8u;
label_102ab8:
    // 0x102ab8: 0xc106ad8  jal         func_41AB60
label_102abc:
    if (ctx->pc == 0x102ABCu) {
        ctx->pc = 0x102AC0u;
        goto label_102ac0;
    }
    ctx->pc = 0x102AB8u;
    SET_GPR_U32(ctx, 31, 0x102AC0u);
    ctx->pc = 0x41AB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41AB60u, 0x102AB8u, 0x102AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102AC0u;
label_102ac0:
    // 0x102ac0: 0x100004cc  b           . + 4 + (0x4CC << 2)
label_102ac4:
    if (ctx->pc == 0x102AC4u) {
        ctx->pc = 0x102AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102AC0u;
        // 0x102ac4: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102AC8u;
        goto label_102ac8;
    }
    ctx->pc = 0x102AC0u;
    {
        const bool branch_taken_0x102ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102AC0u;
        // 0x102ac4: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ac0) {
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x102AC8u;
label_102ac8:
    // 0x102ac8: 0x146200f5  bne         $v1, $v0, . + 4 + (0xF5 << 2)
label_102acc:
    if (ctx->pc == 0x102ACCu) {
        ctx->pc = 0x102ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102AC8u;
        // 0x102acc: 0x2402003a  addiu       $v0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102AD0u;
        goto label_102ad0;
    }
    ctx->pc = 0x102AC8u;
    {
        const bool branch_taken_0x102ac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x102ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102AC8u;
        // 0x102acc: 0x2402003a  addiu       $v0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ac8) {
            ctx->pc = 0x102EA0u;
            goto label_102ea0;
        }
    }
    ctx->pc = 0x102AD0u;
label_102ad0:
    // 0x102ad0: 0x825301b0  lb          $s3, 0x1B0($s2)
    ctx->pc = 0x102ad0u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_102ad4:
    // 0x102ad4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x102ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_102ad8:
    // 0x102ad8: 0x16630027  bne         $s3, $v1, . + 4 + (0x27 << 2)
label_102adc:
    if (ctx->pc == 0x102ADCu) {
        ctx->pc = 0x102ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102AD8u;
        // 0x102adc: 0xafa30068  sw          $v1, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102AE0u;
        goto label_102ae0;
    }
    ctx->pc = 0x102AD8u;
    {
        const bool branch_taken_0x102ad8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x102ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102AD8u;
        // 0x102adc: 0xafa30068  sw          $v1, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ad8) {
            ctx->pc = 0x102B78u;
            goto label_102b78;
        }
    }
    ctx->pc = 0x102AE0u;
label_102ae0:
    // 0x102ae0: 0x8e4300cc  lw          $v1, 0xCC($s2)
    ctx->pc = 0x102ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_102ae4:
    // 0x102ae4: 0x2462ff89  addiu       $v0, $v1, -0x77
    ctx->pc = 0x102ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967177));
label_102ae8:
    // 0x102ae8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x102ae8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_102aec:
    // 0x102aec: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_102af0:
    if (ctx->pc == 0x102AF0u) {
        ctx->pc = 0x102AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102AECu;
        // 0x102af0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102AF4u;
        goto label_102af4;
    }
    ctx->pc = 0x102AECu;
    {
        const bool branch_taken_0x102aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102AECu;
        // 0x102af0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102aec) {
            ctx->pc = 0x102B4Cu;
            goto label_102b4c;
        }
    }
    ctx->pc = 0x102AF4u;
label_102af4:
    // 0x102af4: 0x240400ed  addiu       $a0, $zero, 0xED
    ctx->pc = 0x102af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
label_102af8:
    // 0x102af8: 0x10640013  beq         $v1, $a0, . + 4 + (0x13 << 2)
label_102afc:
    if (ctx->pc == 0x102AFCu) {
        ctx->pc = 0x102AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102AF8u;
        // 0x102afc: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102B00u;
        goto label_102b00;
    }
    ctx->pc = 0x102AF8u;
    {
        const bool branch_taken_0x102af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x102AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102AF8u;
        // 0x102afc: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102af8) {
            ctx->pc = 0x102B48u;
            goto label_102b48;
        }
    }
    ctx->pc = 0x102B00u;
label_102b00:
    // 0x102b00: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_102b04:
    if (ctx->pc == 0x102B04u) {
        ctx->pc = 0x102B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B00u;
        // 0x102b04: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102B08u;
        goto label_102b08;
    }
    ctx->pc = 0x102B00u;
    {
        const bool branch_taken_0x102b00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x102B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B00u;
        // 0x102b04: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102b00) {
            ctx->pc = 0x102B48u;
            goto label_102b48;
        }
    }
    ctx->pc = 0x102B08u;
label_102b08:
    // 0x102b08: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_102b0c:
    if (ctx->pc == 0x102B0Cu) {
        ctx->pc = 0x102B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B08u;
        // 0x102b0c: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102B10u;
        goto label_102b10;
    }
    ctx->pc = 0x102B08u;
    {
        const bool branch_taken_0x102b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x102B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B08u;
        // 0x102b0c: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102b08) {
            ctx->pc = 0x102B48u;
            goto label_102b48;
        }
    }
    ctx->pc = 0x102B10u;
label_102b10:
    // 0x102b10: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_102b14:
    if (ctx->pc == 0x102B14u) {
        ctx->pc = 0x102B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B10u;
        // 0x102b14: 0x240200a1  addiu       $v0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102B18u;
        goto label_102b18;
    }
    ctx->pc = 0x102B10u;
    {
        const bool branch_taken_0x102b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x102B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B10u;
        // 0x102b14: 0x240200a1  addiu       $v0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102b10) {
            ctx->pc = 0x102B48u;
            goto label_102b48;
        }
    }
    ctx->pc = 0x102B18u;
label_102b18:
    // 0x102b18: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_102b1c:
    if (ctx->pc == 0x102B1Cu) {
        ctx->pc = 0x102B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B18u;
        // 0x102b1c: 0x240200b2  addiu       $v0, $zero, 0xB2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102B20u;
        goto label_102b20;
    }
    ctx->pc = 0x102B18u;
    {
        const bool branch_taken_0x102b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x102B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B18u;
        // 0x102b1c: 0x240200b2  addiu       $v0, $zero, 0xB2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102b18) {
            ctx->pc = 0x102B48u;
            goto label_102b48;
        }
    }
    ctx->pc = 0x102B20u;
label_102b20:
    // 0x102b20: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_102b24:
    if (ctx->pc == 0x102B24u) {
        ctx->pc = 0x102B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B20u;
        // 0x102b24: 0x240200b3  addiu       $v0, $zero, 0xB3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102B28u;
        goto label_102b28;
    }
    ctx->pc = 0x102B20u;
    {
        const bool branch_taken_0x102b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x102B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B20u;
        // 0x102b24: 0x240200b3  addiu       $v0, $zero, 0xB3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102b20) {
            ctx->pc = 0x102B48u;
            goto label_102b48;
        }
    }
    ctx->pc = 0x102B28u;
label_102b28:
    // 0x102b28: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_102b2c:
    if (ctx->pc == 0x102B2Cu) {
        ctx->pc = 0x102B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B28u;
        // 0x102b2c: 0x2402004d  addiu       $v0, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102B30u;
        goto label_102b30;
    }
    ctx->pc = 0x102B28u;
    {
        const bool branch_taken_0x102b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x102B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B28u;
        // 0x102b2c: 0x2402004d  addiu       $v0, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102b28) {
            ctx->pc = 0x102B48u;
            goto label_102b48;
        }
    }
    ctx->pc = 0x102B30u;
label_102b30:
    // 0x102b30: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_102b34:
    if (ctx->pc == 0x102B34u) {
        ctx->pc = 0x102B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B30u;
        // 0x102b34: 0x2402004e  addiu       $v0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102B38u;
        goto label_102b38;
    }
    ctx->pc = 0x102B30u;
    {
        const bool branch_taken_0x102b30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x102B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B30u;
        // 0x102b34: 0x2402004e  addiu       $v0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102b30) {
            ctx->pc = 0x102B48u;
            goto label_102b48;
        }
    }
    ctx->pc = 0x102B38u;
label_102b38:
    // 0x102b38: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_102b3c:
    if (ctx->pc == 0x102B3Cu) {
        ctx->pc = 0x102B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B38u;
        // 0x102b3c: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102B40u;
        goto label_102b40;
    }
    ctx->pc = 0x102B38u;
    {
        const bool branch_taken_0x102b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x102B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B38u;
        // 0x102b3c: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102b38) {
            ctx->pc = 0x102B48u;
            goto label_102b48;
        }
    }
    ctx->pc = 0x102B40u;
label_102b40:
    // 0x102b40: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_102b44:
    if (ctx->pc == 0x102B44u) {
        ctx->pc = 0x102B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B40u;
        // 0x102b44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102B48u;
        goto label_102b48;
    }
    ctx->pc = 0x102B40u;
    {
        const bool branch_taken_0x102b40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x102B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B40u;
        // 0x102b44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102b40) {
            ctx->pc = 0x102B4Cu;
            goto label_102b4c;
        }
    }
    ctx->pc = 0x102B48u;
label_102b48:
    // 0x102b48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x102b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_102b4c:
    // 0x102b4c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_102b50:
    if (ctx->pc == 0x102B50u) {
        ctx->pc = 0x102B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B4Cu;
        // 0x102b50: 0x265000c4  addiu       $s0, $s2, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102B54u;
        goto label_102b54;
    }
    ctx->pc = 0x102B4Cu;
    {
        const bool branch_taken_0x102b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B4Cu;
        // 0x102b50: 0x265000c4  addiu       $s0, $s2, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102b4c) {
            ctx->pc = 0x102B78u;
            goto label_102b78;
        }
    }
    ctx->pc = 0x102B54u;
label_102b54:
    // 0x102b54: 0xc0e409a  jal         func_390268
label_102b58:
    if (ctx->pc == 0x102B58u) {
        ctx->pc = 0x102B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B54u;
        // 0x102b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102B5Cu;
        goto label_102b5c;
    }
    ctx->pc = 0x102B54u;
    SET_GPR_U32(ctx, 31, 0x102B5Cu);
    ctx->pc = 0x102B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B54u;
    // 0x102b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x102B54u, 0x102B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B5Cu;
label_102b5c:
    // 0x102b5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_102b60:
    if (ctx->pc == 0x102B60u) {
        ctx->pc = 0x102B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B5Cu;
        // 0x102b60: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102B64u;
        goto label_102b64;
    }
    ctx->pc = 0x102B5Cu;
    {
        const bool branch_taken_0x102b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B5Cu;
        // 0x102b60: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102b5c) {
            ctx->pc = 0x102B70u;
            goto label_102b70;
        }
    }
    ctx->pc = 0x102B64u;
label_102b64:
    // 0x102b64: 0xc0e409a  jal         func_390268
label_102b68:
    if (ctx->pc == 0x102B68u) {
        ctx->pc = 0x102B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B64u;
        // 0x102b68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102B6Cu;
        goto label_102b6c;
    }
    ctx->pc = 0x102B64u;
    SET_GPR_U32(ctx, 31, 0x102B6Cu);
    ctx->pc = 0x102B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B64u;
    // 0x102b68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x102B64u, 0x102B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B6Cu;
label_102b6c:
    // 0x102b6c: 0x805301b0  lb          $s3, 0x1B0($v0)
    ctx->pc = 0x102b6cu;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_102b70:
    // 0x102b70: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x102b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_102b74:
    // 0x102b74: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x102b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
label_102b78:
    // 0x102b78: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x102b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_102b7c:
    // 0x102b7c: 0x8c62b19c  lw          $v0, -0x4E64($v1)
    ctx->pc = 0x102b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947228)));
label_102b80:
    // 0x102b80: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x102b80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_102b84:
    // 0x102b84: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_102b88:
    if (ctx->pc == 0x102B88u) {
        ctx->pc = 0x102B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B84u;
        // 0x102b88: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102B8Cu;
        goto label_102b8c;
    }
    ctx->pc = 0x102B84u;
    {
        const bool branch_taken_0x102b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B84u;
        // 0x102b88: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102b84) {
            ctx->pc = 0x102BECu;
            goto label_102bec;
        }
    }
    ctx->pc = 0x102B8Cu;
label_102b8c:
    // 0x102b8c: 0x265000c4  addiu       $s0, $s2, 0xC4
    ctx->pc = 0x102b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
label_102b90:
    // 0x102b90: 0xc0e409a  jal         func_390268
label_102b94:
    if (ctx->pc == 0x102B94u) {
        ctx->pc = 0x102B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B90u;
        // 0x102b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102B98u;
        goto label_102b98;
    }
    ctx->pc = 0x102B90u;
    SET_GPR_U32(ctx, 31, 0x102B98u);
    ctx->pc = 0x102B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B90u;
    // 0x102b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x102B90u, 0x102B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B98u;
label_102b98:
    // 0x102b98: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_102b9c:
    if (ctx->pc == 0x102B9Cu) {
        ctx->pc = 0x102B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B98u;
        // 0x102b9c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102BA0u;
        goto label_102ba0;
    }
    ctx->pc = 0x102B98u;
    {
        const bool branch_taken_0x102b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B98u;
        // 0x102b9c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102b98) {
            ctx->pc = 0x102BB4u;
            goto label_102bb4;
        }
    }
    ctx->pc = 0x102BA0u;
label_102ba0:
    // 0x102ba0: 0xc0e409a  jal         func_390268
label_102ba4:
    if (ctx->pc == 0x102BA4u) {
        ctx->pc = 0x102BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BA0u;
        // 0x102ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102BA8u;
        goto label_102ba8;
    }
    ctx->pc = 0x102BA0u;
    SET_GPR_U32(ctx, 31, 0x102BA8u);
    ctx->pc = 0x102BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102BA0u;
    // 0x102ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x102BA0u, 0x102BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102BA8u;
label_102ba8:
    // 0x102ba8: 0x804201b0  lb          $v0, 0x1B0($v0)
    ctx->pc = 0x102ba8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_102bac:
    // 0x102bac: 0x10000002  b           . + 4 + (0x2 << 2)
label_102bb0:
    if (ctx->pc == 0x102BB0u) {
        ctx->pc = 0x102BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BACu;
        // 0x102bb0: 0xafa20068  sw          $v0, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102BB4u;
        goto label_102bb4;
    }
    ctx->pc = 0x102BACu;
    {
        const bool branch_taken_0x102bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BACu;
        // 0x102bb0: 0xafa20068  sw          $v0, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102bac) {
            ctx->pc = 0x102BB8u;
            goto label_102bb8;
        }
    }
    ctx->pc = 0x102BB4u;
label_102bb4:
    // 0x102bb4: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x102bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_102bb8:
    // 0x102bb8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x102bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_102bbc:
    // 0x102bbc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x102bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_102bc0:
    // 0x102bc0: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_102bc4:
    if (ctx->pc == 0x102BC4u) {
        ctx->pc = 0x102BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BC0u;
        // 0x102bc4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102BC8u;
        goto label_102bc8;
    }
    ctx->pc = 0x102BC0u;
    {
        const bool branch_taken_0x102bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x102BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BC0u;
        // 0x102bc4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102bc0) {
            ctx->pc = 0x102BECu;
            goto label_102bec;
        }
    }
    ctx->pc = 0x102BC8u;
label_102bc8:
    // 0x102bc8: 0xc089a76  jal         func_2269D8
label_102bcc:
    if (ctx->pc == 0x102BCCu) {
        ctx->pc = 0x102BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BC8u;
        // 0x102bcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102BD0u;
        goto label_102bd0;
    }
    ctx->pc = 0x102BC8u;
    SET_GPR_U32(ctx, 31, 0x102BD0u);
    ctx->pc = 0x102BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102BC8u;
    // 0x102bcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2269D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269D8u, 0x102BC8u, 0x102BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102BD0u;
label_102bd0:
    // 0x102bd0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_102bd4:
    if (ctx->pc == 0x102BD4u) {
        ctx->pc = 0x102BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BD0u;
        // 0x102bd4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102BD8u;
        goto label_102bd8;
    }
    ctx->pc = 0x102BD0u;
    {
        const bool branch_taken_0x102bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BD0u;
        // 0x102bd4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102bd0) {
            ctx->pc = 0x102BECu;
            goto label_102bec;
        }
    }
    ctx->pc = 0x102BD8u;
label_102bd8:
    // 0x102bd8: 0xc089a76  jal         func_2269D8
label_102bdc:
    if (ctx->pc == 0x102BDCu) {
        ctx->pc = 0x102BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BD8u;
        // 0x102bdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102BE0u;
        goto label_102be0;
    }
    ctx->pc = 0x102BD8u;
    SET_GPR_U32(ctx, 31, 0x102BE0u);
    ctx->pc = 0x102BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102BD8u;
    // 0x102bdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2269D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269D8u, 0x102BD8u, 0x102BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102BE0u;
label_102be0:
    // 0x102be0: 0x804201b0  lb          $v0, 0x1B0($v0)
    ctx->pc = 0x102be0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_102be4:
    // 0x102be4: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x102be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_102be8:
    // 0x102be8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x102be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_102bec:
    // 0x102bec: 0x8c62b1dc  lw          $v0, -0x4E24($v1)
    ctx->pc = 0x102becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947292)));
label_102bf0:
    // 0x102bf0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_102bf4:
    if (ctx->pc == 0x102BF4u) {
        ctx->pc = 0x102BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BF0u;
        // 0x102bf4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102BF8u;
        goto label_102bf8;
    }
    ctx->pc = 0x102BF0u;
    {
        const bool branch_taken_0x102bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BF0u;
        // 0x102bf4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102bf0) {
            ctx->pc = 0x102C20u;
            goto label_102c20;
        }
    }
    ctx->pc = 0x102BF8u;
label_102bf8:
    // 0x102bf8: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x102bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_102bfc:
    // 0x102bfc: 0x2403028e  addiu       $v1, $zero, 0x28E
    ctx->pc = 0x102bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 654));
label_102c00:
    // 0x102c00: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x102c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_102c04:
    // 0x102c04: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_102c08:
    if (ctx->pc == 0x102C08u) {
        ctx->pc = 0x102C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C04u;
        // 0x102c08: 0x24020290  addiu       $v0, $zero, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102C0Cu;
        goto label_102c0c;
    }
    ctx->pc = 0x102C04u;
    {
        const bool branch_taken_0x102c04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x102C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C04u;
        // 0x102c08: 0x24020290  addiu       $v0, $zero, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c04) {
            ctx->pc = 0x102C14u;
            goto label_102c14;
        }
    }
    ctx->pc = 0x102C0Cu;
label_102c0c:
    // 0x102c0c: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
label_102c10:
    if (ctx->pc == 0x102C10u) {
        ctx->pc = 0x102C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C0Cu;
        // 0x102c10: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102C14u;
        goto label_102c14;
    }
    ctx->pc = 0x102C0Cu;
    {
        const bool branch_taken_0x102c0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x102c0c) {
            ctx->pc = 0x102C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102C0Cu;
            // 0x102c10: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102C24u;
            goto label_102c24;
        }
    }
    ctx->pc = 0x102C14u;
label_102c14:
    // 0x102c14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x102c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_102c18:
    // 0x102c18: 0x10000002  b           . + 4 + (0x2 << 2)
label_102c1c:
    if (ctx->pc == 0x102C1Cu) {
        ctx->pc = 0x102C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C18u;
        // 0x102c1c: 0xafa4006c  sw          $a0, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102C20u;
        goto label_102c20;
    }
    ctx->pc = 0x102C18u;
    {
        const bool branch_taken_0x102c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C18u;
        // 0x102c1c: 0xafa4006c  sw          $a0, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c18) {
            ctx->pc = 0x102C24u;
            goto label_102c24;
        }
    }
    ctx->pc = 0x102C20u;
label_102c20:
    // 0x102c20: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x102c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_102c24:
    // 0x102c24: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x102c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_102c28:
    // 0x102c28: 0x8ca2b1dc  lw          $v0, -0x4E24($a1)
    ctx->pc = 0x102c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294947292)));
label_102c2c:
    // 0x102c2c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_102c30:
    if (ctx->pc == 0x102C30u) {
        ctx->pc = 0x102C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C2Cu;
        // 0x102c30: 0x3980b  movn        $s3, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102C34u;
        goto label_102c34;
    }
    ctx->pc = 0x102C2Cu;
    {
        const bool branch_taken_0x102c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C2Cu;
        // 0x102c30: 0x3980b  movn        $s3, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c2c) {
            ctx->pc = 0x102CA4u;
            goto label_102ca4;
        }
    }
    ctx->pc = 0x102C34u;
label_102c34:
    // 0x102c34: 0xc0899e8  jal         func_2267A0
label_102c38:
    if (ctx->pc == 0x102C38u) {
        ctx->pc = 0x102C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C34u;
        // 0x102c38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102C3Cu;
        goto label_102c3c;
    }
    ctx->pc = 0x102C34u;
    SET_GPR_U32(ctx, 31, 0x102C3Cu);
    ctx->pc = 0x102C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102C34u;
    // 0x102c38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x102C34u, 0x102C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102C3Cu;
label_102c3c:
    // 0x102c3c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_102c40:
    if (ctx->pc == 0x102C40u) {
        ctx->pc = 0x102C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C3Cu;
        // 0x102c40: 0x8c4200cc  lw          $v0, 0xCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102C44u;
        goto label_102c44;
    }
    ctx->pc = 0x102C3Cu;
    {
        const bool branch_taken_0x102c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102c3c) {
            ctx->pc = 0x102C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102C3Cu;
            // 0x102c40: 0x8c4200cc  lw          $v0, 0xCC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102C58u;
            goto label_102c58;
        }
    }
    ctx->pc = 0x102C44u;
label_102c44:
    // 0x102c44: 0xc0e409a  jal         func_390268
label_102c48:
    if (ctx->pc == 0x102C48u) {
        ctx->pc = 0x102C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C44u;
        // 0x102c48: 0x264400c4  addiu       $a0, $s2, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102C4Cu;
        goto label_102c4c;
    }
    ctx->pc = 0x102C44u;
    SET_GPR_U32(ctx, 31, 0x102C4Cu);
    ctx->pc = 0x102C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102C44u;
    // 0x102c48: 0x264400c4  addiu       $a0, $s2, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x102C44u, 0x102C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102C4Cu;
label_102c4c:
    // 0x102c4c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_102c50:
    if (ctx->pc == 0x102C50u) {
        ctx->pc = 0x102C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C4Cu;
        // 0x102c50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102C54u;
        goto label_102c54;
    }
    ctx->pc = 0x102C4Cu;
    {
        const bool branch_taken_0x102c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102c4c) {
            ctx->pc = 0x102C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102C4Cu;
            // 0x102c50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102C9Cu;
            goto label_102c9c;
        }
    }
    ctx->pc = 0x102C54u;
label_102c54:
    // 0x102c54: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x102c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_102c58:
    // 0x102c58: 0x2442ff4e  addiu       $v0, $v0, -0xB2
    ctx->pc = 0x102c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967118));
label_102c5c:
    // 0x102c5c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x102c5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_102c60:
    // 0x102c60: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_102c64:
    if (ctx->pc == 0x102C64u) {
        ctx->pc = 0x102C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C60u;
        // 0x102c64: 0x2403028e  addiu       $v1, $zero, 0x28E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 654));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102C68u;
        goto label_102c68;
    }
    ctx->pc = 0x102C60u;
    {
        const bool branch_taken_0x102c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C60u;
        // 0x102c64: 0x2403028e  addiu       $v1, $zero, 0x28E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 654));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c60) {
            ctx->pc = 0x102C98u;
            goto label_102c98;
        }
    }
    ctx->pc = 0x102C68u;
label_102c68:
    // 0x102c68: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x102c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_102c6c:
    // 0x102c6c: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x102c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_102c70:
    // 0x102c70: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_102c74:
    if (ctx->pc == 0x102C74u) {
        ctx->pc = 0x102C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C70u;
        // 0x102c74: 0x24020290  addiu       $v0, $zero, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102C78u;
        goto label_102c78;
    }
    ctx->pc = 0x102C70u;
    {
        const bool branch_taken_0x102c70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x102C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C70u;
        // 0x102c74: 0x24020290  addiu       $v0, $zero, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c70) {
            ctx->pc = 0x102C90u;
            goto label_102c90;
        }
    }
    ctx->pc = 0x102C78u;
label_102c78:
    // 0x102c78: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_102c7c:
    if (ctx->pc == 0x102C7Cu) {
        ctx->pc = 0x102C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C78u;
        // 0x102c7c: 0x24020292  addiu       $v0, $zero, 0x292 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 658));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102C80u;
        goto label_102c80;
    }
    ctx->pc = 0x102C78u;
    {
        const bool branch_taken_0x102c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x102C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C78u;
        // 0x102c7c: 0x24020292  addiu       $v0, $zero, 0x292 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 658));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c78) {
            ctx->pc = 0x102C90u;
            goto label_102c90;
        }
    }
    ctx->pc = 0x102C80u;
label_102c80:
    // 0x102c80: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_102c84:
    if (ctx->pc == 0x102C84u) {
        ctx->pc = 0x102C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C80u;
        // 0x102c84: 0x24020294  addiu       $v0, $zero, 0x294 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 660));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102C88u;
        goto label_102c88;
    }
    ctx->pc = 0x102C80u;
    {
        const bool branch_taken_0x102c80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x102C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C80u;
        // 0x102c84: 0x24020294  addiu       $v0, $zero, 0x294 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 660));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c80) {
            ctx->pc = 0x102C90u;
            goto label_102c90;
        }
    }
    ctx->pc = 0x102C88u;
label_102c88:
    // 0x102c88: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
label_102c8c:
    if (ctx->pc == 0x102C8Cu) {
        ctx->pc = 0x102C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C88u;
        // 0x102c8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102C90u;
        goto label_102c90;
    }
    ctx->pc = 0x102C88u;
    {
        const bool branch_taken_0x102c88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x102C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C88u;
        // 0x102c8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c88) {
            ctx->pc = 0x102C9Cu;
            goto label_102c9c;
        }
    }
    ctx->pc = 0x102C90u;
label_102c90:
    // 0x102c90: 0x10000002  b           . + 4 + (0x2 << 2)
label_102c94:
    if (ctx->pc == 0x102C94u) {
        ctx->pc = 0x102C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C90u;
        // 0x102c94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102C98u;
        goto label_102c98;
    }
    ctx->pc = 0x102C90u;
    {
        const bool branch_taken_0x102c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C90u;
        // 0x102c94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c90) {
            ctx->pc = 0x102C9Cu;
            goto label_102c9c;
        }
    }
    ctx->pc = 0x102C98u;
label_102c98:
    // 0x102c98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x102c98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102c9c:
    // 0x102c9c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x102c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_102ca0:
    // 0x102ca0: 0x82980b  movn        $s3, $a0, $v0
    ctx->pc = 0x102ca0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
label_102ca4:
    // 0x102ca4: 0x6600452  bltz        $s3, . + 4 + (0x452 << 2)
label_102ca8:
    if (ctx->pc == 0x102CA8u) {
        ctx->pc = 0x102CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CA4u;
        // 0x102ca8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102CACu;
        goto label_102cac;
    }
    ctx->pc = 0x102CA4u;
    {
        const bool branch_taken_0x102ca4 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x102CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CA4u;
        // 0x102ca8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ca4) {
            ctx->pc = 0x103DF0u;
            goto label_103df0;
        }
    }
    ctx->pc = 0x102CACu;
label_102cac:
    // 0x102cac: 0xc047e6c  jal         func_11F9B0
label_102cb0:
    if (ctx->pc == 0x102CB0u) {
        ctx->pc = 0x102CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CACu;
        // 0x102cb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102CB4u;
        goto label_102cb4;
    }
    ctx->pc = 0x102CACu;
    SET_GPR_U32(ctx, 31, 0x102CB4u);
    ctx->pc = 0x102CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102CACu;
    // 0x102cb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x102CACu, 0x102CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102CB4u;
label_102cb4:
    // 0x102cb4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_102cb8:
    if (ctx->pc == 0x102CB8u) {
        ctx->pc = 0x102CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CB4u;
        // 0x102cb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102CBCu;
        goto label_102cbc;
    }
    ctx->pc = 0x102CB4u;
    {
        const bool branch_taken_0x102cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CB4u;
        // 0x102cb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102cb4) {
            ctx->pc = 0x102CE0u;
            goto label_102ce0;
        }
    }
    ctx->pc = 0x102CBCu;
label_102cbc:
    // 0x102cbc: 0xc047e6c  jal         func_11F9B0
label_102cc0:
    if (ctx->pc == 0x102CC0u) {
        ctx->pc = 0x102CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CBCu;
        // 0x102cc0: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102CC4u;
        goto label_102cc4;
    }
    ctx->pc = 0x102CBCu;
    SET_GPR_U32(ctx, 31, 0x102CC4u);
    ctx->pc = 0x102CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102CBCu;
    // 0x102cc0: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x102CBCu, 0x102CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102CC4u;
label_102cc4:
    // 0x102cc4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x102cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_102cc8:
    // 0x102cc8: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x102cc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_102ccc:
    // 0x102ccc: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x102cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_102cd0:
    // 0x102cd0: 0xa0f809  jalr        $a1
label_102cd4:
    if (ctx->pc == 0x102CD4u) {
        ctx->pc = 0x102CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CD0u;
        // 0x102cd4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102CD8u;
        goto label_102cd8;
    }
    ctx->pc = 0x102CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x102CD8u);
        ctx->pc = 0x102CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CD0u;
        // 0x102cd4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102CD0u, 0x102CD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102CD8u;
label_102cd8:
    // 0x102cd8: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x102cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_102cdc:
    // 0x102cdc: 0x2b00b  movn        $s6, $zero, $v0
    ctx->pc = 0x102cdcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_102ce0:
    // 0x102ce0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x102ce0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102ce4:
    // 0x102ce4: 0xc047e6c  jal         func_11F9B0
label_102ce8:
    if (ctx->pc == 0x102CE8u) {
        ctx->pc = 0x102CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CE4u;
        // 0x102ce8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102CECu;
        goto label_102cec;
    }
    ctx->pc = 0x102CE4u;
    SET_GPR_U32(ctx, 31, 0x102CECu);
    ctx->pc = 0x102CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102CE4u;
    // 0x102ce8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x102CE4u, 0x102CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102CECu;
label_102cec:
    // 0x102cec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_102cf0:
    if (ctx->pc == 0x102CF0u) {
        ctx->pc = 0x102CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CECu;
        // 0x102cf0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102CF4u;
        goto label_102cf4;
    }
    ctx->pc = 0x102CECu;
    {
        const bool branch_taken_0x102cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CECu;
        // 0x102cf0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102cec) {
            ctx->pc = 0x102D18u;
            goto label_102d18;
        }
    }
    ctx->pc = 0x102CF4u;
label_102cf4:
    // 0x102cf4: 0xc047e6c  jal         func_11F9B0
label_102cf8:
    if (ctx->pc == 0x102CF8u) {
        ctx->pc = 0x102CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CF4u;
        // 0x102cf8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102CFCu;
        goto label_102cfc;
    }
    ctx->pc = 0x102CF4u;
    SET_GPR_U32(ctx, 31, 0x102CFCu);
    ctx->pc = 0x102CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102CF4u;
    // 0x102cf8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x102CF4u, 0x102CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102CFCu;
label_102cfc:
    // 0x102cfc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x102cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_102d00:
    // 0x102d00: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x102d00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_102d04:
    // 0x102d04: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x102d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_102d08:
    // 0x102d08: 0xa0f809  jalr        $a1
label_102d0c:
    if (ctx->pc == 0x102D0Cu) {
        ctx->pc = 0x102D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D08u;
        // 0x102d0c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102D10u;
        goto label_102d10;
    }
    ctx->pc = 0x102D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x102D10u);
        ctx->pc = 0x102D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D08u;
        // 0x102d0c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102D08u, 0x102D10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102D10u;
label_102d10:
    // 0x102d10: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x102d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
label_102d14:
    // 0x102d14: 0x2a80b  movn        $s5, $zero, $v0
    ctx->pc = 0x102d14u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_102d18:
    // 0x102d18: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x102d18u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102d1c:
    // 0x102d1c: 0xc047e6c  jal         func_11F9B0
label_102d20:
    if (ctx->pc == 0x102D20u) {
        ctx->pc = 0x102D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D1Cu;
        // 0x102d20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102D24u;
        goto label_102d24;
    }
    ctx->pc = 0x102D1Cu;
    SET_GPR_U32(ctx, 31, 0x102D24u);
    ctx->pc = 0x102D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102D1Cu;
    // 0x102d20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x102D1Cu, 0x102D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102D24u;
label_102d24:
    // 0x102d24: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_102d28:
    if (ctx->pc == 0x102D28u) {
        ctx->pc = 0x102D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D24u;
        // 0x102d28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102D2Cu;
        goto label_102d2c;
    }
    ctx->pc = 0x102D24u;
    {
        const bool branch_taken_0x102d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D24u;
        // 0x102d28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102d24) {
            ctx->pc = 0x102D4Cu;
            goto label_102d4c;
        }
    }
    ctx->pc = 0x102D2Cu;
label_102d2c:
    // 0x102d2c: 0xc047e6c  jal         func_11F9B0
label_102d30:
    if (ctx->pc == 0x102D30u) {
        ctx->pc = 0x102D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D2Cu;
        // 0x102d30: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102D34u;
        goto label_102d34;
    }
    ctx->pc = 0x102D2Cu;
    SET_GPR_U32(ctx, 31, 0x102D34u);
    ctx->pc = 0x102D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102D2Cu;
    // 0x102d30: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x102D2Cu, 0x102D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102D34u;
label_102d34:
    // 0x102d34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x102d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_102d38:
    // 0x102d38: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x102d38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_102d3c:
    // 0x102d3c: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x102d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_102d40:
    // 0x102d40: 0xa0f809  jalr        $a1
label_102d44:
    if (ctx->pc == 0x102D44u) {
        ctx->pc = 0x102D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D40u;
        // 0x102d44: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102D48u;
        goto label_102d48;
    }
    ctx->pc = 0x102D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x102D48u);
        ctx->pc = 0x102D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D40u;
        // 0x102d44: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102D40u, 0x102D48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102D48u;
label_102d48:
    // 0x102d48: 0x2f00b  movn        $fp, $zero, $v0
    ctx->pc = 0x102d48u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 0));
label_102d4c:
    // 0x102d4c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x102d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102d50:
    // 0x102d50: 0xc047e6c  jal         func_11F9B0
label_102d54:
    if (ctx->pc == 0x102D54u) {
        ctx->pc = 0x102D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D50u;
        // 0x102d54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102D58u;
        goto label_102d58;
    }
    ctx->pc = 0x102D50u;
    SET_GPR_U32(ctx, 31, 0x102D58u);
    ctx->pc = 0x102D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102D50u;
    // 0x102d54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x102D50u, 0x102D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102D58u;
label_102d58:
    // 0x102d58: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_102d5c:
    if (ctx->pc == 0x102D5Cu) {
        ctx->pc = 0x102D60u;
        goto label_102d60;
    }
    ctx->pc = 0x102D58u;
    {
        const bool branch_taken_0x102d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102d58) {
            ctx->pc = 0x102D88u;
            goto label_102d88;
        }
    }
    ctx->pc = 0x102D60u;
label_102d60:
    // 0x102d60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x102d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102d64:
    // 0x102d64: 0xc047e6c  jal         func_11F9B0
label_102d68:
    if (ctx->pc == 0x102D68u) {
        ctx->pc = 0x102D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D64u;
        // 0x102d68: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102D6Cu;
        goto label_102d6c;
    }
    ctx->pc = 0x102D64u;
    SET_GPR_U32(ctx, 31, 0x102D6Cu);
    ctx->pc = 0x102D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102D64u;
    // 0x102d68: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x102D64u, 0x102D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102D6Cu;
label_102d6c:
    // 0x102d6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x102d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_102d70:
    // 0x102d70: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x102d70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_102d74:
    // 0x102d74: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x102d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_102d78:
    // 0x102d78: 0xa0f809  jalr        $a1
label_102d7c:
    if (ctx->pc == 0x102D7Cu) {
        ctx->pc = 0x102D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D78u;
        // 0x102d7c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102D80u;
        goto label_102d80;
    }
    ctx->pc = 0x102D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x102D80u);
        ctx->pc = 0x102D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D78u;
        // 0x102d7c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102D78u, 0x102D80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102D80u;
label_102d80:
    // 0x102d80: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x102d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_102d84:
    // 0x102d84: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x102d84u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_102d88:
    // 0x102d88: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
label_102d8c:
    if (ctx->pc == 0x102D8Cu) {
        ctx->pc = 0x102D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D88u;
        // 0x102d8c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102D90u;
        goto label_102d90;
    }
    ctx->pc = 0x102D88u;
    {
        const bool branch_taken_0x102d88 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x102D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D88u;
        // 0x102d8c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102d88) {
            ctx->pc = 0x102DA8u;
            goto label_102da8;
        }
    }
    ctx->pc = 0x102D90u;
label_102d90:
    // 0x102d90: 0xc047e6c  jal         func_11F9B0
label_102d94:
    if (ctx->pc == 0x102D94u) {
        ctx->pc = 0x102D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D90u;
        // 0x102d94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102D98u;
        goto label_102d98;
    }
    ctx->pc = 0x102D90u;
    SET_GPR_U32(ctx, 31, 0x102D98u);
    ctx->pc = 0x102D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102D90u;
    // 0x102d94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x102D90u, 0x102D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102D98u;
label_102d98:
    // 0x102d98: 0x904303ed  lbu         $v1, 0x3ED($v0)
    ctx->pc = 0x102d98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1005)));
label_102d9c:
    // 0x102d9c: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x102d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
label_102da0:
    // 0x102da0: 0x3a82b  sltu        $s5, $zero, $v1
    ctx->pc = 0x102da0u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_102da4:
    // 0x102da4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x102da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_102da8:
    // 0x102da8: 0x8c43b1d4  lw          $v1, -0x4E2C($v0)
    ctx->pc = 0x102da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947284)));
label_102dac:
    // 0x102dac: 0x50600411  beql        $v1, $zero, . + 4 + (0x411 << 2)
label_102db0:
    if (ctx->pc == 0x102DB0u) {
        ctx->pc = 0x102DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102DACu;
        // 0x102db0: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102DB4u;
        goto label_102db4;
    }
    ctx->pc = 0x102DACu;
    {
        const bool branch_taken_0x102dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x102dac) {
            ctx->pc = 0x102DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102DACu;
            // 0x102db0: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x102DB4u;
label_102db4:
    // 0x102db4: 0x16a00007  bnez        $s5, . + 4 + (0x7 << 2)
label_102db8:
    if (ctx->pc == 0x102DB8u) {
        ctx->pc = 0x102DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102DB4u;
        // 0x102db8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102DBCu;
        goto label_102dbc;
    }
    ctx->pc = 0x102DB4u;
    {
        const bool branch_taken_0x102db4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x102DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102DB4u;
        // 0x102db8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102db4) {
            ctx->pc = 0x102DD4u;
            goto label_102dd4;
        }
    }
    ctx->pc = 0x102DBCu;
label_102dbc:
    // 0x102dbc: 0x16c00005  bnez        $s6, . + 4 + (0x5 << 2)
label_102dc0:
    if (ctx->pc == 0x102DC0u) {
        ctx->pc = 0x102DC4u;
        goto label_102dc4;
    }
    ctx->pc = 0x102DBCu;
    {
        const bool branch_taken_0x102dbc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x102dbc) {
            ctx->pc = 0x102DD4u;
            goto label_102dd4;
        }
    }
    ctx->pc = 0x102DC4u;
label_102dc4:
    // 0x102dc4: 0x17c00004  bnez        $fp, . + 4 + (0x4 << 2)
label_102dc8:
    if (ctx->pc == 0x102DC8u) {
        ctx->pc = 0x102DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102DC4u;
        // 0x102dc8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102DCCu;
        goto label_102dcc;
    }
    ctx->pc = 0x102DC4u;
    {
        const bool branch_taken_0x102dc4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x102DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102DC4u;
        // 0x102dc8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102dc4) {
            ctx->pc = 0x102DD8u;
            goto label_102dd8;
        }
    }
    ctx->pc = 0x102DCCu;
label_102dcc:
    // 0x102dcc: 0x52000409  beql        $s0, $zero, . + 4 + (0x409 << 2)
label_102dd0:
    if (ctx->pc == 0x102DD0u) {
        ctx->pc = 0x102DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102DCCu;
        // 0x102dd0: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102DD4u;
        goto label_102dd4;
    }
    ctx->pc = 0x102DCCu;
    {
        const bool branch_taken_0x102dcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x102dcc) {
            ctx->pc = 0x102DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102DCCu;
            // 0x102dd0: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x102DD4u;
label_102dd4:
    // 0x102dd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x102dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_102dd8:
    // 0x102dd8: 0x8c62b19c  lw          $v0, -0x4E64($v1)
    ctx->pc = 0x102dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947228)));
label_102ddc:
    // 0x102ddc: 0x1044000c  beq         $v0, $a0, . + 4 + (0xC << 2)
label_102de0:
    if (ctx->pc == 0x102DE0u) {
        ctx->pc = 0x102DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102DDCu;
        // 0x102de0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102DE4u;
        goto label_102de4;
    }
    ctx->pc = 0x102DDCu;
    {
        const bool branch_taken_0x102ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x102DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102DDCu;
        // 0x102de0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ddc) {
            ctx->pc = 0x102E10u;
            goto label_102e10;
        }
    }
    ctx->pc = 0x102DE4u;
label_102de4:
    // 0x102de4: 0x8c43b198  lw          $v1, -0x4E68($v0)
    ctx->pc = 0x102de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947224)));
label_102de8:
    // 0x102de8: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
label_102dec:
    if (ctx->pc == 0x102DECu) {
        ctx->pc = 0x102DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102DE8u;
        // 0x102dec: 0x8fa2006c  lw          $v0, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102DF0u;
        goto label_102df0;
    }
    ctx->pc = 0x102DE8u;
    {
        const bool branch_taken_0x102de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x102DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102DE8u;
        // 0x102dec: 0x8fa2006c  lw          $v0, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102de8) {
            ctx->pc = 0x102E08u;
            goto label_102e08;
        }
    }
    ctx->pc = 0x102DF0u;
label_102df0:
    // 0x102df0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x102df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_102df4:
    // 0x102df4: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_102df8:
    if (ctx->pc == 0x102DF8u) {
        ctx->pc = 0x102DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102DF4u;
        // 0x102df8: 0x8fa40068  lw          $a0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102DFCu;
        goto label_102dfc;
    }
    ctx->pc = 0x102DF4u;
    {
        const bool branch_taken_0x102df4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x102DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102DF4u;
        // 0x102df8: 0x8fa40068  lw          $a0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102df4) {
            ctx->pc = 0x102E04u;
            goto label_102e04;
        }
    }
    ctx->pc = 0x102DFCu;
label_102dfc:
    // 0x102dfc: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_102e00:
    if (ctx->pc == 0x102E00u) {
        ctx->pc = 0x102E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102DFCu;
        // 0x102e00: 0x8fa3006c  lw          $v1, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102E04u;
        goto label_102e04;
    }
    ctx->pc = 0x102DFCu;
    {
        const bool branch_taken_0x102dfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x102E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102DFCu;
        // 0x102e00: 0x8fa3006c  lw          $v1, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102dfc) {
            ctx->pc = 0x102E14u;
            goto label_102e14;
        }
    }
    ctx->pc = 0x102E04u;
label_102e04:
    // 0x102e04: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x102e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_102e08:
    // 0x102e08: 0x504003fa  beql        $v0, $zero, . + 4 + (0x3FA << 2)
label_102e0c:
    if (ctx->pc == 0x102E0Cu) {
        ctx->pc = 0x102E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E08u;
        // 0x102e0c: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102E10u;
        goto label_102e10;
    }
    ctx->pc = 0x102E08u;
    {
        const bool branch_taken_0x102e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102e08) {
            ctx->pc = 0x102E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102E08u;
            // 0x102e0c: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x102E10u;
label_102e10:
    // 0x102e10: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x102e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_102e14:
    // 0x102e14: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_102e18:
    if (ctx->pc == 0x102E18u) {
        ctx->pc = 0x102E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E14u;
        // 0x102e18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102E1Cu;
        goto label_102e1c;
    }
    ctx->pc = 0x102E14u;
    {
        const bool branch_taken_0x102e14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x102E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E14u;
        // 0x102e18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102e14) {
            ctx->pc = 0x102E24u;
            goto label_102e24;
        }
    }
    ctx->pc = 0x102E1Cu;
label_102e1c:
    // 0x102e1c: 0x10000016  b           . + 4 + (0x16 << 2)
label_102e20:
    if (ctx->pc == 0x102E20u) {
        ctx->pc = 0x102E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E1Cu;
        // 0x102e20: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102E24u;
        goto label_102e24;
    }
    ctx->pc = 0x102E1Cu;
    {
        const bool branch_taken_0x102e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E1Cu;
        // 0x102e20: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102e1c) {
            ctx->pc = 0x102E78u;
            goto label_102e78;
        }
    }
    ctx->pc = 0x102E24u;
label_102e24:
    // 0x102e24: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x102e24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_102e28:
    // 0x102e28: 0x8c82b19c  lw          $v0, -0x4E64($a0)
    ctx->pc = 0x102e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947228)));
label_102e2c:
    // 0x102e2c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x102e2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_102e30:
    // 0x102e30: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_102e34:
    if (ctx->pc == 0x102E34u) {
        ctx->pc = 0x102E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E30u;
        // 0x102e34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102E38u;
        goto label_102e38;
    }
    ctx->pc = 0x102E30u;
    {
        const bool branch_taken_0x102e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102e30) {
            ctx->pc = 0x102E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102E30u;
            // 0x102e34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102E7Cu;
            goto label_102e7c;
        }
    }
    ctx->pc = 0x102E38u;
label_102e38:
    // 0x102e38: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x102e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_102e3c:
    // 0x102e3c: 0x8c43b198  lw          $v1, -0x4E68($v0)
    ctx->pc = 0x102e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947224)));
label_102e40:
    // 0x102e40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x102e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_102e44:
    // 0x102e44: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
label_102e48:
    if (ctx->pc == 0x102E48u) {
        ctx->pc = 0x102E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E44u;
        // 0x102e48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102E4Cu;
        goto label_102e4c;
    }
    ctx->pc = 0x102E44u;
    {
        const bool branch_taken_0x102e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x102e44) {
            ctx->pc = 0x102E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102E44u;
            // 0x102e48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102E7Cu;
            goto label_102e7c;
        }
    }
    ctx->pc = 0x102E4Cu;
label_102e4c:
    // 0x102e4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x102e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_102e50:
    // 0x102e50: 0x12620009  beq         $s3, $v0, . + 4 + (0x9 << 2)
label_102e54:
    if (ctx->pc == 0x102E54u) {
        ctx->pc = 0x102E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E50u;
        // 0x102e54: 0x8fa30068  lw          $v1, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102E58u;
        goto label_102e58;
    }
    ctx->pc = 0x102E50u;
    {
        const bool branch_taken_0x102e50 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x102E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E50u;
        // 0x102e54: 0x8fa30068  lw          $v1, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102e50) {
            ctx->pc = 0x102E78u;
            goto label_102e78;
        }
    }
    ctx->pc = 0x102E58u;
label_102e58:
    // 0x102e58: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_102e5c:
    if (ctx->pc == 0x102E5Cu) {
        ctx->pc = 0x102E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E58u;
        // 0x102e5c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102E60u;
        goto label_102e60;
    }
    ctx->pc = 0x102E58u;
    {
        const bool branch_taken_0x102e58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x102E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E58u;
        // 0x102e5c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102e58) {
            ctx->pc = 0x102E78u;
            goto label_102e78;
        }
    }
    ctx->pc = 0x102E60u;
label_102e60:
    // 0x102e60: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x102e60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_102e64:
    // 0x102e64: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x102e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_102e68:
    // 0x102e68: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x102e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
label_102e6c:
    // 0x102e6c: 0xc0e409a  jal         func_390268
label_102e70:
    if (ctx->pc == 0x102E70u) {
        ctx->pc = 0x102E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E6Cu;
        // 0x102e70: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102E74u;
        goto label_102e74;
    }
    ctx->pc = 0x102E6Cu;
    SET_GPR_U32(ctx, 31, 0x102E74u);
    ctx->pc = 0x102E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102E6Cu;
    // 0x102e70: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x102E6Cu, 0x102E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102E74u;
label_102e74:
    // 0x102e74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x102e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_102e78:
    // 0x102e78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x102e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102e7c:
    // 0x102e7c: 0xc047f26  jal         func_11FC98
label_102e80:
    if (ctx->pc == 0x102E80u) {
        ctx->pc = 0x102E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E7Cu;
        // 0x102e80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102E84u;
        goto label_102e84;
    }
    ctx->pc = 0x102E7Cu;
    SET_GPR_U32(ctx, 31, 0x102E84u);
    ctx->pc = 0x102E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102E7Cu;
    // 0x102e80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FC98u, 0x102E7Cu, 0x102E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102E84u;
label_102e84:
    // 0x102e84: 0x104003da  beqz        $v0, . + 4 + (0x3DA << 2)
label_102e88:
    if (ctx->pc == 0x102E88u) {
        ctx->pc = 0x102E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E84u;
        // 0x102e88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102E8Cu;
        goto label_102e8c;
    }
    ctx->pc = 0x102E84u;
    {
        const bool branch_taken_0x102e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E84u;
        // 0x102e88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102e84) {
            ctx->pc = 0x103DF0u;
            goto label_103df0;
        }
    }
    ctx->pc = 0x102E8Cu;
label_102e8c:
    // 0x102e8c: 0x86250006  lh          $a1, 0x6($s1)
    ctx->pc = 0x102e8cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_102e90:
    // 0x102e90: 0xc04e85c  jal         func_13A170
label_102e94:
    if (ctx->pc == 0x102E94u) {
        ctx->pc = 0x102E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E90u;
        // 0x102e94: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102E98u;
        goto label_102e98;
    }
    ctx->pc = 0x102E90u;
    SET_GPR_U32(ctx, 31, 0x102E98u);
    ctx->pc = 0x102E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102E90u;
    // 0x102e94: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A170u, 0x102E90u, 0x102E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102E98u;
label_102e98:
    // 0x102e98: 0x100003d6  b           . + 4 + (0x3D6 << 2)
label_102e9c:
    if (ctx->pc == 0x102E9Cu) {
        ctx->pc = 0x102E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E98u;
        // 0x102e9c: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102EA0u;
        goto label_102ea0;
    }
    ctx->pc = 0x102E98u;
    {
        const bool branch_taken_0x102e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E98u;
        // 0x102e9c: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102e98) {
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x102EA0u;
label_102ea0:
    // 0x102ea0: 0x14620046  bne         $v1, $v0, . + 4 + (0x46 << 2)
label_102ea4:
    if (ctx->pc == 0x102EA4u) {
        ctx->pc = 0x102EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102EA0u;
        // 0x102ea4: 0x2402003b  addiu       $v0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102EA8u;
        goto label_102ea8;
    }
    ctx->pc = 0x102EA0u;
    {
        const bool branch_taken_0x102ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x102EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102EA0u;
        // 0x102ea4: 0x2402003b  addiu       $v0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ea0) {
            ctx->pc = 0x102FBCu;
            goto label_102fbc;
        }
    }
    ctx->pc = 0x102EA8u;
label_102ea8:
    // 0x102ea8: 0x824501b0  lb          $a1, 0x1B0($s2)
    ctx->pc = 0x102ea8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_102eac:
    // 0x102eac: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x102eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_102eb0:
    // 0x102eb0: 0x14a40026  bne         $a1, $a0, . + 4 + (0x26 << 2)
label_102eb4:
    if (ctx->pc == 0x102EB4u) {
        ctx->pc = 0x102EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102EB0u;
        // 0x102eb4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102EB8u;
        goto label_102eb8;
    }
    ctx->pc = 0x102EB0u;
    {
        const bool branch_taken_0x102eb0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x102EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102EB0u;
        // 0x102eb4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102eb0) {
            ctx->pc = 0x102F4Cu;
            goto label_102f4c;
        }
    }
    ctx->pc = 0x102EB8u;
label_102eb8:
    // 0x102eb8: 0x8e4300cc  lw          $v1, 0xCC($s2)
    ctx->pc = 0x102eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_102ebc:
    // 0x102ebc: 0x2462ff89  addiu       $v0, $v1, -0x77
    ctx->pc = 0x102ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967177));
label_102ec0:
    // 0x102ec0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x102ec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_102ec4:
    // 0x102ec4: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_102ec8:
    if (ctx->pc == 0x102EC8u) {
        ctx->pc = 0x102EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102EC4u;
        // 0x102ec8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102ECCu;
        goto label_102ecc;
    }
    ctx->pc = 0x102EC4u;
    {
        const bool branch_taken_0x102ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102EC4u;
        // 0x102ec8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ec4) {
            ctx->pc = 0x102F24u;
            goto label_102f24;
        }
    }
    ctx->pc = 0x102ECCu;
label_102ecc:
    // 0x102ecc: 0x240200ed  addiu       $v0, $zero, 0xED
    ctx->pc = 0x102eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
label_102ed0:
    // 0x102ed0: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_102ed4:
    if (ctx->pc == 0x102ED4u) {
        ctx->pc = 0x102ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102ED0u;
        // 0x102ed4: 0x2404006a  addiu       $a0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102ED8u;
        goto label_102ed8;
    }
    ctx->pc = 0x102ED0u;
    {
        const bool branch_taken_0x102ed0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x102ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102ED0u;
        // 0x102ed4: 0x2404006a  addiu       $a0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ed0) {
            ctx->pc = 0x102F20u;
            goto label_102f20;
        }
    }
    ctx->pc = 0x102ED8u;
label_102ed8:
    // 0x102ed8: 0x10640011  beq         $v1, $a0, . + 4 + (0x11 << 2)
label_102edc:
    if (ctx->pc == 0x102EDCu) {
        ctx->pc = 0x102EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102ED8u;
        // 0x102edc: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102EE0u;
        goto label_102ee0;
    }
    ctx->pc = 0x102ED8u;
    {
        const bool branch_taken_0x102ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x102EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102ED8u;
        // 0x102edc: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ed8) {
            ctx->pc = 0x102F20u;
            goto label_102f20;
        }
    }
    ctx->pc = 0x102EE0u;
label_102ee0:
    // 0x102ee0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_102ee4:
    if (ctx->pc == 0x102EE4u) {
        ctx->pc = 0x102EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102EE0u;
        // 0x102ee4: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102EE8u;
        goto label_102ee8;
    }
    ctx->pc = 0x102EE0u;
    {
        const bool branch_taken_0x102ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x102EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102EE0u;
        // 0x102ee4: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ee0) {
            ctx->pc = 0x102F20u;
            goto label_102f20;
        }
    }
    ctx->pc = 0x102EE8u;
label_102ee8:
    // 0x102ee8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_102eec:
    if (ctx->pc == 0x102EECu) {
        ctx->pc = 0x102EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102EE8u;
        // 0x102eec: 0x240200a1  addiu       $v0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102EF0u;
        goto label_102ef0;
    }
    ctx->pc = 0x102EE8u;
    {
        const bool branch_taken_0x102ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x102EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102EE8u;
        // 0x102eec: 0x240200a1  addiu       $v0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ee8) {
            ctx->pc = 0x102F20u;
            goto label_102f20;
        }
    }
    ctx->pc = 0x102EF0u;
label_102ef0:
    // 0x102ef0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_102ef4:
    if (ctx->pc == 0x102EF4u) {
        ctx->pc = 0x102EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102EF0u;
        // 0x102ef4: 0x240200b2  addiu       $v0, $zero, 0xB2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102EF8u;
        goto label_102ef8;
    }
    ctx->pc = 0x102EF0u;
    {
        const bool branch_taken_0x102ef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x102EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102EF0u;
        // 0x102ef4: 0x240200b2  addiu       $v0, $zero, 0xB2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ef0) {
            ctx->pc = 0x102F20u;
            goto label_102f20;
        }
    }
    ctx->pc = 0x102EF8u;
label_102ef8:
    // 0x102ef8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_102efc:
    if (ctx->pc == 0x102EFCu) {
        ctx->pc = 0x102EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102EF8u;
        // 0x102efc: 0x240200b3  addiu       $v0, $zero, 0xB3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102F00u;
        goto label_102f00;
    }
    ctx->pc = 0x102EF8u;
    {
        const bool branch_taken_0x102ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x102EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102EF8u;
        // 0x102efc: 0x240200b3  addiu       $v0, $zero, 0xB3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ef8) {
            ctx->pc = 0x102F20u;
            goto label_102f20;
        }
    }
    ctx->pc = 0x102F00u;
label_102f00:
    // 0x102f00: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_102f04:
    if (ctx->pc == 0x102F04u) {
        ctx->pc = 0x102F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F00u;
        // 0x102f04: 0x2402004d  addiu       $v0, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102F08u;
        goto label_102f08;
    }
    ctx->pc = 0x102F00u;
    {
        const bool branch_taken_0x102f00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x102F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F00u;
        // 0x102f04: 0x2402004d  addiu       $v0, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f00) {
            ctx->pc = 0x102F20u;
            goto label_102f20;
        }
    }
    ctx->pc = 0x102F08u;
label_102f08:
    // 0x102f08: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_102f0c:
    if (ctx->pc == 0x102F0Cu) {
        ctx->pc = 0x102F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F08u;
        // 0x102f0c: 0x2402004e  addiu       $v0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102F10u;
        goto label_102f10;
    }
    ctx->pc = 0x102F08u;
    {
        const bool branch_taken_0x102f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x102F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F08u;
        // 0x102f0c: 0x2402004e  addiu       $v0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f08) {
            ctx->pc = 0x102F20u;
            goto label_102f20;
        }
    }
    ctx->pc = 0x102F10u;
label_102f10:
    // 0x102f10: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_102f14:
    if (ctx->pc == 0x102F14u) {
        ctx->pc = 0x102F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F10u;
        // 0x102f14: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102F18u;
        goto label_102f18;
    }
    ctx->pc = 0x102F10u;
    {
        const bool branch_taken_0x102f10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x102F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F10u;
        // 0x102f14: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f10) {
            ctx->pc = 0x102F20u;
            goto label_102f20;
        }
    }
    ctx->pc = 0x102F18u;
label_102f18:
    // 0x102f18: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_102f1c:
    if (ctx->pc == 0x102F1Cu) {
        ctx->pc = 0x102F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F18u;
        // 0x102f1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102F20u;
        goto label_102f20;
    }
    ctx->pc = 0x102F18u;
    {
        const bool branch_taken_0x102f18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x102F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F18u;
        // 0x102f1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f18) {
            ctx->pc = 0x102F24u;
            goto label_102f24;
        }
    }
    ctx->pc = 0x102F20u;
label_102f20:
    // 0x102f20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x102f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_102f24:
    // 0x102f24: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_102f28:
    if (ctx->pc == 0x102F28u) {
        ctx->pc = 0x102F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F24u;
        // 0x102f28: 0x265000c4  addiu       $s0, $s2, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102F2Cu;
        goto label_102f2c;
    }
    ctx->pc = 0x102F24u;
    {
        const bool branch_taken_0x102f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F24u;
        // 0x102f28: 0x265000c4  addiu       $s0, $s2, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f24) {
            ctx->pc = 0x102F48u;
            goto label_102f48;
        }
    }
    ctx->pc = 0x102F2Cu;
label_102f2c:
    // 0x102f2c: 0xc0e409a  jal         func_390268
label_102f30:
    if (ctx->pc == 0x102F30u) {
        ctx->pc = 0x102F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F2Cu;
        // 0x102f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102F34u;
        goto label_102f34;
    }
    ctx->pc = 0x102F2Cu;
    SET_GPR_U32(ctx, 31, 0x102F34u);
    ctx->pc = 0x102F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102F2Cu;
    // 0x102f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x102F2Cu, 0x102F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102F34u;
label_102f34:
    // 0x102f34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_102f38:
    if (ctx->pc == 0x102F38u) {
        ctx->pc = 0x102F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F34u;
        // 0x102f38: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102F3Cu;
        goto label_102f3c;
    }
    ctx->pc = 0x102F34u;
    {
        const bool branch_taken_0x102f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F34u;
        // 0x102f38: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f34) {
            ctx->pc = 0x102F48u;
            goto label_102f48;
        }
    }
    ctx->pc = 0x102F3Cu;
label_102f3c:
    // 0x102f3c: 0xc0e409a  jal         func_390268
label_102f40:
    if (ctx->pc == 0x102F40u) {
        ctx->pc = 0x102F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F3Cu;
        // 0x102f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102F44u;
        goto label_102f44;
    }
    ctx->pc = 0x102F3Cu;
    SET_GPR_U32(ctx, 31, 0x102F44u);
    ctx->pc = 0x102F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102F3Cu;
    // 0x102f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x102F3Cu, 0x102F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102F44u;
label_102f44:
    // 0x102f44: 0x804501b0  lb          $a1, 0x1B0($v0)
    ctx->pc = 0x102f44u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_102f48:
    // 0x102f48: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x102f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_102f4c:
    // 0x102f4c: 0x8c43b1dc  lw          $v1, -0x4E24($v0)
    ctx->pc = 0x102f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947292)));
label_102f50:
    // 0x102f50: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_102f54:
    if (ctx->pc == 0x102F54u) {
        ctx->pc = 0x102F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F50u;
        // 0x102f54: 0x2403028e  addiu       $v1, $zero, 0x28E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 654));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102F58u;
        goto label_102f58;
    }
    ctx->pc = 0x102F50u;
    {
        const bool branch_taken_0x102f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x102F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F50u;
        // 0x102f54: 0x2403028e  addiu       $v1, $zero, 0x28E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 654));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f50) {
            ctx->pc = 0x102F78u;
            goto label_102f78;
        }
    }
    ctx->pc = 0x102F58u;
label_102f58:
    // 0x102f58: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x102f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_102f5c:
    // 0x102f5c: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x102f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_102f60:
    // 0x102f60: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_102f64:
    if (ctx->pc == 0x102F64u) {
        ctx->pc = 0x102F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F60u;
        // 0x102f64: 0x24020290  addiu       $v0, $zero, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102F68u;
        goto label_102f68;
    }
    ctx->pc = 0x102F60u;
    {
        const bool branch_taken_0x102f60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x102F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F60u;
        // 0x102f64: 0x24020290  addiu       $v0, $zero, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f60) {
            ctx->pc = 0x102F70u;
            goto label_102f70;
        }
    }
    ctx->pc = 0x102F68u;
label_102f68:
    // 0x102f68: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
label_102f6c:
    if (ctx->pc == 0x102F6Cu) {
        ctx->pc = 0x102F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F68u;
        // 0x102f6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102F70u;
        goto label_102f70;
    }
    ctx->pc = 0x102F68u;
    {
        const bool branch_taken_0x102f68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x102F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F68u;
        // 0x102f6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f68) {
            ctx->pc = 0x102F7Cu;
            goto label_102f7c;
        }
    }
    ctx->pc = 0x102F70u;
label_102f70:
    // 0x102f70: 0x10000002  b           . + 4 + (0x2 << 2)
label_102f74:
    if (ctx->pc == 0x102F74u) {
        ctx->pc = 0x102F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F70u;
        // 0x102f74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102F78u;
        goto label_102f78;
    }
    ctx->pc = 0x102F70u;
    {
        const bool branch_taken_0x102f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F70u;
        // 0x102f74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f70) {
            ctx->pc = 0x102F7Cu;
            goto label_102f7c;
        }
    }
    ctx->pc = 0x102F78u;
label_102f78:
    // 0x102f78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x102f78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102f7c:
    // 0x102f7c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x102f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_102f80:
    // 0x102f80: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x102f80u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_102f84:
    // 0x102f84: 0x8c62b1d4  lw          $v0, -0x4E2C($v1)
    ctx->pc = 0x102f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947284)));
label_102f88:
    // 0x102f88: 0x5040039a  beql        $v0, $zero, . + 4 + (0x39A << 2)
label_102f8c:
    if (ctx->pc == 0x102F8Cu) {
        ctx->pc = 0x102F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F88u;
        // 0x102f8c: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102F90u;
        goto label_102f90;
    }
    ctx->pc = 0x102F88u;
    {
        const bool branch_taken_0x102f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102f88) {
            ctx->pc = 0x102F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102F88u;
            // 0x102f8c: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x102F90u;
label_102f90:
    // 0x102f90: 0x4a00397  bltz        $a1, . + 4 + (0x397 << 2)
label_102f94:
    if (ctx->pc == 0x102F94u) {
        ctx->pc = 0x102F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F90u;
        // 0x102f94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102F98u;
        goto label_102f98;
    }
    ctx->pc = 0x102F90u;
    {
        const bool branch_taken_0x102f90 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x102F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F90u;
        // 0x102f94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f90) {
            ctx->pc = 0x103DF0u;
            goto label_103df0;
        }
    }
    ctx->pc = 0x102F98u;
label_102f98:
    // 0x102f98: 0xc047f26  jal         func_11FC98
label_102f9c:
    if (ctx->pc == 0x102F9Cu) {
        ctx->pc = 0x102F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F98u;
        // 0x102f9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102FA0u;
        goto label_102fa0;
    }
    ctx->pc = 0x102F98u;
    SET_GPR_U32(ctx, 31, 0x102FA0u);
    ctx->pc = 0x102F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102F98u;
    // 0x102f9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FC98u, 0x102F98u, 0x102FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102FA0u;
label_102fa0:
    // 0x102fa0: 0x50400394  beql        $v0, $zero, . + 4 + (0x394 << 2)
label_102fa4:
    if (ctx->pc == 0x102FA4u) {
        ctx->pc = 0x102FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FA0u;
        // 0x102fa4: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102FA8u;
        goto label_102fa8;
    }
    ctx->pc = 0x102FA0u;
    {
        const bool branch_taken_0x102fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102fa0) {
            ctx->pc = 0x102FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102FA0u;
            // 0x102fa4: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x102FA8u;
label_102fa8:
    // 0x102fa8: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x102fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_102fac:
    // 0x102fac: 0xc04e952  jal         func_13A548
label_102fb0:
    if (ctx->pc == 0x102FB0u) {
        ctx->pc = 0x102FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FACu;
        // 0x102fb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102FB4u;
        goto label_102fb4;
    }
    ctx->pc = 0x102FACu;
    SET_GPR_U32(ctx, 31, 0x102FB4u);
    ctx->pc = 0x102FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102FACu;
    // 0x102fb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A548u, 0x102FACu, 0x102FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102FB4u;
label_102fb4:
    // 0x102fb4: 0x1000038f  b           . + 4 + (0x38F << 2)
label_102fb8:
    if (ctx->pc == 0x102FB8u) {
        ctx->pc = 0x102FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FB4u;
        // 0x102fb8: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102FBCu;
        goto label_102fbc;
    }
    ctx->pc = 0x102FB4u;
    {
        const bool branch_taken_0x102fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FB4u;
        // 0x102fb8: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102fb4) {
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x102FBCu;
label_102fbc:
    // 0x102fbc: 0x146200ba  bne         $v1, $v0, . + 4 + (0xBA << 2)
label_102fc0:
    if (ctx->pc == 0x102FC0u) {
        ctx->pc = 0x102FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FBCu;
        // 0x102fc0: 0x2402003d  addiu       $v0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102FC4u;
        goto label_102fc4;
    }
    ctx->pc = 0x102FBCu;
    {
        const bool branch_taken_0x102fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x102FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FBCu;
        // 0x102fc0: 0x2402003d  addiu       $v0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102fbc) {
            ctx->pc = 0x1032A8u;
            goto label_1032a8;
        }
    }
    ctx->pc = 0x102FC4u;
label_102fc4:
    // 0x102fc4: 0x824501b0  lb          $a1, 0x1B0($s2)
    ctx->pc = 0x102fc4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_102fc8:
    // 0x102fc8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x102fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_102fcc:
    // 0x102fcc: 0x14a20026  bne         $a1, $v0, . + 4 + (0x26 << 2)
label_102fd0:
    if (ctx->pc == 0x102FD0u) {
        ctx->pc = 0x102FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FCCu;
        // 0x102fd0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102FD4u;
        goto label_102fd4;
    }
    ctx->pc = 0x102FCCu;
    {
        const bool branch_taken_0x102fcc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x102FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FCCu;
        // 0x102fd0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102fcc) {
            ctx->pc = 0x103068u;
            goto label_103068;
        }
    }
    ctx->pc = 0x102FD4u;
label_102fd4:
    // 0x102fd4: 0x8e4300cc  lw          $v1, 0xCC($s2)
    ctx->pc = 0x102fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_102fd8:
    // 0x102fd8: 0x2462ff89  addiu       $v0, $v1, -0x77
    ctx->pc = 0x102fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967177));
label_102fdc:
    // 0x102fdc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x102fdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_102fe0:
    // 0x102fe0: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_102fe4:
    if (ctx->pc == 0x102FE4u) {
        ctx->pc = 0x102FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FE0u;
        // 0x102fe4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102FE8u;
        goto label_102fe8;
    }
    ctx->pc = 0x102FE0u;
    {
        const bool branch_taken_0x102fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FE0u;
        // 0x102fe4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102fe0) {
            ctx->pc = 0x103040u;
            goto label_103040;
        }
    }
    ctx->pc = 0x102FE8u;
label_102fe8:
    // 0x102fe8: 0x240400ed  addiu       $a0, $zero, 0xED
    ctx->pc = 0x102fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
label_102fec:
    // 0x102fec: 0x10640013  beq         $v1, $a0, . + 4 + (0x13 << 2)
label_102ff0:
    if (ctx->pc == 0x102FF0u) {
        ctx->pc = 0x102FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FECu;
        // 0x102ff0: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102FF4u;
        goto label_102ff4;
    }
    ctx->pc = 0x102FECu;
    {
        const bool branch_taken_0x102fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x102FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FECu;
        // 0x102ff0: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102fec) {
            ctx->pc = 0x10303Cu;
            goto label_10303c;
        }
    }
    ctx->pc = 0x102FF4u;
label_102ff4:
    // 0x102ff4: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_102ff8:
    if (ctx->pc == 0x102FF8u) {
        ctx->pc = 0x102FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FF4u;
        // 0x102ff8: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102FFCu;
        goto label_102ffc;
    }
    ctx->pc = 0x102FF4u;
    {
        const bool branch_taken_0x102ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x102FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FF4u;
        // 0x102ff8: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ff4) {
            ctx->pc = 0x10303Cu;
            goto label_10303c;
        }
    }
    ctx->pc = 0x102FFCu;
label_102ffc:
    // 0x102ffc: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_103000:
    if (ctx->pc == 0x103000u) {
        ctx->pc = 0x103000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FFCu;
        // 0x103000: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103004u;
        goto label_103004;
    }
    ctx->pc = 0x102FFCu;
    {
        const bool branch_taken_0x102ffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x103000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FFCu;
        // 0x103000: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ffc) {
            ctx->pc = 0x10303Cu;
            goto label_10303c;
        }
    }
    ctx->pc = 0x103004u;
label_103004:
    // 0x103004: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_103008:
    if (ctx->pc == 0x103008u) {
        ctx->pc = 0x103008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103004u;
        // 0x103008: 0x240200a1  addiu       $v0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10300Cu;
        goto label_10300c;
    }
    ctx->pc = 0x103004u;
    {
        const bool branch_taken_0x103004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x103008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103004u;
        // 0x103008: 0x240200a1  addiu       $v0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103004) {
            ctx->pc = 0x10303Cu;
            goto label_10303c;
        }
    }
    ctx->pc = 0x10300Cu;
label_10300c:
    // 0x10300c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_103010:
    if (ctx->pc == 0x103010u) {
        ctx->pc = 0x103010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10300Cu;
        // 0x103010: 0x240200b2  addiu       $v0, $zero, 0xB2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103014u;
        goto label_103014;
    }
    ctx->pc = 0x10300Cu;
    {
        const bool branch_taken_0x10300c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x103010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10300Cu;
        // 0x103010: 0x240200b2  addiu       $v0, $zero, 0xB2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10300c) {
            ctx->pc = 0x10303Cu;
            goto label_10303c;
        }
    }
    ctx->pc = 0x103014u;
label_103014:
    // 0x103014: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_103018:
    if (ctx->pc == 0x103018u) {
        ctx->pc = 0x103018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103014u;
        // 0x103018: 0x240200b3  addiu       $v0, $zero, 0xB3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10301Cu;
        goto label_10301c;
    }
    ctx->pc = 0x103014u;
    {
        const bool branch_taken_0x103014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x103018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103014u;
        // 0x103018: 0x240200b3  addiu       $v0, $zero, 0xB3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103014) {
            ctx->pc = 0x10303Cu;
            goto label_10303c;
        }
    }
    ctx->pc = 0x10301Cu;
label_10301c:
    // 0x10301c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_103020:
    if (ctx->pc == 0x103020u) {
        ctx->pc = 0x103020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10301Cu;
        // 0x103020: 0x2402004d  addiu       $v0, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103024u;
        goto label_103024;
    }
    ctx->pc = 0x10301Cu;
    {
        const bool branch_taken_0x10301c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x103020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10301Cu;
        // 0x103020: 0x2402004d  addiu       $v0, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10301c) {
            ctx->pc = 0x10303Cu;
            goto label_10303c;
        }
    }
    ctx->pc = 0x103024u;
label_103024:
    // 0x103024: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_103028:
    if (ctx->pc == 0x103028u) {
        ctx->pc = 0x103028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103024u;
        // 0x103028: 0x2402004e  addiu       $v0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10302Cu;
        goto label_10302c;
    }
    ctx->pc = 0x103024u;
    {
        const bool branch_taken_0x103024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x103028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103024u;
        // 0x103028: 0x2402004e  addiu       $v0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103024) {
            ctx->pc = 0x10303Cu;
            goto label_10303c;
        }
    }
    ctx->pc = 0x10302Cu;
label_10302c:
    // 0x10302c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_103030:
    if (ctx->pc == 0x103030u) {
        ctx->pc = 0x103030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10302Cu;
        // 0x103030: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103034u;
        goto label_103034;
    }
    ctx->pc = 0x10302Cu;
    {
        const bool branch_taken_0x10302c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x103030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10302Cu;
        // 0x103030: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10302c) {
            ctx->pc = 0x10303Cu;
            goto label_10303c;
        }
    }
    ctx->pc = 0x103034u;
label_103034:
    // 0x103034: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_103038:
    if (ctx->pc == 0x103038u) {
        ctx->pc = 0x103038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103034u;
        // 0x103038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10303Cu;
        goto label_10303c;
    }
    ctx->pc = 0x103034u;
    {
        const bool branch_taken_0x103034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x103038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103034u;
        // 0x103038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103034) {
            ctx->pc = 0x103040u;
            goto label_103040;
        }
    }
    ctx->pc = 0x10303Cu;
label_10303c:
    // 0x10303c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10303cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_103040:
    // 0x103040: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_103044:
    if (ctx->pc == 0x103044u) {
        ctx->pc = 0x103044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103040u;
        // 0x103044: 0x265000c4  addiu       $s0, $s2, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103048u;
        goto label_103048;
    }
    ctx->pc = 0x103040u;
    {
        const bool branch_taken_0x103040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103040u;
        // 0x103044: 0x265000c4  addiu       $s0, $s2, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103040) {
            ctx->pc = 0x103064u;
            goto label_103064;
        }
    }
    ctx->pc = 0x103048u;
label_103048:
    // 0x103048: 0xc0e409a  jal         func_390268
label_10304c:
    if (ctx->pc == 0x10304Cu) {
        ctx->pc = 0x10304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103048u;
        // 0x10304c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103050u;
        goto label_103050;
    }
    ctx->pc = 0x103048u;
    SET_GPR_U32(ctx, 31, 0x103050u);
    ctx->pc = 0x10304Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103048u;
    // 0x10304c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x103048u, 0x103050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103050u;
label_103050:
    // 0x103050: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_103054:
    if (ctx->pc == 0x103054u) {
        ctx->pc = 0x103054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103050u;
        // 0x103054: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103058u;
        goto label_103058;
    }
    ctx->pc = 0x103050u;
    {
        const bool branch_taken_0x103050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103050u;
        // 0x103054: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103050) {
            ctx->pc = 0x103064u;
            goto label_103064;
        }
    }
    ctx->pc = 0x103058u;
label_103058:
    // 0x103058: 0xc0e409a  jal         func_390268
label_10305c:
    if (ctx->pc == 0x10305Cu) {
        ctx->pc = 0x10305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103058u;
        // 0x10305c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103060u;
        goto label_103060;
    }
    ctx->pc = 0x103058u;
    SET_GPR_U32(ctx, 31, 0x103060u);
    ctx->pc = 0x10305Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103058u;
    // 0x10305c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x103058u, 0x103060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103060u;
label_103060:
    // 0x103060: 0x804501b0  lb          $a1, 0x1B0($v0)
    ctx->pc = 0x103060u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_103064:
    // 0x103064: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x103064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_103068:
    // 0x103068: 0x8c43b1dc  lw          $v1, -0x4E24($v0)
    ctx->pc = 0x103068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947292)));
label_10306c:
    // 0x10306c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_103070:
    if (ctx->pc == 0x103070u) {
        ctx->pc = 0x103070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10306Cu;
        // 0x103070: 0x2403028e  addiu       $v1, $zero, 0x28E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 654));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103074u;
        goto label_103074;
    }
    ctx->pc = 0x10306Cu;
    {
        const bool branch_taken_0x10306c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x103070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10306Cu;
        // 0x103070: 0x2403028e  addiu       $v1, $zero, 0x28E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 654));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10306c) {
            ctx->pc = 0x103094u;
            goto label_103094;
        }
    }
    ctx->pc = 0x103074u;
label_103074:
    // 0x103074: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x103074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_103078:
    // 0x103078: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x103078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_10307c:
    // 0x10307c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_103080:
    if (ctx->pc == 0x103080u) {
        ctx->pc = 0x103080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10307Cu;
        // 0x103080: 0x24020290  addiu       $v0, $zero, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103084u;
        goto label_103084;
    }
    ctx->pc = 0x10307Cu;
    {
        const bool branch_taken_0x10307c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x103080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10307Cu;
        // 0x103080: 0x24020290  addiu       $v0, $zero, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10307c) {
            ctx->pc = 0x10308Cu;
            goto label_10308c;
        }
    }
    ctx->pc = 0x103084u;
label_103084:
    // 0x103084: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
label_103088:
    if (ctx->pc == 0x103088u) {
        ctx->pc = 0x103088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103084u;
        // 0x103088: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10308Cu;
        goto label_10308c;
    }
    ctx->pc = 0x103084u;
    {
        const bool branch_taken_0x103084 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x103088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103084u;
        // 0x103088: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103084) {
            ctx->pc = 0x103098u;
            goto label_103098;
        }
    }
    ctx->pc = 0x10308Cu;
label_10308c:
    // 0x10308c: 0x10000002  b           . + 4 + (0x2 << 2)
label_103090:
    if (ctx->pc == 0x103090u) {
        ctx->pc = 0x103090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10308Cu;
        // 0x103090: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103094u;
        goto label_103094;
    }
    ctx->pc = 0x10308Cu;
    {
        const bool branch_taken_0x10308c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10308Cu;
        // 0x103090: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10308c) {
            ctx->pc = 0x103098u;
            goto label_103098;
        }
    }
    ctx->pc = 0x103094u;
label_103094:
    // 0x103094: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x103094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_103098:
    // 0x103098: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x103098u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_10309c:
    // 0x10309c: 0x4a00354  bltz        $a1, . + 4 + (0x354 << 2)
label_1030a0:
    if (ctx->pc == 0x1030A0u) {
        ctx->pc = 0x1030A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10309Cu;
        // 0x1030a0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1030A4u;
        goto label_1030a4;
    }
    ctx->pc = 0x10309Cu;
    {
        const bool branch_taken_0x10309c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1030A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10309Cu;
        // 0x1030a0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10309c) {
            ctx->pc = 0x103DF0u;
            goto label_103df0;
        }
    }
    ctx->pc = 0x1030A4u;
label_1030a4:
    // 0x1030a4: 0xc047e6c  jal         func_11F9B0
label_1030a8:
    if (ctx->pc == 0x1030A8u) {
        ctx->pc = 0x1030A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030A4u;
        // 0x1030a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1030ACu;
        goto label_1030ac;
    }
    ctx->pc = 0x1030A4u;
    SET_GPR_U32(ctx, 31, 0x1030ACu);
    ctx->pc = 0x1030A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1030A4u;
    // 0x1030a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1030A4u, 0x1030ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1030ACu;
label_1030ac:
    // 0x1030ac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1030b0:
    if (ctx->pc == 0x1030B0u) {
        ctx->pc = 0x1030B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030ACu;
        // 0x1030b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1030B4u;
        goto label_1030b4;
    }
    ctx->pc = 0x1030ACu;
    {
        const bool branch_taken_0x1030ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1030B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030ACu;
        // 0x1030b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1030ac) {
            ctx->pc = 0x1030D8u;
            goto label_1030d8;
        }
    }
    ctx->pc = 0x1030B4u;
label_1030b4:
    // 0x1030b4: 0xc047e6c  jal         func_11F9B0
label_1030b8:
    if (ctx->pc == 0x1030B8u) {
        ctx->pc = 0x1030B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030B4u;
        // 0x1030b8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1030BCu;
        goto label_1030bc;
    }
    ctx->pc = 0x1030B4u;
    SET_GPR_U32(ctx, 31, 0x1030BCu);
    ctx->pc = 0x1030B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1030B4u;
    // 0x1030b8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1030B4u, 0x1030BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1030BCu;
label_1030bc:
    // 0x1030bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1030bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1030c0:
    // 0x1030c0: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x1030c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_1030c4:
    // 0x1030c4: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x1030c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_1030c8:
    // 0x1030c8: 0xa0f809  jalr        $a1
label_1030cc:
    if (ctx->pc == 0x1030CCu) {
        ctx->pc = 0x1030CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030C8u;
        // 0x1030cc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1030D0u;
        goto label_1030d0;
    }
    ctx->pc = 0x1030C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1030D0u);
        ctx->pc = 0x1030CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030C8u;
        // 0x1030cc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1030C8u, 0x1030D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1030D0u;
label_1030d0:
    // 0x1030d0: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1030d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_1030d4:
    // 0x1030d4: 0x2a80b  movn        $s5, $zero, $v0
    ctx->pc = 0x1030d4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_1030d8:
    // 0x1030d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1030d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1030dc:
    // 0x1030dc: 0xc047e6c  jal         func_11F9B0
label_1030e0:
    if (ctx->pc == 0x1030E0u) {
        ctx->pc = 0x1030E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030DCu;
        // 0x1030e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1030E4u;
        goto label_1030e4;
    }
    ctx->pc = 0x1030DCu;
    SET_GPR_U32(ctx, 31, 0x1030E4u);
    ctx->pc = 0x1030E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1030DCu;
    // 0x1030e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1030DCu, 0x1030E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1030E4u;
label_1030e4:
    // 0x1030e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1030e8:
    if (ctx->pc == 0x1030E8u) {
        ctx->pc = 0x1030E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030E4u;
        // 0x1030e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1030ECu;
        goto label_1030ec;
    }
    ctx->pc = 0x1030E4u;
    {
        const bool branch_taken_0x1030e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1030E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030E4u;
        // 0x1030e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1030e4) {
            ctx->pc = 0x103110u;
            goto label_103110;
        }
    }
    ctx->pc = 0x1030ECu;
label_1030ec:
    // 0x1030ec: 0xc047e6c  jal         func_11F9B0
label_1030f0:
    if (ctx->pc == 0x1030F0u) {
        ctx->pc = 0x1030F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030ECu;
        // 0x1030f0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1030F4u;
        goto label_1030f4;
    }
    ctx->pc = 0x1030ECu;
    SET_GPR_U32(ctx, 31, 0x1030F4u);
    ctx->pc = 0x1030F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1030ECu;
    // 0x1030f0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1030ECu, 0x1030F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1030F4u;
label_1030f4:
    // 0x1030f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1030f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1030f8:
    // 0x1030f8: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x1030f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_1030fc:
    // 0x1030fc: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x1030fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_103100:
    // 0x103100: 0xa0f809  jalr        $a1
label_103104:
    if (ctx->pc == 0x103104u) {
        ctx->pc = 0x103104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103100u;
        // 0x103104: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103108u;
        goto label_103108;
    }
    ctx->pc = 0x103100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x103108u);
        ctx->pc = 0x103104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103100u;
        // 0x103104: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103100u, 0x103108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103108u;
label_103108:
    // 0x103108: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x103108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
label_10310c:
    // 0x10310c: 0x2980b  movn        $s3, $zero, $v0
    ctx->pc = 0x10310cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
label_103110:
    // 0x103110: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x103110u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_103114:
    // 0x103114: 0xc047e6c  jal         func_11F9B0
label_103118:
    if (ctx->pc == 0x103118u) {
        ctx->pc = 0x103118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103114u;
        // 0x103118: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10311Cu;
        goto label_10311c;
    }
    ctx->pc = 0x103114u;
    SET_GPR_U32(ctx, 31, 0x10311Cu);
    ctx->pc = 0x103118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103114u;
    // 0x103118: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x103114u, 0x10311Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10311Cu;
label_10311c:
    // 0x10311c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_103120:
    if (ctx->pc == 0x103120u) {
        ctx->pc = 0x103120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10311Cu;
        // 0x103120: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103124u;
        goto label_103124;
    }
    ctx->pc = 0x10311Cu;
    {
        const bool branch_taken_0x10311c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10311Cu;
        // 0x103120: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10311c) {
            ctx->pc = 0x103144u;
            goto label_103144;
        }
    }
    ctx->pc = 0x103124u;
label_103124:
    // 0x103124: 0xc047e6c  jal         func_11F9B0
label_103128:
    if (ctx->pc == 0x103128u) {
        ctx->pc = 0x103128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103124u;
        // 0x103128: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10312Cu;
        goto label_10312c;
    }
    ctx->pc = 0x103124u;
    SET_GPR_U32(ctx, 31, 0x10312Cu);
    ctx->pc = 0x103128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103124u;
    // 0x103128: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x103124u, 0x10312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10312Cu;
label_10312c:
    // 0x10312c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10312cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_103130:
    // 0x103130: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x103130u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_103134:
    // 0x103134: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x103134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_103138:
    // 0x103138: 0xa0f809  jalr        $a1
label_10313c:
    if (ctx->pc == 0x10313Cu) {
        ctx->pc = 0x10313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103138u;
        // 0x10313c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103140u;
        goto label_103140;
    }
    ctx->pc = 0x103138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x103140u);
        ctx->pc = 0x10313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103138u;
        // 0x10313c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103138u, 0x103140u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103140u;
label_103140:
    // 0x103140: 0x2b00b  movn        $s6, $zero, $v0
    ctx->pc = 0x103140u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_103144:
    // 0x103144: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x103144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_103148:
    // 0x103148: 0xc047e6c  jal         func_11F9B0
label_10314c:
    if (ctx->pc == 0x10314Cu) {
        ctx->pc = 0x10314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103148u;
        // 0x10314c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103150u;
        goto label_103150;
    }
    ctx->pc = 0x103148u;
    SET_GPR_U32(ctx, 31, 0x103150u);
    ctx->pc = 0x10314Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103148u;
    // 0x10314c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x103148u, 0x103150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103150u;
label_103150:
    // 0x103150: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_103154:
    if (ctx->pc == 0x103154u) {
        ctx->pc = 0x103154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103150u;
        // 0x103154: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103158u;
        goto label_103158;
    }
    ctx->pc = 0x103150u;
    {
        const bool branch_taken_0x103150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103150u;
        // 0x103154: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103150) {
            ctx->pc = 0x10317Cu;
            goto label_10317c;
        }
    }
    ctx->pc = 0x103158u;
label_103158:
    // 0x103158: 0xc047e6c  jal         func_11F9B0
label_10315c:
    if (ctx->pc == 0x10315Cu) {
        ctx->pc = 0x10315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103158u;
        // 0x10315c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103160u;
        goto label_103160;
    }
    ctx->pc = 0x103158u;
    SET_GPR_U32(ctx, 31, 0x103160u);
    ctx->pc = 0x10315Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103158u;
    // 0x10315c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x103158u, 0x103160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103160u;
label_103160:
    // 0x103160: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x103160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_103164:
    // 0x103164: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x103164u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_103168:
    // 0x103168: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x103168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_10316c:
    // 0x10316c: 0xa0f809  jalr        $a1
label_103170:
    if (ctx->pc == 0x103170u) {
        ctx->pc = 0x103170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10316Cu;
        // 0x103170: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103174u;
        goto label_103174;
    }
    ctx->pc = 0x10316Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x103174u);
        ctx->pc = 0x103170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10316Cu;
        // 0x103170: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10316Cu, 0x103174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103174u;
label_103174:
    // 0x103174: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x103174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_103178:
    // 0x103178: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x103178u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_10317c:
    // 0x10317c: 0xc047e6c  jal         func_11F9B0
label_103180:
    if (ctx->pc == 0x103180u) {
        ctx->pc = 0x103180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10317Cu;
        // 0x103180: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103184u;
        goto label_103184;
    }
    ctx->pc = 0x10317Cu;
    SET_GPR_U32(ctx, 31, 0x103184u);
    ctx->pc = 0x103180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10317Cu;
    // 0x103180: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x10317Cu, 0x103184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103184u;
label_103184:
    // 0x103184: 0x56600008  bnel        $s3, $zero, . + 4 + (0x8 << 2)
label_103188:
    if (ctx->pc == 0x103188u) {
        ctx->pc = 0x103188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103184u;
        // 0x103188: 0x86220008  lh          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10318Cu;
        goto label_10318c;
    }
    ctx->pc = 0x103184u;
    {
        const bool branch_taken_0x103184 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x103184) {
            ctx->pc = 0x103188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103184u;
            // 0x103188: 0x86220008  lh          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1031A8u;
            goto label_1031a8;
        }
    }
    ctx->pc = 0x10318Cu;
label_10318c:
    // 0x10318c: 0x56a00006  bnel        $s5, $zero, . + 4 + (0x6 << 2)
label_103190:
    if (ctx->pc == 0x103190u) {
        ctx->pc = 0x103190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10318Cu;
        // 0x103190: 0x86220008  lh          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103194u;
        goto label_103194;
    }
    ctx->pc = 0x10318Cu;
    {
        const bool branch_taken_0x10318c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x10318c) {
            ctx->pc = 0x103190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10318Cu;
            // 0x103190: 0x86220008  lh          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1031A8u;
            goto label_1031a8;
        }
    }
    ctx->pc = 0x103194u;
label_103194:
    // 0x103194: 0x56c00004  bnel        $s6, $zero, . + 4 + (0x4 << 2)
label_103198:
    if (ctx->pc == 0x103198u) {
        ctx->pc = 0x103198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103194u;
        // 0x103198: 0x86220008  lh          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10319Cu;
        goto label_10319c;
    }
    ctx->pc = 0x103194u;
    {
        const bool branch_taken_0x103194 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x103194) {
            ctx->pc = 0x103198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103194u;
            // 0x103198: 0x86220008  lh          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1031A8u;
            goto label_1031a8;
        }
    }
    ctx->pc = 0x10319Cu;
label_10319c:
    // 0x10319c: 0x52000315  beql        $s0, $zero, . + 4 + (0x315 << 2)
label_1031a0:
    if (ctx->pc == 0x1031A0u) {
        ctx->pc = 0x1031A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10319Cu;
        // 0x1031a0: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1031A4u;
        goto label_1031a4;
    }
    ctx->pc = 0x10319Cu;
    {
        const bool branch_taken_0x10319c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10319c) {
            ctx->pc = 0x1031A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10319Cu;
            // 0x1031a0: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x1031A4u;
label_1031a4:
    // 0x1031a4: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x1031a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_1031a8:
    // 0x1031a8: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x1031a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_1031ac:
    // 0x1031ac: 0x2625000e  addiu       $a1, $s1, 0xE
    ctx->pc = 0x1031acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 14));
label_1031b0:
    // 0x1031b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1031b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1031b4:
    // 0x1031b4: 0x0  nop
    ctx->pc = 0x1031b4u;
    // NOP
label_1031b8:
    // 0x1031b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1031b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1031bc:
    // 0x1031bc: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1031bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_1031c0:
    // 0x1031c0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1031c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1031c4:
    // 0x1031c4: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x1031c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_1031c8:
    // 0x1031c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1031c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1031cc:
    // 0x1031cc: 0x0  nop
    ctx->pc = 0x1031ccu;
    // NOP
label_1031d0:
    // 0x1031d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1031d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1031d4:
    // 0x1031d4: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1031d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_1031d8:
    // 0x1031d8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1031d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1031dc:
    // 0x1031dc: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x1031dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_1031e0:
    // 0x1031e0: 0xe7b5003c  swc1        $f21, 0x3C($sp)
    ctx->pc = 0x1031e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1031e4:
    // 0x1031e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1031e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1031e8:
    // 0x1031e8: 0x0  nop
    ctx->pc = 0x1031e8u;
    // NOP
label_1031ec:
    // 0x1031ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1031ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1031f0:
    // 0x1031f0: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x1031f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_1031f4:
    // 0x1031f4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1031f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1031f8:
    // 0x1031f8: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x1031f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_1031fc:
    // 0x1031fc: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1031fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_103200:
    // 0x103200: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x103200u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_103204:
    // 0x103204: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x103204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_103208:
    // 0x103208: 0x84a40004  lh          $a0, 0x4($a1)
    ctx->pc = 0x103208u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_10320c:
    // 0x10320c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x10320cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_103210:
    // 0x103210: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x103210u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_103214:
    // 0x103214: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x103214u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_103218:
    // 0x103218: 0x3c033800  lui         $v1, 0x3800
    ctx->pc = 0x103218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14336 << 16));
label_10321c:
    // 0x10321c: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x10321cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_103220:
    // 0x103220: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x103220u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_103224:
    // 0x103224: 0x4bc3093c  vitof0.xyz  $vf3, $vf1
    ctx->pc = 0x103224u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_103228:
    // 0x103228: 0x4bc21858  vmulx.xyz   $vf1, $vf3, $vf2x
    ctx->pc = 0x103228u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_10322c:
    // 0x10322c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x10322cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_103230:
    // 0x103230: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x103230u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_103234:
    // 0x103234: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x103234u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_103238:
    // 0x103238: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x103238u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_10323c:
    // 0x10323c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x10323cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_103240:
    // 0x103240: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x103240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_103244:
    // 0x103244: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x103244u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_103248:
    // 0x103248: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x103248u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10324c:
    // 0x10324c: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x10324cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_103250:
    // 0x103250: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x103250u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_103254:
    // 0x103254: 0x0  nop
    ctx->pc = 0x103254u;
    // NOP
label_103258:
    // 0x103258: 0x0  nop
    ctx->pc = 0x103258u;
    // NOP
label_10325c:
    // 0x10325c: 0x46000004  c1          0x4
    ctx->pc = 0x10325cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_103260:
    // 0x103260: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x103260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_103264:
    // 0x103264: 0x86220004  lh          $v0, 0x4($s1)
    ctx->pc = 0x103264u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_103268:
    // 0x103268: 0x544002e2  bnel        $v0, $zero, . + 4 + (0x2E2 << 2)
label_10326c:
    if (ctx->pc == 0x10326Cu) {
        ctx->pc = 0x10326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103268u;
        // 0x10326c: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103270u;
        goto label_103270;
    }
    ctx->pc = 0x103268u;
    {
        const bool branch_taken_0x103268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103268) {
            ctx->pc = 0x10326Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103268u;
            // 0x10326c: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x103270u;
label_103270:
    // 0x103270: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x103270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_103274:
    // 0x103274: 0x8c43b1d4  lw          $v1, -0x4E2C($v0)
    ctx->pc = 0x103274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947284)));
label_103278:
    // 0x103278: 0x106002dd  beqz        $v1, . + 4 + (0x2DD << 2)
label_10327c:
    if (ctx->pc == 0x10327Cu) {
        ctx->pc = 0x10327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103278u;
        // 0x10327c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103280u;
        goto label_103280;
    }
    ctx->pc = 0x103278u;
    {
        const bool branch_taken_0x103278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103278u;
        // 0x10327c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103278) {
            ctx->pc = 0x103DF0u;
            goto label_103df0;
        }
    }
    ctx->pc = 0x103280u;
label_103280:
    // 0x103280: 0xc047f26  jal         func_11FC98
label_103284:
    if (ctx->pc == 0x103284u) {
        ctx->pc = 0x103284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103280u;
        // 0x103284: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103288u;
        goto label_103288;
    }
    ctx->pc = 0x103280u;
    SET_GPR_U32(ctx, 31, 0x103288u);
    ctx->pc = 0x103284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103280u;
    // 0x103284: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FC98u, 0x103280u, 0x103288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103288u;
label_103288:
    // 0x103288: 0x104002d9  beqz        $v0, . + 4 + (0x2D9 << 2)
label_10328c:
    if (ctx->pc == 0x10328Cu) {
        ctx->pc = 0x10328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103288u;
        // 0x10328c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103290u;
        goto label_103290;
    }
    ctx->pc = 0x103288u;
    {
        const bool branch_taken_0x103288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103288u;
        // 0x10328c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103288) {
            ctx->pc = 0x103DF0u;
            goto label_103df0;
        }
    }
    ctx->pc = 0x103290u;
label_103290:
    // 0x103290: 0x86270006  lh          $a3, 0x6($s1)
    ctx->pc = 0x103290u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_103294:
    // 0x103294: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x103294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_103298:
    // 0x103298: 0xc04e912  jal         func_13A448
label_10329c:
    if (ctx->pc == 0x10329Cu) {
        ctx->pc = 0x10329Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103298u;
        // 0x10329c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1032A0u;
        goto label_1032a0;
    }
    ctx->pc = 0x103298u;
    SET_GPR_U32(ctx, 31, 0x1032A0u);
    ctx->pc = 0x10329Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103298u;
    // 0x10329c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A448u, 0x103298u, 0x1032A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1032A0u;
label_1032a0:
    // 0x1032a0: 0x100002d4  b           . + 4 + (0x2D4 << 2)
label_1032a4:
    if (ctx->pc == 0x1032A4u) {
        ctx->pc = 0x1032A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032A0u;
        // 0x1032a4: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1032A8u;
        goto label_1032a8;
    }
    ctx->pc = 0x1032A0u;
    {
        const bool branch_taken_0x1032a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1032A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032A0u;
        // 0x1032a4: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1032a0) {
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x1032A8u;
label_1032a8:
    // 0x1032a8: 0x14620050  bne         $v1, $v0, . + 4 + (0x50 << 2)
label_1032ac:
    if (ctx->pc == 0x1032ACu) {
        ctx->pc = 0x1032ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032A8u;
        // 0x1032ac: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1032B0u;
        goto label_1032b0;
    }
    ctx->pc = 0x1032A8u;
    {
        const bool branch_taken_0x1032a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1032ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032A8u;
        // 0x1032ac: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1032a8) {
            ctx->pc = 0x1033ECu;
            goto label_1033ec;
        }
    }
    ctx->pc = 0x1032B0u;
label_1032b0:
    // 0x1032b0: 0x824401b0  lb          $a0, 0x1B0($s2)
    ctx->pc = 0x1032b0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_1032b4:
    // 0x1032b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1032b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1032b8:
    // 0x1032b8: 0x14820025  bne         $a0, $v0, . + 4 + (0x25 << 2)
label_1032bc:
    if (ctx->pc == 0x1032BCu) {
        ctx->pc = 0x1032C0u;
        goto label_1032c0;
    }
    ctx->pc = 0x1032B8u;
    {
        const bool branch_taken_0x1032b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1032b8) {
            ctx->pc = 0x103350u;
            goto label_103350;
        }
    }
    ctx->pc = 0x1032C0u;
label_1032c0:
    // 0x1032c0: 0x8e4300cc  lw          $v1, 0xCC($s2)
    ctx->pc = 0x1032c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_1032c4:
    // 0x1032c4: 0x2462ff89  addiu       $v0, $v1, -0x77
    ctx->pc = 0x1032c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967177));
label_1032c8:
    // 0x1032c8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1032c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1032cc:
    // 0x1032cc: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_1032d0:
    if (ctx->pc == 0x1032D0u) {
        ctx->pc = 0x1032D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032CCu;
        // 0x1032d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1032D4u;
        goto label_1032d4;
    }
    ctx->pc = 0x1032CCu;
    {
        const bool branch_taken_0x1032cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1032D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032CCu;
        // 0x1032d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1032cc) {
            ctx->pc = 0x10332Cu;
            goto label_10332c;
        }
    }
    ctx->pc = 0x1032D4u;
label_1032d4:
    // 0x1032d4: 0x240200ed  addiu       $v0, $zero, 0xED
    ctx->pc = 0x1032d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
label_1032d8:
    // 0x1032d8: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_1032dc:
    if (ctx->pc == 0x1032DCu) {
        ctx->pc = 0x1032DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032D8u;
        // 0x1032dc: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1032E0u;
        goto label_1032e0;
    }
    ctx->pc = 0x1032D8u;
    {
        const bool branch_taken_0x1032d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1032DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032D8u;
        // 0x1032dc: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1032d8) {
            ctx->pc = 0x103328u;
            goto label_103328;
        }
    }
    ctx->pc = 0x1032E0u;
label_1032e0:
    // 0x1032e0: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_1032e4:
    if (ctx->pc == 0x1032E4u) {
        ctx->pc = 0x1032E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032E0u;
        // 0x1032e4: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1032E8u;
        goto label_1032e8;
    }
    ctx->pc = 0x1032E0u;
    {
        const bool branch_taken_0x1032e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1032E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032E0u;
        // 0x1032e4: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1032e0) {
            ctx->pc = 0x103328u;
            goto label_103328;
        }
    }
    ctx->pc = 0x1032E8u;
label_1032e8:
    // 0x1032e8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_1032ec:
    if (ctx->pc == 0x1032ECu) {
        ctx->pc = 0x1032ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032E8u;
        // 0x1032ec: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1032F0u;
        goto label_1032f0;
    }
    ctx->pc = 0x1032E8u;
    {
        const bool branch_taken_0x1032e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1032ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032E8u;
        // 0x1032ec: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1032e8) {
            ctx->pc = 0x103328u;
            goto label_103328;
        }
    }
    ctx->pc = 0x1032F0u;
label_1032f0:
    // 0x1032f0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_1032f4:
    if (ctx->pc == 0x1032F4u) {
        ctx->pc = 0x1032F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032F0u;
        // 0x1032f4: 0x240200a1  addiu       $v0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1032F8u;
        goto label_1032f8;
    }
    ctx->pc = 0x1032F0u;
    {
        const bool branch_taken_0x1032f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1032F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032F0u;
        // 0x1032f4: 0x240200a1  addiu       $v0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1032f0) {
            ctx->pc = 0x103328u;
            goto label_103328;
        }
    }
    ctx->pc = 0x1032F8u;
label_1032f8:
    // 0x1032f8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_1032fc:
    if (ctx->pc == 0x1032FCu) {
        ctx->pc = 0x1032FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032F8u;
        // 0x1032fc: 0x240200b2  addiu       $v0, $zero, 0xB2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103300u;
        goto label_103300;
    }
    ctx->pc = 0x1032F8u;
    {
        const bool branch_taken_0x1032f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1032FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032F8u;
        // 0x1032fc: 0x240200b2  addiu       $v0, $zero, 0xB2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1032f8) {
            ctx->pc = 0x103328u;
            goto label_103328;
        }
    }
    ctx->pc = 0x103300u;
label_103300:
    // 0x103300: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_103304:
    if (ctx->pc == 0x103304u) {
        ctx->pc = 0x103304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103300u;
        // 0x103304: 0x240200b3  addiu       $v0, $zero, 0xB3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103308u;
        goto label_103308;
    }
    ctx->pc = 0x103300u;
    {
        const bool branch_taken_0x103300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x103304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103300u;
        // 0x103304: 0x240200b3  addiu       $v0, $zero, 0xB3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103300) {
            ctx->pc = 0x103328u;
            goto label_103328;
        }
    }
    ctx->pc = 0x103308u;
label_103308:
    // 0x103308: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_10330c:
    if (ctx->pc == 0x10330Cu) {
        ctx->pc = 0x10330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103308u;
        // 0x10330c: 0x2402004d  addiu       $v0, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103310u;
        goto label_103310;
    }
    ctx->pc = 0x103308u;
    {
        const bool branch_taken_0x103308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103308u;
        // 0x10330c: 0x2402004d  addiu       $v0, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103308) {
            ctx->pc = 0x103328u;
            goto label_103328;
        }
    }
    ctx->pc = 0x103310u;
label_103310:
    // 0x103310: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_103314:
    if (ctx->pc == 0x103314u) {
        ctx->pc = 0x103314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103310u;
        // 0x103314: 0x2402004e  addiu       $v0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103318u;
        goto label_103318;
    }
    ctx->pc = 0x103310u;
    {
        const bool branch_taken_0x103310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x103314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103310u;
        // 0x103314: 0x2402004e  addiu       $v0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103310) {
            ctx->pc = 0x103328u;
            goto label_103328;
        }
    }
    ctx->pc = 0x103318u;
label_103318:
    // 0x103318: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_10331c:
    if (ctx->pc == 0x10331Cu) {
        ctx->pc = 0x10331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103318u;
        // 0x10331c: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103320u;
        goto label_103320;
    }
    ctx->pc = 0x103318u;
    {
        const bool branch_taken_0x103318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103318u;
        // 0x10331c: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103318) {
            ctx->pc = 0x103328u;
            goto label_103328;
        }
    }
    ctx->pc = 0x103320u;
label_103320:
    // 0x103320: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_103324:
    if (ctx->pc == 0x103324u) {
        ctx->pc = 0x103324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103320u;
        // 0x103324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103328u;
        goto label_103328;
    }
    ctx->pc = 0x103320u;
    {
        const bool branch_taken_0x103320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x103324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103320u;
        // 0x103324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103320) {
            ctx->pc = 0x10332Cu;
            goto label_10332c;
        }
    }
    ctx->pc = 0x103328u;
label_103328:
    // 0x103328: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x103328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10332c:
    // 0x10332c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_103330:
    if (ctx->pc == 0x103330u) {
        ctx->pc = 0x103330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10332Cu;
        // 0x103330: 0x265000c4  addiu       $s0, $s2, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103334u;
        goto label_103334;
    }
    ctx->pc = 0x10332Cu;
    {
        const bool branch_taken_0x10332c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10332Cu;
        // 0x103330: 0x265000c4  addiu       $s0, $s2, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10332c) {
            ctx->pc = 0x103350u;
            goto label_103350;
        }
    }
    ctx->pc = 0x103334u;
label_103334:
    // 0x103334: 0xc0e409a  jal         func_390268
label_103338:
    if (ctx->pc == 0x103338u) {
        ctx->pc = 0x103338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103334u;
        // 0x103338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10333Cu;
        goto label_10333c;
    }
    ctx->pc = 0x103334u;
    SET_GPR_U32(ctx, 31, 0x10333Cu);
    ctx->pc = 0x103338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103334u;
    // 0x103338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x103334u, 0x10333Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10333Cu;
label_10333c:
    // 0x10333c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_103340:
    if (ctx->pc == 0x103340u) {
        ctx->pc = 0x103340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10333Cu;
        // 0x103340: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103344u;
        goto label_103344;
    }
    ctx->pc = 0x10333Cu;
    {
        const bool branch_taken_0x10333c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10333Cu;
        // 0x103340: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10333c) {
            ctx->pc = 0x103350u;
            goto label_103350;
        }
    }
    ctx->pc = 0x103344u;
label_103344:
    // 0x103344: 0xc0e409a  jal         func_390268
label_103348:
    if (ctx->pc == 0x103348u) {
        ctx->pc = 0x103348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103344u;
        // 0x103348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10334Cu;
        goto label_10334c;
    }
    ctx->pc = 0x103344u;
    SET_GPR_U32(ctx, 31, 0x10334Cu);
    ctx->pc = 0x103348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103344u;
    // 0x103348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x103344u, 0x10334Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10334Cu;
label_10334c:
    // 0x10334c: 0x804401b0  lb          $a0, 0x1B0($v0)
    ctx->pc = 0x10334cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_103350:
    // 0x103350: 0x48002a7  bltz        $a0, . + 4 + (0x2A7 << 2)
label_103354:
    if (ctx->pc == 0x103354u) {
        ctx->pc = 0x103354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103350u;
        // 0x103354: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103358u;
        goto label_103358;
    }
    ctx->pc = 0x103350u;
    {
        const bool branch_taken_0x103350 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x103354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103350u;
        // 0x103354: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103350) {
            ctx->pc = 0x103DF0u;
            goto label_103df0;
        }
    }
    ctx->pc = 0x103358u;
label_103358:
    // 0x103358: 0xc047e6c  jal         func_11F9B0
label_10335c:
    if (ctx->pc == 0x10335Cu) {
        ctx->pc = 0x10335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103358u;
        // 0x10335c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103360u;
        goto label_103360;
    }
    ctx->pc = 0x103358u;
    SET_GPR_U32(ctx, 31, 0x103360u);
    ctx->pc = 0x10335Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103358u;
    // 0x10335c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x103358u, 0x103360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103360u;
label_103360:
    // 0x103360: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_103364:
    if (ctx->pc == 0x103364u) {
        ctx->pc = 0x103368u;
        goto label_103368;
    }
    ctx->pc = 0x103360u;
    {
        const bool branch_taken_0x103360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103360) {
            ctx->pc = 0x1033D4u;
            goto label_1033d4;
        }
    }
    ctx->pc = 0x103368u;
label_103368:
    // 0x103368: 0xc047e6c  jal         func_11F9B0
label_10336c:
    if (ctx->pc == 0x10336Cu) {
        ctx->pc = 0x10336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103368u;
        // 0x10336c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103370u;
        goto label_103370;
    }
    ctx->pc = 0x103368u;
    SET_GPR_U32(ctx, 31, 0x103370u);
    ctx->pc = 0x10336Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103368u;
    // 0x10336c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x103368u, 0x103370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103370u;
label_103370:
    // 0x103370: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x103370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_103374:
    // 0x103374: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x103374u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_103378:
    // 0x103378: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x103378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_10337c:
    // 0x10337c: 0xa0f809  jalr        $a1
label_103380:
    if (ctx->pc == 0x103380u) {
        ctx->pc = 0x103380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10337Cu;
        // 0x103380: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103384u;
        goto label_103384;
    }
    ctx->pc = 0x10337Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x103384u);
        ctx->pc = 0x103380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10337Cu;
        // 0x103380: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10337Cu, 0x103384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103384u;
label_103384:
    // 0x103384: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x103384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_103388:
    // 0x103388: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_10338c:
    if (ctx->pc == 0x10338Cu) {
        ctx->pc = 0x103390u;
        goto label_103390;
    }
    ctx->pc = 0x103388u;
    {
        const bool branch_taken_0x103388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x103388) {
            ctx->pc = 0x1033A0u;
            goto label_1033a0;
        }
    }
    ctx->pc = 0x103390u;
label_103390:
    // 0x103390: 0xc047e6c  jal         func_11F9B0
label_103394:
    if (ctx->pc == 0x103394u) {
        ctx->pc = 0x103394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103390u;
        // 0x103394: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103398u;
        goto label_103398;
    }
    ctx->pc = 0x103390u;
    SET_GPR_U32(ctx, 31, 0x103398u);
    ctx->pc = 0x103394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103390u;
    // 0x103394: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x103390u, 0x103398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103398u;
label_103398:
    // 0x103398: 0x1000000e  b           . + 4 + (0xE << 2)
label_10339c:
    if (ctx->pc == 0x10339Cu) {
        ctx->pc = 0x1033A0u;
        goto label_1033a0;
    }
    ctx->pc = 0x103398u;
    {
        const bool branch_taken_0x103398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x103398) {
            ctx->pc = 0x1033D4u;
            goto label_1033d4;
        }
    }
    ctx->pc = 0x1033A0u;
label_1033a0:
    // 0x1033a0: 0xc047e6c  jal         func_11F9B0
label_1033a4:
    if (ctx->pc == 0x1033A4u) {
        ctx->pc = 0x1033A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1033A0u;
        // 0x1033a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1033A8u;
        goto label_1033a8;
    }
    ctx->pc = 0x1033A0u;
    SET_GPR_U32(ctx, 31, 0x1033A8u);
    ctx->pc = 0x1033A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1033A0u;
    // 0x1033a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1033A0u, 0x1033A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1033A8u;
label_1033a8:
    // 0x1033a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1033a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1033ac:
    // 0x1033ac: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x1033acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_1033b0:
    // 0x1033b0: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x1033b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_1033b4:
    // 0x1033b4: 0xa0f809  jalr        $a1
label_1033b8:
    if (ctx->pc == 0x1033B8u) {
        ctx->pc = 0x1033B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1033B4u;
        // 0x1033b8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1033BCu;
        goto label_1033bc;
    }
    ctx->pc = 0x1033B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1033BCu);
        ctx->pc = 0x1033B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1033B4u;
        // 0x1033b8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1033B4u, 0x1033BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1033BCu;
label_1033bc:
    // 0x1033bc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1033bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1033c0:
    // 0x1033c0: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_1033c4:
    if (ctx->pc == 0x1033C4u) {
        ctx->pc = 0x1033C8u;
        goto label_1033c8;
    }
    ctx->pc = 0x1033C0u;
    {
        const bool branch_taken_0x1033c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1033c0) {
            ctx->pc = 0x1033D4u;
            goto label_1033d4;
        }
    }
    ctx->pc = 0x1033C8u;
label_1033c8:
    // 0x1033c8: 0xc047e6c  jal         func_11F9B0
label_1033cc:
    if (ctx->pc == 0x1033CCu) {
        ctx->pc = 0x1033CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1033C8u;
        // 0x1033cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1033D0u;
        goto label_1033d0;
    }
    ctx->pc = 0x1033C8u;
    SET_GPR_U32(ctx, 31, 0x1033D0u);
    ctx->pc = 0x1033CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1033C8u;
    // 0x1033cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1033C8u, 0x1033D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1033D0u;
label_1033d0:
    // 0x1033d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1033d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1033d4:
    // 0x1033d4: 0x52000287  beql        $s0, $zero, . + 4 + (0x287 << 2)
label_1033d8:
    if (ctx->pc == 0x1033D8u) {
        ctx->pc = 0x1033D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1033D4u;
        // 0x1033d8: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1033DCu;
        goto label_1033dc;
    }
    ctx->pc = 0x1033D4u;
    {
        const bool branch_taken_0x1033d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1033d4) {
            ctx->pc = 0x1033D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1033D4u;
            // 0x1033d8: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x1033DCu;
label_1033dc:
    // 0x1033dc: 0xc04e8ec  jal         func_13A3B0
label_1033e0:
    if (ctx->pc == 0x1033E0u) {
        ctx->pc = 0x1033E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1033DCu;
        // 0x1033e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1033E4u;
        goto label_1033e4;
    }
    ctx->pc = 0x1033DCu;
    SET_GPR_U32(ctx, 31, 0x1033E4u);
    ctx->pc = 0x1033E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1033DCu;
    // 0x1033e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A3B0u, 0x1033DCu, 0x1033E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1033E4u;
label_1033e4:
    // 0x1033e4: 0x10000283  b           . + 4 + (0x283 << 2)
label_1033e8:
    if (ctx->pc == 0x1033E8u) {
        ctx->pc = 0x1033E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1033E4u;
        // 0x1033e8: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1033ECu;
        goto label_1033ec;
    }
    ctx->pc = 0x1033E4u;
    {
        const bool branch_taken_0x1033e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1033E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1033E4u;
        // 0x1033e8: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1033e4) {
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x1033ECu;
label_1033ec:
    // 0x1033ec: 0x1462005c  bne         $v1, $v0, . + 4 + (0x5C << 2)
label_1033f0:
    if (ctx->pc == 0x1033F0u) {
        ctx->pc = 0x1033F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1033ECu;
        // 0x1033f0: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1033F4u;
        goto label_1033f4;
    }
    ctx->pc = 0x1033ECu;
    {
        const bool branch_taken_0x1033ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1033F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1033ECu;
        // 0x1033f0: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1033ec) {
            ctx->pc = 0x103560u;
            goto label_103560;
        }
    }
    ctx->pc = 0x1033F4u;
label_1033f4:
    // 0x1033f4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1033f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1033f8:
    // 0x1033f8: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x1033f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_1033fc:
    // 0x1033fc: 0x34a52830  ori         $a1, $a1, 0x2830
    ctx->pc = 0x1033fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)10288);
label_103400:
    // 0x103400: 0xc08997c  jal         func_2265F0
label_103404:
    if (ctx->pc == 0x103404u) {
        ctx->pc = 0x103404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103400u;
        // 0x103404: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103408u;
        goto label_103408;
    }
    ctx->pc = 0x103400u;
    SET_GPR_U32(ctx, 31, 0x103408u);
    ctx->pc = 0x103404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103400u;
    // 0x103404: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x103400u, 0x103408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103408u;
label_103408:
    // 0x103408: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_10340c:
    if (ctx->pc == 0x10340Cu) {
        ctx->pc = 0x103410u;
        goto label_103410;
    }
    ctx->pc = 0x103408u;
    {
        const bool branch_taken_0x103408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103408) {
            ctx->pc = 0x10347Cu;
            goto label_10347c;
        }
    }
    ctx->pc = 0x103410u;
label_103410:
    // 0x103410: 0xc0899e8  jal         func_2267A0
label_103414:
    if (ctx->pc == 0x103414u) {
        ctx->pc = 0x103414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103410u;
        // 0x103414: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103418u;
        goto label_103418;
    }
    ctx->pc = 0x103410u;
    SET_GPR_U32(ctx, 31, 0x103418u);
    ctx->pc = 0x103414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103410u;
    // 0x103414: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x103410u, 0x103418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103418u;
label_103418:
    // 0x103418: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x103418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10341c:
    // 0x10341c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10341cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_103420:
    // 0x103420: 0xc089998  jal         func_226660
label_103424:
    if (ctx->pc == 0x103424u) {
        ctx->pc = 0x103424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103420u;
        // 0x103424: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103428u;
        goto label_103428;
    }
    ctx->pc = 0x103420u;
    SET_GPR_U32(ctx, 31, 0x103428u);
    ctx->pc = 0x103424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103420u;
    // 0x103424: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x103420u, 0x103428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103428u;
label_103428:
    // 0x103428: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_10342c:
    if (ctx->pc == 0x10342Cu) {
        ctx->pc = 0x103430u;
        goto label_103430;
    }
    ctx->pc = 0x103428u;
    {
        const bool branch_taken_0x103428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103428) {
            ctx->pc = 0x103440u;
            goto label_103440;
        }
    }
    ctx->pc = 0x103430u;
label_103430:
    // 0x103430: 0xc089a76  jal         func_2269D8
label_103434:
    if (ctx->pc == 0x103434u) {
        ctx->pc = 0x103434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103430u;
        // 0x103434: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103438u;
        goto label_103438;
    }
    ctx->pc = 0x103430u;
    SET_GPR_U32(ctx, 31, 0x103438u);
    ctx->pc = 0x103434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103430u;
    // 0x103434: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2269D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269D8u, 0x103430u, 0x103438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103438u;
label_103438:
    // 0x103438: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_10343c:
    if (ctx->pc == 0x10343Cu) {
        ctx->pc = 0x103440u;
        goto label_103440;
    }
    ctx->pc = 0x103438u;
    {
        const bool branch_taken_0x103438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103438) {
            ctx->pc = 0x103448u;
            goto label_103448;
        }
    }
    ctx->pc = 0x103440u;
label_103440:
    // 0x103440: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_103444:
    if (ctx->pc == 0x103444u) {
        ctx->pc = 0x103444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103440u;
        // 0x103444: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103448u;
        goto label_103448;
    }
    ctx->pc = 0x103440u;
    {
        const bool branch_taken_0x103440 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x103444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103440u;
        // 0x103444: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103440) {
            ctx->pc = 0x103458u;
            goto label_103458;
        }
    }
    ctx->pc = 0x103448u;
label_103448:
    // 0x103448: 0xc089a76  jal         func_2269D8
label_10344c:
    if (ctx->pc == 0x10344Cu) {
        ctx->pc = 0x10344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103448u;
        // 0x10344c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103450u;
        goto label_103450;
    }
    ctx->pc = 0x103448u;
    SET_GPR_U32(ctx, 31, 0x103450u);
    ctx->pc = 0x10344Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103448u;
    // 0x10344c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2269D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269D8u, 0x103448u, 0x103450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103450u;
label_103450:
    // 0x103450: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x103450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103454:
    // 0x103454: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x103454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_103458:
    // 0x103458: 0xc089998  jal         func_226660
label_10345c:
    if (ctx->pc == 0x10345Cu) {
        ctx->pc = 0x10345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103458u;
        // 0x10345c: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103460u;
        goto label_103460;
    }
    ctx->pc = 0x103458u;
    SET_GPR_U32(ctx, 31, 0x103460u);
    ctx->pc = 0x10345Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103458u;
    // 0x10345c: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x103458u, 0x103460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103460u;
label_103460:
    // 0x103460: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_103464:
    if (ctx->pc == 0x103464u) {
        ctx->pc = 0x103468u;
        goto label_103468;
    }
    ctx->pc = 0x103460u;
    {
        const bool branch_taken_0x103460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103460) {
            ctx->pc = 0x103470u;
            goto label_103470;
        }
    }
    ctx->pc = 0x103468u;
label_103468:
    // 0x103468: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
label_10346c:
    if (ctx->pc == 0x10346Cu) {
        ctx->pc = 0x10346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103468u;
        // 0x10346c: 0x8e0300cc  lw          $v1, 0xCC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103470u;
        goto label_103470;
    }
    ctx->pc = 0x103468u;
    {
        const bool branch_taken_0x103468 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x103468) {
            ctx->pc = 0x10346Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103468u;
            // 0x10346c: 0x8e0300cc  lw          $v1, 0xCC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103488u;
            goto label_103488;
        }
    }
    ctx->pc = 0x103470u;
label_103470:
    // 0x103470: 0xc0e409a  jal         func_390268
label_103474:
    if (ctx->pc == 0x103474u) {
        ctx->pc = 0x103474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103470u;
        // 0x103474: 0x264400c4  addiu       $a0, $s2, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103478u;
        goto label_103478;
    }
    ctx->pc = 0x103470u;
    SET_GPR_U32(ctx, 31, 0x103478u);
    ctx->pc = 0x103474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103470u;
    // 0x103474: 0x264400c4  addiu       $a0, $s2, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x103470u, 0x103478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103478u;
label_103478:
    // 0x103478: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x103478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10347c:
    // 0x10347c: 0x5200025d  beql        $s0, $zero, . + 4 + (0x25D << 2)
label_103480:
    if (ctx->pc == 0x103480u) {
        ctx->pc = 0x103480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10347Cu;
        // 0x103480: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103484u;
        goto label_103484;
    }
    ctx->pc = 0x10347Cu;
    {
        const bool branch_taken_0x10347c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10347c) {
            ctx->pc = 0x103480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10347Cu;
            // 0x103480: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x103484u;
label_103484:
    // 0x103484: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x103484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_103488:
    // 0x103488: 0x2462ff89  addiu       $v0, $v1, -0x77
    ctx->pc = 0x103488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967177));
label_10348c:
    // 0x10348c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x10348cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_103490:
    // 0x103490: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_103494:
    if (ctx->pc == 0x103494u) {
        ctx->pc = 0x103494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103490u;
        // 0x103494: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103498u;
        goto label_103498;
    }
    ctx->pc = 0x103490u;
    {
        const bool branch_taken_0x103490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103490u;
        // 0x103494: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103490) {
            ctx->pc = 0x1034F0u;
            goto label_1034f0;
        }
    }
    ctx->pc = 0x103498u;
label_103498:
    // 0x103498: 0x240400ed  addiu       $a0, $zero, 0xED
    ctx->pc = 0x103498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
label_10349c:
    // 0x10349c: 0x10640013  beq         $v1, $a0, . + 4 + (0x13 << 2)
label_1034a0:
    if (ctx->pc == 0x1034A0u) {
        ctx->pc = 0x1034A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10349Cu;
        // 0x1034a0: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1034A4u;
        goto label_1034a4;
    }
    ctx->pc = 0x10349Cu;
    {
        const bool branch_taken_0x10349c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1034A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10349Cu;
        // 0x1034a0: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10349c) {
            ctx->pc = 0x1034ECu;
            goto label_1034ec;
        }
    }
    ctx->pc = 0x1034A4u;
label_1034a4:
    // 0x1034a4: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_1034a8:
    if (ctx->pc == 0x1034A8u) {
        ctx->pc = 0x1034A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034A4u;
        // 0x1034a8: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1034ACu;
        goto label_1034ac;
    }
    ctx->pc = 0x1034A4u;
    {
        const bool branch_taken_0x1034a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1034A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034A4u;
        // 0x1034a8: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1034a4) {
            ctx->pc = 0x1034ECu;
            goto label_1034ec;
        }
    }
    ctx->pc = 0x1034ACu;
label_1034ac:
    // 0x1034ac: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_1034b0:
    if (ctx->pc == 0x1034B0u) {
        ctx->pc = 0x1034B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034ACu;
        // 0x1034b0: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1034B4u;
        goto label_1034b4;
    }
    ctx->pc = 0x1034ACu;
    {
        const bool branch_taken_0x1034ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1034B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034ACu;
        // 0x1034b0: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1034ac) {
            ctx->pc = 0x1034ECu;
            goto label_1034ec;
        }
    }
    ctx->pc = 0x1034B4u;
label_1034b4:
    // 0x1034b4: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_1034b8:
    if (ctx->pc == 0x1034B8u) {
        ctx->pc = 0x1034B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034B4u;
        // 0x1034b8: 0x240200a1  addiu       $v0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1034BCu;
        goto label_1034bc;
    }
    ctx->pc = 0x1034B4u;
    {
        const bool branch_taken_0x1034b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1034B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034B4u;
        // 0x1034b8: 0x240200a1  addiu       $v0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1034b4) {
            ctx->pc = 0x1034ECu;
            goto label_1034ec;
        }
    }
    ctx->pc = 0x1034BCu;
label_1034bc:
    // 0x1034bc: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_1034c0:
    if (ctx->pc == 0x1034C0u) {
        ctx->pc = 0x1034C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034BCu;
        // 0x1034c0: 0x240200b2  addiu       $v0, $zero, 0xB2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1034C4u;
        goto label_1034c4;
    }
    ctx->pc = 0x1034BCu;
    {
        const bool branch_taken_0x1034bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1034C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034BCu;
        // 0x1034c0: 0x240200b2  addiu       $v0, $zero, 0xB2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1034bc) {
            ctx->pc = 0x1034ECu;
            goto label_1034ec;
        }
    }
    ctx->pc = 0x1034C4u;
label_1034c4:
    // 0x1034c4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_1034c8:
    if (ctx->pc == 0x1034C8u) {
        ctx->pc = 0x1034C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034C4u;
        // 0x1034c8: 0x240200b3  addiu       $v0, $zero, 0xB3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1034CCu;
        goto label_1034cc;
    }
    ctx->pc = 0x1034C4u;
    {
        const bool branch_taken_0x1034c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1034C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034C4u;
        // 0x1034c8: 0x240200b3  addiu       $v0, $zero, 0xB3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1034c4) {
            ctx->pc = 0x1034ECu;
            goto label_1034ec;
        }
    }
    ctx->pc = 0x1034CCu;
label_1034cc:
    // 0x1034cc: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_1034d0:
    if (ctx->pc == 0x1034D0u) {
        ctx->pc = 0x1034D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034CCu;
        // 0x1034d0: 0x2402004d  addiu       $v0, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1034D4u;
        goto label_1034d4;
    }
    ctx->pc = 0x1034CCu;
    {
        const bool branch_taken_0x1034cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1034D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034CCu;
        // 0x1034d0: 0x2402004d  addiu       $v0, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1034cc) {
            ctx->pc = 0x1034ECu;
            goto label_1034ec;
        }
    }
    ctx->pc = 0x1034D4u;
label_1034d4:
    // 0x1034d4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1034d8:
    if (ctx->pc == 0x1034D8u) {
        ctx->pc = 0x1034D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034D4u;
        // 0x1034d8: 0x2402004e  addiu       $v0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1034DCu;
        goto label_1034dc;
    }
    ctx->pc = 0x1034D4u;
    {
        const bool branch_taken_0x1034d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1034D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034D4u;
        // 0x1034d8: 0x2402004e  addiu       $v0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1034d4) {
            ctx->pc = 0x1034ECu;
            goto label_1034ec;
        }
    }
    ctx->pc = 0x1034DCu;
label_1034dc:
    // 0x1034dc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1034e0:
    if (ctx->pc == 0x1034E0u) {
        ctx->pc = 0x1034E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034DCu;
        // 0x1034e0: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1034E4u;
        goto label_1034e4;
    }
    ctx->pc = 0x1034DCu;
    {
        const bool branch_taken_0x1034dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1034E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034DCu;
        // 0x1034e0: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1034dc) {
            ctx->pc = 0x1034ECu;
            goto label_1034ec;
        }
    }
    ctx->pc = 0x1034E4u;
label_1034e4:
    // 0x1034e4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1034e8:
    if (ctx->pc == 0x1034E8u) {
        ctx->pc = 0x1034E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034E4u;
        // 0x1034e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1034ECu;
        goto label_1034ec;
    }
    ctx->pc = 0x1034E4u;
    {
        const bool branch_taken_0x1034e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1034E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034E4u;
        // 0x1034e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1034e4) {
            ctx->pc = 0x1034F0u;
            goto label_1034f0;
        }
    }
    ctx->pc = 0x1034ECu;
label_1034ec:
    // 0x1034ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1034ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1034f0:
    // 0x1034f0: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x1034f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_1034f4:
    // 0x1034f4: 0x5200023f  beql        $s0, $zero, . + 4 + (0x23F << 2)
label_1034f8:
    if (ctx->pc == 0x1034F8u) {
        ctx->pc = 0x1034F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034F4u;
        // 0x1034f8: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1034FCu;
        goto label_1034fc;
    }
    ctx->pc = 0x1034F4u;
    {
        const bool branch_taken_0x1034f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1034f4) {
            ctx->pc = 0x1034F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1034F4u;
            // 0x1034f8: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x1034FCu;
label_1034fc:
    // 0x1034fc: 0x820401b0  lb          $a0, 0x1B0($s0)
    ctx->pc = 0x1034fcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_103500:
    // 0x103500: 0x41027  nor         $v0, $zero, $a0
    ctx->pc = 0x103500u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
label_103504:
    // 0x103504: 0x5040023b  beql        $v0, $zero, . + 4 + (0x23B << 2)
label_103508:
    if (ctx->pc == 0x103508u) {
        ctx->pc = 0x103508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103504u;
        // 0x103508: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10350Cu;
        goto label_10350c;
    }
    ctx->pc = 0x103504u;
    {
        const bool branch_taken_0x103504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103504) {
            ctx->pc = 0x103508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103504u;
            // 0x103508: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x10350Cu;
label_10350c:
    // 0x10350c: 0xc047e6c  jal         func_11F9B0
label_103510:
    if (ctx->pc == 0x103510u) {
        ctx->pc = 0x103514u;
        goto label_103514;
    }
    ctx->pc = 0x10350Cu;
    SET_GPR_U32(ctx, 31, 0x103514u);
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x10350Cu, 0x103514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103514u;
label_103514:
    // 0x103514: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x103514u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103518:
    // 0x103518: 0x55000008  bnel        $t0, $zero, . + 4 + (0x8 << 2)
label_10351c:
    if (ctx->pc == 0x10351Cu) {
        ctx->pc = 0x10351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103518u;
        // 0x10351c: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103520u;
        goto label_103520;
    }
    ctx->pc = 0x103518u;
    {
        const bool branch_taken_0x103518 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x103518) {
            ctx->pc = 0x10351Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103518u;
            // 0x10351c: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10353Cu;
            goto label_10353c;
        }
    }
    ctx->pc = 0x103520u;
label_103520:
    // 0x103520: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x103520u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_103524:
    // 0x103524: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
label_103528:
    if (ctx->pc == 0x103528u) {
        ctx->pc = 0x103528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103524u;
        // 0x103528: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10352Cu;
        goto label_10352c;
    }
    ctx->pc = 0x103524u;
    {
        const bool branch_taken_0x103524 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x103524) {
            ctx->pc = 0x103528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103524u;
            // 0x103528: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10353Cu;
            goto label_10353c;
        }
    }
    ctx->pc = 0x10352Cu;
label_10352c:
    // 0x10352c: 0xc047e6c  jal         func_11F9B0
label_103530:
    if (ctx->pc == 0x103530u) {
        ctx->pc = 0x103530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10352Cu;
        // 0x103530: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103534u;
        goto label_103534;
    }
    ctx->pc = 0x10352Cu;
    SET_GPR_U32(ctx, 31, 0x103534u);
    ctx->pc = 0x103530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10352Cu;
    // 0x103530: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x10352Cu, 0x103534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103534u;
label_103534:
    // 0x103534: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x103534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103538:
    // 0x103538: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x103538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_10353c:
    // 0x10353c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10353cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_103540:
    // 0x103540: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x103540u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_103544:
    // 0x103544: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x103544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_103548:
    // 0x103548: 0x84440158  lh          $a0, 0x158($v0)
    ctx->pc = 0x103548u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 344)));
label_10354c:
    // 0x10354c: 0x8c43015c  lw          $v1, 0x15C($v0)
    ctx->pc = 0x10354cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
label_103550:
    // 0x103550: 0x60f809  jalr        $v1
label_103554:
    if (ctx->pc == 0x103554u) {
        ctx->pc = 0x103554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103550u;
        // 0x103554: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103558u;
        goto label_103558;
    }
    ctx->pc = 0x103550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x103558u);
        ctx->pc = 0x103554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103550u;
        // 0x103554: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103550u, 0x103558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103558u;
label_103558:
    // 0x103558: 0x10000226  b           . + 4 + (0x226 << 2)
label_10355c:
    if (ctx->pc == 0x10355Cu) {
        ctx->pc = 0x10355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103558u;
        // 0x10355c: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103560u;
        goto label_103560;
    }
    ctx->pc = 0x103558u;
    {
        const bool branch_taken_0x103558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103558u;
        // 0x10355c: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103558) {
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x103560u;
label_103560:
    // 0x103560: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_103564:
    if (ctx->pc == 0x103564u) {
        ctx->pc = 0x103564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103560u;
        // 0x103564: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103568u;
        goto label_103568;
    }
    ctx->pc = 0x103560u;
    {
        const bool branch_taken_0x103560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x103564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103560u;
        // 0x103564: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103560) {
            ctx->pc = 0x103584u;
            goto label_103584;
        }
    }
    ctx->pc = 0x103568u;
label_103568:
    // 0x103568: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x103568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_10356c:
    // 0x10356c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10356cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_103570:
    // 0x103570: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x103570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_103574:
    // 0x103574: 0xc1073de  jal         func_41CF78
label_103578:
    if (ctx->pc == 0x103578u) {
        ctx->pc = 0x103578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103574u;
        // 0x103578: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10357Cu;
        goto label_10357c;
    }
    ctx->pc = 0x103574u;
    SET_GPR_U32(ctx, 31, 0x10357Cu);
    ctx->pc = 0x103578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103574u;
    // 0x103578: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF78u, 0x103574u, 0x10357Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10357Cu;
label_10357c:
    // 0x10357c: 0x1000021d  b           . + 4 + (0x21D << 2)
label_103580:
    if (ctx->pc == 0x103580u) {
        ctx->pc = 0x103580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10357Cu;
        // 0x103580: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103584u;
        goto label_103584;
    }
    ctx->pc = 0x10357Cu;
    {
        const bool branch_taken_0x10357c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10357Cu;
        // 0x103580: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10357c) {
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x103584u;
label_103584:
    // 0x103584: 0x14620042  bne         $v1, $v0, . + 4 + (0x42 << 2)
label_103588:
    if (ctx->pc == 0x103588u) {
        ctx->pc = 0x103588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103584u;
        // 0x103588: 0x24020027  addiu       $v0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10358Cu;
        goto label_10358c;
    }
    ctx->pc = 0x103584u;
    {
        const bool branch_taken_0x103584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x103588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103584u;
        // 0x103588: 0x24020027  addiu       $v0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103584) {
            ctx->pc = 0x103690u;
            goto label_103690;
        }
    }
    ctx->pc = 0x10358Cu;
label_10358c:
    // 0x10358c: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x10358cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_103590:
    // 0x103590: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x103590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_103594:
    // 0x103594: 0x2625000e  addiu       $a1, $s1, 0xE
    ctx->pc = 0x103594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 14));
label_103598:
    // 0x103598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x103598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10359c:
    // 0x10359c: 0x0  nop
    ctx->pc = 0x10359cu;
    // NOP
label_1035a0:
    // 0x1035a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1035a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1035a4:
    // 0x1035a4: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1035a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_1035a8:
    // 0x1035a8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1035a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1035ac:
    // 0x1035ac: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x1035acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_1035b0:
    // 0x1035b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1035b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1035b4:
    // 0x1035b4: 0x0  nop
    ctx->pc = 0x1035b4u;
    // NOP
label_1035b8:
    // 0x1035b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1035b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1035bc:
    // 0x1035bc: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1035bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_1035c0:
    // 0x1035c0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1035c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1035c4:
    // 0x1035c4: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x1035c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_1035c8:
    // 0x1035c8: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x1035c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1035cc:
    // 0x1035cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1035ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1035d0:
    // 0x1035d0: 0x0  nop
    ctx->pc = 0x1035d0u;
    // NOP
label_1035d4:
    // 0x1035d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1035d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1035d8:
    // 0x1035d8: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x1035d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_1035dc:
    // 0x1035dc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1035dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1035e0:
    // 0x1035e0: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x1035e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_1035e4:
    // 0x1035e4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1035e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1035e8:
    // 0x1035e8: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x1035e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_1035ec:
    // 0x1035ec: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x1035ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_1035f0:
    // 0x1035f0: 0x84a40004  lh          $a0, 0x4($a1)
    ctx->pc = 0x1035f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_1035f4:
    // 0x1035f4: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1035f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_1035f8:
    // 0x1035f8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1035f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1035fc:
    // 0x1035fc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1035fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_103600:
    // 0x103600: 0x3c033800  lui         $v1, 0x3800
    ctx->pc = 0x103600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14336 << 16));
label_103604:
    // 0x103604: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x103604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_103608:
    // 0x103608: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x103608u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_10360c:
    // 0x10360c: 0x4bc3093c  vitof0.xyz  $vf3, $vf1
    ctx->pc = 0x10360cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_103610:
    // 0x103610: 0x4bc21858  vmulx.xyz   $vf1, $vf3, $vf2x
    ctx->pc = 0x103610u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_103614:
    // 0x103614: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x103614u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_103618:
    // 0x103618: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x103618u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_10361c:
    // 0x10361c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x10361cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_103620:
    // 0x103620: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x103620u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_103624:
    // 0x103624: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x103624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_103628:
    // 0x103628: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x103628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_10362c:
    // 0x10362c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x10362cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_103630:
    // 0x103630: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x103630u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_103634:
    // 0x103634: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x103634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_103638:
    // 0x103638: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x103638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_10363c:
    // 0x10363c: 0x24a567c8  addiu       $a1, $a1, 0x67C8
    ctx->pc = 0x10363cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26568));
label_103640:
    // 0x103640: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x103640u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_103644:
    // 0x103644: 0xa3a0005f  sb          $zero, 0x5F($sp)
    ctx->pc = 0x103644u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 95), (uint8_t)GPR_U32(ctx, 0));
label_103648:
    // 0x103648: 0x0  nop
    ctx->pc = 0x103648u;
    // NOP
label_10364c:
    // 0x10364c: 0x0  nop
    ctx->pc = 0x10364cu;
    // NOP
label_103650:
    // 0x103650: 0x46000004  c1          0x4
    ctx->pc = 0x103650u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_103654:
    // 0x103654: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x103654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_103658:
    // 0x103658: 0xc10c4de  jal         func_431378
label_10365c:
    if (ctx->pc == 0x10365Cu) {
        ctx->pc = 0x10365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103658u;
        // 0x10365c: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x103660u;
        goto label_103660;
    }
    ctx->pc = 0x103658u;
    SET_GPR_U32(ctx, 31, 0x103660u);
    ctx->pc = 0x10365Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103658u;
    // 0x10365c: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x103658u, 0x103660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103660u;
label_103660:
    // 0x103660: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x103660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_103664:
    // 0x103664: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x103664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_103668:
    // 0x103668: 0xc10c3fe  jal         func_430FF8
label_10366c:
    if (ctx->pc == 0x10366Cu) {
        ctx->pc = 0x10366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103668u;
        // 0x10366c: 0x2406003b  addiu       $a2, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103670u;
        goto label_103670;
    }
    ctx->pc = 0x103668u;
    SET_GPR_U32(ctx, 31, 0x103670u);
    ctx->pc = 0x10366Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103668u;
    // 0x10366c: 0x2406003b  addiu       $a2, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430FF8u, 0x103668u, 0x103670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103670u;
label_103670:
    // 0x103670: 0x86260006  lh          $a2, 0x6($s1)
    ctx->pc = 0x103670u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_103674:
    // 0x103674: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x103674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_103678:
    // 0x103678: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x103678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_10367c:
    // 0x10367c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x10367cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_103680:
    // 0x103680: 0xc087792  jal         func_21DE48
label_103684:
    if (ctx->pc == 0x103684u) {
        ctx->pc = 0x103684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103680u;
        // 0x103684: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103688u;
        goto label_103688;
    }
    ctx->pc = 0x103680u;
    SET_GPR_U32(ctx, 31, 0x103688u);
    ctx->pc = 0x103684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103680u;
    // 0x103684: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DE48u, 0x103680u, 0x103688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103688u;
label_103688:
    // 0x103688: 0x100001da  b           . + 4 + (0x1DA << 2)
label_10368c:
    if (ctx->pc == 0x10368Cu) {
        ctx->pc = 0x10368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103688u;
        // 0x10368c: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103690u;
        goto label_103690;
    }
    ctx->pc = 0x103688u;
    {
        const bool branch_taken_0x103688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103688u;
        // 0x10368c: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103688) {
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x103690u;
label_103690:
    // 0x103690: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_103694:
    if (ctx->pc == 0x103694u) {
        ctx->pc = 0x103694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103690u;
        // 0x103694: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103698u;
        goto label_103698;
    }
    ctx->pc = 0x103690u;
    {
        const bool branch_taken_0x103690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x103694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103690u;
        // 0x103694: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103690) {
            ctx->pc = 0x1036ACu;
            goto label_1036ac;
        }
    }
    ctx->pc = 0x103698u;
label_103698:
    // 0x103698: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x103698u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_10369c:
    // 0x10369c: 0xc10c978  jal         func_4325E0
label_1036a0:
    if (ctx->pc == 0x1036A0u) {
        ctx->pc = 0x1036A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10369Cu;
        // 0x1036a0: 0x248467d0  addiu       $a0, $a0, 0x67D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1036A4u;
        goto label_1036a4;
    }
    ctx->pc = 0x10369Cu;
    SET_GPR_U32(ctx, 31, 0x1036A4u);
    ctx->pc = 0x1036A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10369Cu;
    // 0x1036a0: 0x248467d0  addiu       $a0, $a0, 0x67D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4325E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4325E0u, 0x10369Cu, 0x1036A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1036A4u;
label_1036a4:
    // 0x1036a4: 0x100001d3  b           . + 4 + (0x1D3 << 2)
label_1036a8:
    if (ctx->pc == 0x1036A8u) {
        ctx->pc = 0x1036A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036A4u;
        // 0x1036a8: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1036ACu;
        goto label_1036ac;
    }
    ctx->pc = 0x1036A4u;
    {
        const bool branch_taken_0x1036a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1036A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036A4u;
        // 0x1036a8: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1036a4) {
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x1036ACu;
label_1036ac:
    // 0x1036ac: 0x106201d0  beq         $v1, $v0, . + 4 + (0x1D0 << 2)
label_1036b0:
    if (ctx->pc == 0x1036B0u) {
        ctx->pc = 0x1036B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036ACu;
        // 0x1036b0: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1036B4u;
        goto label_1036b4;
    }
    ctx->pc = 0x1036ACu;
    {
        const bool branch_taken_0x1036ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1036B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036ACu;
        // 0x1036b0: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1036ac) {
            ctx->pc = 0x103DF0u;
            goto label_103df0;
        }
    }
    ctx->pc = 0x1036B4u;
label_1036b4:
    // 0x1036b4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1036b8:
    if (ctx->pc == 0x1036B8u) {
        ctx->pc = 0x1036B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036B4u;
        // 0x1036b8: 0x30a3ffff  andi        $v1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1036BCu;
        goto label_1036bc;
    }
    ctx->pc = 0x1036B4u;
    {
        const bool branch_taken_0x1036b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1036B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036B4u;
        // 0x1036b8: 0x30a3ffff  andi        $v1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1036b4) {
            ctx->pc = 0x1036D4u;
            goto label_1036d4;
        }
    }
    ctx->pc = 0x1036BCu;
label_1036bc:
    // 0x1036bc: 0xc0e8b48  jal         func_3A2D20
label_1036c0:
    if (ctx->pc == 0x1036C0u) {
        ctx->pc = 0x1036C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036BCu;
        // 0x1036c0: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1036C4u;
        goto label_1036c4;
    }
    ctx->pc = 0x1036BCu;
    SET_GPR_U32(ctx, 31, 0x1036C4u);
    ctx->pc = 0x1036C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1036BCu;
    // 0x1036c0: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x1036BCu, 0x1036C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1036C4u;
label_1036c4:
    // 0x1036c4: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x1036c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_1036c8:
    // 0x1036c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1036c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1036cc:
    // 0x1036cc: 0x100001aa  b           . + 4 + (0x1AA << 2)
label_1036d0:
    if (ctx->pc == 0x1036D0u) {
        ctx->pc = 0x1036D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036CCu;
        // 0x1036d0: 0x240600c1  addiu       $a2, $zero, 0xC1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1036D4u;
        goto label_1036d4;
    }
    ctx->pc = 0x1036CCu;
    {
        const bool branch_taken_0x1036cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1036D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036CCu;
        // 0x1036d0: 0x240600c1  addiu       $a2, $zero, 0xC1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1036cc) {
            ctx->pc = 0x103D78u;
            goto label_103d78;
        }
    }
    ctx->pc = 0x1036D4u;
label_1036d4:
    // 0x1036d4: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x1036d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_1036d8:
    // 0x1036d8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1036dc:
    if (ctx->pc == 0x1036DCu) {
        ctx->pc = 0x1036DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036D8u;
        // 0x1036dc: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1036E0u;
        goto label_1036e0;
    }
    ctx->pc = 0x1036D8u;
    {
        const bool branch_taken_0x1036d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1036DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036D8u;
        // 0x1036dc: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1036d8) {
            ctx->pc = 0x1036F8u;
            goto label_1036f8;
        }
    }
    ctx->pc = 0x1036E0u;
label_1036e0:
    // 0x1036e0: 0xc0e8b48  jal         func_3A2D20
label_1036e4:
    if (ctx->pc == 0x1036E4u) {
        ctx->pc = 0x1036E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036E0u;
        // 0x1036e4: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1036E8u;
        goto label_1036e8;
    }
    ctx->pc = 0x1036E0u;
    SET_GPR_U32(ctx, 31, 0x1036E8u);
    ctx->pc = 0x1036E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1036E0u;
    // 0x1036e4: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x1036E0u, 0x1036E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1036E8u;
label_1036e8:
    // 0x1036e8: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x1036e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_1036ec:
    // 0x1036ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1036ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1036f0:
    // 0x1036f0: 0x100001a1  b           . + 4 + (0x1A1 << 2)
label_1036f4:
    if (ctx->pc == 0x1036F4u) {
        ctx->pc = 0x1036F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036F0u;
        // 0x1036f4: 0x240600c3  addiu       $a2, $zero, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1036F8u;
        goto label_1036f8;
    }
    ctx->pc = 0x1036F0u;
    {
        const bool branch_taken_0x1036f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1036F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036F0u;
        // 0x1036f4: 0x240600c3  addiu       $a2, $zero, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1036f0) {
            ctx->pc = 0x103D78u;
            goto label_103d78;
        }
    }
    ctx->pc = 0x1036F8u;
label_1036f8:
    // 0x1036f8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1036fc:
    if (ctx->pc == 0x1036FCu) {
        ctx->pc = 0x1036FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036F8u;
        // 0x1036fc: 0x24020042  addiu       $v0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103700u;
        goto label_103700;
    }
    ctx->pc = 0x1036F8u;
    {
        const bool branch_taken_0x1036f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1036FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036F8u;
        // 0x1036fc: 0x24020042  addiu       $v0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1036f8) {
            ctx->pc = 0x103718u;
            goto label_103718;
        }
    }
    ctx->pc = 0x103700u;
label_103700:
    // 0x103700: 0xc0e8b48  jal         func_3A2D20
label_103704:
    if (ctx->pc == 0x103704u) {
        ctx->pc = 0x103704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103700u;
        // 0x103704: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103708u;
        goto label_103708;
    }
    ctx->pc = 0x103700u;
    SET_GPR_U32(ctx, 31, 0x103708u);
    ctx->pc = 0x103704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103700u;
    // 0x103704: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x103700u, 0x103708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103708u;
label_103708:
    // 0x103708: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x103708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_10370c:
    // 0x10370c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10370cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_103710:
    // 0x103710: 0x10000199  b           . + 4 + (0x199 << 2)
label_103714:
    if (ctx->pc == 0x103714u) {
        ctx->pc = 0x103714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103710u;
        // 0x103714: 0x240600c4  addiu       $a2, $zero, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103718u;
        goto label_103718;
    }
    ctx->pc = 0x103710u;
    {
        const bool branch_taken_0x103710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103710u;
        // 0x103714: 0x240600c4  addiu       $a2, $zero, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103710) {
            ctx->pc = 0x103D78u;
            goto label_103d78;
        }
    }
    ctx->pc = 0x103718u;
label_103718:
    // 0x103718: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_10371c:
    if (ctx->pc == 0x10371Cu) {
        ctx->pc = 0x10371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103718u;
        // 0x10371c: 0x24020038  addiu       $v0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103720u;
        goto label_103720;
    }
    ctx->pc = 0x103718u;
    {
        const bool branch_taken_0x103718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103718u;
        // 0x10371c: 0x24020038  addiu       $v0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103718) {
            ctx->pc = 0x103738u;
            goto label_103738;
        }
    }
    ctx->pc = 0x103720u;
label_103720:
    // 0x103720: 0xc0e8b48  jal         func_3A2D20
label_103724:
    if (ctx->pc == 0x103724u) {
        ctx->pc = 0x103724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103720u;
        // 0x103724: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103728u;
        goto label_103728;
    }
    ctx->pc = 0x103720u;
    SET_GPR_U32(ctx, 31, 0x103728u);
    ctx->pc = 0x103724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103720u;
    // 0x103724: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x103720u, 0x103728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103728u;
label_103728:
    // 0x103728: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x103728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_10372c:
    // 0x10372c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10372cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_103730:
    // 0x103730: 0x10000191  b           . + 4 + (0x191 << 2)
label_103734:
    if (ctx->pc == 0x103734u) {
        ctx->pc = 0x103734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103730u;
        // 0x103734: 0x240600c2  addiu       $a2, $zero, 0xC2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103738u;
        goto label_103738;
    }
    ctx->pc = 0x103730u;
    {
        const bool branch_taken_0x103730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103730u;
        // 0x103734: 0x240600c2  addiu       $a2, $zero, 0xC2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103730) {
            ctx->pc = 0x103D78u;
            goto label_103d78;
        }
    }
    ctx->pc = 0x103738u;
label_103738:
    // 0x103738: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
label_10373c:
    if (ctx->pc == 0x10373Cu) {
        ctx->pc = 0x10373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103738u;
        // 0x10373c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103740u;
        goto label_103740;
    }
    ctx->pc = 0x103738u;
    {
        const bool branch_taken_0x103738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103738u;
        // 0x10373c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103738) {
            ctx->pc = 0x1037C4u;
            goto label_1037c4;
        }
    }
    ctx->pc = 0x103740u;
label_103740:
    // 0x103740: 0xc089bfc  jal         func_226FF0
label_103744:
    if (ctx->pc == 0x103744u) {
        ctx->pc = 0x103744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103740u;
        // 0x103744: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103748u;
        goto label_103748;
    }
    ctx->pc = 0x103740u;
    SET_GPR_U32(ctx, 31, 0x103748u);
    ctx->pc = 0x103744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103740u;
    // 0x103744: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x103740u, 0x103748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103748u;
label_103748:
    // 0x103748: 0xc0e57ce  jal         func_395F38
label_10374c:
    if (ctx->pc == 0x10374Cu) {
        ctx->pc = 0x10374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103748u;
        // 0x10374c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103750u;
        goto label_103750;
    }
    ctx->pc = 0x103748u;
    SET_GPR_U32(ctx, 31, 0x103750u);
    ctx->pc = 0x10374Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103748u;
    // 0x10374c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x103748u, 0x103750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103750u;
label_103750:
    // 0x103750: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x103750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103754:
    // 0x103754: 0x520001a7  beql        $s0, $zero, . + 4 + (0x1A7 << 2)
label_103758:
    if (ctx->pc == 0x103758u) {
        ctx->pc = 0x103758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103754u;
        // 0x103758: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10375Cu;
        goto label_10375c;
    }
    ctx->pc = 0x103754u;
    {
        const bool branch_taken_0x103754 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x103754) {
            ctx->pc = 0x103758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103754u;
            // 0x103758: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x10375Cu;
label_10375c:
    // 0x10375c: 0xc08c68e  jal         func_231A38
label_103760:
    if (ctx->pc == 0x103760u) {
        ctx->pc = 0x103760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10375Cu;
        // 0x103760: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103764u;
        goto label_103764;
    }
    ctx->pc = 0x10375Cu;
    SET_GPR_U32(ctx, 31, 0x103764u);
    ctx->pc = 0x103760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10375Cu;
    // 0x103760: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A38u, 0x10375Cu, 0x103764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103764u;
label_103764:
    // 0x103764: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x103764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_103768:
    // 0x103768: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_10376c:
    if (ctx->pc == 0x10376Cu) {
        ctx->pc = 0x103770u;
        goto label_103770;
    }
    ctx->pc = 0x103768u;
    {
        const bool branch_taken_0x103768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x103768) {
            ctx->pc = 0x103784u;
            goto label_103784;
        }
    }
    ctx->pc = 0x103770u;
label_103770:
    // 0x103770: 0xc08c68e  jal         func_231A38
label_103774:
    if (ctx->pc == 0x103774u) {
        ctx->pc = 0x103774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103770u;
        // 0x103774: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103778u;
        goto label_103778;
    }
    ctx->pc = 0x103770u;
    SET_GPR_U32(ctx, 31, 0x103778u);
    ctx->pc = 0x103774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103770u;
    // 0x103774: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A38u, 0x103770u, 0x103778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103778u;
label_103778:
    // 0x103778: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x103778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_10377c:
    // 0x10377c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_103780:
    if (ctx->pc == 0x103780u) {
        ctx->pc = 0x103784u;
        goto label_103784;
    }
    ctx->pc = 0x10377Cu;
    {
        const bool branch_taken_0x10377c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10377c) {
            ctx->pc = 0x1037A8u;
            goto label_1037a8;
        }
    }
    ctx->pc = 0x103784u;
label_103784:
    // 0x103784: 0xc095fce  jal         func_257F38
label_103788:
    if (ctx->pc == 0x103788u) {
        ctx->pc = 0x103788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103784u;
        // 0x103788: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10378Cu;
        goto label_10378c;
    }
    ctx->pc = 0x103784u;
    SET_GPR_U32(ctx, 31, 0x10378Cu);
    ctx->pc = 0x103788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103784u;
    // 0x103788: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x103784u, 0x10378Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10378Cu;
label_10378c:
    // 0x10378c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10378cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_103790:
    // 0x103790: 0xc0404a2  jal         func_101288
label_103794:
    if (ctx->pc == 0x103794u) {
        ctx->pc = 0x103794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103790u;
        // 0x103794: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103798u;
        goto label_103798;
    }
    ctx->pc = 0x103790u;
    SET_GPR_U32(ctx, 31, 0x103798u);
    ctx->pc = 0x103794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103790u;
    // 0x103794: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101288u, 0x103790u, 0x103798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103798u;
label_103798:
    // 0x103798: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x103798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_10379c:
    // 0x10379c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10379cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1037a0:
    // 0x1037a0: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1037a4:
    if (ctx->pc == 0x1037A4u) {
        ctx->pc = 0x1037A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037A0u;
        // 0x1037a4: 0x24a567e0  addiu       $a1, $a1, 0x67E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1037A8u;
        goto label_1037a8;
    }
    ctx->pc = 0x1037A0u;
    {
        const bool branch_taken_0x1037a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1037A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037A0u;
        // 0x1037a4: 0x24a567e0  addiu       $a1, $a1, 0x67E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1037a0) {
            ctx->pc = 0x10389Cu;
            goto label_10389c;
        }
    }
    ctx->pc = 0x1037A8u;
label_1037a8:
    // 0x1037a8: 0xc095fce  jal         func_257F38
label_1037ac:
    if (ctx->pc == 0x1037ACu) {
        ctx->pc = 0x1037ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037A8u;
        // 0x1037ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1037B0u;
        goto label_1037b0;
    }
    ctx->pc = 0x1037A8u;
    SET_GPR_U32(ctx, 31, 0x1037B0u);
    ctx->pc = 0x1037ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1037A8u;
    // 0x1037ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x1037A8u, 0x1037B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1037B0u;
label_1037b0:
    // 0x1037b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1037b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1037b4:
    // 0x1037b4: 0xc0404a2  jal         func_101288
label_1037b8:
    if (ctx->pc == 0x1037B8u) {
        ctx->pc = 0x1037B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037B4u;
        // 0x1037b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1037BCu;
        goto label_1037bc;
    }
    ctx->pc = 0x1037B4u;
    SET_GPR_U32(ctx, 31, 0x1037BCu);
    ctx->pc = 0x1037B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1037B4u;
    // 0x1037b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101288u, 0x1037B4u, 0x1037BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1037BCu;
label_1037bc:
    // 0x1037bc: 0x1000018d  b           . + 4 + (0x18D << 2)
label_1037c0:
    if (ctx->pc == 0x1037C0u) {
        ctx->pc = 0x1037C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037BCu;
        // 0x1037c0: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1037C4u;
        goto label_1037c4;
    }
    ctx->pc = 0x1037BCu;
    {
        const bool branch_taken_0x1037bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1037C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037BCu;
        // 0x1037c0: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1037bc) {
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x1037C4u;
label_1037c4:
    // 0x1037c4: 0x1462003a  bne         $v1, $v0, . + 4 + (0x3A << 2)
label_1037c8:
    if (ctx->pc == 0x1037C8u) {
        ctx->pc = 0x1037C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037C4u;
        // 0x1037c8: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1037CCu;
        goto label_1037cc;
    }
    ctx->pc = 0x1037C4u;
    {
        const bool branch_taken_0x1037c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1037C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037C4u;
        // 0x1037c8: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1037c4) {
            ctx->pc = 0x1038B0u;
            goto label_1038b0;
        }
    }
    ctx->pc = 0x1037CCu;
label_1037cc:
    // 0x1037cc: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x1037ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_1037d0:
    // 0x1037d0: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1037d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_1037d4:
    // 0x1037d4: 0x24a567f8  addiu       $a1, $a1, 0x67F8
    ctx->pc = 0x1037d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26616));
label_1037d8:
    // 0x1037d8: 0xc10c313  jal         func_430C4C
label_1037dc:
    if (ctx->pc == 0x1037DCu) {
        ctx->pc = 0x1037DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037D8u;
        // 0x1037dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1037E0u;
        goto label_1037e0;
    }
    ctx->pc = 0x1037D8u;
    SET_GPR_U32(ctx, 31, 0x1037E0u);
    ctx->pc = 0x1037DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1037D8u;
    // 0x1037dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x1037D8u, 0x1037E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1037E0u;
label_1037e0:
    // 0x1037e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1037e4:
    if (ctx->pc == 0x1037E4u) {
        ctx->pc = 0x1037E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037E0u;
        // 0x1037e4: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1037E8u;
        goto label_1037e8;
    }
    ctx->pc = 0x1037E0u;
    {
        const bool branch_taken_0x1037e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1037E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037E0u;
        // 0x1037e4: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1037e0) {
            ctx->pc = 0x103800u;
            goto label_103800;
        }
    }
    ctx->pc = 0x1037E8u;
label_1037e8:
    // 0x1037e8: 0xc087502  jal         func_21D408
label_1037ec:
    if (ctx->pc == 0x1037ECu) {
        ctx->pc = 0x1037ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037E8u;
        // 0x1037ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1037F0u;
        goto label_1037f0;
    }
    ctx->pc = 0x1037E8u;
    SET_GPR_U32(ctx, 31, 0x1037F0u);
    ctx->pc = 0x1037ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1037E8u;
    // 0x1037ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1037E8u, 0x1037F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1037F0u;
label_1037f0:
    // 0x1037f0: 0xc0a31e0  jal         func_28C780
label_1037f4:
    if (ctx->pc == 0x1037F4u) {
        ctx->pc = 0x1037F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037F0u;
        // 0x1037f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1037F8u;
        goto label_1037f8;
    }
    ctx->pc = 0x1037F0u;
    SET_GPR_U32(ctx, 31, 0x1037F8u);
    ctx->pc = 0x1037F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1037F0u;
    // 0x1037f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C780u, 0x1037F0u, 0x1037F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1037F8u;
label_1037f8:
    // 0x1037f8: 0x1000017e  b           . + 4 + (0x17E << 2)
label_1037fc:
    if (ctx->pc == 0x1037FCu) {
        ctx->pc = 0x1037FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037F8u;
        // 0x1037fc: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103800u;
        goto label_103800;
    }
    ctx->pc = 0x1037F8u;
    {
        const bool branch_taken_0x1037f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1037FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037F8u;
        // 0x1037fc: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1037f8) {
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x103800u;
label_103800:
    // 0x103800: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x103800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_103804:
    // 0x103804: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x103804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_103808:
    // 0x103808: 0xc10c1fa  jal         func_4307E8
label_10380c:
    if (ctx->pc == 0x10380Cu) {
        ctx->pc = 0x10380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103808u;
        // 0x10380c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103810u;
        goto label_103810;
    }
    ctx->pc = 0x103808u;
    SET_GPR_U32(ctx, 31, 0x103810u);
    ctx->pc = 0x10380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103808u;
    // 0x10380c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x103808u, 0x103810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103810u;
label_103810:
    // 0x103810: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x103810u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_103814:
    // 0x103814: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x103814u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_103818:
    // 0x103818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x103818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10381c:
    // 0x10381c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x10381cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_103820:
    // 0x103820: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x103820u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_103824:
    // 0x103824: 0xc10ca04  jal         func_432810
label_103828:
    if (ctx->pc == 0x103828u) {
        ctx->pc = 0x103828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103824u;
        // 0x103828: 0x24c66800  addiu       $a2, $a2, 0x6800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10382Cu;
        goto label_10382c;
    }
    ctx->pc = 0x103824u;
    SET_GPR_U32(ctx, 31, 0x10382Cu);
    ctx->pc = 0x103828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103824u;
    // 0x103828: 0x24c66800  addiu       $a2, $a2, 0x6800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x103824u, 0x10382Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10382Cu;
label_10382c:
    // 0x10382c: 0x8e642c04  lw          $a0, 0x2C04($s3)
    ctx->pc = 0x10382cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11268)));
label_103830:
    // 0x103830: 0xc0e44f6  jal         func_3913D8
label_103834:
    if (ctx->pc == 0x103834u) {
        ctx->pc = 0x103834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103830u;
        // 0x103834: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103838u;
        goto label_103838;
    }
    ctx->pc = 0x103830u;
    SET_GPR_U32(ctx, 31, 0x103838u);
    ctx->pc = 0x103834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103830u;
    // 0x103834: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3913D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3913D8u, 0x103830u, 0x103838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103838u;
label_103838:
    // 0x103838: 0x440016d  bltz        $v0, . + 4 + (0x16D << 2)
label_10383c:
    if (ctx->pc == 0x10383Cu) {
        ctx->pc = 0x10383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103838u;
        // 0x10383c: 0x8e642c04  lw          $a0, 0x2C04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103840u;
        goto label_103840;
    }
    ctx->pc = 0x103838u;
    {
        const bool branch_taken_0x103838 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x10383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103838u;
        // 0x10383c: 0x8e642c04  lw          $a0, 0x2C04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103838) {
            ctx->pc = 0x103DF0u;
            goto label_103df0;
        }
    }
    ctx->pc = 0x103840u;
label_103840:
    // 0x103840: 0xc0e44cc  jal         func_391330
label_103844:
    if (ctx->pc == 0x103844u) {
        ctx->pc = 0x103844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103840u;
        // 0x103844: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103848u;
        goto label_103848;
    }
    ctx->pc = 0x103840u;
    SET_GPR_U32(ctx, 31, 0x103848u);
    ctx->pc = 0x103844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103840u;
    // 0x103844: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x103840u, 0x103848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103848u;
label_103848:
    // 0x103848: 0x80430065  lb          $v1, 0x65($v0)
    ctx->pc = 0x103848u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 101)));
label_10384c:
    // 0x10384c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x10384cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_103850:
    // 0x103850: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_103854:
    if (ctx->pc == 0x103854u) {
        ctx->pc = 0x103854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103850u;
        // 0x103854: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103858u;
        goto label_103858;
    }
    ctx->pc = 0x103850u;
    {
        const bool branch_taken_0x103850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x103854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103850u;
        // 0x103854: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103850) {
            ctx->pc = 0x10387Cu;
            goto label_10387c;
        }
    }
    ctx->pc = 0x103858u;
label_103858:
    // 0x103858: 0xc0e4060  jal         func_390180
label_10385c:
    if (ctx->pc == 0x10385Cu) {
        ctx->pc = 0x10385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103858u;
        // 0x10385c: 0x26440348  addiu       $a0, $s2, 0x348 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103860u;
        goto label_103860;
    }
    ctx->pc = 0x103858u;
    SET_GPR_U32(ctx, 31, 0x103860u);
    ctx->pc = 0x10385Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103858u;
    // 0x10385c: 0x26440348  addiu       $a0, $s2, 0x348 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x103858u, 0x103860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103860u;
label_103860:
    // 0x103860: 0x54400164  bnel        $v0, $zero, . + 4 + (0x164 << 2)
label_103864:
    if (ctx->pc == 0x103864u) {
        ctx->pc = 0x103864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103860u;
        // 0x103864: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103868u;
        goto label_103868;
    }
    ctx->pc = 0x103860u;
    {
        const bool branch_taken_0x103860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103860) {
            ctx->pc = 0x103864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103860u;
            // 0x103864: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x103868u;
label_103868:
    // 0x103868: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x103868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10386c:
    // 0x10386c: 0xc0932ec  jal         func_24CBB0
label_103870:
    if (ctx->pc == 0x103870u) {
        ctx->pc = 0x103870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10386Cu;
        // 0x103870: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103874u;
        goto label_103874;
    }
    ctx->pc = 0x10386Cu;
    SET_GPR_U32(ctx, 31, 0x103874u);
    ctx->pc = 0x103870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10386Cu;
    // 0x103870: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CBB0u, 0x10386Cu, 0x103874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103874u;
label_103874:
    // 0x103874: 0x1000015f  b           . + 4 + (0x15F << 2)
label_103878:
    if (ctx->pc == 0x103878u) {
        ctx->pc = 0x103878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103874u;
        // 0x103878: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10387Cu;
        goto label_10387c;
    }
    ctx->pc = 0x103874u;
    {
        const bool branch_taken_0x103874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103874u;
        // 0x103878: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103874) {
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x10387Cu;
label_10387c:
    // 0x10387c: 0x5062015d  beql        $v1, $v0, . + 4 + (0x15D << 2)
label_103880:
    if (ctx->pc == 0x103880u) {
        ctx->pc = 0x103880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10387Cu;
        // 0x103880: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103884u;
        goto label_103884;
    }
    ctx->pc = 0x10387Cu;
    {
        const bool branch_taken_0x10387c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10387c) {
            ctx->pc = 0x103880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10387Cu;
            // 0x103880: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x103884u;
label_103884:
    // 0x103884: 0xc089bfc  jal         func_226FF0
label_103888:
    if (ctx->pc == 0x103888u) {
        ctx->pc = 0x103888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103884u;
        // 0x103888: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10388Cu;
        goto label_10388c;
    }
    ctx->pc = 0x103884u;
    SET_GPR_U32(ctx, 31, 0x10388Cu);
    ctx->pc = 0x103888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103884u;
    // 0x103888: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x103884u, 0x10388Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10388Cu;
label_10388c:
    // 0x10388c: 0x54400159  bnel        $v0, $zero, . + 4 + (0x159 << 2)
label_103890:
    if (ctx->pc == 0x103890u) {
        ctx->pc = 0x103890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10388Cu;
        // 0x103890: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103894u;
        goto label_103894;
    }
    ctx->pc = 0x10388Cu;
    {
        const bool branch_taken_0x10388c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10388c) {
            ctx->pc = 0x103890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10388Cu;
            // 0x103890: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x103894u;
label_103894:
    // 0x103894: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x103894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_103898:
    // 0x103898: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x103898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10389c:
    // 0x10389c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10389cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1038a0:
    // 0x1038a0: 0xc0930a0  jal         func_24C280
label_1038a4:
    if (ctx->pc == 0x1038A4u) {
        ctx->pc = 0x1038A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038A0u;
        // 0x1038a4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1038A8u;
        goto label_1038a8;
    }
    ctx->pc = 0x1038A0u;
    SET_GPR_U32(ctx, 31, 0x1038A8u);
    ctx->pc = 0x1038A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1038A0u;
    // 0x1038a4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C280u, 0x1038A0u, 0x1038A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1038A8u;
label_1038a8:
    // 0x1038a8: 0x10000152  b           . + 4 + (0x152 << 2)
label_1038ac:
    if (ctx->pc == 0x1038ACu) {
        ctx->pc = 0x1038ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038A8u;
        // 0x1038ac: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1038B0u;
        goto label_1038b0;
    }
    ctx->pc = 0x1038A8u;
    {
        const bool branch_taken_0x1038a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1038ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038A8u;
        // 0x1038ac: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1038a8) {
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x1038B0u;
label_1038b0:
    // 0x1038b0: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
label_1038b4:
    if (ctx->pc == 0x1038B4u) {
        ctx->pc = 0x1038B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038B0u;
        // 0x1038b4: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1038B8u;
        goto label_1038b8;
    }
    ctx->pc = 0x1038B0u;
    {
        const bool branch_taken_0x1038b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1038B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038B0u;
        // 0x1038b4: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1038b0) {
            ctx->pc = 0x10397Cu;
            goto label_10397c;
        }
    }
    ctx->pc = 0x1038B8u;
label_1038b8:
    // 0x1038b8: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x1038b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1038bc:
    // 0x1038bc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1038bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1038c0:
    // 0x1038c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1038c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1038c4:
    // 0x1038c4: 0xc10c1fa  jal         func_4307E8
label_1038c8:
    if (ctx->pc == 0x1038C8u) {
        ctx->pc = 0x1038C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038C4u;
        // 0x1038c8: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1038CCu;
        goto label_1038cc;
    }
    ctx->pc = 0x1038C4u;
    SET_GPR_U32(ctx, 31, 0x1038CCu);
    ctx->pc = 0x1038C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1038C4u;
    // 0x1038c8: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x1038C4u, 0x1038CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1038CCu;
label_1038cc:
    // 0x1038cc: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x1038ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1038d0:
    // 0x1038d0: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x1038d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_1038d4:
    // 0x1038d4: 0x26270008  addiu       $a3, $s1, 0x8
    ctx->pc = 0x1038d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_1038d8:
    // 0x1038d8: 0x24c66800  addiu       $a2, $a2, 0x6800
    ctx->pc = 0x1038d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26624));
label_1038dc:
    // 0x1038dc: 0xc10ca04  jal         func_432810
label_1038e0:
    if (ctx->pc == 0x1038E0u) {
        ctx->pc = 0x1038E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038DCu;
        // 0x1038e0: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1038E4u;
        goto label_1038e4;
    }
    ctx->pc = 0x1038DCu;
    SET_GPR_U32(ctx, 31, 0x1038E4u);
    ctx->pc = 0x1038E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1038DCu;
    // 0x1038e0: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1038DCu, 0x1038E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1038E4u;
label_1038e4:
    // 0x1038e4: 0x8e642c04  lw          $a0, 0x2C04($s3)
    ctx->pc = 0x1038e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11268)));
label_1038e8:
    // 0x1038e8: 0xc0e44f6  jal         func_3913D8
label_1038ec:
    if (ctx->pc == 0x1038ECu) {
        ctx->pc = 0x1038ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038E8u;
        // 0x1038ec: 0x8fa50064  lw          $a1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1038F0u;
        goto label_1038f0;
    }
    ctx->pc = 0x1038E8u;
    SET_GPR_U32(ctx, 31, 0x1038F0u);
    ctx->pc = 0x1038ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1038E8u;
    // 0x1038ec: 0x8fa50064  lw          $a1, 0x64($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3913D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3913D8u, 0x1038E8u, 0x1038F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1038F0u;
label_1038f0:
    // 0x1038f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1038f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1038f4:
    // 0x1038f4: 0x600013e  bltz        $s0, . + 4 + (0x13E << 2)
label_1038f8:
    if (ctx->pc == 0x1038F8u) {
        ctx->pc = 0x1038F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038F4u;
        // 0x1038f8: 0x8e642c04  lw          $a0, 0x2C04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1038FCu;
        goto label_1038fc;
    }
    ctx->pc = 0x1038F4u;
    {
        const bool branch_taken_0x1038f4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1038F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038F4u;
        // 0x1038f8: 0x8e642c04  lw          $a0, 0x2C04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1038f4) {
            ctx->pc = 0x103DF0u;
            goto label_103df0;
        }
    }
    ctx->pc = 0x1038FCu;
label_1038fc:
    // 0x1038fc: 0xc0e44cc  jal         func_391330
label_103900:
    if (ctx->pc == 0x103900u) {
        ctx->pc = 0x103900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038FCu;
        // 0x103900: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103904u;
        goto label_103904;
    }
    ctx->pc = 0x1038FCu;
    SET_GPR_U32(ctx, 31, 0x103904u);
    ctx->pc = 0x103900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1038FCu;
    // 0x103900: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x1038FCu, 0x103904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103904u;
label_103904:
    // 0x103904: 0x80430065  lb          $v1, 0x65($v0)
    ctx->pc = 0x103904u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 101)));
label_103908:
    // 0x103908: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x103908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_10390c:
    // 0x10390c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_103910:
    if (ctx->pc == 0x103910u) {
        ctx->pc = 0x103910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10390Cu;
        // 0x103910: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103914u;
        goto label_103914;
    }
    ctx->pc = 0x10390Cu;
    {
        const bool branch_taken_0x10390c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x103910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10390Cu;
        // 0x103910: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10390c) {
            ctx->pc = 0x103940u;
            goto label_103940;
        }
    }
    ctx->pc = 0x103914u;
label_103914:
    // 0x103914: 0xc0e4060  jal         func_390180
label_103918:
    if (ctx->pc == 0x103918u) {
        ctx->pc = 0x103918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103914u;
        // 0x103918: 0x26440348  addiu       $a0, $s2, 0x348 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10391Cu;
        goto label_10391c;
    }
    ctx->pc = 0x103914u;
    SET_GPR_U32(ctx, 31, 0x10391Cu);
    ctx->pc = 0x103918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103914u;
    // 0x103918: 0x26440348  addiu       $a0, $s2, 0x348 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x103914u, 0x10391Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10391Cu;
label_10391c:
    // 0x10391c: 0x50400135  beql        $v0, $zero, . + 4 + (0x135 << 2)
label_103920:
    if (ctx->pc == 0x103920u) {
        ctx->pc = 0x103920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10391Cu;
        // 0x103920: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103924u;
        goto label_103924;
    }
    ctx->pc = 0x10391Cu;
    {
        const bool branch_taken_0x10391c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10391c) {
            ctx->pc = 0x103920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10391Cu;
            // 0x103920: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x103924u;
label_103924:
    // 0x103924: 0x94420112  lhu         $v0, 0x112($v0)
    ctx->pc = 0x103924u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 274)));
label_103928:
    // 0x103928: 0x54500132  bnel        $v0, $s0, . + 4 + (0x132 << 2)
label_10392c:
    if (ctx->pc == 0x10392Cu) {
        ctx->pc = 0x10392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103928u;
        // 0x10392c: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103930u;
        goto label_103930;
    }
    ctx->pc = 0x103928u;
    {
        const bool branch_taken_0x103928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x103928) {
            ctx->pc = 0x10392Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103928u;
            // 0x10392c: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x103930u;
label_103930:
    // 0x103930: 0xc093390  jal         func_24CE40
label_103934:
    if (ctx->pc == 0x103934u) {
        ctx->pc = 0x103934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103930u;
        // 0x103934: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103938u;
        goto label_103938;
    }
    ctx->pc = 0x103930u;
    SET_GPR_U32(ctx, 31, 0x103938u);
    ctx->pc = 0x103934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103930u;
    // 0x103934: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CE40u, 0x103930u, 0x103938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103938u;
label_103938:
    // 0x103938: 0x1000012e  b           . + 4 + (0x12E << 2)
label_10393c:
    if (ctx->pc == 0x10393Cu) {
        ctx->pc = 0x10393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103938u;
        // 0x10393c: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103940u;
        goto label_103940;
    }
    ctx->pc = 0x103938u;
    {
        const bool branch_taken_0x103938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103938u;
        // 0x10393c: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103938) {
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x103940u;
label_103940:
    // 0x103940: 0x5062012c  beql        $v1, $v0, . + 4 + (0x12C << 2)
label_103944:
    if (ctx->pc == 0x103944u) {
        ctx->pc = 0x103944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103940u;
        // 0x103944: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103948u;
        goto label_103948;
    }
    ctx->pc = 0x103940u;
    {
        const bool branch_taken_0x103940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x103940) {
            ctx->pc = 0x103944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103940u;
            // 0x103944: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x103948u;
label_103948:
    // 0x103948: 0xc089bfc  jal         func_226FF0
label_10394c:
    if (ctx->pc == 0x10394Cu) {
        ctx->pc = 0x10394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103948u;
        // 0x10394c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103950u;
        goto label_103950;
    }
    ctx->pc = 0x103948u;
    SET_GPR_U32(ctx, 31, 0x103950u);
    ctx->pc = 0x10394Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103948u;
    // 0x10394c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x103948u, 0x103950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103950u;
label_103950:
    // 0x103950: 0xc0e57ce  jal         func_395F38
label_103954:
    if (ctx->pc == 0x103954u) {
        ctx->pc = 0x103954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103950u;
        // 0x103954: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103958u;
        goto label_103958;
    }
    ctx->pc = 0x103950u;
    SET_GPR_U32(ctx, 31, 0x103958u);
    ctx->pc = 0x103954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103950u;
    // 0x103954: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x103950u, 0x103958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103958u;
label_103958:
    // 0x103958: 0x50400126  beql        $v0, $zero, . + 4 + (0x126 << 2)
label_10395c:
    if (ctx->pc == 0x10395Cu) {
        ctx->pc = 0x10395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103958u;
        // 0x10395c: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103960u;
        goto label_103960;
    }
    ctx->pc = 0x103958u;
    {
        const bool branch_taken_0x103958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103958) {
            ctx->pc = 0x10395Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103958u;
            // 0x10395c: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x103960u;
label_103960:
    // 0x103960: 0x94420112  lhu         $v0, 0x112($v0)
    ctx->pc = 0x103960u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 274)));
label_103964:
    // 0x103964: 0x54500123  bnel        $v0, $s0, . + 4 + (0x123 << 2)
label_103968:
    if (ctx->pc == 0x103968u) {
        ctx->pc = 0x103968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103964u;
        // 0x103968: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10396Cu;
        goto label_10396c;
    }
    ctx->pc = 0x103964u;
    {
        const bool branch_taken_0x103964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x103964) {
            ctx->pc = 0x103968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103964u;
            // 0x103968: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x10396Cu;
label_10396c:
    // 0x10396c: 0xc095fce  jal         func_257F38
label_103970:
    if (ctx->pc == 0x103970u) {
        ctx->pc = 0x103970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10396Cu;
        // 0x103970: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103974u;
        goto label_103974;
    }
    ctx->pc = 0x10396Cu;
    SET_GPR_U32(ctx, 31, 0x103974u);
    ctx->pc = 0x103970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10396Cu;
    // 0x103970: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x10396Cu, 0x103974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103974u;
label_103974:
    // 0x103974: 0x1000011f  b           . + 4 + (0x11F << 2)
label_103978:
    if (ctx->pc == 0x103978u) {
        ctx->pc = 0x103978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103974u;
        // 0x103978: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10397Cu;
        goto label_10397c;
    }
    ctx->pc = 0x103974u;
    {
        const bool branch_taken_0x103974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103974u;
        // 0x103978: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103974) {
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x10397Cu;
label_10397c:
    // 0x10397c: 0x1462003f  bne         $v1, $v0, . + 4 + (0x3F << 2)
label_103980:
    if (ctx->pc == 0x103980u) {
        ctx->pc = 0x103980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10397Cu;
        // 0x103980: 0x24020036  addiu       $v0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103984u;
        goto label_103984;
    }
    ctx->pc = 0x10397Cu;
    {
        const bool branch_taken_0x10397c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x103980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10397Cu;
        // 0x103980: 0x24020036  addiu       $v0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10397c) {
            ctx->pc = 0x103A7Cu;
            goto label_103a7c;
        }
    }
    ctx->pc = 0x103984u;
label_103984:
    // 0x103984: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x103984u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_103988:
    // 0x103988: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x103988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_10398c:
    // 0x10398c: 0x2625000e  addiu       $a1, $s1, 0xE
    ctx->pc = 0x10398cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 14));
label_103990:
    // 0x103990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x103990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_103994:
    // 0x103994: 0x0  nop
    ctx->pc = 0x103994u;
    // NOP
label_103998:
    // 0x103998: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x103998u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_10399c:
    // 0x10399c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x10399cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_1039a0:
    // 0x1039a0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1039a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1039a4:
    // 0x1039a4: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x1039a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_1039a8:
    // 0x1039a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1039a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1039ac:
    // 0x1039ac: 0x0  nop
    ctx->pc = 0x1039acu;
    // NOP
label_1039b0:
    // 0x1039b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1039b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1039b4:
    // 0x1039b4: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1039b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_1039b8:
    // 0x1039b8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1039b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1039bc:
    // 0x1039bc: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x1039bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_1039c0:
    // 0x1039c0: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x1039c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1039c4:
    // 0x1039c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1039c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1039c8:
    // 0x1039c8: 0x0  nop
    ctx->pc = 0x1039c8u;
    // NOP
label_1039cc:
    // 0x1039cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1039ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1039d0:
    // 0x1039d0: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x1039d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_1039d4:
    // 0x1039d4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1039d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1039d8:
    // 0x1039d8: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x1039d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_1039dc:
    // 0x1039dc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1039dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1039e0:
    // 0x1039e0: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x1039e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_1039e4:
    // 0x1039e4: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x1039e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_1039e8:
    // 0x1039e8: 0x84a40004  lh          $a0, 0x4($a1)
    ctx->pc = 0x1039e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_1039ec:
    // 0x1039ec: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1039ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_1039f0:
    // 0x1039f0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1039f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1039f4:
    // 0x1039f4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1039f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1039f8:
    // 0x1039f8: 0x3c023800  lui         $v0, 0x3800
    ctx->pc = 0x1039f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14336 << 16));
label_1039fc:
    // 0x1039fc: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1039fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_103a00:
    // 0x103a00: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x103a00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_103a04:
    // 0x103a04: 0x4bc3093c  vitof0.xyz  $vf3, $vf1
    ctx->pc = 0x103a04u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_103a08:
    // 0x103a08: 0x4bc21858  vmulx.xyz   $vf1, $vf3, $vf2x
    ctx->pc = 0x103a08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_103a0c:
    // 0x103a0c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x103a0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_103a10:
    // 0x103a10: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x103a10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_103a14:
    // 0x103a14: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x103a14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_103a18:
    // 0x103a18: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x103a18u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_103a1c:
    // 0x103a1c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x103a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_103a20:
    // 0x103a20: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x103a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_103a24:
    // 0x103a24: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x103a24u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_103a28:
    // 0x103a28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x103a28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_103a2c:
    // 0x103a2c: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x103a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_103a30:
    // 0x103a30: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x103a30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_103a34:
    // 0x103a34: 0x0  nop
    ctx->pc = 0x103a34u;
    // NOP
label_103a38:
    // 0x103a38: 0x0  nop
    ctx->pc = 0x103a38u;
    // NOP
label_103a3c:
    // 0x103a3c: 0x46000004  c1          0x4
    ctx->pc = 0x103a3cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_103a40:
    // 0x103a40: 0xc0e8b48  jal         func_3A2D20
label_103a44:
    if (ctx->pc == 0x103A44u) {
        ctx->pc = 0x103A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A40u;
        // 0x103a44: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x103A48u;
        goto label_103a48;
    }
    ctx->pc = 0x103A40u;
    SET_GPR_U32(ctx, 31, 0x103A48u);
    ctx->pc = 0x103A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103A40u;
    // 0x103a44: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x103A40u, 0x103A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A48u;
label_103a48:
    // 0x103a48: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x103a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_103a4c:
    // 0x103a4c: 0xc0e8b60  jal         func_3A2D80
label_103a50:
    if (ctx->pc == 0x103A50u) {
        ctx->pc = 0x103A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A4Cu;
        // 0x103a50: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103A54u;
        goto label_103a54;
    }
    ctx->pc = 0x103A4Cu;
    SET_GPR_U32(ctx, 31, 0x103A54u);
    ctx->pc = 0x103A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103A4Cu;
    // 0x103a50: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D80u, 0x103A4Cu, 0x103A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A54u;
label_103a54:
    // 0x103a54: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x103a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_103a58:
    // 0x103a58: 0xc0e8b58  jal         func_3A2D60
label_103a5c:
    if (ctx->pc == 0x103A5Cu) {
        ctx->pc = 0x103A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A58u;
        // 0x103a5c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103A60u;
        goto label_103a60;
    }
    ctx->pc = 0x103A58u;
    SET_GPR_U32(ctx, 31, 0x103A60u);
    ctx->pc = 0x103A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103A58u;
    // 0x103a5c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x103A58u, 0x103A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A60u;
label_103a60:
    // 0x103a60: 0x86250006  lh          $a1, 0x6($s1)
    ctx->pc = 0x103a60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_103a64:
    // 0x103a64: 0xc0e8b68  jal         func_3A2DA0
label_103a68:
    if (ctx->pc == 0x103A68u) {
        ctx->pc = 0x103A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A64u;
        // 0x103a68: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103A6Cu;
        goto label_103a6c;
    }
    ctx->pc = 0x103A64u;
    SET_GPR_U32(ctx, 31, 0x103A6Cu);
    ctx->pc = 0x103A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103A64u;
    // 0x103a68: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x103A64u, 0x103A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A6Cu;
label_103a6c:
    // 0x103a6c: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x103a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_103a70:
    // 0x103a70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x103a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_103a74:
    // 0x103a74: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_103a78:
    if (ctx->pc == 0x103A78u) {
        ctx->pc = 0x103A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A74u;
        // 0x103a78: 0x240600b4  addiu       $a2, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103A7Cu;
        goto label_103a7c;
    }
    ctx->pc = 0x103A74u;
    {
        const bool branch_taken_0x103a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A74u;
        // 0x103a78: 0x240600b4  addiu       $a2, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a74) {
            ctx->pc = 0x103D78u;
            goto label_103d78;
        }
    }
    ctx->pc = 0x103A7Cu;
label_103a7c:
    // 0x103a7c: 0x1462003f  bne         $v1, $v0, . + 4 + (0x3F << 2)
label_103a80:
    if (ctx->pc == 0x103A80u) {
        ctx->pc = 0x103A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A7Cu;
        // 0x103a80: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103A84u;
        goto label_103a84;
    }
    ctx->pc = 0x103A7Cu;
    {
        const bool branch_taken_0x103a7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x103A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A7Cu;
        // 0x103a80: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a7c) {
            ctx->pc = 0x103B7Cu;
            goto label_103b7c;
        }
    }
    ctx->pc = 0x103A84u;
label_103a84:
    // 0x103a84: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x103a84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_103a88:
    // 0x103a88: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x103a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_103a8c:
    // 0x103a8c: 0x2625000e  addiu       $a1, $s1, 0xE
    ctx->pc = 0x103a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 14));
label_103a90:
    // 0x103a90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x103a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_103a94:
    // 0x103a94: 0x0  nop
    ctx->pc = 0x103a94u;
    // NOP
label_103a98:
    // 0x103a98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x103a98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_103a9c:
    // 0x103a9c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x103a9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_103aa0:
    // 0x103aa0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x103aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_103aa4:
    // 0x103aa4: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x103aa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_103aa8:
    // 0x103aa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x103aa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_103aac:
    // 0x103aac: 0x0  nop
    ctx->pc = 0x103aacu;
    // NOP
label_103ab0:
    // 0x103ab0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x103ab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_103ab4:
    // 0x103ab4: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x103ab4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_103ab8:
    // 0x103ab8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x103ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_103abc:
    // 0x103abc: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x103abcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_103ac0:
    // 0x103ac0: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x103ac0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_103ac4:
    // 0x103ac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x103ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_103ac8:
    // 0x103ac8: 0x0  nop
    ctx->pc = 0x103ac8u;
    // NOP
label_103acc:
    // 0x103acc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x103accu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_103ad0:
    // 0x103ad0: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x103ad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_103ad4:
    // 0x103ad4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x103ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_103ad8:
    // 0x103ad8: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x103ad8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_103adc:
    // 0x103adc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x103adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_103ae0:
    // 0x103ae0: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x103ae0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_103ae4:
    // 0x103ae4: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x103ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_103ae8:
    // 0x103ae8: 0x84a40004  lh          $a0, 0x4($a1)
    ctx->pc = 0x103ae8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_103aec:
    // 0x103aec: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x103aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_103af0:
    // 0x103af0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x103af0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_103af4:
    // 0x103af4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x103af4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_103af8:
    // 0x103af8: 0x3c043800  lui         $a0, 0x3800
    ctx->pc = 0x103af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14336 << 16));
label_103afc:
    // 0x103afc: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x103afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_103b00:
    // 0x103b00: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x103b00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_103b04:
    // 0x103b04: 0x4bc3093c  vitof0.xyz  $vf3, $vf1
    ctx->pc = 0x103b04u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_103b08:
    // 0x103b08: 0x4bc21858  vmulx.xyz   $vf1, $vf3, $vf2x
    ctx->pc = 0x103b08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_103b0c:
    // 0x103b0c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x103b0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_103b10:
    // 0x103b10: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x103b10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_103b14:
    // 0x103b14: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x103b14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_103b18:
    // 0x103b18: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x103b18u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_103b1c:
    // 0x103b1c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x103b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_103b20:
    // 0x103b20: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x103b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_103b24:
    // 0x103b24: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x103b24u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_103b28:
    // 0x103b28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x103b28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_103b2c:
    // 0x103b2c: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x103b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_103b30:
    // 0x103b30: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x103b30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_103b34:
    // 0x103b34: 0x0  nop
    ctx->pc = 0x103b34u;
    // NOP
label_103b38:
    // 0x103b38: 0x0  nop
    ctx->pc = 0x103b38u;
    // NOP
label_103b3c:
    // 0x103b3c: 0x46000004  c1          0x4
    ctx->pc = 0x103b3cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_103b40:
    // 0x103b40: 0xc0e8b48  jal         func_3A2D20
label_103b44:
    if (ctx->pc == 0x103B44u) {
        ctx->pc = 0x103B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103B40u;
        // 0x103b44: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x103B48u;
        goto label_103b48;
    }
    ctx->pc = 0x103B40u;
    SET_GPR_U32(ctx, 31, 0x103B48u);
    ctx->pc = 0x103B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103B40u;
    // 0x103b44: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x103B40u, 0x103B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103B48u;
label_103b48:
    // 0x103b48: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x103b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_103b4c:
    // 0x103b4c: 0xc0e8b60  jal         func_3A2D80
label_103b50:
    if (ctx->pc == 0x103B50u) {
        ctx->pc = 0x103B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103B4Cu;
        // 0x103b50: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103B54u;
        goto label_103b54;
    }
    ctx->pc = 0x103B4Cu;
    SET_GPR_U32(ctx, 31, 0x103B54u);
    ctx->pc = 0x103B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103B4Cu;
    // 0x103b50: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D80u, 0x103B4Cu, 0x103B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103B54u;
label_103b54:
    // 0x103b54: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x103b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_103b58:
    // 0x103b58: 0xc0e8b58  jal         func_3A2D60
label_103b5c:
    if (ctx->pc == 0x103B5Cu) {
        ctx->pc = 0x103B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103B58u;
        // 0x103b5c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103B60u;
        goto label_103b60;
    }
    ctx->pc = 0x103B58u;
    SET_GPR_U32(ctx, 31, 0x103B60u);
    ctx->pc = 0x103B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103B58u;
    // 0x103b5c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x103B58u, 0x103B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103B60u;
label_103b60:
    // 0x103b60: 0x86250006  lh          $a1, 0x6($s1)
    ctx->pc = 0x103b60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_103b64:
    // 0x103b64: 0xc0e8b68  jal         func_3A2DA0
label_103b68:
    if (ctx->pc == 0x103B68u) {
        ctx->pc = 0x103B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103B64u;
        // 0x103b68: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103B6Cu;
        goto label_103b6c;
    }
    ctx->pc = 0x103B64u;
    SET_GPR_U32(ctx, 31, 0x103B6Cu);
    ctx->pc = 0x103B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103B64u;
    // 0x103b68: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x103B64u, 0x103B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103B6Cu;
label_103b6c:
    // 0x103b6c: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x103b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_103b70:
    // 0x103b70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x103b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_103b74:
    // 0x103b74: 0x10000080  b           . + 4 + (0x80 << 2)
label_103b78:
    if (ctx->pc == 0x103B78u) {
        ctx->pc = 0x103B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103B74u;
        // 0x103b78: 0x240600b6  addiu       $a2, $zero, 0xB6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103B7Cu;
        goto label_103b7c;
    }
    ctx->pc = 0x103B74u;
    {
        const bool branch_taken_0x103b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103B74u;
        // 0x103b78: 0x240600b6  addiu       $a2, $zero, 0xB6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103b74) {
            ctx->pc = 0x103D78u;
            goto label_103d78;
        }
    }
    ctx->pc = 0x103B7Cu;
label_103b7c:
    // 0x103b7c: 0x1462003f  bne         $v1, $v0, . + 4 + (0x3F << 2)
label_103b80:
    if (ctx->pc == 0x103B80u) {
        ctx->pc = 0x103B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103B7Cu;
        // 0x103b80: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103B84u;
        goto label_103b84;
    }
    ctx->pc = 0x103B7Cu;
    {
        const bool branch_taken_0x103b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x103B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103B7Cu;
        // 0x103b80: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103b7c) {
            ctx->pc = 0x103C7Cu;
            goto label_103c7c;
        }
    }
    ctx->pc = 0x103B84u;
label_103b84:
    // 0x103b84: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x103b84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_103b88:
    // 0x103b88: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x103b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_103b8c:
    // 0x103b8c: 0x2625000e  addiu       $a1, $s1, 0xE
    ctx->pc = 0x103b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 14));
label_103b90:
    // 0x103b90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x103b90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_103b94:
    // 0x103b94: 0x0  nop
    ctx->pc = 0x103b94u;
    // NOP
label_103b98:
    // 0x103b98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x103b98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_103b9c:
    // 0x103b9c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x103b9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_103ba0:
    // 0x103ba0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x103ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_103ba4:
    // 0x103ba4: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x103ba4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_103ba8:
    // 0x103ba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x103ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_103bac:
    // 0x103bac: 0x0  nop
    ctx->pc = 0x103bacu;
    // NOP
label_103bb0:
    // 0x103bb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x103bb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_103bb4:
    // 0x103bb4: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x103bb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_103bb8:
    // 0x103bb8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x103bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_103bbc:
    // 0x103bbc: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x103bbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_103bc0:
    // 0x103bc0: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x103bc0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_103bc4:
    // 0x103bc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x103bc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_103bc8:
    // 0x103bc8: 0x0  nop
    ctx->pc = 0x103bc8u;
    // NOP
label_103bcc:
    // 0x103bcc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x103bccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_103bd0:
    // 0x103bd0: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x103bd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_103bd4:
    // 0x103bd4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x103bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_103bd8:
    // 0x103bd8: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x103bd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_103bdc:
    // 0x103bdc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x103bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_103be0:
    // 0x103be0: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x103be0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_103be4:
    // 0x103be4: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x103be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_103be8:
    // 0x103be8: 0x84a40004  lh          $a0, 0x4($a1)
    ctx->pc = 0x103be8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_103bec:
    // 0x103bec: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x103becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_103bf0:
    // 0x103bf0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x103bf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_103bf4:
    // 0x103bf4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x103bf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_103bf8:
    // 0x103bf8: 0x3c033800  lui         $v1, 0x3800
    ctx->pc = 0x103bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14336 << 16));
label_103bfc:
    // 0x103bfc: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x103bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_103c00:
    // 0x103c00: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x103c00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_103c04:
    // 0x103c04: 0x4bc3093c  vitof0.xyz  $vf3, $vf1
    ctx->pc = 0x103c04u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_103c08:
    // 0x103c08: 0x4bc21858  vmulx.xyz   $vf1, $vf3, $vf2x
    ctx->pc = 0x103c08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_103c0c:
    // 0x103c0c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x103c0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_103c10:
    // 0x103c10: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x103c10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_103c14:
    // 0x103c14: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x103c14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_103c18:
    // 0x103c18: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x103c18u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_103c1c:
    // 0x103c1c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x103c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_103c20:
    // 0x103c20: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x103c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_103c24:
    // 0x103c24: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x103c24u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_103c28:
    // 0x103c28: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x103c28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_103c2c:
    // 0x103c2c: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x103c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_103c30:
    // 0x103c30: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x103c30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_103c34:
    // 0x103c34: 0x0  nop
    ctx->pc = 0x103c34u;
    // NOP
label_103c38:
    // 0x103c38: 0x0  nop
    ctx->pc = 0x103c38u;
    // NOP
label_103c3c:
    // 0x103c3c: 0x46000004  c1          0x4
    ctx->pc = 0x103c3cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_103c40:
    // 0x103c40: 0xc0e8b48  jal         func_3A2D20
label_103c44:
    if (ctx->pc == 0x103C44u) {
        ctx->pc = 0x103C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C40u;
        // 0x103c44: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x103C48u;
        goto label_103c48;
    }
    ctx->pc = 0x103C40u;
    SET_GPR_U32(ctx, 31, 0x103C48u);
    ctx->pc = 0x103C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103C40u;
    // 0x103c44: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x103C40u, 0x103C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103C48u;
label_103c48:
    // 0x103c48: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x103c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_103c4c:
    // 0x103c4c: 0xc0e8b60  jal         func_3A2D80
label_103c50:
    if (ctx->pc == 0x103C50u) {
        ctx->pc = 0x103C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C4Cu;
        // 0x103c50: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103C54u;
        goto label_103c54;
    }
    ctx->pc = 0x103C4Cu;
    SET_GPR_U32(ctx, 31, 0x103C54u);
    ctx->pc = 0x103C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103C4Cu;
    // 0x103c50: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D80u, 0x103C4Cu, 0x103C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103C54u;
label_103c54:
    // 0x103c54: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x103c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_103c58:
    // 0x103c58: 0xc0e8b58  jal         func_3A2D60
label_103c5c:
    if (ctx->pc == 0x103C5Cu) {
        ctx->pc = 0x103C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C58u;
        // 0x103c5c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103C60u;
        goto label_103c60;
    }
    ctx->pc = 0x103C58u;
    SET_GPR_U32(ctx, 31, 0x103C60u);
    ctx->pc = 0x103C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103C58u;
    // 0x103c5c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x103C58u, 0x103C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103C60u;
label_103c60:
    // 0x103c60: 0x86250006  lh          $a1, 0x6($s1)
    ctx->pc = 0x103c60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_103c64:
    // 0x103c64: 0xc0e8b68  jal         func_3A2DA0
label_103c68:
    if (ctx->pc == 0x103C68u) {
        ctx->pc = 0x103C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C64u;
        // 0x103c68: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103C6Cu;
        goto label_103c6c;
    }
    ctx->pc = 0x103C64u;
    SET_GPR_U32(ctx, 31, 0x103C6Cu);
    ctx->pc = 0x103C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103C64u;
    // 0x103c68: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x103C64u, 0x103C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103C6Cu;
label_103c6c:
    // 0x103c6c: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x103c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_103c70:
    // 0x103c70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x103c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_103c74:
    // 0x103c74: 0x10000040  b           . + 4 + (0x40 << 2)
label_103c78:
    if (ctx->pc == 0x103C78u) {
        ctx->pc = 0x103C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C74u;
        // 0x103c78: 0x240600b5  addiu       $a2, $zero, 0xB5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103C7Cu;
        goto label_103c7c;
    }
    ctx->pc = 0x103C74u;
    {
        const bool branch_taken_0x103c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C74u;
        // 0x103c78: 0x240600b5  addiu       $a2, $zero, 0xB5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103c74) {
            ctx->pc = 0x103D78u;
            goto label_103d78;
        }
    }
    ctx->pc = 0x103C7Cu;
label_103c7c:
    // 0x103c7c: 0x14620044  bne         $v1, $v0, . + 4 + (0x44 << 2)
label_103c80:
    if (ctx->pc == 0x103C80u) {
        ctx->pc = 0x103C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C7Cu;
        // 0x103c80: 0x30a3ffff  andi        $v1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x103C84u;
        goto label_103c84;
    }
    ctx->pc = 0x103C7Cu;
    {
        const bool branch_taken_0x103c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x103C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C7Cu;
        // 0x103c80: 0x30a3ffff  andi        $v1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x103c7c) {
            ctx->pc = 0x103D90u;
            goto label_103d90;
        }
    }
    ctx->pc = 0x103C84u;
label_103c84:
    // 0x103c84: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x103c84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_103c88:
    // 0x103c88: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x103c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_103c8c:
    // 0x103c8c: 0x2625000e  addiu       $a1, $s1, 0xE
    ctx->pc = 0x103c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 14));
label_103c90:
    // 0x103c90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x103c90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_103c94:
    // 0x103c94: 0x0  nop
    ctx->pc = 0x103c94u;
    // NOP
label_103c98:
    // 0x103c98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x103c98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_103c9c:
    // 0x103c9c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x103c9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_103ca0:
    // 0x103ca0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x103ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_103ca4:
    // 0x103ca4: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x103ca4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_103ca8:
    // 0x103ca8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x103ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_103cac:
    // 0x103cac: 0x0  nop
    ctx->pc = 0x103cacu;
    // NOP
label_103cb0:
    // 0x103cb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x103cb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_103cb4:
    // 0x103cb4: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x103cb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_103cb8:
    // 0x103cb8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x103cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_103cbc:
    // 0x103cbc: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x103cbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_103cc0:
    // 0x103cc0: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x103cc0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_103cc4:
    // 0x103cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x103cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_103cc8:
    // 0x103cc8: 0x0  nop
    ctx->pc = 0x103cc8u;
    // NOP
label_103ccc:
    // 0x103ccc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x103cccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_103cd0:
    // 0x103cd0: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x103cd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_103cd4:
    // 0x103cd4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x103cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_103cd8:
    // 0x103cd8: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x103cd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_103cdc:
    // 0x103cdc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x103cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_103ce0:
    // 0x103ce0: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x103ce0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_103ce4:
    // 0x103ce4: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x103ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_103ce8:
    // 0x103ce8: 0x84a40004  lh          $a0, 0x4($a1)
    ctx->pc = 0x103ce8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_103cec:
    // 0x103cec: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x103cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_103cf0:
    // 0x103cf0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x103cf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_103cf4:
    // 0x103cf4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x103cf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_103cf8:
    // 0x103cf8: 0x3c023800  lui         $v0, 0x3800
    ctx->pc = 0x103cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14336 << 16));
label_103cfc:
    // 0x103cfc: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x103cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_103d00:
    // 0x103d00: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x103d00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_103d04:
    // 0x103d04: 0x4bc3093c  vitof0.xyz  $vf3, $vf1
    ctx->pc = 0x103d04u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_103d08:
    // 0x103d08: 0x4bc21858  vmulx.xyz   $vf1, $vf3, $vf2x
    ctx->pc = 0x103d08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_103d0c:
    // 0x103d0c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x103d0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_103d10:
    // 0x103d10: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x103d10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_103d14:
    // 0x103d14: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x103d14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_103d18:
    // 0x103d18: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x103d18u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_103d1c:
    // 0x103d1c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x103d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_103d20:
    // 0x103d20: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x103d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_103d24:
    // 0x103d24: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x103d24u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_103d28:
    // 0x103d28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x103d28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_103d2c:
    // 0x103d2c: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x103d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_103d30:
    // 0x103d30: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x103d30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_103d34:
    // 0x103d34: 0x0  nop
    ctx->pc = 0x103d34u;
    // NOP
label_103d38:
    // 0x103d38: 0x0  nop
    ctx->pc = 0x103d38u;
    // NOP
label_103d3c:
    // 0x103d3c: 0x46000004  c1          0x4
    ctx->pc = 0x103d3cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_103d40:
    // 0x103d40: 0xc0e8b48  jal         func_3A2D20
label_103d44:
    if (ctx->pc == 0x103D44u) {
        ctx->pc = 0x103D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D40u;
        // 0x103d44: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x103D48u;
        goto label_103d48;
    }
    ctx->pc = 0x103D40u;
    SET_GPR_U32(ctx, 31, 0x103D48u);
    ctx->pc = 0x103D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103D40u;
    // 0x103d44: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x103D40u, 0x103D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103D48u;
label_103d48:
    // 0x103d48: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x103d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_103d4c:
    // 0x103d4c: 0xc0e8b60  jal         func_3A2D80
label_103d50:
    if (ctx->pc == 0x103D50u) {
        ctx->pc = 0x103D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D4Cu;
        // 0x103d50: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103D54u;
        goto label_103d54;
    }
    ctx->pc = 0x103D4Cu;
    SET_GPR_U32(ctx, 31, 0x103D54u);
    ctx->pc = 0x103D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103D4Cu;
    // 0x103d50: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D80u, 0x103D4Cu, 0x103D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103D54u;
label_103d54:
    // 0x103d54: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x103d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_103d58:
    // 0x103d58: 0xc0e8b58  jal         func_3A2D60
label_103d5c:
    if (ctx->pc == 0x103D5Cu) {
        ctx->pc = 0x103D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D58u;
        // 0x103d5c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103D60u;
        goto label_103d60;
    }
    ctx->pc = 0x103D58u;
    SET_GPR_U32(ctx, 31, 0x103D60u);
    ctx->pc = 0x103D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103D58u;
    // 0x103d5c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x103D58u, 0x103D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103D60u;
label_103d60:
    // 0x103d60: 0x86250006  lh          $a1, 0x6($s1)
    ctx->pc = 0x103d60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_103d64:
    // 0x103d64: 0xc0e8b68  jal         func_3A2DA0
label_103d68:
    if (ctx->pc == 0x103D68u) {
        ctx->pc = 0x103D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D64u;
        // 0x103d68: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103D6Cu;
        goto label_103d6c;
    }
    ctx->pc = 0x103D64u;
    SET_GPR_U32(ctx, 31, 0x103D6Cu);
    ctx->pc = 0x103D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103D64u;
    // 0x103d68: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x103D64u, 0x103D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103D6Cu;
label_103d6c:
    // 0x103d6c: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x103d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_103d70:
    // 0x103d70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x103d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_103d74:
    // 0x103d74: 0x240600b7  addiu       $a2, $zero, 0xB7
    ctx->pc = 0x103d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
label_103d78:
    // 0x103d78: 0xc0e8b80  jal         func_3A2E00
label_103d7c:
    if (ctx->pc == 0x103D7Cu) {
        ctx->pc = 0x103D80u;
        goto label_103d80;
    }
    ctx->pc = 0x103D78u;
    SET_GPR_U32(ctx, 31, 0x103D80u);
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x103D78u, 0x103D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103D80u;
label_103d80:
    // 0x103d80: 0xc0e8b50  jal         func_3A2D40
label_103d84:
    if (ctx->pc == 0x103D84u) {
        ctx->pc = 0x103D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D80u;
        // 0x103d84: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103D88u;
        goto label_103d88;
    }
    ctx->pc = 0x103D80u;
    SET_GPR_U32(ctx, 31, 0x103D88u);
    ctx->pc = 0x103D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103D80u;
    // 0x103d84: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x103D80u, 0x103D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103D88u;
label_103d88:
    // 0x103d88: 0x1000001a  b           . + 4 + (0x1A << 2)
label_103d8c:
    if (ctx->pc == 0x103D8Cu) {
        ctx->pc = 0x103D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D88u;
        // 0x103d8c: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103D90u;
        goto label_103d90;
    }
    ctx->pc = 0x103D88u;
    {
        const bool branch_taken_0x103d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D88u;
        // 0x103d8c: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d88) {
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x103D90u;
label_103d90:
    // 0x103d90: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x103d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_103d94:
    // 0x103d94: 0x54620017  bnel        $v1, $v0, . + 4 + (0x17 << 2)
label_103d98:
    if (ctx->pc == 0x103D98u) {
        ctx->pc = 0x103D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D94u;
        // 0x103d98: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103D9Cu;
        goto label_103d9c;
    }
    ctx->pc = 0x103D94u;
    {
        const bool branch_taken_0x103d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x103d94) {
            ctx->pc = 0x103D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103D94u;
            // 0x103d98: 0x8ee50120  lw          $a1, 0x120($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x103D9Cu;
label_103d9c:
    // 0x103d9c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x103d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_103da0:
    // 0x103da0: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x103da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
label_103da4:
    // 0x103da4: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x103da4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_103da8:
    // 0x103da8: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x103da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_103dac:
    // 0x103dac: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x103dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_103db0:
    // 0x103db0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x103db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_103db4:
    // 0x103db4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x103db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_103db8:
    // 0x103db8: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x103db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_103dbc:
    // 0x103dbc: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x103dbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_103dc0:
    // 0x103dc0: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x103dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_103dc4:
    // 0x103dc4: 0xc0e8b48  jal         func_3A2D20
label_103dc8:
    if (ctx->pc == 0x103DC8u) {
        ctx->pc = 0x103DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DC4u;
        // 0x103dc8: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x103DCCu;
        goto label_103dcc;
    }
    ctx->pc = 0x103DC4u;
    SET_GPR_U32(ctx, 31, 0x103DCCu);
    ctx->pc = 0x103DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103DC4u;
    // 0x103dc8: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x103DC4u, 0x103DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103DCCu;
label_103dcc:
    // 0x103dcc: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x103dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_103dd0:
    // 0x103dd0: 0xc0e8b58  jal         func_3A2D60
label_103dd4:
    if (ctx->pc == 0x103DD4u) {
        ctx->pc = 0x103DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DD0u;
        // 0x103dd4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103DD8u;
        goto label_103dd8;
    }
    ctx->pc = 0x103DD0u;
    SET_GPR_U32(ctx, 31, 0x103DD8u);
    ctx->pc = 0x103DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103DD0u;
    // 0x103dd4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x103DD0u, 0x103DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103DD8u;
label_103dd8:
    // 0x103dd8: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x103dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_103ddc:
    // 0x103ddc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x103ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_103de0:
    // 0x103de0: 0xc0e8b80  jal         func_3A2E00
label_103de4:
    if (ctx->pc == 0x103DE4u) {
        ctx->pc = 0x103DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DE0u;
        // 0x103de4: 0x240600cb  addiu       $a2, $zero, 0xCB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103DE8u;
        goto label_103de8;
    }
    ctx->pc = 0x103DE0u;
    SET_GPR_U32(ctx, 31, 0x103DE8u);
    ctx->pc = 0x103DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103DE0u;
    // 0x103de4: 0x240600cb  addiu       $a2, $zero, 0xCB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x103DE0u, 0x103DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103DE8u;
label_103de8:
    // 0x103de8: 0xc0e8b50  jal         func_3A2D40
label_103dec:
    if (ctx->pc == 0x103DECu) {
        ctx->pc = 0x103DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DE8u;
        // 0x103dec: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103DF0u;
        goto label_103df0;
    }
    ctx->pc = 0x103DE8u;
    SET_GPR_U32(ctx, 31, 0x103DF0u);
    ctx->pc = 0x103DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103DE8u;
    // 0x103dec: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x103DE8u, 0x103DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103DF0u;
label_103df0:
    // 0x103df0: 0x8ee50120  lw          $a1, 0x120($s7)
    ctx->pc = 0x103df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
label_103df4:
    // 0x103df4: 0x96e20124  lhu         $v0, 0x124($s7)
    ctx->pc = 0x103df4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 292)));
label_103df8:
    // 0x103df8: 0x24a40018  addiu       $a0, $a1, 0x18
    ctx->pc = 0x103df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_103dfc:
    // 0x103dfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x103dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_103e00:
    // 0x103e00: 0xaee40120  sw          $a0, 0x120($s7)
    ctx->pc = 0x103e00u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 288), GPR_U32(ctx, 4));
label_103e04:
    // 0x103e04: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_103e08:
    if (ctx->pc == 0x103E08u) {
        ctx->pc = 0x103E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E04u;
        // 0x103e08: 0xa6e20124  sh          $v0, 0x124($s7) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 23), 292), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103E0Cu;
        goto label_103e0c;
    }
    ctx->pc = 0x103E04u;
    {
        const bool branch_taken_0x103e04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x103E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E04u;
        // 0x103e08: 0xa6e20124  sh          $v0, 0x124($s7) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 23), 292), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103e04) {
            ctx->pc = 0x103E3Cu;
            goto label_103e3c;
        }
    }
    ctx->pc = 0x103E0Cu;
label_103e0c:
    // 0x103e0c: 0x96e30126  lhu         $v1, 0x126($s7)
    ctx->pc = 0x103e0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 294)));
label_103e10:
    // 0x103e10: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x103e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_103e14:
    // 0x103e14: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x103e14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_103e18:
    // 0x103e18: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_103e1c:
    if (ctx->pc == 0x103E1Cu) {
        ctx->pc = 0x103E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E18u;
        // 0x103e1c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103E20u;
        goto label_103e20;
    }
    ctx->pc = 0x103E18u;
    {
        const bool branch_taken_0x103e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E18u;
        // 0x103e1c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103e18) {
            ctx->pc = 0x103E3Cu;
            goto label_103e3c;
        }
    }
    ctx->pc = 0x103E20u;
label_103e20:
    // 0x103e20: 0x96e20128  lhu         $v0, 0x128($s7)
    ctx->pc = 0x103e20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 296)));
label_103e24:
    // 0x103e24: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x103e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_103e28:
    // 0x103e28: 0x94a30018  lhu         $v1, 0x18($a1)
    ctx->pc = 0x103e28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
label_103e2c:
    // 0x103e2c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x103e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_103e30:
    // 0x103e30: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x103e30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_103e34:
    // 0x103e34: 0x5040f814  beql        $v0, $zero, . + 4 + (-0x7EC << 2)
label_103e38:
    if (ctx->pc == 0x103E38u) {
        ctx->pc = 0x103E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E34u;
        // 0x103e38: 0x96e3001e  lhu         $v1, 0x1E($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103E3Cu;
        goto label_103e3c;
    }
    ctx->pc = 0x103E34u;
    {
        const bool branch_taken_0x103e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103e34) {
            ctx->pc = 0x103E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103E34u;
            // 0x103e38: 0x96e3001e  lhu         $v1, 0x1E($s7) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 30)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101e88;
        }
    }
    ctx->pc = 0x103E3Cu;
label_103e3c:
    // 0x103e3c: 0x96e30124  lhu         $v1, 0x124($s7)
    ctx->pc = 0x103e3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 292)));
label_103e40:
    // 0x103e40: 0x96e20126  lhu         $v0, 0x126($s7)
    ctx->pc = 0x103e40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 294)));
label_103e44:
    // 0x103e44: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_103e48:
    if (ctx->pc == 0x103E48u) {
        ctx->pc = 0x103E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E44u;
        // 0x103e48: 0xaee00120  sw          $zero, 0x120($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103E4Cu;
        goto label_103e4c;
    }
    ctx->pc = 0x103E44u;
    {
        const bool branch_taken_0x103e44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x103e44) {
            ctx->pc = 0x103E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103E44u;
            // 0x103e48: 0xaee00120  sw          $zero, 0x120($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 288), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103E4Cu;
            goto label_103e4c;
        }
    }
    ctx->pc = 0x103E4Cu;
label_103e4c:
    // 0x103e4c: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x103e4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_103e50:
    // 0x103e50: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x103e50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_103e54:
    // 0x103e54: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x103e54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_103e58:
    // 0x103e58: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x103e58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_103e5c:
    // 0x103e5c: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x103e5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_103e60:
    // 0x103e60: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x103e60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_103e64:
    // 0x103e64: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x103e64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_103e68:
    // 0x103e68: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x103e68u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_103e6c:
    // 0x103e6c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x103e6cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_103e70:
    // 0x103e70: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x103e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_103e74:
    // 0x103e74: 0xc7b70128  lwc1        $f23, 0x128($sp)
    ctx->pc = 0x103e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_103e78:
    // 0x103e78: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x103e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_103e7c:
    // 0x103e7c: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x103e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_103e80:
    // 0x103e80: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x103e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_103e84:
    // 0x103e84: 0x3e00008  jr          $ra
label_103e88:
    if (ctx->pc == 0x103E88u) {
        ctx->pc = 0x103E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E84u;
        // 0x103e88: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103E8Cu;
        goto label_103e8c;
    }
    ctx->pc = 0x103E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E84u;
        // 0x103e88: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103E8Cu;
label_103e8c:
    // 0x103e8c: 0x0  nop
    ctx->pc = 0x103e8cu;
    // NOP
    ctx->pc = 0x103e90u;
}
