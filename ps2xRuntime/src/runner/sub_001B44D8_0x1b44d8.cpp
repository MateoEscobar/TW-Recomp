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

// Function: sub_001B44D8
// Address: 0x1b44d8 - 0x1b4690
void sub_001B44D8_0x1b44d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B44D8_0x1b44d8");
#endif

    switch (ctx->pc) {
        case 0x1b44d8u: goto label_1b44d8;
        case 0x1b44dcu: goto label_1b44dc;
        case 0x1b44e0u: goto label_1b44e0;
        case 0x1b44e4u: goto label_1b44e4;
        case 0x1b44e8u: goto label_1b44e8;
        case 0x1b44ecu: goto label_1b44ec;
        case 0x1b44f0u: goto label_1b44f0;
        case 0x1b44f4u: goto label_1b44f4;
        case 0x1b44f8u: goto label_1b44f8;
        case 0x1b44fcu: goto label_1b44fc;
        case 0x1b4500u: goto label_1b4500;
        case 0x1b4504u: goto label_1b4504;
        case 0x1b4508u: goto label_1b4508;
        case 0x1b450cu: goto label_1b450c;
        case 0x1b4510u: goto label_1b4510;
        case 0x1b4514u: goto label_1b4514;
        case 0x1b4518u: goto label_1b4518;
        case 0x1b451cu: goto label_1b451c;
        case 0x1b4520u: goto label_1b4520;
        case 0x1b4524u: goto label_1b4524;
        case 0x1b4528u: goto label_1b4528;
        case 0x1b452cu: goto label_1b452c;
        case 0x1b4530u: goto label_1b4530;
        case 0x1b4534u: goto label_1b4534;
        case 0x1b4538u: goto label_1b4538;
        case 0x1b453cu: goto label_1b453c;
        case 0x1b4540u: goto label_1b4540;
        case 0x1b4544u: goto label_1b4544;
        case 0x1b4548u: goto label_1b4548;
        case 0x1b454cu: goto label_1b454c;
        case 0x1b4550u: goto label_1b4550;
        case 0x1b4554u: goto label_1b4554;
        case 0x1b4558u: goto label_1b4558;
        case 0x1b455cu: goto label_1b455c;
        case 0x1b4560u: goto label_1b4560;
        case 0x1b4564u: goto label_1b4564;
        case 0x1b4568u: goto label_1b4568;
        case 0x1b456cu: goto label_1b456c;
        case 0x1b4570u: goto label_1b4570;
        case 0x1b4574u: goto label_1b4574;
        case 0x1b4578u: goto label_1b4578;
        case 0x1b457cu: goto label_1b457c;
        case 0x1b4580u: goto label_1b4580;
        case 0x1b4584u: goto label_1b4584;
        case 0x1b4588u: goto label_1b4588;
        case 0x1b458cu: goto label_1b458c;
        case 0x1b4590u: goto label_1b4590;
        case 0x1b4594u: goto label_1b4594;
        case 0x1b4598u: goto label_1b4598;
        case 0x1b459cu: goto label_1b459c;
        case 0x1b45a0u: goto label_1b45a0;
        case 0x1b45a4u: goto label_1b45a4;
        case 0x1b45a8u: goto label_1b45a8;
        case 0x1b45acu: goto label_1b45ac;
        case 0x1b45b0u: goto label_1b45b0;
        case 0x1b45b4u: goto label_1b45b4;
        case 0x1b45b8u: goto label_1b45b8;
        case 0x1b45bcu: goto label_1b45bc;
        case 0x1b45c0u: goto label_1b45c0;
        case 0x1b45c4u: goto label_1b45c4;
        case 0x1b45c8u: goto label_1b45c8;
        case 0x1b45ccu: goto label_1b45cc;
        case 0x1b45d0u: goto label_1b45d0;
        case 0x1b45d4u: goto label_1b45d4;
        case 0x1b45d8u: goto label_1b45d8;
        case 0x1b45dcu: goto label_1b45dc;
        case 0x1b45e0u: goto label_1b45e0;
        case 0x1b45e4u: goto label_1b45e4;
        case 0x1b45e8u: goto label_1b45e8;
        case 0x1b45ecu: goto label_1b45ec;
        case 0x1b45f0u: goto label_1b45f0;
        case 0x1b45f4u: goto label_1b45f4;
        case 0x1b45f8u: goto label_1b45f8;
        case 0x1b45fcu: goto label_1b45fc;
        case 0x1b4600u: goto label_1b4600;
        case 0x1b4604u: goto label_1b4604;
        case 0x1b4608u: goto label_1b4608;
        case 0x1b460cu: goto label_1b460c;
        case 0x1b4610u: goto label_1b4610;
        case 0x1b4614u: goto label_1b4614;
        case 0x1b4618u: goto label_1b4618;
        case 0x1b461cu: goto label_1b461c;
        case 0x1b4620u: goto label_1b4620;
        case 0x1b4624u: goto label_1b4624;
        case 0x1b4628u: goto label_1b4628;
        case 0x1b462cu: goto label_1b462c;
        case 0x1b4630u: goto label_1b4630;
        case 0x1b4634u: goto label_1b4634;
        case 0x1b4638u: goto label_1b4638;
        case 0x1b463cu: goto label_1b463c;
        case 0x1b4640u: goto label_1b4640;
        case 0x1b4644u: goto label_1b4644;
        case 0x1b4648u: goto label_1b4648;
        case 0x1b464cu: goto label_1b464c;
        case 0x1b4650u: goto label_1b4650;
        case 0x1b4654u: goto label_1b4654;
        case 0x1b4658u: goto label_1b4658;
        case 0x1b465cu: goto label_1b465c;
        case 0x1b4660u: goto label_1b4660;
        case 0x1b4664u: goto label_1b4664;
        case 0x1b4668u: goto label_1b4668;
        case 0x1b466cu: goto label_1b466c;
        case 0x1b4670u: goto label_1b4670;
        case 0x1b4674u: goto label_1b4674;
        case 0x1b4678u: goto label_1b4678;
        case 0x1b467cu: goto label_1b467c;
        case 0x1b4680u: goto label_1b4680;
        case 0x1b4684u: goto label_1b4684;
        case 0x1b4688u: goto label_1b4688;
        case 0x1b468cu: goto label_1b468c;
        default: break;
    }

    ctx->pc = 0x1b44d8u;

