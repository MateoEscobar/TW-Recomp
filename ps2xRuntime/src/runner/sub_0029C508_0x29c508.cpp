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

// Function: sub_0029C508
// Address: 0x29c508 - 0x29c570
void sub_0029C508_0x29c508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C508_0x29c508");
#endif

    switch (ctx->pc) {
        case 0x29c520u: goto label_29c520;
        default: break;
    }

    ctx->pc = 0x29c508u;

    // 0x29c508: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29c508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29c50c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29c50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x29c510: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29c510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29c518: 0xc087502  jal         func_21D408
    ctx->pc = 0x29C518u;
    SET_GPR_U32(ctx, 31, 0x29C520u);
    ctx->pc = 0x29C51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C518u;
    // 0x29c51c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29C518u, 0x29C520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C520u;
label_29c520:
    // 0x29c520: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29c520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c524: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x29c524u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x29c528: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x29c528u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x29c52c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29C52Cu;
    {
        const bool branch_taken_0x29c52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C52Cu;
        // 0x29c530: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c52c) {
            ctx->pc = 0x29C558u;
            goto label_29c558;
        }
    }
    ctx->pc = 0x29C534u;
    // 0x29c534: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x29c534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29c538: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x29c538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29c53c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29C53Cu;
    {
        const bool branch_taken_0x29c53c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29C540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C53Cu;
        // 0x29c540: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c53c) {
            ctx->pc = 0x29C560u;
            goto label_29c560;
        }
    }
    ctx->pc = 0x29C544u;
    // 0x29c544: 0x8c82020c  lw          $v0, 0x20C($a0)
    ctx->pc = 0x29c544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x29c548: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x29c548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x29c54c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x29c54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x29c550: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29C550u;
    {
        const bool branch_taken_0x29c550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x29C554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C550u;
        // 0x29c554: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c550) {
            ctx->pc = 0x29C564u;
            goto label_29c564;
        }
    }
    ctx->pc = 0x29C558u;
label_29c558:
    // 0x29c558: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29c558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c55c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29c55cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29c560:
    // 0x29c560: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x29c560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29c564:
    // 0x29c564: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c568: 0x3e00008  jr          $ra
    ctx->pc = 0x29C568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C568u;
        // 0x29c56c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C570u;
}
