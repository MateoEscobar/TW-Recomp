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

// Function: sub_004C6760
// Address: 0x4c6760 - 0x4c6958
void sub_004C6760_0x4c6760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C6760_0x4c6760");
#endif

    switch (ctx->pc) {
        case 0x4c6820u: goto label_4c6820;
        default: break;
    }

    ctx->pc = 0x4c6760u;

    // 0x4c6760: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x4c6760u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6764: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4c6764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c6768: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x4c6768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x4c676c: 0x14620077  bne         $v1, $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x4C676Cu;
    {
        const bool branch_taken_0x4c676c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4C6770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C676Cu;
        // 0x4c6770: 0xa0c82d  daddu       $t9, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c676c) {
            ctx->pc = 0x4C694Cu;
            goto label_4c694c;
        }
    }
    ctx->pc = 0x4C6774u;
    // 0x4c6774: 0x8f270008  lw          $a3, 0x8($t9)
    ctx->pc = 0x4c6774u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x4c6778: 0x8d490028  lw          $t1, 0x28($t2)
    ctx->pc = 0x4c6778u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x4c677c: 0x8f2b0004  lw          $t3, 0x4($t9)
    ctx->pc = 0x4c677cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4)));
    // 0x4c6780: 0xe9102b  sltu        $v0, $a3, $t1
    ctx->pc = 0x4c6780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x4c6784: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4C6784u;
    {
        const bool branch_taken_0x4c6784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6784u;
        // 0x4c6788: 0x8f280000  lw          $t0, 0x0($t9) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6784) {
            ctx->pc = 0x4C67B0u;
            goto label_4c67b0;
        }
    }
    ctx->pc = 0x4C678Cu;
    // 0x4c678c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4c678cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4c6790: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c6790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c6794: 0x691823  subu        $v1, $v1, $t1
    ctx->pc = 0x4c6794u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x4c6798: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c6798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c679c: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x4c679cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c67a0: 0xe93823  subu        $a3, $a3, $t1
    ctx->pc = 0x4c67a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x4c67a4: 0x1027024  and         $t6, $t0, $v0
    ctx->pc = 0x4c67a4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4c67a8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4C67A8u;
    {
        const bool branch_taken_0x4c67a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C67ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C67A8u;
        // 0x4c67ac: 0x1284006  srlv        $t0, $t0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 9) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c67a8) {
            ctx->pc = 0x4C67E8u;
            goto label_4c67e8;
        }
    }
    ctx->pc = 0x4C67B0u;
label_4c67b0:
    // 0x4c67b0: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x4c67b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c67b4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4c67b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4c67b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c67b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c67bc: 0x691823  subu        $v1, $v1, $t1
    ctx->pc = 0x4c67bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x4c67c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c67c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c67c4: 0xe62004  sllv        $a0, $a2, $a3
    ctx->pc = 0x4c67c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
    // 0x4c67c8: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x4c67c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c67cc: 0x1042025  or          $a0, $t0, $a0
    ctx->pc = 0x4c67ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x4c67d0: 0x1271823  subu        $v1, $t1, $a3
    ctx->pc = 0x4c67d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x4c67d4: 0x2525ffe0  addiu       $a1, $t1, -0x20
    ctx->pc = 0x4c67d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967264));
    // 0x4c67d8: 0x827024  and         $t6, $a0, $v0
    ctx->pc = 0x4c67d8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c67dc: 0x664006  srlv        $t0, $a2, $v1
    ctx->pc = 0x4c67dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c67e0: 0xe53823  subu        $a3, $a3, $a1
    ctx->pc = 0x4c67e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x4c67e4: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x4c67e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_4c67e8:
    // 0x4c67e8: 0x11c00051  beqz        $t6, . + 4 + (0x51 << 2)
    ctx->pc = 0x4C67E8u;
    {
        const bool branch_taken_0x4c67e8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C67ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C67E8u;
        // 0x4c67ec: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c67e8) {
            ctx->pc = 0x4C6930u;
            goto label_4c6930;
        }
    }
    ctx->pc = 0x4C67F0u;
    // 0x4c67f0: 0x8d44002c  lw          $a0, 0x2C($t2)
    ctx->pc = 0x4c67f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 44)));
    // 0x4c67f4: 0x8d580020  lw          $t8, 0x20($t2)
    ctx->pc = 0x4c67f4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x4c67f8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c67f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c67fc: 0x8e2821  addu        $a1, $a0, $t6
    ctx->pc = 0x4c67fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x4c6800: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c6800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c6804: 0x781823  subu        $v1, $v1, $t8
    ctx->pc = 0x4c6804u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x4c6808: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x4c6808u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x4c680c: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x4c680cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6810: 0xad450004  sw          $a1, 0x4($t2)
    ctx->pc = 0x4c6810u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 5));
    // 0x4c6814: 0x8d4c0024  lw          $t4, 0x24($t2)
    ctx->pc = 0x4c6814u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 36)));
    // 0x4c6818: 0x626806  srlv        $t5, $v0, $v1
    ctx->pc = 0x4c6818u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c681c: 0x25440010  addiu       $a0, $t2, 0x10
    ctx->pc = 0x4c681cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_4c6820:
    // 0x4c6820: 0xf8102b  sltu        $v0, $a3, $t8
    ctx->pc = 0x4c6820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x4c6824: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4C6824u;
    {
        const bool branch_taken_0x4c6824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6824u;
        // 0x4c6828: 0x25ceffff  addiu       $t6, $t6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6824) {
            ctx->pc = 0x4C684Cu;
            goto label_4c684c;
        }
    }
    ctx->pc = 0x4C682Cu;
    // 0x4c682c: 0x10d1024  and         $v0, $t0, $t5
    ctx->pc = 0x4c682cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 13));
    // 0x4c6830: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x4c6830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x4c6834: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x4c6834u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c6838: 0x30a3000f  andi        $v1, $a1, 0xF
    ctx->pc = 0x4c6838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x4c683c: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x4c683cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x4c6840: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4c6840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4c6844: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4C6844u;
    {
        const bool branch_taken_0x4c6844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6844u;
        // 0x4c6848: 0x906a0000  lbu         $t2, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6844) {
            ctx->pc = 0x4C687Cu;
            goto label_4c687c;
        }
    }
    ctx->pc = 0x4C684Cu;
