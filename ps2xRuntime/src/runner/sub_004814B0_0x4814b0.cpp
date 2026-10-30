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

// Function: sub_004814B0
// Address: 0x4814b0 - 0x481d78
void sub_004814B0_0x4814b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004814B0_0x4814b0");
#endif

    switch (ctx->pc) {
        case 0x481690u: goto label_481690;
        default: break;
    }

    ctx->pc = 0x4814b0u;

    // 0x4814b0: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x4814b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4814b4: 0x24860124  addiu       $a2, $a0, 0x124
    ctx->pc = 0x4814b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
    // 0x4814b8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4814b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4814bc: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4814bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4814c0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4814c0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x4814c4: 0x24850094  addiu       $a1, $a0, 0x94
    ctx->pc = 0x4814c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 148));
    // 0x4814c8: 0x24430050  addiu       $v1, $v0, 0x50
    ctx->pc = 0x4814c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x4814cc: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x4814ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4814d0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4814d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4814d4: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x4814d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x4814d8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x4814d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4814dc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x4814dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x4814e0: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x4814e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x4814e4: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x4814e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4814e8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x4814e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x4814ec: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x4814ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x4814f0: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x4814f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4814f4: 0xc484007c  lwc1        $f4, 0x7C($a0)
    ctx->pc = 0x4814f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4814f8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x4814f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x4814fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4814fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x481500: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x481500u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x481504: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x481504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481508: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x481508u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x48150c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x48150cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x481510: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x481510u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x481514: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x481514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481518: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x481518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x48151c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x48151cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x481520: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x481520u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x481524: 0xc4490050  lwc1        $f9, 0x50($v0)
    ctx->pc = 0x481524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x481528: 0xc4800068  lwc1        $f0, 0x68($a0)
    ctx->pc = 0x481528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48152c: 0x46004a42  mul.s       $f9, $f9, $f0
    ctx->pc = 0x48152cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x481530: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x481530u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x481534: 0xc4680004  lwc1        $f8, 0x4($v1)
    ctx->pc = 0x481534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x481538: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x481538u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x48153c: 0xe7a80024  swc1        $f8, 0x24($sp)
    ctx->pc = 0x48153cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x481540: 0xc4670008  lwc1        $f7, 0x8($v1)
    ctx->pc = 0x481540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x481544: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x481544u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x481548: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x481548u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x48154c: 0xc4630020  lwc1        $f3, 0x20($v1)
    ctx->pc = 0x48154cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x481550: 0x460918c0  add.s       $f3, $f3, $f9
    ctx->pc = 0x481550u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
    // 0x481554: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x481554u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x481558: 0xc4620024  lwc1        $f2, 0x24($v1)
    ctx->pc = 0x481558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x48155c: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x48155cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x481560: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x481560u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x481564: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x481564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x481568: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x481568u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x48156c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x48156cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x481570: 0xc4660010  lwc1        $f6, 0x10($v1)
    ctx->pc = 0x481570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x481574: 0xc480006c  lwc1        $f0, 0x6C($a0)
    ctx->pc = 0x481574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481578: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x481578u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x48157c: 0xe7a60030  swc1        $f6, 0x30($sp)
    ctx->pc = 0x48157cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x481580: 0xc4640014  lwc1        $f4, 0x14($v1)
    ctx->pc = 0x481580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x481584: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x481584u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x481588: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x481588u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x48158c: 0xc4650018  lwc1        $f5, 0x18($v1)
    ctx->pc = 0x48158cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x481590: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x481590u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x481594: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x481594u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x481598: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x481598u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x48159c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x48159cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4815a0: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x4815a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x4815a4: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x4815a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4815a8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x4815a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4815ac: 0x46094a40  add.s       $f9, $f9, $f9
    ctx->pc = 0x4815acu;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[9]);
    // 0x4815b0: 0x46084200  add.s       $f8, $f8, $f8
    ctx->pc = 0x4815b0u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
    // 0x4815b4: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x4815b4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x4815b8: 0x460739c0  add.s       $f7, $f7, $f7
    ctx->pc = 0x4815b8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x4815bc: 0xe7a80024  swc1        $f8, 0x24($sp)
    ctx->pc = 0x4815bcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x4815c0: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x4815c0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x4815c4: 0x46063180  add.s       $f6, $f6, $f6
    ctx->pc = 0x4815c4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
    // 0x4815c8: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x4815c8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x4815cc: 0xe7a60030  swc1        $f6, 0x30($sp)
    ctx->pc = 0x4815ccu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x4815d0: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x4815d0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
    // 0x4815d4: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x4815d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x4815d8: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x4815d8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x4815dc: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x4815dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4815e0: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x4815e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4815e4: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x4815e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4815e8: 0xb082012b  sdl         $v0, 0x12B($a0)
    ctx->pc = 0x4815e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 299); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4815ec: 0xb4820124  sdr         $v0, 0x124($a0)
    ctx->pc = 0x4815ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4815f0: 0xac87012c  sw          $a3, 0x12C($a0)
    ctx->pc = 0x4815f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 300), GPR_U32(ctx, 7));
    // 0x4815f4: 0x460918c1  sub.s       $f3, $f3, $f9
    ctx->pc = 0x4815f4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[9]);
    // 0x4815f8: 0x46081081  sub.s       $f2, $f2, $f8
    ctx->pc = 0x4815f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x4815fc: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x4815fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x481600: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x481600u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x481604: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x481604u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x481608: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x481608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x48160c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x48160cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x481610: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x481610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x481614: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x481614u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x481618: 0xb0c20013  sdl         $v0, 0x13($a2)
    ctx->pc = 0x481618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48161c: 0xb4c2000c  sdr         $v0, 0xC($a2)
    ctx->pc = 0x48161cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x481620: 0xacc70014  sw          $a3, 0x14($a2)
    ctx->pc = 0x481620u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 7));
    // 0x481624: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x481624u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x481628: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x481628u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x48162c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x48162cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x481630: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x481630u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x481634: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x481634u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x481638: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x481638u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x48163c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x48163cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x481640: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x481640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x481644: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x481644u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x481648: 0xb0c2001f  sdl         $v0, 0x1F($a2)
    ctx->pc = 0x481648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48164c: 0xb4c20018  sdr         $v0, 0x18($a2)
    ctx->pc = 0x48164cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x481650: 0xacc70020  sw          $a3, 0x20($a2)
    ctx->pc = 0x481650u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 7));
    // 0x481654: 0x460918c0  add.s       $f3, $f3, $f9
    ctx->pc = 0x481654u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
    // 0x481658: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x481658u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x48165c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x48165cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x481660: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x481660u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x481664: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x481664u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x481668: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x481668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x48166c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x48166cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x481670: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x481670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x481674: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x481674u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x481678: 0xb0c2002b  sdl         $v0, 0x2B($a2)
    ctx->pc = 0x481678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x48167c: 0xb4c20024  sdr         $v0, 0x24($a2)
    ctx->pc = 0x48167cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x481680: 0xacc7002c  sw          $a3, 0x2C($a2)
    ctx->pc = 0x481680u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 7));
    // 0x481684: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x481684u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x481688: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x481688u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48168c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x48168cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_481690:
    // 0x481690: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x481690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x481694: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x481694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x481698: 0xc7a40040  lwc1        $f4, 0x40($sp)
    ctx->pc = 0x481698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x48169c: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x48169cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4816a0: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x4816a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x4816a4: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x4816a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4816a8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x4816a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4816ac: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x4816acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4816b0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x4816b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x4816b4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x4816b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4816b8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x4816b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4816bc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x4816bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x4816c0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x4816c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4816c4: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x4816c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4816c8: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x4816c8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x4816cc: 0xe4440000  swc1        $f4, 0x0($v0)
    ctx->pc = 0x4816ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x4816d0: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x4816d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4816d4: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x4816d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4816d8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x4816d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x4816dc: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x4816dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x4816e0: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x4816e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4816e4: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x4816e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4816e8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x4816e8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x4816ec: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x4816ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x4816f0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x4816f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4816f4: 0xc4810080  lwc1        $f1, 0x80($a0)
    ctx->pc = 0x4816f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4816f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4816f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4816fc: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x4816fcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x481700: 0xe4440000  swc1        $f4, 0x0($v0)
    ctx->pc = 0x481700u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x481704: 0xc4810080  lwc1        $f1, 0x80($a0)
    ctx->pc = 0x481704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x481708: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x481708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48170c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x48170cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x481710: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x481710u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x481714: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x481714u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x481718: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x481718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48171c: 0xc4810080  lwc1        $f1, 0x80($a0)
    ctx->pc = 0x48171cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x481720: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x481720u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x481724: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x481724u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x481728: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x481728u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x48172c: 0xc91021  addu        $v0, $a2, $t1
    ctx->pc = 0x48172cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x481730: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x481730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x481734: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x481734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481738: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x481738u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x48173c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x48173cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x481740: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x481740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481744: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x481744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x481748: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x481748u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x48174c: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x48174cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x481750: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x481750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x481754: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x481754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481758: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x481758u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x48175c: 0xe4440008  swc1        $f4, 0x8($v0)
    ctx->pc = 0x48175cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x481760: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x481760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481764: 0xc4810084  lwc1        $f1, 0x84($a0)
    ctx->pc = 0x481764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x481768: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x481768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x48176c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x48176cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x481770: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x481770u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x481774: 0xc4810084  lwc1        $f1, 0x84($a0)
    ctx->pc = 0x481774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x481778: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x481778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48177c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x48177cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x481780: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x481780u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x481784: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x481784u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x481788: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x481788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48178c: 0xc4810084  lwc1        $f1, 0x84($a0)
    ctx->pc = 0x48178cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x481790: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x481790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x481794: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x481794u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x481798: 0xe4440008  swc1        $f4, 0x8($v0)
    ctx->pc = 0x481798u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x48179c: 0x2529000c  addiu       $t1, $t1, 0xC
    ctx->pc = 0x48179cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
    // 0x4817a0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4817a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4817a4: 0x4e1ffba  bgez        $a3, . + 4 + (-0x46 << 2)
    ctx->pc = 0x4817A4u;
    {
        const bool branch_taken_0x4817a4 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x4817A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4817A4u;
        // 0x4817a8: 0x2508000c  addiu       $t0, $t0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4817a4) {
            ctx->pc = 0x481690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_481690;
        }
    }
    ctx->pc = 0x4817ACu;
    // 0x4817ac: 0x68620027  ldl         $v0, 0x27($v1)
    ctx->pc = 0x4817acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4817b0: 0x6c620020  ldr         $v0, 0x20($v1)
    ctx->pc = 0x4817b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4817b4: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x4817b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x4817b8: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x4817b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4817bc: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x4817bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4817c0: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x4817c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x4817c4: 0xc4620020  lwc1        $f2, 0x20($v1)
    ctx->pc = 0x4817c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4817c8: 0xc4630024  lwc1        $f3, 0x24($v1)
    ctx->pc = 0x4817c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4817cc: 0xc4c00030  lwc1        $f0, 0x30($a2)
    ctx->pc = 0x4817ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4817d0: 0xc4c10034  lwc1        $f1, 0x34($a2)
    ctx->pc = 0x4817d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4817d4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x4817d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x4817d8: 0xc4640028  lwc1        $f4, 0x28($v1)
    ctx->pc = 0x4817d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4817dc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x4817dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x4817e0: 0xc4c20038  lwc1        $f2, 0x38($a2)
    ctx->pc = 0x4817e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4817e4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4817e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4817e8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x4817e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x4817ec: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4817ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4817f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4817f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4817f4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4817f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4817f8: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x4817f8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x4817fc: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x4817fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x481800: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x481800u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x481804: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x481804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x481808: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x481808u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x48180c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x48180cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x481810: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x481810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x481814: 0xa0a40010  sb          $a0, 0x10($a1)
    ctx->pc = 0x481814u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x481818: 0xa0a20011  sb          $v0, 0x11($a1)
    ctx->pc = 0x481818u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x48181c: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x48181cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x481820: 0xa0a30012  sb          $v1, 0x12($a1)
    ctx->pc = 0x481820u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x481824: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x481824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481828: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x481828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48182c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x48182cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x481830: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x481830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x481834: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x481834u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x481838: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x481838u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x48183c: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x48183cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x481840: 0xe4a10018  swc1        $f1, 0x18($a1)
    ctx->pc = 0x481840u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x481844: 0xe4a2001c  swc1        $f2, 0x1C($a1)
    ctx->pc = 0x481844u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x481848: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x481848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x48184c: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x48184cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x481850: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x481850u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x481854: 0xc4c50008  lwc1        $f5, 0x8($a2)
    ctx->pc = 0x481854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x481858: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x481858u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x48185c: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x48185cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x481860: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x481860u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x481864: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x481864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x481868: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x481868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x48186c: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x48186cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x481870: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x481870u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x481874: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x481874u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x481878: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x481878u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x48187c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x48187cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x481880: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x481880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x481884: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x481884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x481888: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x481888u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x48188c: 0xa0a40024  sb          $a0, 0x24($a1)
    ctx->pc = 0x48188cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 36), (uint8_t)GPR_U32(ctx, 4));
    // 0x481890: 0xa0a20025  sb          $v0, 0x25($a1)
    ctx->pc = 0x481890u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 37), (uint8_t)GPR_U32(ctx, 2));
    // 0x481894: 0xa0a30026  sb          $v1, 0x26($a1)
    ctx->pc = 0x481894u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 38), (uint8_t)GPR_U32(ctx, 3));
    // 0x481898: 0xe4a30020  swc1        $f3, 0x20($a1)
    ctx->pc = 0x481898u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x48189c: 0xc4c7000c  lwc1        $f7, 0xC($a2)
    ctx->pc = 0x48189cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4818a0: 0xc4c2003c  lwc1        $f2, 0x3C($a2)
    ctx->pc = 0x4818a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4818a4: 0xc4c60010  lwc1        $f6, 0x10($a2)
    ctx->pc = 0x4818a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4818a8: 0xc4c80040  lwc1        $f8, 0x40($a2)
    ctx->pc = 0x4818a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x4818ac: 0x460239c1  sub.s       $f7, $f7, $f2
    ctx->pc = 0x4818acu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x4818b0: 0xc4c50014  lwc1        $f5, 0x14($a2)
    ctx->pc = 0x4818b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4818b4: 0xc4c10044  lwc1        $f1, 0x44($a2)
    ctx->pc = 0x4818b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4818b8: 0x46083181  sub.s       $f6, $f6, $f8
    ctx->pc = 0x4818b8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[8]);
    // 0x4818bc: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x4818bcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4818c0: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x4818c0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x4818c4: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x4818c4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4818c8: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x4818c8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4818cc: 0xc4c00048  lwc1        $f0, 0x48($a2)
    ctx->pc = 0x4818ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4818d0: 0xc4c4004c  lwc1        $f4, 0x4C($a2)
    ctx->pc = 0x4818d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4818d4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x4818d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x4818d8: 0xc4c30050  lwc1        $f3, 0x50($a2)
    ctx->pc = 0x4818d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4818dc: 0x46082101  sub.s       $f4, $f4, $f8
    ctx->pc = 0x4818dcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[8]);
    // 0x4818e0: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x4818e0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x4818e4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x4818e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x4818e8: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x4818e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x4818ec: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x4818ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x4818f0: 0x46033042  mul.s       $f1, $f6, $f3
    ctx->pc = 0x4818f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x4818f4: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x4818f4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x4818f8: 0x46043882  mul.s       $f2, $f7, $f4
    ctx->pc = 0x4818f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x4818fc: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x4818fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x481900: 0x460339c2  mul.s       $f7, $f7, $f3
    ctx->pc = 0x481900u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x481904: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x481904u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x481908: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x481908u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x48190c: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x48190cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x481910: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x481910u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x481914: 0xe4a20030  swc1        $f2, 0x30($a1)
    ctx->pc = 0x481914u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x481918: 0xe4a0002c  swc1        $f0, 0x2C($a1)
    ctx->pc = 0x481918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
    // 0x48191c: 0xe4a10028  swc1        $f1, 0x28($a1)
    ctx->pc = 0x48191cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x481920: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x481920u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x481924: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x481924u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x481928: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x481928u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x48192c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x48192cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x481930: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x481930u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x481934: 0x46010044  c1          0x10044
    ctx->pc = 0x481934u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x481938: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x481938u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x48193c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x48193cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x481940: 0x0  nop
    ctx->pc = 0x481940u;
    // NOP
    // 0x481944: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x481944u;
    {
        const bool branch_taken_0x481944 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x481948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481944u;
        // 0x481948: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x481944) {
            ctx->pc = 0x481960u;
            goto label_481960;
        }
    }
    ctx->pc = 0x48194Cu;
    // 0x48194c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x48194cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x481950: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x481950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x481954: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x481954u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x481958: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x481958u;
    {
        const bool branch_taken_0x481958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481958u;
        // 0x48195c: 0xc4a00028  lwc1        $f0, 0x28($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x481958) {
            ctx->pc = 0x481968u;
            goto label_481968;
        }
    }
    ctx->pc = 0x481960u;
