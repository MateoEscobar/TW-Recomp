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

// Function: sub_003E4058
// Address: 0x3e4058 - 0x3e44e0
void sub_003E4058_0x3e4058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E4058_0x3e4058");
#endif

    switch (ctx->pc) {
        case 0x3e4058u: goto label_3e4058;
        case 0x3e405cu: goto label_3e405c;
        case 0x3e4060u: goto label_3e4060;
        case 0x3e4064u: goto label_3e4064;
        case 0x3e4068u: goto label_3e4068;
        case 0x3e406cu: goto label_3e406c;
        case 0x3e4070u: goto label_3e4070;
        case 0x3e4074u: goto label_3e4074;
        case 0x3e4078u: goto label_3e4078;
        case 0x3e407cu: goto label_3e407c;
        case 0x3e4080u: goto label_3e4080;
        case 0x3e4084u: goto label_3e4084;
        case 0x3e4088u: goto label_3e4088;
        case 0x3e408cu: goto label_3e408c;
        case 0x3e4090u: goto label_3e4090;
        case 0x3e4094u: goto label_3e4094;
        case 0x3e4098u: goto label_3e4098;
        case 0x3e409cu: goto label_3e409c;
        case 0x3e40a0u: goto label_3e40a0;
        case 0x3e40a4u: goto label_3e40a4;
        case 0x3e40a8u: goto label_3e40a8;
        case 0x3e40acu: goto label_3e40ac;
        case 0x3e40b0u: goto label_3e40b0;
        case 0x3e40b4u: goto label_3e40b4;
        case 0x3e40b8u: goto label_3e40b8;
        case 0x3e40bcu: goto label_3e40bc;
        case 0x3e40c0u: goto label_3e40c0;
        case 0x3e40c4u: goto label_3e40c4;
        case 0x3e40c8u: goto label_3e40c8;
        case 0x3e40ccu: goto label_3e40cc;
        case 0x3e40d0u: goto label_3e40d0;
        case 0x3e40d4u: goto label_3e40d4;
        case 0x3e40d8u: goto label_3e40d8;
        case 0x3e40dcu: goto label_3e40dc;
        case 0x3e40e0u: goto label_3e40e0;
        case 0x3e40e4u: goto label_3e40e4;
        case 0x3e40e8u: goto label_3e40e8;
        case 0x3e40ecu: goto label_3e40ec;
        case 0x3e40f0u: goto label_3e40f0;
        case 0x3e40f4u: goto label_3e40f4;
        case 0x3e40f8u: goto label_3e40f8;
        case 0x3e40fcu: goto label_3e40fc;
        case 0x3e4100u: goto label_3e4100;
        case 0x3e4104u: goto label_3e4104;
        case 0x3e4108u: goto label_3e4108;
        case 0x3e410cu: goto label_3e410c;
        case 0x3e4110u: goto label_3e4110;
        case 0x3e4114u: goto label_3e4114;
        case 0x3e4118u: goto label_3e4118;
        case 0x3e411cu: goto label_3e411c;
        case 0x3e4120u: goto label_3e4120;
        case 0x3e4124u: goto label_3e4124;
        case 0x3e4128u: goto label_3e4128;
        case 0x3e412cu: goto label_3e412c;
        case 0x3e4130u: goto label_3e4130;
        case 0x3e4134u: goto label_3e4134;
        case 0x3e4138u: goto label_3e4138;
        case 0x3e413cu: goto label_3e413c;
        case 0x3e4140u: goto label_3e4140;
        case 0x3e4144u: goto label_3e4144;
        case 0x3e4148u: goto label_3e4148;
        case 0x3e414cu: goto label_3e414c;
        case 0x3e4150u: goto label_3e4150;
        case 0x3e4154u: goto label_3e4154;
        case 0x3e4158u: goto label_3e4158;
        case 0x3e415cu: goto label_3e415c;
        case 0x3e4160u: goto label_3e4160;
        case 0x3e4164u: goto label_3e4164;
        case 0x3e4168u: goto label_3e4168;
        case 0x3e416cu: goto label_3e416c;
        case 0x3e4170u: goto label_3e4170;
        case 0x3e4174u: goto label_3e4174;
        case 0x3e4178u: goto label_3e4178;
        case 0x3e417cu: goto label_3e417c;
        case 0x3e4180u: goto label_3e4180;
        case 0x3e4184u: goto label_3e4184;
        case 0x3e4188u: goto label_3e4188;
        case 0x3e418cu: goto label_3e418c;
        case 0x3e4190u: goto label_3e4190;
        case 0x3e4194u: goto label_3e4194;
        case 0x3e4198u: goto label_3e4198;
        case 0x3e419cu: goto label_3e419c;
        case 0x3e41a0u: goto label_3e41a0;
        case 0x3e41a4u: goto label_3e41a4;
        case 0x3e41a8u: goto label_3e41a8;
        case 0x3e41acu: goto label_3e41ac;
        case 0x3e41b0u: goto label_3e41b0;
        case 0x3e41b4u: goto label_3e41b4;
        case 0x3e41b8u: goto label_3e41b8;
        case 0x3e41bcu: goto label_3e41bc;
        case 0x3e41c0u: goto label_3e41c0;
        case 0x3e41c4u: goto label_3e41c4;
        case 0x3e41c8u: goto label_3e41c8;
        case 0x3e41ccu: goto label_3e41cc;
        case 0x3e41d0u: goto label_3e41d0;
        case 0x3e41d4u: goto label_3e41d4;
        case 0x3e41d8u: goto label_3e41d8;
        case 0x3e41dcu: goto label_3e41dc;
        case 0x3e41e0u: goto label_3e41e0;
        case 0x3e41e4u: goto label_3e41e4;
        case 0x3e41e8u: goto label_3e41e8;
        case 0x3e41ecu: goto label_3e41ec;
        case 0x3e41f0u: goto label_3e41f0;
        case 0x3e41f4u: goto label_3e41f4;
        case 0x3e41f8u: goto label_3e41f8;
        case 0x3e41fcu: goto label_3e41fc;
        case 0x3e4200u: goto label_3e4200;
        case 0x3e4204u: goto label_3e4204;
        case 0x3e4208u: goto label_3e4208;
        case 0x3e420cu: goto label_3e420c;
        case 0x3e4210u: goto label_3e4210;
        case 0x3e4214u: goto label_3e4214;
        case 0x3e4218u: goto label_3e4218;
        case 0x3e421cu: goto label_3e421c;
        case 0x3e4220u: goto label_3e4220;
        case 0x3e4224u: goto label_3e4224;
        case 0x3e4228u: goto label_3e4228;
        case 0x3e422cu: goto label_3e422c;
        case 0x3e4230u: goto label_3e4230;
        case 0x3e4234u: goto label_3e4234;
        case 0x3e4238u: goto label_3e4238;
        case 0x3e423cu: goto label_3e423c;
        case 0x3e4240u: goto label_3e4240;
        case 0x3e4244u: goto label_3e4244;
        case 0x3e4248u: goto label_3e4248;
        case 0x3e424cu: goto label_3e424c;
        case 0x3e4250u: goto label_3e4250;
        case 0x3e4254u: goto label_3e4254;
        case 0x3e4258u: goto label_3e4258;
        case 0x3e425cu: goto label_3e425c;
        case 0x3e4260u: goto label_3e4260;
        case 0x3e4264u: goto label_3e4264;
        case 0x3e4268u: goto label_3e4268;
        case 0x3e426cu: goto label_3e426c;
        case 0x3e4270u: goto label_3e4270;
        case 0x3e4274u: goto label_3e4274;
        case 0x3e4278u: goto label_3e4278;
        case 0x3e427cu: goto label_3e427c;
        case 0x3e4280u: goto label_3e4280;
        case 0x3e4284u: goto label_3e4284;
        case 0x3e4288u: goto label_3e4288;
        case 0x3e428cu: goto label_3e428c;
        case 0x3e4290u: goto label_3e4290;
        case 0x3e4294u: goto label_3e4294;
        case 0x3e4298u: goto label_3e4298;
        case 0x3e429cu: goto label_3e429c;
        case 0x3e42a0u: goto label_3e42a0;
        case 0x3e42a4u: goto label_3e42a4;
        case 0x3e42a8u: goto label_3e42a8;
        case 0x3e42acu: goto label_3e42ac;
        case 0x3e42b0u: goto label_3e42b0;
        case 0x3e42b4u: goto label_3e42b4;
        case 0x3e42b8u: goto label_3e42b8;
        case 0x3e42bcu: goto label_3e42bc;
        case 0x3e42c0u: goto label_3e42c0;
        case 0x3e42c4u: goto label_3e42c4;
        case 0x3e42c8u: goto label_3e42c8;
        case 0x3e42ccu: goto label_3e42cc;
        case 0x3e42d0u: goto label_3e42d0;
        case 0x3e42d4u: goto label_3e42d4;
        case 0x3e42d8u: goto label_3e42d8;
        case 0x3e42dcu: goto label_3e42dc;
        case 0x3e42e0u: goto label_3e42e0;
        case 0x3e42e4u: goto label_3e42e4;
        case 0x3e42e8u: goto label_3e42e8;
        case 0x3e42ecu: goto label_3e42ec;
        case 0x3e42f0u: goto label_3e42f0;
        case 0x3e42f4u: goto label_3e42f4;
        case 0x3e42f8u: goto label_3e42f8;
        case 0x3e42fcu: goto label_3e42fc;
        case 0x3e4300u: goto label_3e4300;
        case 0x3e4304u: goto label_3e4304;
        case 0x3e4308u: goto label_3e4308;
        case 0x3e430cu: goto label_3e430c;
        case 0x3e4310u: goto label_3e4310;
        case 0x3e4314u: goto label_3e4314;
        case 0x3e4318u: goto label_3e4318;
        case 0x3e431cu: goto label_3e431c;
        case 0x3e4320u: goto label_3e4320;
        case 0x3e4324u: goto label_3e4324;
        case 0x3e4328u: goto label_3e4328;
        case 0x3e432cu: goto label_3e432c;
        case 0x3e4330u: goto label_3e4330;
        case 0x3e4334u: goto label_3e4334;
        case 0x3e4338u: goto label_3e4338;
        case 0x3e433cu: goto label_3e433c;
        case 0x3e4340u: goto label_3e4340;
        case 0x3e4344u: goto label_3e4344;
        case 0x3e4348u: goto label_3e4348;
        case 0x3e434cu: goto label_3e434c;
        case 0x3e4350u: goto label_3e4350;
        case 0x3e4354u: goto label_3e4354;
        case 0x3e4358u: goto label_3e4358;
        case 0x3e435cu: goto label_3e435c;
        case 0x3e4360u: goto label_3e4360;
        case 0x3e4364u: goto label_3e4364;
        case 0x3e4368u: goto label_3e4368;
        case 0x3e436cu: goto label_3e436c;
        case 0x3e4370u: goto label_3e4370;
        case 0x3e4374u: goto label_3e4374;
        case 0x3e4378u: goto label_3e4378;
        case 0x3e437cu: goto label_3e437c;
        case 0x3e4380u: goto label_3e4380;
        case 0x3e4384u: goto label_3e4384;
        case 0x3e4388u: goto label_3e4388;
        case 0x3e438cu: goto label_3e438c;
        case 0x3e4390u: goto label_3e4390;
        case 0x3e4394u: goto label_3e4394;
        case 0x3e4398u: goto label_3e4398;
        case 0x3e439cu: goto label_3e439c;
        case 0x3e43a0u: goto label_3e43a0;
        case 0x3e43a4u: goto label_3e43a4;
        case 0x3e43a8u: goto label_3e43a8;
        case 0x3e43acu: goto label_3e43ac;
        case 0x3e43b0u: goto label_3e43b0;
        case 0x3e43b4u: goto label_3e43b4;
        case 0x3e43b8u: goto label_3e43b8;
        case 0x3e43bcu: goto label_3e43bc;
        case 0x3e43c0u: goto label_3e43c0;
        case 0x3e43c4u: goto label_3e43c4;
        case 0x3e43c8u: goto label_3e43c8;
        case 0x3e43ccu: goto label_3e43cc;
        case 0x3e43d0u: goto label_3e43d0;
        case 0x3e43d4u: goto label_3e43d4;
        case 0x3e43d8u: goto label_3e43d8;
        case 0x3e43dcu: goto label_3e43dc;
        case 0x3e43e0u: goto label_3e43e0;
        case 0x3e43e4u: goto label_3e43e4;
        case 0x3e43e8u: goto label_3e43e8;
        case 0x3e43ecu: goto label_3e43ec;
        case 0x3e43f0u: goto label_3e43f0;
        case 0x3e43f4u: goto label_3e43f4;
        case 0x3e43f8u: goto label_3e43f8;
        case 0x3e43fcu: goto label_3e43fc;
        case 0x3e4400u: goto label_3e4400;
        case 0x3e4404u: goto label_3e4404;
        case 0x3e4408u: goto label_3e4408;
        case 0x3e440cu: goto label_3e440c;
        case 0x3e4410u: goto label_3e4410;
        case 0x3e4414u: goto label_3e4414;
        case 0x3e4418u: goto label_3e4418;
        case 0x3e441cu: goto label_3e441c;
        case 0x3e4420u: goto label_3e4420;
        case 0x3e4424u: goto label_3e4424;
        case 0x3e4428u: goto label_3e4428;
        case 0x3e442cu: goto label_3e442c;
        case 0x3e4430u: goto label_3e4430;
        case 0x3e4434u: goto label_3e4434;
        case 0x3e4438u: goto label_3e4438;
        case 0x3e443cu: goto label_3e443c;
        case 0x3e4440u: goto label_3e4440;
        case 0x3e4444u: goto label_3e4444;
        case 0x3e4448u: goto label_3e4448;
        case 0x3e444cu: goto label_3e444c;
        case 0x3e4450u: goto label_3e4450;
        case 0x3e4454u: goto label_3e4454;
        case 0x3e4458u: goto label_3e4458;
        case 0x3e445cu: goto label_3e445c;
        case 0x3e4460u: goto label_3e4460;
        case 0x3e4464u: goto label_3e4464;
        case 0x3e4468u: goto label_3e4468;
        case 0x3e446cu: goto label_3e446c;
        case 0x3e4470u: goto label_3e4470;
        case 0x3e4474u: goto label_3e4474;
        case 0x3e4478u: goto label_3e4478;
        case 0x3e447cu: goto label_3e447c;
        case 0x3e4480u: goto label_3e4480;
        case 0x3e4484u: goto label_3e4484;
        case 0x3e4488u: goto label_3e4488;
        case 0x3e448cu: goto label_3e448c;
        case 0x3e4490u: goto label_3e4490;
        case 0x3e4494u: goto label_3e4494;
        case 0x3e4498u: goto label_3e4498;
        case 0x3e449cu: goto label_3e449c;
        case 0x3e44a0u: goto label_3e44a0;
        case 0x3e44a4u: goto label_3e44a4;
        case 0x3e44a8u: goto label_3e44a8;
        case 0x3e44acu: goto label_3e44ac;
        case 0x3e44b0u: goto label_3e44b0;
        case 0x3e44b4u: goto label_3e44b4;
        case 0x3e44b8u: goto label_3e44b8;
        case 0x3e44bcu: goto label_3e44bc;
        case 0x3e44c0u: goto label_3e44c0;
        case 0x3e44c4u: goto label_3e44c4;
        case 0x3e44c8u: goto label_3e44c8;
        case 0x3e44ccu: goto label_3e44cc;
        case 0x3e44d0u: goto label_3e44d0;
        case 0x3e44d4u: goto label_3e44d4;
        case 0x3e44d8u: goto label_3e44d8;
        case 0x3e44dcu: goto label_3e44dc;
        default: break;
    }

    ctx->pc = 0x3e4058u;

