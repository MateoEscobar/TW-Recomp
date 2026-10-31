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

// Function: sub_0030B8B8
// Address: 0x30b8b8 - 0x30b948
void sub_0030B8B8_0x30b8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B8B8_0x30b8b8");
#endif

    switch (ctx->pc) {
        case 0x30b8e0u: goto label_30b8e0;
        case 0x30b8e8u: goto label_30b8e8;
        case 0x30b8f0u: goto label_30b8f0;
        case 0x30b910u: goto label_30b910;
        default: break;
    }

    ctx->pc = 0x30b8b8u;

    // 0x30b8b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30b8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30b8bc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x30b8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x30b8c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30b8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30b8c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30b8c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b8c8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x30b8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x30b8cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30b8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30b8d0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x30b8d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b8d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x30b8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30b8d8: 0x24510048  addiu       $s1, $v0, 0x48
    ctx->pc = 0x30b8d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x30b8dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30b8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30b8e0:
    // 0x30b8e0: 0xc137826  jal         func_4DE098
    ctx->pc = 0x30B8E0u;
    SET_GPR_U32(ctx, 31, 0x30B8E8u);
    ctx->pc = 0x30B8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B8E0u;
    // 0x30b8e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30B8E0u, 0x30B8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B8E8u;
label_30b8e8:
    // 0x30b8e8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x30B8E8u;
    SET_GPR_U32(ctx, 31, 0x30B8F0u);
    ctx->pc = 0x30B8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B8E8u;
    // 0x30b8ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30B8E8u, 0x30B8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B8F0u;
label_30b8f0:
    // 0x30b8f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30b8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b8f4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x30B8F4u;
    {
        const bool branch_taken_0x30b8f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B8F4u;
        // 0x30b8f8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b8f4) {
            ctx->pc = 0x30B920u;
            goto label_30b920;
        }
    }
    ctx->pc = 0x30B8FCu;
    // 0x30b8fc: 0x8c8200cc  lw          $v0, 0xCC($a0)
    ctx->pc = 0x30b8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x30b900: 0x14520007  bne         $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x30B900u;
    {
        const bool branch_taken_0x30b900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x30b900) {
            ctx->pc = 0x30B920u;
            goto label_30b920;
        }
    }
    ctx->pc = 0x30B908u;
    // 0x30b908: 0xc089f98  jal         func_227E60
    ctx->pc = 0x30B908u;
    SET_GPR_U32(ctx, 31, 0x30B910u);
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x30B908u, 0x30B910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B910u;
label_30b910:
    // 0x30b910: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30B910u;
    {
        const bool branch_taken_0x30b910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B910u;
        // 0x30b914: 0x2e020010  sltiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b910) {
            ctx->pc = 0x30B924u;
            goto label_30b924;
        }
    }
    ctx->pc = 0x30B918u;
    // 0x30b918: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30B918u;
    {
        const bool branch_taken_0x30b918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B918u;
        // 0x30b91c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b918) {
            ctx->pc = 0x30B930u;
            goto label_30b930;
        }
    }
    ctx->pc = 0x30B920u;
label_30b920:
    // 0x30b920: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x30b920u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_30b924:
    // 0x30b924: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x30B924u;
    {
        const bool branch_taken_0x30b924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B924u;
        // 0x30b928: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b924) {
            ctx->pc = 0x30B8E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b8e0;
        }
    }
    ctx->pc = 0x30B92Cu;
    // 0x30b92c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30b92cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30b930:
    // 0x30b930: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x30b930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30b934: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30b934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30b938: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x30b938u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b93c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30b93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b940: 0x3e00008  jr          $ra
    ctx->pc = 0x30B940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B940u;
        // 0x30b944: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B948u;
}
