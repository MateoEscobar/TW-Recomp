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

// Function: sub_00396EA0
// Address: 0x396ea0 - 0x396f08
void sub_00396EA0_0x396ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396EA0_0x396ea0");
#endif

    switch (ctx->pc) {
        case 0x396ebcu: goto label_396ebc;
        case 0x396ed0u: goto label_396ed0;
        case 0x396edcu: goto label_396edc;
        case 0x396eecu: goto label_396eec;
        case 0x396ef4u: goto label_396ef4;
        default: break;
    }

    ctx->pc = 0x396ea0u;

    // 0x396ea0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x396ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x396ea4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x396ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x396ea8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x396ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x396eac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x396eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x396eb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x396eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x396eb4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x396EB4u;
    SET_GPR_U32(ctx, 31, 0x396EBCu);
    ctx->pc = 0x396EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396EB4u;
    // 0x396eb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x396EB4u, 0x396EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396EBCu;
label_396ebc:
    // 0x396ebc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x396ebcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396ec0: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x396EC0u;
    {
        const bool branch_taken_0x396ec0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x396EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396EC0u;
        // 0x396ec4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396ec0) {
            ctx->pc = 0x396EF4u;
            goto label_396ef4;
        }
    }
    ctx->pc = 0x396EC8u;
    // 0x396ec8: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x396EC8u;
    SET_GPR_U32(ctx, 31, 0x396ED0u);
    ctx->pc = 0x396ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396EC8u;
    // 0x396ecc: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x396EC8u, 0x396ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396ED0u;
label_396ed0:
    // 0x396ed0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x396ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x396ed4: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x396ED4u;
    SET_GPR_U32(ctx, 31, 0x396EDCu);
    ctx->pc = 0x396ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396ED4u;
    // 0x396ed8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x396ED4u, 0x396EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396EDCu;
label_396edc:
    // 0x396edc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x396edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x396ee0: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x396ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x396ee4: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x396EE4u;
    SET_GPR_U32(ctx, 31, 0x396EECu);
    ctx->pc = 0x396EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396EE4u;
    // 0x396ee8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x396EE4u, 0x396EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396EECu;
label_396eec:
    // 0x396eec: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x396EECu;
    SET_GPR_U32(ctx, 31, 0x396EF4u);
    ctx->pc = 0x396EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396EECu;
    // 0x396ef0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x396EECu, 0x396EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396EF4u;
label_396ef4:
    // 0x396ef4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x396ef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x396ef8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x396ef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x396efc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x396efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x396f00: 0x3e00008  jr          $ra
    ctx->pc = 0x396F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F00u;
        // 0x396f04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396F08u;
}