label_3e4058:
    // 0x3e4058: 0x27bdfab0  addiu       $sp, $sp, -0x550
    ctx->pc = 0x3e4058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965936));
label_3e405c:
    // 0x3e405c: 0x7fb00500  sq          $s0, 0x500($sp)
    ctx->pc = 0x3e405cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 16));
label_3e4060:
    // 0x3e4060: 0x7fb204e0  sq          $s2, 0x4E0($sp)
    ctx->pc = 0x3e4060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 18));
label_3e4064:
    // 0x3e4064: 0x7fb404c0  sq          $s4, 0x4C0($sp)
    ctx->pc = 0x3e4064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 20));
label_3e4068:
    // 0x3e4068: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3e4068u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e406c:
    // 0x3e406c: 0x7fb604a0  sq          $s6, 0x4A0($sp)
    ctx->pc = 0x3e406cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 22));
label_3e4070:
    // 0x3e4070: 0x7fb104f0  sq          $s1, 0x4F0($sp)
    ctx->pc = 0x3e4070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 17));
label_3e4074:
    // 0x3e4074: 0x3c16006f  lui         $s6, 0x6F
    ctx->pc = 0x3e4074u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)111 << 16));
label_3e4078:
    // 0x3e4078: 0x7fb304d0  sq          $s3, 0x4D0($sp)
    ctx->pc = 0x3e4078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 19));
