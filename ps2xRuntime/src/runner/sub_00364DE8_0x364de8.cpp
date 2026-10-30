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

// Function: sub_00364DE8
// Address: 0x364de8 - 0x364e48
void sub_00364DE8_0x364de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364DE8_0x364de8");
#endif

    switch (ctx->pc) {
        case 0x364e08u: goto label_364e08;
        case 0x364e10u: goto label_364e10;
        case 0x364e24u: goto label_364e24;
        case 0x364e30u: goto label_364e30;
        default: break;
    }

    ctx->pc = 0x364de8u;

    // 0x364de8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x364de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x364dec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x364decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364df0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x364df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x364df4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x364df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364df8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x364df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x364dfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x364dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x364e00: 0xc102472  jal         func_4091C8
    ctx->pc = 0x364E00u;
    SET_GPR_U32(ctx, 31, 0x364E08u);
    ctx->pc = 0x364E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364E00u;
    // 0x364e04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x364E00u, 0x364E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364E08u;
label_364e08:
    // 0x364e08: 0xc10b108  jal         func_42C420
    ctx->pc = 0x364E08u;
    SET_GPR_U32(ctx, 31, 0x364E10u);
    ctx->pc = 0x364E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364E08u;
    // 0x364e0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x364E08u, 0x364E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364E10u;
label_364e10:
    // 0x364e10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x364e10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364e14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x364e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364e18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x364e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364e1c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x364E1Cu;
    SET_GPR_U32(ctx, 31, 0x364E24u);
    ctx->pc = 0x364E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364E1Cu;
    // 0x364e20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x364E1Cu, 0x364E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364E24u;
label_364e24:
    // 0x364e24: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x364e24u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x364e28: 0xc08e4a0  jal         func_239280
    ctx->pc = 0x364E28u;
    SET_GPR_U32(ctx, 31, 0x364E30u);
    ctx->pc = 0x364E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364E28u;
    // 0x364e2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239280u, 0x364E28u, 0x364E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364E30u;
label_364e30:
    // 0x364e30: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x364e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x364e34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x364e34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364e38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x364e38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x364e3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x364e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364e40: 0x3e00008  jr          $ra
    ctx->pc = 0x364E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364E40u;
        // 0x364e44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364E48u;
}
