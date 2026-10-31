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

// Function: sub_0042DF80
// Address: 0x42df80 - 0x42dfc0
void sub_0042DF80_0x42df80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042DF80_0x42df80");
#endif

    switch (ctx->pc) {
        case 0x42dfacu: goto label_42dfac;
        default: break;
    }

    ctx->pc = 0x42df80u;

    // 0x42df80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42df80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x42df84: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x42df84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x42df88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x42df88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x42df8c: 0x8c6271c8  lw          $v0, 0x71C8($v1)
    ctx->pc = 0x42df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5971C8u));
    // 0x42df90: 0x247071c8  addiu       $s0, $v1, 0x71C8
    ctx->pc = 0x42df90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 29128));
    // 0x42df94: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x42DF94u;
    {
        const bool branch_taken_0x42df94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42DF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DF94u;
        // 0x42df98: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42df94) {
            ctx->pc = 0x42DFACu;
            goto label_42dfac;
        }
    }
    ctx->pc = 0x42DF9Cu;
    // 0x42df9c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x42df9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x42dfa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42dfa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42dfa4: 0xc10bc00  jal         func_42F000
    ctx->pc = 0x42DFA4u;
    SET_GPR_U32(ctx, 31, 0x42DFACu);
    ctx->pc = 0x42DFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42DFA4u;
    // 0x42dfa8: 0x24a5c190  addiu       $a1, $a1, -0x3E70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42F000u, 0x42DFA4u, 0x42DFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DFACu;
label_42dfac:
    // 0x42dfac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x42dfacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42dfb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42dfb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42dfb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x42dfb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42dfb8: 0x3e00008  jr          $ra
    ctx->pc = 0x42DFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42DFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DFB8u;
        // 0x42dfbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42DFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42DFC0u;
}
