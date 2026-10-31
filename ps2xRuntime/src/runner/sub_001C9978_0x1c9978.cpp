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

// Function: sub_001C9978
// Address: 0x1c9978 - 0x1c9ad0
void sub_001C9978_0x1c9978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9978_0x1c9978");
#endif

    ctx->pc = 0x1c9978u;

    // 0x1c9978: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c9978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1c997c: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1c997cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x1c9980: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c9980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c9984: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c9984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c9988: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1c9988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c998c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1c998cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1c9990: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1C9990u;
    {
        const bool branch_taken_0x1c9990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9990u;
        // 0x1c9994: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9990) {
            ctx->pc = 0x1C9A24u;
            goto label_1c9a24;
        }
    }
    ctx->pc = 0x1C9998u;
    // 0x1c9998: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1c9998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1c999c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C999Cu;
    {
        const bool branch_taken_0x1c999c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C99A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C999Cu;
        // 0x1c99a0: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c999c) {
            ctx->pc = 0x1C99C0u;
            goto label_1c99c0;
        }
    }
    ctx->pc = 0x1C99A4u;
    // 0x1c99a4: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1C99A4u;
    {
        const bool branch_taken_0x1c99a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C99A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99A4u;
        // 0x1c99a8: 0x24820af0  addiu       $v0, $a0, 0xAF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99a4) {
            ctx->pc = 0x1C9A84u;
            goto label_1c9a84;
        }
    }
    ctx->pc = 0x1C99ACu;
    // 0x1c99ac: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1c99acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x1c99b0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1c99b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1c99b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c99b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c99b8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1C99B8u;
    {
        const bool branch_taken_0x1c99b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c99b8) {
            ctx->pc = 0x1C9A04u;
            goto label_1c9a04;
        }
    }
    ctx->pc = 0x1C99C0u;
label_1c99c0:
    // 0x1c99c0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C99C0u;
    {
        const bool branch_taken_0x1c99c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c99c0) {
            ctx->pc = 0x1C99F4u;
            goto label_1c99f4;
        }
    }
    ctx->pc = 0x1C99C8u;
    // 0x1c99c8: 0x8c820b08  lw          $v0, 0xB08($a0)
    ctx->pc = 0x1c99c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2824)));
    // 0x1c99cc: 0x3c01bcf5  lui         $at, 0xBCF5
    ctx->pc = 0x1c99ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48373 << 16));
    // 0x1c99d0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1c99d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1c99d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c99d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c99d8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C99D8u;
    {
        const bool branch_taken_0x1c99d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C99DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99D8u;
        // 0x1c99dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99d8) {
            ctx->pc = 0x1C9A00u;
            goto label_1c9a00;
        }
    }
    ctx->pc = 0x1C99E0u;
    // 0x1c99e0: 0x3c013f81  lui         $at, 0x3F81
    ctx->pc = 0x1c99e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16257 << 16));
    // 0x1c99e4: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1c99e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x1c99e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c99e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c99ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C99ECu;
    {
        const bool branch_taken_0x1c99ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C99F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99ECu;
        // 0x1c99f0: 0x24820af0  addiu       $v0, $a0, 0xAF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99ec) {
            ctx->pc = 0x1C9A04u;
            goto label_1c9a04;
        }
    }
    ctx->pc = 0x1C99F4u;
label_1c99f4:
    // 0x1c99f4: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x1c99f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
    // 0x1c99f8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1c99f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1c99fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c99fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9a00:
    // 0x1c9a00: 0x24820af0  addiu       $v0, $a0, 0xAF0
    ctx->pc = 0x1c9a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2800));
