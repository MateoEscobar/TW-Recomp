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

// Function: sub_002D42C0
// Address: 0x2d42c0 - 0x2d4628
void sub_002D42C0_0x2d42c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D42C0_0x2d42c0");
#endif

    switch (ctx->pc) {
        case 0x2d42c0u: goto label_2d42c0;
        case 0x2d42c4u: goto label_2d42c4;
        case 0x2d42c8u: goto label_2d42c8;
        case 0x2d42ccu: goto label_2d42cc;
        case 0x2d42d0u: goto label_2d42d0;
        case 0x2d42d4u: goto label_2d42d4;
        case 0x2d42d8u: goto label_2d42d8;
        case 0x2d42dcu: goto label_2d42dc;
        case 0x2d42e0u: goto label_2d42e0;
        case 0x2d42e4u: goto label_2d42e4;
        case 0x2d42e8u: goto label_2d42e8;
        case 0x2d42ecu: goto label_2d42ec;
        case 0x2d42f0u: goto label_2d42f0;
        case 0x2d42f4u: goto label_2d42f4;
        case 0x2d42f8u: goto label_2d42f8;
        case 0x2d42fcu: goto label_2d42fc;
        case 0x2d4300u: goto label_2d4300;
        case 0x2d4304u: goto label_2d4304;
        case 0x2d4308u: goto label_2d4308;
        case 0x2d430cu: goto label_2d430c;
        case 0x2d4310u: goto label_2d4310;
        case 0x2d4314u: goto label_2d4314;
        case 0x2d4318u: goto label_2d4318;
        case 0x2d431cu: goto label_2d431c;
        case 0x2d4320u: goto label_2d4320;
        case 0x2d4324u: goto label_2d4324;
        case 0x2d4328u: goto label_2d4328;
        case 0x2d432cu: goto label_2d432c;
        case 0x2d4330u: goto label_2d4330;
        case 0x2d4334u: goto label_2d4334;
        case 0x2d4338u: goto label_2d4338;
        case 0x2d433cu: goto label_2d433c;
        case 0x2d4340u: goto label_2d4340;
        case 0x2d4344u: goto label_2d4344;
        case 0x2d4348u: goto label_2d4348;
        case 0x2d434cu: goto label_2d434c;
        case 0x2d4350u: goto label_2d4350;
        case 0x2d4354u: goto label_2d4354;
        case 0x2d4358u: goto label_2d4358;
        case 0x2d435cu: goto label_2d435c;
        case 0x2d4360u: goto label_2d4360;
        case 0x2d4364u: goto label_2d4364;
        case 0x2d4368u: goto label_2d4368;
        case 0x2d436cu: goto label_2d436c;
        case 0x2d4370u: goto label_2d4370;
        case 0x2d4374u: goto label_2d4374;
        case 0x2d4378u: goto label_2d4378;
        case 0x2d437cu: goto label_2d437c;
        case 0x2d4380u: goto label_2d4380;
        case 0x2d4384u: goto label_2d4384;
        case 0x2d4388u: goto label_2d4388;
        case 0x2d438cu: goto label_2d438c;
        case 0x2d4390u: goto label_2d4390;
        case 0x2d4394u: goto label_2d4394;
        case 0x2d4398u: goto label_2d4398;
        case 0x2d439cu: goto label_2d439c;
        case 0x2d43a0u: goto label_2d43a0;
        case 0x2d43a4u: goto label_2d43a4;
        case 0x2d43a8u: goto label_2d43a8;
        case 0x2d43acu: goto label_2d43ac;
        case 0x2d43b0u: goto label_2d43b0;
        case 0x2d43b4u: goto label_2d43b4;
        case 0x2d43b8u: goto label_2d43b8;
        case 0x2d43bcu: goto label_2d43bc;
        case 0x2d43c0u: goto label_2d43c0;
        case 0x2d43c4u: goto label_2d43c4;
        case 0x2d43c8u: goto label_2d43c8;
        case 0x2d43ccu: goto label_2d43cc;
        case 0x2d43d0u: goto label_2d43d0;
        case 0x2d43d4u: goto label_2d43d4;
        case 0x2d43d8u: goto label_2d43d8;
        case 0x2d43dcu: goto label_2d43dc;
        case 0x2d43e0u: goto label_2d43e0;
        case 0x2d43e4u: goto label_2d43e4;
        case 0x2d43e8u: goto label_2d43e8;
        case 0x2d43ecu: goto label_2d43ec;
        case 0x2d43f0u: goto label_2d43f0;
        case 0x2d43f4u: goto label_2d43f4;
        case 0x2d43f8u: goto label_2d43f8;
        case 0x2d43fcu: goto label_2d43fc;
        case 0x2d4400u: goto label_2d4400;
        case 0x2d4404u: goto label_2d4404;
        case 0x2d4408u: goto label_2d4408;
        case 0x2d440cu: goto label_2d440c;
        case 0x2d4410u: goto label_2d4410;
        case 0x2d4414u: goto label_2d4414;
        case 0x2d4418u: goto label_2d4418;
        case 0x2d441cu: goto label_2d441c;
        case 0x2d4420u: goto label_2d4420;
        case 0x2d4424u: goto label_2d4424;
        case 0x2d4428u: goto label_2d4428;
        case 0x2d442cu: goto label_2d442c;
        case 0x2d4430u: goto label_2d4430;
        case 0x2d4434u: goto label_2d4434;
        case 0x2d4438u: goto label_2d4438;
        case 0x2d443cu: goto label_2d443c;
        case 0x2d4440u: goto label_2d4440;
        case 0x2d4444u: goto label_2d4444;
        case 0x2d4448u: goto label_2d4448;
        case 0x2d444cu: goto label_2d444c;
        case 0x2d4450u: goto label_2d4450;
        case 0x2d4454u: goto label_2d4454;
        case 0x2d4458u: goto label_2d4458;
        case 0x2d445cu: goto label_2d445c;
        case 0x2d4460u: goto label_2d4460;
        case 0x2d4464u: goto label_2d4464;
        case 0x2d4468u: goto label_2d4468;
        case 0x2d446cu: goto label_2d446c;
        case 0x2d4470u: goto label_2d4470;
        case 0x2d4474u: goto label_2d4474;
        case 0x2d4478u: goto label_2d4478;
        case 0x2d447cu: goto label_2d447c;
        case 0x2d4480u: goto label_2d4480;
        case 0x2d4484u: goto label_2d4484;
        case 0x2d4488u: goto label_2d4488;
        case 0x2d448cu: goto label_2d448c;
        case 0x2d4490u: goto label_2d4490;
        case 0x2d4494u: goto label_2d4494;
        case 0x2d4498u: goto label_2d4498;
        case 0x2d449cu: goto label_2d449c;
        case 0x2d44a0u: goto label_2d44a0;
        case 0x2d44a4u: goto label_2d44a4;
        case 0x2d44a8u: goto label_2d44a8;
        case 0x2d44acu: goto label_2d44ac;
        case 0x2d44b0u: goto label_2d44b0;
        case 0x2d44b4u: goto label_2d44b4;
        case 0x2d44b8u: goto label_2d44b8;
        case 0x2d44bcu: goto label_2d44bc;
        case 0x2d44c0u: goto label_2d44c0;
        case 0x2d44c4u: goto label_2d44c4;
        case 0x2d44c8u: goto label_2d44c8;
        case 0x2d44ccu: goto label_2d44cc;
        case 0x2d44d0u: goto label_2d44d0;
        case 0x2d44d4u: goto label_2d44d4;
        case 0x2d44d8u: goto label_2d44d8;
        case 0x2d44dcu: goto label_2d44dc;
        case 0x2d44e0u: goto label_2d44e0;
        case 0x2d44e4u: goto label_2d44e4;
        case 0x2d44e8u: goto label_2d44e8;
        case 0x2d44ecu: goto label_2d44ec;
        case 0x2d44f0u: goto label_2d44f0;
        case 0x2d44f4u: goto label_2d44f4;
        case 0x2d44f8u: goto label_2d44f8;
        case 0x2d44fcu: goto label_2d44fc;
        case 0x2d4500u: goto label_2d4500;
        case 0x2d4504u: goto label_2d4504;
        case 0x2d4508u: goto label_2d4508;
        case 0x2d450cu: goto label_2d450c;
        case 0x2d4510u: goto label_2d4510;
        case 0x2d4514u: goto label_2d4514;
        case 0x2d4518u: goto label_2d4518;
        case 0x2d451cu: goto label_2d451c;
        case 0x2d4520u: goto label_2d4520;
        case 0x2d4524u: goto label_2d4524;
        case 0x2d4528u: goto label_2d4528;
        case 0x2d452cu: goto label_2d452c;
        case 0x2d4530u: goto label_2d4530;
        case 0x2d4534u: goto label_2d4534;
        case 0x2d4538u: goto label_2d4538;
        case 0x2d453cu: goto label_2d453c;
        case 0x2d4540u: goto label_2d4540;
        case 0x2d4544u: goto label_2d4544;
        case 0x2d4548u: goto label_2d4548;
        case 0x2d454cu: goto label_2d454c;
        case 0x2d4550u: goto label_2d4550;
        case 0x2d4554u: goto label_2d4554;
        case 0x2d4558u: goto label_2d4558;
        case 0x2d455cu: goto label_2d455c;
        case 0x2d4560u: goto label_2d4560;
        case 0x2d4564u: goto label_2d4564;
        case 0x2d4568u: goto label_2d4568;
        case 0x2d456cu: goto label_2d456c;
        case 0x2d4570u: goto label_2d4570;
        case 0x2d4574u: goto label_2d4574;
        case 0x2d4578u: goto label_2d4578;
        case 0x2d457cu: goto label_2d457c;
        case 0x2d4580u: goto label_2d4580;
        case 0x2d4584u: goto label_2d4584;
        case 0x2d4588u: goto label_2d4588;
        case 0x2d458cu: goto label_2d458c;
        case 0x2d4590u: goto label_2d4590;
        case 0x2d4594u: goto label_2d4594;
        case 0x2d4598u: goto label_2d4598;
        case 0x2d459cu: goto label_2d459c;
        case 0x2d45a0u: goto label_2d45a0;
        case 0x2d45a4u: goto label_2d45a4;
        case 0x2d45a8u: goto label_2d45a8;
        case 0x2d45acu: goto label_2d45ac;
        case 0x2d45b0u: goto label_2d45b0;
        case 0x2d45b4u: goto label_2d45b4;
        case 0x2d45b8u: goto label_2d45b8;
        case 0x2d45bcu: goto label_2d45bc;
        case 0x2d45c0u: goto label_2d45c0;
        case 0x2d45c4u: goto label_2d45c4;
        case 0x2d45c8u: goto label_2d45c8;
        case 0x2d45ccu: goto label_2d45cc;
        case 0x2d45d0u: goto label_2d45d0;
        case 0x2d45d4u: goto label_2d45d4;
        case 0x2d45d8u: goto label_2d45d8;
        case 0x2d45dcu: goto label_2d45dc;
        case 0x2d45e0u: goto label_2d45e0;
        case 0x2d45e4u: goto label_2d45e4;
        case 0x2d45e8u: goto label_2d45e8;
        case 0x2d45ecu: goto label_2d45ec;
        case 0x2d45f0u: goto label_2d45f0;
        case 0x2d45f4u: goto label_2d45f4;
        case 0x2d45f8u: goto label_2d45f8;
        case 0x2d45fcu: goto label_2d45fc;
        case 0x2d4600u: goto label_2d4600;
        case 0x2d4604u: goto label_2d4604;
        case 0x2d4608u: goto label_2d4608;
        case 0x2d460cu: goto label_2d460c;
        case 0x2d4610u: goto label_2d4610;
        case 0x2d4614u: goto label_2d4614;
        case 0x2d4618u: goto label_2d4618;
        case 0x2d461cu: goto label_2d461c;
        case 0x2d4620u: goto label_2d4620;
        case 0x2d4624u: goto label_2d4624;
        default: break;
    }

    ctx->pc = 0x2d42c0u;

