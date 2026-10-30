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

// Function: sub_0037B728
// Address: 0x37b728 - 0x37b760
void sub_0037B728_0x37b728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B728_0x37b728");
#endif

    switch (ctx->pc) {
        case 0x37b73cu: goto label_37b73c;
        case 0x37b748u: goto label_37b748;
        default: break;
    }

    ctx->pc = 0x37b728u;

    // 0x37b728: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37b728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37b72c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37b72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37b730: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b734: 0xc1088ec  jal         func_4223B0
    ctx->pc = 0x37B734u;
    SET_GPR_U32(ctx, 31, 0x37B73Cu);
    ctx->pc = 0x37B738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B734u;
    // 0x37b738: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4223B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4223B0u, 0x37B734u, 0x37B73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B73Cu;
label_37b73c:
    // 0x37b73c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37b73cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b740: 0xc102562  jal         func_409588
    ctx->pc = 0x37B740u;
    SET_GPR_U32(ctx, 31, 0x37B748u);
    ctx->pc = 0x37B744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B740u;
    // 0x37b744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x37B740u, 0x37B748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B748u;
label_37b748:
    // 0x37b748: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37b748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b74c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b754: 0x3e00008  jr          $ra
    ctx->pc = 0x37B754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B754u;
        // 0x37b758: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B75Cu;
    // 0x37b75c: 0x0  nop
    ctx->pc = 0x37b75cu;
    // NOP
    ctx->pc = 0x37b760u;
}
