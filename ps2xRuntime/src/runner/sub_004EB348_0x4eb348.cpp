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

// Function: sub_004EB348
// Address: 0x4eb348 - 0x4eb3d8
void sub_004EB348_0x4eb348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EB348_0x4eb348");
#endif

    switch (ctx->pc) {
        case 0x4eb390u: goto label_4eb390;
        case 0x4eb3a8u: goto label_4eb3a8;
        default: break;
    }

    ctx->pc = 0x4eb348u;

    // 0x4eb348: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4eb348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4eb34c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4eb34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4eb350: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4eb350u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb354: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4eb354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4eb358: 0xb32823  subu        $a1, $a1, $s3
    ctx->pc = 0x4eb358u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x4eb35c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4eb35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4eb360: 0x59083  sra         $s2, $a1, 2
    ctx->pc = 0x4eb360u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 5), 2));
    // 0x4eb364: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4eb364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4eb368: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x4eb368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4eb36c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4EB36Cu;
    {
        const bool branch_taken_0x4eb36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EB370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB36Cu;
        // 0x4eb370: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb36c) {
            ctx->pc = 0x4EB3B8u;
            goto label_4eb3b8;
        }
    }
    ctx->pc = 0x4EB374u;
    // 0x4eb374: 0x2642fffe  addiu       $v0, $s2, -0x2
    ctx->pc = 0x4eb374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
    // 0x4eb378: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x4eb378u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4eb37c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4eb37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4eb380: 0x28043  sra         $s0, $v0, 1
    ctx->pc = 0x4eb380u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4eb384: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x4eb384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4eb388: 0x738821  addu        $s1, $v1, $s3
    ctx->pc = 0x4eb388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x4eb38c: 0x0  nop
    ctx->pc = 0x4eb38cu;
    // NOP
label_4eb390:
    // 0x4eb390: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x4eb390u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4eb394: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4eb394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb398: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4eb398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb39c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4eb39cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb3a0: 0xc13aca4  jal         func_4EB290
    ctx->pc = 0x4EB3A0u;
    SET_GPR_U32(ctx, 31, 0x4EB3A8u);
    ctx->pc = 0x4EB3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB3A0u;
    // 0x4eb3a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EB290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EB290u, 0x4EB3A0u, 0x4EB3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB3A8u;
label_4eb3a8:
    // 0x4eb3a8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4EB3A8u;
    {
        const bool branch_taken_0x4eb3a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB3A8u;
        // 0x4eb3ac: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb3a8) {
            ctx->pc = 0x4EB3B8u;
            goto label_4eb3b8;
        }
    }
    ctx->pc = 0x4EB3B0u;
    // 0x4eb3b0: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x4EB3B0u;
    {
        const bool branch_taken_0x4eb3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB3B0u;
        // 0x4eb3b4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb3b0) {
            ctx->pc = 0x4EB390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4eb390;
        }
    }
    ctx->pc = 0x4EB3B8u;
label_4eb3b8:
    // 0x4eb3b8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4eb3b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4eb3bc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4eb3bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4eb3c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4eb3c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4eb3c4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4eb3c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4eb3c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eb3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eb3cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4EB3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EB3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB3CCu;
        // 0x4eb3d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EB3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EB3D4u;
    // 0x4eb3d4: 0x0  nop
    ctx->pc = 0x4eb3d4u;
    // NOP
    ctx->pc = 0x4eb3d8u;
}
