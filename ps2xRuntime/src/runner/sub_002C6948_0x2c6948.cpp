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

// Function: sub_002C6948
// Address: 0x2c6948 - 0x2c6990
void sub_002C6948_0x2c6948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6948_0x2c6948");
#endif

    ctx->pc = 0x2c6948u;

    // 0x2c6948: 0x78c80000  lq          $t0, 0x0($a2)
    ctx->pc = 0x2c6948u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c694c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2c694cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2c6950: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x2c6950u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
    // 0x2c6954: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2c6954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2c6958: 0x24c60630  addiu       $a2, $a2, 0x630
    ctx->pc = 0x2c6958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1584));
    // 0x2c695c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c695cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c6960: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2c6960u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2c6964: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c6964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6968: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x2c6968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x2c696c: 0x7c880010  sq          $t0, 0x10($a0)
    ctx->pc = 0x2c696cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 8));
    // 0x2c6970: 0xac870020  sw          $a3, 0x20($a0)
    ctx->pc = 0x2c6970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
    // 0x2c6974: 0x7fa80000  sq          $t0, 0x0($sp)
    ctx->pc = 0x2c6974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 8));
    // 0x2c6978: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2c6978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2c697c: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2c697cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6980: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2c6980u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6984: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2c6984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2c6988: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C698Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6988u;
        // 0x2c698c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6990u;
}
