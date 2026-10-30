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

// Function: sub_004DAD40
// Address: 0x4dad40 - 0x4dadf0
void sub_004DAD40_0x4dad40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DAD40_0x4dad40");
#endif

    switch (ctx->pc) {
        case 0x4dad70u: goto label_4dad70;
        case 0x4dad88u: goto label_4dad88;
        default: break;
    }

    ctx->pc = 0x4dad40u;

    // 0x4dad40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4dad40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4dad44: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4dad44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4dad48: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4dad48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4dad4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4dad4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dad50: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4dad50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4dad54: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x4dad54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dad58: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4dad58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x4dad5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4dad5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dad60: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4dad60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x4dad64: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4dad64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dad68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dad68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4dad6c: 0x3c14006f  lui         $s4, 0x6F
    ctx->pc = 0x4dad6cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)111 << 16));
label_4dad70:
    // 0x4dad70: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4dad70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dad74: 0x8e82bd30  lw          $v0, -0x42D0($s4)
    ctx->pc = 0x4dad74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950192)));
    // 0x4dad78: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4DAD78u;
    {
        const bool branch_taken_0x4dad78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4dad78) {
            ctx->pc = 0x4DAD7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DAD78u;
            // 0x4dad7c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DADBCu;
            goto label_4dadbc;
        }
    }
    ctx->pc = 0x4DAD80u;
    // 0x4dad80: 0xc0e4060  jal         func_390180
    ctx->pc = 0x4DAD80u;
    SET_GPR_U32(ctx, 31, 0x4DAD88u);
    ctx->pc = 0x4DAD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DAD80u;
    // 0x4dad84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x4DAD80u, 0x4DAD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DAD88u;
label_4dad88:
    // 0x4dad88: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4DAD88u;
    {
        const bool branch_taken_0x4dad88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DAD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAD88u;
        // 0x4dad8c: 0x8e82bd30  lw          $v0, -0x42D0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dad88) {
            ctx->pc = 0x4DADB4u;
            goto label_4dadb4;
        }
    }
    ctx->pc = 0x4DAD90u;
    // 0x4dad90: 0x52720006  beql        $s3, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x4DAD90u;
    {
        const bool branch_taken_0x4dad90 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 18));
        if (branch_taken_0x4dad90) {
            ctx->pc = 0x4DAD94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DAD90u;
            // 0x4dad94: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DADACu;
            goto label_4dadac;
        }
    }
    ctx->pc = 0x4DAD98u;
    // 0x4dad98: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4dad98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dad9c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4dad9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4dada0: 0x8e83bd30  lw          $v1, -0x42D0($s4)
    ctx->pc = 0x4dada0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950192)));
    // 0x4dada4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4dada4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4dada8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x4dada8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_4dadac:
    // 0x4dadac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4DADACu;
    {
        const bool branch_taken_0x4dadac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DADACu;
        // 0x4dadb0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dadac) {
            ctx->pc = 0x4DADB8u;
            goto label_4dadb8;
        }
    }
    ctx->pc = 0x4DADB4u;
label_4dadb4:
    // 0x4dadb4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4dadb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4dadb8:
    // 0x4dadb8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4dadb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4dadbc:
    // 0x4dadbc: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x4dadbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4dadc0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x4DADC0u;
    {
        const bool branch_taken_0x4dadc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DADC0u;
        // 0x4dadc4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dadc0) {
            ctx->pc = 0x4DAD70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4dad70;
        }
    }
    ctx->pc = 0x4DADC8u;
    // 0x4dadc8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4dadc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dadcc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4dadccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4dadd0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4dadd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4dadd4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4dadd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4dadd8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4dadd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4daddc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4daddcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4dade0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dade0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dade4: 0x3e00008  jr          $ra
    ctx->pc = 0x4DADE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DADE4u;
        // 0x4dade8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DADE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DADECu;
    // 0x4dadec: 0x0  nop
    ctx->pc = 0x4dadecu;
    // NOP
    ctx->pc = 0x4dadf0u;
}
