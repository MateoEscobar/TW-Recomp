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

// Function: sub_002F61A8
// Address: 0x2f61a8 - 0x2f61e0
void sub_002F61A8_0x2f61a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F61A8_0x2f61a8");
#endif

    ctx->pc = 0x2f61a8u;

    // 0x2f61a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f61a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f61ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f61acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f61b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f61b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f61b4: 0x3c013ff5  lui         $at, 0x3FF5
    ctx->pc = 0x2f61b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16373 << 16));
    // 0x2f61b8: 0x3421be0c  ori         $at, $at, 0xBE0C
    ctx->pc = 0x2f61b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48652);
    // 0x2f61bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f61bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f61c0: 0xac600208  sw          $zero, 0x208($v1)
    ctx->pc = 0x2f61c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 520), GPR_U32(ctx, 0));
    // 0x2f61c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f61c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f61c8: 0xac45021c  sw          $a1, 0x21C($v0)
    ctx->pc = 0x2f61c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 5));
    // 0x2f61cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f61ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f61d0: 0xa0660265  sb          $a2, 0x265($v1)
    ctx->pc = 0x2f61d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 613), (uint8_t)GPR_U32(ctx, 6));
    // 0x2f61d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f61d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f61d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F61D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F61DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F61D8u;
        // 0x2f61dc: 0xe440012c  swc1        $f0, 0x12C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F61D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F61E0u;
}
