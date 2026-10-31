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

// Function: sub_003E0538
// Address: 0x3e0538 - 0x3e0648
void sub_003E0538_0x3e0538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0538_0x3e0538");
#endif

    switch (ctx->pc) {
        case 0x3e0538u: goto label_3e0538;
        case 0x3e053cu: goto label_3e053c;
        case 0x3e0540u: goto label_3e0540;
        case 0x3e0544u: goto label_3e0544;
        case 0x3e0548u: goto label_3e0548;
        case 0x3e054cu: goto label_3e054c;
        case 0x3e0550u: goto label_3e0550;
        case 0x3e0554u: goto label_3e0554;
        case 0x3e0558u: goto label_3e0558;
        case 0x3e055cu: goto label_3e055c;
        case 0x3e0560u: goto label_3e0560;
        case 0x3e0564u: goto label_3e0564;
        case 0x3e0568u: goto label_3e0568;
        case 0x3e056cu: goto label_3e056c;
        case 0x3e0570u: goto label_3e0570;
        case 0x3e0574u: goto label_3e0574;
        case 0x3e0578u: goto label_3e0578;
        case 0x3e057cu: goto label_3e057c;
        case 0x3e0580u: goto label_3e0580;
        case 0x3e0584u: goto label_3e0584;
        case 0x3e0588u: goto label_3e0588;
        case 0x3e058cu: goto label_3e058c;
        case 0x3e0590u: goto label_3e0590;
        case 0x3e0594u: goto label_3e0594;
        case 0x3e0598u: goto label_3e0598;
        case 0x3e059cu: goto label_3e059c;
        case 0x3e05a0u: goto label_3e05a0;
        case 0x3e05a4u: goto label_3e05a4;
        case 0x3e05a8u: goto label_3e05a8;
        case 0x3e05acu: goto label_3e05ac;
        case 0x3e05b0u: goto label_3e05b0;
        case 0x3e05b4u: goto label_3e05b4;
        case 0x3e05b8u: goto label_3e05b8;
        case 0x3e05bcu: goto label_3e05bc;
        case 0x3e05c0u: goto label_3e05c0;
        case 0x3e05c4u: goto label_3e05c4;
        case 0x3e05c8u: goto label_3e05c8;
        case 0x3e05ccu: goto label_3e05cc;
        case 0x3e05d0u: goto label_3e05d0;
        case 0x3e05d4u: goto label_3e05d4;
        case 0x3e05d8u: goto label_3e05d8;
        case 0x3e05dcu: goto label_3e05dc;
        case 0x3e05e0u: goto label_3e05e0;
        case 0x3e05e4u: goto label_3e05e4;
        case 0x3e05e8u: goto label_3e05e8;
        case 0x3e05ecu: goto label_3e05ec;
        case 0x3e05f0u: goto label_3e05f0;
        case 0x3e05f4u: goto label_3e05f4;
        case 0x3e05f8u: goto label_3e05f8;
        case 0x3e05fcu: goto label_3e05fc;
        case 0x3e0600u: goto label_3e0600;
        case 0x3e0604u: goto label_3e0604;
        case 0x3e0608u: goto label_3e0608;
        case 0x3e060cu: goto label_3e060c;
        case 0x3e0610u: goto label_3e0610;
        case 0x3e0614u: goto label_3e0614;
        case 0x3e0618u: goto label_3e0618;
        case 0x3e061cu: goto label_3e061c;
        case 0x3e0620u: goto label_3e0620;
        case 0x3e0624u: goto label_3e0624;
        case 0x3e0628u: goto label_3e0628;
        case 0x3e062cu: goto label_3e062c;
        case 0x3e0630u: goto label_3e0630;
        case 0x3e0634u: goto label_3e0634;
        case 0x3e0638u: goto label_3e0638;
        case 0x3e063cu: goto label_3e063c;
        case 0x3e0640u: goto label_3e0640;
        case 0x3e0644u: goto label_3e0644;
        default: break;
    }

    ctx->pc = 0x3e0538u;

