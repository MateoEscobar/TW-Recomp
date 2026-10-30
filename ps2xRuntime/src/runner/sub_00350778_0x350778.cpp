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

// Function: sub_00350778
// Address: 0x350778 - 0x350aa0
void sub_00350778_0x350778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350778_0x350778");
#endif

    switch (ctx->pc) {
        case 0x3507f8u: goto label_3507f8;
        case 0x3508d4u: goto label_3508d4;
        case 0x3508f4u: goto label_3508f4;
        case 0x350934u: goto label_350934;
        default: break;
    }

    ctx->pc = 0x350778u;

    // 0x350778: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x350778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x35077c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x35077cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x350780: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x350780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x350784: 0x3442f7fe  ori         $v0, $v0, 0xF7FE
    ctx->pc = 0x350784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63486);
    // 0x350788: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x350788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x35078c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x35078cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350790: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x350790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x350794: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x350794u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350798: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x350798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x35079c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x35079cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3507a0: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x3507a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x3507a4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x3507a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3507a8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3507a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x3507ac: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x3507acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3507b0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3507b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x3507b4: 0x3c21024  and         $v0, $fp, $v0
    ctx->pc = 0x3507b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & GPR_U64(ctx, 2));
    // 0x3507b8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3507b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x3507bc: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3507bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x3507c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3507c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3507c4: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x3507c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x3507c8: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x3507c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x3507cc: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x3507ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3507d0: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x3507d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
    // 0x3507d4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3507d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x3507d8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3507d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3507dc: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x3507dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x3507e0: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x3507e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x3507e4: 0x2c3102b  sltu        $v0, $s6, $v1
    ctx->pc = 0x3507e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3507e8: 0x1040009e  beqz        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x3507E8u;
    {
        const bool branch_taken_0x3507e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3507ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3507E8u;
        // 0x3507ec: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3507e8) {
            ctx->pc = 0x350A64u;
            goto label_350a64;
        }
    }
    ctx->pc = 0x3507F0u;
    // 0x3507f0: 0x96c60000  lhu         $a2, 0x0($s6)
    ctx->pc = 0x3507f0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3507f4: 0x0  nop
    ctx->pc = 0x3507f4u;
    // NOP
label_3507f8:
    // 0x3507f8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3507f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3507fc: 0x8ee40088  lw          $a0, 0x88($s7)
    ctx->pc = 0x3507fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 136)));
    // 0x350800: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x350800u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x350804: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x350804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x350808: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x350808u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x35080c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x35080cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x350810: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x350810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x350814: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x350814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x350818: 0x1440008e  bnez        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x350818u;
    {
        const bool branch_taken_0x350818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350818u;
        // 0x35081c: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350818) {
            ctx->pc = 0x350A54u;
            goto label_350a54;
        }
    }
    ctx->pc = 0x350820u;
    // 0x350820: 0x8ee30094  lw          $v1, 0x94($s7)
    ctx->pc = 0x350820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 148)));
    // 0x350824: 0x610c2  srl         $v0, $a2, 3
    ctx->pc = 0x350824u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
    // 0x350828: 0x30c40007  andi        $a0, $a2, 0x7
    ctx->pc = 0x350828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x35082c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x35082cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x350830: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x350830u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x350834: 0x851007  srav        $v0, $a1, $a0
    ctx->pc = 0x350834u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x350838: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x350838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35083c: 0x14400084  bnez        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x35083Cu;
    {
        const bool branch_taken_0x35083c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x350840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35083Cu;
        // 0x350840: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35083c) {
            ctx->pc = 0x350A50u;
            goto label_350a50;
        }
    }
    ctx->pc = 0x350844u;
    // 0x350844: 0x861004  sllv        $v0, $a2, $a0
    ctx->pc = 0x350844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x350848: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x350848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x35084c: 0x1e22c3  sra         $a0, $fp, 11
    ctx->pc = 0x35084cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 30), 11));
    // 0x350850: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x350850u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x350854: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x350854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x350858: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x350858u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x35085c: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x35085cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x350860: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x350860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x350864: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x350864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x350868: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x350868u;
    {
        const bool branch_taken_0x350868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350868u;
        // 0x35086c: 0x33c50001  andi        $a1, $fp, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x350868) {
            ctx->pc = 0x350888u;
            goto label_350888;
        }
    }
    ctx->pc = 0x350870u;
    // 0x350870: 0x54a00006  bnel        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x350870u;
    {
        const bool branch_taken_0x350870 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x350870) {
            ctx->pc = 0x350874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350870u;
            // 0x350874: 0x96050000  lhu         $a1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35088Cu;
            goto label_35088c;
        }
    }
    ctx->pc = 0x350878u;
    // 0x350878: 0x10800075  beqz        $a0, . + 4 + (0x75 << 2)
    ctx->pc = 0x350878u;
    {
        const bool branch_taken_0x350878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x35087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350878u;
        // 0x35087c: 0x30620800  andi        $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x350878) {
            ctx->pc = 0x350A50u;
            goto label_350a50;
        }
    }
    ctx->pc = 0x350880u;
    // 0x350880: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x350880u;
    {
        const bool branch_taken_0x350880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350880u;
        // 0x350884: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350880) {
            ctx->pc = 0x350A54u;
            goto label_350a54;
        }
    }
    ctx->pc = 0x350888u;
