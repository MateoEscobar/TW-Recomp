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

// Function: sub_00315C58
// Address: 0x315c58 - 0x315c7c
void sub_00315C58_0x315c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315C58_0x315c58");
#endif

    switch (ctx->pc) {
        case 0x315c58u: goto label_315c58;
        case 0x315c5cu: goto label_315c5c;
        case 0x315c60u: goto label_315c60;
        case 0x315c64u: goto label_315c64;
        case 0x315c68u: goto label_315c68;
        case 0x315c6cu: goto label_315c6c;
        case 0x315c70u: goto label_315c70;
        case 0x315c74u: goto label_315c74;
        case 0x315c78u: goto label_315c78;
        default: break;
    }

    ctx->pc = 0x315c58u;

label_315c58:
    // 0x315c58: 0x2c820014  sltiu       $v0, $a0, 0x14
    ctx->pc = 0x315c58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_315c5c:
    // 0x315c5c: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_315c60:
    if (ctx->pc == 0x315C60u) {
        ctx->pc = 0x315C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C5Cu;
        // 0x315c60: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315C64u;
        goto label_315c64;
    }
    ctx->pc = 0x315C5Cu;
    {
        const bool branch_taken_0x315c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C5Cu;
        // 0x315c60: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315c5c) {
            ctx->pc = 0x315D60u;
            return;
        }
    }
    ctx->pc = 0x315C64u;
label_315c64:
    // 0x315c64: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x315c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_315c68:
    // 0x315c68: 0x2442faa0  addiu       $v0, $v0, -0x560
    ctx->pc = 0x315c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965920));
label_315c6c:
    // 0x315c6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x315c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_315c70:
    // 0x315c70: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x315c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_315c74:
    // 0x315c74: 0x800008  jr          $a0
label_315c78:
    if (ctx->pc == 0x315C78u) {
        ctx->pc = 0x315C7Cu;
        goto label_fallthrough_0x315c74;
    }
    ctx->pc = 0x315C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315C74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x315c74:
    ctx->pc = 0x315C7Cu;
}
