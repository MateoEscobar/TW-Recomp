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

// Function: sub_00391340
// Address: 0x391340 - 0x391378
void sub_00391340_0x391340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00391340_0x391340");
#endif

    ctx->pc = 0x391340u;

    // 0x391340: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x391340u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x391344: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x391344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x391348: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x391348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x39134c: 0x8cc54bc0  lw          $a1, 0x4BC0($a2)
    ctx->pc = 0x39134cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 19392)));
    // 0x391350: 0x94c74bc0  lhu         $a3, 0x4BC0($a2)
    ctx->pc = 0x391350u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 19392)));
    // 0x391354: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x391354u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x391358: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x391358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x39135c: 0xa4a70060  sh          $a3, 0x60($a1)
    ctx->pc = 0x39135cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 96), (uint16_t)GPR_U32(ctx, 7));
    // 0x391360: 0x8cc34bc0  lw          $v1, 0x4BC0($a2)
    ctx->pc = 0x391360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 19392)));
    // 0x391364: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x391364u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x391368: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x391368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x39136c: 0xacc34bc0  sw          $v1, 0x4BC0($a2)
    ctx->pc = 0x39136cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 19392), GPR_U32(ctx, 3));
    // 0x391370: 0x3e00008  jr          $ra
    ctx->pc = 0x391370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391370u;
        // 0x391374: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391378u;
}