label_350888:
    // 0x350888: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x350888u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_35088c:
    // 0x35088c: 0x96060002  lhu         $a2, 0x2($s0)
    ctx->pc = 0x35088cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x350890: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x350890u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x350894: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x350894u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x350898: 0x8ee2008c  lw          $v0, 0x8C($s7)
    ctx->pc = 0x350898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 140)));
    // 0x35089c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x35089cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3508a0: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x3508a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3508a4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3508a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3508a8: 0x459821  addu        $s3, $v0, $a1
    ctx->pc = 0x3508a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3508ac: 0x44a021  addu        $s4, $v0, $a0
    ctx->pc = 0x3508acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3508b0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3508b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3508b4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3508B4u;
    {
        const bool branch_taken_0x3508b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3508B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3508B4u;
        // 0x3508b8: 0x469021  addu        $s2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3508b4) {
            ctx->pc = 0x3508DCu;
            goto label_3508dc;
        }
    }
    ctx->pc = 0x3508BCu;
    // 0x3508bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3508bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3508c0: 0x26a50010  addiu       $a1, $s5, 0x10
    ctx->pc = 0x3508c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x3508c4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3508c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3508c8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3508c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3508cc: 0xc0cde98  jal         func_337A60
    ctx->pc = 0x3508CCu;
    SET_GPR_U32(ctx, 31, 0x3508D4u);
    ctx->pc = 0x3508D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3508CCu;
    // 0x3508d0: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A60u, 0x3508CCu, 0x3508D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3508D4u;
label_3508d4:
    // 0x3508d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3508D4u;
    {
        const bool branch_taken_0x3508d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3508D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3508D4u;
        // 0x3508d8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3508d4) {
            ctx->pc = 0x3508F8u;
            goto label_3508f8;
        }
    }
    ctx->pc = 0x3508DCu;
label_3508dc:
    // 0x3508dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3508dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3508e0: 0x26a50010  addiu       $a1, $s5, 0x10
    ctx->pc = 0x3508e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x3508e4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3508e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3508e8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3508e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3508ec: 0xc0cde48  jal         func_337920
    ctx->pc = 0x3508ECu;
    SET_GPR_U32(ctx, 31, 0x3508F4u);
    ctx->pc = 0x3508F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3508ECu;
    // 0x3508f0: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337920u, 0x3508ECu, 0x3508F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3508F4u;
