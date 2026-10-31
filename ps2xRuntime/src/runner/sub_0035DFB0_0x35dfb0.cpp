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

// Function: sub_0035DFB0
// Address: 0x35dfb0 - 0x35dfe8
void sub_0035DFB0_0x35dfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035DFB0_0x35dfb0");
#endif

    switch (ctx->pc) {
        case 0x35dfc4u: goto label_35dfc4;
        case 0x35dfccu: goto label_35dfcc;
        case 0x35dfd4u: goto label_35dfd4;
        default: break;
    }

    ctx->pc = 0x35dfb0u;

    // 0x35dfb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35dfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35dfb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35dfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35dfb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35dfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35dfbc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35DFBCu;
    SET_GPR_U32(ctx, 31, 0x35DFC4u);
    ctx->pc = 0x35DFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DFBCu;
    // 0x35dfc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35DFBCu, 0x35DFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DFC4u;
label_35dfc4:
    // 0x35dfc4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35DFC4u;
    SET_GPR_U32(ctx, 31, 0x35DFCCu);
    ctx->pc = 0x35DFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DFC4u;
    // 0x35dfc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35DFC4u, 0x35DFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DFCCu;
label_35dfcc:
    // 0x35dfcc: 0xc08e976  jal         func_23A5D8
    ctx->pc = 0x35DFCCu;
    SET_GPR_U32(ctx, 31, 0x35DFD4u);
    ctx->pc = 0x35DFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DFCCu;
    // 0x35dfd0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A5D8u, 0x35DFCCu, 0x35DFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DFD4u;
label_35dfd4:
    // 0x35dfd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35dfd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35dfd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35dfd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dfdc: 0x3e00008  jr          $ra
    ctx->pc = 0x35DFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DFDCu;
        // 0x35dfe0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DFE4u;
    // 0x35dfe4: 0x0  nop
    ctx->pc = 0x35dfe4u;
    // NOP
    ctx->pc = 0x35dfe8u;
}
