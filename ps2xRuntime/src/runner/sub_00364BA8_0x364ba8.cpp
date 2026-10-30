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

// Function: sub_00364BA8
// Address: 0x364ba8 - 0x364c08
void sub_00364BA8_0x364ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364BA8_0x364ba8");
#endif

    switch (ctx->pc) {
        case 0x364bc8u: goto label_364bc8;
        case 0x364bd0u: goto label_364bd0;
        case 0x364be4u: goto label_364be4;
        case 0x364bf0u: goto label_364bf0;
        default: break;
    }

    ctx->pc = 0x364ba8u;

    // 0x364ba8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x364ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x364bac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x364bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364bb0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x364bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x364bb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x364bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364bb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x364bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x364bbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x364bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x364bc0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x364BC0u;
    SET_GPR_U32(ctx, 31, 0x364BC8u);
    ctx->pc = 0x364BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364BC0u;
    // 0x364bc4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x364BC0u, 0x364BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364BC8u;
label_364bc8:
    // 0x364bc8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x364BC8u;
    SET_GPR_U32(ctx, 31, 0x364BD0u);
    ctx->pc = 0x364BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364BC8u;
    // 0x364bcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x364BC8u, 0x364BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364BD0u;
label_364bd0:
    // 0x364bd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x364bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364bd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x364bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364bd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x364bd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364bdc: 0xc1024c6  jal         func_409318
    ctx->pc = 0x364BDCu;
    SET_GPR_U32(ctx, 31, 0x364BE4u);
    ctx->pc = 0x364BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364BDCu;
    // 0x364be0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x364BDCu, 0x364BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364BE4u;
label_364be4:
    // 0x364be4: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x364be4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x364be8: 0xc08e556  jal         func_239558
    ctx->pc = 0x364BE8u;
    SET_GPR_U32(ctx, 31, 0x364BF0u);
    ctx->pc = 0x364BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364BE8u;
    // 0x364bec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239558u, 0x364BE8u, 0x364BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364BF0u;
label_364bf0:
    // 0x364bf0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x364bf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x364bf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x364bf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364bf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x364bf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x364bfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x364bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364c00: 0x3e00008  jr          $ra
    ctx->pc = 0x364C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364C00u;
        // 0x364c04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364C08u;
}
