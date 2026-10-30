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

// Function: sub_004DA848
// Address: 0x4da848 - 0x4da878
void sub_004DA848_0x4da848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DA848_0x4da848");
#endif

    switch (ctx->pc) {
        case 0x4da86cu: goto label_4da86c;
        default: break;
    }

    ctx->pc = 0x4da848u;

    // 0x4da848: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4da848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4da84c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4da84cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4da850: 0x24424298  addiu       $v0, $v0, 0x4298
    ctx->pc = 0x4da850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17048));
    // 0x4da854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4da854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4da858: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x4da858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4da85c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DA85Cu;
    {
        const bool branch_taken_0x4da85c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DA860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA85Cu;
        // 0x4da860: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da85c) {
            ctx->pc = 0x4DA86Cu;
            goto label_4da86c;
        }
    }
    ctx->pc = 0x4DA864u;
    // 0x4da864: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4DA864u;
    SET_GPR_U32(ctx, 31, 0x4DA86Cu);
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4DA864u, 0x4DA86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DA86Cu;
label_4da86c:
    // 0x4da86c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4da86cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4da870: 0x3e00008  jr          $ra
    ctx->pc = 0x4DA870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DA874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA870u;
        // 0x4da874: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DA870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DA878u;
}
