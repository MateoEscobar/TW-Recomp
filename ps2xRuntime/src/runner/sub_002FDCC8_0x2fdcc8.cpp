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

// Function: sub_002FDCC8
// Address: 0x2fdcc8 - 0x2fdd08
void sub_002FDCC8_0x2fdcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDCC8_0x2fdcc8");
#endif

    switch (ctx->pc) {
        case 0x2fdce8u: goto label_2fdce8;
        default: break;
    }

    ctx->pc = 0x2fdcc8u;

    // 0x2fdcc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fdcc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fdccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fdcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fdcd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fdcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fdcd4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FDCD4u;
    {
        const bool branch_taken_0x2fdcd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDCD4u;
        // 0x2fdcd8: 0xa0820018  sb          $v0, 0x18($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdcd4) {
            ctx->pc = 0x2FDCF8u;
            goto label_2fdcf8;
        }
    }
    ctx->pc = 0x2FDCDCu;
    // 0x2fdcdc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fdcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fdce0: 0xc08a140  jal         func_228500
    ctx->pc = 0x2FDCE0u;
    SET_GPR_U32(ctx, 31, 0x2FDCE8u);
    ctx->pc = 0x2FDCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDCE0u;
    // 0x2fdce4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228500u, 0x2FDCE0u, 0x2FDCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDCE8u;
label_2fdce8:
    // 0x2fdce8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fdce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdcec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fdcecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fdcf0: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FDCF0u;
    {
        const bool branch_taken_0x2fdcf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2FDCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDCF0u;
        // 0x2fdcf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdcf0) {
            ctx->pc = 0x2FDCFCu;
            goto label_2fdcfc;
        }
    }
    ctx->pc = 0x2FDCF8u;
label_2fdcf8:
    // 0x2fdcf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fdcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fdcfc:
    // 0x2fdcfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fdcfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fdd00: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDD00u;
        // 0x2fdd04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDD00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDD08u;
}
