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

// Function: sub_001B7C10
// Address: 0x1b7c10 - 0x1b7eb0
void sub_001B7C10_0x1b7c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7C10_0x1b7c10");
#endif

    switch (ctx->pc) {
        case 0x1b7df8u: goto label_1b7df8;
        case 0x1b7e38u: goto label_1b7e38;
        default: break;
    }

    ctx->pc = 0x1b7c10u;

    // 0x1b7c10: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b7c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1b7c14: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b7c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1b7c18: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1b7c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1b7c1c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1b7c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1b7c20: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1b7c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x1b7c24: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b7c24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7c28: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1b7c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1b7c2c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1b7c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1b7c30: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1b7c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1b7c34: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1b7c34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7c38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b7c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b7c3c: 0x2484d670  addiu       $a0, $a0, -0x2990
    ctx->pc = 0x1b7c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956656));
    // 0x1b7c40: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1b7c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1b7c44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b7c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b7c48: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1b7c48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1b7c4c: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1b7c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x1b7c50: 0x8e660474  lw          $a2, 0x474($s3)
    ctx->pc = 0x1b7c50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1140)));
    // 0x1b7c54: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1b7c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b7c58: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x1b7c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1b7c5c: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x1b7c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x1b7c60: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1B7C60u;
    {
        const bool branch_taken_0x1b7c60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C60u;
        // 0x1b7c64: 0x448821  addu        $s1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7c60) {
            ctx->pc = 0x1B7D04u;
            goto label_1b7d04;
        }
    }
    ctx->pc = 0x1B7C68u;
    // 0x1b7c68: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x1b7c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x1b7c6c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B7C6Cu;
    {
        const bool branch_taken_0x1b7c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7c6c) {
            ctx->pc = 0x1B7CBCu;
            goto label_1b7cbc;
        }
    }
    ctx->pc = 0x1B7C74u;
    // 0x1b7c74: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B7C74u;
    {
        const bool branch_taken_0x1b7c74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C74u;
        // 0x1b7c78: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7c74) {
            ctx->pc = 0x1B7C9Cu;
            goto label_1b7c9c;
        }
    }
    ctx->pc = 0x1B7C7Cu;
    // 0x1b7c7c: 0x3c01bf14  lui         $at, 0xBF14
    ctx->pc = 0x1b7c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48916 << 16));
    // 0x1b7c80: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1b7c80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
    // 0x1b7c84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7c84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7c88: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x1b7c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
    // 0x1b7c8c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b7c8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b7c90: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b7c90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b7c94: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1B7C94u;
    {
        const bool branch_taken_0x1b7c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7c94) {
            ctx->pc = 0x1B7DA0u;
            goto label_1b7da0;
        }
    }
    ctx->pc = 0x1B7C9Cu;
label_1b7c9c:
    // 0x1b7c9c: 0x3c013f14  lui         $at, 0x3F14
    ctx->pc = 0x1b7c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16148 << 16));
    // 0x1b7ca0: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1b7ca0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
    // 0x1b7ca4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7ca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7ca8: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x1b7ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
    // 0x1b7cac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b7cacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b7cb0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b7cb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b7cb4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1B7CB4u;
    {
        const bool branch_taken_0x1b7cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7cb4) {
            ctx->pc = 0x1B7DA0u;
            goto label_1b7da0;
        }
    }
    ctx->pc = 0x1B7CBCu;
label_1b7cbc:
    // 0x1b7cbc: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B7CBCu;
    {
        const bool branch_taken_0x1b7cbc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7CBCu;
        // 0x1b7cc0: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7cbc) {
            ctx->pc = 0x1B7CE4u;
            goto label_1b7ce4;
        }
    }
    ctx->pc = 0x1B7CC4u;
    // 0x1b7cc4: 0x3c01bec5  lui         $at, 0xBEC5
    ctx->pc = 0x1b7cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48837 << 16));
    // 0x1b7cc8: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1b7cc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x1b7ccc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7cccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7cd0: 0x3c01bd8f  lui         $at, 0xBD8F
    ctx->pc = 0x1b7cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48527 << 16));
    // 0x1b7cd4: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1b7cd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1b7cd8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b7cd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b7cdc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1B7CDCu;
    {
        const bool branch_taken_0x1b7cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7cdc) {
            ctx->pc = 0x1B7DA0u;
            goto label_1b7da0;
        }
    }
    ctx->pc = 0x1B7CE4u;
