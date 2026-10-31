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

// Function: sub_001C9AD0
// Address: 0x1c9ad0 - 0x1ca118
void sub_001C9AD0_0x1c9ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9AD0_0x1c9ad0");
#endif

    switch (ctx->pc) {
        case 0x1c9d54u: goto label_1c9d54;
        case 0x1c9dacu: goto label_1c9dac;
        case 0x1c9e0cu: goto label_1c9e0c;
        case 0x1c9e58u: goto label_1c9e58;
        case 0x1c9eb0u: goto label_1c9eb0;
        case 0x1c9f00u: goto label_1c9f00;
        case 0x1c9f50u: goto label_1c9f50;
        case 0x1c9fa0u: goto label_1c9fa0;
        case 0x1c9ff0u: goto label_1c9ff0;
        case 0x1ca044u: goto label_1ca044;
        case 0x1ca064u: goto label_1ca064;
        case 0x1ca070u: goto label_1ca070;
        case 0x1ca0acu: goto label_1ca0ac;
        case 0x1ca0c4u: goto label_1ca0c4;
        case 0x1ca0d0u: goto label_1ca0d0;
        default: break;
    }

    ctx->pc = 0x1c9ad0u;

    // 0x1c9ad0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1c9ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1c9ad4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c9ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c9ad8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9adc: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x1c9adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x1c9ae0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1c9ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c9ae4: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x1c9ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x1c9ae8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c9ae8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9aec: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x1c9aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x1c9af0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1c9af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1c9af4: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x1c9af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x1c9af8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c9af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9afc: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x1c9afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x1c9b00: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x1c9b00u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x1c9b04: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x1c9b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x1c9b08: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x1c9b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x1c9b0c: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1c9b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x1c9b10: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1c9b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1c9b14: 0xe7ba0150  swc1        $f26, 0x150($sp)
    ctx->pc = 0x1c9b14u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1c9b18: 0xe7b90148  swc1        $f25, 0x148($sp)
    ctx->pc = 0x1c9b18u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1c9b1c: 0xe7b80140  swc1        $f24, 0x140($sp)
    ctx->pc = 0x1c9b1cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1c9b20: 0xe7b70138  swc1        $f23, 0x138($sp)
    ctx->pc = 0x1c9b20u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x1c9b24: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x1c9b24u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x1c9b28: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x1c9b28u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x1c9b2c: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x1c9b2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x1c9b30: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1c9b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1c9b34: 0x8c64cdb4  lw          $a0, -0x324C($v1)
    ctx->pc = 0x1c9b34u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x1c9b38: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1c9b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1c9b3c: 0xae660b08  sw          $a2, 0xB08($s3)
    ctx->pc = 0x1c9b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2824), GPR_U32(ctx, 6));
    // 0x1c9b40: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1c9b40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1c9b44: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1c9b44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1c9b48: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1c9b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c9b4c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1c9b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1c9b50: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1C9B50u;
    {
        const bool branch_taken_0x1c9b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B50u;
        // 0x1c9b54: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b50) {
            ctx->pc = 0x1C9BFCu;
            goto label_1c9bfc;
        }
    }
    ctx->pc = 0x1C9B58u;
    // 0x1c9b58: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x1c9b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x1c9b5c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C9B5Cu;
    {
        const bool branch_taken_0x1c9b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B5Cu;
        // 0x1c9b60: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b5c) {
            ctx->pc = 0x1C9B98u;
            goto label_1c9b98;
        }
    }
    ctx->pc = 0x1C9B64u;
    // 0x1c9b64: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1C9B64u;
    {
        const bool branch_taken_0x1c9b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B64u;
        // 0x1c9b68: 0x26650af0  addiu       $a1, $s3, 0xAF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b64) {
            ctx->pc = 0x1C9C60u;
            goto label_1c9c60;
        }
    }
    ctx->pc = 0x1C9B6Cu;
    // 0x1c9b6c: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1c9b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x1c9b70: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1c9b70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1c9b74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9b74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9b78: 0x3c013f11  lui         $at, 0x3F11
    ctx->pc = 0x1c9b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16145 << 16));
    // 0x1c9b7c: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1c9b7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x1c9b80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9b80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9b84: 0xe6600af0  swc1        $f0, 0xAF0($s3)
    ctx->pc = 0x1c9b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2800), bits); }
    // 0x1c9b88: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x1c9b88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1c9b8c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1c9b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1c9b90: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1C9B90u;
    {
        const bool branch_taken_0x1c9b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B90u;
        // 0x1c9b94: 0xe4a5000c  swc1        $f5, 0xC($a1) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b90) {
            ctx->pc = 0x1C9C60u;
            goto label_1c9c60;
        }
    }
    ctx->pc = 0x1C9B98u;
