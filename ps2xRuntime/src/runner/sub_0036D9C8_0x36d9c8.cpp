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

// Function: sub_0036D9C8
// Address: 0x36d9c8 - 0x36da10
void sub_0036D9C8_0x36d9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D9C8_0x36d9c8");
#endif

    switch (ctx->pc) {
        case 0x36d9e4u: goto label_36d9e4;
        case 0x36d9ecu: goto label_36d9ec;
        case 0x36d9f8u: goto label_36d9f8;
        default: break;
    }

    ctx->pc = 0x36d9c8u;

    // 0x36d9c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36d9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36d9cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x36d9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d9d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x36d9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x36d9d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36d9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d9d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36d9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36d9dc: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36D9DCu;
    SET_GPR_U32(ctx, 31, 0x36D9E4u);
    ctx->pc = 0x36D9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D9DCu;
    // 0x36d9e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36D9DCu, 0x36D9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D9E4u;
label_36d9e4:
    // 0x36d9e4: 0xc08c88c  jal         func_232230
    ctx->pc = 0x36D9E4u;
    SET_GPR_U32(ctx, 31, 0x36D9ECu);
    ctx->pc = 0x36D9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D9E4u;
    // 0x36d9e8: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x232230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232230u, 0x36D9E4u, 0x36D9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D9ECu;
label_36d9ec:
    // 0x36d9ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36d9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d9f0: 0xc102562  jal         func_409588
    ctx->pc = 0x36D9F0u;
    SET_GPR_U32(ctx, 31, 0x36D9F8u);
    ctx->pc = 0x36D9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D9F0u;
    // 0x36d9f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x36D9F0u, 0x36D9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D9F8u;
label_36d9f8:
    // 0x36d9f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x36d9f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d9fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36da00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36da00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36da04: 0x3e00008  jr          $ra
    ctx->pc = 0x36DA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DA04u;
        // 0x36da08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DA0Cu;
    // 0x36da0c: 0x0  nop
    ctx->pc = 0x36da0cu;
    // NOP
    ctx->pc = 0x36da10u;
}
