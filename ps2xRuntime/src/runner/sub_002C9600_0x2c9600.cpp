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

// Function: sub_002C9600
// Address: 0x2c9600 - 0x2c9628
void sub_002C9600_0x2c9600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9600_0x2c9600");
#endif

    switch (ctx->pc) {
        case 0x2c9600u: goto label_2c9600;
        case 0x2c9604u: goto label_2c9604;
        case 0x2c9608u: goto label_2c9608;
        case 0x2c960cu: goto label_2c960c;
        case 0x2c9610u: goto label_2c9610;
        case 0x2c9614u: goto label_2c9614;
        case 0x2c9618u: goto label_2c9618;
        case 0x2c961cu: goto label_2c961c;
        case 0x2c9620u: goto label_2c9620;
        case 0x2c9624u: goto label_2c9624;
        default: break;
    }

    ctx->pc = 0x2c9600u;

label_2c9600:
    // 0x2c9600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c9600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c9604:
    // 0x2c9604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c9604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c9608:
    // 0x2c9608: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2c9608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2c960c:
    // 0x2c960c: 0x84430038  lh          $v1, 0x38($v0)
    ctx->pc = 0x2c960cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_2c9610:
    // 0x2c9610: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x2c9610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2c9614:
    // 0x2c9614: 0xa0f809  jalr        $a1
label_2c9618:
    if (ctx->pc == 0x2C9618u) {
        ctx->pc = 0x2C9618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9614u;
        // 0x2c9618: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C961Cu;
        goto label_2c961c;
    }
    ctx->pc = 0x2C9614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2C961Cu);
        ctx->pc = 0x2C9618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9614u;
        // 0x2c9618: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9614u, 0x2C961Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C961Cu;
label_2c961c:
    // 0x2c961c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c961cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c9620:
    // 0x2c9620: 0x3e00008  jr          $ra
label_2c9624:
    if (ctx->pc == 0x2C9624u) {
        ctx->pc = 0x2C9624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9620u;
        // 0x2c9624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9628u;
        goto label_fallthrough_0x2c9620;
    }
    ctx->pc = 0x2C9620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9620u;
        // 0x2c9624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c9620:
    ctx->pc = 0x2C9628u;
}
