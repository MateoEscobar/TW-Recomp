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

// Function: sub_0015CA90
// Address: 0x15ca90 - 0x15cac0
void sub_0015CA90_0x15ca90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CA90_0x15ca90");
#endif

    switch (ctx->pc) {
        case 0x15cab4u: goto label_15cab4;
        default: break;
    }

    ctx->pc = 0x15ca90u;

    // 0x15ca90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15ca90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15ca94: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15ca94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15ca98: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15CA98u;
    {
        const bool branch_taken_0x15ca98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x15CA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA98u;
        // 0x15ca9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ca98) {
            ctx->pc = 0x15CAB4u;
            goto label_15cab4;
        }
    }
    ctx->pc = 0x15CAA0u;
    // 0x15caa0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15CAA0u;
    {
        const bool branch_taken_0x15caa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAA0u;
        // 0x15caa4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15caa0) {
            ctx->pc = 0x15CAB8u;
            goto label_15cab8;
        }
    }
    ctx->pc = 0x15CAA8u;
    // 0x15caa8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15caa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x15caac: 0xc05711c  jal         func_15C470
    ctx->pc = 0x15CAACu;
    SET_GPR_U32(ctx, 31, 0x15CAB4u);
    ctx->pc = 0x15CAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CAACu;
    // 0x15cab0: 0x24845d90  addiu       $a0, $a0, 0x5D90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C470u, 0x15CAACu, 0x15CAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CAB4u;
label_15cab4:
    // 0x15cab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15cab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15cab8:
    // 0x15cab8: 0x3e00008  jr          $ra
    ctx->pc = 0x15CAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAB8u;
        // 0x15cabc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CAC0u;
}
