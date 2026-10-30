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

// Function: sub_002A9D58
// Address: 0x2a9d58 - 0x2a9df8
void sub_002A9D58_0x2a9d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9D58_0x2a9d58");
#endif

    switch (ctx->pc) {
        case 0x2a9d84u: goto label_2a9d84;
        case 0x2a9d8cu: goto label_2a9d8c;
        case 0x2a9da0u: goto label_2a9da0;
        case 0x2a9dacu: goto label_2a9dac;
        case 0x2a9db4u: goto label_2a9db4;
        case 0x2a9dd0u: goto label_2a9dd0;
        case 0x2a9ddcu: goto label_2a9ddc;
        default: break;
    }

    ctx->pc = 0x2a9d58u;

    // 0x2a9d58: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a9d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a9d5c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2a9d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2a9d60: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2a9d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2a9d64: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2a9d64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9d68: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2a9d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2a9d6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a9d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9d70: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2a9d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2a9d74: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a9d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a9d78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a9d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a9d7c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2A9D7Cu;
    SET_GPR_U32(ctx, 31, 0x2A9D84u);
    ctx->pc = 0x2A9D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9D7Cu;
    // 0x2a9d80: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2A9D7Cu, 0x2A9D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9D84u;
label_2a9d84:
    // 0x2a9d84: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2A9D84u;
    SET_GPR_U32(ctx, 31, 0x2A9D8Cu);
    ctx->pc = 0x2A9D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9D84u;
    // 0x2a9d88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2A9D84u, 0x2A9D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9D8Cu;
label_2a9d8c:
    // 0x2a9d8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a9d8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9d90: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A9D90u;
    {
        const bool branch_taken_0x2a9d90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9d90) {
            ctx->pc = 0x2A9D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9D90u;
            // 0x2a9d94: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9DE0u;
            goto label_2a9de0;
        }
    }
    ctx->pc = 0x2A9D98u;
    // 0x2a9d98: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2A9D98u;
    SET_GPR_U32(ctx, 31, 0x2A9DA0u);
    ctx->pc = 0x2A9D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9D98u;
    // 0x2a9d9c: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A9D98u, 0x2A9DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9DA0u;
label_2a9da0:
    // 0x2a9da0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a9da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9da4: 0xc087502  jal         func_21D408
    ctx->pc = 0x2A9DA4u;
    SET_GPR_U32(ctx, 31, 0x2A9DACu);
    ctx->pc = 0x2A9DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9DA4u;
    // 0x2a9da8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2A9DA4u, 0x2A9DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9DACu;
label_2a9dac:
    // 0x2a9dac: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2A9DACu;
    SET_GPR_U32(ctx, 31, 0x2A9DB4u);
    ctx->pc = 0x2A9DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9DACu;
    // 0x2a9db0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2A9DACu, 0x2A9DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9DB4u;
label_2a9db4:
    // 0x2a9db4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a9db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9db8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A9DB8u;
    {
        const bool branch_taken_0x2a9db8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9DB8u;
        // 0x2a9dbc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9db8) {
            ctx->pc = 0x2A9DD0u;
            goto label_2a9dd0;
        }
    }
    ctx->pc = 0x2A9DC0u;
    // 0x2a9dc0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2a9dc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9dc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a9dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9dc8: 0xc0aa77e  jal         func_2A9DF8
    ctx->pc = 0x2A9DC8u;
    SET_GPR_U32(ctx, 31, 0x2A9DD0u);
    ctx->pc = 0x2A9DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9DC8u;
    // 0x2a9dcc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DF8u, 0x2A9DC8u, 0x2A9DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9DD0u;
label_2a9dd0:
    // 0x2a9dd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a9dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9dd4: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2A9DD4u;
    SET_GPR_U32(ctx, 31, 0x2A9DDCu);
    ctx->pc = 0x2A9DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9DD4u;
    // 0x2a9dd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2A9DD4u, 0x2A9DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9DDCu;
label_2a9ddc:
    // 0x2a9ddc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2a9ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2a9de0:
    // 0x2a9de0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2a9de0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a9de4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a9de4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a9de8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2a9de8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9dec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a9decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9df0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9DF0u;
        // 0x2a9df4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9DF8u;
}
