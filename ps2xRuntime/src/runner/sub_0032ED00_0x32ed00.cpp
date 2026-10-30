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

// Function: sub_0032ED00
// Address: 0x32ed00 - 0x32ed50
void sub_0032ED00_0x32ed00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032ED00_0x32ed00");
#endif

    switch (ctx->pc) {
        case 0x32ed1cu: goto label_32ed1c;
        case 0x32ed28u: goto label_32ed28;
        case 0x32ed34u: goto label_32ed34;
        case 0x32ed3cu: goto label_32ed3c;
        default: break;
    }

    ctx->pc = 0x32ed00u;

    // 0x32ed00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32ed00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32ed04: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32ed04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x32ed08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32ed08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32ed0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32ed0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ed10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32ed10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32ed14: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32ED14u;
    SET_GPR_U32(ctx, 31, 0x32ED1Cu);
    ctx->pc = 0x32ED18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ED14u;
    // 0x32ed18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32ED14u, 0x32ED1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ED1Cu;
label_32ed1c:
    // 0x32ed1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32ed1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ed20: 0xc0cb9f8  jal         func_32E7E0
    ctx->pc = 0x32ED20u;
    SET_GPR_U32(ctx, 31, 0x32ED28u);
    ctx->pc = 0x32ED24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ED20u;
    // 0x32ed24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E7E0u, 0x32ED20u, 0x32ED28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ED28u;
label_32ed28:
    // 0x32ed28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32ed28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ed2c: 0xc0cb334  jal         func_32CCD0
    ctx->pc = 0x32ED2Cu;
    SET_GPR_U32(ctx, 31, 0x32ED34u);
    ctx->pc = 0x32ED30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ED2Cu;
    // 0x32ed30: 0x24050110  addiu       $a1, $zero, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CCD0u, 0x32ED2Cu, 0x32ED34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ED34u;
label_32ed34:
    // 0x32ed34: 0xc0cb99c  jal         func_32E670
    ctx->pc = 0x32ED34u;
    SET_GPR_U32(ctx, 31, 0x32ED3Cu);
    ctx->pc = 0x32ED38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ED34u;
    // 0x32ed38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E670u, 0x32ED34u, 0x32ED3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ED3Cu;
label_32ed3c:
    // 0x32ed3c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32ed3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32ed40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32ed40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32ed44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32ed44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ed48: 0x3e00008  jr          $ra
    ctx->pc = 0x32ED48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32ED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ED48u;
        // 0x32ed4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32ED48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32ED50u;
}
