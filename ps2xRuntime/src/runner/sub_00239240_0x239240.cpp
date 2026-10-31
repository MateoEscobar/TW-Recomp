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

// Function: sub_00239240
// Address: 0x239240 - 0x239280
void sub_00239240_0x239240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239240_0x239240");
#endif

    switch (ctx->pc) {
        case 0x23925cu: goto label_23925c;
        case 0x239264u: goto label_239264;
        default: break;
    }

    ctx->pc = 0x239240u;

    // 0x239240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x239244: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x239244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x239248: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x239248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23924c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23924cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239250: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x239250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x239254: 0xc0e4060  jal         func_390180
    ctx->pc = 0x239254u;
    SET_GPR_U32(ctx, 31, 0x23925Cu);
    ctx->pc = 0x239258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239254u;
    // 0x239258: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x239254u, 0x23925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23925Cu;
label_23925c:
    // 0x23925c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x23925Cu;
    SET_GPR_U32(ctx, 31, 0x239264u);
    ctx->pc = 0x239260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23925Cu;
    // 0x239260: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23925Cu, 0x239264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239264u;
label_239264:
    // 0x239264: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x239264u;
    {
        const bool branch_taken_0x239264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239264) {
            ctx->pc = 0x239268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239264u;
            // 0x239268: 0xa0500199  sb          $s0, 0x199($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 409), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23926Cu;
            goto label_23926c;
        }
    }
    ctx->pc = 0x23926Cu;
label_23926c:
    // 0x23926c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23926cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239270: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239274: 0x3e00008  jr          $ra
    ctx->pc = 0x239274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239274u;
        // 0x239278: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23927Cu;
    // 0x23927c: 0x0  nop
    ctx->pc = 0x23927cu;
    // NOP
    ctx->pc = 0x239280u;
}
