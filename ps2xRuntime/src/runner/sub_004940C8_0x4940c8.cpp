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

// Function: sub_004940C8
// Address: 0x4940c8 - 0x4943f0
void sub_004940C8_0x4940c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004940C8_0x4940c8");
#endif

    switch (ctx->pc) {
        case 0x4940f0u: goto label_4940f0;
        case 0x494100u: goto label_494100;
        case 0x494128u: goto label_494128;
        case 0x494170u: goto label_494170;
        case 0x494178u: goto label_494178;
        case 0x494188u: goto label_494188;
        default: break;
    }

    ctx->pc = 0x4940c8u;

    // 0x4940c8: 0x27bdf7a0  addiu       $sp, $sp, -0x860
    ctx->pc = 0x4940c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965152));
    // 0x4940cc: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x4940ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4940d0: 0x7fb00850  sq          $s0, 0x850($sp)
    ctx->pc = 0x4940d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 16));
    // 0x4940d4: 0x7fb10840  sq          $s1, 0x840($sp)
    ctx->pc = 0x4940d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 17));
    // 0x4940d8: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x4940d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x4940dc: 0x184000bf  blez        $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x4940DCu;
    {
        const bool branch_taken_0x4940dc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4940E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4940DCu;
        // 0x4940e0: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4940dc) {
            ctx->pc = 0x4943DCu;
            goto label_4943dc;
        }
    }
    ctx->pc = 0x4940E4u;
    // 0x4940e4: 0x27af0800  addiu       $t7, $sp, 0x800
    ctx->pc = 0x4940e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 2048));
    // 0x4940e8: 0x8d2b000c  lw          $t3, 0xC($t1)
    ctx->pc = 0x4940e8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x4940ec: 0x0  nop
    ctx->pc = 0x4940ecu;
    // NOP
label_4940f0:
    // 0x4940f0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4940f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4940f4: 0x25b10004  addiu       $s1, $t5, 0x4
    ctx->pc = 0x4940f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x4940f8: 0xb6043  sra         $t4, $t3, 1
    ctx->pc = 0x4940f8u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 11), 1));
    // 0x4940fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4940fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_494100:
    // 0x494100: 0x19800010  blez        $t4, . + 4 + (0x10 << 2)
    ctx->pc = 0x494100u;
    {
        const bool branch_taken_0x494100 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x494104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494100u;
        // 0x494104: 0x246a0001  addiu       $t2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494100) {
            ctx->pc = 0x494144u;
            goto label_494144;
        }
    }
    ctx->pc = 0x494108u;
    // 0x494108: 0x8d240018  lw          $a0, 0x18($t1)
    ctx->pc = 0x494108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x49410c: 0x1a31021  addu        $v0, $t5, $v1
    ctx->pc = 0x49410cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x494110: 0x8d250004  lw          $a1, 0x4($t1)
    ctx->pc = 0x494110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x494114: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x494114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x494118: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x494118u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x49411c: 0x7d3821  addu        $a3, $v1, $sp
    ctx->pc = 0x49411cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x494120: 0xb3043  sra         $a2, $t3, 1
    ctx->pc = 0x494120u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 11), 1));
    // 0x494124: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x494124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_494128:
    // 0x494128: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x494128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x49412c: 0xe82021  addu        $a0, $a3, $t0
    ctx->pc = 0x49412cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x494130: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x494130u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x494134: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x494134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x494138: 0x106182a  slt         $v1, $t0, $a2
    ctx->pc = 0x494138u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x49413c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49413Cu;
    {
        const bool branch_taken_0x49413c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x494140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49413Cu;
        // 0x494140: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49413c) {
            ctx->pc = 0x494128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_494128;
        }
    }
    ctx->pc = 0x494144u;
label_494144:
    // 0x494144: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x494144u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494148: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x494148u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x49414c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x49414Cu;
    {
        const bool branch_taken_0x49414c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x494150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49414Cu;
        // 0x494150: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49414c) {
            ctx->pc = 0x494100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_494100;
        }
    }
    ctx->pc = 0x494154u;
    // 0x494154: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x494154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x494158: 0x5840009c  blezl       $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x494158u;
    {
        const bool branch_taken_0x494158 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x494158) {
            ctx->pc = 0x49415Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x494158u;
            // 0x49415c: 0x8d220010  lw          $v0, 0x10($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4943CCu;
            goto label_4943cc;
        }
    }
    ctx->pc = 0x494160u;
    // 0x494160: 0x31b90004  andi        $t9, $t5, 0x4
    ctx->pc = 0x494160u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)4);
    // 0x494164: 0x25b80002  addiu       $t8, $t5, 0x2
    ctx->pc = 0x494164u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x494168: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x494168u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49416c: 0x0  nop
    ctx->pc = 0x49416cu;
    // NOP
