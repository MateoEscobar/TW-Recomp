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

// Function: sub_0010F558
// Address: 0x10f558 - 0x10f578
void sub_0010F558_0x10f558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F558_0x10f558");
#endif

    ctx->pc = 0x10f558u;

    // 0x10f558: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x10f558u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x10f55c: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x10f55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x10f560: 0x24428698  addiu       $v0, $v0, -0x7968
    ctx->pc = 0x10f560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936216));
    // 0x10f564: 0x42383  sra         $a0, $a0, 14
    ctx->pc = 0x10f564u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 14));
    // 0x10f568: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10f568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10f56c: 0x3e00008  jr          $ra
    ctx->pc = 0x10F56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F56Cu;
        // 0x10f570: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F574u;
    // 0x10f574: 0x0  nop
    ctx->pc = 0x10f574u;
    // NOP
    ctx->pc = 0x10f578u;
}
