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

// Function: sub_0036F0D0
// Address: 0x36f0d0 - 0x36f130
void sub_0036F0D0_0x36f0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F0D0_0x36f0d0");
#endif

    switch (ctx->pc) {
        case 0x36f0f0u: goto label_36f0f0;
        case 0x36f104u: goto label_36f104;
        case 0x36f10cu: goto label_36f10c;
        case 0x36f118u: goto label_36f118;
        default: break;
    }

    ctx->pc = 0x36f0d0u;

    // 0x36f0d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36f0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36f0d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36f0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36f0d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36f0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36f0dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36f0dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f0e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36f0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36f0e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36f0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36f0e8: 0xc102488  jal         func_409220
    ctx->pc = 0x36F0E8u;
    SET_GPR_U32(ctx, 31, 0x36F0F0u);
    ctx->pc = 0x36F0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F0E8u;
    // 0x36f0ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36F0E8u, 0x36F0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F0F0u;
label_36f0f0:
    // 0x36f0f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36f0f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f0f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36f0f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f0f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36f0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f0fc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36F0FCu;
    SET_GPR_U32(ctx, 31, 0x36F104u);
    ctx->pc = 0x36F100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F0FCu;
    // 0x36f100: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36F0FCu, 0x36F104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F104u;
label_36f104:
    // 0x36f104: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36F104u;
    SET_GPR_U32(ctx, 31, 0x36F10Cu);
    ctx->pc = 0x36F108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F104u;
    // 0x36f108: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36F104u, 0x36F10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F10Cu;
label_36f10c:
    // 0x36f10c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36f10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f110: 0xc06d1da  jal         func_1B4768
    ctx->pc = 0x36F110u;
    SET_GPR_U32(ctx, 31, 0x36F118u);
    ctx->pc = 0x36F114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F110u;
    // 0x36f114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4768u, 0x36F110u, 0x36F118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F118u;
label_36f118:
    // 0x36f118: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36f118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36f11c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36f11cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f120: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36f120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36f124: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36f124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f128: 0x3e00008  jr          $ra
    ctx->pc = 0x36F128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F128u;
        // 0x36f12c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F130u;
}
