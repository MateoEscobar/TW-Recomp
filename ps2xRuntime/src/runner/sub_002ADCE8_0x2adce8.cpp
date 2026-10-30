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

// Function: sub_002ADCE8
// Address: 0x2adce8 - 0x2add08
void sub_002ADCE8_0x2adce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ADCE8_0x2adce8");
#endif

    switch (ctx->pc) {
        case 0x2adcfcu: goto label_2adcfc;
        default: break;
    }

    ctx->pc = 0x2adce8u;

    // 0x2adce8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2adce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2adcec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2adcecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2adcf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2adcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2adcf4: 0xc0ab71c  jal         func_2ADC70
    ctx->pc = 0x2ADCF4u;
    SET_GPR_U32(ctx, 31, 0x2ADCFCu);
    ctx->pc = 0x2ADCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADCF4u;
    // 0x2adcf8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADC70u, 0x2ADCF4u, 0x2ADCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADCFCu;
label_2adcfc:
    // 0x2adcfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2adcfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2add00: 0x3e00008  jr          $ra
    ctx->pc = 0x2ADD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ADD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADD00u;
        // 0x2add04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADD00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ADD08u;
}
