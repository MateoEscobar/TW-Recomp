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

// Function: sub_004ECD58
// Address: 0x4ecd58 - 0x4ecde8
void sub_004ECD58_0x4ecd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECD58_0x4ecd58");
#endif

    switch (ctx->pc) {
        case 0x4ecda0u: goto label_4ecda0;
        case 0x4ecdb8u: goto label_4ecdb8;
        default: break;
    }

    ctx->pc = 0x4ecd58u;

    // 0x4ecd58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4ecd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4ecd5c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4ecd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4ecd60: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4ecd60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ecd64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ecd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4ecd68: 0xb32823  subu        $a1, $a1, $s3
    ctx->pc = 0x4ecd68u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x4ecd6c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4ecd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4ecd70: 0x59083  sra         $s2, $a1, 2
    ctx->pc = 0x4ecd70u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 5), 2));
    // 0x4ecd74: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4ecd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4ecd78: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x4ecd78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4ecd7c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4ECD7Cu;
    {
        const bool branch_taken_0x4ecd7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ECD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECD7Cu;
        // 0x4ecd80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ecd7c) {
            ctx->pc = 0x4ECDC8u;
            goto label_4ecdc8;
        }
    }
    ctx->pc = 0x4ECD84u;
    // 0x4ecd84: 0x2642fffe  addiu       $v0, $s2, -0x2
    ctx->pc = 0x4ecd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
    // 0x4ecd88: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x4ecd88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4ecd8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ecd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ecd90: 0x28043  sra         $s0, $v0, 1
    ctx->pc = 0x4ecd90u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4ecd94: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x4ecd94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4ecd98: 0x738821  addu        $s1, $v1, $s3
    ctx->pc = 0x4ecd98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x4ecd9c: 0x0  nop
    ctx->pc = 0x4ecd9cu;
    // NOP
label_4ecda0:
    // 0x4ecda0: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x4ecda0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ecda4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4ecda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ecda8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ecda8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ecdac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4ecdacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ecdb0: 0xc13b31a  jal         func_4ECC68
    ctx->pc = 0x4ECDB0u;
    SET_GPR_U32(ctx, 31, 0x4ECDB8u);
    ctx->pc = 0x4ECDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ECDB0u;
    // 0x4ecdb4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ECC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ECC68u, 0x4ECDB0u, 0x4ECDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ECDB8u;
label_4ecdb8:
    // 0x4ecdb8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4ECDB8u;
    {
        const bool branch_taken_0x4ecdb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ECDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECDB8u;
        // 0x4ecdbc: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ecdb8) {
            ctx->pc = 0x4ECDC8u;
            goto label_4ecdc8;
        }
    }
    ctx->pc = 0x4ECDC0u;
    // 0x4ecdc0: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x4ECDC0u;
    {
        const bool branch_taken_0x4ecdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ECDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECDC0u;
        // 0x4ecdc4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ecdc0) {
            ctx->pc = 0x4ECDA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ecda0;
        }
    }
    ctx->pc = 0x4ECDC8u;
label_4ecdc8:
    // 0x4ecdc8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4ecdc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ecdcc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4ecdccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ecdd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ecdd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ecdd4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4ecdd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ecdd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ecdd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ecddc: 0x3e00008  jr          $ra
    ctx->pc = 0x4ECDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ECDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECDDCu;
        // 0x4ecde0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ECDDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ECDE4u;
    // 0x4ecde4: 0x0  nop
    ctx->pc = 0x4ecde4u;
    // NOP
    ctx->pc = 0x4ecde8u;
}
