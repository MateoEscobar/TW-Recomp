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

// Function: sub_0030D078
// Address: 0x30d078 - 0x30d108
void sub_0030D078_0x30d078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D078_0x30d078");
#endif

    switch (ctx->pc) {
        case 0x30d0a0u: goto label_30d0a0;
        case 0x30d0a8u: goto label_30d0a8;
        case 0x30d0b0u: goto label_30d0b0;
        case 0x30d0d0u: goto label_30d0d0;
        default: break;
    }

    ctx->pc = 0x30d078u;

    // 0x30d078: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30d078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30d07c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x30d07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x30d080: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30d080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30d084: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30d084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d088: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x30d088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x30d08c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30d08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30d090: 0x24120062  addiu       $s2, $zero, 0x62
    ctx->pc = 0x30d090u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x30d094: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x30d094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30d098: 0x24510048  addiu       $s1, $v0, 0x48
    ctx->pc = 0x30d098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x30d09c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30d09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30d0a0:
    // 0x30d0a0: 0xc137826  jal         func_4DE098
    ctx->pc = 0x30D0A0u;
    SET_GPR_U32(ctx, 31, 0x30D0A8u);
    ctx->pc = 0x30D0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D0A0u;
    // 0x30d0a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30D0A0u, 0x30D0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D0A8u;
label_30d0a8:
    // 0x30d0a8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x30D0A8u;
    SET_GPR_U32(ctx, 31, 0x30D0B0u);
    ctx->pc = 0x30D0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D0A8u;
    // 0x30d0ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30D0A8u, 0x30D0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D0B0u;
label_30d0b0:
    // 0x30d0b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30d0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d0b4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x30D0B4u;
    {
        const bool branch_taken_0x30d0b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D0B4u;
        // 0x30d0b8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d0b4) {
            ctx->pc = 0x30D0E0u;
            goto label_30d0e0;
        }
    }
    ctx->pc = 0x30D0BCu;
    // 0x30d0bc: 0x8c8200cc  lw          $v0, 0xCC($a0)
    ctx->pc = 0x30d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x30d0c0: 0x14520007  bne         $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D0C0u;
    {
        const bool branch_taken_0x30d0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x30d0c0) {
            ctx->pc = 0x30D0E0u;
            goto label_30d0e0;
        }
    }
    ctx->pc = 0x30D0C8u;
    // 0x30d0c8: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x30D0C8u;
    SET_GPR_U32(ctx, 31, 0x30D0D0u);
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x30D0C8u, 0x30D0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D0D0u;
label_30d0d0:
    // 0x30d0d0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D0D0u;
    {
        const bool branch_taken_0x30d0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D0D0u;
        // 0x30d0d4: 0x2e020010  sltiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d0d0) {
            ctx->pc = 0x30D0E4u;
            goto label_30d0e4;
        }
    }
    ctx->pc = 0x30D0D8u;
    // 0x30d0d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30D0D8u;
    {
        const bool branch_taken_0x30d0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D0D8u;
        // 0x30d0dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d0d8) {
            ctx->pc = 0x30D0F0u;
            goto label_30d0f0;
        }
    }
    ctx->pc = 0x30D0E0u;
label_30d0e0:
    // 0x30d0e0: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x30d0e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_30d0e4:
    // 0x30d0e4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x30D0E4u;
    {
        const bool branch_taken_0x30d0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D0E4u;
        // 0x30d0e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d0e4) {
            ctx->pc = 0x30D0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d0a0;
        }
    }
    ctx->pc = 0x30D0ECu;
    // 0x30d0ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30d0ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30d0f0:
    // 0x30d0f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x30d0f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30d0f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30d0f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d0f8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x30d0f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d0fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30d0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d100: 0x3e00008  jr          $ra
    ctx->pc = 0x30D100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D100u;
        // 0x30d104: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D108u;
}
