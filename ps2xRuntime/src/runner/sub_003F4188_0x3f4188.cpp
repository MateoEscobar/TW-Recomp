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

// Function: sub_003F4188
// Address: 0x3f4188 - 0x3f45c0
void sub_003F4188_0x3f4188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F4188_0x3f4188");
#endif

    switch (ctx->pc) {
        case 0x3f4188u: goto label_3f4188;
        case 0x3f418cu: goto label_3f418c;
        case 0x3f4190u: goto label_3f4190;
        case 0x3f4194u: goto label_3f4194;
        case 0x3f4198u: goto label_3f4198;
        case 0x3f419cu: goto label_3f419c;
        case 0x3f41a0u: goto label_3f41a0;
        case 0x3f41a4u: goto label_3f41a4;
        case 0x3f41a8u: goto label_3f41a8;
        case 0x3f41acu: goto label_3f41ac;
        case 0x3f41b0u: goto label_3f41b0;
        case 0x3f41b4u: goto label_3f41b4;
        case 0x3f41b8u: goto label_3f41b8;
        case 0x3f41bcu: goto label_3f41bc;
        case 0x3f41c0u: goto label_3f41c0;
        case 0x3f41c4u: goto label_3f41c4;
        case 0x3f41c8u: goto label_3f41c8;
        case 0x3f41ccu: goto label_3f41cc;
        case 0x3f41d0u: goto label_3f41d0;
        case 0x3f41d4u: goto label_3f41d4;
        case 0x3f41d8u: goto label_3f41d8;
        case 0x3f41dcu: goto label_3f41dc;
        case 0x3f41e0u: goto label_3f41e0;
        case 0x3f41e4u: goto label_3f41e4;
        case 0x3f41e8u: goto label_3f41e8;
        case 0x3f41ecu: goto label_3f41ec;
        case 0x3f41f0u: goto label_3f41f0;
        case 0x3f41f4u: goto label_3f41f4;
        case 0x3f41f8u: goto label_3f41f8;
        case 0x3f41fcu: goto label_3f41fc;
        case 0x3f4200u: goto label_3f4200;
        case 0x3f4204u: goto label_3f4204;
        case 0x3f4208u: goto label_3f4208;
        case 0x3f420cu: goto label_3f420c;
        case 0x3f4210u: goto label_3f4210;
        case 0x3f4214u: goto label_3f4214;
        case 0x3f4218u: goto label_3f4218;
        case 0x3f421cu: goto label_3f421c;
        case 0x3f4220u: goto label_3f4220;
        case 0x3f4224u: goto label_3f4224;
        case 0x3f4228u: goto label_3f4228;
        case 0x3f422cu: goto label_3f422c;
        case 0x3f4230u: goto label_3f4230;
        case 0x3f4234u: goto label_3f4234;
        case 0x3f4238u: goto label_3f4238;
        case 0x3f423cu: goto label_3f423c;
        case 0x3f4240u: goto label_3f4240;
        case 0x3f4244u: goto label_3f4244;
        case 0x3f4248u: goto label_3f4248;
        case 0x3f424cu: goto label_3f424c;
        case 0x3f4250u: goto label_3f4250;
        case 0x3f4254u: goto label_3f4254;
        case 0x3f4258u: goto label_3f4258;
        case 0x3f425cu: goto label_3f425c;
        case 0x3f4260u: goto label_3f4260;
        case 0x3f4264u: goto label_3f4264;
        case 0x3f4268u: goto label_3f4268;
        case 0x3f426cu: goto label_3f426c;
        case 0x3f4270u: goto label_3f4270;
        case 0x3f4274u: goto label_3f4274;
        case 0x3f4278u: goto label_3f4278;
        case 0x3f427cu: goto label_3f427c;
        case 0x3f4280u: goto label_3f4280;
        case 0x3f4284u: goto label_3f4284;
        case 0x3f4288u: goto label_3f4288;
        case 0x3f428cu: goto label_3f428c;
        case 0x3f4290u: goto label_3f4290;
        case 0x3f4294u: goto label_3f4294;
        case 0x3f4298u: goto label_3f4298;
        case 0x3f429cu: goto label_3f429c;
        case 0x3f42a0u: goto label_3f42a0;
        case 0x3f42a4u: goto label_3f42a4;
        case 0x3f42a8u: goto label_3f42a8;
        case 0x3f42acu: goto label_3f42ac;
        case 0x3f42b0u: goto label_3f42b0;
        case 0x3f42b4u: goto label_3f42b4;
        case 0x3f42b8u: goto label_3f42b8;
        case 0x3f42bcu: goto label_3f42bc;
        case 0x3f42c0u: goto label_3f42c0;
        case 0x3f42c4u: goto label_3f42c4;
        case 0x3f42c8u: goto label_3f42c8;
        case 0x3f42ccu: goto label_3f42cc;
        case 0x3f42d0u: goto label_3f42d0;
        case 0x3f42d4u: goto label_3f42d4;
        case 0x3f42d8u: goto label_3f42d8;
        case 0x3f42dcu: goto label_3f42dc;
        case 0x3f42e0u: goto label_3f42e0;
        case 0x3f42e4u: goto label_3f42e4;
        case 0x3f42e8u: goto label_3f42e8;
        case 0x3f42ecu: goto label_3f42ec;
        case 0x3f42f0u: goto label_3f42f0;
        case 0x3f42f4u: goto label_3f42f4;
        case 0x3f42f8u: goto label_3f42f8;
        case 0x3f42fcu: goto label_3f42fc;
        case 0x3f4300u: goto label_3f4300;
        case 0x3f4304u: goto label_3f4304;
        case 0x3f4308u: goto label_3f4308;
        case 0x3f430cu: goto label_3f430c;
        case 0x3f4310u: goto label_3f4310;
        case 0x3f4314u: goto label_3f4314;
        case 0x3f4318u: goto label_3f4318;
        case 0x3f431cu: goto label_3f431c;
        case 0x3f4320u: goto label_3f4320;
        case 0x3f4324u: goto label_3f4324;
        case 0x3f4328u: goto label_3f4328;
        case 0x3f432cu: goto label_3f432c;
        case 0x3f4330u: goto label_3f4330;
        case 0x3f4334u: goto label_3f4334;
        case 0x3f4338u: goto label_3f4338;
        case 0x3f433cu: goto label_3f433c;
        case 0x3f4340u: goto label_3f4340;
        case 0x3f4344u: goto label_3f4344;
        case 0x3f4348u: goto label_3f4348;
        case 0x3f434cu: goto label_3f434c;
        case 0x3f4350u: goto label_3f4350;
        case 0x3f4354u: goto label_3f4354;
        case 0x3f4358u: goto label_3f4358;
        case 0x3f435cu: goto label_3f435c;
        case 0x3f4360u: goto label_3f4360;
        case 0x3f4364u: goto label_3f4364;
        case 0x3f4368u: goto label_3f4368;
        case 0x3f436cu: goto label_3f436c;
        case 0x3f4370u: goto label_3f4370;
        case 0x3f4374u: goto label_3f4374;
        case 0x3f4378u: goto label_3f4378;
        case 0x3f437cu: goto label_3f437c;
        case 0x3f4380u: goto label_3f4380;
        case 0x3f4384u: goto label_3f4384;
        case 0x3f4388u: goto label_3f4388;
        case 0x3f438cu: goto label_3f438c;
        case 0x3f4390u: goto label_3f4390;
        case 0x3f4394u: goto label_3f4394;
        case 0x3f4398u: goto label_3f4398;
        case 0x3f439cu: goto label_3f439c;
        case 0x3f43a0u: goto label_3f43a0;
        case 0x3f43a4u: goto label_3f43a4;
        case 0x3f43a8u: goto label_3f43a8;
        case 0x3f43acu: goto label_3f43ac;
        case 0x3f43b0u: goto label_3f43b0;
        case 0x3f43b4u: goto label_3f43b4;
        case 0x3f43b8u: goto label_3f43b8;
        case 0x3f43bcu: goto label_3f43bc;
        case 0x3f43c0u: goto label_3f43c0;
        case 0x3f43c4u: goto label_3f43c4;
        case 0x3f43c8u: goto label_3f43c8;
        case 0x3f43ccu: goto label_3f43cc;
        case 0x3f43d0u: goto label_3f43d0;
        case 0x3f43d4u: goto label_3f43d4;
        case 0x3f43d8u: goto label_3f43d8;
        case 0x3f43dcu: goto label_3f43dc;
        case 0x3f43e0u: goto label_3f43e0;
        case 0x3f43e4u: goto label_3f43e4;
        case 0x3f43e8u: goto label_3f43e8;
        case 0x3f43ecu: goto label_3f43ec;
        case 0x3f43f0u: goto label_3f43f0;
        case 0x3f43f4u: goto label_3f43f4;
        case 0x3f43f8u: goto label_3f43f8;
        case 0x3f43fcu: goto label_3f43fc;
        case 0x3f4400u: goto label_3f4400;
        case 0x3f4404u: goto label_3f4404;
        case 0x3f4408u: goto label_3f4408;
        case 0x3f440cu: goto label_3f440c;
        case 0x3f4410u: goto label_3f4410;
        case 0x3f4414u: goto label_3f4414;
        case 0x3f4418u: goto label_3f4418;
        case 0x3f441cu: goto label_3f441c;
        case 0x3f4420u: goto label_3f4420;
        case 0x3f4424u: goto label_3f4424;
        case 0x3f4428u: goto label_3f4428;
        case 0x3f442cu: goto label_3f442c;
        case 0x3f4430u: goto label_3f4430;
        case 0x3f4434u: goto label_3f4434;
        case 0x3f4438u: goto label_3f4438;
        case 0x3f443cu: goto label_3f443c;
        case 0x3f4440u: goto label_3f4440;
        case 0x3f4444u: goto label_3f4444;
        case 0x3f4448u: goto label_3f4448;
        case 0x3f444cu: goto label_3f444c;
        case 0x3f4450u: goto label_3f4450;
        case 0x3f4454u: goto label_3f4454;
        case 0x3f4458u: goto label_3f4458;
        case 0x3f445cu: goto label_3f445c;
        case 0x3f4460u: goto label_3f4460;
        case 0x3f4464u: goto label_3f4464;
        case 0x3f4468u: goto label_3f4468;
        case 0x3f446cu: goto label_3f446c;
        case 0x3f4470u: goto label_3f4470;
        case 0x3f4474u: goto label_3f4474;
        case 0x3f4478u: goto label_3f4478;
        case 0x3f447cu: goto label_3f447c;
        case 0x3f4480u: goto label_3f4480;
        case 0x3f4484u: goto label_3f4484;
        case 0x3f4488u: goto label_3f4488;
        case 0x3f448cu: goto label_3f448c;
        case 0x3f4490u: goto label_3f4490;
        case 0x3f4494u: goto label_3f4494;
        case 0x3f4498u: goto label_3f4498;
        case 0x3f449cu: goto label_3f449c;
        case 0x3f44a0u: goto label_3f44a0;
        case 0x3f44a4u: goto label_3f44a4;
        case 0x3f44a8u: goto label_3f44a8;
        case 0x3f44acu: goto label_3f44ac;
        case 0x3f44b0u: goto label_3f44b0;
        case 0x3f44b4u: goto label_3f44b4;
        case 0x3f44b8u: goto label_3f44b8;
        case 0x3f44bcu: goto label_3f44bc;
        case 0x3f44c0u: goto label_3f44c0;
        case 0x3f44c4u: goto label_3f44c4;
        case 0x3f44c8u: goto label_3f44c8;
        case 0x3f44ccu: goto label_3f44cc;
        case 0x3f44d0u: goto label_3f44d0;
        case 0x3f44d4u: goto label_3f44d4;
        case 0x3f44d8u: goto label_3f44d8;
        case 0x3f44dcu: goto label_3f44dc;
        case 0x3f44e0u: goto label_3f44e0;
        case 0x3f44e4u: goto label_3f44e4;
        case 0x3f44e8u: goto label_3f44e8;
        case 0x3f44ecu: goto label_3f44ec;
        case 0x3f44f0u: goto label_3f44f0;
        case 0x3f44f4u: goto label_3f44f4;
        case 0x3f44f8u: goto label_3f44f8;
        case 0x3f44fcu: goto label_3f44fc;
        case 0x3f4500u: goto label_3f4500;
        case 0x3f4504u: goto label_3f4504;
        case 0x3f4508u: goto label_3f4508;
        case 0x3f450cu: goto label_3f450c;
        case 0x3f4510u: goto label_3f4510;
        case 0x3f4514u: goto label_3f4514;
        case 0x3f4518u: goto label_3f4518;
        case 0x3f451cu: goto label_3f451c;
        case 0x3f4520u: goto label_3f4520;
        case 0x3f4524u: goto label_3f4524;
        case 0x3f4528u: goto label_3f4528;
        case 0x3f452cu: goto label_3f452c;
        case 0x3f4530u: goto label_3f4530;
        case 0x3f4534u: goto label_3f4534;
        case 0x3f4538u: goto label_3f4538;
        case 0x3f453cu: goto label_3f453c;
        case 0x3f4540u: goto label_3f4540;
        case 0x3f4544u: goto label_3f4544;
        case 0x3f4548u: goto label_3f4548;
        case 0x3f454cu: goto label_3f454c;
        case 0x3f4550u: goto label_3f4550;
        case 0x3f4554u: goto label_3f4554;
        case 0x3f4558u: goto label_3f4558;
        case 0x3f455cu: goto label_3f455c;
        case 0x3f4560u: goto label_3f4560;
        case 0x3f4564u: goto label_3f4564;
        case 0x3f4568u: goto label_3f4568;
        case 0x3f456cu: goto label_3f456c;
        case 0x3f4570u: goto label_3f4570;
        case 0x3f4574u: goto label_3f4574;
        case 0x3f4578u: goto label_3f4578;
        case 0x3f457cu: goto label_3f457c;
        case 0x3f4580u: goto label_3f4580;
        case 0x3f4584u: goto label_3f4584;
        case 0x3f4588u: goto label_3f4588;
        case 0x3f458cu: goto label_3f458c;
        case 0x3f4590u: goto label_3f4590;
        case 0x3f4594u: goto label_3f4594;
        case 0x3f4598u: goto label_3f4598;
        case 0x3f459cu: goto label_3f459c;
        case 0x3f45a0u: goto label_3f45a0;
        case 0x3f45a4u: goto label_3f45a4;
        case 0x3f45a8u: goto label_3f45a8;
        case 0x3f45acu: goto label_3f45ac;
        case 0x3f45b0u: goto label_3f45b0;
        case 0x3f45b4u: goto label_3f45b4;
        case 0x3f45b8u: goto label_3f45b8;
        case 0x3f45bcu: goto label_3f45bc;
        default: break;
    }

    ctx->pc = 0x3f4188u;

