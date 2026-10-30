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

// Function: sub_002F4E10
// Address: 0x2f4e10 - 0x2f52b0
void sub_002F4E10_0x2f4e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4E10_0x2f4e10");
#endif

    switch (ctx->pc) {
        case 0x2f4e10u: goto label_2f4e10;
        case 0x2f4e14u: goto label_2f4e14;
        case 0x2f4e18u: goto label_2f4e18;
        case 0x2f4e1cu: goto label_2f4e1c;
        case 0x2f4e20u: goto label_2f4e20;
        case 0x2f4e24u: goto label_2f4e24;
        case 0x2f4e28u: goto label_2f4e28;
        case 0x2f4e2cu: goto label_2f4e2c;
        case 0x2f4e30u: goto label_2f4e30;
        case 0x2f4e34u: goto label_2f4e34;
        case 0x2f4e38u: goto label_2f4e38;
        case 0x2f4e3cu: goto label_2f4e3c;
        case 0x2f4e40u: goto label_2f4e40;
        case 0x2f4e44u: goto label_2f4e44;
        case 0x2f4e48u: goto label_2f4e48;
        case 0x2f4e4cu: goto label_2f4e4c;
        case 0x2f4e50u: goto label_2f4e50;
        case 0x2f4e54u: goto label_2f4e54;
        case 0x2f4e58u: goto label_2f4e58;
        case 0x2f4e5cu: goto label_2f4e5c;
        case 0x2f4e60u: goto label_2f4e60;
        case 0x2f4e64u: goto label_2f4e64;
        case 0x2f4e68u: goto label_2f4e68;
        case 0x2f4e6cu: goto label_2f4e6c;
        case 0x2f4e70u: goto label_2f4e70;
        case 0x2f4e74u: goto label_2f4e74;
        case 0x2f4e78u: goto label_2f4e78;
        case 0x2f4e7cu: goto label_2f4e7c;
        case 0x2f4e80u: goto label_2f4e80;
        case 0x2f4e84u: goto label_2f4e84;
        case 0x2f4e88u: goto label_2f4e88;
        case 0x2f4e8cu: goto label_2f4e8c;
        case 0x2f4e90u: goto label_2f4e90;
        case 0x2f4e94u: goto label_2f4e94;
        case 0x2f4e98u: goto label_2f4e98;
        case 0x2f4e9cu: goto label_2f4e9c;
        case 0x2f4ea0u: goto label_2f4ea0;
        case 0x2f4ea4u: goto label_2f4ea4;
        case 0x2f4ea8u: goto label_2f4ea8;
        case 0x2f4eacu: goto label_2f4eac;
        case 0x2f4eb0u: goto label_2f4eb0;
        case 0x2f4eb4u: goto label_2f4eb4;
        case 0x2f4eb8u: goto label_2f4eb8;
        case 0x2f4ebcu: goto label_2f4ebc;
        case 0x2f4ec0u: goto label_2f4ec0;
        case 0x2f4ec4u: goto label_2f4ec4;
        case 0x2f4ec8u: goto label_2f4ec8;
        case 0x2f4eccu: goto label_2f4ecc;
        case 0x2f4ed0u: goto label_2f4ed0;
        case 0x2f4ed4u: goto label_2f4ed4;
        case 0x2f4ed8u: goto label_2f4ed8;
        case 0x2f4edcu: goto label_2f4edc;
        case 0x2f4ee0u: goto label_2f4ee0;
        case 0x2f4ee4u: goto label_2f4ee4;
        case 0x2f4ee8u: goto label_2f4ee8;
        case 0x2f4eecu: goto label_2f4eec;
        case 0x2f4ef0u: goto label_2f4ef0;
        case 0x2f4ef4u: goto label_2f4ef4;
        case 0x2f4ef8u: goto label_2f4ef8;
        case 0x2f4efcu: goto label_2f4efc;
        case 0x2f4f00u: goto label_2f4f00;
        case 0x2f4f04u: goto label_2f4f04;
        case 0x2f4f08u: goto label_2f4f08;
        case 0x2f4f0cu: goto label_2f4f0c;
        case 0x2f4f10u: goto label_2f4f10;
        case 0x2f4f14u: goto label_2f4f14;
        case 0x2f4f18u: goto label_2f4f18;
        case 0x2f4f1cu: goto label_2f4f1c;
        case 0x2f4f20u: goto label_2f4f20;
        case 0x2f4f24u: goto label_2f4f24;
        case 0x2f4f28u: goto label_2f4f28;
        case 0x2f4f2cu: goto label_2f4f2c;
        case 0x2f4f30u: goto label_2f4f30;
        case 0x2f4f34u: goto label_2f4f34;
        case 0x2f4f38u: goto label_2f4f38;
        case 0x2f4f3cu: goto label_2f4f3c;
        case 0x2f4f40u: goto label_2f4f40;
        case 0x2f4f44u: goto label_2f4f44;
        case 0x2f4f48u: goto label_2f4f48;
        case 0x2f4f4cu: goto label_2f4f4c;
        case 0x2f4f50u: goto label_2f4f50;
        case 0x2f4f54u: goto label_2f4f54;
        case 0x2f4f58u: goto label_2f4f58;
        case 0x2f4f5cu: goto label_2f4f5c;
        case 0x2f4f60u: goto label_2f4f60;
        case 0x2f4f64u: goto label_2f4f64;
        case 0x2f4f68u: goto label_2f4f68;
        case 0x2f4f6cu: goto label_2f4f6c;
        case 0x2f4f70u: goto label_2f4f70;
        case 0x2f4f74u: goto label_2f4f74;
        case 0x2f4f78u: goto label_2f4f78;
        case 0x2f4f7cu: goto label_2f4f7c;
        case 0x2f4f80u: goto label_2f4f80;
        case 0x2f4f84u: goto label_2f4f84;
        case 0x2f4f88u: goto label_2f4f88;
        case 0x2f4f8cu: goto label_2f4f8c;
        case 0x2f4f90u: goto label_2f4f90;
        case 0x2f4f94u: goto label_2f4f94;
        case 0x2f4f98u: goto label_2f4f98;
        case 0x2f4f9cu: goto label_2f4f9c;
        case 0x2f4fa0u: goto label_2f4fa0;
        case 0x2f4fa4u: goto label_2f4fa4;
        case 0x2f4fa8u: goto label_2f4fa8;
        case 0x2f4facu: goto label_2f4fac;
        case 0x2f4fb0u: goto label_2f4fb0;
        case 0x2f4fb4u: goto label_2f4fb4;
        case 0x2f4fb8u: goto label_2f4fb8;
        case 0x2f4fbcu: goto label_2f4fbc;
        case 0x2f4fc0u: goto label_2f4fc0;
        case 0x2f4fc4u: goto label_2f4fc4;
        case 0x2f4fc8u: goto label_2f4fc8;
        case 0x2f4fccu: goto label_2f4fcc;
        case 0x2f4fd0u: goto label_2f4fd0;
        case 0x2f4fd4u: goto label_2f4fd4;
        case 0x2f4fd8u: goto label_2f4fd8;
        case 0x2f4fdcu: goto label_2f4fdc;
        case 0x2f4fe0u: goto label_2f4fe0;
        case 0x2f4fe4u: goto label_2f4fe4;
        case 0x2f4fe8u: goto label_2f4fe8;
        case 0x2f4fecu: goto label_2f4fec;
        case 0x2f4ff0u: goto label_2f4ff0;
        case 0x2f4ff4u: goto label_2f4ff4;
        case 0x2f4ff8u: goto label_2f4ff8;
        case 0x2f4ffcu: goto label_2f4ffc;
        case 0x2f5000u: goto label_2f5000;
        case 0x2f5004u: goto label_2f5004;
        case 0x2f5008u: goto label_2f5008;
        case 0x2f500cu: goto label_2f500c;
        case 0x2f5010u: goto label_2f5010;
        case 0x2f5014u: goto label_2f5014;
        case 0x2f5018u: goto label_2f5018;
        case 0x2f501cu: goto label_2f501c;
        case 0x2f5020u: goto label_2f5020;
        case 0x2f5024u: goto label_2f5024;
        case 0x2f5028u: goto label_2f5028;
        case 0x2f502cu: goto label_2f502c;
        case 0x2f5030u: goto label_2f5030;
        case 0x2f5034u: goto label_2f5034;
        case 0x2f5038u: goto label_2f5038;
        case 0x2f503cu: goto label_2f503c;
        case 0x2f5040u: goto label_2f5040;
        case 0x2f5044u: goto label_2f5044;
        case 0x2f5048u: goto label_2f5048;
        case 0x2f504cu: goto label_2f504c;
        case 0x2f5050u: goto label_2f5050;
        case 0x2f5054u: goto label_2f5054;
        case 0x2f5058u: goto label_2f5058;
        case 0x2f505cu: goto label_2f505c;
        case 0x2f5060u: goto label_2f5060;
        case 0x2f5064u: goto label_2f5064;
        case 0x2f5068u: goto label_2f5068;
        case 0x2f506cu: goto label_2f506c;
        case 0x2f5070u: goto label_2f5070;
        case 0x2f5074u: goto label_2f5074;
        case 0x2f5078u: goto label_2f5078;
        case 0x2f507cu: goto label_2f507c;
        case 0x2f5080u: goto label_2f5080;
        case 0x2f5084u: goto label_2f5084;
        case 0x2f5088u: goto label_2f5088;
        case 0x2f508cu: goto label_2f508c;
        case 0x2f5090u: goto label_2f5090;
        case 0x2f5094u: goto label_2f5094;
        case 0x2f5098u: goto label_2f5098;
        case 0x2f509cu: goto label_2f509c;
        case 0x2f50a0u: goto label_2f50a0;
        case 0x2f50a4u: goto label_2f50a4;
        case 0x2f50a8u: goto label_2f50a8;
        case 0x2f50acu: goto label_2f50ac;
        case 0x2f50b0u: goto label_2f50b0;
        case 0x2f50b4u: goto label_2f50b4;
        case 0x2f50b8u: goto label_2f50b8;
        case 0x2f50bcu: goto label_2f50bc;
        case 0x2f50c0u: goto label_2f50c0;
        case 0x2f50c4u: goto label_2f50c4;
        case 0x2f50c8u: goto label_2f50c8;
        case 0x2f50ccu: goto label_2f50cc;
        case 0x2f50d0u: goto label_2f50d0;
        case 0x2f50d4u: goto label_2f50d4;
        case 0x2f50d8u: goto label_2f50d8;
        case 0x2f50dcu: goto label_2f50dc;
        case 0x2f50e0u: goto label_2f50e0;
        case 0x2f50e4u: goto label_2f50e4;
        case 0x2f50e8u: goto label_2f50e8;
        case 0x2f50ecu: goto label_2f50ec;
        case 0x2f50f0u: goto label_2f50f0;
        case 0x2f50f4u: goto label_2f50f4;
        case 0x2f50f8u: goto label_2f50f8;
        case 0x2f50fcu: goto label_2f50fc;
        case 0x2f5100u: goto label_2f5100;
        case 0x2f5104u: goto label_2f5104;
        case 0x2f5108u: goto label_2f5108;
        case 0x2f510cu: goto label_2f510c;
        case 0x2f5110u: goto label_2f5110;
        case 0x2f5114u: goto label_2f5114;
        case 0x2f5118u: goto label_2f5118;
        case 0x2f511cu: goto label_2f511c;
        case 0x2f5120u: goto label_2f5120;
        case 0x2f5124u: goto label_2f5124;
        case 0x2f5128u: goto label_2f5128;
        case 0x2f512cu: goto label_2f512c;
        case 0x2f5130u: goto label_2f5130;
        case 0x2f5134u: goto label_2f5134;
        case 0x2f5138u: goto label_2f5138;
        case 0x2f513cu: goto label_2f513c;
        case 0x2f5140u: goto label_2f5140;
        case 0x2f5144u: goto label_2f5144;
        case 0x2f5148u: goto label_2f5148;
        case 0x2f514cu: goto label_2f514c;
        case 0x2f5150u: goto label_2f5150;
        case 0x2f5154u: goto label_2f5154;
        case 0x2f5158u: goto label_2f5158;
        case 0x2f515cu: goto label_2f515c;
        case 0x2f5160u: goto label_2f5160;
        case 0x2f5164u: goto label_2f5164;
        case 0x2f5168u: goto label_2f5168;
        case 0x2f516cu: goto label_2f516c;
        case 0x2f5170u: goto label_2f5170;
        case 0x2f5174u: goto label_2f5174;
        case 0x2f5178u: goto label_2f5178;
        case 0x2f517cu: goto label_2f517c;
        case 0x2f5180u: goto label_2f5180;
        case 0x2f5184u: goto label_2f5184;
        case 0x2f5188u: goto label_2f5188;
        case 0x2f518cu: goto label_2f518c;
        case 0x2f5190u: goto label_2f5190;
        case 0x2f5194u: goto label_2f5194;
        case 0x2f5198u: goto label_2f5198;
        case 0x2f519cu: goto label_2f519c;
        case 0x2f51a0u: goto label_2f51a0;
        case 0x2f51a4u: goto label_2f51a4;
        case 0x2f51a8u: goto label_2f51a8;
        case 0x2f51acu: goto label_2f51ac;
        case 0x2f51b0u: goto label_2f51b0;
        case 0x2f51b4u: goto label_2f51b4;
        case 0x2f51b8u: goto label_2f51b8;
        case 0x2f51bcu: goto label_2f51bc;
        case 0x2f51c0u: goto label_2f51c0;
        case 0x2f51c4u: goto label_2f51c4;
        case 0x2f51c8u: goto label_2f51c8;
        case 0x2f51ccu: goto label_2f51cc;
        case 0x2f51d0u: goto label_2f51d0;
        case 0x2f51d4u: goto label_2f51d4;
        case 0x2f51d8u: goto label_2f51d8;
        case 0x2f51dcu: goto label_2f51dc;
        case 0x2f51e0u: goto label_2f51e0;
        case 0x2f51e4u: goto label_2f51e4;
        case 0x2f51e8u: goto label_2f51e8;
        case 0x2f51ecu: goto label_2f51ec;
        case 0x2f51f0u: goto label_2f51f0;
        case 0x2f51f4u: goto label_2f51f4;
        case 0x2f51f8u: goto label_2f51f8;
        case 0x2f51fcu: goto label_2f51fc;
        case 0x2f5200u: goto label_2f5200;
        case 0x2f5204u: goto label_2f5204;
        case 0x2f5208u: goto label_2f5208;
        case 0x2f520cu: goto label_2f520c;
        case 0x2f5210u: goto label_2f5210;
        case 0x2f5214u: goto label_2f5214;
        case 0x2f5218u: goto label_2f5218;
        case 0x2f521cu: goto label_2f521c;
        case 0x2f5220u: goto label_2f5220;
        case 0x2f5224u: goto label_2f5224;
        case 0x2f5228u: goto label_2f5228;
        case 0x2f522cu: goto label_2f522c;
        case 0x2f5230u: goto label_2f5230;
        case 0x2f5234u: goto label_2f5234;
        case 0x2f5238u: goto label_2f5238;
        case 0x2f523cu: goto label_2f523c;
        case 0x2f5240u: goto label_2f5240;
        case 0x2f5244u: goto label_2f5244;
        case 0x2f5248u: goto label_2f5248;
        case 0x2f524cu: goto label_2f524c;
        case 0x2f5250u: goto label_2f5250;
        case 0x2f5254u: goto label_2f5254;
        case 0x2f5258u: goto label_2f5258;
        case 0x2f525cu: goto label_2f525c;
        case 0x2f5260u: goto label_2f5260;
        case 0x2f5264u: goto label_2f5264;
        case 0x2f5268u: goto label_2f5268;
        case 0x2f526cu: goto label_2f526c;
        case 0x2f5270u: goto label_2f5270;
        case 0x2f5274u: goto label_2f5274;
        case 0x2f5278u: goto label_2f5278;
        case 0x2f527cu: goto label_2f527c;
        case 0x2f5280u: goto label_2f5280;
        case 0x2f5284u: goto label_2f5284;
        case 0x2f5288u: goto label_2f5288;
        case 0x2f528cu: goto label_2f528c;
        case 0x2f5290u: goto label_2f5290;
        case 0x2f5294u: goto label_2f5294;
        case 0x2f5298u: goto label_2f5298;
        case 0x2f529cu: goto label_2f529c;
        case 0x2f52a0u: goto label_2f52a0;
        case 0x2f52a4u: goto label_2f52a4;
        case 0x2f52a8u: goto label_2f52a8;
        case 0x2f52acu: goto label_2f52ac;
        default: break;
    }

    ctx->pc = 0x2f4e10u;