label_3e0538:
    // 0x3e0538: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3e0538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3e053c:
    // 0x3e053c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3e053cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3e0540:
    // 0x3e0540: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3e0540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3e0544:
    // 0x3e0544: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e0544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e0548:
    // 0x3e0548: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3e0548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3e054c:
    // 0x3e054c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e054cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e0550:
    // 0x3e0550: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3e0550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3e0554:
    // 0x3e0554: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x3e0554u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3e0558:
    // 0x3e0558: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3e0558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3e055c:
    // 0x3e055c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e055cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e0560:
    // 0x3e0560: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e0560u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e0564:
    // 0x3e0564: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e0564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e0568:
    // 0x3e0568: 0x40f809  jalr        $v0
label_3e056c:
    if (ctx->pc == 0x3E056Cu) {
        ctx->pc = 0x3E056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0568u;
        // 0x3e056c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0570u;
        goto label_3e0570;
    }
    ctx->pc = 0x3E0568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E0570u);
        ctx->pc = 0x3E056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0568u;
        // 0x3e056c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0568u, 0x3E0570u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E0570u;
label_3e0570:
    // 0x3e0570: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3e0570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3e0574:
    // 0x3e0574: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3e0574u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0578:
    // 0x3e0578: 0xc0e858c  jal         func_3A1630
label_3e057c:
    if (ctx->pc == 0x3E057Cu) {
        ctx->pc = 0x3E057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0578u;
        // 0x3e057c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0580u;
        goto label_3e0580;
    }
    ctx->pc = 0x3E0578u;
    SET_GPR_U32(ctx, 31, 0x3E0580u);
    ctx->pc = 0x3E057Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0578u;
    // 0x3e057c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E0578u, 0x3E0580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0580u;
label_3e0580:
    // 0x3e0580: 0xc0ea14c  jal         func_3A8530
label_3e0584:
    if (ctx->pc == 0x3E0584u) {
        ctx->pc = 0x3E0584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0580u;
        // 0x3e0584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0588u;
        goto label_3e0588;
    }
    ctx->pc = 0x3E0580u;
    SET_GPR_U32(ctx, 31, 0x3E0588u);
    ctx->pc = 0x3E0584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0580u;
    // 0x3e0584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3E0580u, 0x3E0588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0588u;
label_3e0588:
    // 0x3e0588: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e0588u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e058c:
    // 0x3e058c: 0xc0ea13a  jal         func_3A84E8
label_3e0590:
    if (ctx->pc == 0x3E0590u) {
        ctx->pc = 0x3E0590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E058Cu;
        // 0x3e0590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0594u;
        goto label_3e0594;
    }
    ctx->pc = 0x3E058Cu;
    SET_GPR_U32(ctx, 31, 0x3E0594u);
    ctx->pc = 0x3E0590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E058Cu;
    // 0x3e0590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3E058Cu, 0x3E0594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0594u;
label_3e0594:
    // 0x3e0594: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3e0594u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3e0598:
    // 0x3e0598: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e0598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e059c:
    // 0x3e059c: 0xc0ea12a  jal         func_3A84A8
label_3e05a0:
    if (ctx->pc == 0x3E05A0u) {
        ctx->pc = 0x3E05A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E059Cu;
        // 0x3e05a0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E05A4u;
        goto label_3e05a4;
    }
    ctx->pc = 0x3E059Cu;
    SET_GPR_U32(ctx, 31, 0x3E05A4u);
    ctx->pc = 0x3E05A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E059Cu;
    // 0x3e05a0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E059Cu, 0x3E05A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E05A4u;
label_3e05a4:
    // 0x3e05a4: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3e05a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e05a8:
    // 0x3e05a8: 0x24020088  addiu       $v0, $zero, 0x88
    ctx->pc = 0x3e05a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_3e05ac:
    // 0x3e05ac: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3e05acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3e05b0:
    // 0x3e05b0: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
label_3e05b4:
    if (ctx->pc == 0x3E05B4u) {
        ctx->pc = 0x3E05B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E05B0u;
        // 0x3e05b4: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E05B8u;
        goto label_3e05b8;
    }
    ctx->pc = 0x3E05B0u;
    {
        const bool branch_taken_0x3e05b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E05B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E05B0u;
        // 0x3e05b4: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e05b0) {
            ctx->pc = 0x3E0614u;
            goto label_3e0614;
        }
    }
    ctx->pc = 0x3E05B8u;
label_3e05b8:
    // 0x3e05b8: 0x24020098  addiu       $v0, $zero, 0x98
    ctx->pc = 0x3e05b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
