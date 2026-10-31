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

// Function: sub_002079A0
// Address: 0x2079a0 - 0x207cb8
void sub_002079A0_0x2079a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002079A0_0x2079a0");
#endif

    switch (ctx->pc) {
        case 0x2079a0u: goto label_2079a0;
        case 0x2079a4u: goto label_2079a4;
        case 0x2079a8u: goto label_2079a8;
        case 0x2079acu: goto label_2079ac;
        case 0x2079b0u: goto label_2079b0;
        case 0x2079b4u: goto label_2079b4;
        case 0x2079b8u: goto label_2079b8;
        case 0x2079bcu: goto label_2079bc;
        case 0x2079c0u: goto label_2079c0;
        case 0x2079c4u: goto label_2079c4;
        case 0x2079c8u: goto label_2079c8;
        case 0x2079ccu: goto label_2079cc;
        case 0x2079d0u: goto label_2079d0;
        case 0x2079d4u: goto label_2079d4;
        case 0x2079d8u: goto label_2079d8;
        case 0x2079dcu: goto label_2079dc;
        case 0x2079e0u: goto label_2079e0;
        case 0x2079e4u: goto label_2079e4;
        case 0x2079e8u: goto label_2079e8;
        case 0x2079ecu: goto label_2079ec;
        case 0x2079f0u: goto label_2079f0;
        case 0x2079f4u: goto label_2079f4;
        case 0x2079f8u: goto label_2079f8;
        case 0x2079fcu: goto label_2079fc;
        case 0x207a00u: goto label_207a00;
        case 0x207a04u: goto label_207a04;
        case 0x207a08u: goto label_207a08;
        case 0x207a0cu: goto label_207a0c;
        case 0x207a10u: goto label_207a10;
        case 0x207a14u: goto label_207a14;
        case 0x207a18u: goto label_207a18;
        case 0x207a1cu: goto label_207a1c;
        case 0x207a20u: goto label_207a20;
        case 0x207a24u: goto label_207a24;
        case 0x207a28u: goto label_207a28;
        case 0x207a2cu: goto label_207a2c;
        case 0x207a30u: goto label_207a30;
        case 0x207a34u: goto label_207a34;
        case 0x207a38u: goto label_207a38;
        case 0x207a3cu: goto label_207a3c;
        case 0x207a40u: goto label_207a40;
        case 0x207a44u: goto label_207a44;
        case 0x207a48u: goto label_207a48;
        case 0x207a4cu: goto label_207a4c;
        case 0x207a50u: goto label_207a50;
        case 0x207a54u: goto label_207a54;
        case 0x207a58u: goto label_207a58;
        case 0x207a5cu: goto label_207a5c;
        case 0x207a60u: goto label_207a60;
        case 0x207a64u: goto label_207a64;
        case 0x207a68u: goto label_207a68;
        case 0x207a6cu: goto label_207a6c;
        case 0x207a70u: goto label_207a70;
        case 0x207a74u: goto label_207a74;
        case 0x207a78u: goto label_207a78;
        case 0x207a7cu: goto label_207a7c;
        case 0x207a80u: goto label_207a80;
        case 0x207a84u: goto label_207a84;
        case 0x207a88u: goto label_207a88;
        case 0x207a8cu: goto label_207a8c;
        case 0x207a90u: goto label_207a90;
        case 0x207a94u: goto label_207a94;
        case 0x207a98u: goto label_207a98;
        case 0x207a9cu: goto label_207a9c;
        case 0x207aa0u: goto label_207aa0;
        case 0x207aa4u: goto label_207aa4;
        case 0x207aa8u: goto label_207aa8;
        case 0x207aacu: goto label_207aac;
        case 0x207ab0u: goto label_207ab0;
        case 0x207ab4u: goto label_207ab4;
        case 0x207ab8u: goto label_207ab8;
        case 0x207abcu: goto label_207abc;
        case 0x207ac0u: goto label_207ac0;
        case 0x207ac4u: goto label_207ac4;
        case 0x207ac8u: goto label_207ac8;
        case 0x207accu: goto label_207acc;
        case 0x207ad0u: goto label_207ad0;
        case 0x207ad4u: goto label_207ad4;
        case 0x207ad8u: goto label_207ad8;
        case 0x207adcu: goto label_207adc;
        case 0x207ae0u: goto label_207ae0;
        case 0x207ae4u: goto label_207ae4;
        case 0x207ae8u: goto label_207ae8;
        case 0x207aecu: goto label_207aec;
        case 0x207af0u: goto label_207af0;
        case 0x207af4u: goto label_207af4;
        case 0x207af8u: goto label_207af8;
        case 0x207afcu: goto label_207afc;
        case 0x207b00u: goto label_207b00;
        case 0x207b04u: goto label_207b04;
        case 0x207b08u: goto label_207b08;
        case 0x207b0cu: goto label_207b0c;
        case 0x207b10u: goto label_207b10;
        case 0x207b14u: goto label_207b14;
        case 0x207b18u: goto label_207b18;
        case 0x207b1cu: goto label_207b1c;
        case 0x207b20u: goto label_207b20;
        case 0x207b24u: goto label_207b24;
        case 0x207b28u: goto label_207b28;
        case 0x207b2cu: goto label_207b2c;
        case 0x207b30u: goto label_207b30;
        case 0x207b34u: goto label_207b34;
        case 0x207b38u: goto label_207b38;
        case 0x207b3cu: goto label_207b3c;
        case 0x207b40u: goto label_207b40;
        case 0x207b44u: goto label_207b44;
        case 0x207b48u: goto label_207b48;
        case 0x207b4cu: goto label_207b4c;
        case 0x207b50u: goto label_207b50;
        case 0x207b54u: goto label_207b54;
        case 0x207b58u: goto label_207b58;
        case 0x207b5cu: goto label_207b5c;
        case 0x207b60u: goto label_207b60;
        case 0x207b64u: goto label_207b64;
        case 0x207b68u: goto label_207b68;
        case 0x207b6cu: goto label_207b6c;
        case 0x207b70u: goto label_207b70;
        case 0x207b74u: goto label_207b74;
        case 0x207b78u: goto label_207b78;
        case 0x207b7cu: goto label_207b7c;
        case 0x207b80u: goto label_207b80;
        case 0x207b84u: goto label_207b84;
        case 0x207b88u: goto label_207b88;
        case 0x207b8cu: goto label_207b8c;
        case 0x207b90u: goto label_207b90;
        case 0x207b94u: goto label_207b94;
        case 0x207b98u: goto label_207b98;
        case 0x207b9cu: goto label_207b9c;
        case 0x207ba0u: goto label_207ba0;
        case 0x207ba4u: goto label_207ba4;
        case 0x207ba8u: goto label_207ba8;
        case 0x207bacu: goto label_207bac;
        case 0x207bb0u: goto label_207bb0;
        case 0x207bb4u: goto label_207bb4;
        case 0x207bb8u: goto label_207bb8;
        case 0x207bbcu: goto label_207bbc;
        case 0x207bc0u: goto label_207bc0;
        case 0x207bc4u: goto label_207bc4;
        case 0x207bc8u: goto label_207bc8;
        case 0x207bccu: goto label_207bcc;
        case 0x207bd0u: goto label_207bd0;
        case 0x207bd4u: goto label_207bd4;
        case 0x207bd8u: goto label_207bd8;
        case 0x207bdcu: goto label_207bdc;
        case 0x207be0u: goto label_207be0;
        case 0x207be4u: goto label_207be4;
        case 0x207be8u: goto label_207be8;
        case 0x207becu: goto label_207bec;
        case 0x207bf0u: goto label_207bf0;
        case 0x207bf4u: goto label_207bf4;
        case 0x207bf8u: goto label_207bf8;
        case 0x207bfcu: goto label_207bfc;
        case 0x207c00u: goto label_207c00;
        case 0x207c04u: goto label_207c04;
        case 0x207c08u: goto label_207c08;
        case 0x207c0cu: goto label_207c0c;
        case 0x207c10u: goto label_207c10;
        case 0x207c14u: goto label_207c14;
        case 0x207c18u: goto label_207c18;
        case 0x207c1cu: goto label_207c1c;
        case 0x207c20u: goto label_207c20;
        case 0x207c24u: goto label_207c24;
        case 0x207c28u: goto label_207c28;
        case 0x207c2cu: goto label_207c2c;
        case 0x207c30u: goto label_207c30;
        case 0x207c34u: goto label_207c34;
        case 0x207c38u: goto label_207c38;
        case 0x207c3cu: goto label_207c3c;
        case 0x207c40u: goto label_207c40;
        case 0x207c44u: goto label_207c44;
        case 0x207c48u: goto label_207c48;
        case 0x207c4cu: goto label_207c4c;
        case 0x207c50u: goto label_207c50;
        case 0x207c54u: goto label_207c54;
        case 0x207c58u: goto label_207c58;
        case 0x207c5cu: goto label_207c5c;
        case 0x207c60u: goto label_207c60;
        case 0x207c64u: goto label_207c64;
        case 0x207c68u: goto label_207c68;
        case 0x207c6cu: goto label_207c6c;
        case 0x207c70u: goto label_207c70;
        case 0x207c74u: goto label_207c74;
        case 0x207c78u: goto label_207c78;
        case 0x207c7cu: goto label_207c7c;
        case 0x207c80u: goto label_207c80;
        case 0x207c84u: goto label_207c84;
        case 0x207c88u: goto label_207c88;
        case 0x207c8cu: goto label_207c8c;
        case 0x207c90u: goto label_207c90;
        case 0x207c94u: goto label_207c94;
        case 0x207c98u: goto label_207c98;
        case 0x207c9cu: goto label_207c9c;
        case 0x207ca0u: goto label_207ca0;
        case 0x207ca4u: goto label_207ca4;
        case 0x207ca8u: goto label_207ca8;
        case 0x207cacu: goto label_207cac;
        case 0x207cb0u: goto label_207cb0;
        case 0x207cb4u: goto label_207cb4;
        default: break;
    }

    ctx->pc = 0x2079a0u;