label_1c9b98:
    // 0x1c9b98: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C9B98u;
    {
        const bool branch_taken_0x1c9b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9b98) {
            ctx->pc = 0x1C9BC8u;
            goto label_1c9bc8;
        }
    }
    ctx->pc = 0x1C9BA0u;
    // 0x1c9ba0: 0x3c01bcf5  lui         $at, 0xBCF5
    ctx->pc = 0x1c9ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48373 << 16));
    // 0x1c9ba4: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1c9ba4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1c9ba8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9ba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9bac: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C9BACu;
    {
        const bool branch_taken_0x1c9bac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9BACu;
        // 0x1c9bb0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9bac) {
            ctx->pc = 0x1C9BD4u;
            goto label_1c9bd4;
        }
    }
    ctx->pc = 0x1C9BB4u;
    // 0x1c9bb4: 0x3c013f81  lui         $at, 0x3F81
    ctx->pc = 0x1c9bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16257 << 16));
    // 0x1c9bb8: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1c9bb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x1c9bbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9bbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9bc0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9BC0u;
    {
        const bool branch_taken_0x1c9bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9BC0u;
        // 0x1c9bc4: 0x26620af0  addiu       $v0, $s3, 0xAF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9bc0) {
            ctx->pc = 0x1C9BD8u;
            goto label_1c9bd8;
        }
    }
    ctx->pc = 0x1C9BC8u;
label_1c9bc8:
    // 0x1c9bc8: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x1c9bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
    // 0x1c9bcc: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1c9bccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1c9bd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9bd4:
    // 0x1c9bd4: 0x26620af0  addiu       $v0, $s3, 0xAF0
    ctx->pc = 0x1c9bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2800));
label_1c9bd8:
    // 0x1c9bd8: 0x3c013f11  lui         $at, 0x3F11
    ctx->pc = 0x1c9bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16145 << 16));
    // 0x1c9bdc: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1c9bdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x1c9be0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9be0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9be4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c9be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9be8: 0xe6600af0  swc1        $f0, 0xAF0($s3)
    ctx->pc = 0x1c9be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2800), bits); }
    // 0x1c9bec: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1c9becu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1c9bf0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1c9bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1c9bf4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1C9BF4u;
    {
        const bool branch_taken_0x1c9bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9BF4u;
        // 0x1c9bf8: 0xe445000c  swc1        $f5, 0xC($v0) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9bf4) {
            ctx->pc = 0x1C9C60u;
            goto label_1c9c60;
        }
    }
    ctx->pc = 0x1C9BFCu;
label_1c9bfc:
    // 0x1c9bfc: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x1c9bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x1c9c00: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C9C00u;
    {
        const bool branch_taken_0x1c9c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C00u;
        // 0x1c9c04: 0x26620af0  addiu       $v0, $s3, 0xAF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c00) {
            ctx->pc = 0x1C9C28u;
            goto label_1c9c28;
        }
    }
    ctx->pc = 0x1C9C08u;
    // 0x1c9c08: 0x3c01bda3  lui         $at, 0xBDA3
    ctx->pc = 0x1c9c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48547 << 16));
    // 0x1c9c0c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1c9c0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1c9c10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9c10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9c14: 0x3c013f0f  lui         $at, 0x3F0F
    ctx->pc = 0x1c9c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16143 << 16));
    // 0x1c9c18: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1c9c18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1c9c1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9c1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9c20: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9C20u;
    {
        const bool branch_taken_0x1c9c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C20u;
        // 0x1c9c24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c20) {
            ctx->pc = 0x1C9C44u;
            goto label_1c9c44;
        }
    }
    ctx->pc = 0x1C9C28u;
