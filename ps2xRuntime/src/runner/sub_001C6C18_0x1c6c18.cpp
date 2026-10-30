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

// Function: sub_001C6C18
// Address: 0x1c6c18 - 0x1c6ed8
void sub_001C6C18_0x1c6c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6C18_0x1c6c18");
#endif

    switch (ctx->pc) {
        case 0x1c6decu: goto label_1c6dec;
        case 0x1c6dfcu: goto label_1c6dfc;
        case 0x1c6e5cu: goto label_1c6e5c;
        case 0x1c6e64u: goto label_1c6e64;
        case 0x1c6e70u: goto label_1c6e70;
        case 0x1c6ea0u: goto label_1c6ea0;
        default: break;
    }

    ctx->pc = 0x1c6c18u;

    // 0x1c6c18: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c6c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1c6c1c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1c6c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1c6c20: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1c6c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1c6c24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c6c24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c28: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1c6c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1c6c2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c6c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c6c30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c6c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c6c34: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1c6c34u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1c6c38: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1c6c38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1c6c3c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1c6c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1c6c40: 0x1440009d  bnez        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x1C6C40u;
    {
        const bool branch_taken_0x1c6c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C40u;
        // 0x1c6c44: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c40) {
            ctx->pc = 0x1C6EB8u;
            goto label_1c6eb8;
        }
    }
    ctx->pc = 0x1C6C48u;
    // 0x1c6c48: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c6c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1c6c4c: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1c6c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x1c6c50: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1c6c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c6c54: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1c6c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c6c58: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C6C58u;
    {
        const bool branch_taken_0x1c6c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C58u;
        // 0x1c6c5c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c58) {
            ctx->pc = 0x1C6CE0u;
            goto label_1c6ce0;
        }
    }
    ctx->pc = 0x1C6C60u;
    // 0x1c6c60: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C6C60u;
    {
        const bool branch_taken_0x1c6c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C60u;
        // 0x1c6c64: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c60) {
            ctx->pc = 0x1C6CA4u;
            goto label_1c6ca4;
        }
    }
    ctx->pc = 0x1C6C68u;
    // 0x1c6c68: 0x3c01be19  lui         $at, 0xBE19
    ctx->pc = 0x1c6c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48665 << 16));
    // 0x1c6c6c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1c6c6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1c6c70: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c6c70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c6c74: 0x3c013f57  lui         $at, 0x3F57
    ctx->pc = 0x1c6c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16215 << 16));
    // 0x1c6c78: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1c6c78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x1c6c7c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c6c7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c6c80: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1c6c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1c6c84: 0x3c013f2e  lui         $at, 0x3F2E
    ctx->pc = 0x1c6c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16174 << 16));
    // 0x1c6c88: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1c6c88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1c6c8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c6c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6c90: 0x3c013f3a  lui         $at, 0x3F3A
    ctx->pc = 0x1c6c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16186 << 16));
    // 0x1c6c94: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x1c6c94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x1c6c98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c6c98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6c9c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1C6C9Cu;
    {
        const bool branch_taken_0x1c6c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C9Cu;
        // 0x1c6ca0: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c9c) {
            ctx->pc = 0x1C6D64u;
            goto label_1c6d64;
        }
    }
    ctx->pc = 0x1C6CA4u;
label_1c6ca4:
    // 0x1c6ca4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1c6ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1c6ca8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c6ca8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c6cac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c6cacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c6cb0: 0x3c013f45  lui         $at, 0x3F45
    ctx->pc = 0x1c6cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16197 << 16));
    // 0x1c6cb4: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1c6cb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x1c6cb8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c6cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c6cbc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1c6cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1c6cc0: 0x3c013f28  lui         $at, 0x3F28
    ctx->pc = 0x1c6cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16168 << 16));
    // 0x1c6cc4: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1c6cc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x1c6cc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c6cc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6ccc: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1c6cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x1c6cd0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1c6cd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1c6cd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c6cd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6cd8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1C6CD8u;
    {
        const bool branch_taken_0x1c6cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6CD8u;
        // 0x1c6cdc: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6cd8) {
            ctx->pc = 0x1C6D64u;
            goto label_1c6d64;
        }
    }
    ctx->pc = 0x1C6CE0u;