label_1b44d8:
    // 0x1b44d8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1b44d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1b44dc:
    // 0x1b44dc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1b44dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_1b44e0:
    // 0x1b44e0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1b44e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_1b44e4:
    // 0x1b44e4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1b44e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1b44e8:
    // 0x1b44e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b44e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1b44ec:
    // 0x1b44ec: 0x10800044  beqz        $a0, . + 4 + (0x44 << 2)
label_1b44f0:
    if (ctx->pc == 0x1B44F0u) {
        ctx->pc = 0x1B44F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44ECu;
        // 0x1b44f0: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B44F4u;
        goto label_1b44f4;
    }
    ctx->pc = 0x1B44ECu;
    {
        const bool branch_taken_0x1b44ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B44F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44ECu;
        // 0x1b44f0: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b44ec) {
            ctx->pc = 0x1B4600u;
            goto label_1b4600;
        }
    }
    ctx->pc = 0x1B44F4u;
label_1b44f4:
    // 0x1b44f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b44f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1b44f8:
    // 0x1b44f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b44f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b44fc:
    // 0x1b44fc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b44fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b4500:
    // 0x1b4500: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b4504:
    // 0x1b4504: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b4504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b4508:
    // 0x1b4508: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1b4508u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1b450c:
    // 0x1b450c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1b450cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1b4510:
    // 0x1b4510: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b4510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1b4514:
    // 0x1b4514: 0x8c6a27e4  lw          $t2, 0x27E4($v1)
    ctx->pc = 0x1b4514u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_1b4518:
    // 0x1b4518: 0x24520840  addiu       $s2, $v0, 0x840
    ctx->pc = 0x1b4518u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_1b451c:
    // 0x1b451c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1b451cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1b4520:
    // 0x1b4520: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b4520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1b4524:
    // 0x1b4524: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1b4524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1b4528:
    // 0x1b4528: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1b4528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1b452c:
    // 0x1b452c: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x1b452cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_1b4530:
    // 0x1b4530: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x1b4530u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1b4534:
    // 0x1b4534: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1b4534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1b4538:
    // 0x1b4538: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1b4538u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1b453c:
    // 0x1b453c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1b453cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1b4540:
    // 0x1b4540: 0x24a54728  addiu       $a1, $a1, 0x4728
    ctx->pc = 0x1b4540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18216));
