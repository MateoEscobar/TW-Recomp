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

// Function: sub_00169608
// Address: 0x169608 - 0x169630
void sub_00169608_0x169608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169608_0x169608");
#endif

    ctx->pc = 0x169608u;

    // 0x169608: 0x9082060c  lbu         $v0, 0x60C($a0)
    ctx->pc = 0x169608u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1548)));
    // 0x16960c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16960cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x169610: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x169610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x169614: 0xa3282b  sltu        $a1, $a1, $v1
    ctx->pc = 0x169614u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x169618: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x169618u;
    {
        const bool branch_taken_0x169618 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169618u;
        // 0x16961c: 0xa082060c  sb          $v0, 0x60C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1548), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169618) {
            ctx->pc = 0x169628u;
            goto label_169628;
        }
    }
    ctx->pc = 0x169620u;
    // 0x169620: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x169620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169624: 0xa082060c  sb          $v0, 0x60C($a0)
    ctx->pc = 0x169624u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1548), (uint8_t)GPR_U32(ctx, 2));
label_169628:
    // 0x169628: 0x3e00008  jr          $ra
    ctx->pc = 0x169628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169630u;
}
