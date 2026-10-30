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

// Function: sub_0041AB30
// Address: 0x41ab30 - 0x41ab60
void sub_0041AB30_0x41ab30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041AB30_0x41ab30");
#endif

    ctx->pc = 0x41ab30u;

    // 0x41ab30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41ab34: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x41ab34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x41ab38: 0xa0820220  sb          $v0, 0x220($a0)
    ctx->pc = 0x41ab38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 544), (uint8_t)GPR_U32(ctx, 2));
    // 0x41ab3c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x41ab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x41ab40: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x41ab40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x41ab44: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x41ab44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x41ab48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x41ab48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x41ab4c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41ab50: 0xc46048a0  lwc1        $f0, 0x48A0($v1)
    ctx->pc = 0x41ab50u;
    { uint32_t bits = FAST_READ32(0x5148A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41ab54: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x41ab54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x41ab58: 0x3e00008  jr          $ra
    ctx->pc = 0x41AB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AB58u;
        // 0x41ab5c: 0xe44002cc  swc1        $f0, 0x2CC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 716), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41AB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41AB60u;
}
