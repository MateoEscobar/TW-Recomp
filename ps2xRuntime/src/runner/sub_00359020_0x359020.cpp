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

// Function: sub_00359020
// Address: 0x359020 - 0x359080
void sub_00359020_0x359020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359020_0x359020");
#endif

    switch (ctx->pc) {
        case 0x359040u: goto label_359040;
        case 0x359048u: goto label_359048;
        case 0x35905cu: goto label_35905c;
        case 0x359068u: goto label_359068;
        default: break;
    }

    ctx->pc = 0x359020u;

    // 0x359020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x359020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x359024: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x359024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359028: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x359028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35902c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35902cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359030: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x359030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x359034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359038: 0xc102472  jal         func_4091C8
    ctx->pc = 0x359038u;
    SET_GPR_U32(ctx, 31, 0x359040u);
    ctx->pc = 0x35903Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359038u;
    // 0x35903c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x359038u, 0x359040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359040u;
label_359040:
    // 0x359040: 0xc10b108  jal         func_42C420
    ctx->pc = 0x359040u;
    SET_GPR_U32(ctx, 31, 0x359048u);
    ctx->pc = 0x359044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359040u;
    // 0x359044: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x359040u, 0x359048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359048u;
label_359048:
    // 0x359048: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x359048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35904c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35904cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359050: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x359050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359054: 0xc1024c6  jal         func_409318
    ctx->pc = 0x359054u;
    SET_GPR_U32(ctx, 31, 0x35905Cu);
    ctx->pc = 0x359058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359054u;
    // 0x359058: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x359054u, 0x35905Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35905Cu;
label_35905c:
    // 0x35905c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35905cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x359060: 0xc08de56  jal         func_237958
    ctx->pc = 0x359060u;
    SET_GPR_U32(ctx, 31, 0x359068u);
    ctx->pc = 0x359064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359060u;
    // 0x359064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237958u, 0x359060u, 0x359068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359068u;
label_359068:
    // 0x359068: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x359068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35906c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35906cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359070: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x359070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359078: 0x3e00008  jr          $ra
    ctx->pc = 0x359078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359078u;
        // 0x35907c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359080u;
}
