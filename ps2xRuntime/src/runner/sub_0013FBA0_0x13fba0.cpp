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

// Function: sub_0013FBA0
// Address: 0x13fba0 - 0x140308
void sub_0013FBA0_0x13fba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013FBA0_0x13fba0");
#endif

    switch (ctx->pc) {
        case 0x13fc10u: goto label_13fc10;
        case 0x13fc20u: goto label_13fc20;
        case 0x13fd08u: goto label_13fd08;
        case 0x13fd30u: goto label_13fd30;
        case 0x13fe28u: goto label_13fe28;
        case 0x13fe54u: goto label_13fe54;
        case 0x13febcu: goto label_13febc;
        case 0x13ff38u: goto label_13ff38;
        case 0x13ff84u: goto label_13ff84;
        case 0x13ffacu: goto label_13ffac;
        case 0x140018u: goto label_140018;
        case 0x140098u: goto label_140098;
        case 0x1400f4u: goto label_1400f4;
        case 0x14011cu: goto label_14011c;
        case 0x140188u: goto label_140188;
        case 0x140208u: goto label_140208;
        default: break;
    }

    ctx->pc = 0x13fba0u;

    // 0x13fba0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x13fba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x13fba4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x13fba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x13fba8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x13fba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x13fbac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13fbacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fbb0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x13fbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x13fbb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13fbb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fbb8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x13fbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x13fbbc: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x13fbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x13fbc0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x13fbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x13fbc4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x13fbc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fbc8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x13fbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x13fbcc: 0xe7b900e8  swc1        $f25, 0xE8($sp)
    ctx->pc = 0x13fbccu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x13fbd0: 0xe7b800e0  swc1        $f24, 0xE0($sp)
    ctx->pc = 0x13fbd0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x13fbd4: 0xe7b700d8  swc1        $f23, 0xD8($sp)
    ctx->pc = 0x13fbd4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x13fbd8: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x13fbd8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x13fbdc: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x13fbdcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x13fbe0: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x13fbe0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x13fbe4: 0x96230350  lhu         $v1, 0x350($s1)
    ctx->pc = 0x13fbe4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 848)));
    // 0x13fbe8: 0x86340352  lh          $s4, 0x352($s1)
    ctx->pc = 0x13fbe8u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
    // 0x13fbec: 0x248792c0  addiu       $a3, $a0, -0x6D40
    ctx->pc = 0x13fbecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939328));
    // 0x13fbf0: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x13fbf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x13fbf4: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x13fbf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x13fbf8: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x13fbf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13fbfc: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x13fbfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13fc00: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x13fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x13fc04: 0x18400021  blez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x13FC04u;
    {
        const bool branch_taken_0x13fc04 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13FC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FC04u;
        // 0x13fc08: 0xa6230352  sh          $v1, 0x352($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 850), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fc04) {
            ctx->pc = 0x13FC8Cu;
            goto label_13fc8c;
        }
    }
    ctx->pc = 0x13FC0Cu;
    // 0x13fc0c: 0x263201e0  addiu       $s2, $s1, 0x1E0
    ctx->pc = 0x13fc0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
label_13fc10:
    // 0x13fc10: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13fc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13fc14: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13fc14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc18: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x13FC18u;
    SET_GPR_U32(ctx, 31, 0x13FC20u);
    ctx->pc = 0x13FC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FC18u;
    // 0x13fc1c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13FC18u, 0x13FC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FC20u;
label_13fc20:
    // 0x13fc20: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x13fc20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13fc24: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13fc24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x13fc28: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x13fc28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13fc2c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13fc2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13fc30: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x13fc30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13fc34: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x13fc34u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13fc38: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x13fc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13fc3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13fc3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13fc40: 0x0  nop
    ctx->pc = 0x13fc40u;
    // NOP
    // 0x13fc44: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13fc44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13fc48: 0x0  nop
    ctx->pc = 0x13fc48u;
    // NOP
    // 0x13fc4c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x13FC4Cu;
    {
        const bool branch_taken_0x13fc4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13FC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FC4Cu;
        // 0x13fc50: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fc4c) {
            ctx->pc = 0x13FC60u;
            goto label_13fc60;
        }
    }
    ctx->pc = 0x13FC54u;
    // 0x13fc54: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x13fc54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13fc58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13FC58u;
    {
        const bool branch_taken_0x13fc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FC58u;
        // 0x13fc5c: 0xafb00010  sw          $s0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fc58) {
            ctx->pc = 0x13FC78u;
            goto label_13fc78;
        }
    }
    ctx->pc = 0x13FC60u;
