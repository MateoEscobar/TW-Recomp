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

// Function: sub_004E52F0
// Address: 0x4e52f0 - 0x4e5380
void sub_004E52F0_0x4e52f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E52F0_0x4e52f0");
#endif

    switch (ctx->pc) {
        case 0x4e5338u: goto label_4e5338;
        case 0x4e5350u: goto label_4e5350;
        default: break;
    }

    ctx->pc = 0x4e52f0u;

    // 0x4e52f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e52f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4e52f4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4e52f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4e52f8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4e52f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e52fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e52fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4e5300: 0xb32823  subu        $a1, $a1, $s3
    ctx->pc = 0x4e5300u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x4e5304: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e5304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4e5308: 0x59083  sra         $s2, $a1, 2
    ctx->pc = 0x4e5308u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 5), 2));
    // 0x4e530c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4e530cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4e5310: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x4e5310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4e5314: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4E5314u;
    {
        const bool branch_taken_0x4e5314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E5318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5314u;
        // 0x4e5318: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5314) {
            ctx->pc = 0x4E5360u;
            goto label_4e5360;
        }
    }
    ctx->pc = 0x4E531Cu;
    // 0x4e531c: 0x2642fffe  addiu       $v0, $s2, -0x2
    ctx->pc = 0x4e531cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
    // 0x4e5320: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x4e5320u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4e5324: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4e5324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4e5328: 0x28043  sra         $s0, $v0, 1
    ctx->pc = 0x4e5328u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4e532c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x4e532cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4e5330: 0x738821  addu        $s1, $v1, $s3
    ctx->pc = 0x4e5330u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x4e5334: 0x0  nop
    ctx->pc = 0x4e5334u;
    // NOP
label_4e5338:
    // 0x4e5338: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x4e5338u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e533c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4e533cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5340: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e5340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5344: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4e5344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5348: 0xc13946a  jal         func_4E51A8
    ctx->pc = 0x4E5348u;
    SET_GPR_U32(ctx, 31, 0x4E5350u);
    ctx->pc = 0x4E534Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5348u;
    // 0x4e534c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E51A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E51A8u, 0x4E5348u, 0x4E5350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5350u;
label_4e5350:
    // 0x4e5350: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4E5350u;
    {
        const bool branch_taken_0x4e5350 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E5354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5350u;
        // 0x4e5354: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5350) {
            ctx->pc = 0x4E5360u;
            goto label_4e5360;
        }
    }
    ctx->pc = 0x4E5358u;
    // 0x4e5358: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x4E5358u;
    {
        const bool branch_taken_0x4e5358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5358u;
        // 0x4e535c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5358) {
            ctx->pc = 0x4E5338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e5338;
        }
    }
    ctx->pc = 0x4E5360u;
label_4e5360:
    // 0x4e5360: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e5360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e5364: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4e5364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e5368: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e5368u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e536c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4e536cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e5370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e5370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e5374: 0x3e00008  jr          $ra
    ctx->pc = 0x4E5374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E5378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5374u;
        // 0x4e5378: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E5374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E537Cu;
    // 0x4e537c: 0x0  nop
    ctx->pc = 0x4e537cu;
    // NOP
    ctx->pc = 0x4e5380u;
}
