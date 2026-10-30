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

// Function: sub_00379A50
// Address: 0x379a50 - 0x379ac8
void sub_00379A50_0x379a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379A50_0x379a50");
#endif

    switch (ctx->pc) {
        case 0x379a78u: goto label_379a78;
        case 0x379a80u: goto label_379a80;
        case 0x379a94u: goto label_379a94;
        case 0x379a9cu: goto label_379a9c;
        case 0x379aa8u: goto label_379aa8;
        default: break;
    }

    ctx->pc = 0x379a50u;

    // 0x379a50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x379a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x379a54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x379a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379a58: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x379a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x379a5c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x379a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x379a60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x379a60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379a64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x379a64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379a68: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x379a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x379a6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x379a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x379a70: 0xc102472  jal         func_4091C8
    ctx->pc = 0x379A70u;
    SET_GPR_U32(ctx, 31, 0x379A78u);
    ctx->pc = 0x379A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379A70u;
    // 0x379a74: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x379A70u, 0x379A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379A78u;
label_379a78:
    // 0x379a78: 0xc10b108  jal         func_42C420
    ctx->pc = 0x379A78u;
    SET_GPR_U32(ctx, 31, 0x379A80u);
    ctx->pc = 0x379A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379A78u;
    // 0x379a7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x379A78u, 0x379A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379A80u;
label_379a80:
    // 0x379a80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x379a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379a84: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x379a84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379a88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379a8c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x379A8Cu;
    SET_GPR_U32(ctx, 31, 0x379A94u);
    ctx->pc = 0x379A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379A8Cu;
    // 0x379a90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x379A8Cu, 0x379A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379A94u;
label_379a94:
    // 0x379a94: 0xc10b108  jal         func_42C420
    ctx->pc = 0x379A94u;
    SET_GPR_U32(ctx, 31, 0x379A9Cu);
    ctx->pc = 0x379A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379A94u;
    // 0x379a98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x379A94u, 0x379A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379A9Cu;
label_379a9c:
    // 0x379a9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x379a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379aa0: 0xc0e5bc2  jal         func_396F08
    ctx->pc = 0x379AA0u;
    SET_GPR_U32(ctx, 31, 0x379AA8u);
    ctx->pc = 0x379AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379AA0u;
    // 0x379aa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396F08u, 0x379AA0u, 0x379AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379AA8u;
label_379aa8:
    // 0x379aa8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x379aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x379aac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x379aacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379ab0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x379ab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379ab4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x379ab4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379ab8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x379ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379abc: 0x3e00008  jr          $ra
    ctx->pc = 0x379ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379ABCu;
        // 0x379ac0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379AC4u;
    // 0x379ac4: 0x0  nop
    ctx->pc = 0x379ac4u;
    // NOP
    ctx->pc = 0x379ac8u;
}