label_1c6ce0:
    // 0x1c6ce0: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1c6ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1c6ce4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C6CE4u;
    {
        const bool branch_taken_0x1c6ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6CE4u;
        // 0x1c6ce8: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ce4) {
            ctx->pc = 0x1C6D28u;
            goto label_1c6d28;
        }
    }
    ctx->pc = 0x1C6CECu;
    // 0x1c6cec: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x1c6cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x1c6cf0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c6cf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c6cf4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c6cf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c6cf8: 0x3c013f70  lui         $at, 0x3F70
    ctx->pc = 0x1c6cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16240 << 16));
    // 0x1c6cfc: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x1c6cfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
    // 0x1c6d00: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c6d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c6d04: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1c6d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1c6d08: 0x3c013f3d  lui         $at, 0x3F3D
    ctx->pc = 0x1c6d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16189 << 16));
    // 0x1c6d0c: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1c6d0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x1c6d10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c6d10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6d14: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1c6d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1c6d18: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c6d18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c6d1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c6d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6d20: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C6D20u;
    {
        const bool branch_taken_0x1c6d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D20u;
        // 0x1c6d24: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d20) {
            ctx->pc = 0x1C6D64u;
            goto label_1c6d64;
        }
    }
    ctx->pc = 0x1C6D28u;
label_1c6d28:
    // 0x1c6d28: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1c6d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1c6d2c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C6D2Cu;
    {
        const bool branch_taken_0x1c6d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D2Cu;
        // 0x1c6d30: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d2c) {
            ctx->pc = 0x1C6D80u;
            goto label_1c6d80;
        }
    }
    ctx->pc = 0x1C6D34u;
    // 0x1c6d34: 0x3c01be19  lui         $at, 0xBE19
    ctx->pc = 0x1c6d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48665 << 16));
    // 0x1c6d38: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1c6d38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1c6d3c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c6d3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c6d40: 0x3c013f68  lui         $at, 0x3F68
    ctx->pc = 0x1c6d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16232 << 16));
    // 0x1c6d44: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1c6d44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x1c6d48: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c6d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c6d4c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1c6d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1c6d50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c6d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6d54: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1c6d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1c6d58: 0x3c013f4f  lui         $at, 0x3F4F
    ctx->pc = 0x1c6d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16207 << 16));
    // 0x1c6d5c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1c6d5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1c6d60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c6d60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c6d64:
    // 0x1c6d64: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c6d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1c6d68: 0xe462ea24  swc1        $f2, -0x15DC($v1)
    ctx->pc = 0x1c6d68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294961700), bits); }
    // 0x1c6d6c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1c6d6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d70: 0xe483ea28  swc1        $f3, -0x15D8($a0)
    ctx->pc = 0x1c6d70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294961704), bits); }
    // 0x1c6d74: 0xe441ea2c  swc1        $f1, -0x15D4($v0)
    ctx->pc = 0x1c6d74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50EA2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50EA2Cu, _value); } while (0); }
    // 0x1c6d78: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C6D78u;
    {
        const bool branch_taken_0x1c6d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D78u;
        // 0x1c6d7c: 0xe4a0ea30  swc1        $f0, -0x15D0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294961712), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d78) {
            ctx->pc = 0x1C6DC8u;
            goto label_1c6dc8;
        }
    }
    ctx->pc = 0x1C6D80u;
label_1c6d80:
    // 0x1c6d80: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1c6d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1c6d84: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1c6d84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1c6d88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c6d88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6d8c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1c6d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1c6d90: 0x3c013f3e  lui         $at, 0x3F3E
    ctx->pc = 0x1c6d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16190 << 16));
    // 0x1c6d94: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1c6d94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x1c6d98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c6d98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6d9c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1c6d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1c6da0: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1c6da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1c6da4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c6da4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c6da8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c6da8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c6dac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c6dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1c6db0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1c6db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1c6db4: 0xe441ea28  swc1        $f1, -0x15D8($v0)
    ctx->pc = 0x1c6db4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50EA28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50EA28u, _value); } while (0); }
    // 0x1c6db8: 0xe460ea2c  swc1        $f0, -0x15D4($v1)
    ctx->pc = 0x1c6db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50EA2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50EA2Cu, _value); } while (0); }
    // 0x1c6dbc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c6dbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6dc0: 0xaca0ea24  sw          $zero, -0x15DC($a1)
    ctx->pc = 0x1c6dc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50EA24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50EA24u, _value); } while (0);
    // 0x1c6dc4: 0xe482ea30  swc1        $f2, -0x15D0($a0)
    ctx->pc = 0x1c6dc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50EA30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50EA30u, _value); } while (0); }
