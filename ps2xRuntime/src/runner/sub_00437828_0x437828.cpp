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

// Function: sub_00437828
// Address: 0x437828 - 0x4379d8
void sub_00437828_0x437828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00437828_0x437828");
#endif

    switch (ctx->pc) {
        case 0x4378b8u: goto label_4378b8;
        case 0x437948u: goto label_437948;
        case 0x4379b0u: goto label_4379b0;
        default: break;
    }

    ctx->pc = 0x437828u;

    // 0x437828: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x437828u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x43782c: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x43782cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x437830: 0x24430019  addiu       $v1, $v0, 0x19
    ctx->pc = 0x437830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
    // 0x437834: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x437834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x437838: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x437838u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x43783c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x43783cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x437840: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x437840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x437844: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x437844u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x437848: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x437848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x43784c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x43784cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x437850: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x437850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x437854: 0x2450000a  addiu       $s0, $v0, 0xA
    ctx->pc = 0x437854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x437858: 0x3a3e823  subu        $sp, $sp, $v1
    ctx->pc = 0x437858u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x43785c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x43785cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x437860: 0x3b01021  addu        $v0, $sp, $s0
    ctx->pc = 0x437860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x437864: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x437864u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x437868: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x437868u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43786c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x43786Cu;
    {
        const bool branch_taken_0x43786c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x437870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43786Cu;
        // 0x437870: 0x2447ffff  addiu       $a3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43786c) {
            ctx->pc = 0x437884u;
            goto label_437884;
        }
    }
    ctx->pc = 0x437874u;
    // 0x437874: 0x10a00050  beqz        $a1, . + 4 + (0x50 << 2)
    ctx->pc = 0x437874u;
    {
        const bool branch_taken_0x437874 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x437878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437874u;
        // 0x437878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437874) {
            ctx->pc = 0x4379B8u;
            goto label_4379b8;
        }
    }
    ctx->pc = 0x43787Cu;
    // 0x43787c: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x43787Cu;
    {
        const bool branch_taken_0x43787c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x437880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43787Cu;
        // 0x437880: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43787c) {
            ctx->pc = 0x43788Cu;
            goto label_43788c;
        }
    }
    ctx->pc = 0x437884u;
label_437884:
    // 0x437884: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x437884u;
    {
        const bool branch_taken_0x437884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437884u;
        // 0x437888: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437884) {
            ctx->pc = 0x4379B8u;
            goto label_4379b8;
        }
    }
    ctx->pc = 0x43788Cu;
label_43788c:
    // 0x43788c: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x43788cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x437890: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x437890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x437894: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x437894u;
    {
        const bool branch_taken_0x437894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x437898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437894u;
        // 0x437898: 0xafc60004  sw          $a2, 0x4($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437894) {
            ctx->pc = 0x437914u;
            goto label_437914;
        }
    }
    ctx->pc = 0x43789Cu;
    // 0x43789c: 0x240d0045  addiu       $t5, $zero, 0x45
    ctx->pc = 0x43789cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x4378a0: 0x240c002e  addiu       $t4, $zero, 0x2E
    ctx->pc = 0x4378a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x4378a4: 0x240b0065  addiu       $t3, $zero, 0x65
    ctx->pc = 0x4378a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x4378a8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x4378a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4378ac: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x4378acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4378b0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x4378b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4378b4: 0x0  nop
    ctx->pc = 0x4378b4u;
    // NOP
label_4378b8:
    // 0x4378b8: 0x106d000f  beq         $v1, $t5, . + 4 + (0xF << 2)
    ctx->pc = 0x4378B8u;
    {
        const bool branch_taken_0x4378b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 13));
        ctx->pc = 0x4378BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4378B8u;
        // 0x4378bc: 0x28620046  slti        $v0, $v1, 0x46 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)70) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4378b8) {
            ctx->pc = 0x4378F8u;
            goto label_4378f8;
        }
    }
    ctx->pc = 0x4378C0u;
    // 0x4378c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4378C0u;
    {
        const bool branch_taken_0x4378c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4378c0) {
            ctx->pc = 0x4378D8u;
            goto label_4378d8;
        }
    }
    ctx->pc = 0x4378C8u;
    // 0x4378c8: 0x106c0007  beq         $v1, $t4, . + 4 + (0x7 << 2)
    ctx->pc = 0x4378C8u;
    {
        const bool branch_taken_0x4378c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 12));
        ctx->pc = 0x4378CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4378C8u;
        // 0x4378cc: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4378c8) {
            ctx->pc = 0x4378E8u;
            goto label_4378e8;
        }
    }
    ctx->pc = 0x4378D0u;
    // 0x4378d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4378D0u;
    {
        const bool branch_taken_0x4378d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4378D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4378D0u;
        // 0x4378d4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4378d0) {
            ctx->pc = 0x437900u;
            goto label_437900;
        }
    }
    ctx->pc = 0x4378D8u;
label_4378d8:
    // 0x4378d8: 0x506b0008  beql        $v1, $t3, . + 4 + (0x8 << 2)
    ctx->pc = 0x4378D8u;
    {
        const bool branch_taken_0x4378d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        if (branch_taken_0x4378d8) {
            ctx->pc = 0x4378DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4378D8u;
            // 0x4378dc: 0xafc90000  sw          $t1, 0x0($fp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4378FCu;
            goto label_4378fc;
        }
    }
    ctx->pc = 0x4378E0u;
    // 0x4378e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4378E0u;
    {
        const bool branch_taken_0x4378e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4378E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4378E0u;
        // 0x4378e4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4378e0) {
            ctx->pc = 0x437900u;
            goto label_437900;
        }
    }
    ctx->pc = 0x4378E8u;
