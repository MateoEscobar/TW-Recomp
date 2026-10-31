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

// Function: sub_001AA630
// Address: 0x1aa630 - 0x1aa678
void sub_001AA630_0x1aa630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA630_0x1aa630");
#endif

    ctx->pc = 0x1aa630u;

    // 0x1aa630: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1aa630u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1aa634: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aa634u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa638: 0x3c01be9e  lui         $at, 0xBE9E
    ctx->pc = 0x1aa638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48798 << 16));
    // 0x1aa63c: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1aa63cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x1aa640: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1aa640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa644: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1aa644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1aa648: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1aa648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1aa64c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x1aa64cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa650: 0x70032ca9  por         $a1, $zero, $v1
    ctx->pc = 0x1aa650u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1aa654: 0x700334a9  por         $a2, $zero, $v1
    ctx->pc = 0x1aa654u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1aa658: 0x700314a9  por         $v0, $zero, $v1
    ctx->pc = 0x1aa658u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1aa65c: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x1aa65cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x1aa660: 0x7c820350  sq          $v0, 0x350($a0)
    ctx->pc = 0x1aa660u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 848), GPR_VEC(ctx, 2));
    // 0x1aa664: 0x7c850130  sq          $a1, 0x130($a0)
    ctx->pc = 0x1aa664u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 304), GPR_VEC(ctx, 5));
    // 0x1aa668: 0x7c860240  sq          $a2, 0x240($a0)
    ctx->pc = 0x1aa668u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 576), GPR_VEC(ctx, 6));
    // 0x1aa66c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA66Cu;
        // 0x1aa670: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA674u;
    // 0x1aa674: 0x0  nop
    ctx->pc = 0x1aa674u;
    // NOP
    ctx->pc = 0x1aa678u;
}
