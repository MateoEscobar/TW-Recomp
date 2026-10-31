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

// Function: sub_00170C88
// Address: 0x170c88 - 0x1712c0
void sub_00170C88_0x170c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170C88_0x170c88");
#endif

    switch (ctx->pc) {
        case 0x170c88u: goto label_170c88;
        case 0x170c8cu: goto label_170c8c;
        case 0x170c90u: goto label_170c90;
        case 0x170c94u: goto label_170c94;
        case 0x170c98u: goto label_170c98;
        case 0x170c9cu: goto label_170c9c;
        case 0x170ca0u: goto label_170ca0;
        case 0x170ca4u: goto label_170ca4;
        case 0x170ca8u: goto label_170ca8;
        case 0x170cacu: goto label_170cac;
        case 0x170cb0u: goto label_170cb0;
        case 0x170cb4u: goto label_170cb4;
        case 0x170cb8u: goto label_170cb8;
        case 0x170cbcu: goto label_170cbc;
        case 0x170cc0u: goto label_170cc0;
        case 0x170cc4u: goto label_170cc4;
        case 0x170cc8u: goto label_170cc8;
        case 0x170cccu: goto label_170ccc;
        case 0x170cd0u: goto label_170cd0;
        case 0x170cd4u: goto label_170cd4;
        case 0x170cd8u: goto label_170cd8;
        case 0x170cdcu: goto label_170cdc;
        case 0x170ce0u: goto label_170ce0;
        case 0x170ce4u: goto label_170ce4;
        case 0x170ce8u: goto label_170ce8;
        case 0x170cecu: goto label_170cec;
        case 0x170cf0u: goto label_170cf0;
        case 0x170cf4u: goto label_170cf4;
        case 0x170cf8u: goto label_170cf8;
        case 0x170cfcu: goto label_170cfc;
        case 0x170d00u: goto label_170d00;
        case 0x170d04u: goto label_170d04;
        case 0x170d08u: goto label_170d08;
        case 0x170d0cu: goto label_170d0c;
        case 0x170d10u: goto label_170d10;
        case 0x170d14u: goto label_170d14;
        case 0x170d18u: goto label_170d18;
        case 0x170d1cu: goto label_170d1c;
        case 0x170d20u: goto label_170d20;
        case 0x170d24u: goto label_170d24;
        case 0x170d28u: goto label_170d28;
        case 0x170d2cu: goto label_170d2c;
        case 0x170d30u: goto label_170d30;
        case 0x170d34u: goto label_170d34;
        case 0x170d38u: goto label_170d38;
        case 0x170d3cu: goto label_170d3c;
        case 0x170d40u: goto label_170d40;
        case 0x170d44u: goto label_170d44;
        case 0x170d48u: goto label_170d48;
        case 0x170d4cu: goto label_170d4c;
        case 0x170d50u: goto label_170d50;
        case 0x170d54u: goto label_170d54;
        case 0x170d58u: goto label_170d58;
        case 0x170d5cu: goto label_170d5c;
        case 0x170d60u: goto label_170d60;
        case 0x170d64u: goto label_170d64;
        case 0x170d68u: goto label_170d68;
        case 0x170d6cu: goto label_170d6c;
        case 0x170d70u: goto label_170d70;
        case 0x170d74u: goto label_170d74;
        case 0x170d78u: goto label_170d78;
        case 0x170d7cu: goto label_170d7c;
        case 0x170d80u: goto label_170d80;
        case 0x170d84u: goto label_170d84;
        case 0x170d88u: goto label_170d88;
        case 0x170d8cu: goto label_170d8c;
        case 0x170d90u: goto label_170d90;
        case 0x170d94u: goto label_170d94;
        case 0x170d98u: goto label_170d98;
        case 0x170d9cu: goto label_170d9c;
        case 0x170da0u: goto label_170da0;
        case 0x170da4u: goto label_170da4;
        case 0x170da8u: goto label_170da8;
        case 0x170dacu: goto label_170dac;
        case 0x170db0u: goto label_170db0;
        case 0x170db4u: goto label_170db4;
        case 0x170db8u: goto label_170db8;
        case 0x170dbcu: goto label_170dbc;
        case 0x170dc0u: goto label_170dc0;
        case 0x170dc4u: goto label_170dc4;
        case 0x170dc8u: goto label_170dc8;
        case 0x170dccu: goto label_170dcc;
        case 0x170dd0u: goto label_170dd0;
        case 0x170dd4u: goto label_170dd4;
        case 0x170dd8u: goto label_170dd8;
        case 0x170ddcu: goto label_170ddc;
        case 0x170de0u: goto label_170de0;
        case 0x170de4u: goto label_170de4;
        case 0x170de8u: goto label_170de8;
        case 0x170decu: goto label_170dec;
        case 0x170df0u: goto label_170df0;
        case 0x170df4u: goto label_170df4;
        case 0x170df8u: goto label_170df8;
        case 0x170dfcu: goto label_170dfc;
        case 0x170e00u: goto label_170e00;
        case 0x170e04u: goto label_170e04;
        case 0x170e08u: goto label_170e08;
        case 0x170e0cu: goto label_170e0c;
        case 0x170e10u: goto label_170e10;
        case 0x170e14u: goto label_170e14;
        case 0x170e18u: goto label_170e18;
        case 0x170e1cu: goto label_170e1c;
        case 0x170e20u: goto label_170e20;
        case 0x170e24u: goto label_170e24;
        case 0x170e28u: goto label_170e28;
        case 0x170e2cu: goto label_170e2c;
        case 0x170e30u: goto label_170e30;
        case 0x170e34u: goto label_170e34;
        case 0x170e38u: goto label_170e38;
        case 0x170e3cu: goto label_170e3c;
        case 0x170e40u: goto label_170e40;
        case 0x170e44u: goto label_170e44;
        case 0x170e48u: goto label_170e48;
        case 0x170e4cu: goto label_170e4c;
        case 0x170e50u: goto label_170e50;
        case 0x170e54u: goto label_170e54;
        case 0x170e58u: goto label_170e58;
        case 0x170e5cu: goto label_170e5c;
        case 0x170e60u: goto label_170e60;
        case 0x170e64u: goto label_170e64;
        case 0x170e68u: goto label_170e68;
        case 0x170e6cu: goto label_170e6c;
        case 0x170e70u: goto label_170e70;
        case 0x170e74u: goto label_170e74;
        case 0x170e78u: goto label_170e78;
        case 0x170e7cu: goto label_170e7c;
        case 0x170e80u: goto label_170e80;
        case 0x170e84u: goto label_170e84;
        case 0x170e88u: goto label_170e88;
        case 0x170e8cu: goto label_170e8c;
        case 0x170e90u: goto label_170e90;
        case 0x170e94u: goto label_170e94;
        case 0x170e98u: goto label_170e98;
        case 0x170e9cu: goto label_170e9c;
        case 0x170ea0u: goto label_170ea0;
        case 0x170ea4u: goto label_170ea4;
        case 0x170ea8u: goto label_170ea8;
        case 0x170eacu: goto label_170eac;
        case 0x170eb0u: goto label_170eb0;
        case 0x170eb4u: goto label_170eb4;
        case 0x170eb8u: goto label_170eb8;
        case 0x170ebcu: goto label_170ebc;
        case 0x170ec0u: goto label_170ec0;
        case 0x170ec4u: goto label_170ec4;
        case 0x170ec8u: goto label_170ec8;
        case 0x170eccu: goto label_170ecc;
        case 0x170ed0u: goto label_170ed0;
        case 0x170ed4u: goto label_170ed4;
        case 0x170ed8u: goto label_170ed8;
        case 0x170edcu: goto label_170edc;
        case 0x170ee0u: goto label_170ee0;
        case 0x170ee4u: goto label_170ee4;
        case 0x170ee8u: goto label_170ee8;
        case 0x170eecu: goto label_170eec;
        case 0x170ef0u: goto label_170ef0;
        case 0x170ef4u: goto label_170ef4;
        case 0x170ef8u: goto label_170ef8;
        case 0x170efcu: goto label_170efc;
        case 0x170f00u: goto label_170f00;
        case 0x170f04u: goto label_170f04;
        case 0x170f08u: goto label_170f08;
        case 0x170f0cu: goto label_170f0c;
        case 0x170f10u: goto label_170f10;
        case 0x170f14u: goto label_170f14;
        case 0x170f18u: goto label_170f18;
        case 0x170f1cu: goto label_170f1c;
        case 0x170f20u: goto label_170f20;
        case 0x170f24u: goto label_170f24;
        case 0x170f28u: goto label_170f28;
        case 0x170f2cu: goto label_170f2c;
        case 0x170f30u: goto label_170f30;
        case 0x170f34u: goto label_170f34;
        case 0x170f38u: goto label_170f38;
        case 0x170f3cu: goto label_170f3c;
        case 0x170f40u: goto label_170f40;
        case 0x170f44u: goto label_170f44;
        case 0x170f48u: goto label_170f48;
        case 0x170f4cu: goto label_170f4c;
        case 0x170f50u: goto label_170f50;
        case 0x170f54u: goto label_170f54;
        case 0x170f58u: goto label_170f58;
        case 0x170f5cu: goto label_170f5c;
        case 0x170f60u: goto label_170f60;
        case 0x170f64u: goto label_170f64;
        case 0x170f68u: goto label_170f68;
        case 0x170f6cu: goto label_170f6c;
        case 0x170f70u: goto label_170f70;
        case 0x170f74u: goto label_170f74;
        case 0x170f78u: goto label_170f78;
        case 0x170f7cu: goto label_170f7c;
        case 0x170f80u: goto label_170f80;
        case 0x170f84u: goto label_170f84;
        case 0x170f88u: goto label_170f88;
        case 0x170f8cu: goto label_170f8c;
        case 0x170f90u: goto label_170f90;
        case 0x170f94u: goto label_170f94;
        case 0x170f98u: goto label_170f98;
        case 0x170f9cu: goto label_170f9c;
        case 0x170fa0u: goto label_170fa0;
        case 0x170fa4u: goto label_170fa4;
        case 0x170fa8u: goto label_170fa8;
        case 0x170facu: goto label_170fac;
        case 0x170fb0u: goto label_170fb0;
        case 0x170fb4u: goto label_170fb4;
        case 0x170fb8u: goto label_170fb8;
        case 0x170fbcu: goto label_170fbc;
        case 0x170fc0u: goto label_170fc0;
        case 0x170fc4u: goto label_170fc4;
        case 0x170fc8u: goto label_170fc8;
        case 0x170fccu: goto label_170fcc;
        case 0x170fd0u: goto label_170fd0;
        case 0x170fd4u: goto label_170fd4;
        case 0x170fd8u: goto label_170fd8;
        case 0x170fdcu: goto label_170fdc;
        case 0x170fe0u: goto label_170fe0;
        case 0x170fe4u: goto label_170fe4;
        case 0x170fe8u: goto label_170fe8;
        case 0x170fecu: goto label_170fec;
        case 0x170ff0u: goto label_170ff0;
        case 0x170ff4u: goto label_170ff4;
        case 0x170ff8u: goto label_170ff8;
        case 0x170ffcu: goto label_170ffc;
        case 0x171000u: goto label_171000;
        case 0x171004u: goto label_171004;
        case 0x171008u: goto label_171008;
        case 0x17100cu: goto label_17100c;
        case 0x171010u: goto label_171010;
        case 0x171014u: goto label_171014;
        case 0x171018u: goto label_171018;
        case 0x17101cu: goto label_17101c;
        case 0x171020u: goto label_171020;
        case 0x171024u: goto label_171024;
        case 0x171028u: goto label_171028;
        case 0x17102cu: goto label_17102c;
        case 0x171030u: goto label_171030;
        case 0x171034u: goto label_171034;
        case 0x171038u: goto label_171038;
        case 0x17103cu: goto label_17103c;
        case 0x171040u: goto label_171040;
        case 0x171044u: goto label_171044;
        case 0x171048u: goto label_171048;
        case 0x17104cu: goto label_17104c;
        case 0x171050u: goto label_171050;
        case 0x171054u: goto label_171054;
        case 0x171058u: goto label_171058;
        case 0x17105cu: goto label_17105c;
        case 0x171060u: goto label_171060;
        case 0x171064u: goto label_171064;
        case 0x171068u: goto label_171068;
        case 0x17106cu: goto label_17106c;
        case 0x171070u: goto label_171070;
        case 0x171074u: goto label_171074;
        case 0x171078u: goto label_171078;
        case 0x17107cu: goto label_17107c;
        case 0x171080u: goto label_171080;
        case 0x171084u: goto label_171084;
        case 0x171088u: goto label_171088;
        case 0x17108cu: goto label_17108c;
        case 0x171090u: goto label_171090;
        case 0x171094u: goto label_171094;
        case 0x171098u: goto label_171098;
        case 0x17109cu: goto label_17109c;
        case 0x1710a0u: goto label_1710a0;
        case 0x1710a4u: goto label_1710a4;
        case 0x1710a8u: goto label_1710a8;
        case 0x1710acu: goto label_1710ac;
        case 0x1710b0u: goto label_1710b0;
        case 0x1710b4u: goto label_1710b4;
        case 0x1710b8u: goto label_1710b8;
        case 0x1710bcu: goto label_1710bc;
        case 0x1710c0u: goto label_1710c0;
        case 0x1710c4u: goto label_1710c4;
        case 0x1710c8u: goto label_1710c8;
        case 0x1710ccu: goto label_1710cc;
        case 0x1710d0u: goto label_1710d0;
        case 0x1710d4u: goto label_1710d4;
        case 0x1710d8u: goto label_1710d8;
        case 0x1710dcu: goto label_1710dc;
        case 0x1710e0u: goto label_1710e0;
        case 0x1710e4u: goto label_1710e4;
        case 0x1710e8u: goto label_1710e8;
        case 0x1710ecu: goto label_1710ec;
        case 0x1710f0u: goto label_1710f0;
        case 0x1710f4u: goto label_1710f4;
        case 0x1710f8u: goto label_1710f8;
        case 0x1710fcu: goto label_1710fc;
        case 0x171100u: goto label_171100;
        case 0x171104u: goto label_171104;
        case 0x171108u: goto label_171108;
        case 0x17110cu: goto label_17110c;
        case 0x171110u: goto label_171110;
        case 0x171114u: goto label_171114;
        case 0x171118u: goto label_171118;
        case 0x17111cu: goto label_17111c;
        case 0x171120u: goto label_171120;
        case 0x171124u: goto label_171124;
        case 0x171128u: goto label_171128;
        case 0x17112cu: goto label_17112c;
        case 0x171130u: goto label_171130;
        case 0x171134u: goto label_171134;
        case 0x171138u: goto label_171138;
        case 0x17113cu: goto label_17113c;
        case 0x171140u: goto label_171140;
        case 0x171144u: goto label_171144;
        case 0x171148u: goto label_171148;
        case 0x17114cu: goto label_17114c;
        case 0x171150u: goto label_171150;
        case 0x171154u: goto label_171154;
        case 0x171158u: goto label_171158;
        case 0x17115cu: goto label_17115c;
        case 0x171160u: goto label_171160;
        case 0x171164u: goto label_171164;
        case 0x171168u: goto label_171168;
        case 0x17116cu: goto label_17116c;
        case 0x171170u: goto label_171170;
        case 0x171174u: goto label_171174;
        case 0x171178u: goto label_171178;
        case 0x17117cu: goto label_17117c;
        case 0x171180u: goto label_171180;
        case 0x171184u: goto label_171184;
        case 0x171188u: goto label_171188;
        case 0x17118cu: goto label_17118c;
        case 0x171190u: goto label_171190;
        case 0x171194u: goto label_171194;
        case 0x171198u: goto label_171198;
        case 0x17119cu: goto label_17119c;
        case 0x1711a0u: goto label_1711a0;
        case 0x1711a4u: goto label_1711a4;
        case 0x1711a8u: goto label_1711a8;
        case 0x1711acu: goto label_1711ac;
        case 0x1711b0u: goto label_1711b0;
        case 0x1711b4u: goto label_1711b4;
        case 0x1711b8u: goto label_1711b8;
        case 0x1711bcu: goto label_1711bc;
        case 0x1711c0u: goto label_1711c0;
        case 0x1711c4u: goto label_1711c4;
        case 0x1711c8u: goto label_1711c8;
        case 0x1711ccu: goto label_1711cc;
        case 0x1711d0u: goto label_1711d0;
        case 0x1711d4u: goto label_1711d4;
        case 0x1711d8u: goto label_1711d8;
        case 0x1711dcu: goto label_1711dc;
        case 0x1711e0u: goto label_1711e0;
        case 0x1711e4u: goto label_1711e4;
        case 0x1711e8u: goto label_1711e8;
        case 0x1711ecu: goto label_1711ec;
        case 0x1711f0u: goto label_1711f0;
        case 0x1711f4u: goto label_1711f4;
        case 0x1711f8u: goto label_1711f8;
        case 0x1711fcu: goto label_1711fc;
        case 0x171200u: goto label_171200;
        case 0x171204u: goto label_171204;
        case 0x171208u: goto label_171208;
        case 0x17120cu: goto label_17120c;
        case 0x171210u: goto label_171210;
        case 0x171214u: goto label_171214;
        case 0x171218u: goto label_171218;
        case 0x17121cu: goto label_17121c;
        case 0x171220u: goto label_171220;
        case 0x171224u: goto label_171224;
        case 0x171228u: goto label_171228;
        case 0x17122cu: goto label_17122c;
        case 0x171230u: goto label_171230;
        case 0x171234u: goto label_171234;
        case 0x171238u: goto label_171238;
        case 0x17123cu: goto label_17123c;
        case 0x171240u: goto label_171240;
        case 0x171244u: goto label_171244;
        case 0x171248u: goto label_171248;
        case 0x17124cu: goto label_17124c;
        case 0x171250u: goto label_171250;
        case 0x171254u: goto label_171254;
        case 0x171258u: goto label_171258;
        case 0x17125cu: goto label_17125c;
        case 0x171260u: goto label_171260;
        case 0x171264u: goto label_171264;
        case 0x171268u: goto label_171268;
        case 0x17126cu: goto label_17126c;
        case 0x171270u: goto label_171270;
        case 0x171274u: goto label_171274;
        case 0x171278u: goto label_171278;
        case 0x17127cu: goto label_17127c;
        case 0x171280u: goto label_171280;
        case 0x171284u: goto label_171284;
        case 0x171288u: goto label_171288;
        case 0x17128cu: goto label_17128c;
        case 0x171290u: goto label_171290;
        case 0x171294u: goto label_171294;
        case 0x171298u: goto label_171298;
        case 0x17129cu: goto label_17129c;
        case 0x1712a0u: goto label_1712a0;
        case 0x1712a4u: goto label_1712a4;
        case 0x1712a8u: goto label_1712a8;
        case 0x1712acu: goto label_1712ac;
        case 0x1712b0u: goto label_1712b0;
        case 0x1712b4u: goto label_1712b4;
        case 0x1712b8u: goto label_1712b8;
        case 0x1712bcu: goto label_1712bc;
        default: break;
    }

    ctx->pc = 0x170c88u;