label_13fc60:
    // 0x13fc60: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x13fc60u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13fc64: 0x0  nop
    ctx->pc = 0x13fc64u;
    // NOP
    // 0x13fc68: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x13FC68u;
    {
        const bool branch_taken_0x13fc68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13fc68) {
            ctx->pc = 0x13FC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FC68u;
            // 0x13fc6c: 0x86220350  lh          $v0, 0x350($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 848)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FC7Cu;
            goto label_13fc7c;
        }
    }
    ctx->pc = 0x13FC70u;
    // 0x13fc70: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x13fc70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x13fc74: 0xafb00014  sw          $s0, 0x14($sp)
    ctx->pc = 0x13fc74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
label_13fc78:
    // 0x13fc78: 0x86220350  lh          $v0, 0x350($s1)
    ctx->pc = 0x13fc78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 848)));
label_13fc7c:
    // 0x13fc7c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13fc7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13fc80: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x13fc80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13fc84: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x13FC84u;
    {
        const bool branch_taken_0x13fc84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13FC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FC84u;
        // 0x13fc88: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fc84) {
            ctx->pc = 0x13FC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13fc10;
        }
    }
    ctx->pc = 0x13FC8Cu;
label_13fc8c:
    // 0x13fc8c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x13fc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13fc90: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x13fc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13fc94: 0x97a40010  lhu         $a0, 0x10($sp)
    ctx->pc = 0x13fc94u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13fc98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13fc98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13fc9c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x13fc9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x13fca0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x13fca0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13fca4: 0xa6240352  sh          $a0, 0x352($s1)
    ctx->pc = 0x13fca4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 850), (uint16_t)GPR_U32(ctx, 4));
    // 0x13fca8: 0x45000048  bc1f        . + 4 + (0x48 << 2)
    ctx->pc = 0x13FCA8u;
    {
        const bool branch_taken_0x13fca8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FCA8u;
        // 0x13fcac: 0x4600ad86  mov.s       $f22, $f21 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fca8) {
            ctx->pc = 0x13FDCCu;
            goto label_13fdcc;
        }
    }
    ctx->pc = 0x13FCB0u;
    // 0x13fcb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13fcb4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x13fcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13fcb8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x13fcb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13fcbc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13FCBCu;
    {
        const bool branch_taken_0x13fcbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FCBCu;
        // 0x13fcc0: 0x41400  sll         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fcbc) {
            ctx->pc = 0x13FCD0u;
            goto label_13fcd0;
        }
    }
    ctx->pc = 0x13FCC4u;
    // 0x13fcc4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x13fcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x13fcc8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x13fcc8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x13fccc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x13fcccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_13fcd0:
    // 0x13fcd0: 0x86220350  lh          $v0, 0x350($s1)
    ctx->pc = 0x13fcd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 848)));
    // 0x13fcd4: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x13fcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13fcd8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13fcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13fcdc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x13fcdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13fce0: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x13FCE0u;
    {
        const bool branch_taken_0x13fce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FCE0u;
        // 0x13fce4: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fce0) {
            ctx->pc = 0x13FDCCu;
            goto label_13fdcc;
        }
    }
    ctx->pc = 0x13FCE8u;
    // 0x13fce8: 0x18400038  blez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x13FCE8u;
    {
        const bool branch_taken_0x13fce8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13FCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FCE8u;
        // 0x13fcec: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fce8) {
            ctx->pc = 0x13FDCCu;
            goto label_13fdcc;
        }
    }
    ctx->pc = 0x13FCF0u;
    // 0x13fcf0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13fcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13fcf4: 0xb13021  addu        $a2, $a1, $s1
    ctx->pc = 0x13fcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x13fcf8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x13fcf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fcfc: 0x24c601e0  addiu       $a2, $a2, 0x1E0
    ctx->pc = 0x13fcfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
    // 0x13fd00: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x13FD00u;
    SET_GPR_U32(ctx, 31, 0x13FD08u);
    ctx->pc = 0x13FD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FD00u;
    // 0x13fd04: 0x24a501f0  addiu       $a1, $a1, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13FD00u, 0x13FD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FD08u;
label_13fd08:
    // 0x13fd08: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x13fd08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13fd0c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13fd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13fd10: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x13fd10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13fd14: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13fd14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fd18: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x13fd18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x13fd1c: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x13fd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x13fd20: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x13fd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x13fd24: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x13fd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x13fd28: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x13FD28u;
    SET_GPR_U32(ctx, 31, 0x13FD30u);
    ctx->pc = 0x13FD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FD28u;
    // 0x13fd2c: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13FD28u, 0x13FD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FD30u;
