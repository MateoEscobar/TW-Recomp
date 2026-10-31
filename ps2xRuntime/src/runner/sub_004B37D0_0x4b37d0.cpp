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

// Function: sub_004B37D0
// Address: 0x4b37d0 - 0x4b3800
void sub_004B37D0_0x4b37d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B37D0_0x4b37d0");
#endif

    switch (ctx->pc) {
        case 0x4b37e8u: goto label_4b37e8;
        default: break;
    }

    ctx->pc = 0x4b37d0u;

    // 0x4b37d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b37d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b37d4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x4b37d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x4b37d8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x4b37d8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x4b37dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b37dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b37e0: 0xc12de92  jal         func_4B7A48
    ctx->pc = 0x4B37E0u;
    SET_GPR_U32(ctx, 31, 0x4B37E8u);
    ctx->pc = 0x4B7A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B7A48u, 0x4B37E0u, 0x4B37E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B37E8u;
label_4b37e8:
    // 0x4b37e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4b37e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4b37ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b37ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b37f0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4b37f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x4b37f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4B37F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B37F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B37F4u;
        // 0x4b37f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B37F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B37FCu;
    // 0x4b37fc: 0x0  nop
    ctx->pc = 0x4b37fcu;
    // NOP
    ctx->pc = 0x4b3800u;
}
