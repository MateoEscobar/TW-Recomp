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

// Function: sub_003C4280
// Address: 0x3c4280 - 0x3c4580
void sub_003C4280_0x3c4280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C4280_0x3c4280");
#endif

    switch (ctx->pc) {
        case 0x3c4280u: goto label_3c4280;
        case 0x3c4284u: goto label_3c4284;
        case 0x3c4288u: goto label_3c4288;
        case 0x3c428cu: goto label_3c428c;
        case 0x3c4290u: goto label_3c4290;
        case 0x3c4294u: goto label_3c4294;
        case 0x3c4298u: goto label_3c4298;
        case 0x3c429cu: goto label_3c429c;
        case 0x3c42a0u: goto label_3c42a0;
        case 0x3c42a4u: goto label_3c42a4;
        case 0x3c42a8u: goto label_3c42a8;
        case 0x3c42acu: goto label_3c42ac;
        case 0x3c42b0u: goto label_3c42b0;
        case 0x3c42b4u: goto label_3c42b4;
        case 0x3c42b8u: goto label_3c42b8;
        case 0x3c42bcu: goto label_3c42bc;
        case 0x3c42c0u: goto label_3c42c0;
        case 0x3c42c4u: goto label_3c42c4;
        case 0x3c42c8u: goto label_3c42c8;
        case 0x3c42ccu: goto label_3c42cc;
        case 0x3c42d0u: goto label_3c42d0;
        case 0x3c42d4u: goto label_3c42d4;
        case 0x3c42d8u: goto label_3c42d8;
        case 0x3c42dcu: goto label_3c42dc;
        case 0x3c42e0u: goto label_3c42e0;
        case 0x3c42e4u: goto label_3c42e4;
        case 0x3c42e8u: goto label_3c42e8;
        case 0x3c42ecu: goto label_3c42ec;
        case 0x3c42f0u: goto label_3c42f0;
        case 0x3c42f4u: goto label_3c42f4;
        case 0x3c42f8u: goto label_3c42f8;
        case 0x3c42fcu: goto label_3c42fc;
        case 0x3c4300u: goto label_3c4300;
        case 0x3c4304u: goto label_3c4304;
        case 0x3c4308u: goto label_3c4308;
        case 0x3c430cu: goto label_3c430c;
        case 0x3c4310u: goto label_3c4310;
        case 0x3c4314u: goto label_3c4314;
        case 0x3c4318u: goto label_3c4318;
        case 0x3c431cu: goto label_3c431c;
        case 0x3c4320u: goto label_3c4320;
        case 0x3c4324u: goto label_3c4324;
        case 0x3c4328u: goto label_3c4328;
        case 0x3c432cu: goto label_3c432c;
        case 0x3c4330u: goto label_3c4330;
        case 0x3c4334u: goto label_3c4334;
        case 0x3c4338u: goto label_3c4338;
        case 0x3c433cu: goto label_3c433c;
        case 0x3c4340u: goto label_3c4340;
        case 0x3c4344u: goto label_3c4344;
        case 0x3c4348u: goto label_3c4348;
        case 0x3c434cu: goto label_3c434c;
        case 0x3c4350u: goto label_3c4350;
        case 0x3c4354u: goto label_3c4354;
        case 0x3c4358u: goto label_3c4358;
        case 0x3c435cu: goto label_3c435c;
        case 0x3c4360u: goto label_3c4360;
        case 0x3c4364u: goto label_3c4364;
        case 0x3c4368u: goto label_3c4368;
        case 0x3c436cu: goto label_3c436c;
        case 0x3c4370u: goto label_3c4370;
        case 0x3c4374u: goto label_3c4374;
        case 0x3c4378u: goto label_3c4378;
        case 0x3c437cu: goto label_3c437c;
        case 0x3c4380u: goto label_3c4380;
        case 0x3c4384u: goto label_3c4384;
        case 0x3c4388u: goto label_3c4388;
        case 0x3c438cu: goto label_3c438c;
        case 0x3c4390u: goto label_3c4390;
        case 0x3c4394u: goto label_3c4394;
        case 0x3c4398u: goto label_3c4398;
        case 0x3c439cu: goto label_3c439c;
        case 0x3c43a0u: goto label_3c43a0;
        case 0x3c43a4u: goto label_3c43a4;
        case 0x3c43a8u: goto label_3c43a8;
        case 0x3c43acu: goto label_3c43ac;
        case 0x3c43b0u: goto label_3c43b0;
        case 0x3c43b4u: goto label_3c43b4;
        case 0x3c43b8u: goto label_3c43b8;
        case 0x3c43bcu: goto label_3c43bc;
        case 0x3c43c0u: goto label_3c43c0;
        case 0x3c43c4u: goto label_3c43c4;
        case 0x3c43c8u: goto label_3c43c8;
        case 0x3c43ccu: goto label_3c43cc;
        case 0x3c43d0u: goto label_3c43d0;
        case 0x3c43d4u: goto label_3c43d4;
        case 0x3c43d8u: goto label_3c43d8;
        case 0x3c43dcu: goto label_3c43dc;
        case 0x3c43e0u: goto label_3c43e0;
        case 0x3c43e4u: goto label_3c43e4;
        case 0x3c43e8u: goto label_3c43e8;
        case 0x3c43ecu: goto label_3c43ec;
        case 0x3c43f0u: goto label_3c43f0;
        case 0x3c43f4u: goto label_3c43f4;
        case 0x3c43f8u: goto label_3c43f8;
        case 0x3c43fcu: goto label_3c43fc;
        case 0x3c4400u: goto label_3c4400;
        case 0x3c4404u: goto label_3c4404;
        case 0x3c4408u: goto label_3c4408;
        case 0x3c440cu: goto label_3c440c;
        case 0x3c4410u: goto label_3c4410;
        case 0x3c4414u: goto label_3c4414;
        case 0x3c4418u: goto label_3c4418;
        case 0x3c441cu: goto label_3c441c;
        case 0x3c4420u: goto label_3c4420;
        case 0x3c4424u: goto label_3c4424;
        case 0x3c4428u: goto label_3c4428;
        case 0x3c442cu: goto label_3c442c;
        case 0x3c4430u: goto label_3c4430;
        case 0x3c4434u: goto label_3c4434;
        case 0x3c4438u: goto label_3c4438;
        case 0x3c443cu: goto label_3c443c;
        case 0x3c4440u: goto label_3c4440;
        case 0x3c4444u: goto label_3c4444;
        case 0x3c4448u: goto label_3c4448;
        case 0x3c444cu: goto label_3c444c;
        case 0x3c4450u: goto label_3c4450;
        case 0x3c4454u: goto label_3c4454;
        case 0x3c4458u: goto label_3c4458;
        case 0x3c445cu: goto label_3c445c;
        case 0x3c4460u: goto label_3c4460;
        case 0x3c4464u: goto label_3c4464;
        case 0x3c4468u: goto label_3c4468;
        case 0x3c446cu: goto label_3c446c;
        case 0x3c4470u: goto label_3c4470;
        case 0x3c4474u: goto label_3c4474;
        case 0x3c4478u: goto label_3c4478;
        case 0x3c447cu: goto label_3c447c;
        case 0x3c4480u: goto label_3c4480;
        case 0x3c4484u: goto label_3c4484;
        case 0x3c4488u: goto label_3c4488;
        case 0x3c448cu: goto label_3c448c;
        case 0x3c4490u: goto label_3c4490;
        case 0x3c4494u: goto label_3c4494;
        case 0x3c4498u: goto label_3c4498;
        case 0x3c449cu: goto label_3c449c;
        case 0x3c44a0u: goto label_3c44a0;
        case 0x3c44a4u: goto label_3c44a4;
        case 0x3c44a8u: goto label_3c44a8;
        case 0x3c44acu: goto label_3c44ac;
        case 0x3c44b0u: goto label_3c44b0;
        case 0x3c44b4u: goto label_3c44b4;
        case 0x3c44b8u: goto label_3c44b8;
        case 0x3c44bcu: goto label_3c44bc;
        case 0x3c44c0u: goto label_3c44c0;
        case 0x3c44c4u: goto label_3c44c4;
        case 0x3c44c8u: goto label_3c44c8;
        case 0x3c44ccu: goto label_3c44cc;
        case 0x3c44d0u: goto label_3c44d0;
        case 0x3c44d4u: goto label_3c44d4;
        case 0x3c44d8u: goto label_3c44d8;
        case 0x3c44dcu: goto label_3c44dc;
        case 0x3c44e0u: goto label_3c44e0;
        case 0x3c44e4u: goto label_3c44e4;
        case 0x3c44e8u: goto label_3c44e8;
        case 0x3c44ecu: goto label_3c44ec;
        case 0x3c44f0u: goto label_3c44f0;
        case 0x3c44f4u: goto label_3c44f4;
        case 0x3c44f8u: goto label_3c44f8;
        case 0x3c44fcu: goto label_3c44fc;
        case 0x3c4500u: goto label_3c4500;
        case 0x3c4504u: goto label_3c4504;
        case 0x3c4508u: goto label_3c4508;
        case 0x3c450cu: goto label_3c450c;
        case 0x3c4510u: goto label_3c4510;
        case 0x3c4514u: goto label_3c4514;
        case 0x3c4518u: goto label_3c4518;
        case 0x3c451cu: goto label_3c451c;
        case 0x3c4520u: goto label_3c4520;
        case 0x3c4524u: goto label_3c4524;
        case 0x3c4528u: goto label_3c4528;
        case 0x3c452cu: goto label_3c452c;
        case 0x3c4530u: goto label_3c4530;
        case 0x3c4534u: goto label_3c4534;
        case 0x3c4538u: goto label_3c4538;
        case 0x3c453cu: goto label_3c453c;
        case 0x3c4540u: goto label_3c4540;
        case 0x3c4544u: goto label_3c4544;
        case 0x3c4548u: goto label_3c4548;
        case 0x3c454cu: goto label_3c454c;
        case 0x3c4550u: goto label_3c4550;
        case 0x3c4554u: goto label_3c4554;
        case 0x3c4558u: goto label_3c4558;
        case 0x3c455cu: goto label_3c455c;
        case 0x3c4560u: goto label_3c4560;
        case 0x3c4564u: goto label_3c4564;
        case 0x3c4568u: goto label_3c4568;
        case 0x3c456cu: goto label_3c456c;
        case 0x3c4570u: goto label_3c4570;
        case 0x3c4574u: goto label_3c4574;
        case 0x3c4578u: goto label_3c4578;
        case 0x3c457cu: goto label_3c457c;
        default: break;
    }

    ctx->pc = 0x3c4280u;

