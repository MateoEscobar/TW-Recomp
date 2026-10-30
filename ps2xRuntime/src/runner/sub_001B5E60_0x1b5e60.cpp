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

// Function: sub_001B5E60
// Address: 0x1b5e60 - 0x1b5e90
void sub_001B5E60_0x1b5e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5E60_0x1b5e60");
#endif

    switch (ctx->pc) {
        case 0x1b5e68u: goto label_1b5e68;
        default: break;
    }

    ctx->pc = 0x1b5e60u;

    // 0x1b5e60: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B5E60u;
    {
        const bool branch_taken_0x1b5e60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E60u;
        // 0x1b5e64: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5e60) {
            ctx->pc = 0x1B5E88u;
            goto label_1b5e88;
        }
    }
    ctx->pc = 0x1B5E68u;
label_1b5e68:
    // 0x1b5e68: 0xe4cc0000  swc1        $f12, 0x0($a2)
    ctx->pc = 0x1b5e68u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1b5e6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b5e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b5e70: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1b5e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1b5e74: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1b5e74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1b5e78: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1b5e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5e7c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1b5e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1b5e80: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B5E80u;
    {
        const bool branch_taken_0x1b5e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E80u;
        // 0x1b5e84: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5e80) {
            ctx->pc = 0x1B5E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5e68;
        }
    }
    ctx->pc = 0x1B5E88u;
label_1b5e88:
    // 0x1b5e88: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5E90u;
}