label_2d42c0:
    // 0x2d42c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2d42c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2d42c4:
    // 0x2d42c4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2d42c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_2d42c8:
    // 0x2d42c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d42c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2d42cc:
    // 0x2d42cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d42ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d42d0:
    // 0x2d42d0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2d42d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_2d42d4:
    // 0x2d42d4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2d42d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d42d8:
    // 0x2d42d8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2d42d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2d42dc:
    // 0x2d42dc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2d42dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_2d42e0:
    // 0x2d42e0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d42e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2d42e4:
    // 0x2d42e4: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2d42e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2d42e8:
    // 0x2d42e8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d42e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d42ec:
    // 0x2d42ec: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2d42ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d42f0:
    // 0x2d42f0: 0xc08bfbc  jal         func_22FEF0
label_2d42f4:
    if (ctx->pc == 0x2D42F4u) {
        ctx->pc = 0x2D42F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D42F0u;
        // 0x2d42f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D42F8u;
        goto label_2d42f8;
    }
    ctx->pc = 0x2D42F0u;
    SET_GPR_U32(ctx, 31, 0x2D42F8u);
    ctx->pc = 0x2D42F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D42F0u;
    // 0x2d42f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2D42F0u, 0x2D42F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D42F8u;
label_2d42f8:
    // 0x2d42f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d42f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d42fc:
    // 0x2d42fc: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2d42fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2d4300:
    // 0x2d4300: 0x1c6000c0  bgtz        $v1, . + 4 + (0xC0 << 2)
