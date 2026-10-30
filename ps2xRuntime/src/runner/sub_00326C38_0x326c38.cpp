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

// Function: sub_00326C38
// Address: 0x326c38 - 0x326c60
void sub_00326C38_0x326c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326C38_0x326c38");
#endif

    switch (ctx->pc) {
        case 0x326c38u: goto label_326c38;
        case 0x326c3cu: goto label_326c3c;
        case 0x326c40u: goto label_326c40;
        case 0x326c44u: goto label_326c44;
        case 0x326c48u: goto label_326c48;
        case 0x326c4cu: goto label_326c4c;
        case 0x326c50u: goto label_326c50;
        case 0x326c54u: goto label_326c54;
        case 0x326c58u: goto label_326c58;
        case 0x326c5cu: goto label_326c5c;
        default: break;
    }

    ctx->pc = 0x326c38u;

label_326c38:
    // 0x326c38: 0x2483ffe0  addiu       $v1, $a0, -0x20
    ctx->pc = 0x326c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
label_326c3c:
    // 0x326c3c: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x326c3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_326c40:
    // 0x326c40: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_326c44:
    if (ctx->pc == 0x326C44u) {
        ctx->pc = 0x326C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C40u;
        // 0x326c44: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326C48u;
        goto label_326c48;
    }
    ctx->pc = 0x326C40u;
    {
        const bool branch_taken_0x326c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C40u;
        // 0x326c44: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326c40) {
            ctx->pc = 0x326CA0u;
            return;
        }
    }
    ctx->pc = 0x326C48u;
label_326c48:
    // 0x326c48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x326c48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_326c4c:
    // 0x326c4c: 0x24424ee0  addiu       $v0, $v0, 0x4EE0
    ctx->pc = 0x326c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20192));
label_326c50:
    // 0x326c50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x326c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_326c54:
    // 0x326c54: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x326c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_326c58:
    // 0x326c58: 0x800008  jr          $a0
label_326c5c:
    if (ctx->pc == 0x326C5Cu) {
        ctx->pc = 0x326C60u;
        goto label_fallthrough_0x326c58;
    }
    ctx->pc = 0x326C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326C58u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x326c58:
    ctx->pc = 0x326C60u;
}
