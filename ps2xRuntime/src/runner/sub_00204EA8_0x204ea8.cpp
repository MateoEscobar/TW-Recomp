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

// Function: sub_00204EA8
// Address: 0x204ea8 - 0x204ed8
void sub_00204EA8_0x204ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204EA8_0x204ea8");
#endif

    switch (ctx->pc) {
        case 0x204ea8u: goto label_204ea8;
        case 0x204eacu: goto label_204eac;
        case 0x204eb0u: goto label_204eb0;
        case 0x204eb4u: goto label_204eb4;
        case 0x204eb8u: goto label_204eb8;
        case 0x204ebcu: goto label_204ebc;
        case 0x204ec0u: goto label_204ec0;
        case 0x204ec4u: goto label_204ec4;
        case 0x204ec8u: goto label_204ec8;
        case 0x204eccu: goto label_204ecc;
        case 0x204ed0u: goto label_204ed0;
        case 0x204ed4u: goto label_204ed4;
        default: break;
    }

    ctx->pc = 0x204ea8u;

label_204ea8:
    // 0x204ea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x204ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_204eac:
    // 0x204eac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_204eb0:
    // 0x204eb0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x204eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_204eb4:
    // 0x204eb4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x204eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_204eb8:
    // 0x204eb8: 0x84650088  lh          $a1, 0x88($v1)
    ctx->pc = 0x204eb8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_204ebc:
    // 0x204ebc: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x204ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_204ec0:
    // 0x204ec0: 0x40f809  jalr        $v0
label_204ec4:
    if (ctx->pc == 0x204EC4u) {
        ctx->pc = 0x204EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204EC0u;
        // 0x204ec4: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204EC8u;
        goto label_204ec8;
    }
    ctx->pc = 0x204EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x204EC8u);
        ctx->pc = 0x204EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204EC0u;
        // 0x204ec4: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204EC0u, 0x204EC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x204EC8u;
label_204ec8:
    // 0x204ec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_204ecc:
    // 0x204ecc: 0x3e00008  jr          $ra
label_204ed0:
    if (ctx->pc == 0x204ED0u) {
        ctx->pc = 0x204ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204ECCu;
        // 0x204ed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204ED4u;
        goto label_204ed4;
    }
    ctx->pc = 0x204ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204ECCu;
        // 0x204ed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204ED4u;
label_204ed4:
    // 0x204ed4: 0x0  nop
    ctx->pc = 0x204ed4u;
    // NOP
    ctx->pc = 0x204ed8u;
}
