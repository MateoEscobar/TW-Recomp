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

// Function: sub_002C4360
// Address: 0x2c4360 - 0x2c4710
void sub_002C4360_0x2c4360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4360_0x2c4360");
#endif

    switch (ctx->pc) {
        case 0x2c4360u: goto label_2c4360;
        case 0x2c4364u: goto label_2c4364;
        case 0x2c4368u: goto label_2c4368;
        case 0x2c436cu: goto label_2c436c;
        case 0x2c4370u: goto label_2c4370;
        case 0x2c4374u: goto label_2c4374;
        case 0x2c4378u: goto label_2c4378;
        case 0x2c437cu: goto label_2c437c;
        case 0x2c4380u: goto label_2c4380;
        case 0x2c4384u: goto label_2c4384;
        case 0x2c4388u: goto label_2c4388;
        case 0x2c438cu: goto label_2c438c;
        case 0x2c4390u: goto label_2c4390;
        case 0x2c4394u: goto label_2c4394;
        case 0x2c4398u: goto label_2c4398;
        case 0x2c439cu: goto label_2c439c;
        case 0x2c43a0u: goto label_2c43a0;
        case 0x2c43a4u: goto label_2c43a4;
        case 0x2c43a8u: goto label_2c43a8;
        case 0x2c43acu: goto label_2c43ac;
        case 0x2c43b0u: goto label_2c43b0;
        case 0x2c43b4u: goto label_2c43b4;
        case 0x2c43b8u: goto label_2c43b8;
        case 0x2c43bcu: goto label_2c43bc;
        case 0x2c43c0u: goto label_2c43c0;
        case 0x2c43c4u: goto label_2c43c4;
        case 0x2c43c8u: goto label_2c43c8;
        case 0x2c43ccu: goto label_2c43cc;
        case 0x2c43d0u: goto label_2c43d0;
        case 0x2c43d4u: goto label_2c43d4;
        case 0x2c43d8u: goto label_2c43d8;
        case 0x2c43dcu: goto label_2c43dc;
        case 0x2c43e0u: goto label_2c43e0;
        case 0x2c43e4u: goto label_2c43e4;
        case 0x2c43e8u: goto label_2c43e8;
        case 0x2c43ecu: goto label_2c43ec;
        case 0x2c43f0u: goto label_2c43f0;
        case 0x2c43f4u: goto label_2c43f4;
        case 0x2c43f8u: goto label_2c43f8;
        case 0x2c43fcu: goto label_2c43fc;
        case 0x2c4400u: goto label_2c4400;
        case 0x2c4404u: goto label_2c4404;
        case 0x2c4408u: goto label_2c4408;
        case 0x2c440cu: goto label_2c440c;
        case 0x2c4410u: goto label_2c4410;
        case 0x2c4414u: goto label_2c4414;
        case 0x2c4418u: goto label_2c4418;
        case 0x2c441cu: goto label_2c441c;
        case 0x2c4420u: goto label_2c4420;
        case 0x2c4424u: goto label_2c4424;
        case 0x2c4428u: goto label_2c4428;
        case 0x2c442cu: goto label_2c442c;
        case 0x2c4430u: goto label_2c4430;
        case 0x2c4434u: goto label_2c4434;
        case 0x2c4438u: goto label_2c4438;
        case 0x2c443cu: goto label_2c443c;
        case 0x2c4440u: goto label_2c4440;
        case 0x2c4444u: goto label_2c4444;
        case 0x2c4448u: goto label_2c4448;
        case 0x2c444cu: goto label_2c444c;
        case 0x2c4450u: goto label_2c4450;
        case 0x2c4454u: goto label_2c4454;
        case 0x2c4458u: goto label_2c4458;
        case 0x2c445cu: goto label_2c445c;
        case 0x2c4460u: goto label_2c4460;
        case 0x2c4464u: goto label_2c4464;
        case 0x2c4468u: goto label_2c4468;
        case 0x2c446cu: goto label_2c446c;
        case 0x2c4470u: goto label_2c4470;
        case 0x2c4474u: goto label_2c4474;
        case 0x2c4478u: goto label_2c4478;
        case 0x2c447cu: goto label_2c447c;
        case 0x2c4480u: goto label_2c4480;
        case 0x2c4484u: goto label_2c4484;
        case 0x2c4488u: goto label_2c4488;
        case 0x2c448cu: goto label_2c448c;
        case 0x2c4490u: goto label_2c4490;
        case 0x2c4494u: goto label_2c4494;
        case 0x2c4498u: goto label_2c4498;
        case 0x2c449cu: goto label_2c449c;
        case 0x2c44a0u: goto label_2c44a0;
        case 0x2c44a4u: goto label_2c44a4;
        case 0x2c44a8u: goto label_2c44a8;
        case 0x2c44acu: goto label_2c44ac;
        case 0x2c44b0u: goto label_2c44b0;
        case 0x2c44b4u: goto label_2c44b4;
        case 0x2c44b8u: goto label_2c44b8;
        case 0x2c44bcu: goto label_2c44bc;
        case 0x2c44c0u: goto label_2c44c0;
        case 0x2c44c4u: goto label_2c44c4;
        case 0x2c44c8u: goto label_2c44c8;
        case 0x2c44ccu: goto label_2c44cc;
        case 0x2c44d0u: goto label_2c44d0;
        case 0x2c44d4u: goto label_2c44d4;
        case 0x2c44d8u: goto label_2c44d8;
        case 0x2c44dcu: goto label_2c44dc;
        case 0x2c44e0u: goto label_2c44e0;
        case 0x2c44e4u: goto label_2c44e4;
        case 0x2c44e8u: goto label_2c44e8;
        case 0x2c44ecu: goto label_2c44ec;
        case 0x2c44f0u: goto label_2c44f0;
        case 0x2c44f4u: goto label_2c44f4;
        case 0x2c44f8u: goto label_2c44f8;
        case 0x2c44fcu: goto label_2c44fc;
        case 0x2c4500u: goto label_2c4500;
        case 0x2c4504u: goto label_2c4504;
        case 0x2c4508u: goto label_2c4508;
        case 0x2c450cu: goto label_2c450c;
        case 0x2c4510u: goto label_2c4510;
        case 0x2c4514u: goto label_2c4514;
        case 0x2c4518u: goto label_2c4518;
        case 0x2c451cu: goto label_2c451c;
        case 0x2c4520u: goto label_2c4520;
        case 0x2c4524u: goto label_2c4524;
        case 0x2c4528u: goto label_2c4528;
        case 0x2c452cu: goto label_2c452c;
        case 0x2c4530u: goto label_2c4530;
        case 0x2c4534u: goto label_2c4534;
        case 0x2c4538u: goto label_2c4538;
        case 0x2c453cu: goto label_2c453c;
        case 0x2c4540u: goto label_2c4540;
        case 0x2c4544u: goto label_2c4544;
        case 0x2c4548u: goto label_2c4548;
        case 0x2c454cu: goto label_2c454c;
        case 0x2c4550u: goto label_2c4550;
        case 0x2c4554u: goto label_2c4554;
        case 0x2c4558u: goto label_2c4558;
        case 0x2c455cu: goto label_2c455c;
        case 0x2c4560u: goto label_2c4560;
        case 0x2c4564u: goto label_2c4564;
        case 0x2c4568u: goto label_2c4568;
        case 0x2c456cu: goto label_2c456c;
        case 0x2c4570u: goto label_2c4570;
        case 0x2c4574u: goto label_2c4574;
        case 0x2c4578u: goto label_2c4578;
        case 0x2c457cu: goto label_2c457c;
        case 0x2c4580u: goto label_2c4580;
        case 0x2c4584u: goto label_2c4584;
        case 0x2c4588u: goto label_2c4588;
        case 0x2c458cu: goto label_2c458c;
        case 0x2c4590u: goto label_2c4590;
        case 0x2c4594u: goto label_2c4594;
        case 0x2c4598u: goto label_2c4598;
        case 0x2c459cu: goto label_2c459c;
        case 0x2c45a0u: goto label_2c45a0;
        case 0x2c45a4u: goto label_2c45a4;
        case 0x2c45a8u: goto label_2c45a8;
        case 0x2c45acu: goto label_2c45ac;
        case 0x2c45b0u: goto label_2c45b0;
        case 0x2c45b4u: goto label_2c45b4;
        case 0x2c45b8u: goto label_2c45b8;
        case 0x2c45bcu: goto label_2c45bc;
        case 0x2c45c0u: goto label_2c45c0;
        case 0x2c45c4u: goto label_2c45c4;
        case 0x2c45c8u: goto label_2c45c8;
        case 0x2c45ccu: goto label_2c45cc;
        case 0x2c45d0u: goto label_2c45d0;
        case 0x2c45d4u: goto label_2c45d4;
        case 0x2c45d8u: goto label_2c45d8;
        case 0x2c45dcu: goto label_2c45dc;
        case 0x2c45e0u: goto label_2c45e0;
        case 0x2c45e4u: goto label_2c45e4;
        case 0x2c45e8u: goto label_2c45e8;
        case 0x2c45ecu: goto label_2c45ec;
        case 0x2c45f0u: goto label_2c45f0;
        case 0x2c45f4u: goto label_2c45f4;
        case 0x2c45f8u: goto label_2c45f8;
        case 0x2c45fcu: goto label_2c45fc;
        case 0x2c4600u: goto label_2c4600;
        case 0x2c4604u: goto label_2c4604;
        case 0x2c4608u: goto label_2c4608;
        case 0x2c460cu: goto label_2c460c;
        case 0x2c4610u: goto label_2c4610;
        case 0x2c4614u: goto label_2c4614;
        case 0x2c4618u: goto label_2c4618;
        case 0x2c461cu: goto label_2c461c;
        case 0x2c4620u: goto label_2c4620;
        case 0x2c4624u: goto label_2c4624;
        case 0x2c4628u: goto label_2c4628;
        case 0x2c462cu: goto label_2c462c;
        case 0x2c4630u: goto label_2c4630;
        case 0x2c4634u: goto label_2c4634;
        case 0x2c4638u: goto label_2c4638;
        case 0x2c463cu: goto label_2c463c;
        case 0x2c4640u: goto label_2c4640;
        case 0x2c4644u: goto label_2c4644;
        case 0x2c4648u: goto label_2c4648;
        case 0x2c464cu: goto label_2c464c;
        case 0x2c4650u: goto label_2c4650;
        case 0x2c4654u: goto label_2c4654;
        case 0x2c4658u: goto label_2c4658;
        case 0x2c465cu: goto label_2c465c;
        case 0x2c4660u: goto label_2c4660;
        case 0x2c4664u: goto label_2c4664;
        case 0x2c4668u: goto label_2c4668;
        case 0x2c466cu: goto label_2c466c;
        case 0x2c4670u: goto label_2c4670;
        case 0x2c4674u: goto label_2c4674;
        case 0x2c4678u: goto label_2c4678;
        case 0x2c467cu: goto label_2c467c;
        case 0x2c4680u: goto label_2c4680;
        case 0x2c4684u: goto label_2c4684;
        case 0x2c4688u: goto label_2c4688;
        case 0x2c468cu: goto label_2c468c;
        case 0x2c4690u: goto label_2c4690;
        case 0x2c4694u: goto label_2c4694;
        case 0x2c4698u: goto label_2c4698;
        case 0x2c469cu: goto label_2c469c;
        case 0x2c46a0u: goto label_2c46a0;
        case 0x2c46a4u: goto label_2c46a4;
        case 0x2c46a8u: goto label_2c46a8;
        case 0x2c46acu: goto label_2c46ac;
        case 0x2c46b0u: goto label_2c46b0;
        case 0x2c46b4u: goto label_2c46b4;
        case 0x2c46b8u: goto label_2c46b8;
        case 0x2c46bcu: goto label_2c46bc;
        case 0x2c46c0u: goto label_2c46c0;
        case 0x2c46c4u: goto label_2c46c4;
        case 0x2c46c8u: goto label_2c46c8;
        case 0x2c46ccu: goto label_2c46cc;
        case 0x2c46d0u: goto label_2c46d0;
        case 0x2c46d4u: goto label_2c46d4;
        case 0x2c46d8u: goto label_2c46d8;
        case 0x2c46dcu: goto label_2c46dc;
        case 0x2c46e0u: goto label_2c46e0;
        case 0x2c46e4u: goto label_2c46e4;
        case 0x2c46e8u: goto label_2c46e8;
        case 0x2c46ecu: goto label_2c46ec;
        case 0x2c46f0u: goto label_2c46f0;
        case 0x2c46f4u: goto label_2c46f4;
        case 0x2c46f8u: goto label_2c46f8;
        case 0x2c46fcu: goto label_2c46fc;
        case 0x2c4700u: goto label_2c4700;
        case 0x2c4704u: goto label_2c4704;
        case 0x2c4708u: goto label_2c4708;
        case 0x2c470cu: goto label_2c470c;
        default: break;
    }

    ctx->pc = 0x2c4360u;

