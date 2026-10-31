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

// Function: sub_00253560
// Address: 0x253560 - 0x253598
void sub_00253560_0x253560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253560_0x253560");
#endif

    ctx->pc = 0x253560u;

    // 0x253560: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x253560u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x253564: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x253564u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x253568: 0x3e00008  jr          $ra
    ctx->pc = 0x253568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253568u;
        // 0x25356c: 0xa4800002  sh          $zero, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253570u;
    // 0x253570: 0xa4860002  sh          $a2, 0x2($a0)
    ctx->pc = 0x253570u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x253574: 0x0  nop
    ctx->pc = 0x253574u;
    // NOP
    // 0x253578: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x253578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x25357c: 0x0  nop
    ctx->pc = 0x25357cu;
    // NOP
    // 0x253580: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x253580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x253584: 0x0  nop
    ctx->pc = 0x253584u;
    // NOP
    // 0x253588: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x253588u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x25358c: 0x0  nop
    ctx->pc = 0x25358cu;
    // NOP
    // 0x253590: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x253590u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x253594: 0x0  nop
    ctx->pc = 0x253594u;
    // NOP
    ctx->pc = 0x253598u;
}
