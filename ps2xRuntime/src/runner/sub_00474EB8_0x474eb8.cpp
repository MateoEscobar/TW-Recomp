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

// Function: sub_00474EB8
// Address: 0x474eb8 - 0x475690
void sub_00474EB8_0x474eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00474EB8_0x474eb8");
#endif

    switch (ctx->pc) {
        case 0x474f70u: goto label_474f70;
        case 0x475060u: goto label_475060;
        case 0x475218u: goto label_475218;
        default: break;
    }

    ctx->pc = 0x474eb8u;

    // 0x474eb8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x474eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x474ebc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x474ebcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474ec0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x474ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x474ec4: 0x70427b89  pcpyld      $t7, $v0, $v0
    ctx->pc = 0x474ec4u;
    SET_GPR_VEC(ctx, 15, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x474ec8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x474ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x474ecc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x474eccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474ed0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x474ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x474ed4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x474ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x474ed8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x474ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x474edc: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x474edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x474ee0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x474ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x474ee4: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x474ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x474ee8: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x474ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x474eec: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x474eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x474ef0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x474ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x474ef4: 0x8ec50030  lw          $a1, 0x30($s6)
    ctx->pc = 0x474ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x474ef8: 0x907300c2  lbu         $s3, 0xC2($v1)
    ctx->pc = 0x474ef8u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 194)));
    // 0x474efc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x474efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x474f00: 0x8ec3000c  lw          $v1, 0xC($s6)
    ctx->pc = 0x474f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x474f04: 0x248e0018  addiu       $t6, $a0, 0x18
    ctx->pc = 0x474f04u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x474f08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x474f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x474f0c: 0x8dc50020  lw          $a1, 0x20($t6)
    ctx->pc = 0x474f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 32)));
    // 0x474f10: 0x8dc4000c  lw          $a0, 0xC($t6)
    ctx->pc = 0x474f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
    // 0x474f14: 0x30420009  andi        $v0, $v0, 0x9
    ctx->pc = 0x474f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)9);
    // 0x474f18: 0x8dc3001c  lw          $v1, 0x1C($t6)
    ctx->pc = 0x474f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 28)));
    // 0x474f1c: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x474f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x474f20: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x474F20u;
    {
        const bool branch_taken_0x474f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x474F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474F20u;
        // 0x474f24: 0x8dc90008  lw          $t1, 0x8($t6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474f20) {
            ctx->pc = 0x474F4Cu;
            goto label_474f4c;
        }
    }
    ctx->pc = 0x474F28u;
    // 0x474f28: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x474f28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x474f2c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x474f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x474f30: 0x800013  mtlo        $a0
    ctx->pc = 0x474f30u;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x474f34: 0x90e700c5  lbu         $a3, 0xC5($a3)
    ctx->pc = 0x474f34u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 197)));
    // 0x474f38: 0x70e20000  madd        $zero, $a3, $v0
    ctx->pc = 0x474f38u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x474f3c: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x474f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x474f40: 0x1812  mflo        $v1
    ctx->pc = 0x474f40u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x474f44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x474F44u;
    {
        const bool branch_taken_0x474f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x474F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474F44u;
        // 0x474f48: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474f44) {
            ctx->pc = 0x474F5Cu;
            goto label_474f5c;
        }
    }
    ctx->pc = 0x474F4Cu;
label_474f4c:
    // 0x474f4c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x474f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x474f50: 0x90a50215  lbu         $a1, 0x215($a1)
    ctx->pc = 0x474f50u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 533)));
    // 0x474f54: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x474f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x474f58: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x474f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
label_474f5c:
    // 0x474f5c: 0x8dc3001c  lw          $v1, 0x1C($t6)
    ctx->pc = 0x474f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 28)));
    // 0x474f60: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x474f60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474f64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x474f64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474f68: 0x186001ae  blez        $v1, . + 4 + (0x1AE << 2)
    ctx->pc = 0x474F68u;
    {
        const bool branch_taken_0x474f68 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x474F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474F68u;
        // 0x474f6c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474f68) {
            ctx->pc = 0x475624u;
            goto label_475624;
        }
    }
    ctx->pc = 0x474F70u;
label_474f70:
    // 0x474f70: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x474f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x474f74: 0x2a3102a  slt         $v0, $s5, $v1
    ctx->pc = 0x474f74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x474f78: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x474F78u;
    {
        const bool branch_taken_0x474f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474f78) {
            ctx->pc = 0x474F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x474F78u;
            // 0x474f7c: 0x8dc20018  lw          $v0, 0x18($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x474F88u;
            goto label_474f88;
        }
    }
    ctx->pc = 0x474F80u;
    // 0x474f80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x474F80u;
    {
        const bool branch_taken_0x474f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x474F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474F80u;
        // 0x474f84: 0x8dcb0018  lw          $t3, 0x18($t6) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474f80) {
            ctx->pc = 0x474F94u;
            goto label_474f94;
        }
    }
    ctx->pc = 0x474F88u;
label_474f88:
    // 0x474f88: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x474f88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x474f8c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x474f8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x474f90: 0xe25823  subu        $t3, $a3, $v0
    ctx->pc = 0x474f90u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_474f94:
    // 0x474f94: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x474f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x474f98: 0x2a3001b  divu        $zero, $s5, $v1
    ctx->pc = 0x474f98u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,21); } }
    // 0x474f9c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x474F9Cu;
    {
        const bool branch_taken_0x474f9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x474f9c) {
            ctx->pc = 0x474FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x474F9Cu;
            // 0x474fa0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x474FA4u;
            goto label_474fa4;
        }
    }
    ctx->pc = 0x474FA4u;