label_2c4360:
    // 0x2c4360: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2c4360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2c4364:
    // 0x2c4364: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2c4364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2c4368:
    // 0x2c4368: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2c4368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2c436c:
    // 0x2c436c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c436cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c4370:
    // 0x2c4370: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2c4370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2c4374:
    // 0x2c4374: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2c4374u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c4378:
    // 0x2c4378: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2c4378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2c437c:
    // 0x2c437c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2c437cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2c4380:
    // 0x2c4380: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2c4380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_2c4384:
    // 0x2c4384: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2c4384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_2c4388:
    // 0x2c4388: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2c4388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_2c438c:
    // 0x2c438c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c438cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2c4390:
    // 0x2c4390: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x2c4390u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_2c4394:
    // 0x2c4394: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x2c4394u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2c4398:
    // 0x2c4398: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2c4398u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2c439c:
    // 0x2c439c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c439cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c43a0:
    // 0x2c43a0: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2c43a0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c43a4:
    // 0x2c43a4: 0xc08a08a  jal         func_228228
label_2c43a8:
    if (ctx->pc == 0x2C43A8u) {
        ctx->pc = 0x2C43A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43A4u;
        // 0x2c43a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C43ACu;
        goto label_2c43ac;
    }
    ctx->pc = 0x2C43A4u;
    SET_GPR_U32(ctx, 31, 0x2C43ACu);
    ctx->pc = 0x2C43A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C43A4u;
    // 0x2c43a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2C43A4u, 0x2C43ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C43ACu;