label_494170:
    // 0x494170: 0x25100020  addiu       $s0, $t0, 0x20
    ctx->pc = 0x494170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x494174: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x494174u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_494178:
    // 0x494178: 0x256e0020  addiu       $t6, $t3, 0x20
    ctx->pc = 0x494178u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x49417c: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x49417cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494180: 0xb6027  nor         $t4, $zero, $t3
    ctx->pc = 0x494180u;
    SET_GPR_U64(ctx, 12, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 11)));
    // 0x494184: 0x0  nop
    ctx->pc = 0x494184u;
    // NOP
label_494188:
    // 0x494188: 0x13200019  beqz        $t9, . + 4 + (0x19 << 2)
    ctx->pc = 0x494188u;
    {
        const bool branch_taken_0x494188 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x49418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494188u;
        // 0x49418c: 0x30e40002  andi        $a0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x494188) {
            ctx->pc = 0x4941F0u;
            goto label_4941f0;
        }
    }
    ctx->pc = 0x494190u;
    // 0x494190: 0x30e20020  andi        $v0, $a3, 0x20
    ctx->pc = 0x494190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x494194: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x494194u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x494198: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x494198u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x49419c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x49419cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4941a0: 0x30e30004  andi        $v1, $a3, 0x4
    ctx->pc = 0x4941a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x4941a4: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x4941a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x4941a8: 0x30e20008  andi        $v0, $a3, 0x8
    ctx->pc = 0x4941a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x4941ac: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4941acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4941b0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4941b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4941b4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4941b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4941b8: 0x30e30010  andi        $v1, $a3, 0x10
    ctx->pc = 0x4941b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x4941bc: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x4941bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x4941c0: 0x30e60040  andi        $a2, $a3, 0x40
    ctx->pc = 0x4941c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
    // 0x4941c4: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x4941c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x4941c8: 0x31850001  andi        $a1, $t4, 0x1
    ctx->pc = 0x4941c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
    // 0x4941cc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4941ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4941d0: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x4941d0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x4941d4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x4941d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x4941d8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4941d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4941dc: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4941dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x4941e0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4941e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4941e4: 0x822026  xor         $a0, $a0, $v0
    ctx->pc = 0x4941e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x4941e8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x4941E8u;
    {
        const bool branch_taken_0x4941e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4941ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4941E8u;
        // 0x4941ec: 0x16a1821  addu        $v1, $t3, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4941e8) {
            ctx->pc = 0x494248u;
            goto label_494248;
        }
    }
    ctx->pc = 0x4941F0u;
label_4941f0:
    // 0x4941f0: 0x30e20020  andi        $v0, $a3, 0x20
    ctx->pc = 0x4941f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x4941f4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4941f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4941f8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4941f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4941fc: 0x30e30004  andi        $v1, $a3, 0x4
    ctx->pc = 0x4941fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x494200: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x494200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x494204: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x494204u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x494208: 0x30e20008  andi        $v0, $a3, 0x8
    ctx->pc = 0x494208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x49420c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x49420cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x494210: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x494210u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x494214: 0x30e30010  andi        $v1, $a3, 0x10
    ctx->pc = 0x494214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x494218: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x494218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x49421c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x49421cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x494220: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x494220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x494224: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x494224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x494228: 0x30e50040  andi        $a1, $a3, 0x40
    ctx->pc = 0x494228u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
    // 0x49422c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x49422cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x494230: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x494230u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x494234: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x494234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x494238: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x494238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x49423c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x49423cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x494240: 0x16a1821  addu        $v1, $t3, $t2
    ctx->pc = 0x494240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x494244: 0x822026  xor         $a0, $a0, $v0
    ctx->pc = 0x494244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