label_474fa4:
    // 0x474fa4: 0x1010  mfhi        $v0
    ctx->pc = 0x474fa4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x474fa8: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x474FA8u;
    {
        const bool branch_taken_0x474fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x474fa8) {
            ctx->pc = 0x474FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x474FA8u;
            // 0x474fac: 0x8ec20024  lw          $v0, 0x24($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x475014u;
            goto label_475014;
        }
    }
    ctx->pc = 0x474FB0u;
    // 0x474fb0: 0x1341023  subu        $v0, $t1, $s4
    ctx->pc = 0x474fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
    // 0x474fb4: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x474fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x474fb8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x474fb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x474fbc: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x474fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x474fc0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x474fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x474fc4: 0x34631100  ori         $v1, $v1, 0x1100
    ctx->pc = 0x474fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4352);
    // 0x474fc8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x474fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x474fcc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x474fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x474fd0: 0x15180b  movn        $v1, $zero, $s5
    ctx->pc = 0x474fd0u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x474fd4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x474fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x474fd8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x474fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x474fdc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x474fdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474fe0: 0x90a400c0  lbu         $a0, 0xC0($a1)
    ctx->pc = 0x474fe0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x474fe4: 0x70672b89  pcpyld      $a1, $v1, $a3
    ctx->pc = 0x474fe4u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x474fe8: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x474FE8u;
    {
        const bool branch_taken_0x474fe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x474fe8) {
            ctx->pc = 0x474FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x474FE8u;
            // 0x474fec: 0x7e850000  sq          $a1, 0x0($s4) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x475008u;
            goto label_475008;
        }
    }
    ctx->pc = 0x474FF0u;
    // 0x474ff0: 0x52a00005  beql        $s5, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x474FF0u;
    {
        const bool branch_taken_0x474ff0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x474ff0) {
            ctx->pc = 0x474FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x474FF0u;
            // 0x474ff4: 0x7e850000  sq          $a1, 0x0($s4) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x475008u;
            goto label_475008;
        }
    }
    ctx->pc = 0x474FF8u;
    // 0x474ff8: 0xfe870000  sd          $a3, 0x0($s4)
    ctx->pc = 0x474ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 7));
    // 0x474ffc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x474ffcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x475000: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x475000u;
    {
        const bool branch_taken_0x475000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475000u;
        // 0x475004: 0x120a02d  daddu       $s4, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475000) {
            ctx->pc = 0x475010u;
            goto label_475010;
        }
    }
    ctx->pc = 0x475008u;
label_475008:
    // 0x475008: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x475008u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47500c: 0x26890010  addiu       $t1, $s4, 0x10
    ctx->pc = 0x47500cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_475010:
    // 0x475010: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x475010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_475014:
    // 0x475014: 0x26a70001  addiu       $a3, $s5, 0x1
    ctx->pc = 0x475014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x475018: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x475018u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47501c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x47501cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x475020: 0x2442000b  addiu       $v0, $v0, 0xB
    ctx->pc = 0x475020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
    // 0x475024: 0x18400077  blez        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x475024u;
    {
        const bool branch_taken_0x475024 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x475028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475024u;
        // 0x475028: 0xafa70018  sw          $a3, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475024) {
            ctx->pc = 0x475204u;
            goto label_475204;
        }
    }
    ctx->pc = 0x47502Cu;
    // 0x47502c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x47502cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x475030: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x475030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x475034: 0x8fbe0000  lw          $fp, 0x0($sp)
    ctx->pc = 0x475034u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x475038: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x475038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x47503c: 0x3c12ff00  lui         $s2, 0xFF00
    ctx->pc = 0x47503cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65280 << 16));
    // 0x475040: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x475040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x475044: 0x27d80020  addiu       $t8, $fp, 0x20
    ctx->pc = 0x475044u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x475048: 0x25c200a0  addiu       $v0, $t6, 0xA0
    ctx->pc = 0x475048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 160));
    // 0x47504c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x47504cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x475050: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x475050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x475054: 0x25d700a4  addiu       $s7, $t6, 0xA4
    ctx->pc = 0x475054u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 14), 164));
    // 0x475058: 0x36524000  ori         $s2, $s2, 0x4000
    ctx->pc = 0x475058u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16384);
    // 0x47505c: 0x300c82d  daddu       $t9, $t8, $zero
    ctx->pc = 0x47505cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_475060:
    // 0x475060: 0x8f030000  lw          $v1, 0x0($t8)
    ctx->pc = 0x475060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x475064: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x475064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x475068: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x475068u;
    {
        const bool branch_taken_0x475068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475068u;
        // 0x47506c: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x475068) {
            ctx->pc = 0x4751E4u;
            goto label_4751e4;
        }
    }
    ctx->pc = 0x475070u;
    // 0x475070: 0x5440005d  bnel        $v0, $zero, . + 4 + (0x5D << 2)
    ctx->pc = 0x475070u;
    {
        const bool branch_taken_0x475070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x475070) {
            ctx->pc = 0x475074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x475070u;
            // 0x475074: 0x8ec30024  lw          $v1, 0x24($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4751E8u;
            goto label_4751e8;
        }
    }
    ctx->pc = 0x475078u;
    // 0x475078: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x475078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x47507c: 0x3c026800  lui         $v0, 0x6800
    ctx->pc = 0x47507cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26624 << 16));
    // 0x475080: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x475080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x475084: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x475084u;
    {
        const bool branch_taken_0x475084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x475088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475084u;
        // 0x475088: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x475084) {
            ctx->pc = 0x4750F4u;
            goto label_4750f4;
        }
    }
    ctx->pc = 0x47508Cu;
    // 0x47508c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x47508Cu;
    {
        const bool branch_taken_0x47508c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x475090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47508Cu;
        // 0x475090: 0x3c026d00  lui         $v0, 0x6D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27904 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47508c) {
            ctx->pc = 0x4750CCu;
            goto label_4750cc;
        }
    }
    ctx->pc = 0x475094u;
    // 0x475094: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x475094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x475098: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x475098u;
    {
        const bool branch_taken_0x475098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x47509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475098u;
        // 0x47509c: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x475098) {
            ctx->pc = 0x4750ECu;
            goto label_4750ec;
        }
    }
    ctx->pc = 0x4750A0u;
    // 0x4750a0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4750A0u;
    {
        const bool branch_taken_0x4750a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4750A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4750A0u;
        // 0x4750a4: 0x3c1e6500  lui         $fp, 0x6500 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)25856 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4750a0) {
            ctx->pc = 0x4750BCu;
            goto label_4750bc;
        }
    }
    ctx->pc = 0x4750A8u;
    // 0x4750a8: 0x3c076000  lui         $a3, 0x6000
    ctx->pc = 0x4750a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24576 << 16));
    // 0x4750ac: 0x1067000d  beq         $v1, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x4750ACu;
    {
        const bool branch_taken_0x4750ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x4750B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4750ACu;
        // 0x4750b0: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4750ac) {
            ctx->pc = 0x4750E4u;
            goto label_4750e4;
        }
    }
    ctx->pc = 0x4750B4u;
    // 0x4750b4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4750B4u;
    {
        const bool branch_taken_0x4750b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4750B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4750B4u;
        // 0x4750b8: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4750b4) {
            ctx->pc = 0x475104u;
            goto label_475104;
        }
    }
    ctx->pc = 0x4750BCu;
