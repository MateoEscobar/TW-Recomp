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

// Function: sub_00294E98
// Address: 0x294e98 - 0x294f38
void sub_00294E98_0x294e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294E98_0x294e98");
#endif

    switch (ctx->pc) {
        case 0x294ec8u: goto label_294ec8;
        case 0x294ee0u: goto label_294ee0;
        case 0x294ef4u: goto label_294ef4;
        default: break;
    }

    ctx->pc = 0x294e98u;

    // 0x294e98: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x294e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x294e9c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x294e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x294ea0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x294ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x294ea4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x294ea4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294ea8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x294ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x294eac: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x294eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294eb0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x294eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x294eb4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x294eb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294eb8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x294eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x294ebc: 0x3c13006f  lui         $s3, 0x6F
    ctx->pc = 0x294ebcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
    // 0x294ec0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x294ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x294ec4: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x294ec4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_294ec8:
    // 0x294ec8: 0x8e0201b0  lw          $v0, 0x1B0($s0)
    ctx->pc = 0x294ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x294ecc: 0x8e63bd30  lw          $v1, -0x42D0($s3)
    ctx->pc = 0x294eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950192)));
    // 0x294ed0: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x294ED0u;
    {
        const bool branch_taken_0x294ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x294ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294ED0u;
        // 0x294ed4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294ed0) {
            ctx->pc = 0x294F04u;
            goto label_294f04;
        }
    }
    ctx->pc = 0x294ED8u;
    // 0x294ed8: 0xc0e4060  jal         func_390180
    ctx->pc = 0x294ED8u;
    SET_GPR_U32(ctx, 31, 0x294EE0u);
    ctx->pc = 0x294EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294ED8u;
    // 0x294edc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x294ED8u, 0x294EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294EE0u;
label_294ee0:
    // 0x294ee0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x294EE0u;
    {
        const bool branch_taken_0x294ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x294ee0) {
            ctx->pc = 0x294EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294EE0u;
            // 0x294ee4: 0xae1401b4  sw          $s4, 0x1B4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294EFCu;
            goto label_294efc;
        }
    }
    ctx->pc = 0x294EE8u;
    // 0x294ee8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x294ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294eec: 0xc0a5326  jal         func_294C98
    ctx->pc = 0x294EECu;
    SET_GPR_U32(ctx, 31, 0x294EF4u);
    ctx->pc = 0x294EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294EECu;
    // 0x294ef0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294C98u, 0x294EECu, 0x294EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294EF4u;
label_294ef4:
    // 0x294ef4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x294EF4u;
    {
        const bool branch_taken_0x294ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294EF4u;
        // 0x294ef8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294ef4) {
            ctx->pc = 0x294F08u;
            goto label_294f08;
        }
    }
    ctx->pc = 0x294EFCu;
label_294efc:
    // 0x294efc: 0x8e62bd30  lw          $v0, -0x42D0($s3)
    ctx->pc = 0x294efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950192)));
    // 0x294f00: 0xae0201b8  sw          $v0, 0x1B8($s0)
    ctx->pc = 0x294f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 2));
label_294f04:
    // 0x294f04: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x294f04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_294f08:
    // 0x294f08: 0x2a220009  slti        $v0, $s1, 0x9
    ctx->pc = 0x294f08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x294f0c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x294F0Cu;
    {
        const bool branch_taken_0x294f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F0Cu;
        // 0x294f10: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294f0c) {
            ctx->pc = 0x294EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294ec8;
        }
    }
    ctx->pc = 0x294F14u;
    // 0x294f14: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x294f14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x294f18: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x294f18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x294f1c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x294f1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x294f20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x294f20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x294f24: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x294f24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294f28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x294f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x294F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F2Cu;
        // 0x294f30: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294F34u;
    // 0x294f34: 0x0  nop
    ctx->pc = 0x294f34u;
    // NOP
    ctx->pc = 0x294f38u;
}
