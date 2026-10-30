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

// Function: sub_00295E00
// Address: 0x295e00 - 0x295e38
void sub_00295E00_0x295e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295E00_0x295e00");
#endif

    switch (ctx->pc) {
        case 0x295e14u: goto label_295e14;
        case 0x295e20u: goto label_295e20;
        default: break;
    }

    ctx->pc = 0x295e00u;

    // 0x295e00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x295e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x295e04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x295e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x295e08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x295e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x295e0c: 0xc0a58bc  jal         func_2962F0
    ctx->pc = 0x295E0Cu;
    SET_GPR_U32(ctx, 31, 0x295E14u);
    ctx->pc = 0x295E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295E0Cu;
    // 0x295e10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2962F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2962F0u, 0x295E0Cu, 0x295E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295E14u;
label_295e14:
    // 0x295e14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e18: 0xc0a58d6  jal         func_296358
    ctx->pc = 0x295E18u;
    SET_GPR_U32(ctx, 31, 0x295E20u);
    ctx->pc = 0x295E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295E18u;
    // 0x295e1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296358u, 0x295E18u, 0x295E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295E20u;
label_295e20:
    // 0x295e20: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x295e20u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x295e24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x295e24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295e28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x295e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295e2c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x295e2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x295e30: 0x3e00008  jr          $ra
    ctx->pc = 0x295E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295E30u;
        // 0x295e34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295E38u;
}
