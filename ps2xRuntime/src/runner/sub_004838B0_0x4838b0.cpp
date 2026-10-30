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

// Function: sub_004838B0
// Address: 0x4838b0 - 0x4838d8
void sub_004838B0_0x4838b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004838B0_0x4838b0");
#endif

    switch (ctx->pc) {
        case 0x4838b0u: goto label_4838b0;
        case 0x4838b4u: goto label_4838b4;
        case 0x4838b8u: goto label_4838b8;
        case 0x4838bcu: goto label_4838bc;
        case 0x4838c0u: goto label_4838c0;
        case 0x4838c4u: goto label_4838c4;
        case 0x4838c8u: goto label_4838c8;
        case 0x4838ccu: goto label_4838cc;
        case 0x4838d0u: goto label_4838d0;
        case 0x4838d4u: goto label_4838d4;
        default: break;
    }

    ctx->pc = 0x4838b0u;

label_4838b0:
    // 0x4838b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4838b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4838b4:
    // 0x4838b4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4838b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4838b8:
    // 0x4838b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4838b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4838bc:
    // 0x4838bc: 0x8c62ae20  lw          $v0, -0x51E0($v1)
    ctx->pc = 0x4838bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946336)));
label_4838c0:
    // 0x4838c0: 0x40f809  jalr        $v0
label_4838c4:
    if (ctx->pc == 0x4838C4u) {
        ctx->pc = 0x4838C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4838C0u;
        // 0x4838c4: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4838C8u;
        goto label_4838c8;
    }
    ctx->pc = 0x4838C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4838C8u);
        ctx->pc = 0x4838C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4838C0u;
        // 0x4838c4: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4838C0u, 0x4838C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4838C8u;
label_4838c8:
    // 0x4838c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4838c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4838cc:
    // 0x4838cc: 0x3e00008  jr          $ra
label_4838d0:
    if (ctx->pc == 0x4838D0u) {
        ctx->pc = 0x4838D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4838CCu;
        // 0x4838d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4838D4u;
        goto label_4838d4;
    }
    ctx->pc = 0x4838CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4838D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4838CCu;
        // 0x4838d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4838CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4838D4u;
label_4838d4:
    // 0x4838d4: 0x0  nop
    ctx->pc = 0x4838d4u;
    // NOP
    ctx->pc = 0x4838d8u;
}