label_2c43ac:
    // 0x2c43ac: 0x54530005  bnel        $v0, $s3, . + 4 + (0x5 << 2)
label_2c43b0:
    if (ctx->pc == 0x2C43B0u) {
        ctx->pc = 0x2C43B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43ACu;
        // 0x2c43b0: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C43B4u;
        goto label_2c43b4;
    }
    ctx->pc = 0x2C43ACu;
    {
        const bool branch_taken_0x2c43ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2c43ac) {
            ctx->pc = 0x2C43B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C43ACu;
            // 0x2c43b0: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C43C4u;
            goto label_2c43c4;
        }
    }
    ctx->pc = 0x2C43B4u;
label_2c43b4:
    // 0x2c43b4: 0xc0a36c8  jal         func_28DB20
label_2c43b8:
    if (ctx->pc == 0x2C43B8u) {
        ctx->pc = 0x2C43B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43B4u;
        // 0x2c43b8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C43BCu;
        goto label_2c43bc;
    }
    ctx->pc = 0x2C43B4u;
    SET_GPR_U32(ctx, 31, 0x2C43BCu);
    ctx->pc = 0x2C43B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C43B4u;
    // 0x2c43b8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2C43B4u, 0x2C43BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C43BCu;
label_2c43bc:
    // 0x2c43bc: 0x100000c6  b           . + 4 + (0xC6 << 2)
label_2c43c0:
    if (ctx->pc == 0x2C43C0u) {
        ctx->pc = 0x2C43C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43BCu;
        // 0x2c43c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C43C4u;
        goto label_2c43c4;
    }
    ctx->pc = 0x2C43BCu;
    {
        const bool branch_taken_0x2c43bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C43C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43BCu;
        // 0x2c43c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c43bc) {
            ctx->pc = 0x2C46D8u;
            goto label_2c46d8;
        }
    }
    ctx->pc = 0x2C43C4u;
label_2c43c4:
    // 0x2c43c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c43c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c43c8:
    // 0x2c43c8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2c43c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c43cc:
    // 0x2c43cc: 0xc0e409a  jal         func_390268
label_2c43d0:
    if (ctx->pc == 0x2C43D0u) {
        ctx->pc = 0x2C43D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43CCu;
        // 0x2c43d0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C43D4u;
        goto label_2c43d4;
    }
    ctx->pc = 0x2C43CCu;
    SET_GPR_U32(ctx, 31, 0x2C43D4u);
    ctx->pc = 0x2C43D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C43CCu;
    // 0x2c43d0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C43CCu, 0x2C43D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C43D4u;
label_2c43d4:
    // 0x2c43d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c43d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c43d8:
    // 0x2c43d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c43d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c43dc:
    // 0x2c43dc: 0xc0a352c  jal         func_28D4B0
label_2c43e0:
    if (ctx->pc == 0x2C43E0u) {
        ctx->pc = 0x2C43E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43DCu;
        // 0x2c43e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C43E4u;
        goto label_2c43e4;
    }
    ctx->pc = 0x2C43DCu;
    SET_GPR_U32(ctx, 31, 0x2C43E4u);
    ctx->pc = 0x2C43E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C43DCu;
    // 0x2c43e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2C43DCu, 0x2C43E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C43E4u;
label_2c43e4:
    // 0x2c43e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c43e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c43e8:
    // 0x2c43e8: 0x124000bb  beqz        $s2, . + 4 + (0xBB << 2)
label_2c43ec:
    if (ctx->pc == 0x2C43ECu) {
        ctx->pc = 0x2C43ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43E8u;
        // 0x2c43ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C43F0u;
        goto label_2c43f0;
    }
    ctx->pc = 0x2C43E8u;
    {
        const bool branch_taken_0x2c43e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C43ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43E8u;
        // 0x2c43ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c43e8) {
            ctx->pc = 0x2C46D8u;
            goto label_2c46d8;
        }
    }
    ctx->pc = 0x2C43F0u;
label_2c43f0:
    // 0x2c43f0: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x2c43f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_2c43f4:
    // 0x2c43f4: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
label_2c43f8:
    if (ctx->pc == 0x2C43F8u) {
        ctx->pc = 0x2C43F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43F4u;
        // 0x2c43f8: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C43FCu;
        goto label_2c43fc;
    }
    ctx->pc = 0x2C43F4u;
    {
        const bool branch_taken_0x2c43f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c43f4) {
            ctx->pc = 0x2C43F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C43F4u;
            // 0x2c43f8: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4464u;
            goto label_2c4464;
        }
    }
    ctx->pc = 0x2C43FCu;
