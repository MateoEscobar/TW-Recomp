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

// Function: sub_004B44C8
// Address: 0x4b44c8 - 0x4b4530
void sub_004B44C8_0x4b44c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B44C8_0x4b44c8");
#endif

    switch (ctx->pc) {
        case 0x4b44e4u: goto label_4b44e4;
        case 0x4b4508u: goto label_4b4508;
        default: break;
    }

    ctx->pc = 0x4b44c8u;

    // 0x4b44c8: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x4b44c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x4b44cc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x4b44ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4b44d0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4b44d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b44d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B44D4u;
    {
        const bool branch_taken_0x4b44d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B44D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B44D4u;
        // 0x4b44d8: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b44d4) {
            ctx->pc = 0x4B44F4u;
            goto label_4b44f4;
        }
    }
    ctx->pc = 0x4B44DCu;
    // 0x4b44dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4B44DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B44DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B44E4u;
label_4b44e4:
    // 0x4b44e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b44e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b44e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b44e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b44ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4B44ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B44F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B44ECu;
        // 0x4b44f0: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B44ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B44F4u;
label_4b44f4:
    // 0x4b44f4: 0x24870014  addiu       $a3, $a0, 0x14
    ctx->pc = 0x4b44f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x4b44f8: 0x24a20014  addiu       $v0, $a1, 0x14
    ctx->pc = 0x4b44f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x4b44fc: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x4b44fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x4b4500: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x4b4500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b4504: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x4b4504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_4b4508:
    // 0x4b4508: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x4b4508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x4b450c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4b450cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b4510: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4b4510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b4514: 0x5444fff3  bnel        $v0, $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x4B4514u;
    {
        const bool branch_taken_0x4b4514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x4b4514) {
            ctx->pc = 0x4B4518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B4514u;
            // 0x4b4518: 0x44202b  sltu        $a0, $v0, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B44E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b44e4;
        }
    }
    ctx->pc = 0x4B451Cu;
    // 0x4b451c: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x4b451cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4b4520: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4B4520u;
    {
        const bool branch_taken_0x4b4520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4520u;
        // 0x4b4524: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4520) {
            ctx->pc = 0x4B4508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b4508;
        }
    }
    ctx->pc = 0x4B4528u;
    // 0x4b4528: 0x3e00008  jr          $ra
    ctx->pc = 0x4B4528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4528u;
        // 0x4b452c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B4528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B4530u;
}
