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

// Function: sub_00370A30
// Address: 0x370a30 - 0x370a68
void sub_00370A30_0x370a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370A30_0x370a30");
#endif

    switch (ctx->pc) {
        case 0x370a44u: goto label_370a44;
        case 0x370a4cu: goto label_370a4c;
        case 0x370a54u: goto label_370a54;
        default: break;
    }

    ctx->pc = 0x370a30u;

    // 0x370a30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370a34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x370a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370a38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x370a3c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x370A3Cu;
    SET_GPR_U32(ctx, 31, 0x370A44u);
    ctx->pc = 0x370A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370A3Cu;
    // 0x370a40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x370A3Cu, 0x370A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370A44u;
label_370a44:
    // 0x370a44: 0xc10b108  jal         func_42C420
    ctx->pc = 0x370A44u;
    SET_GPR_U32(ctx, 31, 0x370A4Cu);
    ctx->pc = 0x370A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370A44u;
    // 0x370a48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x370A44u, 0x370A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370A4Cu;
label_370a4c:
    // 0x370a4c: 0xc06d0c0  jal         func_1B4300
    ctx->pc = 0x370A4Cu;
    SET_GPR_U32(ctx, 31, 0x370A54u);
    ctx->pc = 0x370A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370A4Cu;
    // 0x370a50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4300u, 0x370A4Cu, 0x370A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370A54u;
label_370a54:
    // 0x370a54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370a58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x370a58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x370A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370A5Cu;
        // 0x370a60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370A64u;
    // 0x370a64: 0x0  nop
    ctx->pc = 0x370a64u;
    // NOP
    ctx->pc = 0x370a68u;
}
