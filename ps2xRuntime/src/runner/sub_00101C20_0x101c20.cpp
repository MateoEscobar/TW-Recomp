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

// Function: sub_00101C20
// Address: 0x101c20 - 0x101c58
void sub_00101C20_0x101c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101C20_0x101c20");
#endif

    switch (ctx->pc) {
        case 0x101c30u: goto label_101c30;
        default: break;
    }

    ctx->pc = 0x101c20u;

    // 0x101c20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x101c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x101c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101c28: 0xc0886fc  jal         func_221BF0
    ctx->pc = 0x101C28u;
    SET_GPR_U32(ctx, 31, 0x101C30u);
    ctx->pc = 0x221BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221BF0u, 0x101C28u, 0x101C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101C30u;
label_101c30:
    // 0x101c30: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x101C30u;
    {
        const bool branch_taken_0x101c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x101c30) {
            ctx->pc = 0x101C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101C30u;
            // 0x101c34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101C40u;
            goto label_101c40;
        }
    }
    ctx->pc = 0x101C38u;
    // 0x101c38: 0x90420045  lbu         $v0, 0x45($v0)
    ctx->pc = 0x101c38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 69)));
    // 0x101c3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x101c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_101c40:
    // 0x101c40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101c44: 0x3e00008  jr          $ra
    ctx->pc = 0x101C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C44u;
        // 0x101c48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101C4Cu;
    // 0x101c4c: 0x0  nop
    ctx->pc = 0x101c4cu;
    // NOP
    // 0x101c50: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x101c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x101c54: 0x0  nop
    ctx->pc = 0x101c54u;
    // NOP
    ctx->pc = 0x101c58u;
}
