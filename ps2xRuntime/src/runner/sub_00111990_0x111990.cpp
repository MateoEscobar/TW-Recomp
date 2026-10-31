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

// Function: sub_00111990
// Address: 0x111990 - 0x1119d0
void sub_00111990_0x111990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111990_0x111990");
#endif

    switch (ctx->pc) {
        case 0x1119b4u: goto label_1119b4;
        default: break;
    }

    ctx->pc = 0x111990u;

    // 0x111990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x111990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x111994: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x111994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x111998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11199c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11199cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1119a0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1119a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1119a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1119a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1119a8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1119a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1119ac: 0xc043bf4  jal         func_10EFD0
    ctx->pc = 0x1119ACu;
    SET_GPR_U32(ctx, 31, 0x1119B4u);
    ctx->pc = 0x1119B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1119ACu;
    // 0x1119b0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EFD0u, 0x1119ACu, 0x1119B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1119B4u;
label_1119b4:
    // 0x1119b4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1119b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1119b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1119b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1119bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1119bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1119c0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1119c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1119c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1119c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1119c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1119C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1119CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1119C8u;
        // 0x1119cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1119C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1119D0u;
}