label_3f4188:
    // 0x3f4188: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3f4188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3f418c:
    // 0x3f418c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3f418cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3f4190:
    // 0x3f4190: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3f4190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3f4194:
    // 0x3f4194: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f4194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f4198:
    // 0x3f4198: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3f4198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3f419c:
    // 0x3f419c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3f419cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3f41a0:
    // 0x3f41a0: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x3f41a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3f41a4:
    // 0x3f41a4: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x3f41a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3f41a8:
    // 0x3f41a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f41a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f41ac:
    // 0x3f41ac: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f41acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f41b0:
    // 0x3f41b0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f41b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f41b4:
    // 0x3f41b4: 0x40f809  jalr        $v0
label_3f41b8:
    if (ctx->pc == 0x3F41B8u) {
        ctx->pc = 0x3F41B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F41B4u;
        // 0x3f41b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F41BCu;
        goto label_3f41bc;
    }
    ctx->pc = 0x3F41B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F41BCu);
        ctx->pc = 0x3F41B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F41B4u;
        // 0x3f41b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F41B4u, 0x3F41BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F41BCu;
label_3f41bc:
    // 0x3f41bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f41bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f41c0:
    // 0x3f41c0: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x3f41c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_3f41c4:
    // 0x3f41c4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3f41c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f41c8:
    // 0x3f41c8: 0x104300f4  beq         $v0, $v1, . + 4 + (0xF4 << 2)
