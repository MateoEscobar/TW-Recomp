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

// Function: sub_001C4960
// Address: 0x1c4960 - 0x1c49d0
void sub_001C4960_0x1c4960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4960_0x1c4960");
#endif

    switch (ctx->pc) {
        case 0x1c4994u: goto label_1c4994;
        case 0x1c49a4u: goto label_1c49a4;
        case 0x1c49b0u: goto label_1c49b0;
        default: break;
    }

    ctx->pc = 0x1c4960u;

    // 0x1c4960: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c4960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c4964: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c4964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c4968: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1c4968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1c496c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c496cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4970: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1c4970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1c4974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4978: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c4978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c497c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C497Cu;
    {
        const bool branch_taken_0x1c497c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C497Cu;
        // 0x1c4980: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c497c) {
            ctx->pc = 0x1C49B8u;
            goto label_1c49b8;
        }
    }
    ctx->pc = 0x1C4984u;
    // 0x1c4984: 0x58180  sll         $s0, $a1, 6
    ctx->pc = 0x1c4984u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1c4988: 0x2112021  addu        $a0, $s0, $s1
    ctx->pc = 0x1c4988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1c498c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x1C498Cu;
    SET_GPR_U32(ctx, 31, 0x1C4994u);
    ctx->pc = 0x1C4990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C498Cu;
    // 0x1c4990: 0x24840944  addiu       $a0, $a0, 0x944 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2372));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C498Cu, 0x1C4994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4994u;
label_1c4994:
    // 0x1c4994: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C4994u;
    {
        const bool branch_taken_0x1c4994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4994u;
        // 0x1c4998: 0x2112021  addu        $a0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4994) {
            ctx->pc = 0x1C49B8u;
            goto label_1c49b8;
        }
    }
    ctx->pc = 0x1C499Cu;
    // 0x1c499c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x1C499Cu;
    SET_GPR_U32(ctx, 31, 0x1C49A4u);
    ctx->pc = 0x1C49A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C499Cu;
    // 0x1c49a0: 0x24840944  addiu       $a0, $a0, 0x944 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2372));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C499Cu, 0x1C49A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C49A4u;
label_1c49a4:
    // 0x1c49a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c49a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c49a8: 0xc07a6b0  jal         func_1E9AC0
    ctx->pc = 0x1C49A8u;
    SET_GPR_U32(ctx, 31, 0x1C49B0u);
    ctx->pc = 0x1C49ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C49A8u;
    // 0x1c49ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9AC0u, 0x1C49A8u, 0x1C49B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C49B0u;
label_1c49b0:
    // 0x1c49b0: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x1c49b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1c49b4: 0xac520934  sw          $s2, 0x934($v0)
    ctx->pc = 0x1c49b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2356), GPR_U32(ctx, 18));
label_1c49b8:
    // 0x1c49b8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1c49b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c49bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c49bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c49c0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1c49c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c49c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c49c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c49c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C49C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C49CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49C8u;
        // 0x1c49cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C49C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C49D0u;
}
