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

// Function: sub_0030C468
// Address: 0x30c468 - 0x30c510
void sub_0030C468_0x30c468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C468_0x30c468");
#endif

    switch (ctx->pc) {
        case 0x30c498u: goto label_30c498;
        case 0x30c4a0u: goto label_30c4a0;
        case 0x30c4b0u: goto label_30c4b0;
        case 0x30c4c4u: goto label_30c4c4;
        case 0x30c4d4u: goto label_30c4d4;
        case 0x30c4e4u: goto label_30c4e4;
        default: break;
    }

    ctx->pc = 0x30c468u;

    // 0x30c468: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30c468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30c46c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30c46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x30c470: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x30c470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x30c474: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30c474u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c478: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x30c478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x30c47c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30c47cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c480: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x30c480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x30c484: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x30c484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x30c488: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30c488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30c48c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x30c48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x30c490: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x30c490u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x30c494: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x30c494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30c498:
    // 0x30c498: 0xc137826  jal         func_4DE098
    ctx->pc = 0x30C498u;
    SET_GPR_U32(ctx, 31, 0x30C4A0u);
    ctx->pc = 0x30C49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C498u;
    // 0x30c49c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30C498u, 0x30C4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C4A0u;
label_30c4a0:
    // 0x30c4a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30c4a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x30c4a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30c4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c4a8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x30C4A8u;
    SET_GPR_U32(ctx, 31, 0x30C4B0u);
    ctx->pc = 0x30C4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C4A8u;
    // 0x30c4ac: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30C4A8u, 0x30C4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C4B0u;
label_30c4b0:
    // 0x30c4b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30c4b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c4b4: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x30C4B4u;
    {
        const bool branch_taken_0x30c4b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C4B4u;
        // 0x30c4b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c4b4) {
            ctx->pc = 0x30C4E4u;
            goto label_30c4e4;
        }
    }
    ctx->pc = 0x30C4BCu;
    // 0x30c4bc: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x30C4BCu;
    SET_GPR_U32(ctx, 31, 0x30C4C4u);
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x30C4BCu, 0x30C4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C4C4u;
label_30c4c4:
    // 0x30c4c4: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x30C4C4u;
    {
        const bool branch_taken_0x30c4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x30C4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C4C4u;
        // 0x30c4c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c4c4) {
            ctx->pc = 0x30C4E4u;
            goto label_30c4e4;
        }
    }
    ctx->pc = 0x30C4CCu;
    // 0x30c4cc: 0xc088edc  jal         func_223B70
    ctx->pc = 0x30C4CCu;
    SET_GPR_U32(ctx, 31, 0x30C4D4u);
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x30C4CCu, 0x30C4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C4D4u;
label_30c4d4:
    // 0x30c4d4: 0x10510003  beq         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C4D4u;
    {
        const bool branch_taken_0x30c4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x30C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C4D4u;
        // 0x30c4d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c4d4) {
            ctx->pc = 0x30C4E4u;
            goto label_30c4e4;
        }
    }
    ctx->pc = 0x30C4DCu;
    // 0x30c4dc: 0xc0c3144  jal         func_30C510
    ctx->pc = 0x30C4DCu;
    SET_GPR_U32(ctx, 31, 0x30C4E4u);
    ctx->pc = 0x30C4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C4DCu;
    // 0x30c4e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C510u, 0x30C4DCu, 0x30C4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C4E4u;
label_30c4e4:
    // 0x30c4e4: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x30c4e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x30c4e8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x30C4E8u;
    {
        const bool branch_taken_0x30c4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C4E8u;
        // 0x30c4ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c4e8) {
            ctx->pc = 0x30C498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30c498;
        }
    }
    ctx->pc = 0x30C4F0u;
    // 0x30c4f0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x30c4f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30c4f4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x30c4f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30c4f8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30c4f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30c4fc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x30c4fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30c500: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x30c500u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30c504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c508: 0x3e00008  jr          $ra
    ctx->pc = 0x30C508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C508u;
        // 0x30c50c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C510u;
}
