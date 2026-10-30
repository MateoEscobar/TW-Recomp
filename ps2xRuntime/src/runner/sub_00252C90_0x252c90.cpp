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

// Function: sub_00252C90
// Address: 0x252c90 - 0x253068
void sub_00252C90_0x252c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252C90_0x252c90");
#endif

    switch (ctx->pc) {
        case 0x252d70u: goto label_252d70;
        case 0x252e60u: goto label_252e60;
        case 0x252e98u: goto label_252e98;
        case 0x252f78u: goto label_252f78;
        case 0x252fd8u: goto label_252fd8;
        case 0x253004u: goto label_253004;
        default: break;
    }

    ctx->pc = 0x252c90u;

label_252c90:
    // 0x252c90: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x252c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x252c94: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x252c94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x252c98: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x252c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x252c9c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x252c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x252ca0: 0x8c52c958  lw          $s2, -0x36A8($v0)
    ctx->pc = 0x252ca0u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x6CC958u));
    // 0x252ca4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x252ca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252ca8: 0x8cc505b4  lw          $a1, 0x5B4($a2)
    ctx->pc = 0x252ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5105B4u));
    // 0x252cac: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x252cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x252cb0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x252cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x252cb4: 0x2442c968  addiu       $v0, $v0, -0x3698
    ctx->pc = 0x252cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953320));
    // 0x252cb8: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x252cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x252cbc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x252cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x252cc0: 0xe7ba0100  swc1        $f26, 0x100($sp)
    ctx->pc = 0x252cc0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x252cc4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x252cc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252cc8: 0xe7b900f8  swc1        $f25, 0xF8($sp)
    ctx->pc = 0x252cc8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x252ccc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x252cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x252cd0: 0xe7b800f0  swc1        $f24, 0xF0($sp)
    ctx->pc = 0x252cd0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x252cd4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x252cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x252cd8: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x252cd8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x252cdc: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x252cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x252ce0: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x252ce0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x252ce4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x252ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x252ce8: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x252ce8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x252cec: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x252cecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252cf0: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x252cf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x252cf4: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x252cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x252cf8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x252cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x252cfc: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x252cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x252d00: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x252d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x252d04: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x252d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x252d08: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x252d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x252d0c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x252d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x252d10: 0xc440c95c  lwc1        $f0, -0x36A4($v0)
    ctx->pc = 0x252d10u;
    { uint32_t bits = FAST_READ32(0x6CC95Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252d14: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x252d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x252d18: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x252d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x252d1c: 0x460005c2  mul.s       $f23, $f0, $f0
    ctx->pc = 0x252d1cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x252d20: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x252d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252d24: 0x46001640  add.s       $f25, $f2, $f0
    ctx->pc = 0x252d24u;
    ctx->f[25] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x252d28: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x252d28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x252d2c: 0x46001e00  add.s       $f24, $f3, $f0
    ctx->pc = 0x252d2cu;
    ctx->f[24] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x252d30: 0x8c84c960  lw          $a0, -0x36A0($a0)
    ctx->pc = 0x252d30u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6CC960u));
    // 0x252d34: 0x46000e80  add.s       $f26, $f1, $f0
    ctx->pc = 0x252d34u;
    ctx->f[26] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x252d38: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x252d38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x252d3c: 0x46001581  sub.s       $f22, $f2, $f0
    ctx->pc = 0x252d3cu;
    ctx->f[22] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x252d40: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x252d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x252d44: 0x46001d41  sub.s       $f21, $f3, $f0
    ctx->pc = 0x252d44u;
    ctx->f[21] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x252d48: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x252d48u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252d4c: 0x86630014  lh          $v1, 0x14($s3)
    ctx->pc = 0x252d4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x252d50: 0xacc505b4  sw          $a1, 0x5B4($a2)
    ctx->pc = 0x252d50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1460), GPR_U32(ctx, 5));
    // 0x252d54: 0x186000b0  blez        $v1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x252D54u;
    {
        const bool branch_taken_0x252d54 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x252D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D54u;
        // 0x252d58: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252d54) {
            ctx->pc = 0x253018u;
            goto label_253018;
        }
    }
    ctx->pc = 0x252D5Cu;
    // 0x252d5c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x252d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x252d60: 0x3c17006d  lui         $s7, 0x6D
    ctx->pc = 0x252d60u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)109 << 16));
    // 0x252d64: 0x2454c858  addiu       $s4, $v0, -0x37A8
    ctx->pc = 0x252d64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953048));
    // 0x252d68: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x252d68u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
    // 0x252d6c: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x252d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_252d70:
    // 0x252d70: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x252d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x252d74: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x252d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x252d78: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x252d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x252d7c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x252d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x252d80: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x252d80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x252d84: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x252d84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x252d88: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x252d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x252d8c: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x252d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x252d90: 0xc7a50014  lwc1        $f5, 0x14($sp)
    ctx->pc = 0x252d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x252d94: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x252d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252d98: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x252d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x252d9c: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x252d9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x252da0: 0xc7a60018  lwc1        $f6, 0x18($sp)
    ctx->pc = 0x252da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x252da4: 0x46022881  sub.s       $f2, $f5, $f2
    ctx->pc = 0x252da4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x252da8: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x252da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252dac: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x252dacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x252db0: 0x46013041  sub.s       $f1, $f6, $f1
    ctx->pc = 0x252db0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x252db4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x252db4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x252db8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x252db8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x252dbc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x252dbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x252dc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x252dc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x252dc4: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x252dc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252dc8: 0x0  nop
    ctx->pc = 0x252dc8u;
    // NOP
    // 0x252dcc: 0x4500008d  bc1f        . + 4 + (0x8D << 2)
    ctx->pc = 0x252DCCu;
    {
        const bool branch_taken_0x252dcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x252DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252DCCu;
        // 0x252dd0: 0x24f50001  addiu       $s5, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252dcc) {
            ctx->pc = 0x253004u;
            goto label_253004;
        }
    }
    ctx->pc = 0x252DD4u;
    // 0x252dd4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x252dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252dd8: 0x460021e9  min.s       $f7, $f4, $f0
    ctx->pc = 0x252dd8u;
    ctx->f[7] = std::min(ctx->f[4], ctx->f[0]);
    // 0x252ddc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x252ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252de0: 0x46002028  max.s       $f0, $f4, $f0
    ctx->pc = 0x252de0u;
    ctx->f[0] = std::max(ctx->f[4], ctx->f[0]);
    // 0x252de4: 0x460128e8  max.s       $f3, $f5, $f1
    ctx->pc = 0x252de4u;
    ctx->f[3] = std::max(ctx->f[5], ctx->f[1]);
    // 0x252de8: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x252de8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252dec: 0x460128a9  min.s       $f2, $f5, $f1
    ctx->pc = 0x252decu;
    ctx->f[2] = std::min(ctx->f[5], ctx->f[1]);
    // 0x252df0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x252df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252df4: 0x46003128  max.s       $f4, $f6, $f0
    ctx->pc = 0x252df4u;
    ctx->f[4] = std::max(ctx->f[6], ctx->f[0]);
    // 0x252df8: 0x46003069  min.s       $f1, $f6, $f0
    ctx->pc = 0x252df8u;
    ctx->f[1] = std::min(ctx->f[6], ctx->f[0]);
    // 0x252dfc: 0x4503006c  bc1tl       . + 4 + (0x6C << 2)
    ctx->pc = 0x252DFCu;
    {
        const bool branch_taken_0x252dfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x252dfc) {
            ctx->pc = 0x252E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252DFCu;
            // 0x252e00: 0x8fc205b4  lw          $v0, 0x5B4($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252FB0u;
            goto label_252fb0;
        }
    }
    ctx->pc = 0x252E04u;
    // 0x252e04: 0x4607c834  c.lt.s      $f25, $f7
    ctx->pc = 0x252e04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252e08: 0x0  nop
    ctx->pc = 0x252e08u;
    // NOP
    // 0x252e0c: 0x45030068  bc1tl       . + 4 + (0x68 << 2)
    ctx->pc = 0x252E0Cu;
    {
        const bool branch_taken_0x252e0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x252e0c) {
            ctx->pc = 0x252E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252E0Cu;
            // 0x252e10: 0x8fc205b4  lw          $v0, 0x5B4($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252FB0u;
            goto label_252fb0;
        }
    }
    ctx->pc = 0x252E14u;
    // 0x252e14: 0x46151834  c.lt.s      $f3, $f21
    ctx->pc = 0x252e14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252e18: 0x0  nop
    ctx->pc = 0x252e18u;
    // NOP
    // 0x252e1c: 0x45010064  bc1t        . + 4 + (0x64 << 2)
    ctx->pc = 0x252E1Cu;
    {
        const bool branch_taken_0x252e1c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x252E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E1Cu;
        // 0x252e20: 0x8fc205b4  lw          $v0, 0x5B4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e1c) {
            ctx->pc = 0x252FB0u;
            goto label_252fb0;
        }
    }
    ctx->pc = 0x252E24u;
    // 0x252e24: 0x4602c034  c.lt.s      $f24, $f2
    ctx->pc = 0x252e24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252e28: 0x0  nop
    ctx->pc = 0x252e28u;
    // NOP
    // 0x252e2c: 0x45010060  bc1t        . + 4 + (0x60 << 2)
    ctx->pc = 0x252E2Cu;
    {
        const bool branch_taken_0x252e2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x252e2c) {
            ctx->pc = 0x252FB0u;
            goto label_252fb0;
        }
    }
    ctx->pc = 0x252E34u;
    // 0x252e34: 0x46142034  c.lt.s      $f4, $f20
    ctx->pc = 0x252e34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252e38: 0x0  nop
    ctx->pc = 0x252e38u;
    // NOP
    // 0x252e3c: 0x4501005c  bc1t        . + 4 + (0x5C << 2)
    ctx->pc = 0x252E3Cu;
    {
        const bool branch_taken_0x252e3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x252e3c) {
            ctx->pc = 0x252FB0u;
            goto label_252fb0;
        }
    }
    ctx->pc = 0x252E44u;
    // 0x252e44: 0x4601d034  c.lt.s      $f26, $f1
    ctx->pc = 0x252e44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[26], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252e48: 0x0  nop
    ctx->pc = 0x252e48u;
    // NOP
    // 0x252e4c: 0x45010058  bc1t        . + 4 + (0x58 << 2)
    ctx->pc = 0x252E4Cu;
    {
        const bool branch_taken_0x252e4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x252E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E4Cu;
        // 0x252e50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e4c) {
            ctx->pc = 0x252FB0u;
            goto label_252fb0;
        }
    }
    ctx->pc = 0x252E54u;
    // 0x252e54: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x252e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252e58: 0xc0cdb4a  jal         func_336D28
    ctx->pc = 0x252E58u;
    SET_GPR_U32(ctx, 31, 0x252E60u);
    ctx->pc = 0x252E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252E58u;
    // 0x252e5c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D28u, 0x252E58u, 0x252E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252E60u;
