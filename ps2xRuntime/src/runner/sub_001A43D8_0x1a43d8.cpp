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

// Function: sub_001A43D8
// Address: 0x1a43d8 - 0x1a4658
void sub_001A43D8_0x1a43d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A43D8_0x1a43d8");
#endif

    switch (ctx->pc) {
        case 0x1a43d8u: goto label_1a43d8;
        case 0x1a43dcu: goto label_1a43dc;
        case 0x1a43e0u: goto label_1a43e0;
        case 0x1a43e4u: goto label_1a43e4;
        case 0x1a43e8u: goto label_1a43e8;
        case 0x1a43ecu: goto label_1a43ec;
        case 0x1a43f0u: goto label_1a43f0;
        case 0x1a43f4u: goto label_1a43f4;
        case 0x1a43f8u: goto label_1a43f8;
        case 0x1a43fcu: goto label_1a43fc;
        case 0x1a4400u: goto label_1a4400;
        case 0x1a4404u: goto label_1a4404;
        case 0x1a4408u: goto label_1a4408;
        case 0x1a440cu: goto label_1a440c;
        case 0x1a4410u: goto label_1a4410;
        case 0x1a4414u: goto label_1a4414;
        case 0x1a4418u: goto label_1a4418;
        case 0x1a441cu: goto label_1a441c;
        case 0x1a4420u: goto label_1a4420;
        case 0x1a4424u: goto label_1a4424;
        case 0x1a4428u: goto label_1a4428;
        case 0x1a442cu: goto label_1a442c;
        case 0x1a4430u: goto label_1a4430;
        case 0x1a4434u: goto label_1a4434;
        case 0x1a4438u: goto label_1a4438;
        case 0x1a443cu: goto label_1a443c;
        case 0x1a4440u: goto label_1a4440;
        case 0x1a4444u: goto label_1a4444;
        case 0x1a4448u: goto label_1a4448;
        case 0x1a444cu: goto label_1a444c;
        case 0x1a4450u: goto label_1a4450;
        case 0x1a4454u: goto label_1a4454;
        case 0x1a4458u: goto label_1a4458;
        case 0x1a445cu: goto label_1a445c;
        case 0x1a4460u: goto label_1a4460;
        case 0x1a4464u: goto label_1a4464;
        case 0x1a4468u: goto label_1a4468;
        case 0x1a446cu: goto label_1a446c;
        case 0x1a4470u: goto label_1a4470;
        case 0x1a4474u: goto label_1a4474;
        case 0x1a4478u: goto label_1a4478;
        case 0x1a447cu: goto label_1a447c;
        case 0x1a4480u: goto label_1a4480;
        case 0x1a4484u: goto label_1a4484;
        case 0x1a4488u: goto label_1a4488;
        case 0x1a448cu: goto label_1a448c;
        case 0x1a4490u: goto label_1a4490;
        case 0x1a4494u: goto label_1a4494;
        case 0x1a4498u: goto label_1a4498;
        case 0x1a449cu: goto label_1a449c;
        case 0x1a44a0u: goto label_1a44a0;
        case 0x1a44a4u: goto label_1a44a4;
        case 0x1a44a8u: goto label_1a44a8;
        case 0x1a44acu: goto label_1a44ac;
        case 0x1a44b0u: goto label_1a44b0;
        case 0x1a44b4u: goto label_1a44b4;
        case 0x1a44b8u: goto label_1a44b8;
        case 0x1a44bcu: goto label_1a44bc;
        case 0x1a44c0u: goto label_1a44c0;
        case 0x1a44c4u: goto label_1a44c4;
        case 0x1a44c8u: goto label_1a44c8;
        case 0x1a44ccu: goto label_1a44cc;
        case 0x1a44d0u: goto label_1a44d0;
        case 0x1a44d4u: goto label_1a44d4;
        case 0x1a44d8u: goto label_1a44d8;
        case 0x1a44dcu: goto label_1a44dc;
        case 0x1a44e0u: goto label_1a44e0;
        case 0x1a44e4u: goto label_1a44e4;
        case 0x1a44e8u: goto label_1a44e8;
        case 0x1a44ecu: goto label_1a44ec;
        case 0x1a44f0u: goto label_1a44f0;
        case 0x1a44f4u: goto label_1a44f4;
        case 0x1a44f8u: goto label_1a44f8;
        case 0x1a44fcu: goto label_1a44fc;
        case 0x1a4500u: goto label_1a4500;
        case 0x1a4504u: goto label_1a4504;
        case 0x1a4508u: goto label_1a4508;
        case 0x1a450cu: goto label_1a450c;
        case 0x1a4510u: goto label_1a4510;
        case 0x1a4514u: goto label_1a4514;
        case 0x1a4518u: goto label_1a4518;
        case 0x1a451cu: goto label_1a451c;
        case 0x1a4520u: goto label_1a4520;
        case 0x1a4524u: goto label_1a4524;
        case 0x1a4528u: goto label_1a4528;
        case 0x1a452cu: goto label_1a452c;
        case 0x1a4530u: goto label_1a4530;
        case 0x1a4534u: goto label_1a4534;
        case 0x1a4538u: goto label_1a4538;
        case 0x1a453cu: goto label_1a453c;
        case 0x1a4540u: goto label_1a4540;
        case 0x1a4544u: goto label_1a4544;
        case 0x1a4548u: goto label_1a4548;
        case 0x1a454cu: goto label_1a454c;
        case 0x1a4550u: goto label_1a4550;
        case 0x1a4554u: goto label_1a4554;
        case 0x1a4558u: goto label_1a4558;
        case 0x1a455cu: goto label_1a455c;
        case 0x1a4560u: goto label_1a4560;
        case 0x1a4564u: goto label_1a4564;
        case 0x1a4568u: goto label_1a4568;
        case 0x1a456cu: goto label_1a456c;
        case 0x1a4570u: goto label_1a4570;
        case 0x1a4574u: goto label_1a4574;
        case 0x1a4578u: goto label_1a4578;
        case 0x1a457cu: goto label_1a457c;
        case 0x1a4580u: goto label_1a4580;
        case 0x1a4584u: goto label_1a4584;
        case 0x1a4588u: goto label_1a4588;
        case 0x1a458cu: goto label_1a458c;
        case 0x1a4590u: goto label_1a4590;
        case 0x1a4594u: goto label_1a4594;
        case 0x1a4598u: goto label_1a4598;
        case 0x1a459cu: goto label_1a459c;
        case 0x1a45a0u: goto label_1a45a0;
        case 0x1a45a4u: goto label_1a45a4;
        case 0x1a45a8u: goto label_1a45a8;
        case 0x1a45acu: goto label_1a45ac;
        case 0x1a45b0u: goto label_1a45b0;
        case 0x1a45b4u: goto label_1a45b4;
        case 0x1a45b8u: goto label_1a45b8;
        case 0x1a45bcu: goto label_1a45bc;
        case 0x1a45c0u: goto label_1a45c0;
        case 0x1a45c4u: goto label_1a45c4;
        case 0x1a45c8u: goto label_1a45c8;
        case 0x1a45ccu: goto label_1a45cc;
        case 0x1a45d0u: goto label_1a45d0;
        case 0x1a45d4u: goto label_1a45d4;
        case 0x1a45d8u: goto label_1a45d8;
        case 0x1a45dcu: goto label_1a45dc;
        case 0x1a45e0u: goto label_1a45e0;
        case 0x1a45e4u: goto label_1a45e4;
        case 0x1a45e8u: goto label_1a45e8;
        case 0x1a45ecu: goto label_1a45ec;
        case 0x1a45f0u: goto label_1a45f0;
        case 0x1a45f4u: goto label_1a45f4;
        case 0x1a45f8u: goto label_1a45f8;
        case 0x1a45fcu: goto label_1a45fc;
        case 0x1a4600u: goto label_1a4600;
        case 0x1a4604u: goto label_1a4604;
        case 0x1a4608u: goto label_1a4608;
        case 0x1a460cu: goto label_1a460c;
        case 0x1a4610u: goto label_1a4610;
        case 0x1a4614u: goto label_1a4614;
        case 0x1a4618u: goto label_1a4618;
        case 0x1a461cu: goto label_1a461c;
        case 0x1a4620u: goto label_1a4620;
        case 0x1a4624u: goto label_1a4624;
        case 0x1a4628u: goto label_1a4628;
        case 0x1a462cu: goto label_1a462c;
        case 0x1a4630u: goto label_1a4630;
        case 0x1a4634u: goto label_1a4634;
        case 0x1a4638u: goto label_1a4638;
        case 0x1a463cu: goto label_1a463c;
        case 0x1a4640u: goto label_1a4640;
        case 0x1a4644u: goto label_1a4644;
        case 0x1a4648u: goto label_1a4648;
        case 0x1a464cu: goto label_1a464c;
        case 0x1a4650u: goto label_1a4650;
        case 0x1a4654u: goto label_1a4654;
        default: break;
    }

    ctx->pc = 0x1a43d8u;

