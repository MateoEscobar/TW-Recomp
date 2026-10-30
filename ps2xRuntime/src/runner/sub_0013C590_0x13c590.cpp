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

// Function: sub_0013C590
// Address: 0x13c590 - 0x13c5a8
void sub_0013C590_0x13c590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C590_0x13c590");
#endif

    ctx->pc = 0x13c590u;

    // 0x13c590: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13c590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x13c594: 0x342100a8  ori         $at, $at, 0xA8
    ctx->pc = 0x13c594u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)168);
    // 0x13c598: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13c598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c59c: 0x3e00008  jr          $ra
    ctx->pc = 0x13C59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C59Cu;
        // 0x13c5a0: 0xe48003dc  swc1        $f0, 0x3DC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 988), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C5A4u;
    // 0x13c5a4: 0x0  nop
    ctx->pc = 0x13c5a4u;
    // NOP
    ctx->pc = 0x13c5a8u;
}
