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

// Function: sub_0028D2E8
// Address: 0x28d2e8 - 0x28d358
void sub_0028D2E8_0x28d2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D2E8_0x28d2e8");
#endif

    switch (ctx->pc) {
        case 0x28d320u: goto label_28d320;
        case 0x28d330u: goto label_28d330;
        case 0x28d33cu: goto label_28d33c;
        default: break;
    }

    ctx->pc = 0x28d2e8u;

    // 0x28d2e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28d2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28d2ec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x28d2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x28d2f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x28d2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x28d2f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28d2f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d2f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28d2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28d2fc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x28d2fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d300: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x28d300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x28d304: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28d304u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d308: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28d308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28d30c: 0x8e02021c  lw          $v0, 0x21C($s0)
    ctx->pc = 0x28d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x28d310: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28D310u;
    {
        const bool branch_taken_0x28d310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D310u;
        // 0x28d314: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d310) {
            ctx->pc = 0x28D33Cu;
            goto label_28d33c;
        }
    }
    ctx->pc = 0x28D318u;
    // 0x28d318: 0xc0a354e  jal         func_28D538
    ctx->pc = 0x28D318u;
    SET_GPR_U32(ctx, 31, 0x28D320u);
    ctx->pc = 0x28D538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D538u, 0x28D318u, 0x28D320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D320u;
label_28d320:
    // 0x28d320: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28d320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28d324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d328: 0xc0a33f8  jal         func_28CFE0
    ctx->pc = 0x28D328u;
    SET_GPR_U32(ctx, 31, 0x28D330u);
    ctx->pc = 0x28D32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D328u;
    // 0x28d32c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x28D328u, 0x28D330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D330u;
label_28d330:
    // 0x28d330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28d330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d334: 0xc0a3464  jal         func_28D190
    ctx->pc = 0x28D334u;
    SET_GPR_U32(ctx, 31, 0x28D33Cu);
    ctx->pc = 0x28D338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D334u;
    // 0x28d338: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D190u, 0x28D334u, 0x28D33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D33Cu;
label_28d33c:
    // 0x28d33c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x28d33cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28d340: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x28d340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28d344: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28d344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d348: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x28d348u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d34c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28d34cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d350: 0x3e00008  jr          $ra
    ctx->pc = 0x28D350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D350u;
        // 0x28d354: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D358u;
}
