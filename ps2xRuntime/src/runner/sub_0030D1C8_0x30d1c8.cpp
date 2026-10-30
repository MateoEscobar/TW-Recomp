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

// Function: sub_0030D1C8
// Address: 0x30d1c8 - 0x30d200
void sub_0030D1C8_0x30d1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D1C8_0x30d1c8");
#endif

    switch (ctx->pc) {
        case 0x30d1dcu: goto label_30d1dc;
        case 0x30d1e4u: goto label_30d1e4;
        case 0x30d1ecu: goto label_30d1ec;
        default: break;
    }

    ctx->pc = 0x30d1c8u;

    // 0x30d1c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30d1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30d1cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30d1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30d1d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30d1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30d1d4: 0xc0c3384  jal         func_30CE10
    ctx->pc = 0x30D1D4u;
    SET_GPR_U32(ctx, 31, 0x30D1DCu);
    ctx->pc = 0x30D1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D1D4u;
    // 0x30d1d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CE10u, 0x30D1D4u, 0x30D1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D1DCu;
label_30d1dc:
    // 0x30d1dc: 0xc05a53a  jal         func_1694E8
    ctx->pc = 0x30D1DCu;
    SET_GPR_U32(ctx, 31, 0x30D1E4u);
    ctx->pc = 0x30D1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D1DCu;
    // 0x30d1e0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1694E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1694E8u, 0x30D1DCu, 0x30D1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D1E4u;
label_30d1e4:
    // 0x30d1e4: 0xc05a55c  jal         func_169570
    ctx->pc = 0x30D1E4u;
    SET_GPR_U32(ctx, 31, 0x30D1ECu);
    ctx->pc = 0x30D1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D1E4u;
    // 0x30d1e8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169570u, 0x30D1E4u, 0x30D1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D1ECu;
label_30d1ec:
    // 0x30d1ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30d1ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d1f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30d1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x30D1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D1F4u;
        // 0x30d1f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D1FCu;
    // 0x30d1fc: 0x0  nop
    ctx->pc = 0x30d1fcu;
    // NOP
    ctx->pc = 0x30d200u;
}
