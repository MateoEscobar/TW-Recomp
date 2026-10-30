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

// Function: sub_004BEF68
// Address: 0x4bef68 - 0x4befa0
void sub_004BEF68_0x4bef68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BEF68_0x4bef68");
#endif

    ctx->pc = 0x4bef68u;

    // 0x4bef68: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4bef68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4bef6c: 0xac6441f0  sw          $a0, 0x41F0($v1)
    ctx->pc = 0x4bef6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7141F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7141F0u, _value); } while (0);
    // 0x4bef70: 0x246541f0  addiu       $a1, $v1, 0x41F0
    ctx->pc = 0x4bef70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16880));
    // 0x4bef74: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4bef74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7141F4u));
    // 0x4bef78: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4bef78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4bef7c: 0x3e00008  jr          $ra
    ctx->pc = 0x4BEF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BEF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BEF7Cu;
        // 0x4bef80: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BEF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BEF84u;
    // 0x4bef84: 0x0  nop
    ctx->pc = 0x4bef84u;
    // NOP
    // 0x4bef88: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4bef88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4bef8c: 0x0  nop
    ctx->pc = 0x4bef8cu;
    // NOP
    // 0x4bef90: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x4bef90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x4bef94: 0x0  nop
    ctx->pc = 0x4bef94u;
    // NOP
    // 0x4bef98: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4bef98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4bef9c: 0x0  nop
    ctx->pc = 0x4bef9cu;
    // NOP
    ctx->pc = 0x4befa0u;
}
