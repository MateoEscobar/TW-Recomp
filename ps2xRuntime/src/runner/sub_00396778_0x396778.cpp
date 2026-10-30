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

// Function: sub_00396778
// Address: 0x396778 - 0x3967a8
void sub_00396778_0x396778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396778_0x396778");
#endif

    switch (ctx->pc) {
        case 0x396798u: goto label_396798;
        default: break;
    }

    ctx->pc = 0x396778u;

    // 0x396778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x396778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39677c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x39677cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x396780: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x396780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x396784: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x396784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396788: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x396788u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x39678c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x39678cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396790: 0xc0e60d2  jal         func_398348
    ctx->pc = 0x396790u;
    SET_GPR_U32(ctx, 31, 0x396798u);
    ctx->pc = 0x396794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396790u;
    // 0x396794: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398348u, 0x396790u, 0x396798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396798u;
label_396798:
    // 0x396798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x396798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39679c: 0x3e00008  jr          $ra
    ctx->pc = 0x39679Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3967A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39679Cu;
        // 0x3967a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39679Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3967A4u;
    // 0x3967a4: 0x0  nop
    ctx->pc = 0x3967a4u;
    // NOP
    ctx->pc = 0x3967a8u;
}
