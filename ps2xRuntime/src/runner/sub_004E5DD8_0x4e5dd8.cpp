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

// Function: sub_004E5DD8
// Address: 0x4e5dd8 - 0x4e5e68
void sub_004E5DD8_0x4e5dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5DD8_0x4e5dd8");
#endif

    switch (ctx->pc) {
        case 0x4e5e20u: goto label_4e5e20;
        case 0x4e5e38u: goto label_4e5e38;
        default: break;
    }

    ctx->pc = 0x4e5dd8u;

    // 0x4e5dd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e5dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4e5ddc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4e5ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4e5de0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4e5de0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5de4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e5de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4e5de8: 0xb32823  subu        $a1, $a1, $s3
    ctx->pc = 0x4e5de8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x4e5dec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e5decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4e5df0: 0x59083  sra         $s2, $a1, 2
    ctx->pc = 0x4e5df0u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 5), 2));
    // 0x4e5df4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4e5df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4e5df8: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x4e5df8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4e5dfc: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4E5DFCu;
    {
        const bool branch_taken_0x4e5dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E5E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5DFCu;
        // 0x4e5e00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5dfc) {
            ctx->pc = 0x4E5E48u;
            goto label_4e5e48;
        }
    }
    ctx->pc = 0x4E5E04u;
    // 0x4e5e04: 0x2642fffe  addiu       $v0, $s2, -0x2
    ctx->pc = 0x4e5e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
    // 0x4e5e08: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x4e5e08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4e5e0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4e5e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4e5e10: 0x28043  sra         $s0, $v0, 1
    ctx->pc = 0x4e5e10u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4e5e14: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x4e5e14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4e5e18: 0x738821  addu        $s1, $v1, $s3
    ctx->pc = 0x4e5e18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x4e5e1c: 0x0  nop
    ctx->pc = 0x4e5e1cu;
    // NOP
label_4e5e20:
    // 0x4e5e20: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x4e5e20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e5e24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4e5e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5e28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e5e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5e2c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4e5e2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5e30: 0xc139724  jal         func_4E5C90
    ctx->pc = 0x4E5E30u;
    SET_GPR_U32(ctx, 31, 0x4E5E38u);
    ctx->pc = 0x4E5E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5E30u;
    // 0x4e5e34: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E5C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E5C90u, 0x4E5E30u, 0x4E5E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5E38u;
label_4e5e38:
    // 0x4e5e38: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4E5E38u;
    {
        const bool branch_taken_0x4e5e38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E5E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5E38u;
        // 0x4e5e3c: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5e38) {
            ctx->pc = 0x4E5E48u;
            goto label_4e5e48;
        }
    }
    ctx->pc = 0x4E5E40u;
    // 0x4e5e40: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x4E5E40u;
    {
        const bool branch_taken_0x4e5e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E5E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5E40u;
        // 0x4e5e44: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5e40) {
            ctx->pc = 0x4E5E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e5e20;
        }
    }
    ctx->pc = 0x4E5E48u;
label_4e5e48:
    // 0x4e5e48: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e5e48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e5e4c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4e5e4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e5e50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e5e50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e5e54: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4e5e54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e5e58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e5e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e5e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E5E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E5E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5E5Cu;
        // 0x4e5e60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E5E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E5E64u;
    // 0x4e5e64: 0x0  nop
    ctx->pc = 0x4e5e64u;
    // NOP
    ctx->pc = 0x4e5e68u;
}