label_1c9c28:
    // 0x1c9c28: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x1c9c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
    // 0x1c9c2c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1c9c2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1c9c30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9c30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9c34: 0x3c013f11  lui         $at, 0x3F11
    ctx->pc = 0x1c9c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16145 << 16));
    // 0x1c9c38: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1c9c38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x1c9c3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9c40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c9c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c9c44:
    // 0x1c9c44: 0xe6600af0  swc1        $f0, 0xAF0($s3)
    ctx->pc = 0x1c9c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2800), bits); }
    // 0x1c9c48: 0xe445000c  swc1        $f5, 0xC($v0)
    ctx->pc = 0x1c9c48u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1c9c4c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1c9c4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1c9c50: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1c9c50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1c9c54: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1c9c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x1c9c58: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1c9c58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1c9c5c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1c9c5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1c9c60:
    // 0x1c9c60: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c9c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c9c64: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c9c64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c9c68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9c68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9c6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9c70: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x1c9c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x1c9c74: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1c9c74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1c9c78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9c7c: 0x46012e02  mul.s       $f24, $f5, $f1
    ctx->pc = 0x1c9c7cu;
    ctx->f[24] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x1c9c80: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x1c9c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
    // 0x1c9c84: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1c9c84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1c9c88: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c9c88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c9c8c: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1c9c8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1c9c90: 0x3c013d61  lui         $at, 0x3D61
    ctx->pc = 0x1c9c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15713 << 16));
    // 0x1c9c94: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1c9c94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x1c9c98: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c9c98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c9c9c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1c9c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1c9ca0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c9ca0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c9ca4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1c9ca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1c9ca8: 0x46022d42  mul.s       $f21, $f5, $f2
    ctx->pc = 0x1c9ca8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x1c9cac: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x1c9cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x1c9cb0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1c9cb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1c9cb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9cb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9cb8: 0x4605c682  mul.s       $f26, $f24, $f5
    ctx->pc = 0x1c9cb8u;
    ctx->f[26] = FPU_MUL_S(ctx->f[24], ctx->f[5]);
    // 0x1c9cbc: 0x46032dc2  mul.s       $f23, $f5, $f3
    ctx->pc = 0x1c9cbcu;
    ctx->f[23] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x1c9cc0: 0xe6600b00  swc1        $f0, 0xB00($s3)
    ctx->pc = 0x1c9cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2816), bits); }
    // 0x1c9cc4: 0x46042d82  mul.s       $f22, $f5, $f4
    ctx->pc = 0x1c9cc4u;
    ctx->f[22] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1c9cc8: 0x14c20009  bne         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C9CC8u;
    {
        const bool branch_taken_0x1c9cc8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C9CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9CC8u;
        // 0x1c9ccc: 0x46012e42  mul.s       $f25, $f5, $f1 (Delay Slot)
        ctx->f[25] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9cc8) {
            ctx->pc = 0x1C9CF0u;
            goto label_1c9cf0;
        }
    }
    ctx->pc = 0x1C9CD0u;
    // 0x1c9cd0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9CD0u;
    {
        const bool branch_taken_0x1c9cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9CD0u;
        // 0x1c9cd4: 0x24100080  addiu       $s0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9cd0) {
            ctx->pc = 0x1C9CF4u;
            goto label_1c9cf4;
        }
    }
    ctx->pc = 0x1C9CD8u;
    // 0x1c9cd8: 0xc6610af0  lwc1        $f1, 0xAF0($s3)
    ctx->pc = 0x1c9cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9cdc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c9cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c9ce0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9ce4: 0x0  nop
    ctx->pc = 0x1c9ce4u;
    // NOP
    // 0x1c9ce8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c9ce8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c9cec: 0xe6600af0  swc1        $f0, 0xAF0($s3)
    ctx->pc = 0x1c9cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2800), bits); }
