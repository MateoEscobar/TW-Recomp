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

// Function: sub_002391C0
// Address: 0x2391c0 - 0x239200
void sub_002391C0_0x2391c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002391C0_0x2391c0");
#endif

    switch (ctx->pc) {
        case 0x2391e0u: goto label_2391e0;
        case 0x2391e8u: goto label_2391e8;
        default: break;
    }

    ctx->pc = 0x2391c0u;

    // 0x2391c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2391c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2391c4: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2391c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2391c8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2391c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2391cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2391ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2391d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2391d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2391d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2391d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2391d8: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2391D8u;
    SET_GPR_U32(ctx, 31, 0x2391E0u);
    ctx->pc = 0x2391DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2391D8u;
    // 0x2391dc: 0x58603  sra         $s0, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2391D8u, 0x2391E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2391E0u;
label_2391e0:
    // 0x2391e0: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2391E0u;
    SET_GPR_U32(ctx, 31, 0x2391E8u);
    ctx->pc = 0x2391E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2391E0u;
    // 0x2391e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2391E0u, 0x2391E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2391E8u;
label_2391e8:
    // 0x2391e8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2391E8u;
    {
        const bool branch_taken_0x2391e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2391e8) {
            ctx->pc = 0x2391ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2391E8u;
            // 0x2391ec: 0xa0500197  sb          $s0, 0x197($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 407), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2391F0u;
            goto label_2391f0;
        }
    }
    ctx->pc = 0x2391F0u;
label_2391f0:
    // 0x2391f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2391f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2391f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2391f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2391f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2391F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2391FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391F8u;
        // 0x2391fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2391F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239200u;
}
