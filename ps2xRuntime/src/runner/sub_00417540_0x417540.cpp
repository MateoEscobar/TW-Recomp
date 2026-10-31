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

// Function: sub_00417540
// Address: 0x417540 - 0x417670
void sub_00417540_0x417540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00417540_0x417540");
#endif

    switch (ctx->pc) {
        case 0x417590u: goto label_417590;
        case 0x417598u: goto label_417598;
        case 0x4175a4u: goto label_4175a4;
        case 0x4175b0u: goto label_4175b0;
        case 0x4175d8u: goto label_4175d8;
        case 0x41761cu: goto label_41761c;
        case 0x417628u: goto label_417628;
        default: break;
    }

    ctx->pc = 0x417540u;

    // 0x417540: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x417540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x417544: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x417544u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x417548: 0x460c6502  mul.s       $f20, $f12, $f12
    ctx->pc = 0x417548u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x41754c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x41754cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x417550: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x417550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x417554: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x417554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417558: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x417558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x41755c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x41755cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417560: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x417560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x417564: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x417564u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417568: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x417568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x41756c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x41756cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x417570: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x417570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x417574: 0x24150025  addiu       $s5, $zero, 0x25
    ctx->pc = 0x417574u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x417578: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x417578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x41757c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x41757cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417580: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x417580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x417584: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x417584u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417588: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x417588u;
    {
        const bool branch_taken_0x417588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417588u;
        // 0x41758c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417588) {
            ctx->pc = 0x417620u;
            goto label_417620;
        }
    }
    ctx->pc = 0x417590u;
label_417590:
    // 0x417590: 0xc105774  jal         func_415DD0
    ctx->pc = 0x417590u;
    SET_GPR_U32(ctx, 31, 0x417598u);
    ctx->pc = 0x417594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417590u;
    // 0x417594: 0x26130001  addiu       $s3, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DD0u, 0x417590u, 0x417598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417598u;
label_417598:
    // 0x417598: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x417598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41759c: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x41759Cu;
    SET_GPR_U32(ctx, 31, 0x4175A4u);
    ctx->pc = 0x4175A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41759Cu;
    // 0x4175a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x41759Cu, 0x4175A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4175A4u;
label_4175a4:
    // 0x4175a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4175a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4175a8: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x4175A8u;
    SET_GPR_U32(ctx, 31, 0x4175B0u);
    ctx->pc = 0x4175ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4175A8u;
    // 0x4175ac: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x4175A8u, 0x4175B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4175B0u;
label_4175b0:
    // 0x4175b0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x4175b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4175b4: 0x0  nop
    ctx->pc = 0x4175b4u;
    // NOP
    // 0x4175b8: 0x45030019  bc1tl       . + 4 + (0x19 << 2)
    ctx->pc = 0x4175B8u;
    {
        const bool branch_taken_0x4175b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4175b8) {
            ctx->pc = 0x4175BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4175B8u;
            // 0x4175bc: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x417620u;
            goto label_417620;
        }
    }
    ctx->pc = 0x4175C0u;
    // 0x4175c0: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x4175C0u;
    {
        const bool branch_taken_0x4175c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4175C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4175C0u;
        // 0x4175c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4175c0) {
            ctx->pc = 0x41760Cu;
            goto label_41760c;
        }
    }
    ctx->pc = 0x4175C8u;
    // 0x4175c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4175c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4175cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4175ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4175d0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x4175d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4175d4: 0x0  nop
    ctx->pc = 0x4175d4u;
    // NOP
label_4175d8:
    // 0x4175d8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4175d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x4175dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4175dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4175e0: 0x1075000a  beq         $v1, $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x4175E0u;
    {
        const bool branch_taken_0x4175e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x4175E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4175E0u;
        // 0x4175e4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4175e0) {
            ctx->pc = 0x41760Cu;
            goto label_41760c;
        }
    }
    ctx->pc = 0x4175E8u;
    // 0x4175e8: 0x960200d0  lhu         $v0, 0xD0($s0)
    ctx->pc = 0x4175e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x4175ec: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4175ECu;
    {
        const bool branch_taken_0x4175ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4175F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4175ECu;
        // 0x4175f0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4175ec) {
            ctx->pc = 0x4175D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4175d8;
        }
    }
    ctx->pc = 0x4175F4u;
    // 0x4175f4: 0x52340005  beql        $s1, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x4175F4u;
    {
        const bool branch_taken_0x4175f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        if (branch_taken_0x4175f4) {
            ctx->pc = 0x4175F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4175F4u;
            // 0x4175f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41760Cu;
            goto label_41760c;
        }
    }
    ctx->pc = 0x4175FCu;
    // 0x4175fc: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x4175fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x417600: 0x1622fff5  bne         $s1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x417600u;
    {
        const bool branch_taken_0x417600 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x417604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417600u;
        // 0x417604: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417600) {
            ctx->pc = 0x4175D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4175d8;
        }
    }
    ctx->pc = 0x417608u;
    // 0x417608: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x417608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41760c:
    // 0x41760c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x41760Cu;
    {
        const bool branch_taken_0x41760c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x417610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41760Cu;
        // 0x417610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41760c) {
            ctx->pc = 0x41761Cu;
            goto label_41761c;
        }
    }
    ctx->pc = 0x417614u;
    // 0x417614: 0xc105772  jal         func_415DC8
    ctx->pc = 0x417614u;
    SET_GPR_U32(ctx, 31, 0x41761Cu);
    ctx->pc = 0x417618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417614u;
    // 0x417618: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DC8u, 0x417614u, 0x41761Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41761Cu;
label_41761c:
    // 0x41761c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x41761cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_417620:
    // 0x417620: 0xc10574c  jal         func_415D30
    ctx->pc = 0x417620u;
    SET_GPR_U32(ctx, 31, 0x417628u);
    ctx->pc = 0x415D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415D30u, 0x417620u, 0x417628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417628u;
label_417628:
    // 0x417628: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x417628u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x41762c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x41762Cu;
    {
        const bool branch_taken_0x41762c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x417630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41762Cu;
        // 0x417630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41762c) {
            ctx->pc = 0x417590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_417590;
        }
    }
    ctx->pc = 0x417634u;
    // 0x417634: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x417634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x417638: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x417638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x41763c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x41763cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x417640: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x417640u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x417644: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x417644u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x417648: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x417648u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41764c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x41764cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x417650: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x417650u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x417654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x417654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x417658: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x417658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x41765c: 0x3e00008  jr          $ra
    ctx->pc = 0x41765Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x417660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41765Cu;
        // 0x417660: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41765Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x417664u;
    // 0x417664: 0x0  nop
    ctx->pc = 0x417664u;
    // NOP
    // 0x417668: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x417668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x41766c: 0x0  nop
    ctx->pc = 0x41766cu;
    // NOP
    ctx->pc = 0x417670u;
}