label_1c9cf0:
    // 0x1c9cf0: 0x24100080  addiu       $s0, $zero, 0x80
    ctx->pc = 0x1c9cf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c9cf4:
    // 0x1c9cf4: 0x241200ff  addiu       $s2, $zero, 0xFF
    ctx->pc = 0x1c9cf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1c9cf8: 0xa3b00060  sb          $s0, 0x60($sp)
    ctx->pc = 0x1c9cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c9cfc: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1c9cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c9d00: 0xa0520003  sb          $s2, 0x3($v0)
    ctx->pc = 0x1c9d00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x1c9d04: 0x3c09000a  lui         $t1, 0xA
    ctx->pc = 0x1c9d04u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)10 << 16));
    // 0x1c9d08: 0xa0500001  sb          $s0, 0x1($v0)
    ctx->pc = 0x1c9d08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c9d0c: 0x266409f0  addiu       $a0, $s3, 0x9F0
    ctx->pc = 0x1c9d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2544));
    // 0x1c9d10: 0xa0500002  sb          $s0, 0x2($v0)
    ctx->pc = 0x1c9d10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c9d14: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c9d14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9d18: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1c9d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
    // 0x1c9d1c: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1c9d1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
    // 0x1c9d20: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c9d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c9d24: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c9d24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9d28: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x1c9d28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c9d2c: 0x35290003  ori         $t1, $t1, 0x3
    ctx->pc = 0x1c9d2cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)3);
    // 0x1c9d30: 0xc66c0b00  lwc1        $f12, 0xB00($s3)
    ctx->pc = 0x1c9d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c9d34: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1c9d34u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1c9d38: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1c9d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x1c9d3c: 0x240a000b  addiu       $t2, $zero, 0xB
    ctx->pc = 0x1c9d3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c9d40: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c9d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1c9d44: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c9d44u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9d48: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1c9d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1c9d4c: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x1C9D4Cu;
    SET_GPR_U32(ctx, 31, 0x1C9D54u);
    ctx->pc = 0x1C9D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9D4Cu;
    // 0x1c9d50: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1C9D4Cu, 0x1C9D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9D54u;
label_1c9d54:
    // 0x1c9d54: 0x26760850  addiu       $s6, $s3, 0x850
    ctx->pc = 0x1c9d54u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 2128));
    // 0x1c9d58: 0xa3b00064  sb          $s0, 0x64($sp)
    ctx->pc = 0x1c9d58u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 100), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c9d5c: 0x27a20064  addiu       $v0, $sp, 0x64
    ctx->pc = 0x1c9d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1c9d60: 0xa0520003  sb          $s2, 0x3($v0)
    ctx->pc = 0x1c9d60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x1c9d64: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1c9d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c9d68: 0xa0500001  sb          $s0, 0x1($v0)
    ctx->pc = 0x1c9d68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c9d6c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1c9d6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1c9d70: 0xa0500002  sb          $s0, 0x2($v0)
    ctx->pc = 0x1c9d70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c9d74: 0x26640050  addiu       $a0, $s3, 0x50
    ctx->pc = 0x1c9d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x1c9d78: 0x3c01463b  lui         $at, 0x463B
    ctx->pc = 0x1c9d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17979 << 16));
    // 0x1c9d7c: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x1c9d7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x1c9d80: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1c9d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c9d84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c9d84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9d88: 0x8fa60064  lw          $a2, 0x64($sp)
    ctx->pc = 0x1c9d88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x1c9d8c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c9d8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9d90: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1c9d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x1c9d94: 0x3c09000a  lui         $t1, 0xA
    ctx->pc = 0x1c9d94u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)10 << 16));
    // 0x1c9d98: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x1c9d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x1c9d9c: 0x240a000b  addiu       $t2, $zero, 0xB
    ctx->pc = 0x1c9d9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c9da0: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1c9da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x1c9da4: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x1C9DA4u;
    SET_GPR_U32(ctx, 31, 0x1C9DACu);
    ctx->pc = 0x1C9DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9DA4u;
    // 0x1c9da8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1C9DA4u, 0x1C9DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9DACu;
