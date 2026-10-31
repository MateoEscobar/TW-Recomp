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

// Function: sub_00196800
// Address: 0x196800 - 0x196888
void sub_00196800_0x196800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196800_0x196800");
#endif

    ctx->pc = 0x196800u;

    // 0x196800: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x196800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x196804: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x196804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x196808: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x196808u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x19680c: 0x8c68ce98  lw          $t0, -0x3168($v1)
    ctx->pc = 0x19680cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954648)));
    // 0x196810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x196814: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x196814u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x196818: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x196818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19681c: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x19681cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x196820: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x196820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196824: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x196824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x196828: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x196828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19682c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x19682cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x196830: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x196830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x196834: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x196834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x196838: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x196838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19683c: 0xb1020007  sdl         $v0, 0x7($t0)
    ctx->pc = 0x19683cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x196840: 0xb5020000  sdr         $v0, 0x0($t0)
    ctx->pc = 0x196840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x196844: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x196844u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x196848: 0x2504000c  addiu       $a0, $t0, 0xC
    ctx->pc = 0x196848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x19684c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x19684cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x196850: 0xa102000c  sb          $v0, 0xC($t0)
    ctx->pc = 0x196850u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x196854: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x196854u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x196858: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x196858u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x19685c: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x19685cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x196860: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x196860u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x196864: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x196864u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x196868: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x196868u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x19686c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x19686cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x196870: 0x8ca2ce9c  lw          $v0, -0x3164($a1)
    ctx->pc = 0x196870u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50CE9Cu));
    // 0x196874: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x196874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x196878: 0xaca2ce9c  sw          $v0, -0x3164($a1)
    ctx->pc = 0x196878u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x50CE9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50CE9Cu, _value); } while (0);
    // 0x19687c: 0x3e00008  jr          $ra
    ctx->pc = 0x19687Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19687Cu;
        // 0x196880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19687Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196884u;
    // 0x196884: 0x0  nop
    ctx->pc = 0x196884u;
    // NOP
    ctx->pc = 0x196888u;
}
