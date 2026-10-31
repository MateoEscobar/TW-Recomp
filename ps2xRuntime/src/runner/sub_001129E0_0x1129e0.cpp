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

// Function: sub_001129E0
// Address: 0x1129e0 - 0x112a10
void sub_001129E0_0x1129e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001129E0_0x1129e0");
#endif

    switch (ctx->pc) {
        case 0x1129e0u: goto label_1129e0;
        case 0x1129e4u: goto label_1129e4;
        case 0x1129e8u: goto label_1129e8;
        case 0x1129ecu: goto label_1129ec;
        case 0x1129f0u: goto label_1129f0;
        case 0x1129f4u: goto label_1129f4;
        case 0x1129f8u: goto label_1129f8;
        case 0x1129fcu: goto label_1129fc;
        case 0x112a00u: goto label_112a00;
        case 0x112a04u: goto label_112a04;
        case 0x112a08u: goto label_112a08;
        case 0x112a0cu: goto label_112a0c;
        default: break;
    }

    ctx->pc = 0x1129e0u;

label_1129e0:
    // 0x1129e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1129e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1129e4:
    // 0x1129e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1129e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1129e8:
    // 0x1129e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1129e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1129ec:
    // 0x1129ec: 0x8c47bce4  lw          $a3, -0x431C($v0)
    ctx->pc = 0x1129ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950116)));
label_1129f0:
    // 0x1129f0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1129f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1129f4:
    // 0x1129f4: 0x846400e8  lh          $a0, 0xE8($v1)
    ctx->pc = 0x1129f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 232)));
label_1129f8:
    // 0x1129f8: 0x8c6200ec  lw          $v0, 0xEC($v1)
    ctx->pc = 0x1129f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 236)));
label_1129fc:
    // 0x1129fc: 0x40f809  jalr        $v0
label_112a00:
    if (ctx->pc == 0x112A00u) {
        ctx->pc = 0x112A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1129FCu;
        // 0x112a00: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112A04u;
        goto label_112a04;
    }
    ctx->pc = 0x1129FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x112A04u);
        ctx->pc = 0x112A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1129FCu;
        // 0x112a00: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1129FCu, 0x112A04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x112A04u;
label_112a04:
    // 0x112a04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_112a08:
    // 0x112a08: 0x3e00008  jr          $ra
label_112a0c:
    if (ctx->pc == 0x112A0Cu) {
        ctx->pc = 0x112A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A08u;
        // 0x112a0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112A10u;
        goto label_fallthrough_0x112a08;
    }
    ctx->pc = 0x112A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A08u;
        // 0x112a0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x112a08:
    ctx->pc = 0x112A10u;
}
