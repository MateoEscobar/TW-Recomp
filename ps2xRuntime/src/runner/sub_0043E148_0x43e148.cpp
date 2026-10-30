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

// Function: sub_0043E148
// Address: 0x43e148 - 0x43e170
void sub_0043E148_0x43e148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043E148_0x43e148");
#endif

    ctx->pc = 0x43e148u;

    // 0x43e148: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x43e148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x43e14c: 0x2443ff40  addiu       $v1, $v0, -0xC0
    ctx->pc = 0x43e14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967104));
    // 0x43e150: 0xac44ff40  sw          $a0, -0xC0($v0)
    ctx->pc = 0x43e150u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6FFF40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FFF40u, _value); } while (0);
    // 0x43e154: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x43e154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x43e158: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x43e158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e15c: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x43e15cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6FFF48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FFF48u, _value); } while (0);
    // 0x43e160: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x43e160u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6FFF44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6FFF44u, _value); } while (0);
    // 0x43e164: 0x3e00008  jr          $ra
    ctx->pc = 0x43E164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43E168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E164u;
        // 0x43e168: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43E164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43E16Cu;
    // 0x43e16c: 0x0  nop
    ctx->pc = 0x43e16cu;
    // NOP
    ctx->pc = 0x43e170u;
}
