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

// Function: sub_00215DA0
// Address: 0x215da0 - 0x215e78
void sub_00215DA0_0x215da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215DA0_0x215da0");
#endif

    switch (ctx->pc) {
        case 0x215dd0u: goto label_215dd0;
        case 0x215dd8u: goto label_215dd8;
        case 0x215de8u: goto label_215de8;
        case 0x215e20u: goto label_215e20;
        case 0x215e4cu: goto label_215e4c;
        case 0x215e5cu: goto label_215e5c;
        default: break;
    }

    ctx->pc = 0x215da0u;

    // 0x215da0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x215da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x215da4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x215da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x215da8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x215da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x215dac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x215dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x215db0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x215db0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x215db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x215db8: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x215db8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x215dbc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x215dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x215dc0: 0x8c7256d4  lw          $s2, 0x56D4($v1)
    ctx->pc = 0x215dc0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22228)));
    // 0x215dc4: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x215DC4u;
    {
        const bool branch_taken_0x215dc4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x215DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215DC4u;
        // 0x215dc8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215dc4) {
            ctx->pc = 0x215DF8u;
            goto label_215df8;
        }
    }
    ctx->pc = 0x215DCCu;
    // 0x215dcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x215dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_215dd0:
    // 0x215dd0: 0xc085728  jal         func_215CA0
    ctx->pc = 0x215DD0u;
    SET_GPR_U32(ctx, 31, 0x215DD8u);
    ctx->pc = 0x215DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215DD0u;
    // 0x215dd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215CA0u, 0x215DD0u, 0x215DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215DD8u;
label_215dd8:
    // 0x215dd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x215DD8u;
    {
        const bool branch_taken_0x215dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215DD8u;
        // 0x215ddc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215dd8) {
            ctx->pc = 0x215DE8u;
            goto label_215de8;
        }
    }
    ctx->pc = 0x215DE0u;
    // 0x215de0: 0xc08573a  jal         func_215CE8
    ctx->pc = 0x215DE0u;
    SET_GPR_U32(ctx, 31, 0x215DE8u);
    ctx->pc = 0x215DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215DE0u;
    // 0x215de4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215CE8u, 0x215DE0u, 0x215DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215DE8u;
label_215de8:
    // 0x215de8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x215de8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x215dec: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x215decu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x215df0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x215DF0u;
    {
        const bool branch_taken_0x215df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215DF0u;
        // 0x215df4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215df0) {
            ctx->pc = 0x215DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215dd0;
        }
    }
    ctx->pc = 0x215DF8u;
label_215df8:
    // 0x215df8: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x215df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x215dfc: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x215dfcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x215e00: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x215e00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x215e04: 0x12300015  beq         $s1, $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x215E04u;
    {
        const bool branch_taken_0x215e04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x215E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E04u;
        // 0x215e08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215e04) {
            ctx->pc = 0x215E5Cu;
            goto label_215e5c;
        }
    }
    ctx->pc = 0x215E0Cu;
    // 0x215e0c: 0x2111823  subu        $v1, $s0, $s1
    ctx->pc = 0x215e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x215e10: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x215e10u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x215e14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x215e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215e18: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x215E18u;
    {
        const bool branch_taken_0x215e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x215E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E18u;
        // 0x215e1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215e18) {
            ctx->pc = 0x215E38u;
            goto label_215e38;
        }
    }
    ctx->pc = 0x215E20u;
label_215e20:
    // 0x215e20: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x215e20u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x215e24: 0x0  nop
    ctx->pc = 0x215e24u;
    // NOP
    // 0x215e28: 0x0  nop
    ctx->pc = 0x215e28u;
    // NOP
    // 0x215e2c: 0x0  nop
    ctx->pc = 0x215e2cu;
    // NOP
    // 0x215e30: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x215E30u;
    {
        const bool branch_taken_0x215e30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x215E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E30u;
        // 0x215e34: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215e30) {
            ctx->pc = 0x215E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215e20;
        }
    }
    ctx->pc = 0x215E38u;
label_215e38:
    // 0x215e38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x215e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x215e3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e40: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x215e40u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x215e44: 0xc13b41a  jal         func_4ED068
    ctx->pc = 0x215E44u;
    SET_GPR_U32(ctx, 31, 0x215E4Cu);
    ctx->pc = 0x215E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215E44u;
    // 0x215e48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED068u, 0x215E44u, 0x215E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215E4Cu;
label_215e4c:
    // 0x215e4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x215e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x215e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e54: 0xc13b4e2  jal         func_4ED388
    ctx->pc = 0x215E54u;
    SET_GPR_U32(ctx, 31, 0x215E5Cu);
    ctx->pc = 0x215E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215E54u;
    // 0x215e58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED388u, 0x215E54u, 0x215E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215E5Cu;
label_215e5c:
    // 0x215e5c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x215e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215e60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x215e60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215e64: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x215e64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215e68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x215e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x215E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E6Cu;
        // 0x215e70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215E74u;
    // 0x215e74: 0x0  nop
    ctx->pc = 0x215e74u;
    // NOP
    ctx->pc = 0x215e78u;
}