label_481960:
    // 0x481960: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x481960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481964: 0x0  nop
    ctx->pc = 0x481964u;
    // NOP
label_481968:
    // 0x481968: 0xc4a1002c  lwc1        $f1, 0x2C($a1)
    ctx->pc = 0x481968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48196c: 0xc4a20030  lwc1        $f2, 0x30($a1)
    ctx->pc = 0x48196cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x481970: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x481970u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x481974: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x481974u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x481978: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x481978u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x48197c: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x48197cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x481980: 0xe4a1002c  swc1        $f1, 0x2C($a1)
    ctx->pc = 0x481980u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
    // 0x481984: 0xe4a20030  swc1        $f2, 0x30($a1)
    ctx->pc = 0x481984u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x481988: 0xc4c3000c  lwc1        $f3, 0xC($a2)
    ctx->pc = 0x481988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x48198c: 0xc4c40010  lwc1        $f4, 0x10($a2)
    ctx->pc = 0x48198cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x481990: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x481990u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x481994: 0xc4c50014  lwc1        $f5, 0x14($a2)
    ctx->pc = 0x481994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x481998: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x481998u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x48199c: 0x8ca40028  lw          $a0, 0x28($a1)
    ctx->pc = 0x48199cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x4819a0: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x4819a0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x4819a4: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x4819a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x4819a8: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x4819a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x4819ac: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x4819acu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x4819b0: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x4819b0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x4819b4: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x4819b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x4819b8: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x4819b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x4819bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4819bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4819c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4819c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4819c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4819c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4819c8: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x4819c8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x4819cc: 0xa0a40038  sb          $a0, 0x38($a1)
    ctx->pc = 0x4819ccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 56), (uint8_t)GPR_U32(ctx, 4));
    // 0x4819d0: 0xa0a20039  sb          $v0, 0x39($a1)
    ctx->pc = 0x4819d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 57), (uint8_t)GPR_U32(ctx, 2));
    // 0x4819d4: 0xa0a3003a  sb          $v1, 0x3A($a1)
    ctx->pc = 0x4819d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 58), (uint8_t)GPR_U32(ctx, 3));
    // 0x4819d8: 0xe4a30034  swc1        $f3, 0x34($a1)
    ctx->pc = 0x4819d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x4819dc: 0xc4c20030  lwc1        $f2, 0x30($a2)
    ctx->pc = 0x4819dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4819e0: 0xc4c0003c  lwc1        $f0, 0x3C($a2)
    ctx->pc = 0x4819e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4819e4: 0xc4c40034  lwc1        $f4, 0x34($a2)
    ctx->pc = 0x4819e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4819e8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x4819e8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4819ec: 0xc4c10040  lwc1        $f1, 0x40($a2)
    ctx->pc = 0x4819ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4819f0: 0xc4c30038  lwc1        $f3, 0x38($a2)
    ctx->pc = 0x4819f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4819f4: 0xc4c00044  lwc1        $f0, 0x44($a2)
    ctx->pc = 0x4819f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4819f8: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x4819f8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x4819fc: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x4819fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x481a00: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x481a00u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x481a04: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x481a04u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x481a08: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x481a08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x481a0c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x481a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x481a10: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x481a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481a14: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x481a14u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x481a18: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x481a18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x481a1c: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x481a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x481a20: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x481a20u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x481a24: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x481a24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x481a28: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x481a28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x481a2c: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x481a2cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x481a30: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x481a30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x481a34: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x481a34u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x481a38: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x481a38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x481a3c: 0xe4a00040  swc1        $f0, 0x40($a1)
    ctx->pc = 0x481a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x481a40: 0xe4a20044  swc1        $f2, 0x44($a1)
    ctx->pc = 0x481a40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x481a44: 0xe4a1003c  swc1        $f1, 0x3C($a1)
    ctx->pc = 0x481a44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x481a48: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x481a48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x481a4c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x481a4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x481a50: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x481a50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x481a54: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x481a54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x481a58: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x481a58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x481a5c: 0x46010044  c1          0x10044
    ctx->pc = 0x481a5cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x481a60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x481a60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x481a64: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x481a64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x481a68: 0x0  nop
    ctx->pc = 0x481a68u;
    // NOP
    // 0x481a6c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x481A6Cu;
    {
        const bool branch_taken_0x481a6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x481A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481A6Cu;
        // 0x481a70: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x481a6c) {
            ctx->pc = 0x481A88u;
            goto label_481a88;
        }
    }
    ctx->pc = 0x481A74u;
    // 0x481a74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x481a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x481a78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x481a78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x481a7c: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x481a7cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x481a80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x481A80u;
    {
        const bool branch_taken_0x481a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x481A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481A80u;
        // 0x481a84: 0xc4a0003c  lwc1        $f0, 0x3C($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x481a80) {
            ctx->pc = 0x481A90u;
            goto label_481a90;
        }
    }
    ctx->pc = 0x481A88u;