label_13fd30:
    // 0x13fd30: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x13fd30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13fd34: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x13fd34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13fd38: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x13fd38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x13fd3c: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x13fd3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13fd40: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x13fd40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13fd44: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x13fd44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13fd48: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x13fd48u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x13fd4c: 0x4a0003bf  vwaitq
    ctx->pc = 0x13fd4cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13fd50: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x13fd50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13fd54: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x13fd54u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13fd58: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13fd58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x13fd5c: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x13fd5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13fd60: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x13fd60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13fd64: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x13fd64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13fd68: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x13fd68u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x13fd6c: 0x4a0003bf  vwaitq
    ctx->pc = 0x13fd6cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13fd70: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x13fd70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13fd74: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x13fd74u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13fd78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13fd78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13fd7c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13fd7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x13fd80: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x13fd80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x13fd84: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x13fd84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13fd88: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13fd88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13fd8c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x13fd8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13fd90: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x13fd90u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13fd94: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x13fd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x13fd98: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x13fd98u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13fd9c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x13fd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x13fda0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13fda0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13fda4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x13fda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x13fda8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x13fda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x13fdac: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x13fdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
    // 0x13fdb0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x13FDB0u;
    {
        const bool branch_taken_0x13fdb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FDB0u;
        // 0x13fdb4: 0x7fa40030  sq          $a0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fdb0) {
            ctx->pc = 0x13FDCCu;
            goto label_13fdcc;
        }
    }
    ctx->pc = 0x13FDB8u;
    // 0x13fdb8: 0x46160836  c.le.s      $f1, $f22
    ctx->pc = 0x13fdb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13fdbc: 0x0  nop
    ctx->pc = 0x13fdbcu;
    // NOP
    // 0x13fdc0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13FDC0u;
    {
        const bool branch_taken_0x13fdc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FDC0u;
        // 0x13fdc4: 0x97a20014  lhu         $v0, 0x14($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fdc0) {
            ctx->pc = 0x13FDCCu;
            goto label_13fdcc;
        }
    }
    ctx->pc = 0x13FDC8u;
    // 0x13fdc8: 0xa6220352  sh          $v0, 0x352($s1)
    ctx->pc = 0x13fdc8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 850), (uint16_t)GPR_U32(ctx, 2));
label_13fdcc:
    // 0x13fdcc: 0x86220350  lh          $v0, 0x350($s1)
    ctx->pc = 0x13fdccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 848)));
    // 0x13fdd0: 0x86250352  lh          $a1, 0x352($s1)
    ctx->pc = 0x13fdd0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
    // 0x13fdd4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13fdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13fdd8: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13FDD8u;
    {
        const bool branch_taken_0x13fdd8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x13FDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FDD8u;
        // 0x13fddc: 0x96230350  lhu         $v1, 0x350($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fdd8) {
            ctx->pc = 0x13FDE8u;
            goto label_13fde8;
        }
    }
    ctx->pc = 0x13FDE0u;
    // 0x13fde0: 0x10000133  b           . + 4 + (0x133 << 2)
    ctx->pc = 0x13FDE0u;
    {
        const bool branch_taken_0x13fde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FDE0u;
        // 0x13fde4: 0x2462fffe  addiu       $v0, $v1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fde0) {
            ctx->pc = 0x1402B0u;
            goto label_1402b0;
        }
    }
    ctx->pc = 0x13FDE8u;
label_13fde8:
    // 0x13fde8: 0x922303ed  lbu         $v1, 0x3ED($s1)
    ctx->pc = 0x13fde8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1005)));
    // 0x13fdec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13FDECu;
    {
        const bool branch_taken_0x13fdec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FDECu;
        // 0x13fdf0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fdec) {
            ctx->pc = 0x13FDFCu;
            goto label_13fdfc;
        }
    }
    ctx->pc = 0x13FDF4u;
    // 0x13fdf4: 0x54620130  bnel        $v1, $v0, . + 4 + (0x130 << 2)
    ctx->pc = 0x13FDF4u;
    {
        const bool branch_taken_0x13fdf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13fdf4) {
            ctx->pc = 0x13FDF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FDF4u;
            // 0x13fdf8: 0x86220352  lh          $v0, 0x352($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1402B8u;
            goto label_1402b8;
        }
    }
    ctx->pc = 0x13FDFCu;
