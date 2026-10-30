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

// Function: sub_00138B90
// Address: 0x138b90 - 0x139d00
void sub_00138B90_0x138b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138B90_0x138b90");
#endif

    switch (ctx->pc) {
        case 0x138b90u: goto label_138b90;
        case 0x138b94u: goto label_138b94;
        case 0x138b98u: goto label_138b98;
        case 0x138b9cu: goto label_138b9c;
        case 0x138ba0u: goto label_138ba0;
        case 0x138ba4u: goto label_138ba4;
        case 0x138ba8u: goto label_138ba8;
        case 0x138bacu: goto label_138bac;
        case 0x138bb0u: goto label_138bb0;
        case 0x138bb4u: goto label_138bb4;
        case 0x138bb8u: goto label_138bb8;
        case 0x138bbcu: goto label_138bbc;
        case 0x138bc0u: goto label_138bc0;
        case 0x138bc4u: goto label_138bc4;
        case 0x138bc8u: goto label_138bc8;
        case 0x138bccu: goto label_138bcc;
        case 0x138bd0u: goto label_138bd0;
        case 0x138bd4u: goto label_138bd4;
        case 0x138bd8u: goto label_138bd8;
        case 0x138bdcu: goto label_138bdc;
        case 0x138be0u: goto label_138be0;
        case 0x138be4u: goto label_138be4;
        case 0x138be8u: goto label_138be8;
        case 0x138becu: goto label_138bec;
        case 0x138bf0u: goto label_138bf0;
        case 0x138bf4u: goto label_138bf4;
        case 0x138bf8u: goto label_138bf8;
        case 0x138bfcu: goto label_138bfc;
        case 0x138c00u: goto label_138c00;
        case 0x138c04u: goto label_138c04;
        case 0x138c08u: goto label_138c08;
        case 0x138c0cu: goto label_138c0c;
        case 0x138c10u: goto label_138c10;
        case 0x138c14u: goto label_138c14;
        case 0x138c18u: goto label_138c18;
        case 0x138c1cu: goto label_138c1c;
        case 0x138c20u: goto label_138c20;
        case 0x138c24u: goto label_138c24;
        case 0x138c28u: goto label_138c28;
        case 0x138c2cu: goto label_138c2c;
        case 0x138c30u: goto label_138c30;
        case 0x138c34u: goto label_138c34;
        case 0x138c38u: goto label_138c38;
        case 0x138c3cu: goto label_138c3c;
        case 0x138c40u: goto label_138c40;
        case 0x138c44u: goto label_138c44;
        case 0x138c48u: goto label_138c48;
        case 0x138c4cu: goto label_138c4c;
        case 0x138c50u: goto label_138c50;
        case 0x138c54u: goto label_138c54;
        case 0x138c58u: goto label_138c58;
        case 0x138c5cu: goto label_138c5c;
        case 0x138c60u: goto label_138c60;
        case 0x138c64u: goto label_138c64;
        case 0x138c68u: goto label_138c68;
        case 0x138c6cu: goto label_138c6c;
        case 0x138c70u: goto label_138c70;
        case 0x138c74u: goto label_138c74;
        case 0x138c78u: goto label_138c78;
        case 0x138c7cu: goto label_138c7c;
        case 0x138c80u: goto label_138c80;
        case 0x138c84u: goto label_138c84;
        case 0x138c88u: goto label_138c88;
        case 0x138c8cu: goto label_138c8c;
        case 0x138c90u: goto label_138c90;
        case 0x138c94u: goto label_138c94;
        case 0x138c98u: goto label_138c98;
        case 0x138c9cu: goto label_138c9c;
        case 0x138ca0u: goto label_138ca0;
        case 0x138ca4u: goto label_138ca4;
        case 0x138ca8u: goto label_138ca8;
        case 0x138cacu: goto label_138cac;
        case 0x138cb0u: goto label_138cb0;
        case 0x138cb4u: goto label_138cb4;
        case 0x138cb8u: goto label_138cb8;
        case 0x138cbcu: goto label_138cbc;
        case 0x138cc0u: goto label_138cc0;
        case 0x138cc4u: goto label_138cc4;
        case 0x138cc8u: goto label_138cc8;
        case 0x138cccu: goto label_138ccc;
        case 0x138cd0u: goto label_138cd0;
        case 0x138cd4u: goto label_138cd4;
        case 0x138cd8u: goto label_138cd8;
        case 0x138cdcu: goto label_138cdc;
        case 0x138ce0u: goto label_138ce0;
        case 0x138ce4u: goto label_138ce4;
        case 0x138ce8u: goto label_138ce8;
        case 0x138cecu: goto label_138cec;
        case 0x138cf0u: goto label_138cf0;
        case 0x138cf4u: goto label_138cf4;
        case 0x138cf8u: goto label_138cf8;
        case 0x138cfcu: goto label_138cfc;
        case 0x138d00u: goto label_138d00;
        case 0x138d04u: goto label_138d04;
        case 0x138d08u: goto label_138d08;
        case 0x138d0cu: goto label_138d0c;
        case 0x138d10u: goto label_138d10;
        case 0x138d14u: goto label_138d14;
        case 0x138d18u: goto label_138d18;
        case 0x138d1cu: goto label_138d1c;
        case 0x138d20u: goto label_138d20;
        case 0x138d24u: goto label_138d24;
        case 0x138d28u: goto label_138d28;
        case 0x138d2cu: goto label_138d2c;
        case 0x138d30u: goto label_138d30;
        case 0x138d34u: goto label_138d34;
        case 0x138d38u: goto label_138d38;
        case 0x138d3cu: goto label_138d3c;
        case 0x138d40u: goto label_138d40;
        case 0x138d44u: goto label_138d44;
        case 0x138d48u: goto label_138d48;
        case 0x138d4cu: goto label_138d4c;
        case 0x138d50u: goto label_138d50;
        case 0x138d54u: goto label_138d54;
        case 0x138d58u: goto label_138d58;
        case 0x138d5cu: goto label_138d5c;
        case 0x138d60u: goto label_138d60;
        case 0x138d64u: goto label_138d64;
        case 0x138d68u: goto label_138d68;
        case 0x138d6cu: goto label_138d6c;
        case 0x138d70u: goto label_138d70;
        case 0x138d74u: goto label_138d74;
        case 0x138d78u: goto label_138d78;
        case 0x138d7cu: goto label_138d7c;
        case 0x138d80u: goto label_138d80;
        case 0x138d84u: goto label_138d84;
        case 0x138d88u: goto label_138d88;
        case 0x138d8cu: goto label_138d8c;
        case 0x138d90u: goto label_138d90;
        case 0x138d94u: goto label_138d94;
        case 0x138d98u: goto label_138d98;
        case 0x138d9cu: goto label_138d9c;
        case 0x138da0u: goto label_138da0;
        case 0x138da4u: goto label_138da4;
        case 0x138da8u: goto label_138da8;
        case 0x138dacu: goto label_138dac;
        case 0x138db0u: goto label_138db0;
        case 0x138db4u: goto label_138db4;
        case 0x138db8u: goto label_138db8;
        case 0x138dbcu: goto label_138dbc;
        case 0x138dc0u: goto label_138dc0;
        case 0x138dc4u: goto label_138dc4;
        case 0x138dc8u: goto label_138dc8;
        case 0x138dccu: goto label_138dcc;
        case 0x138dd0u: goto label_138dd0;
        case 0x138dd4u: goto label_138dd4;
        case 0x138dd8u: goto label_138dd8;
        case 0x138ddcu: goto label_138ddc;
        case 0x138de0u: goto label_138de0;
        case 0x138de4u: goto label_138de4;
        case 0x138de8u: goto label_138de8;
        case 0x138decu: goto label_138dec;
        case 0x138df0u: goto label_138df0;
        case 0x138df4u: goto label_138df4;
        case 0x138df8u: goto label_138df8;
        case 0x138dfcu: goto label_138dfc;
        case 0x138e00u: goto label_138e00;
        case 0x138e04u: goto label_138e04;
        case 0x138e08u: goto label_138e08;
        case 0x138e0cu: goto label_138e0c;
        case 0x138e10u: goto label_138e10;
        case 0x138e14u: goto label_138e14;
        case 0x138e18u: goto label_138e18;
        case 0x138e1cu: goto label_138e1c;
        case 0x138e20u: goto label_138e20;
        case 0x138e24u: goto label_138e24;
        case 0x138e28u: goto label_138e28;
        case 0x138e2cu: goto label_138e2c;
        case 0x138e30u: goto label_138e30;
        case 0x138e34u: goto label_138e34;
        case 0x138e38u: goto label_138e38;
        case 0x138e3cu: goto label_138e3c;
        case 0x138e40u: goto label_138e40;
        case 0x138e44u: goto label_138e44;
        case 0x138e48u: goto label_138e48;
        case 0x138e4cu: goto label_138e4c;
        case 0x138e50u: goto label_138e50;
        case 0x138e54u: goto label_138e54;
        case 0x138e58u: goto label_138e58;
        case 0x138e5cu: goto label_138e5c;
        case 0x138e60u: goto label_138e60;
        case 0x138e64u: goto label_138e64;
        case 0x138e68u: goto label_138e68;
        case 0x138e6cu: goto label_138e6c;
        case 0x138e70u: goto label_138e70;
        case 0x138e74u: goto label_138e74;
        case 0x138e78u: goto label_138e78;
        case 0x138e7cu: goto label_138e7c;
        case 0x138e80u: goto label_138e80;
        case 0x138e84u: goto label_138e84;
        case 0x138e88u: goto label_138e88;
        case 0x138e8cu: goto label_138e8c;
        case 0x138e90u: goto label_138e90;
        case 0x138e94u: goto label_138e94;
        case 0x138e98u: goto label_138e98;
        case 0x138e9cu: goto label_138e9c;
        case 0x138ea0u: goto label_138ea0;
        case 0x138ea4u: goto label_138ea4;
        case 0x138ea8u: goto label_138ea8;
        case 0x138eacu: goto label_138eac;
        case 0x138eb0u: goto label_138eb0;
        case 0x138eb4u: goto label_138eb4;
        case 0x138eb8u: goto label_138eb8;
        case 0x138ebcu: goto label_138ebc;
        case 0x138ec0u: goto label_138ec0;
        case 0x138ec4u: goto label_138ec4;
        case 0x138ec8u: goto label_138ec8;
        case 0x138eccu: goto label_138ecc;
        case 0x138ed0u: goto label_138ed0;
        case 0x138ed4u: goto label_138ed4;
        case 0x138ed8u: goto label_138ed8;
        case 0x138edcu: goto label_138edc;
        case 0x138ee0u: goto label_138ee0;
        case 0x138ee4u: goto label_138ee4;
        case 0x138ee8u: goto label_138ee8;
        case 0x138eecu: goto label_138eec;
        case 0x138ef0u: goto label_138ef0;
        case 0x138ef4u: goto label_138ef4;
        case 0x138ef8u: goto label_138ef8;
        case 0x138efcu: goto label_138efc;
        case 0x138f00u: goto label_138f00;
        case 0x138f04u: goto label_138f04;
        case 0x138f08u: goto label_138f08;
        case 0x138f0cu: goto label_138f0c;
        case 0x138f10u: goto label_138f10;
        case 0x138f14u: goto label_138f14;
        case 0x138f18u: goto label_138f18;
        case 0x138f1cu: goto label_138f1c;
        case 0x138f20u: goto label_138f20;
        case 0x138f24u: goto label_138f24;
        case 0x138f28u: goto label_138f28;
        case 0x138f2cu: goto label_138f2c;
        case 0x138f30u: goto label_138f30;
        case 0x138f34u: goto label_138f34;
        case 0x138f38u: goto label_138f38;
        case 0x138f3cu: goto label_138f3c;
        case 0x138f40u: goto label_138f40;
        case 0x138f44u: goto label_138f44;
        case 0x138f48u: goto label_138f48;
        case 0x138f4cu: goto label_138f4c;
        case 0x138f50u: goto label_138f50;
        case 0x138f54u: goto label_138f54;
        case 0x138f58u: goto label_138f58;
        case 0x138f5cu: goto label_138f5c;
        case 0x138f60u: goto label_138f60;
        case 0x138f64u: goto label_138f64;
        case 0x138f68u: goto label_138f68;
        case 0x138f6cu: goto label_138f6c;
        case 0x138f70u: goto label_138f70;
        case 0x138f74u: goto label_138f74;
        case 0x138f78u: goto label_138f78;
        case 0x138f7cu: goto label_138f7c;
        case 0x138f80u: goto label_138f80;
        case 0x138f84u: goto label_138f84;
        case 0x138f88u: goto label_138f88;
        case 0x138f8cu: goto label_138f8c;
        case 0x138f90u: goto label_138f90;
        case 0x138f94u: goto label_138f94;
        case 0x138f98u: goto label_138f98;
        case 0x138f9cu: goto label_138f9c;
        case 0x138fa0u: goto label_138fa0;
        case 0x138fa4u: goto label_138fa4;
        case 0x138fa8u: goto label_138fa8;
        case 0x138facu: goto label_138fac;
        case 0x138fb0u: goto label_138fb0;
        case 0x138fb4u: goto label_138fb4;
        case 0x138fb8u: goto label_138fb8;
        case 0x138fbcu: goto label_138fbc;
        case 0x138fc0u: goto label_138fc0;
        case 0x138fc4u: goto label_138fc4;
        case 0x138fc8u: goto label_138fc8;
        case 0x138fccu: goto label_138fcc;
        case 0x138fd0u: goto label_138fd0;
        case 0x138fd4u: goto label_138fd4;
        case 0x138fd8u: goto label_138fd8;
        case 0x138fdcu: goto label_138fdc;
        case 0x138fe0u: goto label_138fe0;
        case 0x138fe4u: goto label_138fe4;
        case 0x138fe8u: goto label_138fe8;
        case 0x138fecu: goto label_138fec;
        case 0x138ff0u: goto label_138ff0;
        case 0x138ff4u: goto label_138ff4;
        case 0x138ff8u: goto label_138ff8;
        case 0x138ffcu: goto label_138ffc;
        case 0x139000u: goto label_139000;
        case 0x139004u: goto label_139004;
        case 0x139008u: goto label_139008;
        case 0x13900cu: goto label_13900c;
        case 0x139010u: goto label_139010;
        case 0x139014u: goto label_139014;
        case 0x139018u: goto label_139018;
        case 0x13901cu: goto label_13901c;
        case 0x139020u: goto label_139020;
        case 0x139024u: goto label_139024;
        case 0x139028u: goto label_139028;
        case 0x13902cu: goto label_13902c;
        case 0x139030u: goto label_139030;
        case 0x139034u: goto label_139034;
        case 0x139038u: goto label_139038;
        case 0x13903cu: goto label_13903c;
        case 0x139040u: goto label_139040;
        case 0x139044u: goto label_139044;
        case 0x139048u: goto label_139048;
        case 0x13904cu: goto label_13904c;
        case 0x139050u: goto label_139050;
        case 0x139054u: goto label_139054;
        case 0x139058u: goto label_139058;
        case 0x13905cu: goto label_13905c;
        case 0x139060u: goto label_139060;
        case 0x139064u: goto label_139064;
        case 0x139068u: goto label_139068;
        case 0x13906cu: goto label_13906c;
        case 0x139070u: goto label_139070;
        case 0x139074u: goto label_139074;
        case 0x139078u: goto label_139078;
        case 0x13907cu: goto label_13907c;
        case 0x139080u: goto label_139080;
        case 0x139084u: goto label_139084;
        case 0x139088u: goto label_139088;
        case 0x13908cu: goto label_13908c;
        case 0x139090u: goto label_139090;
        case 0x139094u: goto label_139094;
        case 0x139098u: goto label_139098;
        case 0x13909cu: goto label_13909c;
        case 0x1390a0u: goto label_1390a0;
        case 0x1390a4u: goto label_1390a4;
        case 0x1390a8u: goto label_1390a8;
        case 0x1390acu: goto label_1390ac;
        case 0x1390b0u: goto label_1390b0;
        case 0x1390b4u: goto label_1390b4;
        case 0x1390b8u: goto label_1390b8;
        case 0x1390bcu: goto label_1390bc;
        case 0x1390c0u: goto label_1390c0;
        case 0x1390c4u: goto label_1390c4;
        case 0x1390c8u: goto label_1390c8;
        case 0x1390ccu: goto label_1390cc;
        case 0x1390d0u: goto label_1390d0;
        case 0x1390d4u: goto label_1390d4;
        case 0x1390d8u: goto label_1390d8;
        case 0x1390dcu: goto label_1390dc;
        case 0x1390e0u: goto label_1390e0;
        case 0x1390e4u: goto label_1390e4;
        case 0x1390e8u: goto label_1390e8;
        case 0x1390ecu: goto label_1390ec;
        case 0x1390f0u: goto label_1390f0;
        case 0x1390f4u: goto label_1390f4;
        case 0x1390f8u: goto label_1390f8;
        case 0x1390fcu: goto label_1390fc;
        case 0x139100u: goto label_139100;
        case 0x139104u: goto label_139104;
        case 0x139108u: goto label_139108;
        case 0x13910cu: goto label_13910c;
        case 0x139110u: goto label_139110;
        case 0x139114u: goto label_139114;
        case 0x139118u: goto label_139118;
        case 0x13911cu: goto label_13911c;
        case 0x139120u: goto label_139120;
        case 0x139124u: goto label_139124;
        case 0x139128u: goto label_139128;
        case 0x13912cu: goto label_13912c;
        case 0x139130u: goto label_139130;
        case 0x139134u: goto label_139134;
        case 0x139138u: goto label_139138;
        case 0x13913cu: goto label_13913c;
        case 0x139140u: goto label_139140;
        case 0x139144u: goto label_139144;
        case 0x139148u: goto label_139148;
        case 0x13914cu: goto label_13914c;
        case 0x139150u: goto label_139150;
        case 0x139154u: goto label_139154;
        case 0x139158u: goto label_139158;
        case 0x13915cu: goto label_13915c;
        case 0x139160u: goto label_139160;
        case 0x139164u: goto label_139164;
        case 0x139168u: goto label_139168;
        case 0x13916cu: goto label_13916c;
        case 0x139170u: goto label_139170;
        case 0x139174u: goto label_139174;
        case 0x139178u: goto label_139178;
        case 0x13917cu: goto label_13917c;
        case 0x139180u: goto label_139180;
        case 0x139184u: goto label_139184;
        case 0x139188u: goto label_139188;
        case 0x13918cu: goto label_13918c;
        case 0x139190u: goto label_139190;
        case 0x139194u: goto label_139194;
        case 0x139198u: goto label_139198;
        case 0x13919cu: goto label_13919c;
        case 0x1391a0u: goto label_1391a0;
        case 0x1391a4u: goto label_1391a4;
        case 0x1391a8u: goto label_1391a8;
        case 0x1391acu: goto label_1391ac;
        case 0x1391b0u: goto label_1391b0;
        case 0x1391b4u: goto label_1391b4;
        case 0x1391b8u: goto label_1391b8;
        case 0x1391bcu: goto label_1391bc;
        case 0x1391c0u: goto label_1391c0;
        case 0x1391c4u: goto label_1391c4;
        case 0x1391c8u: goto label_1391c8;
        case 0x1391ccu: goto label_1391cc;
        case 0x1391d0u: goto label_1391d0;
        case 0x1391d4u: goto label_1391d4;
        case 0x1391d8u: goto label_1391d8;
        case 0x1391dcu: goto label_1391dc;
        case 0x1391e0u: goto label_1391e0;
        case 0x1391e4u: goto label_1391e4;
        case 0x1391e8u: goto label_1391e8;
        case 0x1391ecu: goto label_1391ec;
        case 0x1391f0u: goto label_1391f0;
        case 0x1391f4u: goto label_1391f4;
        case 0x1391f8u: goto label_1391f8;
        case 0x1391fcu: goto label_1391fc;
        case 0x139200u: goto label_139200;
        case 0x139204u: goto label_139204;
        case 0x139208u: goto label_139208;
        case 0x13920cu: goto label_13920c;
        case 0x139210u: goto label_139210;
        case 0x139214u: goto label_139214;
        case 0x139218u: goto label_139218;
        case 0x13921cu: goto label_13921c;
        case 0x139220u: goto label_139220;
        case 0x139224u: goto label_139224;
        case 0x139228u: goto label_139228;
        case 0x13922cu: goto label_13922c;
        case 0x139230u: goto label_139230;
        case 0x139234u: goto label_139234;
        case 0x139238u: goto label_139238;
        case 0x13923cu: goto label_13923c;
        case 0x139240u: goto label_139240;
        case 0x139244u: goto label_139244;
        case 0x139248u: goto label_139248;
        case 0x13924cu: goto label_13924c;
        case 0x139250u: goto label_139250;
        case 0x139254u: goto label_139254;
        case 0x139258u: goto label_139258;
        case 0x13925cu: goto label_13925c;
        case 0x139260u: goto label_139260;
        case 0x139264u: goto label_139264;
        case 0x139268u: goto label_139268;
        case 0x13926cu: goto label_13926c;
        case 0x139270u: goto label_139270;
        case 0x139274u: goto label_139274;
        case 0x139278u: goto label_139278;
        case 0x13927cu: goto label_13927c;
        case 0x139280u: goto label_139280;
        case 0x139284u: goto label_139284;
        case 0x139288u: goto label_139288;
        case 0x13928cu: goto label_13928c;
        case 0x139290u: goto label_139290;
        case 0x139294u: goto label_139294;
        case 0x139298u: goto label_139298;
        case 0x13929cu: goto label_13929c;
        case 0x1392a0u: goto label_1392a0;
        case 0x1392a4u: goto label_1392a4;
        case 0x1392a8u: goto label_1392a8;
        case 0x1392acu: goto label_1392ac;
        case 0x1392b0u: goto label_1392b0;
        case 0x1392b4u: goto label_1392b4;
        case 0x1392b8u: goto label_1392b8;
        case 0x1392bcu: goto label_1392bc;
        case 0x1392c0u: goto label_1392c0;
        case 0x1392c4u: goto label_1392c4;
        case 0x1392c8u: goto label_1392c8;
        case 0x1392ccu: goto label_1392cc;
        case 0x1392d0u: goto label_1392d0;
        case 0x1392d4u: goto label_1392d4;
        case 0x1392d8u: goto label_1392d8;
        case 0x1392dcu: goto label_1392dc;
        case 0x1392e0u: goto label_1392e0;
        case 0x1392e4u: goto label_1392e4;
        case 0x1392e8u: goto label_1392e8;
        case 0x1392ecu: goto label_1392ec;
        case 0x1392f0u: goto label_1392f0;
        case 0x1392f4u: goto label_1392f4;
        case 0x1392f8u: goto label_1392f8;
        case 0x1392fcu: goto label_1392fc;
        case 0x139300u: goto label_139300;
        case 0x139304u: goto label_139304;
        case 0x139308u: goto label_139308;
        case 0x13930cu: goto label_13930c;
        case 0x139310u: goto label_139310;
        case 0x139314u: goto label_139314;
        case 0x139318u: goto label_139318;
        case 0x13931cu: goto label_13931c;
        case 0x139320u: goto label_139320;
        case 0x139324u: goto label_139324;
        case 0x139328u: goto label_139328;
        case 0x13932cu: goto label_13932c;
        case 0x139330u: goto label_139330;
        case 0x139334u: goto label_139334;
        case 0x139338u: goto label_139338;
        case 0x13933cu: goto label_13933c;
        case 0x139340u: goto label_139340;
        case 0x139344u: goto label_139344;
        case 0x139348u: goto label_139348;
        case 0x13934cu: goto label_13934c;
        case 0x139350u: goto label_139350;
        case 0x139354u: goto label_139354;
        case 0x139358u: goto label_139358;
        case 0x13935cu: goto label_13935c;
        case 0x139360u: goto label_139360;
        case 0x139364u: goto label_139364;
        case 0x139368u: goto label_139368;
        case 0x13936cu: goto label_13936c;
        case 0x139370u: goto label_139370;
        case 0x139374u: goto label_139374;
        case 0x139378u: goto label_139378;
        case 0x13937cu: goto label_13937c;
        case 0x139380u: goto label_139380;
        case 0x139384u: goto label_139384;
        case 0x139388u: goto label_139388;
        case 0x13938cu: goto label_13938c;
        case 0x139390u: goto label_139390;
        case 0x139394u: goto label_139394;
        case 0x139398u: goto label_139398;
        case 0x13939cu: goto label_13939c;
        case 0x1393a0u: goto label_1393a0;
        case 0x1393a4u: goto label_1393a4;
        case 0x1393a8u: goto label_1393a8;
        case 0x1393acu: goto label_1393ac;
        case 0x1393b0u: goto label_1393b0;
        case 0x1393b4u: goto label_1393b4;
        case 0x1393b8u: goto label_1393b8;
        case 0x1393bcu: goto label_1393bc;
        case 0x1393c0u: goto label_1393c0;
        case 0x1393c4u: goto label_1393c4;
        case 0x1393c8u: goto label_1393c8;
        case 0x1393ccu: goto label_1393cc;
        case 0x1393d0u: goto label_1393d0;
        case 0x1393d4u: goto label_1393d4;
        case 0x1393d8u: goto label_1393d8;
        case 0x1393dcu: goto label_1393dc;
        case 0x1393e0u: goto label_1393e0;
        case 0x1393e4u: goto label_1393e4;
        case 0x1393e8u: goto label_1393e8;
        case 0x1393ecu: goto label_1393ec;
        case 0x1393f0u: goto label_1393f0;
        case 0x1393f4u: goto label_1393f4;
        case 0x1393f8u: goto label_1393f8;
        case 0x1393fcu: goto label_1393fc;
        case 0x139400u: goto label_139400;
        case 0x139404u: goto label_139404;
        case 0x139408u: goto label_139408;
        case 0x13940cu: goto label_13940c;
        case 0x139410u: goto label_139410;
        case 0x139414u: goto label_139414;
        case 0x139418u: goto label_139418;
        case 0x13941cu: goto label_13941c;
        case 0x139420u: goto label_139420;
        case 0x139424u: goto label_139424;
        case 0x139428u: goto label_139428;
        case 0x13942cu: goto label_13942c;
        case 0x139430u: goto label_139430;
        case 0x139434u: goto label_139434;
        case 0x139438u: goto label_139438;
        case 0x13943cu: goto label_13943c;
        case 0x139440u: goto label_139440;
        case 0x139444u: goto label_139444;
        case 0x139448u: goto label_139448;
        case 0x13944cu: goto label_13944c;
        case 0x139450u: goto label_139450;
        case 0x139454u: goto label_139454;
        case 0x139458u: goto label_139458;
        case 0x13945cu: goto label_13945c;
        case 0x139460u: goto label_139460;
        case 0x139464u: goto label_139464;
        case 0x139468u: goto label_139468;
        case 0x13946cu: goto label_13946c;
        case 0x139470u: goto label_139470;
        case 0x139474u: goto label_139474;
        case 0x139478u: goto label_139478;
        case 0x13947cu: goto label_13947c;
        case 0x139480u: goto label_139480;
        case 0x139484u: goto label_139484;
        case 0x139488u: goto label_139488;
        case 0x13948cu: goto label_13948c;
        case 0x139490u: goto label_139490;
        case 0x139494u: goto label_139494;
        case 0x139498u: goto label_139498;
        case 0x13949cu: goto label_13949c;
        case 0x1394a0u: goto label_1394a0;
        case 0x1394a4u: goto label_1394a4;
        case 0x1394a8u: goto label_1394a8;
        case 0x1394acu: goto label_1394ac;
        case 0x1394b0u: goto label_1394b0;
        case 0x1394b4u: goto label_1394b4;
        case 0x1394b8u: goto label_1394b8;
        case 0x1394bcu: goto label_1394bc;
        case 0x1394c0u: goto label_1394c0;
        case 0x1394c4u: goto label_1394c4;
        case 0x1394c8u: goto label_1394c8;
        case 0x1394ccu: goto label_1394cc;
        case 0x1394d0u: goto label_1394d0;
        case 0x1394d4u: goto label_1394d4;
        case 0x1394d8u: goto label_1394d8;
        case 0x1394dcu: goto label_1394dc;
        case 0x1394e0u: goto label_1394e0;
        case 0x1394e4u: goto label_1394e4;
        case 0x1394e8u: goto label_1394e8;
        case 0x1394ecu: goto label_1394ec;
        case 0x1394f0u: goto label_1394f0;
        case 0x1394f4u: goto label_1394f4;
        case 0x1394f8u: goto label_1394f8;
        case 0x1394fcu: goto label_1394fc;
        case 0x139500u: goto label_139500;
        case 0x139504u: goto label_139504;
        case 0x139508u: goto label_139508;
        case 0x13950cu: goto label_13950c;
        case 0x139510u: goto label_139510;
        case 0x139514u: goto label_139514;
        case 0x139518u: goto label_139518;
        case 0x13951cu: goto label_13951c;
        case 0x139520u: goto label_139520;
        case 0x139524u: goto label_139524;
        case 0x139528u: goto label_139528;
        case 0x13952cu: goto label_13952c;
        case 0x139530u: goto label_139530;
        case 0x139534u: goto label_139534;
        case 0x139538u: goto label_139538;
        case 0x13953cu: goto label_13953c;
        case 0x139540u: goto label_139540;
        case 0x139544u: goto label_139544;
        case 0x139548u: goto label_139548;
        case 0x13954cu: goto label_13954c;
        case 0x139550u: goto label_139550;
        case 0x139554u: goto label_139554;
        case 0x139558u: goto label_139558;
        case 0x13955cu: goto label_13955c;
        case 0x139560u: goto label_139560;
        case 0x139564u: goto label_139564;
        case 0x139568u: goto label_139568;
        case 0x13956cu: goto label_13956c;
        case 0x139570u: goto label_139570;
        case 0x139574u: goto label_139574;
        case 0x139578u: goto label_139578;
        case 0x13957cu: goto label_13957c;
        case 0x139580u: goto label_139580;
        case 0x139584u: goto label_139584;
        case 0x139588u: goto label_139588;
        case 0x13958cu: goto label_13958c;
        case 0x139590u: goto label_139590;
        case 0x139594u: goto label_139594;
        case 0x139598u: goto label_139598;
        case 0x13959cu: goto label_13959c;
        case 0x1395a0u: goto label_1395a0;
        case 0x1395a4u: goto label_1395a4;
        case 0x1395a8u: goto label_1395a8;
        case 0x1395acu: goto label_1395ac;
        case 0x1395b0u: goto label_1395b0;
        case 0x1395b4u: goto label_1395b4;
        case 0x1395b8u: goto label_1395b8;
        case 0x1395bcu: goto label_1395bc;
        case 0x1395c0u: goto label_1395c0;
        case 0x1395c4u: goto label_1395c4;
        case 0x1395c8u: goto label_1395c8;
        case 0x1395ccu: goto label_1395cc;
        case 0x1395d0u: goto label_1395d0;
        case 0x1395d4u: goto label_1395d4;
        case 0x1395d8u: goto label_1395d8;
        case 0x1395dcu: goto label_1395dc;
        case 0x1395e0u: goto label_1395e0;
        case 0x1395e4u: goto label_1395e4;
        case 0x1395e8u: goto label_1395e8;
        case 0x1395ecu: goto label_1395ec;
        case 0x1395f0u: goto label_1395f0;
        case 0x1395f4u: goto label_1395f4;
        case 0x1395f8u: goto label_1395f8;
        case 0x1395fcu: goto label_1395fc;
        case 0x139600u: goto label_139600;
        case 0x139604u: goto label_139604;
        case 0x139608u: goto label_139608;
        case 0x13960cu: goto label_13960c;
        case 0x139610u: goto label_139610;
        case 0x139614u: goto label_139614;
        case 0x139618u: goto label_139618;
        case 0x13961cu: goto label_13961c;
        case 0x139620u: goto label_139620;
        case 0x139624u: goto label_139624;
        case 0x139628u: goto label_139628;
        case 0x13962cu: goto label_13962c;
        case 0x139630u: goto label_139630;
        case 0x139634u: goto label_139634;
        case 0x139638u: goto label_139638;
        case 0x13963cu: goto label_13963c;
        case 0x139640u: goto label_139640;
        case 0x139644u: goto label_139644;
        case 0x139648u: goto label_139648;
        case 0x13964cu: goto label_13964c;
        case 0x139650u: goto label_139650;
        case 0x139654u: goto label_139654;
        case 0x139658u: goto label_139658;
        case 0x13965cu: goto label_13965c;
        case 0x139660u: goto label_139660;
        case 0x139664u: goto label_139664;
        case 0x139668u: goto label_139668;
        case 0x13966cu: goto label_13966c;
        case 0x139670u: goto label_139670;
        case 0x139674u: goto label_139674;
        case 0x139678u: goto label_139678;
        case 0x13967cu: goto label_13967c;
        case 0x139680u: goto label_139680;
        case 0x139684u: goto label_139684;
        case 0x139688u: goto label_139688;
        case 0x13968cu: goto label_13968c;
        case 0x139690u: goto label_139690;
        case 0x139694u: goto label_139694;
        case 0x139698u: goto label_139698;
        case 0x13969cu: goto label_13969c;
        case 0x1396a0u: goto label_1396a0;
        case 0x1396a4u: goto label_1396a4;
        case 0x1396a8u: goto label_1396a8;
        case 0x1396acu: goto label_1396ac;
        case 0x1396b0u: goto label_1396b0;
        case 0x1396b4u: goto label_1396b4;
        case 0x1396b8u: goto label_1396b8;
        case 0x1396bcu: goto label_1396bc;
        case 0x1396c0u: goto label_1396c0;
        case 0x1396c4u: goto label_1396c4;
        case 0x1396c8u: goto label_1396c8;
        case 0x1396ccu: goto label_1396cc;
        case 0x1396d0u: goto label_1396d0;
        case 0x1396d4u: goto label_1396d4;
        case 0x1396d8u: goto label_1396d8;
        case 0x1396dcu: goto label_1396dc;
        case 0x1396e0u: goto label_1396e0;
        case 0x1396e4u: goto label_1396e4;
        case 0x1396e8u: goto label_1396e8;
        case 0x1396ecu: goto label_1396ec;
        case 0x1396f0u: goto label_1396f0;
        case 0x1396f4u: goto label_1396f4;
        case 0x1396f8u: goto label_1396f8;
        case 0x1396fcu: goto label_1396fc;
        case 0x139700u: goto label_139700;
        case 0x139704u: goto label_139704;
        case 0x139708u: goto label_139708;
        case 0x13970cu: goto label_13970c;
        case 0x139710u: goto label_139710;
        case 0x139714u: goto label_139714;
        case 0x139718u: goto label_139718;
        case 0x13971cu: goto label_13971c;
        case 0x139720u: goto label_139720;
        case 0x139724u: goto label_139724;
        case 0x139728u: goto label_139728;
        case 0x13972cu: goto label_13972c;
        case 0x139730u: goto label_139730;
        case 0x139734u: goto label_139734;
        case 0x139738u: goto label_139738;
        case 0x13973cu: goto label_13973c;
        case 0x139740u: goto label_139740;
        case 0x139744u: goto label_139744;
        case 0x139748u: goto label_139748;
        case 0x13974cu: goto label_13974c;
        case 0x139750u: goto label_139750;
        case 0x139754u: goto label_139754;
        case 0x139758u: goto label_139758;
        case 0x13975cu: goto label_13975c;
        case 0x139760u: goto label_139760;
        case 0x139764u: goto label_139764;
        case 0x139768u: goto label_139768;
        case 0x13976cu: goto label_13976c;
        case 0x139770u: goto label_139770;
        case 0x139774u: goto label_139774;
        case 0x139778u: goto label_139778;
        case 0x13977cu: goto label_13977c;
        case 0x139780u: goto label_139780;
        case 0x139784u: goto label_139784;
        case 0x139788u: goto label_139788;
        case 0x13978cu: goto label_13978c;
        case 0x139790u: goto label_139790;
        case 0x139794u: goto label_139794;
        case 0x139798u: goto label_139798;
        case 0x13979cu: goto label_13979c;
        case 0x1397a0u: goto label_1397a0;
        case 0x1397a4u: goto label_1397a4;
        case 0x1397a8u: goto label_1397a8;
        case 0x1397acu: goto label_1397ac;
        case 0x1397b0u: goto label_1397b0;
        case 0x1397b4u: goto label_1397b4;
        case 0x1397b8u: goto label_1397b8;
        case 0x1397bcu: goto label_1397bc;
        case 0x1397c0u: goto label_1397c0;
        case 0x1397c4u: goto label_1397c4;
        case 0x1397c8u: goto label_1397c8;
        case 0x1397ccu: goto label_1397cc;
        case 0x1397d0u: goto label_1397d0;
        case 0x1397d4u: goto label_1397d4;
        case 0x1397d8u: goto label_1397d8;
        case 0x1397dcu: goto label_1397dc;
        case 0x1397e0u: goto label_1397e0;
        case 0x1397e4u: goto label_1397e4;
        case 0x1397e8u: goto label_1397e8;
        case 0x1397ecu: goto label_1397ec;
        case 0x1397f0u: goto label_1397f0;
        case 0x1397f4u: goto label_1397f4;
        case 0x1397f8u: goto label_1397f8;
        case 0x1397fcu: goto label_1397fc;
        case 0x139800u: goto label_139800;
        case 0x139804u: goto label_139804;
        case 0x139808u: goto label_139808;
        case 0x13980cu: goto label_13980c;
        case 0x139810u: goto label_139810;
        case 0x139814u: goto label_139814;
        case 0x139818u: goto label_139818;
        case 0x13981cu: goto label_13981c;
        case 0x139820u: goto label_139820;
        case 0x139824u: goto label_139824;
        case 0x139828u: goto label_139828;
        case 0x13982cu: goto label_13982c;
        case 0x139830u: goto label_139830;
        case 0x139834u: goto label_139834;
        case 0x139838u: goto label_139838;
        case 0x13983cu: goto label_13983c;
        case 0x139840u: goto label_139840;
        case 0x139844u: goto label_139844;
        case 0x139848u: goto label_139848;
        case 0x13984cu: goto label_13984c;
        case 0x139850u: goto label_139850;
        case 0x139854u: goto label_139854;
        case 0x139858u: goto label_139858;
        case 0x13985cu: goto label_13985c;
        case 0x139860u: goto label_139860;
        case 0x139864u: goto label_139864;
        case 0x139868u: goto label_139868;
        case 0x13986cu: goto label_13986c;
        case 0x139870u: goto label_139870;
        case 0x139874u: goto label_139874;
        case 0x139878u: goto label_139878;
        case 0x13987cu: goto label_13987c;
        case 0x139880u: goto label_139880;
        case 0x139884u: goto label_139884;
        case 0x139888u: goto label_139888;
        case 0x13988cu: goto label_13988c;
        case 0x139890u: goto label_139890;
        case 0x139894u: goto label_139894;
        case 0x139898u: goto label_139898;
        case 0x13989cu: goto label_13989c;
        case 0x1398a0u: goto label_1398a0;
        case 0x1398a4u: goto label_1398a4;
        case 0x1398a8u: goto label_1398a8;
        case 0x1398acu: goto label_1398ac;
        case 0x1398b0u: goto label_1398b0;
        case 0x1398b4u: goto label_1398b4;
        case 0x1398b8u: goto label_1398b8;
        case 0x1398bcu: goto label_1398bc;
        case 0x1398c0u: goto label_1398c0;
        case 0x1398c4u: goto label_1398c4;
        case 0x1398c8u: goto label_1398c8;
        case 0x1398ccu: goto label_1398cc;
        case 0x1398d0u: goto label_1398d0;
        case 0x1398d4u: goto label_1398d4;
        case 0x1398d8u: goto label_1398d8;
        case 0x1398dcu: goto label_1398dc;
        case 0x1398e0u: goto label_1398e0;
        case 0x1398e4u: goto label_1398e4;
        case 0x1398e8u: goto label_1398e8;
        case 0x1398ecu: goto label_1398ec;
        case 0x1398f0u: goto label_1398f0;
        case 0x1398f4u: goto label_1398f4;
        case 0x1398f8u: goto label_1398f8;
        case 0x1398fcu: goto label_1398fc;
        case 0x139900u: goto label_139900;
        case 0x139904u: goto label_139904;
        case 0x139908u: goto label_139908;
        case 0x13990cu: goto label_13990c;
        case 0x139910u: goto label_139910;
        case 0x139914u: goto label_139914;
        case 0x139918u: goto label_139918;
        case 0x13991cu: goto label_13991c;
        case 0x139920u: goto label_139920;
        case 0x139924u: goto label_139924;
        case 0x139928u: goto label_139928;
        case 0x13992cu: goto label_13992c;
        case 0x139930u: goto label_139930;
        case 0x139934u: goto label_139934;
        case 0x139938u: goto label_139938;
        case 0x13993cu: goto label_13993c;
        case 0x139940u: goto label_139940;
        case 0x139944u: goto label_139944;
        case 0x139948u: goto label_139948;
        case 0x13994cu: goto label_13994c;
        case 0x139950u: goto label_139950;
        case 0x139954u: goto label_139954;
        case 0x139958u: goto label_139958;
        case 0x13995cu: goto label_13995c;
        case 0x139960u: goto label_139960;
        case 0x139964u: goto label_139964;
        case 0x139968u: goto label_139968;
        case 0x13996cu: goto label_13996c;
        case 0x139970u: goto label_139970;
        case 0x139974u: goto label_139974;
        case 0x139978u: goto label_139978;
        case 0x13997cu: goto label_13997c;
        case 0x139980u: goto label_139980;
        case 0x139984u: goto label_139984;
        case 0x139988u: goto label_139988;
        case 0x13998cu: goto label_13998c;
        case 0x139990u: goto label_139990;
        case 0x139994u: goto label_139994;
        case 0x139998u: goto label_139998;
        case 0x13999cu: goto label_13999c;
        case 0x1399a0u: goto label_1399a0;
        case 0x1399a4u: goto label_1399a4;
        case 0x1399a8u: goto label_1399a8;
        case 0x1399acu: goto label_1399ac;
        case 0x1399b0u: goto label_1399b0;
        case 0x1399b4u: goto label_1399b4;
        case 0x1399b8u: goto label_1399b8;
        case 0x1399bcu: goto label_1399bc;
        case 0x1399c0u: goto label_1399c0;
        case 0x1399c4u: goto label_1399c4;
        case 0x1399c8u: goto label_1399c8;
        case 0x1399ccu: goto label_1399cc;
        case 0x1399d0u: goto label_1399d0;
        case 0x1399d4u: goto label_1399d4;
        case 0x1399d8u: goto label_1399d8;
        case 0x1399dcu: goto label_1399dc;
        case 0x1399e0u: goto label_1399e0;
        case 0x1399e4u: goto label_1399e4;
        case 0x1399e8u: goto label_1399e8;
        case 0x1399ecu: goto label_1399ec;
        case 0x1399f0u: goto label_1399f0;
        case 0x1399f4u: goto label_1399f4;
        case 0x1399f8u: goto label_1399f8;
        case 0x1399fcu: goto label_1399fc;
        case 0x139a00u: goto label_139a00;
        case 0x139a04u: goto label_139a04;
        case 0x139a08u: goto label_139a08;
        case 0x139a0cu: goto label_139a0c;
        case 0x139a10u: goto label_139a10;
        case 0x139a14u: goto label_139a14;
        case 0x139a18u: goto label_139a18;
        case 0x139a1cu: goto label_139a1c;
        case 0x139a20u: goto label_139a20;
        case 0x139a24u: goto label_139a24;
        case 0x139a28u: goto label_139a28;
        case 0x139a2cu: goto label_139a2c;
        case 0x139a30u: goto label_139a30;
        case 0x139a34u: goto label_139a34;
        case 0x139a38u: goto label_139a38;
        case 0x139a3cu: goto label_139a3c;
        case 0x139a40u: goto label_139a40;
        case 0x139a44u: goto label_139a44;
        case 0x139a48u: goto label_139a48;
        case 0x139a4cu: goto label_139a4c;
        case 0x139a50u: goto label_139a50;
        case 0x139a54u: goto label_139a54;
        case 0x139a58u: goto label_139a58;
        case 0x139a5cu: goto label_139a5c;
        case 0x139a60u: goto label_139a60;
        case 0x139a64u: goto label_139a64;
        case 0x139a68u: goto label_139a68;
        case 0x139a6cu: goto label_139a6c;
        case 0x139a70u: goto label_139a70;
        case 0x139a74u: goto label_139a74;
        case 0x139a78u: goto label_139a78;
        case 0x139a7cu: goto label_139a7c;
        case 0x139a80u: goto label_139a80;
        case 0x139a84u: goto label_139a84;
        case 0x139a88u: goto label_139a88;
        case 0x139a8cu: goto label_139a8c;
        case 0x139a90u: goto label_139a90;
        case 0x139a94u: goto label_139a94;
        case 0x139a98u: goto label_139a98;
        case 0x139a9cu: goto label_139a9c;
        case 0x139aa0u: goto label_139aa0;
        case 0x139aa4u: goto label_139aa4;
        case 0x139aa8u: goto label_139aa8;
        case 0x139aacu: goto label_139aac;
        case 0x139ab0u: goto label_139ab0;
        case 0x139ab4u: goto label_139ab4;
        case 0x139ab8u: goto label_139ab8;
        case 0x139abcu: goto label_139abc;
        case 0x139ac0u: goto label_139ac0;
        case 0x139ac4u: goto label_139ac4;
        case 0x139ac8u: goto label_139ac8;
        case 0x139accu: goto label_139acc;
        case 0x139ad0u: goto label_139ad0;
        case 0x139ad4u: goto label_139ad4;
        case 0x139ad8u: goto label_139ad8;
        case 0x139adcu: goto label_139adc;
        case 0x139ae0u: goto label_139ae0;
        case 0x139ae4u: goto label_139ae4;
        case 0x139ae8u: goto label_139ae8;
        case 0x139aecu: goto label_139aec;
        case 0x139af0u: goto label_139af0;
        case 0x139af4u: goto label_139af4;
        case 0x139af8u: goto label_139af8;
        case 0x139afcu: goto label_139afc;
        case 0x139b00u: goto label_139b00;
        case 0x139b04u: goto label_139b04;
        case 0x139b08u: goto label_139b08;
        case 0x139b0cu: goto label_139b0c;
        case 0x139b10u: goto label_139b10;
        case 0x139b14u: goto label_139b14;
        case 0x139b18u: goto label_139b18;
        case 0x139b1cu: goto label_139b1c;
        case 0x139b20u: goto label_139b20;
        case 0x139b24u: goto label_139b24;
        case 0x139b28u: goto label_139b28;
        case 0x139b2cu: goto label_139b2c;
        case 0x139b30u: goto label_139b30;
        case 0x139b34u: goto label_139b34;
        case 0x139b38u: goto label_139b38;
        case 0x139b3cu: goto label_139b3c;
        case 0x139b40u: goto label_139b40;
        case 0x139b44u: goto label_139b44;
        case 0x139b48u: goto label_139b48;
        case 0x139b4cu: goto label_139b4c;
        case 0x139b50u: goto label_139b50;
        case 0x139b54u: goto label_139b54;
        case 0x139b58u: goto label_139b58;
        case 0x139b5cu: goto label_139b5c;
        case 0x139b60u: goto label_139b60;
        case 0x139b64u: goto label_139b64;
        case 0x139b68u: goto label_139b68;
        case 0x139b6cu: goto label_139b6c;
        case 0x139b70u: goto label_139b70;
        case 0x139b74u: goto label_139b74;
        case 0x139b78u: goto label_139b78;
        case 0x139b7cu: goto label_139b7c;
        case 0x139b80u: goto label_139b80;
        case 0x139b84u: goto label_139b84;
        case 0x139b88u: goto label_139b88;
        case 0x139b8cu: goto label_139b8c;
        case 0x139b90u: goto label_139b90;
        case 0x139b94u: goto label_139b94;
        case 0x139b98u: goto label_139b98;
        case 0x139b9cu: goto label_139b9c;
        case 0x139ba0u: goto label_139ba0;
        case 0x139ba4u: goto label_139ba4;
        case 0x139ba8u: goto label_139ba8;
        case 0x139bacu: goto label_139bac;
        case 0x139bb0u: goto label_139bb0;
        case 0x139bb4u: goto label_139bb4;
        case 0x139bb8u: goto label_139bb8;
        case 0x139bbcu: goto label_139bbc;
        case 0x139bc0u: goto label_139bc0;
        case 0x139bc4u: goto label_139bc4;
        case 0x139bc8u: goto label_139bc8;
        case 0x139bccu: goto label_139bcc;
        case 0x139bd0u: goto label_139bd0;
        case 0x139bd4u: goto label_139bd4;
        case 0x139bd8u: goto label_139bd8;
        case 0x139bdcu: goto label_139bdc;
        case 0x139be0u: goto label_139be0;
        case 0x139be4u: goto label_139be4;
        case 0x139be8u: goto label_139be8;
        case 0x139becu: goto label_139bec;
        case 0x139bf0u: goto label_139bf0;
        case 0x139bf4u: goto label_139bf4;
        case 0x139bf8u: goto label_139bf8;
        case 0x139bfcu: goto label_139bfc;
        case 0x139c00u: goto label_139c00;
        case 0x139c04u: goto label_139c04;
        case 0x139c08u: goto label_139c08;
        case 0x139c0cu: goto label_139c0c;
        case 0x139c10u: goto label_139c10;
        case 0x139c14u: goto label_139c14;
        case 0x139c18u: goto label_139c18;
        case 0x139c1cu: goto label_139c1c;
        case 0x139c20u: goto label_139c20;
        case 0x139c24u: goto label_139c24;
        case 0x139c28u: goto label_139c28;
        case 0x139c2cu: goto label_139c2c;
        case 0x139c30u: goto label_139c30;
        case 0x139c34u: goto label_139c34;
        case 0x139c38u: goto label_139c38;
        case 0x139c3cu: goto label_139c3c;
        case 0x139c40u: goto label_139c40;
        case 0x139c44u: goto label_139c44;
        case 0x139c48u: goto label_139c48;
        case 0x139c4cu: goto label_139c4c;
        case 0x139c50u: goto label_139c50;
        case 0x139c54u: goto label_139c54;
        case 0x139c58u: goto label_139c58;
        case 0x139c5cu: goto label_139c5c;
        case 0x139c60u: goto label_139c60;
        case 0x139c64u: goto label_139c64;
        case 0x139c68u: goto label_139c68;
        case 0x139c6cu: goto label_139c6c;
        case 0x139c70u: goto label_139c70;
        case 0x139c74u: goto label_139c74;
        case 0x139c78u: goto label_139c78;
        case 0x139c7cu: goto label_139c7c;
        case 0x139c80u: goto label_139c80;
        case 0x139c84u: goto label_139c84;
        case 0x139c88u: goto label_139c88;
        case 0x139c8cu: goto label_139c8c;
        case 0x139c90u: goto label_139c90;
        case 0x139c94u: goto label_139c94;
        case 0x139c98u: goto label_139c98;
        case 0x139c9cu: goto label_139c9c;
        case 0x139ca0u: goto label_139ca0;
        case 0x139ca4u: goto label_139ca4;
        case 0x139ca8u: goto label_139ca8;
        case 0x139cacu: goto label_139cac;
        case 0x139cb0u: goto label_139cb0;
        case 0x139cb4u: goto label_139cb4;
        case 0x139cb8u: goto label_139cb8;
        case 0x139cbcu: goto label_139cbc;
        case 0x139cc0u: goto label_139cc0;
        case 0x139cc4u: goto label_139cc4;
        case 0x139cc8u: goto label_139cc8;
        case 0x139cccu: goto label_139ccc;
        case 0x139cd0u: goto label_139cd0;
        case 0x139cd4u: goto label_139cd4;
        case 0x139cd8u: goto label_139cd8;
        case 0x139cdcu: goto label_139cdc;
        case 0x139ce0u: goto label_139ce0;
        case 0x139ce4u: goto label_139ce4;
        case 0x139ce8u: goto label_139ce8;
        case 0x139cecu: goto label_139cec;
        case 0x139cf0u: goto label_139cf0;
        case 0x139cf4u: goto label_139cf4;
        case 0x139cf8u: goto label_139cf8;
        case 0x139cfcu: goto label_139cfc;
        default: break;
    }

    ctx->pc = 0x138b90u;

