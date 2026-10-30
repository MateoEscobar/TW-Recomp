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

// Function: sub_001EBAF8
// Address: 0x1ebaf8 - 0x1ebb20
void sub_001EBAF8_0x1ebaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EBAF8_0x1ebaf8");
#endif

    switch (ctx->pc) {
        case 0x1ebaf8u: goto label_1ebaf8;
        case 0x1ebafcu: goto label_1ebafc;
        case 0x1ebb00u: goto label_1ebb00;
        case 0x1ebb04u: goto label_1ebb04;
        case 0x1ebb08u: goto label_1ebb08;
        case 0x1ebb0cu: goto label_1ebb0c;
        case 0x1ebb10u: goto label_1ebb10;
        case 0x1ebb14u: goto label_1ebb14;
        case 0x1ebb18u: goto label_1ebb18;
        case 0x1ebb1cu: goto label_1ebb1c;
        default: break;
    }

    ctx->pc = 0x1ebaf8u;

label_1ebaf8:
    // 0x1ebaf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ebaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ebafc:
    // 0x1ebafc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ebafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ebb00:
    // 0x1ebb00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ebb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ebb04:
    // 0x1ebb04: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x1ebb04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1ebb08:
    // 0x1ebb08: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x1ebb08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1ebb0c:
    // 0x1ebb0c: 0xa0f809  jalr        $a1
label_1ebb10:
    if (ctx->pc == 0x1EBB10u) {
        ctx->pc = 0x1EBB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB0Cu;
        // 0x1ebb10: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBB14u;
        goto label_1ebb14;
    }
    ctx->pc = 0x1EBB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1EBB14u);
        ctx->pc = 0x1EBB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB0Cu;
        // 0x1ebb10: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBB0Cu, 0x1EBB14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBB14u;
label_1ebb14:
    // 0x1ebb14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ebb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ebb18:
    // 0x1ebb18: 0x3e00008  jr          $ra
label_1ebb1c:
    if (ctx->pc == 0x1EBB1Cu) {
        ctx->pc = 0x1EBB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB18u;
        // 0x1ebb1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBB20u;
        goto label_fallthrough_0x1ebb18;
    }
    ctx->pc = 0x1EBB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB18u;
        // 0x1ebb1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ebb18:
    ctx->pc = 0x1EBB20u;
}