label_1c9dac:
    // 0x1c9dac: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x1c9dacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c9db0: 0xa3b00068  sb          $s0, 0x68($sp)
    ctx->pc = 0x1c9db0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c9db4: 0x27a20068  addiu       $v0, $sp, 0x68
    ctx->pc = 0x1c9db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1c9db8: 0xa0520003  sb          $s2, 0x3($v0)
    ctx->pc = 0x1c9db8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x1c9dbc: 0x3c09000a  lui         $t1, 0xA
    ctx->pc = 0x1c9dbcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)10 << 16));
    // 0x1c9dc0: 0xa0500001  sb          $s0, 0x1($v0)
    ctx->pc = 0x1c9dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c9dc4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1c9dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c9dc8: 0xa0500002  sb          $s0, 0x2($v0)
    ctx->pc = 0x1c9dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c9dcc: 0x26640150  addiu       $a0, $s3, 0x150
    ctx->pc = 0x1c9dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
    // 0x1c9dd0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c9dd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9dd4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c9dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9dd8: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1c9dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c9ddc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c9ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9de0: 0x3c01464b  lui         $at, 0x464B
    ctx->pc = 0x1c9de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17995 << 16));
    // 0x1c9de4: 0x34212000  ori         $at, $at, 0x2000
    ctx->pc = 0x1c9de4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8192);
    // 0x1c9de8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1c9de8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c9dec: 0x35290002  ori         $t1, $t1, 0x2
    ctx->pc = 0x1c9decu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2);
    // 0x1c9df0: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1c9df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x1c9df4: 0x240a000b  addiu       $t2, $zero, 0xB
    ctx->pc = 0x1c9df4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c9df8: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x1c9df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x1c9dfc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c9dfcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9e00: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1c9e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x1c9e04: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x1C9E04u;
    SET_GPR_U32(ctx, 31, 0x1C9E0Cu);
    ctx->pc = 0x1C9E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9E04u;
    // 0x1c9e08: 0x26770920  addiu       $s7, $s3, 0x920 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 2336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1C9E04u, 0x1C9E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9E0Cu;
label_1c9e0c:
    // 0x1c9e0c: 0xa3b0006c  sb          $s0, 0x6C($sp)
    ctx->pc = 0x1c9e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 108), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c9e10: 0x27a2006c  addiu       $v0, $sp, 0x6C
    ctx->pc = 0x1c9e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1c9e14: 0xa0520003  sb          $s2, 0x3($v0)
    ctx->pc = 0x1c9e14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x1c9e18: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1c9e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c9e1c: 0xa0500001  sb          $s0, 0x1($v0)
    ctx->pc = 0x1c9e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c9e20: 0x26640250  addiu       $a0, $s3, 0x250
    ctx->pc = 0x1c9e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 592));
    // 0x1c9e24: 0xa0500002  sb          $s0, 0x2($v0)
    ctx->pc = 0x1c9e24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c9e28: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1c9e28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1c9e2c: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1c9e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x1c9e30: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1c9e30u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1c9e34: 0x8fa6006c  lw          $a2, 0x6C($sp)
    ctx->pc = 0x1c9e34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c9e38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c9e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9e3c: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1c9e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x1c9e40: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c9e40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9e44: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1c9e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1c9e48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c9e48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9e4c: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1c9e4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c9e50: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x1C9E50u;
    SET_GPR_U32(ctx, 31, 0x1C9E58u);
    ctx->pc = 0x1C9E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9E50u;
    // 0x1c9e54: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1C9E50u, 0x1C9E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9E58u;
label_1c9e58:
    // 0x1c9e58: 0x240300e1  addiu       $v1, $zero, 0xE1
    ctx->pc = 0x1c9e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
    // 0x1c9e5c: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1c9e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c9e60: 0xa3a30070  sb          $v1, 0x70($sp)
    ctx->pc = 0x1c9e60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c9e64: 0x240400ba  addiu       $a0, $zero, 0xBA
    ctx->pc = 0x1c9e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    // 0x1c9e68: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x1c9e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1c9e6c: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x1c9e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c9e70: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1c9e70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c9e74: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1c9e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c9e78: 0xa0520003  sb          $s2, 0x3($v0)
    ctx->pc = 0x1c9e78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x1c9e7c: 0x26640350  addiu       $a0, $s3, 0x350
    ctx->pc = 0x1c9e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 848));
    // 0x1c9e80: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1c9e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x1c9e84: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1c9e84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1c9e88: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1c9e88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c9e8c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1c9e8cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1c9e90: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1c9e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x1c9e94: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c9e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9e98: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1c9e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1c9e9c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c9e9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9ea0: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x1c9ea0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c9ea4: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1c9ea4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9ea8: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x1C9EA8u;
    SET_GPR_U32(ctx, 31, 0x1C9EB0u);
    ctx->pc = 0x1C9EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9EA8u;
    // 0x1c9eac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1C9EA8u, 0x1C9EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9EB0u;
