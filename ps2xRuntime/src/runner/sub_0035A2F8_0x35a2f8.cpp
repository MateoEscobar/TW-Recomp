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

// Function: sub_0035A2F8
// Address: 0x35a2f8 - 0x35a330
void sub_0035A2F8_0x35a2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A2F8_0x35a2f8");
#endif

    switch (ctx->pc) {
        case 0x35a30cu: goto label_35a30c;
        case 0x35a314u: goto label_35a314;
        case 0x35a31cu: goto label_35a31c;
        default: break;
    }

    ctx->pc = 0x35a2f8u;

    // 0x35a2f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35a2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35a2fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35a2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a300: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35a300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35a304: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35A304u;
    SET_GPR_U32(ctx, 31, 0x35A30Cu);
    ctx->pc = 0x35A308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A304u;
    // 0x35a308: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35A304u, 0x35A30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A30Cu;
label_35a30c:
    // 0x35a30c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35A30Cu;
    SET_GPR_U32(ctx, 31, 0x35A314u);
    ctx->pc = 0x35A310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A30Cu;
    // 0x35a310: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35A30Cu, 0x35A314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A314u;
label_35a314:
    // 0x35a314: 0xc107586  jal         func_41D618
    ctx->pc = 0x35A314u;
    SET_GPR_U32(ctx, 31, 0x35A31Cu);
    ctx->pc = 0x35A318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A314u;
    // 0x35a318: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D618u, 0x35A314u, 0x35A31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A31Cu;
label_35a31c:
    // 0x35a31c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35a31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a320: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35a320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a324: 0x3e00008  jr          $ra
    ctx->pc = 0x35A324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A324u;
        // 0x35a328: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A32Cu;
    // 0x35a32c: 0x0  nop
    ctx->pc = 0x35a32cu;
    // NOP
    ctx->pc = 0x35a330u;
}