label_3e407c:
    // 0x3e407c: 0x7fb504b0  sq          $s5, 0x4B0($sp)
    ctx->pc = 0x3e407cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 21));
label_3e4080:
    // 0x3e4080: 0xffbf0490  sd          $ra, 0x490($sp)
    ctx->pc = 0x3e4080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1168), GPR_U64(ctx, 31));
label_3e4084:
    // 0x3e4084: 0xe7ba0540  swc1        $f26, 0x540($sp)
    ctx->pc = 0x3e4084u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1344), bits); }
label_3e4088:
    // 0x3e4088: 0xe7b90538  swc1        $f25, 0x538($sp)
    ctx->pc = 0x3e4088u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1336), bits); }
label_3e408c:
    // 0x3e408c: 0xe7b80530  swc1        $f24, 0x530($sp)
    ctx->pc = 0x3e408cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1328), bits); }
label_3e4090:
    // 0x3e4090: 0xe7b70528  swc1        $f23, 0x528($sp)
    ctx->pc = 0x3e4090u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1320), bits); }
label_3e4094:
    // 0x3e4094: 0xe7b60520  swc1        $f22, 0x520($sp)
    ctx->pc = 0x3e4094u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1312), bits); }
label_3e4098:
    // 0x3e4098: 0xe7b50518  swc1        $f21, 0x518($sp)
    ctx->pc = 0x3e4098u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1304), bits); }
label_3e409c:
    // 0x3e409c: 0xe7b40510  swc1        $f20, 0x510($sp)
    ctx->pc = 0x3e409cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1296), bits); }
label_3e40a0:
    // 0x3e40a0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3e40a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e40a4:
    // 0x3e40a4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e40a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e40a8:
    // 0x3e40a8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e40a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e40ac:
    // 0x3e40ac: 0x40f809  jalr        $v0
label_3e40b0:
    if (ctx->pc == 0x3E40B0u) {
        ctx->pc = 0x3E40B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E40ACu;
        // 0x3e40b0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E40B4u;
        goto label_3e40b4;
    }
    ctx->pc = 0x3E40ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E40B4u);
        ctx->pc = 0x3E40B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E40ACu;
        // 0x3e40b0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E40ACu, 0x3E40B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E40B4u;
label_3e40b4:
    // 0x3e40b4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e40b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e40b8:
    // 0x3e40b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e40b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e40bc:
    // 0x3e40bc: 0x27b00430  addiu       $s0, $sp, 0x430
    ctx->pc = 0x3e40bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3e40c0:
    // 0x3e40c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3e40c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e40c4:
    // 0x3e40c4: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3e40c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3e40c8:
    // 0x3e40c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e40c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3e40cc:
    // 0x3e40cc: 0x0  nop
    ctx->pc = 0x3e40ccu;
    // NOP
label_3e40d0:
    // 0x3e40d0: 0x0  nop
    ctx->pc = 0x3e40d0u;
    // NOP
label_3e40d4:
    // 0x3e40d4: 0x0  nop
    ctx->pc = 0x3e40d4u;
    // NOP
label_3e40d8:
    // 0x3e40d8: 0x0  nop
    ctx->pc = 0x3e40d8u;
    // NOP
label_3e40dc:
    // 0x3e40dc: 0x0  nop
    ctx->pc = 0x3e40dcu;
    // NOP
label_3e40e0:
    // 0x3e40e0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3e40e4:
    if (ctx->pc == 0x3E40E4u) {
        ctx->pc = 0x3E40E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E40E0u;
        // 0x3e40e4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E40E8u;
        goto label_3e40e8;
    }
    ctx->pc = 0x3E40E0u;
    {
        const bool branch_taken_0x3e40e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E40E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E40E0u;
        // 0x3e40e4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e40e0) {
            ctx->pc = 0x3E40D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e40d0;
        }
    }
    ctx->pc = 0x3E40E8u;
label_3e40e8:
    // 0x3e40e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3e40e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3e40ec:
    // 0x3e40ec: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3e40ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3e40f0:
    // 0x3e40f0: 0xc138ddc  jal         func_4E3770