label_2079a0:
    // 0x2079a0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2079a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2079a4:
    // 0x2079a4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2079a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_2079a8:
    // 0x2079a8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2079a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_2079ac:
    // 0x2079ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2079acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2079b0:
    // 0x2079b0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2079b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_2079b4:
    // 0x2079b4: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2079b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_2079b8:
    // 0x2079b8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2079b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_2079bc:
    // 0x2079bc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2079bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2079c0:
    // 0x2079c0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2079c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_2079c4:
    // 0x2079c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2079c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2079c8:
    // 0x2079c8: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x2079c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2079cc:
    // 0x2079cc: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2079ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2079d0:
    // 0x2079d0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2079d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2079d4:
    // 0x2079d4: 0x144000ac  bnez        $v0, . + 4 + (0xAC << 2)
label_2079d8:
    if (ctx->pc == 0x2079D8u) {
        ctx->pc = 0x2079D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2079D4u;
        // 0x2079d8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2079DCu;
        goto label_2079dc;
    }
    ctx->pc = 0x2079D4u;
    {
        const bool branch_taken_0x2079d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2079D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2079D4u;
        // 0x2079d8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2079d4) {
            ctx->pc = 0x207C88u;
            goto label_207c88;
        }
    }
    ctx->pc = 0x2079DCu;
