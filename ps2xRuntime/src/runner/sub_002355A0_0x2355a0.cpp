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

// Function: sub_002355A0
// Address: 0x2355a0 - 0x2355e0
void sub_002355A0_0x2355a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002355A0_0x2355a0");
#endif

    switch (ctx->pc) {
        case 0x2355bcu: goto label_2355bc;
        case 0x2355c4u: goto label_2355c4;
        default: break;
    }

    ctx->pc = 0x2355a0u;

    // 0x2355a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2355a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2355a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2355a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2355a8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2355a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2355ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2355acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2355b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2355b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2355b4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2355B4u;
    SET_GPR_U32(ctx, 31, 0x2355BCu);
    ctx->pc = 0x2355B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2355B4u;
    // 0x2355b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2355B4u, 0x2355BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2355BCu;
label_2355bc:
    // 0x2355bc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2355BCu;
    SET_GPR_U32(ctx, 31, 0x2355C4u);
    ctx->pc = 0x2355C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2355BCu;
    // 0x2355c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2355BCu, 0x2355C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2355C4u;
label_2355c4:
    // 0x2355c4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2355C4u;
    {
        const bool branch_taken_0x2355c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2355c4) {
            ctx->pc = 0x2355C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2355C4u;
            // 0x2355c8: 0xa05003b9  sb          $s0, 0x3B9($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 953), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2355CCu;
            goto label_2355cc;
        }
    }
    ctx->pc = 0x2355CCu;
label_2355cc:
    // 0x2355cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2355ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2355d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2355d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2355d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2355D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2355D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2355D4u;
        // 0x2355d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2355D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2355DCu;
    // 0x2355dc: 0x0  nop
    ctx->pc = 0x2355dcu;
    // NOP
    ctx->pc = 0x2355e0u;
}
