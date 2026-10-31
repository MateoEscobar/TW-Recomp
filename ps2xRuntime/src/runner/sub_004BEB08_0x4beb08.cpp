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

// Function: sub_004BEB08
// Address: 0x4beb08 - 0x4bece0
void sub_004BEB08_0x4beb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BEB08_0x4beb08");
#endif

    switch (ctx->pc) {
        case 0x4bec2cu: goto label_4bec2c;
        case 0x4bec38u: goto label_4bec38;
        case 0x4bec58u: goto label_4bec58;
        case 0x4bec64u: goto label_4bec64;
        case 0x4bec84u: goto label_4bec84;
        case 0x4bec90u: goto label_4bec90;
        default: break;
    }

    ctx->pc = 0x4beb08u;

    // 0x4beb08: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4beb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4beb0c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4beb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4beb10: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4beb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x4beb14: 0x8c4341f8  lw          $v1, 0x41F8($v0)
    ctx->pc = 0x4beb14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7141F8u));
    // 0x4beb18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4beb18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4beb1c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4beb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x4beb20: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4beb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4beb24: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x4beb24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x4beb28: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x4beb28u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x4beb2c: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x4beb2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x4beb30: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x4beb30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x4beb34: 0x6a020023  ldl         $v0, 0x23($s0)
    ctx->pc = 0x4beb34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4beb38: 0x6e02001c  ldr         $v0, 0x1C($s0)
    ctx->pc = 0x4beb38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4beb3c: 0x6a03002b  ldl         $v1, 0x2B($s0)
    ctx->pc = 0x4beb3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4beb40: 0x6e030024  ldr         $v1, 0x24($s0)
    ctx->pc = 0x4beb40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4beb44: 0x6a040033  ldl         $a0, 0x33($s0)
    ctx->pc = 0x4beb44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x4beb48: 0x6e04002c  ldr         $a0, 0x2C($s0)
    ctx->pc = 0x4beb48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x4beb4c: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x4beb4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4beb50: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x4beb50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4beb54: 0xb3a3002f  sdl         $v1, 0x2F($sp)
    ctx->pc = 0x4beb54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4beb58: 0xb7a30028  sdr         $v1, 0x28($sp)
    ctx->pc = 0x4beb58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4beb5c: 0xb3a40037  sdl         $a0, 0x37($sp)
    ctx->pc = 0x4beb5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4beb60: 0xb7a40030  sdr         $a0, 0x30($sp)
    ctx->pc = 0x4beb60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4beb64: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4beb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4beb68: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x4beb68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x4beb6c: 0xc7a90020  lwc1        $f9, 0x20($sp)
    ctx->pc = 0x4beb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4beb70: 0xc7a6002c  lwc1        $f6, 0x2C($sp)
    ctx->pc = 0x4beb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4beb74: 0xc7a70024  lwc1        $f7, 0x24($sp)
    ctx->pc = 0x4beb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4beb78: 0xc7a40030  lwc1        $f4, 0x30($sp)
    ctx->pc = 0x4beb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4beb7c: 0x46064880  add.s       $f2, $f9, $f6
    ctx->pc = 0x4beb7cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[9], ctx->f[6]);
    // 0x4beb80: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x4beb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4beb84: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x4beb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4beb88: 0x46043840  add.s       $f1, $f7, $f4
    ctx->pc = 0x4beb88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
    // 0x4beb8c: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x4beb8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x4beb90: 0x46032800  add.s       $f0, $f5, $f3
    ctx->pc = 0x4beb90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x4beb94: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x4beb94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x4beb98: 0xe6020050  swc1        $f2, 0x50($s0)
    ctx->pc = 0x4beb98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x4beb9c: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x4beb9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x4beba0: 0xe6010054  swc1        $f1, 0x54($s0)
    ctx->pc = 0x4beba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x4beba4: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x4beba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x4beba8: 0x46064801  sub.s       $f0, $f9, $f6
    ctx->pc = 0x4beba8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[9], ctx->f[6]);
    // 0x4bebac: 0x460439c1  sub.s       $f7, $f7, $f4
    ctx->pc = 0x4bebacu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x4bebb0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x4bebb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4bebb4: 0x46032841  sub.s       $f1, $f5, $f3
    ctx->pc = 0x4bebb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x4bebb8: 0xe7a70004  swc1        $f7, 0x4($sp)
    ctx->pc = 0x4bebb8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4bebbc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x4bebbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4bebc0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x4bebc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x4bebc4: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x4bebc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4bebc8: 0xe7a70014  swc1        $f7, 0x14($sp)
    ctx->pc = 0x4bebc8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x4bebcc: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x4bebccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x4bebd0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x4BEBD0u;
    {
        const bool branch_taken_0x4bebd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BEBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BEBD0u;
        // 0x4bebd4: 0x46003886  mov.s       $f2, $f7 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bebd0) {
            ctx->pc = 0x4BEBE0u;
            goto label_4bebe0;
        }
    }
    ctx->pc = 0x4BEBD8u;
    // 0x4bebd8: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x4bebd8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x4bebdc: 0x0  nop
    ctx->pc = 0x4bebdcu;
    // NOP
