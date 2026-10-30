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

// Function: sub_00110078
// Address: 0x110078 - 0x1100b0
void sub_00110078_0x110078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110078_0x110078");
#endif

    switch (ctx->pc) {
        case 0x110098u: goto label_110098;
        default: break;
    }

    ctx->pc = 0x110078u;

    // 0x110078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x110078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11007c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11007cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110080: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x110080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x110084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110088: 0x3c100002  lui         $s0, 0x2
    ctx->pc = 0x110088u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)2 << 16));
    // 0x11008c: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x11008cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x110090: 0xc0440c6  jal         func_110318
    ctx->pc = 0x110090u;
    SET_GPR_U32(ctx, 31, 0x110098u);
    ctx->pc = 0x110094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110090u;
    // 0x110094: 0x8e054268  lw          $a1, 0x4268($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17000)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x110090u, 0x110098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110098u;
label_110098:
    // 0x110098: 0xae00426c  sw          $zero, 0x426C($s0)
    ctx->pc = 0x110098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17004), GPR_U32(ctx, 0));
    // 0x11009c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11009cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1100a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1100a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1100a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1100A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1100A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1100A4u;
        // 0x1100a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1100A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1100ACu;
    // 0x1100ac: 0x0  nop
    ctx->pc = 0x1100acu;
    // NOP
    ctx->pc = 0x1100b0u;
}