label_4750bc:
    // 0x4750bc: 0x107e0009  beq         $v1, $fp, . + 4 + (0x9 << 2)
    ctx->pc = 0x4750BCu;
    {
        const bool branch_taken_0x4750bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 30));
        ctx->pc = 0x4750C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4750BCu;
        // 0x4750c0: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4750bc) {
            ctx->pc = 0x4750E4u;
            goto label_4750e4;
        }
    }
    ctx->pc = 0x4750C4u;
    // 0x4750c4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4750C4u;
    {
        const bool branch_taken_0x4750c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4750C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4750C4u;
        // 0x4750c8: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4750c4) {
            ctx->pc = 0x475104u;
            goto label_475104;
        }
    }
    ctx->pc = 0x4750CCu;
label_4750cc:
    // 0x4750cc: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4750CCu;
    {
        const bool branch_taken_0x4750cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4750D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4750CCu;
        // 0x4750d0: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4750cc) {
            ctx->pc = 0x4750ECu;
            goto label_4750ec;
        }
    }
    ctx->pc = 0x4750D4u;
    // 0x4750d4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4750D4u;
    {
        const bool branch_taken_0x4750d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4750D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4750D4u;
        // 0x4750d8: 0x3c026e00  lui         $v0, 0x6E00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28160 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4750d4) {
            ctx->pc = 0x4750FCu;
            goto label_4750fc;
        }
    }
    ctx->pc = 0x4750DCu;
    // 0x4750dc: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4750DCu;
    {
        const bool branch_taken_0x4750dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4750E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4750DCu;
        // 0x4750e0: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4750dc) {
            ctx->pc = 0x475100u;
            goto label_475100;
        }
    }
    ctx->pc = 0x4750E4u;
label_4750e4:
    // 0x4750e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4750E4u;
    {
        const bool branch_taken_0x4750e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4750E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4750E4u;
        // 0x4750e8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4750e4) {
            ctx->pc = 0x475100u;
            goto label_475100;
        }
    }
    ctx->pc = 0x4750ECu;
label_4750ec:
    // 0x4750ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4750ECu;
    {
        const bool branch_taken_0x4750ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4750F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4750ECu;
        // 0x4750f0: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4750ec) {
            ctx->pc = 0x475100u;
            goto label_475100;
        }
    }
    ctx->pc = 0x4750F4u;
label_4750f4:
    // 0x4750f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4750F4u;
    {
        const bool branch_taken_0x4750f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4750F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4750F4u;
        // 0x4750f8: 0x240a0003  addiu       $t2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4750f4) {
            ctx->pc = 0x475100u;
            goto label_475100;
        }
    }
    ctx->pc = 0x4750FCu;
label_4750fc:
    // 0x4750fc: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x4750fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_475100:
    // 0x475100: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x475100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_475104:
    // 0x475104: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x475104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x475108: 0x8ec30024  lw          $v1, 0x24($s6)
    ctx->pc = 0x475108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
    // 0x47510c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x47510Cu;
    {
        const bool branch_taken_0x47510c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x475110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47510Cu;
        // 0x475110: 0x8c4c0000  lw          $t4, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47510c) {
            ctx->pc = 0x47511Cu;
            goto label_47511c;
        }
    }
    ctx->pc = 0x475114u;
    // 0x475114: 0x2f01021  addu        $v0, $s7, $s0
    ctx->pc = 0x475114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x475118: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x475118u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_47511c:
    // 0x47511c: 0x16a3018  mult        $a2, $t3, $t2
    ctx->pc = 0x47511cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x475120: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x475120u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x475124: 0x8dc50018  lw          $a1, 0x18($t6)
    ctx->pc = 0x475124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x475128: 0x1d01821  addu        $v1, $t6, $s0
    ctx->pc = 0x475128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
    // 0x47512c: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x47512cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x475130: 0x906800ae  lbu         $t0, 0xAE($v1)
    ctx->pc = 0x475130u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 174)));
    // 0x475134: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x475134u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x475138: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x475138u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x47513c: 0x24c70003  addiu       $a3, $a2, 0x3
    ctx->pc = 0x47513cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x475140: 0x241efffc  addiu       $fp, $zero, -0x4
    ctx->pc = 0x475140u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x475144: 0xfe1824  and         $v1, $a3, $fp
    ctx->pc = 0x475144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 30));
    // 0x475148: 0x8f240000  lw          $a0, 0x0($t9)
    ctx->pc = 0x475148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x47514c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x47514cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x475150: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x475150u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
    // 0x475154: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x475154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x475158: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x475158u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x47515c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x47515cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x475160: 0x8dc60008  lw          $a2, 0x8($t6)
    ctx->pc = 0x475160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x475164: 0x6a001a  div         $zero, $v1, $t2
    ctx->pc = 0x475164u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x475168: 0x922024  and         $a0, $a0, $s2
    ctx->pc = 0x475168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 18));
    // 0x47516c: 0xc2900  sll         $a1, $t4, 4
    ctx->pc = 0x47516cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x475170: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x475170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x475174: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x475174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x475178: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x475178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x47517c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x47517cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x475180: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x475180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x475184: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x475184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x475188: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x475188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x47518c: 0x46102d  daddu       $v0, $v0, $a2
    ctx->pc = 0x47518cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 6));
    // 0x475190: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x475190u;
    {
        const bool branch_taken_0x475190 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x475190) {
            ctx->pc = 0x475194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x475190u;
            // 0x475194: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x475198u;
            goto label_475198;
        }
    }
    ctx->pc = 0x475198u;