label_170c88:
    // 0x170c88: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x170c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_170c8c:
    // 0x170c8c: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x170c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
label_170c90:
    // 0x170c90: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x170c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
label_170c94:
    // 0x170c94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x170c94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_170c98:
    // 0x170c98: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x170c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
label_170c9c:
    // 0x170c9c: 0x7fb30160  sq          $s3, 0x160($sp)
    ctx->pc = 0x170c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 19));
label_170ca0:
    // 0x170ca0: 0x7fb40150  sq          $s4, 0x150($sp)
    ctx->pc = 0x170ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 20));
label_170ca4:
    // 0x170ca4: 0x7fb50140  sq          $s5, 0x140($sp)
    ctx->pc = 0x170ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 21));
label_170ca8:
    // 0x170ca8: 0x7fb60130  sq          $s6, 0x130($sp)
    ctx->pc = 0x170ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 22));
label_170cac:
    // 0x170cac: 0x7fb70120  sq          $s7, 0x120($sp)
    ctx->pc = 0x170cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 23));
label_170cb0:
    // 0x170cb0: 0x7fbe0110  sq          $fp, 0x110($sp)
    ctx->pc = 0x170cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 30));
label_170cb4:
    // 0x170cb4: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x170cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_170cb8:
    // 0x170cb8: 0xe7b501a8  swc1        $f21, 0x1A8($sp)
    ctx->pc = 0x170cb8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_170cbc:
    // 0x170cbc: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x170cbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_170cc0:
    // 0x170cc0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x170cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_170cc4:
    // 0x170cc4: 0x10400170  beqz        $v0, . + 4 + (0x170 << 2)
