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

// Function: sub_003BF9D8
// Address: 0x3bf9d8 - 0x3bfa08
void sub_003BF9D8_0x3bf9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF9D8_0x3bf9d8");
#endif

    switch (ctx->pc) {
        case 0x3bf9d8u: goto label_3bf9d8;
        case 0x3bf9dcu: goto label_3bf9dc;
        case 0x3bf9e0u: goto label_3bf9e0;
        case 0x3bf9e4u: goto label_3bf9e4;
        case 0x3bf9e8u: goto label_3bf9e8;
        case 0x3bf9ecu: goto label_3bf9ec;
        case 0x3bf9f0u: goto label_3bf9f0;
        case 0x3bf9f4u: goto label_3bf9f4;
        case 0x3bf9f8u: goto label_3bf9f8;
        case 0x3bf9fcu: goto label_3bf9fc;
        case 0x3bfa00u: goto label_3bfa00;
        case 0x3bfa04u: goto label_3bfa04;
        default: break;
    }

    ctx->pc = 0x3bf9d8u;

label_3bf9d8:
    // 0x3bf9d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3bf9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3bf9dc:
    // 0x3bf9dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bf9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3bf9e0:
    // 0x3bf9e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3bf9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3bf9e4:
    // 0x3bf9e4: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3bf9e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3bf9e8:
    // 0x3bf9e8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3bf9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3bf9ec:
    // 0x3bf9ec: 0x40f809  jalr        $v0
label_3bf9f0:
    if (ctx->pc == 0x3BF9F0u) {
        ctx->pc = 0x3BF9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF9ECu;
        // 0x3bf9f0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF9F4u;
        goto label_3bf9f4;
    }
    ctx->pc = 0x3BF9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BF9F4u);
        ctx->pc = 0x3BF9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF9ECu;
        // 0x3bf9f0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF9ECu, 0x3BF9F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BF9F4u;
label_3bf9f4:
    // 0x3bf9f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bf9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3bf9f8:
    // 0x3bf9f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bf9f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bf9fc:
    // 0x3bf9fc: 0x3e00008  jr          $ra
label_3bfa00:
    if (ctx->pc == 0x3BFA00u) {
        ctx->pc = 0x3BFA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF9FCu;
        // 0x3bfa00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFA04u;
        goto label_3bfa04;
    }
    ctx->pc = 0x3BF9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BFA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF9FCu;
        // 0x3bfa00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF9FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BFA04u;
label_3bfa04:
    // 0x3bfa04: 0x0  nop
    ctx->pc = 0x3bfa04u;
    // NOP
    ctx->pc = 0x3bfa08u;
}
