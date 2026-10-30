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

// Function: sub_00228888
// Address: 0x228888 - 0x2288c0
void sub_00228888_0x228888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228888_0x228888");
#endif

    switch (ctx->pc) {
        case 0x2288a0u: goto label_2288a0;
        default: break;
    }

    ctx->pc = 0x228888u;

    // 0x228888: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x228888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x22888c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22888cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x228890: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x228890u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x228894: 0x24426548  addiu       $v0, $v0, 0x6548
    ctx->pc = 0x228894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25928));
    // 0x228898: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x228898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22889c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x22889cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2288a0:
    // 0x2288a0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2288a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2288a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2288a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2288a8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2288a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2288ac: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2288acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2288b0: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2288B0u;
    {
        const bool branch_taken_0x2288b0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2288B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2288B0u;
        // 0x2288b4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2288b0) {
            ctx->pc = 0x2288A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2288a0;
        }
    }
    ctx->pc = 0x2288B8u;
    // 0x2288b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2288B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2288B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2288C0u;
}