label_170cc8:
    if (ctx->pc == 0x170CC8u) {
        ctx->pc = 0x170CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CC4u;
        // 0x170cc8: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170CCCu;
        goto label_170ccc;
    }
    ctx->pc = 0x170CC4u;
    {
        const bool branch_taken_0x170cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CC4u;
        // 0x170cc8: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170cc4) {
            ctx->pc = 0x171288u;
            goto label_171288;
        }
    }
    ctx->pc = 0x170CCCu;
label_170ccc:
    // 0x170ccc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x170cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_170cd0:
    // 0x170cd0: 0x1440016e  bnez        $v0, . + 4 + (0x16E << 2)
label_170cd4:
    if (ctx->pc == 0x170CD4u) {
        ctx->pc = 0x170CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CD0u;
        // 0x170cd4: 0x7bb10180  lq          $s1, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170CD8u;
        goto label_170cd8;
    }
    ctx->pc = 0x170CD0u;
    {
        const bool branch_taken_0x170cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CD0u;
        // 0x170cd4: 0x7bb10180  lq          $s1, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170cd0) {
            ctx->pc = 0x17128Cu;
            goto label_17128c;
        }
    }
    ctx->pc = 0x170CD8u;
label_170cd8:
    // 0x170cd8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x170cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_170cdc:
    // 0x170cdc: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x170cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_170ce0:
    // 0x170ce0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x170ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_170ce4:
    // 0x170ce4: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x170ce4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_170ce8:
    // 0x170ce8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x170ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_170cec:
    // 0x170cec: 0x40f809  jalr        $v0
label_170cf0:
    if (ctx->pc == 0x170CF0u) {
        ctx->pc = 0x170CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CECu;
        // 0x170cf0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170CF4u;
        goto label_170cf4;
    }
    ctx->pc = 0x170CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x170CF4u);
        ctx->pc = 0x170CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CECu;
        // 0x170cf0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170CECu, 0x170CF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x170CF4u;
label_170cf4:
    // 0x170cf4: 0x14400164  bnez        $v0, . + 4 + (0x164 << 2)
label_170cf8:
    if (ctx->pc == 0x170CF8u) {
        ctx->pc = 0x170CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CF4u;
        // 0x170cf8: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170CFCu;
        goto label_170cfc;
    }
    ctx->pc = 0x170CF4u;
    {
        const bool branch_taken_0x170cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CF4u;
        // 0x170cf8: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170cf4) {
            ctx->pc = 0x171288u;
            goto label_171288;
        }
    }
    ctx->pc = 0x170CFCu;
label_170cfc:
    // 0x170cfc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x170cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_170d00:
    // 0x170d00: 0x8e55001c  lw          $s5, 0x1C($s2)
    ctx->pc = 0x170d00u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_170d04:
    // 0x170d04: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x170d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_170d08:
    // 0x170d08: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x170d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_170d0c:
    // 0x170d0c: 0x24541740  addiu       $s4, $v0, 0x1740
    ctx->pc = 0x170d0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
label_170d10:
    // 0x170d10: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x170d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
label_170d14:
    // 0x170d14: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x170d14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_170d18:
    // 0x170d18: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x170d18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_170d1c:
    // 0x170d1c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x170d1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170d20:
    // 0x170d20: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x170d20u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_170d24:
    // 0x170d24: 0x2417003c  addiu       $s7, $zero, 0x3C
    ctx->pc = 0x170d24u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_170d28:
    // 0x170d28: 0x24760001  addiu       $s6, $v1, 0x1
    ctx->pc = 0x170d28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_170d2c:
    // 0x170d2c: 0x0  nop
    ctx->pc = 0x170d2cu;
    // NOP
label_170d30:
    // 0x170d30: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x170d30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170d34:
    // 0x170d34: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x170d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_170d38:
    // 0x170d38: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x170d38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170d3c:
    // 0x170d3c: 0x9202006d  lbu         $v0, 0x6D($s0)
    ctx->pc = 0x170d3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_170d40:
    // 0x170d40: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x170d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_170d44:
    // 0x170d44: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_170d48:
    if (ctx->pc == 0x170D48u) {
        ctx->pc = 0x170D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D44u;
        // 0x170d48: 0x26150070  addiu       $s5, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170D4Cu;
        goto label_170d4c;
    }
    ctx->pc = 0x170D44u;
    {
        const bool branch_taken_0x170d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D44u;
        // 0x170d48: 0x26150070  addiu       $s5, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170d44) {
            ctx->pc = 0x170D94u;
            goto label_170d94;
        }
    }
    ctx->pc = 0x170D4Cu;
