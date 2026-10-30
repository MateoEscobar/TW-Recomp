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

// Function: sub_004231B8
// Address: 0x4231b8 - 0x423200
void sub_004231B8_0x4231b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004231B8_0x4231b8");
#endif

    ctx->pc = 0x4231b8u;

    // 0x4231b8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4231b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x4231bc: 0x24060084  addiu       $a2, $zero, 0x84
    ctx->pc = 0x4231bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x4231c0: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x4231c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x4231c4: 0x946256dc  lhu         $v0, 0x56DC($v1)
    ctx->pc = 0x4231c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22236)));
    // 0x4231c8: 0x463818  mult        $a3, $v0, $a2
    ctx->pc = 0x4231c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4231cc: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x4231ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x4231d0: 0x904214e0  lbu         $v0, 0x14E0($v0)
    ctx->pc = 0x4231d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5344)));
    // 0x4231d4: 0x2c43001e  sltiu       $v1, $v0, 0x1E
    ctx->pc = 0x4231d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x4231d8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4231D8u;
    {
        const bool branch_taken_0x4231d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4231DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4231D8u;
        // 0x4231dc: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4231d8) {
            ctx->pc = 0x4231F8u;
            goto label_4231f8;
        }
    }
    ctx->pc = 0x4231E0u;
    // 0x4231e0: 0x24840304  addiu       $a0, $a0, 0x304
    ctx->pc = 0x4231e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 772));
    // 0x4231e4: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x4231e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4231e8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4231e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4231ec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4231ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4231f0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4231f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4231f4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4231f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4231f8:
    // 0x4231f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4231F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4231F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x423200u;
}