label_2c43fc:
    // 0x2c43fc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c43fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c4400:
    // 0x2c4400: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2c4400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2c4404:
    // 0x2c4404: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c4404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2c4408:
    // 0x2c4408: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_2c440c:
    if (ctx->pc == 0x2C440Cu) {
        ctx->pc = 0x2C440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4408u;
        // 0x2c440c: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4410u;
        goto label_2c4410;
    }
    ctx->pc = 0x2C4408u;
    {
        const bool branch_taken_0x2c4408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4408) {
            ctx->pc = 0x2C440Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4408u;
            // 0x2c440c: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4464u;
            goto label_2c4464;
        }
    }
    ctx->pc = 0x2C4410u;
label_2c4410:
    // 0x2c4410: 0xc087502  jal         func_21D408
label_2c4414:
    if (ctx->pc == 0x2C4414u) {
        ctx->pc = 0x2C4414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4410u;
        // 0x2c4414: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4418u;
        goto label_2c4418;
    }
    ctx->pc = 0x2C4410u;
    SET_GPR_U32(ctx, 31, 0x2C4418u);
    ctx->pc = 0x2C4414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4410u;
    // 0x2c4414: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C4410u, 0x2C4418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4418u;
label_2c4418:
    // 0x2c4418: 0x904302d4  lbu         $v1, 0x2D4($v0)
    ctx->pc = 0x2c4418u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 724)));
label_2c441c:
    // 0x2c441c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2c441cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2c4420:
    // 0x2c4420: 0x54730010  bnel        $v1, $s3, . + 4 + (0x10 << 2)
label_2c4424:
    if (ctx->pc == 0x2C4424u) {
        ctx->pc = 0x2C4424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4420u;
        // 0x2c4424: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4428u;
        goto label_2c4428;
    }
    ctx->pc = 0x2C4420u;
    {
        const bool branch_taken_0x2c4420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x2c4420) {
            ctx->pc = 0x2C4424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4420u;
            // 0x2c4424: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4464u;
            goto label_2c4464;
        }
    }
    ctx->pc = 0x2C4428u;
label_2c4428:
    // 0x2c4428: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c4428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c442c:
    // 0x2c442c: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2c442cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2c4430:
    // 0x2c4430: 0x2802a  slt         $s0, $zero, $v0
    ctx->pc = 0x2c4430u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2c4434:
    // 0x2c4434: 0x5603000b  bnel        $s0, $v1, . + 4 + (0xB << 2)
label_2c4438:
    if (ctx->pc == 0x2C4438u) {
        ctx->pc = 0x2C4438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4434u;
        // 0x2c4438: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C443Cu;
        goto label_2c443c;
    }
    ctx->pc = 0x2C4434u;
    {
        const bool branch_taken_0x2c4434 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c4434) {
            ctx->pc = 0x2C4438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4434u;
            // 0x2c4438: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4464u;
            goto label_2c4464;
        }
    }
    ctx->pc = 0x2C443Cu;
label_2c443c:
    // 0x2c443c: 0xc0a36c2  jal         func_28DB08
label_2c4440:
    if (ctx->pc == 0x2C4440u) {
        ctx->pc = 0x2C4444u;
        goto label_2c4444;
    }
    ctx->pc = 0x2C443Cu;
    SET_GPR_U32(ctx, 31, 0x2C4444u);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2C443Cu, 0x2C4444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4444u;
label_2c4444:
    // 0x2c4444: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2c4444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2c4448:
    // 0x2c4448: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2c4448u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2c444c:
    // 0x2c444c: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2c444cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2c4450:
    // 0x2c4450: 0xa0f809  jalr        $a1
label_2c4454:
    if (ctx->pc == 0x2C4454u) {
        ctx->pc = 0x2C4454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4450u;
        // 0x2c4454: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4458u;
        goto label_2c4458;
    }
    ctx->pc = 0x2C4450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2C4458u);
        ctx->pc = 0x2C4454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4450u;
        // 0x2c4454: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4450u, 0x2C4458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C4458u;
label_2c4458:
    // 0x2c4458: 0x1050ffd6  beq         $v0, $s0, . + 4 + (-0x2A << 2)
label_2c445c:
    if (ctx->pc == 0x2C445Cu) {
        ctx->pc = 0x2C4460u;
        goto label_2c4460;
    }
    ctx->pc = 0x2C4458u;
    {
        const bool branch_taken_0x2c4458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2c4458) {
            ctx->pc = 0x2C43B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c43b4;
        }
    }
    ctx->pc = 0x2C4460u;
label_2c4460:
    // 0x2c4460: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2c4460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2c4464:
    // 0x2c4464: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x2c4464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_2c4468:
    // 0x2c4468: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2c4468u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c446c:
    // 0x2c446c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2c446cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c4470:
    // 0x2c4470: 0xc0e409a  jal         func_390268
label_2c4474:
    if (ctx->pc == 0x2C4474u) {
        ctx->pc = 0x2C4474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4470u;
        // 0x2c4474: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4478u;
        goto label_2c4478;
    }
    ctx->pc = 0x2C4470u;
    SET_GPR_U32(ctx, 31, 0x2C4478u);
    ctx->pc = 0x2C4474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4470u;
    // 0x2c4474: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C4470u, 0x2C4478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4478u;
label_2c4478:
    // 0x2c4478: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c4478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2c447c:
    // 0x2c447c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2c447cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_2c4480:
    // 0x2c4480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c4484:
    // 0x2c4484: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c4484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c4488:
    // 0x2c4488: 0xc0a352c  jal         func_28D4B0
label_2c448c:
    if (ctx->pc == 0x2C448Cu) {
        ctx->pc = 0x2C448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4488u;
        // 0x2c448c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4490u;
        goto label_2c4490;
    }
    ctx->pc = 0x2C4488u;
    SET_GPR_U32(ctx, 31, 0x2C4490u);
    ctx->pc = 0x2C448Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4488u;
    // 0x2c448c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2C4488u, 0x2C4490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4490u;
label_2c4490:
    // 0x2c4490: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2c4490u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c4494:
    // 0x2c4494: 0x26840284  addiu       $a0, $s4, 0x284
    ctx->pc = 0x2c4494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 644));
label_2c4498:
    // 0x2c4498: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c4498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c449c:
    // 0x2c449c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2c449cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_2c44a0:
    // 0x2c44a0: 0x240601f4  addiu       $a2, $zero, 0x1F4
    ctx->pc = 0x2c44a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
label_2c44a4:
    // 0x2c44a4: 0xc0a6800  jal         func_29A000
