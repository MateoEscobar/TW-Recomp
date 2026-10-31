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

// Function: sub_0047C358
// Address: 0x47c358 - 0x47c860
void sub_0047C358_0x47c358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047C358_0x47c358");
#endif

    ctx->pc = 0x47c358u;

    // 0x47c358: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x47c358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x47c35c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x47c35cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c360: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x47c360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x47c364: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x47c364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x47c368: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x47c368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x47c36c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x47c36cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x47c370: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x47c370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x47c374: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x47c374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x47c378: 0x68a80017  ldl         $t0, 0x17($a1)
    ctx->pc = 0x47c378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x47c37c: 0x6ca80010  ldr         $t0, 0x10($a1)
    ctx->pc = 0x47c37cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x47c380: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x47c380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x47c384: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x47c384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x47c388: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x47c388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x47c38c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x47c38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x47c390: 0x68a70027  ldl         $a3, 0x27($a1)
    ctx->pc = 0x47c390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x47c394: 0x6ca70020  ldr         $a3, 0x20($a1)
    ctx->pc = 0x47c394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x47c398: 0x8ca80028  lw          $t0, 0x28($a1)
    ctx->pc = 0x47c398u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x47c39c: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x47c39cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x47c3a0: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x47c3a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x47c3a4: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x47c3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    // 0x47c3a8: 0x68a40037  ldl         $a0, 0x37($a1)
    ctx->pc = 0x47c3a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x47c3ac: 0x6ca40030  ldr         $a0, 0x30($a1)
    ctx->pc = 0x47c3acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x47c3b0: 0x8ca70038  lw          $a3, 0x38($a1)
    ctx->pc = 0x47c3b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x47c3b4: 0xb3a40037  sdl         $a0, 0x37($sp)
    ctx->pc = 0x47c3b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x47c3b8: 0xb7a40030  sdr         $a0, 0x30($sp)
    ctx->pc = 0x47c3b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x47c3bc: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x47c3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
    // 0x47c3c0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x47c3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c3c4: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x47c3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c3c8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x47c3c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x47c3cc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x47c3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c3d0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x47c3d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x47c3d4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x47c3d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x47c3d8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x47c3d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x47c3dc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x47c3dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x47c3e0: 0x46010044  c1          0x10044
    ctx->pc = 0x47c3e0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x47c3e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47c3e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47c3e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x47c3e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x47c3ec: 0x0  nop
    ctx->pc = 0x47c3ecu;
    // NOP
    // 0x47c3f0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x47C3F0u;
    {
        const bool branch_taken_0x47c3f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x47c3f0) {
            ctx->pc = 0x47C3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47C3F0u;
            // 0x47c3f4: 0xe7a10040  swc1        $f1, 0x40($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x47C408u;
            goto label_47c408;
        }
    }
    ctx->pc = 0x47C3F8u;
    // 0x47c3f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x47c3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x47c3fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x47c3fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47c400: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x47c400u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x47c404: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x47c404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_47c408:
    // 0x47c408: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x47c408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c40c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x47c40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c410: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x47c410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c414: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x47c414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47c418: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x47c418u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47c41c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x47c41cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x47c420: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x47c420u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x47c424: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x47c424u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x47c428: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x47c428u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x47c42c: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x47c42cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x47c430: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x47c430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c434: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x47c434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c438: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x47c438u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x47c43c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x47c43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c440: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x47c440u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x47c444: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x47c444u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x47c448: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x47c448u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x47c44c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x47c44cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x47c450: 0x46010044  c1          0x10044
    ctx->pc = 0x47c450u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x47c454: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47c454u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47c458: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x47c458u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x47c45c: 0x0  nop
    ctx->pc = 0x47c45cu;
    // NOP
    // 0x47c460: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x47C460u;
    {
        const bool branch_taken_0x47c460 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x47c460) {
            ctx->pc = 0x47C464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47C460u;
            // 0x47c464: 0xe7a10044  swc1        $f1, 0x44($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x47C478u;
            goto label_47c478;
        }
    }
    ctx->pc = 0x47C468u;
    // 0x47c468: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x47c468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x47c46c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x47c46cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47c470: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x47c470u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x47c474: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x47c474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_47c478:
    // 0x47c478: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x47c478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c47c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x47c47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c480: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x47c480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c484: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x47c484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47c488: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x47c488u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47c48c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x47c48cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x47c490: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x47c490u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x47c494: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x47c494u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x47c498: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x47c498u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x47c49c: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x47c49cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x47c4a0: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x47c4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c4a4: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x47c4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c4a8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x47c4a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x47c4ac: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x47c4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c4b0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x47c4b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x47c4b4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x47c4b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x47c4b8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x47c4b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x47c4bc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x47c4bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x47c4c0: 0x46010044  c1          0x10044
    ctx->pc = 0x47c4c0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x47c4c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47c4c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47c4c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x47c4c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x47c4cc: 0x0  nop
    ctx->pc = 0x47c4ccu;
    // NOP
    // 0x47c4d0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x47C4D0u;
    {
        const bool branch_taken_0x47c4d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x47c4d0) {
            ctx->pc = 0x47C4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47C4D0u;
            // 0x47c4d4: 0xe7a10048  swc1        $f1, 0x48($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x47C4E8u;
            goto label_47c4e8;
        }
    }
    ctx->pc = 0x47C4D8u;
    // 0x47c4d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x47c4d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x47c4dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x47c4dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47c4e0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x47c4e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x47c4e4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x47c4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_47c4e8:
    // 0x47c4e8: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x47c4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47c4ec: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x47c4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c4f0: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x47c4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c4f4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x47c4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c4f8: 0x46030102  mul.s       $f4, $f0, $f3
    ctx->pc = 0x47c4f8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x47c4fc: 0x46031142  mul.s       $f5, $f2, $f3
    ctx->pc = 0x47c4fcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x47c500: 0x46030982  mul.s       $f6, $f1, $f3
    ctx->pc = 0x47c500u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x47c504: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x47c504u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x47c508: 0xe7a50024  swc1        $f5, 0x24($sp)
    ctx->pc = 0x47c508u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x47c50c: 0xe7a60028  swc1        $f6, 0x28($sp)
    ctx->pc = 0x47c50cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x47c510: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x47c510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c514: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x47c514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x47c518: 0x46005034  c.lt.s      $f10, $f0
    ctx->pc = 0x47c518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x47c51c: 0x0  nop
    ctx->pc = 0x47c51cu;
    // NOP
    // 0x47c520: 0x45000047  bc1f        . + 4 + (0x47 << 2)
    ctx->pc = 0x47C520u;
    {
        const bool branch_taken_0x47c520 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x47C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47C520u;
        // 0x47c524: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x47c520) {
            ctx->pc = 0x47C640u;
            goto label_47c640;
        }
    }
    ctx->pc = 0x47C528u;
    // 0x47c528: 0x46005034  c.lt.s      $f10, $f0
    ctx->pc = 0x47c528u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x47c52c: 0x0  nop
    ctx->pc = 0x47c52cu;
    // NOP
    // 0x47c530: 0x45000040  bc1f        . + 4 + (0x40 << 2)
    ctx->pc = 0x47C530u;
    {
        const bool branch_taken_0x47c530 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x47C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47C530u;
        // 0x47c534: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47c530) {
            ctx->pc = 0x47C634u;
            goto label_47c634;
        }
    }
    ctx->pc = 0x47C538u;
    // 0x47c538: 0x46035034  c.lt.s      $f10, $f3
    ctx->pc = 0x47c538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x47c53c: 0x0  nop
    ctx->pc = 0x47c53cu;
    // NOP
    // 0x47c540: 0x45000038  bc1f        . + 4 + (0x38 << 2)
    ctx->pc = 0x47C540u;
    {
        const bool branch_taken_0x47c540 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x47C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47C540u;
        // 0x47c544: 0xc7ab0010  lwc1        $f11, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x47c540) {
            ctx->pc = 0x47C624u;
            goto label_47c624;
        }
    }
    ctx->pc = 0x47C548u;
    // 0x47c548: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x47c548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x47c54c: 0x46045802  mul.s       $f0, $f11, $f4
    ctx->pc = 0x47c54cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
    // 0x47c550: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x47c550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x47c554: 0x46056842  mul.s       $f1, $f13, $f5
    ctx->pc = 0x47c554u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[5]);
    // 0x47c558: 0x46066082  mul.s       $f2, $f12, $f6
    ctx->pc = 0x47c558u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
    // 0x47c55c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x47c55cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x47c560: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x47c560u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x47c564: 0x460001c6  mov.s       $f7, $f0
    ctx->pc = 0x47c564u;
    ctx->f[7] = FPU_MOV_S(ctx->f[0]);
    // 0x47c568: 0x46075036  c.le.s      $f10, $f7
    ctx->pc = 0x47c568u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x47c56c: 0x0  nop
    ctx->pc = 0x47c56cu;
    // NOP
    // 0x47c570: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x47C570u;
    {
        const bool branch_taken_0x47c570 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x47C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47C570u;
        // 0x47c574: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x47c570) {
            ctx->pc = 0x47C580u;
            goto label_47c580;
        }
    }
    ctx->pc = 0x47C578u;
    // 0x47c578: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x47c578u;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
    // 0x47c57c: 0x0  nop
    ctx->pc = 0x47c57cu;
    // NOP
