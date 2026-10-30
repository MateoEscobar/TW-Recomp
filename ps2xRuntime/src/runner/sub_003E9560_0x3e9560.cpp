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

// Function: sub_003E9560
// Address: 0x3e9560 - 0x3e96a0
void sub_003E9560_0x3e9560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9560_0x3e9560");
#endif

    switch (ctx->pc) {
        case 0x3e9560u: goto label_3e9560;
        case 0x3e9564u: goto label_3e9564;
        case 0x3e9568u: goto label_3e9568;
        case 0x3e956cu: goto label_3e956c;
        case 0x3e9570u: goto label_3e9570;
        case 0x3e9574u: goto label_3e9574;
        case 0x3e9578u: goto label_3e9578;
        case 0x3e957cu: goto label_3e957c;
        case 0x3e9580u: goto label_3e9580;
        case 0x3e9584u: goto label_3e9584;
        case 0x3e9588u: goto label_3e9588;
        case 0x3e958cu: goto label_3e958c;
        case 0x3e9590u: goto label_3e9590;
        case 0x3e9594u: goto label_3e9594;
        case 0x3e9598u: goto label_3e9598;
        case 0x3e959cu: goto label_3e959c;
        case 0x3e95a0u: goto label_3e95a0;
        case 0x3e95a4u: goto label_3e95a4;
        case 0x3e95a8u: goto label_3e95a8;
        case 0x3e95acu: goto label_3e95ac;
        case 0x3e95b0u: goto label_3e95b0;
        case 0x3e95b4u: goto label_3e95b4;
        case 0x3e95b8u: goto label_3e95b8;
        case 0x3e95bcu: goto label_3e95bc;
        case 0x3e95c0u: goto label_3e95c0;
        case 0x3e95c4u: goto label_3e95c4;
        case 0x3e95c8u: goto label_3e95c8;
        case 0x3e95ccu: goto label_3e95cc;
        case 0x3e95d0u: goto label_3e95d0;
        case 0x3e95d4u: goto label_3e95d4;
        case 0x3e95d8u: goto label_3e95d8;
        case 0x3e95dcu: goto label_3e95dc;
        case 0x3e95e0u: goto label_3e95e0;
        case 0x3e95e4u: goto label_3e95e4;
        case 0x3e95e8u: goto label_3e95e8;
        case 0x3e95ecu: goto label_3e95ec;
        case 0x3e95f0u: goto label_3e95f0;
        case 0x3e95f4u: goto label_3e95f4;
        case 0x3e95f8u: goto label_3e95f8;
        case 0x3e95fcu: goto label_3e95fc;
        case 0x3e9600u: goto label_3e9600;
        case 0x3e9604u: goto label_3e9604;
        case 0x3e9608u: goto label_3e9608;
        case 0x3e960cu: goto label_3e960c;
        case 0x3e9610u: goto label_3e9610;
        case 0x3e9614u: goto label_3e9614;
        case 0x3e9618u: goto label_3e9618;
        case 0x3e961cu: goto label_3e961c;
        case 0x3e9620u: goto label_3e9620;
        case 0x3e9624u: goto label_3e9624;
        case 0x3e9628u: goto label_3e9628;
        case 0x3e962cu: goto label_3e962c;
        case 0x3e9630u: goto label_3e9630;
        case 0x3e9634u: goto label_3e9634;
        case 0x3e9638u: goto label_3e9638;
        case 0x3e963cu: goto label_3e963c;
        case 0x3e9640u: goto label_3e9640;
        case 0x3e9644u: goto label_3e9644;
        case 0x3e9648u: goto label_3e9648;
        case 0x3e964cu: goto label_3e964c;
        case 0x3e9650u: goto label_3e9650;
        case 0x3e9654u: goto label_3e9654;
        case 0x3e9658u: goto label_3e9658;
        case 0x3e965cu: goto label_3e965c;
        case 0x3e9660u: goto label_3e9660;
        case 0x3e9664u: goto label_3e9664;
        case 0x3e9668u: goto label_3e9668;
        case 0x3e966cu: goto label_3e966c;
        case 0x3e9670u: goto label_3e9670;
        case 0x3e9674u: goto label_3e9674;
        case 0x3e9678u: goto label_3e9678;
        case 0x3e967cu: goto label_3e967c;
        case 0x3e9680u: goto label_3e9680;
        case 0x3e9684u: goto label_3e9684;
        case 0x3e9688u: goto label_3e9688;
        case 0x3e968cu: goto label_3e968c;
        case 0x3e9690u: goto label_3e9690;
        case 0x3e9694u: goto label_3e9694;
        case 0x3e9698u: goto label_3e9698;
        case 0x3e969cu: goto label_3e969c;
        default: break;
    }

    ctx->pc = 0x3e9560u;

