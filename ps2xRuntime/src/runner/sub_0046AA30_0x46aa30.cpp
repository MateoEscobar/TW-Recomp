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

// Function: sub_0046AA30
// Address: 0x46aa30 - 0x46aa70
void sub_0046AA30_0x46aa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046AA30_0x46aa30");
#endif

    switch (ctx->pc) {
        case 0x46aa54u: goto label_46aa54;
        case 0x46aa5cu: goto label_46aa5c;
        default: break;
    }

    ctx->pc = 0x46aa30u;

    // 0x46aa30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x46aa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x46aa34: 0x8f8284c0  lw          $v0, -0x7B40($gp)
    ctx->pc = 0x46aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935744)));
    // 0x46aa38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x46aa38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x46aa3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x46aa3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46aa40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46aa40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46aa44: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x46aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x46aa48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46aa48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46aa4c: 0xc11a870  jal         func_46A1C0
    ctx->pc = 0x46AA4Cu;
    SET_GPR_U32(ctx, 31, 0x46AA54u);
    ctx->pc = 0x46AA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46AA4Cu;
    // 0x46aa50: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A1C0u, 0x46AA4Cu, 0x46AA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46AA54u;
label_46aa54:
    // 0x46aa54: 0xc11b1ea  jal         func_46C7A8
    ctx->pc = 0x46AA54u;
    SET_GPR_U32(ctx, 31, 0x46AA5Cu);
    ctx->pc = 0x46AA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46AA54u;
    // 0x46aa58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C7A8u, 0x46AA54u, 0x46AA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46AA5Cu;
label_46aa5c:
    // 0x46aa5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x46aa5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46aa60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46aa60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46aa64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x46aa64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46aa68: 0x3e00008  jr          $ra
    ctx->pc = 0x46AA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AA68u;
        // 0x46aa6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46AA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46AA70u;
}
