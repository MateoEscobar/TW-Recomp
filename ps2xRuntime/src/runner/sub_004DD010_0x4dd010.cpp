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

// Function: sub_004DD010
// Address: 0x4dd010 - 0x4dd048
void sub_004DD010_0x4dd010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DD010_0x4dd010");
#endif

    switch (ctx->pc) {
        case 0x4dd038u: goto label_4dd038;
        default: break;
    }

    ctx->pc = 0x4dd010u;

    // 0x4dd010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dd010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4dd014: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4dd014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4dd018: 0x24424298  addiu       $v0, $v0, 0x4298
    ctx->pc = 0x4dd018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17048));
    // 0x4dd01c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dd01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4dd020: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x4dd020u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4dd024: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4dd024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4dd028: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DD028u;
    {
        const bool branch_taken_0x4dd028 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD028u;
        // 0x4dd02c: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd028) {
            ctx->pc = 0x4DD038u;
            goto label_4dd038;
        }
    }
    ctx->pc = 0x4DD030u;
    // 0x4dd030: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4DD030u;
    SET_GPR_U32(ctx, 31, 0x4DD038u);
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4DD030u, 0x4DD038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DD038u;
label_4dd038:
    // 0x4dd038: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dd038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dd03c: 0x3e00008  jr          $ra
    ctx->pc = 0x4DD03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DD040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD03Cu;
        // 0x4dd040: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DD03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DD044u;
    // 0x4dd044: 0x0  nop
    ctx->pc = 0x4dd044u;
    // NOP
    ctx->pc = 0x4dd048u;
}
