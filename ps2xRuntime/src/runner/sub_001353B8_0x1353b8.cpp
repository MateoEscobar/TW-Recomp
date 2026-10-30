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

// Function: sub_001353B8
// Address: 0x1353b8 - 0x1353e0
void sub_001353B8_0x1353b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001353B8_0x1353b8");
#endif

    switch (ctx->pc) {
        case 0x1353d4u: goto label_1353d4;
        default: break;
    }

    ctx->pc = 0x1353b8u;

    // 0x1353b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1353b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1353bc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1353bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1353c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1353c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1353c4: 0xe44c0200  swc1        $f12, 0x200($v0)
    ctx->pc = 0x1353c4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 512), bits); }
    // 0x1353c8: 0xe44d0204  swc1        $f13, 0x204($v0)
    ctx->pc = 0x1353c8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 516), bits); }
    // 0x1353cc: 0xc04d4f8  jal         func_1353E0
    ctx->pc = 0x1353CCu;
    SET_GPR_U32(ctx, 31, 0x1353D4u);
    ctx->pc = 0x1353D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1353CCu;
    // 0x1353d0: 0xe44e0208  swc1        $f14, 0x208($v0) (Delay Slot)
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 520), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1353E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1353E0u, 0x1353CCu, 0x1353D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1353D4u;
label_1353d4:
    // 0x1353d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1353d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1353d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1353D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1353DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1353D8u;
        // 0x1353dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1353D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1353E0u;
}