label_252e60:
    // 0x252e60: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x252e60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252e64: 0x0  nop
    ctx->pc = 0x252e64u;
    // NOP
    // 0x252e68: 0x45000050  bc1f        . + 4 + (0x50 << 2)
    ctx->pc = 0x252E68u;
    {
        const bool branch_taken_0x252e68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x252E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E68u;
        // 0x252e6c: 0x8ec205b0  lw          $v0, 0x5B0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e68) {
            ctx->pc = 0x252FACu;
            goto label_252fac;
        }
    }
    ctx->pc = 0x252E70u;
    // 0x252e70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x252e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252e74: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x252E74u;
    {
        const bool branch_taken_0x252e74 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x252E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E74u;
        // 0x252e78: 0x3c080051  lui         $t0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e74) {
            ctx->pc = 0x252EB0u;
            goto label_252eb0;
        }
    }
    ctx->pc = 0x252E7Cu;
    // 0x252e7c: 0x8ee2c458  lw          $v0, -0x3BA8($s7)
    ctx->pc = 0x252e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294952024)));
    // 0x252e80: 0x1050000b  beq         $v0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x252E80u;
    {
        const bool branch_taken_0x252e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x252E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E80u;
        // 0x252e84: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e80) {
            ctx->pc = 0x252EB0u;
            goto label_252eb0;
        }
    }
    ctx->pc = 0x252E88u;
    // 0x252e88: 0x8d0405b0  lw          $a0, 0x5B0($t0)
    ctx->pc = 0x252e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1456)));
    // 0x252e8c: 0x2443c458  addiu       $v1, $v0, -0x3BA8
    ctx->pc = 0x252e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952024));
    // 0x252e90: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x252e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x252e94: 0x0  nop
    ctx->pc = 0x252e94u;
    // NOP