label_3f41cc:
    if (ctx->pc == 0x3F41CCu) {
        ctx->pc = 0x3F41CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F41C8u;
        // 0x3f41cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F41D0u;
        goto label_3f41d0;
    }
    ctx->pc = 0x3F41C8u;
    {
        const bool branch_taken_0x3f41c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F41CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F41C8u;
        // 0x3f41cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f41c8) {
            ctx->pc = 0x3F459Cu;
            goto label_3f459c;
        }
    }
    ctx->pc = 0x3F41D0u;
label_3f41d0:
    // 0x3f41d0: 0xc0e9694  jal         func_3A5A50
label_3f41d4:
    if (ctx->pc == 0x3F41D4u) {
        ctx->pc = 0x3F41D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F41D0u;
        // 0x3f41d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F41D8u;
        goto label_3f41d8;
    }
    ctx->pc = 0x3F41D0u;
    SET_GPR_U32(ctx, 31, 0x3F41D8u);
    ctx->pc = 0x3F41D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F41D0u;
    // 0x3f41d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3F41D0u, 0x3F41D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F41D8u;
label_3f41d8:
    // 0x3f41d8: 0x104000f0  beqz        $v0, . + 4 + (0xF0 << 2)
label_3f41dc:
    if (ctx->pc == 0x3F41DCu) {
        ctx->pc = 0x3F41DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F41D8u;
        // 0x3f41dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F41E0u;
        goto label_3f41e0;
    }
    ctx->pc = 0x3F41D8u;
    {
        const bool branch_taken_0x3f41d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F41DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F41D8u;
        // 0x3f41dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f41d8) {
            ctx->pc = 0x3F459Cu;
            goto label_3f459c;
        }
    }
    ctx->pc = 0x3F41E0u;
label_3f41e0:
    // 0x3f41e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f41e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f41e4:
    // 0x3f41e4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3f41e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3f41e8:
    // 0x3f41e8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3f41e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3f41ec:
    // 0x3f41ec: 0x40f809  jalr        $v0
label_3f41f0:
    if (ctx->pc == 0x3F41F0u) {
        ctx->pc = 0x3F41F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F41ECu;
        // 0x3f41f0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F41F4u;
        goto label_3f41f4;
    }
    ctx->pc = 0x3F41ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F41F4u);
        ctx->pc = 0x3F41F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F41ECu;
        // 0x3f41f0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F41ECu, 0x3F41F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F41F4u;
label_3f41f4:
    // 0x3f41f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f41f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f41f8:
    // 0x3f41f8: 0xc0e87c0  jal         func_3A1F00