label_2f4e10:
    // 0x2f4e10: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2f4e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_2f4e14:
    // 0x2f4e14: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2f4e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2f4e18:
    // 0x2f4e18: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x2f4e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_2f4e1c:
    // 0x2f4e1c: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x2f4e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_2f4e20:
    // 0x2f4e20: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x2f4e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
label_2f4e24:
    // 0x2f4e24: 0x24524b00  addiu       $s2, $v0, 0x4B00
    ctx->pc = 0x2f4e24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2f4e28:
    // 0x2f4e28: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x2f4e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_2f4e2c:
    // 0x2f4e2c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2f4e2cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4e30:
    // 0x2f4e30: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x2f4e30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_2f4e34:
    // 0x2f4e34: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2f4e34u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4e38:
    // 0x2f4e38: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x2f4e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_2f4e3c:
    // 0x2f4e3c: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x2f4e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_2f4e40:
    // 0x2f4e40: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x2f4e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_2f4e44:
    // 0x2f4e44: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x2f4e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_2f4e48:
    // 0x2f4e48: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x2f4e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_2f4e4c:
    // 0x2f4e4c: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x2f4e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
label_2f4e50:
    // 0x2f4e50: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2f4e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2f4e54:
    // 0x2f4e54: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x2f4e54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_2f4e58:
    // 0x2f4e58: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2f4e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f4e5c:
    // 0x2f4e5c: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x2f4e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f4e60:
    // 0x2f4e60: 0x26110090  addiu       $s1, $s0, 0x90
    ctx->pc = 0x2f4e60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_2f4e64:
    // 0x2f4e64: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x2f4e64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2f4e68:
    // 0x2f4e68: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2f4e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2f4e6c:
    // 0x2f4e6c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2f4e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2f4e70:
    // 0x2f4e70: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2f4e70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f4e74:
    // 0x2f4e74: 0xc0a2fc0  jal         func_28BF00
