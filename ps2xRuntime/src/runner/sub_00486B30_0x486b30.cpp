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

// Function: sub_00486B30
// Address: 0x486b30 - 0x486d20
void sub_00486B30_0x486b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00486B30_0x486b30");
#endif

    switch (ctx->pc) {
        case 0x486be8u: goto label_486be8;
        case 0x486c28u: goto label_486c28;
        case 0x486c50u: goto label_486c50;
        default: break;
    }

    ctx->pc = 0x486b30u;

    // 0x486b30: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x486b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x486b34: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x486b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x486b38: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x486b38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x486b3c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x486b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x486b40: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x486b40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486b44: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x486b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x486b48: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x486b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x486b4c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x486b4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486b50: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x486b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x486b54: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x486b54u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486b58: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x486b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x486b5c: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x486b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x486b60: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x486b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x486b64: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x486b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x486b68: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x486b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x486b6c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x486b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x486b70: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x486b70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x486b74: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x486b74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x486b78: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x486b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x486b7c: 0x8e8b0004  lw          $t3, 0x4($s4)
    ctx->pc = 0x486b7cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x486b80: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x486b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x486b84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x486b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x486b88: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x486b88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x486b8c: 0x8e8c0008  lw          $t4, 0x8($s4)
    ctx->pc = 0x486b8cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x486b90: 0x448b1800  mtc1        $t3, $f3
    ctx->pc = 0x486b90u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x486b94: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x486b94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x486b98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x486b98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x486b9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x486b9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x486ba0: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x486ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x486ba4: 0x448c2000  mtc1        $t4, $f4
    ctx->pc = 0x486ba4u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x486ba8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x486ba8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x486bac: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x486bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x486bb0: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x486bb0u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x486bb4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x486bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x486bb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x486bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x486bbc: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x486bbcu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x486bc0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x486bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x486bc4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x486bc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x486bc8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x486bc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x486bcc: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x486bccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x486bd0: 0x44131000  mfc1        $s3, $f2
    ctx->pc = 0x486bd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x486bd4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x486bd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x486bd8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x486bd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x486bdc: 0x19800040  blez        $t4, . + 4 + (0x40 << 2)
    ctx->pc = 0x486BDCu;
    {
        const bool branch_taken_0x486bdc = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x486BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486BDCu;
        // 0x486be0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486bdc) {
            ctx->pc = 0x486CE0u;
            goto label_486ce0;
        }
    }
    ctx->pc = 0x486BE4u;
    // 0x486be4: 0x0  nop
    ctx->pc = 0x486be4u;
    // NOP
label_486be8:
    // 0x486be8: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x486be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x486bec: 0x249e0001  addiu       $fp, $a0, 0x1
    ctx->pc = 0x486becu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x486bf0: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x486bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x486bf4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x486bf4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486bf8: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x486bf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x486bfc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x486bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x486c00: 0x144b021  addu        $s6, $t2, $a0
    ctx->pc = 0x486c00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x486c04: 0x19600032  blez        $t3, . + 4 + (0x32 << 2)
    ctx->pc = 0x486C04u;
    {
        const bool branch_taken_0x486c04 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x486C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486C04u;
        // 0x486c08: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486c04) {
            ctx->pc = 0x486CD0u;
            goto label_486cd0;
        }
    }
    ctx->pc = 0x486C0Cu;
    // 0x486c0c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x486c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x486c10: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x486c10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x486c14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x486c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486c18: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x486c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x486c1c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x486c1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x486c20: 0x2672ffff  addiu       $s2, $s3, -0x1
    ctx->pc = 0x486c20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x486c24: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x486c24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_486c28:
    // 0x486c28: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x486c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486c2c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x486c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486c30: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x486c30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486c34: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x486c34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486c38: 0x26c8ffff  addiu       $t0, $s6, -0x1
    ctx->pc = 0x486c38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x486c3c: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x486c3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486c40: 0x7faa0020  sq          $t2, 0x20($sp)
    ctx->pc = 0x486c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 10));
    // 0x486c44: 0x7fab0030  sq          $t3, 0x30($sp)
    ctx->pc = 0x486c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 11));
    // 0x486c48: 0xc121a2c  jal         func_4868B0
    ctx->pc = 0x486C48u;
    SET_GPR_U32(ctx, 31, 0x486C50u);
    ctx->pc = 0x486C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x486C48u;
    // 0x486c4c: 0x7fac0040  sq          $t4, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4868B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4868B0u, 0x486C48u, 0x486C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486C50u;
label_486c50:
    // 0x486c50: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x486c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x486c54: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x486c54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x486c58: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x486c58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x486c5c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x486c5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x486c60: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x486c60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x486c64: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x486c64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x486c68: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x486c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x486c6c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x486c6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x486c70: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x486c70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x486c74: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x486c74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x486c78: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x486c78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x486c7c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x486c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x486c80: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x486c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x486c84: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x486c84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x486c88: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x486c88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x486c8c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x486c8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x486c90: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x486c90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x486c94: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x486c94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x486c98: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x486c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x486c9c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x486c9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x486ca0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x486ca0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x486ca4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x486ca4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x486ca8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x486ca8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x486cac: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x486cacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x486cb0: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x486cb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x486cb4: 0x2b3a821  addu        $s5, $s5, $s3
    ctx->pc = 0x486cb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x486cb8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x486cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x486cbc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x486cbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x486cc0: 0x7baa0020  lq          $t2, 0x20($sp)
    ctx->pc = 0x486cc0u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x486cc4: 0x7bab0030  lq          $t3, 0x30($sp)
    ctx->pc = 0x486cc4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x486cc8: 0x1620ffd7  bnez        $s1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x486CC8u;
    {
        const bool branch_taken_0x486cc8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x486CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486CC8u;
        // 0x486ccc: 0x7bac0040  lq          $t4, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486cc8) {
            ctx->pc = 0x486C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_486c28;
        }
    }
    ctx->pc = 0x486CD0u;
label_486cd0:
    // 0x486cd0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x486cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486cd4: 0x8c102a  slt         $v0, $a0, $t4
    ctx->pc = 0x486cd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x486cd8: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x486CD8u;
    {
        const bool branch_taken_0x486cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x486CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486CD8u;
        // 0x486cdc: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486cd8) {
            ctx->pc = 0x486BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_486be8;
        }
    }
    ctx->pc = 0x486CE0u;
label_486ce0:
    // 0x486ce0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x486ce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486ce4: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x486ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x486ce8: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x486ce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x486cec: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x486cecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x486cf0: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x486cf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x486cf4: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x486cf4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x486cf8: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x486cf8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x486cfc: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x486cfcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x486d00: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x486d00u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x486d04: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x486d04u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x486d08: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x486d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x486d0c: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x486d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x486d10: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x486d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x486d14: 0x3e00008  jr          $ra
    ctx->pc = 0x486D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x486D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486D14u;
        // 0x486d18: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x486D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x486D1Cu;
    // 0x486d1c: 0x0  nop
    ctx->pc = 0x486d1cu;
    // NOP
    ctx->pc = 0x486d20u;
}
