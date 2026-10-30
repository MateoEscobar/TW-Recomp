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

// Function: sub_0036BDC0
// Address: 0x36bdc0 - 0x36bdf0
void sub_0036BDC0_0x36bdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036BDC0_0x36bdc0");
#endif

    switch (ctx->pc) {
        case 0x36bdd4u: goto label_36bdd4;
        case 0x36bddcu: goto label_36bddc;
        default: break;
    }

    ctx->pc = 0x36bdc0u;

    // 0x36bdc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36bdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36bdc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36bdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36bdc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36bdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36bdcc: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36BDCCu;
    SET_GPR_U32(ctx, 31, 0x36BDD4u);
    ctx->pc = 0x36BDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BDCCu;
    // 0x36bdd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36BDCCu, 0x36BDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BDD4u;
label_36bdd4:
    // 0x36bdd4: 0xc1075d2  jal         func_41D748
    ctx->pc = 0x36BDD4u;
    SET_GPR_U32(ctx, 31, 0x36BDDCu);
    ctx->pc = 0x36BDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BDD4u;
    // 0x36bdd8: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D748u, 0x36BDD4u, 0x36BDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BDDCu;
label_36bddc:
    // 0x36bddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36bddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36bde0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36bde0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bde4: 0x3e00008  jr          $ra
    ctx->pc = 0x36BDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BDE4u;
        // 0x36bde8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BDECu;
    // 0x36bdec: 0x0  nop
    ctx->pc = 0x36bdecu;
    // NOP
    ctx->pc = 0x36bdf0u;
}