label_3f41fc:
    if (ctx->pc == 0x3F41FCu) {
        ctx->pc = 0x3F41FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F41F8u;
        // 0x3f41fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4200u;
        goto label_3f4200;
    }
    ctx->pc = 0x3F41F8u;
    SET_GPR_U32(ctx, 31, 0x3F4200u);
    ctx->pc = 0x3F41FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F41F8u;
    // 0x3f41fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3F41F8u, 0x3F4200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4200u;
label_3f4200:
    // 0x3f4200: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3f4200u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f4204:
    // 0x3f4204: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3f4204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f4208:
    // 0x3f4208: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3f4208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3f420c:
    // 0x3f420c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x3f420cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f4210:
    // 0x3f4210: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3f4210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f4214:
    // 0x3f4214: 0x0  nop
    ctx->pc = 0x3f4214u;
    // NOP
label_3f4218:
    // 0x3f4218: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_3f421c:
    if (ctx->pc == 0x3F421Cu) {
        ctx->pc = 0x3F421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4218u;
        // 0x3f421c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4220u;
        goto label_3f4220;
    }
    ctx->pc = 0x3F4218u;
    {
        const bool branch_taken_0x3f4218 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4218u;
        // 0x3f421c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4218) {
            ctx->pc = 0x3F4250u;
            goto label_3f4250;
        }
    }
    ctx->pc = 0x3F4220u;
label_3f4220:
    // 0x3f4220: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x3f4220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
label_3f4224:
    // 0x3f4224: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x3f4224u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_3f4228:
    // 0x3f4228: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f4228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f422c:
    // 0x3f422c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f422cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f4230:
    // 0x3f4230: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3f4230u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3f4234:
    // 0x3f4234: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3f4234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3f4238:
    // 0x3f4238: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x3f4238u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_3f423c:
    // 0x3f423c: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x3f423cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_3f4240:
    // 0x3f4240: 0x40f809  jalr        $v0
label_3f4244:
    if (ctx->pc == 0x3F4244u) {
        ctx->pc = 0x3F4244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4240u;
        // 0x3f4244: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4248u;
        goto label_3f4248;
    }
    ctx->pc = 0x3F4240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F4248u);
        ctx->pc = 0x3F4244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4240u;
        // 0x3f4244: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F4240u, 0x3F4248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F4248u;
label_3f4248:
    // 0x3f4248: 0x1000000b  b           . + 4 + (0xB << 2)
label_3f424c:
    if (ctx->pc == 0x3F424Cu) {
        ctx->pc = 0x3F424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4248u;
        // 0x3f424c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4250u;
        goto label_3f4250;
    }
    ctx->pc = 0x3F4248u;
    {
        const bool branch_taken_0x3f4248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4248u;
        // 0x3f424c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4248) {
            ctx->pc = 0x3F4278u;
            goto label_3f4278;
        }
    }
    ctx->pc = 0x3F4250u;
label_3f4250:
    // 0x3f4250: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3f4250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_3f4254:
    // 0x3f4254: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x3f4254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
label_3f4258:
    // 0x3f4258: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x3f4258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_3f425c:
    // 0x3f425c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3f4260:
    if (ctx->pc == 0x3F4260u) {
        ctx->pc = 0x3F4260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F425Cu;
        // 0x3f4260: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4264u;
        goto label_3f4264;
    }
    ctx->pc = 0x3F425Cu;
    {
        const bool branch_taken_0x3f425c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F4260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F425Cu;
        // 0x3f4260: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f425c) {
            ctx->pc = 0x3F4278u;
            goto label_3f4278;
        }
    }
    ctx->pc = 0x3F4264u;
label_3f4264:
    // 0x3f4264: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3f4264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3f4268:
    // 0x3f4268: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3f4268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_3f426c:
    // 0x3f426c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f426cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3f4270:
    // 0x3f4270: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3f4270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3f4274:
    // 0x3f4274: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3f4274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_3f4278:
    // 0x3f4278: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x3f4278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_3f427c:
    // 0x3f427c: 0x504000b1  beql        $v0, $zero, . + 4 + (0xB1 << 2)
label_3f4280:
    if (ctx->pc == 0x3F4280u) {
        ctx->pc = 0x3F4280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F427Cu;
        // 0x3f4280: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4284u;
        goto label_3f4284;
    }
    ctx->pc = 0x3F427Cu;
    {
        const bool branch_taken_0x3f427c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f427c) {
            ctx->pc = 0x3F4280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F427Cu;
            // 0x3f4280: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F4544u;
            goto label_3f4544;
        }
    }
    ctx->pc = 0x3F4284u;
label_3f4284:
    // 0x3f4284: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x3f4284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_3f4288:
    // 0x3f4288: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x3f4288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_3f428c:
    // 0x3f428c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_3f4290:
    if (ctx->pc == 0x3F4290u) {
        ctx->pc = 0x3F4290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F428Cu;
        // 0x3f4290: 0x7a2300a0  lq          $v1, 0xA0($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4294u;
        goto label_3f4294;
    }
    ctx->pc = 0x3F428Cu;
    {
        const bool branch_taken_0x3f428c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f428c) {
            ctx->pc = 0x3F4290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F428Cu;
            // 0x3f4290: 0x7a2300a0  lq          $v1, 0xA0($s1) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F42BCu;
            goto label_3f42bc;
        }
    }
    ctx->pc = 0x3F4294u;
label_3f4294:
    // 0x3f4294: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3f4294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3f4298:
    // 0x3f4298: 0x962600d8  lhu         $a2, 0xD8($s1)
    ctx->pc = 0x3f4298u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 216)));
label_3f429c:
    // 0x3f429c: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x3f429cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_3f42a0:
    // 0x3f42a0: 0x26270010  addiu       $a3, $s1, 0x10
    ctx->pc = 0x3f42a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3f42a4:
    // 0x3f42a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f42a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f42a8:
    // 0x3f42a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f42a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f42ac:
    // 0x3f42ac: 0xc04420c  jal         func_110830
label_3f42b0:
    if (ctx->pc == 0x3F42B0u) {
        ctx->pc = 0x3F42B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F42ACu;
        // 0x3f42b0: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F42B4u;
        goto label_3f42b4;
    }
    ctx->pc = 0x3F42ACu;
    SET_GPR_U32(ctx, 31, 0x3F42B4u);
    ctx->pc = 0x3F42B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F42ACu;
    // 0x3f42b0: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x3F42ACu, 0x3F42B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F42B4u;