label_2d4304:
    if (ctx->pc == 0x2D4304u) {
        ctx->pc = 0x2D4304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4300u;
        // 0x2d4304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4308u;
        goto label_2d4308;
    }
    ctx->pc = 0x2D4300u;
    {
        const bool branch_taken_0x2d4300 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2D4304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4300u;
        // 0x2d4304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4300) {
            ctx->pc = 0x2D4604u;
            goto label_2d4604;
        }
    }
    ctx->pc = 0x2D4308u;
label_2d4308:
    // 0x2d4308: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2d4308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
label_2d430c:
    // 0x2d430c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d430cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d4310:
    // 0x2d4310: 0xc089998  jal         func_226660
label_2d4314:
    if (ctx->pc == 0x2D4314u) {
        ctx->pc = 0x2D4314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4310u;
        // 0x2d4314: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4318u;
        goto label_2d4318;
    }
    ctx->pc = 0x2D4310u;
    SET_GPR_U32(ctx, 31, 0x2D4318u);
    ctx->pc = 0x2D4314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4310u;
    // 0x2d4314: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2D4310u, 0x2D4318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4318u;
label_2d4318:
    // 0x2d4318: 0x105400ba  beq         $v0, $s4, . + 4 + (0xBA << 2)
label_2d431c:
    if (ctx->pc == 0x2D431Cu) {
        ctx->pc = 0x2D431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4318u;
        // 0x2d431c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4320u;
        goto label_2d4320;
    }
    ctx->pc = 0x2D4318u;
    {
        const bool branch_taken_0x2d4318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x2D431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4318u;
        // 0x2d431c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4318) {
            ctx->pc = 0x2D4604u;
            goto label_2d4604;
        }
    }
    ctx->pc = 0x2D4320u;
label_2d4320:
    // 0x2d4320: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2d4320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d4324:
    // 0x2d4324: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x2d4324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
label_2d4328:
    // 0x2d4328: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2d432c:
    if (ctx->pc == 0x2D432Cu) {
        ctx->pc = 0x2D432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4328u;
        // 0x2d432c: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4330u;
        goto label_2d4330;
    }
    ctx->pc = 0x2D4328u;
    {
        const bool branch_taken_0x2d4328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d4328) {
            ctx->pc = 0x2D432Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4328u;
            // 0x2d432c: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4330u;
            goto label_2d4330;
        }
    }
    ctx->pc = 0x2D4330u;
label_2d4330:
    // 0x2d4330: 0xc0e4060  jal         func_390180
label_2d4334:
    if (ctx->pc == 0x2D4334u) {
        ctx->pc = 0x2D4334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4330u;
        // 0x2d4334: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4338u;
        goto label_2d4338;
    }
    ctx->pc = 0x2D4330u;
    SET_GPR_U32(ctx, 31, 0x2D4338u);
    ctx->pc = 0x2D4334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4330u;
    // 0x2d4334: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2D4330u, 0x2D4338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4338u;
label_2d4338:
    // 0x2d4338: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d4338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d433c:
    // 0x2d433c: 0x12000075  beqz        $s0, . + 4 + (0x75 << 2)
