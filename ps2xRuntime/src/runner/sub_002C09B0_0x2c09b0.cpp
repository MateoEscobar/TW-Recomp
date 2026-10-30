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

// Function: sub_002C09B0
// Address: 0x2c09b0 - 0x2c0a10
void sub_002C09B0_0x2c09b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C09B0_0x2c09b0");
#endif

    ctx->pc = 0x2c09b0u;

    // 0x2c09b0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c09b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c09b4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2c09b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2c09b8: 0x24630bd0  addiu       $v1, $v1, 0xBD0
    ctx->pc = 0x2c09b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3024));
    // 0x2c09bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c09bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c09c0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2c09c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2c09c4: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x2c09c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c09c8: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2c09c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2c09cc: 0x240a0005  addiu       $t2, $zero, 0x5
    ctx->pc = 0x2c09ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c09d0: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x2c09d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x2c09d4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c09d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c09d8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2c09d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2c09dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c09dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c09e0: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2c09e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c09e4: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2c09e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c09e8: 0xa4800034  sh          $zero, 0x34($a0)
    ctx->pc = 0x2c09e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c09ec: 0xaca9021c  sw          $t1, 0x21C($a1)
    ctx->pc = 0x2c09ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 540), GPR_U32(ctx, 9));
    // 0x2c09f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c09f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c09f4: 0xac6a0220  sw          $t2, 0x220($v1)
    ctx->pc = 0x2c09f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 544), GPR_U32(ctx, 10));
    // 0x2c09f8: 0xa4870036  sh          $a3, 0x36($a0)
    ctx->pc = 0x2c09f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 54), (uint16_t)GPR_U32(ctx, 7));
    // 0x2c09fc: 0xa4880038  sh          $t0, 0x38($a0)
    ctx->pc = 0x2c09fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 56), (uint16_t)GPR_U32(ctx, 8));
    // 0x2c0a00: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2c0a00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x2c0a04: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A04u;
        // 0x2c0a08: 0xa0a6028d  sb          $a2, 0x28D($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 653), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0A0Cu;
    // 0x2c0a0c: 0x0  nop
    ctx->pc = 0x2c0a0cu;
    // NOP
    ctx->pc = 0x2c0a10u;
}