label_475198:
    // 0x475198: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x475198u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x47519c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x47519cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4751a0: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x4751a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x4751a4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x4751a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x4751a8: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x4751a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4751ac: 0x1812  mflo        $v1
    ctx->pc = 0x4751acu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x4751b0: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x4751b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x4751b4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4751b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4751b8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x4751b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4751bc: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x4751bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x4751c0: 0x5e2025  or          $a0, $v0, $fp
    ctx->pc = 0x4751c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x4751c4: 0x70872b89  pcpyld      $a1, $a0, $a3
    ctx->pc = 0x4751c4u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x4751c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4751c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4751cc: 0x7e850000  sq          $a1, 0x0($s4)
    ctx->pc = 0x4751ccu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 5));
    // 0x4751d0: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x4751d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x4751d4: 0x70472b89  pcpyld      $a1, $v0, $a3
    ctx->pc = 0x4751d4u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x4751d8: 0x25340010  addiu       $s4, $t1, 0x10
    ctx->pc = 0x4751d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x4751dc: 0x7d250000  sq          $a1, 0x0($t1)
    ctx->pc = 0x4751dcu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
    // 0x4751e0: 0x26890010  addiu       $t1, $s4, 0x10
    ctx->pc = 0x4751e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_4751e4:
    // 0x4751e4: 0x8ec30024  lw          $v1, 0x24($s6)
    ctx->pc = 0x4751e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_4751e8:
    // 0x4751e8: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x4751e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x4751ec: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x4751ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x4751f0: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x4751f0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x4751f4: 0x2462000b  addiu       $v0, $v1, 0xB
    ctx->pc = 0x4751f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 11));
    // 0x4751f8: 0x1a2102a  slt         $v0, $t5, $v0
    ctx->pc = 0x4751f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4751fc: 0x1440ff98  bnez        $v0, . + 4 + (-0x68 << 2)
    ctx->pc = 0x4751FCu;
    {
        const bool branch_taken_0x4751fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x475200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4751FCu;
        // 0x475200: 0x27390008  addiu       $t9, $t9, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4751fc) {
            ctx->pc = 0x475060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_475060;
        }
    }
    ctx->pc = 0x475204u;
label_475204:
    // 0x475204: 0x2462000b  addiu       $v0, $v1, 0xB
    ctx->pc = 0x475204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 11));
    // 0x475208: 0x184000f6  blez        $v0, . + 4 + (0xF6 << 2)
    ctx->pc = 0x475208u;
    {
        const bool branch_taken_0x475208 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x47520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475208u;
        // 0x47520c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475208) {
            ctx->pc = 0x4755E4u;
            goto label_4755e4;
        }
    }
    ctx->pc = 0x475210u;
    // 0x475210: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x475210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x475214: 0x0  nop
    ctx->pc = 0x475214u;
    // NOP
label_475218:
    // 0x475218: 0xd10c0  sll         $v0, $t5, 3
    ctx->pc = 0x475218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
    // 0x47521c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47521cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x475220: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x475220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x475224: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x475224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x475228: 0x106000e8  beqz        $v1, . + 4 + (0xE8 << 2)
    ctx->pc = 0x475228u;
    {
        const bool branch_taken_0x475228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x47522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475228u;
        // 0x47522c: 0x30422000  andi        $v0, $v0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x475228) {
            ctx->pc = 0x4755CCu;
            goto label_4755cc;
        }
    }
    ctx->pc = 0x475230u;
    // 0x475230: 0x104000e6  beqz        $v0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x475230u;
    {
        const bool branch_taken_0x475230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x475234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475230u;
        // 0x475234: 0x2da2000d  sltiu       $v0, $t5, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x475230) {
            ctx->pc = 0x4755CCu;
            goto label_4755cc;
        }
    }
    ctx->pc = 0x475238u;
    // 0x475238: 0x104000e4  beqz        $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x475238u;
    {
        const bool branch_taken_0x475238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475238u;
        // 0x47523c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475238) {
            ctx->pc = 0x4755CCu;
            goto label_4755cc;
        }
    }
    ctx->pc = 0x475240u;
    // 0x475240: 0xd1880  sll         $v1, $t5, 2
    ctx->pc = 0x475240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x475244: 0x2442ea60  addiu       $v0, $v0, -0x15A0
    ctx->pc = 0x475244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
    // 0x475248: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x475248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x47524c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x47524cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x475250: 0x800008  jr          $a0
    ctx->pc = 0x475250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x475258u: goto label_475258;
            case 0x4752D0u: goto label_4752d0;
            case 0x475338u: goto label_475338;
            case 0x4753ACu: goto label_4753ac;
            case 0x475414u: goto label_475414;
            case 0x475480u: goto label_475480;
            case 0x4754F8u: goto label_4754f8;
            case 0x47555Cu: goto label_47555c;
            case 0x4755CCu: goto label_4755cc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x475250u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x475258u;
