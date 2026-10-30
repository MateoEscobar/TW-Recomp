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

// Function: sub_00391880
// Address: 0x391880 - 0x3918b8
void sub_00391880_0x391880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00391880_0x391880");
#endif

    ctx->pc = 0x391880u;

    // 0x391880: 0xc4a30018  lwc1        $f3, 0x18($a1)
    ctx->pc = 0x391880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x391884: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x391884u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x391888: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x391888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39188c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x39188cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391890: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x391890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x391894: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x391894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x391898: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x391898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x39189c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x39189cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3918a0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x3918a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3918a4: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x3918a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3918a8: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3918a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3918ac: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3918acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3918b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3918B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3918B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3918B0u;
        // 0x3918b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3918B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3918B8u;
}
