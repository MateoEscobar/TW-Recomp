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

// Function: sub_0030A738
// Address: 0x30a738 - 0x30a798
void sub_0030A738_0x30a738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A738_0x30a738");
#endif

    switch (ctx->pc) {
        case 0x30a750u: goto label_30a750;
        case 0x30a75cu: goto label_30a75c;
        case 0x30a77cu: goto label_30a77c;
        default: break;
    }

    ctx->pc = 0x30a738u;

    // 0x30a738: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30a738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30a73c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30a73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x30a740: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30a740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30a744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30a744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30a748: 0xc0c2982  jal         func_30A608
    ctx->pc = 0x30A748u;
    SET_GPR_U32(ctx, 31, 0x30A750u);
    ctx->pc = 0x30A74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A748u;
    // 0x30a74c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A608u, 0x30A748u, 0x30A750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A750u;
label_30a750:
    // 0x30a750: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x30a750u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30a754: 0xc0c2854  jal         func_30A150
    ctx->pc = 0x30A754u;
    SET_GPR_U32(ctx, 31, 0x30A75Cu);
    ctx->pc = 0x30A758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A754u;
    // 0x30a758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A150u, 0x30A754u, 0x30A75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A75Cu;
label_30a75c:
    // 0x30a75c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30a75cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a760: 0x10710008  beq         $v1, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x30A760u;
    {
        const bool branch_taken_0x30a760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x30A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A760u;
        // 0x30a764: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a760) {
            ctx->pc = 0x30A784u;
            goto label_30a784;
        }
    }
    ctx->pc = 0x30A768u;
    // 0x30a768: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30a768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30a76c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A76Cu;
    {
        const bool branch_taken_0x30a76c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30a76c) {
            ctx->pc = 0x30A770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A76Cu;
            // 0x30a770: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A784u;
            goto label_30a784;
        }
    }
    ctx->pc = 0x30A774u;
    // 0x30a774: 0xc0c2916  jal         func_30A458
    ctx->pc = 0x30A774u;
    SET_GPR_U32(ctx, 31, 0x30A77Cu);
    ctx->pc = 0x30A778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A774u;
    // 0x30a778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A458u, 0x30A774u, 0x30A77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A77Cu;
label_30a77c:
    // 0x30a77c: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x30a77cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x30a780: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x30a780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30a784:
    // 0x30a784: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x30a784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30a788: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30a788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30a78c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30a78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a790: 0x3e00008  jr          $ra
    ctx->pc = 0x30A790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A790u;
        // 0x30a794: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A798u;
}
