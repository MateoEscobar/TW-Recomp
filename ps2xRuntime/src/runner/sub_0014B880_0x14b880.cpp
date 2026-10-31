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

// Function: sub_0014B880
// Address: 0x14b880 - 0x14b8e8
void sub_0014B880_0x14b880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B880_0x14b880");
#endif

    switch (ctx->pc) {
        case 0x14b8a8u: goto label_14b8a8;
        case 0x14b8b0u: goto label_14b8b0;
        default: break;
    }

    ctx->pc = 0x14b880u;

    // 0x14b880: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14b880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14b884: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14b884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14b888: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14b888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14b88c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14b88cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b890: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14b890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14b894: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14b894u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b898: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b89c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x14b89cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14b8a0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x14b8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14b8a4: 0x0  nop
    ctx->pc = 0x14b8a4u;
    // NOP
label_14b8a8:
    // 0x14b8a8: 0xc111700  jal         func_445C00
    ctx->pc = 0x14B8A8u;
    SET_GPR_U32(ctx, 31, 0x14B8B0u);
    ctx->pc = 0x14B8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B8A8u;
    // 0x14b8ac: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C00u, 0x14B8A8u, 0x14B8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B8B0u;
label_14b8b0:
    // 0x14b8b0: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x14b8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14b8b4: 0x242182a  slt         $v1, $s2, $v0
    ctx->pc = 0x14b8b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14b8b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14B8B8u;
    {
        const bool branch_taken_0x14b8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B8B8u;
        // 0x14b8bc: 0x83800a  movz        $s0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b8b8) {
            ctx->pc = 0x14B8CCu;
            goto label_14b8cc;
        }
    }
    ctx->pc = 0x14B8C0u;
    // 0x14b8c0: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x14b8c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x14b8c4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14B8C4u;
    {
        const bool branch_taken_0x14b8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b8c4) {
            ctx->pc = 0x14B8C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B8C4u;
            // 0x14b8c8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b8a8;
        }
    }
    ctx->pc = 0x14B8CCu;
label_14b8cc:
    // 0x14b8cc: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x14b8ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x14b8d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14b8d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b8d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14b8d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b8d8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14b8d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b8dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x14B8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B8E0u;
        // 0x14b8e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B8E8u;
}
