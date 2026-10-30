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

// Function: sub_00145940
// Address: 0x145940 - 0x145980
void sub_00145940_0x145940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145940_0x145940");
#endif

    switch (ctx->pc) {
        case 0x145964u: goto label_145964;
        case 0x14596cu: goto label_14596c;
        default: break;
    }

    ctx->pc = 0x145940u;

    // 0x145940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x145940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x145944: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x145944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x145948: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x145948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14594c: 0x24427bc0  addiu       $v0, $v0, 0x7BC0
    ctx->pc = 0x14594cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31680));
    // 0x145950: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x145950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x145954: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x145954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145958: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x145958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x14595c: 0xc0523d8  jal         func_148F60
    ctx->pc = 0x14595Cu;
    SET_GPR_U32(ctx, 31, 0x145964u);
    ctx->pc = 0x145960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14595Cu;
    // 0x145960: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148F60u, 0x14595Cu, 0x145964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145964u;
label_145964:
    // 0x145964: 0xc051660  jal         func_145980
    ctx->pc = 0x145964u;
    SET_GPR_U32(ctx, 31, 0x14596Cu);
    ctx->pc = 0x145968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145964u;
    // 0x145968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145980u, 0x145964u, 0x14596Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14596Cu;
label_14596c:
    // 0x14596c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14596cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145974: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x145974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145978: 0x3e00008  jr          $ra
    ctx->pc = 0x145978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145978u;
        // 0x14597c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145980u;
}