label_138b90:
    // 0x138b90: 0x27bdfc40  addiu       $sp, $sp, -0x3C0
    ctx->pc = 0x138b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966336));
label_138b94:
    // 0x138b94: 0x7fb30360  sq          $s3, 0x360($sp)
    ctx->pc = 0x138b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 19));
label_138b98:
    // 0x138b98: 0xe7b403a0  swc1        $f20, 0x3A0($sp)
    ctx->pc = 0x138b98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 928), bits); }
label_138b9c:
    // 0x138b9c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x138b9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_138ba0:
    // 0x138ba0: 0x7fb00390  sq          $s0, 0x390($sp)
    ctx->pc = 0x138ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), GPR_VEC(ctx, 16));
label_138ba4:
    // 0x138ba4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x138ba4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_138ba8:
    // 0x138ba8: 0x7fb10380  sq          $s1, 0x380($sp)
    ctx->pc = 0x138ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), GPR_VEC(ctx, 17));
label_138bac:
    // 0x138bac: 0x7fb20370  sq          $s2, 0x370($sp)
    ctx->pc = 0x138bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 18));
label_138bb0:
    // 0x138bb0: 0x7fb40350  sq          $s4, 0x350($sp)
    ctx->pc = 0x138bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 20));
label_138bb4:
    // 0x138bb4: 0x7fb50340  sq          $s5, 0x340($sp)
    ctx->pc = 0x138bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 21));
