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

// Function: sub_00198DC0
// Address: 0x198dc0 - 0x198e20
void sub_00198DC0_0x198dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198DC0_0x198dc0");
#endif

    ctx->pc = 0x198dc0u;

    // 0x198dc0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x198dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x198dc4: 0x8c46ced0  lw          $a2, -0x3130($v0)
    ctx->pc = 0x198dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50CED0u));
    // 0x198dc8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x198dc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198dcc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x198dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x198dd0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x198dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x198dd4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x198dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x198dd8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x198dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x198ddc: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x198ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x198de0: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x198de0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x198de4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x198de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x198de8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x198de8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x198dec: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x198decu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x198df0: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x198df0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x198df4: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x198df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x198df8: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x198df8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x198dfc: 0x68a3001b  ldl         $v1, 0x1B($a1)
    ctx->pc = 0x198dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x198e00: 0x6ca30014  ldr         $v1, 0x14($a1)
    ctx->pc = 0x198e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x198e04: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x198e04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x198e08: 0xb083001b  sdl         $v1, 0x1B($a0)
    ctx->pc = 0x198e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198e0c: 0xb4830014  sdr         $v1, 0x14($a0)
    ctx->pc = 0x198e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198e10: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x198e10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x198e14: 0x3e00008  jr          $ra
    ctx->pc = 0x198E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198E1Cu;
    // 0x198e1c: 0x0  nop
    ctx->pc = 0x198e1cu;
    // NOP
    ctx->pc = 0x198e20u;
}
