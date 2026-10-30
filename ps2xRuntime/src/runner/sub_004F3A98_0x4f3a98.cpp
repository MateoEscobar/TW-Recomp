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

// Function: sub_004F3A98
// Address: 0x4f3a98 - 0x4f3ae8
void sub_004F3A98_0x4f3a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F3A98_0x4f3a98");
#endif

    switch (ctx->pc) {
        case 0x4f3abcu: goto label_4f3abc;
        default: break;
    }

    ctx->pc = 0x4f3a98u;

    // 0x4f3a98: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4f3a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4f3a9c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f3a9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f3aa0: 0x24424298  addiu       $v0, $v0, 0x4298
    ctx->pc = 0x4f3aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17048));
    // 0x4f3aa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f3aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f3aa8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x4f3aa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4f3aac: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F3AACu;
    {
        const bool branch_taken_0x4f3aac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3AACu;
        // 0x4f3ab0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3aac) {
            ctx->pc = 0x4F3ABCu;
            goto label_4f3abc;
        }
    }
    ctx->pc = 0x4F3AB4u;
    // 0x4f3ab4: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4F3AB4u;
    SET_GPR_U32(ctx, 31, 0x4F3ABCu);
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4F3AB4u, 0x4F3ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3ABCu;
label_4f3abc:
    // 0x4f3abc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f3abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f3ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x4F3AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3AC0u;
        // 0x4f3ac4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F3AC8u;
    // 0x4f3ac8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4f3ac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f3acc: 0x0  nop
    ctx->pc = 0x4f3accu;
    // NOP
    // 0x4f3ad0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4f3ad0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4f3ad4: 0x0  nop
    ctx->pc = 0x4f3ad4u;
    // NOP
    // 0x4f3ad8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4f3ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4f3adc: 0x0  nop
    ctx->pc = 0x4f3adcu;
    // NOP
    // 0x4f3ae0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4f3ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4f3ae4: 0x0  nop
    ctx->pc = 0x4f3ae4u;
    // NOP
    ctx->pc = 0x4f3ae8u;
}
