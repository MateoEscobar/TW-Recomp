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

// Function: sub_0036D418
// Address: 0x36d418 - 0x36d478
void sub_0036D418_0x36d418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D418_0x36d418");
#endif

    switch (ctx->pc) {
        case 0x36d43cu: goto label_36d43c;
        case 0x36d454u: goto label_36d454;
        case 0x36d460u: goto label_36d460;
        default: break;
    }

    ctx->pc = 0x36d418u;

    // 0x36d418: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36d418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36d41c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x36d420: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36d420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36d424: 0x8c50bd30  lw          $s0, -0x42D0($v0)
    ctx->pc = 0x36d424u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x36d428: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36d428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36d42c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36d42cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d430: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36d430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36d434: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x36D434u;
    SET_GPR_U32(ctx, 31, 0x36D43Cu);
    ctx->pc = 0x36D438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D434u;
    // 0x36d438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x36D434u, 0x36D43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D43Cu;
label_36d43c:
    // 0x36d43c: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36D43Cu;
    {
        const bool branch_taken_0x36d43c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x36D440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D43Cu;
        // 0x36d440: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d43c) {
            ctx->pc = 0x36D458u;
            goto label_36d458;
        }
    }
    ctx->pc = 0x36D444u;
    // 0x36d444: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x36d444u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x36d448: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x36d448u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x36d44c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x36D44Cu;
    SET_GPR_U32(ctx, 31, 0x36D454u);
    ctx->pc = 0x36D450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D44Cu;
    // 0x36d450: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x36D44Cu, 0x36D454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D454u;
label_36d454:
    // 0x36d454: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36d454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36d458:
    // 0x36d458: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x36D458u;
    SET_GPR_U32(ctx, 31, 0x36D460u);
    ctx->pc = 0x36D45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D458u;
    // 0x36d45c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x36D458u, 0x36D460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D460u;
label_36d460:
    // 0x36d460: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36d460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36d464: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36d464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d468: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36d468u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d46c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36d46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d470: 0x3e00008  jr          $ra
    ctx->pc = 0x36D470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D470u;
        // 0x36d474: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D478u;
}