label_2c44a8:
    if (ctx->pc == 0x2C44A8u) {
        ctx->pc = 0x2C44A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C44A4u;
        // 0x2c44a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C44ACu;
        goto label_2c44ac;
    }
    ctx->pc = 0x2C44A4u;
    SET_GPR_U32(ctx, 31, 0x2C44ACu);
    ctx->pc = 0x2C44A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C44A4u;
    // 0x2c44a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2C44A4u, 0x2C44ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C44ACu;
label_2c44ac:
    // 0x2c44ac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c44acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c44b0:
    // 0x2c44b0: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2c44b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2c44b4:
    // 0x2c44b4: 0x1c600088  bgtz        $v1, . + 4 + (0x88 << 2)
label_2c44b8:
    if (ctx->pc == 0x2C44B8u) {
        ctx->pc = 0x2C44B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C44B4u;
        // 0x2c44b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C44BCu;
        goto label_2c44bc;
    }
    ctx->pc = 0x2C44B4u;
    {
        const bool branch_taken_0x2c44b4 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2C44B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C44B4u;
        // 0x2c44b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c44b4) {
            ctx->pc = 0x2C46D8u;
            goto label_2c46d8;
        }
    }
    ctx->pc = 0x2C44BCu;
label_2c44bc:
    // 0x2c44bc: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2c44bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2c44c0:
    // 0x2c44c0: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x2c44c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2c44c4:
    // 0x2c44c4: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x2c44c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_2c44c8:
    // 0x2c44c8: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2c44c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2c44cc:
    // 0x2c44cc: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2c44ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2c44d0:
    // 0x2c44d0: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
label_2c44d4:
    if (ctx->pc == 0x2C44D4u) {
        ctx->pc = 0x2C44D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C44D0u;
        // 0x2c44d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C44D8u;
        goto label_2c44d8;
    }
    ctx->pc = 0x2C44D0u;
    {
        const bool branch_taken_0x2c44d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C44D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C44D0u;
        // 0x2c44d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c44d0) {
            ctx->pc = 0x2C46D8u;
            goto label_2c46d8;
        }
    }
    ctx->pc = 0x2C44D8u;
label_2c44d8:
    // 0x2c44d8: 0x26900090  addiu       $s0, $s4, 0x90
    ctx->pc = 0x2c44d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_2c44dc:
    // 0x2c44dc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2c44dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2c44e0:
    // 0x2c44e0: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x2c44e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2c44e4:
    // 0x2c44e4: 0x24534b00  addiu       $s3, $v0, 0x4B00
    ctx->pc = 0x2c44e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2c44e8:
    // 0x2c44e8: 0x26550090  addiu       $s5, $s2, 0x90
    ctx->pc = 0x2c44e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_2c44ec:
    // 0x2c44ec: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2c44ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2c44f0:
    // 0x2c44f0: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x2c44f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_2c44f4:
    // 0x2c44f4: 0xc0cd7d2  jal         func_335F48
label_2c44f8:
    if (ctx->pc == 0x2C44F8u) {
        ctx->pc = 0x2C44F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C44F4u;
        // 0x2c44f8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C44FCu;
        goto label_2c44fc;
    }
    ctx->pc = 0x2C44F4u;
    SET_GPR_U32(ctx, 31, 0x2C44FCu);
    ctx->pc = 0x2C44F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C44F4u;
    // 0x2c44f8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2C44F4u, 0x2C44FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C44FCu;
label_2c44fc:
    // 0x2c44fc: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x2c44fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2c4500:
    // 0x2c4500: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2c4500u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2c4504:
    // 0x2c4504: 0x86a50002  lh          $a1, 0x2($s5)
    ctx->pc = 0x2c4504u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_2c4508:
    // 0x2c4508: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2c4508u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2c450c:
    // 0x2c450c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2c450cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2c4510:
    // 0x2c4510: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x2c4510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_2c4514:
    // 0x2c4514: 0xc0cd780  jal         func_335E00
label_2c4518:
    if (ctx->pc == 0x2C4518u) {
        ctx->pc = 0x2C4518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4514u;
        // 0x2c4518: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C451Cu;
        goto label_2c451c;
    }
    ctx->pc = 0x2C4514u;
    SET_GPR_U32(ctx, 31, 0x2C451Cu);
    ctx->pc = 0x2C4518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4514u;
    // 0x2c4518: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2C4514u, 0x2C451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C451Cu;
label_2c451c:
    // 0x2c451c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c451cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2c4520:
    // 0x2c4520: 0xc0cd742  jal         func_335D08
label_2c4524:
    if (ctx->pc == 0x2C4524u) {
        ctx->pc = 0x2C4524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4520u;
        // 0x2c4524: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4528u;
        goto label_2c4528;
    }
    ctx->pc = 0x2C4520u;
    SET_GPR_U32(ctx, 31, 0x2C4528u);
    ctx->pc = 0x2C4524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4520u;
    // 0x2c4524: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2C4520u, 0x2C4528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4528u;
label_2c4528:
    // 0x2c4528: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2c4528u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2c452c:
    // 0x2c452c: 0xc0cdd2e  jal         func_3374B8
label_2c4530:
    if (ctx->pc == 0x2C4530u) {
        ctx->pc = 0x2C4530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C452Cu;
        // 0x2c4530: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4534u;
        goto label_2c4534;
    }
    ctx->pc = 0x2C452Cu;
    SET_GPR_U32(ctx, 31, 0x2C4534u);
    ctx->pc = 0x2C4530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C452Cu;
    // 0x2c4530: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2C452Cu, 0x2C4534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4534u;
label_2c4534:
    // 0x2c4534: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2c4534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_2c4538:
    // 0x2c4538: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2c4538u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2c453c:
    // 0x2c453c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c453cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c4540:
    // 0x2c4540: 0x0  nop
    ctx->pc = 0x2c4540u;
    // NOP
label_2c4544:
    // 0x2c4544: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c4544u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c4548:
    // 0x2c4548: 0x0  nop
    ctx->pc = 0x2c4548u;
    // NOP
label_2c454c:
    // 0x2c454c: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
label_2c4550:
    if (ctx->pc == 0x2C4550u) {
        ctx->pc = 0x2C4550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C454Cu;
        // 0x2c4550: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4554u;
        goto label_2c4554;
    }
    ctx->pc = 0x2C454Cu;
    {
        const bool branch_taken_0x2c454c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c454c) {
            ctx->pc = 0x2C4550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C454Cu;
            // 0x2c4550: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4598u;
            goto label_2c4598;
        }
    }
    ctx->pc = 0x2C4554u;
