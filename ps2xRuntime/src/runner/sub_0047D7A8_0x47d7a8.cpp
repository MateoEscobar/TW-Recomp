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

// Function: sub_0047D7A8
// Address: 0x47d7a8 - 0x47d810
void sub_0047D7A8_0x47d7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047D7A8_0x47d7a8");
#endif

    switch (ctx->pc) {
        case 0x47d7e0u: goto label_47d7e0;
        default: break;
    }

    ctx->pc = 0x47d7a8u;

    // 0x47d7a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47d7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x47d7ac: 0x8f838928  lw          $v1, -0x76D8($gp)
    ctx->pc = 0x47d7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936872)));
    // 0x47d7b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47d7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x47d7b4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x47d7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x47d7b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x47d7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x47d7bc: 0x2451ad18  addiu       $s1, $v0, -0x52E8
    ctx->pc = 0x47d7bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x47d7c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47d7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47d7c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47d7c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d7c8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x47d7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x47d7cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x47d7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x47d7d0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x47D7D0u;
    {
        const bool branch_taken_0x47d7d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d7d0) {
            ctx->pc = 0x47D7ECu;
            goto label_47d7ec;
        }
    }
    ctx->pc = 0x47D7D8u;
    // 0x47d7d8: 0xc11f74a  jal         func_47DD28
    ctx->pc = 0x47D7D8u;
    SET_GPR_U32(ctx, 31, 0x47D7E0u);
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x47D7D8u, 0x47D7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D7E0u;
label_47d7e0:
    // 0x47d7e0: 0x8f838928  lw          $v1, -0x76D8($gp)
    ctx->pc = 0x47d7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936872)));
    // 0x47d7e4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x47d7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x47d7e8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x47d7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_47d7ec:
    // 0x47d7ec: 0x8f83892c  lw          $v1, -0x76D4($gp)
    ctx->pc = 0x47d7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936876)));
    // 0x47d7f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x47d7f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d7f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x47d7f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47d7f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x47d7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x47d7fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47d7fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47d800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47d800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47d804: 0xaf83892c  sw          $v1, -0x76D4($gp)
    ctx->pc = 0x47d804u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936876), GPR_U32(ctx, 3));
    // 0x47d808: 0x3e00008  jr          $ra
    ctx->pc = 0x47D808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D808u;
        // 0x47d80c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47D808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47D810u;
}
