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

// Function: sub_002B7D80
// Address: 0x2b7d80 - 0x2b7e00
void sub_002B7D80_0x2b7d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7D80_0x2b7d80");
#endif

    switch (ctx->pc) {
        case 0x2b7da4u: goto label_2b7da4;
        case 0x2b7dacu: goto label_2b7dac;
        case 0x2b7dbcu: goto label_2b7dbc;
        case 0x2b7dc4u: goto label_2b7dc4;
        case 0x2b7ddcu: goto label_2b7ddc;
        case 0x2b7de8u: goto label_2b7de8;
        default: break;
    }

    ctx->pc = 0x2b7d80u;

    // 0x2b7d80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b7d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b7d84: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2b7d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2b7d88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b7d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b7d8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b7d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7d90: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2b7d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2b7d94: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2b7d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2b7d98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b7d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b7d9c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2B7D9Cu;
    SET_GPR_U32(ctx, 31, 0x2B7DA4u);
    ctx->pc = 0x2B7DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7D9Cu;
    // 0x2b7da0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2B7D9Cu, 0x2B7DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7DA4u;
label_2b7da4:
    // 0x2b7da4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2B7DA4u;
    SET_GPR_U32(ctx, 31, 0x2B7DACu);
    ctx->pc = 0x2B7DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7DA4u;
    // 0x2b7da8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2B7DA4u, 0x2B7DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7DACu;
label_2b7dac:
    // 0x2b7dac: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B7DACu;
    {
        const bool branch_taken_0x2b7dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7DACu;
        // 0x2b7db0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7dac) {
            ctx->pc = 0x2B7DECu;
            goto label_2b7dec;
        }
    }
    ctx->pc = 0x2B7DB4u;
    // 0x2b7db4: 0xc087502  jal         func_21D408
    ctx->pc = 0x2B7DB4u;
    SET_GPR_U32(ctx, 31, 0x2B7DBCu);
    ctx->pc = 0x2B7DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7DB4u;
    // 0x2b7db8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B7DB4u, 0x2B7DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7DBCu;
label_2b7dbc:
    // 0x2b7dbc: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2B7DBCu;
    SET_GPR_U32(ctx, 31, 0x2B7DC4u);
    ctx->pc = 0x2B7DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7DBCu;
    // 0x2b7dc0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2B7DBCu, 0x2B7DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7DC4u;
label_2b7dc4:
    // 0x2b7dc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b7dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7dc8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B7DC8u;
    {
        const bool branch_taken_0x2b7dc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7DC8u;
        // 0x2b7dcc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7dc8) {
            ctx->pc = 0x2B7DDCu;
            goto label_2b7ddc;
        }
    }
    ctx->pc = 0x2B7DD0u;
    // 0x2b7dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7dd4: 0xc0adf80  jal         func_2B7E00
    ctx->pc = 0x2B7DD4u;
    SET_GPR_U32(ctx, 31, 0x2B7DDCu);
    ctx->pc = 0x2B7DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7DD4u;
    // 0x2b7dd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7E00u, 0x2B7DD4u, 0x2B7DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7DDCu;
label_2b7ddc:
    // 0x2b7ddc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b7ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7de0: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2B7DE0u;
    SET_GPR_U32(ctx, 31, 0x2B7DE8u);
    ctx->pc = 0x2B7DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7DE0u;
    // 0x2b7de4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2B7DE0u, 0x2B7DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7DE8u;
label_2b7de8:
    // 0x2b7de8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2b7de8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2b7dec:
    // 0x2b7dec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2b7decu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7df0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b7df0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7df4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b7df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7df8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7DF8u;
        // 0x2b7dfc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7E00u;
}
