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

// Function: sub_00318F90
// Address: 0x318f90 - 0x319048
void sub_00318F90_0x318f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318F90_0x318f90");
#endif

    switch (ctx->pc) {
        case 0x318fb0u: goto label_318fb0;
        case 0x318ff4u: goto label_318ff4;
        case 0x319004u: goto label_319004;
        case 0x319010u: goto label_319010;
        case 0x319024u: goto label_319024;
        default: break;
    }

    ctx->pc = 0x318f90u;

    // 0x318f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x318f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x318f94: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x318f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x318f98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x318f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x318f9c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x318f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318fa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x318fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x318fa4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x318fa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318fa8: 0xc08a61a  jal         func_229868
    ctx->pc = 0x318FA8u;
    SET_GPR_U32(ctx, 31, 0x318FB0u);
    ctx->pc = 0x318FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318FA8u;
    // 0x318fac: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x318FA8u, 0x318FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318FB0u;
label_318fb0:
    // 0x318fb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x318fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318fb4: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x318FB4u;
    {
        const bool branch_taken_0x318fb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x318FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318FB4u;
        // 0x318fb8: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318fb4) {
            ctx->pc = 0x31902Cu;
            goto label_31902c;
        }
    }
    ctx->pc = 0x318FBCu;
    // 0x318fbc: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x318fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x318fc0: 0x10c2000e  beq         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x318FC0u;
    {
        const bool branch_taken_0x318fc0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x318FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318FC0u;
        // 0x318fc4: 0x28c20015  slti        $v0, $a2, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318fc0) {
            ctx->pc = 0x318FFCu;
            goto label_318ffc;
        }
    }
    ctx->pc = 0x318FC8u;
    // 0x318fc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x318FC8u;
    {
        const bool branch_taken_0x318fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318FC8u;
        // 0x318fcc: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318fc8) {
            ctx->pc = 0x318FE0u;
            goto label_318fe0;
        }
    }
    ctx->pc = 0x318FD0u;
    // 0x318fd0: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x318FD0u;
    {
        const bool branch_taken_0x318fd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x318FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318FD0u;
        // 0x318fd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318fd0) {
            ctx->pc = 0x318FECu;
            goto label_318fec;
        }
    }
    ctx->pc = 0x318FD8u;
    // 0x318fd8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x318FD8u;
    {
        const bool branch_taken_0x318fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318FD8u;
        // 0x318fdc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318fd8) {
            ctx->pc = 0x319034u;
            goto label_319034;
        }
    }
    ctx->pc = 0x318FE0u;
label_318fe0:
    // 0x318fe0: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x318fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x318fe4: 0x14c20012  bne         $a2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x318FE4u;
    {
        const bool branch_taken_0x318fe4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x318FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318FE4u;
        // 0x318fe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318fe4) {
            ctx->pc = 0x319030u;
            goto label_319030;
        }
    }
    ctx->pc = 0x318FECu;
label_318fec:
    // 0x318fec: 0xc0c628e  jal         func_318A38
    ctx->pc = 0x318FECu;
    SET_GPR_U32(ctx, 31, 0x318FF4u);
    ctx->pc = 0x318FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318FECu;
    // 0x318ff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x318A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318A38u, 0x318FECu, 0x318FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318FF4u;
label_318ff4:
    // 0x318ff4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x318FF4u;
    {
        const bool branch_taken_0x318ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318FF4u;
        // 0x318ff8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318ff4) {
            ctx->pc = 0x319030u;
            goto label_319030;
        }
    }
    ctx->pc = 0x318FFCu;
label_318ffc:
    // 0x318ffc: 0xc087502  jal         func_21D408
    ctx->pc = 0x318FFCu;
    SET_GPR_U32(ctx, 31, 0x319004u);
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x318FFCu, 0x319004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319004u;
label_319004:
    // 0x319004: 0x8c45020c  lw          $a1, 0x20C($v0)
    ctx->pc = 0x319004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x319008: 0xc05a3f8  jal         func_168FE0
    ctx->pc = 0x319008u;
    SET_GPR_U32(ctx, 31, 0x319010u);
    ctx->pc = 0x31900Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319008u;
    // 0x31900c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168FE0u, 0x319008u, 0x319010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319010u;
label_319010:
    // 0x319010: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x319010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319014: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x319014u;
    {
        const bool branch_taken_0x319014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x319018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319014u;
        // 0x319018: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319014) {
            ctx->pc = 0x319030u;
            goto label_319030;
        }
    }
    ctx->pc = 0x31901Cu;
    // 0x31901c: 0xc0c635e  jal         func_318D78
    ctx->pc = 0x31901Cu;
    SET_GPR_U32(ctx, 31, 0x319024u);
    ctx->pc = 0x319020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31901Cu;
    // 0x319020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x318D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318D78u, 0x31901Cu, 0x319024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319024u;
label_319024:
    // 0x319024: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x319024u;
    {
        const bool branch_taken_0x319024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319024u;
        // 0x319028: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319024) {
            ctx->pc = 0x319030u;
            goto label_319030;
        }
    }
    ctx->pc = 0x31902Cu;
label_31902c:
    // 0x31902c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31902cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_319030:
    // 0x319030: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x319030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_319034:
    // 0x319034: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x319034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x319038: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x319038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31903c: 0x3e00008  jr          $ra
    ctx->pc = 0x31903Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31903Cu;
        // 0x319040: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31903Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319044u;
    // 0x319044: 0x0  nop
    ctx->pc = 0x319044u;
    // NOP
    ctx->pc = 0x319048u;
}