label_481a88:
    // 0x481a88: 0xc4a0003c  lwc1        $f0, 0x3C($a1)
    ctx->pc = 0x481a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481a8c: 0x0  nop
    ctx->pc = 0x481a8cu;
    // NOP
label_481a90:
    // 0x481a90: 0xc4a10040  lwc1        $f1, 0x40($a1)
    ctx->pc = 0x481a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x481a94: 0xc4a20044  lwc1        $f2, 0x44($a1)
    ctx->pc = 0x481a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x481a98: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x481a98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x481a9c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x481a9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x481aa0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x481aa0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x481aa4: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x481aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x481aa8: 0xe4a10040  swc1        $f1, 0x40($a1)
    ctx->pc = 0x481aa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x481aac: 0xe4a20044  swc1        $f2, 0x44($a1)
    ctx->pc = 0x481aacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x481ab0: 0xc4c3000c  lwc1        $f3, 0xC($a2)
    ctx->pc = 0x481ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x481ab4: 0xc4c40010  lwc1        $f4, 0x10($a2)
    ctx->pc = 0x481ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x481ab8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x481ab8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x481abc: 0xc4c50014  lwc1        $f5, 0x14($a2)
    ctx->pc = 0x481abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x481ac0: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x481ac0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x481ac4: 0x8ca4003c  lw          $a0, 0x3C($a1)
    ctx->pc = 0x481ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x481ac8: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x481ac8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x481acc: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x481accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x481ad0: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x481ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x481ad4: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x481ad4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x481ad8: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x481ad8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x481adc: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x481adcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x481ae0: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x481ae0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x481ae4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x481ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x481ae8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x481ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x481aec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x481aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x481af0: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x481af0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x481af4: 0xa0a4004c  sb          $a0, 0x4C($a1)
    ctx->pc = 0x481af4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x481af8: 0xa0a2004d  sb          $v0, 0x4D($a1)
    ctx->pc = 0x481af8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 77), (uint8_t)GPR_U32(ctx, 2));
    // 0x481afc: 0xa0a3004e  sb          $v1, 0x4E($a1)
    ctx->pc = 0x481afcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 78), (uint8_t)GPR_U32(ctx, 3));
    // 0x481b00: 0xe4a30048  swc1        $f3, 0x48($a1)
    ctx->pc = 0x481b00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
    // 0x481b04: 0xc4c70024  lwc1        $f7, 0x24($a2)
    ctx->pc = 0x481b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x481b08: 0xc4c20054  lwc1        $f2, 0x54($a2)
    ctx->pc = 0x481b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x481b0c: 0xc4c60028  lwc1        $f6, 0x28($a2)
    ctx->pc = 0x481b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x481b10: 0xc4c80058  lwc1        $f8, 0x58($a2)
    ctx->pc = 0x481b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x481b14: 0x460239c1  sub.s       $f7, $f7, $f2
    ctx->pc = 0x481b14u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x481b18: 0xc4c5002c  lwc1        $f5, 0x2C($a2)
    ctx->pc = 0x481b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x481b1c: 0xc4c1005c  lwc1        $f1, 0x5C($a2)
    ctx->pc = 0x481b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x481b20: 0x46083181  sub.s       $f6, $f6, $f8
    ctx->pc = 0x481b20u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[8]);
    // 0x481b24: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x481b24u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x481b28: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x481b28u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x481b2c: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x481b2cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x481b30: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x481b30u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x481b34: 0xc4c00030  lwc1        $f0, 0x30($a2)
    ctx->pc = 0x481b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481b38: 0xc4c40034  lwc1        $f4, 0x34($a2)
    ctx->pc = 0x481b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x481b3c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x481b3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x481b40: 0xc4c30038  lwc1        $f3, 0x38($a2)
    ctx->pc = 0x481b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x481b44: 0x46082101  sub.s       $f4, $f4, $f8
    ctx->pc = 0x481b44u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[8]);
    // 0x481b48: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x481b48u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x481b4c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x481b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x481b50: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x481b50u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x481b54: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x481b54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x481b58: 0x46033042  mul.s       $f1, $f6, $f3
    ctx->pc = 0x481b58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x481b5c: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x481b5cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x481b60: 0x46043882  mul.s       $f2, $f7, $f4
    ctx->pc = 0x481b60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x481b64: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x481b64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x481b68: 0x460339c2  mul.s       $f7, $f7, $f3
    ctx->pc = 0x481b68u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x481b6c: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x481b6cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x481b70: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x481b70u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x481b74: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x481b74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x481b78: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x481b78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x481b7c: 0xe4a20058  swc1        $f2, 0x58($a1)
    ctx->pc = 0x481b7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
    // 0x481b80: 0xe4a00054  swc1        $f0, 0x54($a1)
    ctx->pc = 0x481b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
    // 0x481b84: 0xe4a10050  swc1        $f1, 0x50($a1)
    ctx->pc = 0x481b84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
    // 0x481b88: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x481b88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x481b8c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x481b8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x481b90: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x481b90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x481b94: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x481b94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x481b98: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x481b98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x481b9c: 0x46010044  c1          0x10044
    ctx->pc = 0x481b9cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x481ba0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x481ba0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x481ba4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x481ba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x481ba8: 0x0  nop
    ctx->pc = 0x481ba8u;
    // NOP
    // 0x481bac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x481BACu;
    {
        const bool branch_taken_0x481bac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x481BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481BACu;
        // 0x481bb0: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x481bac) {
            ctx->pc = 0x481BC8u;
            goto label_481bc8;
        }
    }
    ctx->pc = 0x481BB4u;
    // 0x481bb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x481bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x481bb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x481bb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x481bbc: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x481bbcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x481bc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x481BC0u;
    {
        const bool branch_taken_0x481bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x481BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481BC0u;
        // 0x481bc4: 0xc4a00050  lwc1        $f0, 0x50($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x481bc0) {
            ctx->pc = 0x481BD0u;
            goto label_481bd0;
        }
    }
    ctx->pc = 0x481BC8u;