label_2d4340:
    if (ctx->pc == 0x2D4340u) {
        ctx->pc = 0x2D4340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D433Cu;
        // 0x2d4340: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4344u;
        goto label_2d4344;
    }
    ctx->pc = 0x2D433Cu;
    {
        const bool branch_taken_0x2d433c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D433Cu;
        // 0x2d4340: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d433c) {
            ctx->pc = 0x2D4514u;
            goto label_2d4514;
        }
    }
    ctx->pc = 0x2D4344u;
label_2d4344:
    // 0x2d4344: 0x9242002c  lbu         $v0, 0x2C($s2)
    ctx->pc = 0x2d4344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
label_2d4348:
    // 0x2d4348: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2d4348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2d434c:
    // 0x2d434c: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_2d4350:
    if (ctx->pc == 0x2D4350u) {
        ctx->pc = 0x2D4350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D434Cu;
        // 0x2d4350: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4354u;
        goto label_2d4354;
    }
    ctx->pc = 0x2D434Cu;
    {
        const bool branch_taken_0x2d434c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D434Cu;
        // 0x2d4350: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d434c) {
            ctx->pc = 0x2D4444u;
            goto label_2d4444;
        }
    }
    ctx->pc = 0x2D4354u;
label_2d4354:
    // 0x2d4354: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d4354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d4358:
    // 0x2d4358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d4358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d435c:
    // 0x2d435c: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2d435cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2d4360:
    // 0x2d4360: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2d4360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2d4364:
    // 0x2d4364: 0x40f809  jalr        $v0
label_2d4368:
    if (ctx->pc == 0x2D4368u) {
        ctx->pc = 0x2D4368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4364u;
        // 0x2d4368: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D436Cu;
        goto label_2d436c;
    }
    ctx->pc = 0x2D4364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D436Cu);
        ctx->pc = 0x2D4368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4364u;
        // 0x2d4368: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4364u, 0x2D436Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D436Cu;
label_2d436c:
    // 0x2d436c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2d436cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d4370:
    // 0x2d4370: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2d4370u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2d4374:
    // 0x2d4374: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2d4374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d4378:
    // 0x2d4378: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x2d4378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_2d437c:
    // 0x2d437c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2d437cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_2d4380:
    // 0x2d4380: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d4380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d4384:
    // 0x2d4384: 0xc094904  jal         func_252410
label_2d4388:
    if (ctx->pc == 0x2D4388u) {
        ctx->pc = 0x2D4388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4384u;
        // 0x2d4388: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D438Cu;
        goto label_2d438c;
    }
    ctx->pc = 0x2D4384u;
    SET_GPR_U32(ctx, 31, 0x2D438Cu);
    ctx->pc = 0x2D4388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4384u;
    // 0x2d4388: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252410u, 0x2D4384u, 0x2D438Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D438Cu;
label_2d438c:
    // 0x2d438c: 0x54540029  bnel        $v0, $s4, . + 4 + (0x29 << 2)
label_2d4390:
    if (ctx->pc == 0x2D4390u) {
        ctx->pc = 0x2D4390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D438Cu;
        // 0x2d4390: 0x9243002c  lbu         $v1, 0x2C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4394u;
        goto label_2d4394;
    }
    ctx->pc = 0x2D438Cu;
    {
        const bool branch_taken_0x2d438c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2d438c) {
            ctx->pc = 0x2D4390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D438Cu;
            // 0x2d4390: 0x9243002c  lbu         $v1, 0x2C($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4434u;
            goto label_2d4434;
        }
    }
    ctx->pc = 0x2D4394u;
label_2d4394:
    // 0x2d4394: 0x86620092  lh          $v0, 0x92($s3)
    ctx->pc = 0x2d4394u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2d4398:
    // 0x2d4398: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2d4398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_2d439c:
    // 0x2d439c: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x2d439cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_2d43a0:
    // 0x2d43a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d43a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d43a4:
    // 0x2d43a4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2d43a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2d43a8:
    // 0x2d43a8: 0xc0cdb38  jal         func_336CE0
label_2d43ac:
    if (ctx->pc == 0x2D43ACu) {
        ctx->pc = 0x2D43ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D43A8u;
        // 0x2d43ac: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D43B0u;
        goto label_2d43b0;
    }
    ctx->pc = 0x2D43A8u;
    SET_GPR_U32(ctx, 31, 0x2D43B0u);
    ctx->pc = 0x2D43ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D43A8u;
    // 0x2d43ac: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2D43A8u, 0x2D43B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D43B0u;
label_2d43b0:
    // 0x2d43b0: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x2d43b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d43b4:
    // 0x2d43b4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2d43b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2d43b8:
    // 0x2d43b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d43b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d43bc:
    // 0x2d43bc: 0x0  nop
    ctx->pc = 0x2d43bcu;
    // NOP
label_2d43c0:
    // 0x2d43c0: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_2d43c4:
    if (ctx->pc == 0x2D43C4u) {
        ctx->pc = 0x2D43C8u;
        goto label_2d43c8;
    }
    ctx->pc = 0x2D43C0u;
    {
        const bool branch_taken_0x2d43c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d43c0) {
            ctx->pc = 0x2D4444u;
            goto label_2d4444;
        }
    }
    ctx->pc = 0x2D43C8u;
label_2d43c8:
    // 0x2d43c8: 0x9242002c  lbu         $v0, 0x2C($s2)
    ctx->pc = 0x2d43c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
label_2d43cc:
    // 0x2d43cc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2d43d0:
    if (ctx->pc == 0x2D43D0u) {
        ctx->pc = 0x2D43D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D43CCu;
        // 0x2d43d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D43D4u;
        goto label_2d43d4;
    }
    ctx->pc = 0x2D43CCu;
    {
        const bool branch_taken_0x2d43cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D43D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D43CCu;
        // 0x2d43d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d43cc) {
            ctx->pc = 0x2D43F8u;
            goto label_2d43f8;
        }
    }
    ctx->pc = 0x2D43D4u;