label_138bb8:
    // 0x138bb8: 0x7fb60330  sq          $s6, 0x330($sp)
    ctx->pc = 0x138bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 22));
label_138bbc:
    // 0x138bbc: 0x7fb70320  sq          $s7, 0x320($sp)
    ctx->pc = 0x138bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 23));
label_138bc0:
    // 0x138bc0: 0x7fbe0310  sq          $fp, 0x310($sp)
    ctx->pc = 0x138bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 30));
label_138bc4:
    // 0x138bc4: 0xffbf0300  sd          $ra, 0x300($sp)
    ctx->pc = 0x138bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 768), GPR_U64(ctx, 31));
label_138bc8:
    // 0x138bc8: 0xe7b603b0  swc1        $f22, 0x3B0($sp)
    ctx->pc = 0x138bc8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 944), bits); }
label_138bcc:
    // 0x138bcc: 0xe7b503a8  swc1        $f21, 0x3A8($sp)
    ctx->pc = 0x138bccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 936), bits); }
label_138bd0:
    // 0x138bd0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x138bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_138bd4:
    // 0x138bd4: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x138bd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_138bd8:
    // 0x138bd8: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x138bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_138bdc:
    // 0x138bdc: 0x40f809  jalr        $v0
label_138be0:
    if (ctx->pc == 0x138BE0u) {
        ctx->pc = 0x138BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138BDCu;
        // 0x138be0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138BE4u;
        goto label_138be4;
    }
    ctx->pc = 0x138BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x138BE4u);
        ctx->pc = 0x138BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138BDCu;
        // 0x138be0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138BDCu, 0x138BE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x138BE4u;
label_138be4:
    // 0x138be4: 0xc047e72  jal         func_11F9C8
label_138be8:
    if (ctx->pc == 0x138BE8u) {
        ctx->pc = 0x138BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138BE4u;
        // 0x138be8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138BECu;
        goto label_138bec;
    }
    ctx->pc = 0x138BE4u;
    SET_GPR_U32(ctx, 31, 0x138BECu);
    ctx->pc = 0x138BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138BE4u;
    // 0x138be8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x138BE4u, 0x138BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138BECu;
label_138bec:
    // 0x138bec: 0x14530436  bne         $v0, $s3, . + 4 + (0x436 << 2)
label_138bf0:
    if (ctx->pc == 0x138BF0u) {
        ctx->pc = 0x138BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138BECu;
        // 0x138bf0: 0x7bb00390  lq          $s0, 0x390($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 912)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138BF4u;
        goto label_138bf4;
    }
    ctx->pc = 0x138BECu;
    {
        const bool branch_taken_0x138bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x138BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138BECu;
        // 0x138bf0: 0x7bb00390  lq          $s0, 0x390($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138bec) {
            ctx->pc = 0x139CC8u;
            goto label_139cc8;
        }
    }
    ctx->pc = 0x138BF4u;
label_138bf4:
    // 0x138bf4: 0xc0e409a  jal         func_390268
label_138bf8:
    if (ctx->pc == 0x138BF8u) {
        ctx->pc = 0x138BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138BF4u;
        // 0x138bf8: 0x266401e0  addiu       $a0, $s3, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138BFCu;
        goto label_138bfc;
    }
    ctx->pc = 0x138BF4u;
    SET_GPR_U32(ctx, 31, 0x138BFCu);
    ctx->pc = 0x138BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138BF4u;
    // 0x138bf8: 0x266401e0  addiu       $a0, $s3, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x138BF4u, 0x138BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138BFCu;
label_138bfc:
    // 0x138bfc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x138bfcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_138c00:
    // 0x138c00: 0xc0e409a  jal         func_390268
label_138c04:
    if (ctx->pc == 0x138C04u) {
        ctx->pc = 0x138C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C00u;
        // 0x138c04: 0x266401e4  addiu       $a0, $s3, 0x1E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 484));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138C08u;
        goto label_138c08;
    }
    ctx->pc = 0x138C00u;
    SET_GPR_U32(ctx, 31, 0x138C08u);
    ctx->pc = 0x138C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138C00u;
    // 0x138c04: 0x266401e4  addiu       $a0, $s3, 0x1E4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 484));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x138C00u, 0x138C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138C08u;
label_138c08:
    // 0x138c08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x138c08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_138c0c:
    // 0x138c0c: 0x8e62024c  lw          $v0, 0x24C($s3)
    ctx->pc = 0x138c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 588)));
label_138c10:
    // 0x138c10: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
label_138c14:
    if (ctx->pc == 0x138C14u) {
        ctx->pc = 0x138C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C10u;
        // 0x138c14: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138C18u;
        goto label_138c18;
    }
    ctx->pc = 0x138C10u;
    {
        const bool branch_taken_0x138c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138c10) {
            ctx->pc = 0x138C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138C10u;
            // 0x138c14: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138C9Cu;
            goto label_138c9c;
        }
    }
    ctx->pc = 0x138C18u;
label_138c18:
    // 0x138c18: 0x1280001b  beqz        $s4, . + 4 + (0x1B << 2)
label_138c1c:
    if (ctx->pc == 0x138C1Cu) {
        ctx->pc = 0x138C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C18u;
        // 0x138c1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138C20u;
        goto label_138c20;
    }
    ctx->pc = 0x138C18u;
    {
        const bool branch_taken_0x138c18 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C18u;
        // 0x138c1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c18) {
            ctx->pc = 0x138C88u;
            goto label_138c88;
        }
    }
    ctx->pc = 0x138C20u;
label_138c20:
    // 0x138c20: 0x5220001a  beql        $s1, $zero, . + 4 + (0x1A << 2)
label_138c24:
    if (ctx->pc == 0x138C24u) {
        ctx->pc = 0x138C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C20u;
        // 0x138c24: 0xae600248  sw          $zero, 0x248($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138C28u;
        goto label_138c28;
    }
    ctx->pc = 0x138C20u;
    {
        const bool branch_taken_0x138c20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x138c20) {
            ctx->pc = 0x138C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138C20u;
            // 0x138c24: 0xae600248  sw          $zero, 0x248($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 584), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138C8Cu;
            goto label_138c8c;
        }
    }
    ctx->pc = 0x138C28u;
label_138c28:
    // 0x138c28: 0xc088e48  jal         func_223920
label_138c2c:
    if (ctx->pc == 0x138C2Cu) {
        ctx->pc = 0x138C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C28u;
        // 0x138c2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138C30u;
        goto label_138c30;
    }
    ctx->pc = 0x138C28u;
    SET_GPR_U32(ctx, 31, 0x138C30u);
    ctx->pc = 0x138C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138C28u;
    // 0x138c2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223920u, 0x138C28u, 0x138C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138C30u;
label_138c30:
    // 0x138c30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_138c34:
    if (ctx->pc == 0x138C34u) {
        ctx->pc = 0x138C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C30u;
        // 0x138c34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138C38u;
        goto label_138c38;
    }
    ctx->pc = 0x138C30u;
    {
        const bool branch_taken_0x138c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x138C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C30u;
        // 0x138c34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c30) {
            ctx->pc = 0x138C48u;
            goto label_138c48;
        }
    }
    ctx->pc = 0x138C38u;
label_138c38:
    // 0x138c38: 0xc08997c  jal         func_2265F0
label_138c3c:
    if (ctx->pc == 0x138C3Cu) {
        ctx->pc = 0x138C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C38u;
        // 0x138c3c: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138C40u;
        goto label_138c40;
    }
    ctx->pc = 0x138C38u;
    SET_GPR_U32(ctx, 31, 0x138C40u);
    ctx->pc = 0x138C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138C38u;
    // 0x138c3c: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x138C38u, 0x138C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138C40u;
label_138c40:
    // 0x138c40: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_138c44:
    if (ctx->pc == 0x138C44u) {
        ctx->pc = 0x138C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C40u;
        // 0x138c44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138C48u;
        goto label_138c48;
    }
    ctx->pc = 0x138C40u;
    {
        const bool branch_taken_0x138c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C40u;
        // 0x138c44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c40) {
            ctx->pc = 0x138C88u;
            goto label_138c88;
        }
    }
    ctx->pc = 0x138C48u;
label_138c48:
    // 0x138c48: 0xc088e60  jal         func_223980
label_138c4c:
    if (ctx->pc == 0x138C4Cu) {
        ctx->pc = 0x138C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C48u;
        // 0x138c4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138C50u;
        goto label_138c50;
    }
    ctx->pc = 0x138C48u;
    SET_GPR_U32(ctx, 31, 0x138C50u);
    ctx->pc = 0x138C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138C48u;
    // 0x138c4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x138C48u, 0x138C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138C50u;
label_138c50:
    // 0x138c50: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_138c54:
    if (ctx->pc == 0x138C54u) {
        ctx->pc = 0x138C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C50u;
        // 0x138c54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138C58u;
        goto label_138c58;
    }
    ctx->pc = 0x138C50u;
    {
        const bool branch_taken_0x138c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x138C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C50u;
        // 0x138c54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c50) {
            ctx->pc = 0x138C68u;
            goto label_138c68;
        }
    }
    ctx->pc = 0x138C58u;
label_138c58:
    // 0x138c58: 0xc08997c  jal         func_2265F0
label_138c5c:
    if (ctx->pc == 0x138C5Cu) {
        ctx->pc = 0x138C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C58u;
        // 0x138c5c: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138C60u;
        goto label_138c60;
    }
    ctx->pc = 0x138C58u;
    SET_GPR_U32(ctx, 31, 0x138C60u);
    ctx->pc = 0x138C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138C58u;
    // 0x138c5c: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x138C58u, 0x138C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138C60u;
label_138c60:
    // 0x138c60: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_138c64:
    if (ctx->pc == 0x138C64u) {
        ctx->pc = 0x138C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C60u;
        // 0x138c64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138C68u;
        goto label_138c68;
    }
    ctx->pc = 0x138C60u;
    {
        const bool branch_taken_0x138c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C60u;
        // 0x138c64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c60) {
            ctx->pc = 0x138C88u;
            goto label_138c88;
        }
    }
    ctx->pc = 0x138C68u;
label_138c68:
    // 0x138c68: 0xc0e409a  jal         func_390268
label_138c6c:
    if (ctx->pc == 0x138C6Cu) {
        ctx->pc = 0x138C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C68u;
        // 0x138c6c: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138C70u;
        goto label_138c70;
    }
    ctx->pc = 0x138C68u;
    SET_GPR_U32(ctx, 31, 0x138C70u);
    ctx->pc = 0x138C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138C68u;
    // 0x138c6c: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x138C68u, 0x138C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138C70u;
label_138c70:
    // 0x138c70: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
label_138c74:
    if (ctx->pc == 0x138C74u) {
        ctx->pc = 0x138C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C70u;
        // 0x138c74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138C78u;
        goto label_138c78;
    }
    ctx->pc = 0x138C70u;
    {
        const bool branch_taken_0x138c70 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x138C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C70u;
        // 0x138c74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c70) {
            ctx->pc = 0x138C88u;
            goto label_138c88;
        }
    }
    ctx->pc = 0x138C78u;
label_138c78:
    // 0x138c78: 0xc0e409a  jal         func_390268
label_138c7c:
    if (ctx->pc == 0x138C7Cu) {
        ctx->pc = 0x138C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C78u;
        // 0x138c7c: 0x268400c4  addiu       $a0, $s4, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138C80u;
        goto label_138c80;
    }
    ctx->pc = 0x138C78u;
    SET_GPR_U32(ctx, 31, 0x138C80u);
    ctx->pc = 0x138C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138C78u;
    // 0x138c7c: 0x268400c4  addiu       $a0, $s4, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x138C78u, 0x138C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138C80u;
label_138c80:
    // 0x138c80: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_138c84:
    if (ctx->pc == 0x138C84u) {
        ctx->pc = 0x138C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C80u;
        // 0x138c84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138C88u;
        goto label_138c88;
    }
    ctx->pc = 0x138C80u;
    {
        const bool branch_taken_0x138c80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x138C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C80u;
        // 0x138c84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c80) {
            ctx->pc = 0x138C90u;
            goto label_138c90;
        }
    }
    ctx->pc = 0x138C88u;
label_138c88:
    // 0x138c88: 0xae600248  sw          $zero, 0x248($s3)
    ctx->pc = 0x138c88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 584), GPR_U32(ctx, 0));
label_138c8c:
    // 0x138c8c: 0xae62024c  sw          $v0, 0x24C($s3)
    ctx->pc = 0x138c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 588), GPR_U32(ctx, 2));
label_138c90:
    // 0x138c90: 0x8e62024c  lw          $v0, 0x24C($s3)
    ctx->pc = 0x138c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 588)));
label_138c94:
    // 0x138c94: 0x104000a6  beqz        $v0, . + 4 + (0xA6 << 2)
label_138c98:
    if (ctx->pc == 0x138C98u) {
        ctx->pc = 0x138C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C94u;
        // 0x138c98: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138C9Cu;
        goto label_138c9c;
    }
    ctx->pc = 0x138C94u;
    {
        const bool branch_taken_0x138c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C94u;
        // 0x138c98: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c94) {
            ctx->pc = 0x138F30u;
            goto label_138f30;
        }
    }
    ctx->pc = 0x138C9Cu;
label_138c9c:
    // 0x138c9c: 0x8e6501ec  lw          $a1, 0x1EC($s3)
    ctx->pc = 0x138c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 492)));
label_138ca0:
    // 0x138ca0: 0x8c438690  lw          $v1, -0x7970($v0)
    ctx->pc = 0x138ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936208)));
label_138ca4:
    // 0x138ca4: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
label_138ca8:
    if (ctx->pc == 0x138CA8u) {
        ctx->pc = 0x138CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138CA4u;
        // 0x138ca8: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138CACu;
        goto label_138cac;
    }
    ctx->pc = 0x138CA4u;
    {
        const bool branch_taken_0x138ca4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x138CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138CA4u;
        // 0x138ca8: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ca4) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138CACu;
label_138cac:
    // 0x138cac: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x138cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_138cb0:
    // 0x138cb0: 0xc0440c6  jal         func_110318
label_138cb4:
    if (ctx->pc == 0x138CB4u) {
        ctx->pc = 0x138CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138CB0u;
        // 0x138cb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138CB8u;
        goto label_138cb8;
    }
    ctx->pc = 0x138CB0u;
    SET_GPR_U32(ctx, 31, 0x138CB8u);
    ctx->pc = 0x138CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138CB0u;
    // 0x138cb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x138CB0u, 0x138CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138CB8u;
label_138cb8:
    // 0x138cb8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x138cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_138cbc:
    // 0x138cbc: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x138cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_138cc0:
    // 0x138cc0: 0x24a59060  addiu       $a1, $a1, -0x6FA0
    ctx->pc = 0x138cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938720));
label_138cc4:
    // 0x138cc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_138cc8:
    // 0x138cc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x138cc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_138ccc:
    // 0x138ccc: 0xc043f1c  jal         func_10FC70
label_138cd0:
    if (ctx->pc == 0x138CD0u) {
        ctx->pc = 0x138CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138CCCu;
        // 0x138cd0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138CD4u;
        goto label_138cd4;
    }
    ctx->pc = 0x138CCCu;
    SET_GPR_U32(ctx, 31, 0x138CD4u);
    ctx->pc = 0x138CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138CCCu;
    // 0x138cd0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC70u, 0x138CCCu, 0x138CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138CD4u;
label_138cd4:
    // 0x138cd4: 0x5220007f  beql        $s1, $zero, . + 4 + (0x7F << 2)
label_138cd8:
    if (ctx->pc == 0x138CD8u) {
        ctx->pc = 0x138CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138CD4u;
        // 0x138cd8: 0x8e630230  lw          $v1, 0x230($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138CDCu;
        goto label_138cdc;
    }
    ctx->pc = 0x138CD4u;
    {
        const bool branch_taken_0x138cd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x138cd4) {
            ctx->pc = 0x138CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138CD4u;
            // 0x138cd8: 0x8e630230  lw          $v1, 0x230($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138ED4u;
            goto label_138ed4;
        }
    }
    ctx->pc = 0x138CDCu;
label_138cdc:
    // 0x138cdc: 0x8e650230  lw          $a1, 0x230($s3)
    ctx->pc = 0x138cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 560)));
label_138ce0:
    // 0x138ce0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x138ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_138ce4:
    // 0x138ce4: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x138ce4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_138ce8:
    // 0x138ce8: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x138ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_138cec:
    // 0x138cec: 0x40f809  jalr        $v0
label_138cf0:
    if (ctx->pc == 0x138CF0u) {
        ctx->pc = 0x138CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138CECu;
        // 0x138cf0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138CF4u;
        goto label_138cf4;
    }
    ctx->pc = 0x138CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x138CF4u);
        ctx->pc = 0x138CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138CECu;
        // 0x138cf0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138CECu, 0x138CF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x138CF4u;
label_138cf4:
    // 0x138cf4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x138cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_138cf8:
    // 0x138cf8: 0x54430076  bnel        $v0, $v1, . + 4 + (0x76 << 2)
label_138cfc:
    if (ctx->pc == 0x138CFCu) {
        ctx->pc = 0x138CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138CF8u;
        // 0x138cfc: 0x8e630230  lw          $v1, 0x230($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138D00u;
        goto label_138d00;
    }
    ctx->pc = 0x138CF8u;
    {
        const bool branch_taken_0x138cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x138cf8) {
            ctx->pc = 0x138CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138CF8u;
            // 0x138cfc: 0x8e630230  lw          $v1, 0x230($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138ED4u;
            goto label_138ed4;
        }
    }
    ctx->pc = 0x138D00u;
label_138d00:
    // 0x138d00: 0x86230092  lh          $v1, 0x92($s1)
    ctx->pc = 0x138d00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_138d04:
    // 0x138d04: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x138d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_138d08:
    // 0x138d08: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x138d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_138d0c:
    // 0x138d0c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x138d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_138d10:
    // 0x138d10: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x138d10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_138d14:
    // 0x138d14: 0x26101740  addiu       $s0, $s0, 0x1740
    ctx->pc = 0x138d14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
label_138d18:
    // 0x138d18: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x138d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_138d1c:
    // 0x138d1c: 0x7a040000  lq          $a0, 0x0($s0)
    ctx->pc = 0x138d1cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_138d20:
    // 0x138d20: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x138d20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_138d24:
    // 0x138d24: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x138d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_138d28:
    // 0x138d28: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x138d28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_138d2c:
    // 0x138d2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x138d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_138d30:
    // 0x138d30: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x138d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_138d34:
    // 0x138d34: 0xc12e310  jal         func_4B8C40
