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

// Function: sub_00359260
// Address: 0x359260 - 0x3592c0
void sub_00359260_0x359260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359260_0x359260");
#endif

    switch (ctx->pc) {
        case 0x359280u: goto label_359280;
        case 0x359288u: goto label_359288;
        case 0x35929cu: goto label_35929c;
        case 0x3592a8u: goto label_3592a8;
        default: break;
    }

    ctx->pc = 0x359260u;

    // 0x359260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x359260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x359264: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x359264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359268: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x359268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35926c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35926cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359270: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x359270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x359274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359278: 0xc102472  jal         func_4091C8
    ctx->pc = 0x359278u;
    SET_GPR_U32(ctx, 31, 0x359280u);
    ctx->pc = 0x35927Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359278u;
    // 0x35927c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x359278u, 0x359280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359280u;
label_359280:
    // 0x359280: 0xc10b108  jal         func_42C420
    ctx->pc = 0x359280u;
    SET_GPR_U32(ctx, 31, 0x359288u);
    ctx->pc = 0x359284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359280u;
    // 0x359284: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x359280u, 0x359288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359288u;
label_359288:
    // 0x359288: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x359288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35928c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35928cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359290: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x359290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359294: 0xc1024c6  jal         func_409318
    ctx->pc = 0x359294u;
    SET_GPR_U32(ctx, 31, 0x35929Cu);
    ctx->pc = 0x359298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359294u;
    // 0x359298: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x359294u, 0x35929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35929Cu;
label_35929c:
    // 0x35929c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35929cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3592a0: 0xc08d432  jal         func_2350C8
    ctx->pc = 0x3592A0u;
    SET_GPR_U32(ctx, 31, 0x3592A8u);
    ctx->pc = 0x3592A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3592A0u;
    // 0x3592a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2350C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2350C8u, 0x3592A0u, 0x3592A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3592A8u;
label_3592a8:
    // 0x3592a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3592a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3592ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3592acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3592b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3592b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3592b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3592b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3592b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3592B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3592BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3592B8u;
        // 0x3592bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3592B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3592C0u;
}