label_1c9eb0:
    // 0x1c9eb0: 0xa3b00074  sb          $s0, 0x74($sp)
    ctx->pc = 0x1c9eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c9eb4: 0x27a20074  addiu       $v0, $sp, 0x74
    ctx->pc = 0x1c9eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1c9eb8: 0xa0520003  sb          $s2, 0x3($v0)
    ctx->pc = 0x1c9eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x1c9ebc: 0x3c09000a  lui         $t1, 0xA
    ctx->pc = 0x1c9ebcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)10 << 16));
    // 0x1c9ec0: 0xa0500001  sb          $s0, 0x1($v0)
    ctx->pc = 0x1c9ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c9ec4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1c9ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c9ec8: 0xa0500002  sb          $s0, 0x2($v0)
    ctx->pc = 0x1c9ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c9ecc: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x1c9eccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x1c9ed0: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1c9ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x1c9ed4: 0x26640450  addiu       $a0, $s3, 0x450
    ctx->pc = 0x1c9ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1104));
    // 0x1c9ed8: 0x8fa60074  lw          $a2, 0x74($sp)
    ctx->pc = 0x1c9ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1c9edc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1c9edcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1c9ee0: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x1c9ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x1c9ee4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c9ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9ee8: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1c9ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x1c9eec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c9eecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9ef0: 0x35290004  ori         $t1, $t1, 0x4
    ctx->pc = 0x1c9ef0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4);
    // 0x1c9ef4: 0x240a000b  addiu       $t2, $zero, 0xB
    ctx->pc = 0x1c9ef4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c9ef8: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x1C9EF8u;
    SET_GPR_U32(ctx, 31, 0x1C9F00u);
    ctx->pc = 0x1C9EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9EF8u;
    // 0x1c9efc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1C9EF8u, 0x1C9F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9F00u;
label_1c9f00:
    // 0x1c9f00: 0xa3b00078  sb          $s0, 0x78($sp)
    ctx->pc = 0x1c9f00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 120), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c9f04: 0x27a20078  addiu       $v0, $sp, 0x78
    ctx->pc = 0x1c9f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1c9f08: 0xa0520003  sb          $s2, 0x3($v0)
    ctx->pc = 0x1c9f08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x1c9f0c: 0x3c09000a  lui         $t1, 0xA
    ctx->pc = 0x1c9f0cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)10 << 16));
    // 0x1c9f10: 0xa0500001  sb          $s0, 0x1($v0)
    ctx->pc = 0x1c9f10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c9f14: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1c9f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c9f18: 0xa0500002  sb          $s0, 0x2($v0)
    ctx->pc = 0x1c9f18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c9f1c: 0x26640650  addiu       $a0, $s3, 0x650
    ctx->pc = 0x1c9f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1616));
    // 0x1c9f20: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1c9f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x1c9f24: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1c9f24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1c9f28: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x1c9f28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1c9f2c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1c9f2cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1c9f30: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x1c9f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x1c9f34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c9f34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9f38: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1c9f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x1c9f3c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c9f3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9f40: 0x35290001  ori         $t1, $t1, 0x1
    ctx->pc = 0x1c9f40u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
    // 0x1c9f44: 0x240a000b  addiu       $t2, $zero, 0xB
    ctx->pc = 0x1c9f44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c9f48: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x1C9F48u;
    SET_GPR_U32(ctx, 31, 0x1C9F50u);
    ctx->pc = 0x1C9F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9F48u;
    // 0x1c9f4c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1C9F48u, 0x1C9F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9F50u;
label_1c9f50:
    // 0x1c9f50: 0xa3b0007c  sb          $s0, 0x7C($sp)
    ctx->pc = 0x1c9f50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 124), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c9f54: 0x27a2007c  addiu       $v0, $sp, 0x7C
    ctx->pc = 0x1c9f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1c9f58: 0xa0520003  sb          $s2, 0x3($v0)
    ctx->pc = 0x1c9f58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x1c9f5c: 0x3c09000a  lui         $t1, 0xA
    ctx->pc = 0x1c9f5cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)10 << 16));
    // 0x1c9f60: 0xa0500001  sb          $s0, 0x1($v0)
    ctx->pc = 0x1c9f60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c9f64: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1c9f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c9f68: 0xa0500002  sb          $s0, 0x2($v0)
    ctx->pc = 0x1c9f68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c9f6c: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x1c9f6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x1c9f70: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1c9f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x1c9f74: 0x26640550  addiu       $a0, $s3, 0x550
    ctx->pc = 0x1c9f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1360));
    // 0x1c9f78: 0x8fa6007c  lw          $a2, 0x7C($sp)
    ctx->pc = 0x1c9f78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1c9f7c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1c9f7cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1c9f80: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x1c9f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x1c9f84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c9f84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9f88: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1c9f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x1c9f8c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c9f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9f90: 0x35290004  ori         $t1, $t1, 0x4
    ctx->pc = 0x1c9f90u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4);
    // 0x1c9f94: 0x240a000b  addiu       $t2, $zero, 0xB
    ctx->pc = 0x1c9f94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c9f98: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x1C9F98u;
    SET_GPR_U32(ctx, 31, 0x1C9FA0u);
    ctx->pc = 0x1C9F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9F98u;
    // 0x1c9f9c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1C9F98u, 0x1C9FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9FA0u;
