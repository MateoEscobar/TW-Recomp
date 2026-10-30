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

// Function: sub_0029A300
// Address: 0x29a300 - 0x29a358
void sub_0029A300_0x29a300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A300_0x29a300");
#endif

    switch (ctx->pc) {
        case 0x29a330u: goto label_29a330;
        default: break;
    }

    ctx->pc = 0x29a300u;

    // 0x29a300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29a304: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29a304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x29a308: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29a308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29a30c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29a30cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a310: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x29a310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x29a314: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x29A314u;
    {
        const bool branch_taken_0x29a314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a314) {
            ctx->pc = 0x29A318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A314u;
            // 0x29a318: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A34Cu;
            goto label_29a34c;
        }
    }
    ctx->pc = 0x29A31Cu;
    // 0x29a31c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x29a31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29a320: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x29A320u;
    {
        const bool branch_taken_0x29a320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a320) {
            ctx->pc = 0x29A324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A320u;
            // 0x29a324: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A34Cu;
            goto label_29a34c;
        }
    }
    ctx->pc = 0x29A328u;
    // 0x29a328: 0xc0e409a  jal         func_390268
    ctx->pc = 0x29A328u;
    SET_GPR_U32(ctx, 31, 0x29A330u);
    ctx->pc = 0x29A32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A328u;
    // 0x29a32c: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x29A328u, 0x29A330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A330u;
label_29a330:
    // 0x29a330: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x29A330u;
    {
        const bool branch_taken_0x29a330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a330) {
            ctx->pc = 0x29A334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A330u;
            // 0x29a334: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A34Cu;
            goto label_29a34c;
        }
    }
    ctx->pc = 0x29A338u;
    // 0x29a338: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x29a338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x29a33c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29a33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x29a340: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x29a340u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x29a344: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x29a344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x29a348: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29a348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29a34c:
    // 0x29a34c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29a34cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a350: 0x3e00008  jr          $ra
    ctx->pc = 0x29A350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A350u;
        // 0x29a354: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A358u;
}
