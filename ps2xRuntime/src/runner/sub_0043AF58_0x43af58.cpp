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

// Function: sub_0043AF58
// Address: 0x43af58 - 0x43afe0
void sub_0043AF58_0x43af58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043AF58_0x43af58");
#endif

    ctx->pc = 0x43af58u;

    // 0x43af58: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x43af58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x43af5c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x43af5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x43af60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43AF60u;
    {
        const bool branch_taken_0x43af60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43AF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43AF60u;
        // 0x43af64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43af60) {
            ctx->pc = 0x43AF70u;
            goto label_43af70;
        }
    }
    ctx->pc = 0x43AF68u;
    // 0x43af68: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x43af68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x43af6c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x43af6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_43af70:
    // 0x43af70: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x43af70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x43af74: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x43af74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x43af78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43AF78u;
    {
        const bool branch_taken_0x43af78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43af78) {
            ctx->pc = 0x43AF88u;
            goto label_43af88;
        }
    }
    ctx->pc = 0x43AF80u;
    // 0x43af80: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x43af80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x43af84: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x43af84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_43af88:
    // 0x43af88: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x43af88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x43af8c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x43af8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x43af90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43AF90u;
    {
        const bool branch_taken_0x43af90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43af90) {
            ctx->pc = 0x43AFA0u;
            goto label_43afa0;
        }
    }
    ctx->pc = 0x43AF98u;
    // 0x43af98: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x43af98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x43af9c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x43af9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_43afa0:
    // 0x43afa0: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x43afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x43afa4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x43afa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x43afa8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43AFA8u;
    {
        const bool branch_taken_0x43afa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43afa8) {
            ctx->pc = 0x43AFB8u;
            goto label_43afb8;
        }
    }
    ctx->pc = 0x43AFB0u;
    // 0x43afb0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x43afb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x43afb4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x43afb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_43afb8:
    // 0x43afb8: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43AFB8u;
    {
        const bool branch_taken_0x43afb8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x43AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43AFB8u;
        // 0x43afbc: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43afb8) {
            ctx->pc = 0x43AFD0u;
            goto label_43afd0;
        }
    }
    ctx->pc = 0x43AFC0u;
    // 0x43afc0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x43afc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x43afc4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x43afc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x43afc8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x43AFC8u;
    {
        const bool branch_taken_0x43afc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x43AFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43AFC8u;
        // 0x43afcc: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43afc8) {
            ctx->pc = 0x43AFD4u;
            goto label_43afd4;
        }
    }
    ctx->pc = 0x43AFD0u;
label_43afd0:
    // 0x43afd0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x43afd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43afd4:
    // 0x43afd4: 0x3e00008  jr          $ra
    ctx->pc = 0x43AFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43AFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43AFDCu;
    // 0x43afdc: 0x0  nop
    ctx->pc = 0x43afdcu;
    // NOP
    ctx->pc = 0x43afe0u;
}