label_3f42b4:
    // 0x3f42b4: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_3f42b8:
    if (ctx->pc == 0x3F42B8u) {
        ctx->pc = 0x3F42B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F42B4u;
        // 0x3f42b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F42BCu;
        goto label_3f42bc;
    }
    ctx->pc = 0x3F42B4u;
    {
        const bool branch_taken_0x3f42b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F42B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F42B4u;
        // 0x3f42b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f42b4) {
            ctx->pc = 0x3F459Cu;
            goto label_3f459c;
        }
    }
    ctx->pc = 0x3F42BCu;
label_3f42bc:
    // 0x3f42bc: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x3f42bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
label_3f42c0:
    // 0x3f42c0: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x3f42c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_3f42c4:
    // 0x3f42c4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3f42c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3f42c8:
    // 0x3f42c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f42c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f42cc:
    // 0x3f42cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3f42ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3f42d0:
    // 0x3f42d0: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3f42d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_3f42d4:
    // 0x3f42d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f42d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f42d8:
    // 0x3f42d8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3f42d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3f42dc:
    // 0x3f42dc: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x3f42dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3f42e0:
    // 0x3f42e0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x3f42e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f42e4:
    // 0x3f42e4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3f42e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3f42e8:
    // 0x3f42e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3f42e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f42ec:
    // 0x3f42ec: 0xae240054  sw          $a0, 0x54($s1)
    ctx->pc = 0x3f42ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 4));
label_3f42f0:
    // 0x3f42f0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_3f42f4:
    if (ctx->pc == 0x3F42F4u) {
        ctx->pc = 0x3F42F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F42F0u;
        // 0x3f42f4: 0xe7b5001c  swc1        $f21, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F42F8u;
        goto label_3f42f8;
    }
    ctx->pc = 0x3F42F0u;
    {
        const bool branch_taken_0x3f42f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F42F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F42F0u;
        // 0x3f42f4: 0xe7b5001c  swc1        $f21, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f42f0) {
            ctx->pc = 0x3F4308u;
            goto label_3f4308;
        }
    }
    ctx->pc = 0x3F42F8u;
label_3f42f8:
    // 0x3f42f8: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x3f42f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
label_3f42fc:
    // 0x3f42fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3f42fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3f4300:
    // 0x3f4300: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3f4300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3f4304:
    // 0x3f4304: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3f4304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3f4308:
    // 0x3f4308: 0xc0e9694  jal         func_3A5A50
label_3f430c:
    if (ctx->pc == 0x3F430Cu) {
        ctx->pc = 0x3F430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4308u;
        // 0x3f430c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4310u;
        goto label_3f4310;
    }
    ctx->pc = 0x3F4308u;
    SET_GPR_U32(ctx, 31, 0x3F4310u);
    ctx->pc = 0x3F430Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4308u;
    // 0x3f430c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3F4308u, 0x3F4310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4310u;
label_3f4310:
    // 0x3f4310: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f4310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f4314:
    // 0x3f4314: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
label_3f4318:
    if (ctx->pc == 0x3F4318u) {
        ctx->pc = 0x3F4318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4314u;
        // 0x3f4318: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F431Cu;
        goto label_3f431c;
    }
    ctx->pc = 0x3F4314u;
    {
        const bool branch_taken_0x3f4314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3F4318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4314u;
        // 0x3f4318: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4314) {
            ctx->pc = 0x3F4380u;
            goto label_3f4380;
        }
    }
    ctx->pc = 0x3F431Cu;
label_3f431c:
    // 0x3f431c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3f431cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3f4320:
    // 0x3f4320: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x3f4320u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3f4324:
    // 0x3f4324: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3f4324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3f4328:
    // 0x3f4328: 0xc0e8b48  jal         func_3A2D20
label_3f432c:
    if (ctx->pc == 0x3F432Cu) {
        ctx->pc = 0x3F432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4328u;
        // 0x3f432c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4330u;
        goto label_3f4330;
    }
    ctx->pc = 0x3F4328u;
    SET_GPR_U32(ctx, 31, 0x3F4330u);
    ctx->pc = 0x3F432Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4328u;
    // 0x3f432c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3F4328u, 0x3F4330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4330u;
label_3f4330:
    // 0x3f4330: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3f4330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3f4334:
    // 0x3f4334: 0xc0e8b58  jal         func_3A2D60
label_3f4338:
    if (ctx->pc == 0x3F4338u) {
        ctx->pc = 0x3F4338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4334u;
        // 0x3f4338: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F433Cu;
        goto label_3f433c;
    }
    ctx->pc = 0x3F4334u;
    SET_GPR_U32(ctx, 31, 0x3F433Cu);
    ctx->pc = 0x3F4338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4334u;
    // 0x3f4338: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3F4334u, 0x3F433Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F433Cu;
label_3f433c:
    // 0x3f433c: 0xc62000bc  lwc1        $f0, 0xBC($s1)
    ctx->pc = 0x3f433cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f4340:
    // 0x3f4340: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3f4340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_3f4344:
    // 0x3f4344: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f4344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f4348:
    // 0x3f4348: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3f4348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3f434c:
    // 0x3f434c: 0xc0e8b78  jal         func_3A2DE0
label_3f4350:
    if (ctx->pc == 0x3F4350u) {
        ctx->pc = 0x3F4350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F434Cu;
        // 0x3f4350: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4354u;
        goto label_3f4354;
    }
    ctx->pc = 0x3F434Cu;
    SET_GPR_U32(ctx, 31, 0x3F4354u);
    ctx->pc = 0x3F4350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F434Cu;
    // 0x3f4350: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3F434Cu, 0x3F4354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4354u;
label_3f4354:
    // 0x3f4354: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3f4354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3f4358:
    // 0x3f4358: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3f4358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3f435c:
    // 0x3f435c: 0xc0e8b68  jal         func_3A2DA0
label_3f4360:
    if (ctx->pc == 0x3F4360u) {
        ctx->pc = 0x3F4360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F435Cu;
        // 0x3f4360: 0x34a56914  ori         $a1, $a1, 0x6914 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26900);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4364u;
        goto label_3f4364;
    }
    ctx->pc = 0x3F435Cu;
    SET_GPR_U32(ctx, 31, 0x3F4364u);
    ctx->pc = 0x3F4360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F435Cu;
    // 0x3f4360: 0x34a56914  ori         $a1, $a1, 0x6914 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26900);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3F435Cu, 0x3F4364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4364u;