label_1b4544:
    // 0x1b4544: 0x25084738  addiu       $t0, $t0, 0x4738
    ctx->pc = 0x1b4544u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 18232));
label_1b4548:
    // 0x1b4548: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1b4548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b454c:
    // 0x1b454c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1b454cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1b4550:
    // 0x1b4550: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1b4550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1b4554:
    // 0x1b4554: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1b4554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1b4558:
    // 0x1b4558: 0x24090152  addiu       $t1, $zero, 0x152
    ctx->pc = 0x1b4558u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 338));
label_1b455c:
    // 0x1b455c: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1b455cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_1b4560:
    // 0x1b4560: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1b4560u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4564:
    // 0x1b4564: 0x40f809  jalr        $v0
label_1b4568:
    if (ctx->pc == 0x1B4568u) {
        ctx->pc = 0x1B4568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4564u;
        // 0x1b4568: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B456Cu;
        goto label_1b456c;
    }
    ctx->pc = 0x1B4564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B456Cu);
        ctx->pc = 0x1B4568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4564u;
        // 0x1b4568: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4564u, 0x1B456Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B456Cu;
label_1b456c:
    // 0x1b456c: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x1b456cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b4570:
    // 0x1b4570: 0x11a00005  beqz        $t5, . + 4 + (0x5 << 2)
label_1b4574:
    if (ctx->pc == 0x1B4574u) {
        ctx->pc = 0x1B4574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4570u;
        // 0x1b4574: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4578u;
        goto label_1b4578;
    }
    ctx->pc = 0x1B4570u;
    {
        const bool branch_taken_0x1b4570 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4570u;
        // 0x1b4574: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4570) {
            ctx->pc = 0x1B4588u;
            goto label_1b4588;
        }
    }
    ctx->pc = 0x1B4578u;
label_1b4578:
    // 0x1b4578: 0xc0686fe  jal         func_1A1BF8
label_1b457c:
    if (ctx->pc == 0x1B457Cu) {
        ctx->pc = 0x1B457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4578u;
        // 0x1b457c: 0x1a0202d  daddu       $a0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4580u;
        goto label_1b4580;
    }
    ctx->pc = 0x1B4578u;
    SET_GPR_U32(ctx, 31, 0x1B4580u);
    ctx->pc = 0x1B457Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4578u;
    // 0x1b457c: 0x1a0202d  daddu       $a0, $t5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1B4578u, 0x1B4580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4580u;
label_1b4580:
    // 0x1b4580: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x1b4580u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b4584:
    // 0x1b4584: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1b4584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1b4588:
    // 0x1b4588: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1b4588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1b458c:
    // 0x1b458c: 0xa3a30030  sb          $v1, 0x30($sp)
    ctx->pc = 0x1b458cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 3));
label_1b4590:
    // 0x1b4590: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x1b4590u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_1b4594:
    // 0x1b4594: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x1b4594u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
label_1b4598:
    // 0x1b4598: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b4598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b459c:
    // 0x1b459c: 0xae2d111c  sw          $t5, 0x111C($s1)
    ctx->pc = 0x1b459cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4380), GPR_U32(ctx, 13));
label_1b45a0:
    // 0x1b45a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b45a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1b45a4:
    // 0x1b45a4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1b45a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_1b45a8:
    // 0x1b45a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b45a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b45ac:
    // 0x1b45ac: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1b45acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_1b45b0:
    // 0x1b45b0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1b45b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b45b4:
    // 0x1b45b4: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1b45b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_1b45b8:
    // 0x1b45b8: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1b45b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_1b45bc:
    // 0x1b45bc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b45bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b45c0:
    // 0x1b45c0: 0x3c09018e  lui         $t1, 0x18E
    ctx->pc = 0x1b45c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)398 << 16));
