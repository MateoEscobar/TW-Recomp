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

// Function: sub_0034B040
// Address: 0x34b040 - 0x34b3b8
void sub_0034B040_0x34b040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034B040_0x34b040");
#endif

    switch (ctx->pc) {
        case 0x34b290u: goto label_34b290;
        case 0x34b2b8u: goto label_34b2b8;
        case 0x34b328u: goto label_34b328;
        default: break;
    }

    ctx->pc = 0x34b040u;

    // 0x34b040: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x34b040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x34b044: 0xe7bb00c8  swc1        $f27, 0xC8($sp)
    ctx->pc = 0x34b044u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x34b048: 0xc7a400d8  lwc1        $f4, 0xD8($sp)
    ctx->pc = 0x34b048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34b04c: 0x460076c6  mov.s       $f27, $f14
    ctx->pc = 0x34b04cu;
    ctx->f[27] = FPU_MOV_S(ctx->f[14]);
    // 0x34b050: 0x46008b86  mov.s       $f14, $f17
    ctx->pc = 0x34b050u;
    ctx->f[14] = FPU_MOV_S(ctx->f[17]);
    // 0x34b054: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x34b054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x34b058: 0x4604d800  add.s       $f0, $f27, $f4
    ctx->pc = 0x34b058u;
    ctx->f[0] = FPU_ADD_S(ctx->f[27], ctx->f[4]);
    // 0x34b05c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x34b05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x34b060: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x34b060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x34b064: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34b064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b068: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x34b068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x34b06c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34b06cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b070: 0x46007036  c.le.s      $f14, $f0
    ctx->pc = 0x34b070u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b074: 0xe7ba00c0  swc1        $f26, 0xC0($sp)
    ctx->pc = 0x34b074u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x34b078: 0xe7b900b8  swc1        $f25, 0xB8($sp)
    ctx->pc = 0x34b078u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x34b07c: 0x46006e86  mov.s       $f26, $f13
    ctx->pc = 0x34b07cu;
    ctx->f[26] = FPU_MOV_S(ctx->f[13]);
    // 0x34b080: 0xe7b800b0  swc1        $f24, 0xB0($sp)
    ctx->pc = 0x34b080u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x34b084: 0x46006646  mov.s       $f25, $f12
    ctx->pc = 0x34b084u;
    ctx->f[25] = FPU_MOV_S(ctx->f[12]);
    // 0x34b088: 0xe7b700a8  swc1        $f23, 0xA8($sp)
    ctx->pc = 0x34b088u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x34b08c: 0x46008606  mov.s       $f24, $f16
    ctx->pc = 0x34b08cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[16]);
    // 0x34b090: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x34b090u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x34b094: 0x46007dc6  mov.s       $f23, $f15
    ctx->pc = 0x34b094u;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
    // 0x34b098: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x34b098u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x34b09c: 0x46009546  mov.s       $f21, $f18
    ctx->pc = 0x34b09cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[18]);
    // 0x34b0a0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34b0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34b0a4: 0x46009d06  mov.s       $f20, $f19
    ctx->pc = 0x34b0a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[19]);
    // 0x34b0a8: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x34b0a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x34b0ac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x34b0acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b0b0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x34b0b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b0b4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x34B0B4u;
    {
        const bool branch_taken_0x34b0b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B0B4u;
        // 0x34b0b8: 0xc7b100d0  lwc1        $f17, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b0b4) {
            ctx->pc = 0x34B0CCu;
            goto label_34b0cc;
        }
    }
    ctx->pc = 0x34B0BCu;
    // 0x34b0bc: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34B0BCu;
    {
        const bool branch_taken_0x34b0bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B0BCu;
        // 0x34b0c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b0bc) {
            ctx->pc = 0x34B0CCu;
            goto label_34b0cc;
        }
    }
    ctx->pc = 0x34B0C4u;
    // 0x34b0c4: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x34B0C4u;
    {
        const bool branch_taken_0x34b0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B0C4u;
        // 0x34b0c8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b0c4) {
            ctx->pc = 0x34B378u;
            goto label_34b378;
        }
    }
    ctx->pc = 0x34B0CCu;