label_2079dc:
    // 0x2079dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2079dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2079e0:
    // 0x2079e0: 0xae400090  sw          $zero, 0x90($s2)
    ctx->pc = 0x2079e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 0));
label_2079e4:
    // 0x2079e4: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x2079e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_2079e8:
    // 0x2079e8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2079e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2079ec:
    // 0x2079ec: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2079ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_2079f0:
    // 0x2079f0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2079f4:
    if (ctx->pc == 0x2079F4u) {
        ctx->pc = 0x2079F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2079F0u;
        // 0x2079f4: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2079F8u;
        goto label_2079f8;
    }
    ctx->pc = 0x2079F0u;
    {
        const bool branch_taken_0x2079f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2079F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2079F0u;
        // 0x2079f4: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2079f0) {
            ctx->pc = 0x207A24u;
            goto label_207a24;
        }
    }
    ctx->pc = 0x2079F8u;
label_2079f8:
    // 0x2079f8: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x2079f8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_2079fc:
    // 0x2079fc: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_207a00:
    if (ctx->pc == 0x207A00u) {
        ctx->pc = 0x207A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2079FCu;
        // 0x207a00: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207A04u;
        goto label_207a04;
    }
    ctx->pc = 0x2079FCu;
    {
        const bool branch_taken_0x2079fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2079FCu;
        // 0x207a00: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2079fc) {
            ctx->pc = 0x207A58u;
            goto label_207a58;
        }
    }
    ctx->pc = 0x207A04u;
