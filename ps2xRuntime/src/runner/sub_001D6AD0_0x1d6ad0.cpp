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

// Function: sub_001D6AD0
// Address: 0x1d6ad0 - 0x1d6b00
void sub_001D6AD0_0x1d6ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6AD0_0x1d6ad0");
#endif

    switch (ctx->pc) {
        case 0x1d6ad0u: goto label_1d6ad0;
        case 0x1d6ad4u: goto label_1d6ad4;
        case 0x1d6ad8u: goto label_1d6ad8;
        case 0x1d6adcu: goto label_1d6adc;
        case 0x1d6ae0u: goto label_1d6ae0;
        case 0x1d6ae4u: goto label_1d6ae4;
        case 0x1d6ae8u: goto label_1d6ae8;
        case 0x1d6aecu: goto label_1d6aec;
        case 0x1d6af0u: goto label_1d6af0;
        case 0x1d6af4u: goto label_1d6af4;
        case 0x1d6af8u: goto label_1d6af8;
        case 0x1d6afcu: goto label_1d6afc;
        default: break;
    }

    ctx->pc = 0x1d6ad0u;

label_1d6ad0:
    // 0x1d6ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d6ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d6ad4:
    // 0x1d6ad4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x1d6ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_1d6ad8:
    // 0x1d6ad8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d6adc:
    // 0x1d6adc: 0x24a5d310  addiu       $a1, $a1, -0x2CF0
    ctx->pc = 0x1d6adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955792));
label_1d6ae0:
    // 0x1d6ae0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d6ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d6ae4:
    // 0x1d6ae4: 0x84430078  lh          $v1, 0x78($v0)
    ctx->pc = 0x1d6ae4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_1d6ae8:
    // 0x1d6ae8: 0x8c46007c  lw          $a2, 0x7C($v0)
    ctx->pc = 0x1d6ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_1d6aec:
    // 0x1d6aec: 0xc0f809  jalr        $a2
label_1d6af0:
    if (ctx->pc == 0x1D6AF0u) {
        ctx->pc = 0x1D6AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AECu;
        // 0x1d6af0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6AF4u;
        goto label_1d6af4;
    }
    ctx->pc = 0x1D6AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1D6AF4u);
        ctx->pc = 0x1D6AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AECu;
        // 0x1d6af0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6AECu, 0x1D6AF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D6AF4u;
label_1d6af4:
    // 0x1d6af4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6af8:
    // 0x1d6af8: 0x3e00008  jr          $ra
label_1d6afc:
    if (ctx->pc == 0x1D6AFCu) {
        ctx->pc = 0x1D6AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AF8u;
        // 0x1d6afc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6B00u;
        goto label_fallthrough_0x1d6af8;
    }
    ctx->pc = 0x1D6AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AF8u;
        // 0x1d6afc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d6af8:
    ctx->pc = 0x1D6B00u;
}
