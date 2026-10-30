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

// Function: sub_001D5398
// Address: 0x1d5398 - 0x1d53f8
void sub_001D5398_0x1d5398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5398_0x1d5398");
#endif

    switch (ctx->pc) {
        case 0x1d53c8u: goto label_1d53c8;
        case 0x1d53d4u: goto label_1d53d4;
        case 0x1d53e0u: goto label_1d53e0;
        default: break;
    }

    ctx->pc = 0x1d5398u;

    // 0x1d5398: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d5398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d539c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1d539cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1d53a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d53a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d53a4: 0x2442b8c8  addiu       $v0, $v0, -0x4738
    ctx->pc = 0x1d53a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949064));
    // 0x1d53a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d53a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d53ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d53acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d53b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d53b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d53b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d53b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d53bc: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x1d53bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1d53c0: 0xc0733f0  jal         func_1CCFC0
    ctx->pc = 0x1D53C0u;
    SET_GPR_U32(ctx, 31, 0x1D53C8u);
    ctx->pc = 0x1D53C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53C0u;
    // 0x1d53c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x1D53C0u, 0x1D53C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53C8u;
label_1d53c8:
    // 0x1d53c8: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1d53c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1d53cc: 0xc0733f0  jal         func_1CCFC0
    ctx->pc = 0x1D53CCu;
    SET_GPR_U32(ctx, 31, 0x1D53D4u);
    ctx->pc = 0x1D53D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53CCu;
    // 0x1d53d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x1D53CCu, 0x1D53D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53D4u;
label_1d53d4:
    // 0x1d53d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d53d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53d8: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x1D53D8u;
    SET_GPR_U32(ctx, 31, 0x1D53E0u);
    ctx->pc = 0x1D53DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53D8u;
    // 0x1d53dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1D53D8u, 0x1D53E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53E0u;
label_1d53e0:
    // 0x1d53e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d53e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d53e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d53e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d53e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d53e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d53ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D53ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D53F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53ECu;
        // 0x1d53f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D53ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D53F4u;
    // 0x1d53f4: 0x0  nop
    ctx->pc = 0x1d53f4u;
    // NOP
    ctx->pc = 0x1d53f8u;
}
