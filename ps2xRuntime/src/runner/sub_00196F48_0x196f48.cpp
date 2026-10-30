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

// Function: sub_00196F48
// Address: 0x196f48 - 0x196f90
void sub_00196F48_0x196f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196F48_0x196f48");
#endif

    ctx->pc = 0x196f48u;

    // 0x196f48: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x196f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x196f4c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196f4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x196f50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x196f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x196f54: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x196f54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x196f58: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x196f58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196f5c: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x196f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x196f60: 0xc4c20040  lwc1        $f2, 0x40($a2)
    ctx->pc = 0x196f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x196f64: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x196f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196f68: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x196f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196f6c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x196f6cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x196f70: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x196f70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x196f74: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x196f74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x196f78: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x196f78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x196f7c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x196f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x196f80: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x196f80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196f84: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x196f84u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x196f88: 0x3e00008  jr          $ra
    ctx->pc = 0x196F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196F88u;
        // 0x196f8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196F90u;
}