label_475258:
    // 0x475258: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x475258u;
    {
        const bool branch_taken_0x475258 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x475258) {
            ctx->pc = 0x47526Cu;
            goto label_47526c;
        }
    }
    ctx->pc = 0x475260u;
    // 0x475260: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x475260u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x475264: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x475264u;
    {
        const bool branch_taken_0x475264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475264u;
        // 0x475268: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475264) {
            ctx->pc = 0x475274u;
            goto label_475274;
        }
    }
    ctx->pc = 0x47526Cu;
label_47526c:
    // 0x47526c: 0x3407a000  ori         $a3, $zero, 0xA000
    ctx->pc = 0x47526cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x475270: 0x73afc  dsll32      $a3, $a3, 11
    ctx->pc = 0x475270u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 11));
label_475274:
    // 0x475274: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x475274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x475278: 0x3c036800  lui         $v1, 0x6800
    ctx->pc = 0x475278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26624 << 16));
    // 0x47527c: 0x1a61018  mult        $v0, $t5, $a2
    ctx->pc = 0x47527cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x475280: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x475280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x475284: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x475284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x475288: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x475288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x47528c: 0x2642025  or          $a0, $s3, $a0
    ctx->pc = 0x47528cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | GPR_U64(ctx, 4));
    // 0x475290: 0x4e3021  addu        $a2, $v0, $t6
    ctx->pc = 0x475290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x475294: 0x90c500ae  lbu         $a1, 0xAE($a2)
    ctx->pc = 0x475294u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 174)));
    // 0x475298: 0xb1400  sll         $v0, $t3, 16
    ctx->pc = 0x475298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x47529c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x47529cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4752a0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4752a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4752a4: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x4752a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x4752a8: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x4752a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4752ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4752acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4752b0: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x4752b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x4752b4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4752b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4752b8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4752b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4752bc: 0x70872b89  pcpyld      $a1, $a0, $a3
    ctx->pc = 0x4752bcu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x4752c0: 0x7d250000  sq          $a1, 0x0($t1)
    ctx->pc = 0x4752c0u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
    // 0x4752c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4752c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4752c8: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x4752C8u;
    {
        const bool branch_taken_0x4752c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4752CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4752C8u;
        // 0x4752cc: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4752c8) {
            ctx->pc = 0x4755C4u;
            goto label_4755c4;
        }
    }
    ctx->pc = 0x4752D0u;
label_4752d0:
    // 0x4752d0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4752D0u;
    {
        const bool branch_taken_0x4752d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4752d0) {
            ctx->pc = 0x4752E4u;
            goto label_4752e4;
        }
    }
    ctx->pc = 0x4752D8u;
    // 0x4752d8: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x4752d8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4752dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4752DCu;
    {
        const bool branch_taken_0x4752dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4752E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4752DCu;
        // 0x4752e0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4752dc) {
            ctx->pc = 0x4752ECu;
            goto label_4752ec;
        }
    }
    ctx->pc = 0x4752E4u;
label_4752e4:
    // 0x4752e4: 0x3407a000  ori         $a3, $zero, 0xA000
    ctx->pc = 0x4752e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x4752e8: 0x73afc  dsll32      $a3, $a3, 11
    ctx->pc = 0x4752e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 11));
label_4752ec:
    // 0x4752ec: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x4752ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x4752f0: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x4752f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
    // 0x4752f4: 0x1a51018  mult        $v0, $t5, $a1
    ctx->pc = 0x4752f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4752f8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x4752f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x4752fc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x4752fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x475300: 0xb3100  sll         $a2, $t3, 4
    ctx->pc = 0x475300u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x475304: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x475304u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x475308: 0x2642025  or          $a0, $s3, $a0
    ctx->pc = 0x475308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | GPR_U64(ctx, 4));
    // 0x47530c: 0x4e2821  addu        $a1, $v0, $t6
    ctx->pc = 0x47530cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x475310: 0xb1400  sll         $v0, $t3, 16
    ctx->pc = 0x475310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x475314: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x475314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x475318: 0x90a200ae  lbu         $v0, 0xAE($a1)
    ctx->pc = 0x475318u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 174)));
    // 0x47531c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x47531cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x475320: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x475320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x475324: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x475324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x475328: 0x70872b89  pcpyld      $a1, $a0, $a3
    ctx->pc = 0x475328u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x47532c: 0x7d250000  sq          $a1, 0x0($t1)
    ctx->pc = 0x47532cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
    // 0x475330: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x475330u;
    {
        const bool branch_taken_0x475330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475330u;
        // 0x475334: 0x1264821  addu        $t1, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475330) {
            ctx->pc = 0x4755C4u;
            goto label_4755c4;
        }
    }
    ctx->pc = 0x475338u;
label_475338:
    // 0x475338: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x475338u;
    {
        const bool branch_taken_0x475338 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x475338) {
            ctx->pc = 0x47534Cu;
            goto label_47534c;
        }
    }
    ctx->pc = 0x475340u;
    // 0x475340: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x475340u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x475344: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x475344u;
    {
        const bool branch_taken_0x475344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475344u;
        // 0x475348: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475344) {
            ctx->pc = 0x475354u;
            goto label_475354;
        }
    }
    ctx->pc = 0x47534Cu;
