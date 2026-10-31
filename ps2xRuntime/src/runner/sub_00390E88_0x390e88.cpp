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

// Function: sub_00390E88
// Address: 0x390e88 - 0x390f18
void sub_00390E88_0x390e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390E88_0x390e88");
#endif

    switch (ctx->pc) {
        case 0x390ec0u: goto label_390ec0;
        case 0x390ed4u: goto label_390ed4;
        case 0x390ef4u: goto label_390ef4;
        default: break;
    }

    ctx->pc = 0x390e88u;

    // 0x390e88: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x390e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x390e8c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x390e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x390e90: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x390e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x390e94: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x390e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390e98: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x390e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x390e9c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x390e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390ea0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x390ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x390ea4: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x390ea4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x390ea8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x390ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x390eac: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x390eacu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    // 0x390eb0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x390eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x390eb4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x390eb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390eb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x390eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x390ebc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x390ebcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_390ec0:
    // 0x390ec0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x390ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x390ec4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x390ec4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x390ec8: 0x8e642c04  lw          $a0, 0x2C04($s3)
    ctx->pc = 0x390ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11268)));
    // 0x390ecc: 0xc0e44f6  jal         func_3913D8
    ctx->pc = 0x390ECCu;
    SET_GPR_U32(ctx, 31, 0x390ED4u);
    ctx->pc = 0x390ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390ECCu;
    // 0x390ed0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3913D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3913D8u, 0x390ECCu, 0x390ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390ED4u;
label_390ed4:
    // 0x390ed4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x390ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x390ed8: 0x641fff9  bgez        $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x390ED8u;
    {
        const bool branch_taken_0x390ed8 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x390EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390ED8u;
        // 0x390edc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390ed8) {
            ctx->pc = 0x390EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_390ec0;
        }
    }
    ctx->pc = 0x390EE0u;
    // 0x390ee0: 0x8e642c04  lw          $a0, 0x2C04($s3)
    ctx->pc = 0x390ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11268)));
    // 0x390ee4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x390ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390ee8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x390ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390eec: 0xc0e4574  jal         func_3915D0
    ctx->pc = 0x390EECu;
    SET_GPR_U32(ctx, 31, 0x390EF4u);
    ctx->pc = 0x390EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390EECu;
    // 0x390ef0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3915D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3915D0u, 0x390EECu, 0x390EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390EF4u;
label_390ef4:
    // 0x390ef4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x390ef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x390ef8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x390ef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x390efc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x390efcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x390f00: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x390f00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x390f04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x390f04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x390f08: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x390f08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x390f0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x390f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x390f10: 0x3e00008  jr          $ra
    ctx->pc = 0x390F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390F10u;
        // 0x390f14: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390F18u;
}
