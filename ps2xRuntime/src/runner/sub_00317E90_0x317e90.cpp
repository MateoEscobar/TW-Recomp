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

// Function: sub_00317E90
// Address: 0x317e90 - 0x317f20
void sub_00317E90_0x317e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317E90_0x317e90");
#endif

    switch (ctx->pc) {
        case 0x317eb8u: goto label_317eb8;
        case 0x317ed0u: goto label_317ed0;
        case 0x317ed8u: goto label_317ed8;
        case 0x317ee8u: goto label_317ee8;
        default: break;
    }

    ctx->pc = 0x317e90u;

    // 0x317e90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x317e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x317e94: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x317e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x317e98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x317e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x317e9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x317e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317ea0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x317ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x317ea4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x317ea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317ea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x317ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x317eac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x317eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x317eb0: 0x24520048  addiu       $s2, $v0, 0x48
    ctx->pc = 0x317eb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x317eb4: 0x0  nop
    ctx->pc = 0x317eb4u;
    // NOP
label_317eb8:
    // 0x317eb8: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x317eb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x317ebc: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x317EBCu;
    {
        const bool branch_taken_0x317ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317ebc) {
            ctx->pc = 0x317EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317EBCu;
            // 0x317ec0: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317EFCu;
            goto label_317efc;
        }
    }
    ctx->pc = 0x317EC4u;
    // 0x317ec4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x317ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317ec8: 0xc137826  jal         func_4DE098
    ctx->pc = 0x317EC8u;
    SET_GPR_U32(ctx, 31, 0x317ED0u);
    ctx->pc = 0x317ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317EC8u;
    // 0x317ecc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x317EC8u, 0x317ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317ED0u;
label_317ed0:
    // 0x317ed0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x317ED0u;
    SET_GPR_U32(ctx, 31, 0x317ED8u);
    ctx->pc = 0x317ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317ED0u;
    // 0x317ed4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x317ED0u, 0x317ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317ED8u;
label_317ed8:
    // 0x317ed8: 0x5040fff7  beql        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x317ED8u;
    {
        const bool branch_taken_0x317ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317ed8) {
            ctx->pc = 0x317EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317ED8u;
            // 0x317edc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317eb8;
        }
    }
    ctx->pc = 0x317EE0u;
    // 0x317ee0: 0xc087502  jal         func_21D408
    ctx->pc = 0x317EE0u;
    SET_GPR_U32(ctx, 31, 0x317EE8u);
    ctx->pc = 0x317EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317EE0u;
    // 0x317ee4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x317EE0u, 0x317EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317EE8u;
label_317ee8:
    // 0x317ee8: 0x80420264  lb          $v0, 0x264($v0)
    ctx->pc = 0x317ee8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 612)));
    // 0x317eec: 0x440fff2  bltz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x317EECu;
    {
        const bool branch_taken_0x317eec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x317EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317EECu;
        // 0x317ef0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317eec) {
            ctx->pc = 0x317EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317eb8;
        }
    }
    ctx->pc = 0x317EF4u;
    // 0x317ef4: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x317ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x317ef8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x317ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_317efc:
    // 0x317efc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x317efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x317f00: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x317f00u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x317f04: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x317f04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x317f08: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x317f08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x317f0c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x317f0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x317f10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317f14: 0x3e00008  jr          $ra
    ctx->pc = 0x317F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F14u;
        // 0x317f18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317F1Cu;
    // 0x317f1c: 0x0  nop
    ctx->pc = 0x317f1cu;
    // NOP
    ctx->pc = 0x317f20u;
}
