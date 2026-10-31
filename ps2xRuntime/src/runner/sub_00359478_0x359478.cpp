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

// Function: sub_00359478
// Address: 0x359478 - 0x3594d8
void sub_00359478_0x359478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359478_0x359478");
#endif

    switch (ctx->pc) {
        case 0x359498u: goto label_359498;
        case 0x3594a0u: goto label_3594a0;
        case 0x3594b4u: goto label_3594b4;
        case 0x3594c0u: goto label_3594c0;
        default: break;
    }

    ctx->pc = 0x359478u;

    // 0x359478: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x359478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35947c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35947cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359480: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x359480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x359484: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x359484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359488: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x359488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35948c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35948cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359490: 0xc102472  jal         func_4091C8
    ctx->pc = 0x359490u;
    SET_GPR_U32(ctx, 31, 0x359498u);
    ctx->pc = 0x359494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359490u;
    // 0x359494: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x359490u, 0x359498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359498u;
label_359498:
    // 0x359498: 0xc10b108  jal         func_42C420
    ctx->pc = 0x359498u;
    SET_GPR_U32(ctx, 31, 0x3594A0u);
    ctx->pc = 0x35949Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359498u;
    // 0x35949c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x359498u, 0x3594A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3594A0u;
label_3594a0:
    // 0x3594a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3594a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3594a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3594a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3594a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3594a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3594ac: 0xc1024c6  jal         func_409318
    ctx->pc = 0x3594ACu;
    SET_GPR_U32(ctx, 31, 0x3594B4u);
    ctx->pc = 0x3594B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3594ACu;
    // 0x3594b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x3594ACu, 0x3594B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3594B4u;
label_3594b4:
    // 0x3594b4: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x3594b4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3594b8: 0xc08dc4a  jal         func_237128
    ctx->pc = 0x3594B8u;
    SET_GPR_U32(ctx, 31, 0x3594C0u);
    ctx->pc = 0x3594BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3594B8u;
    // 0x3594bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237128u, 0x3594B8u, 0x3594C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3594C0u;
label_3594c0:
    // 0x3594c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3594c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3594c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3594c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3594c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3594c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3594cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3594ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3594d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3594D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3594D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3594D0u;
        // 0x3594d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3594D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3594D8u;
}