label_3e9560:
    // 0x3e9560: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3e9560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3e9564:
    // 0x3e9564: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3e9564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3e9568:
    // 0x3e9568: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3e9568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3e956c:
    // 0x3e956c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e956cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e9570:
    // 0x3e9570: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3e9570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3e9574:
    // 0x3e9574: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e9574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e9578:
    // 0x3e9578: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e9578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3e957c:
    // 0x3e957c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e957cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3e9580:
    // 0x3e9580: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e9580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e9584:
    // 0x3e9584: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e9584u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e9588:
    // 0x3e9588: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e9588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e958c:
    // 0x3e958c: 0x40f809  jalr        $v0
label_3e9590:
    if (ctx->pc == 0x3E9590u) {
        ctx->pc = 0x3E9590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E958Cu;
        // 0x3e9590: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9594u;
        goto label_3e9594;
    }
    ctx->pc = 0x3E958Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E9594u);
        ctx->pc = 0x3E9590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E958Cu;
        // 0x3e9590: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E958Cu, 0x3E9594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E9594u;
label_3e9594:
    // 0x3e9594: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3e9594u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e9598:
    // 0x3e9598: 0xc0ea14c  jal         func_3A8530
label_3e959c:
    if (ctx->pc == 0x3E959Cu) {
        ctx->pc = 0x3E959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9598u;
        // 0x3e959c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E95A0u;
        goto label_3e95a0;
    }
    ctx->pc = 0x3E9598u;
    SET_GPR_U32(ctx, 31, 0x3E95A0u);
    ctx->pc = 0x3E959Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9598u;
    // 0x3e959c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3E9598u, 0x3E95A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E95A0u;
label_3e95a0:
    // 0x3e95a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e95a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e95a4:
    // 0x3e95a4: 0xc0ea13a  jal         func_3A84E8
label_3e95a8:
    if (ctx->pc == 0x3E95A8u) {
        ctx->pc = 0x3E95A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E95A4u;
        // 0x3e95a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E95ACu;
        goto label_3e95ac;
    }
    ctx->pc = 0x3E95A4u;
    SET_GPR_U32(ctx, 31, 0x3E95ACu);
    ctx->pc = 0x3E95A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E95A4u;
    // 0x3e95a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3E95A4u, 0x3E95ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E95ACu;
label_3e95ac:
    // 0x3e95ac: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x3e95acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_3e95b0:
    // 0x3e95b0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3e95b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3e95b4:
    // 0x3e95b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e95b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e95b8:
    // 0x3e95b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e95b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e95bc:
    // 0x3e95bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e95bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e95c0:
    // 0x3e95c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3e95c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3e95c4:
    // 0x3e95c4: 0xc0ea12a  jal         func_3A84A8
label_3e95c8:
    if (ctx->pc == 0x3E95C8u) {
        ctx->pc = 0x3E95C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E95C4u;
        // 0x3e95c8: 0xe6600004  swc1        $f0, 0x4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E95CCu;
        goto label_3e95cc;
    }
    ctx->pc = 0x3E95C4u;
    SET_GPR_U32(ctx, 31, 0x3E95CCu);
    ctx->pc = 0x3E95C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E95C4u;
    // 0x3e95c8: 0xe6600004  swc1        $f0, 0x4($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E95C4u, 0x3E95CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E95CCu;
label_3e95cc:
    // 0x3e95cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3e95ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3e95d0:
    // 0x3e95d0: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x3e95d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
label_3e95d4:
    // 0x3e95d4: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x3e95d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_3e95d8:
    // 0x3e95d8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3e95d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3e95dc:
    // 0x3e95dc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3e95dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3e95e0:
    // 0x3e95e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e95e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e95e4:
    // 0x3e95e4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3e95e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3e95e8:
    // 0x3e95e8: 0xae240054  sw          $a0, 0x54($s1)
    ctx->pc = 0x3e95e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 4));
label_3e95ec:
    // 0x3e95ec: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3e95ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_3e95f0:
    // 0x3e95f0: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
label_3e95f4:
    if (ctx->pc == 0x3E95F4u) {
        ctx->pc = 0x3E95F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E95F0u;
        // 0x3e95f4: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E95F8u;
        goto label_3e95f8;
    }
    ctx->pc = 0x3E95F0u;
    {
        const bool branch_taken_0x3e95f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E95F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E95F0u;
        // 0x3e95f4: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e95f0) {
            ctx->pc = 0x3E9630u;
            goto label_3e9630;
        }
    }
    ctx->pc = 0x3E95F8u;
label_3e95f8:
    // 0x3e95f8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x3e95f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_3e95fc:
    // 0x3e95fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e95fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e9600:
    // 0x3e9600: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x3e9600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_3e9604:
    // 0x3e9604: 0xc0e896e  jal         func_3A25B8
label_3e9608:
    if (ctx->pc == 0x3E9608u) {
        ctx->pc = 0x3E9608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9604u;
        // 0x3e9608: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E960Cu;
        goto label_3e960c;
    }
    ctx->pc = 0x3E9604u;
    SET_GPR_U32(ctx, 31, 0x3E960Cu);
    ctx->pc = 0x3E9608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9604u;
    // 0x3e9608: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x3E9604u, 0x3E960Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E960Cu;