label_1c6dc8:
    // 0x1c6dc8: 0xae40050c  sw          $zero, 0x50C($s2)
    ctx->pc = 0x1c6dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1292), GPR_U32(ctx, 0));
    // 0x1c6dcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c6dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6dd0: 0xae400508  sw          $zero, 0x508($s2)
    ctx->pc = 0x1c6dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1288), GPR_U32(ctx, 0));
    // 0x1c6dd4: 0x26500150  addiu       $s0, $s2, 0x150
    ctx->pc = 0x1c6dd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x1c6dd8: 0xae400510  sw          $zero, 0x510($s2)
    ctx->pc = 0x1c6dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1296), GPR_U32(ctx, 0));
    // 0x1c6ddc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c6ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1c6de0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c6de0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c6de4: 0xc071ace  jal         func_1C6B38
    ctx->pc = 0x1C6DE4u;
    SET_GPR_U32(ctx, 31, 0x1C6DECu);
    ctx->pc = 0x1C6DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6DE4u;
    // 0x1c6de8: 0x26510420  addiu       $s1, $s2, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6B38u, 0x1C6DE4u, 0x1C6DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6DECu;
label_1c6dec:
    // 0x1c6dec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c6decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c6df0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1c6df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1c6df4: 0xc071b04  jal         func_1C6C10
    ctx->pc = 0x1C6DF4u;
    SET_GPR_U32(ctx, 31, 0x1C6DFCu);
    ctx->pc = 0x1C6DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6DF4u;
    // 0x1c6df8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6C10u, 0x1C6DF4u, 0x1C6DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6DFCu;
label_1c6dfc:
    // 0x1c6dfc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c6dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c6e00: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c6e00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c6e04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c6e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6e08: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1c6e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c6e0c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c6e0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c6e10: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c6e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e14: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1c6e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c6e18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c6e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e1c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1c6e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1c6e20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e24: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x1c6e24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1c6e28: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1c6e28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1c6e2c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1c6e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1c6e30: 0x3c013de1  lui         $at, 0x3DE1
    ctx->pc = 0x1c6e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15841 << 16));
    // 0x1c6e34: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1c6e34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x1c6e38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c6e38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6e3c: 0xc661ea30  lwc1        $f1, -0x15D0($s3)
    ctx->pc = 0x1c6e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294961712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6e40: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c6e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1c6e44: 0xe455000c  swc1        $f21, 0xC($v0)
    ctx->pc = 0x1c6e44u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1c6e48: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1c6e48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c6e4c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c6e4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c6e50: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1c6e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1c6e54: 0xc073ad0  jal         func_1CEB40
    ctx->pc = 0x1C6E54u;
    SET_GPR_U32(ctx, 31, 0x1C6E5Cu);
    ctx->pc = 0x1C6E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E54u;
    // 0x1c6e58: 0xe7b5000c  swc1        $f21, 0xC($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB40u, 0x1C6E54u, 0x1C6E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E5Cu;
label_1c6e5c:
    // 0x1c6e5c: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1C6E5Cu;
    SET_GPR_U32(ctx, 31, 0x1C6E64u);
    ctx->pc = 0x1C6E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E5Cu;
    // 0x1c6e60: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1C6E5Cu, 0x1C6E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E64u;
label_1c6e64:
    // 0x1c6e64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e68: 0xc073b0a  jal         func_1CEC28
    ctx->pc = 0x1C6E68u;
    SET_GPR_U32(ctx, 31, 0x1C6E70u);
    ctx->pc = 0x1C6E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E68u;
    // 0x1c6e6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1C6E68u, 0x1C6E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E70u;
label_1c6e70:
    // 0x1c6e70: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c6e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c6e74: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x1c6e74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c6e78: 0x8c46d310  lw          $a2, -0x2CF0($v0)
    ctx->pc = 0x1c6e78u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5FD310u));
    // 0x1c6e7c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1c6e7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1c6e80: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c6e80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c6e84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e88: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1c6e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1c6e8c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c6e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e90: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x1c6e90u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1c6e94: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1c6e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c6e98: 0xc0705ce  jal         func_1C1738
    ctx->pc = 0x1C6E98u;
    SET_GPR_U32(ctx, 31, 0x1C6EA0u);
    ctx->pc = 0x1C6E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E98u;
    // 0x1c6e9c: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1738u, 0x1C6E98u, 0x1C6EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6EA0u;
label_1c6ea0:
    // 0x1c6ea0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c6ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c6ea4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c6ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6ea8: 0xae2200b8  sw          $v0, 0xB8($s1)
    ctx->pc = 0x1c6ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
    // 0x1c6eac: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1c6eacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x1c6eb0: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1c6eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x1c6eb4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1c6eb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c6eb8:
    // 0x1c6eb8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1c6eb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c6ebc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1c6ebcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c6ec0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c6ec0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c6ec4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c6ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6ec8: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1c6ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c6ecc: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1c6eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c6ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6ED0u;
        // 0x1c6ed4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6ED8u;
}
