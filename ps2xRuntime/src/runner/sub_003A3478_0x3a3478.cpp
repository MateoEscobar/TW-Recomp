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

// Function: sub_003A3478
// Address: 0x3a3478 - 0x3a34b0
void sub_003A3478_0x3a3478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3478_0x3a3478");
#endif

    ctx->pc = 0x3a3478u;

    // 0x3a3478: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x3a3478u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3a347c: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x3a347cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x3a3480: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3a3480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3a3484: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x3a3484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x3a3488: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x3a3488u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3a348c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3a348cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3a3490: 0xaca20054  sw          $v0, 0x54($a1)
    ctx->pc = 0x3a3490u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 2));
    // 0x3a3494: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x3a3494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3a3498: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3a3498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3a349c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3a349cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a34a0: 0xa4a70062  sh          $a3, 0x62($a1)
    ctx->pc = 0x3a34a0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 98), (uint16_t)GPR_U32(ctx, 7));
    // 0x3a34a4: 0xaca2005c  sw          $v0, 0x5C($a1)
    ctx->pc = 0x3a34a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 2));
    // 0x3a34a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A34A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A34ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A34A8u;
        // 0x3a34ac: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A34A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A34B0u;
}