label_2f4e78:
    if (ctx->pc == 0x2F4E78u) {
        ctx->pc = 0x2F4E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4E74u;
        // 0x2f4e78: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4E7Cu;
        goto label_2f4e7c;
    }
    ctx->pc = 0x2F4E74u;
    SET_GPR_U32(ctx, 31, 0x2F4E7Cu);
    ctx->pc = 0x2F4E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4E74u;
    // 0x2f4e78: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x2F4E74u, 0x2F4E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4E7Cu;
label_2f4e7c:
    // 0x2f4e7c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2f4e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2f4e80:
    // 0x2f4e80: 0x90620044  lbu         $v0, 0x44($v1)
    ctx->pc = 0x2f4e80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 68)));
label_2f4e84:
    // 0x2f4e84: 0x1440006d  bnez        $v0, . + 4 + (0x6D << 2)
label_2f4e88:
    if (ctx->pc == 0x2F4E88u) {
        ctx->pc = 0x2F4E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4E84u;
        // 0x2f4e88: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4E8Cu;
        goto label_2f4e8c;
    }
    ctx->pc = 0x2F4E84u;
    {
        const bool branch_taken_0x2f4e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4E84u;
        // 0x2f4e88: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4e84) {
            ctx->pc = 0x2F503Cu;
            goto label_2f503c;
        }
    }
    ctx->pc = 0x2F4E8Cu;
label_2f4e8c:
    // 0x2f4e8c: 0xc089bfc  jal         func_226FF0
label_2f4e90:
    if (ctx->pc == 0x2F4E90u) {
        ctx->pc = 0x2F4E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4E8Cu;
        // 0x2f4e90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4E94u;
        goto label_2f4e94;
    }
    ctx->pc = 0x2F4E8Cu;
    SET_GPR_U32(ctx, 31, 0x2F4E94u);
    ctx->pc = 0x2F4E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4E8Cu;
    // 0x2f4e90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2F4E8Cu, 0x2F4E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4E94u;
label_2f4e94:
    // 0x2f4e94: 0xc0e57ce  jal         func_395F38
label_2f4e98:
    if (ctx->pc == 0x2F4E98u) {
        ctx->pc = 0x2F4E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4E94u;
        // 0x2f4e98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4E9Cu;
        goto label_2f4e9c;
    }
    ctx->pc = 0x2F4E94u;
    SET_GPR_U32(ctx, 31, 0x2F4E9Cu);
    ctx->pc = 0x2F4E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4E94u;
    // 0x2f4e98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2F4E94u, 0x2F4E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4E9Cu;
label_2f4e9c:
    // 0x2f4e9c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f4e9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f4ea0:
    // 0x2f4ea0: 0x10c000ec  beqz        $a2, . + 4 + (0xEC << 2)
label_2f4ea4:
    if (ctx->pc == 0x2F4EA4u) {
        ctx->pc = 0x2F4EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4EA0u;
        // 0x2f4ea4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4EA8u;
        goto label_2f4ea8;
    }
    ctx->pc = 0x2F4EA0u;
    {
        const bool branch_taken_0x2f4ea0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4EA0u;
        // 0x2f4ea4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ea0) {
            ctx->pc = 0x2F5254u;
            goto label_2f5254;
        }
    }
    ctx->pc = 0x2F4EA8u;
