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

// Function: sub_00192618
// Address: 0x192618 - 0x192648
void sub_00192618_0x192618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192618_0x192618");
#endif

    ctx->pc = 0x192618u;

    // 0x192618: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x192618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x19261c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19261cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x192620: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x192620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192624: 0x8c43cd98  lw          $v1, -0x3268($v0)
    ctx->pc = 0x192624u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CD98u));
    // 0x192628: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x192628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19262c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x19262cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x192630: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x192630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x192634: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x192634u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x192638: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x192638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x19263c: 0x3e00008  jr          $ra
    ctx->pc = 0x19263Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19263Cu;
        // 0x192640: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19263Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192644u;
    // 0x192644: 0x0  nop
    ctx->pc = 0x192644u;
    // NOP
    ctx->pc = 0x192648u;
}
