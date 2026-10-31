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

// Function: sub_0028BF00
// Address: 0x28bf00 - 0x28bf40
void sub_0028BF00_0x28bf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028BF00_0x28bf00");
#endif

    ctx->pc = 0x28bf00u;

    // 0x28bf00: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x28bf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x28bf04: 0x84620032  lh          $v0, 0x32($v1)
    ctx->pc = 0x28bf04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 50)));
    // 0x28bf08: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x28bf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x28bf0c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x28BF0Cu;
    {
        const bool branch_taken_0x28bf0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bf0c) {
            ctx->pc = 0x28BF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BF0Cu;
            // 0x28bf10: 0xc4810130  lwc1        $f1, 0x130($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BF1Cu;
            goto label_28bf1c;
        }
    }
    ctx->pc = 0x28BF14u;
    // 0x28bf14: 0x3e00008  jr          $ra
    ctx->pc = 0x28BF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF14u;
        // 0x28bf18: 0xc4800130  lwc1        $f0, 0x130($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28BF1Cu;
label_28bf1c:
    // 0x28bf1c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x28bf1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x28bf20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28bf20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28bf24: 0x0  nop
    ctx->pc = 0x28bf24u;
    // NOP
    // 0x28bf28: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x28bf28u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x28bf2c: 0x3e00008  jr          $ra
    ctx->pc = 0x28BF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28BF34u;
    // 0x28bf34: 0x0  nop
    ctx->pc = 0x28bf34u;
    // NOP
    // 0x28bf38: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28bf38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28bf3c: 0x0  nop
    ctx->pc = 0x28bf3cu;
    // NOP
    ctx->pc = 0x28bf40u;
}
