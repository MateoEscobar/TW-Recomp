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

// Function: sub_0016AE90
// Address: 0x16ae90 - 0x16aec0
void sub_0016AE90_0x16ae90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AE90_0x16ae90");
#endif

    switch (ctx->pc) {
        case 0x16aeb0u: goto label_16aeb0;
        default: break;
    }

    ctx->pc = 0x16ae90u;

    // 0x16ae90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ae90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ae94: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16ae94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16ae98: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16ae98u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16ae9c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16aea0: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16AEA0u;
    {
        const bool branch_taken_0x16aea0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16AEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AEA0u;
        // 0x16aea4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aea0) {
            ctx->pc = 0x16AEB0u;
            goto label_16aeb0;
        }
    }
    ctx->pc = 0x16AEA8u;
    // 0x16aea8: 0xc05b11c  jal         func_16C470
    ctx->pc = 0x16AEA8u;
    SET_GPR_U32(ctx, 31, 0x16AEB0u);
    ctx->pc = 0x16AEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AEA8u;
    // 0x16aeac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C470u, 0x16AEA8u, 0x16AEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AEB0u;
label_16aeb0:
    // 0x16aeb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16aeb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16aeb4: 0x3e00008  jr          $ra
    ctx->pc = 0x16AEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AEB4u;
        // 0x16aeb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AEBCu;
    // 0x16aebc: 0x0  nop
    ctx->pc = 0x16aebcu;
    // NOP
    ctx->pc = 0x16aec0u;
}