label_3508f4:
    // 0x3508f4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3508f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3508f8:
    // 0x3508f8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x3508f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x3508fc: 0x0  nop
    ctx->pc = 0x3508fcu;
    // NOP
    // 0x350900: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x350900u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x350904: 0x0  nop
    ctx->pc = 0x350904u;
    // NOP
    // 0x350908: 0x45010052  bc1t        . + 4 + (0x52 << 2)
    ctx->pc = 0x350908u;
    {
        const bool branch_taken_0x350908 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x35090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350908u;
        // 0x35090c: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350908) {
            ctx->pc = 0x350A54u;
            goto label_350a54;
        }
    }
    ctx->pc = 0x350910u;
    // 0x350910: 0xc6a00020  lwc1        $f0, 0x20($s5)
    ctx->pc = 0x350910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350914: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x350914u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x350918: 0x0  nop
    ctx->pc = 0x350918u;
    // NOP
    // 0x35091c: 0x4503004e  bc1tl       . + 4 + (0x4E << 2)
    ctx->pc = 0x35091Cu;
    {
        const bool branch_taken_0x35091c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35091c) {
            ctx->pc = 0x350920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35091Cu;
            // 0x350920: 0x26d60002  addiu       $s6, $s6, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350A58u;
            goto label_350a58;
        }
    }
    ctx->pc = 0x350924u;
    // 0x350924: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x350924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350928: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x350928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35092c: 0xc0d414e  jal         func_350538
    ctx->pc = 0x35092Cu;
    SET_GPR_U32(ctx, 31, 0x350934u);
    ctx->pc = 0x350930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35092Cu;
    // 0x350930: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350538u, 0x35092Cu, 0x350934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350934u;
