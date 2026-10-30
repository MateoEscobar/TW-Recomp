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

// Function: sub_001BEA00
// Address: 0x1bea00 - 0x1bebe8
void sub_001BEA00_0x1bea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEA00_0x1bea00");
#endif

    switch (ctx->pc) {
        case 0x1beac0u: goto label_1beac0;
        case 0x1beb6cu: goto label_1beb6c;
        case 0x1beb7cu: goto label_1beb7c;
        case 0x1beb88u: goto label_1beb88;
        case 0x1bebb4u: goto label_1bebb4;
        default: break;
    }

    ctx->pc = 0x1bea00u;

    // 0x1bea00: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1bea00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1bea04: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x1bea04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x1bea08: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1bea08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1bea0c: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1bea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bea10: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1bea10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x1bea14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bea14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea18: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1bea18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x1bea1c: 0x2404004b  addiu       $a0, $zero, 0x4B
    ctx->pc = 0x1bea1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x1bea20: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1bea20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x1bea24: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x1bea24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea28: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1bea28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x1bea2c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1bea2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bea30: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1bea30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1bea34: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x1bea34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea38: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1bea38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1bea3c: 0x241500ff  addiu       $s5, $zero, 0xFF
    ctx->pc = 0x1bea3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1bea40: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1bea40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1bea44: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1bea44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea48: 0xae050040  sw          $a1, 0x40($s0)
    ctx->pc = 0x1bea48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 5));
    // 0x1bea4c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1bea4cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1bea50: 0xa3a30050  sb          $v1, 0x50($sp)
    ctx->pc = 0x1bea50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bea54: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1bea54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea58: 0x240300db  addiu       $v1, $zero, 0xDB
    ctx->pc = 0x1bea58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 219));
    // 0x1bea5c: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x1bea5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bea60: 0xa0550003  sb          $s5, 0x3($v0)
    ctx->pc = 0x1bea60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 21));
    // 0x1bea64: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1bea64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea68: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1bea68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bea6c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1bea6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1bea70: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x1bea70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1bea74: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1bea74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea78: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1bea78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bea7c: 0x240a0007  addiu       $t2, $zero, 0x7
    ctx->pc = 0x1bea7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bea80: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x1bea80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bea84: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1bea84u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bea88: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1bea88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1bea8c: 0x26120480  addiu       $s2, $s0, 0x480
    ctx->pc = 0x1bea8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x1bea90: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x1bea90u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x1bea94: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x1bea94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bea98: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1bea98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
    // 0x1bea9c: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1bea9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
    // 0x1beaa0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1beaa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1beaa4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1beaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1beaa8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1beaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1beaac: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x1beaacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x1beab0: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x1beab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
    // 0x1beab4: 0xafb30028  sw          $s3, 0x28($sp)
    ctx->pc = 0x1beab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 19));
    // 0x1beab8: 0xc06db14  jal         func_1B6C50
    ctx->pc = 0x1BEAB8u;
    SET_GPR_U32(ctx, 31, 0x1BEAC0u);
    ctx->pc = 0x1BEABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEAB8u;
    // 0x1beabc: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6C50u, 0x1BEAB8u, 0x1BEAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEAC0u;
