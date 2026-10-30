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

// Function: sub_00143540
// Address: 0x143540 - 0x143590
void sub_00143540_0x143540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143540_0x143540");
#endif

    switch (ctx->pc) {
        case 0x143540u: goto label_143540;
        case 0x143544u: goto label_143544;
        case 0x143548u: goto label_143548;
        case 0x14354cu: goto label_14354c;
        case 0x143550u: goto label_143550;
        case 0x143554u: goto label_143554;
        case 0x143558u: goto label_143558;
        case 0x14355cu: goto label_14355c;
        case 0x143560u: goto label_143560;
        case 0x143564u: goto label_143564;
        case 0x143568u: goto label_143568;
        case 0x14356cu: goto label_14356c;
        case 0x143570u: goto label_143570;
        case 0x143574u: goto label_143574;
        case 0x143578u: goto label_143578;
        case 0x14357cu: goto label_14357c;
        case 0x143580u: goto label_143580;
        case 0x143584u: goto label_143584;
        case 0x143588u: goto label_143588;
        case 0x14358cu: goto label_14358c;
        default: break;
    }

    ctx->pc = 0x143540u;

label_143540:
    // 0x143540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_143544:
    // 0x143544: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x143544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_143548:
    // 0x143548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_14354c:
    // 0x14354c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14354cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_143550:
    // 0x143550: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x143550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_143554:
    // 0x143554: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x143554u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_143558:
    // 0x143558: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x143558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_14355c:
    // 0x14355c: 0x40f809  jalr        $v0
label_143560:
    if (ctx->pc == 0x143560u) {
        ctx->pc = 0x143560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14355Cu;
        // 0x143560: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143564u;
        goto label_143564;
    }
    ctx->pc = 0x14355Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143564u);
        ctx->pc = 0x143560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14355Cu;
        // 0x143560: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14355Cu, 0x143564u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143564u;
label_143564:
    // 0x143564: 0xc047e6c  jal         func_11F9B0
label_143568:
    if (ctx->pc == 0x143568u) {
        ctx->pc = 0x143568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143564u;
        // 0x143568: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14356Cu;
        goto label_14356c;
    }
    ctx->pc = 0x143564u;
    SET_GPR_U32(ctx, 31, 0x14356Cu);
    ctx->pc = 0x143568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143564u;
    // 0x143568: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x143564u, 0x14356Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14356Cu;
label_14356c:
    // 0x14356c: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
label_143570:
    if (ctx->pc == 0x143570u) {
        ctx->pc = 0x143570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14356Cu;
        // 0x143570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143574u;
        goto label_143574;
    }
    ctx->pc = 0x14356Cu;
    {
        const bool branch_taken_0x14356c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x143570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14356Cu;
        // 0x143570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14356c) {
            ctx->pc = 0x14357Cu;
            goto label_14357c;
        }
    }
    ctx->pc = 0x143574u;
label_143574:
    // 0x143574: 0xc047910  jal         func_11E440
label_143578:
    if (ctx->pc == 0x143578u) {
        ctx->pc = 0x143578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143574u;
        // 0x143578: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14357Cu;
        goto label_14357c;
    }
    ctx->pc = 0x143574u;
    SET_GPR_U32(ctx, 31, 0x14357Cu);
    ctx->pc = 0x143578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143574u;
    // 0x143578: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E440u, 0x143574u, 0x14357Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14357Cu;
label_14357c:
    // 0x14357c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14357cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_143580:
    // 0x143580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_143584:
    // 0x143584: 0x3e00008  jr          $ra
label_143588:
    if (ctx->pc == 0x143588u) {
        ctx->pc = 0x143588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143584u;
        // 0x143588: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14358Cu;
        goto label_14358c;
    }
    ctx->pc = 0x143584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143584u;
        // 0x143588: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14358Cu;
label_14358c:
    // 0x14358c: 0x0  nop
    ctx->pc = 0x14358cu;
    // NOP
    ctx->pc = 0x143590u;
}
