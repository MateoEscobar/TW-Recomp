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

// Function: sub_0029A3C0
// Address: 0x29a3c0 - 0x29a3f0
void sub_0029A3C0_0x29a3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A3C0_0x29a3c0");
#endif

    switch (ctx->pc) {
        case 0x29a3d8u: goto label_29a3d8;
        default: break;
    }

    ctx->pc = 0x29a3c0u;

    // 0x29a3c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29a3c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29a3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x29a3c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29a3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29a3cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29a3ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a3d0: 0xc0a6cae  jal         func_29B2B8
    ctx->pc = 0x29A3D0u;
    SET_GPR_U32(ctx, 31, 0x29A3D8u);
    ctx->pc = 0x29A3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A3D0u;
    // 0x29a3d4: 0x80a60010  lb          $a2, 0x10($a1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B2B8u, 0x29A3D0u, 0x29A3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A3D8u;
label_29a3d8:
    // 0x29a3d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29a3d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a3dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29a3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a3e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29a3e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x29A3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A3E4u;
        // 0x29a3e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A3E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A3ECu;
    // 0x29a3ec: 0x0  nop
    ctx->pc = 0x29a3ecu;
    // NOP
    ctx->pc = 0x29a3f0u;
}