label_3e40f4:
    if (ctx->pc == 0x3E40F4u) {
        ctx->pc = 0x3E40F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E40F0u;
        // 0x3e40f4: 0x26d3b8b8  addiu       $s3, $s6, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E40F8u;
        goto label_3e40f8;
    }
    ctx->pc = 0x3E40F0u;
    SET_GPR_U32(ctx, 31, 0x3E40F8u);
    ctx->pc = 0x3E40F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E40F0u;
    // 0x3e40f4: 0x26d3b8b8  addiu       $s3, $s6, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3E40F0u, 0x3E40F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E40F8u;
label_3e40f8:
    // 0x3e40f8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3e40f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3e40fc:
    // 0x3e40fc: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3e40fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3e4100:
    // 0x3e4100: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3e4100u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3e4104:
    // 0x3e4104: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e4108:
    // 0x3e4108: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x3e4108u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3e410c:
    // 0x3e410c: 0xc0cd518  jal         func_335460
label_3e4110:
    if (ctx->pc == 0x3E4110u) {
        ctx->pc = 0x3E4110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E410Cu;
        // 0x3e4110: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4114u;
        goto label_3e4114;
    }
    ctx->pc = 0x3E410Cu;
    SET_GPR_U32(ctx, 31, 0x3E4114u);
    ctx->pc = 0x3E4110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E410Cu;
    // 0x3e4110: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E410Cu, 0x3E4114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4114u;
label_3e4114:
    // 0x3e4114: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3e4114u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3e4118:
    // 0x3e4118: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e411c:
    // 0x3e411c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3e411cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3e4120:
    // 0x3e4120: 0xc0cd518  jal         func_335460
label_3e4124:
    if (ctx->pc == 0x3E4124u) {
        ctx->pc = 0x3E4124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4120u;
        // 0x3e4124: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4128u;
        goto label_3e4128;
    }
    ctx->pc = 0x3E4120u;
    SET_GPR_U32(ctx, 31, 0x3E4128u);
    ctx->pc = 0x3E4124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4120u;
    // 0x3e4124: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E4120u, 0x3E4128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4128u;
label_3e4128:
    // 0x3e4128: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3e4128u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3e412c:
    // 0x3e412c: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x3e412cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
label_3e4130:
    // 0x3e4130: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3e4130u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3e4134:
    // 0x3e4134: 0xc0cd518  jal         func_335460
label_3e4138:
    if (ctx->pc == 0x3E4138u) {
        ctx->pc = 0x3E4138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4134u;
        // 0x3e4138: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E413Cu;
        goto label_3e413c;
    }
    ctx->pc = 0x3E4134u;
    SET_GPR_U32(ctx, 31, 0x3E413Cu);
    ctx->pc = 0x3E4138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4134u;
    // 0x3e4138: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E4134u, 0x3E413Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E413Cu;
label_3e413c:
    // 0x3e413c: 0xe7b50430  swc1        $f21, 0x430($sp)
    ctx->pc = 0x3e413cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1072), bits); }
label_3e4140:
    // 0x3e4140: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e4140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e4144:
    // 0x3e4144: 0xe7b40434  swc1        $f20, 0x434($sp)
    ctx->pc = 0x3e4144u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1076), bits); }
label_3e4148:
    // 0x3e4148: 0xe7a00438  swc1        $f0, 0x438($sp)
    ctx->pc = 0x3e4148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1080), bits); }
label_3e414c:
    // 0x3e414c: 0xe617000c  swc1        $f23, 0xC($s0)
    ctx->pc = 0x3e414cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3e4150:
    // 0x3e4150: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3e4150u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3e4154:
    // 0x3e4154: 0xc0e87c0  jal         func_3A1F00
label_3e4158:
    if (ctx->pc == 0x3E4158u) {
        ctx->pc = 0x3E4158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4154u;
        // 0x3e4158: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E415Cu;
        goto label_3e415c;
    }
    ctx->pc = 0x3E4154u;
    SET_GPR_U32(ctx, 31, 0x3E415Cu);
    ctx->pc = 0x3E4158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4154u;
    // 0x3e4158: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3E4154u, 0x3E415Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E415Cu;
label_3e415c:
    // 0x3e415c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e415cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e4160:
    // 0x3e4160: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3e4160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e4164:
    // 0x3e4164: 0xc136b18  jal         func_4DAC60
label_3e4168:
    if (ctx->pc == 0x3E4168u) {
        ctx->pc = 0x3E4168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4164u;
        // 0x3e4168: 0x27a50420  addiu       $a1, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E416Cu;
        goto label_3e416c;
    }
    ctx->pc = 0x3E4164u;
    SET_GPR_U32(ctx, 31, 0x3E416Cu);
    ctx->pc = 0x3E4168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4164u;
    // 0x3e4168: 0x27a50420  addiu       $a1, $sp, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3E4164u, 0x3E416Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E416Cu;
label_3e416c:
    // 0x3e416c: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3e416cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3e4170:
    // 0x3e4170: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3e4170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e4174:
    // 0x3e4174: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3e4174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3e4178:
    // 0x3e4178: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3e4178u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3e417c:
    // 0x3e417c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3e417cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3e4180:
    // 0x3e4180: 0x40f809  jalr        $v0
label_3e4184:
    if (ctx->pc == 0x3E4184u) {
        ctx->pc = 0x3E4184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4180u;
        // 0x3e4184: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4188u;
        goto label_3e4188;
    }
    ctx->pc = 0x3E4180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E4188u);
        ctx->pc = 0x3E4184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4180u;
        // 0x3e4184: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4180u, 0x3E4188u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E4188u;
label_3e4188:
    // 0x3e4188: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x3e4188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_3e418c:
    // 0x3e418c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e418cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3e4190:
    // 0x3e4190: 0x104000ae  beqz        $v0, . + 4 + (0xAE << 2)
label_3e4194:
    if (ctx->pc == 0x3E4194u) {
        ctx->pc = 0x3E4194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4190u;
        // 0x3e4194: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4198u;
        goto label_3e4198;
    }
    ctx->pc = 0x3E4190u;
    {
        const bool branch_taken_0x3e4190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4190u;
        // 0x3e4194: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4190) {
            ctx->pc = 0x3E444Cu;
            goto label_3e444c;
        }
    }
    ctx->pc = 0x3E4198u;
label_3e4198:
    // 0x3e4198: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x3e4198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3e419c:
    // 0x3e419c: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x3e419cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
label_3e41a0:
    // 0x3e41a0: 0x7a4400a0  lq          $a0, 0xA0($s2)
    ctx->pc = 0x3e41a0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 160)));
label_3e41a4:
    // 0x3e41a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3e41a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3e41a8:
    // 0x3e41a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3e41a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3e41ac:
    // 0x3e41ac: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3e41acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3e41b0:
    // 0x3e41b0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3e41b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3e41b4:
    // 0x3e41b4: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x3e41b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_3e41b8:
    // 0x3e41b8: 0x7fa40420  sq          $a0, 0x420($sp)
    ctx->pc = 0x3e41b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 4));
label_3e41bc:
    // 0x3e41bc: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x3e41bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_3e41c0:
    // 0x3e41c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e41c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e41c4:
    // 0x3e41c4: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x3e41c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
label_3e41c8:
    // 0x3e41c8: 0xc0cd508  jal         func_335420
