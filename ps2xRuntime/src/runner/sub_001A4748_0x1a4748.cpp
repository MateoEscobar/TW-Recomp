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

// Function: sub_001A4748
// Address: 0x1a4748 - 0x1a4770
void sub_001A4748_0x1a4748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4748_0x1a4748");
#endif

    switch (ctx->pc) {
        case 0x1a4764u: goto label_1a4764;
        default: break;
    }

    ctx->pc = 0x1a4748u;

    // 0x1a4748: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a474c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a474cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a4750: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a4750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a4754: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1a4754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4758: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a4758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a475c: 0xc06e424  jal         func_1B9090
    ctx->pc = 0x1A475Cu;
    SET_GPR_U32(ctx, 31, 0x1A4764u);
    ctx->pc = 0x1A4760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A475Cu;
    // 0x1a4760: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x1A475Cu, 0x1A4764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4764u;
label_1a4764:
    // 0x1a4764: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4768: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4768u;
        // 0x1a476c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4770u;
}