label_3f4364:
    // 0x3f4364: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3f4364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3f4368:
    // 0x3f4368: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f4368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3f436c:
    // 0x3f436c: 0xc0e8b90  jal         func_3A2E40
label_3f4370:
    if (ctx->pc == 0x3F4370u) {
        ctx->pc = 0x3F4370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F436Cu;
        // 0x3f4370: 0x24a56388  addiu       $a1, $a1, 0x6388 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4374u;
        goto label_3f4374;
    }
    ctx->pc = 0x3F436Cu;
    SET_GPR_U32(ctx, 31, 0x3F4374u);
    ctx->pc = 0x3F4370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F436Cu;
    // 0x3f4370: 0x24a56388  addiu       $a1, $a1, 0x6388 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x3F436Cu, 0x3F4374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4374u;
label_3f4374:
    // 0x3f4374: 0xc0e8b50  jal         func_3A2D40
label_3f4378:
    if (ctx->pc == 0x3F4378u) {
        ctx->pc = 0x3F4378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4374u;
        // 0x3f4378: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F437Cu;
        goto label_3f437c;
    }
    ctx->pc = 0x3F4374u;
    SET_GPR_U32(ctx, 31, 0x3F437Cu);
    ctx->pc = 0x3F4378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4374u;
    // 0x3f4378: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3F4374u, 0x3F437Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F437Cu;
label_3f437c:
    // 0x3f437c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f437cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f4380:
    // 0x3f4380: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f4380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f4384:
    // 0x3f4384: 0x2450b8b8  addiu       $s0, $v0, -0x4748
    ctx->pc = 0x3f4384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3f4388:
    // 0x3f4388: 0xc0cd4ee  jal         func_3353B8
label_3f438c:
    if (ctx->pc == 0x3F438Cu) {
        ctx->pc = 0x3F438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4388u;
        // 0x3f438c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4390u;
        goto label_3f4390;
    }
    ctx->pc = 0x3F4388u;
    SET_GPR_U32(ctx, 31, 0x3F4390u);
    ctx->pc = 0x3F438Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4388u;
    // 0x3f438c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3F4388u, 0x3F4390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4390u;
label_3f4390:
    // 0x3f4390: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x3f4390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3f4394:
    // 0x3f4394: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3f4394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3f4398:
    // 0x3f4398: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
label_3f439c:
    if (ctx->pc == 0x3F439Cu) {
        ctx->pc = 0x3F439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4398u;
        // 0x3f439c: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F43A0u;
        goto label_3f43a0;
    }
    ctx->pc = 0x3F4398u;
    {
        const bool branch_taken_0x3f4398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4398) {
            ctx->pc = 0x3F439Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F4398u;
            // 0x3f439c: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F447Cu;
            goto label_3f447c;
        }
    }
    ctx->pc = 0x3F43A0u;
label_3f43a0:
    // 0x3f43a0: 0xc0e87c0  jal         func_3A1F00
label_3f43a4:
    if (ctx->pc == 0x3F43A4u) {
        ctx->pc = 0x3F43A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F43A0u;
        // 0x3f43a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F43A8u;
        goto label_3f43a8;
    }
    ctx->pc = 0x3F43A0u;
    SET_GPR_U32(ctx, 31, 0x3F43A8u);
    ctx->pc = 0x3F43A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F43A0u;
    // 0x3f43a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3F43A0u, 0x3F43A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F43A8u;
label_3f43a8:
    // 0x3f43a8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3f43a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f43ac:
    // 0x3f43ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3f43acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f43b0:
    // 0x3f43b0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f43b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f43b4:
    // 0x3f43b4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3f43b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3f43b8:
    // 0x3f43b8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3f43b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f43bc:
    // 0x3f43bc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3f43bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f43c0:
    // 0x3f43c0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3f43c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f43c4:
    // 0x3f43c4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f43c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f43c8:
    // 0x3f43c8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f43c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f43cc:
    // 0x3f43cc: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x3f43ccu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_3f43d0:
    // 0x3f43d0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3f43d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f43d4:
    // 0x3f43d4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3f43d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3f43d8:
    // 0x3f43d8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3f43d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3f43dc:
    // 0x3f43dc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3f43dcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3f43e0:
    // 0x3f43e0: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x3f43e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f43e4:
    // 0x3f43e4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3f43e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f43e8:
    // 0x3f43e8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3f43e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f43ec:
    // 0x3f43ec: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3f43ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f43f0:
    // 0x3f43f0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3f43f0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3f43f4:
    // 0x3f43f4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3f43f4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_3f43f8:
    // 0x3f43f8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3f43f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3f43fc:
    // 0x3f43fc: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3f43fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3f4400:
    // 0x3f4400: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3f4400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3f4404:
    // 0x3f4404: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3f4404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3f4408:
    // 0x3f4408: 0x8cc20074  lw          $v0, 0x74($a2)
    ctx->pc = 0x3f4408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_3f440c:
    // 0x3f440c: 0x84c40070  lh          $a0, 0x70($a2)
    ctx->pc = 0x3f440cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
label_3f4410:
    // 0x3f4410: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3f4410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3f4414:
    // 0x3f4414: 0x40f809  jalr        $v0
label_3f4418:
    if (ctx->pc == 0x3F4418u) {
        ctx->pc = 0x3F4418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4414u;
        // 0x3f4418: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F441Cu;
        goto label_3f441c;
    }
    ctx->pc = 0x3F4414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F441Cu);
        ctx->pc = 0x3F4418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4414u;
        // 0x3f4418: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F4414u, 0x3F441Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F441Cu;
label_3f441c:
    // 0x3f441c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3f441cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3f4420:
    // 0x3f4420: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3f4420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_3f4424:
    // 0x3f4424: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3f4424u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_3f4428:
    // 0x3f4428: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x3f4428u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_3f442c:
    // 0x3f442c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f442cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f4430:
    // 0x3f4430: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x3f4430u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_3f4434:
    // 0x3f4434: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x3f4434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_3f4438:
    // 0x3f4438: 0x40f809  jalr        $v0