label_1b45c4:
    // 0x1b45c4: 0x8dac0000  lw          $t4, 0x0($t5)
    ctx->pc = 0x1b45c4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_1b45c8:
    // 0x1b45c8: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1b45c8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_1b45cc:
    // 0x1b45cc: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1b45ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b45d0:
    // 0x1b45d0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1b45d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b45d4:
    // 0x1b45d4: 0x85840068  lh          $a0, 0x68($t4)
    ctx->pc = 0x1b45d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 104)));
label_1b45d8:
    // 0x1b45d8: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1b45d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1b45dc:
    // 0x1b45dc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b45dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b45e0:
    // 0x1b45e0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1b45e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1b45e4:
    // 0x1b45e4: 0x8d82006c  lw          $v0, 0x6C($t4)
    ctx->pc = 0x1b45e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 108)));
label_1b45e8:
    // 0x1b45e8: 0x40f809  jalr        $v0
label_1b45ec:
    if (ctx->pc == 0x1B45ECu) {
        ctx->pc = 0x1B45ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B45E8u;
        // 0x1b45ec: 0x1a42021  addu        $a0, $t5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B45F0u;
        goto label_1b45f0;
    }
    ctx->pc = 0x1B45E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B45F0u);
        ctx->pc = 0x1B45ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B45E8u;
        // 0x1b45ec: 0x1a42021  addu        $a0, $t5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B45E8u, 0x1B45F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B45F0u;
label_1b45f0:
    // 0x1b45f0: 0xc06c7ce  jal         func_1B1F38
label_1b45f4:
    if (ctx->pc == 0x1B45F4u) {
        ctx->pc = 0x1B45F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B45F0u;
        // 0x1b45f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B45F8u;
        goto label_1b45f8;
    }
    ctx->pc = 0x1B45F0u;
    SET_GPR_U32(ctx, 31, 0x1B45F8u);
    ctx->pc = 0x1B45F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B45F0u;
    // 0x1b45f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1F38u, 0x1B45F0u, 0x1B45F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B45F8u;
label_1b45f8:
    // 0x1b45f8: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1b45fc:
    if (ctx->pc == 0x1B45FCu) {
        ctx->pc = 0x1B45FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B45F8u;
        // 0x1b45fc: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4600u;
        goto label_1b4600;
    }
    ctx->pc = 0x1B45F8u;
    {
        const bool branch_taken_0x1b45f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B45FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B45F8u;
        // 0x1b45fc: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b45f8) {
            ctx->pc = 0x1B4674u;
            goto label_1b4674;
        }
    }
    ctx->pc = 0x1B4600u;
label_1b4600:
    // 0x1b4600: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1b4600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1b4604:
    // 0x1b4604: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b4604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1b4608:
    // 0x1b4608: 0x24710840  addiu       $s1, $v1, 0x840
    ctx->pc = 0x1b4608u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 2112));
label_1b460c:
    // 0x1b460c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1b460cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1b4610:
    // 0x1b4610: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x1b4610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1b4614:
    // 0x1b4614: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1b4614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_1b4618:
    // 0x1b4618: 0x8e05111c  lw          $a1, 0x111C($s0)
    ctx->pc = 0x1b4618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4380)));
label_1b461c:
    // 0x1b461c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b461cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b4620:
    // 0x1b4620: 0x8ca200c4  lw          $v0, 0xC4($a1)
    ctx->pc = 0x1b4620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
label_1b4624:
    // 0x1b4624: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_1b4628:
    if (ctx->pc == 0x1B4628u) {
        ctx->pc = 0x1B4628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4624u;
        // 0x1b4628: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B462Cu;
        goto label_1b462c;
    }
    ctx->pc = 0x1B4624u;
    {
        const bool branch_taken_0x1b4624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B4628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4624u;
        // 0x1b4628: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4624) {
            ctx->pc = 0x1B4634u;
            goto label_1b4634;
        }
    }
    ctx->pc = 0x1B462Cu;
