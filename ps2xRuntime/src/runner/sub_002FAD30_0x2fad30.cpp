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

// Function: sub_002FAD30
// Address: 0x2fad30 - 0x2fad70
void sub_002FAD30_0x2fad30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FAD30_0x2fad30");
#endif

    switch (ctx->pc) {
        case 0x2fad50u: goto label_2fad50;
        default: break;
    }

    ctx->pc = 0x2fad30u;

    // 0x2fad30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fad30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fad34: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2FAD34u;
    {
        const bool branch_taken_0x2fad34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD34u;
        // 0x2fad38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fad34) {
            ctx->pc = 0x2FAD60u;
            goto label_2fad60;
        }
    }
    ctx->pc = 0x2FAD3Cu;
    // 0x2fad3c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fad40: 0x3c0505c0  lui         $a1, 0x5C0
    ctx->pc = 0x2fad40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1472 << 16));
    // 0x2fad44: 0x34a5221f  ori         $a1, $a1, 0x221F
    ctx->pc = 0x2fad44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8735);
    // 0x2fad48: 0xc089998  jal         func_226660
    ctx->pc = 0x2FAD48u;
    SET_GPR_U32(ctx, 31, 0x2FAD50u);
    ctx->pc = 0x2FAD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAD48u;
    // 0x2fad4c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2FAD48u, 0x2FAD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAD50u;
label_2fad50:
    // 0x2fad50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fad50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fad54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fad54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fad58: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FAD58u;
    {
        const bool branch_taken_0x2fad58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2FAD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD58u;
        // 0x2fad5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fad58) {
            ctx->pc = 0x2FAD64u;
            goto label_2fad64;
        }
    }
    ctx->pc = 0x2FAD60u;
label_2fad60:
    // 0x2fad60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fad60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fad64:
    // 0x2fad64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fad64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fad68: 0x3e00008  jr          $ra
    ctx->pc = 0x2FAD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FAD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD68u;
        // 0x2fad6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FAD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FAD70u;
}