label_1b7ce4:
    // 0x1b7ce4: 0x3c013ec7  lui         $at, 0x3EC7
    ctx->pc = 0x1b7ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16071 << 16));
    // 0x1b7ce8: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x1b7ce8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x1b7cec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7cecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7cf0: 0x3c01bd8f  lui         $at, 0xBD8F
    ctx->pc = 0x1b7cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48527 << 16));
    // 0x1b7cf4: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1b7cf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1b7cf8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b7cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b7cfc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1B7CFCu;
    {
        const bool branch_taken_0x1b7cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7cfc) {
            ctx->pc = 0x1B7DA0u;
            goto label_1b7da0;
        }
    }
    ctx->pc = 0x1B7D04u;
label_1b7d04:
    // 0x1b7d04: 0x30a20020  andi        $v0, $a1, 0x20
    ctx->pc = 0x1b7d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
    // 0x1b7d08: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B7D08u;
    {
        const bool branch_taken_0x1b7d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D08u;
        // 0x1b7d0c: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d08) {
            ctx->pc = 0x1B7D40u;
            goto label_1b7d40;
        }
    }
    ctx->pc = 0x1B7D10u;
    // 0x1b7d10: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x1B7D10u;
    {
        const bool branch_taken_0x1b7d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7d10) {
            ctx->pc = 0x1B7D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7D10u;
            // 0x1b7d14: 0x8e620474  lw          $v0, 0x474($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7DC4u;
            goto label_1b7dc4;
        }
    }
    ctx->pc = 0x1B7D18u;
    // 0x1b7d18: 0x3c01bf1e  lui         $at, 0xBF1E
    ctx->pc = 0x1b7d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48926 << 16));
    // 0x1b7d1c: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1b7d1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x1b7d20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7d24: 0x10c0001a  beqz        $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B7D24u;
    {
        const bool branch_taken_0x1b7d24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D24u;
        // 0x1b7d28: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d24) {
            ctx->pc = 0x1B7D90u;
            goto label_1b7d90;
        }
    }
    ctx->pc = 0x1B7D2Cu;
    // 0x1b7d2c: 0x3c013f1e  lui         $at, 0x3F1E
    ctx->pc = 0x1b7d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16158 << 16));
    // 0x1b7d30: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1b7d30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x1b7d34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7d38: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B7D38u;
    {
        const bool branch_taken_0x1b7d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7d38) {
            ctx->pc = 0x1B7D94u;
            goto label_1b7d94;
        }
    }
    ctx->pc = 0x1B7D40u;
label_1b7d40:
    // 0x1b7d40: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B7D40u;
    {
        const bool branch_taken_0x1b7d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7d40) {
            ctx->pc = 0x1B7D70u;
            goto label_1b7d70;
        }
    }
    ctx->pc = 0x1B7D48u;
    // 0x1b7d48: 0x3c01bf3d  lui         $at, 0xBF3D
    ctx->pc = 0x1b7d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48957 << 16));
    // 0x1b7d4c: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1b7d4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x1b7d50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7d54: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x1B7D54u;
    {
        const bool branch_taken_0x1b7d54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D54u;
        // 0x1b7d58: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d54) {
            ctx->pc = 0x1B7D90u;
            goto label_1b7d90;
        }
    }
    ctx->pc = 0x1B7D5Cu;
    // 0x1b7d5c: 0x3c013f39  lui         $at, 0x3F39
    ctx->pc = 0x1b7d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16185 << 16));
    // 0x1b7d60: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b7d60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1b7d64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7d64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7d68: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B7D68u;
    {
        const bool branch_taken_0x1b7d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7d68) {
            ctx->pc = 0x1B7D94u;
            goto label_1b7d94;
        }
    }
    ctx->pc = 0x1B7D70u;