label_47534c:
    // 0x47534c: 0x3407a000  ori         $a3, $zero, 0xA000
    ctx->pc = 0x47534cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x475350: 0x73afc  dsll32      $a3, $a3, 11
    ctx->pc = 0x475350u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 11));
label_475354:
    // 0x475354: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x475354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x475358: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x475358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
    // 0x47535c: 0x1a61018  mult        $v0, $t5, $a2
    ctx->pc = 0x47535cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x475360: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x475360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x475364: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x475364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x475368: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x475368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x47536c: 0x2642025  or          $a0, $s3, $a0
    ctx->pc = 0x47536cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | GPR_U64(ctx, 4));
    // 0x475370: 0x4e3021  addu        $a2, $v0, $t6
    ctx->pc = 0x475370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x475374: 0x90c500ae  lbu         $a1, 0xAE($a2)
    ctx->pc = 0x475374u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 174)));
    // 0x475378: 0xb1400  sll         $v0, $t3, 16
    ctx->pc = 0x475378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x47537c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x47537cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x475380: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x475380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x475384: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x475384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x475388: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x475388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x47538c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x47538cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x475390: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x475390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x475394: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x475394u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x475398: 0x70872b89  pcpyld      $a1, $a0, $a3
    ctx->pc = 0x475398u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x47539c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x47539cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4753a0: 0x7d250000  sq          $a1, 0x0($t1)
    ctx->pc = 0x4753a0u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
    // 0x4753a4: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x4753A4u;
    {
        const bool branch_taken_0x4753a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4753A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4753A4u;
        // 0x4753a8: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4753a4) {
            ctx->pc = 0x4755C4u;
            goto label_4755c4;
        }
    }
    ctx->pc = 0x4753ACu;
label_4753ac:
    // 0x4753ac: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4753ACu;
    {
        const bool branch_taken_0x4753ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4753ac) {
            ctx->pc = 0x4753C0u;
            goto label_4753c0;
        }
    }
    ctx->pc = 0x4753B4u;
    // 0x4753b4: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x4753b4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4753b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4753B8u;
    {
        const bool branch_taken_0x4753b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4753BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4753B8u;
        // 0x4753bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4753b8) {
            ctx->pc = 0x4753C8u;
            goto label_4753c8;
        }
    }
    ctx->pc = 0x4753C0u;
label_4753c0:
    // 0x4753c0: 0x3407a000  ori         $a3, $zero, 0xA000
    ctx->pc = 0x4753c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x4753c4: 0x73afc  dsll32      $a3, $a3, 11
    ctx->pc = 0x4753c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 11));
label_4753c8:
    // 0x4753c8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x4753c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x4753cc: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x4753ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
    // 0x4753d0: 0x1a51018  mult        $v0, $t5, $a1
    ctx->pc = 0x4753d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4753d4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x4753d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x4753d8: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x4753d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x4753dc: 0xb3100  sll         $a2, $t3, 4
    ctx->pc = 0x4753dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x4753e0: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x4753e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x4753e4: 0x2642025  or          $a0, $s3, $a0
    ctx->pc = 0x4753e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | GPR_U64(ctx, 4));
    // 0x4753e8: 0x4e2821  addu        $a1, $v0, $t6
    ctx->pc = 0x4753e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x4753ec: 0xb1400  sll         $v0, $t3, 16
    ctx->pc = 0x4753ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x4753f0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x4753f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4753f4: 0x90a200ae  lbu         $v0, 0xAE($a1)
    ctx->pc = 0x4753f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 174)));
    // 0x4753f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4753f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4753fc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4753fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x475400: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x475400u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x475404: 0x70872b89  pcpyld      $a1, $a0, $a3
    ctx->pc = 0x475404u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x475408: 0x7d250000  sq          $a1, 0x0($t1)
    ctx->pc = 0x475408u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
    // 0x47540c: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x47540Cu;
    {
        const bool branch_taken_0x47540c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47540Cu;
        // 0x475410: 0x1264821  addu        $t1, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47540c) {
            ctx->pc = 0x4755C4u;
            goto label_4755c4;
        }
    }
    ctx->pc = 0x475414u;
label_475414:
    // 0x475414: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x475414u;
    {
        const bool branch_taken_0x475414 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x475414) {
            ctx->pc = 0x475428u;
            goto label_475428;
        }
    }
    ctx->pc = 0x47541Cu;
    // 0x47541c: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x47541cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x475420: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x475420u;
    {
        const bool branch_taken_0x475420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475420u;
        // 0x475424: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475420) {
            ctx->pc = 0x475430u;
            goto label_475430;
        }
    }
    ctx->pc = 0x475428u;
label_475428:
    // 0x475428: 0x3407a000  ori         $a3, $zero, 0xA000
    ctx->pc = 0x475428u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x47542c: 0x73afc  dsll32      $a3, $a3, 11
    ctx->pc = 0x47542cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 11));
label_475430:
    // 0x475430: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x475430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x475434: 0x3c026e00  lui         $v0, 0x6E00
    ctx->pc = 0x475434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28160 << 16));
    // 0x475438: 0x1a61818  mult        $v1, $t5, $a2
    ctx->pc = 0x475438u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x47543c: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x47543cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x475440: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x475440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x475444: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x475444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x475448: 0x2642025  or          $a0, $s3, $a0
    ctx->pc = 0x475448u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | GPR_U64(ctx, 4));
    // 0x47544c: 0x6e3021  addu        $a2, $v1, $t6
    ctx->pc = 0x47544cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x475450: 0x90c500ae  lbu         $a1, 0xAE($a2)
    ctx->pc = 0x475450u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 174)));
    // 0x475454: 0xb1c00  sll         $v1, $t3, 16
    ctx->pc = 0x475454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x475458: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x475458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x47545c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x47545cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x475460: 0x25630003  addiu       $v1, $t3, 0x3
    ctx->pc = 0x475460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
    // 0x475464: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x475464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x475468: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x475468u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x47546c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x47546cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x475470: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x475470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x475474: 0x70872b89  pcpyld      $a1, $a0, $a3
    ctx->pc = 0x475474u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x475478: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x475478u;
    {
        const bool branch_taken_0x475478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475478u;
        // 0x47547c: 0x7d250000  sq          $a1, 0x0($t1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475478) {
            ctx->pc = 0x4755C0u;
            goto label_4755c0;
        }
    }
    ctx->pc = 0x475480u;
