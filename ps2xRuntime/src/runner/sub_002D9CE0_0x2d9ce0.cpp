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

// Function: sub_002D9CE0
// Address: 0x2d9ce0 - 0x2d9d20
void sub_002D9CE0_0x2d9ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9CE0_0x2d9ce0");
#endif

    switch (ctx->pc) {
        case 0x2d9d04u: goto label_2d9d04;
        case 0x2d9d10u: goto label_2d9d10;
        default: break;
    }

    ctx->pc = 0x2d9ce0u;

    // 0x2d9ce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d9ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d9ce4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2d9ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2d9ce8: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D9CE8u;
    {
        const bool branch_taken_0x2d9ce8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D9CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9CE8u;
        // 0x2d9cec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9ce8) {
            ctx->pc = 0x2D9D10u;
            goto label_2d9d10;
        }
    }
    ctx->pc = 0x2D9CF0u;
    // 0x2d9cf0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D9CF0u;
    {
        const bool branch_taken_0x2d9cf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9CF0u;
        // 0x2d9cf4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9cf0) {
            ctx->pc = 0x2D9D14u;
            goto label_2d9d14;
        }
    }
    ctx->pc = 0x2D9CF8u;
    // 0x2d9cf8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2d9cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2d9cfc: 0xc0b2cce  jal         func_2CB338
    ctx->pc = 0x2D9CFCu;
    SET_GPR_U32(ctx, 31, 0x2D9D04u);
    ctx->pc = 0x2D9D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9CFCu;
    // 0x2d9d00: 0x24849f48  addiu       $a0, $a0, -0x60B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB338u, 0x2D9CFCu, 0x2D9D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9D04u;
label_2d9d04:
    // 0x2d9d04: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2d9d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2d9d08: 0xc0b2cca  jal         func_2CB328
    ctx->pc = 0x2D9D08u;
    SET_GPR_U32(ctx, 31, 0x2D9D10u);
    ctx->pc = 0x2D9D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9D08u;
    // 0x2d9d0c: 0x2484a068  addiu       $a0, $a0, -0x5F98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB328u, 0x2D9D08u, 0x2D9D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9D10u;
label_2d9d10:
    // 0x2d9d10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d9d14:
    // 0x2d9d14: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9D14u;
        // 0x2d9d18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9D1Cu;
    // 0x2d9d1c: 0x0  nop
    ctx->pc = 0x2d9d1cu;
    // NOP
    ctx->pc = 0x2d9d20u;
}
