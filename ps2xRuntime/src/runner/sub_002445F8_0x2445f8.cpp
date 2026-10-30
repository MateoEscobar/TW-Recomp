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

// Function: sub_002445F8
// Address: 0x2445f8 - 0x244620
void sub_002445F8_0x2445f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002445F8_0x2445f8");
#endif

    ctx->pc = 0x2445f8u;

    // 0x2445f8: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2445f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x2445fc: 0xac800670  sw          $zero, 0x670($a0)
    ctx->pc = 0x2445fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1648), GPR_U32(ctx, 0));
    // 0x244600: 0xac800674  sw          $zero, 0x674($a0)
    ctx->pc = 0x244600u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1652), GPR_U32(ctx, 0));
    // 0x244604: 0x2447c790  addiu       $a3, $v0, -0x3870
    ctx->pc = 0x244604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952848));
    // 0x244608: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x244608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x24460c: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x24460cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x244610: 0xb08301c3  sdl         $v1, 0x1C3($a0)
    ctx->pc = 0x244610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 451); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244614: 0xb48301bc  sdr         $v1, 0x1BC($a0)
    ctx->pc = 0x244614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 444); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244618: 0x3e00008  jr          $ra
    ctx->pc = 0x244618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244620u;
}
