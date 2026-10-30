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

// Function: sub_0016D410
// Address: 0x16d410 - 0x16d458
void sub_0016D410_0x16d410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D410_0x16d410");
#endif

    switch (ctx->pc) {
        case 0x16d428u: goto label_16d428;
        default: break;
    }

    ctx->pc = 0x16d410u;

    // 0x16d410: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16d410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16d414: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16d414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d418: 0x24456e30  addiu       $a1, $v0, 0x6E30
    ctx->pc = 0x16d418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 28208));
    // 0x16d41c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x16d41cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x16d420: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x16d420u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x16d424: 0x0  nop
    ctx->pc = 0x16d424u;
    // NOP
label_16d428:
    // 0x16d428: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x16d428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x16d42c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16D42Cu;
    {
        const bool branch_taken_0x16d42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D42Cu;
        // 0x16d430: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d42c) {
            ctx->pc = 0x16D43Cu;
            goto label_16d43c;
        }
    }
    ctx->pc = 0x16D434u;
    // 0x16d434: 0x3e00008  jr          $ra
    ctx->pc = 0x16D434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D434u;
        // 0x16d438: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D43Cu;
label_16d43c:
    // 0x16d43c: 0x24a50b10  addiu       $a1, $a1, 0xB10
    ctx->pc = 0x16d43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2832));
    // 0x16d440: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x16d440u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x16d444: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x16d444u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x16d448: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x16D448u;
    {
        const bool branch_taken_0x16d448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D448u;
        // 0x16d44c: 0x661821  addu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d448) {
            ctx->pc = 0x16D428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d428;
        }
    }
    ctx->pc = 0x16D450u;
    // 0x16d450: 0x3e00008  jr          $ra
    ctx->pc = 0x16D450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D450u;
        // 0x16d454: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D458u;
}
