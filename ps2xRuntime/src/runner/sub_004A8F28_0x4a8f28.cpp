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

// Function: sub_004A8F28
// Address: 0x4a8f28 - 0x4a8fe0
void sub_004A8F28_0x4a8f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8F28_0x4a8f28");
#endif

    switch (ctx->pc) {
        case 0x4a8f58u: goto label_4a8f58;
        case 0x4a8f64u: goto label_4a8f64;
        case 0x4a8f9cu: goto label_4a8f9c;
        default: break;
    }

    ctx->pc = 0x4a8f28u;

    // 0x4a8f28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4a8f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4a8f2c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4a8f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4a8f30: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4a8f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4a8f34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a8f34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8f38: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4a8f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4a8f3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a8f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a8f40: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x4a8f40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x4a8f44: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4a8f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4a8f48: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x4a8f48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4a8f4c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x4A8F4Cu;
    {
        const bool branch_taken_0x4a8f4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8F4Cu;
        // 0x4a8f50: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8f4c) {
            ctx->pc = 0x4A8F88u;
            goto label_4a8f88;
        }
    }
    ctx->pc = 0x4A8F54u;
    // 0x4a8f54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a8f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a8f58:
    // 0x4a8f58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4a8f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8f5c: 0xc12a222  jal         func_4A8888
    ctx->pc = 0x4A8F5Cu;
    SET_GPR_U32(ctx, 31, 0x4A8F64u);
    ctx->pc = 0x4A8F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8F5Cu;
    // 0x4a8f60: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8888u, 0x4A8F5Cu, 0x4A8F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8F64u;
label_4a8f64:
    // 0x4a8f64: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4A8F64u;
    {
        const bool branch_taken_0x4a8f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8F64u;
        // 0x4a8f68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8f64) {
            ctx->pc = 0x4A8FBCu;
            goto label_4a8fbc;
        }
    }
    ctx->pc = 0x4A8F6Cu;
    // 0x4a8f6c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A8F6Cu;
    {
        const bool branch_taken_0x4a8f6c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A8F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8F6Cu;
        // 0x4a8f70: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8f6c) {
            ctx->pc = 0x4A8F7Cu;
            goto label_4a8f7c;
        }
    }
    ctx->pc = 0x4A8F74u;
    // 0x4a8f74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a8f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a8f78: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4a8f78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_4a8f7c:
    // 0x4a8f7c: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x4a8f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4a8f80: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x4A8F80u;
    {
        const bool branch_taken_0x4a8f80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A8F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8F80u;
        // 0x4a8f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8f80) {
            ctx->pc = 0x4A8F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a8f58;
        }
    }
    ctx->pc = 0x4A8F88u;
label_4a8f88:
    // 0x4a8f88: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x4a8f88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4a8f8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4a8f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8f90: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4a8f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8f94: 0xc12a222  jal         func_4A8888
    ctx->pc = 0x4A8F94u;
    SET_GPR_U32(ctx, 31, 0x4A8F9Cu);
    ctx->pc = 0x4A8F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8F94u;
    // 0x4a8f98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8888u, 0x4A8F94u, 0x4A8F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8F9Cu;
label_4a8f9c:
    // 0x4a8f9c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A8F9Cu;
    {
        const bool branch_taken_0x4a8f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8F9Cu;
        // 0x4a8fa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8f9c) {
            ctx->pc = 0x4A8FBCu;
            goto label_4a8fbc;
        }
    }
    ctx->pc = 0x4A8FA4u;
    // 0x4a8fa4: 0x56400004  bnel        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A8FA4u;
    {
        const bool branch_taken_0x4a8fa4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a8fa4) {
            ctx->pc = 0x4A8FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A8FA4u;
            // 0x4a8fa8: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8FB8u;
            goto label_4a8fb8;
        }
    }
    ctx->pc = 0x4A8FACu;
    // 0x4a8fac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a8facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a8fb0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4a8fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x4a8fb4: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x4a8fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_4a8fb8:
    // 0x4a8fb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a8fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a8fbc:
    // 0x4a8fbc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4a8fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a8fc0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4a8fc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a8fc4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4a8fc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a8fc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a8fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x4A8FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8FCCu;
        // 0x4a8fd0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8FD4u;
    // 0x4a8fd4: 0x0  nop
    ctx->pc = 0x4a8fd4u;
    // NOP
    // 0x4a8fd8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4a8fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4a8fdc: 0x0  nop
    ctx->pc = 0x4a8fdcu;
    // NOP
    ctx->pc = 0x4a8fe0u;
}
