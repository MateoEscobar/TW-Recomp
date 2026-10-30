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

// Function: sub_00162518
// Address: 0x162518 - 0x162568
void sub_00162518_0x162518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162518_0x162518");
#endif

    switch (ctx->pc) {
        case 0x162540u: goto label_162540;
        case 0x162554u: goto label_162554;
        default: break;
    }

    ctx->pc = 0x162518u;

    // 0x162518: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x162518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16251c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x16251cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x162520: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x162520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x162524: 0x24428900  addiu       $v0, $v0, -0x7700
    ctx->pc = 0x162524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936832));
    // 0x162528: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x162528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x16252c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16252cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162530: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x162530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162534: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x162534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162538: 0xc058966  jal         func_162598
    ctx->pc = 0x162538u;
    SET_GPR_U32(ctx, 31, 0x162540u);
    ctx->pc = 0x16253Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162538u;
    // 0x16253c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162598u, 0x162538u, 0x162540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162540u;
label_162540:
    // 0x162540: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x162540u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x162544: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x162544u;
    {
        const bool branch_taken_0x162544 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x162548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162544u;
        // 0x162548: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162544) {
            ctx->pc = 0x162558u;
            goto label_162558;
        }
    }
    ctx->pc = 0x16254Cu;
    // 0x16254c: 0xc10b208  jal         func_42C820
    ctx->pc = 0x16254Cu;
    SET_GPR_U32(ctx, 31, 0x162554u);
    ctx->pc = 0x162550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16254Cu;
    // 0x162550: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x16254Cu, 0x162554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162554u;
label_162554:
    // 0x162554: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x162554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_162558:
    // 0x162558: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x162558u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16255c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16255cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162560: 0x3e00008  jr          $ra
    ctx->pc = 0x162560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162560u;
        // 0x162564: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162568u;
}
