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

// Function: sub_0036C978
// Address: 0x36c978 - 0x36c9c8
void sub_0036C978_0x36c978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C978_0x36c978");
#endif

    switch (ctx->pc) {
        case 0x36c994u: goto label_36c994;
        case 0x36c99cu: goto label_36c99c;
        case 0x36c9a4u: goto label_36c9a4;
        case 0x36c9b0u: goto label_36c9b0;
        default: break;
    }

    ctx->pc = 0x36c978u;

    // 0x36c978: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36c978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36c97c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36c97cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c980: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x36c980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x36c984: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36c984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c988: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c98c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36C98Cu;
    SET_GPR_U32(ctx, 31, 0x36C994u);
    ctx->pc = 0x36C990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C98Cu;
    // 0x36c990: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36C98Cu, 0x36C994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C994u;
label_36c994:
    // 0x36c994: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36C994u;
    SET_GPR_U32(ctx, 31, 0x36C99Cu);
    ctx->pc = 0x36C998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C994u;
    // 0x36c998: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36C994u, 0x36C99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C99Cu;
label_36c99c:
    // 0x36c99c: 0xc0e1668  jal         func_3859A0
    ctx->pc = 0x36C99Cu;
    SET_GPR_U32(ctx, 31, 0x36C9A4u);
    ctx->pc = 0x36C9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C99Cu;
    // 0x36c9a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3859A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3859A0u, 0x36C99Cu, 0x36C9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C9A4u;
label_36c9a4:
    // 0x36c9a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36c9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c9a8: 0xc102542  jal         func_409508
    ctx->pc = 0x36C9A8u;
    SET_GPR_U32(ctx, 31, 0x36C9B0u);
    ctx->pc = 0x36C9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C9A8u;
    // 0x36c9ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409508u, 0x36C9A8u, 0x36C9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C9B0u;
label_36c9b0:
    // 0x36c9b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x36c9b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c9b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c9b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x36C9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C9BCu;
        // 0x36c9c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C9BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C9C4u;
    // 0x36c9c4: 0x0  nop
    ctx->pc = 0x36c9c4u;
    // NOP
    ctx->pc = 0x36c9c8u;
}