label_481bc8:
    // 0x481bc8: 0xc4a00050  lwc1        $f0, 0x50($a1)
    ctx->pc = 0x481bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481bcc: 0x0  nop
    ctx->pc = 0x481bccu;
    // NOP
label_481bd0:
    // 0x481bd0: 0xc4a10054  lwc1        $f1, 0x54($a1)
    ctx->pc = 0x481bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x481bd4: 0xc4a20058  lwc1        $f2, 0x58($a1)
    ctx->pc = 0x481bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x481bd8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x481bd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x481bdc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x481bdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x481be0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x481be0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x481be4: 0xe4a00050  swc1        $f0, 0x50($a1)
    ctx->pc = 0x481be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
    // 0x481be8: 0xe4a10054  swc1        $f1, 0x54($a1)
    ctx->pc = 0x481be8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
    // 0x481bec: 0xe4a20058  swc1        $f2, 0x58($a1)
    ctx->pc = 0x481becu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
    // 0x481bf0: 0xc4c30024  lwc1        $f3, 0x24($a2)
    ctx->pc = 0x481bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x481bf4: 0xc4c40028  lwc1        $f4, 0x28($a2)
    ctx->pc = 0x481bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x481bf8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x481bf8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x481bfc: 0xc4c5002c  lwc1        $f5, 0x2C($a2)
    ctx->pc = 0x481bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x481c00: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x481c00u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x481c04: 0x8ca40050  lw          $a0, 0x50($a1)
    ctx->pc = 0x481c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x481c08: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x481c08u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x481c0c: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x481c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x481c10: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x481c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x481c14: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x481c14u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x481c18: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x481c18u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x481c1c: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x481c1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x481c20: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x481c20u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x481c24: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x481c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x481c28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x481c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x481c2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x481c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x481c30: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x481c30u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x481c34: 0xa0a40060  sb          $a0, 0x60($a1)
    ctx->pc = 0x481c34u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 96), (uint8_t)GPR_U32(ctx, 4));
    // 0x481c38: 0xa0a20061  sb          $v0, 0x61($a1)
    ctx->pc = 0x481c38u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 97), (uint8_t)GPR_U32(ctx, 2));
    // 0x481c3c: 0xa0a30062  sb          $v1, 0x62($a1)
    ctx->pc = 0x481c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 98), (uint8_t)GPR_U32(ctx, 3));
    // 0x481c40: 0xe4a3005c  swc1        $f3, 0x5C($a1)
    ctx->pc = 0x481c40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 92), bits); }
    // 0x481c44: 0xc4c20048  lwc1        $f2, 0x48($a2)
    ctx->pc = 0x481c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x481c48: 0xc4c00054  lwc1        $f0, 0x54($a2)
    ctx->pc = 0x481c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481c4c: 0xc4c4004c  lwc1        $f4, 0x4C($a2)
    ctx->pc = 0x481c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x481c50: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x481c50u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x481c54: 0xc4c10058  lwc1        $f1, 0x58($a2)
    ctx->pc = 0x481c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x481c58: 0xc4c30050  lwc1        $f3, 0x50($a2)
    ctx->pc = 0x481c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x481c5c: 0xc4c0005c  lwc1        $f0, 0x5C($a2)
    ctx->pc = 0x481c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481c60: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x481c60u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x481c64: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x481c64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x481c68: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x481c68u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x481c6c: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x481c6cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x481c70: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x481c70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x481c74: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x481c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x481c78: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x481c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481c7c: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x481c7cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x481c80: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x481c80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x481c84: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x481c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x481c88: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x481c88u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x481c8c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x481c8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x481c90: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x481c90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x481c94: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x481c94u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x481c98: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x481c98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x481c9c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x481c9cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x481ca0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x481ca0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x481ca4: 0xe4a00068  swc1        $f0, 0x68($a1)
    ctx->pc = 0x481ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 104), bits); }
    // 0x481ca8: 0xe4a2006c  swc1        $f2, 0x6C($a1)
    ctx->pc = 0x481ca8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 108), bits); }
    // 0x481cac: 0xe4a10064  swc1        $f1, 0x64($a1)
    ctx->pc = 0x481cacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 100), bits); }
    // 0x481cb0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x481cb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x481cb4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x481cb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x481cb8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x481cb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x481cbc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x481cbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x481cc0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x481cc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x481cc4: 0x46010044  c1          0x10044
    ctx->pc = 0x481cc4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x481cc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x481cc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x481ccc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x481cccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x481cd0: 0x0  nop
    ctx->pc = 0x481cd0u;
    // NOP
    // 0x481cd4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x481CD4u;
    {
        const bool branch_taken_0x481cd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x481CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481CD4u;
        // 0x481cd8: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x481cd4) {
            ctx->pc = 0x481CF0u;
            goto label_481cf0;
        }
    }
    ctx->pc = 0x481CDCu;
    // 0x481cdc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x481cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x481ce0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x481ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x481ce4: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x481ce4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x481ce8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x481CE8u;
    {
        const bool branch_taken_0x481ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x481CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481CE8u;
        // 0x481cec: 0xc4a00064  lwc1        $f0, 0x64($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x481ce8) {
            ctx->pc = 0x481CF8u;
            goto label_481cf8;
        }
    }
    ctx->pc = 0x481CF0u;