label_170d4c:
    // 0x170d4c: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x170d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_170d50:
    // 0x170d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170d54:
    // 0x170d54: 0x8e470014  lw          $a3, 0x14($s2)
    ctx->pc = 0x170d54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_170d58:
    // 0x170d58: 0x8e480018  lw          $t0, 0x18($s2)
    ctx->pc = 0x170d58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_170d5c:
    // 0x170d5c: 0xc05bf64  jal         func_16FD90
label_170d60:
    if (ctx->pc == 0x170D60u) {
        ctx->pc = 0x170D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D5Cu;
        // 0x170d60: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170D64u;
        goto label_170d64;
    }
    ctx->pc = 0x170D5Cu;
    SET_GPR_U32(ctx, 31, 0x170D64u);
    ctx->pc = 0x170D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170D5Cu;
    // 0x170d60: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FD90u, 0x170D5Cu, 0x170D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170D64u;
label_170d64:
    // 0x170d64: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x170d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_170d68:
    // 0x170d68: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x170d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_170d6c:
    // 0x170d6c: 0xc0cd4ee  jal         func_3353B8
label_170d70:
    if (ctx->pc == 0x170D70u) {
        ctx->pc = 0x170D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D6Cu;
        // 0x170d70: 0x2464b8a8  addiu       $a0, $v1, -0x4758 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170D74u;
        goto label_170d74;
    }
    ctx->pc = 0x170D6Cu;
    SET_GPR_U32(ctx, 31, 0x170D74u);
    ctx->pc = 0x170D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170D6Cu;
    // 0x170d70: 0x2464b8a8  addiu       $a0, $v1, -0x4758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x170D6Cu, 0x170D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170D74u;
label_170d74:
    // 0x170d74: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x170d74u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_170d78:
    // 0x170d78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x170d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_170d7c:
    // 0x170d7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170d80:
    // 0x170d80: 0xc05c180  jal         func_170600
label_170d84:
    if (ctx->pc == 0x170D84u) {
        ctx->pc = 0x170D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D80u;
        // 0x170d84: 0x3a260001  xori        $a2, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x170D88u;
        goto label_170d88;
    }
    ctx->pc = 0x170D80u;
    SET_GPR_U32(ctx, 31, 0x170D88u);
    ctx->pc = 0x170D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170D80u;
    // 0x170d84: 0x3a260001  xori        $a2, $s1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x170600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170600u, 0x170D80u, 0x170D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170D88u;
label_170d88:
    // 0x170d88: 0x9202006d  lbu         $v0, 0x6D($s0)
    ctx->pc = 0x170d88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_170d8c:
    // 0x170d8c: 0x304200ef  andi        $v0, $v0, 0xEF
    ctx->pc = 0x170d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)239);
label_170d90:
    // 0x170d90: 0xa202006d  sb          $v0, 0x6D($s0)
    ctx->pc = 0x170d90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 109), (uint8_t)GPR_U32(ctx, 2));
label_170d94:
    // 0x170d94: 0x9202006e  lbu         $v0, 0x6E($s0)
    ctx->pc = 0x170d94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 110)));
label_170d98:
    // 0x170d98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_170d9c:
    if (ctx->pc == 0x170D9Cu) {
        ctx->pc = 0x170D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D98u;
        // 0x170d9c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170DA0u;
        goto label_170da0;
    }
    ctx->pc = 0x170D98u;
    {
        const bool branch_taken_0x170d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D98u;
        // 0x170d9c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170d98) {
            ctx->pc = 0x170DA8u;
            goto label_170da8;
        }
    }
    ctx->pc = 0x170DA0u;
label_170da0:
    // 0x170da0: 0x1000003d  b           . + 4 + (0x3D << 2)
label_170da4:
    if (ctx->pc == 0x170DA4u) {
        ctx->pc = 0x170DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170DA0u;
        // 0x170da4: 0xa202006e  sb          $v0, 0x6E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 110), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170DA8u;
        goto label_170da8;
    }
    ctx->pc = 0x170DA0u;
    {
        const bool branch_taken_0x170da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170DA0u;
        // 0x170da4: 0xa202006e  sb          $v0, 0x6E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 110), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170da0) {
            ctx->pc = 0x170E98u;
            goto label_170e98;
        }
    }
    ctx->pc = 0x170DA8u;
label_170da8:
    // 0x170da8: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x170da8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_170dac:
    // 0x170dac: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x170dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_170db0:
    // 0x170db0: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x170db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_170db4:
    // 0x170db4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x170db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_170db8:
    // 0x170db8: 0xc5401740  lwc1        $f0, 0x1740($t2)
    ctx->pc = 0x170db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 5952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_170dbc:
    // 0x170dbc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x170dbcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_170dc0:
    // 0x170dc0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x170dc0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_170dc4:
    // 0x170dc4: 0xc683000c  lwc1        $f3, 0xC($s4)
    ctx->pc = 0x170dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_170dc8:
    // 0x170dc8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x170dc8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_170dcc:
    // 0x170dcc: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x170dccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_170dd0:
    // 0x170dd0: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x170dd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_170dd4:
    // 0x170dd4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x170dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_170dd8:
    // 0x170dd8: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x170dd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_170ddc:
    // 0x170ddc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x170ddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170de0:
    // 0x170de0: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x170de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_170de4:
    // 0x170de4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x170de4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170de8:
    // 0x170de8: 0xe7a300dc  swc1        $f3, 0xDC($sp)
    ctx->pc = 0x170de8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_170dec:
    // 0x170dec: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x170decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_170df0:
    // 0x170df0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x170df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170df4:
    // 0x170df4: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x170df4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_170df8:
    // 0x170df8: 0x8fc447c4  lw          $a0, 0x47C4($fp)
    ctx->pc = 0x170df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18372)));
label_170dfc:
    // 0x170dfc: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x170dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_170e00:
    // 0x170e00: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x170e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_170e04:
    // 0x170e04: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x170e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_170e08:
    // 0x170e08: 0xc1036e2  jal         func_40DB88
label_170e0c:
    if (ctx->pc == 0x170E0Cu) {
        ctx->pc = 0x170E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E08u;
        // 0x170e0c: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x170E10u;
        goto label_170e10;
    }
    ctx->pc = 0x170E08u;
    SET_GPR_U32(ctx, 31, 0x170E10u);
    ctx->pc = 0x170E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170E08u;
    // 0x170e0c: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x170E08u, 0x170E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170E10u;
label_170e10:
    // 0x170e10: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x170e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_170e14:
    // 0x170e14: 0xa202006e  sb          $v0, 0x6E($s0)
    ctx->pc = 0x170e14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 110), (uint8_t)GPR_U32(ctx, 2));
label_170e18:
    // 0x170e18: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x170e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_170e1c:
    // 0x170e1c: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
label_170e20:
    if (ctx->pc == 0x170E20u) {
        ctx->pc = 0x170E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E1Cu;
        // 0x170e20: 0x9202006d  lbu         $v0, 0x6D($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170E24u;
        goto label_170e24;
    }
    ctx->pc = 0x170E1Cu;
    {
        const bool branch_taken_0x170e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x170E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E1Cu;
        // 0x170e20: 0x9202006d  lbu         $v0, 0x6D($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e1c) {
            ctx->pc = 0x170EE0u;
            goto label_170ee0;
        }
    }
    ctx->pc = 0x170E24u;
label_170e24:
    // 0x170e24: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x170e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_170e28:
    // 0x170e28: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_170e2c:
    if (ctx->pc == 0x170E2Cu) {
        ctx->pc = 0x170E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E28u;
        // 0x170e2c: 0x9202006d  lbu         $v0, 0x6D($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170E30u;
        goto label_170e30;
    }
    ctx->pc = 0x170E28u;
    {
        const bool branch_taken_0x170e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170e28) {
            ctx->pc = 0x170E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170E28u;
            // 0x170e2c: 0x9202006d  lbu         $v0, 0x6D($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170E9Cu;
            goto label_170e9c;
        }
    }
    ctx->pc = 0x170E30u;
label_170e30:
    // 0x170e30: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
