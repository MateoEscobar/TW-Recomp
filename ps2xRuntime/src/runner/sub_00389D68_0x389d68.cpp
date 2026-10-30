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

// Function: sub_00389D68
// Address: 0x389d68 - 0x389de8
void sub_00389D68_0x389d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389D68_0x389d68");
#endif

    switch (ctx->pc) {
        case 0x389db0u: goto label_389db0;
        case 0x389db8u: goto label_389db8;
        case 0x389dc8u: goto label_389dc8;
        case 0x389dd0u: goto label_389dd0;
        default: break;
    }

    ctx->pc = 0x389d68u;

    // 0x389d68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x389d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x389d6c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x389d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x389d70: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x389d70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389d74: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x389d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x389d78: 0x2642ffee  addiu       $v0, $s2, -0x12
    ctx->pc = 0x389d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967278));
    // 0x389d7c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x389d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x389d80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x389d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x389d84: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x389d84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x389d88: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x389D88u;
    {
        const bool branch_taken_0x389d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x389D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389D88u;
        // 0x389d8c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389d88) {
            ctx->pc = 0x389DD0u;
            goto label_389dd0;
        }
    }
    ctx->pc = 0x389D90u;
    // 0x389d90: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x389d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x389d94: 0x8ca41210  lw          $a0, 0x1210($a1)
    ctx->pc = 0x389d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4624)));
    // 0x389d98: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x389d98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x389d9c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x389D9Cu;
    {
        const bool branch_taken_0x389d9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x389DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389D9Cu;
        // 0x389da0: 0x24b11210  addiu       $s1, $a1, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389d9c) {
            ctx->pc = 0x389DD0u;
            goto label_389dd0;
        }
    }
    ctx->pc = 0x389DA4u;
    // 0x389da4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x389da4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x389da8: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x389DA8u;
    SET_GPR_U32(ctx, 31, 0x389DB0u);
    ctx->pc = 0x389DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389DA8u;
    // 0x389dac: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x389DA8u, 0x389DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389DB0u;
label_389db0:
    // 0x389db0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x389DB0u;
    SET_GPR_U32(ctx, 31, 0x389DB8u);
    ctx->pc = 0x389DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389DB0u;
    // 0x389db4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x389DB0u, 0x389DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389DB8u;
label_389db8:
    // 0x389db8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x389db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x389dbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x389dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389dc0: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x389DC0u;
    SET_GPR_U32(ctx, 31, 0x389DC8u);
    ctx->pc = 0x389DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389DC0u;
    // 0x389dc4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x389DC0u, 0x389DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389DC8u;
label_389dc8:
    // 0x389dc8: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x389DC8u;
    SET_GPR_U32(ctx, 31, 0x389DD0u);
    ctx->pc = 0x389DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389DC8u;
    // 0x389dcc: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x389DC8u, 0x389DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389DD0u;
label_389dd0:
    // 0x389dd0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x389dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x389dd4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x389dd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x389dd8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x389dd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x389ddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x389ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x389de0: 0x3e00008  jr          $ra
    ctx->pc = 0x389DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389DE0u;
        // 0x389de4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389DE8u;
}
