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

// Function: sub_00192650
// Address: 0x192650 - 0x192688
void sub_00192650_0x192650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192650_0x192650");
#endif

    ctx->pc = 0x192650u;

    // 0x192650: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x192650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x192654: 0x8c46cd98  lw          $a2, -0x3268($v0)
    ctx->pc = 0x192654u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50CD98u));
    // 0x192658: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x192658u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19265c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x19265cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x192660: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x192660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x192664: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x192664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x192668: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x192668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x19266c: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x19266cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x192670: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x192670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x192674: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x192674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192678: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x192678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x19267c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x19267cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192680: 0x3e00008  jr          $ra
    ctx->pc = 0x192680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192680u;
        // 0x192684: 0xe4810004  swc1        $f1, 0x4($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192688u;
}