label_3c4280:
    // 0x3c4280: 0x27bdfb30  addiu       $sp, $sp, -0x4D0
    ctx->pc = 0x3c4280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966064));
label_3c4284:
    // 0x3c4284: 0x7fb004b0  sq          $s0, 0x4B0($sp)
    ctx->pc = 0x3c4284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 16));
label_3c4288:
    // 0x3c4288: 0x7fb104a0  sq          $s1, 0x4A0($sp)
    ctx->pc = 0x3c4288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 17));
label_3c428c:
    // 0x3c428c: 0x7fb20490  sq          $s2, 0x490($sp)
    ctx->pc = 0x3c428cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 18));
label_3c4290:
    // 0x3c4290: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c4290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c4294:
    // 0x3c4294: 0x7fb30480  sq          $s3, 0x480($sp)
    ctx->pc = 0x3c4294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 19));
label_3c4298:
    // 0x3c4298: 0x7fb40470  sq          $s4, 0x470($sp)
    ctx->pc = 0x3c4298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 20));
label_3c429c:
    // 0x3c429c: 0xffbf0460  sd          $ra, 0x460($sp)
    ctx->pc = 0x3c429cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 31));
label_3c42a0:
    // 0x3c42a0: 0xe7b504c8  swc1        $f21, 0x4C8($sp)
    ctx->pc = 0x3c42a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1224), bits); }
