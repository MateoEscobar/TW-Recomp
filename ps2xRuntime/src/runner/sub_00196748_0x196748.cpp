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

// Function: sub_00196748
// Address: 0x196748 - 0x1967e8
void sub_00196748_0x196748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196748_0x196748");
#endif

    ctx->pc = 0x196748u;

    // 0x196748: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x196748u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
    // 0x19674c: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x19674cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x196750: 0x8d23ce88  lw          $v1, -0x3178($t1)
    ctx->pc = 0x196750u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CE88u));
    // 0x196754: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x196754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x196758: 0x8c48ce94  lw          $t0, -0x316C($v0)
    ctx->pc = 0x196758u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x50CE94u));
    // 0x19675c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19675cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x196760: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x196760u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x196764: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x196764u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x196768: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x196768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19676c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x19676cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x196770: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x196770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196774: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x196774u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x196778: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x196778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19677c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x19677cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x196780: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x196780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x196784: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x196784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x196788: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x196788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19678c: 0xb1020007  sdl         $v0, 0x7($t0)
    ctx->pc = 0x19678cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x196790: 0xb5020000  sdr         $v0, 0x0($t0)
    ctx->pc = 0x196790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x196794: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x196794u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x196798: 0x2504000c  addiu       $a0, $t0, 0xC
    ctx->pc = 0x196798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x19679c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x19679cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1967a0: 0xa102000c  sb          $v0, 0xC($t0)
    ctx->pc = 0x1967a0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x1967a4: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x1967a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x1967a8: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1967a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1967ac: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x1967acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x1967b0: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x1967b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1967b4: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x1967b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x1967b8: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1967B8u;
    {
        const bool branch_taken_0x1967b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1967BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967B8u;
        // 0x1967bc: 0xa0830003  sb          $v1, 0x3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1967b8) {
            ctx->pc = 0x1967D0u;
            goto label_1967d0;
        }
    }
    ctx->pc = 0x1967C0u;
    // 0x1967c0: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1967c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1967c4: 0xe500001c  swc1        $f0, 0x1C($t0)
    ctx->pc = 0x1967c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 28), bits); }
    // 0x1967c8: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x1967c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1967cc: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x1967ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_1967d0:
    // 0x1967d0: 0x8d22ce88  lw          $v0, -0x3178($t1)
    ctx->pc = 0x1967d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294954632)));
    // 0x1967d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1967d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1967d8: 0xad22ce88  sw          $v0, -0x3178($t1)
    ctx->pc = 0x1967d8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294954632), GPR_U32(ctx, 2));
    // 0x1967dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1967DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1967E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967DCu;
        // 0x1967e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1967DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1967E4u;
    // 0x1967e4: 0x0  nop
    ctx->pc = 0x1967e4u;
    // NOP
    ctx->pc = 0x1967e8u;
}
