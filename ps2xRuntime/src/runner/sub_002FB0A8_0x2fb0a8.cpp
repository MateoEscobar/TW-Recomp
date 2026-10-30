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

// Function: sub_002FB0A8
// Address: 0x2fb0a8 - 0x2fb0f0
void sub_002FB0A8_0x2fb0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB0A8_0x2fb0a8");
#endif

    switch (ctx->pc) {
        case 0x2fb0d4u: goto label_2fb0d4;
        default: break;
    }

    ctx->pc = 0x2fb0a8u;

    // 0x2fb0a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fb0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fb0ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fb0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fb0b0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2fb0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2fb0b4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FB0B4u;
    {
        const bool branch_taken_0x2fb0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb0b4) {
            ctx->pc = 0x2FB0B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB0B4u;
            // 0x2fb0b8: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB0CCu;
            goto label_2fb0cc;
        }
    }
    ctx->pc = 0x2FB0BCu;
    // 0x2fb0bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fb0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb0c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fb0c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb0c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FB0C4u;
    {
        const bool branch_taken_0x2fb0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB0C4u;
        // 0x2fb0c8: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb0c4) {
            ctx->pc = 0x2FB0E0u;
            goto label_2fb0e0;
        }
    }
    ctx->pc = 0x2FB0CCu;
label_2fb0cc:
    // 0x2fb0cc: 0xc08a102  jal         func_228408
    ctx->pc = 0x2FB0CCu;
    SET_GPR_U32(ctx, 31, 0x2FB0D4u);
    ctx->pc = 0x2FB0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB0CCu;
    // 0x2fb0d0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228408u, 0x2FB0CCu, 0x2FB0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB0D4u;
label_2fb0d4:
    // 0x2fb0d4: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x2fb0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2fb0d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fb0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fb0dc: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x2fb0dcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2fb0e0:
    // 0x2fb0e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fb0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB0E4u;
        // 0x2fb0e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB0ECu;
    // 0x2fb0ec: 0x0  nop
    ctx->pc = 0x2fb0ecu;
    // NOP
    ctx->pc = 0x2fb0f0u;
}
