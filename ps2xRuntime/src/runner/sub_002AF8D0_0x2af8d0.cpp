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

// Function: sub_002AF8D0
// Address: 0x2af8d0 - 0x2af908
void sub_002AF8D0_0x2af8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF8D0_0x2af8d0");
#endif

    switch (ctx->pc) {
        case 0x2af8e8u: goto label_2af8e8;
        case 0x2af8f4u: goto label_2af8f4;
        default: break;
    }

    ctx->pc = 0x2af8d0u;

    // 0x2af8d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2af8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2af8d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2af8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2af8d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2af8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2af8dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2af8dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af8e0: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2AF8E0u;
    SET_GPR_U32(ctx, 31, 0x2AF8E8u);
    ctx->pc = 0x2AF8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF8E0u;
    // 0x2af8e4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2AF8E0u, 0x2AF8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF8E8u;
label_2af8e8:
    // 0x2af8e8: 0x82050038  lb          $a1, 0x38($s0)
    ctx->pc = 0x2af8e8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2af8ec: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2AF8ECu;
    SET_GPR_U32(ctx, 31, 0x2AF8F4u);
    ctx->pc = 0x2AF8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF8ECu;
    // 0x2af8f0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2AF8ECu, 0x2AF8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF8F4u;
label_2af8f4:
    // 0x2af8f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2af8f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2af8f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2af8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF8FCu;
        // 0x2af900: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF904u;
    // 0x2af904: 0x0  nop
    ctx->pc = 0x2af904u;
    // NOP
    ctx->pc = 0x2af908u;
}
