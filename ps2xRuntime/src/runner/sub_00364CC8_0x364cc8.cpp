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

// Function: sub_00364CC8
// Address: 0x364cc8 - 0x364d28
void sub_00364CC8_0x364cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364CC8_0x364cc8");
#endif

    switch (ctx->pc) {
        case 0x364ce8u: goto label_364ce8;
        case 0x364cf0u: goto label_364cf0;
        case 0x364d04u: goto label_364d04;
        case 0x364d10u: goto label_364d10;
        default: break;
    }

    ctx->pc = 0x364cc8u;

    // 0x364cc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x364cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x364ccc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x364cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364cd0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x364cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x364cd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x364cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364cd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x364cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x364cdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x364cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x364ce0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x364CE0u;
    SET_GPR_U32(ctx, 31, 0x364CE8u);
    ctx->pc = 0x364CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364CE0u;
    // 0x364ce4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x364CE0u, 0x364CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364CE8u;
label_364ce8:
    // 0x364ce8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x364CE8u;
    SET_GPR_U32(ctx, 31, 0x364CF0u);
    ctx->pc = 0x364CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364CE8u;
    // 0x364cec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x364CE8u, 0x364CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364CF0u;
label_364cf0:
    // 0x364cf0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x364cf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x364cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364cf8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x364cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364cfc: 0xc1024c6  jal         func_409318
    ctx->pc = 0x364CFCu;
    SET_GPR_U32(ctx, 31, 0x364D04u);
    ctx->pc = 0x364D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364CFCu;
    // 0x364d00: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x364CFCu, 0x364D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364D04u;
label_364d04:
    // 0x364d04: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x364d04u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x364d08: 0xc08e490  jal         func_239240
    ctx->pc = 0x364D08u;
    SET_GPR_U32(ctx, 31, 0x364D10u);
    ctx->pc = 0x364D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364D08u;
    // 0x364d0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239240u, 0x364D08u, 0x364D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364D10u;
label_364d10:
    // 0x364d10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x364d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x364d14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x364d14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364d18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x364d18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x364d1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x364d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364d20: 0x3e00008  jr          $ra
    ctx->pc = 0x364D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364D20u;
        // 0x364d24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364D28u;
}