label_170e34:
    if (ctx->pc == 0x170E34u) {
        ctx->pc = 0x170E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E30u;
        // 0x170e34: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x170E38u;
        goto label_170e38;
    }
    ctx->pc = 0x170E30u;
    {
        const bool branch_taken_0x170e30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x170E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E30u;
        // 0x170e34: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e30) {
            ctx->pc = 0x170E98u;
            goto label_170e98;
        }
    }
    ctx->pc = 0x170E38u;
label_170e38:
    // 0x170e38: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x170e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_170e3c:
    // 0x170e3c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x170e3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_170e40:
    // 0x170e40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x170e40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_170e44:
    // 0x170e44: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x170e44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_170e48:
    // 0x170e48: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x170e48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_170e4c:
    // 0x170e4c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x170e4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_170e50:
    // 0x170e50: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x170e50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_170e54:
    // 0x170e54: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x170e54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_170e58:
    // 0x170e58: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x170e58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_170e5c:
    // 0x170e5c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x170e5cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_170e60:
    // 0x170e60: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x170e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
label_170e64:
    // 0x170e64: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x170e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_170e68:
    // 0x170e68: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x170e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
label_170e6c:
    // 0x170e6c: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x170e6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_170e70:
    // 0x170e70: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x170e70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_170e74:
    // 0x170e74: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x170e74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_170e78:
    // 0x170e78: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x170e78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_170e7c:
    // 0x170e7c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x170e7cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_170e80:
    // 0x170e80: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x170e80u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_170e84:
    // 0x170e84: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x170e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_170e88:
    // 0x170e88: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x170e88u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_170e8c:
    // 0x170e8c: 0x9203006d  lbu         $v1, 0x6D($s0)
    ctx->pc = 0x170e8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_170e90:
    // 0x170e90: 0x34630009  ori         $v1, $v1, 0x9
    ctx->pc = 0x170e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9);
label_170e94:
    // 0x170e94: 0xa203006d  sb          $v1, 0x6D($s0)
    ctx->pc = 0x170e94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 109), (uint8_t)GPR_U32(ctx, 3));
label_170e98:
    // 0x170e98: 0x9202006d  lbu         $v0, 0x6D($s0)
    ctx->pc = 0x170e98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_170e9c:
    // 0x170e9c: 0x304200fb  andi        $v0, $v0, 0xFB
    ctx->pc = 0x170e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)251);
label_170ea0:
    // 0x170ea0: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x170ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_170ea4:
    // 0x170ea4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_170ea8:
    if (ctx->pc == 0x170EA8u) {
        ctx->pc = 0x170EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170EA4u;
        // 0x170ea8: 0xa202006d  sb          $v0, 0x6D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 109), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170EACu;
        goto label_170eac;
    }
    ctx->pc = 0x170EA4u;
    {
        const bool branch_taken_0x170ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x170EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170EA4u;
        // 0x170ea8: 0xa202006d  sb          $v0, 0x6D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 109), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ea4) {
            ctx->pc = 0x170EC4u;
            goto label_170ec4;
        }
    }
    ctx->pc = 0x170EACu;
label_170eac:
    // 0x170eac: 0x96020066  lhu         $v0, 0x66($s0)
    ctx->pc = 0x170eacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
label_170eb0:
    // 0x170eb0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x170eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_170eb4:
    // 0x170eb4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x170eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_170eb8:
    // 0x170eb8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_170ebc:
    if (ctx->pc == 0x170EBCu) {
        ctx->pc = 0x170EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170EB8u;
        // 0x170ebc: 0xa6020066  sh          $v0, 0x66($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170EC0u;
        goto label_170ec0;
    }
    ctx->pc = 0x170EB8u;
    {
        const bool branch_taken_0x170eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x170EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170EB8u;
        // 0x170ebc: 0xa6020066  sh          $v0, 0x66($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170eb8) {
            ctx->pc = 0x170EC4u;
            goto label_170ec4;
        }
    }
    ctx->pc = 0x170EC0u;
label_170ec0:
    // 0x170ec0: 0xa6170064  sh          $s7, 0x64($s0)
    ctx->pc = 0x170ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 23));
label_170ec4:
    // 0x170ec4: 0x96020064  lhu         $v0, 0x64($s0)
    ctx->pc = 0x170ec4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
label_170ec8:
    // 0x170ec8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_170ecc:
    if (ctx->pc == 0x170ECCu) {
        ctx->pc = 0x170ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170EC8u;
        // 0x170ecc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170ED0u;
        goto label_170ed0;
    }
    ctx->pc = 0x170EC8u;
    {
        const bool branch_taken_0x170ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170EC8u;
        // 0x170ecc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ec8) {
            ctx->pc = 0x170EECu;
            goto label_170eec;
        }
    }
    ctx->pc = 0x170ED0u;
label_170ed0:
    // 0x170ed0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x170ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_170ed4:
    // 0x170ed4: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
label_170ed8:
    if (ctx->pc == 0x170ED8u) {
        ctx->pc = 0x170ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170ED4u;
        // 0x170ed8: 0xa6020064  sh          $v0, 0x64($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170EDCu;
        goto label_170edc;
    }
    ctx->pc = 0x170ED4u;
    {
        const bool branch_taken_0x170ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x170ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170ED4u;
        // 0x170ed8: 0xa6020064  sh          $v0, 0x64($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ed4) {
            ctx->pc = 0x170F78u;
            goto label_170f78;
        }
    }
    ctx->pc = 0x170EDCu;
label_170edc:
    // 0x170edc: 0x9202006d  lbu         $v0, 0x6D($s0)
    ctx->pc = 0x170edcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_170ee0:
    // 0x170ee0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x170ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_170ee4:
    // 0x170ee4: 0x100000df  b           . + 4 + (0xDF << 2)
label_170ee8:
    if (ctx->pc == 0x170EE8u) {
        ctx->pc = 0x170EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170EE4u;
        // 0x170ee8: 0xa202006d  sb          $v0, 0x6D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 109), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170EECu;
        goto label_170eec;
    }
    ctx->pc = 0x170EE4u;
    {
        const bool branch_taken_0x170ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170EE4u;
        // 0x170ee8: 0xa202006d  sb          $v0, 0x6D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 109), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ee4) {
            ctx->pc = 0x171264u;
            goto label_171264;
        }
    }
    ctx->pc = 0x170EECu;
label_170eec:
    // 0x170eec: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x170eecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_170ef0:
    // 0x170ef0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x170ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170ef4:
    // 0x170ef4: 0xc047e6c  jal         func_11F9B0
label_170ef8:
    if (ctx->pc == 0x170EF8u) {
        ctx->pc = 0x170EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170EF4u;
        // 0x170ef8: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170EFCu;
        goto label_170efc;
    }
    ctx->pc = 0x170EF4u;
    SET_GPR_U32(ctx, 31, 0x170EFCu);
    ctx->pc = 0x170EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170EF4u;
    // 0x170ef8: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x170EF4u, 0x170EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170EFCu;
label_170efc:
    // 0x170efc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x170efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_170f00:
    // 0x170f00: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x170f00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_170f04:
    // 0x170f04: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x170f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_170f08:
    // 0x170f08: 0xa0f809  jalr        $a1
label_170f0c:
    if (ctx->pc == 0x170F0Cu) {
        ctx->pc = 0x170F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F08u;
        // 0x170f0c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170F10u;
        goto label_170f10;
    }
    ctx->pc = 0x170F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x170F10u);
        ctx->pc = 0x170F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F08u;
        // 0x170f0c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170F08u, 0x170F10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x170F10u;
label_170f10:
    // 0x170f10: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x170f10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_170f14:
    // 0x170f14: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x170f14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_170f18:
    // 0x170f18: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x170f18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_170f1c:
    // 0x170f1c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x170f1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_170f20:
    // 0x170f20: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x170f20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_170f24:
    // 0x170f24: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x170f24u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_170f28:
    // 0x170f28: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x170f28u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_170f2c:
    // 0x170f2c: 0x3c0141e0  lui         $at, 0x41E0
    ctx->pc = 0x170f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16864 << 16));
label_170f30:
    // 0x170f30: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x170f30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_170f34:
    // 0x170f34: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x170f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_170f38:
    // 0x170f38: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x170f38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_170f3c:
    // 0x170f3c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x170f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_170f40:
    // 0x170f40: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x170f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_170f44:
    // 0x170f44: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x170f44u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_170f48:
    // 0x170f48: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x170f48u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_170f4c:
    // 0x170f4c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x170f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_170f50:
    // 0x170f50: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x170f50u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
