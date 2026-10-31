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

// Function: sub_004C4610
// Address: 0x4c4610 - 0x4c4898
void sub_004C4610_0x4c4610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C4610_0x4c4610");
#endif

    switch (ctx->pc) {
        case 0x4c4634u: goto label_4c4634;
        case 0x4c473cu: goto label_4c473c;
        default: break;
    }

    ctx->pc = 0x4c4610u;

    // 0x4c4610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c4610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c4614: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c4614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c4618: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c4618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c461c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c461cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4620: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c4620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c4624: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4c4624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4628: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4c4628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4c462c: 0xc1334f4  jal         func_4CD3D0
    ctx->pc = 0x4C462Cu;
    SET_GPR_U32(ctx, 31, 0x4C4634u);
    ctx->pc = 0x4C4630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C462Cu;
    // 0x4c4630: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD3D0u, 0x4C462Cu, 0x4C4634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4634u;
label_4c4634:
    // 0x4c4634: 0x8e03027c  lw          $v1, 0x27C($s0)
    ctx->pc = 0x4c4634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 636)));
    // 0x4c4638: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4C4638u;
    {
        const bool branch_taken_0x4c4638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4638u;
        // 0x4c463c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4638) {
            ctx->pc = 0x4C4654u;
            goto label_4c4654;
        }
    }
    ctx->pc = 0x4C4640u;
    // 0x4c4640: 0x8e0202b4  lw          $v0, 0x2B4($s0)
    ctx->pc = 0x4c4640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x4c4644: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x4c4644u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4c4648: 0xae00027c  sw          $zero, 0x27C($s0)
    ctx->pc = 0x4c4648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 0));
    // 0x4c464c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4c464cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4c4650: 0xae0202b4  sw          $v0, 0x2B4($s0)
    ctx->pc = 0x4c4650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 2));
label_4c4654:
    // 0x4c4654: 0x8e02028c  lw          $v0, 0x28C($s0)
    ctx->pc = 0x4c4654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
    // 0x4c4658: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4C4658u;
    {
        const bool branch_taken_0x4c4658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4658u;
        // 0x4c465c: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4658) {
            ctx->pc = 0x4C46A8u;
            goto label_4c46a8;
        }
    }
    ctx->pc = 0x4C4660u;
    // 0x4c4660: 0x8e050290  lw          $a1, 0x290($s0)
    ctx->pc = 0x4c4660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
    // 0x4c4664: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x4c4664u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4c4668: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4C4668u;
    {
        const bool branch_taken_0x4c4668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4668u;
        // 0x4c466c: 0xae00028c  sw          $zero, 0x28C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4668) {
            ctx->pc = 0x4C468Cu;
            goto label_4c468c;
        }
    }
    ctx->pc = 0x4C4670u;
    // 0x4c4670: 0x8e020294  lw          $v0, 0x294($s0)
    ctx->pc = 0x4c4670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 660)));
    // 0x4c4674: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x4c4674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4c4678: 0xae050298  sw          $a1, 0x298($s0)
    ctx->pc = 0x4c4678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 5));
    // 0x4c467c: 0xae02029c  sw          $v0, 0x29C($s0)
    ctx->pc = 0x4c467cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 2));
    // 0x4c4680: 0xae040290  sw          $a0, 0x290($s0)
    ctx->pc = 0x4c4680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 4));
    // 0x4c4684: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4C4684u;
    {
        const bool branch_taken_0x4c4684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4684u;
        // 0x4c4688: 0xae030294  sw          $v1, 0x294($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4684) {
            ctx->pc = 0x4C46A8u;
            goto label_4c46a8;
        }
    }
    ctx->pc = 0x4C468Cu;
label_4c468c:
    // 0x4c468c: 0x8e020298  lw          $v0, 0x298($s0)
    ctx->pc = 0x4c468cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
    // 0x4c4690: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4c4690u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4c4694: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C4694u;
    {
        const bool branch_taken_0x4c4694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c4694) {
            ctx->pc = 0x4C46A8u;
            goto label_4c46a8;
        }
    }
    ctx->pc = 0x4C469Cu;
    // 0x4c469c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4c469cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4c46a0: 0xae040298  sw          $a0, 0x298($s0)
    ctx->pc = 0x4c46a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 4));
    // 0x4c46a4: 0xae02029c  sw          $v0, 0x29C($s0)
    ctx->pc = 0x4c46a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 2));
