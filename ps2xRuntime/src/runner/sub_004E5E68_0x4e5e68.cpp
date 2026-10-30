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

// Function: sub_004E5E68
// Address: 0x4e5e68 - 0x4e5f10
void sub_004E5E68_0x4e5e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5E68_0x4e5e68");
#endif

    switch (ctx->pc) {
        case 0x4e5eb0u: goto label_4e5eb0;
        case 0x4e5ed8u: goto label_4e5ed8;
        default: break;
    }

    ctx->pc = 0x4e5e68u;

    // 0x4e5e68: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4e5e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4e5e6c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4e5e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4e5e70: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4e5e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x4e5e74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e5e74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5e78: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4e5e78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5e7c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4e5e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4e5e80: 0x2341023  subu        $v0, $s1, $s4
    ctx->pc = 0x4e5e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x4e5e84: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4e5e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4e5e88: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4e5e88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4e5e8c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4e5e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x4e5e90: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x4e5e90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4e5e94: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4E5E94u;
    {
        const bool branch_taken_0x4e5e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E5E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5E94u;
        // 0x4e5e98: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5e94) {
            ctx->pc = 0x4E5EECu;
            goto label_4e5eec;
        }
    }
    ctx->pc = 0x4E5E9Cu;
    // 0x4e5e9c: 0xb49023  subu        $s2, $a1, $s4
    ctx->pc = 0x4e5e9cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x4e5ea0: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x4e5ea0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5ea4: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x4e5ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5ea8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4e5ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e5eac: 0x0  nop
    ctx->pc = 0x4e5eacu;
    // NOP
label_4e5eb0:
    // 0x4e5eb0: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x4e5eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x4e5eb4: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x4e5eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e5eb8: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x4e5eb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x4e5ebc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e5ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4e5ec0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4e5ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5ec4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4e5ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5ec8: 0x123083  sra         $a2, $s2, 2
    ctx->pc = 0x4e5ec8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 18), 2));
    // 0x4e5ecc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4e5eccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5ed0: 0xc139724  jal         func_4E5C90
    ctx->pc = 0x4E5ED0u;
    SET_GPR_U32(ctx, 31, 0x4E5ED8u);
    ctx->pc = 0x4E5ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5ED0u;
    // 0x4e5ed4: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E5C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E5C90u, 0x4E5ED0u, 0x4E5ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5ED8u;
label_4e5ed8:
    // 0x4e5ed8: 0x2341023  subu        $v0, $s1, $s4
    ctx->pc = 0x4e5ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x4e5edc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4e5edcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4e5ee0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x4e5ee0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4e5ee4: 0x5040fff2  beql        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x4E5EE4u;
    {
        const bool branch_taken_0x4e5ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e5ee4) {
            ctx->pc = 0x4E5EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5EE4u;
            // 0x4e5ee8: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E5EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e5eb0;
        }
    }
    ctx->pc = 0x4E5EECu;
label_4e5eec:
    // 0x4e5eec: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4e5eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4e5ef0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4e5ef0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e5ef4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4e5ef4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e5ef8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4e5ef8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e5efc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4e5efcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e5f00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e5f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e5f04: 0x3e00008  jr          $ra
    ctx->pc = 0x4E5F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E5F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5F04u;
        // 0x4e5f08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E5F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E5F0Cu;
    // 0x4e5f0c: 0x0  nop
    ctx->pc = 0x4e5f0cu;
    // NOP
    ctx->pc = 0x4e5f10u;
}