label_1a43d8:
    // 0x1a43d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a43d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a43dc:
    // 0x1a43dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a43dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1a43e0:
    // 0x1a43e0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1a43e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1a43e4:
    // 0x1a43e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a43e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a43e8:
    // 0x1a43e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a43e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a43ec:
    // 0x1a43ec: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1a43ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1a43f0:
    // 0x1a43f0: 0x1040009e  beqz        $v0, . + 4 + (0x9E << 2)
label_1a43f4:
    if (ctx->pc == 0x1A43F4u) {
        ctx->pc = 0x1A43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43F0u;
        // 0x1a43f4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A43F8u;
        goto label_1a43f8;
    }
    ctx->pc = 0x1A43F0u;
    {
        const bool branch_taken_0x1a43f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43F0u;
        // 0x1a43f4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a43f0) {
            ctx->pc = 0x1A466Cu;
            return;
        }
    }
    ctx->pc = 0x1A43F8u;
label_1a43f8:
    // 0x1a43f8: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1a43f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_1a43fc:
    // 0x1a43fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a43fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4400:
    // 0x1a4400: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x1a4400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1a4404:
    // 0x1a4404: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
label_1a4408:
    if (ctx->pc == 0x1A4408u) {
        ctx->pc = 0x1A4408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4404u;
        // 0x1a4408: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A440Cu;
        goto label_1a440c;
    }
    ctx->pc = 0x1A4404u;
    {
        const bool branch_taken_0x1a4404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4404u;
        // 0x1a4408: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4404) {
            ctx->pc = 0x1A4658u;
            return;
        }
    }
    ctx->pc = 0x1A440Cu;