label_3c42a4:
    // 0x3c42a4: 0xe7b404c0  swc1        $f20, 0x4C0($sp)
    ctx->pc = 0x3c42a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1216), bits); }
label_3c42a8:
    // 0x3c42a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c42a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c42ac:
    // 0x3c42ac: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c42acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c42b0:
    // 0x3c42b0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c42b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c42b4:
    // 0x3c42b4: 0x40f809  jalr        $v0
label_3c42b8:
    if (ctx->pc == 0x3C42B8u) {
        ctx->pc = 0x3C42B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C42B4u;
        // 0x3c42b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C42BCu;
        goto label_3c42bc;
    }
    ctx->pc = 0x3C42B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C42BCu);
        ctx->pc = 0x3C42B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C42B4u;
        // 0x3c42b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C42B4u, 0x3C42BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C42BCu;
label_3c42bc:
    // 0x3c42bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c42bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c42c0:
    // 0x3c42c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c42c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c42c4:
    // 0x3c42c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c42c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c42c8:
    // 0x3c42c8: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3c42c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3c42cc:
    // 0x3c42cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3c42ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3c42d0:
    // 0x3c42d0: 0x0  nop
    ctx->pc = 0x3c42d0u;
    // NOP
label_3c42d4:
    // 0x3c42d4: 0x0  nop
    ctx->pc = 0x3c42d4u;
    // NOP
label_3c42d8:
    // 0x3c42d8: 0x0  nop
    ctx->pc = 0x3c42d8u;
    // NOP
label_3c42dc:
    // 0x3c42dc: 0x0  nop
    ctx->pc = 0x3c42dcu;
    // NOP
label_3c42e0:
    // 0x3c42e0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3c42e4:
    if (ctx->pc == 0x3C42E4u) {
        ctx->pc = 0x3C42E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C42E0u;
        // 0x3c42e4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C42E8u;
        goto label_3c42e8;
    }
    ctx->pc = 0x3C42E0u;
    {
        const bool branch_taken_0x3c42e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3C42E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C42E0u;
        // 0x3c42e4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c42e0) {
            ctx->pc = 0x3C42D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c42d0;
        }
    }
    ctx->pc = 0x3C42E8u;
