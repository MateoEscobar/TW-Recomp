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

// Function: sub_00429AC8
// Address: 0x429ac8 - 0x429af8
void sub_00429AC8_0x429ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00429AC8_0x429ac8");
#endif

    switch (ctx->pc) {
        case 0x429aecu: goto label_429aec;
        default: break;
    }

    ctx->pc = 0x429ac8u;

    // 0x429ac8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x429ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x429acc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x429accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x429ad0: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x429AD0u;
    {
        const bool branch_taken_0x429ad0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x429AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429AD0u;
        // 0x429ad4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429ad0) {
            ctx->pc = 0x429AECu;
            goto label_429aec;
        }
    }
    ctx->pc = 0x429AD8u;
    // 0x429ad8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x429AD8u;
    {
        const bool branch_taken_0x429ad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x429ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429AD8u;
        // 0x429adc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429ad8) {
            ctx->pc = 0x429AF0u;
            goto label_429af0;
        }
    }
    ctx->pc = 0x429AE0u;
    // 0x429ae0: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x429ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x429ae4: 0xc10a698  jal         func_429A60
    ctx->pc = 0x429AE4u;
    SET_GPR_U32(ctx, 31, 0x429AECu);
    ctx->pc = 0x429AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x429AE4u;
    // 0x429ae8: 0x2484ecb0  addiu       $a0, $a0, -0x1350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429A60u, 0x429AE4u, 0x429AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429AECu;
label_429aec:
    // 0x429aec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x429aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_429af0:
    // 0x429af0: 0x3e00008  jr          $ra
    ctx->pc = 0x429AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x429AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429AF0u;
        // 0x429af4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x429AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x429AF8u;
}