label_170f54:
    // 0x170f54: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x170f54u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_170f58:
    // 0x170f58: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x170f58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_170f5c:
    // 0x170f5c: 0x0  nop
    ctx->pc = 0x170f5cu;
    // NOP
label_170f60:
    // 0x170f60: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_170f64:
    if (ctx->pc == 0x170F64u) {
        ctx->pc = 0x170F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F60u;
        // 0x170f64: 0x92020068  lbu         $v0, 0x68($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170F68u;
        goto label_170f68;
    }
    ctx->pc = 0x170F60u;
    {
        const bool branch_taken_0x170f60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x170f60) {
            ctx->pc = 0x170F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170F60u;
            // 0x170f64: 0x92020068  lbu         $v0, 0x68($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170F7Cu;
            goto label_170f7c;
        }
    }
    ctx->pc = 0x170F68u;
label_170f68:
    // 0x170f68: 0x9202006d  lbu         $v0, 0x6D($s0)
    ctx->pc = 0x170f68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_170f6c:
    // 0x170f6c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x170f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_170f70:
    // 0x170f70: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_170f74:
    if (ctx->pc == 0x170F74u) {
        ctx->pc = 0x170F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F70u;
        // 0x170f74: 0xa6170064  sh          $s7, 0x64($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170F78u;
        goto label_170f78;
    }
    ctx->pc = 0x170F70u;
    {
        const bool branch_taken_0x170f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170f70) {
            ctx->pc = 0x170F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170F70u;
            // 0x170f74: 0xa6170064  sh          $s7, 0x64($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170F78u;
            goto label_170f78;
        }
    }
    ctx->pc = 0x170F78u;
label_170f78:
    // 0x170f78: 0x92020068  lbu         $v0, 0x68($s0)
    ctx->pc = 0x170f78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
label_170f7c:
    // 0x170f7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x170f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_170f80:
    // 0x170f80: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x170f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_170f84:
    // 0x170f84: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_170f88:
    if (ctx->pc == 0x170F88u) {
        ctx->pc = 0x170F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F84u;
        // 0x170f88: 0xa2020068  sb          $v0, 0x68($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170F8Cu;
        goto label_170f8c;
    }
    ctx->pc = 0x170F84u;
    {
        const bool branch_taken_0x170f84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x170F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F84u;
        // 0x170f88: 0xa2020068  sb          $v0, 0x68($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170f84) {
            ctx->pc = 0x170FB4u;
            goto label_170fb4;
        }
    }
    ctx->pc = 0x170F8Cu;
label_170f8c:
    // 0x170f8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x170f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_170f90:
    // 0x170f90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170f94:
    // 0x170f94: 0xc05c180  jal         func_170600
label_170f98:
    if (ctx->pc == 0x170F98u) {
        ctx->pc = 0x170F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F94u;
        // 0x170f98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170F9Cu;
        goto label_170f9c;
    }
    ctx->pc = 0x170F94u;
    SET_GPR_U32(ctx, 31, 0x170F9Cu);
    ctx->pc = 0x170F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170F94u;
    // 0x170f98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170600u, 0x170F94u, 0x170F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170F9Cu;
label_170f9c:
    // 0x170f9c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x170f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_170fa0:
    // 0x170fa0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x170fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170fa4:
    // 0x170fa4: 0x2464b8a8  addiu       $a0, $v1, -0x4758
    ctx->pc = 0x170fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949032));
label_170fa8:
    // 0x170fa8: 0xc0cd4fc  jal         func_3353F0
label_170fac:
    if (ctx->pc == 0x170FACu) {
        ctx->pc = 0x170FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170FA8u;
        // 0x170fac: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170FB0u;
        goto label_170fb0;
    }
    ctx->pc = 0x170FA8u;
    SET_GPR_U32(ctx, 31, 0x170FB0u);
    ctx->pc = 0x170FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170FA8u;
    // 0x170fac: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x170FA8u, 0x170FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170FB0u;
label_170fb0:
    // 0x170fb0: 0xa2020068  sb          $v0, 0x68($s0)
    ctx->pc = 0x170fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 2));
label_170fb4:
    // 0x170fb4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x170fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_170fb8:
    // 0x170fb8: 0xc0cd940  jal         func_336500
label_170fbc:
    if (ctx->pc == 0x170FBCu) {
        ctx->pc = 0x170FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170FB8u;
        // 0x170fbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170FC0u;
        goto label_170fc0;
    }
    ctx->pc = 0x170FB8u;
    SET_GPR_U32(ctx, 31, 0x170FC0u);
    ctx->pc = 0x170FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170FB8u;
    // 0x170fbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x170FB8u, 0x170FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170FC0u;
label_170fc0:
    // 0x170fc0: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x170fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_170fc4:
    // 0x170fc4: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x170fc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_170fc8:
    // 0x170fc8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x170fc8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_170fcc:
    // 0x170fcc: 0x3c013ea7  lui         $at, 0x3EA7
    ctx->pc = 0x170fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16039 << 16));
label_170fd0:
    // 0x170fd0: 0x342140db  ori         $at, $at, 0x40DB
    ctx->pc = 0x170fd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16603);
label_170fd4:
    // 0x170fd4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x170fd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_170fd8:
    // 0x170fd8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x170fd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_170fdc:
    // 0x170fdc: 0xc6010048  lwc1        $f1, 0x48($s0)
    ctx->pc = 0x170fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_170fe0:
    // 0x170fe0: 0x7a090030  lq          $t1, 0x30($s0)
    ctx->pc = 0x170fe0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_170fe4:
    // 0x170fe4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x170fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_170fe8:
    // 0x170fe8: 0x8fc447c4  lw          $a0, 0x47C4($fp)
    ctx->pc = 0x170fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18372)));
label_170fec:
    // 0x170fec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x170fecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_170ff0:
    // 0x170ff0: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x170ff0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_170ff4:
    // 0x170ff4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x170ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_170ff8:
    // 0x170ff8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x170ff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_170ffc:
    // 0x170ffc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x170ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_171000:
    // 0x171000: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x171000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_171004:
    // 0x171004: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x171004u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171008:
    // 0x171008: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x171008u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17100c:
    // 0x17100c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x17100cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_171010:
    // 0x171010: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x171010u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_171014:
    // 0x171014: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x171014u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_171018:
    // 0x171018: 0xe6010048  swc1        $f1, 0x48($s0)
    ctx->pc = 0x171018u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_17101c:
    // 0x17101c: 0x7fa90000  sq          $t1, 0x0($sp)
    ctx->pc = 0x17101cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 9));
label_171020:
    // 0x171020: 0x7a020040  lq          $v0, 0x40($s0)
    ctx->pc = 0x171020u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 64)));
label_171024:
    // 0x171024: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x171024u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_171028:
    // 0x171028: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x171028u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_17102c:
    // 0x17102c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x17102cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_171030:
    // 0x171030: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x171030u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_171034:
    // 0x171034: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x171034u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_171038:
    // 0x171038: 0x4a0003bf  vwaitq
    ctx->pc = 0x171038u;
    // VWAITQ (Q already resolved in this runtime)
label_17103c:
    // 0x17103c: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x17103cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_171040:
    // 0x171040: 0x482a1800  qmfc2.ni    $t2, $vf3
    ctx->pc = 0x171040u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[3]));
label_171044:
    // 0x171044: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x171044u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171048:
    // 0x171048: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x171048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_17104c:
    // 0x17104c: 0x0  nop
    ctx->pc = 0x17104cu;
    // NOP
label_171050:
    // 0x171050: 0x0  nop
    ctx->pc = 0x171050u;
    // NOP
label_171054:
    // 0x171054: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x171054u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
label_171058:
    // 0x171058: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x171058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_17105c:
    // 0x17105c: 0x46150042  mul.s       $f1, $f0, $f21
    ctx->pc = 0x17105cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_171060:
    // 0x171060: 0x440aa000  mfc1        $t2, $f20
    ctx->pc = 0x171060u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
label_171064:
    // 0x171064: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x171064u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_171068:
    // 0x171068: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x171068u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_17106c:
    // 0x17106c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x17106cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_171070:
    // 0x171070: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x171070u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_171074:
    // 0x171074: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x171074u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_171078:
    // 0x171078: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x171078u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_17107c:
    // 0x17107c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x17107cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_171080:
    // 0x171080: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x171080u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_171084:
    // 0x171084: 0x48aa1000  qmtc2.ni    $t2, $vf2
    ctx->pc = 0x171084u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
