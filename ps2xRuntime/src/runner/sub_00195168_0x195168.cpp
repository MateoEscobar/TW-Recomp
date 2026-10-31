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

// Function: sub_00195168
// Address: 0x195168 - 0x1951c0
void sub_00195168_0x195168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195168_0x195168");
#endif

    ctx->pc = 0x195168u;

    // 0x195168: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x195168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19516c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19516cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195170: 0x0  nop
    ctx->pc = 0x195170u;
    // NOP
    // 0x195174: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x195174u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195178: 0x0  nop
    ctx->pc = 0x195178u;
    // NOP
    // 0x19517c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x19517Cu;
    {
        const bool branch_taken_0x19517c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19517c) {
            ctx->pc = 0x195190u;
            goto label_195190;
        }
    }
    ctx->pc = 0x195184u;
    // 0x195184: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x195184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x195188: 0x3421fffe  ori         $at, $at, 0xFFFE
    ctx->pc = 0x195188u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65534);
    // 0x19518c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19518cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_195190:
    // 0x195190: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x195190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195194: 0x0  nop
    ctx->pc = 0x195194u;
    // NOP
    // 0x195198: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x195198u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19519c: 0x0  nop
    ctx->pc = 0x19519cu;
    // NOP
    // 0x1951a0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1951A0u;
    {
        const bool branch_taken_0x1951a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1951a0) {
            ctx->pc = 0x1951B4u;
            goto label_1951b4;
        }
    }
    ctx->pc = 0x1951A8u;
    // 0x1951a8: 0x3c0133d6  lui         $at, 0x33D6
    ctx->pc = 0x1951a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13270 << 16));
    // 0x1951ac: 0x3421bf95  ori         $at, $at, 0xBF95
    ctx->pc = 0x1951acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49045);
    // 0x1951b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1951b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1951b4:
    // 0x1951b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1951B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1951B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951B4u;
        // 0x1951b8: 0xe48c0444  swc1        $f12, 0x444($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1092), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1951B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1951BCu;
    // 0x1951bc: 0x0  nop
    ctx->pc = 0x1951bcu;
    // NOP
    ctx->pc = 0x1951c0u;
}
