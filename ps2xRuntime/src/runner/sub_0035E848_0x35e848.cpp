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

// Function: sub_0035E848
// Address: 0x35e848 - 0x35e8a8
void sub_0035E848_0x35e848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E848_0x35e848");
#endif

    switch (ctx->pc) {
        case 0x35e868u: goto label_35e868;
        case 0x35e870u: goto label_35e870;
        case 0x35e884u: goto label_35e884;
        case 0x35e890u: goto label_35e890;
        default: break;
    }

    ctx->pc = 0x35e848u;

    // 0x35e848: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35e848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35e84c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35e84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e850: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35e850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35e854: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35e854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e858: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35e858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35e85c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35e85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35e860: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E860u;
    SET_GPR_U32(ctx, 31, 0x35E868u);
    ctx->pc = 0x35E864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E860u;
    // 0x35e864: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E860u, 0x35E868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E868u;
label_35e868:
    // 0x35e868: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35E868u;
    SET_GPR_U32(ctx, 31, 0x35E870u);
    ctx->pc = 0x35E86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E868u;
    // 0x35e86c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35E868u, 0x35E870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E870u;
label_35e870:
    // 0x35e870: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35e870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35e874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e878: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35e878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e87c: 0xc102488  jal         func_409220
    ctx->pc = 0x35E87Cu;
    SET_GPR_U32(ctx, 31, 0x35E884u);
    ctx->pc = 0x35E880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E87Cu;
    // 0x35e880: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35E87Cu, 0x35E884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E884u;
label_35e884:
    // 0x35e884: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35e884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e888: 0xc1076b6  jal         func_41DAD8
    ctx->pc = 0x35E888u;
    SET_GPR_U32(ctx, 31, 0x35E890u);
    ctx->pc = 0x35E88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E888u;
    // 0x35e88c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41DAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41DAD8u, 0x35E888u, 0x35E890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E890u;
label_35e890:
    // 0x35e890: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35e890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35e894: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35e894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e898: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35e898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e89c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35e89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x35E8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E8A0u;
        // 0x35e8a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E8A8u;
}
