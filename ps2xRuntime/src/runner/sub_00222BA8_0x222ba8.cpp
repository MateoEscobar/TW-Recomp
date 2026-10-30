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

// Function: sub_00222BA8
// Address: 0x222ba8 - 0x222bd0
void sub_00222BA8_0x222ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222BA8_0x222ba8");
#endif

    switch (ctx->pc) {
        case 0x222ba8u: goto label_222ba8;
        case 0x222bacu: goto label_222bac;
        case 0x222bb0u: goto label_222bb0;
        case 0x222bb4u: goto label_222bb4;
        case 0x222bb8u: goto label_222bb8;
        case 0x222bbcu: goto label_222bbc;
        case 0x222bc0u: goto label_222bc0;
        case 0x222bc4u: goto label_222bc4;
        case 0x222bc8u: goto label_222bc8;
        case 0x222bccu: goto label_222bcc;
        default: break;
    }

    ctx->pc = 0x222ba8u;

label_222ba8:
    // 0x222ba8: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x222ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_222bac:
    // 0x222bac: 0x2c6200bf  sltiu       $v0, $v1, 0xBF
    ctx->pc = 0x222bacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)191) ? 1 : 0);
label_222bb0:
    // 0x222bb0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_222bb4:
    if (ctx->pc == 0x222BB4u) {
        ctx->pc = 0x222BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222BB0u;
        // 0x222bb4: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222BB8u;
        goto label_222bb8;
    }
    ctx->pc = 0x222BB0u;
    {
        const bool branch_taken_0x222bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222BB0u;
        // 0x222bb4: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222bb0) {
            ctx->pc = 0x222C18u;
            return;
        }
    }
    ctx->pc = 0x222BB8u;
label_222bb8:
    // 0x222bb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x222bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_222bbc:
    // 0x222bbc: 0x2442ad30  addiu       $v0, $v0, -0x52D0
    ctx->pc = 0x222bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946096));
label_222bc0:
    // 0x222bc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x222bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_222bc4:
    // 0x222bc4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x222bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_222bc8:
    // 0x222bc8: 0x800008  jr          $a0
label_222bcc:
    if (ctx->pc == 0x222BCCu) {
        ctx->pc = 0x222BD0u;
        goto label_fallthrough_0x222bc8;
    }
    ctx->pc = 0x222BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222BC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x222bc8:
    ctx->pc = 0x222BD0u;
}
