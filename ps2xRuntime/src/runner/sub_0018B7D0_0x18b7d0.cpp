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

// Function: sub_0018B7D0
// Address: 0x18b7d0 - 0x18b950
void sub_0018B7D0_0x18b7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B7D0_0x18b7d0");
#endif

    switch (ctx->pc) {
        case 0x18b924u: goto label_18b924;
        case 0x18b934u: goto label_18b934;
        default: break;
    }

    ctx->pc = 0x18b7d0u;

    // 0x18b7d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18b7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18b7d4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x18b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x18b7d8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x18b7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x18b7dc: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x18b7dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x18b7e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18b7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18b7e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18b7e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b7e8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x18b7e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x18b7ec: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x18b7ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b7f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18b7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18b7f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18b7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18b7f8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18b7f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18b7fc: 0x8e070198  lw          $a3, 0x198($s0)
    ctx->pc = 0x18b7fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x18b800: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x18b800u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18b804: 0x2ce50008  sltiu       $a1, $a3, 0x8
    ctx->pc = 0x18b804u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x18b808: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x18b808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x18b80c: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x18b80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x18b810: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18b810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18b814: 0x8c490024  lw          $t1, 0x24($v0)
    ctx->pc = 0x18b814u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x18b818: 0xa3a40003  sb          $a0, 0x3($sp)
    ctx->pc = 0x18b818u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x18b81c: 0xa3a80000  sb          $t0, 0x0($sp)
    ctx->pc = 0x18b81cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x18b820: 0xa3a80001  sb          $t0, 0x1($sp)
    ctx->pc = 0x18b820u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x18b824: 0xa3a80002  sb          $t0, 0x2($sp)
    ctx->pc = 0x18b824u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 8));
    // 0x18b828: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18B828u;
    {
        const bool branch_taken_0x18b828 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B828u;
        // 0x18b82c: 0x8fb10000  lw          $s1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b828) {
            ctx->pc = 0x18B834u;
            goto label_18b834;
        }
    }
    ctx->pc = 0x18B830u;
    // 0x18b830: 0xae070194  sw          $a3, 0x194($s0)
    ctx->pc = 0x18b830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 7));
label_18b834:
    // 0x18b834: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18b834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18b838: 0x10c40017  beq         $a2, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x18B838u;
    {
        const bool branch_taken_0x18b838 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x18B83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B838u;
        // 0x18b83c: 0x2cc20003  sltiu       $v0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b838) {
            ctx->pc = 0x18B898u;
            goto label_18b898;
        }
    }
    ctx->pc = 0x18B840u;
    // 0x18b840: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18B840u;
    {
        const bool branch_taken_0x18b840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B840u;
        // 0x18b844: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b840) {
            ctx->pc = 0x18B858u;
            goto label_18b858;
        }
    }
    ctx->pc = 0x18B848u;
    // 0x18b848: 0x10c00023  beqz        $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x18B848u;
    {
        const bool branch_taken_0x18b848 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B848u;
        // 0x18b84c: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b848) {
            ctx->pc = 0x18B8D8u;
            goto label_18b8d8;
        }
    }
    ctx->pc = 0x18B850u;
    // 0x18b850: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x18B850u;
    {
        const bool branch_taken_0x18b850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B850u;
        // 0x18b854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b850) {
            ctx->pc = 0x18B91Cu;
            goto label_18b91c;
        }
    }
    ctx->pc = 0x18B858u;
label_18b858:
    // 0x18b858: 0x10c2001b  beq         $a2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x18B858u;
    {
        const bool branch_taken_0x18b858 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x18B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B858u;
        // 0x18b85c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b858) {
            ctx->pc = 0x18B8C8u;
            goto label_18b8c8;
        }
    }
    ctx->pc = 0x18B860u;
    // 0x18b860: 0x14c2002d  bne         $a2, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x18B860u;
    {
        const bool branch_taken_0x18b860 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x18B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B860u;
        // 0x18b864: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b860) {
            ctx->pc = 0x18B918u;
            goto label_18b918;
        }
    }
    ctx->pc = 0x18B868u;
    // 0x18b868: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x18b868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x18b86c: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x18b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x18b870: 0xa3a80004  sb          $t0, 0x4($sp)
    ctx->pc = 0x18b870u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 8));
    // 0x18b874: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x18b874u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b878: 0xa0480002  sb          $t0, 0x2($v0)
    ctx->pc = 0x18b878u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 8));
    // 0x18b87c: 0xa0480001  sb          $t0, 0x1($v0)
    ctx->pc = 0x18b87cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x18b880: 0xae060198  sw          $a2, 0x198($s0)
    ctx->pc = 0x18b880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 6));
    // 0x18b884: 0xae00019c  sw          $zero, 0x19C($s0)
    ctx->pc = 0x18b884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 0));
    // 0x18b888: 0x8e0900cc  lw          $t1, 0xCC($s0)
    ctx->pc = 0x18b888u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x18b88c: 0x8fb10004  lw          $s1, 0x4($sp)
    ctx->pc = 0x18b88cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x18b890: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x18B890u;
    {
        const bool branch_taken_0x18b890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B890u;
        // 0x18b894: 0xc61400b8  lwc1        $f20, 0xB8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b890) {
            ctx->pc = 0x18B914u;
            goto label_18b914;
        }
    }
    ctx->pc = 0x18B898u;