label_2c4554:
    // 0x2c4554: 0xc0a367c  jal         func_28D9F0
label_2c4558:
    if (ctx->pc == 0x2C4558u) {
        ctx->pc = 0x2C4558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4554u;
        // 0x2c4558: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C455Cu;
        goto label_2c455c;
    }
    ctx->pc = 0x2C4554u;
    SET_GPR_U32(ctx, 31, 0x2C455Cu);
    ctx->pc = 0x2C4558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4554u;
    // 0x2c4558: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C4554u, 0x2C455Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C455Cu;
label_2c455c:
    // 0x2c455c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c455cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c4560:
    // 0x2c4560: 0x1240002a  beqz        $s2, . + 4 + (0x2A << 2)
label_2c4564:
    if (ctx->pc == 0x2C4564u) {
        ctx->pc = 0x2C4564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4560u;
        // 0x2c4564: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4568u;
        goto label_2c4568;
    }
    ctx->pc = 0x2C4560u;
    {
        const bool branch_taken_0x2c4560 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4560u;
        // 0x2c4564: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4560) {
            ctx->pc = 0x2C460Cu;
            goto label_2c460c;
        }
    }
    ctx->pc = 0x2C4568u;
label_2c4568:
    // 0x2c4568: 0x86b00002  lh          $s0, 0x2($s5)
    ctx->pc = 0x2c4568u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_2c456c:
    // 0x2c456c: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2c456cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2c4570:
    // 0x2c4570: 0xc0884f6  jal         func_2213D8
label_2c4574:
    if (ctx->pc == 0x2C4574u) {
        ctx->pc = 0x2C4574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4570u;
        // 0x2c4574: 0x2138021  addu        $s0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4578u;
        goto label_2c4578;
    }
    ctx->pc = 0x2C4570u;
    SET_GPR_U32(ctx, 31, 0x2C4578u);
    ctx->pc = 0x2C4574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4570u;
    // 0x2c4574: 0x2138021  addu        $s0, $s0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2C4570u, 0x2C4578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4578u;
label_2c4578:
    // 0x2c4578: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c4578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c457c:
    // 0x2c457c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c457cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c4580:
    // 0x2c4580: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c4580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c4584:
    // 0x2c4584: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2c4584u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2c4588:
    // 0x2c4588: 0xc0bf800  jal         func_2FE000
label_2c458c:
    if (ctx->pc == 0x2C458Cu) {
        ctx->pc = 0x2C458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4588u;
        // 0x2c458c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4590u;
        goto label_2c4590;
    }
    ctx->pc = 0x2C4588u;
    SET_GPR_U32(ctx, 31, 0x2C4590u);
    ctx->pc = 0x2C458Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4588u;
    // 0x2c458c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2C4588u, 0x2C4590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4590u;
label_2c4590:
    // 0x2c4590: 0x10000051  b           . + 4 + (0x51 << 2)
label_2c4594:
    if (ctx->pc == 0x2C4594u) {
        ctx->pc = 0x2C4594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4590u;
        // 0x2c4594: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4598u;
        goto label_2c4598;
    }
    ctx->pc = 0x2C4590u;
    {
        const bool branch_taken_0x2c4590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4590u;
        // 0x2c4594: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4590) {
            ctx->pc = 0x2C46D8u;
            goto label_2c46d8;
        }
    }
    ctx->pc = 0x2C4598u;
label_2c4598:
    // 0x2c4598: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_2c459c:
    if (ctx->pc == 0x2C459Cu) {
        ctx->pc = 0x2C459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4598u;
        // 0x2c459c: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C45A0u;
        goto label_2c45a0;
    }
    ctx->pc = 0x2C4598u;
    {
        const bool branch_taken_0x2c4598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4598u;
        // 0x2c459c: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4598) {
            ctx->pc = 0x2C4614u;
            goto label_2c4614;
        }
    }
    ctx->pc = 0x2C45A0u;
label_2c45a0:
    // 0x2c45a0: 0xae360038  sw          $s6, 0x38($s1)
    ctx->pc = 0x2c45a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 22));
label_2c45a4:
    // 0x2c45a4: 0xc0a47b4  jal         func_291ED0
label_2c45a8:
    if (ctx->pc == 0x2C45A8u) {
        ctx->pc = 0x2C45A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C45A4u;
        // 0x2c45a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C45ACu;
        goto label_2c45ac;
    }
    ctx->pc = 0x2C45A4u;
    SET_GPR_U32(ctx, 31, 0x2C45ACu);
    ctx->pc = 0x2C45A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C45A4u;
    // 0x2c45a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2C45A4u, 0x2C45ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C45ACu;
label_2c45ac:
    // 0x2c45ac: 0x14560009  bne         $v0, $s6, . + 4 + (0x9 << 2)
label_2c45b0:
    if (ctx->pc == 0x2C45B0u) {
        ctx->pc = 0x2C45B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C45ACu;
        // 0x2c45b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C45B4u;
        goto label_2c45b4;
    }
    ctx->pc = 0x2C45ACu;
    {
        const bool branch_taken_0x2c45ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x2C45B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C45ACu;
        // 0x2c45b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c45ac) {
            ctx->pc = 0x2C45D4u;
            goto label_2c45d4;
        }
    }
    ctx->pc = 0x2C45B4u;
label_2c45b4:
    // 0x2c45b4: 0x8e290020  lw          $t1, 0x20($s1)
    ctx->pc = 0x2c45b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2c45b8:
    // 0x2c45b8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2c45b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_2c45bc:
    // 0x2c45bc: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2c45bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2c45c0:
    // 0x2c45c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c45c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c45c4:
    // 0x2c45c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c45c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c45c8:
    // 0x2c45c8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c45c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c45cc:
    // 0x2c45cc: 0xc088178  jal         func_2205E0
label_2c45d0:
    if (ctx->pc == 0x2C45D0u) {
        ctx->pc = 0x2C45D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C45CCu;
        // 0x2c45d0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C45D4u;
        goto label_2c45d4;
    }
    ctx->pc = 0x2C45CCu;
    SET_GPR_U32(ctx, 31, 0x2C45D4u);
    ctx->pc = 0x2C45D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C45CCu;
    // 0x2c45d0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2C45CCu, 0x2C45D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C45D4u;
label_2c45d4:
    // 0x2c45d4: 0xc0a367c  jal         func_28D9F0
