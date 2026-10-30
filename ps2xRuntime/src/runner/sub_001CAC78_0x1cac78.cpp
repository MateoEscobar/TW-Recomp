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

// Function: sub_001CAC78
// Address: 0x1cac78 - 0x1cacc0
void sub_001CAC78_0x1cac78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CAC78_0x1cac78");
#endif

    switch (ctx->pc) {
        case 0x1cac94u: goto label_1cac94;
        default: break;
    }

    ctx->pc = 0x1cac78u;

    // 0x1cac78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cac78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cac7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cac7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cac80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cac80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cac84: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CAC84u;
    {
        const bool branch_taken_0x1cac84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC84u;
        // 0x1cac88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac84) {
            ctx->pc = 0x1CAC9Cu;
            goto label_1cac9c;
        }
    }
    ctx->pc = 0x1CAC8Cu;
    // 0x1cac8c: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x1CAC8Cu;
    SET_GPR_U32(ctx, 31, 0x1CAC94u);
    ctx->pc = 0x1CAC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAC8Cu;
    // 0x1cac90: 0x26040024  addiu       $a0, $s0, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x1CAC8Cu, 0x1CAC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAC94u;
label_1cac94:
    // 0x1cac94: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CAC94u;
    {
        const bool branch_taken_0x1cac94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cac94) {
            ctx->pc = 0x1CAC98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAC94u;
            // 0x1cac98: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CACB4u;
            goto label_1cacb4;
        }
    }
    ctx->pc = 0x1CAC9Cu;
label_1cac9c:
    // 0x1cac9c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1cac9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1caca0: 0xa2000048  sb          $zero, 0x48($s0)
    ctx->pc = 0x1caca0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x1caca4: 0xa2000024  sb          $zero, 0x24($s0)
    ctx->pc = 0x1caca4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x1caca8: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x1caca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x1cacac: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1cacacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1cacb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cacb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cacb4:
    // 0x1cacb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cacb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cacb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CACB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CACB8u;
        // 0x1cacbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CACB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CACC0u;
}