label_3e41cc:
    if (ctx->pc == 0x3E41CCu) {
        ctx->pc = 0x3E41CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E41C8u;
        // 0x3e41cc: 0xe7b7042c  swc1        $f23, 0x42C($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1068), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E41D0u;
        goto label_3e41d0;
    }
    ctx->pc = 0x3E41C8u;
    SET_GPR_U32(ctx, 31, 0x3E41D0u);
    ctx->pc = 0x3E41CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E41C8u;
    // 0x3e41cc: 0xe7b7042c  swc1        $f23, 0x42C($sp) (Delay Slot)
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1068), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3E41C8u, 0x3E41D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E41D0u;
label_3e41d0:
    // 0x3e41d0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3e41d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3e41d4:
    // 0x3e41d4: 0xe7b90440  swc1        $f25, 0x440($sp)
    ctx->pc = 0x3e41d4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1088), bits); }
label_3e41d8:
    // 0x3e41d8: 0xe7b90444  swc1        $f25, 0x444($sp)
    ctx->pc = 0x3e41d8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1092), bits); }
label_3e41dc:
    // 0x3e41dc: 0xc12e310  jal         func_4B8C40
label_3e41e0:
    if (ctx->pc == 0x3E41E0u) {
        ctx->pc = 0x3E41E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E41DCu;
        // 0x3e41e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E41E4u;
        goto label_3e41e4;
    }
    ctx->pc = 0x3E41DCu;
    SET_GPR_U32(ctx, 31, 0x3E41E4u);
    ctx->pc = 0x3E41E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E41DCu;
    // 0x3e41e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x3E41DCu, 0x3E41E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E41E4u;
label_3e41e4:
    // 0x3e41e4: 0xe7a00448  swc1        $f0, 0x448($sp)
    ctx->pc = 0x3e41e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1096), bits); }
label_3e41e8:
    // 0x3e41e8: 0xc12e29c  jal         func_4B8A70
label_3e41ec:
    if (ctx->pc == 0x3E41ECu) {
        ctx->pc = 0x3E41ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E41E8u;
        // 0x3e41ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E41F0u;
        goto label_3e41f0;
    }
    ctx->pc = 0x3E41E8u;
    SET_GPR_U32(ctx, 31, 0x3E41F0u);
    ctx->pc = 0x3E41ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E41E8u;
    // 0x3e41ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x3E41E8u, 0x3E41F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E41F0u;
label_3e41f0:
    // 0x3e41f0: 0xe7a0044c  swc1        $f0, 0x44C($sp)
    ctx->pc = 0x3e41f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1100), bits); }
label_3e41f4:
    // 0x3e41f4: 0x27b50450  addiu       $s5, $sp, 0x450
    ctx->pc = 0x3e41f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3e41f8:
    // 0x3e41f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3e41f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3e41fc:
    // 0x3e41fc: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x3e41fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3e4200:
    // 0x3e4200: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3e4200u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3e4204:
    // 0x3e4204: 0xc0cddf0  jal         func_3377C0
label_3e4208:
    if (ctx->pc == 0x3E4208u) {
        ctx->pc = 0x3E4208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4204u;
        // 0x3e4208: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E420Cu;
        goto label_3e420c;
    }
    ctx->pc = 0x3E4204u;
    SET_GPR_U32(ctx, 31, 0x3E420Cu);
    ctx->pc = 0x3E4208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4204u;
    // 0x3e4208: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3377C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3377C0u, 0x3E4204u, 0x3E420Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E420Cu;
label_3e420c:
    // 0x3e420c: 0x7ba30430  lq          $v1, 0x430($sp)
    ctx->pc = 0x3e420cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3e4210:
    // 0x3e4210: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x3e4210u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3e4214:
    // 0x3e4214: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3e4214u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3e4218:
    // 0x3e4218: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3e4218u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3e421c:
    // 0x3e421c: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3e421cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e4220:
    // 0x3e4220: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3e4220u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3e4224:
    // 0x3e4224: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3e4224u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3e4228:
    // 0x3e4228: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3e4228u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e422c:
    // 0x3e422c: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3e422cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3e4230:
    // 0x3e4230: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3e4230u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e4234:
    // 0x3e4234: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3e4234u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3e4238:
    // 0x3e4238: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3e4238u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e423c:
    // 0x3e423c: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3e423cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3e4240:
    // 0x3e4240: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3e4240u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3e4244:
    // 0x3e4244: 0x7e430020  sq          $v1, 0x20($s2)
    ctx->pc = 0x3e4244u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 3));
label_3e4248:
    // 0x3e4248: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e424c:
    // 0x3e424c: 0x7fa30460  sq          $v1, 0x460($sp)
    ctx->pc = 0x3e424cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 3));
label_3e4250:
    // 0x3e4250: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e4250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e4254:
    // 0x3e4254: 0xc0cd4ee  jal         func_3353B8
label_3e4258:
    if (ctx->pc == 0x3E4258u) {
        ctx->pc = 0x3E4258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4254u;
        // 0x3e4258: 0x7fa30440  sq          $v1, 0x440($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E425Cu;
        goto label_3e425c;
    }
    ctx->pc = 0x3E4254u;
    SET_GPR_U32(ctx, 31, 0x3E425Cu);
    ctx->pc = 0x3E4258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4254u;
    // 0x3e4258: 0x7fa30440  sq          $v1, 0x440($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E4254u, 0x3E425Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E425Cu;
label_3e425c:
    // 0x3e425c: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x3e425cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3e4260:
    // 0x3e4260: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3e4260u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3e4264:
    // 0x3e4264: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
label_3e4268:
    if (ctx->pc == 0x3E4268u) {
        ctx->pc = 0x3E4268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4264u;
        // 0x3e4268: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E426Cu;
        goto label_3e426c;
    }
    ctx->pc = 0x3E4264u;
    {
        const bool branch_taken_0x3e4264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4264u;
        // 0x3e4268: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4264) {
            ctx->pc = 0x3E43CCu;
            goto label_3e43cc;
        }
    }
    ctx->pc = 0x3E426Cu;
label_3e426c:
    // 0x3e426c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e426cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e4270:
    // 0x3e4270: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x3e4270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_3e4274:
    // 0x3e4274: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3e4274u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3e4278:
    // 0x3e4278: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3e4278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3e427c:
    // 0x3e427c: 0xc0cd518  jal         func_335460
label_3e4280:
    if (ctx->pc == 0x3E4280u) {
        ctx->pc = 0x3E4280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E427Cu;
        // 0x3e4280: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4284u;
        goto label_3e4284;
    }
    ctx->pc = 0x3E427Cu;
    SET_GPR_U32(ctx, 31, 0x3E4284u);
    ctx->pc = 0x3E4280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E427Cu;
    // 0x3e4280: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E427Cu, 0x3E4284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4284u;
label_3e4284:
    // 0x3e4284: 0x27a40470  addiu       $a0, $sp, 0x470
    ctx->pc = 0x3e4284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3e4288:
    // 0x3e4288: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3e4288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e428c:
    // 0x3e428c: 0xc136b24  jal         func_4DAC90
