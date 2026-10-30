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

// Function: sub_003C04E0
// Address: 0x3c04e0 - 0x3c06b0
void sub_003C04E0_0x3c04e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C04E0_0x3c04e0");
#endif

    switch (ctx->pc) {
        case 0x3c04e0u: goto label_3c04e0;
        case 0x3c04e4u: goto label_3c04e4;
        case 0x3c04e8u: goto label_3c04e8;
        case 0x3c04ecu: goto label_3c04ec;
        case 0x3c04f0u: goto label_3c04f0;
        case 0x3c04f4u: goto label_3c04f4;
        case 0x3c04f8u: goto label_3c04f8;
        case 0x3c04fcu: goto label_3c04fc;
        case 0x3c0500u: goto label_3c0500;
        case 0x3c0504u: goto label_3c0504;
        case 0x3c0508u: goto label_3c0508;
        case 0x3c050cu: goto label_3c050c;
        case 0x3c0510u: goto label_3c0510;
        case 0x3c0514u: goto label_3c0514;
        case 0x3c0518u: goto label_3c0518;
        case 0x3c051cu: goto label_3c051c;
        case 0x3c0520u: goto label_3c0520;
        case 0x3c0524u: goto label_3c0524;
        case 0x3c0528u: goto label_3c0528;
        case 0x3c052cu: goto label_3c052c;
        case 0x3c0530u: goto label_3c0530;
        case 0x3c0534u: goto label_3c0534;
        case 0x3c0538u: goto label_3c0538;
        case 0x3c053cu: goto label_3c053c;
        case 0x3c0540u: goto label_3c0540;
        case 0x3c0544u: goto label_3c0544;
        case 0x3c0548u: goto label_3c0548;
        case 0x3c054cu: goto label_3c054c;
        case 0x3c0550u: goto label_3c0550;
        case 0x3c0554u: goto label_3c0554;
        case 0x3c0558u: goto label_3c0558;
        case 0x3c055cu: goto label_3c055c;
        case 0x3c0560u: goto label_3c0560;
        case 0x3c0564u: goto label_3c0564;
        case 0x3c0568u: goto label_3c0568;
        case 0x3c056cu: goto label_3c056c;
        case 0x3c0570u: goto label_3c0570;
        case 0x3c0574u: goto label_3c0574;
        case 0x3c0578u: goto label_3c0578;
        case 0x3c057cu: goto label_3c057c;
        case 0x3c0580u: goto label_3c0580;
        case 0x3c0584u: goto label_3c0584;
        case 0x3c0588u: goto label_3c0588;
        case 0x3c058cu: goto label_3c058c;
        case 0x3c0590u: goto label_3c0590;
        case 0x3c0594u: goto label_3c0594;
        case 0x3c0598u: goto label_3c0598;
        case 0x3c059cu: goto label_3c059c;
        case 0x3c05a0u: goto label_3c05a0;
        case 0x3c05a4u: goto label_3c05a4;
        case 0x3c05a8u: goto label_3c05a8;
        case 0x3c05acu: goto label_3c05ac;
        case 0x3c05b0u: goto label_3c05b0;
        case 0x3c05b4u: goto label_3c05b4;
        case 0x3c05b8u: goto label_3c05b8;
        case 0x3c05bcu: goto label_3c05bc;
        case 0x3c05c0u: goto label_3c05c0;
        case 0x3c05c4u: goto label_3c05c4;
        case 0x3c05c8u: goto label_3c05c8;
        case 0x3c05ccu: goto label_3c05cc;
        case 0x3c05d0u: goto label_3c05d0;
        case 0x3c05d4u: goto label_3c05d4;
        case 0x3c05d8u: goto label_3c05d8;
        case 0x3c05dcu: goto label_3c05dc;
        case 0x3c05e0u: goto label_3c05e0;
        case 0x3c05e4u: goto label_3c05e4;
        case 0x3c05e8u: goto label_3c05e8;
        case 0x3c05ecu: goto label_3c05ec;
        case 0x3c05f0u: goto label_3c05f0;
        case 0x3c05f4u: goto label_3c05f4;
        case 0x3c05f8u: goto label_3c05f8;
        case 0x3c05fcu: goto label_3c05fc;
        case 0x3c0600u: goto label_3c0600;
        case 0x3c0604u: goto label_3c0604;
        case 0x3c0608u: goto label_3c0608;
        case 0x3c060cu: goto label_3c060c;
        case 0x3c0610u: goto label_3c0610;
        case 0x3c0614u: goto label_3c0614;
        case 0x3c0618u: goto label_3c0618;
        case 0x3c061cu: goto label_3c061c;
        case 0x3c0620u: goto label_3c0620;
        case 0x3c0624u: goto label_3c0624;
        case 0x3c0628u: goto label_3c0628;
        case 0x3c062cu: goto label_3c062c;
        case 0x3c0630u: goto label_3c0630;
        case 0x3c0634u: goto label_3c0634;
        case 0x3c0638u: goto label_3c0638;
        case 0x3c063cu: goto label_3c063c;
        case 0x3c0640u: goto label_3c0640;
        case 0x3c0644u: goto label_3c0644;
        case 0x3c0648u: goto label_3c0648;
        case 0x3c064cu: goto label_3c064c;
        case 0x3c0650u: goto label_3c0650;
        case 0x3c0654u: goto label_3c0654;
        case 0x3c0658u: goto label_3c0658;
        case 0x3c065cu: goto label_3c065c;
        case 0x3c0660u: goto label_3c0660;
        case 0x3c0664u: goto label_3c0664;
        case 0x3c0668u: goto label_3c0668;
        case 0x3c066cu: goto label_3c066c;
        case 0x3c0670u: goto label_3c0670;
        case 0x3c0674u: goto label_3c0674;
        case 0x3c0678u: goto label_3c0678;
        case 0x3c067cu: goto label_3c067c;
        case 0x3c0680u: goto label_3c0680;
        case 0x3c0684u: goto label_3c0684;
        case 0x3c0688u: goto label_3c0688;
        case 0x3c068cu: goto label_3c068c;
        case 0x3c0690u: goto label_3c0690;
        case 0x3c0694u: goto label_3c0694;
        case 0x3c0698u: goto label_3c0698;
        case 0x3c069cu: goto label_3c069c;
        case 0x3c06a0u: goto label_3c06a0;
        case 0x3c06a4u: goto label_3c06a4;
        case 0x3c06a8u: goto label_3c06a8;
        case 0x3c06acu: goto label_3c06ac;
        default: break;
    }

    ctx->pc = 0x3c04e0u;

