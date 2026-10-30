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

// Function: sub_003917D8
// Address: 0x3917d8 - 0x391818
void sub_003917D8_0x3917d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003917D8_0x3917d8");
#endif

    ctx->pc = 0x3917d8u;

    // 0x3917d8: 0xc4a20024  lwc1        $f2, 0x24($a1)
    ctx->pc = 0x3917d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3917dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3917dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3917e0: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x3917e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3917e4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3917e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3917e8: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x3917e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3917ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3917ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3917f0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3917f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3917f4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3917f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3917f8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3917f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3917fc: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x3917fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x391800: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x391800u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x391804: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x391804u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x391808: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x391808u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x39180c: 0x3e00008  jr          $ra
    ctx->pc = 0x39180Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39180Cu;
        // 0x391810: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39180Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391814u;
    // 0x391814: 0x0  nop
    ctx->pc = 0x391814u;
    // NOP
    ctx->pc = 0x391818u;
}