label_2d43d4:
    // 0x2d43d4: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x2d43d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2d43d8:
    // 0x2d43d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d43d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2d43dc:
    // 0x2d43dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d43dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d43e0:
    // 0x2d43e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d43e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d43e4:
    // 0x2d43e4: 0x8e490010  lw          $t1, 0x10($s2)
    ctx->pc = 0x2d43e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2d43e8:
    // 0x2d43e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d43e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d43ec:
    // 0x2d43ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d43ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d43f0:
    // 0x2d43f0: 0xc088178  jal         func_2205E0
label_2d43f4:
    if (ctx->pc == 0x2D43F4u) {
        ctx->pc = 0x2D43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D43F0u;
        // 0x2d43f4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D43F8u;
        goto label_2d43f8;
    }
    ctx->pc = 0x2D43F0u;
    SET_GPR_U32(ctx, 31, 0x2D43F8u);
    ctx->pc = 0x2D43F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D43F0u;
    // 0x2d43f4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2D43F0u, 0x2D43F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D43F8u;
label_2d43f8:
    // 0x2d43f8: 0xc0a367c  jal         func_28D9F0
label_2d43fc:
    if (ctx->pc == 0x2D43FCu) {
        ctx->pc = 0x2D43FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D43F8u;
        // 0x2d43fc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4400u;
        goto label_2d4400;
    }
    ctx->pc = 0x2D43F8u;
    SET_GPR_U32(ctx, 31, 0x2D4400u);
    ctx->pc = 0x2D43FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D43F8u;
    // 0x2d43fc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D43F8u, 0x2D4400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4400u;
label_2d4400:
    // 0x2d4400: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d4400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d4404:
    // 0x2d4404: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_2d4408:
    if (ctx->pc == 0x2D4408u) {
        ctx->pc = 0x2D4408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4404u;
        // 0x2d4408: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D440Cu;
        goto label_2d440c;
    }
    ctx->pc = 0x2D4404u;
    {
        const bool branch_taken_0x2d4404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4404u;
        // 0x2d4408: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4404) {
            ctx->pc = 0x2D4430u;
            goto label_2d4430;
        }
    }
    ctx->pc = 0x2D440Cu;
label_2d440c:
    // 0x2d440c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d440cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d4410:
    // 0x2d4410: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2d4410u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2d4414:
    // 0x2d4414: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2d4414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d4418:
    // 0x2d4418: 0x8e470014  lw          $a3, 0x14($s2)
    ctx->pc = 0x2d4418u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2d441c:
    // 0x2d441c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d441cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d4420:
    // 0x2d4420: 0xc64c0020  lwc1        $f12, 0x20($s2)
    ctx->pc = 0x2d4420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2d4424:
    // 0x2d4424: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d4424u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d4428:
    // 0x2d4428: 0xc0bee7a  jal         func_2FB9E8
label_2d442c:
    if (ctx->pc == 0x2D442Cu) {
        ctx->pc = 0x2D442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4428u;
        // 0x2d442c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4430u;
        goto label_2d4430;
    }
    ctx->pc = 0x2D4428u;
    SET_GPR_U32(ctx, 31, 0x2D4430u);
    ctx->pc = 0x2D442Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4428u;
    // 0x2d442c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2D4428u, 0x2D4430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4430u;
label_2d4430:
    // 0x2d4430: 0x9243002c  lbu         $v1, 0x2C($s2)
    ctx->pc = 0x2d4430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
label_2d4434:
    // 0x2d4434: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d4434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d4438:
    // 0x2d4438: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d4438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2d443c:
    // 0x2d443c: 0x10000071  b           . + 4 + (0x71 << 2)
label_2d4440:
    if (ctx->pc == 0x2D4440u) {
        ctx->pc = 0x2D4440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D443Cu;
        // 0x2d4440: 0xa243002c  sb          $v1, 0x2C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 44), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4444u;
        goto label_2d4444;
    }
    ctx->pc = 0x2D443Cu;
    {
        const bool branch_taken_0x2d443c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D443Cu;
        // 0x2d4440: 0xa243002c  sb          $v1, 0x2C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 44), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d443c) {
            ctx->pc = 0x2D4604u;
            goto label_2d4604;
        }
    }
    ctx->pc = 0x2D4444u;
label_2d4444:
    // 0x2d4444: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
label_2d4448:
    if (ctx->pc == 0x2D4448u) {
        ctx->pc = 0x2D4448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4444u;
        // 0x2d4448: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D444Cu;
        goto label_2d444c;
    }
    ctx->pc = 0x2D4444u;
    {
        const bool branch_taken_0x2d4444 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4444u;
        // 0x2d4448: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4444) {
            ctx->pc = 0x2D4510u;
            goto label_2d4510;
        }
    }
    ctx->pc = 0x2D444Cu;
label_2d444c:
    // 0x2d444c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d444cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d4450:
    // 0x2d4450: 0x26710090  addiu       $s1, $s3, 0x90
    ctx->pc = 0x2d4450u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_2d4454:
    // 0x2d4454: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2d4454u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2d4458:
    // 0x2d4458: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2d4458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2d445c:
    // 0x2d445c: 0x60f809  jalr        $v1
label_2d4460:
    if (ctx->pc == 0x2D4460u) {
        ctx->pc = 0x2D4460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D445Cu;
        // 0x2d4460: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4464u;
        goto label_2d4464;
    }
    ctx->pc = 0x2D445Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2D4464u);
        ctx->pc = 0x2D4460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D445Cu;
        // 0x2d4460: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D445Cu, 0x2D4464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D4464u;
