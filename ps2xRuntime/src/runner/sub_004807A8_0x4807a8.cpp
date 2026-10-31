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

// Function: sub_004807A8
// Address: 0x4807a8 - 0x4808a0
void sub_004807A8_0x4807a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004807A8_0x4807a8");
#endif

    switch (ctx->pc) {
        case 0x4807f0u: goto label_4807f0;
        default: break;
    }

    ctx->pc = 0x4807a8u;

    // 0x4807a8: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x4807a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4807ac: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x4807acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4807b0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4807b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4807b4: 0xb0820013  sdl         $v0, 0x13($a0)
    ctx->pc = 0x4807b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4807b8: 0xb482000c  sdr         $v0, 0xC($a0)
    ctx->pc = 0x4807b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4807bc: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x4807bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x4807c0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4807c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4807c4: 0x68a90007  ldl         $t1, 0x7($a1)
    ctx->pc = 0x4807c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x4807c8: 0x6ca90000  ldr         $t1, 0x0($a1)
    ctx->pc = 0x4807c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4807cc: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4807ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4807d0: 0xb0890007  sdl         $t1, 0x7($a0)
    ctx->pc = 0x4807d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4807d4: 0xb4890000  sdr         $t1, 0x0($a0)
    ctx->pc = 0x4807d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4807d8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x4807d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4807dc: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x4807dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x4807e0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4807e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4807e4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x4807E4u;
    {
        const bool branch_taken_0x4807e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4807E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4807E4u;
        // 0x4807e8: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4807e4) {
            ctx->pc = 0x480890u;
            goto label_480890;
        }
    }
    ctx->pc = 0x4807ECu;
    // 0x4807ec: 0x0  nop
    ctx->pc = 0x4807ecu;
    // NOP
label_4807f0:
    // 0x4807f0: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x4807f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4807f4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x4807f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4807f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4807f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4807fc: 0x0  nop
    ctx->pc = 0x4807fcu;
    // NOP
    // 0x480800: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x480800u;
    {
        const bool branch_taken_0x480800 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x480800) {
            ctx->pc = 0x480804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x480800u;
            // 0x480804: 0xe481000c  swc1        $f1, 0xC($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x480808u;
            goto label_480808;
        }
    }
    ctx->pc = 0x480808u;
label_480808:
    // 0x480808: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x480808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48080c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x48080cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x480810: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x480810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x480814: 0x0  nop
    ctx->pc = 0x480814u;
    // NOP
    // 0x480818: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x480818u;
    {
        const bool branch_taken_0x480818 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x480818) {
            ctx->pc = 0x48081Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x480818u;
            // 0x48081c: 0xe4810010  swc1        $f1, 0x10($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x480820u;
            goto label_480820;
        }
    }
    ctx->pc = 0x480820u;
label_480820:
    // 0x480820: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x480820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x480824: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x480824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x480828: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x480828u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x48082c: 0x0  nop
    ctx->pc = 0x48082cu;
    // NOP
    // 0x480830: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x480830u;
    {
        const bool branch_taken_0x480830 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x480830) {
            ctx->pc = 0x480834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x480830u;
            // 0x480834: 0xe4810014  swc1        $f1, 0x14($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x480838u;
            goto label_480838;
        }
    }
    ctx->pc = 0x480838u;
label_480838:
    // 0x480838: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x480838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48083c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x48083cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x480840: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x480840u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x480844: 0x0  nop
    ctx->pc = 0x480844u;
    // NOP
    // 0x480848: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x480848u;
    {
        const bool branch_taken_0x480848 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x480848) {
            ctx->pc = 0x48084Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x480848u;
            // 0x48084c: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x480850u;
            goto label_480850;
        }
    }
    ctx->pc = 0x480850u;
label_480850:
    // 0x480850: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x480850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x480854: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x480854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x480858: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x480858u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x48085c: 0x0  nop
    ctx->pc = 0x48085cu;
    // NOP
    // 0x480860: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x480860u;
    {
        const bool branch_taken_0x480860 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x480860) {
            ctx->pc = 0x480864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x480860u;
            // 0x480864: 0xe4810004  swc1        $f1, 0x4($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x480868u;
            goto label_480868;
        }
    }
    ctx->pc = 0x480868u;
label_480868:
    // 0x480868: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x480868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48086c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x48086cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x480870: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x480870u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x480874: 0x0  nop
    ctx->pc = 0x480874u;
    // NOP
    // 0x480878: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x480878u;
    {
        const bool branch_taken_0x480878 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x480878) {
            ctx->pc = 0x48087Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x480878u;
            // 0x48087c: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x480880u;
            goto label_480880;
        }
    }
    ctx->pc = 0x480880u;
label_480880:
    // 0x480880: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x480880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x480884: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x480884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x480888: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x480888u;
    {
        const bool branch_taken_0x480888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480888u;
        // 0x48088c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480888) {
            ctx->pc = 0x4807F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4807f0;
        }
    }
    ctx->pc = 0x480890u;
label_480890:
    // 0x480890: 0x3e00008  jr          $ra
    ctx->pc = 0x480890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x480894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480890u;
        // 0x480894: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x480890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x480898u;
    // 0x480898: 0x0  nop
    ctx->pc = 0x480898u;
    // NOP
    // 0x48089c: 0x0  nop
    ctx->pc = 0x48089cu;
    // NOP
    ctx->pc = 0x4808a0u;
}