label_171088:
    // 0x171088: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x171088u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_17108c:
    // 0x17108c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x17108cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_171090:
    // 0x171090: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x171090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_171094:
    // 0x171094: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x171094u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_171098:
    // 0x171098: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x171098u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_17109c:
    // 0x17109c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x17109cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1710a0:
    // 0x1710a0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1710a0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1710a4:
    // 0x1710a4: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x1710a4u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
label_1710a8:
    // 0x1710a8: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x1710a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_1710ac:
    // 0x1710ac: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1710acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1710b0:
    // 0x1710b0: 0x7fa90000  sq          $t1, 0x0($sp)
    ctx->pc = 0x1710b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 9));
label_1710b4:
    // 0x1710b4: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x1710b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
label_1710b8:
    // 0x1710b8: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x1710b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_1710bc:
    // 0x1710bc: 0xc1036e2  jal         func_40DB88
label_1710c0:
    if (ctx->pc == 0x1710C0u) {
        ctx->pc = 0x1710C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1710BCu;
        // 0x1710c0: 0x7fa900d0  sq          $t1, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1710C4u;
        goto label_1710c4;
    }
    ctx->pc = 0x1710BCu;
    SET_GPR_U32(ctx, 31, 0x1710C4u);
    ctx->pc = 0x1710C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1710BCu;
    // 0x1710c0: 0x7fa900d0  sq          $t1, 0xD0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x1710BCu, 0x1710C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1710C4u;
label_1710c4:
    // 0x1710c4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1710c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1710c8:
    // 0x1710c8: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_1710cc:
    if (ctx->pc == 0x1710CCu) {
        ctx->pc = 0x1710CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1710C8u;
        // 0x1710cc: 0xc7a10044  lwc1        $f1, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1710D0u;
        goto label_1710d0;
    }
    ctx->pc = 0x1710C8u;
    {
        const bool branch_taken_0x1710c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1710CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1710C8u;
        // 0x1710cc: 0xc7a10044  lwc1        $f1, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1710c8) {
            ctx->pc = 0x171174u;
            goto label_171174;
        }
    }
    ctx->pc = 0x1710D0u;
label_1710d0:
    // 0x1710d0: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1710d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_1710d4:
    // 0x1710d4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1710d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1710d8:
    // 0x1710d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1710d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1710dc:
    // 0x1710dc: 0x0  nop
    ctx->pc = 0x1710dcu;
    // NOP
label_1710e0:
    // 0x1710e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1710e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1710e4:
    // 0x1710e4: 0x0  nop
    ctx->pc = 0x1710e4u;
    // NOP
label_1710e8:
    // 0x1710e8: 0x45010023  bc1t        . + 4 + (0x23 << 2)
label_1710ec:
    if (ctx->pc == 0x1710ECu) {
        ctx->pc = 0x1710ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1710E8u;
        // 0x1710ec: 0x9202006d  lbu         $v0, 0x6D($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1710F0u;
        goto label_1710f0;
    }
    ctx->pc = 0x1710E8u;
    {
        const bool branch_taken_0x1710e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1710ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1710E8u;
        // 0x1710ec: 0x9202006d  lbu         $v0, 0x6D($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1710e8) {
            ctx->pc = 0x171178u;
            goto label_171178;
        }
    }
    ctx->pc = 0x1710F0u;
label_1710f0:
    // 0x1710f0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1710f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1710f4:
    // 0x1710f4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1710f8:
    if (ctx->pc == 0x1710F8u) {
        ctx->pc = 0x1710F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1710F4u;
        // 0x1710f8: 0x7ba30030  lq          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1710FCu;
        goto label_1710fc;
    }
    ctx->pc = 0x1710F4u;
    {
        const bool branch_taken_0x1710f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1710F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1710F4u;
        // 0x1710f8: 0x7ba30030  lq          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1710f4) {
            ctx->pc = 0x17110Cu;
            goto label_17110c;
        }
    }
    ctx->pc = 0x1710FCu;
label_1710fc:
    // 0x1710fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1710fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_171100:
    // 0x171100: 0xc05bff6  jal         func_16FFD8
label_171104:
    if (ctx->pc == 0x171104u) {
        ctx->pc = 0x171104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171100u;
        // 0x171104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171108u;
        goto label_171108;
    }
    ctx->pc = 0x171100u;
    SET_GPR_U32(ctx, 31, 0x171108u);
    ctx->pc = 0x171104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171100u;
    // 0x171104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FFD8u, 0x171100u, 0x171108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171108u;
label_171108:
    // 0x171108: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x171108u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17110c:
    // 0x17110c: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x17110cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_171110:
    // 0x171110: 0x7a020040  lq          $v0, 0x40($s0)
    ctx->pc = 0x171110u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 64)));
label_171114:
    // 0x171114: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x171114u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_171118:
    // 0x171118: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x171118u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_17111c:
    // 0x17111c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x17111cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_171120:
    // 0x171120: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x171120u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_171124:
    // 0x171124: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x171124u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_171128:
    // 0x171128: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x171128u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_17112c:
    // 0x17112c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x17112cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_171130:
    // 0x171130: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x171130u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_171134:
    // 0x171134: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x171134u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_171138:
    // 0x171138: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x171138u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_17113c:
    // 0x17113c: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x17113cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_171140:
    // 0x171140: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x171140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_171144:
    // 0x171144: 0x7a020040  lq          $v0, 0x40($s0)
    ctx->pc = 0x171144u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 64)));
label_171148:
    // 0x171148: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x171148u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_17114c:
    // 0x17114c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x17114cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_171150:
    // 0x171150: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x171150u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_171154:
    // 0x171154: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x171154u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_171158:
    // 0x171158: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x171158u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_17115c:
    // 0x17115c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x17115cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_171160:
    // 0x171160: 0x7e020040  sq          $v0, 0x40($s0)
    ctx->pc = 0x171160u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
label_171164:
    // 0x171164: 0x9203006d  lbu         $v1, 0x6D($s0)
    ctx->pc = 0x171164u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_171168:
    // 0x171168: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x171168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_17116c:
    // 0x17116c: 0x10000004  b           . + 4 + (0x4 << 2)
label_171170:
    if (ctx->pc == 0x171170u) {
        ctx->pc = 0x171170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17116Cu;
        // 0x171170: 0xa203006d  sb          $v1, 0x6D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 109), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171174u;
        goto label_171174;
    }
    ctx->pc = 0x17116Cu;
    {
        const bool branch_taken_0x17116c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17116Cu;
        // 0x171170: 0xa203006d  sb          $v1, 0x6D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 109), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17116c) {
            ctx->pc = 0x171180u;
            goto label_171180;
        }
    }
    ctx->pc = 0x171174u;
label_171174:
    // 0x171174: 0x9202006d  lbu         $v0, 0x6D($s0)
    ctx->pc = 0x171174u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_171178:
    // 0x171178: 0x304200f6  andi        $v0, $v0, 0xF6
    ctx->pc = 0x171178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)246);
label_17117c:
    // 0x17117c: 0xa202006d  sb          $v0, 0x6D($s0)
    ctx->pc = 0x17117cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 109), (uint8_t)GPR_U32(ctx, 2));
label_171180:
    // 0x171180: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x171180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171184:
    // 0x171184: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x171184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_171188:
    // 0x171188: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x171188u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_17118c:
    // 0x17118c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17118cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_171190:
    // 0x171190: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x171190u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_171194:
    // 0x171194: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x171194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_171198:
    // 0x171198: 0x0  nop
    ctx->pc = 0x171198u;
    // NOP
label_17119c:
    // 0x17119c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1711a0:
    if (ctx->pc == 0x1711A0u) {
        ctx->pc = 0x1711A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17119Cu;
        // 0x1711a0: 0xae000040  sw          $zero, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1711A4u;
        goto label_1711a4;
    }
    ctx->pc = 0x17119Cu;
    {
        const bool branch_taken_0x17119c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17119c) {
            ctx->pc = 0x1711A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17119Cu;
            // 0x1711a0: 0xae000040  sw          $zero, 0x40($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1711A4u;
            goto label_1711a4;
        }
    }
    ctx->pc = 0x1711A4u;
