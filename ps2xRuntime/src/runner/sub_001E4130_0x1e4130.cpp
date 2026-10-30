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

// Function: sub_001E4130
// Address: 0x1e4130 - 0x1e4540
void sub_001E4130_0x1e4130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4130_0x1e4130");
#endif

    switch (ctx->pc) {
        case 0x1e4130u: goto label_1e4130;
        case 0x1e4134u: goto label_1e4134;
        case 0x1e4138u: goto label_1e4138;
        case 0x1e413cu: goto label_1e413c;
        case 0x1e4140u: goto label_1e4140;
        case 0x1e4144u: goto label_1e4144;
        case 0x1e4148u: goto label_1e4148;
        case 0x1e414cu: goto label_1e414c;
        case 0x1e4150u: goto label_1e4150;
        case 0x1e4154u: goto label_1e4154;
        case 0x1e4158u: goto label_1e4158;
        case 0x1e415cu: goto label_1e415c;
        case 0x1e4160u: goto label_1e4160;
        case 0x1e4164u: goto label_1e4164;
        case 0x1e4168u: goto label_1e4168;
        case 0x1e416cu: goto label_1e416c;
        case 0x1e4170u: goto label_1e4170;
        case 0x1e4174u: goto label_1e4174;
        case 0x1e4178u: goto label_1e4178;
        case 0x1e417cu: goto label_1e417c;
        case 0x1e4180u: goto label_1e4180;
        case 0x1e4184u: goto label_1e4184;
        case 0x1e4188u: goto label_1e4188;
        case 0x1e418cu: goto label_1e418c;
        case 0x1e4190u: goto label_1e4190;
        case 0x1e4194u: goto label_1e4194;
        case 0x1e4198u: goto label_1e4198;
        case 0x1e419cu: goto label_1e419c;
        case 0x1e41a0u: goto label_1e41a0;
        case 0x1e41a4u: goto label_1e41a4;
        case 0x1e41a8u: goto label_1e41a8;
        case 0x1e41acu: goto label_1e41ac;
        case 0x1e41b0u: goto label_1e41b0;
        case 0x1e41b4u: goto label_1e41b4;
        case 0x1e41b8u: goto label_1e41b8;
        case 0x1e41bcu: goto label_1e41bc;
        case 0x1e41c0u: goto label_1e41c0;
        case 0x1e41c4u: goto label_1e41c4;
        case 0x1e41c8u: goto label_1e41c8;
        case 0x1e41ccu: goto label_1e41cc;
        case 0x1e41d0u: goto label_1e41d0;
        case 0x1e41d4u: goto label_1e41d4;
        case 0x1e41d8u: goto label_1e41d8;
        case 0x1e41dcu: goto label_1e41dc;
        case 0x1e41e0u: goto label_1e41e0;
        case 0x1e41e4u: goto label_1e41e4;
        case 0x1e41e8u: goto label_1e41e8;
        case 0x1e41ecu: goto label_1e41ec;
        case 0x1e41f0u: goto label_1e41f0;
        case 0x1e41f4u: goto label_1e41f4;
        case 0x1e41f8u: goto label_1e41f8;
        case 0x1e41fcu: goto label_1e41fc;
        case 0x1e4200u: goto label_1e4200;
        case 0x1e4204u: goto label_1e4204;
        case 0x1e4208u: goto label_1e4208;
        case 0x1e420cu: goto label_1e420c;
        case 0x1e4210u: goto label_1e4210;
        case 0x1e4214u: goto label_1e4214;
        case 0x1e4218u: goto label_1e4218;
        case 0x1e421cu: goto label_1e421c;
        case 0x1e4220u: goto label_1e4220;
        case 0x1e4224u: goto label_1e4224;
        case 0x1e4228u: goto label_1e4228;
        case 0x1e422cu: goto label_1e422c;
        case 0x1e4230u: goto label_1e4230;
        case 0x1e4234u: goto label_1e4234;
        case 0x1e4238u: goto label_1e4238;
        case 0x1e423cu: goto label_1e423c;
        case 0x1e4240u: goto label_1e4240;
        case 0x1e4244u: goto label_1e4244;
        case 0x1e4248u: goto label_1e4248;
        case 0x1e424cu: goto label_1e424c;
        case 0x1e4250u: goto label_1e4250;
        case 0x1e4254u: goto label_1e4254;
        case 0x1e4258u: goto label_1e4258;
        case 0x1e425cu: goto label_1e425c;
        case 0x1e4260u: goto label_1e4260;
        case 0x1e4264u: goto label_1e4264;
        case 0x1e4268u: goto label_1e4268;
        case 0x1e426cu: goto label_1e426c;
        case 0x1e4270u: goto label_1e4270;
        case 0x1e4274u: goto label_1e4274;
        case 0x1e4278u: goto label_1e4278;
        case 0x1e427cu: goto label_1e427c;
        case 0x1e4280u: goto label_1e4280;
        case 0x1e4284u: goto label_1e4284;
        case 0x1e4288u: goto label_1e4288;
        case 0x1e428cu: goto label_1e428c;
        case 0x1e4290u: goto label_1e4290;
        case 0x1e4294u: goto label_1e4294;
        case 0x1e4298u: goto label_1e4298;
        case 0x1e429cu: goto label_1e429c;
        case 0x1e42a0u: goto label_1e42a0;
        case 0x1e42a4u: goto label_1e42a4;
        case 0x1e42a8u: goto label_1e42a8;
        case 0x1e42acu: goto label_1e42ac;
        case 0x1e42b0u: goto label_1e42b0;
        case 0x1e42b4u: goto label_1e42b4;
        case 0x1e42b8u: goto label_1e42b8;
        case 0x1e42bcu: goto label_1e42bc;
        case 0x1e42c0u: goto label_1e42c0;
        case 0x1e42c4u: goto label_1e42c4;
        case 0x1e42c8u: goto label_1e42c8;
        case 0x1e42ccu: goto label_1e42cc;
        case 0x1e42d0u: goto label_1e42d0;
        case 0x1e42d4u: goto label_1e42d4;
        case 0x1e42d8u: goto label_1e42d8;
        case 0x1e42dcu: goto label_1e42dc;
        case 0x1e42e0u: goto label_1e42e0;
        case 0x1e42e4u: goto label_1e42e4;
        case 0x1e42e8u: goto label_1e42e8;
        case 0x1e42ecu: goto label_1e42ec;
        case 0x1e42f0u: goto label_1e42f0;
        case 0x1e42f4u: goto label_1e42f4;
        case 0x1e42f8u: goto label_1e42f8;
        case 0x1e42fcu: goto label_1e42fc;
        case 0x1e4300u: goto label_1e4300;
        case 0x1e4304u: goto label_1e4304;
        case 0x1e4308u: goto label_1e4308;
        case 0x1e430cu: goto label_1e430c;
        case 0x1e4310u: goto label_1e4310;
        case 0x1e4314u: goto label_1e4314;
        case 0x1e4318u: goto label_1e4318;
        case 0x1e431cu: goto label_1e431c;
        case 0x1e4320u: goto label_1e4320;
        case 0x1e4324u: goto label_1e4324;
        case 0x1e4328u: goto label_1e4328;
        case 0x1e432cu: goto label_1e432c;
        case 0x1e4330u: goto label_1e4330;
        case 0x1e4334u: goto label_1e4334;
        case 0x1e4338u: goto label_1e4338;
        case 0x1e433cu: goto label_1e433c;
        case 0x1e4340u: goto label_1e4340;
        case 0x1e4344u: goto label_1e4344;
        case 0x1e4348u: goto label_1e4348;
        case 0x1e434cu: goto label_1e434c;
        case 0x1e4350u: goto label_1e4350;
        case 0x1e4354u: goto label_1e4354;
        case 0x1e4358u: goto label_1e4358;
        case 0x1e435cu: goto label_1e435c;
        case 0x1e4360u: goto label_1e4360;
        case 0x1e4364u: goto label_1e4364;
        case 0x1e4368u: goto label_1e4368;
        case 0x1e436cu: goto label_1e436c;
        case 0x1e4370u: goto label_1e4370;
        case 0x1e4374u: goto label_1e4374;
        case 0x1e4378u: goto label_1e4378;
        case 0x1e437cu: goto label_1e437c;
        case 0x1e4380u: goto label_1e4380;
        case 0x1e4384u: goto label_1e4384;
        case 0x1e4388u: goto label_1e4388;
        case 0x1e438cu: goto label_1e438c;
        case 0x1e4390u: goto label_1e4390;
        case 0x1e4394u: goto label_1e4394;
        case 0x1e4398u: goto label_1e4398;
        case 0x1e439cu: goto label_1e439c;
        case 0x1e43a0u: goto label_1e43a0;
        case 0x1e43a4u: goto label_1e43a4;
        case 0x1e43a8u: goto label_1e43a8;
        case 0x1e43acu: goto label_1e43ac;
        case 0x1e43b0u: goto label_1e43b0;
        case 0x1e43b4u: goto label_1e43b4;
        case 0x1e43b8u: goto label_1e43b8;
        case 0x1e43bcu: goto label_1e43bc;
        case 0x1e43c0u: goto label_1e43c0;
        case 0x1e43c4u: goto label_1e43c4;
        case 0x1e43c8u: goto label_1e43c8;
        case 0x1e43ccu: goto label_1e43cc;
        case 0x1e43d0u: goto label_1e43d0;
        case 0x1e43d4u: goto label_1e43d4;
        case 0x1e43d8u: goto label_1e43d8;
        case 0x1e43dcu: goto label_1e43dc;
        case 0x1e43e0u: goto label_1e43e0;
        case 0x1e43e4u: goto label_1e43e4;
        case 0x1e43e8u: goto label_1e43e8;
        case 0x1e43ecu: goto label_1e43ec;
        case 0x1e43f0u: goto label_1e43f0;
        case 0x1e43f4u: goto label_1e43f4;
        case 0x1e43f8u: goto label_1e43f8;
        case 0x1e43fcu: goto label_1e43fc;
        case 0x1e4400u: goto label_1e4400;
        case 0x1e4404u: goto label_1e4404;
        case 0x1e4408u: goto label_1e4408;
        case 0x1e440cu: goto label_1e440c;
        case 0x1e4410u: goto label_1e4410;
        case 0x1e4414u: goto label_1e4414;
        case 0x1e4418u: goto label_1e4418;
        case 0x1e441cu: goto label_1e441c;
        case 0x1e4420u: goto label_1e4420;
        case 0x1e4424u: goto label_1e4424;
        case 0x1e4428u: goto label_1e4428;
        case 0x1e442cu: goto label_1e442c;
        case 0x1e4430u: goto label_1e4430;
        case 0x1e4434u: goto label_1e4434;
        case 0x1e4438u: goto label_1e4438;
        case 0x1e443cu: goto label_1e443c;
        case 0x1e4440u: goto label_1e4440;
        case 0x1e4444u: goto label_1e4444;
        case 0x1e4448u: goto label_1e4448;
        case 0x1e444cu: goto label_1e444c;
        case 0x1e4450u: goto label_1e4450;
        case 0x1e4454u: goto label_1e4454;
        case 0x1e4458u: goto label_1e4458;
        case 0x1e445cu: goto label_1e445c;
        case 0x1e4460u: goto label_1e4460;
        case 0x1e4464u: goto label_1e4464;
        case 0x1e4468u: goto label_1e4468;
        case 0x1e446cu: goto label_1e446c;
        case 0x1e4470u: goto label_1e4470;
        case 0x1e4474u: goto label_1e4474;
        case 0x1e4478u: goto label_1e4478;
        case 0x1e447cu: goto label_1e447c;
        case 0x1e4480u: goto label_1e4480;
        case 0x1e4484u: goto label_1e4484;
        case 0x1e4488u: goto label_1e4488;
        case 0x1e448cu: goto label_1e448c;
        case 0x1e4490u: goto label_1e4490;
        case 0x1e4494u: goto label_1e4494;
        case 0x1e4498u: goto label_1e4498;
        case 0x1e449cu: goto label_1e449c;
        case 0x1e44a0u: goto label_1e44a0;
        case 0x1e44a4u: goto label_1e44a4;
        case 0x1e44a8u: goto label_1e44a8;
        case 0x1e44acu: goto label_1e44ac;
        case 0x1e44b0u: goto label_1e44b0;
        case 0x1e44b4u: goto label_1e44b4;
        case 0x1e44b8u: goto label_1e44b8;
        case 0x1e44bcu: goto label_1e44bc;
        case 0x1e44c0u: goto label_1e44c0;
        case 0x1e44c4u: goto label_1e44c4;
        case 0x1e44c8u: goto label_1e44c8;
        case 0x1e44ccu: goto label_1e44cc;
        case 0x1e44d0u: goto label_1e44d0;
        case 0x1e44d4u: goto label_1e44d4;
        case 0x1e44d8u: goto label_1e44d8;
        case 0x1e44dcu: goto label_1e44dc;
        case 0x1e44e0u: goto label_1e44e0;
        case 0x1e44e4u: goto label_1e44e4;
        case 0x1e44e8u: goto label_1e44e8;
        case 0x1e44ecu: goto label_1e44ec;
        case 0x1e44f0u: goto label_1e44f0;
        case 0x1e44f4u: goto label_1e44f4;
        case 0x1e44f8u: goto label_1e44f8;
        case 0x1e44fcu: goto label_1e44fc;
        case 0x1e4500u: goto label_1e4500;
        case 0x1e4504u: goto label_1e4504;
        case 0x1e4508u: goto label_1e4508;
        case 0x1e450cu: goto label_1e450c;
        case 0x1e4510u: goto label_1e4510;
        case 0x1e4514u: goto label_1e4514;
        case 0x1e4518u: goto label_1e4518;
        case 0x1e451cu: goto label_1e451c;
        case 0x1e4520u: goto label_1e4520;
        case 0x1e4524u: goto label_1e4524;
        case 0x1e4528u: goto label_1e4528;
        case 0x1e452cu: goto label_1e452c;
        case 0x1e4530u: goto label_1e4530;
        case 0x1e4534u: goto label_1e4534;
        case 0x1e4538u: goto label_1e4538;
        case 0x1e453cu: goto label_1e453c;
        default: break;
    }

    ctx->pc = 0x1e4130u;