label_207a04:
    // 0x207a04: 0x3c013e6b  lui         $at, 0x3E6B
    ctx->pc = 0x207a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15979 << 16));
label_207a08:
    // 0x207a08: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x207a08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_207a0c:
    // 0x207a0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x207a0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_207a10:
    // 0x207a10: 0x3c013e8a  lui         $at, 0x3E8A
    ctx->pc = 0x207a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16010 << 16));
label_207a14:
    // 0x207a14: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x207a14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
label_207a18:
    // 0x207a18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x207a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_207a1c:
    // 0x207a1c: 0x1000000d  b           . + 4 + (0xD << 2)
label_207a20:
    if (ctx->pc == 0x207A20u) {
        ctx->pc = 0x207A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A1Cu;
        // 0x207a20: 0xe6c0f624  swc1        $f0, -0x9DC($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4294964772), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x207A24u;
        goto label_207a24;
    }
    ctx->pc = 0x207A1Cu;
    {
        const bool branch_taken_0x207a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A1Cu;
        // 0x207a20: 0xe6c0f624  swc1        $f0, -0x9DC($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4294964772), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a1c) {
            ctx->pc = 0x207A54u;
            goto label_207a54;
        }
    }
    ctx->pc = 0x207A24u;
label_207a24:
    // 0x207a24: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x207a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_207a28:
    // 0x207a28: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x207a28u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_207a2c:
    // 0x207a2c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_207a30:
    if (ctx->pc == 0x207A30u) {
        ctx->pc = 0x207A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A2Cu;
        // 0x207a30: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207A34u;
        goto label_207a34;
    }
    ctx->pc = 0x207A2Cu;
    {
        const bool branch_taken_0x207a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A2Cu;
        // 0x207a30: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a2c) {
            ctx->pc = 0x207A58u;
            goto label_207a58;
        }
    }
    ctx->pc = 0x207A34u;
label_207a34:
    // 0x207a34: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x207a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_207a38:
    // 0x207a38: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x207a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
label_207a3c:
    // 0x207a3c: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x207a3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_207a40:
    // 0x207a40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x207a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_207a44:
    // 0x207a44: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x207a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_207a48:
    // 0x207a48: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x207a48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_207a4c:
    // 0x207a4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x207a4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_207a50:
    // 0x207a50: 0xe6c0f624  swc1        $f0, -0x9DC($s6)
    ctx->pc = 0x207a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4294964772), bits); }
label_207a54:
    // 0x207a54: 0xe661f628  swc1        $f1, -0x9D8($s3)
    ctx->pc = 0x207a54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294964776), bits); }
label_207a58:
    // 0x207a58: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x207a58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_207a5c:
    // 0x207a5c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x207a5cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_207a60:
    // 0x207a60: 0x26100840  addiu       $s0, $s0, 0x840
    ctx->pc = 0x207a60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
label_207a64:
    // 0x207a64: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x207a64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207a68:
    // 0x207a68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x207a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_207a6c:
    // 0x207a6c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x207a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_207a70:
    // 0x207a70: 0xc06b968  jal         func_1AE5A0
label_207a74:
    if (ctx->pc == 0x207A74u) {
        ctx->pc = 0x207A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A70u;
        // 0x207a74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207A78u;
        goto label_207a78;
    }
    ctx->pc = 0x207A70u;
    SET_GPR_U32(ctx, 31, 0x207A78u);
    ctx->pc = 0x207A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207A70u;
    // 0x207a74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE5A0u, 0x207A70u, 0x207A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207A78u;
label_207a78:
    // 0x207a78: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x207a78u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_207a7c:
    // 0x207a7c: 0x8e25b8b8  lw          $a1, -0x4748($s1)
    ctx->pc = 0x207a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
label_207a80:
    // 0x207a80: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x207a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_207a84:
    // 0x207a84: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x207a84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_207a88:
    // 0x207a88: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x207a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_207a8c:
    // 0x207a8c: 0x40f809  jalr        $v0