label_18b898:
    // 0x18b898: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x18b898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x18b89c: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x18b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x18b8a0: 0xa3a80008  sb          $t0, 0x8($sp)
    ctx->pc = 0x18b8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 8));
    // 0x18b8a4: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x18b8a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b8a8: 0xa0480002  sb          $t0, 0x2($v0)
    ctx->pc = 0x18b8a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 8));
    // 0x18b8ac: 0xa0480001  sb          $t0, 0x1($v0)
    ctx->pc = 0x18b8acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x18b8b0: 0xae040198  sw          $a0, 0x198($s0)
    ctx->pc = 0x18b8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 4));
    // 0x18b8b4: 0xae00019c  sw          $zero, 0x19C($s0)
    ctx->pc = 0x18b8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 0));
    // 0x18b8b8: 0x8e090054  lw          $t1, 0x54($s0)
    ctx->pc = 0x18b8b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x18b8bc: 0x8fb10008  lw          $s1, 0x8($sp)
    ctx->pc = 0x18b8bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18b8c0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x18B8C0u;
    {
        const bool branch_taken_0x18b8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B8C0u;
        // 0x18b8c4: 0xc6140040  lwc1        $f20, 0x40($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b8c0) {
            ctx->pc = 0x18B914u;
            goto label_18b914;
        }
    }
    ctx->pc = 0x18B8C8u;
label_18b8c8:
    // 0x18b8c8: 0xae060198  sw          $a2, 0x198($s0)
    ctx->pc = 0x18b8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 6));
    // 0x18b8cc: 0xae00019c  sw          $zero, 0x19C($s0)
    ctx->pc = 0x18b8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 0));
    // 0x18b8d0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x18B8D0u;
    {
        const bool branch_taken_0x18b8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B8D0u;
        // 0x18b8d4: 0xc6140088  lwc1        $f20, 0x88($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b8d0) {
            ctx->pc = 0x18B914u;
            goto label_18b914;
        }
    }
    ctx->pc = 0x18B8D8u;
label_18b8d8:
    // 0x18b8d8: 0x8e030198  lw          $v1, 0x198($s0)
    ctx->pc = 0x18b8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x18b8dc: 0x1064000d  beq         $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x18B8DCu;
    {
        const bool branch_taken_0x18b8dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x18B8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B8DCu;
        // 0x18b8e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b8dc) {
            ctx->pc = 0x18B914u;
            goto label_18b914;
        }
    }
    ctx->pc = 0x18B8E4u;
    // 0x18b8e4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x18B8E4u;
    {
        const bool branch_taken_0x18b8e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B8E4u;
        // 0x18b8e8: 0xae02019c  sw          $v0, 0x19C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b8e4) {
            ctx->pc = 0x18B914u;
            goto label_18b914;
        }
    }
    ctx->pc = 0x18B8ECu;
    // 0x18b8ec: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x18b8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x18b8f0: 0x27a2000c  addiu       $v0, $sp, 0xC
    ctx->pc = 0x18b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x18b8f4: 0xa3a8000c  sb          $t0, 0xC($sp)
    ctx->pc = 0x18b8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 8));
    // 0x18b8f8: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x18b8f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b8fc: 0xa0480002  sb          $t0, 0x2($v0)
    ctx->pc = 0x18b8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 8));
    // 0x18b900: 0xa0480001  sb          $t0, 0x1($v0)
    ctx->pc = 0x18b900u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x18b904: 0x8fb1000c  lw          $s1, 0xC($sp)
    ctx->pc = 0x18b904u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x18b908: 0x8e090024  lw          $t1, 0x24($s0)
    ctx->pc = 0x18b908u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x18b90c: 0xc6140010  lwc1        $f20, 0x10($s0)
    ctx->pc = 0x18b90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18b910: 0xae000198  sw          $zero, 0x198($s0)
    ctx->pc = 0x18b910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 0));
label_18b914:
    // 0x18b914: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x18b914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_18b918:
    // 0x18b918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18b918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18b91c:
    // 0x18b91c: 0xc063262  jal         func_18C988
    ctx->pc = 0x18B91Cu;
    SET_GPR_U32(ctx, 31, 0x18B924u);
    ctx->pc = 0x18B920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B91Cu;
    // 0x18b920: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C988u, 0x18B91Cu, 0x18B924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B924u;
label_18b924:
    // 0x18b924: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18b924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b928: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18b928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b92c: 0xc063232  jal         func_18C8C8
    ctx->pc = 0x18B92Cu;
    SET_GPR_U32(ctx, 31, 0x18B934u);
    ctx->pc = 0x18B930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B92Cu;
    // 0x18b930: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C8C8u, 0x18B92Cu, 0x18B934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B934u;
label_18b934:
    // 0x18b934: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x18b934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b938: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18b938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b93c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18b93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b940: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x18b940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18b944: 0x3e00008  jr          $ra
    ctx->pc = 0x18B944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B944u;
        // 0x18b948: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B94Cu;
    // 0x18b94c: 0x0  nop
    ctx->pc = 0x18b94cu;
    // NOP
    ctx->pc = 0x18b950u;
}