label_1e4130:
    // 0x1e4130: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1e4130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1e4134:
    // 0x1e4134: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e4134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e4138:
    // 0x1e4138: 0x3c013f14  lui         $at, 0x3F14
    ctx->pc = 0x1e4138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16148 << 16));
label_1e413c:
    // 0x1e413c: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1e413cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_1e4140:
    // 0x1e4140: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e4140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e4144:
    // 0x1e4144: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1e4144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1e4148:
    // 0x1e4148: 0x2447ef20  addiu       $a3, $v0, -0x10E0
    ctx->pc = 0x1e4148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962976));
label_1e414c:
    // 0x1e414c: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x1e414cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_1e4150:
    // 0x1e4150: 0x3c013f02  lui         $at, 0x3F02
    ctx->pc = 0x1e4150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16130 << 16));
label_1e4154:
    // 0x1e4154: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1e4154u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_1e4158:
    // 0x1e4158: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e4158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e415c:
    // 0x1e415c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1e415cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1e4160:
    // 0x1e4160: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x1e4160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
label_1e4164:
    // 0x1e4164: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1e4164u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1e4168:
    // 0x1e4168: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e4168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e416c:
    // 0x1e416c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1e416cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1e4170:
    // 0x1e4170: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1e4170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1e4174:
    // 0x1e4174: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x1e4174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_1e4178:
    // 0x1e4178: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1e4178u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e417c:
    // 0x1e417c: 0xe4a1f0e8  swc1        $f1, -0xF18($a1)
    ctx->pc = 0x1e417cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294963432), bits); }