label_3c04e0:
    // 0x3c04e0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3c04e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_3c04e4:
    // 0x3c04e4: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x3c04e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_3c04e8:
    // 0x3c04e8: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x3c04e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_3c04ec:
    // 0x3c04ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c04ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c04f0:
    // 0x3c04f0: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x3c04f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_3c04f4:
    // 0x3c04f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c04f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c04f8:
    // 0x3c04f8: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x3c04f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_3c04fc:
    // 0x3c04fc: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x3c04fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_3c0500:
    // 0x3c0500: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3c0500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3c0504:
    // 0x3c0504: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c0504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c0508:
    // 0x3c0508: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c0508u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c050c:
    // 0x3c050c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c050cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c0510:
    // 0x3c0510: 0x40f809  jalr        $v0
label_3c0514:
    if (ctx->pc == 0x3C0514u) {
        ctx->pc = 0x3C0514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0510u;
        // 0x3c0514: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0518u;
        goto label_3c0518;
    }
    ctx->pc = 0x3C0510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C0518u);
        ctx->pc = 0x3C0514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0510u;
        // 0x3c0514: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0510u, 0x3C0518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C0518u;
label_3c0518:
    // 0x3c0518: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3c0518u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c051c:
    // 0x3c051c: 0xc0ea14c  jal         func_3A8530
label_3c0520:
    if (ctx->pc == 0x3C0520u) {
        ctx->pc = 0x3C0520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C051Cu;
        // 0x3c0520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0524u;
        goto label_3c0524;
    }
    ctx->pc = 0x3C051Cu;
    SET_GPR_U32(ctx, 31, 0x3C0524u);
    ctx->pc = 0x3C0520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C051Cu;
    // 0x3c0520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3C051Cu, 0x3C0524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0524u;
label_3c0524:
    // 0x3c0524: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c0524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c0528:
    // 0x3c0528: 0xc0ea12a  jal         func_3A84A8
label_3c052c:
    if (ctx->pc == 0x3C052Cu) {
        ctx->pc = 0x3C052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0528u;
        // 0x3c052c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0530u;
        goto label_3c0530;
    }
    ctx->pc = 0x3C0528u;
    SET_GPR_U32(ctx, 31, 0x3C0530u);
    ctx->pc = 0x3C052Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0528u;
    // 0x3c052c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C0528u, 0x3C0530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0530u;
label_3c0530:
    // 0x3c0530: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c0530u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c0534:
    // 0x3c0534: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c0534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c0538:
    // 0x3c0538: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c0538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c053c:
    // 0x3c053c: 0xc0ea12a  jal         func_3A84A8
label_3c0540:
    if (ctx->pc == 0x3C0540u) {
        ctx->pc = 0x3C0540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C053Cu;
        // 0x3c0540: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0544u;
        goto label_3c0544;
    }
    ctx->pc = 0x3C053Cu;
    SET_GPR_U32(ctx, 31, 0x3C0544u);
    ctx->pc = 0x3C0540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C053Cu;
    // 0x3c0540: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C053Cu, 0x3C0544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0544u;
