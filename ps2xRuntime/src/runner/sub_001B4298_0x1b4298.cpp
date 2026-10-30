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

// Function: sub_001B4298
// Address: 0x1b4298 - 0x1b42d8
void sub_001B4298_0x1b4298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4298_0x1b4298");
#endif

    switch (ctx->pc) {
        case 0x1b42c0u: goto label_1b42c0;
        default: break;
    }

    ctx->pc = 0x1b4298u;

    // 0x1b4298: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b4298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b429c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b429cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b42a0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1b42a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b42a4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1b42a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b42a8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b42a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b42ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b42acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b42b0: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x1b42b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x1b42b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b42b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b42b8: 0xc06cb60  jal         func_1B2D80
    ctx->pc = 0x1B42B8u;
    SET_GPR_U32(ctx, 31, 0x1B42C0u);
    ctx->pc = 0x1B42BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B42B8u;
    // 0x1b42bc: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2D80u, 0x1B42B8u, 0x1B42C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B42C0u;
label_1b42c0:
    // 0x1b42c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b42c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b42c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B42C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B42C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42C4u;
        // 0x1b42c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B42C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B42CCu;
    // 0x1b42cc: 0x0  nop
    ctx->pc = 0x1b42ccu;
    // NOP
    // 0x1b42d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1b42d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b42d4: 0x0  nop
    ctx->pc = 0x1b42d4u;
    // NOP
    ctx->pc = 0x1b42d8u;
}