label_1a440c:
    // 0x1a440c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1a440cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1a4410:
    // 0x1a4410: 0x24423e70  addiu       $v0, $v0, 0x3E70
    ctx->pc = 0x1a4410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15984));
label_1a4414:
    // 0x1a4414: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a4414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a4418:
    // 0x1a4418: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a4418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a441c:
    // 0x1a441c: 0x800008  jr          $a0
label_1a4420:
    if (ctx->pc == 0x1A4420u) {
        ctx->pc = 0x1A4424u;
        goto label_1a4424;
    }
    ctx->pc = 0x1A441Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A441Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A4424u;
label_1a4424:
    // 0x1a4424: 0xc05ef0a  jal         func_17BC28
label_1a4428:
    if (ctx->pc == 0x1A4428u) {
        ctx->pc = 0x1A4428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4424u;
        // 0x1a4428: 0x26240230  addiu       $a0, $s1, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A442Cu;
        goto label_1a442c;
    }
    ctx->pc = 0x1A4424u;
    SET_GPR_U32(ctx, 31, 0x1A442Cu);
    ctx->pc = 0x1A4428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4424u;
    // 0x1a4428: 0x26240230  addiu       $a0, $s1, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BC28u, 0x1A4424u, 0x1A442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A442Cu;
label_1a442c:
    // 0x1a442c: 0x1000008a  b           . + 4 + (0x8A << 2)
label_1a4430:
    if (ctx->pc == 0x1A4430u) {
        ctx->pc = 0x1A4434u;
        goto label_1a4434;
    }
    ctx->pc = 0x1A442Cu;
    {
        const bool branch_taken_0x1a442c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a442c) {
            ctx->pc = 0x1A4658u;
            return;
        }
    }
    ctx->pc = 0x1A4434u;
label_1a4434:
    // 0x1a4434: 0x8e240220  lw          $a0, 0x220($s1)
    ctx->pc = 0x1a4434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_1a4438:
    // 0x1a4438: 0x8e230224  lw          $v1, 0x224($s1)
    ctx->pc = 0x1a4438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
label_1a443c:
    // 0x1a443c: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x1a443cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_1a4440:
    // 0x1a4440: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1a4440u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1a4444:
    // 0x1a4444: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1a4448:
    if (ctx->pc == 0x1A4448u) {
        ctx->pc = 0x1A4448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4444u;
        // 0x1a4448: 0x8e220224  lw          $v0, 0x224($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A444Cu;
        goto label_1a444c;
    }
    ctx->pc = 0x1A4444u;
    {
        const bool branch_taken_0x1a4444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4444) {
            ctx->pc = 0x1A4448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4444u;
            // 0x1a4448: 0x8e220224  lw          $v0, 0x224($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4468u;
            goto label_1a4468;
        }
    }
    ctx->pc = 0x1A444Cu;