label_3c42e8:
    // 0x3c42e8: 0xc138ddc  jal         func_4E3770
label_3c42ec:
    if (ctx->pc == 0x3C42ECu) {
        ctx->pc = 0x3C42F0u;
        goto label_3c42f0;
    }
    ctx->pc = 0x3C42E8u;
    SET_GPR_U32(ctx, 31, 0x3C42F0u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3C42E8u, 0x3C42F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C42F0u;
label_3c42f0:
    // 0x3c42f0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3c42f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c42f4:
    // 0x3c42f4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_3c42f8:
    if (ctx->pc == 0x3C42F8u) {
        ctx->pc = 0x3C42F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C42F4u;
        // 0x3c42f8: 0xc63400bc  lwc1        $f20, 0xBC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C42FCu;
        goto label_3c42fc;
    }
    ctx->pc = 0x3C42F4u;
    {
        const bool branch_taken_0x3c42f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C42F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C42F4u;
        // 0x3c42f8: 0xc63400bc  lwc1        $f20, 0xBC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c42f4) {
            ctx->pc = 0x3C4320u;
            goto label_3c4320;
        }
    }
    ctx->pc = 0x3C42FCu;
label_3c42fc:
    // 0x3c42fc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3c42fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3c4300:
    // 0x3c4300: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3c4300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3c4304:
    // 0x3c4304: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c4304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c4308:
    // 0x3c4308: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3c4308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3c430c:
    // 0x3c430c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c430cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c4310:
    // 0x3c4310: 0xc0cd518  jal         func_335460
label_3c4314:
    if (ctx->pc == 0x3C4314u) {
        ctx->pc = 0x3C4314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4310u;
        // 0x3c4314: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4318u;
        goto label_3c4318;
    }
    ctx->pc = 0x3C4310u;
    SET_GPR_U32(ctx, 31, 0x3C4318u);
    ctx->pc = 0x3C4314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4310u;
    // 0x3c4314: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C4310u, 0x3C4318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4318u;
label_3c4318:
    // 0x3c4318: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x3c4318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c431c:
    // 0x3c431c: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x3c431cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3c4320:
    // 0x3c4320: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3c4320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c4324:
    // 0x3c4324: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x3c4324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_3c4328:
    // 0x3c4328: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3c4328u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3c432c:
    // 0x3c432c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c432cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c4330:
    // 0x3c4330: 0x46000085  abs.s       $f2, $f0
    ctx->pc = 0x3c4330u;
    ctx->f[2] = FPU_ABS_S(ctx->f[0]);
label_3c4334:
    // 0x3c4334: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x3c4334u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c4338:
    // 0x3c4338: 0x0  nop
    ctx->pc = 0x3c4338u;
    // NOP
label_3c433c:
    // 0x3c433c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_3c4340:
    if (ctx->pc == 0x3C4340u) {
        ctx->pc = 0x3C4344u;
        goto label_3c4344;
    }
    ctx->pc = 0x3C433Cu;
    {
        const bool branch_taken_0x3c433c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c433c) {
            ctx->pc = 0x3C4360u;
            goto label_3c4360;
        }
    }
    ctx->pc = 0x3C4344u;
label_3c4344:
    // 0x3c4344: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3c4344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c4348:
    // 0x3c4348: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x3c4348u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_3c434c:
    // 0x3c434c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3c434cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c4350:
    // 0x3c4350: 0x0  nop
    ctx->pc = 0x3c4350u;
    // NOP
label_3c4354:
    // 0x3c4354: 0x45020061  bc1fl       . + 4 + (0x61 << 2)
label_3c4358:
    if (ctx->pc == 0x3C4358u) {
        ctx->pc = 0x3C4358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4354u;
        // 0x3c4358: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C435Cu;
        goto label_3c435c;
    }
    ctx->pc = 0x3C4354u;
    {
        const bool branch_taken_0x3c4354 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c4354) {
            ctx->pc = 0x3C4358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C4354u;
            // 0x3c4358: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C44DCu;
            goto label_3c44dc;
        }
    }
    ctx->pc = 0x3C435Cu;
label_3c435c:
    // 0x3c435c: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x3c435cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c4360:
    // 0x3c4360: 0x0  nop
    ctx->pc = 0x3c4360u;
    // NOP
label_3c4364:
    // 0x3c4364: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