label_207a90:
    if (ctx->pc == 0x207A90u) {
        ctx->pc = 0x207A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A8Cu;
        // 0x207a90: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207A94u;
        goto label_207a94;
    }
    ctx->pc = 0x207A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207A94u);
        ctx->pc = 0x207A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A8Cu;
        // 0x207a90: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207A8Cu, 0x207A94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207A94u;
label_207a94:
    // 0x207a94: 0xae4000ac  sw          $zero, 0xAC($s2)
    ctx->pc = 0x207a94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 0));
label_207a98:
    // 0x207a98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x207a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207a9c:
    // 0x207a9c: 0xae400094  sw          $zero, 0x94($s2)
    ctx->pc = 0x207a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 0));
label_207aa0:
    // 0x207aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x207aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_207aa4:
    // 0x207aa4: 0xc06ba26  jal         func_1AE898
label_207aa8:
    if (ctx->pc == 0x207AA8u) {
        ctx->pc = 0x207AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207AA4u;
        // 0x207aa8: 0xae4200a8  sw          $v0, 0xA8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207AACu;
        goto label_207aac;
    }
    ctx->pc = 0x207AA4u;
    SET_GPR_U32(ctx, 31, 0x207AACu);
    ctx->pc = 0x207AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207AA4u;
    // 0x207aa8: 0xae4200a8  sw          $v0, 0xA8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE898u, 0x207AA4u, 0x207AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207AACu;
label_207aac:
    // 0x207aac: 0x8e25b8b8  lw          $a1, -0x4748($s1)
    ctx->pc = 0x207aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
label_207ab0:
    // 0x207ab0: 0x240305dc  addiu       $v1, $zero, 0x5DC
    ctx->pc = 0x207ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
label_207ab4:
    // 0x207ab4: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x207ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
label_207ab8:
    // 0x207ab8: 0xae430098  sw          $v1, 0x98($s2)
    ctx->pc = 0x207ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
label_207abc:
    // 0x207abc: 0xae55009c  sw          $s5, 0x9C($s2)
    ctx->pc = 0x207abcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 21));
label_207ac0:
    // 0x207ac0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x207ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_207ac4:
    // 0x207ac4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x207ac4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_207ac8:
    // 0x207ac8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x207ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_207acc:
    // 0x207acc: 0x40f809  jalr        $v0
label_207ad0:
    if (ctx->pc == 0x207AD0u) {
        ctx->pc = 0x207AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207ACCu;
        // 0x207ad0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207AD4u;
        goto label_207ad4;
    }
    ctx->pc = 0x207ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207AD4u);
        ctx->pc = 0x207AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207ACCu;
        // 0x207ad0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207ACCu, 0x207AD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207AD4u;
label_207ad4:
    // 0x207ad4: 0xc080ebe  jal         func_203AF8
label_207ad8:
    if (ctx->pc == 0x207AD8u) {
        ctx->pc = 0x207AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207AD4u;
        // 0x207ad8: 0xae4200a0  sw          $v0, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207ADCu;
        goto label_207adc;
    }
    ctx->pc = 0x207AD4u;
    SET_GPR_U32(ctx, 31, 0x207ADCu);
    ctx->pc = 0x207AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207AD4u;
    // 0x207ad8: 0xae4200a0  sw          $v0, 0xA0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x207AD4u, 0x207ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207ADCu;
label_207adc:
    // 0x207adc: 0xc661f628  lwc1        $f1, -0x9D8($s3)
    ctx->pc = 0x207adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294964776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207ae0:
    // 0x207ae0: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x207ae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_207ae4:
    // 0x207ae4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x207ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_207ae8:
    // 0x207ae8: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x207ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_207aec:
    // 0x207aec: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x207aecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_207af0:
    // 0x207af0: 0x24508c10  addiu       $s0, $v0, -0x73F0
    ctx->pc = 0x207af0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937616));
label_207af4:
    // 0x207af4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x207af4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_207af8:
    // 0x207af8: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x207af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_207afc:
    // 0x207afc: 0xe635000c  swc1        $f21, 0xC($s1)
    ctx->pc = 0x207afcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_207b00:
    // 0x207b00: 0x24a58c00  addiu       $a1, $a1, -0x7400
    ctx->pc = 0x207b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937600));
