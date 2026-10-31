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

// Function: sub_0042C960
// Address: 0x42c960 - 0x42c988
void sub_0042C960_0x42c960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042C960_0x42c960");
#endif

    switch (ctx->pc) {
        case 0x42c960u: goto label_42c960;
        case 0x42c964u: goto label_42c964;
        case 0x42c968u: goto label_42c968;
        case 0x42c96cu: goto label_42c96c;
        case 0x42c970u: goto label_42c970;
        case 0x42c974u: goto label_42c974;
        case 0x42c978u: goto label_42c978;
        case 0x42c97cu: goto label_42c97c;
        case 0x42c980u: goto label_42c980;
        case 0x42c984u: goto label_42c984;
        default: break;
    }

    ctx->pc = 0x42c960u;

label_42c960:
    // 0x42c960: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x42c960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_42c964:
    // 0x42c964: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x42c964u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_42c968:
    // 0x42c968: 0x8c6254c8  lw          $v0, 0x54C8($v1)
    ctx->pc = 0x42c968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21704)));
label_42c96c:
    // 0x42c96c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42c96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_42c970:
    // 0x42c970: 0x40f809  jalr        $v0
label_42c974:
    if (ctx->pc == 0x42C974u) {
        ctx->pc = 0x42C978u;
        goto label_42c978;
    }
    ctx->pc = 0x42C970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42C978u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C970u, 0x42C978u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42C978u;
label_42c978:
    // 0x42c978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42c978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_42c97c:
    // 0x42c97c: 0x3e00008  jr          $ra
label_42c980:
    if (ctx->pc == 0x42C980u) {
        ctx->pc = 0x42C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C97Cu;
        // 0x42c980: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42C984u;
        goto label_42c984;
    }
    ctx->pc = 0x42C97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C97Cu;
        // 0x42c980: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42C984u;
label_42c984:
    // 0x42c984: 0x0  nop
    ctx->pc = 0x42c984u;
    // NOP
    ctx->pc = 0x42c988u;
}