label_1b7d70:
    // 0x1b7d70: 0x3c013f0b  lui         $at, 0x3F0B
    ctx->pc = 0x1b7d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16139 << 16));
    // 0x1b7d74: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1b7d74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x1b7d78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7d7c: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7D7Cu;
    {
        const bool branch_taken_0x1b7d7c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D7Cu;
        // 0x1b7d80: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d7c) {
            ctx->pc = 0x1B7D94u;
            goto label_1b7d94;
        }
    }
    ctx->pc = 0x1B7D84u;
    // 0x1b7d84: 0x3c01bf0f  lui         $at, 0xBF0F
    ctx->pc = 0x1b7d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48911 << 16));
    // 0x1b7d88: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1b7d88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1b7d8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7d8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b7d90:
    // 0x1b7d90: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1b7d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1b7d94:
    // 0x1b7d94: 0x3c01bd99  lui         $at, 0xBD99
    ctx->pc = 0x1b7d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48537 << 16));
    // 0x1b7d98: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b7d98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1b7d9c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b7d9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b7da0:
    // 0x1b7da0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1b7da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1b7da4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b7da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b7da8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b7da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b7dac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b7dacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7db0: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x1b7db0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x1b7db4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1b7db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1b7db8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1b7db8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b7dbc: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x1b7dbcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1b7dc0: 0x8e620474  lw          $v0, 0x474($s3)
    ctx->pc = 0x1b7dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1140)));
label_1b7dc4:
    // 0x1b7dc4: 0x26c3d670  addiu       $v1, $s6, -0x2990
    ctx->pc = 0x1b7dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294956656));
    // 0x1b7dc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b7dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b7dcc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b7dccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b7dd0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b7dd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7dd4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1b7dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1b7dd8: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x1b7dd8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
    // 0x1b7ddc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b7ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7de0: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x1b7de0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    // 0x1b7de4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1b7de4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7de8: 0x26700040  addiu       $s0, $s3, 0x40
    ctx->pc = 0x1b7de8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1b7dec: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1b7decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x1b7df0: 0x7e630440  sq          $v1, 0x440($s3)
    ctx->pc = 0x1b7df0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 1088), GPR_VEC(ctx, 3));
    // 0x1b7df4: 0x0  nop
    ctx->pc = 0x1b7df4u;
    // NOP
label_1b7df8:
    // 0x1b7df8: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1b7df8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7dfc: 0x0  nop
    ctx->pc = 0x1b7dfcu;
    // NOP
    // 0x1b7e00: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b7e00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b7e04: 0xc680d6dc  lwc1        $f0, -0x2924($s4)
    ctx->pc = 0x1b7e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294956764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7e08: 0xc6acd6d8  lwc1        $f12, -0x2928($s5)
    ctx->pc = 0x1b7e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294956760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b7e0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b7e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7e10: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x1b7e10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1b7e14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b7e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7e18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b7e18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b7e1c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b7e1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1b7e20: 0x7e020080  sq          $v0, 0x80($s0)
    ctx->pc = 0x1b7e20u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 2));
    // 0x1b7e24: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x1b7e24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1b7e28: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1b7e28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1b7e2c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1b7e2cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1b7e30: 0xc068848  jal         func_1A2120
    ctx->pc = 0x1B7E30u;
    SET_GPR_U32(ctx, 31, 0x1B7E38u);
    ctx->pc = 0x1B7E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7E30u;
    // 0x1b7e34: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1B7E30u, 0x1B7E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7E38u;
label_1b7e38:
    // 0x1b7e38: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x1b7e38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b7e3c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1B7E3Cu;
    {
        const bool branch_taken_0x1b7e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E3Cu;
        // 0x1b7e40: 0x26c3d670  addiu       $v1, $s6, -0x2990 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294956656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7e3c) {
            ctx->pc = 0x1B7DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7df8;
        }
    }
    ctx->pc = 0x1B7E44u;
    // 0x1b7e44: 0x8e620474  lw          $v0, 0x474($s3)
    ctx->pc = 0x1b7e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1140)));
    // 0x1b7e48: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1b7e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1b7e4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7e4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7e50: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1b7e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1b7e54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b7e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b7e58: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b7e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b7e5c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1b7e5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b7e60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b7e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7e64: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x1b7e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7e68: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1b7e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7e6c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1b7e6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b7e70: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1b7e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b7e74: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x1b7e74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b7e78: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1b7e78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b7e7c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1b7e7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7e80: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1b7e80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b7e84: 0x7e620480  sq          $v0, 0x480($s3)
    ctx->pc = 0x1b7e84u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 1152), GPR_VEC(ctx, 2));
    // 0x1b7e88: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1b7e88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b7e8c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1b7e8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7e90: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b7e90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7e94: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1b7e94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7e98: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1b7e98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7e9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7ea0: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1b7ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b7ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7EA4u;
        // 0x1b7ea8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7EACu;
    // 0x1b7eac: 0x0  nop
    ctx->pc = 0x1b7eacu;
    // NOP
    ctx->pc = 0x1b7eb0u;
}