label_207b04:
    // 0x207b04: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x207b04u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_207b08:
    // 0x207b08: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x207b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_207b0c:
    // 0x207b0c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x207b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_207b10:
    // 0x207b10: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x207b10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_207b14:
    // 0x207b14: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x207b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_207b18:
    // 0x207b18: 0x24090072  addiu       $t1, $zero, 0x72
    ctx->pc = 0x207b18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_207b1c:
    // 0x207b1c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x207b1cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207b20:
    // 0x207b20: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x207b20u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207b24:
    // 0x207b24: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x207b24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_207b28:
    // 0x207b28: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x207b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_207b2c:
    // 0x207b2c: 0x40f809  jalr        $v0
label_207b30:
    if (ctx->pc == 0x207B30u) {
        ctx->pc = 0x207B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B2Cu;
        // 0x207b30: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207B34u;
        goto label_207b34;
    }
    ctx->pc = 0x207B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207B34u);
        ctx->pc = 0x207B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B2Cu;
        // 0x207b30: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207B2Cu, 0x207B34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207B34u;
label_207b34:
    // 0x207b34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_207b38:
    if (ctx->pc == 0x207B38u) {
        ctx->pc = 0x207B3Cu;
        goto label_207b3c;
    }
    ctx->pc = 0x207B34u;
    {
        const bool branch_taken_0x207b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207b34) {
            ctx->pc = 0x207B44u;
            goto label_207b44;
        }
    }
    ctx->pc = 0x207B3Cu;
label_207b3c:
    // 0x207b3c: 0xc0686fe  jal         func_1A1BF8
label_207b40:
    if (ctx->pc == 0x207B40u) {
        ctx->pc = 0x207B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B3Cu;
        // 0x207b40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207B44u;
        goto label_207b44;
    }
    ctx->pc = 0x207B3Cu;
    SET_GPR_U32(ctx, 31, 0x207B44u);
    ctx->pc = 0x207B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207B3Cu;
    // 0x207b40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x207B3Cu, 0x207B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207B44u;
label_207b44:
    // 0x207b44: 0xc080fd6  jal         func_203F58
label_207b48:
    if (ctx->pc == 0x207B48u) {
        ctx->pc = 0x207B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B44u;
        // 0x207b48: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207B4Cu;
        goto label_207b4c;
    }
    ctx->pc = 0x207B44u;
    SET_GPR_U32(ctx, 31, 0x207B4Cu);
    ctx->pc = 0x207B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207B44u;
    // 0x207b48: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203F58u, 0x207B44u, 0x207B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207B4Cu;
label_207b4c:
    // 0x207b4c: 0x8e4b008c  lw          $t3, 0x8C($s2)
    ctx->pc = 0x207b4cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_207b50:
    // 0x207b50: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x207b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_207b54:
    // 0x207b54: 0x8c73d328  lw          $s3, -0x2CD8($v1)
    ctx->pc = 0x207b54u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955816)));
label_207b58:
    // 0x207b58: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x207b58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_207b5c:
    // 0x207b5c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x207b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_207b60:
    // 0x207b60: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x207b60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_207b64:
    // 0x207b64: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x207b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_207b68:
    // 0x207b68: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x207b68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_207b6c:
    // 0x207b6c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x207b6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_207b70:
    // 0x207b70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x207b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_207b74:
    // 0x207b74: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x207b74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_207b78:
    // 0x207b78: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x207b78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_207b7c:
    // 0x207b7c: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x207b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
label_207b80:
    // 0x207b80: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x207b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207b84:
    // 0x207b84: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x207b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_207b88:
    // 0x207b88: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x207b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_207b8c:
    // 0x207b8c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x207b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_207b90:
    // 0x207b90: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x207b90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207b94:
    // 0x207b94: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x207b94u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
label_207b98:
    // 0x207b98: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x207b98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207b9c:
    // 0x207b9c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x207b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_207ba0:
    // 0x207ba0: 0x40f809  jalr        $v0
label_207ba4:
    if (ctx->pc == 0x207BA4u) {
        ctx->pc = 0x207BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207BA0u;
        // 0x207ba4: 0xc6ccf624  lwc1        $f12, -0x9DC($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294964772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x207BA8u;
        goto label_207ba8;
    }
    ctx->pc = 0x207BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207BA8u);
        ctx->pc = 0x207BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207BA0u;
        // 0x207ba4: 0xc6ccf624  lwc1        $f12, -0x9DC($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294964772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207BA0u, 0x207BA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207BA8u;
