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

// Function: sub_00391828
// Address: 0x391828 - 0x391868
void sub_00391828_0x391828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00391828_0x391828");
#endif

    ctx->pc = 0x391828u;

    // 0x391828: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x391828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39182c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39182cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x391830: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x391830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x391834: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x391834u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391838: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x391838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x39183c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x39183cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x391840: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x391840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x391844: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x391844u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x391848: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x391848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x39184c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x39184cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x391850: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x391850u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x391854: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x391854u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x391858: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x391858u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x39185c: 0x3e00008  jr          $ra
    ctx->pc = 0x39185Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39185Cu;
        // 0x391860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39185Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391864u;
    // 0x391864: 0x0  nop
    ctx->pc = 0x391864u;
    // NOP
    ctx->pc = 0x391868u;
}
