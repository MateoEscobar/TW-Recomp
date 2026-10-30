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

// Function: sub_002A7D58
// Address: 0x2a7d58 - 0x2a7e20
void sub_002A7D58_0x2a7d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7D58_0x2a7d58");
#endif

    switch (ctx->pc) {
        case 0x2a7da0u: goto label_2a7da0;
        case 0x2a7da8u: goto label_2a7da8;
        case 0x2a7db8u: goto label_2a7db8;
        case 0x2a7dc0u: goto label_2a7dc0;
        case 0x2a7de8u: goto label_2a7de8;
        case 0x2a7df4u: goto label_2a7df4;
        default: break;
    }

    ctx->pc = 0x2a7d58u;

    // 0x2a7d58: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2a7d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2a7d5c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2a7d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2a7d60: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2a7d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2a7d64: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2a7d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2a7d68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a7d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7d6c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2a7d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2a7d70: 0x59403  sra         $s2, $a1, 16
    ctx->pc = 0x2a7d70u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2a7d74: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a7d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a7d78: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2a7d78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7d7c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2a7d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2a7d80: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x2a7d80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7d84: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2a7d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x2a7d88: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2a7d88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7d8c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2a7d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2a7d90: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2a7d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2a7d94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a7d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a7d98: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2A7D98u;
    SET_GPR_U32(ctx, 31, 0x2A7DA0u);
    ctx->pc = 0x2A7D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7D98u;
    // 0x2a7d9c: 0x100b02d  daddu       $s6, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2A7D98u, 0x2A7DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7DA0u;
label_2a7da0:
    // 0x2a7da0: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2A7DA0u;
    SET_GPR_U32(ctx, 31, 0x2A7DA8u);
    ctx->pc = 0x2A7DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7DA0u;
    // 0x2a7da4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2A7DA0u, 0x2A7DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7DA8u;
label_2a7da8:
    // 0x2a7da8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A7DA8u;
    {
        const bool branch_taken_0x2a7da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7DA8u;
        // 0x2a7dac: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7da8) {
            ctx->pc = 0x2A7DF8u;
            goto label_2a7df8;
        }
    }
    ctx->pc = 0x2A7DB0u;
    // 0x2a7db0: 0xc087502  jal         func_21D408
    ctx->pc = 0x2A7DB0u;
    SET_GPR_U32(ctx, 31, 0x2A7DB8u);
    ctx->pc = 0x2A7DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7DB0u;
    // 0x2a7db4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2A7DB0u, 0x2A7DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7DB8u;
label_2a7db8:
    // 0x2a7db8: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2A7DB8u;
    SET_GPR_U32(ctx, 31, 0x2A7DC0u);
    ctx->pc = 0x2A7DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7DB8u;
    // 0x2a7dbc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2A7DB8u, 0x2A7DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7DC0u;
label_2a7dc0:
    // 0x2a7dc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a7dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7dc4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A7DC4u;
    {
        const bool branch_taken_0x2a7dc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7DC4u;
        // 0x2a7dc8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7dc4) {
            ctx->pc = 0x2A7DE8u;
            goto label_2a7de8;
        }
    }
    ctx->pc = 0x2A7DCCu;
    // 0x2a7dcc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2a7dccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7dd0: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2a7dd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7dd4: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x2a7dd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7dd8: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x2a7dd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7ddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a7ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7de0: 0xc0a9f88  jal         func_2A7E20
    ctx->pc = 0x2A7DE0u;
    SET_GPR_U32(ctx, 31, 0x2A7DE8u);
    ctx->pc = 0x2A7DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7DE0u;
    // 0x2a7de4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7E20u, 0x2A7DE0u, 0x2A7DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7DE8u;
label_2a7de8:
    // 0x2a7de8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a7de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7dec: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2A7DECu;
    SET_GPR_U32(ctx, 31, 0x2A7DF4u);
    ctx->pc = 0x2A7DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7DECu;
    // 0x2a7df0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2A7DECu, 0x2A7DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7DF4u;
label_2a7df4:
    // 0x2a7df4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2a7df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2a7df8:
    // 0x2a7df8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2a7df8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a7dfc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2a7dfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a7e00: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2a7e00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a7e04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a7e04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a7e08: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2a7e08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a7e0c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2a7e0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a7e10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a7e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7e14: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7E14u;
        // 0x2a7e18: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7E1Cu;
    // 0x2a7e1c: 0x0  nop
    ctx->pc = 0x2a7e1cu;
    // NOP
    ctx->pc = 0x2a7e20u;
}