label_47c580:
    // 0x47c580: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x47c580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47c584: 0xc7a90004  lwc1        $f9, 0x4($sp)
    ctx->pc = 0x47c584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x47c588: 0x46032002  mul.s       $f0, $f4, $f3
    ctx->pc = 0x47c588u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x47c58c: 0xc7a80008  lwc1        $f8, 0x8($sp)
    ctx->pc = 0x47c58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x47c590: 0x46092882  mul.s       $f2, $f5, $f9
    ctx->pc = 0x47c590u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x47c594: 0xe7a70050  swc1        $f7, 0x50($sp)
    ctx->pc = 0x47c594u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x47c598: 0x46083042  mul.s       $f1, $f6, $f8
    ctx->pc = 0x47c598u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x47c59c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x47c59cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x47c5a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x47c5a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x47c5a4: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x47c5a4u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x47c5a8: 0x46045036  c.le.s      $f10, $f4
    ctx->pc = 0x47c5a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x47c5ac: 0x0  nop
    ctx->pc = 0x47c5acu;
    // NOP
    // 0x47c5b0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x47C5B0u;
    {
        const bool branch_taken_0x47c5b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x47C5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47C5B0u;
        // 0x47c5b4: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x47c5b0) {
            ctx->pc = 0x47C5BCu;
            goto label_47c5bc;
        }
    }
    ctx->pc = 0x47C5B8u;
    // 0x47c5b8: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x47c5b8u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
