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

// Function: sub_002AEFC8
// Address: 0x2aefc8 - 0x2af018
void sub_002AEFC8_0x2aefc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AEFC8_0x2aefc8");
#endif

    switch (ctx->pc) {
        case 0x2aeff4u: goto label_2aeff4;
        default: break;
    }

    ctx->pc = 0x2aefc8u;

    // 0x2aefc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2aefc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2aefcc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2aefccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2aefd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aefd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2aefd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2aefd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aefd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aefd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aefdc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2aefdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aefe0: 0x92020029  lbu         $v0, 0x29($s0)
    ctx->pc = 0x2aefe0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x2aefe4: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AEFE4u;
    {
        const bool branch_taken_0x2aefe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2aefe4) {
            ctx->pc = 0x2AEFE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEFE4u;
            // 0x2aefe8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEFF8u;
            goto label_2aeff8;
        }
    }
    ctx->pc = 0x2AEFECu;
    // 0x2aefec: 0xc0abc2e  jal         func_2AF0B8
    ctx->pc = 0x2AEFECu;
    SET_GPR_U32(ctx, 31, 0x2AEFF4u);
    ctx->pc = 0x2AF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF0B8u, 0x2AEFECu, 0x2AEFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEFF4u;
label_2aeff4:
    // 0x2aeff4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2aeff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2aeff8:
    // 0x2aeff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aeff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aeffc: 0xa05102d3  sb          $s1, 0x2D3($v0)
    ctx->pc = 0x2aeffcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 723), (uint8_t)GPR_U32(ctx, 17));
    // 0x2af000: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2af000u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2af004: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2af004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2af008: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2af008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2af00c: 0xa06002e5  sb          $zero, 0x2E5($v1)
    ctx->pc = 0x2af00cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 741), (uint8_t)GPR_U32(ctx, 0));
    // 0x2af010: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF010u;
        // 0x2af014: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF018u;
}
