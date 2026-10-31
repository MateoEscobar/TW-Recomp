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

// Function: sub_002F8400
// Address: 0x2f8400 - 0x2f8468
void sub_002F8400_0x2f8400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8400_0x2f8400");
#endif

    switch (ctx->pc) {
        case 0x2f8430u: goto label_2f8430;
        case 0x2f843cu: goto label_2f843c;
        case 0x2f8450u: goto label_2f8450;
        default: break;
    }

    ctx->pc = 0x2f8400u;

    // 0x2f8400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f8400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f8404: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f8404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f8408: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2f8408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2f840c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f840cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f8410: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f8410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f8414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f8418: 0x9203002a  lbu         $v1, 0x2A($s0)
    ctx->pc = 0x2f8418u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x2f841c: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F841Cu;
    {
        const bool branch_taken_0x2f841c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f841c) {
            ctx->pc = 0x2F8420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F841Cu;
            // 0x2f8420: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8458u;
            goto label_2f8458;
        }
    }
    ctx->pc = 0x2F8424u;
    // 0x2f8424: 0x8cb10004  lw          $s1, 0x4($a1)
    ctx->pc = 0x2f8424u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f8428: 0xc087502  jal         func_21D408
    ctx->pc = 0x2F8428u;
    SET_GPR_U32(ctx, 31, 0x2F8430u);
    ctx->pc = 0x2F842Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8428u;
    // 0x2f842c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2F8428u, 0x2F8430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8430u;
label_2f8430:
    // 0x2f8430: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2f8430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f8434: 0xc0a408c  jal         func_290230
    ctx->pc = 0x2F8434u;
    SET_GPR_U32(ctx, 31, 0x2F843Cu);
    ctx->pc = 0x2F8438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8434u;
    // 0x2f8438: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x2F8434u, 0x2F843Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F843Cu;
label_2f843c:
    // 0x2f843c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F843Cu;
    {
        const bool branch_taken_0x2f843c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f843c) {
            ctx->pc = 0x2F8440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F843Cu;
            // 0x2f8440: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8454u;
            goto label_2f8454;
        }
    }
    ctx->pc = 0x2F8444u;
    // 0x2f8444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f8444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8448: 0xc0be02c  jal         func_2F80B0
    ctx->pc = 0x2F8448u;
    SET_GPR_U32(ctx, 31, 0x2F8450u);
    ctx->pc = 0x2F844Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8448u;
    // 0x2f844c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F80B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F80B0u, 0x2F8448u, 0x2F8450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8450u;
label_2f8450:
    // 0x2f8450: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2f8450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f8454:
    // 0x2f8454: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f8454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f8458:
    // 0x2f8458: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f8458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f845c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f845cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f8460: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8460u;
        // 0x2f8464: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8468u;
}