label_494248:
    // 0x494248: 0x31420001  andi        $v0, $t2, 0x1
    ctx->pc = 0x494248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x49424c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x49424Cu;
    {
        const bool branch_taken_0x49424c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x494250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49424Cu;
        // 0x494250: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49424c) {
            ctx->pc = 0x4942C4u;
            goto label_4942c4;
        }
    }
    ctx->pc = 0x494254u;
    // 0x494254: 0x1e22821  addu        $a1, $t7, $v0
    ctx->pc = 0x494254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x494258: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x494258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x49425c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x49425Cu;
    {
        const bool branch_taken_0x49425c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x494260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49425Cu;
        // 0x494260: 0x90a60000  lbu         $a2, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49425c) {
            ctx->pc = 0x494290u;
            goto label_494290;
        }
    }
    ctx->pc = 0x494264u;
    // 0x494264: 0x41943  sra         $v1, $a0, 5
    ctx->pc = 0x494264u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
    // 0x494268: 0x3082001f  andi        $v0, $a0, 0x1F
    ctx->pc = 0x494268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x49426c: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x49426cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x494270: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x494270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x494274: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x494274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x494278: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x494278u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x49427c: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x49427cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x494280: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x494280u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x494284: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x494284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x494288: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x494288u;
    {
        const bool branch_taken_0x494288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494288u;
        // 0x49428c: 0xc31825  or          $v1, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494288) {
            ctx->pc = 0x49431Cu;
            goto label_49431c;
        }
    }
    ctx->pc = 0x494290u;
label_494290:
    // 0x494290: 0x41143  sra         $v0, $a0, 5
    ctx->pc = 0x494290u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 5));
    // 0x494294: 0x3083001f  andi        $v1, $a0, 0x1F
    ctx->pc = 0x494294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x494298: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x494298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x49429c: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x49429cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x4942a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4942a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4942a4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x4942a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x4942a8: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x4942a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x4942ac: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x4942acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4942b0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4942b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x4942b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4942b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4942b8: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x4942b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x4942bc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x4942BCu;
    {
        const bool branch_taken_0x4942bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4942C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4942BCu;
        // 0x4942c0: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4942bc) {
            ctx->pc = 0x494320u;
            goto label_494320;
        }
    }
    ctx->pc = 0x4942C4u;
label_4942c4:
    // 0x4942c4: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x4942c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x4942c8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x4942C8u;
    {
        const bool branch_taken_0x4942c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4942CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4942C8u;
        // 0x4942cc: 0x1e22821  addu        $a1, $t7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4942c8) {
            ctx->pc = 0x4942F8u;
            goto label_4942f8;
        }
    }
    ctx->pc = 0x4942D0u;
    // 0x4942d0: 0x41943  sra         $v1, $a0, 5
    ctx->pc = 0x4942d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
    // 0x4942d4: 0x3082001f  andi        $v0, $a0, 0x1F
    ctx->pc = 0x4942d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x4942d8: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x4942d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x4942dc: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x4942dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4942e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4942e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4942e4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4942e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4942e8: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x4942e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x4942ec: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x4942ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4942f0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4942F0u;
    {
        const bool branch_taken_0x4942f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4942F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4942F0u;
        // 0x4942f4: 0x31902  srl         $v1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4942f0) {
            ctx->pc = 0x49431Cu;
            goto label_49431c;
        }
    }
    ctx->pc = 0x4942F8u;
