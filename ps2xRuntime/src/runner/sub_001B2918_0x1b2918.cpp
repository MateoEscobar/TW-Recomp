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

// Function: sub_001B2918
// Address: 0x1b2918 - 0x1b2950
void sub_001B2918_0x1b2918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2918_0x1b2918");
#endif

    switch (ctx->pc) {
        case 0x1b2940u: goto label_1b2940;
        default: break;
    }

    ctx->pc = 0x1b2918u;

    // 0x1b2918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b291c: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x1b291cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b2920: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2920u;
    {
        const bool branch_taken_0x1b2920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2920u;
        // 0x1b2924: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2920) {
            ctx->pc = 0x1B2940u;
            goto label_1b2940;
        }
    }
    ctx->pc = 0x1B2928u;
    // 0x1b2928: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1b2928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b292c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1b292cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b2930: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1b2930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2934: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1b2934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b2938: 0xc070190  jal         func_1C0640
    ctx->pc = 0x1B2938u;
    SET_GPR_U32(ctx, 31, 0x1B2940u);
    ctx->pc = 0x1B293Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2938u;
    // 0x1b293c: 0x24843480  addiu       $a0, $a0, 0x3480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0640u, 0x1B2938u, 0x1B2940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2940u;
label_1b2940:
    // 0x1b2940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2944: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2944u;
        // 0x1b2948: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B294Cu;
    // 0x1b294c: 0x0  nop
    ctx->pc = 0x1b294cu;
    // NOP
    ctx->pc = 0x1b2950u;
}