label_13fdfc:
    // 0x13fdfc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x13fdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x13fe00: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x13fe00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
    // 0x13fe04: 0xb13021  addu        $a2, $a1, $s1
    ctx->pc = 0x13fe04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x13fe08: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x13fe08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x13fe0c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x13fe0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fe10: 0xc47892c8  lwc1        $f24, -0x6D38($v1)
    ctx->pc = 0x13fe10u;
    { uint32_t bits = FAST_READ32(0x5492C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x13fe14: 0x24c601e0  addiu       $a2, $a2, 0x1E0
    ctx->pc = 0x13fe14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
    // 0x13fe18: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13fe18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13fe1c: 0x24a501f0  addiu       $a1, $a1, 0x1F0
    ctx->pc = 0x13fe1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
    // 0x13fe20: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x13FE20u;
    SET_GPR_U32(ctx, 31, 0x13FE28u);
    ctx->pc = 0x13FE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FE20u;
    // 0x13fe24: 0xc45992cc  lwc1        $f25, -0x6D34($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294939340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13FE20u, 0x13FE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FE28u;
label_13fe28:
    // 0x13fe28: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x13fe28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x13fe2c: 0x86260352  lh          $a2, 0x352($s1)
    ctx->pc = 0x13fe2cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
    // 0x13fe30: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13fe30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13fe34: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x13fe34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13fe38: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13fe38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fe3c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x13fe3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x13fe40: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x13fe40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x13fe44: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x13fe44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x13fe48: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x13fe48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x13fe4c: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x13FE4Cu;
    SET_GPR_U32(ctx, 31, 0x13FE54u);
    ctx->pc = 0x13FE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FE4Cu;
    // 0x13fe50: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13FE4Cu, 0x13FE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FE54u;
label_13fe54:
    // 0x13fe54: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x13fe54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13fe58: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x13fe58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13fe5c: 0x922303ed  lbu         $v1, 0x3ED($s1)
    ctx->pc = 0x13fe5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1005)));
    // 0x13fe60: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x13fe60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x13fe64: 0x1464001f  bne         $v1, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x13FE64u;
    {
        const bool branch_taken_0x13fe64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x13FE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FE64u;
        // 0x13fe68: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fe64) {
            ctx->pc = 0x13FEE4u;
            goto label_13fee4;
        }
    }
    ctx->pc = 0x13FE6Cu;
    // 0x13fe6c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x13fe6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13fe70: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13fe70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x13fe74: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x13fe74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13fe78: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13fe78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13fe7c: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13fe7cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x13fe80: 0x4a0003bf  vwaitq
    ctx->pc = 0x13fe80u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13fe84: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x13fe84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13fe88: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x13fe88u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13fe8c: 0x4486a000  mtc1        $a2, $f20
    ctx->pc = 0x13fe8cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13fe90: 0x0  nop
    ctx->pc = 0x13fe90u;
    // NOP
    // 0x13fe94: 0x4614b834  c.lt.s      $f23, $f20
    ctx->pc = 0x13fe94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13fe98: 0x0  nop
    ctx->pc = 0x13fe98u;
    // NOP
    // 0x13fe9c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x13FE9Cu;
    {
        const bool branch_taken_0x13fe9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13FEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FE9Cu;
        // 0x13fea0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fe9c) {
            ctx->pc = 0x13FEBCu;
            goto label_13febc;
        }
    }
    ctx->pc = 0x13FEA4u;
    // 0x13fea4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13fea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13fea8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13fea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13feac: 0x0  nop
    ctx->pc = 0x13feacu;
    // NOP
    // 0x13feb0: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x13feb0u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[20]); }
    // 0x13feb4: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x13FEB4u;
    SET_GPR_U32(ctx, 31, 0x13FEBCu);
    ctx->pc = 0x13FEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FEB4u;
    // 0x13feb8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13FEB4u, 0x13FEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FEBCu;
label_13febc:
    // 0x13febc: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x13febcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13fec0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x13fec0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13fec4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x13fec4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x13fec8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x13fec8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x13fecc: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x13feccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13fed0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13fed0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13fed4: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x13fed4u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13fed8: 0x4487b800  mtc1        $a3, $f23
    ctx->pc = 0x13fed8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x13fedc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x13FEDCu;
    {
        const bool branch_taken_0x13fedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FEDCu;
        // 0x13fee0: 0x86250352  lh          $a1, 0x352($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fedc) {
            ctx->pc = 0x13FF60u;
            goto label_13ff60;
        }
    }
    ctx->pc = 0x13FEE4u;
