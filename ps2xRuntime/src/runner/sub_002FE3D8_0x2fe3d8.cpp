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

// Function: sub_002FE3D8
// Address: 0x2fe3d8 - 0x2fe428
void sub_002FE3D8_0x2fe3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE3D8_0x2fe3d8");
#endif

    switch (ctx->pc) {
        case 0x2fe3fcu: goto label_2fe3fc;
        case 0x2fe40cu: goto label_2fe40c;
        default: break;
    }

    ctx->pc = 0x2fe3d8u;

    // 0x2fe3d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fe3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fe3dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2fe3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2fe3e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fe3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fe3e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2fe3e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe3e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fe3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fe3ec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fe3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fe3f0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2fe3f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fe3f4: 0xc090cd8  jal         func_243360
    ctx->pc = 0x2FE3F4u;
    SET_GPR_U32(ctx, 31, 0x2FE3FCu);
    ctx->pc = 0x2FE3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE3F4u;
    // 0x2fe3f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243360u, 0x2FE3F4u, 0x2FE3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE3FCu;
label_2fe3fc:
    // 0x2fe3fc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FE3FCu;
    {
        const bool branch_taken_0x2fe3fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE3FCu;
        // 0x2fe400: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe3fc) {
            ctx->pc = 0x2FE410u;
            goto label_2fe410;
        }
    }
    ctx->pc = 0x2FE404u;
    // 0x2fe404: 0xc08a112  jal         func_228448
    ctx->pc = 0x2FE404u;
    SET_GPR_U32(ctx, 31, 0x2FE40Cu);
    ctx->pc = 0x2FE408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE404u;
    // 0x2fe408: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228448u, 0x2FE404u, 0x2FE40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE40Cu;
label_2fe40c:
    // 0x2fe40c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2fe40cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2fe410:
    // 0x2fe410: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2fe410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fe414: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fe414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fe418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe41c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE41Cu;
        // 0x2fe420: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE424u;
    // 0x2fe424: 0x0  nop
    ctx->pc = 0x2fe424u;
    // NOP
    ctx->pc = 0x2fe428u;
}
