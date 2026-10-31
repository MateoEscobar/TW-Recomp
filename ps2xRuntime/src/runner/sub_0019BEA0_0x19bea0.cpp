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

// Function: sub_0019BEA0
// Address: 0x19bea0 - 0x19bed0
void sub_0019BEA0_0x19bea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BEA0_0x19bea0");
#endif

    switch (ctx->pc) {
        case 0x19bea0u: goto label_19bea0;
        case 0x19bea4u: goto label_19bea4;
        case 0x19bea8u: goto label_19bea8;
        case 0x19beacu: goto label_19beac;
        case 0x19beb0u: goto label_19beb0;
        case 0x19beb4u: goto label_19beb4;
        case 0x19beb8u: goto label_19beb8;
        case 0x19bebcu: goto label_19bebc;
        case 0x19bec0u: goto label_19bec0;
        case 0x19bec4u: goto label_19bec4;
        case 0x19bec8u: goto label_19bec8;
        case 0x19beccu: goto label_19becc;
        default: break;
    }

    ctx->pc = 0x19bea0u;

label_19bea0:
    // 0x19bea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19bea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_19bea4:
    // 0x19bea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19bea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19bea8:
    // 0x19bea8: 0xc066efe  jal         func_19BBF8
label_19beac:
    if (ctx->pc == 0x19BEACu) {
        ctx->pc = 0x19BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BEA8u;
        // 0x19beac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BEB0u;
        goto label_19beb0;
    }
    ctx->pc = 0x19BEA8u;
    SET_GPR_U32(ctx, 31, 0x19BEB0u);
    ctx->pc = 0x19BEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BEA8u;
    // 0x19beac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BBF8u, 0x19BEA8u, 0x19BEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BEB0u;
label_19beb0:
    // 0x19beb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19beb4:
    // 0x19beb4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x19beb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_19beb8:
    // 0x19beb8: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x19beb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_19bebc:
    // 0x19bebc: 0xa0f809  jalr        $a1
label_19bec0:
    if (ctx->pc == 0x19BEC0u) {
        ctx->pc = 0x19BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BEBCu;
        // 0x19bec0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BEC4u;
        goto label_19bec4;
    }
    ctx->pc = 0x19BEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x19BEC4u);
        ctx->pc = 0x19BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BEBCu;
        // 0x19bec0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BEBCu, 0x19BEC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19BEC4u;
label_19bec4:
    // 0x19bec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19bec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19bec8:
    // 0x19bec8: 0x3e00008  jr          $ra
label_19becc:
    if (ctx->pc == 0x19BECCu) {
        ctx->pc = 0x19BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BEC8u;
        // 0x19becc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BED0u;
        goto label_fallthrough_0x19bec8;
    }
    ctx->pc = 0x19BEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BEC8u;
        // 0x19becc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19bec8:
    ctx->pc = 0x19BED0u;
}