label_3c4368:
    if (ctx->pc == 0x3C4368u) {
        ctx->pc = 0x3C4368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4364u;
        // 0x3c4368: 0xafa00430  sw          $zero, 0x430($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C436Cu;
        goto label_3c436c;
    }
    ctx->pc = 0x3C4364u;
    {
        const bool branch_taken_0x3c4364 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c4364) {
            ctx->pc = 0x3C4368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C4364u;
            // 0x3c4368: 0xafa00430  sw          $zero, 0x430($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4398u;
            goto label_3c4398;
        }
    }
    ctx->pc = 0x3C436Cu;
label_3c436c:
    // 0x3c436c: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x3c436cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
label_3c4370:
    // 0x3c4370: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3c4370u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3c4374:
    // 0x3c4374: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c4374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c4378:
    // 0x3c4378: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c4378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c437c:
    // 0x3c437c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c437cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c4380:
    // 0x3c4380: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3c4380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3c4384:
    // 0x3c4384: 0xafa00434  sw          $zero, 0x434($sp)
    ctx->pc = 0x3c4384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1076), GPR_U32(ctx, 0));
label_3c4388:
    // 0x3c4388: 0xe7a1043c  swc1        $f1, 0x43C($sp)
    ctx->pc = 0x3c4388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1084), bits); }
label_3c438c:
    // 0x3c438c: 0xafa00438  sw          $zero, 0x438($sp)
    ctx->pc = 0x3c438cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1080), GPR_U32(ctx, 0));
label_3c4390:
    // 0x3c4390: 0x1000000a  b           . + 4 + (0xA << 2)
label_3c4394:
    if (ctx->pc == 0x3C4394u) {
        ctx->pc = 0x3C4394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4390u;
        // 0x3c4394: 0xe7a00430  swc1        $f0, 0x430($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1072), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4398u;
        goto label_3c4398;
    }
    ctx->pc = 0x3C4390u;
    {
        const bool branch_taken_0x3c4390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4390u;
        // 0x3c4394: 0xe7a00430  swc1        $f0, 0x430($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1072), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4390) {
            ctx->pc = 0x3C43BCu;
            goto label_3c43bc;
        }
    }
    ctx->pc = 0x3C4398u;
label_3c4398:
    // 0x3c4398: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x3c4398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
label_3c439c:
    // 0x3c439c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3c439cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3c43a0:
    // 0x3c43a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c43a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c43a4:
    // 0x3c43a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c43a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c43a8:
    // 0x3c43a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c43a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c43ac:
    // 0x3c43ac: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3c43acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3c43b0:
    // 0x3c43b0: 0xe7a1043c  swc1        $f1, 0x43C($sp)
    ctx->pc = 0x3c43b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1084), bits); }
label_3c43b4:
    // 0x3c43b4: 0xafa00438  sw          $zero, 0x438($sp)
    ctx->pc = 0x3c43b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1080), GPR_U32(ctx, 0));
label_3c43b8:
    // 0x3c43b8: 0xe7a00434  swc1        $f0, 0x434($sp)
    ctx->pc = 0x3c43b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1076), bits); }
label_3c43bc:
    // 0x3c43bc: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3c43bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3c43c0:
    // 0x3c43c0: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3c43c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3c43c4:
    // 0x3c43c4: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3c43c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3c43c8:
    // 0x3c43c8: 0x26330010  addiu       $s3, $s1, 0x10
    ctx->pc = 0x3c43c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3c43cc:
    // 0x3c43cc: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x3c43ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3c43d0:
    // 0x3c43d0: 0x27a60410  addiu       $a2, $sp, 0x410
    ctx->pc = 0x3c43d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3c43d4:
    // 0x3c43d4: 0xc136b18  jal         func_4DAC60
label_3c43d8:
    if (ctx->pc == 0x3C43D8u) {
        ctx->pc = 0x3C43D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C43D4u;
        // 0x3c43d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C43DCu;
        goto label_3c43dc;
    }
    ctx->pc = 0x3C43D4u;
    SET_GPR_U32(ctx, 31, 0x3C43DCu);
    ctx->pc = 0x3C43D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C43D4u;
    // 0x3c43d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C43D4u, 0x3C43DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C43DCu;
label_3c43dc:
    // 0x3c43dc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3c43dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3c43e0:
    // 0x3c43e0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3c43e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3c43e4:
    // 0x3c43e4: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3c43e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3c43e8:
    // 0x3c43e8: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x3c43e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3c43ec:
    // 0x3c43ec: 0x27a50430  addiu       $a1, $sp, 0x430
    ctx->pc = 0x3c43ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3c43f0:
    // 0x3c43f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c43f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c43f4:
    // 0x3c43f4: 0xc136b18  jal         func_4DAC60
label_3c43f8:
    if (ctx->pc == 0x3C43F8u) {
        ctx->pc = 0x3C43F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C43F4u;
        // 0x3c43f8: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C43FCu;
        goto label_3c43fc;
    }
    ctx->pc = 0x3C43F4u;
    SET_GPR_U32(ctx, 31, 0x3C43FCu);
    ctx->pc = 0x3C43F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C43F4u;
    // 0x3c43f8: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C43F4u, 0x3C43FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C43FCu;
