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

// Function: sub_0036F558
// Address: 0x36f558 - 0x36f5b8
void sub_0036F558_0x36f558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F558_0x36f558");
#endif

    switch (ctx->pc) {
        case 0x36f578u: goto label_36f578;
        case 0x36f580u: goto label_36f580;
        case 0x36f594u: goto label_36f594;
        case 0x36f5a0u: goto label_36f5a0;
        default: break;
    }

    ctx->pc = 0x36f558u;

    // 0x36f558: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36f558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36f55c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36f55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36f560: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36f560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36f564: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36f564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36f568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36f56c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36f56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36f570: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36F570u;
    SET_GPR_U32(ctx, 31, 0x36F578u);
    ctx->pc = 0x36F574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F570u;
    // 0x36f574: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36F570u, 0x36F578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F578u;
label_36f578:
    // 0x36f578: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36F578u;
    SET_GPR_U32(ctx, 31, 0x36F580u);
    ctx->pc = 0x36F57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F578u;
    // 0x36f57c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36F578u, 0x36F580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F580u;
label_36f580:
    // 0x36f580: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36f580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f584: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36f584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f588: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36f588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f58c: 0xc102488  jal         func_409220
    ctx->pc = 0x36F58Cu;
    SET_GPR_U32(ctx, 31, 0x36F594u);
    ctx->pc = 0x36F590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F58Cu;
    // 0x36f590: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36F58Cu, 0x36F594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F594u;
label_36f594:
    // 0x36f594: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36f594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f598: 0xc06d2ae  jal         func_1B4AB8
    ctx->pc = 0x36F598u;
    SET_GPR_U32(ctx, 31, 0x36F5A0u);
    ctx->pc = 0x36F59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F598u;
    // 0x36f59c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4AB8u, 0x36F598u, 0x36F5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F5A0u;
label_36f5a0:
    // 0x36f5a0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36f5a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36f5a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36f5a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f5a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36f5a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36f5ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36f5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x36F5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F5B0u;
        // 0x36f5b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F5B8u;
}