label_1beac0:
    // 0x1beac0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1beac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1beac4: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x1beac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x1beac8: 0xa20202fc  sb          $v0, 0x2FC($s0)
    ctx->pc = 0x1beac8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 764), (uint8_t)GPR_U32(ctx, 2));
    // 0x1beacc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1beaccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1bead0: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x1bead0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1bead4: 0x2463e8c0  addiu       $v1, $v1, -0x1740
    ctx->pc = 0x1bead4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961344));
    // 0x1bead8: 0x6a240007  ldl         $a0, 0x7($s1)
    ctx->pc = 0x1bead8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1beadc: 0x6e240000  ldr         $a0, 0x0($s1)
    ctx->pc = 0x1beadcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1beae0: 0x6a25000f  ldl         $a1, 0xF($s1)
    ctx->pc = 0x1beae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1beae4: 0x6e250008  ldr         $a1, 0x8($s1)
    ctx->pc = 0x1beae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1beae8: 0xb3a40047  sdl         $a0, 0x47($sp)
    ctx->pc = 0x1beae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1beaec: 0xb7a40040  sdr         $a0, 0x40($sp)
    ctx->pc = 0x1beaecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1beaf0: 0xb3a5004f  sdl         $a1, 0x4F($sp)
    ctx->pc = 0x1beaf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1beaf4: 0xb7a50048  sdr         $a1, 0x48($sp)
    ctx->pc = 0x1beaf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1beaf8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1beaf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1beafc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1beafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1beb00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1beb00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1beb04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1beb04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1beb08: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x1beb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1beb0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1beb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1beb10: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1beb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1beb14: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1beb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1beb18: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x1beb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1beb1c: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x1beb1cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x1beb20: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x1beb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1beb24: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1beb24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1beb28: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1beb28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1beb2c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1beb2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1beb30: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x1beb30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x1beb34: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x1beb34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1beb38: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x1beb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x1beb3c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1beb3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1beb40: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1beb40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1beb44: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1beb44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beb48: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x1beb48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1beb4c: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1beb4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1beb50: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x1beb50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1beb54: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1beb54u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beb58: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1beb58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1beb5c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1beb5cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1beb60: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1beb60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beb64: 0xc06e424  jal         func_1B9090
    ctx->pc = 0x1BEB64u;
    SET_GPR_U32(ctx, 31, 0x1BEB6Cu);
    ctx->pc = 0x1BEB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEB64u;
    // 0x1beb68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x1BEB64u, 0x1BEB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB6Cu;
label_1beb6c:
    // 0x1beb6c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1beb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1beb70: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1beb70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1beb74: 0xc079bd4  jal         func_1E6F50
    ctx->pc = 0x1BEB74u;
    SET_GPR_U32(ctx, 31, 0x1BEB7Cu);
    ctx->pc = 0x1BEB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEB74u;
    // 0x1beb78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6F50u, 0x1BEB74u, 0x1BEB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB7Cu;
label_1beb7c:
    // 0x1beb7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1beb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beb80: 0xc079cd8  jal         func_1E7360
    ctx->pc = 0x1BEB80u;
    SET_GPR_U32(ctx, 31, 0x1BEB88u);
    ctx->pc = 0x1BEB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEB80u;
    // 0x1beb84: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7360u, 0x1BEB80u, 0x1BEB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB88u;
label_1beb88:
    // 0x1beb88: 0x240300be  addiu       $v1, $zero, 0xBE
    ctx->pc = 0x1beb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x1beb8c: 0x27a20054  addiu       $v0, $sp, 0x54
    ctx->pc = 0x1beb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1beb90: 0xa3a30054  sb          $v1, 0x54($sp)
    ctx->pc = 0x1beb90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 84), (uint8_t)GPR_U32(ctx, 3));
    // 0x1beb94: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x1beb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1beb98: 0x240300a6  addiu       $v1, $zero, 0xA6
    ctx->pc = 0x1beb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x1beb9c: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x1beb9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1beba0: 0xa0550003  sb          $s5, 0x3($v0)
    ctx->pc = 0x1beba0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 21));
    // 0x1beba4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1beba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beba8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1beba8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bebac: 0xc079ce0  jal         func_1E7380
    ctx->pc = 0x1BEBACu;
    SET_GPR_U32(ctx, 31, 0x1BEBB4u);
    ctx->pc = 0x1BEBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEBACu;
    // 0x1bebb0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7380u, 0x1BEBACu, 0x1BEBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEBB4u;
label_1bebb4:
    // 0x1bebb4: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1bebb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x1bebb8: 0xae130a20  sw          $s3, 0xA20($s0)
    ctx->pc = 0x1bebb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2592), GPR_U32(ctx, 19));
    // 0x1bebbc: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1bebbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1bebc0: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1bebc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bebc4: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1bebc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bebc8: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1bebc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bebcc: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1bebccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bebd0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1bebd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bebd4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1bebd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bebd8: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1bebd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bebdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEBDCu;
        // 0x1bebe0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEBDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEBE4u;
    // 0x1bebe4: 0x0  nop
    ctx->pc = 0x1bebe4u;
    // NOP
    ctx->pc = 0x1bebe8u;
}