label_4942f8:
    // 0x4942f8: 0x41943  sra         $v1, $a0, 5
    ctx->pc = 0x4942f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
    // 0x4942fc: 0x3082001f  andi        $v0, $a0, 0x1F
    ctx->pc = 0x4942fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x494300: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x494300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x494304: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x494304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x494308: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x494308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49430c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x49430cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x494310: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x494310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x494314: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x494314u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x494318: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x494318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_49431c:
    // 0x49431c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x49431cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_494320:
    // 0x494320: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x494320u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x494324: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x494324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x494328: 0x29420020  slti        $v0, $t2, 0x20
    ctx->pc = 0x494328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x49432c: 0x1440ff96  bnez        $v0, . + 4 + (-0x6A << 2)
    ctx->pc = 0x49432Cu;
    {
        const bool branch_taken_0x49432c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x494330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49432Cu;
        // 0x494330: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49432c) {
            ctx->pc = 0x494188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_494188;
        }
    }
    ctx->pc = 0x494334u;
    // 0x494334: 0x1c0582d  daddu       $t3, $t6, $zero
    ctx->pc = 0x494334u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494338: 0x29620080  slti        $v0, $t3, 0x80
    ctx->pc = 0x494338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x49433c: 0x5440ff8e  bnel        $v0, $zero, . + 4 + (-0x72 << 2)
    ctx->pc = 0x49433Cu;
    {
        const bool branch_taken_0x49433c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49433c) {
            ctx->pc = 0x494340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49433Cu;
            // 0x494340: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x494178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_494178;
        }
    }
    ctx->pc = 0x494344u;
    // 0x494344: 0x8d230018  lw          $v1, 0x18($t1)
    ctx->pc = 0x494344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x494348: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x494348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x49434c: 0x1a31818  mult        $v1, $t5, $v1
    ctx->pc = 0x49434cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x494350: 0x7ba40800  lq          $a0, 0x800($sp)
    ctx->pc = 0x494350u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 2048)));
    // 0x494354: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x494354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x494358: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x494358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x49435c: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x49435cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x494360: 0x8d230018  lw          $v1, 0x18($t1)
    ctx->pc = 0x494360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x494364: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x494364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x494368: 0x1a31818  mult        $v1, $t5, $v1
    ctx->pc = 0x494368u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49436c: 0x7ba40810  lq          $a0, 0x810($sp)
    ctx->pc = 0x49436cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 2064)));
    // 0x494370: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x494370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x494374: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x494374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x494378: 0x7c440010  sq          $a0, 0x10($v0)
    ctx->pc = 0x494378u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 4));
    // 0x49437c: 0x8d230018  lw          $v1, 0x18($t1)
    ctx->pc = 0x49437cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x494380: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x494380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x494384: 0x3031818  mult        $v1, $t8, $v1
    ctx->pc = 0x494384u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x494388: 0x7ba40820  lq          $a0, 0x820($sp)
    ctx->pc = 0x494388u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 2080)));
    // 0x49438c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49438cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x494390: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x494390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x494394: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x494394u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x494398: 0x8d230018  lw          $v1, 0x18($t1)
    ctx->pc = 0x494398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x49439c: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x49439cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x4943a0: 0x3031818  mult        $v1, $t8, $v1
    ctx->pc = 0x4943a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4943a4: 0x7ba40830  lq          $a0, 0x830($sp)
    ctx->pc = 0x4943a4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 2096)));
    // 0x4943a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4943a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4943ac: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x4943acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4943b0: 0x7c440010  sq          $a0, 0x10($v0)
    ctx->pc = 0x4943b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 4));
    // 0x4943b4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x4943b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4943b8: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x4943b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x4943bc: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x4943bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4943c0: 0x5440ff6b  bnel        $v0, $zero, . + 4 + (-0x95 << 2)
    ctx->pc = 0x4943C0u;
    {
        const bool branch_taken_0x4943c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4943c0) {
            ctx->pc = 0x4943C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4943C0u;
            // 0x4943c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x494170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_494170;
        }
    }
    ctx->pc = 0x4943C8u;
    // 0x4943c8: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x4943c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
label_4943cc:
    // 0x4943cc: 0x220682d  daddu       $t5, $s1, $zero
    ctx->pc = 0x4943ccu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4943d0: 0x1a2102a  slt         $v0, $t5, $v0
    ctx->pc = 0x4943d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4943d4: 0x5440ff46  bnel        $v0, $zero, . + 4 + (-0xBA << 2)
    ctx->pc = 0x4943D4u;
    {
        const bool branch_taken_0x4943d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4943d4) {
            ctx->pc = 0x4943D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4943D4u;
            // 0x4943d8: 0x8d2b000c  lw          $t3, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4940F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4940f0;
        }
    }
    ctx->pc = 0x4943DCu;
label_4943dc:
    // 0x4943dc: 0x7bb00850  lq          $s0, 0x850($sp)
    ctx->pc = 0x4943dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2128)));
    // 0x4943e0: 0x7bb10840  lq          $s1, 0x840($sp)
    ctx->pc = 0x4943e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2112)));
    // 0x4943e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4943E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4943E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4943E4u;
        // 0x4943e8: 0x27bd0860  addiu       $sp, $sp, 0x860 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4943E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4943ECu;
    // 0x4943ec: 0x0  nop
    ctx->pc = 0x4943ecu;
    // NOP
    ctx->pc = 0x4943f0u;
}
