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

// Function: sub_00251680
// Address: 0x251680 - 0x2516d0
void sub_00251680_0x251680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251680_0x251680");
#endif

    switch (ctx->pc) {
        case 0x2516a0u: goto label_2516a0;
        default: break;
    }

    ctx->pc = 0x251680u;

    // 0x251680: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x251680u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251684: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x251684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x251688: 0x18a0000f  blez        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x251688u;
    {
        const bool branch_taken_0x251688 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x25168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251688u;
        // 0x25168c: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251688) {
            ctx->pc = 0x2516C8u;
            goto label_2516c8;
        }
    }
    ctx->pc = 0x251690u;
    // 0x251690: 0x3c08006d  lui         $t0, 0x6D
    ctx->pc = 0x251690u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)109 << 16));
    // 0x251694: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x251694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x251698: 0x473021  addu        $a2, $v0, $a3
    ctx->pc = 0x251698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x25169c: 0x0  nop
    ctx->pc = 0x25169cu;
    // NOP
label_2516a0:
    // 0x2516a0: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x2516a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x2516a4: 0x8d04a21c  lw          $a0, -0x5DE4($t0)
    ctx->pc = 0x2516a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294943260)));
    // 0x2516a8: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x2516a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2516ac: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2516acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2516b0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2516b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2516b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2516b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2516b8: 0x9062001f  lbu         $v0, 0x1F($v1)
    ctx->pc = 0x2516b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 31)));
    // 0x2516bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2516bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2516c0: 0x1ca0fff7  bgtz        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2516C0u;
    {
        const bool branch_taken_0x2516c0 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2516C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2516C0u;
        // 0x2516c4: 0xa062001f  sb          $v0, 0x1F($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 31), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2516c0) {
            ctx->pc = 0x2516A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2516a0;
        }
    }
    ctx->pc = 0x2516C8u;
label_2516c8:
    // 0x2516c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2516C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2516CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2516C8u;
        // 0x2516cc: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2516C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2516D0u;
}