label_4378e8:
    // 0x4378e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4378E8u;
    {
        const bool branch_taken_0x4378e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4378ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4378E8u;
        // 0x4378ec: 0xafc40004  sw          $a0, 0x4($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4378e8) {
            ctx->pc = 0x4378FCu;
            goto label_4378fc;
        }
    }
    ctx->pc = 0x4378F0u;
    // 0x4378f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4378F0u;
    {
        const bool branch_taken_0x4378f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4378F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4378F0u;
        // 0x4378f4: 0xafca0000  sw          $t2, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4378f0) {
            ctx->pc = 0x4378FCu;
            goto label_4378fc;
        }
    }
    ctx->pc = 0x4378F8u;
label_4378f8:
    // 0x4378f8: 0xafc90000  sw          $t1, 0x0($fp)
    ctx->pc = 0x4378f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 9));
label_4378fc:
    // 0x4378fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4378fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_437900:
    // 0x437900: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x437900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x437904: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x437904u;
    {
        const bool branch_taken_0x437904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x437908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437904u;
        // 0x437908: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437904) {
            ctx->pc = 0x437914u;
            goto label_437914;
        }
    }
    ctx->pc = 0x43790Cu;
    // 0x43790c: 0x5449ffea  bnel        $v0, $t1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x43790Cu;
    {
        const bool branch_taken_0x43790c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x43790c) {
            ctx->pc = 0x437910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43790Cu;
            // 0x437910: 0x80830000  lb          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4378B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4378b8;
        }
    }
    ctx->pc = 0x437914u;
label_437914:
    // 0x437914: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x437914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x437918: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x437918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x43791c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43791Cu;
    {
        const bool branch_taken_0x43791c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x437920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43791Cu;
        // 0x437920: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43791c) {
            ctx->pc = 0x43792Cu;
            goto label_43792c;
        }
    }
    ctx->pc = 0x437924u;
    // 0x437924: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x437924u;
    {
        const bool branch_taken_0x437924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437924u;
        // 0x437928: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437924) {
            ctx->pc = 0x4379B8u;
            goto label_4379b8;
        }
    }
    ctx->pc = 0x43792Cu;
label_43792c:
    // 0x43792c: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x43792cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x437930: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x437930u;
    {
        const bool branch_taken_0x437930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x437934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437930u;
        // 0x437934: 0x8fc90004  lw          $t1, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437930) {
            ctx->pc = 0x437994u;
            goto label_437994;
        }
    }
    ctx->pc = 0x437938u;
    // 0x437938: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x437938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x43793c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x43793cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x437940: 0x240a002c  addiu       $t2, $zero, 0x2C
    ctx->pc = 0x437940u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x437944: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x437944u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_437948:
    // 0x437948: 0x124182b  sltu        $v1, $t1, $a0
    ctx->pc = 0x437948u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x43794c: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x43794cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x437950: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x437950u;
    {
        const bool branch_taken_0x437950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x437954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437950u;
        // 0x437954: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437950) {
            ctx->pc = 0x437984u;
            goto label_437984;
        }
    }
    ctx->pc = 0x437958u;
    // 0x437958: 0x106001a  div         $zero, $t0, $a2
    ctx->pc = 0x437958u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x43795c: 0x50cb0001  beql        $a2, $t3, . + 4 + (0x1 << 2)
    ctx->pc = 0x43795Cu;
    {
        const bool branch_taken_0x43795c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 11));
        if (branch_taken_0x43795c) {
            ctx->pc = 0x437960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43795Cu;
            // 0x437960: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x437964u;
            goto label_437964;
        }
    }
    ctx->pc = 0x437964u;
label_437964:
    // 0x437964: 0x1010  mfhi        $v0
    ctx->pc = 0x437964u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x437968: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x437968u;
    {
        const bool branch_taken_0x437968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x437968) {
            ctx->pc = 0x43796Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x437968u;
            // 0x43796c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x437984u;
            goto label_437984;
        }
    }
    ctx->pc = 0x437970u;
    // 0x437970: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x437970u;
    {
        const bool branch_taken_0x437970 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x437974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437970u;
        // 0x437974: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437970) {
            ctx->pc = 0x437984u;
            goto label_437984;
        }
    }
    ctx->pc = 0x437978u;
    // 0x437978: 0xa0ea0000  sb          $t2, 0x0($a3)
    ctx->pc = 0x437978u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x43797c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x43797cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x437980: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x437980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_437984:
    // 0x437984: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x437984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x437988: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x437988u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x43798c: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x43798Cu;
    {
        const bool branch_taken_0x43798c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43798c) {
            ctx->pc = 0x437990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43798Cu;
            // 0x437990: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x437948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_437948;
        }
    }
    ctx->pc = 0x437994u;
label_437994:
    // 0x437994: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x437994u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x437998: 0x2610fff6  addiu       $s0, $s0, -0xA
    ctx->pc = 0x437998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967286));
    // 0x43799c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x43799cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4379a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4379a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4379a4: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x4379a4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4379a8: 0xc10c190  jal         func_430640
    ctx->pc = 0x4379A8u;
    SET_GPR_U32(ctx, 31, 0x4379B0u);
    ctx->pc = 0x4379ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4379A8u;
    // 0x4379ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4379A8u, 0x4379B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4379B0u;
label_4379b0:
    // 0x4379b0: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x4379b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x4379b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4379b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4379b8:
    // 0x4379b8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x4379b8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4379bc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4379bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4379c0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4379c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4379c4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4379c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4379c8: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x4379c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4379cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4379ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4379d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4379D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4379D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4379D0u;
        // 0x4379d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4379D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4379D8u;
}
