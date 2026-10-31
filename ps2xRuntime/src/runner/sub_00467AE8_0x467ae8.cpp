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

// Function: sub_00467AE8
// Address: 0x467ae8 - 0x467b28
void sub_00467AE8_0x467ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00467AE8_0x467ae8");
#endif

    ctx->pc = 0x467ae8u;

    // 0x467ae8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x467ae8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467aec: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x467aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x467af0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x467AF0u;
    {
        const bool branch_taken_0x467af0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x467AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467AF0u;
        // 0x467af4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467af0) {
            ctx->pc = 0x467B14u;
            goto label_467b14;
        }
    }
    ctx->pc = 0x467AF8u;
    // 0x467af8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x467af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x467afc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x467afcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x467b00: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x467b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x467b04: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x467b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x467b08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x467b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x467b0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x467b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x467b10: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x467b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_467b14:
    // 0x467b14: 0x3e00008  jr          $ra
    ctx->pc = 0x467B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x467B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x467B1Cu;
    // 0x467b1c: 0x0  nop
    ctx->pc = 0x467b1cu;
    // NOP
    // 0x467b20: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x467b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x467b24: 0x0  nop
    ctx->pc = 0x467b24u;
    // NOP
    ctx->pc = 0x467b28u;
}
