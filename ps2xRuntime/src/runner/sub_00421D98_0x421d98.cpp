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

// Function: sub_00421D98
// Address: 0x421d98 - 0x421dd0
void sub_00421D98_0x421d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00421D98_0x421d98");
#endif

    switch (ctx->pc) {
        case 0x421db0u: goto label_421db0;
        case 0x421dc0u: goto label_421dc0;
        default: break;
    }

    ctx->pc = 0x421d98u;

    // 0x421d98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x421d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x421d9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x421d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x421da0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x421da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x421da4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x421da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x421da8: 0xc10855e  jal         func_421578
    ctx->pc = 0x421DA8u;
    SET_GPR_U32(ctx, 31, 0x421DB0u);
    ctx->pc = 0x421DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x421DA8u;
    // 0x421dac: 0x8e050110  lw          $a1, 0x110($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x421578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x421578u, 0x421DA8u, 0x421DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421DB0u;
label_421db0:
    // 0x421db0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x421db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x421db4: 0x8c850110  lw          $a1, 0x110($a0)
    ctx->pc = 0x421db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x421db8: 0xc1085c2  jal         func_421708
    ctx->pc = 0x421DB8u;
    SET_GPR_U32(ctx, 31, 0x421DC0u);
    ctx->pc = 0x421DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x421DB8u;
    // 0x421dbc: 0x8c860118  lw          $a2, 0x118($a0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x421708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x421708u, 0x421DB8u, 0x421DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421DC0u;
label_421dc0:
    // 0x421dc0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x421dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x421dc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x421dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x421dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x421DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x421DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421DC8u;
        // 0x421dcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x421DD0u;
}
