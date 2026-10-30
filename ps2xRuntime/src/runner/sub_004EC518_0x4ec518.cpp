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

// Function: sub_004EC518
// Address: 0x4ec518 - 0x4ec580
void sub_004EC518_0x4ec518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC518_0x4ec518");
#endif

    switch (ctx->pc) {
        case 0x4ec548u: goto label_4ec548;
        case 0x4ec554u: goto label_4ec554;
        case 0x4ec560u: goto label_4ec560;
        case 0x4ec56cu: goto label_4ec56c;
        default: break;
    }

    ctx->pc = 0x4ec518u;

    // 0x4ec518: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ec518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ec51c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4ec51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4ec520: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4ec520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4ec524: 0x24429fd0  addiu       $v0, $v0, -0x6030
    ctx->pc = 0x4ec524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942672));
    // 0x4ec528: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ec528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4ec52c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ec52cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec530: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ec530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ec534: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ec534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec538: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ec538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4ec53c: 0x26040300  addiu       $a0, $s0, 0x300
    ctx->pc = 0x4ec53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x4ec540: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x4EC540u;
    SET_GPR_U32(ctx, 31, 0x4EC548u);
    ctx->pc = 0x4EC544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC540u;
    // 0x4ec544: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4EC540u, 0x4EC548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC548u;
label_4ec548:
    // 0x4ec548: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x4ec548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x4ec54c: 0xc06e410  jal         func_1B9040
    ctx->pc = 0x4EC54Cu;
    SET_GPR_U32(ctx, 31, 0x4EC554u);
    ctx->pc = 0x4EC550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC54Cu;
    // 0x4ec550: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x4EC54Cu, 0x4EC554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC554u;
label_4ec554:
    // 0x4ec554: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x4ec554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x4ec558: 0xc0733f0  jal         func_1CCFC0
    ctx->pc = 0x4EC558u;
    SET_GPR_U32(ctx, 31, 0x4EC560u);
    ctx->pc = 0x4EC55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC558u;
    // 0x4ec55c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x4EC558u, 0x4EC560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC560u;
label_4ec560:
    // 0x4ec560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ec560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec564: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x4EC564u;
    SET_GPR_U32(ctx, 31, 0x4EC56Cu);
    ctx->pc = 0x4EC568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC564u;
    // 0x4ec568: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4EC564u, 0x4EC56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC56Cu;
label_4ec56c:
    // 0x4ec56c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4ec56cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ec570: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ec570u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ec574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ec574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ec578: 0x3e00008  jr          $ra
    ctx->pc = 0x4EC578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EC57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC578u;
        // 0x4ec57c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EC578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EC580u;
}
