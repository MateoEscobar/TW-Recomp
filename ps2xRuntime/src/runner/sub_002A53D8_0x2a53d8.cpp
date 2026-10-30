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

// Function: sub_002A53D8
// Address: 0x2a53d8 - 0x2a5430
void sub_002A53D8_0x2a53d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A53D8_0x2a53d8");
#endif

    ctx->pc = 0x2a53d8u;

    // 0x2a53d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2a53d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2a53dc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2a53dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2a53e0: 0x2463fa30  addiu       $v1, $v1, -0x5D0
    ctx->pc = 0x2a53e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965808));
    // 0x2a53e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a53e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a53e8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2a53e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2a53ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a53ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a53f0: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2a53f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2a53f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2a53f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a53f8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2a53f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2a53fc: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x2a53fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x2a5400: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2a5400u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a5404: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2a5404u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a5408: 0xa4800026  sh          $zero, 0x26($a0)
    ctx->pc = 0x2a5408u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a540c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x2a540cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x2a5410: 0xa4800024  sh          $zero, 0x24($a0)
    ctx->pc = 0x2a5410u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a5414: 0xa4800028  sh          $zero, 0x28($a0)
    ctx->pc = 0x2a5414u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a5418: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x2a5418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x2a541c: 0xa480002a  sh          $zero, 0x2A($a0)
    ctx->pc = 0x2a541cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a5420: 0xaca0021c  sw          $zero, 0x21C($a1)
    ctx->pc = 0x2a5420u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 540), GPR_U32(ctx, 0));
    // 0x2a5424: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a5424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a5428: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5428u;
        // 0x2a542c: 0xac670220  sw          $a3, 0x220($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 544), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5430u;
}
