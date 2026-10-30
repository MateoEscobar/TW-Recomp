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

// Function: sub_002CD108
// Address: 0x2cd108 - 0x2cd130
void sub_002CD108_0x2cd108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD108_0x2cd108");
#endif

    switch (ctx->pc) {
        case 0x2cd108u: goto label_2cd108;
        case 0x2cd10cu: goto label_2cd10c;
        case 0x2cd110u: goto label_2cd110;
        case 0x2cd114u: goto label_2cd114;
        case 0x2cd118u: goto label_2cd118;
        case 0x2cd11cu: goto label_2cd11c;
        case 0x2cd120u: goto label_2cd120;
        case 0x2cd124u: goto label_2cd124;
        case 0x2cd128u: goto label_2cd128;
        case 0x2cd12cu: goto label_2cd12c;
        default: break;
    }

    ctx->pc = 0x2cd108u;

label_2cd108:
    // 0x2cd108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cd108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2cd10c:
    // 0x2cd10c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cd10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2cd110:
    // 0x2cd110: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2cd110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2cd114:
    // 0x2cd114: 0x84430038  lh          $v1, 0x38($v0)
    ctx->pc = 0x2cd114u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_2cd118:
    // 0x2cd118: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x2cd118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2cd11c:
    // 0x2cd11c: 0xa0f809  jalr        $a1
label_2cd120:
    if (ctx->pc == 0x2CD120u) {
        ctx->pc = 0x2CD120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD11Cu;
        // 0x2cd120: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD124u;
        goto label_2cd124;
    }
    ctx->pc = 0x2CD11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2CD124u);
        ctx->pc = 0x2CD120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD11Cu;
        // 0x2cd120: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD11Cu, 0x2CD124u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CD124u;
label_2cd124:
    // 0x2cd124: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cd124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cd128:
    // 0x2cd128: 0x3e00008  jr          $ra
label_2cd12c:
    if (ctx->pc == 0x2CD12Cu) {
        ctx->pc = 0x2CD12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD128u;
        // 0x2cd12c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD130u;
        goto label_fallthrough_0x2cd128;
    }
    ctx->pc = 0x2CD128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD128u;
        // 0x2cd12c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2cd128:
    ctx->pc = 0x2CD130u;
}