label_2c45d8:
    if (ctx->pc == 0x2C45D8u) {
        ctx->pc = 0x2C45D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C45D4u;
        // 0x2c45d8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C45DCu;
        goto label_2c45dc;
    }
    ctx->pc = 0x2C45D4u;
    SET_GPR_U32(ctx, 31, 0x2C45DCu);
    ctx->pc = 0x2C45D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C45D4u;
    // 0x2c45d8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C45D4u, 0x2C45DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C45DCu;
label_2c45dc:
    // 0x2c45dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c45dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c45e0:
    // 0x2c45e0: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_2c45e4:
    if (ctx->pc == 0x2C45E4u) {
        ctx->pc = 0x2C45E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C45E0u;
        // 0x2c45e4: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C45E8u;
        goto label_2c45e8;
    }
    ctx->pc = 0x2C45E0u;
    {
        const bool branch_taken_0x2c45e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C45E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C45E0u;
        // 0x2c45e4: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c45e0) {
            ctx->pc = 0x2C460Cu;
            goto label_2c460c;
        }
    }
    ctx->pc = 0x2C45E8u;
label_2c45e8:
    // 0x2c45e8: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x2c45e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2c45ec:
    // 0x2c45ec: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c45ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c45f0:
    // 0x2c45f0: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2c45f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2c45f4:
    // 0x2c45f4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2c45f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2c45f8:
    // 0x2c45f8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2c45f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2c45fc:
    // 0x2c45fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c45fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c4600:
    // 0x2c4600: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x2c4600u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_2c4604:
    // 0x2c4604: 0xc0be8c0  jal         func_2FA300
label_2c4608:
    if (ctx->pc == 0x2C4608u) {
        ctx->pc = 0x2C4608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4604u;
        // 0x2c4608: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C460Cu;
        goto label_2c460c;
    }
    ctx->pc = 0x2C4604u;
    SET_GPR_U32(ctx, 31, 0x2C460Cu);
    ctx->pc = 0x2C4608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4604u;
    // 0x2c4608: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2C4604u, 0x2C460Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C460Cu;
label_2c460c:
    // 0x2c460c: 0x10000032  b           . + 4 + (0x32 << 2)
label_2c4610:
    if (ctx->pc == 0x2C4610u) {
        ctx->pc = 0x2C4610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C460Cu;
        // 0x2c4610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4614u;
        goto label_2c4614;
    }
    ctx->pc = 0x2C460Cu;
    {
        const bool branch_taken_0x2c460c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C460Cu;
        // 0x2c4610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c460c) {
            ctx->pc = 0x2C46D8u;
            goto label_2c46d8;
        }
    }
    ctx->pc = 0x2C4614u;
label_2c4614:
    // 0x2c4614: 0x8626002c  lh          $a2, 0x2C($s1)
    ctx->pc = 0x2c4614u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
label_2c4618:
    // 0x2c4618: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x2c4618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_2c461c:
    // 0x2c461c: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x2c461cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2c4620:
    // 0x2c4620: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x2c4620u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2c4624:
    // 0x2c4624: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c4624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c4628:
    // 0x2c4628: 0x8e280028  lw          $t0, 0x28($s1)
    ctx->pc = 0x2c4628u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2c462c:
    // 0x2c462c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c462cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4630:
    // 0x2c4630: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2c4630u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4634:
    // 0x2c4634: 0xc106e2c  jal         func_41B8B0
label_2c4638:
    if (ctx->pc == 0x2C4638u) {
        ctx->pc = 0x2C4638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4634u;
        // 0x2c4638: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C463Cu;
        goto label_2c463c;
    }
    ctx->pc = 0x2C4634u;
    SET_GPR_U32(ctx, 31, 0x2C463Cu);
    ctx->pc = 0x2C4638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4634u;
    // 0x2c4638: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B8B0u, 0x2C4634u, 0x2C463Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C463Cu;
label_2c463c:
    // 0x2c463c: 0xc087502  jal         func_21D408
label_2c4640:
    if (ctx->pc == 0x2C4640u) {
        ctx->pc = 0x2C4640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C463Cu;
        // 0x2c4640: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4644u;
        goto label_2c4644;
    }
    ctx->pc = 0x2C463Cu;
    SET_GPR_U32(ctx, 31, 0x2C4644u);
    ctx->pc = 0x2C4640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C463Cu;
    // 0x2c4640: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C463Cu, 0x2C4644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4644u;
label_2c4644:
    // 0x2c4644: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c4644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c4648:
    // 0x2c4648: 0xc0a404e  jal         func_290138
label_2c464c:
    if (ctx->pc == 0x2C464Cu) {
        ctx->pc = 0x2C464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4648u;
        // 0x2c464c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4650u;
        goto label_2c4650;
    }
    ctx->pc = 0x2C4648u;
    SET_GPR_U32(ctx, 31, 0x2C4650u);
    ctx->pc = 0x2C464Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4648u;
    // 0x2c464c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290138u, 0x2C4648u, 0x2C4650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4650u;
label_2c4650:
    // 0x2c4650: 0x1456000c  bne         $v0, $s6, . + 4 + (0xC << 2)
label_2c4654:
    if (ctx->pc == 0x2C4654u) {
        ctx->pc = 0x2C4658u;
        goto label_2c4658;
    }
    ctx->pc = 0x2C4650u;
    {
        const bool branch_taken_0x2c4650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x2c4650) {
            ctx->pc = 0x2C4684u;
            goto label_2c4684;
        }
    }
    ctx->pc = 0x2C4658u;
label_2c4658:
    // 0x2c4658: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c4658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c465c:
    // 0x2c465c: 0xc0a354e  jal         func_28D538
label_2c4660:
    if (ctx->pc == 0x2C4660u) {
        ctx->pc = 0x2C4660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C465Cu;
        // 0x2c4660: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4664u;
        goto label_2c4664;
    }
    ctx->pc = 0x2C465Cu;
    SET_GPR_U32(ctx, 31, 0x2C4664u);
    ctx->pc = 0x2C4660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C465Cu;
    // 0x2c4660: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D538u, 0x2C465Cu, 0x2C4664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4664u;
label_2c4664:
    // 0x2c4664: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c4664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c4668:
    // 0x2c4668: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c4668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c466c:
    // 0x2c466c: 0xc0a33f8  jal         func_28CFE0
