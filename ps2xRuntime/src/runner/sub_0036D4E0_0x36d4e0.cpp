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

// Function: sub_0036D4E0
// Address: 0x36d4e0 - 0x36d530
void sub_0036D4E0_0x36d4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D4E0_0x36d4e0");
#endif

    switch (ctx->pc) {
        case 0x36d508u: goto label_36d508;
        case 0x36d518u: goto label_36d518;
        default: break;
    }

    ctx->pc = 0x36d4e0u;

    // 0x36d4e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36d4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36d4e4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x36d4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x36d4e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36d4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36d4ec: 0x24a590d8  addiu       $a1, $a1, -0x6F28
    ctx->pc = 0x36d4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938840));
    // 0x36d4f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36d4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36d4f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36d4f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d4f8: 0x3c11005a  lui         $s1, 0x5A
    ctx->pc = 0x36d4f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)90 << 16));
    // 0x36d4fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36d4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36d500: 0xc1026b2  jal         func_409AC8
    ctx->pc = 0x36D500u;
    SET_GPR_U32(ctx, 31, 0x36D508u);
    ctx->pc = 0x36D504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D500u;
    // 0x36d504: 0x26318690  addiu       $s1, $s1, -0x7970 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409AC8u, 0x36D500u, 0x36D508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D508u;
label_36d508:
    // 0x36d508: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x36d508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d50c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36d50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d510: 0xc10254e  jal         func_409538
    ctx->pc = 0x36D510u;
    SET_GPR_U32(ctx, 31, 0x36D518u);
    ctx->pc = 0x36D514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D510u;
    // 0x36d514: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409538u, 0x36D510u, 0x36D518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D518u;
label_36d518:
    // 0x36d518: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36d518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36d51c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d520: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36d520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36d524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d528: 0x3e00008  jr          $ra
    ctx->pc = 0x36D528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D528u;
        // 0x36d52c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D530u;
}
