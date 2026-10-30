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

// Function: sub_00416C60
// Address: 0x416c60 - 0x416cb0
void sub_00416C60_0x416c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00416C60_0x416c60");
#endif

    switch (ctx->pc) {
        case 0x416c80u: goto label_416c80;
        default: break;
    }

    ctx->pc = 0x416c60u;

    // 0x416c60: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x416c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x416c64: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x416c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x416c68: 0x2465d8f8  addiu       $a1, $v1, -0x2708
    ctx->pc = 0x416c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957304));
    // 0x416c6c: 0x2447d978  addiu       $a3, $v0, -0x2688
    ctx->pc = 0x416c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957432));
    // 0x416c70: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x416c70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416c74: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x416c74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x416c78: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x416c78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x416c7c: 0x0  nop
    ctx->pc = 0x416c7cu;
    // NOP
label_416c80:
    // 0x416c80: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x416c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x416c84: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x416c84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x416c88: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x416c88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416c8c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x416c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x416c90: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x416c90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x416c94: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x416c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x416c98: 0x28620020  slti        $v0, $v1, 0x20
    ctx->pc = 0x416c98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x416c9c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x416C9Cu;
    {
        const bool branch_taken_0x416c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x416CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416C9Cu;
        // 0x416ca0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416c9c) {
            ctx->pc = 0x416C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_416c80;
        }
    }
    ctx->pc = 0x416CA4u;
    // 0x416ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x416CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x416CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x416CACu;
    // 0x416cac: 0x0  nop
    ctx->pc = 0x416cacu;
    // NOP
    ctx->pc = 0x416cb0u;
}