label_3e4290:
    if (ctx->pc == 0x3E4290u) {
        ctx->pc = 0x3E4290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E428Cu;
        // 0x3e4290: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4294u;
        goto label_3e4294;
    }
    ctx->pc = 0x3E428Cu;
    SET_GPR_U32(ctx, 31, 0x3E4294u);
    ctx->pc = 0x3E4290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E428Cu;
    // 0x3e4290: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3E428Cu, 0x3E4294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4294u;
label_3e4294:
    // 0x3e4294: 0x7ba20470  lq          $v0, 0x470($sp)
    ctx->pc = 0x3e4294u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3e4298:
    // 0x3e4298: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e429c:
    // 0x3e429c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3e429cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3e42a0:
    // 0x3e42a0: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x3e42a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_3e42a4:
    // 0x3e42a4: 0xc0cd518  jal         func_335460
label_3e42a8:
    if (ctx->pc == 0x3E42A8u) {
        ctx->pc = 0x3E42A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E42A4u;
        // 0x3e42a8: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E42ACu;
        goto label_3e42ac;
    }
    ctx->pc = 0x3E42A4u;
    SET_GPR_U32(ctx, 31, 0x3E42ACu);
    ctx->pc = 0x3E42A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E42A4u;
    // 0x3e42a8: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E42A4u, 0x3E42ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E42ACu;
label_3e42ac:
    // 0x3e42ac: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x3e42acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_3e42b0:
    // 0x3e42b0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3e42b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3e42b4:
    // 0x3e42b4: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3e42b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3e42b8:
    // 0x3e42b8: 0xc0cd518  jal         func_335460
label_3e42bc:
    if (ctx->pc == 0x3E42BCu) {
        ctx->pc = 0x3E42BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E42B8u;
        // 0x3e42bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E42C0u;
        goto label_3e42c0;
    }
    ctx->pc = 0x3E42B8u;
    SET_GPR_U32(ctx, 31, 0x3E42C0u);
    ctx->pc = 0x3E42BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E42B8u;
    // 0x3e42bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E42B8u, 0x3E42C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E42C0u;
label_3e42c0:
    // 0x3e42c0: 0x27a30480  addiu       $v1, $sp, 0x480
    ctx->pc = 0x3e42c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3e42c4:
    // 0x3e42c4: 0xe7b40480  swc1        $f20, 0x480($sp)
    ctx->pc = 0x3e42c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1152), bits); }
label_3e42c8:
    // 0x3e42c8: 0xe7a00484  swc1        $f0, 0x484($sp)
    ctx->pc = 0x3e42c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1156), bits); }
label_3e42cc:
    // 0x3e42cc: 0x27a50460  addiu       $a1, $sp, 0x460
    ctx->pc = 0x3e42ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3e42d0:
    // 0x3e42d0: 0xe7b90488  swc1        $f25, 0x488($sp)
    ctx->pc = 0x3e42d0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1160), bits); }
label_3e42d4:
    // 0x3e42d4: 0x27a60470  addiu       $a2, $sp, 0x470
    ctx->pc = 0x3e42d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3e42d8:
    // 0x3e42d8: 0xe477000c  swc1        $f23, 0xC($v1)
    ctx->pc = 0x3e42d8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3e42dc:
    // 0x3e42dc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3e42dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3e42e0:
    // 0x3e42e0: 0x7ba20480  lq          $v0, 0x480($sp)
    ctx->pc = 0x3e42e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3e42e4:
    // 0x3e42e4: 0xc136b18  jal         func_4DAC60
label_3e42e8:
    if (ctx->pc == 0x3E42E8u) {
        ctx->pc = 0x3E42E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E42E4u;
        // 0x3e42e8: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E42ECu;
        goto label_3e42ec;
    }
    ctx->pc = 0x3E42E4u;
    SET_GPR_U32(ctx, 31, 0x3E42ECu);
    ctx->pc = 0x3E42E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E42E4u;
    // 0x3e42e8: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3E42E4u, 0x3E42ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E42ECu;
label_3e42ec:
    // 0x3e42ec: 0x7ba20480  lq          $v0, 0x480($sp)
    ctx->pc = 0x3e42ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3e42f0:
    // 0x3e42f0: 0x27a40410  addiu       $a0, $sp, 0x410
    ctx->pc = 0x3e42f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3e42f4:
    // 0x3e42f4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3e42f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_3e42f8:
    // 0x3e42f8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3e42f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3e42fc:
    // 0x3e42fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e42fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e4300:
    // 0x3e4300: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3e4300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e4304:
    // 0x3e4304: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3e4304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3e4308:
    // 0x3e4308: 0xc136b24  jal         func_4DAC90
label_3e430c:
    if (ctx->pc == 0x3E430Cu) {
        ctx->pc = 0x3E430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4308u;
        // 0x3e430c: 0x7fa20450  sq          $v0, 0x450($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4310u;
        goto label_3e4310;
    }
    ctx->pc = 0x3E4308u;
    SET_GPR_U32(ctx, 31, 0x3E4310u);
    ctx->pc = 0x3E430Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4308u;
    // 0x3e430c: 0x7fa20450  sq          $v0, 0x450($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3E4308u, 0x3E4310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4310u;
label_3e4310:
    // 0x3e4310: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x3e4310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_3e4314:
    // 0x3e4314: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3e4314u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3e4318:
    // 0x3e4318: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e4318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e431c:
    // 0x3e431c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3e431cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3e4320:
    // 0x3e4320: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3e4320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3e4324:
    // 0x3e4324: 0xc0cd518  jal         func_335460
label_3e4328:
    if (ctx->pc == 0x3E4328u) {
        ctx->pc = 0x3E4328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4324u;
        // 0x3e4328: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E432Cu;
        goto label_3e432c;
    }
    ctx->pc = 0x3E4324u;
    SET_GPR_U32(ctx, 31, 0x3E432Cu);
    ctx->pc = 0x3E4328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4324u;
    // 0x3e4328: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E4324u, 0x3E432Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E432Cu;
label_3e432c:
    // 0x3e432c: 0xe7a00418  swc1        $f0, 0x418($sp)
    ctx->pc = 0x3e432cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1048), bits); }
label_3e4330:
    // 0x3e4330: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x3e4330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3e4334:
    // 0x3e4334: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3e4334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e4338:
    // 0x3e4338: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3e4338u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3e433c:
    // 0x3e433c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3e433cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3e4340:
    // 0x3e4340: 0x60f809  jalr        $v1
label_3e4344:
    if (ctx->pc == 0x3E4344u) {
        ctx->pc = 0x3E4344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4340u;
        // 0x3e4344: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4348u;
        goto label_3e4348;
    }
    ctx->pc = 0x3E4340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E4348u);
        ctx->pc = 0x3E4344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4340u;
        // 0x3e4344: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4340u, 0x3E4348u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E4348u;
label_3e4348:
    // 0x3e4348: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x3e4348u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e434c:
    // 0x3e434c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e434cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e4350:
    // 0x3e4350: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3e4350u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3e4354:
    // 0x3e4354: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x3e4354u;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
label_3e4358:
    // 0x3e4358: 0x86300078  lh          $s0, 0x78($s1)
    ctx->pc = 0x3e4358u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
label_3e435c:
    // 0x3e435c: 0x26310078  addiu       $s1, $s1, 0x78
    ctx->pc = 0x3e435cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_3e4360:
    // 0x3e4360: 0xc0cd518  jal         func_335460
