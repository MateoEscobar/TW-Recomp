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

// Function: sub_002AB0A8
// Address: 0x2ab0a8 - 0x2ab0d8
void sub_002AB0A8_0x2ab0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB0A8_0x2ab0a8");
#endif

    switch (ctx->pc) {
        case 0x2ab0bcu: goto label_2ab0bc;
        case 0x2ab0c8u: goto label_2ab0c8;
        default: break;
    }

    ctx->pc = 0x2ab0a8u;

    // 0x2ab0a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ab0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ab0ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ab0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ab0b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ab0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ab0b4: 0xc0aac7a  jal         func_2AB1E8
    ctx->pc = 0x2AB0B4u;
    SET_GPR_U32(ctx, 31, 0x2AB0BCu);
    ctx->pc = 0x2AB0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB0B4u;
    // 0x2ab0b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB1E8u, 0x2AB0B4u, 0x2AB0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB0BCu;
label_2ab0bc:
    // 0x2ab0bc: 0x82050074  lb          $a1, 0x74($s0)
    ctx->pc = 0x2ab0bcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2ab0c0: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2AB0C0u;
    SET_GPR_U32(ctx, 31, 0x2AB0C8u);
    ctx->pc = 0x2AB0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB0C0u;
    // 0x2ab0c4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2AB0C0u, 0x2AB0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB0C8u;
label_2ab0c8:
    // 0x2ab0c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ab0c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab0cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ab0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB0D0u;
        // 0x2ab0d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB0D8u;
}
