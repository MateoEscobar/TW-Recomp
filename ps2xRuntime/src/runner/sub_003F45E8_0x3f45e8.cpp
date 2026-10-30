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

// Function: sub_003F45E8
// Address: 0x3f45e8 - 0x3f46c0
void sub_003F45E8_0x3f45e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F45E8_0x3f45e8");
#endif

    switch (ctx->pc) {
        case 0x3f45e8u: goto label_3f45e8;
        case 0x3f45ecu: goto label_3f45ec;
        case 0x3f45f0u: goto label_3f45f0;
        case 0x3f45f4u: goto label_3f45f4;
        case 0x3f45f8u: goto label_3f45f8;
        case 0x3f45fcu: goto label_3f45fc;
        case 0x3f4600u: goto label_3f4600;
        case 0x3f4604u: goto label_3f4604;
        case 0x3f4608u: goto label_3f4608;
        case 0x3f460cu: goto label_3f460c;
        case 0x3f4610u: goto label_3f4610;
        case 0x3f4614u: goto label_3f4614;
        case 0x3f4618u: goto label_3f4618;
        case 0x3f461cu: goto label_3f461c;
        case 0x3f4620u: goto label_3f4620;
        case 0x3f4624u: goto label_3f4624;
        case 0x3f4628u: goto label_3f4628;
        case 0x3f462cu: goto label_3f462c;
        case 0x3f4630u: goto label_3f4630;
        case 0x3f4634u: goto label_3f4634;
        case 0x3f4638u: goto label_3f4638;
        case 0x3f463cu: goto label_3f463c;
        case 0x3f4640u: goto label_3f4640;
        case 0x3f4644u: goto label_3f4644;
        case 0x3f4648u: goto label_3f4648;
        case 0x3f464cu: goto label_3f464c;
        case 0x3f4650u: goto label_3f4650;
        case 0x3f4654u: goto label_3f4654;
        case 0x3f4658u: goto label_3f4658;
        case 0x3f465cu: goto label_3f465c;
        case 0x3f4660u: goto label_3f4660;
        case 0x3f4664u: goto label_3f4664;
        case 0x3f4668u: goto label_3f4668;
        case 0x3f466cu: goto label_3f466c;
        case 0x3f4670u: goto label_3f4670;
        case 0x3f4674u: goto label_3f4674;
        case 0x3f4678u: goto label_3f4678;
        case 0x3f467cu: goto label_3f467c;
        case 0x3f4680u: goto label_3f4680;
        case 0x3f4684u: goto label_3f4684;
        case 0x3f4688u: goto label_3f4688;
        case 0x3f468cu: goto label_3f468c;
        case 0x3f4690u: goto label_3f4690;
        case 0x3f4694u: goto label_3f4694;
        case 0x3f4698u: goto label_3f4698;
        case 0x3f469cu: goto label_3f469c;
        case 0x3f46a0u: goto label_3f46a0;
        case 0x3f46a4u: goto label_3f46a4;
        case 0x3f46a8u: goto label_3f46a8;
        case 0x3f46acu: goto label_3f46ac;
        case 0x3f46b0u: goto label_3f46b0;
        case 0x3f46b4u: goto label_3f46b4;
        case 0x3f46b8u: goto label_3f46b8;
        case 0x3f46bcu: goto label_3f46bc;
        default: break;
    }

    ctx->pc = 0x3f45e8u;

label_3f45e8:
    // 0x3f45e8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3f45e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3f45ec:
    // 0x3f45ec: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3f45ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3f45f0:
    // 0x3f45f0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3f45f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3f45f4:
    // 0x3f45f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3f45f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f45f8:
    // 0x3f45f8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3f45f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3f45fc:
    // 0x3f45fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f45fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f4600:
    // 0x3f4600: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3f4600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3f4604:
    // 0x3f4604: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3f4604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_3f4608:
    // 0x3f4608: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f4608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3f460c:
    // 0x3f460c: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x3f460cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3f4610:
    // 0x3f4610: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f4610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f4614:
    // 0x3f4614: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f4614u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f4618:
    // 0x3f4618: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f4618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f461c:
    // 0x3f461c: 0x40f809  jalr        $v0
label_3f4620:
    if (ctx->pc == 0x3F4620u) {
        ctx->pc = 0x3F4620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F461Cu;
        // 0x3f4620: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4624u;
        goto label_3f4624;
    }
    ctx->pc = 0x3F461Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F4624u);
        ctx->pc = 0x3F4620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F461Cu;
        // 0x3f4620: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F461Cu, 0x3F4624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F4624u;
label_3f4624:
    // 0x3f4624: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f4624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f4628:
    // 0x3f4628: 0xc0ea146  jal         func_3A8518
label_3f462c:
    if (ctx->pc == 0x3F462Cu) {
        ctx->pc = 0x3F462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4628u;
        // 0x3f462c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4630u;
        goto label_3f4630;
    }
    ctx->pc = 0x3F4628u;
    SET_GPR_U32(ctx, 31, 0x3F4630u);
    ctx->pc = 0x3F462Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4628u;
    // 0x3f462c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F4628u, 0x3F4630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4630u;
