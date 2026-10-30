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

// Function: sub_004136F0
// Address: 0x4136f0 - 0x413728
void sub_004136F0_0x4136f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004136F0_0x4136f0");
#endif

    switch (ctx->pc) {
        case 0x413708u: goto label_413708;
        default: break;
    }

    ctx->pc = 0x4136f0u;

    // 0x4136f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4136f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4136f4: 0x24423a10  addiu       $v0, $v0, 0x3A10
    ctx->pc = 0x4136f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14864));
    // 0x4136f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4136f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4136fc: 0x24640540  addiu       $a0, $v1, 0x540
    ctx->pc = 0x4136fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1344));
    // 0x413700: 0xa0600148  sb          $zero, 0x148($v1)
    ctx->pc = 0x413700u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6F3B58u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6F3B58u, _value); } while (0);
    // 0x413704: 0x0  nop
    ctx->pc = 0x413704u;
    // NOP
label_413708:
    // 0x413708: 0x24630150  addiu       $v1, $v1, 0x150
    ctx->pc = 0x413708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
    // 0x41370c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x41370cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x413710: 0x0  nop
    ctx->pc = 0x413710u;
    // NOP
    // 0x413714: 0x0  nop
    ctx->pc = 0x413714u;
    // NOP
    // 0x413718: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x413718u;
    {
        const bool branch_taken_0x413718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x413718) {
            ctx->pc = 0x41371Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x413718u;
            // 0x41371c: 0xa0600148  sb          $zero, 0x148($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 328), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x413708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_413708;
        }
    }
    ctx->pc = 0x413720u;
    // 0x413720: 0x3e00008  jr          $ra
    ctx->pc = 0x413720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x413728u;
}