label_207ba8:
    // 0x207ba8: 0xc080ebe  jal         func_203AF8
label_207bac:
    if (ctx->pc == 0x207BACu) {
        ctx->pc = 0x207BB0u;
        goto label_207bb0;
    }
    ctx->pc = 0x207BA8u;
    SET_GPR_U32(ctx, 31, 0x207BB0u);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x207BA8u, 0x207BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207BB0u;
label_207bb0:
    // 0x207bb0: 0xc080ec6  jal         func_203B18
label_207bb4:
    if (ctx->pc == 0x207BB4u) {
        ctx->pc = 0x207BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207BB0u;
        // 0x207bb4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x207BB8u;
        goto label_207bb8;
    }
    ctx->pc = 0x207BB0u;
    SET_GPR_U32(ctx, 31, 0x207BB8u);
    ctx->pc = 0x207BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207BB0u;
    // 0x207bb4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B18u, 0x207BB0u, 0x207BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207BB8u;
label_207bb8:
    // 0x207bb8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x207bb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_207bbc:
    // 0x207bbc: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x207bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_207bc0:
    // 0x207bc0: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x207bc0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_207bc4:
    // 0x207bc4: 0x24a58c50  addiu       $a1, $a1, -0x73B0
    ctx->pc = 0x207bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937680));
label_207bc8:
    // 0x207bc8: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x207bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_207bcc:
    // 0x207bcc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x207bccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_207bd0:
    // 0x207bd0: 0xe635000c  swc1        $f21, 0xC($s1)
    ctx->pc = 0x207bd0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_207bd4:
    // 0x207bd4: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x207bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_207bd8:
    // 0x207bd8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x207bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_207bdc:
    // 0x207bdc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x207bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_207be0:
    // 0x207be0: 0x24090078  addiu       $t1, $zero, 0x78
    ctx->pc = 0x207be0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_207be4:
    // 0x207be4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x207be4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207be8:
    // 0x207be8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x207be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_207bec:
    // 0x207bec: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x207becu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207bf0:
    // 0x207bf0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x207bf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_207bf4:
    // 0x207bf4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x207bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_207bf8:
    // 0x207bf8: 0x40f809  jalr        $v0
label_207bfc:
    if (ctx->pc == 0x207BFCu) {
        ctx->pc = 0x207BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207BF8u;
        // 0x207bfc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207C00u;
        goto label_207c00;
    }
    ctx->pc = 0x207BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207C00u);
        ctx->pc = 0x207BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207BF8u;
        // 0x207bfc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207BF8u, 0x207C00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207C00u;
label_207c00:
    // 0x207c00: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_207c04:
    if (ctx->pc == 0x207C04u) {
        ctx->pc = 0x207C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C00u;
        // 0x207c04: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207C08u;
        goto label_207c08;
    }
    ctx->pc = 0x207C00u;
    {
        const bool branch_taken_0x207c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C00u;
        // 0x207c04: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c00) {
            ctx->pc = 0x207C14u;
            goto label_207c14;
        }
    }
    ctx->pc = 0x207C08u;
label_207c08:
    // 0x207c08: 0xc0733e2  jal         func_1CCF88
label_207c0c:
    if (ctx->pc == 0x207C0Cu) {
        ctx->pc = 0x207C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C08u;
        // 0x207c0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207C10u;
        goto label_207c10;
    }
    ctx->pc = 0x207C08u;
    SET_GPR_U32(ctx, 31, 0x207C10u);
    ctx->pc = 0x207C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207C08u;
    // 0x207c0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x207C08u, 0x207C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207C10u;
label_207c10:
    // 0x207c10: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x207c10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_207c14:
    // 0x207c14: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x207c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_207c18:
    // 0x207c18: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x207c18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_207c1c:
    // 0x207c1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x207c1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_207c20:
    // 0x207c20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x207c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_207c24:
    // 0x207c24: 0xc05e602  jal         func_179808
