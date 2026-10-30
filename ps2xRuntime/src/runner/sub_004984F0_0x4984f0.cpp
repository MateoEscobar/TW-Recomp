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

// Function: sub_004984F0
// Address: 0x4984f0 - 0x498550
void sub_004984F0_0x4984f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004984F0_0x4984f0");
#endif

    ctx->pc = 0x4984f0u;

    // 0x4984f0: 0x8f828a48  lw          $v0, -0x75B8($gp)
    ctx->pc = 0x4984f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937160)));
    // 0x4984f4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4984F4u;
    {
        const bool branch_taken_0x4984f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4984f4) {
            ctx->pc = 0x498528u;
            goto label_498528;
        }
    }
    ctx->pc = 0x4984FCu;
    // 0x4984fc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4984FCu;
    {
        const bool branch_taken_0x4984fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4984fc) {
            ctx->pc = 0x498500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4984FCu;
            // 0x498500: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x498510u;
            goto label_498510;
        }
    }
    ctx->pc = 0x498504u;
    // 0x498504: 0xc78082dc  lwc1        $f0, -0x7D24($gp)
    ctx->pc = 0x498504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x498508: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x498508u;
    {
        const bool branch_taken_0x498508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498508u;
        // 0x49850c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498508) {
            ctx->pc = 0x498514u;
            goto label_498514;
        }
    }
    ctx->pc = 0x498510u;
label_498510:
    // 0x498510: 0xc78082e0  lwc1        $f0, -0x7D20($gp)
    ctx->pc = 0x498510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_498514:
    // 0x498514: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x498514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x498518: 0xaf82875c  sw          $v0, -0x78A4($gp)
    ctx->pc = 0x498518u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936412), GPR_U32(ctx, 2));
    // 0x49851c: 0xe460ad30  swc1        $f0, -0x52D0($v1)
    ctx->pc = 0x49851cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x70AD30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70AD30u, _value); } while (0); }
    // 0x498520: 0x3e00008  jr          $ra
    ctx->pc = 0x498520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498520u;
        // 0x498524: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498528u;
label_498528:
    // 0x498528: 0x3e00008  jr          $ra
    ctx->pc = 0x498528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498528u;
        // 0x49852c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498530u;
    // 0x498530: 0xaf83c0a0  sw          $v1, -0x3F60($gp)
    ctx->pc = 0x498530u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951072), GPR_U32(ctx, 3));
    // 0x498534: 0x0  nop
    ctx->pc = 0x498534u;
    // NOP
    // 0x498538: 0xaf85c0a0  sw          $a1, -0x3F60($gp)
    ctx->pc = 0x498538u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951072), GPR_U32(ctx, 5));
    // 0x49853c: 0x0  nop
    ctx->pc = 0x49853cu;
    // NOP
    // 0x498540: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x498540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498544: 0x0  nop
    ctx->pc = 0x498544u;
    // NOP
    // 0x498548: 0x0  nop
    ctx->pc = 0x498548u;
    // NOP
    // 0x49854c: 0x0  nop
    ctx->pc = 0x49854cu;
    // NOP
    ctx->pc = 0x498550u;
}
