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

// Function: sub_00354BB8
// Address: 0x354bb8 - 0x354c00
void sub_00354BB8_0x354bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354BB8_0x354bb8");
#endif

    switch (ctx->pc) {
        case 0x354be8u: goto label_354be8;
        default: break;
    }

    ctx->pc = 0x354bb8u;

    // 0x354bb8: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x354bb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354bbc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x354bbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x354bc0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x354bc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354bc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x354bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354bc8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x354bc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x354bcc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x354bccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354bd0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x354bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x354bd4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x354bd4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354bd8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x354bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x354bdc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x354bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x354be0: 0xc0d4e06  jal         func_353818
    ctx->pc = 0x354BE0u;
    SET_GPR_U32(ctx, 31, 0x354BE8u);
    ctx->pc = 0x354BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354BE0u;
    // 0x354be4: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353818u, 0x354BE0u, 0x354BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354BE8u;
label_354be8:
    // 0x354be8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x354be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x354bec: 0x3e00008  jr          $ra
    ctx->pc = 0x354BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354BECu;
        // 0x354bf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354BF4u;
    // 0x354bf4: 0x0  nop
    ctx->pc = 0x354bf4u;
    // NOP
    // 0x354bf8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x354bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x354bfc: 0x0  nop
    ctx->pc = 0x354bfcu;
    // NOP
    ctx->pc = 0x354c00u;
}