label_138d38:
    if (ctx->pc == 0x138D38u) {
        ctx->pc = 0x138D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D34u;
        // 0x138d38: 0x7fa40020  sq          $a0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138D3Cu;
        goto label_138d3c;
    }
    ctx->pc = 0x138D34u;
    SET_GPR_U32(ctx, 31, 0x138D3Cu);
    ctx->pc = 0x138D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138D34u;
    // 0x138d38: 0x7fa40020  sq          $a0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x138D34u, 0x138D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138D3Cu;
label_138d3c:
    // 0x138d3c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x138d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_138d40:
    // 0x138d40: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x138d40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_138d44:
    // 0x138d44: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x138d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_138d48:
    // 0x138d48: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x138d48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_138d4c:
    // 0x138d4c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x138d4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_138d50:
    // 0x138d50: 0xc12e29c  jal         func_4B8A70
label_138d54:
    if (ctx->pc == 0x138D54u) {
        ctx->pc = 0x138D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D50u;
        // 0x138d54: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x138D58u;
        goto label_138d58;
    }
    ctx->pc = 0x138D50u;
    SET_GPR_U32(ctx, 31, 0x138D58u);
    ctx->pc = 0x138D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138D50u;
    // 0x138d54: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x138D50u, 0x138D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138D58u;
label_138d58:
    // 0x138d58: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x138d58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_138d5c:
    // 0x138d5c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x138d5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_138d60:
    // 0x138d60: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x138d60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_138d64:
    // 0x138d64: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x138d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_138d68:
    // 0x138d68: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x138d68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_138d6c:
    // 0x138d6c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x138d6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_138d70:
    // 0x138d70: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x138d70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_138d74:
    // 0x138d74: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x138d74u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_138d78:
    // 0x138d78: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x138d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_138d7c:
    // 0x138d7c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x138d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_138d80:
    // 0x138d80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x138d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_138d84:
    // 0x138d84: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x138d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_138d88:
    // 0x138d88: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x138d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_138d8c:
    // 0x138d8c: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x138d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_138d90:
    // 0x138d90: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x138d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_138d94:
    // 0x138d94: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x138d94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_138d98:
    // 0x138d98: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x138d98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_138d9c:
    // 0x138d9c: 0xc0cd8c2  jal         func_336308
label_138da0:
    if (ctx->pc == 0x138DA0u) {
        ctx->pc = 0x138DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D9Cu;
        // 0x138da0: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x138DA4u;
        goto label_138da4;
    }
    ctx->pc = 0x138D9Cu;
    SET_GPR_U32(ctx, 31, 0x138DA4u);
    ctx->pc = 0x138DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138D9Cu;
    // 0x138da0: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x336308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336308u, 0x138D9Cu, 0x138DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138DA4u;
label_138da4:
    // 0x138da4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x138da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_138da8:
    // 0x138da8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x138da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_138dac:
    // 0x138dac: 0xc136d44  jal         func_4DB510
label_138db0:
    if (ctx->pc == 0x138DB0u) {
        ctx->pc = 0x138DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138DACu;
        // 0x138db0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138DB4u;
        goto label_138db4;
    }
    ctx->pc = 0x138DACu;
    SET_GPR_U32(ctx, 31, 0x138DB4u);
    ctx->pc = 0x138DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138DACu;
    // 0x138db0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB510u, 0x138DACu, 0x138DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138DB4u;
label_138db4:
    // 0x138db4: 0xc6740238  lwc1        $f20, 0x238($s3)
    ctx->pc = 0x138db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_138db8:
    // 0x138db8: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x138db8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_138dbc:
    // 0x138dbc: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x138dbcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
label_138dc0:
    // 0x138dc0: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x138dc0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_138dc4:
    // 0x138dc4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x138dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_138dc8:
    // 0x138dc8: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x138dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_138dcc:
    // 0x138dcc: 0xc12e310  jal         func_4B8C40
label_138dd0:
    if (ctx->pc == 0x138DD0u) {
        ctx->pc = 0x138DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138DCCu;
        // 0x138dd0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x138DD4u;
        goto label_138dd4;
    }
    ctx->pc = 0x138DCCu;
    SET_GPR_U32(ctx, 31, 0x138DD4u);
    ctx->pc = 0x138DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138DCCu;
    // 0x138dd0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x138DCCu, 0x138DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138DD4u;
label_138dd4:
    // 0x138dd4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x138dd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_138dd8:
    // 0x138dd8: 0xc12e29c  jal         func_4B8A70
label_138ddc:
    if (ctx->pc == 0x138DDCu) {
        ctx->pc = 0x138DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138DD8u;
        // 0x138ddc: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x138DE0u;
        goto label_138de0;
    }
    ctx->pc = 0x138DD8u;
    SET_GPR_U32(ctx, 31, 0x138DE0u);
    ctx->pc = 0x138DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138DD8u;
    // 0x138ddc: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x138DD8u, 0x138DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138DE0u;
label_138de0:
    // 0x138de0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x138de0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_138de4:
    // 0x138de4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x138de4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_138de8:
    // 0x138de8: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x138de8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_138dec:
    // 0x138dec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x138decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_138df0:
    // 0x138df0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x138df0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_138df4:
    // 0x138df4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x138df4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_138df8:
    // 0x138df8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x138df8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_138dfc:
    // 0x138dfc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x138dfcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_138e00:
    // 0x138e00: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x138e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_138e04:
    // 0x138e04: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x138e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_138e08:
    // 0x138e08: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x138e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_138e0c:
    // 0x138e0c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x138e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_138e10:
    // 0x138e10: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x138e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_138e14:
    // 0x138e14: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x138e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_138e18:
    // 0x138e18: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x138e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_138e1c:
    // 0x138e1c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x138e1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_138e20:
    // 0x138e20: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x138e20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_138e24:
    // 0x138e24: 0xc136d44  jal         func_4DB510
label_138e28:
    if (ctx->pc == 0x138E28u) {
        ctx->pc = 0x138E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138E24u;
        // 0x138e28: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x138E2Cu;
        goto label_138e2c;
    }
    ctx->pc = 0x138E24u;
    SET_GPR_U32(ctx, 31, 0x138E2Cu);
    ctx->pc = 0x138E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138E24u;
    // 0x138e28: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB510u, 0x138E24u, 0x138E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138E2Cu;
label_138e2c:
    // 0x138e2c: 0xc674023c  lwc1        $f20, 0x23C($s3)
    ctx->pc = 0x138e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_138e30:
    // 0x138e30: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x138e30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_138e34:
    // 0x138e34: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x138e34u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
label_138e38:
    // 0x138e38: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x138e38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_138e3c:
    // 0x138e3c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x138e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_138e40:
    // 0x138e40: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x138e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_138e44:
    // 0x138e44: 0xc12e310  jal         func_4B8C40
label_138e48:
    if (ctx->pc == 0x138E48u) {
        ctx->pc = 0x138E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138E44u;
        // 0x138e48: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x138E4Cu;
        goto label_138e4c;
    }
    ctx->pc = 0x138E44u;
    SET_GPR_U32(ctx, 31, 0x138E4Cu);
    ctx->pc = 0x138E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138E44u;
    // 0x138e48: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x138E44u, 0x138E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138E4Cu;
label_138e4c:
    // 0x138e4c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x138e4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_138e50:
    // 0x138e50: 0xc12e29c  jal         func_4B8A70
label_138e54:
    if (ctx->pc == 0x138E54u) {
        ctx->pc = 0x138E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138E50u;
        // 0x138e54: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x138E58u;
        goto label_138e58;
    }
    ctx->pc = 0x138E50u;
    SET_GPR_U32(ctx, 31, 0x138E58u);
    ctx->pc = 0x138E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138E50u;
    // 0x138e54: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x138E50u, 0x138E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138E58u;
label_138e58:
    // 0x138e58: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x138e58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_138e5c:
    // 0x138e5c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x138e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_138e60:
    // 0x138e60: 0x4407a800  mfc1        $a3, $f21
    ctx->pc = 0x138e60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_138e64:
    // 0x138e64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x138e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_138e68:
    // 0x138e68: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x138e68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_138e6c:
    // 0x138e6c: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x138e6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_138e70:
    // 0x138e70: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x138e70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_138e74:
    // 0x138e74: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x138e74u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_138e78:
    // 0x138e78: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x138e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_138e7c:
    // 0x138e7c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x138e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_138e80:
    // 0x138e80: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x138e80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_138e84:
    // 0x138e84: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x138e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_138e88:
    // 0x138e88: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x138e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_138e8c:
    // 0x138e8c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x138e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_138e90:
    // 0x138e90: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x138e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_138e94:
    // 0x138e94: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x138e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_138e98:
    // 0x138e98: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x138e98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_138e9c:
    // 0x138e9c: 0xc136d44  jal         func_4DB510
label_138ea0:
    if (ctx->pc == 0x138EA0u) {
        ctx->pc = 0x138EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138E9Cu;
        // 0x138ea0: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x138EA4u;
        goto label_138ea4;
    }
    ctx->pc = 0x138E9Cu;
    SET_GPR_U32(ctx, 31, 0x138EA4u);
    ctx->pc = 0x138EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138E9Cu;
    // 0x138ea0: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB510u, 0x138E9Cu, 0x138EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138EA4u;
label_138ea4:
    // 0x138ea4: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x138ea4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_138ea8:
    // 0x138ea8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x138ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_138eac:
    // 0x138eac: 0x8e640230  lw          $a0, 0x230($s3)
    ctx->pc = 0x138eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 560)));
label_138eb0:
    // 0x138eb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138eb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_138eb4:
    // 0x138eb4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x138eb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_138eb8:
    // 0x138eb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x138eb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_138ebc:
    // 0x138ebc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x138ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_138ec0:
    // 0x138ec0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x138ec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_138ec4:
    // 0x138ec4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x138ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_138ec8:
    // 0x138ec8: 0xc04b792  jal         func_12DE48
label_138ecc:
    if (ctx->pc == 0x138ECCu) {
        ctx->pc = 0x138ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138EC8u;
        // 0x138ecc: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138ED0u;
        goto label_138ed0;
    }
    ctx->pc = 0x138EC8u;
    SET_GPR_U32(ctx, 31, 0x138ED0u);
    ctx->pc = 0x138ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138EC8u;
    // 0x138ecc: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DE48u, 0x138EC8u, 0x138ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138ED0u;
label_138ed0:
    // 0x138ed0: 0x8e630230  lw          $v1, 0x230($s3)
    ctx->pc = 0x138ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 560)));
label_138ed4:
    // 0x138ed4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x138ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_138ed8:
    // 0x138ed8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x138ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_138edc:
    // 0x138edc: 0x84440290  lh          $a0, 0x290($v0)
    ctx->pc = 0x138edcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 656)));
label_138ee0:
    // 0x138ee0: 0x8c460294  lw          $a2, 0x294($v0)
    ctx->pc = 0x138ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 660)));
label_138ee4:
    // 0x138ee4: 0xc0f809  jalr        $a2
label_138ee8:
    if (ctx->pc == 0x138EE8u) {
        ctx->pc = 0x138EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138EE4u;
        // 0x138ee8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138EECu;
        goto label_138eec;
    }
    ctx->pc = 0x138EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x138EECu);
        ctx->pc = 0x138EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138EE4u;
        // 0x138ee8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138EE4u, 0x138EECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x138EECu;
label_138eec:
    // 0x138eec: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x138eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_138ef0:
    // 0x138ef0: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x138ef0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_138ef4:
    // 0x138ef4: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x138ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_138ef8:
    // 0x138ef8: 0x40f809  jalr        $v0
label_138efc:
    if (ctx->pc == 0x138EFCu) {
        ctx->pc = 0x138EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138EF8u;
        // 0x138efc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138F00u;
        goto label_138f00;
    }
    ctx->pc = 0x138EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x138F00u);
        ctx->pc = 0x138EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138EF8u;
        // 0x138efc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138EF8u, 0x138F00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x138F00u;
label_138f00:
    // 0x138f00: 0x8e640230  lw          $a0, 0x230($s3)
    ctx->pc = 0x138f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 560)));
label_138f04:
    // 0x138f04: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x138f04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_138f08:
    // 0x138f08: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x138f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_138f0c:
    // 0x138f0c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x138f0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_138f10:
    // 0x138f10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x138f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_138f14:
    // 0x138f14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_138f18:
    // 0x138f18: 0xc047b82  jal         func_11EE08
label_138f1c:
    if (ctx->pc == 0x138F1Cu) {
        ctx->pc = 0x138F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F18u;
        // 0x138f1c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138F20u;
        goto label_138f20;
    }
    ctx->pc = 0x138F18u;
    SET_GPR_U32(ctx, 31, 0x138F20u);
    ctx->pc = 0x138F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138F18u;
    // 0x138f1c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE08u, 0x138F18u, 0x138F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138F20u;
label_138f20:
    // 0x138f20: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x138f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_138f24:
    // 0x138f24: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x138f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_138f28:
    // 0x138f28: 0x10000366  b           . + 4 + (0x366 << 2)
label_138f2c:
    if (ctx->pc == 0x138F2Cu) {
        ctx->pc = 0x138F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F28u;
        // 0x138f2c: 0xae6301e0  sw          $v1, 0x1E0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 480), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138F30u;
        goto label_138f30;
    }
    ctx->pc = 0x138F28u;
    {
        const bool branch_taken_0x138f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F28u;
        // 0x138f2c: 0xae6301e0  sw          $v1, 0x1E0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 480), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138f28) {
            ctx->pc = 0x139CC4u;
            goto label_139cc4;
        }
    }
    ctx->pc = 0x138F30u;
label_138f30:
    // 0x138f30: 0xe67401a0  swc1        $f20, 0x1A0($s3)
    ctx->pc = 0x138f30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 416), bits); }
label_138f34:
    // 0x138f34: 0x26310090  addiu       $s1, $s1, 0x90
    ctx->pc = 0x138f34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_138f38:
    // 0x138f38: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x138f38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_138f3c:
    // 0x138f3c: 0x26920090  addiu       $s2, $s4, 0x90
    ctx->pc = 0x138f3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_138f40:
    // 0x138f40: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x138f40u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_138f44:
    // 0x138f44: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x138f44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_138f48:
    // 0x138f48: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x138f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_138f4c:
    // 0x138f4c: 0xafb202f0  sw          $s2, 0x2F0($sp)
    ctx->pc = 0x138f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 18));
label_138f50:
    // 0x138f50: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x138f50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_138f54:
    // 0x138f54: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x138f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_138f58:
    // 0x138f58: 0xc0cd8ec  jal         func_3363B0
label_138f5c:
    if (ctx->pc == 0x138F5Cu) {
        ctx->pc = 0x138F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F58u;
        // 0x138f5c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138F60u;
        goto label_138f60;
    }
    ctx->pc = 0x138F58u;
    SET_GPR_U32(ctx, 31, 0x138F60u);
    ctx->pc = 0x138F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138F58u;
    // 0x138f5c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x138F58u, 0x138F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138F60u;
label_138f60:
    // 0x138f60: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x138f60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_138f64:
    // 0x138f64: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x138f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_138f68:
    // 0x138f68: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x138f68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_138f6c:
    // 0x138f6c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x138f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_138f70:
    // 0x138f70: 0xc0cd8c2  jal         func_336308
label_138f74:
    if (ctx->pc == 0x138F74u) {
        ctx->pc = 0x138F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F70u;
        // 0x138f74: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138F78u;
        goto label_138f78;
    }
    ctx->pc = 0x138F70u;
    SET_GPR_U32(ctx, 31, 0x138F78u);
    ctx->pc = 0x138F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138F70u;
    // 0x138f74: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336308u, 0x138F70u, 0x138F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138F78u;
label_138f78:
    // 0x138f78: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x138f78u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_138f7c:
    // 0x138f7c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x138f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_138f80:
    // 0x138f80: 0x26660200  addiu       $a2, $s3, 0x200
    ctx->pc = 0x138f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
label_138f84:
    // 0x138f84: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x138f84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_138f88:
    // 0x138f88: 0xc136b18  jal         func_4DAC60
label_138f8c:
    if (ctx->pc == 0x138F8Cu) {
        ctx->pc = 0x138F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F88u;
        // 0x138f8c: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138F90u;
        goto label_138f90;
    }
    ctx->pc = 0x138F88u;
    SET_GPR_U32(ctx, 31, 0x138F90u);
    ctx->pc = 0x138F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138F88u;
    // 0x138f8c: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x138F88u, 0x138F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138F90u;
label_138f90:
    // 0x138f90: 0xc6620244  lwc1        $f2, 0x244($s3)
    ctx->pc = 0x138f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_138f94:
    // 0x138f94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x138f94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_138f98:
    // 0x138f98: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x138f98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_138f9c:
    // 0x138f9c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x138f9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_138fa0:
    // 0x138fa0: 0x0  nop
    ctx->pc = 0x138fa0u;
    // NOP
label_138fa4:
    // 0x138fa4: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_138fa8:
    if (ctx->pc == 0x138FA8u) {
        ctx->pc = 0x138FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138FA4u;
        // 0x138fa8: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138FACu;
        goto label_138fac;
    }
    ctx->pc = 0x138FA4u;
    {
        const bool branch_taken_0x138fa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x138FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138FA4u;
        // 0x138fa8: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138fa4) {
            ctx->pc = 0x138FFCu;
            goto label_138ffc;
        }
    }
    ctx->pc = 0x138FACu;
label_138fac:
    // 0x138fac: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x138facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_138fb0:
    // 0x138fb0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x138fb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_138fb4:
    // 0x138fb4: 0xc66c0240  lwc1        $f12, 0x240($s3)
    ctx->pc = 0x138fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_138fb8:
    // 0x138fb8: 0x3c014041  lui         $at, 0x4041
    ctx->pc = 0x138fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16449 << 16));
label_138fbc:
    // 0x138fbc: 0x3421f07c  ori         $at, $at, 0xF07C
    ctx->pc = 0x138fbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61564);
label_138fc0:
    // 0x138fc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x138fc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_138fc4:
    // 0x138fc4: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x138fc4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
label_138fc8:
    // 0x138fc8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x138fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_138fcc:
    // 0x138fcc: 0x84440190  lh          $a0, 0x190($v0)
    ctx->pc = 0x138fccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 400)));
label_138fd0:
    // 0x138fd0: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x138fd0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_138fd4:
    // 0x138fd4: 0x8c430194  lw          $v1, 0x194($v0)
    ctx->pc = 0x138fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
label_138fd8:
    // 0x138fd8: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x138fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_138fdc:
    // 0x138fdc: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x138fdcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
label_138fe0:
    // 0x138fe0: 0x60f809  jalr        $v1
label_138fe4:
    if (ctx->pc == 0x138FE4u) {
        ctx->pc = 0x138FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138FE0u;
        // 0x138fe4: 0x46016300  add.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x138FE8u;
        goto label_138fe8;
    }
    ctx->pc = 0x138FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x138FE8u);
        ctx->pc = 0x138FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138FE0u;
        // 0x138fe4: 0x46016300  add.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138FE0u, 0x138FE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x138FE8u;
label_138fe8:
    // 0x138fe8: 0xc6600244  lwc1        $f0, 0x244($s3)
    ctx->pc = 0x138fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_138fec:
    // 0x138fec: 0xc66101a0  lwc1        $f1, 0x1A0($s3)
    ctx->pc = 0x138fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_138ff0:
    // 0x138ff0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x138ff0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_138ff4:
    // 0x138ff4: 0x10000009  b           . + 4 + (0x9 << 2)
label_138ff8:
    if (ctx->pc == 0x138FF8u) {
        ctx->pc = 0x138FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138FF4u;
        // 0x138ff8: 0xe6600244  swc1        $f0, 0x244($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 580), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x138FFCu;
        goto label_138ffc;
    }
    ctx->pc = 0x138FF4u;
    {
        const bool branch_taken_0x138ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138FF4u;
        // 0x138ff8: 0xe6600244  swc1        $f0, 0x244($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 580), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ff4) {
            ctx->pc = 0x13901Cu;
            goto label_13901c;
        }
    }
    ctx->pc = 0x138FFCu;
label_138ffc:
    // 0x138ffc: 0xe6600244  swc1        $f0, 0x244($s3)
    ctx->pc = 0x138ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 580), bits); }
label_139000:
    // 0x139000: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x139000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_139004:
    // 0x139004: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x139004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_139008:
    // 0x139008: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x139008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13900c:
    // 0x13900c: 0x84440190  lh          $a0, 0x190($v0)
    ctx->pc = 0x13900cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 400)));
label_139010:
    // 0x139010: 0x8c430194  lw          $v1, 0x194($v0)
    ctx->pc = 0x139010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
label_139014:
    // 0x139014: 0x60f809  jalr        $v1
label_139018:
    if (ctx->pc == 0x139018u) {
        ctx->pc = 0x139018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139014u;
        // 0x139018: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13901Cu;
        goto label_13901c;
    }
    ctx->pc = 0x139014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13901Cu);
        ctx->pc = 0x139018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139014u;
        // 0x139018: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139014u, 0x13901Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13901Cu;
label_13901c:
    // 0x13901c: 0xc6740238  lwc1        $f20, 0x238($s3)
    ctx->pc = 0x13901cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_139020:
    // 0x139020: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x139020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_139024:
    // 0x139024: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x139024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_139028:
    // 0x139028: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x139028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_13902c:
    // 0x13902c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x13902cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_139030:
    // 0x139030: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x139030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_139034:
    // 0x139034: 0x267001f0  addiu       $s0, $s3, 0x1F0
    ctx->pc = 0x139034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 496));
label_139038:
    // 0x139038: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x139038u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
label_13903c:
    // 0x13903c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x13903cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_139040:
    // 0x139040: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x139040u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_139044:
    // 0x139044: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x139044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_139048:
    // 0x139048: 0xc12e310  jal         func_4B8C40
label_13904c:
    if (ctx->pc == 0x13904Cu) {
        ctx->pc = 0x13904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139048u;
        // 0x13904c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x139050u;
        goto label_139050;
    }
    ctx->pc = 0x139048u;
    SET_GPR_U32(ctx, 31, 0x139050u);
    ctx->pc = 0x13904Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139048u;
    // 0x13904c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x139048u, 0x139050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139050u;
label_139050:
    // 0x139050: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x139050u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_139054:
    // 0x139054: 0xc12e29c  jal         func_4B8A70
label_139058:
    if (ctx->pc == 0x139058u) {
        ctx->pc = 0x139058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139054u;
        // 0x139058: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13905Cu;
        goto label_13905c;
    }
    ctx->pc = 0x139054u;
    SET_GPR_U32(ctx, 31, 0x13905Cu);
    ctx->pc = 0x139058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139054u;
    // 0x139058: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x139054u, 0x13905Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13905Cu;
label_13905c:
    // 0x13905c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x13905cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_139060:
    // 0x139060: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x139060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_139064:
    // 0x139064: 0x4408a800  mfc1        $t0, $f21
    ctx->pc = 0x139064u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_139068:
    // 0x139068: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x139068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13906c:
    // 0x13906c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13906cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_139070:
    // 0x139070: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x139070u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_139074:
    // 0x139074: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x139074u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_139078:
    // 0x139078: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x139078u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_13907c:
    // 0x13907c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x13907cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_139080:
    // 0x139080: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x139080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_139084:
    // 0x139084: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x139084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_139088:
    // 0x139088: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x139088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_13908c:
    // 0x13908c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x13908cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_139090:
    // 0x139090: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x139090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_139094:
    // 0x139094: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x139094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_139098:
    // 0x139098: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x139098u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_13909c:
    // 0x13909c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x13909cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1390a0:
    // 0x1390a0: 0xc136b30  jal         func_4DACC0
label_1390a4:
    if (ctx->pc == 0x1390A4u) {
        ctx->pc = 0x1390A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1390A0u;
        // 0x1390a4: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1390A8u;
        goto label_1390a8;
    }
    ctx->pc = 0x1390A0u;
    SET_GPR_U32(ctx, 31, 0x1390A8u);
    ctx->pc = 0x1390A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1390A0u;
    // 0x1390a4: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x1390A0u, 0x1390A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1390A8u;
label_1390a8:
    // 0x1390a8: 0xc674023c  lwc1        $f20, 0x23C($s3)
    ctx->pc = 0x1390a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1390ac:
    // 0x1390ac: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x1390acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1390b0:
    // 0x1390b0: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x1390b0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
