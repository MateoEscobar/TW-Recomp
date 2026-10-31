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

// Function: sub_0017F218
// Address: 0x17f218 - 0x17f260
void sub_0017F218_0x17f218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F218_0x17f218");
#endif

    ctx->pc = 0x17f218u;

    // 0x17f218: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x17f218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x17f21c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x17f21cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x17f220: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17f220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f224: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17f224u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17f228: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x17f228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x17f22c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x17f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x17f230: 0x46007380  add.s       $f14, $f14, $f0
    ctx->pc = 0x17f230u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
    // 0x17f234: 0x8c43cce4  lw          $v1, -0x331C($v0)
    ctx->pc = 0x17f234u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CCE4u));
    // 0x17f238: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x17f238u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x17f23c: 0x46006b40  add.s       $f13, $f13, $f0
    ctx->pc = 0x17f23cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x17f240: 0xe7ae0008  swc1        $f14, 0x8($sp)
    ctx->pc = 0x17f240u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x17f244: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x17f244u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17f248: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x17f248u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x17f24c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x17f24cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f250: 0x7c620050  sq          $v0, 0x50($v1)
    ctx->pc = 0x17f250u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), GPR_VEC(ctx, 2));
    // 0x17f254: 0x3e00008  jr          $ra
    ctx->pc = 0x17F254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F254u;
        // 0x17f258: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F25Cu;
    // 0x17f25c: 0x0  nop
    ctx->pc = 0x17f25cu;
    // NOP
    ctx->pc = 0x17f260u;
}
