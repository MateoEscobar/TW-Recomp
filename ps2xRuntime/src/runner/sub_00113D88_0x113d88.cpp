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

// Function: sub_00113D88
// Address: 0x113d88 - 0x113dd0
void sub_00113D88_0x113d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113D88_0x113d88");
#endif

    switch (ctx->pc) {
        case 0x113dc0u: goto label_113dc0;
        default: break;
    }

    ctx->pc = 0x113d88u;

    // 0x113d88: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x113d88u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113d8c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x113d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x113d90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x113d94: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x113d94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113d98: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x113d98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113d9c: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x113d9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113da0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x113da0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113da4: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x113da4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x113da8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113dac: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x113dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113db0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x113db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113db4: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x113db4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113db8: 0xc044408  jal         func_111020
    ctx->pc = 0x113DB8u;
    SET_GPR_U32(ctx, 31, 0x113DC0u);
    ctx->pc = 0x113DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113DB8u;
    // 0x113dbc: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111020u, 0x113DB8u, 0x113DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113DC0u;
label_113dc0:
    // 0x113dc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x113DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113DC4u;
        // 0x113dc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113DCCu;
    // 0x113dcc: 0x0  nop
    ctx->pc = 0x113dccu;
    // NOP
    ctx->pc = 0x113dd0u;
}