label_1a444c:
    // 0x1a444c: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_1a4450:
    if (ctx->pc == 0x1A4450u) {
        ctx->pc = 0x1A4454u;
        goto label_1a4454;
    }
    ctx->pc = 0x1A444Cu;
    {
        const bool branch_taken_0x1a444c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a444c) {
            ctx->pc = 0x1A445Cu;
            goto label_1a445c;
        }
    }
    ctx->pc = 0x1A4454u;
label_1a4454:
    // 0x1a4454: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a4458:
    if (ctx->pc == 0x1A4458u) {
        ctx->pc = 0x1A4458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4454u;
        // 0x1a4458: 0xae200224  sw          $zero, 0x224($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A445Cu;
        goto label_1a445c;
    }
    ctx->pc = 0x1A4454u;
    {
        const bool branch_taken_0x1a4454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4454u;
        // 0x1a4458: 0xae200224  sw          $zero, 0x224($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4454) {
            ctx->pc = 0x1A4464u;
            goto label_1a4464;
        }
    }
    ctx->pc = 0x1A445Cu;
label_1a445c:
    // 0x1a445c: 0xc05ef0a  jal         func_17BC28
label_1a4460:
    if (ctx->pc == 0x1A4460u) {
        ctx->pc = 0x1A4460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A445Cu;
        // 0x1a4460: 0x26240230  addiu       $a0, $s1, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4464u;
        goto label_1a4464;
    }
    ctx->pc = 0x1A445Cu;
    SET_GPR_U32(ctx, 31, 0x1A4464u);
    ctx->pc = 0x1A4460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A445Cu;
    // 0x1a4460: 0x26240230  addiu       $a0, $s1, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BC28u, 0x1A445Cu, 0x1A4464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4464u;
label_1a4464:
    // 0x1a4464: 0x8e220224  lw          $v0, 0x224($s1)
    ctx->pc = 0x1a4464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
label_1a4468:
    // 0x1a4468: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a4468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a446c:
    // 0x1a446c: 0x1000007a  b           . + 4 + (0x7A << 2)
label_1a4470:
    if (ctx->pc == 0x1A4470u) {
        ctx->pc = 0x1A4470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A446Cu;
        // 0x1a4470: 0xae220224  sw          $v0, 0x224($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4474u;
        goto label_1a4474;
    }
    ctx->pc = 0x1A446Cu;
    {
        const bool branch_taken_0x1a446c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A446Cu;
        // 0x1a4470: 0xae220224  sw          $v0, 0x224($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a446c) {
            ctx->pc = 0x1A4658u;
            return;
        }
    }
    ctx->pc = 0x1A4474u;
label_1a4474:
    // 0x1a4474: 0x8e240220  lw          $a0, 0x220($s1)
    ctx->pc = 0x1a4474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_1a4478:
    // 0x1a4478: 0x8e230224  lw          $v1, 0x224($s1)
    ctx->pc = 0x1a4478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
label_1a447c:
    // 0x1a447c: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x1a447cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_1a4480:
    // 0x1a4480: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1a4480u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1a4484:
    // 0x1a4484: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
label_1a4488:
    if (ctx->pc == 0x1A4488u) {
        ctx->pc = 0x1A4488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4484u;
        // 0x1a4488: 0x8e220224  lw          $v0, 0x224($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A448Cu;
        goto label_1a448c;
    }
    ctx->pc = 0x1A4484u;
    {
        const bool branch_taken_0x1a4484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4484) {
            ctx->pc = 0x1A4488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4484u;
            // 0x1a4488: 0x8e220224  lw          $v0, 0x224($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4520u;
            goto label_1a4520;
        }
    }
    ctx->pc = 0x1A448Cu;
label_1a448c:
    // 0x1a448c: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_1a4490:
    if (ctx->pc == 0x1A4490u) {
        ctx->pc = 0x1A4490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A448Cu;
        // 0x1a4490: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4494u;
        goto label_1a4494;
    }
    ctx->pc = 0x1A448Cu;
    {
        const bool branch_taken_0x1a448c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1A4490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A448Cu;
        // 0x1a4490: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a448c) {
            ctx->pc = 0x1A449Cu;
            goto label_1a449c;
        }
    }
    ctx->pc = 0x1A4494u;
label_1a4494:
    // 0x1a4494: 0x10000021  b           . + 4 + (0x21 << 2)
