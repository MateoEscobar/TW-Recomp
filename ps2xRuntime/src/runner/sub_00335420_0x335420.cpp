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

// Function: sub_00335420
// Address: 0x335420 - 0x335460
void sub_00335420_0x335420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335420_0x335420");
#endif

    switch (ctx->pc) {
        case 0x33543cu: goto label_33543c;
        default: break;
    }

    ctx->pc = 0x335420u;

    // 0x335420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x335420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x335424: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x335424u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x335428: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x335428u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x33542c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x33542cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x335430: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x335430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x335434: 0xc0cd538  jal         func_3354E0
    ctx->pc = 0x335434u;
    SET_GPR_U32(ctx, 31, 0x33543Cu);
    ctx->pc = 0x335438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335434u;
    // 0x335438: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3354E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3354E0u, 0x335434u, 0x33543Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33543Cu;
label_33543c:
    // 0x33543c: 0x4614ad41  sub.s       $f21, $f21, $f20
    ctx->pc = 0x33543cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x335440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x335440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335444: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x335444u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x335448: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x335448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x33544c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x33544cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x335450: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x335450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x335454: 0x3e00008  jr          $ra
    ctx->pc = 0x335454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335454u;
        // 0x335458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33545Cu;
    // 0x33545c: 0x0  nop
    ctx->pc = 0x33545cu;
    // NOP
    ctx->pc = 0x335460u;
}
