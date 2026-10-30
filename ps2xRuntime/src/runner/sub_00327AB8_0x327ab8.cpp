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

// Function: sub_00327AB8
// Address: 0x327ab8 - 0x327af8
void sub_00327AB8_0x327ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327AB8_0x327ab8");
#endif

    ctx->pc = 0x327ab8u;

    // 0x327ab8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x327ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x327abc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x327abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x327ac0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x327AC0u;
    {
        const bool branch_taken_0x327ac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x327AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327AC0u;
        // 0x327ac4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327ac0) {
            ctx->pc = 0x327AE0u;
            goto label_327ae0;
        }
    }
    ctx->pc = 0x327AC8u;
    // 0x327ac8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x327ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x327acc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x327accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x327ad0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x327ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x327ad4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x327ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x327ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x327AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327AD8u;
        // 0x327adc: 0xacc40008  sw          $a0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327AE0u;
label_327ae0:
    // 0x327ae0: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x327ae0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x327ae4: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x327ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x327ae8: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x327ae8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x327aec: 0x3e00008  jr          $ra
    ctx->pc = 0x327AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327AECu;
        // 0x327af0: 0xfcc30008  sd          $v1, 0x8($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327AF4u;
    // 0x327af4: 0x0  nop
    ctx->pc = 0x327af4u;
    // NOP
    ctx->pc = 0x327af8u;
}