label_1390b4:
    // 0x1390b4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1390b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1390b8:
    // 0x1390b8: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x1390b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_1390bc:
    // 0x1390bc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1390bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_1390c0:
    // 0x1390c0: 0xc12e310  jal         func_4B8C40
label_1390c4:
    if (ctx->pc == 0x1390C4u) {
        ctx->pc = 0x1390C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1390C0u;
        // 0x1390c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1390C8u;
        goto label_1390c8;
    }
    ctx->pc = 0x1390C0u;
    SET_GPR_U32(ctx, 31, 0x1390C8u);
    ctx->pc = 0x1390C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1390C0u;
    // 0x1390c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x1390C0u, 0x1390C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1390C8u;
label_1390c8:
    // 0x1390c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1390c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1390cc:
    // 0x1390cc: 0xc12e29c  jal         func_4B8A70
label_1390d0:
    if (ctx->pc == 0x1390D0u) {
        ctx->pc = 0x1390D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1390CCu;
        // 0x1390d0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1390D4u;
        goto label_1390d4;
    }
    ctx->pc = 0x1390CCu;
    SET_GPR_U32(ctx, 31, 0x1390D4u);
    ctx->pc = 0x1390D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1390CCu;
    // 0x1390d0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x1390CCu, 0x1390D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1390D4u;
label_1390d4:
    // 0x1390d4: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x1390d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1390d8:
    // 0x1390d8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1390d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1390dc:
    // 0x1390dc: 0x4409a800  mfc1        $t1, $f21
    ctx->pc = 0x1390dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_1390e0:
    // 0x1390e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1390e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1390e4:
    // 0x1390e4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1390e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1390e8:
    // 0x1390e8: 0x48a91000  qmtc2.ni    $t1, $vf2
    ctx->pc = 0x1390e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_1390ec:
    // 0x1390ec: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1390ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1390f0:
    // 0x1390f0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1390f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_1390f4:
    // 0x1390f4: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1390f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1390f8:
    // 0x1390f8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1390f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_1390fc:
    // 0x1390fc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1390fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_139100:
    // 0x139100: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x139100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_139104:
    // 0x139104: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x139104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_139108:
    // 0x139108: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x139108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13910c:
    // 0x13910c: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x13910cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_139110:
    // 0x139110: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x139110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_139114:
    // 0x139114: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x139114u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_139118:
    // 0x139118: 0xc136b30  jal         func_4DACC0
label_13911c:
    if (ctx->pc == 0x13911Cu) {
        ctx->pc = 0x13911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139118u;
        // 0x13911c: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x139120u;
        goto label_139120;
    }
    ctx->pc = 0x139118u;
    SET_GPR_U32(ctx, 31, 0x139120u);
    ctx->pc = 0x13911Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139118u;
    // 0x13911c: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x139118u, 0x139120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139120u;
label_139120:
    // 0x139120: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x139120u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_139124:
    // 0x139124: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x139124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_139128:
    // 0x139128: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x139128u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13912c:
    // 0x13912c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13912cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_139130:
    // 0x139130: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x139130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_139134:
    // 0x139134: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x139134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_139138:
    // 0x139138: 0x7e620180  sq          $v0, 0x180($s3)
    ctx->pc = 0x139138u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 384), GPR_VEC(ctx, 2));
label_13913c:
    // 0x13913c: 0xc136afa  jal         func_4DABE8
label_139140:
    if (ctx->pc == 0x139140u) {
        ctx->pc = 0x139140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13913Cu;
        // 0x139140: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139144u;
        goto label_139144;
    }
    ctx->pc = 0x13913Cu;
    SET_GPR_U32(ctx, 31, 0x139144u);
    ctx->pc = 0x139140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13913Cu;
    // 0x139140: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13913Cu, 0x139144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139144u;
label_139144:
    // 0x139144: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x139144u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_139148:
    // 0x139148: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x139148u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13914c:
    // 0x13914c: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x13914cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_139150:
    // 0x139150: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x139150u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_139154:
    // 0x139154: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x139154u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_139158:
    // 0x139158: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x139158u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_13915c:
    // 0x13915c: 0x4a0003bf  vwaitq
    ctx->pc = 0x13915cu;
    // VWAITQ (Q already resolved in this runtime)
label_139160:
    // 0x139160: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x139160u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_139164:
    // 0x139164: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x139164u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_139168:
    // 0x139168: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x139168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13916c:
    // 0x13916c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x13916cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_139170:
    // 0x139170: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x139170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_139174:
    // 0x139174: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x139174u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_139178:
    // 0x139178: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x139178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13917c:
    // 0x13917c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13917cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_139180:
    // 0x139180: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x139180u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_139184:
    // 0x139184: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x139184u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_139188:
    // 0x139188: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x139188u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13918c:
    // 0x13918c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x13918cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_139190:
    // 0x139190: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x139190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_139194:
    // 0x139194: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x139194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_139198:
    // 0x139198: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x139198u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_13919c:
    // 0x13919c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13919cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1391a0:
    // 0x1391a0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1391a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1391a4:
    // 0x1391a4: 0x4484a800  mtc1        $a0, $f21
    ctx->pc = 0x1391a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1391a8:
    // 0x1391a8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1391a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1391ac:
    // 0x1391ac: 0xc66401a0  lwc1        $f4, 0x1A0($s3)
    ctx->pc = 0x1391acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1391b0:
    // 0x1391b0: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x1391b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
label_1391b4:
    // 0x1391b4: 0x3421cbe5  ori         $at, $at, 0xCBE5
    ctx->pc = 0x1391b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52197);
label_1391b8:
    // 0x1391b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1391b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1391bc:
    // 0x1391bc: 0x46152836  c.le.s      $f5, $f21
    ctx->pc = 0x1391bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1391c0:
    // 0x1391c0: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x1391c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_1391c4:
    // 0x1391c4: 0x46001501  sub.s       $f20, $f2, $f0
    ctx->pc = 0x1391c4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1391c8:
    // 0x1391c8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1391cc:
    if (ctx->pc == 0x1391CCu) {
        ctx->pc = 0x1391CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1391C8u;
        // 0x1391cc: 0x46012582  mul.s       $f22, $f4, $f1 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1391D0u;
        goto label_1391d0;
    }
    ctx->pc = 0x1391C8u;
    {
        const bool branch_taken_0x1391c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1391CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1391C8u;
        // 0x1391cc: 0x46012582  mul.s       $f22, $f4, $f1 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1391c8) {
            ctx->pc = 0x1391DCu;
            goto label_1391dc;
        }
    }
    ctx->pc = 0x1391D0u;
label_1391d0:
    // 0x1391d0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1391d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1391d4:
    // 0x1391d4: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1391d8:
    if (ctx->pc == 0x1391D8u) {
        ctx->pc = 0x1391DCu;
        goto label_1391dc;
    }
    ctx->pc = 0x1391D4u;
    {
        const bool branch_taken_0x1391d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1391d4) {
            ctx->pc = 0x139244u;
            goto label_139244;
        }
    }
    ctx->pc = 0x1391DCu;
label_1391dc:
    // 0x1391dc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1391dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_1391e0:
    // 0x1391e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1391e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1391e4:
    // 0x1391e4: 0x0  nop
    ctx->pc = 0x1391e4u;
    // NOP
label_1391e8:
    // 0x1391e8: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x1391e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1391ec:
    // 0x1391ec: 0x0  nop
    ctx->pc = 0x1391ecu;
    // NOP
label_1391f0:
    // 0x1391f0: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_1391f4:
    if (ctx->pc == 0x1391F4u) {
        ctx->pc = 0x1391F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1391F0u;
        // 0x1391f4: 0x4615ab02  mul.s       $f12, $f21, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1391F8u;
        goto label_1391f8;
    }
    ctx->pc = 0x1391F0u;
    {
        const bool branch_taken_0x1391f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1391f0) {
            ctx->pc = 0x1391F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1391F0u;
            // 0x1391f4: 0x4615ab02  mul.s       $f12, $f21, $f21 (Delay Slot)
            ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13920Cu;
            goto label_13920c;
        }
    }
    ctx->pc = 0x1391F8u;
label_1391f8:
    // 0x1391f8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1391f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_1391fc:
    // 0x1391fc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1391fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_139200:
    // 0x139200: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x139200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_139204:
    // 0x139204: 0x1000000f  b           . + 4 + (0xF << 2)
label_139208:
    if (ctx->pc == 0x139208u) {
        ctx->pc = 0x13920Cu;
        goto label_13920c;
    }
    ctx->pc = 0x139204u;
    {
        const bool branch_taken_0x139204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139204) {
            ctx->pc = 0x139244u;
            goto label_139244;
        }
    }
    ctx->pc = 0x13920Cu;
label_13920c:
    // 0x13920c: 0x460c2b01  sub.s       $f12, $f5, $f12
    ctx->pc = 0x13920cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[5], ctx->f[12]);
label_139210:
    // 0x139210: 0x0  nop
    ctx->pc = 0x139210u;
    // NOP
label_139214:
    // 0x139214: 0x0  nop
    ctx->pc = 0x139214u;
    // NOP
label_139218:
    // 0x139218: 0x460c0304  c1          0xC0304
    ctx->pc = 0x139218u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_13921c:
    // 0x13921c: 0x0  nop
    ctx->pc = 0x13921cu;
    // NOP
label_139220:
    // 0x139220: 0x0  nop
    ctx->pc = 0x139220u;
    // NOP
label_139224:
    // 0x139224: 0x460cab03  div.s       $f12, $f21, $f12
    ctx->pc = 0x139224u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[21], ctx->f[12]); }
label_139228:
    // 0x139228: 0xc0cd5a8  jal         func_3356A0
label_13922c:
    if (ctx->pc == 0x13922Cu) {
        ctx->pc = 0x139230u;
        goto label_139230;
    }
    ctx->pc = 0x139228u;
    SET_GPR_U32(ctx, 31, 0x139230u);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x139228u, 0x139230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139230u;
label_139230:
    // 0x139230: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x139230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_139234:
    // 0x139234: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x139234u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_139238:
    // 0x139238: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x139238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13923c:
    // 0x13923c: 0x0  nop
    ctx->pc = 0x13923cu;
    // NOP
label_139240:
    // 0x139240: 0x46000d41  sub.s       $f21, $f1, $f0
    ctx->pc = 0x139240u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_139244:
    // 0x139244: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x139244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_139248:
    // 0x139248: 0x0  nop
    ctx->pc = 0x139248u;
    // NOP
label_13924c:
    // 0x13924c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x13924cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_139250:
    // 0x139250: 0x0  nop
    ctx->pc = 0x139250u;
    // NOP
label_139254:
    // 0x139254: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_139258:
    if (ctx->pc == 0x139258u) {
        ctx->pc = 0x139258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139254u;
        // 0x139258: 0x4600ad47  neg.s       $f21, $f21 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13925Cu;
        goto label_13925c;
    }
    ctx->pc = 0x139254u;
    {
        const bool branch_taken_0x139254 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x139254) {
            ctx->pc = 0x139258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139254u;
            // 0x139258: 0x4600ad47  neg.s       $f21, $f21 (Delay Slot)
            ctx->f[21] = FPU_NEG_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13925Cu;
            goto label_13925c;
        }
    }
    ctx->pc = 0x13925Cu;
label_13925c:
    // 0x13925c: 0x266401e8  addiu       $a0, $s3, 0x1E8
    ctx->pc = 0x13925cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 488));
label_139260:
    // 0x139260: 0xc0e4060  jal         func_390180
label_139264:
    if (ctx->pc == 0x139264u) {
        ctx->pc = 0x139264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139260u;
        // 0x139264: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139268u;
        goto label_139268;
    }
    ctx->pc = 0x139260u;
    SET_GPR_U32(ctx, 31, 0x139268u);
    ctx->pc = 0x139264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139260u;
    // 0x139264: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x139260u, 0x139268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139268u;
label_139268:
    // 0x139268: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x139268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13926c:
    // 0x13926c: 0x122000af  beqz        $s1, . + 4 + (0xAF << 2)
label_139270:
    if (ctx->pc == 0x139270u) {
        ctx->pc = 0x139274u;
        goto label_139274;
    }
    ctx->pc = 0x13926Cu;
    {
        const bool branch_taken_0x13926c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x13926c) {
            ctx->pc = 0x13952Cu;
            goto label_13952c;
        }
    }
    ctx->pc = 0x139274u;
label_139274:
    // 0x139274: 0x123400ad  beq         $s1, $s4, . + 4 + (0xAD << 2)
label_139278:
    if (ctx->pc == 0x139278u) {
        ctx->pc = 0x13927Cu;
        goto label_13927c;
    }
    ctx->pc = 0x139274u;
    {
        const bool branch_taken_0x139274 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        if (branch_taken_0x139274) {
            ctx->pc = 0x13952Cu;
            goto label_13952c;
        }
    }
    ctx->pc = 0x13927Cu;
label_13927c:
    // 0x13927c: 0xc08a61a  jal         func_229868
label_139280:
    if (ctx->pc == 0x139280u) {
        ctx->pc = 0x139280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13927Cu;
        // 0x139280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139284u;
        goto label_139284;
    }
    ctx->pc = 0x13927Cu;
    SET_GPR_U32(ctx, 31, 0x139284u);
    ctx->pc = 0x139280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13927Cu;
    // 0x139280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x13927Cu, 0x139284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139284u;
label_139284:
    // 0x139284: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_139288:
    if (ctx->pc == 0x139288u) {
        ctx->pc = 0x139288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139284u;
        // 0x139288: 0x3c070071  lui         $a3, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13928Cu;
        goto label_13928c;
    }
    ctx->pc = 0x139284u;
    {
        const bool branch_taken_0x139284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139284u;
        // 0x139288: 0x3c070071  lui         $a3, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139284) {
            ctx->pc = 0x1392A8u;
            goto label_1392a8;
        }
    }
    ctx->pc = 0x13928Cu;
label_13928c:
    // 0x13928c: 0x84460092  lh          $a2, 0x92($v0)
    ctx->pc = 0x13928cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_139290:
    // 0x139290: 0x24e24b00  addiu       $v0, $a3, 0x4B00
    ctx->pc = 0x139290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 19200));
label_139294:
    // 0x139294: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x139294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_139298:
    // 0x139298: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x139298u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_13929c:
    // 0x13929c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x13929cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1392a0:
    // 0x1392a0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1392a4:
    if (ctx->pc == 0x1392A4u) {
        ctx->pc = 0x1392A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1392A0u;
        // 0x1392a4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1392A8u;
        goto label_1392a8;
    }
    ctx->pc = 0x1392A0u;
    {
        const bool branch_taken_0x1392a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1392A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1392A0u;
        // 0x1392a4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1392a0) {
            ctx->pc = 0x1392D0u;
            goto label_1392d0;
        }
    }
    ctx->pc = 0x1392A8u;
label_1392a8:
    // 0x1392a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1392a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1392ac:
    // 0x1392ac: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x1392acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1392b0:
    // 0x1392b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1392b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1392b4:
    // 0x1392b4: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x1392b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_1392b8:
    // 0x1392b8: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x1392b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_1392bc:
    // 0x1392bc: 0x40f809  jalr        $v0
label_1392c0:
    if (ctx->pc == 0x1392C0u) {
        ctx->pc = 0x1392C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1392BCu;
        // 0x1392c0: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1392C4u;
        goto label_1392c4;
    }
    ctx->pc = 0x1392BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1392C4u);
        ctx->pc = 0x1392C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1392BCu;
        // 0x1392c0: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1392BCu, 0x1392C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1392C4u;
label_1392c4:
    // 0x1392c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1392c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1392c8:
    // 0x1392c8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1392c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1392cc:
    // 0x1392cc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1392ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1392d0:
    // 0x1392d0: 0xc136afa  jal         func_4DABE8
label_1392d4:
    if (ctx->pc == 0x1392D4u) {
        ctx->pc = 0x1392D8u;
        goto label_1392d8;
    }
    ctx->pc = 0x1392D0u;
    SET_GPR_U32(ctx, 31, 0x1392D8u);
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x1392D0u, 0x1392D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1392D8u;
label_1392d8:
    // 0x1392d8: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x1392d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1392dc:
    // 0x1392dc: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1392dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_1392e0:
    // 0x1392e0: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x1392e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_1392e4:
    // 0x1392e4: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x1392e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1392e8:
    // 0x1392e8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1392e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1392ec:
    // 0x1392ec: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x1392ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1392f0:
    // 0x1392f0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1392f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1392f4:
    // 0x1392f4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1392f4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_1392f8:
    // 0x1392f8: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x1392f8u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1392fc:
    // 0x1392fc: 0x4a0003bf  vwaitq
    ctx->pc = 0x1392fcu;
    // VWAITQ (Q already resolved in this runtime)
label_139300:
    // 0x139300: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x139300u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_139304:
    // 0x139304: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x139304u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_139308:
    // 0x139308: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x139308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13930c:
    // 0x13930c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x13930cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_139310:
    // 0x139310: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x139310u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_139314:
    // 0x139314: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x139314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_139318:
    // 0x139318: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x139318u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13931c:
    // 0x13931c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x13931cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_139320:
    // 0x139320: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x139320u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_139324:
    // 0x139324: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x139324u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_139328:
    // 0x139328: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x139328u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13932c:
    // 0x13932c: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x13932cu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
label_139330:
    // 0x139330: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x139330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_139334:
    // 0x139334: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x139334u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_139338:
    // 0x139338: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x139338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_13933c:
    // 0x13933c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13933cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_139340:
    // 0x139340: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x139340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_139344:
    // 0x139344: 0x44882000  mtc1        $t0, $f4
    ctx->pc = 0x139344u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_139348:
    // 0x139348: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x139348u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_13934c:
    // 0x13934c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x13934cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_139350:
    // 0x139350: 0x46041036  c.le.s      $f2, $f4
    ctx->pc = 0x139350u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_139354:
    // 0x139354: 0x0  nop
    ctx->pc = 0x139354u;
    // NOP
label_139358:
    // 0x139358: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_13935c:
    if (ctx->pc == 0x13935Cu) {
        ctx->pc = 0x13935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139358u;
        // 0x13935c: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x139360u;
        goto label_139360;
    }
    ctx->pc = 0x139358u;
    {
        const bool branch_taken_0x139358 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139358u;
        // 0x13935c: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x139358) {
            ctx->pc = 0x13936Cu;
            goto label_13936c;
        }
    }
    ctx->pc = 0x139360u;
label_139360:
    // 0x139360: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x139360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_139364:
    // 0x139364: 0x1000001b  b           . + 4 + (0x1B << 2)
label_139368:
    if (ctx->pc == 0x139368u) {
        ctx->pc = 0x13936Cu;
        goto label_13936c;
    }
    ctx->pc = 0x139364u;
    {
        const bool branch_taken_0x139364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139364) {
            ctx->pc = 0x1393D4u;
            goto label_1393d4;
        }
    }
    ctx->pc = 0x13936Cu;
label_13936c:
    // 0x13936c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x13936cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_139370:
    // 0x139370: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x139370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_139374:
    // 0x139374: 0x0  nop
    ctx->pc = 0x139374u;
    // NOP
label_139378:
    // 0x139378: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x139378u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13937c:
    // 0x13937c: 0x0  nop
    ctx->pc = 0x13937cu;
    // NOP
label_139380:
    // 0x139380: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_139384:
    if (ctx->pc == 0x139384u) {
        ctx->pc = 0x139384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139380u;
        // 0x139384: 0x46042302  mul.s       $f12, $f4, $f4 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x139388u;
        goto label_139388;
    }
    ctx->pc = 0x139380u;
    {
        const bool branch_taken_0x139380 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x139380) {
            ctx->pc = 0x139384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139380u;
            // 0x139384: 0x46042302  mul.s       $f12, $f4, $f4 (Delay Slot)
            ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13939Cu;
            goto label_13939c;
        }
    }
    ctx->pc = 0x139388u;
label_139388:
    // 0x139388: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x139388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_13938c:
    // 0x13938c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x13938cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_139390:
    // 0x139390: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x139390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_139394:
    // 0x139394: 0x1000000f  b           . + 4 + (0xF << 2)
label_139398:
    if (ctx->pc == 0x139398u) {
        ctx->pc = 0x13939Cu;
        goto label_13939c;
    }
    ctx->pc = 0x139394u;
    {
        const bool branch_taken_0x139394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139394) {
            ctx->pc = 0x1393D4u;
            goto label_1393d4;
        }
    }
    ctx->pc = 0x13939Cu;
label_13939c:
    // 0x13939c: 0x460c1301  sub.s       $f12, $f2, $f12
    ctx->pc = 0x13939cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
label_1393a0:
    // 0x1393a0: 0x0  nop
    ctx->pc = 0x1393a0u;
    // NOP
label_1393a4:
    // 0x1393a4: 0x0  nop
    ctx->pc = 0x1393a4u;
    // NOP
label_1393a8:
    // 0x1393a8: 0x460c0304  c1          0xC0304
    ctx->pc = 0x1393a8u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_1393ac:
    // 0x1393ac: 0x0  nop
    ctx->pc = 0x1393acu;
    // NOP
label_1393b0:
    // 0x1393b0: 0x0  nop
    ctx->pc = 0x1393b0u;
    // NOP
label_1393b4:
    // 0x1393b4: 0x460c2303  div.s       $f12, $f4, $f12
    ctx->pc = 0x1393b4u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[4], ctx->f[12]); }
label_1393b8:
    // 0x1393b8: 0xc0cd5a8  jal         func_3356A0
label_1393bc:
    if (ctx->pc == 0x1393BCu) {
        ctx->pc = 0x1393C0u;
        goto label_1393c0;
    }
    ctx->pc = 0x1393B8u;
    SET_GPR_U32(ctx, 31, 0x1393C0u);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x1393B8u, 0x1393C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1393C0u;
label_1393c0:
    // 0x1393c0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1393c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_1393c4:
    // 0x1393c4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1393c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1393c8:
    // 0x1393c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1393c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1393cc:
    // 0x1393cc: 0x0  nop
    ctx->pc = 0x1393ccu;
    // NOP
label_1393d0:
    // 0x1393d0: 0x46000901  sub.s       $f4, $f1, $f0
    ctx->pc = 0x1393d0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1393d4:
    // 0x1393d4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1393d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1393d8:
    // 0x1393d8: 0x0  nop
    ctx->pc = 0x1393d8u;
    // NOP
label_1393dc:
    // 0x1393dc: 0x4603a034  c.lt.s      $f20, $f3
    ctx->pc = 0x1393dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1393e0:
    // 0x1393e0: 0x0  nop
    ctx->pc = 0x1393e0u;
    // NOP
label_1393e4:
    // 0x1393e4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1393e8:
    if (ctx->pc == 0x1393E8u) {
        ctx->pc = 0x1393E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1393E4u;
        // 0x1393e8: 0x46002107  neg.s       $f4, $f4 (Delay Slot)
        ctx->f[4] = FPU_NEG_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1393ECu;
        goto label_1393ec;
    }
    ctx->pc = 0x1393E4u;
    {
        const bool branch_taken_0x1393e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1393e4) {
            ctx->pc = 0x1393E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1393E4u;
            // 0x1393e8: 0x46002107  neg.s       $f4, $f4 (Delay Slot)
            ctx->f[4] = FPU_NEG_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1393ECu;
            goto label_1393ec;
        }
    }
    ctx->pc = 0x1393ECu;
label_1393ec:
    // 0x1393ec: 0x46152081  sub.s       $f2, $f4, $f21
    ctx->pc = 0x1393ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[21]);
label_1393f0:
    // 0x1393f0: 0x3c013e8a  lui         $at, 0x3E8A
    ctx->pc = 0x1393f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16010 << 16));
label_1393f4:
    // 0x1393f4: 0x34218264  ori         $at, $at, 0x8264
    ctx->pc = 0x1393f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33380);
label_1393f8:
    // 0x1393f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1393f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1393fc:
    // 0x1393fc: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x1393fcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
label_139400:
    // 0x139400: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x139400u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_139404:
    // 0x139404: 0x0  nop
    ctx->pc = 0x139404u;
    // NOP
label_139408:
    // 0x139408: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_13940c:
    if (ctx->pc == 0x13940Cu) {
        ctx->pc = 0x13940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139408u;
        // 0x13940c: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139410u;
        goto label_139410;
    }
    ctx->pc = 0x139408u;
    {
        const bool branch_taken_0x139408 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139408u;
        // 0x13940c: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139408) {
            ctx->pc = 0x139474u;
            goto label_139474;
        }
    }
    ctx->pc = 0x139410u;