label_207c28:
    if (ctx->pc == 0x207C28u) {
        ctx->pc = 0x207C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C24u;
        // 0x207c28: 0xae4200a4  sw          $v0, 0xA4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207C2Cu;
        goto label_207c2c;
    }
    ctx->pc = 0x207C24u;
    SET_GPR_U32(ctx, 31, 0x207C2Cu);
    ctx->pc = 0x207C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207C24u;
    // 0x207c28: 0xae4200a4  sw          $v0, 0xA4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x207C24u, 0x207C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207C2Cu;
label_207c2c:
    // 0x207c2c: 0x8e4c00a4  lw          $t4, 0xA4($s2)
    ctx->pc = 0x207c2cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_207c30:
    // 0x207c30: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x207c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_207c34:
    // 0x207c34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x207c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_207c38:
    // 0x207c38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x207c38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_207c3c:
    // 0x207c3c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x207c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_207c40:
    // 0x207c40: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x207c40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_207c44:
    // 0x207c44: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x207c44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207c48:
    // 0x207c48: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x207c48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207c4c:
    // 0x207c4c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x207c4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_207c50:
    // 0x207c50: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x207c50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207c54:
    // 0x207c54: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x207c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_207c58:
    // 0x207c58: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x207c58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_207c5c:
    // 0x207c5c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x207c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_207c60:
    // 0x207c60: 0x40f809  jalr        $v0
label_207c64:
    if (ctx->pc == 0x207C64u) {
        ctx->pc = 0x207C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C60u;
        // 0x207c64: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207C68u;
        goto label_207c68;
    }
    ctx->pc = 0x207C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207C68u);
        ctx->pc = 0x207C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C60u;
        // 0x207c64: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207C60u, 0x207C68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207C68u;
label_207c68:
    // 0x207c68: 0xc067b9c  jal         func_19EE70
label_207c6c:
    if (ctx->pc == 0x207C6Cu) {
        ctx->pc = 0x207C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C68u;
        // 0x207c6c: 0x24040076  addiu       $a0, $zero, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207C70u;
        goto label_207c70;
    }
    ctx->pc = 0x207C68u;
    SET_GPR_U32(ctx, 31, 0x207C70u);
    ctx->pc = 0x207C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207C68u;
    // 0x207c6c: 0x24040076  addiu       $a0, $zero, 0x76 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x207C68u, 0x207C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207C70u;
label_207c70:
    // 0x207c70: 0x8e4400a4  lw          $a0, 0xA4($s2)
    ctx->pc = 0x207c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_207c74:
    // 0x207c74: 0xc073478  jal         func_1CD1E0
label_207c78:
    if (ctx->pc == 0x207C78u) {
        ctx->pc = 0x207C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C74u;
        // 0x207c78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207C7Cu;
        goto label_207c7c;
    }
    ctx->pc = 0x207C74u;
    SET_GPR_U32(ctx, 31, 0x207C7Cu);
    ctx->pc = 0x207C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207C74u;
    // 0x207c78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x207C74u, 0x207C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207C7Cu;
label_207c7c:
    // 0x207c7c: 0xae55000c  sw          $s5, 0xC($s2)
    ctx->pc = 0x207c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 21));
label_207c80:
    // 0x207c80: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x207c80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_207c84:
    // 0x207c84: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x207c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_207c88:
    // 0x207c88: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x207c88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_207c8c:
    // 0x207c8c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x207c8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_207c90:
    // 0x207c90: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x207c90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_207c94:
    // 0x207c94: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x207c94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_207c98:
    // 0x207c98: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x207c98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_207c9c:
    // 0x207c9c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x207c9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_207ca0:
    // 0x207ca0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x207ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_207ca4:
    // 0x207ca4: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x207ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_207ca8:
    // 0x207ca8: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x207ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_207cac:
    // 0x207cac: 0x3e00008  jr          $ra
label_207cb0:
    if (ctx->pc == 0x207CB0u) {
        ctx->pc = 0x207CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207CACu;
        // 0x207cb0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207CB4u;
        goto label_207cb4;
    }
    ctx->pc = 0x207CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207CACu;
        // 0x207cb0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207CB4u;
label_207cb4:
    // 0x207cb4: 0x0  nop
    ctx->pc = 0x207cb4u;
    // NOP
    ctx->pc = 0x207cb8u;
}