label_1a4498:
    if (ctx->pc == 0x1A4498u) {
        ctx->pc = 0x1A4498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4494u;
        // 0x1a4498: 0xae200224  sw          $zero, 0x224($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A449Cu;
        goto label_1a449c;
    }
    ctx->pc = 0x1A4494u;
    {
        const bool branch_taken_0x1a4494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4494u;
        // 0x1a4498: 0xae200224  sw          $zero, 0x224($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4494) {
            ctx->pc = 0x1A451Cu;
            goto label_1a451c;
        }
    }
    ctx->pc = 0x1A449Cu;
label_1a449c:
    // 0x1a449c: 0x14a20014  bne         $a1, $v0, . + 4 + (0x14 << 2)
label_1a44a0:
    if (ctx->pc == 0x1A44A0u) {
        ctx->pc = 0x1A44A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A449Cu;
        // 0x1a44a0: 0x24a2fffd  addiu       $v0, $a1, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A44A4u;
        goto label_1a44a4;
    }
    ctx->pc = 0x1A449Cu;
    {
        const bool branch_taken_0x1a449c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A44A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A449Cu;
        // 0x1a44a0: 0x24a2fffd  addiu       $v0, $a1, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a449c) {
            ctx->pc = 0x1A44F0u;
            goto label_1a44f0;
        }
    }
    ctx->pc = 0x1A44A4u;
label_1a44a4:
    // 0x1a44a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a44a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a44a8:
    // 0x1a44a8: 0x26240230  addiu       $a0, $s1, 0x230
    ctx->pc = 0x1a44a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
label_1a44ac:
    // 0x1a44ac: 0xe6200254  swc1        $f0, 0x254($s1)
    ctx->pc = 0x1a44acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 596), bits); }
label_1a44b0:
    // 0x1a44b0: 0xc05efb2  jal         func_17BEC8
label_1a44b4:
    if (ctx->pc == 0x1A44B4u) {
        ctx->pc = 0x1A44B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44B0u;
        // 0x1a44b4: 0xe6200250  swc1        $f0, 0x250($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 592), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A44B8u;
        goto label_1a44b8;
    }
    ctx->pc = 0x1A44B0u;
    SET_GPR_U32(ctx, 31, 0x1A44B8u);
    ctx->pc = 0x1A44B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A44B0u;
    // 0x1a44b4: 0xe6200250  swc1        $f0, 0x250($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 592), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BEC8u, 0x1A44B0u, 0x1A44B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A44B8u;
label_1a44b8:
    // 0x1a44b8: 0xc62c02e4  lwc1        $f12, 0x2E4($s1)
    ctx->pc = 0x1a44b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a44bc:
    // 0x1a44bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a44bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a44c0:
    // 0x1a44c0: 0xc069014  jal         func_1A4050
label_1a44c4:
    if (ctx->pc == 0x1A44C4u) {
        ctx->pc = 0x1A44C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44C0u;
        // 0x1a44c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A44C8u;
        goto label_1a44c8;
    }
    ctx->pc = 0x1A44C0u;
    SET_GPR_U32(ctx, 31, 0x1A44C8u);
    ctx->pc = 0x1A44C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A44C0u;
    // 0x1a44c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4050u, 0x1A44C0u, 0x1A44C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A44C8u;
label_1a44c8:
    // 0x1a44c8: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1a44c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1a44cc:
    // 0x1a44cc: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1a44ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1a44d0:
    // 0x1a44d0: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x1a44d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1a44d4:
    // 0x1a44d4: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x1a44d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1a44d8:
    // 0x1a44d8: 0xb2220273  sdl         $v0, 0x273($s1)
    ctx->pc = 0x1a44d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 627); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a44dc:
    // 0x1a44dc: 0xb622026c  sdr         $v0, 0x26C($s1)
    ctx->pc = 0x1a44dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 620); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a44e0:
    // 0x1a44e0: 0xb223027b  sdl         $v1, 0x27B($s1)
    ctx->pc = 0x1a44e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 635); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a44e4:
    // 0x1a44e4: 0xb6230274  sdr         $v1, 0x274($s1)
    ctx->pc = 0x1a44e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 628); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a44e8:
    // 0x1a44e8: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a44ec:
    if (ctx->pc == 0x1A44ECu) {
        ctx->pc = 0x1A44ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44E8u;
        // 0x1a44ec: 0x8e220224  lw          $v0, 0x224($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A44F0u;
        goto label_1a44f0;
    }
    ctx->pc = 0x1A44E8u;
    {
        const bool branch_taken_0x1a44e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A44ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44E8u;
        // 0x1a44ec: 0x8e220224  lw          $v0, 0x224($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a44e8) {
            ctx->pc = 0x1A4520u;
            goto label_1a4520;
        }
    }
    ctx->pc = 0x1A44F0u;
