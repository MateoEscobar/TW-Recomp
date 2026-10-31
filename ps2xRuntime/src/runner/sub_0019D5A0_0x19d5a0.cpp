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

// Function: sub_0019D5A0
// Address: 0x19d5a0 - 0x19d5c8
void sub_0019D5A0_0x19d5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D5A0_0x19d5a0");
#endif

    ctx->pc = 0x19d5a0u;

    // 0x19d5a0: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x19d5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x19d5a4: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x19d5a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x19d5a8: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x19d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x19d5ac: 0xc4401cf0  lwc1        $f0, 0x1CF0($v0)
    ctx->pc = 0x19d5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d5b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19d5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d5b4: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x19d5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x19d5b8: 0xc4811cf4  lwc1        $f1, 0x1CF4($a0)
    ctx->pc = 0x19d5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19d5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x19D5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D5BCu;
        // 0x19d5c0: 0xe4c10004  swc1        $f1, 0x4($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D5C4u;
    // 0x19d5c4: 0x0  nop
    ctx->pc = 0x19d5c4u;
    // NOP
    ctx->pc = 0x19d5c8u;
}
