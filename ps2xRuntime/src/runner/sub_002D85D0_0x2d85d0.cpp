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

// Function: sub_002D85D0
// Address: 0x2d85d0 - 0x2d8618
void sub_002D85D0_0x2d85d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D85D0_0x2d85d0");
#endif

    switch (ctx->pc) {
        case 0x2d85fcu: goto label_2d85fc;
        case 0x2d860cu: goto label_2d860c;
        default: break;
    }

    ctx->pc = 0x2d85d0u;

    // 0x2d85d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d85d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d85d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d85d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d85d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d85d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d85dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d85dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d85e0: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D85E0u;
    {
        const bool branch_taken_0x2d85e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D85E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D85E0u;
        // 0x2d85e4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d85e0) {
            ctx->pc = 0x2D8604u;
            goto label_2d8604;
        }
    }
    ctx->pc = 0x2D85E8u;
    // 0x2d85e8: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2d85e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x2d85ec: 0x244403c8  addiu       $a0, $v0, 0x3C8
    ctx->pc = 0x2d85ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 968));
    // 0x2d85f0: 0x24a56488  addiu       $a1, $a1, 0x6488
    ctx->pc = 0x2d85f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25736));
    // 0x2d85f4: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2D85F4u;
    SET_GPR_U32(ctx, 31, 0x2D85FCu);
    ctx->pc = 0x2D85F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D85F4u;
    // 0x2d85f8: 0x2406029c  addiu       $a2, $zero, 0x29C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2D85F4u, 0x2D85FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D85FCu;
label_2d85fc:
    // 0x2d85fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D85FCu;
    {
        const bool branch_taken_0x2d85fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D85FCu;
        // 0x2d8600: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d85fc) {
            ctx->pc = 0x2D8610u;
            goto label_2d8610;
        }
    }
    ctx->pc = 0x2D8604u;
label_2d8604:
    // 0x2d8604: 0xc042f3e  jal         func_10BCF8
    ctx->pc = 0x2D8604u;
    SET_GPR_U32(ctx, 31, 0x2D860Cu);
    ctx->pc = 0x2D8608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8604u;
    // 0x2d8608: 0x244403c8  addiu       $a0, $v0, 0x3C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BCF8u, 0x2D8604u, 0x2D860Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D860Cu;
label_2d860c:
    // 0x2d860c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d860cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d8610:
    // 0x2d8610: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8610u;
        // 0x2d8614: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8618u;
}