label_481cf0:
    // 0x481cf0: 0xc4a00064  lwc1        $f0, 0x64($a1)
    ctx->pc = 0x481cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481cf4: 0x0  nop
    ctx->pc = 0x481cf4u;
    // NOP
label_481cf8:
    // 0x481cf8: 0xc4a10068  lwc1        $f1, 0x68($a1)
    ctx->pc = 0x481cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x481cfc: 0xc4a2006c  lwc1        $f2, 0x6C($a1)
    ctx->pc = 0x481cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x481d00: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x481d00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x481d04: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x481d04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x481d08: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x481d08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x481d0c: 0xe4a00064  swc1        $f0, 0x64($a1)
    ctx->pc = 0x481d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 100), bits); }
    // 0x481d10: 0xe4a10068  swc1        $f1, 0x68($a1)
    ctx->pc = 0x481d10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 104), bits); }
    // 0x481d14: 0xe4a2006c  swc1        $f2, 0x6C($a1)
    ctx->pc = 0x481d14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 108), bits); }
    // 0x481d18: 0xc4c30024  lwc1        $f3, 0x24($a2)
    ctx->pc = 0x481d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x481d1c: 0xc4c40028  lwc1        $f4, 0x28($a2)
    ctx->pc = 0x481d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x481d20: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x481d20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x481d24: 0xc4c5002c  lwc1        $f5, 0x2C($a2)
    ctx->pc = 0x481d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x481d28: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x481d28u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x481d2c: 0x8ca40064  lw          $a0, 0x64($a1)
    ctx->pc = 0x481d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x481d30: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x481d30u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x481d34: 0x8ca30068  lw          $v1, 0x68($a1)
    ctx->pc = 0x481d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x481d38: 0x8ca2006c  lw          $v0, 0x6C($a1)
    ctx->pc = 0x481d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x481d3c: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x481d3cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x481d40: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x481d40u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x481d44: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x481d44u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x481d48: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x481d48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x481d4c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x481d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x481d50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x481d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x481d54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x481d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x481d58: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x481d58u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x481d5c: 0xa0a20076  sb          $v0, 0x76($a1)
    ctx->pc = 0x481d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 118), (uint8_t)GPR_U32(ctx, 2));
    // 0x481d60: 0xa0a40074  sb          $a0, 0x74($a1)
    ctx->pc = 0x481d60u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 116), (uint8_t)GPR_U32(ctx, 4));
    // 0x481d64: 0xa0a30075  sb          $v1, 0x75($a1)
    ctx->pc = 0x481d64u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 117), (uint8_t)GPR_U32(ctx, 3));
    // 0x481d68: 0xe4a30070  swc1        $f3, 0x70($a1)
    ctx->pc = 0x481d68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 112), bits); }
    // 0x481d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x481D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x481D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481D6Cu;
        // 0x481d70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x481D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x481D74u;
    // 0x481d74: 0x0  nop
    ctx->pc = 0x481d74u;
    // NOP
    ctx->pc = 0x481d78u;
}
