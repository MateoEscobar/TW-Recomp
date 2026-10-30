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

// Function: sub_00407EC0
// Address: 0x407ec0 - 0x407ee8
void sub_00407EC0_0x407ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00407EC0_0x407ec0");
#endif

    switch (ctx->pc) {
        case 0x407ec0u: goto label_407ec0;
        case 0x407ec4u: goto label_407ec4;
        case 0x407ec8u: goto label_407ec8;
        case 0x407eccu: goto label_407ecc;
        case 0x407ed0u: goto label_407ed0;
        case 0x407ed4u: goto label_407ed4;
        case 0x407ed8u: goto label_407ed8;
        case 0x407edcu: goto label_407edc;
        case 0x407ee0u: goto label_407ee0;
        case 0x407ee4u: goto label_407ee4;
        default: break;
    }

    ctx->pc = 0x407ec0u;

label_407ec0:
    // 0x407ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x407ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_407ec4:
    // 0x407ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x407ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_407ec8:
    // 0x407ec8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x407ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_407ecc:
    // 0x407ecc: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x407eccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_407ed0:
    // 0x407ed0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x407ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_407ed4:
    // 0x407ed4: 0x40f809  jalr        $v0
label_407ed8:
    if (ctx->pc == 0x407ED8u) {
        ctx->pc = 0x407ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407ED4u;
        // 0x407ed8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407EDCu;
        goto label_407edc;
    }
    ctx->pc = 0x407ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x407EDCu);
        ctx->pc = 0x407ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407ED4u;
        // 0x407ed8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x407ED4u, 0x407EDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x407EDCu;
label_407edc:
    // 0x407edc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x407edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_407ee0:
    // 0x407ee0: 0x3e00008  jr          $ra
label_407ee4:
    if (ctx->pc == 0x407EE4u) {
        ctx->pc = 0x407EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407EE0u;
        // 0x407ee4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407EE8u;
        goto label_fallthrough_0x407ee0;
    }
    ctx->pc = 0x407EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x407EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407EE0u;
        // 0x407ee4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x407EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x407ee0:
    ctx->pc = 0x407EE8u;
}
