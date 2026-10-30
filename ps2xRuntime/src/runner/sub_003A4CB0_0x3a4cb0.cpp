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

// Function: sub_003A4CB0
// Address: 0x3a4cb0 - 0x3a4ce8
void sub_003A4CB0_0x3a4cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4CB0_0x3a4cb0");
#endif

    switch (ctx->pc) {
        case 0x3a4cc4u: goto label_3a4cc4;
        default: break;
    }

    ctx->pc = 0x3a4cb0u;

    // 0x3a4cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a4cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a4cb4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a4cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a4cb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a4cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a4cbc: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x3A4CBCu;
    SET_GPR_U32(ctx, 31, 0x3A4CC4u);
    ctx->pc = 0x3A4CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4CBCu;
    // 0x3a4cc0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x3A4CBCu, 0x3A4CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4CC4u;
label_3a4cc4:
    // 0x3a4cc4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A4CC4u;
    {
        const bool branch_taken_0x3a4cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4cc4) {
            ctx->pc = 0x3A4CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4CC4u;
            // 0x3a4cc8: 0xac500124  sw          $s0, 0x124($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4CD4u;
            goto label_3a4cd4;
        }
    }
    ctx->pc = 0x3A4CCCu;
    // 0x3a4ccc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A4CCCu;
    {
        const bool branch_taken_0x3a4ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4CCCu;
        // 0x3a4cd0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4ccc) {
            ctx->pc = 0x3A4CD8u;
            goto label_3a4cd8;
        }
    }
    ctx->pc = 0x3A4CD4u;
label_3a4cd4:
    // 0x3a4cd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a4cd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a4cd8:
    // 0x3a4cd8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a4cd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a4cdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a4cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4CE0u;
        // 0x3a4ce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4CE8u;
}
