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

// Function: sub_00488E48
// Address: 0x488e48 - 0x488ea8
void sub_00488E48_0x488e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488E48_0x488e48");
#endif

    ctx->pc = 0x488e48u;

    // 0x488e48: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x488e48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488e4c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x488e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x488e50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x488E50u;
    {
        const bool branch_taken_0x488e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x488E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488E50u;
        // 0x488e54: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488e50) {
            ctx->pc = 0x488E70u;
            goto label_488e70;
        }
    }
    ctx->pc = 0x488E58u;
    // 0x488e58: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x488e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x488e5c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x488e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x488e60: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x488e60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x488e64: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x488e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x488e68: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x488e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x488e6c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x488e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_488e70:
    // 0x488e70: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x488e70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
    // 0x488e74: 0x24e30008  addiu       $v1, $a3, 0x8
    ctx->pc = 0x488e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x488e78: 0x24c50008  addiu       $a1, $a2, 0x8
    ctx->pc = 0x488e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x488e7c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x488e7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488e80: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x488e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x488e84: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x488e84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x488e88: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x488e88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x488e8c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x488e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x488e90: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x488e90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x488e94: 0x3e00008  jr          $ra
    ctx->pc = 0x488E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488E94u;
        // 0x488e98: 0xace50008  sw          $a1, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488E9Cu;
    // 0x488e9c: 0x0  nop
    ctx->pc = 0x488e9cu;
    // NOP
    // 0x488ea0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x488ea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488ea4: 0x0  nop
    ctx->pc = 0x488ea4u;
    // NOP
    ctx->pc = 0x488ea8u;
}
