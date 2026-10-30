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

// Function: sub_002FB2F0
// Address: 0x2fb2f0 - 0x2fb338
void sub_002FB2F0_0x2fb2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB2F0_0x2fb2f0");
#endif

    switch (ctx->pc) {
        case 0x2fb318u: goto label_2fb318;
        default: break;
    }

    ctx->pc = 0x2fb2f0u;

    // 0x2fb2f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fb2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fb2f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fb2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb2f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fb2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fb2fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fb2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fb300: 0x8c900014  lw          $s0, 0x14($a0)
    ctx->pc = 0x2fb300u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2fb304: 0x56020008  bnel        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FB304u;
    {
        const bool branch_taken_0x2fb304 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fb304) {
            ctx->pc = 0x2FB308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB304u;
            // 0x2fb308: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB328u;
            goto label_2fb328;
        }
    }
    ctx->pc = 0x2FB30Cu;
    // 0x2fb30c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fb30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fb310: 0xc088f0c  jal         func_223C30
    ctx->pc = 0x2FB310u;
    SET_GPR_U32(ctx, 31, 0x2FB318u);
    ctx->pc = 0x2FB314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB310u;
    // 0x2fb314: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C30u, 0x2FB310u, 0x2FB318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB318u;
label_2fb318:
    // 0x2fb318: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2fb318u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb31c: 0x10700002  beq         $v1, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FB31Cu;
    {
        const bool branch_taken_0x2fb31c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x2FB320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB31Cu;
        // 0x2fb320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb31c) {
            ctx->pc = 0x2FB328u;
            goto label_2fb328;
        }
    }
    ctx->pc = 0x2FB324u;
    // 0x2fb324: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fb324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2fb328:
    // 0x2fb328: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fb328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fb32c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fb32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb330: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB330u;
        // 0x2fb334: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB338u;
}