label_1c9a04:
    // 0x1c9a04: 0x3c013f11  lui         $at, 0x3F11
    ctx->pc = 0x1c9a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16145 << 16));
    // 0x1c9a08: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1c9a08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x1c9a0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9a0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9a10: 0xe4800af0  swc1        $f0, 0xAF0($a0)
    ctx->pc = 0x1c9a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2800), bits); }
    // 0x1c9a14: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1c9a14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1c9a18: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x1c9a18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1c9a1c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1C9A1Cu;
    {
        const bool branch_taken_0x1c9a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A1Cu;
        // 0x1c9a20: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a1c) {
            ctx->pc = 0x1C9A84u;
            goto label_1c9a84;
        }
    }
    ctx->pc = 0x1C9A24u;
label_1c9a24:
    // 0x1c9a24: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1c9a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1c9a28: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C9A28u;
    {
        const bool branch_taken_0x1c9a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A28u;
        // 0x1c9a2c: 0x24820af0  addiu       $v0, $a0, 0xAF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a28) {
            ctx->pc = 0x1C9A50u;
            goto label_1c9a50;
        }
    }
    ctx->pc = 0x1C9A30u;
    // 0x1c9a30: 0x3c01bda3  lui         $at, 0xBDA3
    ctx->pc = 0x1c9a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48547 << 16));
    // 0x1c9a34: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1c9a34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1c9a38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9a3c: 0x3c013f0f  lui         $at, 0x3F0F
    ctx->pc = 0x1c9a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16143 << 16));
    // 0x1c9a40: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1c9a40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1c9a44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9a44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9a48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9A48u;
    {
        const bool branch_taken_0x1c9a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A48u;
        // 0x1c9a4c: 0xe4800af0  swc1        $f0, 0xAF0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2800), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a48) {
            ctx->pc = 0x1C9A6Cu;
            goto label_1c9a6c;
        }
    }
    ctx->pc = 0x1C9A50u;
label_1c9a50:
    // 0x1c9a50: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x1c9a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
    // 0x1c9a54: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1c9a54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1c9a58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9a5c: 0x3c013f11  lui         $at, 0x3F11
    ctx->pc = 0x1c9a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16145 << 16));
    // 0x1c9a60: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1c9a60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x1c9a64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9a68: 0xe4800af0  swc1        $f0, 0xAF0($a0)
    ctx->pc = 0x1c9a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2800), bits); }
label_1c9a6c:
    // 0x1c9a6c: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x1c9a6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1c9a70: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1c9a70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1c9a74: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1c9a74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1c9a78: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1c9a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x1c9a7c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1c9a7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1c9a80: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c9a80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c9a84:
    // 0x1c9a84: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x1c9a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x1c9a88: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1c9a88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1c9a8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9a8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9a90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c9a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9a94: 0x8c820b08  lw          $v0, 0xB08($a0)
    ctx->pc = 0x1c9a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2824)));
    // 0x1c9a98: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1c9a98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1c9a9c: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C9A9Cu;
    {
        const bool branch_taken_0x1c9a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C9AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A9Cu;
        // 0x1c9aa0: 0xe4800b00  swc1        $f0, 0xB00($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2816), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a9c) {
            ctx->pc = 0x1C9AC4u;
            goto label_1c9ac4;
        }
    }
    ctx->pc = 0x1C9AA4u;
    // 0x1c9aa4: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9AA4u;
    {
        const bool branch_taken_0x1c9aa4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9aa4) {
            ctx->pc = 0x1C9AC4u;
            goto label_1c9ac4;
        }
    }
    ctx->pc = 0x1C9AACu;
    // 0x1c9aac: 0xc4810af0  lwc1        $f1, 0xAF0($a0)
    ctx->pc = 0x1c9aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9ab0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c9ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c9ab4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9ab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9ab8: 0x0  nop
    ctx->pc = 0x1c9ab8u;
    // NOP
    // 0x1c9abc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c9abcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c9ac0: 0xe4800af0  swc1        $f0, 0xAF0($a0)
    ctx->pc = 0x1c9ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2800), bits); }
label_1c9ac4:
    // 0x1c9ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9ACCu;
    // 0x1c9acc: 0x0  nop
    ctx->pc = 0x1c9accu;
    // NOP
    ctx->pc = 0x1c9ad0u;
}
