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

// Function: sub_0038FDF0
// Address: 0x38fdf0 - 0x38fe28
void sub_0038FDF0_0x38fdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038FDF0_0x38fdf0");
#endif

    switch (ctx->pc) {
        case 0x38fe08u: goto label_38fe08;
        default: break;
    }

    ctx->pc = 0x38fdf0u;

    // 0x38fdf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38fdf4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x38fdf8: 0xa4431538  sh          $v1, 0x1538($v0)
    ctx->pc = 0x38fdf8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6F1538u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6F1538u, _value); } while (0);
    // 0x38fdfc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x38fdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x38fe00: 0x2484bd38  addiu       $a0, $a0, -0x42C8
    ctx->pc = 0x38fe00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950200));
    // 0x38fe04: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x38fe04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38fe08:
    // 0x38fe08: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x38fe08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x38fe0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38fe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x38fe10: 0x2c620b00  sltiu       $v0, $v1, 0xB00
    ctx->pc = 0x38fe10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2816) ? 1 : 0);
    // 0x38fe14: 0x0  nop
    ctx->pc = 0x38fe14u;
    // NOP
    // 0x38fe18: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x38FE18u;
    {
        const bool branch_taken_0x38fe18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE18u;
        // 0x38fe1c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fe18) {
            ctx->pc = 0x38FE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38fe08;
        }
    }
    ctx->pc = 0x38FE20u;
    // 0x38fe20: 0x3e00008  jr          $ra
    ctx->pc = 0x38FE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38FE28u;
}