label_1a44f0:
    // 0x1a44f0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1a44f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1a44f4:
    // 0x1a44f4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1a44f8:
    if (ctx->pc == 0x1A44F8u) {
        ctx->pc = 0x1A44F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44F4u;
        // 0x1a44f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A44FCu;
        goto label_1a44fc;
    }
    ctx->pc = 0x1A44F4u;
    {
        const bool branch_taken_0x1a44f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A44F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44F4u;
        // 0x1a44f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a44f4) {
            ctx->pc = 0x1A451Cu;
            goto label_1a451c;
        }
    }
    ctx->pc = 0x1A44FCu;
label_1a44fc:
    // 0x1a44fc: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1a44fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_1a4500:
    // 0x1a4500: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1a4500u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1a4504:
    // 0x1a4504: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a4504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4508:
    // 0x1a4508: 0xa22202e8  sb          $v0, 0x2E8($s1)
    ctx->pc = 0x1a4508u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 744), (uint8_t)GPR_U32(ctx, 2));
label_1a450c:
    // 0x1a450c: 0x26240230  addiu       $a0, $s1, 0x230
    ctx->pc = 0x1a450cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
label_1a4510:
    // 0x1a4510: 0xe6200254  swc1        $f0, 0x254($s1)
    ctx->pc = 0x1a4510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 596), bits); }
label_1a4514:
    // 0x1a4514: 0xc05efb2  jal         func_17BEC8
label_1a4518:
    if (ctx->pc == 0x1A4518u) {
        ctx->pc = 0x1A4518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4514u;
        // 0x1a4518: 0xe6200250  swc1        $f0, 0x250($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 592), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A451Cu;
        goto label_1a451c;
    }
    ctx->pc = 0x1A4514u;
    SET_GPR_U32(ctx, 31, 0x1A451Cu);
    ctx->pc = 0x1A4518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4514u;
    // 0x1a4518: 0xe6200250  swc1        $f0, 0x250($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 592), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BEC8u, 0x1A4514u, 0x1A451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A451Cu;
label_1a451c:
    // 0x1a451c: 0x8e220224  lw          $v0, 0x224($s1)
    ctx->pc = 0x1a451cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
label_1a4520:
    // 0x1a4520: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a4520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a4524:
    // 0x1a4524: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x1a4524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_1a4528:
    // 0x1a4528: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a4528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a452c:
    // 0x1a452c: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
label_1a4530:
    if (ctx->pc == 0x1A4530u) {
        ctx->pc = 0x1A4530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A452Cu;
        // 0x1a4530: 0xae220224  sw          $v0, 0x224($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4534u;
        goto label_1a4534;
    }
    ctx->pc = 0x1A452Cu;
    {
        const bool branch_taken_0x1a452c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A4530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A452Cu;
        // 0x1a4530: 0xae220224  sw          $v0, 0x224($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a452c) {
            ctx->pc = 0x1A4570u;
            goto label_1a4570;
        }
    }
    ctx->pc = 0x1A4534u;
label_1a4534:
    // 0x1a4534: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a4534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a4538:
    // 0x1a4538: 0xde250328  ld          $a1, 0x328($s1)
    ctx->pc = 0x1a4538u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 808)));
label_1a453c:
    // 0x1a453c: 0x8c66b734  lw          $a2, -0x48CC($v1)
    ctx->pc = 0x1a453cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_1a4540:
    // 0x1a4540: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1a4540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1a4544:
    // 0x1a4544: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1a4544u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1a4548:
    // 0x1a4548: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1a4548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1a454c:
    // 0x1a454c: 0x60f809  jalr        $v1
label_1a4550:
    if (ctx->pc == 0x1A4550u) {
        ctx->pc = 0x1A4550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A454Cu;
        // 0x1a4550: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4554u;
        goto label_1a4554;
    }
    ctx->pc = 0x1A454Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A4554u);
        ctx->pc = 0x1A4550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A454Cu;
        // 0x1a4550: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A454Cu, 0x1A4554u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4554u;
label_1a4554:
    // 0x1a4554: 0xc6210320  lwc1        $f1, 0x320($s1)
    ctx->pc = 0x1a4554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4558:
    // 0x1a4558: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1a4558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_1a455c:
    // 0x1a455c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a455cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a4560:
    // 0x1a4560: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1a4560u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_1a4564:
    // 0x1a4564: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a4564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1a4568:
    // 0x1a4568: 0x10000013  b           . + 4 + (0x13 << 2)
