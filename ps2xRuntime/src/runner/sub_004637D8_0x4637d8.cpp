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

// Function: sub_004637D8
// Address: 0x4637d8 - 0x463940
void sub_004637D8_0x4637d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004637D8_0x4637d8");
#endif

    ctx->pc = 0x4637d8u;

    // 0x4637d8: 0xc4a80014  lwc1        $f8, 0x14($a1)
    ctx->pc = 0x4637d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x4637dc: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x4637dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4637e0: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x4637e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4637e4: 0x460840c2  mul.s       $f3, $f8, $f8
    ctx->pc = 0x4637e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x4637e8: 0xc4a7000c  lwc1        $f7, 0xC($a1)
    ctx->pc = 0x4637e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4637ec: 0x46063002  mul.s       $f0, $f6, $f6
    ctx->pc = 0x4637ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x4637f0: 0xc4a50010  lwc1        $f5, 0x10($a1)
    ctx->pc = 0x4637f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4637f4: 0x46073842  mul.s       $f1, $f7, $f7
    ctx->pc = 0x4637f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x4637f8: 0x46052882  mul.s       $f2, $f5, $f5
    ctx->pc = 0x4637f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x4637fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4637fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x463800: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x463800u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x463804: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x463804u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x463808: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x463808u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x46380c: 0x0  nop
    ctx->pc = 0x46380cu;
    // NOP
    // 0x463810: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x463810u;
    {
        const bool branch_taken_0x463810 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x463814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463810u;
        // 0x463814: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x463810) {
            ctx->pc = 0x463848u;
            goto label_463848;
        }
    }
    ctx->pc = 0x463818u;
    // 0x463818: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x463818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x46381c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x46381cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x463820: 0x460300c3  div.s       $f3, $f0, $f3
    ctx->pc = 0x463820u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x463824: 0x46034042  mul.s       $f1, $f8, $f3
    ctx->pc = 0x463824u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x463828: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x463828u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x46382c: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x46382cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x463830: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x463830u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x463834: 0x46032882  mul.s       $f2, $f5, $f3
    ctx->pc = 0x463834u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x463838: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x463838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x46383c: 0x46033842  mul.s       $f1, $f7, $f3
    ctx->pc = 0x46383cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x463840: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x463840u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x463844: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x463844u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_463848:
    // 0x463848: 0x6882000f  ldl         $v0, 0xF($a0)
    ctx->pc = 0x463848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x46384c: 0x6c820008  ldr         $v0, 0x8($a0)
    ctx->pc = 0x46384cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x463850: 0x68830017  ldl         $v1, 0x17($a0)
    ctx->pc = 0x463850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x463854: 0x6c830010  ldr         $v1, 0x10($a0)
    ctx->pc = 0x463854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x463858: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x463858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x46385c: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x46385cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x463860: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x463860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x463864: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x463864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x463868: 0xc7ad000c  lwc1        $f13, 0xC($sp)
    ctx->pc = 0x463868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x46386c: 0xc7aa0000  lwc1        $f10, 0x0($sp)
    ctx->pc = 0x46386cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x463870: 0xc7a60010  lwc1        $f6, 0x10($sp)
    ctx->pc = 0x463870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x463874: 0xc7ab0004  lwc1        $f11, 0x4($sp)
    ctx->pc = 0x463874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x463878: 0xc7a70014  lwc1        $f7, 0x14($sp)
    ctx->pc = 0x463878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x46387c: 0x46065042  mul.s       $f1, $f10, $f6
    ctx->pc = 0x46387cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
    // 0x463880: 0xc7a80008  lwc1        $f8, 0x8($sp)
    ctx->pc = 0x463880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x463884: 0x460758c2  mul.s       $f3, $f11, $f7
    ctx->pc = 0x463884u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[7]);
    // 0x463888: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x463888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x46388c: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x46388cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x463890: 0x46044082  mul.s       $f2, $f8, $f4
    ctx->pc = 0x463890u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x463894: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x463894u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x463898: 0x460c6802  mul.s       $f0, $f13, $f12
    ctx->pc = 0x463898u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[12]);
    // 0x46389c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x46389cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4638a0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4638a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4638a4: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x4638a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x4638a8: 0x46045842  mul.s       $f1, $f11, $f4
    ctx->pc = 0x4638a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
    // 0x4638ac: 0x46074242  mul.s       $f9, $f8, $f7
    ctx->pc = 0x4638acu;
    ctx->f[9] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x4638b0: 0x46064082  mul.s       $f2, $f8, $f6
    ctx->pc = 0x4638b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x4638b4: 0x46045142  mul.s       $f5, $f10, $f4
    ctx->pc = 0x4638b4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
    // 0x4638b8: 0x46075002  mul.s       $f0, $f10, $f7
    ctx->pc = 0x4638b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
    // 0x4638bc: 0x460658c2  mul.s       $f3, $f11, $f6
    ctx->pc = 0x4638bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x4638c0: 0x46090841  sub.s       $f1, $f1, $f9
    ctx->pc = 0x4638c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[9]);
    // 0x4638c4: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x4638c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x4638c8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x4638c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x4638cc: 0x460d3182  mul.s       $f6, $f6, $f13
    ctx->pc = 0x4638ccu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[13]);
    // 0x4638d0: 0x460d2102  mul.s       $f4, $f4, $f13
    ctx->pc = 0x4638d0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[13]);
    // 0x4638d4: 0x460d39c2  mul.s       $f7, $f7, $f13
    ctx->pc = 0x4638d4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[13]);
    // 0x4638d8: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x4638d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x4638dc: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x4638dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x4638e0: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x4638e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x4638e4: 0x460c5282  mul.s       $f10, $f10, $f12
    ctx->pc = 0x4638e4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[12]);
    // 0x4638e8: 0x460c4202  mul.s       $f8, $f8, $f12
    ctx->pc = 0x4638e8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
    // 0x4638ec: 0x460c5ac2  mul.s       $f11, $f11, $f12
    ctx->pc = 0x4638ecu;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[12]);
    // 0x4638f0: 0x460a0840  add.s       $f1, $f1, $f10
    ctx->pc = 0x4638f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x4638f4: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x4638f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x4638f8: 0x460b1080  add.s       $f2, $f2, $f11
    ctx->pc = 0x4638f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[11]);
    // 0x4638fc: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x4638fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x463900: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x463900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x463904: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x463904u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x463908: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x463908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x46390c: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x46390cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x463910: 0xc482001c  lwc1        $f2, 0x1C($a0)
    ctx->pc = 0x463910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x463914: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x463914u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x463918: 0xc4830020  lwc1        $f3, 0x20($a0)
    ctx->pc = 0x463918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x46391c: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x46391cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x463920: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x463920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x463924: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x463924u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x463928: 0xe482001c  swc1        $f2, 0x1C($a0)
    ctx->pc = 0x463928u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x46392c: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x46392cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x463930: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x463930u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x463934: 0xe4830020  swc1        $f3, 0x20($a0)
    ctx->pc = 0x463934u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x463938: 0x3e00008  jr          $ra
    ctx->pc = 0x463938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463938u;
        // 0x46393c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x463938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x463940u;
}