label_34b0cc:
    // 0x34b0cc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x34b0ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x34b0d0: 0x0  nop
    ctx->pc = 0x34b0d0u;
    // NOP
    // 0x34b0d4: 0x46111836  c.le.s      $f3, $f17
    ctx->pc = 0x34b0d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[17])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b0d8: 0x0  nop
    ctx->pc = 0x34b0d8u;
    // NOP
    // 0x34b0dc: 0x450100a6  bc1t        . + 4 + (0xA6 << 2)
    ctx->pc = 0x34B0DCu;
    {
        const bool branch_taken_0x34b0dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B0DCu;
        // 0x34b0e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b0dc) {
            ctx->pc = 0x34B378u;
            goto label_34b378;
        }
    }
    ctx->pc = 0x34B0E4u;
    // 0x34b0e4: 0x46118802  mul.s       $f0, $f17, $f17
    ctx->pc = 0x34b0e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[17], ctx->f[17]);
    // 0x34b0e8: 0x4615a842  mul.s       $f1, $f21, $f21
    ctx->pc = 0x34b0e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x34b0ec: 0x4614a082  mul.s       $f2, $f20, $f20
    ctx->pc = 0x34b0ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x34b0f0: 0x46151836  c.le.s      $f3, $f21
    ctx->pc = 0x34b0f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b0f4: 0x46010140  add.s       $f5, $f0, $f1
    ctx->pc = 0x34b0f4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34b0f8: 0x46020400  add.s       $f16, $f0, $f2
    ctx->pc = 0x34b0f8u;
    ctx->f[16] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x34b0fc: 0x461b7381  sub.s       $f14, $f14, $f27
    ctx->pc = 0x34b0fcu;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[27]);
    // 0x34b100: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x34B100u;
    {
        const bool branch_taken_0x34b100 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B100u;
        // 0x34b104: 0x46042482  mul.s       $f18, $f4, $f4 (Delay Slot)
        ctx->f[18] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b100) {
            ctx->pc = 0x34B120u;
            goto label_34b120;
        }
    }
    ctx->pc = 0x34B108u;
    // 0x34b108: 0x4619bb01  sub.s       $f12, $f23, $f25
    ctx->pc = 0x34b108u;
    ctx->f[12] = FPU_SUB_S(ctx->f[23], ctx->f[25]);
    // 0x34b10c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34b10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b110: 0x460ea842  mul.s       $f1, $f21, $f14
    ctx->pc = 0x34b110u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[14]);
    // 0x34b114: 0x460c8802  mul.s       $f0, $f17, $f12
    ctx->pc = 0x34b114u;
    ctx->f[0] = FPU_MUL_S(ctx->f[17], ctx->f[12]);
    // 0x34b118: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34B118u;
    {
        const bool branch_taken_0x34b118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B118u;
        // 0x34b11c: 0x460008c1  sub.s       $f3, $f1, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b118) {
            ctx->pc = 0x34B134u;
            goto label_34b134;
        }
    }
    ctx->pc = 0x34B120u;
