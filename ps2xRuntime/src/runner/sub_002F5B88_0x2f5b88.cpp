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

// Function: sub_002F5B88
// Address: 0x2f5b88 - 0x2f5c00
void sub_002F5B88_0x2f5b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5B88_0x2f5b88");
#endif

    ctx->pc = 0x2f5b88u;

    // 0x2f5b88: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f5b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2f5b8c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2f5b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2f5b90: 0x246325b0  addiu       $v1, $v1, 0x25B0
    ctx->pc = 0x2f5b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9648));
    // 0x2f5b94: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f5b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f5b98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f5b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5b9c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2f5b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2f5ba0: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2f5ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2f5ba4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f5ba4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f5ba8: 0xa0860014  sb          $a2, 0x14($a0)
    ctx->pc = 0x2f5ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 6));
    // 0x2f5bac: 0x240700ef  addiu       $a3, $zero, 0xEF
    ctx->pc = 0x2f5bacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 239));
    // 0x2f5bb0: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2f5bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f5bb4: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2f5bb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2f5bb8: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2f5bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f5bbc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2f5bbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5bc0: 0xa0800016  sb          $zero, 0x16($a0)
    ctx->pc = 0x2f5bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 22), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f5bc4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2f5bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2f5bc8: 0x8ca3021c  lw          $v1, 0x21C($a1)
    ctx->pc = 0x2f5bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 540)));
    // 0x2f5bcc: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2f5bccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f5bd0: 0xa0830015  sb          $v1, 0x15($a0)
    ctx->pc = 0x2f5bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 21), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f5bd4: 0xaca0021c  sw          $zero, 0x21C($a1)
    ctx->pc = 0x2f5bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 540), GPR_U32(ctx, 0));
    // 0x2f5bd8: 0x8cc50640  lw          $a1, 0x640($a2)
    ctx->pc = 0x2f5bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1600)));
    // 0x2f5bdc: 0xa3a80000  sb          $t0, 0x0($sp)
    ctx->pc = 0x2f5bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x2f5be0: 0xa3a70003  sb          $a3, 0x3($sp)
    ctx->pc = 0x2f5be0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x2f5be4: 0xa3a70001  sb          $a3, 0x1($sp)
    ctx->pc = 0x2f5be4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x2f5be8: 0xa3a70002  sb          $a3, 0x2($sp)
    ctx->pc = 0x2f5be8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x2f5bec: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x2f5becu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x2f5bf0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2f5bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5bf4: 0xacc30640  sw          $v1, 0x640($a2)
    ctx->pc = 0x2f5bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1600), GPR_U32(ctx, 3));
    // 0x2f5bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5BF8u;
        // 0x2f5bfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5C00u;
}
