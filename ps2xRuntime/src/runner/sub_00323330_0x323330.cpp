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

// Function: sub_00323330
// Address: 0x323330 - 0x323370
void sub_00323330_0x323330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323330_0x323330");
#endif

    switch (ctx->pc) {
        case 0x323348u: goto label_323348;
        default: break;
    }

    ctx->pc = 0x323330u;

    // 0x323330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x323334: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x323334u;
    {
        const bool branch_taken_0x323334 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x323338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323334u;
        // 0x323338: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323334) {
            ctx->pc = 0x323350u;
            goto label_323350;
        }
    }
    ctx->pc = 0x32333Cu;
    // 0x32333c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x32333cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323340: 0xc0ca206  jal         func_328818
    ctx->pc = 0x323340u;
    SET_GPR_U32(ctx, 31, 0x323348u);
    ctx->pc = 0x323344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323340u;
    // 0x323344: 0x8c850010  lw          $a1, 0x10($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328818u, 0x323340u, 0x323348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323348u;
label_323348:
    // 0x323348: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x323348u;
    {
        const bool branch_taken_0x323348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323348u;
        // 0x32334c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323348) {
            ctx->pc = 0x323368u;
            goto label_323368;
        }
    }
    ctx->pc = 0x323350u;
label_323350:
    // 0x323350: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x323350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x323354: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x323354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x323358: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x323358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32335c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x32335cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x323360: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x323360u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x323364: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_323368:
    // 0x323368: 0x3e00008  jr          $ra
    ctx->pc = 0x323368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323368u;
        // 0x32336c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323370u;
}