label_3e4364:
    if (ctx->pc == 0x3E4364u) {
        ctx->pc = 0x3E4364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4360u;
        // 0x3e4364: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4368u;
        goto label_3e4368;
    }
    ctx->pc = 0x3E4360u;
    SET_GPR_U32(ctx, 31, 0x3E4368u);
    ctx->pc = 0x3E4364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4360u;
    // 0x3e4364: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E4360u, 0x3E4368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4368u;
label_3e4368:
    // 0x3e4368: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3e4368u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3e436c:
    // 0x3e436c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e436cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e4370:
    // 0x3e4370: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3e4370u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3e4374:
    // 0x3e4374: 0xc0cd518  jal         func_335460
label_3e4378:
    if (ctx->pc == 0x3E4378u) {
        ctx->pc = 0x3E4378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4374u;
        // 0x3e4378: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E437Cu;
        goto label_3e437c;
    }
    ctx->pc = 0x3E4374u;
    SET_GPR_U32(ctx, 31, 0x3E437Cu);
    ctx->pc = 0x3E4378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4374u;
    // 0x3e4378: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E4374u, 0x3E437Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E437Cu;
label_3e437c:
    // 0x3e437c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3e437cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3e4380:
    // 0x3e4380: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e4384:
    // 0x3e4384: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3e4384u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3e4388:
    // 0x3e4388: 0xc0cd518  jal         func_335460
label_3e438c:
    if (ctx->pc == 0x3E438Cu) {
        ctx->pc = 0x3E438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4388u;
        // 0x3e438c: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4390u;
        goto label_3e4390;
    }
    ctx->pc = 0x3E4388u;
    SET_GPR_U32(ctx, 31, 0x3E4390u);
    ctx->pc = 0x3E438Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4388u;
    // 0x3e438c: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E4388u, 0x3E4390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4390u;
label_3e4390:
    // 0x3e4390: 0xe7b50460  swc1        $f21, 0x460($sp)
    ctx->pc = 0x3e4390u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1120), bits); }
label_3e4394:
    // 0x3e4394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e4394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e4398:
    // 0x3e4398: 0xe7b40464  swc1        $f20, 0x464($sp)
    ctx->pc = 0x3e4398u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1124), bits); }
label_3e439c:
    // 0x3e439c: 0xe7a00468  swc1        $f0, 0x468($sp)
    ctx->pc = 0x3e439cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1128), bits); }
label_3e43a0:
    // 0x3e43a0: 0xe7b7046c  swc1        $f23, 0x46C($sp)
    ctx->pc = 0x3e43a0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1132), bits); }
label_3e43a4:
    // 0x3e43a4: 0x7ba20460  lq          $v0, 0x460($sp)
    ctx->pc = 0x3e43a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3e43a8:
    // 0x3e43a8: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3e43a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3e43ac:
    // 0x3e43ac: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3e43acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e43b0:
    // 0x3e43b0: 0x60f809  jalr        $v1
label_3e43b4:
    if (ctx->pc == 0x3E43B4u) {
        ctx->pc = 0x3E43B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E43B0u;
        // 0x3e43b4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E43B8u;
        goto label_3e43b8;
    }
    ctx->pc = 0x3E43B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E43B8u);
        ctx->pc = 0x3E43B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E43B0u;
        // 0x3e43b4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E43B0u, 0x3E43B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E43B8u;
label_3e43b8:
    // 0x3e43b8: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x3e43b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3e43bc:
    // 0x3e43bc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3e43bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_3e43c0:
    // 0x3e43c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3e43c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3e43c4:
    // 0x3e43c4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_3e43c8:
    if (ctx->pc == 0x3E43C8u) {
        ctx->pc = 0x3E43C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E43C4u;
        // 0x3e43c8: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E43CCu;
        goto label_3e43cc;
    }
    ctx->pc = 0x3E43C4u;
    {
        const bool branch_taken_0x3e43c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E43C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E43C4u;
        // 0x3e43c8: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e43c4) {
            ctx->pc = 0x3E4440u;
            goto label_3e4440;
        }
    }
    ctx->pc = 0x3E43CCu;
label_3e43cc:
    // 0x3e43cc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3e43ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e43d0:
    // 0x3e43d0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3e43d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3e43d4:
    // 0x3e43d4: 0x261016c0  addiu       $s0, $s0, 0x16C0
    ctx->pc = 0x3e43d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_3e43d8:
    // 0x3e43d8: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x3e43d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_3e43dc:
    // 0x3e43dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e43dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e43e0:
    // 0x3e43e0: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x3e43e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_3e43e4:
    // 0x3e43e4: 0x40f809  jalr        $v0
label_3e43e8:
    if (ctx->pc == 0x3E43E8u) {
        ctx->pc = 0x3E43E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E43E4u;
        // 0x3e43e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E43ECu;
        goto label_3e43ec;
    }
    ctx->pc = 0x3E43E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E43ECu);
        ctx->pc = 0x3E43E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E43E4u;
        // 0x3e43e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E43E4u, 0x3E43ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E43ECu;
label_3e43ec:
    // 0x3e43ec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3e43ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e43f0:
    // 0x3e43f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e43f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e43f4:
    // 0x3e43f4: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x3e43f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_3e43f8:
    // 0x3e43f8: 0x8c66007c  lw          $a2, 0x7C($v1)
    ctx->pc = 0x3e43f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_3e43fc:
    // 0x3e43fc: 0xc0f809  jalr        $a2
label_3e4400:
    if (ctx->pc == 0x3E4400u) {
        ctx->pc = 0x3E4400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E43FCu;
        // 0x3e4400: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4404u;
        goto label_3e4404;
    }
    ctx->pc = 0x3E43FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3E4404u);
        ctx->pc = 0x3E4400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E43FCu;
        // 0x3e4400: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E43FCu, 0x3E4404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E4404u;
label_3e4404:
    // 0x3e4404: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x3e4404u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_3e4408:
    // 0x3e4408: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x3e4408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_3e440c:
    // 0x3e440c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3e440cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3e4410:
    // 0x3e4410: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e4410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e4414:
    // 0x3e4414: 0x7e820010  sq          $v0, 0x10($s4)
    ctx->pc = 0x3e4414u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
label_3e4418:
    // 0x3e4418: 0xc7a00428  lwc1        $f0, 0x428($sp)
    ctx->pc = 0x3e4418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e441c:
    // 0x3e441c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3e441cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e4420:
    // 0x3e4420: 0x0  nop
    ctx->pc = 0x3e4420u;
    // NOP
label_3e4424:
    // 0x3e4424: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_3e4428:
    if (ctx->pc == 0x3E4428u) {
        ctx->pc = 0x3E4428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4424u;
        // 0x3e4428: 0x8e820024  lw          $v0, 0x24($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E442Cu;
        goto label_3e442c;
    }
    ctx->pc = 0x3E4424u;
    {
        const bool branch_taken_0x3e4424 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e4424) {
            ctx->pc = 0x3E4428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4424u;
            // 0x3e4428: 0x8e820024  lw          $v0, 0x24($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4444u;
            goto label_3e4444;
        }
    }
    ctx->pc = 0x3E442Cu;
