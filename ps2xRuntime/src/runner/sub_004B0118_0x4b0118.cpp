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

// Function: sub_004B0118
// Address: 0x4b0118 - 0x4b0148
void sub_004B0118_0x4b0118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B0118_0x4b0118");
#endif

    switch (ctx->pc) {
        case 0x4b0130u: goto label_4b0130;
        default: break;
    }

    ctx->pc = 0x4b0118u;

    // 0x4b0118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b0118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b011c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x4b011cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x4b0120: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x4b0120u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x4b0124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b0124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b0128: 0xc12c432  jal         func_4B10C8
    ctx->pc = 0x4B0128u;
    SET_GPR_U32(ctx, 31, 0x4B0130u);
    ctx->pc = 0x4B10C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B10C8u, 0x4B0128u, 0x4B0130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0130u;
label_4b0130:
    // 0x4b0130: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4b0130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4b0134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b0134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0138: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4b0138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x4b013c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B013Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B013Cu;
        // 0x4b0140: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B013Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0144u;
    // 0x4b0144: 0x0  nop
    ctx->pc = 0x4b0144u;
    // NOP
    ctx->pc = 0x4b0148u;
}
