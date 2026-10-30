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

// Function: sub_00223548
// Address: 0x223548 - 0x223580
void sub_00223548_0x223548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223548_0x223548");
#endif

    switch (ctx->pc) {
        case 0x223548u: goto label_223548;
        case 0x22354cu: goto label_22354c;
        case 0x223550u: goto label_223550;
        case 0x223554u: goto label_223554;
        case 0x223558u: goto label_223558;
        case 0x22355cu: goto label_22355c;
        case 0x223560u: goto label_223560;
        case 0x223564u: goto label_223564;
        case 0x223568u: goto label_223568;
        case 0x22356cu: goto label_22356c;
        case 0x223570u: goto label_223570;
        case 0x223574u: goto label_223574;
        case 0x223578u: goto label_223578;
        case 0x22357cu: goto label_22357c;
        default: break;
    }

    ctx->pc = 0x223548u;

label_223548:
    // 0x223548: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x223548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22354c:
    // 0x22354c: 0x8ca200d4  lw          $v0, 0xD4($a1)
    ctx->pc = 0x22354cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
label_223550:
    // 0x223550: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_223554:
    if (ctx->pc == 0x223554u) {
        ctx->pc = 0x223558u;
        goto label_223558;
    }
    ctx->pc = 0x223550u;
    {
        const bool branch_taken_0x223550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223550) {
            ctx->pc = 0x223590u;
            return;
        }
    }
    ctx->pc = 0x223558u;
label_223558:
    // 0x223558: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x223558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_22355c:
    // 0x22355c: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x22355cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_223560:
    // 0x223560: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_223564:
    if (ctx->pc == 0x223564u) {
        ctx->pc = 0x223564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223560u;
        // 0x223564: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223568u;
        goto label_223568;
    }
    ctx->pc = 0x223560u;
    {
        const bool branch_taken_0x223560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223560u;
        // 0x223564: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223560) {
            ctx->pc = 0x223590u;
            return;
        }
    }
    ctx->pc = 0x223568u;
label_223568:
    // 0x223568: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x223568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_22356c:
    // 0x22356c: 0x2442b350  addiu       $v0, $v0, -0x4CB0
    ctx->pc = 0x22356cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947664));
label_223570:
    // 0x223570: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x223570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_223574:
    // 0x223574: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x223574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_223578:
    // 0x223578: 0x800008  jr          $a0
label_22357c:
    if (ctx->pc == 0x22357Cu) {
        ctx->pc = 0x223580u;
        goto label_fallthrough_0x223578;
    }
    ctx->pc = 0x223578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223578u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x223578:
    ctx->pc = 0x223580u;
}
