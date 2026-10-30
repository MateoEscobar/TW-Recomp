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

// Function: sub_00379B78
// Address: 0x379b78 - 0x379bb0
void sub_00379B78_0x379b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379B78_0x379b78");
#endif

    switch (ctx->pc) {
        case 0x379b8cu: goto label_379b8c;
        case 0x379b94u: goto label_379b94;
        case 0x379b9cu: goto label_379b9c;
        default: break;
    }

    ctx->pc = 0x379b78u;

    // 0x379b78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x379b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x379b7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x379b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379b80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x379b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x379b84: 0xc102472  jal         func_4091C8
    ctx->pc = 0x379B84u;
    SET_GPR_U32(ctx, 31, 0x379B8Cu);
    ctx->pc = 0x379B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379B84u;
    // 0x379b88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x379B84u, 0x379B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379B8Cu;
label_379b8c:
    // 0x379b8c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x379B8Cu;
    SET_GPR_U32(ctx, 31, 0x379B94u);
    ctx->pc = 0x379B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379B8Cu;
    // 0x379b90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x379B8Cu, 0x379B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379B94u;
label_379b94:
    // 0x379b94: 0xc0e5c04  jal         func_397010
    ctx->pc = 0x379B94u;
    SET_GPR_U32(ctx, 31, 0x379B9Cu);
    ctx->pc = 0x379B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379B94u;
    // 0x379b98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397010u, 0x379B94u, 0x379B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379B9Cu;
label_379b9c:
    // 0x379b9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x379b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379ba0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x379ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x379BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379BA4u;
        // 0x379ba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379BACu;
    // 0x379bac: 0x0  nop
    ctx->pc = 0x379bacu;
    // NOP
    ctx->pc = 0x379bb0u;
}
