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

// Function: sub_00413448
// Address: 0x413448 - 0x4134a0
void sub_00413448_0x413448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00413448_0x413448");
#endif

    switch (ctx->pc) {
        case 0x413474u: goto label_413474;
        case 0x41348cu: goto label_41348c;
        default: break;
    }

    ctx->pc = 0x413448u;

    // 0x413448: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x413448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x41344c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x41344cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x413450: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x413450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x413454: 0x24425cb8  addiu       $v0, $v0, 0x5CB8
    ctx->pc = 0x413454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23736));
    // 0x413458: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x413458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41345c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41345cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x413460: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x413460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x413464: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x413464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413468: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x413468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x41346c: 0xc0e1294  jal         func_384A50
    ctx->pc = 0x41346Cu;
    SET_GPR_U32(ctx, 31, 0x413474u);
    ctx->pc = 0x413470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41346Cu;
    // 0x413470: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384A50u, 0x41346Cu, 0x413474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413474u;
label_413474:
    // 0x413474: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x413474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x413478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x413478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41347c: 0x24424b98  addiu       $v0, $v0, 0x4B98
    ctx->pc = 0x41347cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19352));
    // 0x413480: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x413480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413484: 0xc104a22  jal         func_412888
    ctx->pc = 0x413484u;
    SET_GPR_U32(ctx, 31, 0x41348Cu);
    ctx->pc = 0x413488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413484u;
    // 0x413488: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412888u, 0x413484u, 0x41348Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41348Cu;
label_41348c:
    // 0x41348c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41348cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x413490: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x413490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x413494: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x413494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x413498: 0x3e00008  jr          $ra
    ctx->pc = 0x413498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413498u;
        // 0x41349c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4134A0u;
}
