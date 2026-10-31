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

// Function: sub_00365B80
// Address: 0x365b80 - 0x365bb8
void sub_00365B80_0x365b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365B80_0x365b80");
#endif

    switch (ctx->pc) {
        case 0x365b94u: goto label_365b94;
        case 0x365b9cu: goto label_365b9c;
        case 0x365ba4u: goto label_365ba4;
        default: break;
    }

    ctx->pc = 0x365b80u;

    // 0x365b80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x365b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x365b84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x365b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365b88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x365b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x365b8c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365B8Cu;
    SET_GPR_U32(ctx, 31, 0x365B94u);
    ctx->pc = 0x365B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365B8Cu;
    // 0x365b90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365B8Cu, 0x365B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365B94u;
label_365b94:
    // 0x365b94: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x365B94u;
    SET_GPR_U32(ctx, 31, 0x365B9Cu);
    ctx->pc = 0x365B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365B94u;
    // 0x365b98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x365B94u, 0x365B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365B9Cu;
label_365b9c:
    // 0x365b9c: 0xc0470bc  jal         func_11C2F0
    ctx->pc = 0x365B9Cu;
    SET_GPR_U32(ctx, 31, 0x365BA4u);
    ctx->pc = 0x365BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365B9Cu;
    // 0x365ba0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C2F0u, 0x365B9Cu, 0x365BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365BA4u;
label_365ba4:
    // 0x365ba4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x365ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365ba8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x365ba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365bac: 0x3e00008  jr          $ra
    ctx->pc = 0x365BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365BACu;
        // 0x365bb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365BB4u;
    // 0x365bb4: 0x0  nop
    ctx->pc = 0x365bb4u;
    // NOP
    ctx->pc = 0x365bb8u;
}
