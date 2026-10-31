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

// Function: sub_0022D310
// Address: 0x22d310 - 0x22d348
void sub_0022D310_0x22d310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D310_0x22d310");
#endif

    switch (ctx->pc) {
        case 0x22d32cu: goto label_22d32c;
        case 0x22d334u: goto label_22d334;
        default: break;
    }

    ctx->pc = 0x22d310u;

    // 0x22d310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22d310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22d314: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x22d314u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x22d318: 0x52ef8  dsll        $a1, $a1, 27
    ctx->pc = 0x22d318u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 27);
    // 0x22d31c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22d31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22d320: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22d320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22d324: 0xc089988  jal         func_226620
    ctx->pc = 0x22D324u;
    SET_GPR_U32(ctx, 31, 0x22D32Cu);
    ctx->pc = 0x22D328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D324u;
    // 0x22d328: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22D324u, 0x22D32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D32Cu;
label_22d32c:
    // 0x22d32c: 0xc08d2cc  jal         func_234B30
    ctx->pc = 0x22D32Cu;
    SET_GPR_U32(ctx, 31, 0x22D334u);
    ctx->pc = 0x22D330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D32Cu;
    // 0x22d330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234B30u, 0x22D32Cu, 0x22D334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D334u;
label_22d334:
    // 0x22d334: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22d334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22d338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d33c: 0x3e00008  jr          $ra
    ctx->pc = 0x22D33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D33Cu;
        // 0x22d340: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D344u;
    // 0x22d344: 0x0  nop
    ctx->pc = 0x22d344u;
    // NOP
    ctx->pc = 0x22d348u;
}