label_13fee4:
    // 0x13fee4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x13fee4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13fee8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13fee8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x13feec: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x13feecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13fef0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13fef0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13fef4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x13fef4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13fef8: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13fef8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x13fefc: 0x4a0003bf  vwaitq
    ctx->pc = 0x13fefcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13ff00: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x13ff00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13ff04: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x13ff04u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13ff08: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x13ff08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13ff0c: 0x0  nop
    ctx->pc = 0x13ff0cu;
    // NOP
    // 0x13ff10: 0x4614b834  c.lt.s      $f23, $f20
    ctx->pc = 0x13ff10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ff14: 0x0  nop
    ctx->pc = 0x13ff14u;
    // NOP
    // 0x13ff18: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x13FF18u;
    {
        const bool branch_taken_0x13ff18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FF18u;
        // 0x13ff1c: 0x7ba30020  lq          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ff18) {
            ctx->pc = 0x13FF3Cu;
            goto label_13ff3c;
        }
    }
    ctx->pc = 0x13FF20u;
    // 0x13ff20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13ff20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13ff24: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13ff24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13ff28: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13ff28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13ff2c: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x13ff2cu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[20]); }
    // 0x13ff30: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x13FF30u;
    SET_GPR_U32(ctx, 31, 0x13FF38u);
    ctx->pc = 0x13FF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FF30u;
    // 0x13ff34: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13FF30u, 0x13FF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FF38u;
label_13ff38:
    // 0x13ff38: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x13ff38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13ff3c:
    // 0x13ff3c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x13ff3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13ff40: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x13ff40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x13ff44: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x13ff44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x13ff48: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x13ff48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13ff4c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13ff4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13ff50: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x13ff50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13ff54: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x13ff54u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13ff58: 0x4484b800  mtc1        $a0, $f23
    ctx->pc = 0x13ff58u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x13ff5c: 0x86250352  lh          $a1, 0x352($s1)
    ctx->pc = 0x13ff5cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_13ff60:
    // 0x13ff60: 0x18a00057  blez        $a1, . + 4 + (0x57 << 2)
    ctx->pc = 0x13FF60u;
    {
        const bool branch_taken_0x13ff60 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x13FF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FF60u;
        // 0x13ff64: 0x96240352  lhu         $a0, 0x352($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ff60) {
            ctx->pc = 0x1400C0u;
            goto label_1400c0;
        }
    }
    ctx->pc = 0x13FF68u;
    // 0x13ff68: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x13ff68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x13ff6c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13ff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13ff70: 0xb13021  addu        $a2, $a1, $s1
    ctx->pc = 0x13ff70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x13ff74: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x13ff74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ff78: 0x24c601d0  addiu       $a2, $a2, 0x1D0
    ctx->pc = 0x13ff78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 464));
    // 0x13ff7c: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x13FF7Cu;
    SET_GPR_U32(ctx, 31, 0x13FF84u);
    ctx->pc = 0x13FF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FF7Cu;
    // 0x13ff80: 0x24a501e0  addiu       $a1, $a1, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13FF7Cu, 0x13FF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FF84u;
label_13ff84:
    // 0x13ff84: 0x86260352  lh          $a2, 0x352($s1)
    ctx->pc = 0x13ff84u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
    // 0x13ff88: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13ff88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13ff8c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x13ff8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13ff90: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13ff90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ff94: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x13ff94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x13ff98: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x13ff98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x13ff9c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x13ff9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x13ffa0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x13ffa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x13ffa4: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x13FFA4u;
    SET_GPR_U32(ctx, 31, 0x13FFACu);
    ctx->pc = 0x13FFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FFA4u;
    // 0x13ffa8: 0x24c601d0  addiu       $a2, $a2, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13FFA4u, 0x13FFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FFACu;
label_13ffac:
    // 0x13ffac: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x13ffacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13ffb0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x13ffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13ffb4: 0x922303ed  lbu         $v1, 0x3ED($s1)
    ctx->pc = 0x13ffb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1005)));
    // 0x13ffb8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x13ffb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x13ffbc: 0x14640020  bne         $v1, $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x13FFBCu;
    {
        const bool branch_taken_0x13ffbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x13FFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FFBCu;
        // 0x13ffc0: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ffbc) {
            ctx->pc = 0x140040u;
            goto label_140040;
        }
    }
    ctx->pc = 0x13FFC4u;
    // 0x13ffc4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x13ffc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ffc8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13ffc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x13ffcc: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x13ffccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13ffd0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13ffd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13ffd4: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13ffd4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x13ffd8: 0x4a0003bf  vwaitq
    ctx->pc = 0x13ffd8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13ffdc: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x13ffdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13ffe0: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x13ffe0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13ffe4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13ffe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ffe8: 0x4485a800  mtc1        $a1, $f21
    ctx->pc = 0x13ffe8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x13ffec: 0x0  nop
    ctx->pc = 0x13ffecu;
    // NOP
    // 0x13fff0: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x13fff0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13fff4: 0x0  nop
    ctx->pc = 0x13fff4u;
    // NOP
    // 0x13fff8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x13FFF8u;
    {
        const bool branch_taken_0x13fff8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13FFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FFF8u;
        // 0x13fffc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fff8) {
            ctx->pc = 0x140018u;
            goto label_140018;
        }
    }
    ctx->pc = 0x140000u;
    // 0x140000: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x140000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x140004: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x140004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x140008: 0x0  nop
    ctx->pc = 0x140008u;
    // NOP
    // 0x14000c: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x14000cu;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[21]); }
    // 0x140010: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x140010u;
    SET_GPR_U32(ctx, 31, 0x140018u);
    ctx->pc = 0x140014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140010u;
    // 0x140014: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x140010u, 0x140018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140018u;