label_34b120:
    // 0x34b120: 0x4619bb00  add.s       $f12, $f23, $f25
    ctx->pc = 0x34b120u;
    ctx->f[12] = FPU_ADD_S(ctx->f[23], ctx->f[25]);
    // 0x34b124: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x34b124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34b128: 0x460ea842  mul.s       $f1, $f21, $f14
    ctx->pc = 0x34b128u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[14]);
    // 0x34b12c: 0x460c8802  mul.s       $f0, $f17, $f12
    ctx->pc = 0x34b12cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[17], ctx->f[12]);
    // 0x34b130: 0x460100c1  sub.s       $f3, $f0, $f1
    ctx->pc = 0x34b130u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_34b134:
    // 0x34b134: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34b134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b138: 0x0  nop
    ctx->pc = 0x34b138u;
    // NOP
    // 0x34b13c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x34b13cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b140: 0x0  nop
    ctx->pc = 0x34b140u;
    // NOP
    // 0x34b144: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x34B144u;
    {
        const bool branch_taken_0x34b144 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B144u;
        // 0x34b148: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b144) {
            ctx->pc = 0x34B160u;
            goto label_34b160;
        }
    }
    ctx->pc = 0x34B14Cu;
    // 0x34b14c: 0x461ac341  sub.s       $f13, $f24, $f26
    ctx->pc = 0x34b14cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[24], ctx->f[26]);
    // 0x34b150: 0x460ea042  mul.s       $f1, $f20, $f14
    ctx->pc = 0x34b150u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[14]);
    // 0x34b154: 0x460d8802  mul.s       $f0, $f17, $f13
    ctx->pc = 0x34b154u;
    ctx->f[0] = FPU_MUL_S(ctx->f[17], ctx->f[13]);
    // 0x34b158: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34B158u;
    {
        const bool branch_taken_0x34b158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B158u;
        // 0x34b15c: 0x46000881  sub.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b158) {
            ctx->pc = 0x34B174u;
            goto label_34b174;
        }
    }
    ctx->pc = 0x34B160u;
