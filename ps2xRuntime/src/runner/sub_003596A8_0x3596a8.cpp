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

// Function: sub_003596A8
// Address: 0x3596a8 - 0x3596e0
void sub_003596A8_0x3596a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003596A8_0x3596a8");
#endif

    switch (ctx->pc) {
        case 0x3596bcu: goto label_3596bc;
        case 0x3596c4u: goto label_3596c4;
        case 0x3596ccu: goto label_3596cc;
        default: break;
    }

    ctx->pc = 0x3596a8u;

    // 0x3596a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3596a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3596ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3596acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3596b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3596b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3596b4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3596B4u;
    SET_GPR_U32(ctx, 31, 0x3596BCu);
    ctx->pc = 0x3596B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3596B4u;
    // 0x3596b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3596B4u, 0x3596BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3596BCu;
label_3596bc:
    // 0x3596bc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3596BCu;
    SET_GPR_U32(ctx, 31, 0x3596C4u);
    ctx->pc = 0x3596C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3596BCu;
    // 0x3596c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3596BCu, 0x3596C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3596C4u;
label_3596c4:
    // 0x3596c4: 0xc08da9a  jal         func_236A68
    ctx->pc = 0x3596C4u;
    SET_GPR_U32(ctx, 31, 0x3596CCu);
    ctx->pc = 0x3596C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3596C4u;
    // 0x3596c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A68u, 0x3596C4u, 0x3596CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3596CCu;
label_3596cc:
    // 0x3596cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3596ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3596d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3596d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3596d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3596D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3596D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3596D4u;
        // 0x3596d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3596D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3596DCu;
    // 0x3596dc: 0x0  nop
    ctx->pc = 0x3596dcu;
    // NOP
    ctx->pc = 0x3596e0u;
}
