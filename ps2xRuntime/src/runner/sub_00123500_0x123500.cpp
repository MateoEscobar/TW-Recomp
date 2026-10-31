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

// Function: sub_00123500
// Address: 0x123500 - 0x123588
void sub_00123500_0x123500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123500_0x123500");
#endif

    switch (ctx->pc) {
        case 0x12351cu: goto label_12351c;
        case 0x12352cu: goto label_12352c;
        case 0x123544u: goto label_123544;
        case 0x123560u: goto label_123560;
        default: break;
    }

    ctx->pc = 0x123500u;

    // 0x123500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x123500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x123504: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x123504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x123508: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x123508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12350c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12350cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123510: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x123510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x123514: 0xc089f98  jal         func_227E60
    ctx->pc = 0x123514u;
    SET_GPR_U32(ctx, 31, 0x12351Cu);
    ctx->pc = 0x123518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123514u;
    // 0x123518: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x123514u, 0x12351Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12351Cu;
label_12351c:
    // 0x12351c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x12351Cu;
    {
        const bool branch_taken_0x12351c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12351Cu;
        // 0x123520: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12351c) {
            ctx->pc = 0x123570u;
            goto label_123570;
        }
    }
    ctx->pc = 0x123524u;
    // 0x123524: 0xc088edc  jal         func_223B70
    ctx->pc = 0x123524u;
    SET_GPR_U32(ctx, 31, 0x12352Cu);
    ctx->pc = 0x123528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123524u;
    // 0x123528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x123524u, 0x12352Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12352Cu;
label_12352c:
    // 0x12352c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x12352Cu;
    {
        const bool branch_taken_0x12352c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12352Cu;
        // 0x123530: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12352c) {
            ctx->pc = 0x123568u;
            goto label_123568;
        }
    }
    ctx->pc = 0x123534u;
    // 0x123534: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x123534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x123538: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x123538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x12353c: 0xc10904c  jal         func_424130
    ctx->pc = 0x12353Cu;
    SET_GPR_U32(ctx, 31, 0x123544u);
    ctx->pc = 0x123540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12353Cu;
    // 0x123540: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x12353Cu, 0x123544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123544u;
label_123544:
    // 0x123544: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x123544u;
    {
        const bool branch_taken_0x123544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123544u;
        // 0x123548: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123544) {
            ctx->pc = 0x12356Cu;
            goto label_12356c;
        }
    }
    ctx->pc = 0x12354Cu;
    // 0x12354c: 0x8e050380  lw          $a1, 0x380($s0)
    ctx->pc = 0x12354cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x123550: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x123550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x123554: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x123554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x123558: 0xc107908  jal         func_41E420
    ctx->pc = 0x123558u;
    SET_GPR_U32(ctx, 31, 0x123560u);
    ctx->pc = 0x12355Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123558u;
    // 0x12355c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x123558u, 0x123560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123560u;
label_123560:
    // 0x123560: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x123560u;
    {
        const bool branch_taken_0x123560 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x123564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123560u;
        // 0x123564: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123560) {
            ctx->pc = 0x123570u;
            goto label_123570;
        }
    }
    ctx->pc = 0x123568u;
label_123568:
    // 0x123568: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x123568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12356c:
    // 0x12356c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12356cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_123570:
    // 0x123570: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x123570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123574: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x123574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x123578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12357c: 0x3e00008  jr          $ra
    ctx->pc = 0x12357Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12357Cu;
        // 0x123580: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12357Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123584u;
    // 0x123584: 0x0  nop
    ctx->pc = 0x123584u;
    // NOP
    ctx->pc = 0x123588u;
}
