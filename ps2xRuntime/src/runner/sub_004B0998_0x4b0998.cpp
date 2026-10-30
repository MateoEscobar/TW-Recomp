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

// Function: sub_004B0998
// Address: 0x4b0998 - 0x4b09d0
void sub_004B0998_0x4b0998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B0998_0x4b0998");
#endif

    ctx->pc = 0x4b0998u;

    // 0x4b0998: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x4b0998u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4b099c: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x4b099cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x4b09a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b09a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b09a4: 0xac86002c  sw          $a2, 0x2C($a0)
    ctx->pc = 0x4b09a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 6));
    // 0x4b09a8: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x4b09a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4b09ac: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x4b09acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x4b09b0: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x4b09b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x4b09b4: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x4b09b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x4b09b8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4b09b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4b09bc: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x4b09bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x4b09c0: 0xac860024  sw          $a2, 0x24($a0)
    ctx->pc = 0x4b09c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 6));
    // 0x4b09c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4B09C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B09C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B09C4u;
        // 0x4b09c8: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B09C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B09CCu;
    // 0x4b09cc: 0x0  nop
    ctx->pc = 0x4b09ccu;
    // NOP
    ctx->pc = 0x4b09d0u;
}