label_3c0544:
    // 0x3c0544: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c0544u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c0548:
    // 0x3c0548: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c0548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c054c:
    // 0x3c054c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3c054cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3c0550:
    // 0x3c0550: 0xc0e858c  jal         func_3A1630
label_3c0554:
    if (ctx->pc == 0x3C0554u) {
        ctx->pc = 0x3C0554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0550u;
        // 0x3c0554: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0558u;
        goto label_3c0558;
    }
    ctx->pc = 0x3C0550u;
    SET_GPR_U32(ctx, 31, 0x3C0558u);
    ctx->pc = 0x3C0554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0550u;
    // 0x3c0554: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C0550u, 0x3C0558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0558u;
label_3c0558:
    // 0x3c0558: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x3c0558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_3c055c:
    // 0x3c055c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c055cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c0560:
    // 0x3c0560: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x3c0560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
label_3c0564:
    // 0x3c0564: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c0564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c0568:
    // 0x3c0568: 0xc0e9132  jal         func_3A44C8
label_3c056c:
    if (ctx->pc == 0x3C056Cu) {
        ctx->pc = 0x3C056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0568u;
        // 0x3c056c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0570u;
        goto label_3c0570;
    }
    ctx->pc = 0x3C0568u;
    SET_GPR_U32(ctx, 31, 0x3C0570u);
    ctx->pc = 0x3C056Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0568u;
    // 0x3c056c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3C0568u, 0x3C0570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0570u;
label_3c0570:
    // 0x3c0570: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3c0570u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c0574:
    // 0x3c0574: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x3c0574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3c0578:
    // 0x3c0578: 0x7ba60000  lq          $a2, 0x0($sp)
    ctx->pc = 0x3c0578u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c057c:
    // 0x3c057c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c057cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c0580:
    // 0x3c0580: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x3c0580u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
label_3c0584:
    // 0x3c0584: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c0584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c0588:
    // 0x3c0588: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x3c0588u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_3c058c:
    // 0x3c058c: 0x7e260010  sq          $a2, 0x10($s1)
    ctx->pc = 0x3c058cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 6));
label_3c0590:
    // 0x3c0590: 0xa2800010  sb          $zero, 0x10($s4)
    ctx->pc = 0x3c0590u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 16), (uint8_t)GPR_U32(ctx, 0));
label_3c0594:
    // 0x3c0594: 0xa2800011  sb          $zero, 0x11($s4)
    ctx->pc = 0x3c0594u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 17), (uint8_t)GPR_U32(ctx, 0));
label_3c0598:
    // 0x3c0598: 0xc0e8dee  jal         func_3A37B8
label_3c059c:
    if (ctx->pc == 0x3C059Cu) {
        ctx->pc = 0x3C059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0598u;
        // 0x3c059c: 0xae870014  sw          $a3, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C05A0u;
        goto label_3c05a0;
    }
    ctx->pc = 0x3C0598u;
    SET_GPR_U32(ctx, 31, 0x3C05A0u);
    ctx->pc = 0x3C059Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0598u;
    // 0x3c059c: 0xae870014  sw          $a3, 0x14($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3C0598u, 0x3C05A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C05A0u;
label_3c05a0:
    // 0x3c05a0: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x3c05a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_3c05a4:
    // 0x3c05a4: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x3c05a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3c05a8:
    // 0x3c05a8: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x3c05a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_3c05ac:
    // 0x3c05ac: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3c05acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3c05b0:
    // 0x3c05b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3c05b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3c05b4:
    // 0x3c05b4: 0x3c01be61  lui         $at, 0xBE61
    ctx->pc = 0x3c05b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48737 << 16));
label_3c05b8:
    // 0x3c05b8: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x3c05b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_3c05bc:
    // 0x3c05bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c05bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c05c0:
    // 0x3c05c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c05c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c05c4:
    // 0x3c05c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c05c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c05c8:
    // 0x3c05c8: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3c05c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_3c05cc:
    // 0x3c05cc: 0xe6620004  swc1        $f2, 0x4($s3)
    ctx->pc = 0x3c05ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_3c05d0:
    // 0x3c05d0: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x3c05d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_3c05d4:
    // 0x3c05d4: 0xe661000c  swc1        $f1, 0xC($s3)
    ctx->pc = 0x3c05d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3c05d8:
    // 0x3c05d8: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3c05d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c05dc:
    // 0x3c05dc: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x3c05dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3c05e0:
    // 0x3c05e0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3c05e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3c05e4:
    // 0x3c05e4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3c05e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3c05e8:
    // 0x3c05e8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3c05e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3c05ec:
    // 0x3c05ec: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3c05ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c05f0:
    // 0x3c05f0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3c05f0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3c05f4:
    // 0x3c05f4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3c05f4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3c05f8:
    // 0x3c05f8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3c05f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c05fc:
    // 0x3c05fc: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3c05fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c0600:
    // 0x3c0600: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3c0600u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3c0604:
    // 0x3c0604: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3c0604u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c0608:
    // 0x3c0608: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3c0608u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3c060c:
    // 0x3c060c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3c060cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3c0610:
    // 0x3c0610: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3c0610u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c0614:
    // 0x3c0614: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3c0614u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3c0618:
    // 0x3c0618: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3c0618u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c061c:
    // 0x3c061c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3c061cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c0620:
    // 0x3c0620: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3c0620u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c0624:
    // 0x3c0624: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3c0624u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3c0628:
    // 0x3c0628: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x3c0628u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3c062c:
    // 0x3c062c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3c062cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3c0630:
    // 0x3c0630: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3c0630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3c0634:
    // 0x3c0634: 0x261029d0  addiu       $s0, $s0, 0x29D0
    ctx->pc = 0x3c0634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10704));
