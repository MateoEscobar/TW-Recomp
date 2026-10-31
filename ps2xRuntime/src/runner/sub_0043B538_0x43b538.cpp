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

// Function: sub_0043B538
// Address: 0x43b538 - 0x43b5a0
void sub_0043B538_0x43b538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043B538_0x43b538");
#endif

    switch (ctx->pc) {
        case 0x43b554u: goto label_43b554;
        case 0x43b578u: goto label_43b578;
        default: break;
    }

    ctx->pc = 0x43b538u;

    // 0x43b538: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x43b538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x43b53c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x43b53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x43b540: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x43b540u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x43b544: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x43B544u;
    {
        const bool branch_taken_0x43b544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B544u;
        // 0x43b548: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b544) {
            ctx->pc = 0x43B564u;
            goto label_43b564;
        }
    }
    ctx->pc = 0x43B54Cu;
    // 0x43b54c: 0x3e00008  jr          $ra
    ctx->pc = 0x43B54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43B54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43B554u;
label_43b554:
    // 0x43b554: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x43b554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43b558: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x43b558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43b55c: 0x3e00008  jr          $ra
    ctx->pc = 0x43B55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B55Cu;
        // 0x43b560: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43B55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43B564u;
label_43b564:
    // 0x43b564: 0x24870014  addiu       $a3, $a0, 0x14
    ctx->pc = 0x43b564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x43b568: 0x24a20014  addiu       $v0, $a1, 0x14
    ctx->pc = 0x43b568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x43b56c: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x43b56cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x43b570: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x43b570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x43b574: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x43b574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_43b578:
    // 0x43b578: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x43b578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x43b57c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x43b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x43b580: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x43b580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x43b584: 0x5444fff3  bnel        $v0, $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x43B584u;
    {
        const bool branch_taken_0x43b584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x43b584) {
            ctx->pc = 0x43B588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43B584u;
            // 0x43b588: 0x44202b  sltu        $a0, $v0, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x43B554u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43b554;
        }
    }
    ctx->pc = 0x43B58Cu;
    // 0x43b58c: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x43b58cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x43b590: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x43B590u;
    {
        const bool branch_taken_0x43b590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43B594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B590u;
        // 0x43b594: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b590) {
            ctx->pc = 0x43B578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43b578;
        }
    }
    ctx->pc = 0x43B598u;
    // 0x43b598: 0x3e00008  jr          $ra
    ctx->pc = 0x43B598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B598u;
        // 0x43b59c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43B598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43B5A0u;
}