label_2d4464:
    // 0x2d4464: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2d4464u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d4468:
    // 0x2d4468: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x2d4468u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_2d446c:
    // 0x2d446c: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x2d446cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_2d4470:
    // 0x2d4470: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2d4470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2d4474:
    // 0x2d4474: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x2d4474u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2d4478:
    // 0x2d4478: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d4478u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2d447c:
    // 0x2d447c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2d447cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2d4480:
    // 0x2d4480: 0xc0cd7d2  jal         func_335F48
label_2d4484:
    if (ctx->pc == 0x2D4484u) {
        ctx->pc = 0x2D4484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4480u;
        // 0x2d4484: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4488u;
        goto label_2d4488;
    }
    ctx->pc = 0x2D4480u;
    SET_GPR_U32(ctx, 31, 0x2D4488u);
    ctx->pc = 0x2D4484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4480u;
    // 0x2d4484: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2D4480u, 0x2D4488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4488u;
label_2d4488:
    // 0x2d4488: 0xc0cd742  jal         func_335D08
label_2d448c:
    if (ctx->pc == 0x2D448Cu) {
        ctx->pc = 0x2D448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4488u;
        // 0x2d448c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4490u;
        goto label_2d4490;
    }
    ctx->pc = 0x2D4488u;
    SET_GPR_U32(ctx, 31, 0x2D4490u);
    ctx->pc = 0x2D448Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4488u;
    // 0x2d448c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2D4488u, 0x2D4490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4490u;
label_2d4490:
    // 0x2d4490: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x2d4490u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2d4494:
    // 0x2d4494: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2d4494u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2d4498:
    // 0x2d4498: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d4498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d449c:
    // 0x2d449c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d449cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2d44a0:
    // 0x2d44a0: 0xc0cd780  jal         func_335E00
label_2d44a4:
    if (ctx->pc == 0x2D44A4u) {
        ctx->pc = 0x2D44A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D44A0u;
        // 0x2d44a4: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D44A8u;
        goto label_2d44a8;
    }
    ctx->pc = 0x2D44A0u;
    SET_GPR_U32(ctx, 31, 0x2D44A8u);
    ctx->pc = 0x2D44A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D44A0u;
    // 0x2d44a4: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2D44A0u, 0x2D44A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D44A8u;
label_2d44a8:
    // 0x2d44a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d44a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2d44ac:
    // 0x2d44ac: 0xc0cdd2e  jal         func_3374B8
label_2d44b0:
    if (ctx->pc == 0x2D44B0u) {
        ctx->pc = 0x2D44B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D44ACu;
        // 0x2d44b0: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D44B4u;
        goto label_2d44b4;
    }
    ctx->pc = 0x2D44ACu;
    SET_GPR_U32(ctx, 31, 0x2D44B4u);
    ctx->pc = 0x2D44B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D44ACu;
    // 0x2d44b0: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2D44ACu, 0x2D44B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D44B4u;
label_2d44b4:
    // 0x2d44b4: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2d44b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_2d44b8:
    // 0x2d44b8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2d44b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2d44bc:
    // 0x2d44bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d44bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2d44c0:
    // 0x2d44c0: 0x0  nop
    ctx->pc = 0x2d44c0u;
    // NOP
label_2d44c4:
    // 0x2d44c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d44c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d44c8:
    // 0x2d44c8: 0x0  nop
    ctx->pc = 0x2d44c8u;
    // NOP
label_2d44cc:
    // 0x2d44cc: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_2d44d0:
    if (ctx->pc == 0x2D44D0u) {
        ctx->pc = 0x2D44D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D44CCu;
        // 0x2d44d0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D44D4u;
        goto label_2d44d4;
    }
    ctx->pc = 0x2D44CCu;
    {
        const bool branch_taken_0x2d44cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D44D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D44CCu;
        // 0x2d44d0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d44cc) {
            ctx->pc = 0x2D4514u;
            goto label_2d4514;
        }
    }
    ctx->pc = 0x2D44D4u;
label_2d44d4:
    // 0x2d44d4: 0xc0a367c  jal         func_28D9F0
label_2d44d8:
    if (ctx->pc == 0x2D44D8u) {
        ctx->pc = 0x2D44D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D44D4u;
        // 0x2d44d8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D44DCu;
        goto label_2d44dc;
    }
    ctx->pc = 0x2D44D4u;
    SET_GPR_U32(ctx, 31, 0x2D44DCu);
    ctx->pc = 0x2D44D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D44D4u;
    // 0x2d44d8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D44D4u, 0x2D44DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D44DCu;
label_2d44dc:
    // 0x2d44dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d44dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d44e0:
    // 0x2d44e0: 0x12000048  beqz        $s0, . + 4 + (0x48 << 2)
label_2d44e4:
    if (ctx->pc == 0x2D44E4u) {
        ctx->pc = 0x2D44E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D44E0u;
        // 0x2d44e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D44E8u;
        goto label_2d44e8;
    }
    ctx->pc = 0x2D44E0u;
    {
        const bool branch_taken_0x2d44e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D44E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D44E0u;
        // 0x2d44e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d44e0) {
            ctx->pc = 0x2D4604u;
            goto label_2d4604;
        }
    }
    ctx->pc = 0x2D44E8u;
label_2d44e8:
    // 0x2d44e8: 0xc0884f6  jal         func_2213D8