label_34b160:
    // 0x34b160: 0x461ac340  add.s       $f13, $f24, $f26
    ctx->pc = 0x34b160u;
    ctx->f[13] = FPU_ADD_S(ctx->f[24], ctx->f[26]);
    // 0x34b164: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x34b164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34b168: 0x460ea042  mul.s       $f1, $f20, $f14
    ctx->pc = 0x34b168u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[14]);
    // 0x34b16c: 0x460d8802  mul.s       $f0, $f17, $f13
    ctx->pc = 0x34b16cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[17], ctx->f[13]);
    // 0x34b170: 0x46010081  sub.s       $f2, $f0, $f1
    ctx->pc = 0x34b170u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_34b174:
    // 0x34b174: 0x4483b000  mtc1        $v1, $f22
    ctx->pc = 0x34b174u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x34b178: 0x0  nop
    ctx->pc = 0x34b178u;
    // NOP
    // 0x34b17c: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x34b17cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x34b180: 0x46152002  mul.s       $f0, $f4, $f21
    ctx->pc = 0x34b180u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
    // 0x34b184: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x34b184u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x34b188: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x34b188u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b18c: 0x0  nop
    ctx->pc = 0x34b18cu;
    // NOP
    // 0x34b190: 0x45020050  bc1fl       . + 4 + (0x50 << 2)
    ctx->pc = 0x34B190u;
    {
        const bool branch_taken_0x34b190 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b190) {
            ctx->pc = 0x34B194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34B190u;
            // 0x34b194: 0x46142002  mul.s       $f0, $f4, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B2D4u;
            goto label_34b2d4;
        }
    }
    ctx->pc = 0x34B198u;
    // 0x34b198: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x34b198u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x34b19c: 0x46059002  mul.s       $f0, $f18, $f5
    ctx->pc = 0x34b19cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[18], ctx->f[5]);
    // 0x34b1a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34b1a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b1a4: 0x0  nop
    ctx->pc = 0x34b1a4u;
    // NOP
    // 0x34b1a8: 0x45030073  bc1tl       . + 4 + (0x73 << 2)
    ctx->pc = 0x34B1A8u;
    {
        const bool branch_taken_0x34b1a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b1a8) {
            ctx->pc = 0x34B1ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34B1A8u;
            // 0x34b1ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B378u;
            goto label_34b378;
        }
    }
    ctx->pc = 0x34B1B0u;
    // 0x34b1b0: 0x46142002  mul.s       $f0, $f4, $f20
    ctx->pc = 0x34b1b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x34b1b4: 0x4482b800  mtc1        $v0, $f23
    ctx->pc = 0x34b1b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x34b1b8: 0x0  nop
    ctx->pc = 0x34b1b8u;
    // NOP
    // 0x34b1bc: 0x4680bde0  cvt.s.w     $f23, $f23
    ctx->pc = 0x34b1bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[23], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
    // 0x34b1c0: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x34b1c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x34b1c4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x34b1c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b1c8: 0x0  nop
    ctx->pc = 0x34b1c8u;
    // NOP
    // 0x34b1cc: 0x45020035  bc1fl       . + 4 + (0x35 << 2)
    ctx->pc = 0x34B1CCu;
    {
        const bool branch_taken_0x34b1cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b1cc) {
            ctx->pc = 0x34B1D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34B1CCu;
            // 0x34b1d0: 0x46007346  mov.s       $f13, $f14 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[14]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B2A4u;
            goto label_34b2a4;
        }
    }
    ctx->pc = 0x34B1D4u;
    // 0x34b1d4: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x34b1d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x34b1d8: 0x46109002  mul.s       $f0, $f18, $f16
    ctx->pc = 0x34b1d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[18], ctx->f[16]);
    // 0x34b1dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34b1dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b1e0: 0x0  nop
    ctx->pc = 0x34b1e0u;
    // NOP
    // 0x34b1e4: 0x45010064  bc1t        . + 4 + (0x64 << 2)
    ctx->pc = 0x34B1E4u;
    {
        const bool branch_taken_0x34b1e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B1E4u;
        // 0x34b1e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b1e4) {
            ctx->pc = 0x34B378u;
            goto label_34b378;
        }
    }
    ctx->pc = 0x34B1ECu;
    // 0x34b1ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34b1ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34b1f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34b1f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b1f4: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x34b1f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34b1f8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x34b1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x34b1fc: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x34b1fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x34b200: 0xe7b10008  swc1        $f17, 0x8($sp)
    ctx->pc = 0x34b200u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x34b204: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x34b204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x34b208: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x34b208u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b20c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34b20cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34b210: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34b210u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34b214: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34b214u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34b218: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34b218u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34b21c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34b21cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34b220: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x34b220u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34b224: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x34b224u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x34b228: 0xe7ad0014  swc1        $f13, 0x14($sp)
    ctx->pc = 0x34b228u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x34b22c: 0xe7ae0018  swc1        $f14, 0x18($sp)
    ctx->pc = 0x34b22cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x34b230: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34b230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b234: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x34b234u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34b238: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34b238u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34b23c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34b23cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34b240: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x34b240u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34b244: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x34b244u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34b248: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x34b248u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34b24c: 0x46009002  mul.s       $f0, $f18, $f0
    ctx->pc = 0x34b24cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[18], ctx->f[0]);
    // 0x34b250: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34b250u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34b254: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34b254u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34b258: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34b258u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34b25c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34b25cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34b260: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34b260u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34b264: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x34b264u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34b268: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x34b268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x34b26c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x34b26cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34b270: 0x0  nop
    ctx->pc = 0x34b270u;
    // NOP
    // 0x34b274: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34b274u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b278: 0x0  nop
    ctx->pc = 0x34b278u;
    // NOP
    // 0x34b27c: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x34B27Cu;
    {
        const bool branch_taken_0x34b27c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B27Cu;
        // 0x34b280: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b27c) {
            ctx->pc = 0x34B30Cu;
            goto label_34b30c;
        }
    }
    ctx->pc = 0x34B284u;
    // 0x34b284: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x34b284u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x34b288: 0xc0d2bd4  jal         func_34AF50
    ctx->pc = 0x34B288u;
    SET_GPR_U32(ctx, 31, 0x34B290u);
    ctx->pc = 0x34B28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B288u;
    // 0x34b28c: 0x4600a406  mov.s       $f16, $f20 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34AF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34AF50u, 0x34B288u, 0x34B290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B290u;