label_4bebe0:
    // 0x4bebe0: 0x46000906  mov.s       $f4, $f1
    ctx->pc = 0x4bebe0u;
    ctx->f[4] = FPU_MOV_S(ctx->f[1]);
    // 0x4bebe4: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x4bebe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4bebe8: 0x0  nop
    ctx->pc = 0x4bebe8u;
    // NOP
    // 0x4bebec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x4BEBECu;
    {
        const bool branch_taken_0x4bebec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BEBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BEBECu;
        // 0x4bebf0: 0x460010c6  mov.s       $f3, $f2 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bebec) {
            ctx->pc = 0x4BEBF8u;
            goto label_4bebf8;
        }
    }
    ctx->pc = 0x4BEBF4u;
    // 0x4bebf4: 0x460020c6  mov.s       $f3, $f4
    ctx->pc = 0x4bebf4u;
    ctx->f[3] = FPU_MOV_S(ctx->f[4]);
label_4bebf8:
    // 0x4bebf8: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x4bebf8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
    // 0x4bebfc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4bebfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4bec00: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x4bec00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x4bec04: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x4bec04u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x4bec08: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x4bec08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x4bec0c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x4bec0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x4bec10: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x4bec10u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x4bec14: 0x46023883  div.s       $f2, $f7, $f2
    ctx->pc = 0x4bec14u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[7], ctx->f[2]); }
    // 0x4bec18: 0x4600ab03  div.s       $f12, $f21, $f0
    ctx->pc = 0x4bec18u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x4bec1c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x4bec1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x4bec20: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x4bec20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x4bec24: 0xc12e66c  jal         func_4B99B0
    ctx->pc = 0x4BEC24u;
    SET_GPR_U32(ctx, 31, 0x4BEC2Cu);
    ctx->pc = 0x4BEC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEC24u;
    // 0x4bec28: 0xe7a20014  swc1        $f2, 0x14($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B99B0u, 0x4BEC24u, 0x4BEC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEC2Cu;
label_4bec2c:
    // 0x4bec2c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x4bec2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x4bec30: 0xc12e66c  jal         func_4B99B0
    ctx->pc = 0x4BEC30u;
    SET_GPR_U32(ctx, 31, 0x4BEC38u);
    ctx->pc = 0x4BEC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEC30u;
    // 0x4bec34: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B99B0u, 0x4BEC30u, 0x4BEC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEC38u;
label_4bec38:
    // 0x4bec38: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x4bec38u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x4bec3c: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x4bec3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4bec40: 0x460cab03  div.s       $f12, $f21, $f12
    ctx->pc = 0x4bec40u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[21], ctx->f[12]); }
    // 0x4bec44: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4bec44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4bec48: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4bec48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4bec4c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4bec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4bec50: 0xc12e66c  jal         func_4B99B0
    ctx->pc = 0x4BEC50u;
    SET_GPR_U32(ctx, 31, 0x4BEC58u);
    ctx->pc = 0x4BEC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEC50u;
    // 0x4bec54: 0xae02005c  sw          $v0, 0x5C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B99B0u, 0x4BEC50u, 0x4BEC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEC58u;
label_4bec58:
    // 0x4bec58: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x4bec58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x4bec5c: 0xc12e66c  jal         func_4B99B0
    ctx->pc = 0x4BEC5Cu;
    SET_GPR_U32(ctx, 31, 0x4BEC64u);
    ctx->pc = 0x4BEC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEC5Cu;
    // 0x4bec60: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B99B0u, 0x4BEC5Cu, 0x4BEC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEC64u;
label_4bec64:
    // 0x4bec64: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x4bec64u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x4bec68: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x4bec68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4bec6c: 0x460cab03  div.s       $f12, $f21, $f12
    ctx->pc = 0x4bec6cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[21], ctx->f[12]); }
    // 0x4bec70: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4bec70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4bec74: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4bec74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4bec78: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4bec78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4bec7c: 0xc12e66c  jal         func_4B99B0
    ctx->pc = 0x4BEC7Cu;
    SET_GPR_U32(ctx, 31, 0x4BEC84u);
    ctx->pc = 0x4BEC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEC7Cu;
    // 0x4bec80: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B99B0u, 0x4BEC7Cu, 0x4BEC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEC84u;
label_4bec84:
    // 0x4bec84: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x4bec84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x4bec88: 0xc12e66c  jal         func_4B99B0
    ctx->pc = 0x4BEC88u;
    SET_GPR_U32(ctx, 31, 0x4BEC90u);
    ctx->pc = 0x4BEC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEC88u;
    // 0x4bec8c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B99B0u, 0x4BEC88u, 0x4BEC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEC90u;
label_4bec90:
    // 0x4bec90: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x4bec90u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x4bec94: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4bec94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bec98: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4bec98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4bec9c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4bec9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4beca0: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x4beca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x4beca4: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x4beca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4beca8: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4beca8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4becac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4becacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4becb0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x4becb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4becb4: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4becb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4becb8: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x4becb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x4becbc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4becbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4becc0: 0x3e00008  jr          $ra
    ctx->pc = 0x4BECC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BECC0u;
        // 0x4becc4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BECC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BECC8u;
    // 0x4becc8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x4becc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x4beccc: 0x0  nop
    ctx->pc = 0x4becccu;
    // NOP
    // 0x4becd0: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x4becd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x4becd4: 0x0  nop
    ctx->pc = 0x4becd4u;
    // NOP
    // 0x4becd8: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x4becd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x4becdc: 0x0  nop
    ctx->pc = 0x4becdcu;
    // NOP
    ctx->pc = 0x4bece0u;
}
