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

// Function: sub_002E4B88
// Address: 0x2e4b88 - 0x2e4be0
void sub_002E4B88_0x2e4b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4B88_0x2e4b88");
#endif

    switch (ctx->pc) {
        case 0x2e4ba8u: goto label_2e4ba8;
        case 0x2e4bccu: goto label_2e4bcc;
        default: break;
    }

    ctx->pc = 0x2e4b88u;

    // 0x2e4b88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e4b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e4b8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e4b8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4b90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e4b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e4b94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e4b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e4b98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e4b98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4b9c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2e4b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2e4ba0: 0xc0d5068  jal         func_3541A0
    ctx->pc = 0x2E4BA0u;
    SET_GPR_U32(ctx, 31, 0x2E4BA8u);
    ctx->pc = 0x2E4BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4BA0u;
    // 0x2e4ba4: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3541A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3541A0u, 0x2E4BA0u, 0x2E4BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4BA8u;
label_2e4ba8:
    // 0x2e4ba8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2e4ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2e4bac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e4bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4bb0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e4bb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e4bb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e4bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4bb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e4bb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4bbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e4bbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4bc0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e4bc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4bc4: 0xc0d4fd0  jal         func_353F40
    ctx->pc = 0x2E4BC4u;
    SET_GPR_U32(ctx, 31, 0x2E4BCCu);
    ctx->pc = 0x2E4BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4BC4u;
    // 0x2e4bc8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353F40u, 0x2E4BC4u, 0x2E4BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4BCCu;
label_2e4bcc:
    // 0x2e4bcc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e4bccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4bd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e4bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4BD4u;
        // 0x2e4bd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4BDCu;
    // 0x2e4bdc: 0x0  nop
    ctx->pc = 0x2e4bdcu;
    // NOP
    ctx->pc = 0x2e4be0u;
}