label_47c5bc:
    // 0x47c5bc: 0x460b1802  mul.s       $f0, $f3, $f11
    ctx->pc = 0x47c5bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[11]);
    // 0x47c5c0: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x47c5c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x47c5c4: 0x460d4842  mul.s       $f1, $f9, $f13
    ctx->pc = 0x47c5c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[13]);
    // 0x47c5c8: 0x460c4082  mul.s       $f2, $f8, $f12
    ctx->pc = 0x47c5c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
    // 0x47c5cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x47c5ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x47c5d0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x47c5d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x47c5d4: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x47c5d4u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x47c5d8: 0x46035036  c.le.s      $f10, $f3
    ctx->pc = 0x47c5d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x47c5dc: 0x0  nop
    ctx->pc = 0x47c5dcu;
    // NOP
    // 0x47c5e0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x47C5E0u;
    {
        const bool branch_taken_0x47c5e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x47C5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47C5E0u;
        // 0x47c5e4: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x47c5e0) {
            ctx->pc = 0x47C5ECu;
            goto label_47c5ec;
        }
    }
    ctx->pc = 0x47C5E8u;
    // 0x47c5e8: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x47c5e8u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_47c5ec:
    // 0x47c5ec: 0x46043834  c.lt.s      $f7, $f4
    ctx->pc = 0x47c5ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x47c5f0: 0x0  nop
    ctx->pc = 0x47c5f0u;
    // NOP
    // 0x47c5f4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x47C5F4u;
    {
        const bool branch_taken_0x47c5f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x47C5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47C5F4u;
        // 0x47c5f8: 0xe7a30058  swc1        $f3, 0x58($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x47c5f4) {
            ctx->pc = 0x47C614u;
            goto label_47c614;
        }
    }
    ctx->pc = 0x47C5FCu;
    // 0x47c5fc: 0x46033834  c.lt.s      $f7, $f3
    ctx->pc = 0x47c5fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x47c600: 0x0  nop
    ctx->pc = 0x47c600u;
    // NOP
    // 0x47c604: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x47C604u;
    {
        const bool branch_taken_0x47c604 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x47C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47C604u;
        // 0x47c608: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47c604) {
            ctx->pc = 0x47C644u;
            goto label_47c644;
        }
    }
    ctx->pc = 0x47C60Cu;
    // 0x47c60c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x47C60Cu;
    {
        const bool branch_taken_0x47c60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47C610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47C60Cu;
        // 0x47c610: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47c60c) {
            ctx->pc = 0x47C628u;
            goto label_47c628;
        }
    }
    ctx->pc = 0x47C614u;
