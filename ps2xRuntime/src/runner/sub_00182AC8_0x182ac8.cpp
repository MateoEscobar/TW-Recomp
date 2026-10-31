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

// Function: sub_00182AC8
// Address: 0x182ac8 - 0x182b20
void sub_00182AC8_0x182ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182AC8_0x182ac8");
#endif

    switch (ctx->pc) {
        case 0x182b00u: goto label_182b00;
        default: break;
    }

    ctx->pc = 0x182ac8u;

    // 0x182ac8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182acc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x182accu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x182ad0: 0xa0820010  sb          $v0, 0x10($a0)
    ctx->pc = 0x182ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x182ad4: 0x24830048  addiu       $v1, $a0, 0x48
    ctx->pc = 0x182ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x182ad8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x182ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x182adc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x182adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ae0: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x182ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x182ae4: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x182ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x182ae8: 0xa0800011  sb          $zero, 0x11($a0)
    ctx->pc = 0x182ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x182aec: 0xa0800040  sb          $zero, 0x40($a0)
    ctx->pc = 0x182aecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x182af0: 0xa0800013  sb          $zero, 0x13($a0)
    ctx->pc = 0x182af0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x182af4: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x182af4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x182af8: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x182af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x182afc: 0x0  nop
    ctx->pc = 0x182afcu;
    // NOP
label_182b00:
    // 0x182b00: 0xac60fffc  sw          $zero, -0x4($v1)
    ctx->pc = 0x182b00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 0));
    // 0x182b04: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x182b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x182b08: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x182b08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x182b0c: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x182b0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x182b10: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x182B10u;
    {
        const bool branch_taken_0x182b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B10u;
        // 0x182b14: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b10) {
            ctx->pc = 0x182B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182b00;
        }
    }
    ctx->pc = 0x182B18u;
    // 0x182b18: 0x3e00008  jr          $ra
    ctx->pc = 0x182B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182B20u;
}