label_252e98:
    // 0x252e98: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x252e98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x252e9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x252E9Cu;
    {
        const bool branch_taken_0x252e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E9Cu;
        // 0x252ea0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e9c) {
            ctx->pc = 0x252EB0u;
            goto label_252eb0;
        }
    }
    ctx->pc = 0x252EA4u;
    // 0x252ea4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x252ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252ea8: 0x5450fffb  bnel        $v0, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x252EA8u;
    {
        const bool branch_taken_0x252ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x252ea8) {
            ctx->pc = 0x252EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252EA8u;
            // 0x252eac: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252e98;
        }
    }
    ctx->pc = 0x252EB0u;
label_252eb0:
    // 0x252eb0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x252eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252eb4: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x252EB4u;
    {
        const bool branch_taken_0x252eb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x252EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252EB4u;
        // 0x252eb8: 0x8ec705b0  lw          $a3, 0x5B0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252eb4) {
            ctx->pc = 0x252F1Cu;
            goto label_252f1c;
        }
    }
    ctx->pc = 0x252EBCu;
    // 0x252ebc: 0x8d0205b0  lw          $v0, 0x5B0($t0)
    ctx->pc = 0x252ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1456)));
    // 0x252ec0: 0x14a20012  bne         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x252EC0u;
    {
        const bool branch_taken_0x252ec0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x252EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252EC0u;
        // 0x252ec4: 0xb41821  addu        $v1, $a1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252ec0) {
            ctx->pc = 0x252F0Cu;
            goto label_252f0c;
        }
    }
    ctx->pc = 0x252EC8u;
    // 0x252ec8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x252ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x252ecc: 0x4400037  bltz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x252ECCu;
    {
        const bool branch_taken_0x252ecc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x252ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252ECCu;
        // 0x252ed0: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252ecc) {
            ctx->pc = 0x252FACu;
            goto label_252fac;
        }
    }
    ctx->pc = 0x252ED4u;
    // 0x252ed4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x252ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x252ed8: 0x2442c458  addiu       $v0, $v0, -0x3BA8
    ctx->pc = 0x252ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952024));
    // 0x252edc: 0xb42021  addu        $a0, $a1, $s4
    ctx->pc = 0x252edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x252ee0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x252ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x252ee4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x252ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x252ee8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252eec: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x252eecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x252ef0: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x252ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x252ef4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x252ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x252ef8: 0xad0505b0  sw          $a1, 0x5B0($t0)
    ctx->pc = 0x252ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1456), GPR_U32(ctx, 5));
    // 0x252efc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x252efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x252f00: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x252f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x252f04: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x252F04u;
    {
        const bool branch_taken_0x252f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F04u;
        // 0x252f08: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252f04) {
            ctx->pc = 0x252FACu;
            goto label_252fac;
        }
    }
    ctx->pc = 0x252F0Cu;