label_3c43fc:
    // 0x3c43fc: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3c43fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3c4400:
    // 0x3c4400: 0x27b40420  addiu       $s4, $sp, 0x420
    ctx->pc = 0x3c4400u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3c4404:
    // 0x3c4404: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3c4404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3c4408:
    // 0x3c4408: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c4408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c440c:
    // 0x3c440c: 0x27a40450  addiu       $a0, $sp, 0x450
    ctx->pc = 0x3c440cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3c4410:
    // 0x3c4410: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3c4410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3c4414:
    // 0x3c4414: 0xc136b24  jal         func_4DAC90
label_3c4418:
    if (ctx->pc == 0x3C4418u) {
        ctx->pc = 0x3C4418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4414u;
        // 0x3c4418: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C441Cu;
        goto label_3c441c;
    }
    ctx->pc = 0x3C4414u;
    SET_GPR_U32(ctx, 31, 0x3C441Cu);
    ctx->pc = 0x3C4418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4414u;
    // 0x3c4418: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C4414u, 0x3C441Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C441Cu;
label_3c441c:
    // 0x3c441c: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x3c441cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3c4420:
    // 0x3c4420: 0x27b20440  addiu       $s2, $sp, 0x440
    ctx->pc = 0x3c4420u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3c4424:
    // 0x3c4424: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c4424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c4428:
    // 0x3c4428: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c4428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c442c:
    // 0x3c442c: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3c442cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3c4430:
    // 0x3c4430: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3c4430u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3c4434:
    // 0x3c4434: 0xc0e8db8  jal         func_3A36E0
label_3c4438:
    if (ctx->pc == 0x3C4438u) {
        ctx->pc = 0x3C4438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4434u;
        // 0x3c4438: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C443Cu;
        goto label_3c443c;
    }
    ctx->pc = 0x3C4434u;
    SET_GPR_U32(ctx, 31, 0x3C443Cu);
    ctx->pc = 0x3C4438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4434u;
    // 0x3c4438: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A36E0u, 0x3C4434u, 0x3C443Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C443Cu;
label_3c443c:
    // 0x3c443c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3c4440:
    if (ctx->pc == 0x3C4440u) {
        ctx->pc = 0x3C4440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C443Cu;
        // 0x3c4440: 0x27a60410  addiu       $a2, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4444u;
        goto label_3c4444;
    }
    ctx->pc = 0x3C443Cu;
    {
        const bool branch_taken_0x3c443c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C443Cu;
        // 0x3c4440: 0x27a60410  addiu       $a2, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c443c) {
            ctx->pc = 0x3C445Cu;
            goto label_3c445c;
        }
    }
    ctx->pc = 0x3C4444u;
label_3c4444:
    // 0x3c4444: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x3c4444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_3c4448:
    // 0x3c4448: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c4448u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c444c:
    // 0x3c444c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c444cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c4450:
    // 0x3c4450: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3c4450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c4454:
    // 0x3c4454: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x3c4454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_3c4458:
    // 0x3c4458: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x3c4458u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3c445c:
    // 0x3c445c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3c445cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c4460:
    // 0x3c4460: 0xc136afa  jal         func_4DABE8
label_3c4464:
    if (ctx->pc == 0x3C4464u) {
        ctx->pc = 0x3C4464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4460u;
        // 0x3c4464: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4468u;
        goto label_3c4468;
    }
    ctx->pc = 0x3C4460u;
    SET_GPR_U32(ctx, 31, 0x3C4468u);
    ctx->pc = 0x3C4464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4460u;
    // 0x3c4464: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3C4460u, 0x3C4468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4468u;
label_3c4468:
    // 0x3c4468: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3c4468u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3c446c:
    // 0x3c446c: 0x27a50430  addiu       $a1, $sp, 0x430
    ctx->pc = 0x3c446cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3c4470:
    // 0x3c4470: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c4470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4474:
    // 0x3c4474: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c4474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c4478:
    // 0x3c4478: 0xc136b18  jal         func_4DAC60
label_3c447c:
    if (ctx->pc == 0x3C447Cu) {
        ctx->pc = 0x3C447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4478u;
        // 0x3c447c: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4480u;
        goto label_3c4480;
    }
    ctx->pc = 0x3C4478u;
    SET_GPR_U32(ctx, 31, 0x3C4480u);
    ctx->pc = 0x3C447Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4478u;
    // 0x3c447c: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C4478u, 0x3C4480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4480u;
