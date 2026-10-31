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

// Function: sub_002F8CE0
// Address: 0x2f8ce0 - 0x2f8d28
void sub_002F8CE0_0x2f8ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8CE0_0x2f8ce0");
#endif

    ctx->pc = 0x2f8ce0u;

    // 0x2f8ce0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f8ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f8ce4: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x2f8ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x2f8ce8: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2f8ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2f8cec: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2f8cecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f8cf0: 0xdca200e0  ld          $v0, 0xE0($a1)
    ctx->pc = 0x2f8cf0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 224)));
    // 0x2f8cf4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2f8cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2f8cf8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f8cf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f8cfc: 0xa0820028  sb          $v0, 0x28($a0)
    ctx->pc = 0x2f8cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f8d00: 0x90a300e0  lbu         $v1, 0xE0($a1)
    ctx->pc = 0x2f8d00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 224)));
    // 0x2f8d04: 0x31e78  dsll        $v1, $v1, 25
    ctx->pc = 0x2f8d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 25);
    // 0x2f8d08: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2f8d08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2f8d0c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2f8d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2f8d10: 0xa0830029  sb          $v1, 0x29($a0)
    ctx->pc = 0x2f8d10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f8d14: 0xdca200e0  ld          $v0, 0xE0($a1)
    ctx->pc = 0x2f8d14u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 224)));
    // 0x2f8d18: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2f8d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2f8d1c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2f8d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2f8d20: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8D20u;
        // 0x2f8d24: 0xfca200e0  sd          $v0, 0xE0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8D28u;
}