label_2f4ea8:
    // 0x2f4ea8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2f4ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2f4eac:
    // 0x2f4eac: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2f4eacu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4eb0:
    // 0x2f4eb0: 0x846500a0  lh          $a1, 0xA0($v1)
    ctx->pc = 0x2f4eb0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_2f4eb4:
    // 0x2f4eb4: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x2f4eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_2f4eb8:
    // 0x2f4eb8: 0x40f809  jalr        $v0
label_2f4ebc:
    if (ctx->pc == 0x2F4EBCu) {
        ctx->pc = 0x2F4EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4EB8u;
        // 0x2f4ebc: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4EC0u;
        goto label_2f4ec0;
    }
    ctx->pc = 0x2F4EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F4EC0u);
        ctx->pc = 0x2F4EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4EB8u;
        // 0x2f4ebc: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4EB8u, 0x2F4EC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F4EC0u;
label_2f4ec0:
    // 0x2f4ec0: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x2f4ec0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f4ec4:
    // 0x2f4ec4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2f4ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2f4ec8:
    // 0x2f4ec8: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2f4ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2f4ecc:
    // 0x2f4ecc: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2f4eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_2f4ed0:
    // 0x2f4ed0: 0x84820224  lh          $v0, 0x224($a0)
    ctx->pc = 0x2f4ed0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
label_2f4ed4:
    // 0x2f4ed4: 0x184000df  blez        $v0, . + 4 + (0xDF << 2)
label_2f4ed8:
    if (ctx->pc == 0x2F4ED8u) {
        ctx->pc = 0x2F4ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4ED4u;
        // 0x2f4ed8: 0x24150228  addiu       $s5, $zero, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4EDCu;
        goto label_2f4edc;
    }
    ctx->pc = 0x2F4ED4u;
    {
        const bool branch_taken_0x2f4ed4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F4ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4ED4u;
        // 0x2f4ed8: 0x24150228  addiu       $s5, $zero, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ed4) {
            ctx->pc = 0x2F5254u;
            goto label_2f5254;
        }
    }
    ctx->pc = 0x2F4EDCu;
label_2f4edc:
    // 0x2f4edc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f4edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f4ee0:
    // 0x2f4ee0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2f4ee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2f4ee4:
    // 0x2f4ee4: 0x0  nop
    ctx->pc = 0x2f4ee4u;
    // NOP
label_2f4ee8:
    // 0x2f4ee8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2f4ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2f4eec:
    // 0x2f4eec: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2f4eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2f4ef0:
    // 0x2f4ef0: 0xc0e409a  jal         func_390268
label_2f4ef4:
    if (ctx->pc == 0x2F4EF4u) {
        ctx->pc = 0x2F4EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4EF0u;
        // 0x2f4ef4: 0x952021  addu        $a0, $a0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4EF8u;
        goto label_2f4ef8;
    }
    ctx->pc = 0x2F4EF0u;
    SET_GPR_U32(ctx, 31, 0x2F4EF8u);
    ctx->pc = 0x2F4EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4EF0u;
    // 0x2f4ef4: 0x952021  addu        $a0, $a0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F4EF0u, 0x2F4EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4EF8u;
label_2f4ef8:
    // 0x2f4ef8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f4ef8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f4efc:
    // 0x2f4efc: 0x12400047  beqz        $s2, . + 4 + (0x47 << 2)
label_2f4f00:
    if (ctx->pc == 0x2F4F00u) {
        ctx->pc = 0x2F4F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4EFCu;
        // 0x2f4f00: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4F04u;
        goto label_2f4f04;
    }
    ctx->pc = 0x2F4EFCu;
    {
        const bool branch_taken_0x2f4efc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4EFCu;
        // 0x2f4f00: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4efc) {
            ctx->pc = 0x2F501Cu;
            goto label_2f501c;
        }
    }
    ctx->pc = 0x2F4F04u;
label_2f4f04:
    // 0x2f4f04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f4f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f4f08:
    // 0x2f4f08: 0xc089f98  jal         func_227E60
label_2f4f0c:
    if (ctx->pc == 0x2F4F0Cu) {
        ctx->pc = 0x2F4F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F08u;
        // 0x2f4f0c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4F10u;
        goto label_2f4f10;
    }
    ctx->pc = 0x2F4F08u;
    SET_GPR_U32(ctx, 31, 0x2F4F10u);
    ctx->pc = 0x2F4F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4F08u;
    // 0x2f4f0c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x2F4F08u, 0x2F4F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4F10u;
label_2f4f10:
    // 0x2f4f10: 0x10540041  beq         $v0, $s4, . + 4 + (0x41 << 2)
label_2f4f14:
    if (ctx->pc == 0x2F4F14u) {
        ctx->pc = 0x2F4F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F10u;
        // 0x2f4f14: 0x26510090  addiu       $s1, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4F18u;
        goto label_2f4f18;
    }
    ctx->pc = 0x2F4F10u;
    {
        const bool branch_taken_0x2f4f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x2F4F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F10u;
        // 0x2f4f14: 0x26510090  addiu       $s1, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f10) {
            ctx->pc = 0x2F5018u;
            goto label_2f5018;
        }
    }
    ctx->pc = 0x2F4F18u;
label_2f4f18:
    // 0x2f4f18: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2f4f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2f4f1c:
    // 0x2f4f1c: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x2f4f1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2f4f20:
    // 0x2f4f20: 0x24734b00  addiu       $s3, $v1, 0x4B00
    ctx->pc = 0x2f4f20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2f4f24:
    // 0x2f4f24: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f4f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f4f28:
    // 0x2f4f28: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2f4f28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2f4f2c:
    // 0x2f4f2c: 0xc0cdb62  jal         func_336D88
label_2f4f30:
    if (ctx->pc == 0x2F4F30u) {
        ctx->pc = 0x2F4F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F2Cu;
        // 0x2f4f30: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4F34u;
        goto label_2f4f34;
    }
    ctx->pc = 0x2F4F2Cu;
    SET_GPR_U32(ctx, 31, 0x2F4F34u);
    ctx->pc = 0x2F4F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4F2Cu;
    // 0x2f4f30: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D88u, 0x2F4F2Cu, 0x2F4F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4F34u;
label_2f4f34:
    // 0x2f4f34: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2f4f34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f4f38:
    // 0x2f4f38: 0x0  nop
    ctx->pc = 0x2f4f38u;
    // NOP
label_2f4f3c:
    // 0x2f4f3c: 0x45010037  bc1t        . + 4 + (0x37 << 2)
label_2f4f40:
    if (ctx->pc == 0x2F4F40u) {
        ctx->pc = 0x2F4F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F3Cu;
        // 0x2f4f40: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4F44u;
        goto label_2f4f44;
    }
    ctx->pc = 0x2F4F3Cu;
    {
        const bool branch_taken_0x2f4f3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F4F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F3Cu;
        // 0x2f4f40: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f3c) {
            ctx->pc = 0x2F501Cu;
            goto label_2f501c;
        }
    }
    ctx->pc = 0x2F4F44u;
label_2f4f44:
    // 0x2f4f44: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2f4f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2f4f48:
    // 0x2f4f48: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x2f4f48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2f4f4c:
    // 0x2f4f4c: 0x24841740  addiu       $a0, $a0, 0x1740
    ctx->pc = 0x2f4f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
