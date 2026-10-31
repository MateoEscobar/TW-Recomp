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

// Function: sub_00113510
// Address: 0x113510 - 0x113560
void sub_00113510_0x113510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113510_0x113510");
#endif

    switch (ctx->pc) {
        case 0x113538u: goto label_113538;
        case 0x11354cu: goto label_11354c;
        default: break;
    }

    ctx->pc = 0x113510u;

    // 0x113510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x113514: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x113514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x113518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x113518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11351c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11351cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113520: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x113520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x113524: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x113524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11352c: 0x244491e0  addiu       $a0, $v0, -0x6E20
    ctx->pc = 0x11352cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939104));
    // 0x113530: 0xc050fda  jal         func_143F68
    ctx->pc = 0x113530u;
    SET_GPR_U32(ctx, 31, 0x113538u);
    ctx->pc = 0x113534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113530u;
    // 0x113534: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x113530u, 0x113538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113538u;
label_113538:
    // 0x113538: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x113538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    // 0x11353c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x11353cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113540: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x113540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113544: 0xc044142  jal         func_110508
    ctx->pc = 0x113544u;
    SET_GPR_U32(ctx, 31, 0x11354Cu);
    ctx->pc = 0x113548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113544u;
    // 0x113548: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110508u, 0x113544u, 0x11354Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11354Cu;
label_11354c:
    // 0x11354c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x11354cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113550: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x113550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113558: 0x3e00008  jr          $ra
    ctx->pc = 0x113558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113558u;
        // 0x11355c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113560u;
}
