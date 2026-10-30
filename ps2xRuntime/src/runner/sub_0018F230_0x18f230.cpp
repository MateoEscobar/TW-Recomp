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

// Function: sub_0018F230
// Address: 0x18f230 - 0x18f268
void sub_0018F230_0x18f230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F230_0x18f230");
#endif

    ctx->pc = 0x18f230u;

    // 0x18f230: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x18f230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x18f234: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x18f234u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x18f238: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x18f238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x18f23c: 0x24c616c0  addiu       $a2, $a2, 0x16C0
    ctx->pc = 0x18f23cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
    // 0x18f240: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x18f240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x18f244: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x18f244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f248: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x18f248u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x18f24c: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x18f24cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x18f250: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x18f250u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x5116C0u));
    // 0x18f254: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x18f254u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x18f258: 0x3e00008  jr          $ra
    ctx->pc = 0x18F258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F258u;
        // 0x18f25c: 0x7c850020  sq          $a1, 0x20($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F260u;
    // 0x18f260: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x18f260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18f264: 0x0  nop
    ctx->pc = 0x18f264u;
    // NOP
    ctx->pc = 0x18f268u;
}