label_4c46a8:
    // 0x4c46a8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C46A8u;
    {
        const bool branch_taken_0x4c46a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C46ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C46A8u;
        // 0x4c46ac: 0x8e0302c4  lw          $v1, 0x2C4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c46a8) {
            ctx->pc = 0x4C46BCu;
            goto label_4c46bc;
        }
    }
    ctx->pc = 0x4C46B0u;
    // 0x4c46b0: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x4c46b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4c46b4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C46B4u;
    {
        const bool branch_taken_0x4c46b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c46b4) {
            ctx->pc = 0x4C46B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C46B4u;
            // 0x4c46b8: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C46C4u;
            goto label_4c46c4;
        }
    }
    ctx->pc = 0x4C46BCu;
label_4c46bc:
    // 0x4c46bc: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x4c46bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4c46c0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x4c46c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4c46c4:
    // 0x4c46c4: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x4c46c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x4c46c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C46C8u;
    {
        const bool branch_taken_0x4c46c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C46CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C46C8u;
        // 0x4c46cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c46c8) {
            ctx->pc = 0x4C46D8u;
            goto label_4c46d8;
        }
    }
    ctx->pc = 0x4C46D0u;
    // 0x4c46d0: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x4c46d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4c46d4: 0x51880a  movz        $s1, $v0, $s1
    ctx->pc = 0x4c46d4u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_4c46d8:
    // 0x4c46d8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4c46d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4c46dc: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x4c46dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x4c46e0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4c46e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4c46e4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4c46e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4c46e8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x4c46e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x4c46ec: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x4c46ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4c46f0: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x4c46f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x4c46f4: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x4c46f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x4c46f8: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x4c46f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x4c46fc: 0x8e030158  lw          $v1, 0x158($s0)
    ctx->pc = 0x4c46fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x4c4700: 0xae430030  sw          $v1, 0x30($s2)
    ctx->pc = 0x4c4700u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
    // 0x4c4704: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4c4704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4c4708: 0x8e0602c0  lw          $a2, 0x2C0($s0)
    ctx->pc = 0x4c4708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
    // 0x4c470c: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x4c470cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x4c4710: 0x8e0502bc  lw          $a1, 0x2BC($s0)
    ctx->pc = 0x4c4710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
    // 0x4c4714: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c4714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4c4718: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c4718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4c471c: 0x2260018  mult        $zero, $s1, $a2
    ctx->pc = 0x4c471cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x4c4720: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4c4720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4c4724: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4c4724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4c4728: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x4c4728u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c472c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4c472cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c4730: 0x3012  mflo        $a2
    ctx->pc = 0x4c4730u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x4c4734: 0xc13399c  jal         func_4CE670
    ctx->pc = 0x4C4734u;
    SET_GPR_U32(ctx, 31, 0x4C473Cu);
    ctx->pc = 0x4C4738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4734u;
    // 0x4c4738: 0xe42023  subu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE670u, 0x4C4734u, 0x4C473Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C473Cu;
