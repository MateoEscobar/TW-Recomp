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

// Function: sub_0016B980
// Address: 0x16b980 - 0x16ba18
void sub_0016B980_0x16b980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B980_0x16b980");
#endif

    switch (ctx->pc) {
        case 0x16b9b0u: goto label_16b9b0;
        case 0x16b9c8u: goto label_16b9c8;
        case 0x16b9d0u: goto label_16b9d0;
        case 0x16b9d8u: goto label_16b9d8;
        case 0x16b9e8u: goto label_16b9e8;
        default: break;
    }

    ctx->pc = 0x16b980u;

    // 0x16b980: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16b980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16b984: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16b984u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16b988: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x16b988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x16b98c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16b98cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16b990: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16b990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16b994: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16b994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b998: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16b998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16b99c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b9a0: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x16B9A0u;
    {
        const bool branch_taken_0x16b9a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16B9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B9A0u;
        // 0x16b9a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b9a0) {
            ctx->pc = 0x16B9FCu;
            goto label_16b9fc;
        }
    }
    ctx->pc = 0x16B9A8u;
    // 0x16b9a8: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16B9A8u;
    SET_GPR_U32(ctx, 31, 0x16B9B0u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16B9A8u, 0x16B9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B9B0u;
label_16b9b0:
    // 0x16b9b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16b9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b9b4: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x16b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x16b9b8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16B9B8u;
    {
        const bool branch_taken_0x16b9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B9B8u;
        // 0x16b9bc: 0x24910048  addiu       $s1, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b9b8) {
            ctx->pc = 0x16B9FCu;
            goto label_16b9fc;
        }
    }
    ctx->pc = 0x16B9C0u;
    // 0x16b9c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16b9c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b9c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16b9c8:
    // 0x16b9c8: 0xc137826  jal         func_4DE098
    ctx->pc = 0x16B9C8u;
    SET_GPR_U32(ctx, 31, 0x16B9D0u);
    ctx->pc = 0x16B9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B9C8u;
    // 0x16b9cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x16B9C8u, 0x16B9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B9D0u;
label_16b9d0:
    // 0x16b9d0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x16B9D0u;
    SET_GPR_U32(ctx, 31, 0x16B9D8u);
    ctx->pc = 0x16B9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B9D0u;
    // 0x16b9d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16B9D0u, 0x16B9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B9D8u;
label_16b9d8:
    // 0x16b9d8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B9D8u;
    {
        const bool branch_taken_0x16b9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b9d8) {
            ctx->pc = 0x16B9DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B9D8u;
            // 0x16b9dc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B9F0u;
            goto label_16b9f0;
        }
    }
    ctx->pc = 0x16B9E0u;
    // 0x16b9e0: 0xc087502  jal         func_21D408
    ctx->pc = 0x16B9E0u;
    SET_GPR_U32(ctx, 31, 0x16B9E8u);
    ctx->pc = 0x16B9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B9E0u;
    // 0x16b9e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x16B9E0u, 0x16B9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B9E8u;
label_16b9e8:
    // 0x16b9e8: 0xa05202d6  sb          $s2, 0x2D6($v0)
    ctx->pc = 0x16b9e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 726), (uint8_t)GPR_U32(ctx, 18));
    // 0x16b9ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16b9ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16b9f0:
    // 0x16b9f0: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x16b9f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x16b9f4: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x16B9F4u;
    {
        const bool branch_taken_0x16b9f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b9f4) {
            ctx->pc = 0x16B9F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B9F4u;
            // 0x16b9f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b9c8;
        }
    }
    ctx->pc = 0x16B9FCu;
label_16b9fc:
    // 0x16b9fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16b9fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16ba00: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16ba00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ba04: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x16ba04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ba08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ba08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ba0c: 0x3e00008  jr          $ra
    ctx->pc = 0x16BA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA0Cu;
        // 0x16ba10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BA14u;
    // 0x16ba14: 0x0  nop
    ctx->pc = 0x16ba14u;
    // NOP
    ctx->pc = 0x16ba18u;
}
