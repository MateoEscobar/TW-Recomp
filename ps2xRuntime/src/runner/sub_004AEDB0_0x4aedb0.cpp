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

// Function: sub_004AEDB0
// Address: 0x4aedb0 - 0x4aede0
void sub_004AEDB0_0x4aedb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AEDB0_0x4aedb0");
#endif

    switch (ctx->pc) {
        case 0x4aedd4u: goto label_4aedd4;
        default: break;
    }

    ctx->pc = 0x4aedb0u;

    // 0x4aedb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4aedb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4aedb4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4aedb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4aedb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4aedb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4aedbc: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x4aedbcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x4aedc0: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x4aedc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
    // 0x4aedc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AEDC4u;
    {
        const bool branch_taken_0x4aedc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEDC4u;
        // 0x4aedc8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aedc4) {
            ctx->pc = 0x4AEDD8u;
            goto label_4aedd8;
        }
    }
    ctx->pc = 0x4AEDCCu;
    // 0x4aedcc: 0xc12b70a  jal         func_4ADC28
    ctx->pc = 0x4AEDCCu;
    SET_GPR_U32(ctx, 31, 0x4AEDD4u);
    ctx->pc = 0x4ADC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADC28u, 0x4AEDCCu, 0x4AEDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEDD4u;
label_4aedd4:
    // 0x4aedd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aedd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4aedd8:
    // 0x4aedd8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AEDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AEDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEDD8u;
        // 0x4aeddc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AEDD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AEDE0u;
}
