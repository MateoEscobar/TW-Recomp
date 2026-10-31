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

// Function: sub_003967A8
// Address: 0x3967a8 - 0x3967e0
void sub_003967A8_0x3967a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003967A8_0x3967a8");
#endif

    ctx->pc = 0x3967a8u;

    // 0x3967a8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3967a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x3967ac: 0x41142  srl         $v0, $a0, 5
    ctx->pc = 0x3967acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x3967b0: 0x8c662c7c  lw          $a2, 0x2C7C($v1)
    ctx->pc = 0x3967b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
    // 0x3967b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3967b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3967b8: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x3967b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x3967bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3967bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3967c0: 0x8cc30840  lw          $v1, 0x840($a2)
    ctx->pc = 0x3967c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2112)));
    // 0x3967c4: 0x852804  sllv        $a1, $a1, $a0
    ctx->pc = 0x3967c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x3967c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3967c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3967cc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3967ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x3967d0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x3967d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x3967d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3967D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3967D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3967D4u;
        // 0x3967d8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3967D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3967DCu;
    // 0x3967dc: 0x0  nop
    ctx->pc = 0x3967dcu;
    // NOP
    ctx->pc = 0x3967e0u;
}