label_2d44ec:
    if (ctx->pc == 0x2D44ECu) {
        ctx->pc = 0x2D44ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D44E8u;
        // 0x2d44ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D44F0u;
        goto label_2d44f0;
    }
    ctx->pc = 0x2D44E8u;
    SET_GPR_U32(ctx, 31, 0x2D44F0u);
    ctx->pc = 0x2D44ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D44E8u;
    // 0x2d44ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2D44E8u, 0x2D44F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D44F0u;
label_2d44f0:
    // 0x2d44f0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d44f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d44f4:
    // 0x2d44f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d44f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d44f8:
    // 0x2d44f8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2d44f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2d44fc:
    // 0x2d44fc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d44fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d4500:
    // 0x2d4500: 0xc0bf800  jal         func_2FE000
label_2d4504:
    if (ctx->pc == 0x2D4504u) {
        ctx->pc = 0x2D4504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4500u;
        // 0x2d4504: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4508u;
        goto label_2d4508;
    }
    ctx->pc = 0x2D4500u;
    SET_GPR_U32(ctx, 31, 0x2D4508u);
    ctx->pc = 0x2D4504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4500u;
    // 0x2d4504: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2D4500u, 0x2D4508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4508u;
label_2d4508:
    // 0x2d4508: 0x1000003e  b           . + 4 + (0x3E << 2)
label_2d450c:
    if (ctx->pc == 0x2D450Cu) {
        ctx->pc = 0x2D450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4508u;
        // 0x2d450c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4510u;
        goto label_2d4510;
    }
    ctx->pc = 0x2D4508u;
    {
        const bool branch_taken_0x2d4508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4508u;
        // 0x2d450c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4508) {
            ctx->pc = 0x2D4604u;
            goto label_2d4604;
        }
    }
    ctx->pc = 0x2D4510u;
label_2d4510:
    // 0x2d4510: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2d4510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2d4514:
    // 0x2d4514: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x2d4514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2d4518:
    // 0x2d4518: 0x8c62b734  lw          $v0, -0x48CC($v1)
    ctx->pc = 0x2d4518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_2d451c:
    // 0x2d451c: 0x1480001d  bnez        $a0, . + 4 + (0x1D << 2)
label_2d4520:
    if (ctx->pc == 0x2D4520u) {
        ctx->pc = 0x2D4520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D451Cu;
        // 0x2d4520: 0x8c430048  lw          $v1, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4524u;
        goto label_2d4524;
    }
    ctx->pc = 0x2D451Cu;
    {
        const bool branch_taken_0x2d451c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D451Cu;
        // 0x2d4520: 0x8c430048  lw          $v1, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d451c) {
            ctx->pc = 0x2D4594u;
            goto label_2d4594;
        }
    }
    ctx->pc = 0x2D4524u;
label_2d4524:
    // 0x2d4524: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x2d4524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_2d4528:
    // 0x2d4528: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d4528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d452c:
    // 0x2d452c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2d452cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2d4530:
    // 0x2d4530: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2d4530u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2d4534:
    // 0x2d4534: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d4534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d4538:
    // 0x2d4538: 0x2405029f  addiu       $a1, $zero, 0x29F
    ctx->pc = 0x2d4538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 671));
label_2d453c:
    // 0x2d453c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d453cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d4540:
    // 0x2d4540: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d4540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d4544:
    // 0x2d4544: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2d4544u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2d4548:
    // 0x2d4548: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d4548u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d454c:
    // 0x2d454c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d454cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d4550:
    // 0x2d4550: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d4550u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d4554:
    // 0x2d4554: 0xc0968f8  jal         func_25A3E0
label_2d4558:
    if (ctx->pc == 0x2D4558u) {
        ctx->pc = 0x2D4558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4554u;
        // 0x2d4558: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D455Cu;
        goto label_2d455c;
    }
    ctx->pc = 0x2D4554u;
    SET_GPR_U32(ctx, 31, 0x2D455Cu);
    ctx->pc = 0x2D4558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4554u;
    // 0x2d4558: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3E0u, 0x2D4554u, 0x2D455Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D455Cu;
label_2d455c:
    // 0x2d455c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d455cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d4560:
    // 0x2d4560: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2d4560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2d4564:
    // 0x2d4564: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d4564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d4568:
    // 0x2d4568: 0xa2630194  sb          $v1, 0x194($s3)
    ctx->pc = 0x2d4568u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 404), (uint8_t)GPR_U32(ctx, 3));
label_2d456c:
    // 0x2d456c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d456cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d4570:
    // 0x2d4570: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d4570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d4574:
    // 0x2d4574: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d4574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d4578:
    // 0x2d4578: 0x8e490010  lw          $t1, 0x10($s2)
    ctx->pc = 0x2d4578u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2d457c:
    // 0x2d457c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d457cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d4580:
    // 0x2d4580: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x2d4580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_2d4584:
    // 0x2d4584: 0xc088178  jal         func_2205E0
label_2d4588:
    if (ctx->pc == 0x2D4588u) {
        ctx->pc = 0x2D4588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4584u;
        // 0x2d4588: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D458Cu;
        goto label_2d458c;
    }
    ctx->pc = 0x2D4584u;
    SET_GPR_U32(ctx, 31, 0x2D458Cu);
    ctx->pc = 0x2D4588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4584u;
    // 0x2d4588: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2D4584u, 0x2D458Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D458Cu;
label_2d458c:
    // 0x2d458c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2d4590:
    if (ctx->pc == 0x2D4590u) {
        ctx->pc = 0x2D4590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D458Cu;
        // 0x2d4590: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4594u;
        goto label_2d4594;
    }
    ctx->pc = 0x2D458Cu;
    {
        const bool branch_taken_0x2d458c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D458Cu;
        // 0x2d4590: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d458c) {
            ctx->pc = 0x2D4604u;
            goto label_2d4604;
        }
    }
    ctx->pc = 0x2D4594u;
