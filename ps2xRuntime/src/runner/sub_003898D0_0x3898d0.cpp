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

// Function: sub_003898D0
// Address: 0x3898d0 - 0x389918
void sub_003898D0_0x3898d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003898D0_0x3898d0");
#endif

    switch (ctx->pc) {
        case 0x3898ecu: goto label_3898ec;
        case 0x389900u: goto label_389900;
        default: break;
    }

    ctx->pc = 0x3898d0u;

    // 0x3898d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3898d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3898d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3898d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3898d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3898d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3898dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3898dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3898e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3898e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3898e4: 0xc04808c  jal         func_120230
    ctx->pc = 0x3898E4u;
    SET_GPR_U32(ctx, 31, 0x3898ECu);
    ctx->pc = 0x3898E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3898E4u;
    // 0x3898e8: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x3898E4u, 0x3898ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3898ECu;
label_3898ec:
    // 0x3898ec: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3898ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x3898f0: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x3898f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CD4Cu));
    // 0x3898f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3898f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3898f8: 0xc0629c8  jal         func_18A720
    ctx->pc = 0x3898F8u;
    SET_GPR_U32(ctx, 31, 0x389900u);
    ctx->pc = 0x3898FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3898F8u;
    // 0x3898fc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A720u, 0x3898F8u, 0x389900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389900u;
label_389900:
    // 0x389900: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x389900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x389904: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x389904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x389908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x389908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38990c: 0x3e00008  jr          $ra
    ctx->pc = 0x38990Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38990Cu;
        // 0x389910: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38990Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389914u;
    // 0x389914: 0x0  nop
    ctx->pc = 0x389914u;
    // NOP
    ctx->pc = 0x389918u;
}