label_140018:
    // 0x140018: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x140018u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14001c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x14001cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x140020: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x140020u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x140024: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x140024u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x140028: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x140028u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x14002c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x14002cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x140030: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x140030u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x140034: 0x4486c000  mtc1        $a2, $f24
    ctx->pc = 0x140034u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x140038: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x140038u;
    {
        const bool branch_taken_0x140038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140038u;
        // 0x14003c: 0x96240352  lhu         $a0, 0x352($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140038) {
            ctx->pc = 0x1400C0u;
            goto label_1400c0;
        }
    }
    ctx->pc = 0x140040u;
label_140040:
    // 0x140040: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x140040u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140044: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x140044u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x140048: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x140048u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x14004c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x14004cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x140050: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x140050u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x140054: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x140054u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x140058: 0x4a0003bf  vwaitq
    ctx->pc = 0x140058u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x14005c: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x14005cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x140060: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x140060u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x140064: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x140064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140068: 0x4487a800  mtc1        $a3, $f21
    ctx->pc = 0x140068u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x14006c: 0x0  nop
    ctx->pc = 0x14006cu;
    // NOP
    // 0x140070: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x140070u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140074: 0x0  nop
    ctx->pc = 0x140074u;
    // NOP
    // 0x140078: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x140078u;
    {
        const bool branch_taken_0x140078 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140078u;
        // 0x14007c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140078) {
            ctx->pc = 0x140098u;
            goto label_140098;
        }
    }
    ctx->pc = 0x140080u;
    // 0x140080: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x140080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x140084: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x140084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x140088: 0x0  nop
    ctx->pc = 0x140088u;
    // NOP
    // 0x14008c: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x14008cu;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[21]); }
    // 0x140090: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x140090u;
    SET_GPR_U32(ctx, 31, 0x140098u);
    ctx->pc = 0x140094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140090u;
    // 0x140094: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x140090u, 0x140098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140098u;
label_140098:
    // 0x140098: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x140098u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14009c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x14009cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1400a0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1400a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1400a4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1400a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1400a8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x1400a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1400ac: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1400acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1400b0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1400b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1400b4: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x1400b4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1400b8: 0x96240352  lhu         $a0, 0x352($s1)
    ctx->pc = 0x1400b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
    // 0x1400bc: 0x4485c000  mtc1        $a1, $f24
    ctx->pc = 0x1400bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_1400c0:
    // 0x1400c0: 0x86220350  lh          $v0, 0x350($s1)
    ctx->pc = 0x1400c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 848)));
    // 0x1400c4: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x1400c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1400c8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1400c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1400cc: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1400ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1400d0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1400d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1400d4: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1400D4u;
    {
        const bool branch_taken_0x1400d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1400D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1400D4u;
        // 0x1400d8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1400d4) {
            ctx->pc = 0x14022Cu;
            goto label_14022c;
        }
    }
    ctx->pc = 0x1400DCu;
    // 0x1400dc: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1400dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1400e0: 0xb13021  addu        $a2, $a1, $s1
    ctx->pc = 0x1400e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1400e4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1400e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1400e8: 0x24c601f0  addiu       $a2, $a2, 0x1F0
    ctx->pc = 0x1400e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 496));
    // 0x1400ec: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x1400ECu;
    SET_GPR_U32(ctx, 31, 0x1400F4u);
    ctx->pc = 0x1400F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1400ECu;
    // 0x1400f0: 0x24a50200  addiu       $a1, $a1, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x1400ECu, 0x1400F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1400F4u;
label_1400f4:
    // 0x1400f4: 0x86260352  lh          $a2, 0x352($s1)
    ctx->pc = 0x1400f4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
    // 0x1400f8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1400f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1400fc: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x1400fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x140100: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x140100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140104: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x140104u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x140108: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x140108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x14010c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x14010cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x140110: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x140110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x140114: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x140114u;
    SET_GPR_U32(ctx, 31, 0x14011Cu);
    ctx->pc = 0x140118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140114u;
    // 0x140118: 0x24c601f0  addiu       $a2, $a2, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x140114u, 0x14011Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14011Cu;