label_4c684c:
    // 0x4c684c: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x4c684cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c6850: 0xe61004  sllv        $v0, $a2, $a3
    ctx->pc = 0x4c6850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
    // 0x4c6854: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x4c6854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x4c6858: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x4c6858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x4c685c: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x4c685cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x4c6860: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x4c6860u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c6864: 0x30a3000f  andi        $v1, $a1, 0xF
    ctx->pc = 0x4c6864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x4c6868: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4c6868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4c686c: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x4c686cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x4c6870: 0xe5102b  sltu        $v0, $a3, $a1
    ctx->pc = 0x4c6870u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4c6874: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C6874u;
    {
        const bool branch_taken_0x4c6874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6874u;
        // 0x4c6878: 0x906a0000  lbu         $t2, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6874) {
            ctx->pc = 0x4C6888u;
            goto label_4c6888;
        }
    }
    ctx->pc = 0x4C687Cu;
label_4c687c:
    // 0x4c687c: 0xe53823  subu        $a3, $a3, $a1
    ctx->pc = 0x4c687cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x4c6880: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4C6880u;
    {
        const bool branch_taken_0x4c6880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6880u;
        // 0x4c6884: 0xa84006  srlv        $t0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6880) {
            ctx->pc = 0x4C689Cu;
            goto label_4c689c;
        }
    }
    ctx->pc = 0x4C6888u;
label_4c6888:
    // 0x4c6888: 0xa71023  subu        $v0, $a1, $a3
    ctx->pc = 0x4c6888u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x4c688c: 0x24a3ffe0  addiu       $v1, $a1, -0x20
    ctx->pc = 0x4c688cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x4c6890: 0x464006  srlv        $t0, $a2, $v0
    ctx->pc = 0x4c6890u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x4c6894: 0xe33823  subu        $a3, $a3, $v1
    ctx->pc = 0x4c6894u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x4c6898: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x4c6898u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_4c689c:
    // 0x4c689c: 0xf8102b  sltu        $v0, $a3, $t8
    ctx->pc = 0x4c689cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x4c68a0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4C68A0u;
    {
        const bool branch_taken_0x4c68a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c68a0) {
            ctx->pc = 0x4C68A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C68A0u;
            // 0x4c68a4: 0x8d660000  lw          $a2, 0x0($t3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C68C8u;
            goto label_4c68c8;
        }
    }
    ctx->pc = 0x4C68A8u;
    // 0x4c68a8: 0x10d1024  and         $v0, $t0, $t5
    ctx->pc = 0x4c68a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 13));
    // 0x4c68ac: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x4c68acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x4c68b0: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x4c68b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c68b4: 0x30a3000f  andi        $v1, $a1, 0xF
    ctx->pc = 0x4c68b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x4c68b8: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x4c68b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x4c68bc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4c68bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4c68c0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4C68C0u;
    {
        const bool branch_taken_0x4c68c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C68C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C68C0u;
        // 0x4c68c4: 0x90690000  lbu         $t1, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c68c0) {
            ctx->pc = 0x4C68F4u;
            goto label_4c68f4;
        }
    }
    ctx->pc = 0x4C68C8u;
