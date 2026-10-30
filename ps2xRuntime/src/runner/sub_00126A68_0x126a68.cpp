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

// Function: sub_00126A68
// Address: 0x126a68 - 0x126a88
void sub_00126A68_0x126a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126A68_0x126a68");
#endif

    ctx->pc = 0x126a68u;

    // 0x126a68: 0x3c013f38  lui         $at, 0x3F38
    ctx->pc = 0x126a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16184 << 16));
    // 0x126a6c: 0x34215294  ori         $at, $at, 0x5294
    ctx->pc = 0x126a6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21140);
    // 0x126a70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x126a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126a74: 0x0  nop
    ctx->pc = 0x126a74u;
    // NOP
    // 0x126a78: 0xe4800420  swc1        $f0, 0x420($a0)
    ctx->pc = 0x126a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1056), bits); }
    // 0x126a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x126A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A7Cu;
        // 0x126a80: 0xe480041c  swc1        $f0, 0x41C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1052), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126A84u;
    // 0x126a84: 0x0  nop
    ctx->pc = 0x126a84u;
    // NOP
    ctx->pc = 0x126a88u;
}