label_14011c:
    // 0x14011c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x14011cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x140120: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x140120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x140124: 0x922303ed  lbu         $v1, 0x3ED($s1)
    ctx->pc = 0x140124u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1005)));
    // 0x140128: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x140128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x14012c: 0x14640020  bne         $v1, $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x14012Cu;
    {
        const bool branch_taken_0x14012c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x140130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14012Cu;
        // 0x140130: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14012c) {
            ctx->pc = 0x1401B0u;
            goto label_1401b0;
        }
    }
    ctx->pc = 0x140134u;
    // 0x140134: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x140134u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140138: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x140138u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x14013c: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x14013cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x140140: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x140140u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x140144: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x140144u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x140148: 0x4a0003bf  vwaitq
    ctx->pc = 0x140148u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x14014c: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x14014cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x140150: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x140150u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x140154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x140154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140158: 0x4486b000  mtc1        $a2, $f22
    ctx->pc = 0x140158u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x14015c: 0x0  nop
    ctx->pc = 0x14015cu;
    // NOP
    // 0x140160: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x140160u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140164: 0x0  nop
    ctx->pc = 0x140164u;
    // NOP
    // 0x140168: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x140168u;
    {
        const bool branch_taken_0x140168 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140168u;
        // 0x14016c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140168) {
            ctx->pc = 0x140188u;
            goto label_140188;
        }
    }
    ctx->pc = 0x140170u;
    // 0x140170: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x140170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x140174: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x140174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x140178: 0x0  nop
    ctx->pc = 0x140178u;
    // NOP
    // 0x14017c: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x14017cu;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[22]); }
    // 0x140180: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x140180u;
    SET_GPR_U32(ctx, 31, 0x140188u);
    ctx->pc = 0x140184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140180u;
    // 0x140184: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x140180u, 0x140188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140188u;
label_140188:
    // 0x140188: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x140188u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14018c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x14018cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x140190: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x140190u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x140194: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x140194u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x140198: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x140198u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x14019c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x14019cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1401a0: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x1401a0u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1401a4: 0x4487c800  mtc1        $a3, $f25
    ctx->pc = 0x1401a4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x1401a8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1401A8u;
    {
        const bool branch_taken_0x1401a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1401a8) {
            ctx->pc = 0x14022Cu;
            goto label_14022c;
        }
    }
    ctx->pc = 0x1401B0u;
label_1401b0:
    // 0x1401b0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1401b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1401b4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1401b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1401b8: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x1401b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1401bc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1401bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1401c0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1401c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1401c4: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1401c4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1401c8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1401c8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1401cc: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x1401ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1401d0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x1401d0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1401d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1401d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1401d8: 0x4483b000  mtc1        $v1, $f22
    ctx->pc = 0x1401d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1401dc: 0x0  nop
    ctx->pc = 0x1401dcu;
    // NOP
    // 0x1401e0: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x1401e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1401e4: 0x0  nop
    ctx->pc = 0x1401e4u;
    // NOP
    // 0x1401e8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1401E8u;
    {
        const bool branch_taken_0x1401e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1401ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1401E8u;
        // 0x1401ec: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1401e8) {
            ctx->pc = 0x140208u;
            goto label_140208;
        }
    }
    ctx->pc = 0x1401F0u;
    // 0x1401f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1401f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1401f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1401f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1401f8: 0x0  nop
    ctx->pc = 0x1401f8u;
    // NOP
    // 0x1401fc: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x1401fcu;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[22]); }
    // 0x140200: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x140200u;
    SET_GPR_U32(ctx, 31, 0x140208u);
    ctx->pc = 0x140204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140200u;
    // 0x140204: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x140200u, 0x140208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140208u;
label_140208:
    // 0x140208: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x140208u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14020c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x14020cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x140210: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x140210u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x140214: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x140214u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x140218: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x140218u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x14021c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x14021cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x140220: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x140220u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x140224: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x140224u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x140228: 0x4484c800  mtc1        $a0, $f25
    ctx->pc = 0x140228u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_14022c:
    // 0x14022c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14022cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140230: 0x0  nop
    ctx->pc = 0x140230u;
    // NOP
    // 0x140234: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x140234u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140238: 0x0  nop
    ctx->pc = 0x140238u;
    // NOP
    // 0x14023c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x14023Cu;
    {
        const bool branch_taken_0x14023c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14023c) {
            ctx->pc = 0x140254u;
            goto label_140254;
        }
    }
    ctx->pc = 0x140244u;
    // 0x140244: 0x4617a034  c.lt.s      $f20, $f23
    ctx->pc = 0x140244u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140248: 0x0  nop
    ctx->pc = 0x140248u;
    // NOP
    // 0x14024c: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
    ctx->pc = 0x14024Cu;
    {
        const bool branch_taken_0x14024c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14024c) {
            ctx->pc = 0x140250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14024Cu;
            // 0x140250: 0x86220352  lh          $v0, 0x352($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1402B8u;
            goto label_1402b8;
        }
    }
    ctx->pc = 0x140254u;
