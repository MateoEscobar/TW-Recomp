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

// Function: sub_004B10C8
// Address: 0x4b10c8 - 0x4b10f0
void sub_004B10C8_0x4b10c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B10C8_0x4b10c8");
#endif

    switch (ctx->pc) {
        case 0x4b10c8u: goto label_4b10c8;
        case 0x4b10ccu: goto label_4b10cc;
        case 0x4b10d0u: goto label_4b10d0;
        case 0x4b10d4u: goto label_4b10d4;
        case 0x4b10d8u: goto label_4b10d8;
        case 0x4b10dcu: goto label_4b10dc;
        case 0x4b10e0u: goto label_4b10e0;
        case 0x4b10e4u: goto label_4b10e4;
        case 0x4b10e8u: goto label_4b10e8;
        case 0x4b10ecu: goto label_4b10ec;
        default: break;
    }

    ctx->pc = 0x4b10c8u;

label_4b10c8:
    // 0x4b10c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b10c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4b10cc:
    // 0x4b10cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b10ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4b10d0:
    // 0x4b10d0: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x4b10d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4b10d4:
    // 0x4b10d4: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x4b10d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_4b10d8:
    // 0x4b10d8: 0x40f809  jalr        $v0
label_4b10dc:
    if (ctx->pc == 0x4B10DCu) {
        ctx->pc = 0x4B10E0u;
        goto label_4b10e0;
    }
    ctx->pc = 0x4B10D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B10E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B10D8u, 0x4B10E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B10E0u;
label_4b10e0:
    // 0x4b10e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b10e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b10e4:
    // 0x4b10e4: 0x3e00008  jr          $ra
label_4b10e8:
    if (ctx->pc == 0x4B10E8u) {
        ctx->pc = 0x4B10E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B10E4u;
        // 0x4b10e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B10ECu;
        goto label_4b10ec;
    }
    ctx->pc = 0x4B10E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B10E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B10E4u;
        // 0x4b10e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B10E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B10ECu;
label_4b10ec:
    // 0x4b10ec: 0x0  nop
    ctx->pc = 0x4b10ecu;
    // NOP
    ctx->pc = 0x4b10f0u;
}
