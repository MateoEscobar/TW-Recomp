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

// Function: sub_00354C00
// Address: 0x354c00 - 0x354c48
void sub_00354C00_0x354c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354C00_0x354c00");
#endif

    switch (ctx->pc) {
        case 0x354c3cu: goto label_354c3c;
        default: break;
    }

    ctx->pc = 0x354c00u;

    // 0x354c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x354c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x354c04: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x354c04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354c08: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x354c08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354c0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x354c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354c10: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x354c10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x354c14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x354c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354c18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x354c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x354c1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x354c1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354c20: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x354c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x354c24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x354c24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354c28: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x354c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x354c2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x354c2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354c30: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x354c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x354c34: 0xc0d4e06  jal         func_353818
    ctx->pc = 0x354C34u;
    SET_GPR_U32(ctx, 31, 0x354C3Cu);
    ctx->pc = 0x354C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354C34u;
    // 0x354c38: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353818u, 0x354C34u, 0x354C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354C3Cu;
label_354c3c:
    // 0x354c3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x354c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x354c40: 0x3e00008  jr          $ra
    ctx->pc = 0x354C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354C40u;
        // 0x354c44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354C48u;
}
