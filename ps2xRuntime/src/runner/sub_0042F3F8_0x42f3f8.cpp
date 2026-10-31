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

// Function: sub_0042F3F8
// Address: 0x42f3f8 - 0x42f448
void sub_0042F3F8_0x42f3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042F3F8_0x42f3f8");
#endif

    switch (ctx->pc) {
        case 0x42f41cu: goto label_42f41c;
        case 0x42f434u: goto label_42f434;
        default: break;
    }

    ctx->pc = 0x42f3f8u;

    // 0x42f3f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42f3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x42f3fc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x42f3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x42f400: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x42f400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x42f404: 0x8c6259f0  lw          $v0, 0x59F0($v1)
    ctx->pc = 0x42f404u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7159F0u));
    // 0x42f408: 0x247059f0  addiu       $s0, $v1, 0x59F0
    ctx->pc = 0x42f408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23024));
    // 0x42f40c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x42F40Cu;
    {
        const bool branch_taken_0x42f40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F40Cu;
        // 0x42f410: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f40c) {
            ctx->pc = 0x42F434u;
            goto label_42f434;
        }
    }
    ctx->pc = 0x42F414u;
    // 0x42f414: 0xc10bd76  jal         func_42F5D8
    ctx->pc = 0x42F414u;
    SET_GPR_U32(ctx, 31, 0x42F41Cu);
    ctx->pc = 0x42F5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42F5D8u, 0x42F414u, 0x42F41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42F41Cu;
label_42f41c:
    // 0x42f41c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x42f41cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x42f420: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x42f420u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x42f424: 0x24a5c338  addiu       $a1, $a1, -0x3CC8
    ctx->pc = 0x42f424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951736));
    // 0x42f428: 0x24c671d0  addiu       $a2, $a2, 0x71D0
    ctx->pc = 0x42f428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29136));
    // 0x42f42c: 0xc10bbf8  jal         func_42EFE0
    ctx->pc = 0x42F42Cu;
    SET_GPR_U32(ctx, 31, 0x42F434u);
    ctx->pc = 0x42F430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42F42Cu;
    // 0x42f430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EFE0u, 0x42F42Cu, 0x42F434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42F434u;
label_42f434:
    // 0x42f434: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x42f434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42f438: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42f438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42f43c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x42f43cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42f440: 0x3e00008  jr          $ra
    ctx->pc = 0x42F440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42F444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F440u;
        // 0x42f444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42F440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42F448u;
}
