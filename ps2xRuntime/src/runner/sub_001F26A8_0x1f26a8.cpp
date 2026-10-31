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

// Function: sub_001F26A8
// Address: 0x1f26a8 - 0x1f26e0
void sub_001F26A8_0x1f26a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F26A8_0x1f26a8");
#endif

    switch (ctx->pc) {
        case 0x1f26c4u: goto label_1f26c4;
        case 0x1f26d4u: goto label_1f26d4;
        default: break;
    }

    ctx->pc = 0x1f26a8u;

    // 0x1f26a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f26a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f26ac: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1f26acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1f26b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f26b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f26b4: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F26B4u;
    {
        const bool branch_taken_0x1f26b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F26B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F26B4u;
        // 0x1f26b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f26b4) {
            ctx->pc = 0x1F26CCu;
            goto label_1f26cc;
        }
    }
    ctx->pc = 0x1F26BCu;
    // 0x1f26bc: 0xc07f832  jal         func_1FE0C8
    ctx->pc = 0x1F26BCu;
    SET_GPR_U32(ctx, 31, 0x1F26C4u);
    ctx->pc = 0x1FE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0C8u, 0x1F26BCu, 0x1F26C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F26C4u;
label_1f26c4:
    // 0x1f26c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F26C4u;
    {
        const bool branch_taken_0x1f26c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F26C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F26C4u;
        // 0x1f26c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f26c4) {
            ctx->pc = 0x1F26D8u;
            goto label_1f26d8;
        }
    }
    ctx->pc = 0x1F26CCu;
label_1f26cc:
    // 0x1f26cc: 0xc07f812  jal         func_1FE048
    ctx->pc = 0x1F26CCu;
    SET_GPR_U32(ctx, 31, 0x1F26D4u);
    ctx->pc = 0x1FE048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE048u, 0x1F26CCu, 0x1F26D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F26D4u;
label_1f26d4:
    // 0x1f26d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f26d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f26d8:
    // 0x1f26d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F26D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F26DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F26D8u;
        // 0x1f26dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F26D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F26E0u;
}