label_475480:
    // 0x475480: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x475480u;
    {
        const bool branch_taken_0x475480 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x475480) {
            ctx->pc = 0x475494u;
            goto label_475494;
        }
    }
    ctx->pc = 0x475488u;
    // 0x475488: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x475488u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x47548c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x47548Cu;
    {
        const bool branch_taken_0x47548c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47548Cu;
        // 0x475490: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47548c) {
            ctx->pc = 0x47549Cu;
            goto label_47549c;
        }
    }
    ctx->pc = 0x475494u;
label_475494:
    // 0x475494: 0x3407a000  ori         $a3, $zero, 0xA000
    ctx->pc = 0x475494u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x475498: 0x73afc  dsll32      $a3, $a3, 11
    ctx->pc = 0x475498u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 11));
label_47549c:
    // 0x47549c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x47549cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x4754a0: 0x3c036a00  lui         $v1, 0x6A00
    ctx->pc = 0x4754a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27136 << 16));
    // 0x4754a4: 0x1a61018  mult        $v0, $t5, $a2
    ctx->pc = 0x4754a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4754a8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x4754a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x4754ac: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x4754acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x4754b0: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x4754b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x4754b4: 0x2642025  or          $a0, $s3, $a0
    ctx->pc = 0x4754b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | GPR_U64(ctx, 4));
    // 0x4754b8: 0x4e3021  addu        $a2, $v0, $t6
    ctx->pc = 0x4754b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x4754bc: 0x90c500ae  lbu         $a1, 0xAE($a2)
    ctx->pc = 0x4754bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 174)));
    // 0x4754c0: 0xb1400  sll         $v0, $t3, 16
    ctx->pc = 0x4754c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x4754c4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x4754c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4754c8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4754c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4754cc: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x4754ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x4754d0: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x4754d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4754d4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4754d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4754d8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x4754d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x4754dc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4754dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4754e0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x4754e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x4754e4: 0x70872b89  pcpyld      $a1, $a0, $a3
    ctx->pc = 0x4754e4u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x4754e8: 0x7d250000  sq          $a1, 0x0($t1)
    ctx->pc = 0x4754e8u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
    // 0x4754ec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4754ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4754f0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x4754F0u;
    {
        const bool branch_taken_0x4754f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4754F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4754F0u;
        // 0x4754f4: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4754f0) {
            ctx->pc = 0x4755C4u;
            goto label_4755c4;
        }
    }
    ctx->pc = 0x4754F8u;
label_4754f8:
    // 0x4754f8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4754F8u;
    {
        const bool branch_taken_0x4754f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4754f8) {
            ctx->pc = 0x47550Cu;
            goto label_47550c;
        }
    }
    ctx->pc = 0x475500u;
    // 0x475500: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x475500u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x475504: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x475504u;
    {
        const bool branch_taken_0x475504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475504u;
        // 0x475508: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475504) {
            ctx->pc = 0x475514u;
            goto label_475514;
        }
    }
    ctx->pc = 0x47550Cu;
label_47550c:
    // 0x47550c: 0x3407a000  ori         $a3, $zero, 0xA000
    ctx->pc = 0x47550cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x475510: 0x73afc  dsll32      $a3, $a3, 11
    ctx->pc = 0x475510u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 11));
label_475514:
    // 0x475514: 0x1732818  mult        $a1, $t3, $s3
    ctx->pc = 0x475514u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x475518: 0x3c046800  lui         $a0, 0x6800
    ctx->pc = 0x475518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26624 << 16));
    // 0x47551c: 0xb1400  sll         $v0, $t3, 16
    ctx->pc = 0x47551cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x475520: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x475520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x475524: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x475524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x475528: 0xb1840  sll         $v1, $t3, 1
    ctx->pc = 0x475528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x47552c: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x47552cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x475530: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x475530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x475534: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x475534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x475538: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x475538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x47553c: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x47553cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x475540: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x475540u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x475544: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x475544u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x475548: 0xa22025  or          $a0, $a1, $v0
    ctx->pc = 0x475548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x47554c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x47554cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x475550: 0x70872b89  pcpyld      $a1, $a0, $a3
    ctx->pc = 0x475550u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x475554: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x475554u;
    {
        const bool branch_taken_0x475554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475554u;
        // 0x475558: 0x7d250000  sq          $a1, 0x0($t1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475554) {
            ctx->pc = 0x4755C0u;
            goto label_4755c0;
        }
    }
    ctx->pc = 0x47555Cu;
label_47555c:
    // 0x47555c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x47555Cu;
    {
        const bool branch_taken_0x47555c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x47555c) {
            ctx->pc = 0x475570u;
            goto label_475570;
        }
    }
    ctx->pc = 0x475564u;
    // 0x475564: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x475564u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x475568: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x475568u;
    {
        const bool branch_taken_0x475568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475568u;
        // 0x47556c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475568) {
            ctx->pc = 0x475578u;
            goto label_475578;
        }
    }
    ctx->pc = 0x475570u;
label_475570:
    // 0x475570: 0x3407a000  ori         $a3, $zero, 0xA000
    ctx->pc = 0x475570u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x475574: 0x73afc  dsll32      $a3, $a3, 11
    ctx->pc = 0x475574u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 11));
