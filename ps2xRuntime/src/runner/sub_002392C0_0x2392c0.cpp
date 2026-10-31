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

// Function: sub_002392C0
// Address: 0x2392c0 - 0x239300
void sub_002392C0_0x2392c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002392C0_0x2392c0");
#endif

    switch (ctx->pc) {
        case 0x2392dcu: goto label_2392dc;
        case 0x2392e4u: goto label_2392e4;
        default: break;
    }

    ctx->pc = 0x2392c0u;

    // 0x2392c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2392c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2392c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2392c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2392c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2392c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2392cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2392ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2392d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2392d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2392d4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2392D4u;
    SET_GPR_U32(ctx, 31, 0x2392DCu);
    ctx->pc = 0x2392D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2392D4u;
    // 0x2392d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2392D4u, 0x2392DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2392DCu;
label_2392dc:
    // 0x2392dc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2392DCu;
    SET_GPR_U32(ctx, 31, 0x2392E4u);
    ctx->pc = 0x2392E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2392DCu;
    // 0x2392e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2392DCu, 0x2392E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2392E4u;
label_2392e4:
    // 0x2392e4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2392E4u;
    {
        const bool branch_taken_0x2392e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2392e4) {
            ctx->pc = 0x2392E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2392E4u;
            // 0x2392e8: 0xa050019a  sb          $s0, 0x19A($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 410), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2392ECu;
            goto label_2392ec;
        }
    }
    ctx->pc = 0x2392ECu;
label_2392ec:
    // 0x2392ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2392ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2392f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2392f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2392f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2392F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2392F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392F4u;
        // 0x2392f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2392F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2392FCu;
    // 0x2392fc: 0x0  nop
    ctx->pc = 0x2392fcu;
    // NOP
    ctx->pc = 0x239300u;
}
