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

// Function: sub_004A9BB8
// Address: 0x4a9bb8 - 0x4a9bf0
void sub_004A9BB8_0x4a9bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9BB8_0x4a9bb8");
#endif

    switch (ctx->pc) {
        case 0x4a9bc8u: goto label_4a9bc8;
        default: break;
    }

    ctx->pc = 0x4a9bb8u;

    // 0x4a9bb8: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x4a9bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x4a9bbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4a9bbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9bc0: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x4a9bc0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x4a9bc4: 0x0  nop
    ctx->pc = 0x4a9bc4u;
    // NOP
label_4a9bc8:
    // 0x4a9bc8: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x4a9bc8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a9bcc: 0x651026  xor         $v0, $v1, $a1
    ctx->pc = 0x4a9bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x4a9bd0: 0x82300a  movz        $a2, $a0, $v0
    ctx->pc = 0x4a9bd0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x4a9bd4: 0x0  nop
    ctx->pc = 0x4a9bd4u;
    // NOP
    // 0x4a9bd8: 0x0  nop
    ctx->pc = 0x4a9bd8u;
    // NOP
    // 0x4a9bdc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4A9BDCu;
    {
        const bool branch_taken_0x4a9bdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9BDCu;
        // 0x4a9be0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9bdc) {
            ctx->pc = 0x4A9BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9bc8;
        }
    }
    ctx->pc = 0x4A9BE4u;
    // 0x4a9be4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9BE4u;
        // 0x4a9be8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9BECu;
    // 0x4a9bec: 0x0  nop
    ctx->pc = 0x4a9becu;
    // NOP
    ctx->pc = 0x4a9bf0u;
}
