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

// Function: sub_0044E438
// Address: 0x44e438 - 0x44e588
void sub_0044E438_0x44e438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044E438_0x44e438");
#endif

    ctx->pc = 0x44e438u;

    // 0x44e438: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x44e438u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44e43c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x44e43cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44e440: 0x37083  sra         $t6, $v1, 2
    ctx->pc = 0x44e440u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 3), 2));
    // 0x44e444: 0x328c3  sra         $a1, $v1, 3
    ctx->pc = 0x44e444u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 3));
    // 0x44e448: 0x36943  sra         $t5, $v1, 5
    ctx->pc = 0x44e448u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 3), 5));
    // 0x44e44c: 0x33983  sra         $a3, $v1, 6
    ctx->pc = 0x44e44cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 6));
    // 0x44e450: 0x349c3  sra         $t1, $v1, 7
    ctx->pc = 0x44e450u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 7));
    // 0x44e454: 0x35a03  sra         $t3, $v1, 8
    ctx->pc = 0x44e454u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 3), 8));
    // 0x44e458: 0x313c3  sra         $v0, $v1, 15
    ctx->pc = 0x44e458u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 15));
    // 0x44e45c: 0x33443  sra         $a2, $v1, 17
    ctx->pc = 0x44e45cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 17));
    // 0x44e460: 0x34483  sra         $t0, $v1, 18
    ctx->pc = 0x44e460u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 18));
    // 0x44e464: 0x354c3  sra         $t2, $v1, 19
    ctx->pc = 0x44e464u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 19));
    // 0x44e468: 0x36503  sra         $t4, $v1, 20
    ctx->pc = 0x44e468u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 20));
    // 0x44e46c: 0x30780001  andi        $t8, $v1, 0x1
    ctx->pc = 0x44e46cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x44e470: 0x31ce0001  andi        $t6, $t6, 0x1
    ctx->pc = 0x44e470u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x44e474: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x44e474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x44e478: 0x31ad0001  andi        $t5, $t5, 0x1
    ctx->pc = 0x44e478u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x44e47c: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x44e47cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x44e480: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x44e480u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x44e484: 0x316b0001  andi        $t3, $t3, 0x1
    ctx->pc = 0x44e484u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x44e488: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x44e488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x44e48c: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x44e48cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x44e490: 0x31080001  andi        $t0, $t0, 0x1
    ctx->pc = 0x44e490u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x44e494: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x44e494u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x44e498: 0x14af0003  bne         $a1, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x44E498u;
    {
        const bool branch_taken_0x44e498 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 15));
        ctx->pc = 0x44E49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E498u;
        // 0x44e49c: 0x318c0001  andi        $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e498) {
            ctx->pc = 0x44E4A8u;
            goto label_44e4a8;
        }
    }
    ctx->pc = 0x44E4A0u;
    // 0x44e4a0: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x44e4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x44e4a4: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x44e4a4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_44e4a8:
    // 0x44e4a8: 0x15af0006  bne         $t5, $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x44E4A8u;
    {
        const bool branch_taken_0x44e4a8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x44E4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E4A8u;
        // 0x44e4ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e4a8) {
            ctx->pc = 0x44E4C4u;
            goto label_44e4c4;
        }
    }
    ctx->pc = 0x44E4B0u;
    // 0x44e4b0: 0x14cd0004  bne         $a2, $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x44E4B0u;
    {
        const bool branch_taken_0x44e4b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 13));
        if (branch_taken_0x44e4b0) {
            ctx->pc = 0x44E4C4u;
            goto label_44e4c4;
        }
    }
    ctx->pc = 0x44E4B8u;
    // 0x44e4b8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x44e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x44e4bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x44e4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x44e4c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44e4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44e4c4:
    // 0x44e4c4: 0x14e20006  bne         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x44E4C4u;
    {
        const bool branch_taken_0x44e4c4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x44E4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E4C4u;
        // 0x44e4c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e4c4) {
            ctx->pc = 0x44E4E0u;
            goto label_44e4e0;
        }
    }
    ctx->pc = 0x44E4CCu;
    // 0x44e4cc: 0x15070004  bne         $t0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x44E4CCu;
    {
        const bool branch_taken_0x44e4cc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x44e4cc) {
            ctx->pc = 0x44E4E0u;
            goto label_44e4e0;
        }
    }
    ctx->pc = 0x44E4D4u;
    // 0x44e4d4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x44e4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x44e4d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x44e4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x44e4dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44e4e0:
    // 0x44e4e0: 0x15220006  bne         $t1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x44E4E0u;
    {
        const bool branch_taken_0x44e4e0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x44E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E4E0u;
        // 0x44e4e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e4e0) {
            ctx->pc = 0x44E4FCu;
            goto label_44e4fc;
        }
    }
    ctx->pc = 0x44E4E8u;
    // 0x44e4e8: 0x15490004  bne         $t2, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x44E4E8u;
    {
        const bool branch_taken_0x44e4e8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 9));
        if (branch_taken_0x44e4e8) {
            ctx->pc = 0x44E4FCu;
            goto label_44e4fc;
        }
    }
    ctx->pc = 0x44E4F0u;
    // 0x44e4f0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x44e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x44e4f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x44e4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x44e4f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44e4fc:
    // 0x44e4fc: 0x15620006  bne         $t3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x44E4FCu;
    {
        const bool branch_taken_0x44e4fc = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        ctx->pc = 0x44E500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E4FCu;
        // 0x44e500: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e4fc) {
            ctx->pc = 0x44E518u;
            goto label_44e518;
        }
    }
    ctx->pc = 0x44E504u;
    // 0x44e504: 0x158b0004  bne         $t4, $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x44E504u;
    {
        const bool branch_taken_0x44e504 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 11));
        if (branch_taken_0x44e504) {
            ctx->pc = 0x44E518u;
            goto label_44e518;
        }
    }
    ctx->pc = 0x44E50Cu;
    // 0x44e50c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x44e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x44e510: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x44e510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x44e514: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44e514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44e518:
    // 0x44e518: 0x14a20010  bne         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x44E518u;
    {
        const bool branch_taken_0x44e518 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x44e518) {
            ctx->pc = 0x44E55Cu;
            goto label_44e55c;
        }
    }
    ctx->pc = 0x44E520u;
    // 0x44e520: 0x17050004  bne         $t8, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x44E520u;
    {
        const bool branch_taken_0x44e520 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 5));
        if (branch_taken_0x44e520) {
            ctx->pc = 0x44E534u;
            goto label_44e534;
        }
    }
    ctx->pc = 0x44E528u;
    // 0x44e528: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x44e528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x44e52c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x44e52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x44e530: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x44e530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_44e534:
    // 0x44e534: 0x15c50004  bne         $t6, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x44E534u;
    {
        const bool branch_taken_0x44e534 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 5));
        if (branch_taken_0x44e534) {
            ctx->pc = 0x44E548u;
            goto label_44e548;
        }
    }
    ctx->pc = 0x44E53Cu;
    // 0x44e53c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x44e53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x44e540: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x44e540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x44e544: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x44e544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_44e548:
    // 0x44e548: 0x15a50004  bne         $t5, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x44E548u;
    {
        const bool branch_taken_0x44e548 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 5));
        if (branch_taken_0x44e548) {
            ctx->pc = 0x44E55Cu;
            goto label_44e55c;
        }
    }
    ctx->pc = 0x44E550u;
    // 0x44e550: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x44e550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x44e554: 0x3442ffdf  ori         $v0, $v0, 0xFFDF
    ctx->pc = 0x44e554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65503);
    // 0x44e558: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x44e558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_44e55c:
    // 0x44e55c: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x44E55Cu;
    {
        const bool branch_taken_0x44e55c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x44E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E55Cu;
        // 0x44e560: 0x3c023000  lui         $v0, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e55c) {
            ctx->pc = 0x44E570u;
            goto label_44e570;
        }
    }
    ctx->pc = 0x44E564u;
    // 0x44e564: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x44e564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x44e568: 0x58180a  movz        $v1, $v0, $t8
    ctx->pc = 0x44e568u;
    if (GPR_U64(ctx, 24) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x44e56c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x44e56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
label_44e570:
    // 0x44e570: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x44e570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x44e574: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x44E574u;
    {
        const bool branch_taken_0x44e574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E574u;
        // 0x44e578: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e574) {
            ctx->pc = 0x44E580u;
            goto label_44e580;
        }
    }
    ctx->pc = 0x44E57Cu;
    // 0x44e57c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x44e57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_44e580:
    // 0x44e580: 0x3e00008  jr          $ra
    ctx->pc = 0x44E580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44E584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44E580u;
        // 0x44e584: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44E588u;
}
