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

// Function: sub_00365BB8
// Address: 0x365bb8 - 0x365bf0
void sub_00365BB8_0x365bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365BB8_0x365bb8");
#endif

    switch (ctx->pc) {
        case 0x365bccu: goto label_365bcc;
        case 0x365bd4u: goto label_365bd4;
        case 0x365bdcu: goto label_365bdc;
        default: break;
    }

    ctx->pc = 0x365bb8u;

    // 0x365bb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x365bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x365bbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x365bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365bc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x365bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x365bc4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365BC4u;
    SET_GPR_U32(ctx, 31, 0x365BCCu);
    ctx->pc = 0x365BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365BC4u;
    // 0x365bc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365BC4u, 0x365BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365BCCu;
label_365bcc:
    // 0x365bcc: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x365BCCu;
    SET_GPR_U32(ctx, 31, 0x365BD4u);
    ctx->pc = 0x365BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365BCCu;
    // 0x365bd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x365BCCu, 0x365BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365BD4u;
label_365bd4:
    // 0x365bd4: 0xc0470ee  jal         func_11C3B8
    ctx->pc = 0x365BD4u;
    SET_GPR_U32(ctx, 31, 0x365BDCu);
    ctx->pc = 0x365BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365BD4u;
    // 0x365bd8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C3B8u, 0x365BD4u, 0x365BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365BDCu;
label_365bdc:
    // 0x365bdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x365bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365be0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x365be0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365be4: 0x3e00008  jr          $ra
    ctx->pc = 0x365BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365BE4u;
        // 0x365be8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365BECu;
    // 0x365bec: 0x0  nop
    ctx->pc = 0x365becu;
    // NOP
    ctx->pc = 0x365bf0u;
}
