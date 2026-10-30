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

// Function: sub_00421280
// Address: 0x421280 - 0x4212a0
void sub_00421280_0x421280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00421280_0x421280");
#endif

    ctx->pc = 0x421280u;

    // 0x421280: 0x908200bc  lbu         $v0, 0xBC($a0)
    ctx->pc = 0x421280u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x421284: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x421284u;
    {
        const bool branch_taken_0x421284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x421284) {
            ctx->pc = 0x421288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x421284u;
            // 0x421288: 0xa08000bc  sb          $zero, 0xBC($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 188), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x421294u;
            goto label_421294;
        }
    }
    ctx->pc = 0x42128Cu;
    // 0x42128c: 0x3e00008  jr          $ra
    ctx->pc = 0x42128Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x421290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42128Cu;
        // 0x421290: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42128Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x421294u;
label_421294:
    // 0x421294: 0x3e00008  jr          $ra
    ctx->pc = 0x421294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x421298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421294u;
        // 0x421298: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42129Cu;
    // 0x42129c: 0x0  nop
    ctx->pc = 0x42129cu;
    // NOP
    ctx->pc = 0x4212a0u;
}
