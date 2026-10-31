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

// Function: sub_00196D60
// Address: 0x196d60 - 0x196d90
void sub_00196D60_0x196d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196D60_0x196d60");
#endif

    switch (ctx->pc) {
        case 0x196d7cu: goto label_196d7c;
        default: break;
    }

    ctx->pc = 0x196d60u;

    // 0x196d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x196d64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x196d68: 0x90820011  lbu         $v0, 0x11($a0)
    ctx->pc = 0x196d68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x196d6c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x196D6Cu;
    {
        const bool branch_taken_0x196d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196d6c) {
            ctx->pc = 0x196D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196D6Cu;
            // 0x196d70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196D80u;
            goto label_196d80;
        }
    }
    ctx->pc = 0x196D74u;
    // 0x196d74: 0xc066088  jal         func_198220
    ctx->pc = 0x196D74u;
    SET_GPR_U32(ctx, 31, 0x196D7Cu);
    ctx->pc = 0x196D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196D74u;
    // 0x196d78: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198220u, 0x196D74u, 0x196D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196D7Cu;
label_196d7c:
    // 0x196d7c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x196d7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_196d80:
    // 0x196d80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196d84: 0x3e00008  jr          $ra
    ctx->pc = 0x196D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D84u;
        // 0x196d88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196D8Cu;
    // 0x196d8c: 0x0  nop
    ctx->pc = 0x196d8cu;
    // NOP
    ctx->pc = 0x196d90u;
}