label_3c4480:
    // 0x3c4480: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3c4480u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3c4484:
    // 0x3c4484: 0x27a40450  addiu       $a0, $sp, 0x450
    ctx->pc = 0x3c4484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3c4488:
    // 0x3c4488: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3c4488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3c448c:
    // 0x3c448c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c448cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c4490:
    // 0x3c4490: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c4490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4494:
    // 0x3c4494: 0xc136b24  jal         func_4DAC90
label_3c4498:
    if (ctx->pc == 0x3C4498u) {
        ctx->pc = 0x3C4498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4494u;
        // 0x3c4498: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C449Cu;
        goto label_3c449c;
    }
    ctx->pc = 0x3C4494u;
    SET_GPR_U32(ctx, 31, 0x3C449Cu);
    ctx->pc = 0x3C4498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4494u;
    // 0x3c4498: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C4494u, 0x3C449Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C449Cu;
label_3c449c:
    // 0x3c449c: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x3c449cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3c44a0:
    // 0x3c44a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c44a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c44a4:
    // 0x3c44a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c44a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c44a8:
    // 0x3c44a8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3c44a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3c44ac:
    // 0x3c44ac: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3c44acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3c44b0:
    // 0x3c44b0: 0xc0e8db8  jal         func_3A36E0
label_3c44b4:
    if (ctx->pc == 0x3C44B4u) {
        ctx->pc = 0x3C44B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C44B0u;
        // 0x3c44b4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C44B8u;
        goto label_3c44b8;
    }
    ctx->pc = 0x3C44B0u;
    SET_GPR_U32(ctx, 31, 0x3C44B8u);
    ctx->pc = 0x3C44B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C44B0u;
    // 0x3c44b4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A36E0u, 0x3C44B0u, 0x3C44B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C44B8u;
label_3c44b8:
    // 0x3c44b8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_3c44bc:
    if (ctx->pc == 0x3C44BCu) {
        ctx->pc = 0x3C44BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C44B8u;
        // 0x3c44bc: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C44C0u;
        goto label_3c44c0;
    }
    ctx->pc = 0x3C44B8u;
    {
        const bool branch_taken_0x3c44b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c44b8) {
            ctx->pc = 0x3C44BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C44B8u;
            // 0x3c44bc: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C44DCu;
            goto label_3c44dc;
        }
    }
    ctx->pc = 0x3C44C0u;
label_3c44c0:
    // 0x3c44c0: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x3c44c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_3c44c4:
    // 0x3c44c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c44c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c44c8:
    // 0x3c44c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c44c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c44cc:
    // 0x3c44cc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3c44ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c44d0:
    // 0x3c44d0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x3c44d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_3c44d4:
    // 0x3c44d4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x3c44d4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3c44d8:
    // 0x3c44d8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3c44d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c44dc:
    // 0x3c44dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3c44dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c44e0:
    // 0x3c44e0: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
label_3c44e4:
    if (ctx->pc == 0x3C44E4u) {
        ctx->pc = 0x3C44E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C44E0u;
        // 0x3c44e4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C44E8u;
        goto label_3c44e8;
    }
    ctx->pc = 0x3C44E0u;
    {
        const bool branch_taken_0x3c44e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c44e0) {
            ctx->pc = 0x3C44E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C44E0u;
            // 0x3c44e4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4514u;
            goto label_3c4514;
        }
    }
    ctx->pc = 0x3C44E8u;
label_3c44e8:
    // 0x3c44e8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x3c44e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3c44ec:
    // 0x3c44ec: 0x2c820041  sltiu       $v0, $a0, 0x41
    ctx->pc = 0x3c44ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
label_3c44f0:
    // 0x3c44f0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3c44f4:
    if (ctx->pc == 0x3C44F4u) {
        ctx->pc = 0x3C44F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C44F0u;
        // 0x3c44f4: 0xae2000b4  sw          $zero, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C44F8u;
        goto label_3c44f8;
    }
    ctx->pc = 0x3C44F0u;
    {
        const bool branch_taken_0x3c44f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c44f0) {
            ctx->pc = 0x3C44F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C44F0u;
            // 0x3c44f4: 0xae2000b4  sw          $zero, 0xB4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C450Cu;
            goto label_3c450c;
        }
    }
    ctx->pc = 0x3C44F8u;
label_3c44f8:
    // 0x3c44f8: 0xc0e96ae  jal         func_3A5AB8
label_3c44fc:
    if (ctx->pc == 0x3C44FCu) {
        ctx->pc = 0x3C4500u;
        goto label_3c4500;
    }
    ctx->pc = 0x3C44F8u;
    SET_GPR_U32(ctx, 31, 0x3C4500u);
    ctx->pc = 0x3A5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5AB8u, 0x3C44F8u, 0x3C4500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4500u;
