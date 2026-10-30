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

// Function: sub_0035DF80
// Address: 0x35df80 - 0x35dfb0
void sub_0035DF80_0x35df80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035DF80_0x35df80");
#endif

    switch (ctx->pc) {
        case 0x35df94u: goto label_35df94;
        case 0x35df9cu: goto label_35df9c;
        default: break;
    }

    ctx->pc = 0x35df80u;

    // 0x35df80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35df80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35df84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35df84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35df88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35df88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35df8c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35DF8Cu;
    SET_GPR_U32(ctx, 31, 0x35DF94u);
    ctx->pc = 0x35DF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DF8Cu;
    // 0x35df90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35DF8Cu, 0x35DF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DF94u;
label_35df94:
    // 0x35df94: 0xc08e972  jal         func_23A5C8
    ctx->pc = 0x35DF94u;
    SET_GPR_U32(ctx, 31, 0x35DF9Cu);
    ctx->pc = 0x35DF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DF94u;
    // 0x35df98: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A5C8u, 0x35DF94u, 0x35DF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DF9Cu;
label_35df9c:
    // 0x35df9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35df9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35dfa0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35dfa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dfa4: 0x3e00008  jr          $ra
    ctx->pc = 0x35DFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DFA4u;
        // 0x35dfa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DFACu;
    // 0x35dfac: 0x0  nop
    ctx->pc = 0x35dfacu;
    // NOP
    ctx->pc = 0x35dfb0u;
}
