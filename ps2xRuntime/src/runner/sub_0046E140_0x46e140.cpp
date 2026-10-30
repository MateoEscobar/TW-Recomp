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

// Function: sub_0046E140
// Address: 0x46e140 - 0x46e168
void sub_0046E140_0x46e140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046E140_0x46e140");
#endif

    switch (ctx->pc) {
        case 0x46e140u: goto label_46e140;
        case 0x46e144u: goto label_46e144;
        case 0x46e148u: goto label_46e148;
        case 0x46e14cu: goto label_46e14c;
        case 0x46e150u: goto label_46e150;
        case 0x46e154u: goto label_46e154;
        case 0x46e158u: goto label_46e158;
        case 0x46e15cu: goto label_46e15c;
        case 0x46e160u: goto label_46e160;
        case 0x46e164u: goto label_46e164;
        default: break;
    }

    ctx->pc = 0x46e140u;

label_46e140:
    // 0x46e140: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x46e140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_46e144:
    // 0x46e144: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x46e144u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_46e148:
    // 0x46e148: 0x8c62ae20  lw          $v0, -0x51E0($v1)
    ctx->pc = 0x46e148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946336)));
label_46e14c:
    // 0x46e14c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x46e14cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_46e150:
    // 0x46e150: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46e150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_46e154:
    // 0x46e154: 0x40f809  jalr        $v0
label_46e158:
    if (ctx->pc == 0x46E158u) {
        ctx->pc = 0x46E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E154u;
        // 0x46e158: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E15Cu;
        goto label_46e15c;
    }
    ctx->pc = 0x46E154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46E15Cu);
        ctx->pc = 0x46E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E154u;
        // 0x46e158: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46E154u, 0x46E15Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46E15Cu;
label_46e15c:
    // 0x46e15c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46e15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_46e160:
    // 0x46e160: 0x3e00008  jr          $ra
label_46e164:
    if (ctx->pc == 0x46E164u) {
        ctx->pc = 0x46E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E160u;
        // 0x46e164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46E168u;
        goto label_fallthrough_0x46e160;
    }
    ctx->pc = 0x46E160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E160u;
        // 0x46e164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46E160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x46e160:
    ctx->pc = 0x46E168u;
}
