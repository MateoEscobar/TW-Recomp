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

// Function: sub_00420B48
// Address: 0x420b48 - 0x420b6c
void sub_00420B48_0x420b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420B48_0x420b48");
#endif

    switch (ctx->pc) {
        case 0x420b48u: goto label_420b48;
        case 0x420b4cu: goto label_420b4c;
        case 0x420b50u: goto label_420b50;
        case 0x420b54u: goto label_420b54;
        case 0x420b58u: goto label_420b58;
        case 0x420b5cu: goto label_420b5c;
        case 0x420b60u: goto label_420b60;
        case 0x420b64u: goto label_420b64;
        case 0x420b68u: goto label_420b68;
        default: break;
    }

    ctx->pc = 0x420b48u;

label_420b48:
    // 0x420b48: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x420b48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_420b4c:
    // 0x420b4c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_420b50:
    if (ctx->pc == 0x420B50u) {
        ctx->pc = 0x420B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420B4Cu;
        // 0x420b50: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420B54u;
        goto label_420b54;
    }
    ctx->pc = 0x420B4Cu;
    {
        const bool branch_taken_0x420b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x420B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420B4Cu;
        // 0x420b50: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420b4c) {
            ctx->pc = 0x420B9Cu;
            return;
        }
    }
    ctx->pc = 0x420B54u;
label_420b54:
    // 0x420b54: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x420b54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_420b58:
    // 0x420b58: 0x2442b710  addiu       $v0, $v0, -0x48F0
    ctx->pc = 0x420b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948624));
label_420b5c:
    // 0x420b5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x420b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_420b60:
    // 0x420b60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x420b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_420b64:
    // 0x420b64: 0x800008  jr          $a0
label_420b68:
    if (ctx->pc == 0x420B68u) {
        ctx->pc = 0x420B6Cu;
        goto label_fallthrough_0x420b64;
    }
    ctx->pc = 0x420B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420B64u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x420b64:
    ctx->pc = 0x420B6Cu;
}