label_252f0c:
    // 0x252f0c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x252f0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252f10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x252f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x252f14: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x252F14u;
    {
        const bool branch_taken_0x252f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F14u;
        // 0x252f18: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252f14) {
            ctx->pc = 0x252FACu;
            goto label_252fac;
        }
    }
    ctx->pc = 0x252F1Cu;
label_252f1c:
    // 0x252f1c: 0x10a70023  beq         $a1, $a3, . + 4 + (0x23 << 2)
    ctx->pc = 0x252F1Cu;
    {
        const bool branch_taken_0x252f1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x252F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F1Cu;
        // 0x252f20: 0xb42021  addu        $a0, $a1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252f1c) {
            ctx->pc = 0x252FACu;
            goto label_252fac;
        }
    }
    ctx->pc = 0x252F24u;
    // 0x252f24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x252f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252f28: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x252f28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x252f2c: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x252F2Cu;
    {
        const bool branch_taken_0x252f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x252F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F2Cu;
        // 0x252f30: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252f2c) {
            ctx->pc = 0x252FA4u;
            goto label_252fa4;
        }
    }
    ctx->pc = 0x252F34u;
    // 0x252f34: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x252f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x252f38: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x252f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x252f3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x252f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x252f40: 0x24e6ffff  addiu       $a2, $a3, -0x1
    ctx->pc = 0x252f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x252f44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x252f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x252f48: 0xa6202a  slt         $a0, $a1, $a2
    ctx->pc = 0x252f48u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x252f4c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x252f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x252f50: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x252F50u;
    {
        const bool branch_taken_0x252f50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x252F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F50u;
        // 0x252f54: 0xad0605b0  sw          $a2, 0x5B0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 1456), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252f50) {
            ctx->pc = 0x252FACu;
            goto label_252fac;
        }
    }
    ctx->pc = 0x252F58u;
    // 0x252f58: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x252f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x252f5c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x252f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x252f60: 0x2463c458  addiu       $v1, $v1, -0x3BA8
    ctx->pc = 0x252f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952024));
    // 0x252f64: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x252f64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252f68: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x252f68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x252f6c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x252f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x252f70: 0x2442c858  addiu       $v0, $v0, -0x37A8
    ctx->pc = 0x252f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953048));
    // 0x252f74: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x252f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_252f78:
    // 0x252f78: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x252f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x252f7c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x252f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x252f80: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x252f80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x252f84: 0xa8202a  slt         $a0, $a1, $t0
    ctx->pc = 0x252f84u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x252f88: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x252f88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x252f8c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x252f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x252f90: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x252f90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x252f94: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x252F94u;
    {
        const bool branch_taken_0x252f94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x252F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F94u;
        // 0x252f98: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252f94) {
            ctx->pc = 0x252F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252f78;
        }
    }
    ctx->pc = 0x252F9Cu;
    // 0x252f9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x252F9Cu;
    {
        const bool branch_taken_0x252f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F9Cu;
        // 0x252fa0: 0x8fc205b4  lw          $v0, 0x5B4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252f9c) {
            ctx->pc = 0x252FB0u;
            goto label_252fb0;
        }
    }
    ctx->pc = 0x252FA4u;
