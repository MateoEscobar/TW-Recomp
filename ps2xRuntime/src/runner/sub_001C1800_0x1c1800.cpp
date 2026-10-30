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

// Function: sub_001C1800
// Address: 0x1c1800 - 0x1c1870
void sub_001C1800_0x1c1800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1800_0x1c1800");
#endif

    switch (ctx->pc) {
        case 0x1c183cu: goto label_1c183c;
        default: break;
    }

    ctx->pc = 0x1c1800u;

    // 0x1c1800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c1800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c1804: 0x46006046  mov.s       $f1, $f12
    ctx->pc = 0x1c1804u;
    ctx->f[1] = FPU_MOV_S(ctx->f[12]);
    // 0x1c1808: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c1808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c180c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c180cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c1810: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1814: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x1c1814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1818: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1c1818u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c181c: 0x0  nop
    ctx->pc = 0x1c181cu;
    // NOP
    // 0x1c1820: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x1C1820u;
    {
        const bool branch_taken_0x1c1820 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c1820) {
            ctx->pc = 0x1C1824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1820u;
            // 0x1c1824: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1860u;
            goto label_1c1860;
        }
    }
    ctx->pc = 0x1C1828u;
    // 0x1c1828: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c1828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c182c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c182cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1830: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x1c1830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
    // 0x1c1834: 0xc05e602  jal         func_179808
    ctx->pc = 0x1C1834u;
    SET_GPR_U32(ctx, 31, 0x1C183Cu);
    ctx->pc = 0x1C1838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1834u;
    // 0x1c1838: 0xe60100b0  swc1        $f1, 0xB0($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1C1834u, 0x1C183Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C183Cu;
label_1c183c:
    // 0x1c183c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1c183cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1c1840: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1c1840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1c1844: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x1c1844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1c1848: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x1c1848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1c184c: 0xb20200a7  sdl         $v0, 0xA7($s0)
    ctx->pc = 0x1c184cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c1850: 0xb60200a0  sdr         $v0, 0xA0($s0)
    ctx->pc = 0x1c1850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c1854: 0xb20300af  sdl         $v1, 0xAF($s0)
    ctx->pc = 0x1c1854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c1858: 0xb60300a8  sdr         $v1, 0xA8($s0)
    ctx->pc = 0x1c1858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c185c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c185cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c1860:
    // 0x1c1860: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c1860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1864: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1864u;
        // 0x1c1868: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C186Cu;
    // 0x1c186c: 0x0  nop
    ctx->pc = 0x1c186cu;
    // NOP
    ctx->pc = 0x1c1870u;
}