label_2d4594:
    // 0x2d4594: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x2d4594u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2d4598:
    // 0x2d4598: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_2d459c:
    if (ctx->pc == 0x2D459Cu) {
        ctx->pc = 0x2D459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4598u;
        // 0x2d459c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D45A0u;
        goto label_2d45a0;
    }
    ctx->pc = 0x2D4598u;
    {
        const bool branch_taken_0x2d4598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4598u;
        // 0x2d459c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4598) {
            ctx->pc = 0x2D4604u;
            goto label_2d4604;
        }
    }
    ctx->pc = 0x2D45A0u;
label_2d45a0:
    // 0x2d45a0: 0x9242002f  lbu         $v0, 0x2F($s2)
    ctx->pc = 0x2d45a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 47)));
label_2d45a4:
    // 0x2d45a4: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_2d45a8:
    if (ctx->pc == 0x2D45A8u) {
        ctx->pc = 0x2D45A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D45A4u;
        // 0x2d45a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D45ACu;
        goto label_2d45ac;
    }
    ctx->pc = 0x2D45A4u;
    {
        const bool branch_taken_0x2d45a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D45A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D45A4u;
        // 0x2d45a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d45a4) {
            ctx->pc = 0x2D4604u;
            goto label_2d4604;
        }
    }
    ctx->pc = 0x2D45ACu;
label_2d45ac:
    // 0x2d45ac: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x2d45acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_2d45b0:
    // 0x2d45b0: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x2d45b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2d45b4:
    // 0x2d45b4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2d45b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2d45b8:
    // 0x2d45b8: 0x14640012  bne         $v1, $a0, . + 4 + (0x12 << 2)
label_2d45bc:
    if (ctx->pc == 0x2D45BCu) {
        ctx->pc = 0x2D45BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D45B8u;
        // 0x2d45bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D45C0u;
        goto label_2d45c0;
    }
    ctx->pc = 0x2D45B8u;
    {
        const bool branch_taken_0x2d45b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2D45BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D45B8u;
        // 0x2d45bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d45b8) {
            ctx->pc = 0x2D4604u;
            goto label_2d4604;
        }
    }
    ctx->pc = 0x2D45C0u;
label_2d45c0:
    // 0x2d45c0: 0xc0a367c  jal         func_28D9F0
label_2d45c4:
    if (ctx->pc == 0x2D45C4u) {
        ctx->pc = 0x2D45C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D45C0u;
        // 0x2d45c4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D45C8u;
        goto label_2d45c8;
    }
    ctx->pc = 0x2D45C0u;
    SET_GPR_U32(ctx, 31, 0x2D45C8u);
    ctx->pc = 0x2D45C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D45C0u;
    // 0x2d45c4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D45C0u, 0x2D45C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D45C8u;
label_2d45c8:
    // 0x2d45c8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2d45cc:
    if (ctx->pc == 0x2D45CCu) {
        ctx->pc = 0x2D45CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D45C8u;
        // 0x2d45cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D45D0u;
        goto label_2d45d0;
    }
    ctx->pc = 0x2D45C8u;
    {
        const bool branch_taken_0x2d45c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D45CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D45C8u;
        // 0x2d45cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d45c8) {
            ctx->pc = 0x2D45F8u;
            goto label_2d45f8;
        }
    }
    ctx->pc = 0x2D45D0u;
label_2d45d0:
    // 0x2d45d0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2d45d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2d45d4:
    // 0x2d45d4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2d45d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2d45d8:
    // 0x2d45d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d45d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d45dc:
    // 0x2d45dc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d45dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d45e0:
    // 0x2d45e0: 0x240602a1  addiu       $a2, $zero, 0x2A1
    ctx->pc = 0x2d45e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
label_2d45e4:
    // 0x2d45e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d45e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d45e8:
    // 0x2d45e8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2d45e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2d45ec:
    // 0x2d45ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d45ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d45f0:
    // 0x2d45f0: 0xc0be968  jal         func_2FA5A0
label_2d45f4:
    if (ctx->pc == 0x2D45F4u) {
        ctx->pc = 0x2D45F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D45F0u;
        // 0x2d45f4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D45F8u;
        goto label_2d45f8;
    }
    ctx->pc = 0x2D45F0u;
    SET_GPR_U32(ctx, 31, 0x2D45F8u);
    ctx->pc = 0x2D45F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D45F0u;
    // 0x2d45f4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2D45F0u, 0x2D45F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D45F8u;
label_2d45f8:
    // 0x2d45f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d45f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d45fc:
    // 0x2d45fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d45fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d4600:
    // 0x2d4600: 0xa243002f  sb          $v1, 0x2F($s2)
    ctx->pc = 0x2d4600u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 47), (uint8_t)GPR_U32(ctx, 3));
label_2d4604:
    // 0x2d4604: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2d4604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2d4608:
    // 0x2d4608: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2d4608u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2d460c:
    // 0x2d460c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2d460cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2d4610:
    // 0x2d4610: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2d4610u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2d4614:
    // 0x2d4614: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d4614u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d4618:
    // 0x2d4618: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d4618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d461c:
    // 0x2d461c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2d461cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2d4620:
    // 0x2d4620: 0x3e00008  jr          $ra
label_2d4624:
    if (ctx->pc == 0x2D4624u) {
        ctx->pc = 0x2D4624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4620u;
        // 0x2d4624: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4628u;
        goto label_fallthrough_0x2d4620;
    }
    ctx->pc = 0x2D4620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4620u;
        // 0x2d4624: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d4620:
    ctx->pc = 0x2D4628u;
}