label_2f4f50:
    // 0x2f4f50: 0x3c023fd9  lui         $v0, 0x3FD9
    ctx->pc = 0x2f4f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16345 << 16));
label_2f4f54:
    // 0x2f4f54: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f4f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_2f4f58:
    // 0x2f4f58: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2f4f58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f4f5c:
    // 0x2f4f5c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2f4f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2f4f60:
    // 0x2f4f60: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2f4f60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2f4f64:
    // 0x2f4f64: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f4f64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2f4f68:
    // 0x2f4f68: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f4f68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f4f6c:
    // 0x2f4f6c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2f4f6cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_2f4f70:
    // 0x2f4f70: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x2f4f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_2f4f74:
    // 0x2f4f74: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2f4f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_2f4f78:
    // 0x2f4f78: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2f4f78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_2f4f7c:
    // 0x2f4f7c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2f4f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f4f80:
    // 0x2f4f80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f4f80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4f84:
    // 0x2f4f84: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2f4f84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2f4f88:
    // 0x2f4f88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f4f88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4f8c:
    // 0x2f4f8c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2f4f8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2f4f90:
    // 0x2f4f90: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2f4f90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2f4f94:
    // 0x2f4f94: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2f4f94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f4f98:
    // 0x2f4f98: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2f4f98u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2f4f9c:
    // 0x2f4f9c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2f4f9cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2f4fa0:
    // 0x2f4fa0: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2f4fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_2f4fa4:
    // 0x2f4fa4: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2f4fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_2f4fa8:
    // 0x2f4fa8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2f4fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2f4fac:
    // 0x2f4fac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f4facu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2f4fb0:
    // 0x2f4fb0: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x2f4fb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_2f4fb4:
    // 0x2f4fb4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2f4fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2f4fb8:
    // 0x2f4fb8: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2f4fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_2f4fbc:
    // 0x2f4fbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f4fbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4fc0:
    // 0x2f4fc0: 0xc0937d0  jal         func_24DF40
label_2f4fc4:
    if (ctx->pc == 0x2F4FC4u) {
        ctx->pc = 0x2F4FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4FC0u;
        // 0x2f4fc4: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4FC8u;
        goto label_2f4fc8;
    }
    ctx->pc = 0x2F4FC0u;
    SET_GPR_U32(ctx, 31, 0x2F4FC8u);
    ctx->pc = 0x2F4FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4FC0u;
    // 0x2f4fc4: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DF40u, 0x2F4FC0u, 0x2F4FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4FC8u;
label_2f4fc8:
    // 0x2f4fc8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2f4fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f4fcc:
    // 0x2f4fcc: 0x924303ac  lbu         $v1, 0x3AC($s2)
    ctx->pc = 0x2f4fccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 940)));
label_2f4fd0:
    // 0x2f4fd0: 0x1074000c  beq         $v1, $s4, . + 4 + (0xC << 2)
label_2f4fd4:
    if (ctx->pc == 0x2F4FD4u) {
        ctx->pc = 0x2F4FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4FD0u;
        // 0x2f4fd4: 0x82800a  movz        $s0, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4FD8u;
        goto label_2f4fd8;
    }
    ctx->pc = 0x2F4FD0u;
    {
        const bool branch_taken_0x2f4fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x2F4FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4FD0u;
        // 0x2f4fd4: 0x82800a  movz        $s0, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4fd0) {
            ctx->pc = 0x2F5004u;
            goto label_2f5004;
        }
    }
    ctx->pc = 0x2F4FD8u;
label_2f4fd8:
    // 0x2f4fd8: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x2f4fd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2f4fdc:
    // 0x2f4fdc: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2f4fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f4fe0:
    // 0x2f4fe0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2f4fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2f4fe4:
    // 0x2f4fe4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2f4fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2f4fe8:
    // 0x2f4fe8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2f4fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f4fec:
    // 0x2f4fec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2f4fecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2f4ff0:
    // 0x2f4ff0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2f4ff0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_2f4ff4:
    // 0x2f4ff4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2f4ff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f4ff8:
    // 0x2f4ff8: 0x0  nop
    ctx->pc = 0x2f4ff8u;
    // NOP
label_2f4ffc:
    // 0x2f4ffc: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_2f5000:
    if (ctx->pc == 0x2F5000u) {
        ctx->pc = 0x2F5000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4FFCu;
        // 0x2f5000: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5004u;
        goto label_2f5004;
    }
    ctx->pc = 0x2F4FFCu;
    {
        const bool branch_taken_0x2f4ffc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F5000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4FFCu;
        // 0x2f5000: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ffc) {
            ctx->pc = 0x2F501Cu;
            goto label_2f501c;
        }
    }
    ctx->pc = 0x2F5004u;
label_2f5004:
    // 0x2f5004: 0x3d0102a  slt         $v0, $fp, $s0
    ctx->pc = 0x2f5004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2f5008:
    // 0x2f5008: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f500c:
    if (ctx->pc == 0x2F500Cu) {
        ctx->pc = 0x2F500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5008u;
        // 0x2f500c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5010u;
        goto label_2f5010;
    }
    ctx->pc = 0x2F5008u;
    {
        const bool branch_taken_0x2f5008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5008u;
        // 0x2f500c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5008) {
            ctx->pc = 0x2F501Cu;
            goto label_2f501c;
        }
    }
    ctx->pc = 0x2F5010u;
label_2f5010:
    // 0x2f5010: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x2f5010u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f5014:
    // 0x2f5014: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x2f5014u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f5018:
    // 0x2f5018: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2f5018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2f501c:
    // 0x2f501c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2f501cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2f5020:
    // 0x2f5020: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x2f5020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2f5024:
    // 0x2f5024: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x2f5024u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_2f5028:
    // 0x2f5028: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x2f5028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2f502c:
    // 0x2f502c: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
label_2f5030:
    if (ctx->pc == 0x2F5030u) {
        ctx->pc = 0x2F5030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F502Cu;
        // 0x2f5030: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5034u;
        goto label_2f5034;
    }
    ctx->pc = 0x2F502Cu;
    {
        const bool branch_taken_0x2f502c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F502Cu;
        // 0x2f5030: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f502c) {
            ctx->pc = 0x2F4EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f4ee8;
        }
    }
    ctx->pc = 0x2F5034u;
label_2f5034:
    // 0x2f5034: 0x10000087  b           . + 4 + (0x87 << 2)
label_2f5038:
    if (ctx->pc == 0x2F5038u) {
        ctx->pc = 0x2F503Cu;
        goto label_2f503c;
    }
    ctx->pc = 0x2F5034u;
    {
        const bool branch_taken_0x2f5034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5034) {
            ctx->pc = 0x2F5254u;
            goto label_2f5254;
        }
    }
    ctx->pc = 0x2F503Cu;
label_2f503c:
    // 0x2f503c: 0xc089bfc  jal         func_226FF0
label_2f5040:
    if (ctx->pc == 0x2F5040u) {
        ctx->pc = 0x2F5040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F503Cu;
        // 0x2f5040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5044u;
        goto label_2f5044;
    }
    ctx->pc = 0x2F503Cu;
    SET_GPR_U32(ctx, 31, 0x2F5044u);
    ctx->pc = 0x2F5040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F503Cu;
    // 0x2f5040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2F503Cu, 0x2F5044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5044u;