label_34b290:
    // 0x34b290: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x34b290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x34b294: 0x4616c842  mul.s       $f1, $f25, $f22
    ctx->pc = 0x34b294u;
    ctx->f[1] = FPU_MUL_S(ctx->f[25], ctx->f[22]);
    // 0x34b298: 0x4617d002  mul.s       $f0, $f26, $f23
    ctx->pc = 0x34b298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[23]);
    // 0x34b29c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x34B29Cu;
    {
        const bool branch_taken_0x34b29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B29Cu;
        // 0x34b2a0: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b29c) {
            ctx->pc = 0x34B36Cu;
            goto label_34b36c;
        }
    }
    ctx->pc = 0x34B2A4u;
label_34b2a4:
    // 0x34b2a4: 0x46008bc6  mov.s       $f15, $f17
    ctx->pc = 0x34b2a4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[17]);
    // 0x34b2a8: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x34b2a8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x34b2ac: 0x46002c06  mov.s       $f16, $f5
    ctx->pc = 0x34b2acu;
    ctx->f[16] = FPU_MOV_S(ctx->f[5]);
    // 0x34b2b0: 0xc0d2bf6  jal         func_34AFD8
    ctx->pc = 0x34B2B0u;
    SET_GPR_U32(ctx, 31, 0x34B2B8u);
    ctx->pc = 0x34B2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B2B0u;
    // 0x34b2b4: 0x46009446  mov.s       $f17, $f18 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[18]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34AFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34AFD8u, 0x34B2B0u, 0x34B2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B2B8u;
label_34b2b8:
    // 0x34b2b8: 0x4616c842  mul.s       $f1, $f25, $f22
    ctx->pc = 0x34b2b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[25], ctx->f[22]);
    // 0x34b2bc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x34b2bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x34b2c0: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x34b2c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x34b2c4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x34b2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b2c8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x34b2c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x34b2cc: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x34B2CCu;
    {
        const bool branch_taken_0x34b2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B2CCu;
        // 0x34b2d0: 0x4600c000  add.s       $f0, $f24, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b2cc) {
            ctx->pc = 0x34B36Cu;
            goto label_34b36c;
        }
    }
    ctx->pc = 0x34B2D4u;
label_34b2d4:
    // 0x34b2d4: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x34b2d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x34b2d8: 0x0  nop
    ctx->pc = 0x34b2d8u;
    // NOP
    // 0x34b2dc: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x34b2dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x34b2e0: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x34b2e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x34b2e4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x34b2e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b2e8: 0x0  nop
    ctx->pc = 0x34b2e8u;
    // NOP
    // 0x34b2ec: 0x45020015  bc1fl       . + 4 + (0x15 << 2)
    ctx->pc = 0x34B2ECu;
    {
        const bool branch_taken_0x34b2ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b2ec) {
            ctx->pc = 0x34B2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34B2ECu;
            // 0x34b2f0: 0x460e2001  sub.s       $f0, $f4, $f14 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[14]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B344u;
            goto label_34b344;
        }
    }
    ctx->pc = 0x34B2F4u;
    // 0x34b2f4: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x34b2f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x34b2f8: 0x46109002  mul.s       $f0, $f18, $f16
    ctx->pc = 0x34b2f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[18], ctx->f[16]);
    // 0x34b2fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34b2fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b300: 0x0  nop
    ctx->pc = 0x34b300u;
    // NOP
    // 0x34b304: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x34B304u;
    {
        const bool branch_taken_0x34b304 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B304u;
        // 0x34b308: 0x46006b06  mov.s       $f12, $f13 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b304) {
            ctx->pc = 0x34B314u;
            goto label_34b314;
        }
    }
    ctx->pc = 0x34B30Cu;
label_34b30c:
    // 0x34b30c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x34B30Cu;
    {
        const bool branch_taken_0x34b30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B30Cu;
        // 0x34b310: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b30c) {
            ctx->pc = 0x34B378u;
            goto label_34b378;
        }
    }
    ctx->pc = 0x34B314u;