label_140254:
    // 0x140254: 0x46180036  c.le.s      $f0, $f24
    ctx->pc = 0x140254u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140258: 0x0  nop
    ctx->pc = 0x140258u;
    // NOP
    // 0x14025c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x14025Cu;
    {
        const bool branch_taken_0x14025c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14025c) {
            ctx->pc = 0x140280u;
            goto label_140280;
        }
    }
    ctx->pc = 0x140264u;
    // 0x140264: 0x4615c036  c.le.s      $f24, $f21
    ctx->pc = 0x140264u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[24], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140268: 0x0  nop
    ctx->pc = 0x140268u;
    // NOP
    // 0x14026c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x14026Cu;
    {
        const bool branch_taken_0x14026c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14026c) {
            ctx->pc = 0x140280u;
            goto label_140280;
        }
    }
    ctx->pc = 0x140274u;
    // 0x140274: 0x96220352  lhu         $v0, 0x352($s1)
    ctx->pc = 0x140274u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
    // 0x140278: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x140278u;
    {
        const bool branch_taken_0x140278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140278u;
        // 0x14027c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140278) {
            ctx->pc = 0x1402B0u;
            goto label_1402b0;
        }
    }
    ctx->pc = 0x140280u;
label_140280:
    // 0x140280: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x140280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140284: 0x0  nop
    ctx->pc = 0x140284u;
    // NOP
    // 0x140288: 0x46190036  c.le.s      $f0, $f25
    ctx->pc = 0x140288u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14028c: 0x0  nop
    ctx->pc = 0x14028cu;
    // NOP
    // 0x140290: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x140290u;
    {
        const bool branch_taken_0x140290 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x140290) {
            ctx->pc = 0x140294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140290u;
            // 0x140294: 0x86220352  lh          $v0, 0x352($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1402B8u;
            goto label_1402b8;
        }
    }
    ctx->pc = 0x140298u;
    // 0x140298: 0x4616c836  c.le.s      $f25, $f22
    ctx->pc = 0x140298u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[25], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14029c: 0x0  nop
    ctx->pc = 0x14029cu;
    // NOP
    // 0x1402a0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1402A0u;
    {
        const bool branch_taken_0x1402a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1402a0) {
            ctx->pc = 0x1402A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1402A0u;
            // 0x1402a4: 0x86220352  lh          $v0, 0x352($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1402B8u;
            goto label_1402b8;
        }
    }
    ctx->pc = 0x1402A8u;
    // 0x1402a8: 0x96220352  lhu         $v0, 0x352($s1)
    ctx->pc = 0x1402a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
    // 0x1402ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1402acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1402b0:
    // 0x1402b0: 0xa6220352  sh          $v0, 0x352($s1)
    ctx->pc = 0x1402b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 850), (uint16_t)GPR_U32(ctx, 2));
    // 0x1402b4: 0x86220352  lh          $v0, 0x352($s1)
    ctx->pc = 0x1402b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
label_1402b8:
    // 0x1402b8: 0x10540006  beq         $v0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x1402B8u;
    {
        const bool branch_taken_0x1402b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x1402BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1402B8u;
        // 0x1402bc: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1402b8) {
            ctx->pc = 0x1402D4u;
            goto label_1402d4;
        }
    }
    ctx->pc = 0x1402C0u;
    // 0x1402c0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1402c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1402c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1402c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1402c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1402c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1402cc: 0x0  nop
    ctx->pc = 0x1402ccu;
    // NOP
    // 0x1402d0: 0xe62003cc  swc1        $f0, 0x3CC($s1)
    ctx->pc = 0x1402d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 972), bits); }
label_1402d4:
    // 0x1402d4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1402d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1402d8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1402d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1402dc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1402dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1402e0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1402e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1402e4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1402e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1402e8: 0xc7b900e8  lwc1        $f25, 0xE8($sp)
    ctx->pc = 0x1402e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1402ec: 0xc7b800e0  lwc1        $f24, 0xE0($sp)
    ctx->pc = 0x1402ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1402f0: 0xc7b700d8  lwc1        $f23, 0xD8($sp)
    ctx->pc = 0x1402f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1402f4: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x1402f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1402f8: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x1402f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1402fc: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1402fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x140300: 0x3e00008  jr          $ra
    ctx->pc = 0x140300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140300u;
        // 0x140304: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140308u;
}
