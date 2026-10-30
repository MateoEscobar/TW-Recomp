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

// Function: sub_002FA710
// Address: 0x2fa710 - 0x2fa770
void sub_002FA710_0x2fa710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA710_0x2fa710");
#endif

    switch (ctx->pc) {
        case 0x2fa734u: goto label_2fa734;
        case 0x2fa748u: goto label_2fa748;
        case 0x2fa754u: goto label_2fa754;
        default: break;
    }

    ctx->pc = 0x2fa710u;

    // 0x2fa710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fa710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fa714: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fa714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fa718: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2fa718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2fa71c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fa71cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa720: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fa720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fa724: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2fa724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fa728: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2fa728u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fa72c: 0xc089000  jal         func_224000
    ctx->pc = 0x2FA72Cu;
    SET_GPR_U32(ctx, 31, 0x2FA734u);
    ctx->pc = 0x2FA730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA72Cu;
    // 0x2fa730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x2FA72Cu, 0x2FA734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA734u;
label_2fa734:
    // 0x2fa734: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fa734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa738: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FA738u;
    {
        const bool branch_taken_0x2fa738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fa738) {
            ctx->pc = 0x2FA73Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA738u;
            // 0x2fa73c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA74Cu;
            goto label_2fa74c;
        }
    }
    ctx->pc = 0x2FA740u;
    // 0x2fa740: 0xc095fce  jal         func_257F38
    ctx->pc = 0x2FA740u;
    SET_GPR_U32(ctx, 31, 0x2FA748u);
    ctx->pc = 0x2FA744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA740u;
    // 0x2fa744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x2FA740u, 0x2FA748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA748u;
label_2fa748:
    // 0x2fa748: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2fa748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2fa74c:
    // 0x2fa74c: 0xc0a2ab0  jal         func_28AAC0
    ctx->pc = 0x2FA74Cu;
    SET_GPR_U32(ctx, 31, 0x2FA754u);
    ctx->pc = 0x2FA750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA74Cu;
    // 0x2fa750: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2FA74Cu, 0x2FA754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA754u;
label_2fa754:
    // 0x2fa754: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2fa754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fa758: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fa758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa75c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fa75cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fa760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fa760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa764: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA764u;
        // 0x2fa768: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA76Cu;
    // 0x2fa76c: 0x0  nop
    ctx->pc = 0x2fa76cu;
    // NOP
    ctx->pc = 0x2fa770u;
}