label_3f4630:
    // 0x3f4630: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3f4630u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f4634:
    // 0x3f4634: 0xc0ea13a  jal         func_3A84E8
label_3f4638:
    if (ctx->pc == 0x3F4638u) {
        ctx->pc = 0x3F4638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4634u;
        // 0x3f4638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F463Cu;
        goto label_3f463c;
    }
    ctx->pc = 0x3F4634u;
    SET_GPR_U32(ctx, 31, 0x3F463Cu);
    ctx->pc = 0x3F4638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4634u;
    // 0x3f4638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3F4634u, 0x3F463Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F463Cu;
label_3f463c:
    // 0x3f463c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3f463cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3f4640:
    // 0x3f4640: 0xc0ea146  jal         func_3A8518
label_3f4644:
    if (ctx->pc == 0x3F4644u) {
        ctx->pc = 0x3F4644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4640u;
        // 0x3f4644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4648u;
        goto label_3f4648;
    }
    ctx->pc = 0x3F4640u;
    SET_GPR_U32(ctx, 31, 0x3F4648u);
    ctx->pc = 0x3F4644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4640u;
    // 0x3f4644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F4640u, 0x3F4648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4648u;
label_3f4648:
    // 0x3f4648: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f4648u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f464c:
    // 0x3f464c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3f464cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f4650:
    // 0x3f4650: 0xc0ea12a  jal         func_3A84A8
label_3f4654:
    if (ctx->pc == 0x3F4654u) {
        ctx->pc = 0x3F4654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4650u;
        // 0x3f4654: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4658u;
        goto label_3f4658;
    }
    ctx->pc = 0x3F4650u;
    SET_GPR_U32(ctx, 31, 0x3F4658u);
    ctx->pc = 0x3F4654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4650u;
    // 0x3f4654: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F4650u, 0x3F4658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4658u;
label_3f4658:
    // 0x3f4658: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3f4658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f465c:
    // 0x3f465c: 0xc0ea12a  jal         func_3A84A8
label_3f4660:
    if (ctx->pc == 0x3F4660u) {
        ctx->pc = 0x3F4660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F465Cu;
        // 0x3f4660: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4664u;
        goto label_3f4664;
    }
    ctx->pc = 0x3F465Cu;
    SET_GPR_U32(ctx, 31, 0x3F4664u);
    ctx->pc = 0x3F4660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F465Cu;
    // 0x3f4660: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F465Cu, 0x3F4664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4664u;
label_3f4664:
    // 0x3f4664: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3f4664u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f4668:
    // 0x3f4668: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3f4668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3f466c:
    // 0x3f466c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3f466cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3f4670:
    // 0x3f4670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f4670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f4674:
    // 0x3f4674: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x3f4674u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_3f4678:
    // 0x3f4678: 0xc0e858c  jal         func_3A1630
label_3f467c:
    if (ctx->pc == 0x3F467Cu) {
        ctx->pc = 0x3F467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4678u;
        // 0x3f467c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4680u;
        goto label_3f4680;
    }
    ctx->pc = 0x3F4678u;
    SET_GPR_U32(ctx, 31, 0x3F4680u);
    ctx->pc = 0x3F467Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4678u;
    // 0x3f467c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F4678u, 0x3F4680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4680u;
label_3f4680:
    // 0x3f4680: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3f4680u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f4684:
    // 0x3f4684: 0xae540018  sw          $s4, 0x18($s2)
    ctx->pc = 0x3f4684u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 20));
label_3f4688:
    // 0x3f4688: 0xae530014  sw          $s3, 0x14($s2)
    ctx->pc = 0x3f4688u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 19));
label_3f468c:
    // 0x3f468c: 0xe654001c  swc1        $f20, 0x1C($s2)
    ctx->pc = 0x3f468cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_3f4690:
    // 0x3f4690: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x3f4690u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_3f4694:
    // 0x3f4694: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x3f4694u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_3f4698:
    // 0x3f4698: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3f4698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f469c:
    // 0x3f469c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3f469cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f46a0:
    // 0x3f46a0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3f46a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f46a4:
    // 0x3f46a4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3f46a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f46a8:
    // 0x3f46a8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3f46a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f46ac:
    // 0x3f46ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f46acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3f46b0:
    // 0x3f46b0: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x3f46b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3f46b4:
    // 0x3f46b4: 0x3e00008  jr          $ra
label_3f46b8:
    if (ctx->pc == 0x3F46B8u) {
        ctx->pc = 0x3F46B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F46B4u;
        // 0x3f46b8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F46BCu;
        goto label_3f46bc;
    }
    ctx->pc = 0x3F46B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F46B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F46B4u;
        // 0x3f46b8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F46B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F46BCu;
label_3f46bc:
    // 0x3f46bc: 0x0  nop
    ctx->pc = 0x3f46bcu;
    // NOP
    ctx->pc = 0x3f46c0u;
}