label_34b314:
    // 0x34b314: 0x46008bc6  mov.s       $f15, $f17
    ctx->pc = 0x34b314u;
    ctx->f[15] = FPU_MOV_S(ctx->f[17]);
    // 0x34b318: 0x46007346  mov.s       $f13, $f14
    ctx->pc = 0x34b318u;
    ctx->f[13] = FPU_MOV_S(ctx->f[14]);
    // 0x34b31c: 0x46009446  mov.s       $f17, $f18
    ctx->pc = 0x34b31cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[18]);
    // 0x34b320: 0xc0d2bf6  jal         func_34AFD8
    ctx->pc = 0x34B320u;
    SET_GPR_U32(ctx, 31, 0x34B328u);
    ctx->pc = 0x34B324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B320u;
    // 0x34b324: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34AFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34AFD8u, 0x34B320u, 0x34B328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B328u;
label_34b328:
    // 0x34b328: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x34b328u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x34b32c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x34b32cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x34b330: 0x4616d082  mul.s       $f2, $f26, $f22
    ctx->pc = 0x34b330u;
    ctx->f[2] = FPU_MUL_S(ctx->f[26], ctx->f[22]);
    // 0x34b334: 0x4601b840  add.s       $f1, $f23, $f1
    ctx->pc = 0x34b334u;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
    // 0x34b338: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x34b338u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x34b33c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x34B33Cu;
    {
        const bool branch_taken_0x34b33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B33Cu;
        // 0x34b340: 0xe6420000  swc1        $f2, 0x0($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b33c) {
            ctx->pc = 0x34B370u;
            goto label_34b370;
        }
    }
    ctx->pc = 0x34B344u;
label_34b344:
    // 0x34b344: 0x0  nop
    ctx->pc = 0x34b344u;
    // NOP
    // 0x34b348: 0x0  nop
    ctx->pc = 0x34b348u;
    // NOP
    // 0x34b34c: 0x46110003  div.s       $f0, $f0, $f17
    ctx->pc = 0x34b34cu;
    { if (ctx->f[17] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[17]); }
    // 0x34b350: 0x46150042  mul.s       $f1, $f0, $f21
    ctx->pc = 0x34b350u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x34b354: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x34b354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x34b358: 0x46170840  add.s       $f1, $f1, $f23
    ctx->pc = 0x34b358u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[23]);
    // 0x34b35c: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x34b35cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x34b360: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x34b360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b364: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x34b364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x34b368: 0x46180000  add.s       $f0, $f0, $f24
    ctx->pc = 0x34b368u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
label_34b36c:
    // 0x34b36c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x34b36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_34b370:
    // 0x34b370: 0xe67b0000  swc1        $f27, 0x0($s3)
    ctx->pc = 0x34b370u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x34b374: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34b374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34b378:
    // 0x34b378: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x34b378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x34b37c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x34b37cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x34b380: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x34b380u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x34b384: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x34b384u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34b388: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34b388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34b38c: 0xc7bb00c8  lwc1        $f27, 0xC8($sp)
    ctx->pc = 0x34b38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x34b390: 0xc7ba00c0  lwc1        $f26, 0xC0($sp)
    ctx->pc = 0x34b390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x34b394: 0xc7b900b8  lwc1        $f25, 0xB8($sp)
    ctx->pc = 0x34b394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x34b398: 0xc7b800b0  lwc1        $f24, 0xB0($sp)
    ctx->pc = 0x34b398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x34b39c: 0xc7b700a8  lwc1        $f23, 0xA8($sp)
    ctx->pc = 0x34b39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x34b3a0: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x34b3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x34b3a4: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x34b3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x34b3a8: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x34b3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34b3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x34B3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B3ACu;
        // 0x34b3b0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B3B4u;
    // 0x34b3b4: 0x0  nop
    ctx->pc = 0x34b3b4u;
    // NOP
    ctx->pc = 0x34b3b8u;
}