label_1e4180:
    // 0x1e4180: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1e4180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_1e4184:
    // 0x1e4184: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1e4184u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e4188:
    // 0x1e4188: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1e4188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_1e418c:
    // 0x1e418c: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1e418cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1e4190:
    // 0x1e4190: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1e4190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1e4194:
    // 0x1e4194: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e4194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e4198:
    // 0x1e4198: 0xe4c2f0e0  swc1        $f2, -0xF20($a2)
    ctx->pc = 0x1e4198u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294963424), bits); }
label_1e419c:
    // 0x1e419c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1e419cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e41a0:
    // 0x1e41a0: 0xe460f0e4  swc1        $f0, -0xF1C($v1)
    ctx->pc = 0x1e41a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294963428), bits); }
label_1e41a4:
    // 0x1e41a4: 0x2442ed50  addiu       $v0, $v0, -0x12B0
    ctx->pc = 0x1e41a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962512));
label_1e41a8:
    // 0x1e41a8: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1e41a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_1e41ac:
    // 0x1e41ac: 0x24e300e0  addiu       $v1, $a3, 0xE0
    ctx->pc = 0x1e41acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 224));
label_1e41b0:
    // 0x1e41b0: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1e41b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_1e41b4:
    // 0x1e41b4: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1e41b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1e41b8:
    // 0x1e41b8: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1e41b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_1e41bc:
    // 0x1e41bc: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1e41bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e41c0:
    // 0x1e41c0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1e41c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1e41c4:
    // 0x1e41c4: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1e41c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1e41c8:
    // 0x1e41c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e41c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1e41cc:
    // 0x1e41cc: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x1e41ccu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_1e41d0:
    // 0x1e41d0: 0x78e90010  lq          $t1, 0x10($a3)
    ctx->pc = 0x1e41d0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 7), 16)));
label_1e41d4:
    // 0x1e41d4: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x1e41d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_1e41d8:
    // 0x1e41d8: 0x7c490010  sq          $t1, 0x10($v0)
    ctx->pc = 0x1e41d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 9));
