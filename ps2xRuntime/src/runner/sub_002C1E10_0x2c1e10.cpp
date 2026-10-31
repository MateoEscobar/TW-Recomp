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

// Function: sub_002C1E10
// Address: 0x2c1e10 - 0x2c1e80
void sub_002C1E10_0x2c1e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1E10_0x2c1e10");
#endif

    ctx->pc = 0x2c1e10u;

    // 0x2c1e10: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c1e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c1e14: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2c1e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2c1e18: 0x24630930  addiu       $v1, $v1, 0x930
    ctx->pc = 0x2c1e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2352));
    // 0x2c1e1c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c1e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c1e20: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2c1e20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2c1e24: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x2c1e24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x2c1e28: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2c1e28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2c1e2c: 0x250816c0  addiu       $t0, $t0, 0x16C0
    ctx->pc = 0x2c1e2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5824));
    // 0x2c1e30: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2c1e30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2c1e34: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x2c1e34u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
    // 0x2c1e38: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2c1e38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c1e3c: 0x24092710  addiu       $t1, $zero, 0x2710
    ctx->pc = 0x2c1e3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2c1e40: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2c1e40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c1e44: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c1e44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1e48: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x2c1e48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c1e4c: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x2c1e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x2c1e50: 0x79050000  lq          $a1, 0x0($t0)
    ctx->pc = 0x2c1e50u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x5116C0u));
    // 0x2c1e54: 0xac860030  sw          $a2, 0x30($a0)
    ctx->pc = 0x2c1e54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 6));
    // 0x2c1e58: 0x7c850020  sq          $a1, 0x20($a0)
    ctx->pc = 0x2c1e58u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 5));
    // 0x2c1e5c: 0x8d43bd30  lw          $v1, -0x42D0($t2)
    ctx->pc = 0x2c1e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2c1e60: 0xac890040  sw          $t1, 0x40($a0)
    ctx->pc = 0x2c1e60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 9));
    // 0x2c1e64: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x2c1e64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
    // 0x2c1e68: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x2c1e68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x2c1e6c: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2c1e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x2c1e70: 0xa4800044  sh          $zero, 0x44($a0)
    ctx->pc = 0x2c1e70u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c1e74: 0xa0800046  sb          $zero, 0x46($a0)
    ctx->pc = 0x2c1e74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c1e78: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1E78u;
        // 0x2c1e7c: 0xa0800047  sb          $zero, 0x47($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 71), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1E80u;
}
