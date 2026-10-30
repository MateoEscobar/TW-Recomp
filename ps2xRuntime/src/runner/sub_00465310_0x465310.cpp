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

// Function: sub_00465310
// Address: 0x465310 - 0x465370
void sub_00465310_0x465310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465310_0x465310");
#endif

    switch (ctx->pc) {
        case 0x465340u: goto label_465340;
        default: break;
    }

    ctx->pc = 0x465310u;

    // 0x465310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x465310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x465314: 0x8f838494  lw          $v1, -0x7B6C($gp)
    ctx->pc = 0x465314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935700)));
    // 0x465318: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x465318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x46531c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46531cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x465320: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x465320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x465324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x465328: 0x2038821  addu        $s1, $s0, $v1
    ctx->pc = 0x465328u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x46532c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x46532cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x465330: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x465330u;
    {
        const bool branch_taken_0x465330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x465334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465330u;
        // 0x465334: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465330) {
            ctx->pc = 0x465358u;
            goto label_465358;
        }
    }
    ctx->pc = 0x465338u;
    // 0x465338: 0xc119826  jal         func_466098
    ctx->pc = 0x465338u;
    SET_GPR_U32(ctx, 31, 0x465340u);
    ctx->pc = 0x466098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466098u, 0x465338u, 0x465340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465340u;
label_465340:
    // 0x465340: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x465340u;
    {
        const bool branch_taken_0x465340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x465344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465340u;
        // 0x465344: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465340) {
            ctx->pc = 0x465350u;
            goto label_465350;
        }
    }
    ctx->pc = 0x465348u;
    // 0x465348: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x465348u;
    {
        const bool branch_taken_0x465348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465348u;
        // 0x46534c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465348) {
            ctx->pc = 0x465358u;
            goto label_465358;
        }
    }
    ctx->pc = 0x465350u;
label_465350:
    // 0x465350: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x465350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x465354: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x465354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_465358:
    // 0x465358: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x465358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46535c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46535cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x465360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x465360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x465364: 0x3e00008  jr          $ra
    ctx->pc = 0x465364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x465368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465364u;
        // 0x465368: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46536Cu;
    // 0x46536c: 0x0  nop
    ctx->pc = 0x46536cu;
    // NOP
    ctx->pc = 0x465370u;
}