label_2f5044:
    // 0x2f5044: 0xc0e57ce  jal         func_395F38
label_2f5048:
    if (ctx->pc == 0x2F5048u) {
        ctx->pc = 0x2F5048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5044u;
        // 0x2f5048: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F504Cu;
        goto label_2f504c;
    }
    ctx->pc = 0x2F5044u;
    SET_GPR_U32(ctx, 31, 0x2F504Cu);
    ctx->pc = 0x2F5048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5044u;
    // 0x2f5048: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2F5044u, 0x2F504Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F504Cu;
label_2f504c:
    // 0x2f504c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f504cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f5050:
    // 0x2f5050: 0x10c0006a  beqz        $a2, . + 4 + (0x6A << 2)
label_2f5054:
    if (ctx->pc == 0x2F5054u) {
        ctx->pc = 0x2F5054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5050u;
        // 0x2f5054: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5058u;
        goto label_2f5058;
    }
    ctx->pc = 0x2F5050u;
    {
        const bool branch_taken_0x2f5050 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5050u;
        // 0x2f5054: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5050) {
            ctx->pc = 0x2F51FCu;
            goto label_2f51fc;
        }
    }
    ctx->pc = 0x2F5058u;
label_2f5058:
    // 0x2f5058: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x2f5058u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2f505c:
    // 0x2f505c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2f505cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5060:
    // 0x2f5060: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f5060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2f5064:
    // 0x2f5064: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2f5064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_2f5068:
    // 0x2f5068: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2f5068u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f506c:
    // 0x2f506c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2f506cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2f5070:
    // 0x2f5070: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2f5070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2f5074:
    // 0x2f5074: 0x846500a0  lh          $a1, 0xA0($v1)
    ctx->pc = 0x2f5074u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_2f5078:
    // 0x2f5078: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x2f5078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_2f507c:
    // 0x2f507c: 0x40f809  jalr        $v0
label_2f5080:
    if (ctx->pc == 0x2F5080u) {
        ctx->pc = 0x2F5080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F507Cu;
        // 0x2f5080: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5084u;
        goto label_2f5084;
    }
    ctx->pc = 0x2F507Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F5084u);
        ctx->pc = 0x2F5080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F507Cu;
        // 0x2f5080: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F507Cu, 0x2F5084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F5084u;
label_2f5084:
    // 0x2f5084: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x2f5084u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f5088:
    // 0x2f5088: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2f5088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2f508c:
    // 0x2f508c: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2f508cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2f5090:
    // 0x2f5090: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2f5090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_2f5094:
    // 0x2f5094: 0x84820224  lh          $v0, 0x224($a0)
    ctx->pc = 0x2f5094u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
label_2f5098:
    // 0x2f5098: 0x18400058  blez        $v0, . + 4 + (0x58 << 2)
label_2f509c:
    if (ctx->pc == 0x2F509Cu) {
        ctx->pc = 0x2F50A0u;
        goto label_2f50a0;
    }
    ctx->pc = 0x2F5098u;
    {
        const bool branch_taken_0x2f5098 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2f5098) {
            ctx->pc = 0x2F51FCu;
            goto label_2f51fc;
        }
    }
    ctx->pc = 0x2F50A0u;
label_2f50a0:
    // 0x2f50a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f50a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f50a4:
    // 0x2f50a4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2f50a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2f50a8:
    // 0x2f50a8: 0x24140228  addiu       $s4, $zero, 0x228
    ctx->pc = 0x2f50a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_2f50ac:
    // 0x2f50ac: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x2f50acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f50b0:
    // 0x2f50b0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2f50b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2f50b4:
    // 0x2f50b4: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x2f50b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_2f50b8:
    // 0x2f50b8: 0xc0e409a  jal         func_390268
label_2f50bc:
    if (ctx->pc == 0x2F50BCu) {
        ctx->pc = 0x2F50BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F50B8u;
        // 0x2f50bc: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F50C0u;
        goto label_2f50c0;
    }
    ctx->pc = 0x2F50B8u;
    SET_GPR_U32(ctx, 31, 0x2F50C0u);
    ctx->pc = 0x2F50BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F50B8u;
    // 0x2f50bc: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F50B8u, 0x2F50C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F50C0u;
label_2f50c0:
    // 0x2f50c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f50c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f50c4:
    // 0x2f50c4: 0x12200046  beqz        $s1, . + 4 + (0x46 << 2)
label_2f50c8:
    if (ctx->pc == 0x2F50C8u) {
        ctx->pc = 0x2F50C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F50C4u;
        // 0x2f50c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F50CCu;
        goto label_2f50cc;
    }
    ctx->pc = 0x2F50C4u;
    {
        const bool branch_taken_0x2f50c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F50C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F50C4u;
        // 0x2f50c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f50c4) {
            ctx->pc = 0x2F51E0u;
            goto label_2f51e0;
        }
    }
    ctx->pc = 0x2F50CCu;
label_2f50cc:
    // 0x2f50cc: 0xc089f98  jal         func_227E60
label_2f50d0:
    if (ctx->pc == 0x2F50D0u) {
        ctx->pc = 0x2F50D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F50CCu;
        // 0x2f50d0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F50D4u;
        goto label_2f50d4;
    }
    ctx->pc = 0x2F50CCu;
    SET_GPR_U32(ctx, 31, 0x2F50D4u);
    ctx->pc = 0x2F50D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F50CCu;
    // 0x2f50d0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x2F50CCu, 0x2F50D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F50D4u;
label_2f50d4:
    // 0x2f50d4: 0x10530042  beq         $v0, $s3, . + 4 + (0x42 << 2)
label_2f50d8:
    if (ctx->pc == 0x2F50D8u) {
        ctx->pc = 0x2F50D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F50D4u;
        // 0x2f50d8: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F50DCu;
        goto label_2f50dc;
    }
    ctx->pc = 0x2F50D4u;
    {
        const bool branch_taken_0x2f50d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2F50D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F50D4u;
        // 0x2f50d8: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f50d4) {
            ctx->pc = 0x2F51E0u;
            goto label_2f51e0;
        }
    }
    ctx->pc = 0x2F50DCu;
label_2f50dc:
    // 0x2f50dc: 0x26300090  addiu       $s0, $s1, 0x90
    ctx->pc = 0x2f50dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_2f50e0:
    // 0x2f50e0: 0x24924b00  addiu       $s2, $a0, 0x4B00
    ctx->pc = 0x2f50e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_2f50e4:
    // 0x2f50e4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2f50e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f50e8:
    // 0x2f50e8: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x2f50e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2f50ec:
    // 0x2f50ec: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2f50ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2f50f0:
    // 0x2f50f0: 0xc0cdb62  jal         func_336D88
label_2f50f4:
    if (ctx->pc == 0x2F50F4u) {
        ctx->pc = 0x2F50F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F50F0u;
        // 0x2f50f4: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F50F8u;
        goto label_2f50f8;
    }
    ctx->pc = 0x2F50F0u;
    SET_GPR_U32(ctx, 31, 0x2F50F8u);
    ctx->pc = 0x2F50F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F50F0u;
    // 0x2f50f4: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D88u, 0x2F50F0u, 0x2F50F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F50F8u;