label_1e41dc:
    // 0x1e41dc: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1e41dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_1e41e0:
    // 0x1e41e0: 0x14e3fffa  bne         $a3, $v1, . + 4 + (-0x6 << 2)
label_1e41e4:
    if (ctx->pc == 0x1E41E4u) {
        ctx->pc = 0x1E41E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E41E0u;
        // 0x1e41e4: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E41E8u;
        goto label_1e41e8;
    }
    ctx->pc = 0x1E41E0u;
    {
        const bool branch_taken_0x1e41e0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E41E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E41E0u;
        // 0x1e41e4: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e41e0) {
            ctx->pc = 0x1E41CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e41cc;
        }
    }
    ctx->pc = 0x1E41E8u;
label_1e41e8:
    // 0x1e41e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e41e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e41ec:
    // 0x1e41ec: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1e41ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1e41f0:
    // 0x1e41f0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e41f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e41f4:
    // 0x1e41f4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1e41f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1e41f8:
    // 0x1e41f8: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_1e41fc:
    if (ctx->pc == 0x1E41FCu) {
        ctx->pc = 0x1E41FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E41F8u;
        // 0x1e41fc: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4200u;
        goto label_1e4200;
    }
    ctx->pc = 0x1E41F8u;
    {
        const bool branch_taken_0x1e41f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E41FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E41F8u;
        // 0x1e41fc: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e41f8) {
            ctx->pc = 0x1E42A4u;
            goto label_1e42a4;
        }
    }
    ctx->pc = 0x1E4200u;
label_1e4200:
    // 0x1e4200: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1e4204:
    if (ctx->pc == 0x1E4204u) {
        ctx->pc = 0x1E4204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4200u;
        // 0x1e4204: 0x26b11c60  addiu       $s1, $s5, 0x1C60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 7264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4208u;
        goto label_1e4208;
    }
    ctx->pc = 0x1E4200u;
    {
        const bool branch_taken_0x1e4200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4200u;
        // 0x1e4204: 0x26b11c60  addiu       $s1, $s5, 0x1C60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 7264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4200) {
            ctx->pc = 0x1E4220u;
            goto label_1e4220;
        }
    }
    ctx->pc = 0x1E4208u;
label_1e4208:
    // 0x1e4208: 0x3c013f13  lui         $at, 0x3F13
    ctx->pc = 0x1e4208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16147 << 16));
label_1e420c:
    // 0x1e420c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1e420cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1e4210:
    // 0x1e4210: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e4210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e4214:
    // 0x1e4214: 0x26b60060  addiu       $s6, $s5, 0x60
    ctx->pc = 0x1e4214u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_1e4218:
    // 0x1e4218: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1e421c:
    if (ctx->pc == 0x1E421Cu) {
        ctx->pc = 0x1E421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4218u;
        // 0x1e421c: 0xe6e0f0e8  swc1        $f0, -0xF18($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4294963432), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4220u;
        goto label_1e4220;
    }
    ctx->pc = 0x1E4218u;
    {
        const bool branch_taken_0x1e4218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4218u;
        // 0x1e421c: 0xe6e0f0e8  swc1        $f0, -0xF18($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4294963432), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4218) {
            ctx->pc = 0x1E42D0u;
            goto label_1e42d0;
        }
    }
    ctx->pc = 0x1E4220u;
label_1e4220:
    // 0x1e4220: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e4220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e4224:
    // 0x1e4224: 0x24a3ed50  addiu       $v1, $a1, -0x12B0
    ctx->pc = 0x1e4224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962512));
label_1e4228:
    // 0x1e4228: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x1e4228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
label_1e422c:
    // 0x1e422c: 0x244400e0  addiu       $a0, $v0, 0xE0
    ctx->pc = 0x1e422cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
label_1e4230:
    // 0x1e4230: 0x26b60060  addiu       $s6, $s5, 0x60
    ctx->pc = 0x1e4230u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_1e4234:
    // 0x1e4234: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x1e4234u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1e4238:
    // 0x1e4238: 0x78490010  lq          $t1, 0x10($v0)
    ctx->pc = 0x1e4238u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_1e423c:
    // 0x1e423c: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x1e423cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
label_1e4240:
    // 0x1e4240: 0x7c690010  sq          $t1, 0x10($v1)
    ctx->pc = 0x1e4240u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 9));
label_1e4244:
    // 0x1e4244: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1e4244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1e4248:
    // 0x1e4248: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
label_1e424c:
    if (ctx->pc == 0x1E424Cu) {
        ctx->pc = 0x1E424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4248u;
        // 0x1e424c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4250u;
        goto label_1e4250;
    }
    ctx->pc = 0x1E4248u;
    {
        const bool branch_taken_0x1e4248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1E424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4248u;
        // 0x1e424c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4248) {
            ctx->pc = 0x1E4234u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4234;
        }
    }
    ctx->pc = 0x1E4250u;
label_1e4250:
    // 0x1e4250: 0x8cc2489c  lw          $v0, 0x489C($a2)
    ctx->pc = 0x1e4250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18588)));
label_1e4254:
    // 0x1e4254: 0x3c013f02  lui         $at, 0x3F02
    ctx->pc = 0x1e4254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16130 << 16));
label_1e4258:
    // 0x1e4258: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1e4258u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_1e425c:
    // 0x1e425c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e425cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e4260:
    // 0x1e4260: 0x3c013eae  lui         $at, 0x3EAE
    ctx->pc = 0x1e4260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16046 << 16));
label_1e4264:
    // 0x1e4264: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1e4264u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_1e4268:
    // 0x1e4268: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e4268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e426c:
    // 0x1e426c: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1e426cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_1e4270:
    // 0x1e4270: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e4270u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1e4274:
    // 0x1e4274: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e4274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e4278:
    // 0x1e4278: 0x8c430120  lw          $v1, 0x120($v0)
    ctx->pc = 0x1e4278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
label_1e427c:
    // 0x1e427c: 0xe500f0e4  swc1        $f0, -0xF1C($t0)
    ctx->pc = 0x1e427cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294963428), bits); }
