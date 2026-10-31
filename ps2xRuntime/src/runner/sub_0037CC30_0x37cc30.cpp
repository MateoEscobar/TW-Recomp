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

// Function: sub_0037CC30
// Address: 0x37cc30 - 0x37cc68
void sub_0037CC30_0x37cc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037CC30_0x37cc30");
#endif

    switch (ctx->pc) {
        case 0x37cc44u: goto label_37cc44;
        case 0x37cc4cu: goto label_37cc4c;
        case 0x37cc54u: goto label_37cc54;
        default: break;
    }

    ctx->pc = 0x37cc30u;

    // 0x37cc30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37cc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37cc34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37cc34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37cc38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37cc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37cc3c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37CC3Cu;
    SET_GPR_U32(ctx, 31, 0x37CC44u);
    ctx->pc = 0x37CC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CC3Cu;
    // 0x37cc40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37CC3Cu, 0x37CC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CC44u;
label_37cc44:
    // 0x37cc44: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37CC44u;
    SET_GPR_U32(ctx, 31, 0x37CC4Cu);
    ctx->pc = 0x37CC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CC44u;
    // 0x37cc48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37CC44u, 0x37CC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CC4Cu;
label_37cc4c:
    // 0x37cc4c: 0xc1089c6  jal         func_422718
    ctx->pc = 0x37CC4Cu;
    SET_GPR_U32(ctx, 31, 0x37CC54u);
    ctx->pc = 0x37CC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CC4Cu;
    // 0x37cc50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422718u, 0x37CC4Cu, 0x37CC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CC54u;
label_37cc54:
    // 0x37cc54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37cc54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37cc58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37cc58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cc5c: 0x3e00008  jr          $ra
    ctx->pc = 0x37CC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CC5Cu;
        // 0x37cc60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CC64u;
    // 0x37cc64: 0x0  nop
    ctx->pc = 0x37cc64u;
    // NOP
    ctx->pc = 0x37cc68u;
}