label_3e960c:
    // 0x3e960c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e960cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e9610:
    // 0x3e9610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e9610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e9614:
    // 0x3e9614: 0xc0e8604  jal         func_3A1810
label_3e9618:
    if (ctx->pc == 0x3E9618u) {
        ctx->pc = 0x3E9618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9614u;
        // 0x3e9618: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E961Cu;
        goto label_3e961c;
    }
    ctx->pc = 0x3E9614u;
    SET_GPR_U32(ctx, 31, 0x3E961Cu);
    ctx->pc = 0x3E9618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9614u;
    // 0x3e9618: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1810u, 0x3E9614u, 0x3E961Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E961Cu;
label_3e961c:
    // 0x3e961c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e961cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e9620:
    // 0x3e9620: 0xc0e858c  jal         func_3A1630
label_3e9624:
    if (ctx->pc == 0x3E9624u) {
        ctx->pc = 0x3E9624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9620u;
        // 0x3e9624: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9628u;
        goto label_3e9628;
    }
    ctx->pc = 0x3E9620u;
    SET_GPR_U32(ctx, 31, 0x3E9628u);
    ctx->pc = 0x3E9624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9620u;
    // 0x3e9624: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E9620u, 0x3E9628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9628u;
label_3e9628:
    // 0x3e9628: 0x10000005  b           . + 4 + (0x5 << 2)
label_3e962c:
    if (ctx->pc == 0x3E962Cu) {
        ctx->pc = 0x3E962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9628u;
        // 0x3e962c: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9630u;
        goto label_3e9630;
    }
    ctx->pc = 0x3E9628u;
    {
        const bool branch_taken_0x3e9628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9628u;
        // 0x3e962c: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9628) {
            ctx->pc = 0x3E9640u;
            goto label_3e9640;
        }
    }
    ctx->pc = 0x3E9630u;
label_3e9630:
    // 0x3e9630: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e9630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e9634:
    // 0x3e9634: 0xc0e858c  jal         func_3A1630
label_3e9638:
    if (ctx->pc == 0x3E9638u) {
        ctx->pc = 0x3E9638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9634u;
        // 0x3e9638: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E963Cu;
        goto label_3e963c;
    }
    ctx->pc = 0x3E9634u;
    SET_GPR_U32(ctx, 31, 0x3E963Cu);
    ctx->pc = 0x3E9638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9634u;
    // 0x3e9638: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E9634u, 0x3E963Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E963Cu;
label_3e963c:
    // 0x3e963c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e963cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e9640:
    // 0x3e9640: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3e9640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3e9644:
    // 0x3e9644: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e9644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e9648:
    // 0x3e9648: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3e9648u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3e964c:
    // 0x3e964c: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x3e964cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_3e9650:
    // 0x3e9650: 0x8c66007c  lw          $a2, 0x7C($v1)
    ctx->pc = 0x3e9650u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_3e9654:
    // 0x3e9654: 0xc0f809  jalr        $a2
label_3e9658:
    if (ctx->pc == 0x3E9658u) {
        ctx->pc = 0x3E9658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9654u;
        // 0x3e9658: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E965Cu;
        goto label_3e965c;
    }
    ctx->pc = 0x3E9654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3E965Cu);
        ctx->pc = 0x3E9658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9654u;
        // 0x3e9658: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9654u, 0x3E965Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E965Cu;
label_3e965c:
    // 0x3e965c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3e965cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_3e9660:
    // 0x3e9660: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3e9660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3e9664:
    // 0x3e9664: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x3e9664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_3e9668:
    // 0x3e9668: 0x34420029  ori         $v0, $v0, 0x29
    ctx->pc = 0x3e9668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41);
label_3e966c:
    // 0x3e966c: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x3e966cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
label_3e9670:
    // 0x3e9670: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x3e9670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_3e9674:
    // 0x3e9674: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x3e9674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
label_3e9678:
    // 0x3e9678: 0xae2000c0  sw          $zero, 0xC0($s1)
    ctx->pc = 0x3e9678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
label_3e967c:
    // 0x3e967c: 0xae2300b0  sw          $v1, 0xB0($s1)
    ctx->pc = 0x3e967cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
label_3e9680:
    // 0x3e9680: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x3e9680u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
label_3e9684:
    // 0x3e9684: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3e9684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e9688:
    // 0x3e9688: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3e9688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e968c:
    // 0x3e968c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3e968cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e9690:
    // 0x3e9690: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e9690u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e9694:
    // 0x3e9694: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e9694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3e9698:
    // 0x3e9698: 0x3e00008  jr          $ra
label_3e969c:
    if (ctx->pc == 0x3E969Cu) {
        ctx->pc = 0x3E969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9698u;
        // 0x3e969c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E96A0u;
        goto label_fallthrough_0x3e9698;
    }
    ctx->pc = 0x3E9698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9698u;
        // 0x3e969c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e9698:
    ctx->pc = 0x3E96A0u;
}
