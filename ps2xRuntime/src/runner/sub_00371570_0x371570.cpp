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

// Function: sub_00371570
// Address: 0x371570 - 0x3715a0
void sub_00371570_0x371570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371570_0x371570");
#endif

    switch (ctx->pc) {
        case 0x371584u: goto label_371584;
        case 0x37158cu: goto label_37158c;
        default: break;
    }

    ctx->pc = 0x371570u;

    // 0x371570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371574: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x371574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371578: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x371578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37157c: 0xc102488  jal         func_409220
    ctx->pc = 0x37157Cu;
    SET_GPR_U32(ctx, 31, 0x371584u);
    ctx->pc = 0x371580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37157Cu;
    // 0x371580: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x37157Cu, 0x371584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371584u;
label_371584:
    // 0x371584: 0xc044d82  jal         func_113608
    ctx->pc = 0x371584u;
    SET_GPR_U32(ctx, 31, 0x37158Cu);
    ctx->pc = 0x371588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371584u;
    // 0x371588: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113608u, 0x371584u, 0x37158Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37158Cu;
label_37158c:
    // 0x37158c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37158cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371590: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x371590u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371594: 0x3e00008  jr          $ra
    ctx->pc = 0x371594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371594u;
        // 0x371598: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37159Cu;
    // 0x37159c: 0x0  nop
    ctx->pc = 0x37159cu;
    // NOP
    ctx->pc = 0x3715a0u;
}
