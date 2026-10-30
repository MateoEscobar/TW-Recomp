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

// Function: sub_004C18A0
// Address: 0x4c18a0 - 0x4c18c8
void sub_004C18A0_0x4c18a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C18A0_0x4c18a0");
#endif

    switch (ctx->pc) {
        case 0x4c18a0u: goto label_4c18a0;
        case 0x4c18a4u: goto label_4c18a4;
        case 0x4c18a8u: goto label_4c18a8;
        case 0x4c18acu: goto label_4c18ac;
        case 0x4c18b0u: goto label_4c18b0;
        case 0x4c18b4u: goto label_4c18b4;
        case 0x4c18b8u: goto label_4c18b8;
        case 0x4c18bcu: goto label_4c18bc;
        case 0x4c18c0u: goto label_4c18c0;
        case 0x4c18c4u: goto label_4c18c4;
        default: break;
    }

    ctx->pc = 0x4c18a0u;

label_4c18a0:
    // 0x4c18a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c18a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4c18a4:
    // 0x4c18a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c18a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4c18a8:
    // 0x4c18a8: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x4c18a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4c18ac:
    // 0x4c18ac: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x4c18acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_4c18b0:
    // 0x4c18b0: 0x40f809  jalr        $v0
label_4c18b4:
    if (ctx->pc == 0x4C18B4u) {
        ctx->pc = 0x4C18B8u;
        goto label_4c18b8;
    }
    ctx->pc = 0x4C18B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C18B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C18B0u, 0x4C18B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C18B8u;
label_4c18b8:
    // 0x4c18b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c18b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4c18bc:
    // 0x4c18bc: 0x3e00008  jr          $ra
label_4c18c0:
    if (ctx->pc == 0x4C18C0u) {
        ctx->pc = 0x4C18C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C18BCu;
        // 0x4c18c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C18C4u;
        goto label_4c18c4;
    }
    ctx->pc = 0x4C18BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C18C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C18BCu;
        // 0x4c18c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C18BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C18C4u;
label_4c18c4:
    // 0x4c18c4: 0x0  nop
    ctx->pc = 0x4c18c4u;
    // NOP
    ctx->pc = 0x4c18c8u;
}
