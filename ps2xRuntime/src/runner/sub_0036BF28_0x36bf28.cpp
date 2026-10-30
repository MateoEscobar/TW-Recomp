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

// Function: sub_0036BF28
// Address: 0x36bf28 - 0x36bf58
void sub_0036BF28_0x36bf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036BF28_0x36bf28");
#endif

    switch (ctx->pc) {
        case 0x36bf3cu: goto label_36bf3c;
        case 0x36bf44u: goto label_36bf44;
        default: break;
    }

    ctx->pc = 0x36bf28u;

    // 0x36bf28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36bf28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36bf2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36bf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36bf30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36bf30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36bf34: 0xc102488  jal         func_409220
    ctx->pc = 0x36BF34u;
    SET_GPR_U32(ctx, 31, 0x36BF3Cu);
    ctx->pc = 0x36BF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BF34u;
    // 0x36bf38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36BF34u, 0x36BF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BF3Cu;
label_36bf3c:
    // 0x36bf3c: 0xc1076ac  jal         func_41DAB0
    ctx->pc = 0x36BF3Cu;
    SET_GPR_U32(ctx, 31, 0x36BF44u);
    ctx->pc = 0x36BF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BF3Cu;
    // 0x36bf40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41DAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41DAB0u, 0x36BF3Cu, 0x36BF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BF44u;
label_36bf44:
    // 0x36bf44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36bf44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36bf48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36bf48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bf4c: 0x3e00008  jr          $ra
    ctx->pc = 0x36BF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BF4Cu;
        // 0x36bf50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BF54u;
    // 0x36bf54: 0x0  nop
    ctx->pc = 0x36bf54u;
    // NOP
    ctx->pc = 0x36bf58u;
}
