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

// Function: sub_004B4888
// Address: 0x4b4888 - 0x4b49f8
void sub_004B4888_0x4b4888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4888_0x4b4888");
#endif

    switch (ctx->pc) {
        case 0x4b48d0u: goto label_4b48d0;
        case 0x4b4910u: goto label_4b4910;
        case 0x4b4974u: goto label_4b4974;
        case 0x4b49bcu: goto label_4b49bc;
        default: break;
    }

    ctx->pc = 0x4b4888u;

    // 0x4b4888: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4b4888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4b488c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x4b488cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4890: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4b4890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4b4894: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4b4894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4898: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x4b4898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x4b489c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x4b489cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x4b48a0: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x4b48a0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x4b48a4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x4b48a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x4b48a8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x4b48a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b48ac: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x4b48acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x4b48b0: 0x2983c  dsll32      $s3, $v0, 0
    ctx->pc = 0x4b48b0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4b48b4: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x4b48b4u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x4b48b8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4b48b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4b48bc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x4b48bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b48c0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x4b48c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x4b48c4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4b48c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x4b48c8: 0xc12cf26  jal         func_4B3C98
    ctx->pc = 0x4B48C8u;
    SET_GPR_U32(ctx, 31, 0x4B48D0u);
    ctx->pc = 0x4B48CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B48C8u;
    // 0x4b48cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3C98u, 0x4B48C8u, 0x4B48D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B48D0u;
label_4b48d0:
    // 0x4b48d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4b48d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b48d4: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x4b48d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x4b48d8: 0x26340014  addiu       $s4, $s1, 0x14
    ctx->pc = 0x4b48d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x4b48dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b48dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b48e0: 0x2021824  and         $v1, $s0, $v0
    ctx->pc = 0x4b48e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x4b48e4: 0x108502  srl         $s0, $s0, 20
    ctx->pc = 0x4b48e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 20));
    // 0x4b48e8: 0x321207ff  andi        $s2, $s0, 0x7FF
    ctx->pc = 0x4b48e8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2047);
    // 0x4b48ec: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B48ECu;
    {
        const bool branch_taken_0x4b48ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B48F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B48ECu;
        // 0x4b48f0: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b48ec) {
            ctx->pc = 0x4B4900u;
            goto label_4b4900;
        }
    }
    ctx->pc = 0x4B48F4u;
    // 0x4b48f4: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x4b48f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x4b48f8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x4b48f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4b48fc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4b48fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_4b4900:
    // 0x4b4900: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x4B4900u;
    {
        const bool branch_taken_0x4b4900 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4900u;
        // 0x4b4904: 0xafb30000  sw          $s3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4900) {
            ctx->pc = 0x4B4968u;
            goto label_4b4968;
        }
    }
    ctx->pc = 0x4B4908u;
    // 0x4b4908: 0xc12cfe8  jal         func_4B3FA0
    ctx->pc = 0x4B4908u;
    SET_GPR_U32(ctx, 31, 0x4B4910u);
    ctx->pc = 0x4B490Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4908u;
    // 0x4b490c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3FA0u, 0x4B4908u, 0x4B4910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4910u;
label_4b4910:
    // 0x4b4910: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4b4910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4914: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x4B4914u;
    {
        const bool branch_taken_0x4b4914 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4914u;
        // 0x4b4918: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4914) {
            ctx->pc = 0x4B4940u;
            goto label_4b4940;
        }
    }
    ctx->pc = 0x4B491Cu;
    // 0x4b491c: 0x52023  negu        $a0, $a1
    ctx->pc = 0x4b491cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x4b4920: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4b4920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b4924: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x4b4924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x4b4928: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4b4928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4b492c: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x4b492cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x4b4930: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x4b4930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4b4934: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x4b4934u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x4b4938: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4B4938u;
    {
        const bool branch_taken_0x4b4938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4938u;
        // 0x4b493c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4938) {
            ctx->pc = 0x4B4948u;
            goto label_4b4948;
        }
    }
    ctx->pc = 0x4B4940u;
label_4b4940:
    // 0x4b4940: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4b4940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b4944: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x4b4944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_4b4948:
    // 0x4b4948: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x4b4948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4b494c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b494cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b4950: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4b4950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b4954: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x4b4954u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x4b4958: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x4b4958u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x4b495c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x4b495cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4960: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4B4960u;
    {
        const bool branch_taken_0x4b4960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4960u;
        // 0x4b4964: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4960) {
            ctx->pc = 0x4B4988u;
            goto label_4b4988;
        }
    }
    ctx->pc = 0x4B4968u;
label_4b4968:
    // 0x4b4968: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x4b4968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x4b496c: 0xc12cfe8  jal         func_4B3FA0
    ctx->pc = 0x4B496Cu;
    SET_GPR_U32(ctx, 31, 0x4B4974u);
    ctx->pc = 0x4B4970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B496Cu;
    // 0x4b4970: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3FA0u, 0x4B496Cu, 0x4B4974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4974u;
label_4b4974:
    // 0x4b4974: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x4b4974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4b4978: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b4978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b497c: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x4b497cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x4b4980: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x4b4980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x4b4984: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x4b4984u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
label_4b4988:
    // 0x4b4988: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B4988u;
    {
        const bool branch_taken_0x4b4988 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4988u;
        // 0x4b498c: 0x24a2fbcd  addiu       $v0, $a1, -0x433 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966221));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4988) {
            ctx->pc = 0x4B49A4u;
            goto label_4b49a4;
        }
    }
    ctx->pc = 0x4B4990u;
    // 0x4b4990: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x4b4990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x4b4994: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x4b4994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4b4998: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4b4998u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4b499c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4B499Cu;
    {
        const bool branch_taken_0x4b499c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B49A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B499Cu;
        // 0x4b49a0: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b499c) {
            ctx->pc = 0x4B49C4u;
            goto label_4b49c4;
        }
    }
    ctx->pc = 0x4B49A4u;
label_4b49a4:
    // 0x4b49a4: 0x24a3fbce  addiu       $v1, $a1, -0x432
    ctx->pc = 0x4b49a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966222));
    // 0x4b49a8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x4b49a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4b49ac: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4b49acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4b49b0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x4b49b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x4b49b4: 0xc12cfc6  jal         func_4B3F18
    ctx->pc = 0x4B49B4u;
    SET_GPR_U32(ctx, 31, 0x4B49BCu);
    ctx->pc = 0x4B49B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B49B4u;
    // 0x4b49b8: 0x8c44fffc  lw          $a0, -0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3F18u, 0x4B49B4u, 0x4B49BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B49BCu;
label_4b49bc:
    // 0x4b49bc: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x4b49bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x4b49c0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4b49c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4b49c4:
    // 0x4b49c4: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4b49c4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4b49c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4b49c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b49cc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4b49ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4b49d0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x4b49d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4b49d4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x4b49d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4b49d8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x4b49d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b49dc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x4b49dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b49e0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4b49e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b49e4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x4b49e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b49e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4b49e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b49ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4B49ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B49F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B49ECu;
        // 0x4b49f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B49ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B49F4u;
    // 0x4b49f4: 0x0  nop
    ctx->pc = 0x4b49f4u;
    // NOP
    ctx->pc = 0x4b49f8u;
}