label_4c68c8:
    // 0x4c68c8: 0xe61004  sllv        $v0, $a2, $a3
    ctx->pc = 0x4c68c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
    // 0x4c68cc: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x4c68ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x4c68d0: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x4c68d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x4c68d4: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x4c68d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x4c68d8: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x4c68d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c68dc: 0x30a3000f  andi        $v1, $a1, 0xF
    ctx->pc = 0x4c68dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x4c68e0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4c68e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4c68e4: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x4c68e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x4c68e8: 0xe5102b  sltu        $v0, $a3, $a1
    ctx->pc = 0x4c68e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4c68ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C68ECu;
    {
        const bool branch_taken_0x4c68ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C68F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C68ECu;
        // 0x4c68f0: 0x90690000  lbu         $t1, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c68ec) {
            ctx->pc = 0x4C6900u;
            goto label_4c6900;
        }
    }
    ctx->pc = 0x4C68F4u;
label_4c68f4:
    // 0x4c68f4: 0xe53823  subu        $a3, $a3, $a1
    ctx->pc = 0x4c68f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x4c68f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4C68F8u;
    {
        const bool branch_taken_0x4c68f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C68FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C68F8u;
        // 0x4c68fc: 0xa84006  srlv        $t0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c68f8) {
            ctx->pc = 0x4C6914u;
            goto label_4c6914;
        }
    }
    ctx->pc = 0x4C6900u;
label_4c6900:
    // 0x4c6900: 0xa71023  subu        $v0, $a1, $a3
    ctx->pc = 0x4c6900u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x4c6904: 0x24a3ffe0  addiu       $v1, $a1, -0x20
    ctx->pc = 0x4c6904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x4c6908: 0x464006  srlv        $t0, $a2, $v0
    ctx->pc = 0x4c6908u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x4c690c: 0xe33823  subu        $a3, $a3, $v1
    ctx->pc = 0x4c690cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x4c6910: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x4c6910u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_4c6914:
    // 0x4c6914: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x4c6914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x4c6918: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x4c6918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x4c691c: 0xa1e20000  sb          $v0, 0x0($t7)
    ctx->pc = 0x4c691cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c6920: 0x15c0ffbf  bnez        $t6, . + 4 + (-0x41 << 2)
    ctx->pc = 0x4C6920u;
    {
        const bool branch_taken_0x4c6920 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6920u;
        // 0x4c6924: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6920) {
            ctx->pc = 0x4C6820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c6820;
        }
    }
    ctx->pc = 0x4C6928u;
    // 0x4c6928: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4C6928u;
    {
        const bool branch_taken_0x4c6928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6928u;
        // 0x4c692c: 0xaf270008  sw          $a3, 0x8($t9) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 25), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6928) {
            ctx->pc = 0x4C6944u;
            goto label_4c6944;
        }
    }
    ctx->pc = 0x4C6930u;
label_4c6930:
    // 0x4c6930: 0x8d42002c  lw          $v0, 0x2C($t2)
    ctx->pc = 0x4c6930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 44)));
    // 0x4c6934: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x4c6934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4c6938: 0xad420004  sw          $v0, 0x4($t2)
    ctx->pc = 0x4c6938u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
    // 0x4c693c: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4c693cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4c6940: 0xaf270008  sw          $a3, 0x8($t9)
    ctx->pc = 0x4c6940u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 8), GPR_U32(ctx, 7));
label_4c6944:
    // 0x4c6944: 0xaf2b0004  sw          $t3, 0x4($t9)
    ctx->pc = 0x4c6944u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 4), GPR_U32(ctx, 11));
    // 0x4c6948: 0xaf280000  sw          $t0, 0x0($t9)
    ctx->pc = 0x4c6948u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 8));
label_4c694c:
    // 0x4c694c: 0x3e00008  jr          $ra
    ctx->pc = 0x4C694Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C694Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C6954u;
    // 0x4c6954: 0x0  nop
    ctx->pc = 0x4c6954u;
    // NOP
    ctx->pc = 0x4c6958u;
}