label_47c614:
    // 0x47c614: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x47c614u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x47c618: 0x0  nop
    ctx->pc = 0x47c618u;
    // NOP
    // 0x47c61c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x47C61Cu;
    {
        const bool branch_taken_0x47c61c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x47C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47C61Cu;
        // 0x47c620: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47c61c) {
            ctx->pc = 0x47C634u;
            goto label_47c634;
        }
    }
    ctx->pc = 0x47C624u;
label_47c624:
    // 0x47c624: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x47c624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_47c628:
    // 0x47c628: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x47c628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x47c62c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x47C62Cu;
    {
        const bool branch_taken_0x47c62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47C62Cu;
        // 0x47c630: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47c62c) {
            ctx->pc = 0x47C64Cu;
            goto label_47c64c;
        }
    }
    ctx->pc = 0x47C634u;
label_47c634:
    // 0x47c634: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x47c634u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c638: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x47C638u;
    {
        const bool branch_taken_0x47c638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47C63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47C638u;
        // 0x47c63c: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47c638) {
            ctx->pc = 0x47C64Cu;
            goto label_47c64c;
        }
    }
    ctx->pc = 0x47C640u;
label_47c640:
    // 0x47c640: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x47c640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_47c644:
    // 0x47c644: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x47c644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x47c648: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x47c648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_47c64c:
    // 0x47c64c: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x47c64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c650: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x47c650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c654: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x47c654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47c658: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x47c658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c65c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x47c65cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x47c660: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x47c660u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x47c664: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x47c664u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x47c668: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x47c668u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x47c66c: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x47c66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x47c670: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x47c670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c674: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x47c674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c678: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x47c678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c67c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x47c67cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x47c680: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x47c680u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x47c684: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x47c684u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x47c688: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x47c688u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x47c68c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x47c68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c690: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x47c690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x47c694: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x47c694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c698: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x47c698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x47c69c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x47c69cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x47c6a0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x47c6a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x47c6a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x47c6a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x47c6a8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x47c6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x47c6ac: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x47c6acu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x47c6b0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x47c6b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x47c6b4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x47c6b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x47c6b8: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x47c6b8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x47c6bc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x47c6bcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x47c6c0: 0x46030044  c1          0x30044
    ctx->pc = 0x47c6c0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x47c6c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47c6c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47c6c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x47c6c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x47c6cc: 0x0  nop
    ctx->pc = 0x47c6ccu;
    // NOP
    // 0x47c6d0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x47C6D0u;
    {
        const bool branch_taken_0x47c6d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x47C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47C6D0u;
        // 0x47c6d4: 0x46000906  mov.s       $f4, $f1 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47c6d0) {
            ctx->pc = 0x47C6F0u;
            goto label_47c6f0;
        }
    }
    ctx->pc = 0x47C6D8u;
    // 0x47c6d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x47c6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x47c6dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x47c6dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47c6e0: 0x46010103  div.s       $f4, $f0, $f1
    ctx->pc = 0x47c6e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x47c6e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x47C6E4u;
    {
        const bool branch_taken_0x47c6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47C6E4u;
        // 0x47c6e8: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x47c6e4) {
            ctx->pc = 0x47C6F8u;
            goto label_47c6f8;
        }
    }
    ctx->pc = 0x47C6ECu;
    // 0x47c6ec: 0x0  nop
    ctx->pc = 0x47c6ecu;
    // NOP
label_47c6f0:
    // 0x47c6f0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x47c6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c6f4: 0x0  nop
    ctx->pc = 0x47c6f4u;
    // NOP
