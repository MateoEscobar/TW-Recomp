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

// Function: sub_00420C08
// Address: 0x420c08 - 0x420c2c
void sub_00420C08_0x420c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420C08_0x420c08");
#endif

    switch (ctx->pc) {
        case 0x420c08u: goto label_420c08;
        case 0x420c0cu: goto label_420c0c;
        case 0x420c10u: goto label_420c10;
        case 0x420c14u: goto label_420c14;
        case 0x420c18u: goto label_420c18;
        case 0x420c1cu: goto label_420c1c;
        case 0x420c20u: goto label_420c20;
        case 0x420c24u: goto label_420c24;
        case 0x420c28u: goto label_420c28;
        default: break;
    }

    ctx->pc = 0x420c08u;

label_420c08:
    // 0x420c08: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x420c08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_420c0c:
    // 0x420c0c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_420c10:
    if (ctx->pc == 0x420C10u) {
        ctx->pc = 0x420C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420C0Cu;
        // 0x420c10: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420C14u;
        goto label_420c14;
    }
    ctx->pc = 0x420C0Cu;
    {
        const bool branch_taken_0x420c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x420C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420C0Cu;
        // 0x420c10: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420c0c) {
            ctx->pc = 0x420C74u;
            return;
        }
    }
    ctx->pc = 0x420C14u;
label_420c14:
    // 0x420c14: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x420c14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_420c18:
    // 0x420c18: 0x2442b750  addiu       $v0, $v0, -0x48B0
    ctx->pc = 0x420c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948688));
label_420c1c:
    // 0x420c1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x420c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_420c20:
    // 0x420c20: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x420c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_420c24:
    // 0x420c24: 0x800008  jr          $a0
label_420c28:
    if (ctx->pc == 0x420C28u) {
        ctx->pc = 0x420C2Cu;
        goto label_fallthrough_0x420c24;
    }
    ctx->pc = 0x420C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420C24u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x420c24:
    ctx->pc = 0x420C2Cu;
}