label_252fa4:
    // 0x252fa4: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x252fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x252fa8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x252fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_252fac:
    // 0x252fac: 0x8fc205b4  lw          $v0, 0x5B4($fp)
    ctx->pc = 0x252facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1460)));
label_252fb0:
    // 0x252fb0: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x252FB0u;
    {
        const bool branch_taken_0x252fb0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x252FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252FB0u;
        // 0x252fb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252fb0) {
            ctx->pc = 0x252FF0u;
            goto label_252ff0;
        }
    }
    ctx->pc = 0x252FB8u;
    // 0x252fb8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x252fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x252fbc: 0x8c62c968  lw          $v0, -0x3698($v1)
    ctx->pc = 0x252fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6CC968u));
    // 0x252fc0: 0x1051000b  beq         $v0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x252FC0u;
    {
        const bool branch_taken_0x252fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x252FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252FC0u;
        // 0x252fc4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252fc0) {
            ctx->pc = 0x252FF0u;
            goto label_252ff0;
        }
    }
    ctx->pc = 0x252FC8u;
    // 0x252fc8: 0x2463c968  addiu       $v1, $v1, -0x3698
    ctx->pc = 0x252fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953320));
    // 0x252fcc: 0x8c4405b4  lw          $a0, 0x5B4($v0)
    ctx->pc = 0x252fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1460)));
    // 0x252fd0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x252fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x252fd4: 0x0  nop
    ctx->pc = 0x252fd4u;
    // NOP
