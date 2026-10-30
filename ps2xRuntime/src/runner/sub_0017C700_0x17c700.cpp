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

// Function: sub_0017C700
// Address: 0x17c700 - 0x17c840
void sub_0017C700_0x17c700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C700_0x17c700");
#endif

    switch (ctx->pc) {
        case 0x17c724u: goto label_17c724;
        case 0x17c768u: goto label_17c768;
        case 0x17c7bcu: goto label_17c7bc;
        default: break;
    }

    ctx->pc = 0x17c700u;

    // 0x17c700: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17c700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17c704: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17c704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17c708: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17c708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17c70c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17c70cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c710: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17c710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17c714: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17c714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c718: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x17c718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17c71c: 0xc12104a  jal         func_484128
    ctx->pc = 0x17C71Cu;
    SET_GPR_U32(ctx, 31, 0x17C724u);
    ctx->pc = 0x17C720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C71Cu;
    // 0x17c720: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484128u, 0x17C71Cu, 0x17C724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C724u;
label_17c724:
    // 0x17c724: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x17c724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17c728: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x17c728u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x17c72c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x17c72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x17c730: 0x68430037  ldl         $v1, 0x37($v0)
    ctx->pc = 0x17c730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x17c734: 0x6c430030  ldr         $v1, 0x30($v0)
    ctx->pc = 0x17c734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x17c738: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x17c738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x17c73c: 0xb203000b  sdl         $v1, 0xB($s0)
    ctx->pc = 0x17c73cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17c740: 0xb6030004  sdr         $v1, 0x4($s0)
    ctx->pc = 0x17c740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17c744: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x17c744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x17c748: 0x68430027  ldl         $v1, 0x27($v0)
    ctx->pc = 0x17c748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x17c74c: 0x6c430020  ldr         $v1, 0x20($v0)
    ctx->pc = 0x17c74cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x17c750: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x17c750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x17c754: 0xb2030017  sdl         $v1, 0x17($s0)
    ctx->pc = 0x17c754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17c758: 0xb6030010  sdr         $v1, 0x10($s0)
    ctx->pc = 0x17c758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17c75c: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x17c75cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x17c760: 0xc11b068  jal         func_46C1A0
    ctx->pc = 0x17C760u;
    SET_GPR_U32(ctx, 31, 0x17C768u);
    ctx->pc = 0x17C764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C760u;
    // 0x17c764: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C1A0u, 0x17C760u, 0x17C768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C768u;
label_17c768:
    // 0x17c768: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x17c768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x17c76c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x17c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17c770: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x17c770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c774: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x17c774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x17c778: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x17c778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17c77c: 0x6862001f  ldl         $v0, 0x1F($v1)
    ctx->pc = 0x17c77cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x17c780: 0x6c620018  ldr         $v0, 0x18($v1)
    ctx->pc = 0x17c780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x17c784: 0x68640027  ldl         $a0, 0x27($v1)
    ctx->pc = 0x17c784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x17c788: 0x6c640020  ldr         $a0, 0x20($v1)
    ctx->pc = 0x17c788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x17c78c: 0xb2020027  sdl         $v0, 0x27($s0)
    ctx->pc = 0x17c78cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17c790: 0xb6020020  sdr         $v0, 0x20($s0)
    ctx->pc = 0x17c790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17c794: 0xb204002f  sdl         $a0, 0x2F($s0)
    ctx->pc = 0x17c794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17c798: 0xb6040028  sdr         $a0, 0x28($s0)
    ctx->pc = 0x17c798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17c79c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17c7a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17c7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17c7a4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x17c7a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x17c7a8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17C7A8u;
    {
        const bool branch_taken_0x17c7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C7A8u;
        // 0x17c7ac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c7a8) {
            ctx->pc = 0x17C7DCu;
            goto label_17c7dc;
        }
    }
    ctx->pc = 0x17C7B0u;
    // 0x17c7b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17c7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c7b4: 0xc05fb32  jal         func_17ECC8
    ctx->pc = 0x17C7B4u;
    SET_GPR_U32(ctx, 31, 0x17C7BCu);
    ctx->pc = 0x17C7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C7B4u;
    // 0x17c7b8: 0x8c45cce4  lw          $a1, -0x331C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ECC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ECC8u, 0x17C7B4u, 0x17C7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C7BCu;
label_17c7bc:
    // 0x17c7bc: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x17c7bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17c7c0: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x17c7c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c7c4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x17c7c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x17c7c8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x17c7c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x17c7cc: 0x4be208ac  vsub.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x17c7ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x17c7d0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x17c7d0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x17c7d4: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x17c7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x17c7d8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x17c7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_17c7dc:
    // 0x17c7dc: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x17c7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c7e0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x17c7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c7e4: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x17c7e4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x17c7e8: 0xc6030014  lwc1        $f3, 0x14($s0)
    ctx->pc = 0x17c7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17c7ec: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x17c7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c7f0: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x17c7f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x17c7f4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17c7f4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x17c7f8: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x17c7f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x17c7fc: 0xe6030018  swc1        $f3, 0x18($s0)
    ctx->pc = 0x17c7fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x17c800: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17c800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c804: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x17c804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x17c808: 0x96220030  lhu         $v0, 0x30($s1)
    ctx->pc = 0x17c808u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x17c80c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17c80cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17c810: 0xa602004e  sh          $v0, 0x4E($s0)
    ctx->pc = 0x17c810u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 78), (uint16_t)GPR_U32(ctx, 2));
    // 0x17c814: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x17c814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17c818: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x17c818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x17c81c: 0x9622002e  lhu         $v0, 0x2E($s1)
    ctx->pc = 0x17c81cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
    // 0x17c820: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x17c820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x17c824: 0x9623002c  lhu         $v1, 0x2C($s1)
    ctx->pc = 0x17c824u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x17c828: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17c828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c82c: 0xa603004c  sh          $v1, 0x4C($s0)
    ctx->pc = 0x17c82cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 76), (uint16_t)GPR_U32(ctx, 3));
    // 0x17c830: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17c830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17c834: 0x3e00008  jr          $ra
    ctx->pc = 0x17C834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C834u;
        // 0x17c838: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C83Cu;
    // 0x17c83c: 0x0  nop
    ctx->pc = 0x17c83cu;
    // NOP
    ctx->pc = 0x17c840u;
}
