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

// Function: sub_001D4530
// Address: 0x1d4530 - 0x1d4570
void sub_001D4530_0x1d4530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4530_0x1d4530");
#endif

    switch (ctx->pc) {
        case 0x1d4548u: goto label_1d4548;
        case 0x1d4554u: goto label_1d4554;
        default: break;
    }

    ctx->pc = 0x1d4530u;

    // 0x1d4530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d4530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d4534: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d4534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d4538: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d4538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d453c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d453cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4540: 0xc075164  jal         func_1D4590
    ctx->pc = 0x1D4540u;
    SET_GPR_U32(ctx, 31, 0x1D4548u);
    ctx->pc = 0x1D4544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4540u;
    // 0x1d4544: 0x8e0500a4  lw          $a1, 0xA4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4590u, 0x1D4540u, 0x1D4548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4548u;
label_1d4548:
    // 0x1d4548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d454c: 0xc07517e  jal         func_1D45F8
    ctx->pc = 0x1D454Cu;
    SET_GPR_U32(ctx, 31, 0x1D4554u);
    ctx->pc = 0x1D4550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D454Cu;
    // 0x1d4550: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45F8u, 0x1D454Cu, 0x1D4554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4554u;
label_1d4554:
    // 0x1d4554: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x1d4554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x1d4558: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d4558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d455c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d455cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4560: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1d4560u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d4564: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4564u;
        // 0x1d4568: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D456Cu;
    // 0x1d456c: 0x0  nop
    ctx->pc = 0x1d456cu;
    // NOP
    ctx->pc = 0x1d4570u;
}