label_47c6f8:
    // 0x47c6f8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x47c6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c6fc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x47c6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c700: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x47c700u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x47c704: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x47c704u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x47c708: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x47c708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x47c70c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x47c70cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x47c710: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x47c710u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x47c714: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x47c714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x47c718: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x47c718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c71c: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x47c71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47c720: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x47c720u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x47c724: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x47c724u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x47c728: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x47c728u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x47c72c: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x47c72cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x47c730: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x47c730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x47c734: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x47c734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47c738: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x47c738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c73c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x47c73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c740: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x47c740u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x47c744: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x47c744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x47c748: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x47c748u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x47c74c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x47c74cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x47c750: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x47c750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47c754: 0xc4850000  lwc1        $f5, 0x0($a0)
    ctx->pc = 0x47c754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x47c758: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x47c758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c75c: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x47c75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x47c760: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x47c760u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x47c764: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x47c764u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x47c768: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x47c768u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x47c76c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x47c76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x47c770: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x47c770u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x47c774: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x47c774u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x47c778: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x47c778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x47c77c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x47c77cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x47c780: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x47c780u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x47c784: 0x46020044  c1          0x20044
    ctx->pc = 0x47c784u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x47c788: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47c788u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47c78c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x47c78cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x47c790: 0x0  nop
    ctx->pc = 0x47c790u;
    // NOP
    // 0x47c794: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x47C794u;
    {
        const bool branch_taken_0x47c794 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x47C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47C794u;
        // 0x47c798: 0x46000906  mov.s       $f4, $f1 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47c794) {
            ctx->pc = 0x47C7B0u;
            goto label_47c7b0;
        }
    }
    ctx->pc = 0x47C79Cu;
    // 0x47c79c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x47c79cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x47c7a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x47c7a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47c7a4: 0x46010103  div.s       $f4, $f0, $f1
    ctx->pc = 0x47c7a4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x47c7a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x47C7A8u;
    {
        const bool branch_taken_0x47c7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47C7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47C7A8u;
        // 0x47c7ac: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x47c7a8) {
            ctx->pc = 0x47C7B8u;
            goto label_47c7b8;
        }
    }
    ctx->pc = 0x47C7B0u;
label_47c7b0:
    // 0x47c7b0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x47c7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c7b4: 0x0  nop
    ctx->pc = 0x47c7b4u;
    // NOP
label_47c7b8:
    // 0x47c7b8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x47c7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c7bc: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x47c7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47c7c0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x47c7c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x47c7c4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x47c7c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x47c7c8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x47c7c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x47c7cc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x47c7ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x47c7d0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x47c7d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x47c7d4: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x47c7d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x47c7d8: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x47c7d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x47c7dc: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x47c7dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x47c7e0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x47c7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x47c7e4: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x47c7e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x47c7e8: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x47c7e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x47c7ec: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x47c7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x47c7f0: 0x6ba80017  ldl         $t0, 0x17($sp)
    ctx->pc = 0x47c7f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x47c7f4: 0x6fa80010  ldr         $t0, 0x10($sp)
    ctx->pc = 0x47c7f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x47c7f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x47c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x47c7fc: 0xb0c80017  sdl         $t0, 0x17($a2)
    ctx->pc = 0x47c7fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x47c800: 0xb4c80010  sdr         $t0, 0x10($a2)
    ctx->pc = 0x47c800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x47c804: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x47c804u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
    // 0x47c808: 0x3c04fffd  lui         $a0, 0xFFFD
    ctx->pc = 0x47c808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65533 << 16));
    // 0x47c80c: 0x6ba70027  ldl         $a3, 0x27($sp)
    ctx->pc = 0x47c80cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x47c810: 0x6fa70020  ldr         $a3, 0x20($sp)
    ctx->pc = 0x47c810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x47c814: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x47c814u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x47c818: 0xb0c70027  sdl         $a3, 0x27($a2)
    ctx->pc = 0x47c818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x47c81c: 0xb4c70020  sdr         $a3, 0x20($a2)
    ctx->pc = 0x47c81cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x47c820: 0xacc80028  sw          $t0, 0x28($a2)
    ctx->pc = 0x47c820u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 8));
    // 0x47c824: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x47c824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x47c828: 0x6ba50037  ldl         $a1, 0x37($sp)
    ctx->pc = 0x47c828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x47c82c: 0x6fa50030  ldr         $a1, 0x30($sp)
    ctx->pc = 0x47c82cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x47c830: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x47c830u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x47c834: 0xb0c50037  sdl         $a1, 0x37($a2)
    ctx->pc = 0x47c834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x47c838: 0xb4c50030  sdr         $a1, 0x30($a2)
    ctx->pc = 0x47c838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x47c83c: 0xacc70038  sw          $a3, 0x38($a2)
    ctx->pc = 0x47c83cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 7));
    // 0x47c840: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x47c840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c844: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x47c844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x47c848: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x47c848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x47c84c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x47c84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x47c850: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x47c850u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x47c854: 0x3e00008  jr          $ra
    ctx->pc = 0x47C854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47C858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47C854u;
        // 0x47c858: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47C854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47C85Cu;
    // 0x47c85c: 0x0  nop
    ctx->pc = 0x47c85cu;
    // NOP
    ctx->pc = 0x47c860u;
}
