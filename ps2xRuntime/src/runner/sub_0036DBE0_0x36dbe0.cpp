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

// Function: sub_0036DBE0
// Address: 0x36dbe0 - 0x36dc18
void sub_0036DBE0_0x36dbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DBE0_0x36dbe0");
#endif

    switch (ctx->pc) {
        case 0x36dbf4u: goto label_36dbf4;
        case 0x36dbfcu: goto label_36dbfc;
        case 0x36dc04u: goto label_36dc04;
        default: break;
    }

    ctx->pc = 0x36dbe0u;

    // 0x36dbe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36dbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36dbe4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36dbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36dbe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36dbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36dbec: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36DBECu;
    SET_GPR_U32(ctx, 31, 0x36DBF4u);
    ctx->pc = 0x36DBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DBECu;
    // 0x36dbf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36DBECu, 0x36DBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DBF4u;
label_36dbf4:
    // 0x36dbf4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36DBF4u;
    SET_GPR_U32(ctx, 31, 0x36DBFCu);
    ctx->pc = 0x36DBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DBF4u;
    // 0x36dbf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36DBF4u, 0x36DBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DBFCu;
label_36dbfc:
    // 0x36dbfc: 0xc0e89b8  jal         func_3A26E0
    ctx->pc = 0x36DBFCu;
    SET_GPR_U32(ctx, 31, 0x36DC04u);
    ctx->pc = 0x36DC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DBFCu;
    // 0x36dc00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A26E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A26E0u, 0x36DBFCu, 0x36DC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DC04u;
label_36dc04:
    // 0x36dc04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36dc04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36dc08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36dc08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dc0c: 0x3e00008  jr          $ra
    ctx->pc = 0x36DC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DC0Cu;
        // 0x36dc10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DC14u;
    // 0x36dc14: 0x0  nop
    ctx->pc = 0x36dc14u;
    // NOP
    ctx->pc = 0x36dc18u;
}