label_4c473c:
    // 0x4c473c: 0xae420034  sw          $v0, 0x34($s2)
    ctx->pc = 0x4c473cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
    // 0x4c4740: 0x8e0502cc  lw          $a1, 0x2CC($s0)
    ctx->pc = 0x4c4740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
    // 0x4c4744: 0x8e0302c4  lw          $v1, 0x2C4($s0)
    ctx->pc = 0x4c4744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x4c4748: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x4c4748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x4c474c: 0xae51000c  sw          $s1, 0xC($s2)
    ctx->pc = 0x4c474cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
    // 0x4c4750: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4c4750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4c4754: 0x433023  subu        $a2, $v0, $v1
    ctx->pc = 0x4c4754u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4c4758: 0x8e0402c8  lw          $a0, 0x2C8($s0)
    ctx->pc = 0x4c4758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x4c475c: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x4c475cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4c4760: 0xc3100a  movz        $v0, $a2, $v1
    ctx->pc = 0x4c4760u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x4c4764: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4c4764u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4c4768: 0x26880  sll         $t5, $v0, 2
    ctx->pc = 0x4c4768u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4c476c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4c476cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4c4770: 0x1a52821  addu        $a1, $t5, $a1
    ctx->pc = 0x4c4770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 5)));
    // 0x4c4774: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4c4774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c4778: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4c4778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c477c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4c477cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4c4780: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C4780u;
    {
        const bool branch_taken_0x4c4780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C4784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4780u;
        // 0x4c4784: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4780) {
            ctx->pc = 0x4C4790u;
            goto label_4c4790;
        }
    }
    ctx->pc = 0x4C4788u;
    // 0x4c4788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4c4788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c478c: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x4c478cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_4c4790:
    // 0x4c4790: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x4c4790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x4c4794: 0x8e0302d4  lw          $v1, 0x2D4($s0)
    ctx->pc = 0x4c4794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
    // 0x4c4798: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c4798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4c479c: 0x8e0602d0  lw          $a2, 0x2D0($s0)
    ctx->pc = 0x4c479cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x4c47a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4c47a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4c47a4: 0x8e0702d8  lw          $a3, 0x2D8($s0)
    ctx->pc = 0x4c47a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x4c47a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4c47a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c47ac: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x4c47acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x4c47b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c47b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c47b4: 0x1a62821  addu        $a1, $t5, $a2
    ctx->pc = 0x4c47b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 6)));
    // 0x4c47b8: 0x1a74021  addu        $t0, $t5, $a3
    ctx->pc = 0x4c47b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x4c47bc: 0x8e0902dc  lw          $t1, 0x2DC($s0)
    ctx->pc = 0x4c47bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x4c47c0: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4c47c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4c47c4: 0x8e0a02e0  lw          $t2, 0x2E0($s0)
    ctx->pc = 0x4c47c4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x4c47c8: 0xae440014  sw          $a0, 0x14($s2)
    ctx->pc = 0x4c47c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 4));
    // 0x4c47cc: 0x1a95821  addu        $t3, $t5, $t1
    ctx->pc = 0x4c47ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x4c47d0: 0x1aa6021  addu        $t4, $t5, $t2
    ctx->pc = 0x4c47d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x4c47d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c47d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c47d8: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x4c47d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x4c47dc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4c47dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c47e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c47e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4c47e4: 0x8e0502e4  lw          $a1, 0x2E4($s0)
    ctx->pc = 0x4c47e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
    // 0x4c47e8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4c47e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4c47ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4c47ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c47f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c47f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c47f4: 0x1a53021  addu        $a2, $t5, $a1
    ctx->pc = 0x4c47f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 5)));
    // 0x4c47f8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4c47f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4c47fc: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x4c47fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x4c4800: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x4c4800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x4c4804: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4c4804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c4808: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c4808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4c480c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4c480cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4c4810: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c4810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c4814: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4c4814u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4c4818: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x4c4818u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x4c481c: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x4c481cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x4c4820: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x4c4820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c4824: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c4824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4c4828: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x4c4828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x4c482c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c482cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c4830: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4c4830u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4c4834: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x4c4834u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x4c4838: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x4c4838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x4c483c: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x4c483cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c4840: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c4840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4c4844: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x4c4844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x4c4848: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c4848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c484c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4c484cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4c4850: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x4c4850u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x4c4854: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x4c4854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x4c4858: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4c4858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c485c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c485cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4c4860: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c4860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c4864: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4c4864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4c4868: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c4868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c486c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4c486cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4c4870: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x4c4870u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x4c4874: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c4874u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c4878: 0x3e00008  jr          $ra
    ctx->pc = 0x4C4878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4878u;
        // 0x4c487c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C4878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C4880u;
    // 0x4c4880: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x4c4880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x4c4884: 0x0  nop
    ctx->pc = 0x4c4884u;
    // NOP
    // 0x4c4888: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4c4888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4c488c: 0x0  nop
    ctx->pc = 0x4c488cu;
    // NOP
    // 0x4c4890: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4c4890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4c4894: 0x0  nop
    ctx->pc = 0x4c4894u;
    // NOP
    ctx->pc = 0x4c4898u;
}