label_139410:
    // 0x139410: 0x4600b007  neg.s       $f0, $f22
    ctx->pc = 0x139410u;
    ctx->f[0] = FPU_NEG_S(ctx->f[22]);
label_139414:
    // 0x139414: 0x4602b0a9  min.s       $f2, $f22, $f2
    ctx->pc = 0x139414u;
    ctx->f[2] = std::min(ctx->f[22], ctx->f[2]);
label_139418:
    // 0x139418: 0x460200a8  max.s       $f2, $f0, $f2
    ctx->pc = 0x139418u;
    ctx->f[2] = std::max(ctx->f[0], ctx->f[2]);
label_13941c:
    // 0x13941c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13941cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_139420:
    // 0x139420: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x139420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_139424:
    // 0x139424: 0x46151080  add.s       $f2, $f2, $f21
    ctx->pc = 0x139424u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[21]);
label_139428:
    // 0x139428: 0x26421740  addiu       $v0, $s2, 0x1740
    ctx->pc = 0x139428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 5952));
label_13942c:
    // 0x13942c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13942cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_139430:
    // 0x139430: 0x46141502  mul.s       $f20, $f2, $f20
    ctx->pc = 0x139430u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_139434:
    // 0x139434: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x139434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_139438:
    // 0x139438: 0xc12e310  jal         func_4B8C40
label_13943c:
    if (ctx->pc == 0x13943Cu) {
        ctx->pc = 0x13943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139438u;
        // 0x13943c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x139440u;
        goto label_139440;
    }
    ctx->pc = 0x139438u;
    SET_GPR_U32(ctx, 31, 0x139440u);
    ctx->pc = 0x13943Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139438u;
    // 0x13943c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x139438u, 0x139440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139440u;
label_139440:
    // 0x139440: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x139440u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_139444:
    // 0x139444: 0xc12e29c  jal         func_4B8A70
label_139448:
    if (ctx->pc == 0x139448u) {
        ctx->pc = 0x139448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139444u;
        // 0x139448: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13944Cu;
        goto label_13944c;
    }
    ctx->pc = 0x139444u;
    SET_GPR_U32(ctx, 31, 0x13944Cu);
    ctx->pc = 0x139448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139444u;
    // 0x139448: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x139444u, 0x13944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13944Cu;
label_13944c:
    // 0x13944c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x13944cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_139450:
    // 0x139450: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x139450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_139454:
    // 0x139454: 0x4409a800  mfc1        $t1, $f21
    ctx->pc = 0x139454u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_139458:
    // 0x139458: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x139458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13945c:
    // 0x13945c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13945cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_139460:
    // 0x139460: 0x48a91000  qmtc2.ni    $t1, $vf2
    ctx->pc = 0x139460u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_139464:
    // 0x139464: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x139464u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_139468:
    // 0x139468: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x139468u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_13946c:
    // 0x13946c: 0x10000021  b           . + 4 + (0x21 << 2)
label_139470:
    if (ctx->pc == 0x139470u) {
        ctx->pc = 0x139470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13946Cu;
        // 0x139470: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x139474u;
        goto label_139474;
    }
    ctx->pc = 0x13946Cu;
    {
        const bool branch_taken_0x13946c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13946Cu;
        // 0x139470: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13946c) {
            ctx->pc = 0x1394F4u;
            goto label_1394f4;
        }
    }
    ctx->pc = 0x139474u;
label_139474:
    // 0x139474: 0x46002086  mov.s       $f2, $f4
    ctx->pc = 0x139474u;
    ctx->f[2] = FPU_MOV_S(ctx->f[4]);
label_139478:
    // 0x139478: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x139478u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13947c:
    // 0x13947c: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x13947cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_139480:
    // 0x139480: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x139480u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_139484:
    // 0x139484: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x139484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_139488:
    // 0x139488: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_13948c:
    if (ctx->pc == 0x13948Cu) {
        ctx->pc = 0x13948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139488u;
        // 0x13948c: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x139490u;
        goto label_139490;
    }
    ctx->pc = 0x139488u;
    {
        const bool branch_taken_0x139488 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x139488) {
            ctx->pc = 0x13948Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139488u;
            // 0x13948c: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
            ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1394A4u;
            goto label_1394a4;
        }
    }
    ctx->pc = 0x139490u;
label_139490:
    // 0x139490: 0x3c01be86  lui         $at, 0xBE86
    ctx->pc = 0x139490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48774 << 16));
label_139494:
    // 0x139494: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x139494u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_139498:
    // 0x139498: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x139498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13949c:
    // 0x13949c: 0x0  nop
    ctx->pc = 0x13949cu;
    // NOP
label_1394a0:
    // 0x1394a0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1394a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1394a4:
    // 0x1394a4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1394a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1394a8:
    // 0x1394a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1394a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1394ac:
    // 0x1394ac: 0x26421740  addiu       $v0, $s2, 0x1740
    ctx->pc = 0x1394acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 5952));
label_1394b0:
    // 0x1394b0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1394b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1394b4:
    // 0x1394b4: 0x46141502  mul.s       $f20, $f2, $f20
    ctx->pc = 0x1394b4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_1394b8:
    // 0x1394b8: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x1394b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_1394bc:
    // 0x1394bc: 0xc12e310  jal         func_4B8C40
label_1394c0:
    if (ctx->pc == 0x1394C0u) {
        ctx->pc = 0x1394C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1394BCu;
        // 0x1394c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1394C4u;
        goto label_1394c4;
    }
    ctx->pc = 0x1394BCu;
    SET_GPR_U32(ctx, 31, 0x1394C4u);
    ctx->pc = 0x1394C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1394BCu;
    // 0x1394c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x1394BCu, 0x1394C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1394C4u;
label_1394c4:
    // 0x1394c4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1394c4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_1394c8:
    // 0x1394c8: 0xc12e29c  jal         func_4B8A70
label_1394cc:
    if (ctx->pc == 0x1394CCu) {
        ctx->pc = 0x1394CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1394C8u;
        // 0x1394cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1394D0u;
        goto label_1394d0;
    }
    ctx->pc = 0x1394C8u;
    SET_GPR_U32(ctx, 31, 0x1394D0u);
    ctx->pc = 0x1394CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1394C8u;
    // 0x1394cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x1394C8u, 0x1394D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1394D0u;
label_1394d0:
    // 0x1394d0: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x1394d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1394d4:
    // 0x1394d4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1394d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1394d8:
    // 0x1394d8: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x1394d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1394dc:
    // 0x1394dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1394dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1394e0:
    // 0x1394e0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1394e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1394e4:
    // 0x1394e4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1394e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1394e8:
    // 0x1394e8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1394e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1394ec:
    // 0x1394ec: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1394ecu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_1394f0:
    // 0x1394f0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1394f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1394f4:
    // 0x1394f4: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x1394f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_1394f8:
    // 0x1394f8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1394f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1394fc:
    // 0x1394fc: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1394fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_139500:
    // 0x139500: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x139500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_139504:
    // 0x139504: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x139504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_139508:
    // 0x139508: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x139508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13950c:
    // 0x13950c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x13950cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_139510:
    // 0x139510: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x139510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_139514:
    // 0x139514: 0xc136b30  jal         func_4DACC0
label_139518:
    if (ctx->pc == 0x139518u) {
        ctx->pc = 0x139518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139514u;
        // 0x139518: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13951Cu;
        goto label_13951c;
    }
    ctx->pc = 0x139514u;
    SET_GPR_U32(ctx, 31, 0x13951Cu);
    ctx->pc = 0x139518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139514u;
    // 0x139518: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x139514u, 0x13951Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13951Cu;
label_13951c:
    // 0x13951c: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x13951cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_139520:
    // 0x139520: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x139520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_139524:
    // 0x139524: 0x1000002f  b           . + 4 + (0x2F << 2)
label_139528:
    if (ctx->pc == 0x139528u) {
        ctx->pc = 0x139528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139524u;
        // 0x139528: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13952Cu;
        goto label_13952c;
    }
    ctx->pc = 0x139524u;
    {
        const bool branch_taken_0x139524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139524u;
        // 0x139528: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139524) {
            ctx->pc = 0x1395E4u;
            goto label_1395e4;
        }
    }
    ctx->pc = 0x13952Cu;
label_13952c:
    // 0x13952c: 0x3c013c0e  lui         $at, 0x3C0E
    ctx->pc = 0x13952cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15374 << 16));
label_139530:
    // 0x139530: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x139530u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_139534:
    // 0x139534: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x139534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_139538:
    // 0x139538: 0x4600a805  abs.s       $f0, $f21
    ctx->pc = 0x139538u;
    ctx->f[0] = FPU_ABS_S(ctx->f[21]);
label_13953c:
    // 0x13953c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13953cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_139540:
    // 0x139540: 0x0  nop
    ctx->pc = 0x139540u;
    // NOP
label_139544:
    // 0x139544: 0x45020028  bc1fl       . + 4 + (0x28 << 2)
label_139548:
    if (ctx->pc == 0x139548u) {
        ctx->pc = 0x139548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139544u;
        // 0x139548: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13954Cu;
        goto label_13954c;
    }
    ctx->pc = 0x139544u;
    {
        const bool branch_taken_0x139544 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x139544) {
            ctx->pc = 0x139548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139544u;
            // 0x139548: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1395E8u;
            goto label_1395e8;
        }
    }
    ctx->pc = 0x13954Cu;
label_13954c:
    // 0x13954c: 0x4600a887  neg.s       $f2, $f21
    ctx->pc = 0x13954cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[21]);
label_139550:
    // 0x139550: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x139550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_139554:
    // 0x139554: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x139554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_139558:
    // 0x139558: 0x4600b007  neg.s       $f0, $f22
    ctx->pc = 0x139558u;
    ctx->f[0] = FPU_NEG_S(ctx->f[22]);
label_13955c:
    // 0x13955c: 0x4602b0a9  min.s       $f2, $f22, $f2
    ctx->pc = 0x13955cu;
    ctx->f[2] = std::min(ctx->f[22], ctx->f[2]);
label_139560:
    // 0x139560: 0x460200a8  max.s       $f2, $f0, $f2
    ctx->pc = 0x139560u;
    ctx->f[2] = std::max(ctx->f[0], ctx->f[2]);
label_139564:
    // 0x139564: 0x26431740  addiu       $v1, $s2, 0x1740
    ctx->pc = 0x139564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 5952));
label_139568:
    // 0x139568: 0x46151080  add.s       $f2, $f2, $f21
    ctx->pc = 0x139568u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[21]);
label_13956c:
    // 0x13956c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x13956cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_139570:
    // 0x139570: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x139570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_139574:
    // 0x139574: 0x46141502  mul.s       $f20, $f2, $f20
    ctx->pc = 0x139574u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_139578:
    // 0x139578: 0xc12e310  jal         func_4B8C40
label_13957c:
    if (ctx->pc == 0x13957Cu) {
        ctx->pc = 0x13957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139578u;
        // 0x13957c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x139580u;
        goto label_139580;
    }
    ctx->pc = 0x139578u;
    SET_GPR_U32(ctx, 31, 0x139580u);
    ctx->pc = 0x13957Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139578u;
    // 0x13957c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x139578u, 0x139580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139580u;
label_139580:
    // 0x139580: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x139580u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_139584:
    // 0x139584: 0xc12e29c  jal         func_4B8A70
label_139588:
    if (ctx->pc == 0x139588u) {
        ctx->pc = 0x139588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139584u;
        // 0x139588: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13958Cu;
        goto label_13958c;
    }
    ctx->pc = 0x139584u;
    SET_GPR_U32(ctx, 31, 0x13958Cu);
    ctx->pc = 0x139588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139584u;
    // 0x139588: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x139584u, 0x13958Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13958Cu;
label_13958c:
    // 0x13958c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x13958cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_139590:
    // 0x139590: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x139590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_139594:
    // 0x139594: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x139594u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_139598:
    // 0x139598: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x139598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_13959c:
    // 0x13959c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13959cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1395a0:
    // 0x1395a0: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1395a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_1395a4:
    // 0x1395a4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1395a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1395a8:
    // 0x1395a8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1395a8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_1395ac:
    // 0x1395ac: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1395acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1395b0:
    // 0x1395b0: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1395b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_1395b4:
    // 0x1395b4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1395b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1395b8:
    // 0x1395b8: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x1395b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_1395bc:
    // 0x1395bc: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x1395bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1395c0:
    // 0x1395c0: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1395c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1395c4:
    // 0x1395c4: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x1395c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1395c8:
    // 0x1395c8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1395c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1395cc:
    // 0x1395cc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1395ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1395d0:
    // 0x1395d0: 0xc136b30  jal         func_4DACC0
label_1395d4:
    if (ctx->pc == 0x1395D4u) {
        ctx->pc = 0x1395D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1395D0u;
        // 0x1395d4: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1395D8u;
        goto label_1395d8;
    }
    ctx->pc = 0x1395D0u;
    SET_GPR_U32(ctx, 31, 0x1395D8u);
    ctx->pc = 0x1395D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1395D0u;
    // 0x1395d4: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x1395D0u, 0x1395D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1395D8u;
label_1395d8:
    // 0x1395d8: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x1395d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1395dc:
    // 0x1395dc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1395dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1395e0:
    // 0x1395e0: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1395e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_1395e4:
    // 0x1395e4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1395e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1395e8:
    // 0x1395e8: 0xc66101a4  lwc1        $f1, 0x1A4($s3)
    ctx->pc = 0x1395e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1395ec:
    // 0x1395ec: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1395ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1395f0:
    // 0x1395f0: 0xc66001a0  lwc1        $f0, 0x1A0($s3)
    ctx->pc = 0x1395f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1395f4:
    // 0x1395f4: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1395f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1395f8:
    // 0x1395f8: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x1395f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_1395fc:
    // 0x1395fc: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1395fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_139600:
    // 0x139600: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x139600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_139604:
    // 0x139604: 0x40f809  jalr        $v0
label_139608:
    if (ctx->pc == 0x139608u) {
        ctx->pc = 0x139608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139604u;
        // 0x139608: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13960Cu;
        goto label_13960c;
    }
    ctx->pc = 0x139604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13960Cu);
        ctx->pc = 0x139608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139604u;
        // 0x139608: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139604u, 0x13960Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13960Cu;
label_13960c:
    // 0x13960c: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x13960cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_139610:
    // 0x139610: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x139610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_139614:
    // 0x139614: 0xc136b24  jal         func_4DAC90
label_139618:
    if (ctx->pc == 0x139618u) {
        ctx->pc = 0x139618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139614u;
        // 0x139618: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13961Cu;
        goto label_13961c;
    }
    ctx->pc = 0x139614u;
    SET_GPR_U32(ctx, 31, 0x13961Cu);
    ctx->pc = 0x139618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139614u;
    // 0x139618: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x139614u, 0x13961Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13961Cu;
label_13961c:
    // 0x13961c: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x13961cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_139620:
    // 0x139620: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x139620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_139624:
    // 0x139624: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x139624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_139628:
    // 0x139628: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x139628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_13962c:
    // 0x13962c: 0xc136b18  jal         func_4DAC60
label_139630:
    if (ctx->pc == 0x139630u) {
        ctx->pc = 0x139630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13962Cu;
        // 0x139630: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139634u;
        goto label_139634;
    }
    ctx->pc = 0x13962Cu;
    SET_GPR_U32(ctx, 31, 0x139634u);
    ctx->pc = 0x139630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13962Cu;
    // 0x139630: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13962Cu, 0x139634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139634u;
label_139634:
    // 0x139634: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x139634u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_139638:
    // 0x139638: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x139638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_13963c:
    // 0x13963c: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x13963cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_139640:
    // 0x139640: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x139640u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_139644:
    // 0x139644: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x139644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_139648:
    // 0x139648: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x139648u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_13964c:
    // 0x13964c: 0x7e6301f0  sq          $v1, 0x1F0($s3)
    ctx->pc = 0x13964cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 496), GPR_VEC(ctx, 3));
label_139650:
    // 0x139650: 0x24a58fd0  addiu       $a1, $a1, -0x7030
    ctx->pc = 0x139650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938576));
label_139654:
    // 0x139654: 0x25088fe8  addiu       $t0, $t0, -0x7018
    ctx->pc = 0x139654u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294938600));
label_139658:
    // 0x139658: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x139658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_13965c:
    // 0x13965c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x13965cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_139660:
    // 0x139660: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x139660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_139664:
    // 0x139664: 0x24090296  addiu       $t1, $zero, 0x296
    ctx->pc = 0x139664u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 662));
label_139668:
    // 0x139668: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x139668u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13966c:
    // 0x13966c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x13966cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_139670:
    // 0x139670: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x139670u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_139674:
    // 0x139674: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x139674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_139678:
    // 0x139678: 0x40f809  jalr        $v0
label_13967c:
    if (ctx->pc == 0x13967Cu) {
        ctx->pc = 0x13967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139678u;
        // 0x13967c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139680u;
        goto label_139680;
    }
    ctx->pc = 0x139678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x139680u);
        ctx->pc = 0x13967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139678u;
        // 0x13967c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139678u, 0x139680u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x139680u;
label_139680:
    // 0x139680: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x139680u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_139684:
    // 0x139684: 0x52400005  beql        $s2, $zero, . + 4 + (0x5 << 2)
label_139688:
    if (ctx->pc == 0x139688u) {
        ctx->pc = 0x139688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139684u;
        // 0x139688: 0xafa00060  sw          $zero, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13968Cu;
        goto label_13968c;
    }
    ctx->pc = 0x139684u;
    {
        const bool branch_taken_0x139684 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x139684) {
            ctx->pc = 0x139688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139684u;
            // 0x139688: 0xafa00060  sw          $zero, 0x60($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13969Cu;
            goto label_13969c;
        }
    }
    ctx->pc = 0x13968Cu;
label_13968c:
    // 0x13968c: 0xc0d0aa8  jal         func_342AA0
label_139690:
    if (ctx->pc == 0x139690u) {
        ctx->pc = 0x139690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13968Cu;
        // 0x139690: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139694u;
        goto label_139694;
    }
    ctx->pc = 0x13968Cu;
    SET_GPR_U32(ctx, 31, 0x139694u);
    ctx->pc = 0x139690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13968Cu;
    // 0x139690: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342AA0u, 0x13968Cu, 0x139694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139694u;
label_139694:
    // 0x139694: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x139694u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_139698:
    // 0x139698: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x139698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_13969c:
    // 0x13969c: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x13969cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
label_1396a0:
    // 0x1396a0: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x1396a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_1396a4:
    // 0x1396a4: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x1396a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1396a8:
    // 0x1396a8: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1396a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_1396ac:
    // 0x1396ac: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x1396acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_1396b0:
    // 0x1396b0: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x1396b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_1396b4:
    // 0x1396b4: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1396b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_1396b8:
    // 0x1396b8: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x1396b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_1396bc:
    // 0x1396bc: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x1396bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_1396c0:
    // 0x1396c0: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x1396c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_1396c4:
    // 0x1396c4: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x1396c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_1396c8:
    // 0x1396c8: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x1396c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_1396cc:
    // 0x1396cc: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x1396ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_1396d0:
    // 0x1396d0: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x1396d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_1396d4:
    // 0x1396d4: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x1396d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_1396d8:
    // 0x1396d8: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x1396d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
label_1396dc:
    // 0x1396dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1396dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1396e0:
    // 0x1396e0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1396e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1396e4:
    // 0x1396e4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1396e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1396e8:
    // 0x1396e8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1396e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1396ec:
    // 0x1396ec: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1396ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1396f0:
    // 0x1396f0: 0x60f809  jalr        $v1
label_1396f4:
    if (ctx->pc == 0x1396F4u) {
        ctx->pc = 0x1396F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1396F0u;
        // 0x1396f4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1396F8u;
        goto label_1396f8;
    }
    ctx->pc = 0x1396F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1396F8u);
        ctx->pc = 0x1396F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1396F0u;
        // 0x1396f4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1396F0u, 0x1396F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1396F8u;
label_1396f8:
    // 0x1396f8: 0x27b00170  addiu       $s0, $sp, 0x170
    ctx->pc = 0x1396f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1396fc:
    // 0x1396fc: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x1396fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
label_139700:
    // 0x139700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x139700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_139704:
    // 0x139704: 0xc0d065c  jal         func_341970
label_139708:
    if (ctx->pc == 0x139708u) {
        ctx->pc = 0x139708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139704u;
        // 0x139708: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13970Cu;
        goto label_13970c;
    }
    ctx->pc = 0x139704u;
    SET_GPR_U32(ctx, 31, 0x13970Cu);
    ctx->pc = 0x139708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139704u;
    // 0x139708: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341970u, 0x139704u, 0x13970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13970Cu;
label_13970c:
    // 0x13970c: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x13970cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_139710:
    // 0x139710: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x139710u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_139714:
    // 0x139714: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x139714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_139718:
    // 0x139718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x139718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13971c:
    // 0x13971c: 0xc0d06aa  jal         func_341AA8
label_139720:
    if (ctx->pc == 0x139720u) {
        ctx->pc = 0x139720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13971Cu;
        // 0x139720: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139724u;
        goto label_139724;
    }
    ctx->pc = 0x13971Cu;
    SET_GPR_U32(ctx, 31, 0x139724u);
    ctx->pc = 0x139720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13971Cu;
    // 0x139720: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341AA8u, 0x13971Cu, 0x139724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139724u;
label_139724:
    // 0x139724: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x139724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_139728:
    // 0x139728: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x139728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_13972c:
    // 0x13972c: 0x8e247198  lw          $a0, 0x7198($s1)
    ctx->pc = 0x13972cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29080)));
label_139730:
    // 0x139730: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x139730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_139734:
    // 0x139734: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x139734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_139738:
    // 0x139738: 0xc0d019a  jal         func_340668
label_13973c:
    if (ctx->pc == 0x13973Cu) {
        ctx->pc = 0x13973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139738u;
        // 0x13973c: 0xafa201b0  sw          $v0, 0x1B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139740u;
        goto label_139740;
    }
    ctx->pc = 0x139738u;
    SET_GPR_U32(ctx, 31, 0x139740u);
    ctx->pc = 0x13973Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139738u;
    // 0x13973c: 0xafa201b0  sw          $v0, 0x1B0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340668u, 0x139738u, 0x139740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139740u;
label_139740:
    // 0x139740: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x139740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_139744:
    // 0x139744: 0xc0d0704  jal         func_341C10
label_139748:
    if (ctx->pc == 0x139748u) {
        ctx->pc = 0x139748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139744u;
        // 0x139748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13974Cu;
        goto label_13974c;
    }
    ctx->pc = 0x139744u;
    SET_GPR_U32(ctx, 31, 0x13974Cu);
    ctx->pc = 0x139748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139744u;
    // 0x139748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x139744u, 0x13974Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13974Cu;
label_13974c:
    // 0x13974c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x13974cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_139750:
    // 0x139750: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x139750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_139754:
    // 0x139754: 0x34422812  ori         $v0, $v0, 0x2812
    ctx->pc = 0x139754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10258);
label_139758:
    // 0x139758: 0x7ba80030  lq          $t0, 0x30($sp)
    ctx->pc = 0x139758u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13975c:
    // 0x13975c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x13975cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_139760:
    // 0x139760: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x139760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_139764:
    // 0x139764: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x139764u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
label_139768:
    // 0x139768: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x139768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_13976c:
    // 0x13976c: 0xafa50074  sw          $a1, 0x74($sp)
    ctx->pc = 0x13976cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 5));
label_139770:
    // 0x139770: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x139770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_139774:
    // 0x139774: 0xafa60084  sw          $a2, 0x84($sp)
    ctx->pc = 0x139774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 6));
label_139778:
    // 0x139778: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x139778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13977c:
    // 0x13977c: 0xafa70078  sw          $a3, 0x78($sp)
    ctx->pc = 0x13977cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 7));
label_139780:
    // 0x139780: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x139780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_139784:
    // 0x139784: 0xafa3007c  sw          $v1, 0x7C($sp)
    ctx->pc = 0x139784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 3));
label_139788:
    // 0x139788: 0xafb00060  sw          $s0, 0x60($sp)
    ctx->pc = 0x139788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 16));
