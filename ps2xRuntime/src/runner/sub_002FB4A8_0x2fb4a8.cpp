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

// Function: sub_002FB4A8
// Address: 0x2fb4a8 - 0x2fb4f0
void sub_002FB4A8_0x2fb4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB4A8_0x2fb4a8");
#endif

    switch (ctx->pc) {
        case 0x2fb4c8u: goto label_2fb4c8;
        default: break;
    }

    ctx->pc = 0x2fb4a8u;

    // 0x2fb4a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fb4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fb4ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fb4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fb4b0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2fb4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2fb4b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FB4B4u;
    {
        const bool branch_taken_0x2fb4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4B4u;
        // 0x2fb4b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb4b4) {
            ctx->pc = 0x2FB4D8u;
            goto label_2fb4d8;
        }
    }
    ctx->pc = 0x2FB4BCu;
    // 0x2fb4bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fb4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fb4c0: 0xc08a11a  jal         func_228468
    ctx->pc = 0x2FB4C0u;
    SET_GPR_U32(ctx, 31, 0x2FB4C8u);
    ctx->pc = 0x2FB4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB4C0u;
    // 0x2fb4c4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228468u, 0x2FB4C0u, 0x2FB4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB4C8u;
label_2fb4c8:
    // 0x2fb4c8: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x2fb4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2fb4cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fb4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fb4d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB4D0u;
    {
        const bool branch_taken_0x2fb4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4D0u;
        // 0x2fb4d4: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb4d0) {
            ctx->pc = 0x2FB4E0u;
            goto label_2fb4e0;
        }
    }
    ctx->pc = 0x2FB4D8u;
label_2fb4d8:
    // 0x2fb4d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fb4d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb4dc: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2fb4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_2fb4e0:
    // 0x2fb4e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fb4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB4E4u;
        // 0x2fb4e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB4ECu;
    // 0x2fb4ec: 0x0  nop
    ctx->pc = 0x2fb4ecu;
    // NOP
    ctx->pc = 0x2fb4f0u;
}
