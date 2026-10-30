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

// Function: sub_00338830
// Address: 0x338830 - 0x338860
void sub_00338830_0x338830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338830_0x338830");
#endif

    switch (ctx->pc) {
        case 0x338830u: goto label_338830;
        case 0x338834u: goto label_338834;
        case 0x338838u: goto label_338838;
        case 0x33883cu: goto label_33883c;
        case 0x338840u: goto label_338840;
        case 0x338844u: goto label_338844;
        case 0x338848u: goto label_338848;
        case 0x33884cu: goto label_33884c;
        case 0x338850u: goto label_338850;
        case 0x338854u: goto label_338854;
        case 0x338858u: goto label_338858;
        case 0x33885cu: goto label_33885c;
        default: break;
    }

    ctx->pc = 0x338830u;

label_338830:
    // 0x338830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x338830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_338834:
    // 0x338834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x338834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_338838:
    // 0x338838: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x338838u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_33883c:
    // 0x33883c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x33883cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_338840:
    // 0x338840: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x338840u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_338844:
    // 0x338844: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x338844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_338848:
    // 0x338848: 0x40f809  jalr        $v0
label_33884c:
    if (ctx->pc == 0x33884Cu) {
        ctx->pc = 0x33884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338848u;
        // 0x33884c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338850u;
        goto label_338850;
    }
    ctx->pc = 0x338848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x338850u);
        ctx->pc = 0x33884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338848u;
        // 0x33884c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338848u, 0x338850u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x338850u;
label_338850:
    // 0x338850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_338854:
    // 0x338854: 0x3e00008  jr          $ra
label_338858:
    if (ctx->pc == 0x338858u) {
        ctx->pc = 0x338858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338854u;
        // 0x338858: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33885Cu;
        goto label_33885c;
    }
    ctx->pc = 0x338854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338854u;
        // 0x338858: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33885Cu;
label_33885c:
    // 0x33885c: 0x0  nop
    ctx->pc = 0x33885cu;
    // NOP
    ctx->pc = 0x338860u;
}