label_13978c:
    // 0x13978c: 0xafb20064  sw          $s2, 0x64($sp)
    ctx->pc = 0x13978cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 18));
label_139790:
    // 0x139790: 0xafb3006c  sw          $s3, 0x6C($sp)
    ctx->pc = 0x139790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 19));
label_139794:
    // 0x139794: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x139794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_139798:
    // 0x139798: 0xe7b50094  swc1        $f21, 0x94($sp)
    ctx->pc = 0x139798u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_13979c:
    // 0x13979c: 0xc136afa  jal         func_4DABE8
label_1397a0:
    if (ctx->pc == 0x1397A0u) {
        ctx->pc = 0x1397A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13979Cu;
        // 0x1397a0: 0x7e480050  sq          $t0, 0x50($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1397A4u;
        goto label_1397a4;
    }
    ctx->pc = 0x13979Cu;
    SET_GPR_U32(ctx, 31, 0x1397A4u);
    ctx->pc = 0x1397A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13979Cu;
    // 0x1397a0: 0x7e480050  sq          $t0, 0x50($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13979Cu, 0x1397A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1397A4u;
label_1397a4:
    // 0x1397a4: 0x7ba20200  lq          $v0, 0x200($sp)
    ctx->pc = 0x1397a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_1397a8:
    // 0x1397a8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1397a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1397ac:
    // 0x1397ac: 0x8e247198  lw          $a0, 0x7198($s1)
    ctx->pc = 0x1397acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29080)));
label_1397b0:
    // 0x1397b0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1397b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1397b4:
    // 0x1397b4: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x1397b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
label_1397b8:
    // 0x1397b8: 0x27a70160  addiu       $a3, $sp, 0x160
    ctx->pc = 0x1397b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_1397bc:
    // 0x1397bc: 0xc0cf9fc  jal         func_33E7F0
label_1397c0:
    if (ctx->pc == 0x1397C0u) {
        ctx->pc = 0x1397C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1397BCu;
        // 0x1397c0: 0x7fa201f0  sq          $v0, 0x1F0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1397C4u;
        goto label_1397c4;
    }
    ctx->pc = 0x1397BCu;
    SET_GPR_U32(ctx, 31, 0x1397C4u);
    ctx->pc = 0x1397C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1397BCu;
    // 0x1397c0: 0x7fa201f0  sq          $v0, 0x1F0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E7F0u, 0x1397BCu, 0x1397C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1397C4u;
label_1397c4:
    // 0x1397c4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_1397c8:
    if (ctx->pc == 0x1397C8u) {
        ctx->pc = 0x1397C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1397C4u;
        // 0x1397c8: 0xc7a00120  lwc1        $f0, 0x120($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1397CCu;
        goto label_1397cc;
    }
    ctx->pc = 0x1397C4u;
    {
        const bool branch_taken_0x1397c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1397C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1397C4u;
        // 0x1397c8: 0xc7a00120  lwc1        $f0, 0x120($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1397c4) {
            ctx->pc = 0x139864u;
            goto label_139864;
        }
    }
    ctx->pc = 0x1397CCu;
label_1397cc:
    // 0x1397cc: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1397ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1397d0:
    // 0x1397d0: 0x0  nop
    ctx->pc = 0x1397d0u;
    // NOP
label_1397d4:
    // 0x1397d4: 0x45000023  bc1f        . + 4 + (0x23 << 2)
label_1397d8:
    if (ctx->pc == 0x1397D8u) {
        ctx->pc = 0x1397D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1397D4u;
        // 0x1397d8: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1397DCu;
        goto label_1397dc;
    }
    ctx->pc = 0x1397D4u;
    {
        const bool branch_taken_0x1397d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1397D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1397D4u;
        // 0x1397d8: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1397d4) {
            ctx->pc = 0x139864u;
            goto label_139864;
        }
    }
    ctx->pc = 0x1397DCu;
label_1397dc:
    // 0x1397dc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1397dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1397e0:
    // 0x1397e0: 0x8c642c04  lw          $a0, 0x2C04($v1)
    ctx->pc = 0x1397e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11268)));
label_1397e4:
    // 0x1397e4: 0xc0e44cc  jal         func_391330
label_1397e8:
    if (ctx->pc == 0x1397E8u) {
        ctx->pc = 0x1397E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1397E4u;
        // 0x1397e8: 0x94450112  lhu         $a1, 0x112($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1397ECu;
        goto label_1397ec;
    }
    ctx->pc = 0x1397E4u;
    SET_GPR_U32(ctx, 31, 0x1397ECu);
    ctx->pc = 0x1397E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1397E4u;
    // 0x1397e8: 0x94450112  lhu         $a1, 0x112($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x1397E4u, 0x1397ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1397ECu;
label_1397ec:
    // 0x1397ec: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x1397ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_1397f0:
    // 0x1397f0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1397f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1397f4:
    // 0x1397f4: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
label_1397f8:
    if (ctx->pc == 0x1397F8u) {
        ctx->pc = 0x1397F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1397F4u;
        // 0x1397f8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1397FCu;
        goto label_1397fc;
    }
    ctx->pc = 0x1397F4u;
    {
        const bool branch_taken_0x1397f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1397F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1397F4u;
        // 0x1397f8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1397f4) {
            ctx->pc = 0x139864u;
            goto label_139864;
        }
    }
    ctx->pc = 0x1397FCu;
label_1397fc:
    // 0x1397fc: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_139800:
    if (ctx->pc == 0x139800u) {
        ctx->pc = 0x139800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1397FCu;
        // 0x139800: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139804u;
        goto label_139804;
    }
    ctx->pc = 0x1397FCu;
    {
        const bool branch_taken_0x1397fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x139800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1397FCu;
        // 0x139800: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1397fc) {
            ctx->pc = 0x139864u;
            goto label_139864;
        }
    }
    ctx->pc = 0x139804u;
label_139804:
    // 0x139804: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
label_139808:
    if (ctx->pc == 0x139808u) {
        ctx->pc = 0x139808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139804u;
        // 0x139808: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13980Cu;
        goto label_13980c;
    }
    ctx->pc = 0x139804u;
    {
        const bool branch_taken_0x139804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x139808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139804u;
        // 0x139808: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139804) {
            ctx->pc = 0x139864u;
            goto label_139864;
        }
    }
    ctx->pc = 0x13980Cu;
label_13980c:
    // 0x13980c: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_139810:
    if (ctx->pc == 0x139810u) {
        ctx->pc = 0x139810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13980Cu;
        // 0x139810: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139814u;
        goto label_139814;
    }
    ctx->pc = 0x13980Cu;
    {
        const bool branch_taken_0x13980c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x139810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13980Cu;
        // 0x139810: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13980c) {
            ctx->pc = 0x139864u;
            goto label_139864;
        }
    }
    ctx->pc = 0x139814u;
label_139814:
    // 0x139814: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
label_139818:
    if (ctx->pc == 0x139818u) {
        ctx->pc = 0x139818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139814u;
        // 0x139818: 0x8ea47198  lw          $a0, 0x7198($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 29080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13981Cu;
        goto label_13981c;
    }
    ctx->pc = 0x139814u;
    {
        const bool branch_taken_0x139814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x139814) {
            ctx->pc = 0x139818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139814u;
            // 0x139818: 0x8ea47198  lw          $a0, 0x7198($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 29080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139868u;
            goto label_139868;
        }
    }
    ctx->pc = 0x13981Cu;
label_13981c:
    // 0x13981c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x13981cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_139820:
    // 0x139820: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x139820u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_139824:
    // 0x139824: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x139824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_139828:
    // 0x139828: 0x60f809  jalr        $v1
label_13982c:
    if (ctx->pc == 0x13982Cu) {
        ctx->pc = 0x13982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139828u;
        // 0x13982c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139830u;
        goto label_139830;
    }
    ctx->pc = 0x139828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x139830u);
        ctx->pc = 0x13982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139828u;
        // 0x13982c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139828u, 0x139830u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x139830u;
label_139830:
    // 0x139830: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x139830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_139834:
    // 0x139834: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x139834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_139838:
    // 0x139838: 0xc136b24  jal         func_4DAC90
label_13983c:
    if (ctx->pc == 0x13983Cu) {
        ctx->pc = 0x13983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139838u;
        // 0x13983c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x139840u;
        goto label_139840;
    }
    ctx->pc = 0x139838u;
    SET_GPR_U32(ctx, 31, 0x139840u);
    ctx->pc = 0x13983Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139838u;
    // 0x13983c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x139838u, 0x139840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139840u;
label_139840:
    // 0x139840: 0x7ba20210  lq          $v0, 0x210($sp)
    ctx->pc = 0x139840u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_139844:
    // 0x139844: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x139844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_139848:
    // 0x139848: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x139848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_13984c:
    // 0x13984c: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x13984cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_139850:
    // 0x139850: 0xc136b18  jal         func_4DAC60
label_139854:
    if (ctx->pc == 0x139854u) {
        ctx->pc = 0x139854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139850u;
        // 0x139854: 0x7fa20200  sq          $v0, 0x200($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139858u;
        goto label_139858;
    }
    ctx->pc = 0x139850u;
    SET_GPR_U32(ctx, 31, 0x139858u);
    ctx->pc = 0x139854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139850u;
    // 0x139854: 0x7fa20200  sq          $v0, 0x200($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x139850u, 0x139858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139858u;
label_139858:
    // 0x139858: 0x7ba20210  lq          $v0, 0x210($sp)
    ctx->pc = 0x139858u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_13985c:
    // 0x13985c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x13985cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_139860:
    // 0x139860: 0x7fa201f0  sq          $v0, 0x1F0($sp)
    ctx->pc = 0x139860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
label_139864:
    // 0x139864: 0x8ea47198  lw          $a0, 0x7198($s5)
    ctx->pc = 0x139864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 29080)));
label_139868:
    // 0x139868: 0xc0d01c0  jal         func_340700
label_13986c:
    if (ctx->pc == 0x13986Cu) {
        ctx->pc = 0x13986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139868u;
        // 0x13986c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139870u;
        goto label_139870;
    }
    ctx->pc = 0x139868u;
    SET_GPR_U32(ctx, 31, 0x139870u);
    ctx->pc = 0x13986Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139868u;
    // 0x13986c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340700u, 0x139868u, 0x139870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139870u;
label_139870:
    // 0x139870: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x139870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_139874:
    // 0x139874: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x139874u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_139878:
    // 0x139878: 0x8c4747c4  lw          $a3, 0x47C4($v0)
    ctx->pc = 0x139878u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
label_13987c:
    // 0x13987c: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x13987cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_139880:
    // 0x139880: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x139880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_139884:
    // 0x139884: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x139884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_139888:
    // 0x139888: 0x8ce20040  lw          $v0, 0x40($a3)
    ctx->pc = 0x139888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
label_13988c:
    // 0x13988c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x13988cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_139890:
    // 0x139890: 0xc136afa  jal         func_4DABE8
label_139894:
    if (ctx->pc == 0x139894u) {
        ctx->pc = 0x139894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139890u;
        // 0x139894: 0x7fa301f0  sq          $v1, 0x1F0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139898u;
        goto label_139898;
    }
    ctx->pc = 0x139890u;
    SET_GPR_U32(ctx, 31, 0x139898u);
    ctx->pc = 0x139894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139890u;
    // 0x139894: 0x7fa301f0  sq          $v1, 0x1F0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x139890u, 0x139898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139898u;
label_139898:
    // 0x139898: 0x7ba20270  lq          $v0, 0x270($sp)
    ctx->pc = 0x139898u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_13989c:
    // 0x13989c: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x13989cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_1398a0:
    // 0x1398a0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1398a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1398a4:
    // 0x1398a4: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x1398a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1398a8:
    // 0x1398a8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1398a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1398ac:
    // 0x1398ac: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1398acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1398b0:
    // 0x1398b0: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1398b0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_1398b4:
    // 0x1398b4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1398b4u;
    // VWAITQ (Q already resolved in this runtime)
label_1398b8:
    // 0x1398b8: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x1398b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1398bc:
    // 0x1398bc: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x1398bcu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
label_1398c0:
    // 0x1398c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1398c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1398c4:
    // 0x1398c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1398c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1398c8:
    // 0x1398c8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1398c8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1398cc:
    // 0x1398cc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1398ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1398d0:
    // 0x1398d0: 0x7fa20260  sq          $v0, 0x260($sp)
    ctx->pc = 0x1398d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 2));
label_1398d4:
    // 0x1398d4: 0x0  nop
    ctx->pc = 0x1398d4u;
    // NOP
label_1398d8:
    // 0x1398d8: 0x0  nop
    ctx->pc = 0x1398d8u;
    // NOP
label_1398dc:
    // 0x1398dc: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x1398dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
label_1398e0:
    // 0x1398e0: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x1398e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
label_1398e4:
    // 0x1398e4: 0xc136b24  jal         func_4DAC90
label_1398e8:
    if (ctx->pc == 0x1398E8u) {
        ctx->pc = 0x1398E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1398E4u;
        // 0x1398e8: 0xe7a00210  swc1        $f0, 0x210($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1398ECu;
        goto label_1398ec;
    }
    ctx->pc = 0x1398E4u;
    SET_GPR_U32(ctx, 31, 0x1398ECu);
    ctx->pc = 0x1398E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1398E4u;
    // 0x1398e8: 0xe7a00210  swc1        $f0, 0x210($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x1398E4u, 0x1398ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1398ECu;
label_1398ec:
    // 0x1398ec: 0xc7a00210  lwc1        $f0, 0x210($sp)
    ctx->pc = 0x1398ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1398f0:
    // 0x1398f0: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1398f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1398f4:
    // 0x1398f4: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x1398f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_1398f8:
    // 0x1398f8: 0x27a60220  addiu       $a2, $sp, 0x220
    ctx->pc = 0x1398f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_1398fc:
    // 0x1398fc: 0xe7a00234  swc1        $f0, 0x234($sp)
    ctx->pc = 0x1398fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
label_139900:
    // 0x139900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x139900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_139904:
    // 0x139904: 0x24479010  addiu       $a3, $v0, -0x6FF0
    ctx->pc = 0x139904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938640));
label_139908:
    // 0x139908: 0x68e80007  ldl         $t0, 0x7($a3)
    ctx->pc = 0x139908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_13990c:
    // 0x13990c: 0x6ce80000  ldr         $t0, 0x0($a3)
    ctx->pc = 0x13990cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_139910:
    // 0x139910: 0x68e9000f  ldl         $t1, 0xF($a3)
    ctx->pc = 0x139910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_139914:
    // 0x139914: 0x6ce90008  ldr         $t1, 0x8($a3)
    ctx->pc = 0x139914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_139918:
    // 0x139918: 0xb3a80267  sdl         $t0, 0x267($sp)
    ctx->pc = 0x139918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 615); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13991c:
    // 0x13991c: 0xb7a80260  sdr         $t0, 0x260($sp)
    ctx->pc = 0x13991cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 608); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_139920:
    // 0x139920: 0xb3a9026f  sdl         $t1, 0x26F($sp)
    ctx->pc = 0x139920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 623); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_139924:
    // 0x139924: 0xb7a90268  sdr         $t1, 0x268($sp)
    ctx->pc = 0x139924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 616); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_139928:
    // 0x139928: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x139928u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13992c:
    // 0x13992c: 0x27a70260  addiu       $a3, $sp, 0x260
    ctx->pc = 0x13992cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_139930:
    // 0x139930: 0xc0d4336  jal         func_350CD8
label_139934:
    if (ctx->pc == 0x139934u) {
        ctx->pc = 0x139934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139930u;
        // 0x139934: 0xafa00230  sw          $zero, 0x230($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139938u;
        goto label_139938;
    }
    ctx->pc = 0x139930u;
    SET_GPR_U32(ctx, 31, 0x139938u);
    ctx->pc = 0x139934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139930u;
    // 0x139934: 0xafa00230  sw          $zero, 0x230($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x139930u, 0x139938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139938u;
label_139938:
    // 0x139938: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x139938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_13993c:
    // 0x13993c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x13993cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_139940:
    // 0x139940: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x139940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_139944:
    // 0x139944: 0x60f809  jalr        $v1
label_139948:
    if (ctx->pc == 0x139948u) {
        ctx->pc = 0x139948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139944u;
        // 0x139948: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13994Cu;
        goto label_13994c;
    }
    ctx->pc = 0x139944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13994Cu);
        ctx->pc = 0x139948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139944u;
        // 0x139948: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139944u, 0x13994Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13994Cu;
label_13994c:
    // 0x13994c: 0xc7a10234  lwc1        $f1, 0x234($sp)
    ctx->pc = 0x13994cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_139950:
    // 0x139950: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x139950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_139954:
    // 0x139954: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x139954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_139958:
    // 0x139958: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x139958u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_13995c:
    // 0x13995c: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x13995cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
label_139960:
    // 0x139960: 0xc136b24  jal         func_4DAC90
label_139964:
    if (ctx->pc == 0x139964u) {
        ctx->pc = 0x139964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139960u;
        // 0x139964: 0xe7a10234  swc1        $f1, 0x234($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x139968u;
        goto label_139968;
    }
    ctx->pc = 0x139960u;
    SET_GPR_U32(ctx, 31, 0x139968u);
    ctx->pc = 0x139964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139960u;
    // 0x139964: 0xe7a10234  swc1        $f1, 0x234($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x139960u, 0x139968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139968u;
label_139968:
    // 0x139968: 0x7ba20290  lq          $v0, 0x290($sp)
    ctx->pc = 0x139968u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_13996c:
    // 0x13996c: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x13996cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_139970:
    // 0x139970: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x139970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_139974:
    // 0x139974: 0x27a60280  addiu       $a2, $sp, 0x280
    ctx->pc = 0x139974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_139978:
    // 0x139978: 0xc136b18  jal         func_4DAC60
label_13997c:
    if (ctx->pc == 0x13997Cu) {
        ctx->pc = 0x13997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139978u;
        // 0x13997c: 0x7fa20280  sq          $v0, 0x280($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139980u;
        goto label_139980;
    }
    ctx->pc = 0x139978u;
    SET_GPR_U32(ctx, 31, 0x139980u);
    ctx->pc = 0x13997Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139978u;
    // 0x13997c: 0x7fa20280  sq          $v0, 0x280($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x139978u, 0x139980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139980u;
label_139980:
    // 0x139980: 0x7ba30290  lq          $v1, 0x290($sp)
    ctx->pc = 0x139980u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_139984:
    // 0x139984: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x139984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_139988:
    // 0x139988: 0xc45591d8  lwc1        $f21, -0x6E28($v0)
    ctx->pc = 0x139988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294939096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_13998c:
    // 0x13998c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x13998cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_139990:
    // 0x139990: 0xc7a10234  lwc1        $f1, 0x234($sp)
    ctx->pc = 0x139990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_139994:
    // 0x139994: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x139994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_139998:
    // 0x139998: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x139998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_13999c:
    // 0x13999c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x13999cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1399a0:
    // 0x1399a0: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x1399a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_1399a4:
    // 0x1399a4: 0x7fa30270  sq          $v1, 0x270($sp)
    ctx->pc = 0x1399a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 3));
label_1399a8:
    // 0x1399a8: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1399a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1399ac:
    // 0x1399ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1399acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1399b0:
    // 0x1399b0: 0xc136afa  jal         func_4DABE8
label_1399b4:
    if (ctx->pc == 0x1399B4u) {
        ctx->pc = 0x1399B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1399B0u;
        // 0x1399b4: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1399B8u;
        goto label_1399b8;
    }
    ctx->pc = 0x1399B0u;
    SET_GPR_U32(ctx, 31, 0x1399B8u);
    ctx->pc = 0x1399B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1399B0u;
    // 0x1399b4: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x1399B0u, 0x1399B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1399B8u;
label_1399b8:
    // 0x1399b8: 0x7ba20280  lq          $v0, 0x280($sp)
    ctx->pc = 0x1399b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_1399bc:
    // 0x1399bc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1399bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1399c0:
    // 0x1399c0: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x1399c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1399c4:
    // 0x1399c4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1399c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1399c8:
    // 0x1399c8: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1399c8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_1399cc:
    // 0x1399cc: 0x4a0003bf  vwaitq
    ctx->pc = 0x1399ccu;
    // VWAITQ (Q already resolved in this runtime)
label_1399d0:
    // 0x1399d0: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x1399d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1399d4:
    // 0x1399d4: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x1399d4u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
label_1399d8:
    // 0x1399d8: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x1399d8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1399dc:
    // 0x1399dc: 0x0  nop
    ctx->pc = 0x1399dcu;
    // NOP
label_1399e0:
    // 0x1399e0: 0x46141032  c.eq.s      $f2, $f20
    ctx->pc = 0x1399e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1399e4:
    // 0x1399e4: 0x0  nop
    ctx->pc = 0x1399e4u;
    // NOP
label_1399e8:
    // 0x1399e8: 0x45010019  bc1t        . + 4 + (0x19 << 2)
label_1399ec:
    if (ctx->pc == 0x1399ECu) {
        ctx->pc = 0x1399ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1399E8u;
        // 0x1399ec: 0x7fa20270  sq          $v0, 0x270($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1399F0u;
        goto label_1399f0;
    }
    ctx->pc = 0x1399E8u;
    {
        const bool branch_taken_0x1399e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1399ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1399E8u;
        // 0x1399ec: 0x7fa20270  sq          $v0, 0x270($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1399e8) {
            ctx->pc = 0x139A50u;
            goto label_139a50;
        }
    }
    ctx->pc = 0x1399F0u;
label_1399f0:
    // 0x1399f0: 0x4602a501  sub.s       $f20, $f20, $f2
    ctx->pc = 0x1399f0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
label_1399f4:
    // 0x1399f4: 0xc7a10234  lwc1        $f1, 0x234($sp)
    ctx->pc = 0x1399f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1399f8:
    // 0x1399f8: 0x4600b007  neg.s       $f0, $f22
    ctx->pc = 0x1399f8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[22]);
label_1399fc:
    // 0x1399fc: 0x4616a529  min.s       $f20, $f20, $f22
    ctx->pc = 0x1399fcu;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[22]);
label_139a00:
    // 0x139a00: 0x4600a528  max.s       $f20, $f20, $f0
    ctx->pc = 0x139a00u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[0]);
label_139a04:
    // 0x139a04: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x139a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_139a08:
    // 0x139a08: 0x46141500  add.s       $f20, $f2, $f20
    ctx->pc = 0x139a08u;
    ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
label_139a0c:
    // 0x139a0c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x139a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_139a10:
    // 0x139a10: 0x4601a529  min.s       $f20, $f20, $f1
    ctx->pc = 0x139a10u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[1]);
label_139a14:
    // 0x139a14: 0xc136b24  jal         func_4DAC90
label_139a18:
    if (ctx->pc == 0x139A18u) {
        ctx->pc = 0x139A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139A14u;
        // 0x139a18: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x139A1Cu;
        goto label_139a1c;
    }
    ctx->pc = 0x139A14u;
    SET_GPR_U32(ctx, 31, 0x139A1Cu);
    ctx->pc = 0x139A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139A14u;
    // 0x139a18: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x139A14u, 0x139A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139A1Cu;
label_139a1c:
    // 0x139a1c: 0x7ba20290  lq          $v0, 0x290($sp)
    ctx->pc = 0x139a1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_139a20:
    // 0x139a20: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x139a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_139a24:
    // 0x139a24: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x139a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_139a28:
    // 0x139a28: 0x27a60280  addiu       $a2, $sp, 0x280
    ctx->pc = 0x139a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_139a2c:
    // 0x139a2c: 0xc136b18  jal         func_4DAC60
label_139a30:
    if (ctx->pc == 0x139A30u) {
        ctx->pc = 0x139A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139A2Cu;
        // 0x139a30: 0x7fa20280  sq          $v0, 0x280($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139A34u;
        goto label_139a34;
    }
    ctx->pc = 0x139A2Cu;
    SET_GPR_U32(ctx, 31, 0x139A34u);
    ctx->pc = 0x139A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139A2Cu;
    // 0x139a30: 0x7fa20280  sq          $v0, 0x280($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x139A2Cu, 0x139A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139A34u;
label_139a34:
    // 0x139a34: 0x7ba20290  lq          $v0, 0x290($sp)
    ctx->pc = 0x139a34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_139a38:
    // 0x139a38: 0x4615a502  mul.s       $f20, $f20, $f21
    ctx->pc = 0x139a38u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