label_3c0638:
    // 0x3c0638: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3c0638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3c063c:
    // 0x3c063c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c063cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c0640:
    // 0x3c0640: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3c0640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_3c0644:
    // 0x3c0644: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c0644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c0648:
    // 0x3c0648: 0xc0e90ca  jal         func_3A4328
label_3c064c:
    if (ctx->pc == 0x3C064Cu) {
        ctx->pc = 0x3C064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0648u;
        // 0x3c064c: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0650u;
        goto label_3c0650;
    }
    ctx->pc = 0x3C0648u;
    SET_GPR_U32(ctx, 31, 0x3C0650u);
    ctx->pc = 0x3C064Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0648u;
    // 0x3c064c: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3C0648u, 0x3C0650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0650u;
label_3c0650:
    // 0x3c0650: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3c0650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c0654:
    // 0x3c0654: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c0654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c0658:
    // 0x3c0658: 0xc136b18  jal         func_4DAC60
label_3c065c:
    if (ctx->pc == 0x3C065Cu) {
        ctx->pc = 0x3C065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0658u;
        // 0x3c065c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0660u;
        goto label_3c0660;
    }
    ctx->pc = 0x3C0658u;
    SET_GPR_U32(ctx, 31, 0x3C0660u);
    ctx->pc = 0x3C065Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0658u;
    // 0x3c065c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C0658u, 0x3C0660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0660u;
label_3c0660:
    // 0x3c0660: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3c0660u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c0664:
    // 0x3c0664: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x3c0664u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c0668:
    // 0x3c0668: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c0668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c066c:
    // 0x3c066c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c066cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c0670:
    // 0x3c0670: 0xc0e911e  jal         func_3A4478
label_3c0674:
    if (ctx->pc == 0x3C0674u) {
        ctx->pc = 0x3C0674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0670u;
        // 0x3c0674: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0678u;
        goto label_3c0678;
    }
    ctx->pc = 0x3C0670u;
    SET_GPR_U32(ctx, 31, 0x3C0678u);
    ctx->pc = 0x3C0674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0670u;
    // 0x3c0674: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3C0670u, 0x3C0678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0678u;
label_3c0678:
    // 0x3c0678: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c0678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c067c:
    // 0x3c067c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c067cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c0680:
    // 0x3c0680: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3c0680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c0684:
    // 0x3c0684: 0xc0e94fc  jal         func_3A53F0
label_3c0688:
    if (ctx->pc == 0x3C0688u) {
        ctx->pc = 0x3C0688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0684u;
        // 0x3c0688: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C068Cu;
        goto label_3c068c;
    }
    ctx->pc = 0x3C0684u;
    SET_GPR_U32(ctx, 31, 0x3C068Cu);
    ctx->pc = 0x3C0688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0684u;
    // 0x3c0688: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3C0684u, 0x3C068Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C068Cu;
label_3c068c:
    // 0x3c068c: 0xae82001c  sw          $v0, 0x1C($s4)
    ctx->pc = 0x3c068cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 2));
label_3c0690:
    // 0x3c0690: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x3c0690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3c0694:
    // 0x3c0694: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x3c0694u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3c0698:
    // 0x3c0698: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x3c0698u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3c069c:
    // 0x3c069c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x3c069cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3c06a0:
    // 0x3c06a0: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x3c06a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3c06a4:
    // 0x3c06a4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3c06a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3c06a8:
    // 0x3c06a8: 0x3e00008  jr          $ra
label_3c06ac:
    if (ctx->pc == 0x3C06ACu) {
        ctx->pc = 0x3C06ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C06A8u;
        // 0x3c06ac: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C06B0u;
        goto label_fallthrough_0x3c06a8;
    }
    ctx->pc = 0x3C06A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C06ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C06A8u;
        // 0x3c06ac: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C06A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c06a8:
    ctx->pc = 0x3C06B0u;
}
