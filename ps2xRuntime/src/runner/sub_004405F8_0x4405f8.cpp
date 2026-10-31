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

// Function: sub_004405F8
// Address: 0x4405f8 - 0x440648
void sub_004405F8_0x4405f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004405F8_0x4405f8");
#endif

    switch (ctx->pc) {
        case 0x440608u: goto label_440608;
        case 0x440618u: goto label_440618;
        default: break;
    }

    ctx->pc = 0x4405f8u;

    // 0x4405f8: 0x8ca50028  lw          $a1, 0x28($a1)
    ctx->pc = 0x4405f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x4405fc: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x4405FCu;
    {
        const bool branch_taken_0x4405fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4405fc) {
            ctx->pc = 0x44063Cu;
            goto label_44063c;
        }
    }
    ctx->pc = 0x440604u;
    // 0x440604: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x440604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_440608:
    // 0x440608: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x440608u;
    {
        const bool branch_taken_0x440608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x440608) {
            ctx->pc = 0x44060Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x440608u;
            // 0x44060c: 0x8ca50014  lw          $a1, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x440634u;
            goto label_440634;
        }
    }
    ctx->pc = 0x440610u;
    // 0x440610: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x440610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x440614: 0x0  nop
    ctx->pc = 0x440614u;
    // NOP
label_440618:
    // 0x440618: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x440618u;
    {
        const bool branch_taken_0x440618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x440618) {
            ctx->pc = 0x44061Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x440618u;
            // 0x44061c: 0x8c630038  lw          $v1, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x440628u;
            goto label_440628;
        }
    }
    ctx->pc = 0x440620u;
    // 0x440620: 0x3e00008  jr          $ra
    ctx->pc = 0x440620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x440624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440620u;
        // 0x440624: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x440620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x440628u;
label_440628:
    // 0x440628: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x440628u;
    {
        const bool branch_taken_0x440628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x440628) {
            ctx->pc = 0x44062Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x440628u;
            // 0x44062c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x440618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_440618;
        }
    }
    ctx->pc = 0x440630u;
    // 0x440630: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x440630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_440634:
    // 0x440634: 0x54a0fff4  bnel        $a1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x440634u;
    {
        const bool branch_taken_0x440634 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x440634) {
            ctx->pc = 0x440638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x440634u;
            // 0x440638: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x440608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_440608;
        }
    }
    ctx->pc = 0x44063Cu;
label_44063c:
    // 0x44063c: 0x3e00008  jr          $ra
    ctx->pc = 0x44063Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x440640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44063Cu;
        // 0x440640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44063Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x440644u;
    // 0x440644: 0x0  nop
    ctx->pc = 0x440644u;
    // NOP
    ctx->pc = 0x440648u;
}
