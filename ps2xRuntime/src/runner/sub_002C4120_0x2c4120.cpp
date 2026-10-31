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

// Function: sub_002C4120
// Address: 0x2c4120 - 0x2c4170
void sub_002C4120_0x2c4120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4120_0x2c4120");
#endif

    ctx->pc = 0x2c4120u;

    // 0x2c4120: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c4120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c4124: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2c4124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2c4128: 0x24630810  addiu       $v1, $v1, 0x810
    ctx->pc = 0x2c4128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2064));
    // 0x2c412c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c412cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c4130: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2c4130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2c4134: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2c4134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2c4138: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c4138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c413c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2c413cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2c4140: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2c4140u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4144: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2c4144u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4148: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x2c4148u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c414c: 0xac880020  sw          $t0, 0x20($a0)
    ctx->pc = 0x2c414cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 8));
    // 0x2c4150: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x2c4150u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x2c4154: 0xac890024  sw          $t1, 0x24($a0)
    ctx->pc = 0x2c4154u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 9));
    // 0x2c4158: 0xac8a0028  sw          $t2, 0x28($a0)
    ctx->pc = 0x2c4158u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 10));
    // 0x2c415c: 0xac86002c  sw          $a2, 0x2C($a0)
    ctx->pc = 0x2c415cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 6));
    // 0x2c4160: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x2c4160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x2c4164: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x2c4164u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x2c4168: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4168u;
        // 0x2c416c: 0xac800038  sw          $zero, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4170u;
}
