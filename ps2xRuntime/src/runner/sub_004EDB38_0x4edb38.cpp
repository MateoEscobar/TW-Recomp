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

// Function: sub_004EDB38
// Address: 0x4edb38 - 0x4edba8
void sub_004EDB38_0x4edb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EDB38_0x4edb38");
#endif

    switch (ctx->pc) {
        case 0x4edb58u: goto label_4edb58;
        case 0x4edb74u: goto label_4edb74;
        default: break;
    }

    ctx->pc = 0x4edb38u;

    // 0x4edb38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4edb38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4edb3c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4edb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4edb40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4edb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4edb44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4edb44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4edb48: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4edb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4edb4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4edb4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4edb50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4edb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4edb54: 0x3c12006f  lui         $s2, 0x6F
    ctx->pc = 0x4edb54u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
label_4edb58:
    // 0x4edb58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4edb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4edb5c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4edb5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4edb60: 0x8e42bd30  lw          $v0, -0x42D0($s2)
    ctx->pc = 0x4edb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950192)));
    // 0x4edb64: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4EDB64u;
    {
        const bool branch_taken_0x4edb64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4EDB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDB64u;
        // 0x4edb68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4edb64) {
            ctx->pc = 0x4EDB84u;
            goto label_4edb84;
        }
    }
    ctx->pc = 0x4EDB6Cu;
    // 0x4edb6c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x4EDB6Cu;
    SET_GPR_U32(ctx, 31, 0x4EDB74u);
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x4EDB6Cu, 0x4EDB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EDB74u;
label_4edb74:
    // 0x4edb74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4EDB74u;
    {
        const bool branch_taken_0x4edb74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EDB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDB74u;
        // 0x4edb78: 0x2e220010  sltiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4edb74) {
            ctx->pc = 0x4EDB88u;
            goto label_4edb88;
        }
    }
    ctx->pc = 0x4EDB7Cu;
    // 0x4edb7c: 0x8e42bd30  lw          $v0, -0x42D0($s2)
    ctx->pc = 0x4edb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950192)));
    // 0x4edb80: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4edb80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4edb84:
    // 0x4edb84: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x4edb84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_4edb88:
    // 0x4edb88: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x4EDB88u;
    {
        const bool branch_taken_0x4edb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EDB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDB88u;
        // 0x4edb8c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4edb88) {
            ctx->pc = 0x4EDB58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4edb58;
        }
    }
    ctx->pc = 0x4EDB90u;
    // 0x4edb90: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4edb90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4edb94: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4edb94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4edb98: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4edb98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4edb9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4edb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4edba0: 0x3e00008  jr          $ra
    ctx->pc = 0x4EDBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EDBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDBA0u;
        // 0x4edba4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EDBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EDBA8u;
}
