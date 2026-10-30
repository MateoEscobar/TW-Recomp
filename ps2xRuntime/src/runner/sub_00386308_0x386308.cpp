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

// Function: sub_00386308
// Address: 0x386308 - 0x386340
void sub_00386308_0x386308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386308_0x386308");
#endif

    switch (ctx->pc) {
        case 0x386330u: goto label_386330;
        default: break;
    }

    ctx->pc = 0x386308u;

    // 0x386308: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x386308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38630c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x38630cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x386310: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x386310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x386314: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x386314u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386318: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x386318u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x38631c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38631cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386320: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x386320u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386324: 0x8c640840  lw          $a0, 0x840($v1)
    ctx->pc = 0x386324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    // 0x386328: 0xc0e69f8  jal         func_39A7E0
    ctx->pc = 0x386328u;
    SET_GPR_U32(ctx, 31, 0x386330u);
    ctx->pc = 0x38632Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386328u;
    // 0x38632c: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A7E0u, 0x386328u, 0x386330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386330u;
label_386330:
    // 0x386330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x386330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x386334: 0x3e00008  jr          $ra
    ctx->pc = 0x386334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386334u;
        // 0x386338: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38633Cu;
    // 0x38633c: 0x0  nop
    ctx->pc = 0x38633cu;
    // NOP
    ctx->pc = 0x386340u;
}
