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

// Function: sub_004AF9D8
// Address: 0x4af9d8 - 0x4afa08
void sub_004AF9D8_0x4af9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AF9D8_0x4af9d8");
#endif

    switch (ctx->pc) {
        case 0x4af9d8u: goto label_4af9d8;
        case 0x4af9dcu: goto label_4af9dc;
        case 0x4af9e0u: goto label_4af9e0;
        case 0x4af9e4u: goto label_4af9e4;
        case 0x4af9e8u: goto label_4af9e8;
        case 0x4af9ecu: goto label_4af9ec;
        case 0x4af9f0u: goto label_4af9f0;
        case 0x4af9f4u: goto label_4af9f4;
        case 0x4af9f8u: goto label_4af9f8;
        case 0x4af9fcu: goto label_4af9fc;
        case 0x4afa00u: goto label_4afa00;
        case 0x4afa04u: goto label_4afa04;
        default: break;
    }

    ctx->pc = 0x4af9d8u;

label_4af9d8:
    // 0x4af9d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4af9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4af9dc:
    // 0x4af9dc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x4af9dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4af9e0:
    // 0x4af9e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4af9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4af9e4:
    // 0x4af9e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4af9e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4af9e8:
    // 0x4af9e8: 0x8c880050  lw          $t0, 0x50($a0)
    ctx->pc = 0x4af9e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4af9ec:
    // 0x4af9ec: 0x85030040  lh          $v1, 0x40($t0)
    ctx->pc = 0x4af9ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 64)));
label_4af9f0:
    // 0x4af9f0: 0x8d020044  lw          $v0, 0x44($t0)
    ctx->pc = 0x4af9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
label_4af9f4:
    // 0x4af9f4: 0x40f809  jalr        $v0
label_4af9f8:
    if (ctx->pc == 0x4AF9F8u) {
        ctx->pc = 0x4AF9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF9F4u;
        // 0x4af9f8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AF9FCu;
        goto label_4af9fc;
    }
    ctx->pc = 0x4AF9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4AF9FCu);
        ctx->pc = 0x4AF9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF9F4u;
        // 0x4af9f8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AF9F4u, 0x4AF9FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4AF9FCu;
label_4af9fc:
    // 0x4af9fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4af9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4afa00:
    // 0x4afa00: 0x3e00008  jr          $ra
label_4afa04:
    if (ctx->pc == 0x4AFA04u) {
        ctx->pc = 0x4AFA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFA00u;
        // 0x4afa04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AFA08u;
        goto label_fallthrough_0x4afa00;
    }
    ctx->pc = 0x4AFA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFA00u;
        // 0x4afa04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4afa00:
    ctx->pc = 0x4AFA08u;
}
