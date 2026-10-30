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

// Function: sub_002234F8
// Address: 0x2234f8 - 0x223530
void sub_002234F8_0x2234f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002234F8_0x2234f8");
#endif

    switch (ctx->pc) {
        case 0x2234f8u: goto label_2234f8;
        case 0x2234fcu: goto label_2234fc;
        case 0x223500u: goto label_223500;
        case 0x223504u: goto label_223504;
        case 0x223508u: goto label_223508;
        case 0x22350cu: goto label_22350c;
        case 0x223510u: goto label_223510;
        case 0x223514u: goto label_223514;
        case 0x223518u: goto label_223518;
        case 0x22351cu: goto label_22351c;
        case 0x223520u: goto label_223520;
        case 0x223524u: goto label_223524;
        case 0x223528u: goto label_223528;
        case 0x22352cu: goto label_22352c;
        default: break;
    }

    ctx->pc = 0x2234f8u;

label_2234f8:
    // 0x2234f8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2234f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2234fc:
    // 0x2234fc: 0x8ca200d4  lw          $v0, 0xD4($a1)
    ctx->pc = 0x2234fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
label_223500:
    // 0x223500: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_223504:
    if (ctx->pc == 0x223504u) {
        ctx->pc = 0x223508u;
        goto label_223508;
    }
    ctx->pc = 0x223500u;
    {
        const bool branch_taken_0x223500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223500) {
            ctx->pc = 0x223540u;
            return;
        }
    }
    ctx->pc = 0x223508u;
label_223508:
    // 0x223508: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x223508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_22350c:
    // 0x22350c: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x22350cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_223510:
    // 0x223510: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_223514:
    if (ctx->pc == 0x223514u) {
        ctx->pc = 0x223514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223510u;
        // 0x223514: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223518u;
        goto label_223518;
    }
    ctx->pc = 0x223510u;
    {
        const bool branch_taken_0x223510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223510u;
        // 0x223514: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223510) {
            ctx->pc = 0x223540u;
            return;
        }
    }
    ctx->pc = 0x223518u;
label_223518:
    // 0x223518: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x223518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_22351c:
    // 0x22351c: 0x2442b330  addiu       $v0, $v0, -0x4CD0
    ctx->pc = 0x22351cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947632));
label_223520:
    // 0x223520: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x223520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_223524:
    // 0x223524: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x223524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_223528:
    // 0x223528: 0x800008  jr          $a0
label_22352c:
    if (ctx->pc == 0x22352Cu) {
        ctx->pc = 0x223530u;
        goto label_fallthrough_0x223528;
    }
    ctx->pc = 0x223528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223528u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x223528:
    ctx->pc = 0x223530u;
}
