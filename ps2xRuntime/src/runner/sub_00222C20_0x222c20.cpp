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

// Function: sub_00222C20
// Address: 0x222c20 - 0x222c48
void sub_00222C20_0x222c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222C20_0x222c20");
#endif

    switch (ctx->pc) {
        case 0x222c20u: goto label_222c20;
        case 0x222c24u: goto label_222c24;
        case 0x222c28u: goto label_222c28;
        case 0x222c2cu: goto label_222c2c;
        case 0x222c30u: goto label_222c30;
        case 0x222c34u: goto label_222c34;
        case 0x222c38u: goto label_222c38;
        case 0x222c3cu: goto label_222c3c;
        case 0x222c40u: goto label_222c40;
        case 0x222c44u: goto label_222c44;
        default: break;
    }

    ctx->pc = 0x222c20u;

label_222c20:
    // 0x222c20: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x222c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_222c24:
    // 0x222c24: 0x2c6200bf  sltiu       $v0, $v1, 0xBF
    ctx->pc = 0x222c24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)191) ? 1 : 0);
label_222c28:
    // 0x222c28: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_222c2c:
    if (ctx->pc == 0x222C2Cu) {
        ctx->pc = 0x222C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222C28u;
        // 0x222c2c: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222C30u;
        goto label_222c30;
    }
    ctx->pc = 0x222C28u;
    {
        const bool branch_taken_0x222c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222C28u;
        // 0x222c2c: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c28) {
            ctx->pc = 0x222C90u;
            return;
        }
    }
    ctx->pc = 0x222C30u;
label_222c30:
    // 0x222c30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x222c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_222c34:
    // 0x222c34: 0x2442b030  addiu       $v0, $v0, -0x4FD0
    ctx->pc = 0x222c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946864));
label_222c38:
    // 0x222c38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x222c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_222c3c:
    // 0x222c3c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x222c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_222c40:
    // 0x222c40: 0x800008  jr          $a0
label_222c44:
    if (ctx->pc == 0x222C44u) {
        ctx->pc = 0x222C48u;
        goto label_fallthrough_0x222c40;
    }
    ctx->pc = 0x222C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222C40u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x222c40:
    ctx->pc = 0x222C48u;
}
