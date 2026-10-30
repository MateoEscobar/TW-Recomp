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

// Function: sub_0036BDF0
// Address: 0x36bdf0 - 0x36be20
void sub_0036BDF0_0x36bdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036BDF0_0x36bdf0");
#endif

    switch (ctx->pc) {
        case 0x36be04u: goto label_36be04;
        case 0x36be0cu: goto label_36be0c;
        default: break;
    }

    ctx->pc = 0x36bdf0u;

    // 0x36bdf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36bdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36bdf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36bdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36bdf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36bdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36bdfc: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36BDFCu;
    SET_GPR_U32(ctx, 31, 0x36BE04u);
    ctx->pc = 0x36BE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BDFCu;
    // 0x36be00: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36BDFCu, 0x36BE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BE04u;
label_36be04:
    // 0x36be04: 0xc1075d6  jal         func_41D758
    ctx->pc = 0x36BE04u;
    SET_GPR_U32(ctx, 31, 0x36BE0Cu);
    ctx->pc = 0x36BE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BE04u;
    // 0x36be08: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D758u, 0x36BE04u, 0x36BE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BE0Cu;
label_36be0c:
    // 0x36be0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36be0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36be10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36be10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36be14: 0x3e00008  jr          $ra
    ctx->pc = 0x36BE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BE14u;
        // 0x36be18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BE14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BE1Cu;
    // 0x36be1c: 0x0  nop
    ctx->pc = 0x36be1cu;
    // NOP
    ctx->pc = 0x36be20u;
}