label_1a456c:
    if (ctx->pc == 0x1A456Cu) {
        ctx->pc = 0x1A456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4568u;
        // 0x1a456c: 0xe62002e4  swc1        $f0, 0x2E4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 740), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4570u;
        goto label_1a4570;
    }
    ctx->pc = 0x1A4568u;
    {
        const bool branch_taken_0x1a4568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4568u;
        // 0x1a456c: 0xe62002e4  swc1        $f0, 0x2E4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 740), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4568) {
            ctx->pc = 0x1A45B8u;
            goto label_1a45b8;
        }
    }
    ctx->pc = 0x1A4570u;
label_1a4570:
    // 0x1a4570: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a4570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a4574:
    // 0x1a4574: 0x54820011  bnel        $a0, $v0, . + 4 + (0x11 << 2)
label_1a4578:
    if (ctx->pc == 0x1A4578u) {
        ctx->pc = 0x1A4578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4574u;
        // 0x1a4578: 0xc62102e4  lwc1        $f1, 0x2E4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A457Cu;
        goto label_1a457c;
    }
    ctx->pc = 0x1A4574u;
    {
        const bool branch_taken_0x1a4574 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a4574) {
            ctx->pc = 0x1A4578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4574u;
            // 0x1a4578: 0xc62102e4  lwc1        $f1, 0x2E4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A45BCu;
            goto label_1a45bc;
        }
    }
    ctx->pc = 0x1A457Cu;
label_1a457c:
    // 0x1a457c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a457cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a4580:
    // 0x1a4580: 0xde250328  ld          $a1, 0x328($s1)
    ctx->pc = 0x1a4580u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 808)));
label_1a4584:
    // 0x1a4584: 0x8c66b734  lw          $a2, -0x48CC($v1)
    ctx->pc = 0x1a4584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_1a4588:
    // 0x1a4588: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1a4588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1a458c:
    // 0x1a458c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1a458cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1a4590:
    // 0x1a4590: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1a4590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1a4594:
    // 0x1a4594: 0x60f809  jalr        $v1
label_1a4598:
    if (ctx->pc == 0x1A4598u) {
        ctx->pc = 0x1A4598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4594u;
        // 0x1a4598: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A459Cu;
        goto label_1a459c;
    }
    ctx->pc = 0x1A4594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A459Cu);
        ctx->pc = 0x1A4598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4594u;
        // 0x1a4598: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4594u, 0x1A459Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A459Cu;
label_1a459c:
    // 0x1a459c: 0xc6220320  lwc1        $f2, 0x320($s1)
    ctx->pc = 0x1a459cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a45a0:
    // 0x1a45a0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1a45a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_1a45a4:
    // 0x1a45a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a45a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a45a8:
    // 0x1a45a8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1a45a8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_1a45ac:
    // 0x1a45ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a45acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a45b0:
    // 0x1a45b0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1a45b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a45b4:
    // 0x1a45b4: 0xe62102e4  swc1        $f1, 0x2E4($s1)
    ctx->pc = 0x1a45b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 740), bits); }
label_1a45b8:
    // 0x1a45b8: 0xc62102e4  lwc1        $f1, 0x2E4($s1)
    ctx->pc = 0x1a45b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a45bc:
    // 0x1a45bc: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1a45bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_1a45c0:
    // 0x1a45c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a45c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a45c4:
    // 0x1a45c4: 0x0  nop
    ctx->pc = 0x1a45c4u;
    // NOP
label_1a45c8:
    // 0x1a45c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a45c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a45cc:
    // 0x1a45cc: 0x0  nop
    ctx->pc = 0x1a45ccu;
    // NOP
label_1a45d0:
    // 0x1a45d0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1a45d4:
    if (ctx->pc == 0x1A45D4u) {
        ctx->pc = 0x1A45D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45D0u;
        // 0x1a45d4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A45D8u;
        goto label_1a45d8;
    }
    ctx->pc = 0x1A45D0u;
    {
        const bool branch_taken_0x1a45d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A45D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45D0u;
        // 0x1a45d4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a45d0) {
            ctx->pc = 0x1A45E4u;
            goto label_1a45e4;
        }
    }
    ctx->pc = 0x1A45D8u;
label_1a45d8:
    // 0x1a45d8: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x1a45d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_1a45dc:
    // 0x1a45dc: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_1a45e0:
    if (ctx->pc == 0x1A45E0u) {
        ctx->pc = 0x1A45E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45DCu;
        // 0x1a45e0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A45E4u;
        goto label_1a45e4;
    }
    ctx->pc = 0x1A45DCu;
    {
        const bool branch_taken_0x1a45dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A45E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45DCu;
        // 0x1a45e0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a45dc) {
            ctx->pc = 0x1A4608u;
            goto label_1a4608;
        }
    }
    ctx->pc = 0x1A45E4u;