label_3c4500:
    // 0x3c4500: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c4500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c4504:
    // 0x3c4504: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x3c4504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_3c4508:
    // 0x3c4508: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x3c4508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
label_3c450c:
    // 0x3c450c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3c450cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3c4510:
    // 0x3c4510: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3c4510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c4514:
    // 0x3c4514: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x3c4514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_3c4518:
    // 0x3c4518: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_3c451c:
    if (ctx->pc == 0x3C451Cu) {
        ctx->pc = 0x3C451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4518u;
        // 0x3c451c: 0xe63400c0  swc1        $f20, 0xC0($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4520u;
        goto label_3c4520;
    }
    ctx->pc = 0x3C4518u;
    {
        const bool branch_taken_0x3c4518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c4518) {
            ctx->pc = 0x3C451Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C4518u;
            // 0x3c451c: 0xe63400c0  swc1        $f20, 0xC0($s1) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4548u;
            goto label_3c4548;
        }
    }
    ctx->pc = 0x3C4520u;
label_3c4520:
    // 0x3c4520: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x3c4520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3c4524:
    // 0x3c4524: 0x2c820041  sltiu       $v0, $a0, 0x41
    ctx->pc = 0x3c4524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
label_3c4528:
    // 0x3c4528: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3c452c:
    if (ctx->pc == 0x3C452Cu) {
        ctx->pc = 0x3C452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4528u;
        // 0x3c452c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4530u;
        goto label_3c4530;
    }
    ctx->pc = 0x3C4528u;
    {
        const bool branch_taken_0x3c4528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4528u;
        // 0x3c452c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4528) {
            ctx->pc = 0x3C4558u;
            goto label_3c4558;
        }
    }
    ctx->pc = 0x3C4530u;
label_3c4530:
    // 0x3c4530: 0xc0e96ae  jal         func_3A5AB8
label_3c4534:
    if (ctx->pc == 0x3C4534u) {
        ctx->pc = 0x3C4538u;
        goto label_3c4538;
    }
    ctx->pc = 0x3C4530u;
    SET_GPR_U32(ctx, 31, 0x3C4538u);
    ctx->pc = 0x3A5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5AB8u, 0x3C4530u, 0x3C4538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4538u;
label_3c4538:
    // 0x3c4538: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c4538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c453c:
    // 0x3c453c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x3c453cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_3c4540:
    // 0x3c4540: 0x10000005  b           . + 4 + (0x5 << 2)
label_3c4544:
    if (ctx->pc == 0x3C4544u) {
        ctx->pc = 0x3C4544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4540u;
        // 0x3c4544: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4548u;
        goto label_3c4548;
    }
    ctx->pc = 0x3C4540u;
    {
        const bool branch_taken_0x3c4540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4540u;
        // 0x3c4544: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4540) {
            ctx->pc = 0x3C4558u;
            goto label_3c4558;
        }
    }
    ctx->pc = 0x3C4548u;
label_3c4548:
    // 0x3c4548: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c4548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c454c:
    // 0x3c454c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3c454cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c4550:
    // 0x3c4550: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c4550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3c4554:
    // 0x3c4554: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x3c4554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_3c4558:
    // 0x3c4558: 0x7bb004b0  lq          $s0, 0x4B0($sp)
    ctx->pc = 0x3c4558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3c455c:
    // 0x3c455c: 0x7bb104a0  lq          $s1, 0x4A0($sp)
    ctx->pc = 0x3c455cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3c4560:
    // 0x3c4560: 0x7bb20490  lq          $s2, 0x490($sp)
    ctx->pc = 0x3c4560u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c4564:
    // 0x3c4564: 0x7bb30480  lq          $s3, 0x480($sp)
    ctx->pc = 0x3c4564u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3c4568:
    // 0x3c4568: 0x7bb40470  lq          $s4, 0x470($sp)
    ctx->pc = 0x3c4568u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3c456c:
    // 0x3c456c: 0xdfbf0460  ld          $ra, 0x460($sp)
    ctx->pc = 0x3c456cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
label_3c4570:
    // 0x3c4570: 0xc7b504c8  lwc1        $f21, 0x4C8($sp)
    ctx->pc = 0x3c4570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3c4574:
    // 0x3c4574: 0xc7b404c0  lwc1        $f20, 0x4C0($sp)
    ctx->pc = 0x3c4574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c4578:
    // 0x3c4578: 0x3e00008  jr          $ra
label_3c457c:
    if (ctx->pc == 0x3C457Cu) {
        ctx->pc = 0x3C457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4578u;
        // 0x3c457c: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4580u;
        goto label_fallthrough_0x3c4578;
    }
    ctx->pc = 0x3C4578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4578u;
        // 0x3c457c: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c4578:
    ctx->pc = 0x3C4580u;
}
