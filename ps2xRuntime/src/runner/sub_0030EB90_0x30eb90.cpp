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

// Function: sub_0030EB90
// Address: 0x30eb90 - 0x30ec20
void sub_0030EB90_0x30eb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030EB90_0x30eb90");
#endif

    switch (ctx->pc) {
        case 0x30ebb8u: goto label_30ebb8;
        case 0x30ebd0u: goto label_30ebd0;
        case 0x30ebd8u: goto label_30ebd8;
        case 0x30ebe8u: goto label_30ebe8;
        default: break;
    }

    ctx->pc = 0x30eb90u;

    // 0x30eb90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30eb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30eb94: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x30eb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x30eb98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30eb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30eb9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30eb9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30eba0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x30eba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x30eba4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30eba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30eba8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30eba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30ebac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x30ebacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30ebb0: 0x24520048  addiu       $s2, $v0, 0x48
    ctx->pc = 0x30ebb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x30ebb4: 0x0  nop
    ctx->pc = 0x30ebb4u;
    // NOP
label_30ebb8:
    // 0x30ebb8: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x30ebb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x30ebbc: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x30EBBCu;
    {
        const bool branch_taken_0x30ebbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ebbc) {
            ctx->pc = 0x30EBC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EBBCu;
            // 0x30ebc0: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30EBFCu;
            goto label_30ebfc;
        }
    }
    ctx->pc = 0x30EBC4u;
    // 0x30ebc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30ebc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ebc8: 0xc137826  jal         func_4DE098
    ctx->pc = 0x30EBC8u;
    SET_GPR_U32(ctx, 31, 0x30EBD0u);
    ctx->pc = 0x30EBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EBC8u;
    // 0x30ebcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30EBC8u, 0x30EBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EBD0u;
label_30ebd0:
    // 0x30ebd0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x30EBD0u;
    SET_GPR_U32(ctx, 31, 0x30EBD8u);
    ctx->pc = 0x30EBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EBD0u;
    // 0x30ebd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30EBD0u, 0x30EBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EBD8u;
label_30ebd8:
    // 0x30ebd8: 0x5040fff7  beql        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x30EBD8u;
    {
        const bool branch_taken_0x30ebd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ebd8) {
            ctx->pc = 0x30EBDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EBD8u;
            // 0x30ebdc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30EBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ebb8;
        }
    }
    ctx->pc = 0x30EBE0u;
    // 0x30ebe0: 0xc087502  jal         func_21D408
    ctx->pc = 0x30EBE0u;
    SET_GPR_U32(ctx, 31, 0x30EBE8u);
    ctx->pc = 0x30EBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EBE0u;
    // 0x30ebe4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30EBE0u, 0x30EBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EBE8u;
label_30ebe8:
    // 0x30ebe8: 0x80420264  lb          $v0, 0x264($v0)
    ctx->pc = 0x30ebe8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 612)));
    // 0x30ebec: 0x440fff2  bltz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x30EBECu;
    {
        const bool branch_taken_0x30ebec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30EBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EBECu;
        // 0x30ebf0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ebec) {
            ctx->pc = 0x30EBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ebb8;
        }
    }
    ctx->pc = 0x30EBF4u;
    // 0x30ebf4: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x30ebf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x30ebf8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x30ebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_30ebfc:
    // 0x30ebfc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x30ebfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30ec00: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x30ec00u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x30ec04: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30ec04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30ec08: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x30ec08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30ec0c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x30ec0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30ec10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30ec10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ec14: 0x3e00008  jr          $ra
    ctx->pc = 0x30EC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30EC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EC14u;
        // 0x30ec18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30EC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30EC1Cu;
    // 0x30ec1c: 0x0  nop
    ctx->pc = 0x30ec1cu;
    // NOP
    ctx->pc = 0x30ec20u;
}
