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

// Function: sub_003387D0
// Address: 0x3387d0 - 0x338800
void sub_003387D0_0x3387d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003387D0_0x3387d0");
#endif

    switch (ctx->pc) {
        case 0x3387d0u: goto label_3387d0;
        case 0x3387d4u: goto label_3387d4;
        case 0x3387d8u: goto label_3387d8;
        case 0x3387dcu: goto label_3387dc;
        case 0x3387e0u: goto label_3387e0;
        case 0x3387e4u: goto label_3387e4;
        case 0x3387e8u: goto label_3387e8;
        case 0x3387ecu: goto label_3387ec;
        case 0x3387f0u: goto label_3387f0;
        case 0x3387f4u: goto label_3387f4;
        case 0x3387f8u: goto label_3387f8;
        case 0x3387fcu: goto label_3387fc;
        default: break;
    }

    ctx->pc = 0x3387d0u;

label_3387d0:
    // 0x3387d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3387d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3387d4:
    // 0x3387d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3387d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3387d8:
    // 0x3387d8: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x3387d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3387dc:
    // 0x3387dc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3387dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3387e0:
    // 0x3387e0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x3387e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_3387e4:
    // 0x3387e4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x3387e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_3387e8:
    // 0x3387e8: 0x60f809  jalr        $v1
label_3387ec:
    if (ctx->pc == 0x3387ECu) {
        ctx->pc = 0x3387ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3387E8u;
        // 0x3387ec: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3387F0u;
        goto label_3387f0;
    }
    ctx->pc = 0x3387E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3387F0u);
        ctx->pc = 0x3387ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3387E8u;
        // 0x3387ec: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3387E8u, 0x3387F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3387F0u;
label_3387f0:
    // 0x3387f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3387f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3387f4:
    // 0x3387f4: 0x3e00008  jr          $ra
label_3387f8:
    if (ctx->pc == 0x3387F8u) {
        ctx->pc = 0x3387F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3387F4u;
        // 0x3387f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3387FCu;
        goto label_3387fc;
    }
    ctx->pc = 0x3387F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3387F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3387F4u;
        // 0x3387f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3387F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3387FCu;
label_3387fc:
    // 0x3387fc: 0x0  nop
    ctx->pc = 0x3387fcu;
    // NOP
    ctx->pc = 0x338800u;
}
