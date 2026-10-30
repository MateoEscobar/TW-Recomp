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

// Function: sub_0036DF98
// Address: 0x36df98 - 0x36dfc8
void sub_0036DF98_0x36df98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DF98_0x36df98");
#endif

    switch (ctx->pc) {
        case 0x36dfacu: goto label_36dfac;
        case 0x36dfb4u: goto label_36dfb4;
        default: break;
    }

    ctx->pc = 0x36df98u;

    // 0x36df98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36df98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36df9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36df9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36dfa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36dfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36dfa4: 0xc102488  jal         func_409220
    ctx->pc = 0x36DFA4u;
    SET_GPR_U32(ctx, 31, 0x36DFACu);
    ctx->pc = 0x36DFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DFA4u;
    // 0x36dfa8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36DFA4u, 0x36DFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DFACu;
label_36dfac:
    // 0x36dfac: 0xc057f94  jal         func_15FE50
    ctx->pc = 0x36DFACu;
    SET_GPR_U32(ctx, 31, 0x36DFB4u);
    ctx->pc = 0x36DFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DFACu;
    // 0x36dfb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FE50u, 0x36DFACu, 0x36DFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DFB4u;
label_36dfb4:
    // 0x36dfb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36dfb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36dfb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36dfb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dfbc: 0x3e00008  jr          $ra
    ctx->pc = 0x36DFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DFBCu;
        // 0x36dfc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DFC4u;
    // 0x36dfc4: 0x0  nop
    ctx->pc = 0x36dfc4u;
    // NOP
    ctx->pc = 0x36dfc8u;
}
