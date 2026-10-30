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

// Function: sub_0028DE08
// Address: 0x28de08 - 0x28de48
void sub_0028DE08_0x28de08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DE08_0x28de08");
#endif

    switch (ctx->pc) {
        case 0x28de2cu: goto label_28de2c;
        default: break;
    }

    ctx->pc = 0x28de08u;

    // 0x28de08: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x28de08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x28de0c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28de0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28de10: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x28de10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x28de14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28de14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28de18: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28DE18u;
    {
        const bool branch_taken_0x28de18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x28DE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE18u;
        // 0x28de1c: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28de18) {
            ctx->pc = 0x28DE38u;
            goto label_28de38;
        }
    }
    ctx->pc = 0x28DE20u;
    // 0x28de20: 0x248401a4  addiu       $a0, $a0, 0x1A4
    ctx->pc = 0x28de20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 420));
    // 0x28de24: 0xc137882  jal         func_4DE208
    ctx->pc = 0x28DE24u;
    SET_GPR_U32(ctx, 31, 0x28DE2Cu);
    ctx->pc = 0x28DE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DE24u;
    // 0x28de28: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE208u, 0x28DE24u, 0x28DE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DE2Cu;
label_28de2c:
    // 0x28de2c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x28de2cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x28de30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28DE30u;
    {
        const bool branch_taken_0x28de30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE30u;
        // 0x28de34: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28de30) {
            ctx->pc = 0x28DE3Cu;
            goto label_28de3c;
        }
    }
    ctx->pc = 0x28DE38u;
label_28de38:
    // 0x28de38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28de38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28de3c:
    // 0x28de3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28de3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28de40: 0x3e00008  jr          $ra
    ctx->pc = 0x28DE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE40u;
        // 0x28de44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DE48u;
}