label_1e4280:
    // 0x1e4280: 0xe7c2f0e0  swc1        $f2, -0xF20($fp)
    ctx->pc = 0x1e4280u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4294963424), bits); }
label_1e4284:
    // 0x1e4284: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_1e4288:
    if (ctx->pc == 0x1E4288u) {
        ctx->pc = 0x1E4288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4284u;
        // 0x1e4288: 0xe6e1f0e8  swc1        $f1, -0xF18($s7) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4294963432), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E428Cu;
        goto label_1e428c;
    }
    ctx->pc = 0x1E4284u;
    {
        const bool branch_taken_0x1e4284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4284u;
        // 0x1e4288: 0xe6e1f0e8  swc1        $f1, -0xF18($s7) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4294963432), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4284) {
            ctx->pc = 0x1E42D0u;
            goto label_1e42d0;
        }
    }
    ctx->pc = 0x1E428Cu;
label_1e428c:
    // 0x1e428c: 0x3c013e61  lui         $at, 0x3E61
    ctx->pc = 0x1e428cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15969 << 16));
label_1e4290:
    // 0x1e4290: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1e4290u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1e4294:
    // 0x1e4294: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e4294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e4298:
    // 0x1e4298: 0x24a2ed50  addiu       $v0, $a1, -0x12B0
    ctx->pc = 0x1e4298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962512));
label_1e429c:
    // 0x1e429c: 0x1000000c  b           . + 4 + (0xC << 2)
label_1e42a0:
    if (ctx->pc == 0x1E42A0u) {
        ctx->pc = 0x1E42A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E429Cu;
        // 0x1e42a0: 0xe4400010  swc1        $f0, 0x10($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E42A4u;
        goto label_1e42a4;
    }
    ctx->pc = 0x1E429Cu;
    {
        const bool branch_taken_0x1e429c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E42A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E429Cu;
        // 0x1e42a0: 0xe4400010  swc1        $f0, 0x10($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e429c) {
            ctx->pc = 0x1E42D0u;
            goto label_1e42d0;
        }
    }
    ctx->pc = 0x1E42A4u;
label_1e42a4:
    // 0x1e42a4: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1e42a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_1e42a8:
    // 0x1e42a8: 0x26b11c60  addiu       $s1, $s5, 0x1C60
    ctx->pc = 0x1e42a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 7264));
label_1e42ac:
    // 0x1e42ac: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1e42b0:
    if (ctx->pc == 0x1E42B0u) {
        ctx->pc = 0x1E42B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E42ACu;
        // 0x1e42b0: 0x26b60060  addiu       $s6, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E42B4u;
        goto label_1e42b4;
    }
    ctx->pc = 0x1E42ACu;
    {
        const bool branch_taken_0x1e42ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E42B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E42ACu;
        // 0x1e42b0: 0x26b60060  addiu       $s6, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e42ac) {
            ctx->pc = 0x1E42D0u;
            goto label_1e42d0;
        }
    }
    ctx->pc = 0x1E42B4u;
label_1e42b4:
    // 0x1e42b4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1e42b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1e42b8:
    // 0x1e42b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1e42bc:
    if (ctx->pc == 0x1E42BCu) {
        ctx->pc = 0x1E42BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E42B8u;
        // 0x1e42bc: 0x8cc2489c  lw          $v0, 0x489C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E42C0u;
        goto label_1e42c0;
    }
    ctx->pc = 0x1E42B8u;
    {
        const bool branch_taken_0x1e42b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E42BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E42B8u;
        // 0x1e42bc: 0x8cc2489c  lw          $v0, 0x489C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e42b8) {
            ctx->pc = 0x1E42D4u;
            goto label_1e42d4;
        }
    }
    ctx->pc = 0x1E42C0u;
label_1e42c0:
    // 0x1e42c0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e42c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1e42c4:
    // 0x1e42c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e42c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e42c8:
    // 0x1e42c8: 0x0  nop
    ctx->pc = 0x1e42c8u;
    // NOP
label_1e42cc:
    // 0x1e42cc: 0xe7c0f0e0  swc1        $f0, -0xF20($fp)
    ctx->pc = 0x1e42ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4294963424), bits); }
label_1e42d0:
    // 0x1e42d0: 0x8cc2489c  lw          $v0, 0x489C($a2)
    ctx->pc = 0x1e42d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18588)));
label_1e42d4:
    // 0x1e42d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1e42d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e42d8:
    // 0x1e42d8: 0x8c440120  lw          $a0, 0x120($v0)
    ctx->pc = 0x1e42d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
label_1e42dc:
    // 0x1e42dc: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_1e42e0:
    if (ctx->pc == 0x1E42E0u) {
        ctx->pc = 0x1E42E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E42DCu;
        // 0x1e42e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E42E4u;
        goto label_1e42e4;
    }
    ctx->pc = 0x1E42DCu;
    {
        const bool branch_taken_0x1e42dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E42E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E42DCu;
        // 0x1e42e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e42dc) {
            ctx->pc = 0x1E4300u;
            goto label_1e4300;
        }
    }
    ctx->pc = 0x1E42E4u;
label_1e42e4:
    // 0x1e42e4: 0x24a2ed50  addiu       $v0, $a1, -0x12B0
    ctx->pc = 0x1e42e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962512));
label_1e42e8:
    // 0x1e42e8: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1e42e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_1e42ec:
    // 0x1e42ec: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e42ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1e42f0:
    // 0x1e42f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e42f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e42f4:
    // 0x1e42f4: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1e42f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e42f8:
    // 0x1e42f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e42fc:
    if (ctx->pc == 0x1E42FCu) {
        ctx->pc = 0x1E42FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E42F8u;
        // 0x1e42fc: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4300u;
        goto label_1e4300;
    }
    ctx->pc = 0x1E42F8u;
    {
        const bool branch_taken_0x1e42f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E42FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E42F8u;
        // 0x1e42fc: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e42f8) {
            ctx->pc = 0x1E4318u;
            goto label_1e4318;
        }
    }
    ctx->pc = 0x1E4300u;
