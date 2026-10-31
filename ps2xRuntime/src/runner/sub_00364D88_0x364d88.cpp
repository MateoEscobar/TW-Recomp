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

// Function: sub_00364D88
// Address: 0x364d88 - 0x364de8
void sub_00364D88_0x364d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364D88_0x364d88");
#endif

    switch (ctx->pc) {
        case 0x364da8u: goto label_364da8;
        case 0x364db0u: goto label_364db0;
        case 0x364dc4u: goto label_364dc4;
        case 0x364dd0u: goto label_364dd0;
        default: break;
    }

    ctx->pc = 0x364d88u;

    // 0x364d88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x364d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x364d8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x364d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364d90: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x364d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x364d94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x364d94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364d98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x364d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x364d9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x364d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x364da0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x364DA0u;
    SET_GPR_U32(ctx, 31, 0x364DA8u);
    ctx->pc = 0x364DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364DA0u;
    // 0x364da4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x364DA0u, 0x364DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364DA8u;
label_364da8:
    // 0x364da8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x364DA8u;
    SET_GPR_U32(ctx, 31, 0x364DB0u);
    ctx->pc = 0x364DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364DA8u;
    // 0x364dac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x364DA8u, 0x364DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364DB0u;
label_364db0:
    // 0x364db0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x364db0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364db4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x364db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364db8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x364db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364dbc: 0xc1024c6  jal         func_409318
    ctx->pc = 0x364DBCu;
    SET_GPR_U32(ctx, 31, 0x364DC4u);
    ctx->pc = 0x364DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364DBCu;
    // 0x364dc0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x364DBCu, 0x364DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364DC4u;
label_364dc4:
    // 0x364dc4: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x364dc4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x364dc8: 0xc08e4c0  jal         func_239300
    ctx->pc = 0x364DC8u;
    SET_GPR_U32(ctx, 31, 0x364DD0u);
    ctx->pc = 0x364DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364DC8u;
    // 0x364dcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239300u, 0x364DC8u, 0x364DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364DD0u;
label_364dd0:
    // 0x364dd0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x364dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x364dd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x364dd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364dd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x364dd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x364ddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x364ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364de0: 0x3e00008  jr          $ra
    ctx->pc = 0x364DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364DE0u;
        // 0x364de4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364DE8u;
}
