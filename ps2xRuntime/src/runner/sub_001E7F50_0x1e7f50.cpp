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

// Function: sub_001E7F50
// Address: 0x1e7f50 - 0x1e8020
void sub_001E7F50_0x1e7f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7F50_0x1e7f50");
#endif

    switch (ctx->pc) {
        case 0x1e7f84u: goto label_1e7f84;
        case 0x1e7f98u: goto label_1e7f98;
        case 0x1e7fa4u: goto label_1e7fa4;
        case 0x1e7fc8u: goto label_1e7fc8;
        case 0x1e7fd4u: goto label_1e7fd4;
        case 0x1e7fe8u: goto label_1e7fe8;
        case 0x1e7ff0u: goto label_1e7ff0;
        default: break;
    }

    ctx->pc = 0x1e7f50u;

    // 0x1e7f50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e7f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e7f54: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1e7f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1e7f58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e7f58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7f5c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1e7f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1e7f60: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1e7f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1e7f64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e7f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e7f68: 0x26300490  addiu       $s0, $s1, 0x490
    ctx->pc = 0x1e7f68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
    // 0x1e7f6c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1e7f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1e7f70: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1e7f70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e7f74: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1e7f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1e7f78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7f7c: 0xc079de8  jal         func_1E77A0
    ctx->pc = 0x1E7F7Cu;
    SET_GPR_U32(ctx, 31, 0x1E7F84u);
    ctx->pc = 0x1E7F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7F7Cu;
    // 0x1e7f80: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E77A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E77A0u, 0x1E7F7Cu, 0x1E7F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7F84u;
label_1e7f84:
    // 0x1e7f84: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1e7f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1e7f88: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1e7f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1e7f8c: 0x2442ca00  addiu       $v0, $v0, -0x3600
    ctx->pc = 0x1e7f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953472));
    // 0x1e7f90: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1E7F90u;
    SET_GPR_U32(ctx, 31, 0x1E7F98u);
    ctx->pc = 0x1E7F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7F90u;
    // 0x1e7f94: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1E7F90u, 0x1E7F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7F98u;
label_1e7f98:
    // 0x1e7f98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7f9c: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1E7F9Cu;
    SET_GPR_U32(ctx, 31, 0x1E7FA4u);
    ctx->pc = 0x1E7FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7F9Cu;
    // 0x1e7fa0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1E7F9Cu, 0x1E7FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7FA4u;
label_1e7fa4:
    // 0x1e7fa4: 0x0  nop
    ctx->pc = 0x1e7fa4u;
    // NOP
    // 0x1e7fa8: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E7FA8u;
    {
        const bool branch_taken_0x1e7fa8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1E7FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7FA8u;
        // 0x1e7fac: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7fa8) {
            ctx->pc = 0x1E7F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7f98;
        }
    }
    ctx->pc = 0x1E7FB0u;
    // 0x1e7fb0: 0x26300790  addiu       $s0, $s1, 0x790
    ctx->pc = 0x1e7fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1936));
    // 0x1e7fb4: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1e7fb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e7fb8: 0x26340a00  addiu       $s4, $s1, 0xA00
    ctx->pc = 0x1e7fb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 2560));
    // 0x1e7fbc: 0x26350ad0  addiu       $s5, $s1, 0xAD0
    ctx->pc = 0x1e7fbcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 2768));
    // 0x1e7fc0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1e7fc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e7fc4: 0x0  nop
    ctx->pc = 0x1e7fc4u;
    // NOP
label_1e7fc8:
    // 0x1e7fc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7fcc: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x1E7FCCu;
    SET_GPR_U32(ctx, 31, 0x1E7FD4u);
    ctx->pc = 0x1E7FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7FCCu;
    // 0x1e7fd0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1E7FCCu, 0x1E7FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7FD4u;
label_1e7fd4:
    // 0x1e7fd4: 0x0  nop
    ctx->pc = 0x1e7fd4u;
    // NOP
    // 0x1e7fd8: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E7FD8u;
    {
        const bool branch_taken_0x1e7fd8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1E7FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7FD8u;
        // 0x1e7fdc: 0x261000d0  addiu       $s0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7fd8) {
            ctx->pc = 0x1E7FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7fc8;
        }
    }
    ctx->pc = 0x1E7FE0u;
    // 0x1e7fe0: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x1E7FE0u;
    SET_GPR_U32(ctx, 31, 0x1E7FE8u);
    ctx->pc = 0x1E7FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7FE0u;
    // 0x1e7fe4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1E7FE0u, 0x1E7FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7FE8u;
label_1e7fe8:
    // 0x1e7fe8: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x1E7FE8u;
    SET_GPR_U32(ctx, 31, 0x1E7FF0u);
    ctx->pc = 0x1E7FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7FE8u;
    // 0x1e7fec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1E7FE8u, 0x1E7FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7FF0u;
label_1e7ff0:
    // 0x1e7ff0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e7ff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ff4: 0xa2200370  sb          $zero, 0x370($s1)
    ctx->pc = 0x1e7ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 880), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e7ff8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1e7ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e7ffc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1e7ffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e8000: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1e8000u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8004: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e8004u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8008: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1e8008u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e800c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1e800cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8014: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8014u;
        // 0x1e8018: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E801Cu;
    // 0x1e801c: 0x0  nop
    ctx->pc = 0x1e801cu;
    // NOP
    ctx->pc = 0x1e8020u;
}
