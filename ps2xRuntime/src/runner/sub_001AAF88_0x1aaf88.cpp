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

// Function: sub_001AAF88
// Address: 0x1aaf88 - 0x1ab010
void sub_001AAF88_0x1aaf88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AAF88_0x1aaf88");
#endif

    switch (ctx->pc) {
        case 0x1aafb0u: goto label_1aafb0;
        case 0x1aafd0u: goto label_1aafd0;
        case 0x1aafe8u: goto label_1aafe8;
        default: break;
    }

    ctx->pc = 0x1aaf88u;

    // 0x1aaf88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1aaf88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1aaf8c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1aaf8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1aaf90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1aaf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1aaf94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1aaf94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaf98: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1aaf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1aaf9c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1aaf9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aafa0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1aafa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1aafa4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1aafa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aafa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aafa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aafac: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1aafacu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1aafb0:
    // 0x1aafb0: 0x8e23489c  lw          $v1, 0x489C($s1)
    ctx->pc = 0x1aafb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
    // 0x1aafb4: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x1aafb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x1aafb8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1aafb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1aafbc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1AAFBCu;
    {
        const bool branch_taken_0x1aafbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAFBCu;
        // 0x1aafc0: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aafbc) {
            ctx->pc = 0x1AAFECu;
            goto label_1aafec;
        }
    }
    ctx->pc = 0x1AAFC4u;
    // 0x1aafc4: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x1aafc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    // 0x1aafc8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1AAFC8u;
    SET_GPR_U32(ctx, 31, 0x1AAFD0u);
    ctx->pc = 0x1AAFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAFC8u;
    // 0x1aafcc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1AAFC8u, 0x1AAFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAFD0u;
label_1aafd0:
    // 0x1aafd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1aafd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aafd4: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x1aafd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x1aafd8: 0x1453fff5  bne         $v0, $s3, . + 4 + (-0xB << 2)
    ctx->pc = 0x1AAFD8u;
    {
        const bool branch_taken_0x1aafd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x1AAFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAFD8u;
        // 0x1aafdc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aafd8) {
            ctx->pc = 0x1AAFB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aafb0;
        }
    }
    ctx->pc = 0x1AAFE0u;
    // 0x1aafe0: 0xc088a42  jal         func_222908
    ctx->pc = 0x1AAFE0u;
    SET_GPR_U32(ctx, 31, 0x1AAFE8u);
    ctx->pc = 0x222908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222908u, 0x1AAFE0u, 0x1AAFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAFE8u;
label_1aafe8:
    // 0x1aafe8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1aafe8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aafec:
    // 0x1aafec: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1aafecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaff0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1aaff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aaff4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1aaff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aaff8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1aaff8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aaffc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1aaffcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab000: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab004: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB004u;
        // 0x1ab008: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB00Cu;
    // 0x1ab00c: 0x0  nop
    ctx->pc = 0x1ab00cu;
    // NOP
    ctx->pc = 0x1ab010u;
}