label_3f443c:
    if (ctx->pc == 0x3F443Cu) {
        ctx->pc = 0x3F443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4438u;
        // 0x3f443c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4440u;
        goto label_3f4440;
    }
    ctx->pc = 0x3F4438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F4440u);
        ctx->pc = 0x3F443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4438u;
        // 0x3f443c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F4438u, 0x3F4440u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F4440u;
label_3f4440:
    // 0x3f4440: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x3f4440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3f4444:
    // 0x3f4444: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x3f4444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
label_3f4448:
    // 0x3f4448: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3f4448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3f444c:
    // 0x3f444c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3f444cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3f4450:
    // 0x3f4450: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3f4450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3f4454:
    // 0x3f4454: 0x24060075  addiu       $a2, $zero, 0x75
    ctx->pc = 0x3f4454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_3f4458:
    // 0x3f4458: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x3f4458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
label_3f445c:
    // 0x3f445c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f445cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f4460:
    // 0x3f4460: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3f4460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3f4464:
    // 0x3f4464: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x3f4464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_3f4468:
    // 0x3f4468: 0xae470018  sw          $a3, 0x18($s2)
    ctx->pc = 0x3f4468u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 7));
label_3f446c:
    // 0x3f446c: 0xc0e858c  jal         func_3A1630
label_3f4470:
    if (ctx->pc == 0x3F4470u) {
        ctx->pc = 0x3F4470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F446Cu;
        // 0x3f4470: 0xae460010  sw          $a2, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4474u;
        goto label_3f4474;
    }
    ctx->pc = 0x3F446Cu;
    SET_GPR_U32(ctx, 31, 0x3F4474u);
    ctx->pc = 0x3F4470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F446Cu;
    // 0x3f4470: 0xae460010  sw          $a2, 0x10($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F446Cu, 0x3F4474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4474u;
label_3f4474:
    // 0x3f4474: 0x10000030  b           . + 4 + (0x30 << 2)
label_3f4478:
    if (ctx->pc == 0x3F4478u) {
        ctx->pc = 0x3F4478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4474u;
        // 0x3f4478: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F447Cu;
        goto label_3f447c;
    }
    ctx->pc = 0x3F4474u;
    {
        const bool branch_taken_0x3f4474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4474u;
        // 0x3f4478: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4474) {
            ctx->pc = 0x3F4538u;
            goto label_3f4538;
        }
    }
    ctx->pc = 0x3F447Cu;
label_3f447c:
    // 0x3f447c: 0x5440002e  bnel        $v0, $zero, . + 4 + (0x2E << 2)
label_3f4480:
    if (ctx->pc == 0x3F4480u) {
        ctx->pc = 0x3F4480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F447Cu;
        // 0x3f4480: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4484u;
        goto label_3f4484;
    }
    ctx->pc = 0x3F447Cu;
    {
        const bool branch_taken_0x3f447c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f447c) {
            ctx->pc = 0x3F4480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F447Cu;
            // 0x3f4480: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F4538u;
            goto label_3f4538;
        }
    }
    ctx->pc = 0x3F4484u;
label_3f4484:
    // 0x3f4484: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3f4484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3f4488:
    // 0x3f4488: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3f4488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3f448c:
    // 0x3f448c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f448cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f4490:
    // 0x3f4490: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3f4490u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_3f4494:
    // 0x3f4494: 0xc0cd508  jal         func_335420
label_3f4498:
    if (ctx->pc == 0x3F4498u) {
        ctx->pc = 0x3F4498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4494u;
        // 0x3f4498: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F449Cu;
        goto label_3f449c;
    }
    ctx->pc = 0x3F4494u;
    SET_GPR_U32(ctx, 31, 0x3F449Cu);
    ctx->pc = 0x3F4498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4494u;
    // 0x3f4498: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3F4494u, 0x3F449Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F449Cu;
label_3f449c:
    // 0x3f449c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3f449cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3f44a0:
    // 0x3f44a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3f44a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3f44a4:
    // 0x3f44a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f44a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f44a8:
    // 0x3f44a8: 0xc0cd508  jal         func_335420
label_3f44ac:
    if (ctx->pc == 0x3F44ACu) {
        ctx->pc = 0x3F44ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F44A8u;
        // 0x3f44ac: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F44B0u;
        goto label_3f44b0;
    }
    ctx->pc = 0x3F44A8u;
    SET_GPR_U32(ctx, 31, 0x3F44B0u);
    ctx->pc = 0x3F44ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F44A8u;
    // 0x3f44ac: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3F44A8u, 0x3F44B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F44B0u;
label_3f44b0:
    // 0x3f44b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3f44b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f44b4:
    // 0x3f44b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f44b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f44b8:
    // 0x3f44b8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3f44b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3f44bc:
    // 0x3f44bc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f44bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f44c0:
    // 0x3f44c0: 0xc0cd508  jal         func_335420
label_3f44c4:
    if (ctx->pc == 0x3F44C4u) {
        ctx->pc = 0x3F44C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F44C0u;
        // 0x3f44c4: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F44C8u;
        goto label_3f44c8;
    }
    ctx->pc = 0x3F44C0u;
    SET_GPR_U32(ctx, 31, 0x3F44C8u);
    ctx->pc = 0x3F44C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F44C0u;
    // 0x3f44c4: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3F44C0u, 0x3F44C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F44C8u;
label_3f44c8:
    // 0x3f44c8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3f44c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3f44cc:
    // 0x3f44cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3f44ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f44d0:
    // 0x3f44d0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3f44d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_3f44d4:
    // 0x3f44d4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3f44d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3f44d8:
    // 0x3f44d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f44d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f44dc:
    // 0x3f44dc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3f44dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f44e0:
    // 0x3f44e0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3f44e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3f44e4:
    // 0x3f44e4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f44e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f44e8:
    // 0x3f44e8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3f44e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f44ec:
    // 0x3f44ec: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3f44ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3f44f0:
    // 0x3f44f0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3f44f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3f44f4:
    // 0x3f44f4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3f44f4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3f44f8:
    // 0x3f44f8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3f44f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3f44fc:
    // 0x3f44fc: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x3f44fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3f4500:
    // 0x3f4500: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3f4500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3f4504:
    // 0x3f4504: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x3f4504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_3f4508:
    // 0x3f4508: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x3f4508u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_3f450c:
    // 0x3f450c: 0x40f809  jalr        $v0
