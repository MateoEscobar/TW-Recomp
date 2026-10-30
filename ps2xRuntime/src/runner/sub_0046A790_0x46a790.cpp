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

// Function: sub_0046A790
// Address: 0x46a790 - 0x46a7d8
void sub_0046A790_0x46a790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A790_0x46a790");
#endif

    switch (ctx->pc) {
        case 0x46a7c8u: goto label_46a7c8;
        default: break;
    }

    ctx->pc = 0x46a790u;

    // 0x46a790: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x46a790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a794: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x46a794u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x46a798: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x46a798u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a79c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x46a79cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a7a0: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x46a7a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a7a4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x46a7a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a7a8: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x46a7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x46a7ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46a7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46a7b0: 0x2484e6c8  addiu       $a0, $a0, -0x1938
    ctx->pc = 0x46a7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960840));
    // 0x46a7b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46a7b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a7b8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x46a7b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a7bc: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x46a7bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a7c0: 0xc11feb2  jal         func_47FAC8
    ctx->pc = 0x46A7C0u;
    SET_GPR_U32(ctx, 31, 0x46A7C8u);
    ctx->pc = 0x46A7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46A7C0u;
    // 0x46a7c4: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FAC8u, 0x46A7C0u, 0x46A7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A7C8u;
label_46a7c8:
    // 0x46a7c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46a7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46a7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x46A7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46A7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A7CCu;
        // 0x46a7d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A7D4u;
    // 0x46a7d4: 0x0  nop
    ctx->pc = 0x46a7d4u;
    // NOP
    ctx->pc = 0x46a7d8u;
}