label_1a45e4:
    // 0x1a45e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a45e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a45e8:
    // 0x1a45e8: 0x0  nop
    ctx->pc = 0x1a45e8u;
    // NOP
label_1a45ec:
    // 0x1a45ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a45ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a45f0:
    // 0x1a45f0: 0x0  nop
    ctx->pc = 0x1a45f0u;
    // NOP
label_1a45f4:
    // 0x1a45f4: 0x45000018  bc1f        . + 4 + (0x18 << 2)
label_1a45f8:
    if (ctx->pc == 0x1A45F8u) {
        ctx->pc = 0x1A45F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45F4u;
        // 0x1a45f8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A45FCu;
        goto label_1a45fc;
    }
    ctx->pc = 0x1A45F4u;
    {
        const bool branch_taken_0x1a45f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A45F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45F4u;
        // 0x1a45f8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a45f4) {
            ctx->pc = 0x1A4658u;
            return;
        }
    }
    ctx->pc = 0x1A45FCu;
label_1a45fc:
    // 0x1a45fc: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x1a45fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_1a4600:
    // 0x1a4600: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
label_1a4604:
    if (ctx->pc == 0x1A4604u) {
        ctx->pc = 0x1A4604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4600u;
        // 0x1a4604: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4608u;
        goto label_1a4608;
    }
    ctx->pc = 0x1A4600u;
    {
        const bool branch_taken_0x1a4600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A4604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4600u;
        // 0x1a4604: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4600) {
            ctx->pc = 0x1A4658u;
            return;
        }
    }
    ctx->pc = 0x1A4608u;
label_1a4608:
    // 0x1a4608: 0x822302f0  lb          $v1, 0x2F0($s1)
    ctx->pc = 0x1a4608u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 752)));
label_1a460c:
    // 0x1a460c: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x1a460cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
label_1a4610:
    // 0x1a4610: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_1a4614:
    if (ctx->pc == 0x1A4614u) {
        ctx->pc = 0x1A4614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4610u;
        // 0x1a4614: 0xae2002e4  sw          $zero, 0x2E4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 740), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4618u;
        goto label_1a4618;
    }
    ctx->pc = 0x1A4610u;
    {
        const bool branch_taken_0x1a4610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4610u;
        // 0x1a4614: 0xae2002e4  sw          $zero, 0x2E4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 740), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4610) {
            ctx->pc = 0x1A4658u;
            return;
        }
    }
    ctx->pc = 0x1A4618u;
label_1a4618:
    // 0x1a4618: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1a4618u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1a461c:
    // 0x1a461c: 0x262502f0  addiu       $a1, $s1, 0x2F0
    ctx->pc = 0x1a461cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 752));
label_1a4620:
    // 0x1a4620: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x1a4620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_1a4624:
    // 0x1a4624: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1a4624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1a4628:
    // 0x1a4628: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1a4628u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1a462c:
    // 0x1a462c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1a462cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1a4630:
    // 0x1a4630: 0x40f809  jalr        $v0
label_1a4634:
    if (ctx->pc == 0x1A4634u) {
        ctx->pc = 0x1A4634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4630u;
        // 0x1a4634: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4638u;
        goto label_1a4638;
    }
    ctx->pc = 0x1A4630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4638u);
        ctx->pc = 0x1A4634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4630u;
        // 0x1a4634: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4630u, 0x1A4638u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4638u;
label_1a4638:
    // 0x1a4638: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x1a4638u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_1a463c:
    // 0x1a463c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a463cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4640:
    // 0x1a4640: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a4640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4644:
    // 0x1a4644: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1a4644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1a4648:
    // 0x1a4648: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1a4648u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_1a464c:
    // 0x1a464c: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x1a464cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_1a4650:
    // 0x1a4650: 0x60f809  jalr        $v1
label_1a4654:
    if (ctx->pc == 0x1A4654u) {
        ctx->pc = 0x1A4654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4650u;
        // 0x1a4654: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4658u;
        goto label_fallthrough_0x1a4650;
    }
    ctx->pc = 0x1A4650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A4658u);
        ctx->pc = 0x1A4654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4650u;
        // 0x1a4654: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4650u, 0x1A4658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1a4650:
    ctx->pc = 0x1A4658u;
}