label_1c9fa0:
    // 0x1c9fa0: 0xa3b00080  sb          $s0, 0x80($sp)
    ctx->pc = 0x1c9fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c9fa4: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1c9fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c9fa8: 0xa0520003  sb          $s2, 0x3($v0)
    ctx->pc = 0x1c9fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x1c9fac: 0x3c09000a  lui         $t1, 0xA
    ctx->pc = 0x1c9facu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)10 << 16));
    // 0x1c9fb0: 0xa0500001  sb          $s0, 0x1($v0)
    ctx->pc = 0x1c9fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c9fb4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1c9fb4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1c9fb8: 0xa0500002  sb          $s0, 0x2($v0)
    ctx->pc = 0x1c9fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c9fbc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1c9fbcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1c9fc0: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x1c9fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x1c9fc4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1c9fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c9fc8: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x1c9fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c9fcc: 0x26640750  addiu       $a0, $s3, 0x750
    ctx->pc = 0x1c9fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1872));
    // 0x1c9fd0: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1c9fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x1c9fd4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c9fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9fd8: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1c9fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x1c9fdc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c9fdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9fe0: 0x35290001  ori         $t1, $t1, 0x1
    ctx->pc = 0x1c9fe0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
    // 0x1c9fe4: 0x240a000b  addiu       $t2, $zero, 0xB
    ctx->pc = 0x1c9fe4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c9fe8: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x1C9FE8u;
    SET_GPR_U32(ctx, 31, 0x1C9FF0u);
    ctx->pc = 0x1C9FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9FE8u;
    // 0x1c9fec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1C9FE8u, 0x1C9FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9FF0u;
label_1c9ff0:
    // 0x1c9ff0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c9ff0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9ff4: 0x27a20084  addiu       $v0, $sp, 0x84
    ctx->pc = 0x1c9ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x1c9ff8: 0xa3b00084  sb          $s0, 0x84($sp)
    ctx->pc = 0x1c9ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 132), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c9ffc: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x1c9ffcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ca000: 0xe7b90034  swc1        $f25, 0x34($sp)
    ctx->pc = 0x1ca000u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1ca004: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1ca004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ca008: 0xe7b90030  swc1        $f25, 0x30($sp)
    ctx->pc = 0x1ca008u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ca00c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1ca00cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca010: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1ca010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1ca014: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ca014u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca018: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1ca018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1ca01c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ca01cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca020: 0xa0520003  sb          $s2, 0x3($v0)
    ctx->pc = 0x1ca020u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x1ca024: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1ca024u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca028: 0xa0500001  sb          $s0, 0x1($v0)
    ctx->pc = 0x1ca028u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 16));
    // 0x1ca02c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1ca02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca030: 0xa0500002  sb          $s0, 0x2($v0)
    ctx->pc = 0x1ca030u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x1ca034: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1ca034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca038: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x1ca038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x1ca03c: 0xc073418  jal         func_1CD060
    ctx->pc = 0x1CA03Cu;
    SET_GPR_U32(ctx, 31, 0x1CA044u);
    ctx->pc = 0x1CA040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA03Cu;
    // 0x1ca040: 0x8fa70084  lw          $a3, 0x84($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD060u, 0x1CA03Cu, 0x1CA044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA044u;