label_1711a4:
    // 0x1711a4: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x1711a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1711a8:
    // 0x1711a8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1711a8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1711ac:
    // 0x1711ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1711acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1711b0:
    // 0x1711b0: 0x0  nop
    ctx->pc = 0x1711b0u;
    // NOP
label_1711b4:
    // 0x1711b4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1711b8:
    if (ctx->pc == 0x1711B8u) {
        ctx->pc = 0x1711B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1711B4u;
        // 0x1711b8: 0xae000044  sw          $zero, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1711BCu;
        goto label_1711bc;
    }
    ctx->pc = 0x1711B4u;
    {
        const bool branch_taken_0x1711b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1711b4) {
            ctx->pc = 0x1711B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1711B4u;
            // 0x1711b8: 0xae000044  sw          $zero, 0x44($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1711BCu;
            goto label_1711bc;
        }
    }
    ctx->pc = 0x1711BCu;
label_1711bc:
    // 0x1711bc: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x1711bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1711c0:
    // 0x1711c0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1711c0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1711c4:
    // 0x1711c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1711c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1711c8:
    // 0x1711c8: 0x0  nop
    ctx->pc = 0x1711c8u;
    // NOP
label_1711cc:
    // 0x1711cc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1711d0:
    if (ctx->pc == 0x1711D0u) {
        ctx->pc = 0x1711D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1711CCu;
        // 0x1711d0: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1711D4u;
        goto label_1711d4;
    }
    ctx->pc = 0x1711CCu;
    {
        const bool branch_taken_0x1711cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1711cc) {
            ctx->pc = 0x1711D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1711CCu;
            // 0x1711d0: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1711D4u;
            goto label_1711d4;
        }
    }
    ctx->pc = 0x1711D4u;
label_1711d4:
    // 0x1711d4: 0x7a030040  lq          $v1, 0x40($s0)
    ctx->pc = 0x1711d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 64)));
label_1711d8:
    // 0x1711d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1711d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1711dc:
    // 0x1711dc: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x1711dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1711e0:
    // 0x1711e0: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1711e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1711e4:
    // 0x1711e4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1711e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1711e8:
    // 0x1711e8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1711e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1711ec:
    // 0x1711ec: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1711ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1711f0:
    // 0x1711f0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1711f0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_1711f4:
    // 0x1711f4: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x1711f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1711f8:
    // 0x1711f8: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x1711f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_1711fc:
    // 0x1711fc: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x1711fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_171200:
    // 0x171200: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x171200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
label_171204:
    // 0x171204: 0x96070062  lhu         $a3, 0x62($s0)
    ctx->pc = 0x171204u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 98)));
label_171208:
    // 0x171208: 0x96080060  lhu         $t0, 0x60($s0)
    ctx->pc = 0x171208u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
label_17120c:
    // 0x17120c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x17120cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171210:
    // 0x171210: 0x0  nop
    ctx->pc = 0x171210u;
    // NOP
label_171214:
    // 0x171214: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x171214u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_171218:
    // 0x171218: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x171218u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_17121c:
    // 0x17121c: 0x44886000  mtc1        $t0, $f12
    ctx->pc = 0x17121cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_171220:
    // 0x171220: 0x0  nop
    ctx->pc = 0x171220u;
    // NOP
label_171224:
    // 0x171224: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x171224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_171228:
    // 0x171228: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x171228u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_17122c:
    // 0x17122c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x17122cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_171230:
    // 0x171230: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x171230u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_171234:
    // 0x171234: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x171234u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_171238:
    // 0x171238: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x171238u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_17123c:
    // 0x17123c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x17123cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_171240:
    // 0x171240: 0x0  nop
    ctx->pc = 0x171240u;
    // NOP
label_171244:
    // 0x171244: 0x0  nop
    ctx->pc = 0x171244u;
    // NOP
label_171248:
    // 0x171248: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x171248u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
label_17124c:
    // 0x17124c: 0xc0cda80  jal         func_336A00
label_171250:
    if (ctx->pc == 0x171250u) {
        ctx->pc = 0x171250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17124Cu;
        // 0x171250: 0x7e020030  sq          $v0, 0x30($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171254u;
        goto label_171254;
    }
    ctx->pc = 0x17124Cu;
    SET_GPR_U32(ctx, 31, 0x171254u);
    ctx->pc = 0x171250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17124Cu;
    // 0x171250: 0x7e020030  sq          $v0, 0x30($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A00u, 0x17124Cu, 0x171254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171254u;
label_171254:
    // 0x171254: 0x96020062  lhu         $v0, 0x62($s0)
    ctx->pc = 0x171254u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 98)));
label_171258:
    // 0x171258: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_17125c:
    if (ctx->pc == 0x17125Cu) {
        ctx->pc = 0x17125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171258u;
        // 0x17125c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171260u;
        goto label_171260;
    }
    ctx->pc = 0x171258u;
    {
        const bool branch_taken_0x171258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171258u;
        // 0x17125c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171258) {
            ctx->pc = 0x171264u;
            goto label_171264;
        }
    }
    ctx->pc = 0x171260u;
label_171260:
    // 0x171260: 0xa6020062  sh          $v0, 0x62($s0)
    ctx->pc = 0x171260u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 98), (uint16_t)GPR_U32(ctx, 2));
label_171264:
    // 0x171264: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x171264u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_171268:
    // 0x171268: 0x2e620008  sltiu       $v0, $s3, 0x8
    ctx->pc = 0x171268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_17126c:
    // 0x17126c: 0x1440feb2  bnez        $v0, . + 4 + (-0x14E << 2)
label_171270:
    if (ctx->pc == 0x171270u) {
        ctx->pc = 0x171270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17126Cu;
        // 0x171270: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171274u;
        goto label_171274;
    }
    ctx->pc = 0x17126Cu;
    {
        const bool branch_taken_0x17126c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17126Cu;
        // 0x171270: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17126c) {
            ctx->pc = 0x170D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170d38;
        }
    }
    ctx->pc = 0x171274u;
label_171274:
    // 0x171274: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x171274u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_171278:
    // 0x171278: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x171278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_17127c:
    // 0x17127c: 0x1440feac  bnez        $v0, . + 4 + (-0x154 << 2)
label_171280:
    if (ctx->pc == 0x171280u) {
        ctx->pc = 0x171280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17127Cu;
        // 0x171280: 0x24760001  addiu       $s6, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171284u;
        goto label_171284;
    }
    ctx->pc = 0x17127Cu;
    {
        const bool branch_taken_0x17127c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17127Cu;
        // 0x171280: 0x24760001  addiu       $s6, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17127c) {
            ctx->pc = 0x170D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170d30;
        }
    }
    ctx->pc = 0x171284u;
label_171284:
    // 0x171284: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x171284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_171288:
    // 0x171288: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x171288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_17128c:
    // 0x17128c: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x17128cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_171290:
    // 0x171290: 0x7bb30160  lq          $s3, 0x160($sp)
    ctx->pc = 0x171290u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_171294:
    // 0x171294: 0x7bb40150  lq          $s4, 0x150($sp)
    ctx->pc = 0x171294u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_171298:
    // 0x171298: 0x7bb50140  lq          $s5, 0x140($sp)
    ctx->pc = 0x171298u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_17129c:
    // 0x17129c: 0x7bb60130  lq          $s6, 0x130($sp)
    ctx->pc = 0x17129cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1712a0:
    // 0x1712a0: 0x7bb70120  lq          $s7, 0x120($sp)
    ctx->pc = 0x1712a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1712a4:
    // 0x1712a4: 0x7bbe0110  lq          $fp, 0x110($sp)
    ctx->pc = 0x1712a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1712a8:
    // 0x1712a8: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x1712a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_1712ac:
    // 0x1712ac: 0xc7b501a8  lwc1        $f21, 0x1A8($sp)
    ctx->pc = 0x1712acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1712b0:
    // 0x1712b0: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x1712b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1712b4:
    // 0x1712b4: 0x3e00008  jr          $ra
label_1712b8:
    if (ctx->pc == 0x1712B8u) {
        ctx->pc = 0x1712B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1712B4u;
        // 0x1712b8: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1712BCu;
        goto label_1712bc;
    }
    ctx->pc = 0x1712B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1712B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1712B4u;
        // 0x1712b8: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1712B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1712BCu;
label_1712bc:
    // 0x1712bc: 0x0  nop
    ctx->pc = 0x1712bcu;
    // NOP
    ctx->pc = 0x1712c0u;
}
