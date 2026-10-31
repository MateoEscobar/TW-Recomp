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

// Function: sub_002FE3A8
// Address: 0x2fe3a8 - 0x2fe3d8
void sub_002FE3A8_0x2fe3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE3A8_0x2fe3a8");
#endif

    switch (ctx->pc) {
        case 0x2fe3c8u: goto label_2fe3c8;
        default: break;
    }

    ctx->pc = 0x2fe3a8u;

    // 0x2fe3a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fe3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fe3ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fe3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fe3b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2fe3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fe3b4: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2fe3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe3b8: 0xe4600110  swc1        $f0, 0x110($v1)
    ctx->pc = 0x2fe3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
    // 0x2fe3bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fe3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fe3c0: 0xc090cac  jal         func_2432B0
    ctx->pc = 0x2FE3C0u;
    SET_GPR_U32(ctx, 31, 0x2FE3C8u);
    ctx->pc = 0x2FE3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE3C0u;
    // 0x2fe3c4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2432B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2432B0u, 0x2FE3C0u, 0x2FE3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE3C8u;
label_2fe3c8:
    // 0x2fe3c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fe3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe3cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fe3ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE3D0u;
        // 0x2fe3d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE3D8u;
}
