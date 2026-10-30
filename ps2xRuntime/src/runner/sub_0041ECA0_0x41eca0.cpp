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

// Function: sub_0041ECA0
// Address: 0x41eca0 - 0x41ece8
void sub_0041ECA0_0x41eca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041ECA0_0x41eca0");
#endif

    switch (ctx->pc) {
        case 0x41ecdcu: goto label_41ecdc;
        default: break;
    }

    ctx->pc = 0x41eca0u;

    // 0x41eca0: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x41eca0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41eca4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41eca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41eca8: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x41eca8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41ecac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41ecacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41ecb0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x41ecb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ecb4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x41ecb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ecb8: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x41ecb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ecbc: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x41ecbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ecc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41ecc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41ecc4: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x41ecc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x41ecc8: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x41ecc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41eccc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x41ecccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ecd0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x41ecd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ecd4: 0xc107894  jal         func_41E250
    ctx->pc = 0x41ECD4u;
    SET_GPR_U32(ctx, 31, 0x41ECDCu);
    ctx->pc = 0x41ECD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41ECD4u;
    // 0x41ecd8: 0x140402d  daddu       $t0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E250u, 0x41ECD4u, 0x41ECDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41ECDCu;
label_41ecdc:
    // 0x41ecdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41ecdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41ece0: 0x3e00008  jr          $ra
    ctx->pc = 0x41ECE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41ECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ECE0u;
        // 0x41ece4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41ECE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41ECE8u;
}