label_1ca044:
    // 0x1ca044: 0x3c130055  lui         $s3, 0x55
    ctx->pc = 0x1ca044u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)85 << 16));
    // 0x1ca048: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x1ca048u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ca04c: 0x267356c8  addiu       $s3, $s3, 0x56C8
    ctx->pc = 0x1ca04cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 22216));
    // 0x1ca050: 0x2407009c  addiu       $a3, $zero, 0x9C
    ctx->pc = 0x1ca050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x1ca054: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ca054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca058: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ca058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca05c: 0xc10ca04  jal         func_432810
    ctx->pc = 0x1CA05Cu;
    SET_GPR_U32(ctx, 31, 0x1CA064u);
    ctx->pc = 0x1CA060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA05Cu;
    // 0x1ca060: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1CA05Cu, 0x1CA064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA064u;
label_1ca064:
    // 0x1ca064: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1ca064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca068: 0xc073478  jal         func_1CD1E0
    ctx->pc = 0x1CA068u;
    SET_GPR_U32(ctx, 31, 0x1CA070u);
    ctx->pc = 0x1CA06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA068u;
    // 0x1ca06c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1CA068u, 0x1CA070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA070u;
label_1ca070:
    // 0x1ca070: 0xa3b00088  sb          $s0, 0x88($sp)
    ctx->pc = 0x1ca070u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 136), (uint8_t)GPR_U32(ctx, 16));
    // 0x1ca074: 0x27a20088  addiu       $v0, $sp, 0x88
    ctx->pc = 0x1ca074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1ca078: 0xa0520003  sb          $s2, 0x3($v0)
    ctx->pc = 0x1ca078u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x1ca07c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1ca07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ca080: 0xa0500002  sb          $s0, 0x2($v0)
    ctx->pc = 0x1ca080u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x1ca084: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1ca084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca088: 0xa0500001  sb          $s0, 0x1($v0)
    ctx->pc = 0x1ca088u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 16));
    // 0x1ca08c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1ca08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca090: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x1ca090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x1ca094: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1ca094u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca098: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x1ca098u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1ca09c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ca09cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca0a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ca0a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca0a4: 0xc073418  jal         func_1CD060
    ctx->pc = 0x1CA0A4u;
    SET_GPR_U32(ctx, 31, 0x1CA0ACu);
    ctx->pc = 0x1CA0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA0A4u;
    // 0x1ca0a8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD060u, 0x1CA0A4u, 0x1CA0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA0ACu;
label_1ca0ac:
    // 0x1ca0ac: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x1ca0acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ca0b0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ca0b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca0b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca0b8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ca0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ca0bc: 0xc10ca04  jal         func_432810
    ctx->pc = 0x1CA0BCu;
    SET_GPR_U32(ctx, 31, 0x1CA0C4u);
    ctx->pc = 0x1CA0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA0BCu;
    // 0x1ca0c0: 0x240700a0  addiu       $a3, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1CA0BCu, 0x1CA0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA0C4u;
label_1ca0c4:
    // 0x1ca0c4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1ca0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca0c8: 0xc073478  jal         func_1CD1E0
    ctx->pc = 0x1CA0C8u;
    SET_GPR_U32(ctx, 31, 0x1CA0D0u);
    ctx->pc = 0x1CA0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA0C8u;
    // 0x1ca0cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1CA0C8u, 0x1CA0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA0D0u;
label_1ca0d0:
    // 0x1ca0d0: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x1ca0d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ca0d4: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x1ca0d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ca0d8: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x1ca0d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1ca0dc: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x1ca0dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1ca0e0: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x1ca0e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1ca0e4: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x1ca0e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ca0e8: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x1ca0e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ca0ec: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1ca0ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ca0f0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1ca0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ca0f4: 0xc7ba0150  lwc1        $f26, 0x150($sp)
    ctx->pc = 0x1ca0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1ca0f8: 0xc7b90148  lwc1        $f25, 0x148($sp)
    ctx->pc = 0x1ca0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1ca0fc: 0xc7b80140  lwc1        $f24, 0x140($sp)
    ctx->pc = 0x1ca0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1ca100: 0xc7b70138  lwc1        $f23, 0x138($sp)
    ctx->pc = 0x1ca100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1ca104: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x1ca104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ca108: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x1ca108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ca10c: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x1ca10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ca110: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA110u;
        // 0x1ca114: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA118u;
}
