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

// Function: sub_003DB4E0
// Address: 0x3db4e0 - 0x3db518
void sub_003DB4E0_0x3db4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB4E0_0x3db4e0");
#endif

    switch (ctx->pc) {
        case 0x3db4e0u: goto label_3db4e0;
        case 0x3db4e4u: goto label_3db4e4;
        case 0x3db4e8u: goto label_3db4e8;
        case 0x3db4ecu: goto label_3db4ec;
        case 0x3db4f0u: goto label_3db4f0;
        case 0x3db4f4u: goto label_3db4f4;
        case 0x3db4f8u: goto label_3db4f8;
        case 0x3db4fcu: goto label_3db4fc;
        case 0x3db500u: goto label_3db500;
        case 0x3db504u: goto label_3db504;
        case 0x3db508u: goto label_3db508;
        case 0x3db50cu: goto label_3db50c;
        case 0x3db510u: goto label_3db510;
        case 0x3db514u: goto label_3db514;
        default: break;
    }

    ctx->pc = 0x3db4e0u;

label_3db4e0:
    // 0x3db4e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3db4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3db4e4:
    // 0x3db4e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3db4e8:
    // 0x3db4e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3db4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3db4ec:
    // 0x3db4ec: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3db4ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3db4f0:
    // 0x3db4f0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3db4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3db4f4:
    // 0x3db4f4: 0x40f809  jalr        $v0
label_3db4f8:
    if (ctx->pc == 0x3DB4F8u) {
        ctx->pc = 0x3DB4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB4F4u;
        // 0x3db4f8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB4FCu;
        goto label_3db4fc;
    }
    ctx->pc = 0x3DB4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DB4FCu);
        ctx->pc = 0x3DB4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB4F4u;
        // 0x3db4f8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB4F4u, 0x3DB4FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DB4FCu;
label_3db4fc:
    // 0x3db4fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3db4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3db500:
    // 0x3db500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3db504:
    // 0x3db504: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3db504u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_3db508:
    // 0x3db508: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3db508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3db50c:
    // 0x3db50c: 0x3e00008  jr          $ra
label_3db510:
    if (ctx->pc == 0x3DB510u) {
        ctx->pc = 0x3DB510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB50Cu;
        // 0x3db510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB514u;
        goto label_3db514;
    }
    ctx->pc = 0x3DB50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB50Cu;
        // 0x3db510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB514u;
label_3db514:
    // 0x3db514: 0x0  nop
    ctx->pc = 0x3db514u;
    // NOP
    ctx->pc = 0x3db518u;
}