label_139a3c:
    // 0x139a3c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x139a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_139a40:
    // 0x139a40: 0x7fa20270  sq          $v0, 0x270($sp)
    ctx->pc = 0x139a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 2));
label_139a44:
    // 0x139a44: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x139a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_139a48:
    // 0x139a48: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x139a48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_139a4c:
    // 0x139a4c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x139a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_139a50:
    // 0x139a50: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x139a50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_139a54:
    // 0x139a54: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x139a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_139a58:
    // 0x139a58: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x139a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_139a5c:
    // 0x139a5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x139a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_139a60:
    // 0x139a60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x139a60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_139a64:
    // 0x139a64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x139a64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_139a68:
    // 0x139a68: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x139a68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_139a6c:
    // 0x139a6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x139a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_139a70:
    // 0x139a70: 0xc0489ca  jal         func_122728
label_139a74:
    if (ctx->pc == 0x139A74u) {
        ctx->pc = 0x139A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139A70u;
        // 0x139a74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139A78u;
        goto label_139a78;
    }
    ctx->pc = 0x139A70u;
    SET_GPR_U32(ctx, 31, 0x139A78u);
    ctx->pc = 0x139A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139A70u;
    // 0x139a74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122728u, 0x139A70u, 0x139A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139A78u;
label_139a78:
    // 0x139a78: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x139a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_139a7c:
    // 0x139a7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x139a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_139a80:
    // 0x139a80: 0x844401b8  lh          $a0, 0x1B8($v0)
    ctx->pc = 0x139a80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 440)));
label_139a84:
    // 0x139a84: 0x8c4601bc  lw          $a2, 0x1BC($v0)
    ctx->pc = 0x139a84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
label_139a88:
    // 0x139a88: 0xc0f809  jalr        $a2
label_139a8c:
    if (ctx->pc == 0x139A8Cu) {
        ctx->pc = 0x139A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139A88u;
        // 0x139a8c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139A90u;
        goto label_139a90;
    }
    ctx->pc = 0x139A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x139A90u);
        ctx->pc = 0x139A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139A88u;
        // 0x139a8c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139A88u, 0x139A90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x139A90u;
label_139a90:
    // 0x139a90: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x139a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_139a94:
    // 0x139a94: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x139a94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_139a98:
    // 0x139a98: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x139a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_139a9c:
    // 0x139a9c: 0x40f809  jalr        $v0
label_139aa0:
    if (ctx->pc == 0x139AA0u) {
        ctx->pc = 0x139AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139A9Cu;
        // 0x139aa0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139AA4u;
        goto label_139aa4;
    }
    ctx->pc = 0x139A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x139AA4u);
        ctx->pc = 0x139AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139A9Cu;
        // 0x139aa0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139A9Cu, 0x139AA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x139AA4u;
label_139aa4:
    // 0x139aa4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x139aa4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_139aa8:
    // 0x139aa8: 0x17c00041  bnez        $fp, . + 4 + (0x41 << 2)
label_139aac:
    if (ctx->pc == 0x139AACu) {
        ctx->pc = 0x139AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139AA8u;
        // 0x139aac: 0x7fa302d0  sq          $v1, 0x2D0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139AB0u;
        goto label_139ab0;
    }
    ctx->pc = 0x139AA8u;
    {
        const bool branch_taken_0x139aa8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x139AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139AA8u;
        // 0x139aac: 0x7fa302d0  sq          $v1, 0x2D0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139aa8) {
            ctx->pc = 0x139BB0u;
            goto label_139bb0;
        }
    }
    ctx->pc = 0x139AB0u;
label_139ab0:
    // 0x139ab0: 0x8fa902f0  lw          $t1, 0x2F0($sp)
    ctx->pc = 0x139ab0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_139ab4:
    // 0x139ab4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x139ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_139ab8:
    // 0x139ab8: 0x24624b00  addiu       $v0, $v1, 0x4B00
    ctx->pc = 0x139ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_139abc:
    // 0x139abc: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x139abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_139ac0:
    // 0x139ac0: 0x85250002  lh          $a1, 0x2($t1)
    ctx->pc = 0x139ac0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
label_139ac4:
    // 0x139ac4: 0x26860500  addiu       $a2, $s4, 0x500
    ctx->pc = 0x139ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 1280));
label_139ac8:
    // 0x139ac8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x139ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_139acc:
    // 0x139acc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x139accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_139ad0:
    // 0x139ad0: 0xc136b30  jal         func_4DACC0
label_139ad4:
    if (ctx->pc == 0x139AD4u) {
        ctx->pc = 0x139AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139AD0u;
        // 0x139ad4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139AD8u;
        goto label_139ad8;
    }
    ctx->pc = 0x139AD0u;
    SET_GPR_U32(ctx, 31, 0x139AD8u);
    ctx->pc = 0x139AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139AD0u;
    // 0x139ad4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x139AD0u, 0x139AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139AD8u;
label_139ad8:
    // 0x139ad8: 0x7ba20280  lq          $v0, 0x280($sp)
    ctx->pc = 0x139ad8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_139adc:
    // 0x139adc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x139adcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_139ae0:
    // 0x139ae0: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x139ae0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_139ae4:
    // 0x139ae4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x139ae4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_139ae8:
    // 0x139ae8: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x139ae8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_139aec:
    // 0x139aec: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x139aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_139af0:
    // 0x139af0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x139af0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_139af4:
    // 0x139af4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x139af4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_139af8:
    // 0x139af8: 0x0  nop
    ctx->pc = 0x139af8u;
    // NOP
label_139afc:
    // 0x139afc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x139afcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_139b00:
    // 0x139b00: 0x0  nop
    ctx->pc = 0x139b00u;
    // NOP
label_139b04:
    // 0x139b04: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_139b08:
    if (ctx->pc == 0x139B08u) {
        ctx->pc = 0x139B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139B04u;
        // 0x139b08: 0x7fa20270  sq          $v0, 0x270($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139B0Cu;
        goto label_139b0c;
    }
    ctx->pc = 0x139B04u;
    {
        const bool branch_taken_0x139b04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x139B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139B04u;
        // 0x139b08: 0x7fa20270  sq          $v0, 0x270($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139b04) {
            ctx->pc = 0x139B48u;
            goto label_139b48;
        }
    }
    ctx->pc = 0x139B0Cu;
label_139b0c:
    // 0x139b0c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x139b0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_139b10:
    // 0x139b10: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x139b10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_139b14:
    // 0x139b14: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x139b14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_139b18:
    // 0x139b18: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x139b18u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_139b1c:
    // 0x139b1c: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x139b1cu;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_139b20:
    // 0x139b20: 0x4a0003bf  vwaitq
    ctx->pc = 0x139b20u;
    // VWAITQ (Q already resolved in this runtime)
label_139b24:
    // 0x139b24: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x139b24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_139b28:
    // 0x139b28: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x139b28u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_139b2c:
    // 0x139b2c: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x139b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_139b30:
    // 0x139b30: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x139b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_139b34:
    // 0x139b34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x139b34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_139b38:
    // 0x139b38: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x139b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_139b3c:
    // 0x139b3c: 0x7fa20270  sq          $v0, 0x270($sp)
    ctx->pc = 0x139b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 2));
label_139b40:
    // 0x139b40: 0xc136b24  jal         func_4DAC90
label_139b44:
    if (ctx->pc == 0x139B44u) {
        ctx->pc = 0x139B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139B40u;
        // 0x139b44: 0x7fa20280  sq          $v0, 0x280($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139B48u;
        goto label_139b48;
    }
    ctx->pc = 0x139B40u;
    SET_GPR_U32(ctx, 31, 0x139B48u);
    ctx->pc = 0x139B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139B40u;
    // 0x139b44: 0x7fa20280  sq          $v0, 0x280($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x139B40u, 0x139B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139B48u;
label_139b48:
    // 0x139b48: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x139b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_139b4c:
    // 0x139b4c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x139b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_139b50:
    // 0x139b50: 0xafa00278  sw          $zero, 0x278($sp)
    ctx->pc = 0x139b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 0));
label_139b54:
    // 0x139b54: 0xc136b18  jal         func_4DAC60
label_139b58:
    if (ctx->pc == 0x139B58u) {
        ctx->pc = 0x139B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139B54u;
        // 0x139b58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139B5Cu;
        goto label_139b5c;
    }
    ctx->pc = 0x139B54u;
    SET_GPR_U32(ctx, 31, 0x139B5Cu);
    ctx->pc = 0x139B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139B54u;
    // 0x139b58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x139B54u, 0x139B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139B5Cu;
label_139b5c:
    // 0x139b5c: 0x26700210  addiu       $s0, $s3, 0x210
    ctx->pc = 0x139b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 528));
label_139b60:
    // 0x139b60: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x139b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_139b64:
    // 0x139b64: 0x27a50270  addiu       $a1, $sp, 0x270
    ctx->pc = 0x139b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_139b68:
    // 0x139b68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x139b68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_139b6c:
    // 0x139b6c: 0xc136afa  jal         func_4DABE8
label_139b70:
    if (ctx->pc == 0x139B70u) {
        ctx->pc = 0x139B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139B6Cu;
        // 0x139b70: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139B74u;
        goto label_139b74;
    }
    ctx->pc = 0x139B6Cu;
    SET_GPR_U32(ctx, 31, 0x139B74u);
    ctx->pc = 0x139B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139B6Cu;
    // 0x139b70: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x139B6Cu, 0x139B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139B74u;
label_139b74:
    // 0x139b74: 0x7ba202e0  lq          $v0, 0x2E0($sp)
    ctx->pc = 0x139b74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 736)));
label_139b78:
    // 0x139b78: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x139b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_139b7c:
    // 0x139b7c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x139b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_139b80:
    // 0x139b80: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x139b80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_139b84:
    // 0x139b84: 0x27a50290  addiu       $a1, $sp, 0x290
    ctx->pc = 0x139b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_139b88:
    // 0x139b88: 0xc136b24  jal         func_4DAC90
label_139b8c:
    if (ctx->pc == 0x139B8Cu) {
        ctx->pc = 0x139B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139B88u;
        // 0x139b8c: 0x7fa20290  sq          $v0, 0x290($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139B90u;
        goto label_139b90;
    }
    ctx->pc = 0x139B88u;
    SET_GPR_U32(ctx, 31, 0x139B90u);
    ctx->pc = 0x139B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139B88u;
    // 0x139b8c: 0x7fa20290  sq          $v0, 0x290($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x139B88u, 0x139B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139B90u;
label_139b90:
    // 0x139b90: 0x7ba202e0  lq          $v0, 0x2E0($sp)
    ctx->pc = 0x139b90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 736)));
label_139b94:
    // 0x139b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x139b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_139b98:
    // 0x139b98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x139b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_139b9c:
    // 0x139b9c: 0x27a60280  addiu       $a2, $sp, 0x280
    ctx->pc = 0x139b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_139ba0:
    // 0x139ba0: 0xc136b18  jal         func_4DAC60
label_139ba4:
    if (ctx->pc == 0x139BA4u) {
        ctx->pc = 0x139BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139BA0u;
        // 0x139ba4: 0x7fa20280  sq          $v0, 0x280($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139BA8u;
        goto label_139ba8;
    }
    ctx->pc = 0x139BA0u;
    SET_GPR_U32(ctx, 31, 0x139BA8u);
    ctx->pc = 0x139BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139BA0u;
    // 0x139ba4: 0x7fa20280  sq          $v0, 0x280($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x139BA0u, 0x139BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139BA8u;
label_139ba8:
    // 0x139ba8: 0x10000005  b           . + 4 + (0x5 << 2)
label_139bac:
    if (ctx->pc == 0x139BACu) {
        ctx->pc = 0x139BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139BA8u;
        // 0x139bac: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139BB0u;
        goto label_139bb0;
    }
    ctx->pc = 0x139BA8u;
    {
        const bool branch_taken_0x139ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139BA8u;
        // 0x139bac: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139ba8) {
            ctx->pc = 0x139BC0u;
            goto label_139bc0;
        }
    }
    ctx->pc = 0x139BB0u;
label_139bb0:
    // 0x139bb0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x139bb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_139bb4:
    // 0x139bb4: 0x26710210  addiu       $s1, $s3, 0x210
    ctx->pc = 0x139bb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 528));
label_139bb8:
    // 0x139bb8: 0x7e620210  sq          $v0, 0x210($s3)
    ctx->pc = 0x139bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 528), GPR_VEC(ctx, 2));
label_139bbc:
    // 0x139bbc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x139bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_139bc0:
    // 0x139bc0: 0x27b002a0  addiu       $s0, $sp, 0x2A0
    ctx->pc = 0x139bc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_139bc4:
    // 0x139bc4: 0x26720020  addiu       $s2, $s3, 0x20
    ctx->pc = 0x139bc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_139bc8:
    // 0x139bc8: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x139bc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_139bcc:
    // 0x139bcc: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x139bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_139bd0:
    // 0x139bd0: 0x40f809  jalr        $v0
label_139bd4:
    if (ctx->pc == 0x139BD4u) {
        ctx->pc = 0x139BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139BD0u;
        // 0x139bd4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139BD8u;
        goto label_139bd8;
    }
    ctx->pc = 0x139BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x139BD8u);
        ctx->pc = 0x139BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139BD0u;
        // 0x139bd4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139BD0u, 0x139BD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x139BD8u;
label_139bd8:
    // 0x139bd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x139bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_139bdc:
    // 0x139bdc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x139bdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_139be0:
    // 0x139be0: 0xc0cdc0a  jal         func_337028
label_139be4:
    if (ctx->pc == 0x139BE4u) {
        ctx->pc = 0x139BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139BE0u;
        // 0x139be4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139BE8u;
        goto label_139be8;
    }
    ctx->pc = 0x139BE0u;
    SET_GPR_U32(ctx, 31, 0x139BE8u);
    ctx->pc = 0x139BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139BE0u;
    // 0x139be4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337028u, 0x139BE0u, 0x139BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139BE8u;
label_139be8:
    // 0x139be8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_139bec:
    if (ctx->pc == 0x139BECu) {
        ctx->pc = 0x139BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139BE8u;
        // 0x139bec: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139BF0u;
        goto label_139bf0;
    }
    ctx->pc = 0x139BE8u;
    {
        const bool branch_taken_0x139be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139be8) {
            ctx->pc = 0x139BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139BE8u;
            // 0x139bec: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139C08u;
            goto label_139c08;
        }
    }
    ctx->pc = 0x139BF0u;
label_139bf0:
    // 0x139bf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x139bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_139bf4:
    // 0x139bf4: 0xc0cd972  jal         func_3365C8
label_139bf8:
    if (ctx->pc == 0x139BF8u) {
        ctx->pc = 0x139BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139BF4u;
        // 0x139bf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139BFCu;
        goto label_139bfc;
    }
    ctx->pc = 0x139BF4u;
    SET_GPR_U32(ctx, 31, 0x139BFCu);
    ctx->pc = 0x139BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139BF4u;
    // 0x139bf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365C8u, 0x139BF4u, 0x139BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139BFCu;
label_139bfc:
    // 0x139bfc: 0x7ba202d0  lq          $v0, 0x2D0($sp)
    ctx->pc = 0x139bfcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_139c00:
    // 0x139c00: 0x7e620010  sq          $v0, 0x10($s3)
    ctx->pc = 0x139c00u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
label_139c04:
    // 0x139c04: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x139c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_139c08:
    // 0x139c08: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x139c08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_139c0c:
    // 0x139c0c: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x139c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_139c10:
    // 0x139c10: 0x40f809  jalr        $v0
label_139c14:
    if (ctx->pc == 0x139C14u) {
        ctx->pc = 0x139C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139C10u;
        // 0x139c14: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139C18u;
        goto label_139c18;
    }
    ctx->pc = 0x139C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x139C18u);
        ctx->pc = 0x139C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139C10u;
        // 0x139c14: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139C10u, 0x139C18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x139C18u;
label_139c18:
    // 0x139c18: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x139c18u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_139c1c:
    // 0x139c1c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x139c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_139c20:
    // 0x139c20: 0xc6740234  lwc1        $f20, 0x234($s3)
    ctx->pc = 0x139c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_139c24:
    // 0x139c24: 0x24631730  addiu       $v1, $v1, 0x1730
    ctx->pc = 0x139c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5936));
label_139c28:
    // 0x139c28: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x139c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_139c2c:
    // 0x139c2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x139c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_139c30:
    // 0x139c30: 0x7e640220  sq          $a0, 0x220($s3)
    ctx->pc = 0x139c30u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 544), GPR_VEC(ctx, 4));
label_139c34:
    // 0x139c34: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x139c34u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_139c38:
    // 0x139c38: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x139c38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_139c3c:
    // 0x139c3c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x139c3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_139c40:
    // 0x139c40: 0xc12e310  jal         func_4B8C40
label_139c44:
    if (ctx->pc == 0x139C44u) {
        ctx->pc = 0x139C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139C40u;
        // 0x139c44: 0x7fa202e0  sq          $v0, 0x2E0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139C48u;
        goto label_139c48;
    }
    ctx->pc = 0x139C40u;
    SET_GPR_U32(ctx, 31, 0x139C48u);
    ctx->pc = 0x139C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139C40u;
    // 0x139c44: 0x7fa202e0  sq          $v0, 0x2E0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x139C40u, 0x139C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139C48u;
label_139c48:
    // 0x139c48: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x139c48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_139c4c:
    // 0x139c4c: 0xc12e29c  jal         func_4B8A70
label_139c50:
    if (ctx->pc == 0x139C50u) {
        ctx->pc = 0x139C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139C4Cu;
        // 0x139c50: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x139C54u;
        goto label_139c54;
    }
    ctx->pc = 0x139C4Cu;
    SET_GPR_U32(ctx, 31, 0x139C54u);
    ctx->pc = 0x139C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139C4Cu;
    // 0x139c50: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x139C4Cu, 0x139C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139C54u;
label_139c54:
    // 0x139c54: 0x7ba202e0  lq          $v0, 0x2E0($sp)
    ctx->pc = 0x139c54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 736)));
label_139c58:
    // 0x139c58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x139c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_139c5c:
    // 0x139c5c: 0x4407a800  mfc1        $a3, $f21
    ctx->pc = 0x139c5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_139c60:
    // 0x139c60: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x139c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_139c64:
    // 0x139c64: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x139c64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_139c68:
    // 0x139c68: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x139c68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_139c6c:
    // 0x139c6c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x139c6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_139c70:
    // 0x139c70: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x139c70u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_139c74:
    // 0x139c74: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x139c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_139c78:
    // 0x139c78: 0x7fa202e0  sq          $v0, 0x2E0($sp)
    ctx->pc = 0x139c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 2));
label_139c7c:
    // 0x139c7c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x139c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_139c80:
    // 0x139c80: 0x7fa20280  sq          $v0, 0x280($sp)
    ctx->pc = 0x139c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 2));
label_139c84:
    // 0x139c84: 0xc7a002e0  lwc1        $f0, 0x2E0($sp)
    ctx->pc = 0x139c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_139c88:
    // 0x139c88: 0xc7a102e4  lwc1        $f1, 0x2E4($sp)
    ctx->pc = 0x139c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_139c8c:
    // 0x139c8c: 0xc7a202e8  lwc1        $f2, 0x2E8($sp)
    ctx->pc = 0x139c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_139c90:
    // 0x139c90: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x139c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_139c94:
    // 0x139c94: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x139c94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_139c98:
    // 0x139c98: 0xc136d44  jal         func_4DB510
label_139c9c:
    if (ctx->pc == 0x139C9Cu) {
        ctx->pc = 0x139C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139C98u;
        // 0x139c9c: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x139CA0u;
        goto label_139ca0;
    }
    ctx->pc = 0x139C98u;
    SET_GPR_U32(ctx, 31, 0x139CA0u);
    ctx->pc = 0x139C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139C98u;
    // 0x139c9c: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB510u, 0x139C98u, 0x139CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139CA0u;
label_139ca0:
    // 0x139ca0: 0x7ba20270  lq          $v0, 0x270($sp)
    ctx->pc = 0x139ca0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_139ca4:
    // 0x139ca4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x139ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_139ca8:
    // 0x139ca8: 0x7e620020  sq          $v0, 0x20($s3)
    ctx->pc = 0x139ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 2));
label_139cac:
    // 0x139cac: 0x7fa202e0  sq          $v0, 0x2E0($sp)
    ctx->pc = 0x139cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 2));
label_139cb0:
    // 0x139cb0: 0xc04828c  jal         func_120A30
label_139cb4:
    if (ctx->pc == 0x139CB4u) {
        ctx->pc = 0x139CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139CB0u;
        // 0x139cb4: 0xc48c01a0  lwc1        $f12, 0x1A0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x139CB8u;
        goto label_139cb8;
    }
    ctx->pc = 0x139CB0u;
    SET_GPR_U32(ctx, 31, 0x139CB8u);
    ctx->pc = 0x139CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139CB0u;
    // 0x139cb4: 0xc48c01a0  lwc1        $f12, 0x1A0($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A30u, 0x139CB0u, 0x139CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139CB8u;
label_139cb8:
    // 0x139cb8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x139cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_139cbc:
    // 0x139cbc: 0xc0d0680  jal         func_341A00
label_139cc0:
    if (ctx->pc == 0x139CC0u) {
        ctx->pc = 0x139CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139CBCu;
        // 0x139cc0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139CC4u;
        goto label_139cc4;
    }
    ctx->pc = 0x139CBCu;
    SET_GPR_U32(ctx, 31, 0x139CC4u);
    ctx->pc = 0x139CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139CBCu;
    // 0x139cc0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341A00u, 0x139CBCu, 0x139CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139CC4u;
label_139cc4:
    // 0x139cc4: 0x7bb00390  lq          $s0, 0x390($sp)
    ctx->pc = 0x139cc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 912)));
label_139cc8:
    // 0x139cc8: 0x7bb10380  lq          $s1, 0x380($sp)
    ctx->pc = 0x139cc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 896)));
label_139ccc:
    // 0x139ccc: 0x7bb20370  lq          $s2, 0x370($sp)
    ctx->pc = 0x139cccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 880)));
label_139cd0:
    // 0x139cd0: 0x7bb30360  lq          $s3, 0x360($sp)
    ctx->pc = 0x139cd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 864)));
label_139cd4:
    // 0x139cd4: 0x7bb40350  lq          $s4, 0x350($sp)
    ctx->pc = 0x139cd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 848)));
label_139cd8:
    // 0x139cd8: 0x7bb50340  lq          $s5, 0x340($sp)
    ctx->pc = 0x139cd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 832)));
label_139cdc:
    // 0x139cdc: 0x7bb60330  lq          $s6, 0x330($sp)
    ctx->pc = 0x139cdcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 816)));
label_139ce0:
    // 0x139ce0: 0x7bb70320  lq          $s7, 0x320($sp)
    ctx->pc = 0x139ce0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 800)));
label_139ce4:
    // 0x139ce4: 0x7bbe0310  lq          $fp, 0x310($sp)
    ctx->pc = 0x139ce4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 784)));
label_139ce8:
    // 0x139ce8: 0xdfbf0300  ld          $ra, 0x300($sp)
    ctx->pc = 0x139ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 768)));
label_139cec:
    // 0x139cec: 0xc7b603b0  lwc1        $f22, 0x3B0($sp)
    ctx->pc = 0x139cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_139cf0:
    // 0x139cf0: 0xc7b503a8  lwc1        $f21, 0x3A8($sp)
    ctx->pc = 0x139cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_139cf4:
    // 0x139cf4: 0xc7b403a0  lwc1        $f20, 0x3A0($sp)
    ctx->pc = 0x139cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_139cf8:
    // 0x139cf8: 0x3e00008  jr          $ra
label_139cfc:
    if (ctx->pc == 0x139CFCu) {
        ctx->pc = 0x139CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139CF8u;
        // 0x139cfc: 0x27bd03c0  addiu       $sp, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139D00u;
        goto label_fallthrough_0x139cf8;
    }
    ctx->pc = 0x139CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139CF8u;
        // 0x139cfc: 0x27bd03c0  addiu       $sp, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x139cf8:
    ctx->pc = 0x139D00u;
}