label_252fd8:
    // 0x252fd8: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x252fd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x252fdc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x252FDCu;
    {
        const bool branch_taken_0x252fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252FDCu;
        // 0x252fe0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252fdc) {
            ctx->pc = 0x252FF0u;
            goto label_252ff0;
        }
    }
    ctx->pc = 0x252FE4u;
    // 0x252fe4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x252fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252fe8: 0x5451fffb  bnel        $v0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x252FE8u;
    {
        const bool branch_taken_0x252fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x252fe8) {
            ctx->pc = 0x252FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252FE8u;
            // 0x252fec: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252fd8;
        }
    }
    ctx->pc = 0x252FF0u;
label_252ff0:
    // 0x252ff0: 0x8fc205b4  lw          $v0, 0x5B4($fp)
    ctx->pc = 0x252ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1460)));
    // 0x252ff4: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x252FF4u;
    {
        const bool branch_taken_0x252ff4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x252ff4) {
            ctx->pc = 0x252FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252FF4u;
            // 0x252ff8: 0x86620014  lh          $v0, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253008u;
            goto label_253008;
        }
    }
    ctx->pc = 0x252FFCu;
    // 0x252ffc: 0xc094b24  jal         func_252C90
    ctx->pc = 0x252FFCu;
    SET_GPR_U32(ctx, 31, 0x253004u);
    ctx->pc = 0x253000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252FFCu;
    // 0x253000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252C90u;
    goto label_252c90;
    ctx->pc = 0x253004u;
label_253004:
    // 0x253004: 0x86620014  lh          $v0, 0x14($s3)
    ctx->pc = 0x253004u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
label_253008:
    // 0x253008: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x253008u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25300c: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x25300cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x253010: 0x5440ff57  bnel        $v0, $zero, . + 4 + (-0xA9 << 2)
    ctx->pc = 0x253010u;
    {
        const bool branch_taken_0x253010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x253010) {
            ctx->pc = 0x253014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253010u;
            // 0x253014: 0x8e630010  lw          $v1, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252d70;
        }
    }
    ctx->pc = 0x253018u;
label_253018:
    // 0x253018: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x253018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25301c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x25301cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x253020: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x253020u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x253024: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x253024u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x253028: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x253028u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25302c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x25302cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x253030: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x253030u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x253034: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x253034u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x253038: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x253038u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25303c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25303cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x253040: 0xc7ba0100  lwc1        $f26, 0x100($sp)
    ctx->pc = 0x253040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x253044: 0xc7b900f8  lwc1        $f25, 0xF8($sp)
    ctx->pc = 0x253044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x253048: 0xc7b800f0  lwc1        $f24, 0xF0($sp)
    ctx->pc = 0x253048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x25304c: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x25304cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x253050: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x253050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x253054: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x253054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x253058: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x253058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25305c: 0x3e00008  jr          $ra
    ctx->pc = 0x25305Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25305Cu;
        // 0x253060: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25305Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253064u;
    // 0x253064: 0x0  nop
    ctx->pc = 0x253064u;
    // NOP
    ctx->pc = 0x253068u;
}