label_1e4300:
    // 0x1e4300: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
label_1e4304:
    if (ctx->pc == 0x1E4304u) {
        ctx->pc = 0x1E4304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4300u;
        // 0x1e4304: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4308u;
        goto label_1e4308;
    }
    ctx->pc = 0x1E4300u;
    {
        const bool branch_taken_0x1e4300 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e4300) {
            ctx->pc = 0x1E4304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E4300u;
            // 0x1e4304: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E4320u;
            goto label_1e4320;
        }
    }
    ctx->pc = 0x1E4308u;
label_1e4308:
    // 0x1e4308: 0x3c013e23  lui         $at, 0x3E23
    ctx->pc = 0x1e4308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15907 << 16));
label_1e430c:
    // 0x1e430c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e430cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1e4310:
    // 0x1e4310: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e4310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e4314:
    // 0x1e4314: 0x24a2ed50  addiu       $v0, $a1, -0x12B0
    ctx->pc = 0x1e4314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962512));
label_1e4318:
    // 0x1e4318: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x1e4318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_1e431c:
    // 0x1e431c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e431cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e4320:
    // 0x1e4320: 0xc078d48  jal         func_1E3520
label_1e4324:
    if (ctx->pc == 0x1E4324u) {
        ctx->pc = 0x1E4324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4320u;
        // 0x1e4324: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4328u;
        goto label_1e4328;
    }
    ctx->pc = 0x1E4320u;
    SET_GPR_U32(ctx, 31, 0x1E4328u);
    ctx->pc = 0x1E4324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4320u;
    // 0x1e4324: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3520u, 0x1E4320u, 0x1E4328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4328u;
label_1e4328:
    // 0x1e4328: 0x26b20140  addiu       $s2, $s5, 0x140
    ctx->pc = 0x1e4328u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 320));
label_1e432c:
    // 0x1e432c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e432cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1e4330:
    // 0x1e4330: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e4330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e4334:
    // 0x1e4334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4338:
    // 0x1e4338: 0xc6e1f0e8  lwc1        $f1, -0xF18($s7)
    ctx->pc = 0x1e4338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294963432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e433c:
    // 0x1e433c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e433cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4340:
    // 0x1e4340: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e4340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e4344:
    // 0x1e4344: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e4344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e4348:
    // 0x1e4348: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e4348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e434c:
    // 0x1e434c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1e434cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1e4350:
    // 0x1e4350: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x1e4350u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1e4354:
    // 0x1e4354: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1e4354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_1e4358:
    // 0x1e4358: 0xc048b52  jal         func_122D48
label_1e435c:
    if (ctx->pc == 0x1E435Cu) {
        ctx->pc = 0x1E435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4358u;
        // 0x1e435c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4360u;
        goto label_1e4360;
    }
    ctx->pc = 0x1E4358u;
    SET_GPR_U32(ctx, 31, 0x1E4360u);
    ctx->pc = 0x1E435Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4358u;
    // 0x1e435c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1E4358u, 0x1E4360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4360u;
label_1e4360:
    // 0x1e4360: 0xc7ccf0e0  lwc1        $f12, -0xF20($fp)
    ctx->pc = 0x1e4360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294963424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e4364:
    // 0x1e4364: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1e4364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1e4368:
    // 0x1e4368: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x1e4368u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
label_1e436c:
    // 0x1e436c: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x1e436cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_1e4370:
    // 0x1e4370: 0xa2620003  sb          $v0, 0x3($s3)
    ctx->pc = 0x1e4370u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 2));
label_1e4374:
    // 0x1e4374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e4374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e4378:
    // 0x1e4378: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x1e4378u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
label_1e437c:
    // 0x1e437c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e437cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4380:
    // 0x1e4380: 0xa2620002  sb          $v0, 0x2($s3)
    ctx->pc = 0x1e4380u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 2));
label_1e4384:
    // 0x1e4384: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e4384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4388:
    // 0x1e4388: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1e4388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_1e438c:
    // 0x1e438c: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1e438cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_1e4390:
    // 0x1e4390: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1e4390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e4394:
    // 0x1e4394: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1e4394u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4398:
    // 0x1e4398: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1e4398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1e439c:
    // 0x1e439c: 0x3c09018f  lui         $t1, 0x18F
    ctx->pc = 0x1e439cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)399 << 16));
label_1e43a0:
    // 0x1e43a0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e43a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1e43a4:
    // 0x1e43a4: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1e43a4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_1e43a8:
    // 0x1e43a8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e43a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1e43ac:
    // 0x1e43ac: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e43acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e43b0:
    // 0x1e43b0: 0xc06876e  jal         func_1A1DB8
label_1e43b4:
    if (ctx->pc == 0x1E43B4u) {
        ctx->pc = 0x1E43B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E43B0u;
        // 0x1e43b4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E43B8u;
        goto label_1e43b8;
    }
    ctx->pc = 0x1E43B0u;
    SET_GPR_U32(ctx, 31, 0x1E43B8u);
    ctx->pc = 0x1E43B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E43B0u;
    // 0x1e43b4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1E43B0u, 0x1E43B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E43B8u;
label_1e43b8:
    // 0x1e43b8: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1e43b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1e43bc:
    // 0x1e43bc: 0x2453ed50  addiu       $s3, $v0, -0x12B0
    ctx->pc = 0x1e43bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962512));
label_1e43c0:
    // 0x1e43c0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e43c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e43c4:
    // 0x1e43c4: 0x0  nop
    ctx->pc = 0x1e43c4u;
    // NOP
label_1e43c8:
    // 0x1e43c8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e43c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1e43cc:
    // 0x1e43cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e43ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e43d0:
    // 0x1e43d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e43d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e43d4:
    // 0x1e43d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e43d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e43d8:
    // 0x1e43d8: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x1e43d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_1e43dc:
    // 0x1e43dc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1e43dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e43e0:
    // 0x1e43e0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e43e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1e43e4:
    // 0x1e43e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e43e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e43e8:
    // 0x1e43e8: 0x8c46d310  lw          $a2, -0x2CF0($v0)
    ctx->pc = 0x1e43e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955792)));