label_350934:
    // 0x350934: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x350934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350938: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x350938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x35093c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x35093Cu;
    {
        const bool branch_taken_0x35093c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35093c) {
            ctx->pc = 0x350940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35093Cu;
            // 0x350940: 0xe6340014  swc1        $f20, 0x14($s1) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x350964u;
            goto label_350964;
        }
    }
    ctx->pc = 0x350944u;
    // 0x350944: 0x10800043  beqz        $a0, . + 4 + (0x43 << 2)
    ctx->pc = 0x350944u;
    {
        const bool branch_taken_0x350944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x350948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350944u;
        // 0x350948: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350944) {
            ctx->pc = 0x350A54u;
            goto label_350a54;
        }
    }
    ctx->pc = 0x35094Cu;
    // 0x35094c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x35094cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350950: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x350950u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x350954: 0x0  nop
    ctx->pc = 0x350954u;
    // NOP
    // 0x350958: 0x4502003f  bc1fl       . + 4 + (0x3F << 2)
    ctx->pc = 0x350958u;
    {
        const bool branch_taken_0x350958 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x350958) {
            ctx->pc = 0x35095Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350958u;
            // 0x35095c: 0x26d60002  addiu       $s6, $s6, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350A58u;
            goto label_350a58;
        }
    }
    ctx->pc = 0x350960u;
    // 0x350960: 0xe6340014  swc1        $f20, 0x14($s1)
    ctx->pc = 0x350960u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_350964:
    // 0x350964: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x350964u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
    // 0x350968: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x350968u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x35096c: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x35096cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x350970: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x350970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x350974: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x350974u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x350978: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x350978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x35097c: 0xa623002c  sh          $v1, 0x2C($s1)
    ctx->pc = 0x35097cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x350980: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x350980u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x350984: 0xae300030  sw          $s0, 0x30($s1)
    ctx->pc = 0x350984u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 16));
    // 0x350988: 0x10800031  beqz        $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x350988u;
    {
        const bool branch_taken_0x350988 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x35098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350988u;
        // 0x35098c: 0xa222002e  sb          $v0, 0x2E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 46), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350988) {
            ctx->pc = 0x350A50u;
            goto label_350a50;
        }
    }
    ctx->pc = 0x350990u;
    // 0x350990: 0x7a640000  lq          $a0, 0x0($s3)
    ctx->pc = 0x350990u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x350994: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x350994u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x350998: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x350998u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x35099c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x35099cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x3509a0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3509a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3509a4: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x3509a4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3509a8: 0x4be112ac  vsub.xyzw   $vf10, $vf2, $vf1
    ctx->pc = 0x3509a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x3509ac: 0x4be11aec  vsub.xyzw   $vf11, $vf3, $vf1
    ctx->pc = 0x3509acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x3509b0: 0x4bcb52fe  vopmula.xyz $ACC, $vf10, $vf11
    ctx->pc = 0x3509b0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3509b4: 0x4bca5b2e  vopmsub.xyz $vf12, $vf11, $vf10
    ctx->pc = 0x3509b4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x3509b8: 0x4bcc636a  vmul.xyz    $vf13, $vf12, $vf12
    ctx->pc = 0x3509b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x3509bc: 0x4a20032c  vsub.w      $vf12, $vf0, $vf0
    ctx->pc = 0x3509bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x3509c0: 0x4b0d6b41  vaddy.x     $vf13, $vf13, $vf13y
    ctx->pc = 0x3509c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x3509c4: 0x4b0d6b42  vaddz.x     $vf13, $vf13, $vf13z
    ctx->pc = 0x3509c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x3509c8: 0x4bc162aa  vmul.xyz    $vf10, $vf12, $vf1
    ctx->pc = 0x3509c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x3509cc: 0x4a6d03be  vrsqrt      $Q, $vf0w, $vf13x
    ctx->pc = 0x3509ccu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x3509d0: 0x4a2a6300  vaddx.w     $vf12, $vf12, $vf10x
    ctx->pc = 0x3509d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x3509d4: 0x4a2a6301  vaddy.w     $vf12, $vf12, $vf10y
    ctx->pc = 0x3509d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x3509d8: 0x4a2a6302  vaddz.w     $vf12, $vf12, $vf10z
    ctx->pc = 0x3509d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x3509dc: 0x4a0003bf  vwaitq
    ctx->pc = 0x3509dcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x3509e0: 0x4be0631c  vmulq.xyzw  $vf12, $vf12, $Q
    ctx->pc = 0x3509e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x3509e4: 0x48236000  qmfc2.ni    $v1, $vf12
    ctx->pc = 0x3509e4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x3509e8: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x3509e8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    // 0x3509ec: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3509ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x3509f0: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x3509f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3509f4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3509f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3509f8: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x3509F8u;
    {
        const bool branch_taken_0x3509f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3509f8) {
            ctx->pc = 0x3509FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3509F8u;
            // 0x3509fc: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350A54u;
            goto label_350a54;
        }
    }
    ctx->pc = 0x350A00u;
    // 0x350a00: 0x7aa20010  lq          $v0, 0x10($s5)
    ctx->pc = 0x350a00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x350a04: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x350a04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x350a08: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x350a08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x350a0c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x350a0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x350a10: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x350a10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x350a14: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x350a14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x350a18: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x350a18u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x350a1c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x350a1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350a20: 0x0  nop
    ctx->pc = 0x350a20u;
    // NOP
    // 0x350a24: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x350a24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x350a28: 0x0  nop
    ctx->pc = 0x350a28u;
    // NOP
    // 0x350a2c: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x350A2Cu;
    {
        const bool branch_taken_0x350a2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x350a2c) {
            ctx->pc = 0x350A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350A2Cu;
            // 0x350a30: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350A54u;
            goto label_350a54;
        }
    }
    ctx->pc = 0x350A34u;
    // 0x350a34: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x350a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x350a38: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x350a38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x350a3c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x350a3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x350a40: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x350a40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x350a44: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x350a44u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x350a48: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x350a48u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x350a4c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x350a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_350a50:
    // 0x350a50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x350a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_350a54:
    // 0x350a54: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x350a54u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
label_350a58:
    // 0x350a58: 0x2c3102b  sltu        $v0, $s6, $v1
    ctx->pc = 0x350a58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x350a5c: 0x5440ff66  bnel        $v0, $zero, . + 4 + (-0x9A << 2)
    ctx->pc = 0x350A5Cu;
    {
        const bool branch_taken_0x350a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x350a5c) {
            ctx->pc = 0x350A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350A5Cu;
            // 0x350a60: 0x96c60000  lhu         $a2, 0x0($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3507F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3507f8;
        }
    }
    ctx->pc = 0x350A64u;
label_350a64:
    // 0x350a64: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x350a64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x350a68: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x350a68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x350a6c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x350a6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x350a70: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x350a70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x350a74: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x350a74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x350a78: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x350a78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x350a7c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x350a7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x350a80: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x350a80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x350a84: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x350a84u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x350a88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x350a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x350a8c: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x350a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x350a90: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x350a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x350a94: 0x3e00008  jr          $ra
    ctx->pc = 0x350A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350A94u;
        // 0x350a98: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350A9Cu;
    // 0x350a9c: 0x0  nop
    ctx->pc = 0x350a9cu;
    // NOP
    ctx->pc = 0x350aa0u;
}
