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

// Function: sub_002C4FB0
// Address: 0x2c4fb0 - 0x2c5008
void sub_002C4FB0_0x2c4fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4FB0_0x2c4fb0");
#endif

    ctx->pc = 0x2c4fb0u;

    // 0x2c4fb0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c4fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c4fb4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2c4fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2c4fb8: 0x24630750  addiu       $v1, $v1, 0x750
    ctx->pc = 0x2c4fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1872));
    // 0x2c4fbc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c4fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c4fc0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2c4fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2c4fc4: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x2c4fc4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
    // 0x2c4fc8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2c4fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2c4fcc: 0x252916c0  addiu       $t1, $t1, 0x16C0
    ctx->pc = 0x2c4fccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5824));
    // 0x2c4fd0: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2c4fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2c4fd4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c4fd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4fd8: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2c4fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4fdc: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2c4fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4fe0: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2c4fe0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c4fe4: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x2c4fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x2c4fe8: 0x79250000  lq          $a1, 0x0($t1)
    ctx->pc = 0x2c4fe8u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x5116C0u));
    // 0x2c4fec: 0xac870030  sw          $a3, 0x30($a0)
    ctx->pc = 0x2c4fecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 7));
    // 0x2c4ff0: 0x7c850020  sq          $a1, 0x20($a0)
    ctx->pc = 0x2c4ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 5));
    // 0x2c4ff4: 0xac880034  sw          $t0, 0x34($a0)
    ctx->pc = 0x2c4ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 8));
    // 0x2c4ff8: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x2c4ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x2c4ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4FFCu;
        // 0x2c5000: 0xac80003c  sw          $zero, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5004u;
    // 0x2c5004: 0x0  nop
    ctx->pc = 0x2c5004u;
    // NOP
    ctx->pc = 0x2c5008u;
}