label_1e43ec:
    // 0x1e43ec: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1e43ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e43f0:
    // 0x1e43f0: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x1e43f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_1e43f4:
    // 0x1e43f4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e43f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e43f8:
    // 0x1e43f8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1e43f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1e43fc:
    // 0x1e43fc: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1e43fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1e4400:
    // 0x1e4400: 0x40f809  jalr        $v0
label_1e4404:
    if (ctx->pc == 0x1E4404u) {
        ctx->pc = 0x1E4404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4400u;
        // 0x1e4404: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4408u;
        goto label_1e4408;
    }
    ctx->pc = 0x1E4400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E4408u);
        ctx->pc = 0x1E4404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4400u;
        // 0x1e4404: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4400u, 0x1E4408u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4408u;
label_1e4408:
    // 0x1e4408: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x1e4408u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1e440c:
    // 0x1e440c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e440cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e4410:
    // 0x1e4410: 0xc06e51e  jal         func_1B9478
label_1e4414:
    if (ctx->pc == 0x1E4414u) {
        ctx->pc = 0x1E4414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4410u;
        // 0x1e4414: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4418u;
        goto label_1e4418;
    }
    ctx->pc = 0x1E4410u;
    SET_GPR_U32(ctx, 31, 0x1E4418u);
    ctx->pc = 0x1E4414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4410u;
    // 0x1e4414: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9478u, 0x1E4410u, 0x1E4418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4418u;
label_1e4418:
    // 0x1e4418: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x1e4418u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e441c:
    // 0x1e441c: 0x26840132  addiu       $a0, $s4, 0x132
    ctx->pc = 0x1e441cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 306));
label_1e4420:
    // 0x1e4420: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1e4420u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1e4424:
    // 0x1e4424: 0x863000e8  lh          $s0, 0xE8($s1)
    ctx->pc = 0x1e4424u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 232)));
label_1e4428:
    // 0x1e4428: 0x263100e8  addiu       $s1, $s1, 0xE8
    ctx->pc = 0x1e4428u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
label_1e442c:
    // 0x1e442c: 0xc067b9c  jal         func_19EE70
label_1e4430:
    if (ctx->pc == 0x1E4430u) {
        ctx->pc = 0x1E4430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E442Cu;
        // 0x1e4430: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4434u;
        goto label_1e4434;
    }
    ctx->pc = 0x1E442Cu;
    SET_GPR_U32(ctx, 31, 0x1E4434u);
    ctx->pc = 0x1E4430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E442Cu;
    // 0x1e4430: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1E442Cu, 0x1E4434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4434u;
label_1e4434:
    // 0x1e4434: 0x265201f0  addiu       $s2, $s2, 0x1F0
    ctx->pc = 0x1e4434u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
label_1e4438:
    // 0x1e4438: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1e4438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1e443c:
    // 0x1e443c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e443cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e4440:
    // 0x1e4440: 0x60f809  jalr        $v1
label_1e4444:
    if (ctx->pc == 0x1E4444u) {
        ctx->pc = 0x1E4444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4440u;
        // 0x1e4444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4448u;
        goto label_1e4448;
    }
    ctx->pc = 0x1E4440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E4448u);
        ctx->pc = 0x1E4444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4440u;
        // 0x1e4444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4440u, 0x1E4448u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4448u;
label_1e4448:
    // 0x1e4448: 0x2e820007  sltiu       $v0, $s4, 0x7
    ctx->pc = 0x1e4448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1e444c:
    // 0x1e444c: 0x5440ffde  bnel        $v0, $zero, . + 4 + (-0x22 << 2)
label_1e4450:
    if (ctx->pc == 0x1E4450u) {
        ctx->pc = 0x1E4450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E444Cu;
        // 0x1e4450: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4454u;
        goto label_1e4454;
    }
    ctx->pc = 0x1E444Cu;
    {
        const bool branch_taken_0x1e444c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e444c) {
            ctx->pc = 0x1E4450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E444Cu;
            // 0x1e4450: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E43C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e43c8;
        }
    }
    ctx->pc = 0x1E4454u;
label_1e4454:
    // 0x1e4454: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1e4454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1e4458:
    // 0x1e4458: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e4458u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e445c:
    // 0x1e445c: 0x2454edc0  addiu       $s4, $v0, -0x1240
    ctx->pc = 0x1e445cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962624));
label_1e4460:
    // 0x1e4460: 0x26b20ed0  addiu       $s2, $s5, 0xED0
    ctx->pc = 0x1e4460u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 3792));
label_1e4464:
    // 0x1e4464: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e4464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e4468:
    // 0x1e4468: 0x3c0b0060  lui         $t3, 0x60
    ctx->pc = 0x1e4468u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)96 << 16));
label_1e446c:
    // 0x1e446c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e446cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e4470:
    // 0x1e4470: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e4470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e4474:
    // 0x1e4474: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e4474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4478:
    // 0x1e4478: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x1e4478u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_1e447c:
    // 0x1e447c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1e447cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4480:
    // 0x1e4480: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e4480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1e4484:
    // 0x1e4484: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e4484u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4488:
    // 0x1e4488: 0x8d66d310  lw          $a2, -0x2CF0($t3)
    ctx->pc = 0x1e4488u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294955792)));
label_1e448c:
    // 0x1e448c: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1e448cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e4490:
    // 0x1e4490: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x1e4490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_1e4494:
    // 0x1e4494: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e4494u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4498:
    // 0x1e4498: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1e4498u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1e449c:
    // 0x1e449c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1e449cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1e44a0:
    // 0x1e44a0: 0x40f809  jalr        $v0
label_1e44a4:
    if (ctx->pc == 0x1E44A4u) {
        ctx->pc = 0x1E44A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44A0u;
        // 0x1e44a4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E44A8u;
        goto label_1e44a8;
    }
    ctx->pc = 0x1E44A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E44A8u);
        ctx->pc = 0x1E44A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44A0u;
        // 0x1e44a4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E44A0u, 0x1E44A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E44A8u;
