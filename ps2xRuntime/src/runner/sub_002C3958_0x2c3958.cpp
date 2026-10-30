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

// Function: sub_002C3958
// Address: 0x2c3958 - 0x2c39b8
void sub_002C3958_0x2c3958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3958_0x2c3958");
#endif

    ctx->pc = 0x2c3958u;

    // 0x2c3958: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c3958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c395c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2c395cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2c3960: 0x24630870  addiu       $v1, $v1, 0x870
    ctx->pc = 0x2c3960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2160));
    // 0x2c3964: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c3964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c3968: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2c3968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2c396c: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x2c396cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x2c3970: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2c3970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2c3974: 0x24e716c0  addiu       $a3, $a3, 0x16C0
    ctx->pc = 0x2c3974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5824));
    // 0x2c3978: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2c3978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2c397c: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x2c397cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x2c3980: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2c3980u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c3984: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2c3984u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c3988: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2c3988u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c398c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c398cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3990: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2c3990u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c3994: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x2c3994u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x2c3998: 0x78e50000  lq          $a1, 0x0($a3)
    ctx->pc = 0x2c3998u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x5116C0u));
    // 0x2c399c: 0x7c850020  sq          $a1, 0x20($a0)
    ctx->pc = 0x2c399cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 5));
    // 0x2c39a0: 0x8d23bd30  lw          $v1, -0x42D0($t1)
    ctx->pc = 0x2c39a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2c39a4: 0xac880034  sw          $t0, 0x34($a0)
    ctx->pc = 0x2c39a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 8));
    // 0x2c39a8: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x2c39a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x2c39ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2C39ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C39B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39ACu;
        // 0x2c39b0: 0xac800038  sw          $zero, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C39ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C39B4u;
    // 0x2c39b4: 0x0  nop
    ctx->pc = 0x2c39b4u;
    // NOP
    ctx->pc = 0x2c39b8u;
}
