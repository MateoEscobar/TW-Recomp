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

// Function: sub_001CD3C8
// Address: 0x1cd3c8 - 0x1cd400
void sub_001CD3C8_0x1cd3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD3C8_0x1cd3c8");
#endif

    switch (ctx->pc) {
        case 0x1cd3dcu: goto label_1cd3dc;
        default: break;
    }

    ctx->pc = 0x1cd3c8u;

    // 0x1cd3c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cd3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cd3cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cd3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cd3d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cd3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cd3d4: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x1CD3D4u;
    SET_GPR_U32(ctx, 31, 0x1CD3DCu);
    ctx->pc = 0x1CD3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD3D4u;
    // 0x1cd3d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x1CD3D4u, 0x1CD3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD3DCu;
label_1cd3dc:
    // 0x1cd3dc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1cd3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1cd3e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cd3e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd3e4: 0x2463aef0  addiu       $v1, $v1, -0x5110
    ctx->pc = 0x1cd3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946544));
    // 0x1cd3e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd3ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1cd3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1cd3f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cd3f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD3F4u;
        // 0x1cd3f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD3FCu;
    // 0x1cd3fc: 0x0  nop
    ctx->pc = 0x1cd3fcu;
    // NOP
    ctx->pc = 0x1cd400u;
}