label_1e44a8:
    // 0x1e44a8: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x1e44a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1e44ac:
    // 0x1e44ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e44acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e44b0:
    // 0x1e44b0: 0xc06e51e  jal         func_1B9478
label_1e44b4:
    if (ctx->pc == 0x1E44B4u) {
        ctx->pc = 0x1E44B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44B0u;
        // 0x1e44b4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E44B8u;
        goto label_1e44b8;
    }
    ctx->pc = 0x1E44B0u;
    SET_GPR_U32(ctx, 31, 0x1E44B8u);
    ctx->pc = 0x1E44B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E44B0u;
    // 0x1e44b4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9478u, 0x1E44B0u, 0x1E44B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E44B8u;
label_1e44b8:
    // 0x1e44b8: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x1e44b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e44bc:
    // 0x1e44bc: 0x26640139  addiu       $a0, $s3, 0x139
    ctx->pc = 0x1e44bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 313));
label_1e44c0:
    // 0x1e44c0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e44c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1e44c4:
    // 0x1e44c4: 0x863000e8  lh          $s0, 0xE8($s1)
    ctx->pc = 0x1e44c4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 232)));
label_1e44c8:
    // 0x1e44c8: 0x263100e8  addiu       $s1, $s1, 0xE8
    ctx->pc = 0x1e44c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
label_1e44cc:
    // 0x1e44cc: 0xc067b9c  jal         func_19EE70
label_1e44d0:
    if (ctx->pc == 0x1E44D0u) {
        ctx->pc = 0x1E44D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44CCu;
        // 0x1e44d0: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E44D4u;
        goto label_1e44d4;
    }
    ctx->pc = 0x1E44CCu;
    SET_GPR_U32(ctx, 31, 0x1E44D4u);
    ctx->pc = 0x1E44D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E44CCu;
    // 0x1e44d0: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1E44CCu, 0x1E44D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E44D4u;
label_1e44d4:
    // 0x1e44d4: 0x265201f0  addiu       $s2, $s2, 0x1F0
    ctx->pc = 0x1e44d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
label_1e44d8:
    // 0x1e44d8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1e44d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1e44dc:
    // 0x1e44dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e44dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e44e0:
    // 0x1e44e0: 0x60f809  jalr        $v1
label_1e44e4:
    if (ctx->pc == 0x1E44E4u) {
        ctx->pc = 0x1E44E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44E0u;
        // 0x1e44e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E44E8u;
        goto label_1e44e8;
    }
    ctx->pc = 0x1E44E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E44E8u);
        ctx->pc = 0x1E44E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44E0u;
        // 0x1e44e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E44E0u, 0x1E44E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E44E8u;
label_1e44e8:
    // 0x1e44e8: 0x2e620007  sltiu       $v0, $s3, 0x7
    ctx->pc = 0x1e44e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1e44ec:
    // 0x1e44ec: 0x5440ffde  bnel        $v0, $zero, . + 4 + (-0x22 << 2)
label_1e44f0:
    if (ctx->pc == 0x1E44F0u) {
        ctx->pc = 0x1E44F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44ECu;
        // 0x1e44f0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E44F4u;
        goto label_1e44f4;
    }
    ctx->pc = 0x1E44ECu;
    {
        const bool branch_taken_0x1e44ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e44ec) {
            ctx->pc = 0x1E44F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E44ECu;
            // 0x1e44f0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E4468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4468;
        }
    }
    ctx->pc = 0x1E44F4u;
label_1e44f4:
    // 0x1e44f4: 0xc067b9c  jal         func_19EE70
label_1e44f8:
    if (ctx->pc == 0x1E44F8u) {
        ctx->pc = 0x1E44F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44F4u;
        // 0x1e44f8: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E44FCu;
        goto label_1e44fc;
    }
    ctx->pc = 0x1E44F4u;
    SET_GPR_U32(ctx, 31, 0x1E44FCu);
    ctx->pc = 0x1E44F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E44F4u;
    // 0x1e44f8: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1E44F4u, 0x1E44FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E44FCu;
label_1e44fc:
    // 0x1e44fc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1e44fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1e4500:
    // 0x1e4500: 0xc073478  jal         func_1CD1E0
label_1e4504:
    if (ctx->pc == 0x1E4504u) {
        ctx->pc = 0x1E4504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4500u;
        // 0x1e4504: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4508u;
        goto label_1e4508;
    }
    ctx->pc = 0x1E4500u;
    SET_GPR_U32(ctx, 31, 0x1E4508u);
    ctx->pc = 0x1E4504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4500u;
    // 0x1e4504: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1E4500u, 0x1E4508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4508u;
label_1e4508:
    // 0x1e4508: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1e4508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1e450c:
    // 0x1e450c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1e450cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1e4510:
    // 0x1e4510: 0xa2a20130  sb          $v0, 0x130($s5)
    ctx->pc = 0x1e4510u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 304), (uint8_t)GPR_U32(ctx, 2));
label_1e4514:
    // 0x1e4514: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1e4514u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1e4518:
    // 0x1e4518: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1e4518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1e451c:
    // 0x1e451c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1e451cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1e4520:
    // 0x1e4520: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1e4520u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1e4524:
    // 0x1e4524: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1e4524u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e4528:
    // 0x1e4528: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1e4528u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e452c:
    // 0x1e452c: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x1e452cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e4530:
    // 0x1e4530: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x1e4530u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e4534:
    // 0x1e4534: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e4534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e4538:
    // 0x1e4538: 0x3e00008  jr          $ra
label_1e453c:
    if (ctx->pc == 0x1E453Cu) {
        ctx->pc = 0x1E453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4538u;
        // 0x1e453c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4540u;
        goto label_fallthrough_0x1e4538;
    }
    ctx->pc = 0x1E4538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4538u;
        // 0x1e453c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e4538:
    ctx->pc = 0x1E4540u;
}