label_3f4510:
    if (ctx->pc == 0x3F4510u) {
        ctx->pc = 0x3F4510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F450Cu;
        // 0x3f4510: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4514u;
        goto label_3f4514;
    }
    ctx->pc = 0x3F450Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F4514u);
        ctx->pc = 0x3F4510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F450Cu;
        // 0x3f4510: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F450Cu, 0x3F4514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F4514u;
label_3f4514:
    // 0x3f4514: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f4514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f4518:
    // 0x3f4518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f4518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f451c:
    // 0x3f451c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3f451cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3f4520:
    // 0x3f4520: 0xc0cd4ee  jal         func_3353B8
label_3f4524:
    if (ctx->pc == 0x3F4524u) {
        ctx->pc = 0x3F4524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4520u;
        // 0x3f4524: 0xae430018  sw          $v1, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4528u;
        goto label_3f4528;
    }
    ctx->pc = 0x3F4520u;
    SET_GPR_U32(ctx, 31, 0x3F4528u);
    ctx->pc = 0x3F4524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4520u;
    // 0x3f4524: 0xae430018  sw          $v1, 0x18($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3F4520u, 0x3F4528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4528u;
label_3f4528:
    // 0x3f4528: 0x24450005  addiu       $a1, $v0, 0x5
    ctx->pc = 0x3f4528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_3f452c:
    // 0x3f452c: 0xc0e858c  jal         func_3A1630
label_3f4530:
    if (ctx->pc == 0x3F4530u) {
        ctx->pc = 0x3F4530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F452Cu;
        // 0x3f4530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4534u;
        goto label_3f4534;
    }
    ctx->pc = 0x3F452Cu;
    SET_GPR_U32(ctx, 31, 0x3F4534u);
    ctx->pc = 0x3F4530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F452Cu;
    // 0x3f4530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F452Cu, 0x3F4534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4534u;
label_3f4534:
    // 0x3f4534: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3f4534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3f4538:
    // 0x3f4538: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f4538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3f453c:
    // 0x3f453c: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x3f453cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_3f4540:
    // 0x3f4540: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x3f4540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_3f4544:
    // 0x3f4544: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3f4544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f4548:
    // 0x3f4548: 0x50440001  beql        $v0, $a0, . + 4 + (0x1 << 2)
label_3f454c:
    if (ctx->pc == 0x3F454Cu) {
        ctx->pc = 0x3F454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4548u;
        // 0x3f454c: 0xae400018  sw          $zero, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4550u;
        goto label_3f4550;
    }
    ctx->pc = 0x3F4548u;
    {
        const bool branch_taken_0x3f4548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x3f4548) {
            ctx->pc = 0x3F454Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F4548u;
            // 0x3f454c: 0xae400018  sw          $zero, 0x18($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F4550u;
            goto label_3f4550;
        }
    }
    ctx->pc = 0x3F4550u;
label_3f4550:
    // 0x3f4550: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x3f4550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_3f4554:
    // 0x3f4554: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f4554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f4558:
    // 0x3f4558: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_3f455c:
    if (ctx->pc == 0x3F455Cu) {
        ctx->pc = 0x3F455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4558u;
        // 0x3f455c: 0xae440018  sw          $a0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4560u;
        goto label_3f4560;
    }
    ctx->pc = 0x3F4558u;
    {
        const bool branch_taken_0x3f4558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3f4558) {
            ctx->pc = 0x3F455Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F4558u;
            // 0x3f455c: 0xae440018  sw          $a0, 0x18($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F4560u;
            goto label_3f4560;
        }
    }
    ctx->pc = 0x3F4560u;
label_3f4560:
    // 0x3f4560: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3f4560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f4564:
    // 0x3f4564: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f4564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3f4568:
    // 0x3f4568: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x3f4568u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_3f456c:
    // 0x3f456c: 0x28420078  slti        $v0, $v0, 0x78
    ctx->pc = 0x3f456cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)120) ? 1 : 0);
label_3f4570:
    // 0x3f4570: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_3f4574:
    if (ctx->pc == 0x3F4574u) {
        ctx->pc = 0x3F4574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4570u;
        // 0x3f4574: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4578u;
        goto label_3f4578;
    }
    ctx->pc = 0x3F4570u;
    {
        const bool branch_taken_0x3f4570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F4574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4570u;
        // 0x3f4574: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4570) {
            ctx->pc = 0x3F459Cu;
            goto label_3f459c;
        }
    }
    ctx->pc = 0x3F4578u;
label_3f4578:
    // 0x3f4578: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x3f4578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_3f457c:
    // 0x3f457c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3f457cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3f4580:
    // 0x3f4580: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3f4580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3f4584:
    // 0x3f4584: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f4584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f4588:
    // 0x3f4588: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3f4588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3f458c:
    // 0x3f458c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x3f458cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3f4590:
    // 0x3f4590: 0xc0e858c  jal         func_3A1630
label_3f4594:
    if (ctx->pc == 0x3F4594u) {
        ctx->pc = 0x3F4594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4590u;
        // 0x3f4594: 0xae2300b4  sw          $v1, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4598u;
        goto label_3f4598;
    }
    ctx->pc = 0x3F4590u;
    SET_GPR_U32(ctx, 31, 0x3F4598u);
    ctx->pc = 0x3F4594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4590u;
    // 0x3f4594: 0xae2300b4  sw          $v1, 0xB4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F4590u, 0x3F4598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4598u;
label_3f4598:
    // 0x3f4598: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f4598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f459c:
    // 0x3f459c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3f459cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3f45a0:
    // 0x3f45a0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3f45a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f45a4:
    // 0x3f45a4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3f45a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f45a8:
    // 0x3f45a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3f45a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3f45ac:
    // 0x3f45ac: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x3f45acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3f45b0:
    // 0x3f45b0: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x3f45b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3f45b4:
    // 0x3f45b4: 0x3e00008  jr          $ra
label_3f45b8:
    if (ctx->pc == 0x3F45B8u) {
        ctx->pc = 0x3F45B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F45B4u;
        // 0x3f45b8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F45BCu;
        goto label_3f45bc;
    }
    ctx->pc = 0x3F45B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F45B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F45B4u;
        // 0x3f45b8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F45B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F45BCu;
label_3f45bc:
    // 0x3f45bc: 0x0  nop
    ctx->pc = 0x3f45bcu;
    // NOP
    ctx->pc = 0x3f45c0u;
}