label_3e05bc:
    // 0x3e05bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e05bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e05c0:
    // 0x3e05c0: 0xc0e896e  jal         func_3A25B8
label_3e05c4:
    if (ctx->pc == 0x3E05C4u) {
        ctx->pc = 0x3E05C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E05C0u;
        // 0x3e05c4: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E05C8u;
        goto label_3e05c8;
    }
    ctx->pc = 0x3E05C0u;
    SET_GPR_U32(ctx, 31, 0x3E05C8u);
    ctx->pc = 0x3E05C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E05C0u;
    // 0x3e05c4: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x3E05C0u, 0x3E05C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E05C8u;
label_3e05c8:
    // 0x3e05c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e05c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e05cc:
    // 0x3e05cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e05ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e05d0:
    // 0x3e05d0: 0xc0e8604  jal         func_3A1810
label_3e05d4:
    if (ctx->pc == 0x3E05D4u) {
        ctx->pc = 0x3E05D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E05D0u;
        // 0x3e05d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E05D8u;
        goto label_3e05d8;
    }
    ctx->pc = 0x3E05D0u;
    SET_GPR_U32(ctx, 31, 0x3E05D8u);
    ctx->pc = 0x3E05D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E05D0u;
    // 0x3e05d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1810u, 0x3E05D0u, 0x3E05D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E05D8u;
label_3e05d8:
    // 0x3e05d8: 0x3c01c040  lui         $at, 0xC040
    ctx->pc = 0x3e05d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49216 << 16));
label_3e05dc:
    // 0x3e05dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3e05dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3e05e0:
    // 0x3e05e0: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x3e05e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e05e4:
    // 0x3e05e4: 0x3c01c080  lui         $at, 0xC080
    ctx->pc = 0x3e05e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49280 << 16));
label_3e05e8:
    // 0x3e05e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e05e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e05ec:
    // 0x3e05ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3e05ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3e05f0:
    // 0x3e05f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e05f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e05f4:
    // 0x3e05f4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3e05f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_3e05f8:
    // 0x3e05f8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3e05f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3e05fc:
    // 0x3e05fc: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3e05fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3e0600:
    // 0x3e0600: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x3e0600u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3e0604:
    // 0x3e0604: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e0604u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e0608:
    // 0x3e0608: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3e0608u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3e060c:
    // 0x3e060c: 0x10000002  b           . + 4 + (0x2 << 2)
label_3e0610:
    if (ctx->pc == 0x3E0610u) {
        ctx->pc = 0x3E0610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E060Cu;
        // 0x3e0610: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0614u;
        goto label_3e0614;
    }
    ctx->pc = 0x3E060Cu;
    {
        const bool branch_taken_0x3e060c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E060Cu;
        // 0x3e0610: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e060c) {
            ctx->pc = 0x3E0618u;
            goto label_3e0618;
        }
    }
    ctx->pc = 0x3E0614u;
label_3e0614:
    // 0x3e0614: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x3e0614u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_3e0618:
    // 0x3e0618: 0xe6340090  swc1        $f20, 0x90($s1)
    ctx->pc = 0x3e0618u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
label_3e061c:
    // 0x3e061c: 0xae20008c  sw          $zero, 0x8C($s1)
    ctx->pc = 0x3e061cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
label_3e0620:
    // 0x3e0620: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3e0620u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_3e0624:
    // 0x3e0624: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3e0624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3e0628:
    // 0x3e0628: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3e0628u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e062c:
    // 0x3e062c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3e062cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e0630:
    // 0x3e0630: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3e0630u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e0634:
    // 0x3e0634: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3e0634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3e0638:
    // 0x3e0638: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x3e0638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3e063c:
    // 0x3e063c: 0x3e00008  jr          $ra
label_3e0640:
    if (ctx->pc == 0x3E0640u) {
        ctx->pc = 0x3E0640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E063Cu;
        // 0x3e0640: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0644u;
        goto label_3e0644;
    }
    ctx->pc = 0x3E063Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E063Cu;
        // 0x3e0640: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E063Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E0644u;
label_3e0644:
    // 0x3e0644: 0x0  nop
    ctx->pc = 0x3e0644u;
    // NOP
    ctx->pc = 0x3e0648u;
}