label_2f50f8:
    // 0x2f50f8: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2f50f8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2f50fc:
    // 0x2f50fc: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x2f50fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f5100:
    // 0x2f5100: 0x0  nop
    ctx->pc = 0x2f5100u;
    // NOP
label_2f5104:
    // 0x2f5104: 0x45010037  bc1t        . + 4 + (0x37 << 2)
label_2f5108:
    if (ctx->pc == 0x2F5108u) {
        ctx->pc = 0x2F5108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5104u;
        // 0x2f5108: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F510Cu;
        goto label_2f510c;
    }
    ctx->pc = 0x2F5104u;
    {
        const bool branch_taken_0x2f5104 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F5108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5104u;
        // 0x2f5108: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5104) {
            ctx->pc = 0x2F51E4u;
            goto label_2f51e4;
        }
    }
    ctx->pc = 0x2F510Cu;
label_2f510c:
    // 0x2f510c: 0x922203ac  lbu         $v0, 0x3AC($s1)
    ctx->pc = 0x2f510cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 940)));
label_2f5110:
    // 0x2f5110: 0x1453000c  bne         $v0, $s3, . + 4 + (0xC << 2)
label_2f5114:
    if (ctx->pc == 0x2F5114u) {
        ctx->pc = 0x2F5114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5110u;
        // 0x2f5114: 0x96030002  lhu         $v1, 0x2($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5118u;
        goto label_2f5118;
    }
    ctx->pc = 0x2F5110u;
    {
        const bool branch_taken_0x2f5110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2F5114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5110u;
        // 0x2f5114: 0x96030002  lhu         $v1, 0x2($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5110) {
            ctx->pc = 0x2F5144u;
            goto label_2f5144;
        }
    }
    ctx->pc = 0x2F5118u;
label_2f5118:
    // 0x2f5118: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x2f5118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_2f511c:
    // 0x2f511c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2f511cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f5120:
    // 0x2f5120: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x2f5120u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_2f5124:
    // 0x2f5124: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2f5124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2f5128:
    // 0x2f5128: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2f5128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f512c:
    // 0x2f512c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2f512cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2f5130:
    // 0x2f5130: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2f5130u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_2f5134:
    // 0x2f5134: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2f5134u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f5138:
    // 0x2f5138: 0x0  nop
    ctx->pc = 0x2f5138u;
    // NOP
label_2f513c:
    // 0x2f513c: 0x45010029  bc1t        . + 4 + (0x29 << 2)
label_2f5140:
    if (ctx->pc == 0x2F5140u) {
        ctx->pc = 0x2F5140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F513Cu;
        // 0x2f5140: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5144u;
        goto label_2f5144;
    }
    ctx->pc = 0x2F513Cu;
    {
        const bool branch_taken_0x2f513c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F5140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F513Cu;
        // 0x2f5140: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f513c) {
            ctx->pc = 0x2F51E4u;
            goto label_2f51e4;
        }
    }
    ctx->pc = 0x2F5144u;
label_2f5144:
    // 0x2f5144: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2f5144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2f5148:
    // 0x2f5148: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2f5148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_2f514c:
    // 0x2f514c: 0x24841740  addiu       $a0, $a0, 0x1740
    ctx->pc = 0x2f514cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
label_2f5150:
    // 0x2f5150: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x2f5150u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_2f5154:
    // 0x2f5154: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2f5154u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f5158:
    // 0x2f5158: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2f5158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_2f515c:
    // 0x2f515c: 0x4602a001  sub.s       $f0, $f20, $f2
    ctx->pc = 0x2f515cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
label_2f5160:
    // 0x2f5160: 0x3c043fd9  lui         $a0, 0x3FD9
    ctx->pc = 0x2f5160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16345 << 16));
label_2f5164:
    // 0x2f5164: 0x3484999a  ori         $a0, $a0, 0x999A
    ctx->pc = 0x2f5164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
label_2f5168:
    // 0x2f5168: 0x78680000  lq          $t0, 0x0($v1)
    ctx->pc = 0x2f5168u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f516c:
    // 0x2f516c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2f516cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2f5170:
    // 0x2f5170: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2f5170u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_2f5174:
    // 0x2f5174: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f5174u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f5178:
    // 0x2f5178: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2f5178u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2f517c:
    // 0x2f517c: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x2f517cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_2f5180:
    // 0x2f5180: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f5180u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2f5184:
    // 0x2f5184: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2f5184u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f5188:
    // 0x2f5188: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2f5188u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2f518c:
    // 0x2f518c: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x2f518cu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
label_2f5190:
    // 0x2f5190: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2f5190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_2f5194:
    // 0x2f5194: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f5194u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2f5198:
    // 0x2f5198: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x2f5198u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_2f519c:
    // 0x2f519c: 0x7fa80030  sq          $t0, 0x30($sp)
    ctx->pc = 0x2f519cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 8));
label_2f51a0:
    // 0x2f51a0: 0x7fa80060  sq          $t0, 0x60($sp)
    ctx->pc = 0x2f51a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 8));
label_2f51a4:
    // 0x2f51a4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2f51a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2f51a8:
    // 0x2f51a8: 0x7fa80050  sq          $t0, 0x50($sp)
    ctx->pc = 0x2f51a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 8));
label_2f51ac:
    // 0x2f51ac: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2f51acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2f51b0:
    // 0x2f51b0: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x2f51b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_2f51b4:
    // 0x2f51b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f51b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f51b8:
    // 0x2f51b8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2f51b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2f51bc:
    // 0x2f51bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f51bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f51c0:
    // 0x2f51c0: 0xc0937d0  jal         func_24DF40
label_2f51c4:
    if (ctx->pc == 0x2F51C4u) {
        ctx->pc = 0x2F51C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F51C0u;
        // 0x2f51c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F51C8u;
        goto label_2f51c8;
    }
    ctx->pc = 0x2F51C0u;
    SET_GPR_U32(ctx, 31, 0x2F51C8u);
    ctx->pc = 0x2F51C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F51C0u;
    // 0x2f51c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DF40u, 0x2F51C0u, 0x2F51C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F51C8u;
label_2f51c8:
    // 0x2f51c8: 0x2c2800a  movz        $s0, $s6, $v0
    ctx->pc = 0x2f51c8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 22));
label_2f51cc:
    // 0x2f51cc: 0x3d0102a  slt         $v0, $fp, $s0
    ctx->pc = 0x2f51ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2f51d0:
    // 0x2f51d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f51d4:
    if (ctx->pc == 0x2F51D4u) {
        ctx->pc = 0x2F51D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F51D0u;
        // 0x2f51d4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F51D8u;
        goto label_2f51d8;
    }
    ctx->pc = 0x2F51D0u;
    {
        const bool branch_taken_0x2f51d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F51D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F51D0u;
        // 0x2f51d4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f51d0) {
            ctx->pc = 0x2F51E4u;
            goto label_2f51e4;
        }
    }
    ctx->pc = 0x2F51D8u;
label_2f51d8:
    // 0x2f51d8: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x2f51d8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f51dc:
    // 0x2f51dc: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x2f51dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f51e0:
    // 0x2f51e0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2f51e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2f51e4:
    // 0x2f51e4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2f51e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2f51e8:
    // 0x2f51e8: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x2f51e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2f51ec:
    // 0x2f51ec: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x2f51ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_2f51f0:
    // 0x2f51f0: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x2f51f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2f51f4:
    // 0x2f51f4: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
