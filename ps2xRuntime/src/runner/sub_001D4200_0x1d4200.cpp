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

// Function: sub_001D4200
// Address: 0x1d4200 - 0x1d4230
void sub_001D4200_0x1d4200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4200_0x1d4200");
#endif

    switch (ctx->pc) {
        case 0x1d421cu: goto label_1d421c;
        default: break;
    }

    ctx->pc = 0x1d4200u;

    // 0x1d4200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d4200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d4204: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d4204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d4208: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d4208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d420c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d420cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d4210: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d4210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d4214: 0xc06ba26  jal         func_1AE898
    ctx->pc = 0x1D4214u;
    SET_GPR_U32(ctx, 31, 0x1D421Cu);
    ctx->pc = 0x1D4218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4214u;
    // 0x1d4218: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE898u, 0x1D4214u, 0x1D421Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D421Cu;
label_1d421c:
    // 0x1d421c: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1d421cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x1d4220: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d4220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4224: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d4224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4228: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4228u;
        // 0x1d422c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4230u;
}