label_2c4670:
    if (ctx->pc == 0x2C4670u) {
        ctx->pc = 0x2C4670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C466Cu;
        // 0x2c4670: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4674u;
        goto label_2c4674;
    }
    ctx->pc = 0x2C466Cu;
    SET_GPR_U32(ctx, 31, 0x2C4674u);
    ctx->pc = 0x2C4670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C466Cu;
    // 0x2c4670: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2C466Cu, 0x2C4674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4674u;
label_2c4674:
    // 0x2c4674: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c4674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c4678:
    // 0x2c4678: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c4678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c467c:
    // 0x2c467c: 0xc0a3050  jal         func_28C140
label_2c4680:
    if (ctx->pc == 0x2C4680u) {
        ctx->pc = 0x2C4680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C467Cu;
        // 0x2c4680: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4684u;
        goto label_2c4684;
    }
    ctx->pc = 0x2C467Cu;
    SET_GPR_U32(ctx, 31, 0x2C4684u);
    ctx->pc = 0x2C4680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C467Cu;
    // 0x2c4680: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C140u, 0x2C467Cu, 0x2C4684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4684u;
label_2c4684:
    // 0x2c4684: 0x12e00013  beqz        $s7, . + 4 + (0x13 << 2)
label_2c4688:
    if (ctx->pc == 0x2C4688u) {
        ctx->pc = 0x2C4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4684u;
        // 0x2c4688: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C468Cu;
        goto label_2c468c;
    }
    ctx->pc = 0x2C4684u;
    {
        const bool branch_taken_0x2c4684 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4684u;
        // 0x2c4688: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4684) {
            ctx->pc = 0x2C46D4u;
            goto label_2c46d4;
        }
    }
    ctx->pc = 0x2C468Cu;
label_2c468c:
    // 0x2c468c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c468cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c4690:
    // 0x2c4690: 0x8626002c  lh          $a2, 0x2C($s1)
    ctx->pc = 0x2c4690u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
label_2c4694:
    // 0x2c4694: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c4694u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4698:
    // 0x2c4698: 0x8e270024  lw          $a3, 0x24($s1)
    ctx->pc = 0x2c4698u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2c469c:
    // 0x2c469c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2c469cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c46a0:
    // 0x2c46a0: 0x8e280028  lw          $t0, 0x28($s1)
    ctx->pc = 0x2c46a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2c46a4:
    // 0x2c46a4: 0xc106e2c  jal         func_41B8B0
label_2c46a8:
    if (ctx->pc == 0x2C46A8u) {
        ctx->pc = 0x2C46A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46A4u;
        // 0x2c46a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C46ACu;
        goto label_2c46ac;
    }
    ctx->pc = 0x2C46A4u;
    SET_GPR_U32(ctx, 31, 0x2C46ACu);
    ctx->pc = 0x2C46A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C46A4u;
    // 0x2c46a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B8B0u, 0x2C46A4u, 0x2C46ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C46ACu;
label_2c46ac:
    // 0x2c46ac: 0xc087502  jal         func_21D408
label_2c46b0:
    if (ctx->pc == 0x2C46B0u) {
        ctx->pc = 0x2C46B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46ACu;
        // 0x2c46b0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C46B4u;
        goto label_2c46b4;
    }
    ctx->pc = 0x2C46ACu;
    SET_GPR_U32(ctx, 31, 0x2C46B4u);
    ctx->pc = 0x2C46B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C46ACu;
    // 0x2c46b0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C46ACu, 0x2C46B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C46B4u;
label_2c46b4:
    // 0x2c46b4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c46b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c46b8:
    // 0x2c46b8: 0xc0a404e  jal         func_290138
label_2c46bc:
    if (ctx->pc == 0x2C46BCu) {
        ctx->pc = 0x2C46BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46B8u;
        // 0x2c46bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C46C0u;
        goto label_2c46c0;
    }
    ctx->pc = 0x2C46B8u;
    SET_GPR_U32(ctx, 31, 0x2C46C0u);
    ctx->pc = 0x2C46BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C46B8u;
    // 0x2c46bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290138u, 0x2C46B8u, 0x2C46C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C46C0u;
label_2c46c0:
    // 0x2c46c0: 0x14560005  bne         $v0, $s6, . + 4 + (0x5 << 2)
label_2c46c4:
    if (ctx->pc == 0x2C46C4u) {
        ctx->pc = 0x2C46C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46C0u;
        // 0x2c46c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C46C8u;
        goto label_2c46c8;
    }
    ctx->pc = 0x2C46C0u;
    {
        const bool branch_taken_0x2c46c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x2C46C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46C0u;
        // 0x2c46c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c46c0) {
            ctx->pc = 0x2C46D8u;
            goto label_2c46d8;
        }
    }
    ctx->pc = 0x2C46C8u;
label_2c46c8:
    // 0x2c46c8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c46c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c46cc:
    // 0x2c46cc: 0xc0a354e  jal         func_28D538
label_2c46d0:
    if (ctx->pc == 0x2C46D0u) {
        ctx->pc = 0x2C46D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46CCu;
        // 0x2c46d0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C46D4u;
        goto label_2c46d4;
    }
    ctx->pc = 0x2C46CCu;
    SET_GPR_U32(ctx, 31, 0x2C46D4u);
    ctx->pc = 0x2C46D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C46CCu;
    // 0x2c46d0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D538u, 0x2C46CCu, 0x2C46D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C46D4u;
label_2c46d4:
    // 0x2c46d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c46d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c46d8:
    // 0x2c46d8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2c46d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2c46dc:
    // 0x2c46dc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2c46dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2c46e0:
    // 0x2c46e0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2c46e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2c46e4:
    // 0x2c46e4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2c46e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c46e8:
    // 0x2c46e8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2c46e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c46ec:
    // 0x2c46ec: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2c46ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c46f0:
    // 0x2c46f0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2c46f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c46f4:
    // 0x2c46f4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2c46f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c46f8:
    // 0x2c46f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c46f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c46fc:
    // 0x2c46fc: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x2c46fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2c4700:
    // 0x2c4700: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x2c4700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2c4704:
    // 0x2c4704: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2c4704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c4708:
    // 0x2c4708: 0x3e00008  jr          $ra
label_2c470c:
    if (ctx->pc == 0x2C470Cu) {
        ctx->pc = 0x2C470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4708u;
        // 0x2c470c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4710u;
        goto label_fallthrough_0x2c4708;
    }
    ctx->pc = 0x2C4708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4708u;
        // 0x2c470c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c4708:
    ctx->pc = 0x2C4710u;
}
