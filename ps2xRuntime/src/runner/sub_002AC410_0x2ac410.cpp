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

// Function: sub_002AC410
// Address: 0x2ac410 - 0x2ac458
void sub_002AC410_0x2ac410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC410_0x2ac410");
#endif

    switch (ctx->pc) {
        case 0x2ac434u: goto label_2ac434;
        case 0x2ac44cu: goto label_2ac44c;
        default: break;
    }

    ctx->pc = 0x2ac410u;

    // 0x2ac410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ac410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ac414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac418: 0x90830031  lbu         $v1, 0x31($a0)
    ctx->pc = 0x2ac418u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x2ac41c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2ac41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ac420: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2ac420u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ac424: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AC424u;
    {
        const bool branch_taken_0x2ac424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC424u;
        // 0x2ac428: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac424) {
            ctx->pc = 0x2AC43Cu;
            goto label_2ac43c;
        }
    }
    ctx->pc = 0x2AC42Cu;
    // 0x2ac42c: 0xc0ab240  jal         func_2AC900
    ctx->pc = 0x2AC42Cu;
    SET_GPR_U32(ctx, 31, 0x2AC434u);
    ctx->pc = 0x2AC900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC900u, 0x2AC42Cu, 0x2AC434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC434u;
label_2ac434:
    // 0x2ac434: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2AC434u;
    {
        const bool branch_taken_0x2ac434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC434u;
        // 0x2ac438: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac434) {
            ctx->pc = 0x2AC450u;
            goto label_2ac450;
        }
    }
    ctx->pc = 0x2AC43Cu;
label_2ac43c:
    // 0x2ac43c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AC43Cu;
    {
        const bool branch_taken_0x2ac43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC43Cu;
        // 0x2ac440: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac43c) {
            ctx->pc = 0x2AC450u;
            goto label_2ac450;
        }
    }
    ctx->pc = 0x2AC444u;
    // 0x2ac444: 0xc0ab25c  jal         func_2AC970
    ctx->pc = 0x2AC444u;
    SET_GPR_U32(ctx, 31, 0x2AC44Cu);
    ctx->pc = 0x2AC970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC970u, 0x2AC444u, 0x2AC44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC44Cu;
label_2ac44c:
    // 0x2ac44c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ac450:
    // 0x2ac450: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC450u;
        // 0x2ac454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC458u;
}