label_2f51f8:
    if (ctx->pc == 0x2F51F8u) {
        ctx->pc = 0x2F51F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F51F4u;
        // 0x2f51f8: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F51FCu;
        goto label_2f51fc;
    }
    ctx->pc = 0x2F51F4u;
    {
        const bool branch_taken_0x2f51f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F51F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F51F4u;
        // 0x2f51f8: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f51f4) {
            ctx->pc = 0x2F50B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f50b0;
        }
    }
    ctx->pc = 0x2F51FCu;
label_2f51fc:
    // 0x2f51fc: 0x56e00018  bnel        $s7, $zero, . + 4 + (0x18 << 2)
label_2f5200:
    if (ctx->pc == 0x2F5200u) {
        ctx->pc = 0x2F5200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F51FCu;
        // 0x2f5200: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5204u;
        goto label_2f5204;
    }
    ctx->pc = 0x2F51FCu;
    {
        const bool branch_taken_0x2f51fc = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f51fc) {
            ctx->pc = 0x2F5200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F51FCu;
            // 0x2f5200: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5260u;
            goto label_2f5260;
        }
    }
    ctx->pc = 0x2F5204u;
label_2f5204:
    // 0x2f5204: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2f5204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2f5208:
    // 0x2f5208: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2f5208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2f520c:
    // 0x2f520c: 0xc0a7c8c  jal         func_29F230
label_2f5210:
    if (ctx->pc == 0x2F5210u) {
        ctx->pc = 0x2F5210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F520Cu;
        // 0x2f5210: 0x34a5fbff  ori         $a1, $a1, 0xFBFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64511);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5214u;
        goto label_2f5214;
    }
    ctx->pc = 0x2F520Cu;
    SET_GPR_U32(ctx, 31, 0x2F5214u);
    ctx->pc = 0x2F5210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F520Cu;
    // 0x2f5210: 0x34a5fbff  ori         $a1, $a1, 0xFBFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64511);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F230u, 0x2F520Cu, 0x2F5214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5214u;
label_2f5214:
    // 0x2f5214: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2f5214u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f5218:
    // 0x2f5218: 0x56e00011  bnel        $s7, $zero, . + 4 + (0x11 << 2)
label_2f521c:
    if (ctx->pc == 0x2F521Cu) {
        ctx->pc = 0x2F521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5218u;
        // 0x2f521c: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5220u;
        goto label_2f5220;
    }
    ctx->pc = 0x2F5218u;
    {
        const bool branch_taken_0x2f5218 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5218) {
            ctx->pc = 0x2F521Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5218u;
            // 0x2f521c: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5260u;
            goto label_2f5260;
        }
    }
    ctx->pc = 0x2F5220u;
label_2f5220:
    // 0x2f5220: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2f5220u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2f5224:
    // 0x2f5224: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x2f5224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_2f5228:
    // 0x2f5228: 0xc0e409a  jal         func_390268
label_2f522c:
    if (ctx->pc == 0x2F522Cu) {
        ctx->pc = 0x2F522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5228u;
        // 0x2f522c: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5230u;
        goto label_2f5230;
    }
    ctx->pc = 0x2F5228u;
    SET_GPR_U32(ctx, 31, 0x2F5230u);
    ctx->pc = 0x2F522Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5228u;
    // 0x2f522c: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F5228u, 0x2F5230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5230u;
label_2f5230:
    // 0x2f5230: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f5230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f5234:
    // 0x2f5234: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_2f5238:
    if (ctx->pc == 0x2F5238u) {
        ctx->pc = 0x2F5238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5234u;
        // 0x2f5238: 0x8e02489c  lw          $v0, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F523Cu;
        goto label_2f523c;
    }
    ctx->pc = 0x2F5234u;
    {
        const bool branch_taken_0x2f5234 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5234u;
        // 0x2f5238: 0x8e02489c  lw          $v0, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5234) {
            ctx->pc = 0x2F5254u;
            goto label_2f5254;
        }
    }
    ctx->pc = 0x2F523Cu;
label_2f523c:
    // 0x2f523c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2f523cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f5240:
    // 0x2f5240: 0x80a401b0  lb          $a0, 0x1B0($a1)
    ctx->pc = 0x2f5240u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 432)));
label_2f5244:
    // 0x2f5244: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f5244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2f5248:
    // 0x2f5248: 0x9043041a  lbu         $v1, 0x41A($v0)
    ctx->pc = 0x2f5248u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1050)));
label_2f524c:
    // 0x2f524c: 0x38630004  xori        $v1, $v1, 0x4
    ctx->pc = 0x2f524cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
label_2f5250:
    // 0x2f5250: 0x3b80b  movn        $s7, $zero, $v1
    ctx->pc = 0x2f5250u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
label_2f5254:
    // 0x2f5254: 0x12e00009  beqz        $s7, . + 4 + (0x9 << 2)
label_2f5258:
    if (ctx->pc == 0x2F5258u) {
        ctx->pc = 0x2F5258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5254u;
        // 0x2f5258: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F525Cu;
        goto label_2f525c;
    }
    ctx->pc = 0x2F5254u;
    {
        const bool branch_taken_0x2f5254 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5254u;
        // 0x2f5258: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5254) {
            ctx->pc = 0x2F527Cu;
            goto label_2f527c;
        }
    }
    ctx->pc = 0x2F525Cu;
label_2f525c:
    // 0x2f525c: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x2f525cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2f5260:
    // 0x2f5260: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2f5260u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2f5264:
    // 0x2f5264: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2f5264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f5268:
    // 0x2f5268: 0x40f809  jalr        $v0
label_2f526c:
    if (ctx->pc == 0x2F526Cu) {
        ctx->pc = 0x2F526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5268u;
        // 0x2f526c: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5270u;
        goto label_2f5270;
    }
    ctx->pc = 0x2F5268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F5270u);
        ctx->pc = 0x2F526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5268u;
        // 0x2f526c: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5268u, 0x2F5270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F5270u;
label_2f5270:
    // 0x2f5270: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2f5270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2f5274:
    // 0x2f5274: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x2f5274u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_2f5278:
    // 0x2f5278: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x2f5278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_2f527c:
    // 0x2f527c: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x2f527cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2f5280:
    // 0x2f5280: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x2f5280u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2f5284:
    // 0x2f5284: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x2f5284u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2f5288:
    // 0x2f5288: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x2f5288u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2f528c:
    // 0x2f528c: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x2f528cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2f5290:
    // 0x2f5290: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x2f5290u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2f5294:
    // 0x2f5294: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x2f5294u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2f5298:
    // 0x2f5298: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x2f5298u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2f529c:
    // 0x2f529c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2f529cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2f52a0:
    // 0x2f52a0: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x2f52a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2f52a4:
    // 0x2f52a4: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x2f52a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f52a8:
    // 0x2f52a8: 0x3e00008  jr          $ra
label_2f52ac:
    if (ctx->pc == 0x2F52ACu) {
        ctx->pc = 0x2F52ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F52A8u;
        // 0x2f52ac: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F52B0u;
        goto label_fallthrough_0x2f52a8;
    }
    ctx->pc = 0x2F52A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F52ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F52A8u;
        // 0x2f52ac: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F52A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f52a8:
    ctx->pc = 0x2F52B0u;
}
