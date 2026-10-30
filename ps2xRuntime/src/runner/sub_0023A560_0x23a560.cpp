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

// Function: sub_0023A560
// Address: 0x23a560 - 0x23a588
void sub_0023A560_0x23a560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A560_0x23a560");
#endif

    ctx->pc = 0x23a560u;

    // 0x23a560: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23a560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x23a564: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x23a564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x23a568: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x23a568u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x23a56c: 0xac4602b8  sw          $a2, 0x2B8($v0)
    ctx->pc = 0x23a56cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x5102B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5102B8u, _value); } while (0);
    // 0x23a570: 0xac6402bc  sw          $a0, 0x2BC($v1)
    ctx->pc = 0x23a570u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5102BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5102BCu, _value); } while (0);
    // 0x23a574: 0x3e00008  jr          $ra
    ctx->pc = 0x23A574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A574u;
        // 0x23a578: 0xace502c0  sw          $a1, 0x2C0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 704), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A57Cu;
    // 0x23a57c: 0x0  nop
    ctx->pc = 0x23a57cu;
    // NOP
    // 0x23a580: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x23a580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x23a584: 0x0  nop
    ctx->pc = 0x23a584u;
    // NOP
    ctx->pc = 0x23a588u;
}