label_1b462c:
    // 0x1b462c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1b462cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1b4630:
    // 0x1b4630: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x1b4630u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b4634:
    // 0x1b4634: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_1b4638:
    if (ctx->pc == 0x1B4638u) {
        ctx->pc = 0x1B4638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4634u;
        // 0x1b4638: 0x8e04111c  lw          $a0, 0x111C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B463Cu;
        goto label_1b463c;
    }
    ctx->pc = 0x1B4634u;
    {
        const bool branch_taken_0x1b4634 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4634) {
            ctx->pc = 0x1B4638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4634u;
            // 0x1b4638: 0x8e04111c  lw          $a0, 0x111C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4654u;
            goto label_1b4654;
        }
    }
    ctx->pc = 0x1B463Cu;
label_1b463c:
    // 0x1b463c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1b463cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1b4640:
    // 0x1b4640: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1b4640u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1b4644:
    // 0x1b4644: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1b4644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1b4648:
    // 0x1b4648: 0x60f809  jalr        $v1
label_1b464c:
    if (ctx->pc == 0x1B464Cu) {
        ctx->pc = 0x1B464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4648u;
        // 0x1b464c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4650u;
        goto label_1b4650;
    }
    ctx->pc = 0x1B4648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B4650u);
        ctx->pc = 0x1B464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4648u;
        // 0x1b464c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4648u, 0x1B4650u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B4650u;
label_1b4650:
    // 0x1b4650: 0x8e04111c  lw          $a0, 0x111C($s0)
    ctx->pc = 0x1b4650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4380)));
label_1b4654:
    // 0x1b4654: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1b4654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1b4658:
    // 0x1b4658: 0x24a54738  addiu       $a1, $a1, 0x4738
    ctx->pc = 0x1b4658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18232));
label_1b465c:
    // 0x1b465c: 0xc138e72  jal         func_4E39C8
label_1b4660:
    if (ctx->pc == 0x1B4660u) {
        ctx->pc = 0x1B4660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B465Cu;
        // 0x1b4660: 0x24060159  addiu       $a2, $zero, 0x159 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 345));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4664u;
        goto label_1b4664;
    }
    ctx->pc = 0x1B465Cu;
    SET_GPR_U32(ctx, 31, 0x1B4664u);
    ctx->pc = 0x1B4660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B465Cu;
    // 0x1b4660: 0x24060159  addiu       $a2, $zero, 0x159 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 345));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E39C8u, 0x1B465Cu, 0x1B4664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4664u;
label_1b4664:
    // 0x1b4664: 0xae00111c  sw          $zero, 0x111C($s0)
    ctx->pc = 0x1b4664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4380), GPR_U32(ctx, 0));
label_1b4668:
    // 0x1b4668: 0xc06c83e  jal         func_1B20F8
label_1b466c:
    if (ctx->pc == 0x1B466Cu) {
        ctx->pc = 0x1B466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4668u;
        // 0x1b466c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4670u;
        goto label_1b4670;
    }
    ctx->pc = 0x1B4668u;
    SET_GPR_U32(ctx, 31, 0x1B4670u);
    ctx->pc = 0x1B466Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4668u;
    // 0x1b466c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B20F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B20F8u, 0x1B4668u, 0x1B4670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4670u;
label_1b4670:
    // 0x1b4670: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1b4670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b4674:
    // 0x1b4674: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1b4674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b4678:
    // 0x1b4678: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1b4678u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b467c:
    // 0x1b467c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b467cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b4680:
    // 0x1b4680: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1b4680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b4684:
    // 0x1b4684: 0x3e00008  jr          $ra
label_1b4688:
    if (ctx->pc == 0x1B4688u) {
        ctx->pc = 0x1B4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4684u;
        // 0x1b4688: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B468Cu;
        goto label_1b468c;
    }
    ctx->pc = 0x1B4684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4684u;
        // 0x1b4688: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B468Cu;
label_1b468c:
    // 0x1b468c: 0x0  nop
    ctx->pc = 0x1b468cu;
    // NOP
    ctx->pc = 0x1b4690u;
}