label_475578:
    // 0x475578: 0x26b1018  mult        $v0, $s3, $t3
    ctx->pc = 0x475578u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x47557c: 0x3c046a00  lui         $a0, 0x6A00
    ctx->pc = 0x47557cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27136 << 16));
    // 0x475580: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x475580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x475584: 0xb1840  sll         $v1, $t3, 1
    ctx->pc = 0x475584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x475588: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x475588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x47558c: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x47558cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x475590: 0x4b2821  addu        $a1, $v0, $t3
    ctx->pc = 0x475590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x475594: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x475594u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x475598: 0xb1400  sll         $v0, $t3, 16
    ctx->pc = 0x475598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x47559c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x47559cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x4755a0: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x4755a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4755a4: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4755a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x4755a8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x4755a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x4755ac: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x4755acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x4755b0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x4755b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x4755b4: 0xa22025  or          $a0, $a1, $v0
    ctx->pc = 0x4755b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4755b8: 0x70872b89  pcpyld      $a1, $a0, $a3
    ctx->pc = 0x4755b8u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x4755bc: 0x7d250000  sq          $a1, 0x0($t1)
    ctx->pc = 0x4755bcu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
label_4755c0:
    // 0x4755c0: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x4755c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_4755c4:
    // 0x4755c4: 0x7d2f0000  sq          $t7, 0x0($t1)
    ctx->pc = 0x4755c4u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 15));
    // 0x4755c8: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x4755c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_4755cc:
    // 0x4755cc: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x4755ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
    // 0x4755d0: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x4755d0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x4755d4: 0x2442000b  addiu       $v0, $v0, 0xB
    ctx->pc = 0x4755d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
    // 0x4755d8: 0x1a2102a  slt         $v0, $t5, $v0
    ctx->pc = 0x4755d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4755dc: 0x1440ff0e  bnez        $v0, . + 4 + (-0xF2 << 2)
    ctx->pc = 0x4755DCu;
    {
        const bool branch_taken_0x4755dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4755E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4755DCu;
        // 0x4755e0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4755dc) {
            ctx->pc = 0x475218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_475218;
        }
    }
    ctx->pc = 0x4755E4u;
label_4755e4:
    // 0x4755e4: 0x3403a800  ori         $v1, $zero, 0xA800
    ctx->pc = 0x4755e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43008);
    // 0x4755e8: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x4755e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x4755ec: 0x3407b800  ori         $a3, $zero, 0xB800
    ctx->pc = 0x4755ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)47104);
    // 0x4755f0: 0x73b7c  dsll32      $a3, $a3, 13
    ctx->pc = 0x4755f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 13));
    // 0x4755f4: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x4755f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x4755f8: 0x75380a  movz        $a3, $v1, $s5
    ctx->pc = 0x4755f8u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x4755fc: 0x1621025  or          $v0, $t3, $v0
    ctx->pc = 0x4755fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x475600: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x475600u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x475604: 0x473825  or          $a3, $v0, $a3
    ctx->pc = 0x475604u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x475608: 0x8fb50018  lw          $s5, 0x18($sp)
    ctx->pc = 0x475608u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x47560c: 0x70672b89  pcpyld      $a1, $v1, $a3
    ctx->pc = 0x47560cu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x475610: 0x7d250000  sq          $a1, 0x0($t1)
    ctx->pc = 0x475610u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
    // 0x475614: 0x8dc3001c  lw          $v1, 0x1C($t6)
    ctx->pc = 0x475614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 28)));
    // 0x475618: 0x2a3102a  slt         $v0, $s5, $v1
    ctx->pc = 0x475618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x47561c: 0x1440fe54  bnez        $v0, . + 4 + (-0x1AC << 2)
    ctx->pc = 0x47561Cu;
    {
        const bool branch_taken_0x47561c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x475620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47561Cu;
        // 0x475620: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47561c) {
            ctx->pc = 0x474F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_474f70;
        }
    }
    ctx->pc = 0x475624u;
label_475624:
    // 0x475624: 0x1341023  subu        $v0, $t1, $s4
    ctx->pc = 0x475624u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
    // 0x475628: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x475628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x47562c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x47562cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x475630: 0x3c041100  lui         $a0, 0x1100
    ctx->pc = 0x475630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4352 << 16));
    // 0x475634: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x475634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x475638: 0x34841100  ori         $a0, $a0, 0x1100
    ctx->pc = 0x475638u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4352);
    // 0x47563c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x47563cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x475640: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x475640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x475644: 0xfd24fff8  sd          $a0, -0x8($t1)
    ctx->pc = 0x475644u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 4294967288), GPR_U64(ctx, 4));
    // 0x475648: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x475648u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x47564c: 0xfe870000  sd          $a3, 0x0($s4)
    ctx->pc = 0x47564cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 7));
    // 0x475650: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x475650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x475654: 0x906200c0  lbu         $v0, 0xC0($v1)
    ctx->pc = 0x475654u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x475658: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x475658u;
    {
        const bool branch_taken_0x475658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475658) {
            ctx->pc = 0x47565Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x475658u;
            // 0x47565c: 0xfe800008  sd          $zero, 0x8($s4) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x475660u;
            goto label_475660;
        }
    }
    ctx->pc = 0x475660u;
label_475660:
    // 0x475660: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x475660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x475664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x475664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x475668: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x475668u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x47566c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x47566cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x475670: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x475670u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x475674: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x475674u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x475678: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x475678u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x47567c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x47567cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x475680: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x475680u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x475684: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x475684u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x475688: 0x3e00008  jr          $ra
    ctx->pc = 0x475688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475688u;
        // 0x47568c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x475688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x475690u;
}
