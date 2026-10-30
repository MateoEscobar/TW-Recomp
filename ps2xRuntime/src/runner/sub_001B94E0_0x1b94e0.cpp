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

// Function: sub_001B94E0
// Address: 0x1b94e0 - 0x1b9548
void sub_001B94E0_0x1b94e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B94E0_0x1b94e0");
#endif

    ctx->pc = 0x1b94e0u;

    // 0x1b94e0: 0xc4a001d0  lwc1        $f0, 0x1D0($a1)
    ctx->pc = 0x1b94e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b94e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b94e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b94e8: 0xc4a301cc  lwc1        $f3, 0x1CC($a1)
    ctx->pc = 0x1b94e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b94ec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b94ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b94f0: 0xc4a101c0  lwc1        $f1, 0x1C0($a1)
    ctx->pc = 0x1b94f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b94f4: 0xc4a201c4  lwc1        $f2, 0x1C4($a1)
    ctx->pc = 0x1b94f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b94f8: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x1b94f8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1b94fc: 0xc4a401c8  lwc1        $f4, 0x1C8($a1)
    ctx->pc = 0x1b94fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b9500: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1b9500u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b9504: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1b9504u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b9508: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1b9508u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1b950c: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x1b950cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b9510: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1b9510u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b9514: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x1b9514u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b9518: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1b9518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b951c: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x1b951cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1b9520: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x1b9520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1b9524: 0x6ba5000f  ldl         $a1, 0xF($sp)
    ctx->pc = 0x1b9524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1b9528: 0x6fa50008  ldr         $a1, 0x8($sp)
    ctx->pc = 0x1b9528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1b952c: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x1b952cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b9530: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x1b9530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b9534: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x1b9534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b9538: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x1b9538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b953c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B953Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B953Cu;
        // 0x1b9540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B953Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9544u;
    // 0x1b9544: 0x0  nop
    ctx->pc = 0x1b9544u;
    // NOP
    ctx->pc = 0x1b9548u;
}