label_3e442c:
    // 0x3e442c: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x3e442cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3e4430:
    // 0x3e4430: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x3e4430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
label_3e4434:
    // 0x3e4434: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3e4434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3e4438:
    // 0x3e4438: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3e4438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3e443c:
    // 0x3e443c: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x3e443cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_3e4440:
    // 0x3e4440: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3e4440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3e4444:
    // 0x3e4444: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e4444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e4448:
    // 0x3e4448: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x3e4448u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
label_3e444c:
    // 0x3e444c: 0x9642006e  lhu         $v0, 0x6E($s2)
    ctx->pc = 0x3e444cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 110)));
label_3e4450:
    // 0x3e4450: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x3e4450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_3e4454:
    // 0x3e4454: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3e4454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e4458:
    // 0x3e4458: 0x2c64003c  sltiu       $a0, $v1, 0x3C
    ctx->pc = 0x3e4458u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
label_3e445c:
    // 0x3e445c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3e4460:
    if (ctx->pc == 0x3E4460u) {
        ctx->pc = 0x3E4460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E445Cu;
        // 0x3e4460: 0xae830020  sw          $v1, 0x20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4464u;
        goto label_3e4464;
    }
    ctx->pc = 0x3E445Cu;
    {
        const bool branch_taken_0x3e445c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E4460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E445Cu;
        // 0x3e4460: 0xae830020  sw          $v1, 0x20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e445c) {
            ctx->pc = 0x3E4478u;
            goto label_3e4478;
        }
    }
    ctx->pc = 0x3E4464u;
label_3e4464:
    // 0x3e4464: 0x26c4b8b8  addiu       $a0, $s6, -0x4748
    ctx->pc = 0x3e4464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949048));
label_3e4468:
    // 0x3e4468: 0xc0cd4ee  jal         func_3353B8
label_3e446c:
    if (ctx->pc == 0x3E446Cu) {
        ctx->pc = 0x3E446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4468u;
        // 0x3e446c: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4470u;
        goto label_3e4470;
    }
    ctx->pc = 0x3E4468u;
    SET_GPR_U32(ctx, 31, 0x3E4470u);
    ctx->pc = 0x3E446Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4468u;
    // 0x3e446c: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E4468u, 0x3E4470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4470u;
label_3e4470:
    // 0x3e4470: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x3e4470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
label_3e4474:
    // 0x3e4474: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x3e4474u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
label_3e4478:
    // 0x3e4478: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x3e4478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_3e447c:
    // 0x3e447c: 0x2c420078  sltiu       $v0, $v0, 0x78
    ctx->pc = 0x3e447cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)120) ? 1 : 0);
label_3e4480:
    // 0x3e4480: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3e4484:
    if (ctx->pc == 0x3E4484u) {
        ctx->pc = 0x3E4484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4480u;
        // 0x3e4484: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4488u;
        goto label_3e4488;
    }
    ctx->pc = 0x3E4480u;
    {
        const bool branch_taken_0x3e4480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4480u;
        // 0x3e4484: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4480) {
            ctx->pc = 0x3E449Cu;
            goto label_3e449c;
        }
    }
    ctx->pc = 0x3E4488u;
label_3e4488:
    // 0x3e4488: 0xc0e9694  jal         func_3A5A50
label_3e448c:
    if (ctx->pc == 0x3E448Cu) {
        ctx->pc = 0x3E448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4488u;
        // 0x3e448c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4490u;
        goto label_3e4490;
    }
    ctx->pc = 0x3E4488u;
    SET_GPR_U32(ctx, 31, 0x3E4490u);
    ctx->pc = 0x3E448Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4488u;
    // 0x3e448c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3E4488u, 0x3E4490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4490u;
label_3e4490:
    // 0x3e4490: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3e4494:
    if (ctx->pc == 0x3E4494u) {
        ctx->pc = 0x3E4494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4490u;
        // 0x3e4494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4498u;
        goto label_3e4498;
    }
    ctx->pc = 0x3E4490u;
    {
        const bool branch_taken_0x3e4490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E4494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4490u;
        // 0x3e4494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4490) {
            ctx->pc = 0x3E449Cu;
            goto label_3e449c;
        }
    }
    ctx->pc = 0x3E4498u;
label_3e4498:
    // 0x3e4498: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e4498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e449c:
    // 0x3e449c: 0x7bb00500  lq          $s0, 0x500($sp)
    ctx->pc = 0x3e449cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_3e44a0:
    // 0x3e44a0: 0x7bb104f0  lq          $s1, 0x4F0($sp)
    ctx->pc = 0x3e44a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_3e44a4:
    // 0x3e44a4: 0x7bb204e0  lq          $s2, 0x4E0($sp)
    ctx->pc = 0x3e44a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_3e44a8:
    // 0x3e44a8: 0x7bb304d0  lq          $s3, 0x4D0($sp)
    ctx->pc = 0x3e44a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_3e44ac:
    // 0x3e44ac: 0x7bb404c0  lq          $s4, 0x4C0($sp)
    ctx->pc = 0x3e44acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3e44b0:
    // 0x3e44b0: 0x7bb504b0  lq          $s5, 0x4B0($sp)
    ctx->pc = 0x3e44b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3e44b4:
    // 0x3e44b4: 0x7bb604a0  lq          $s6, 0x4A0($sp)
    ctx->pc = 0x3e44b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3e44b8:
    // 0x3e44b8: 0xdfbf0490  ld          $ra, 0x490($sp)
    ctx->pc = 0x3e44b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1168)));
label_3e44bc:
    // 0x3e44bc: 0xc7ba0540  lwc1        $f26, 0x540($sp)
    ctx->pc = 0x3e44bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_3e44c0:
    // 0x3e44c0: 0xc7b90538  lwc1        $f25, 0x538($sp)
    ctx->pc = 0x3e44c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3e44c4:
    // 0x3e44c4: 0xc7b80530  lwc1        $f24, 0x530($sp)
    ctx->pc = 0x3e44c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3e44c8:
    // 0x3e44c8: 0xc7b70528  lwc1        $f23, 0x528($sp)
    ctx->pc = 0x3e44c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3e44cc:
    // 0x3e44cc: 0xc7b60520  lwc1        $f22, 0x520($sp)
    ctx->pc = 0x3e44ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3e44d0:
    // 0x3e44d0: 0xc7b50518  lwc1        $f21, 0x518($sp)
    ctx->pc = 0x3e44d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3e44d4:
    // 0x3e44d4: 0xc7b40510  lwc1        $f20, 0x510($sp)
    ctx->pc = 0x3e44d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3e44d8:
    // 0x3e44d8: 0x3e00008  jr          $ra
label_3e44dc:
    if (ctx->pc == 0x3E44DCu) {
        ctx->pc = 0x3E44DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E44D8u;
        // 0x3e44dc: 0x27bd0550  addiu       $sp, $sp, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E44E0u;
        goto label_fallthrough_0x3e44d8;
    }
    ctx->pc = 0x3E44D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E44DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E44D8u;
        // 0x3e44dc: 0x27bd0550  addiu       $sp, $sp, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E44D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e44d8:
    ctx->pc = 0x3E44E0u;
}
