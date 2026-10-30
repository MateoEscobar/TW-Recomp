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

// Function: sub_0030C970
// Address: 0x30c970 - 0x30c9a8
void sub_0030C970_0x30c970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C970_0x30c970");
#endif

    switch (ctx->pc) {
        case 0x30c984u: goto label_30c984;
        case 0x30c98cu: goto label_30c98c;
        case 0x30c994u: goto label_30c994;
        default: break;
    }

    ctx->pc = 0x30c970u;

    // 0x30c970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30c970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30c974: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30c974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30c978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30c978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30c97c: 0xc0c311a  jal         func_30C468
    ctx->pc = 0x30C97Cu;
    SET_GPR_U32(ctx, 31, 0x30C984u);
    ctx->pc = 0x30C980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C97Cu;
    // 0x30c980: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C468u, 0x30C97Cu, 0x30C984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C984u;
label_30c984:
    // 0x30c984: 0xc05a53a  jal         func_1694E8
    ctx->pc = 0x30C984u;
    SET_GPR_U32(ctx, 31, 0x30C98Cu);
    ctx->pc = 0x30C988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C984u;
    // 0x30c988: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1694E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1694E8u, 0x30C984u, 0x30C98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C98Cu;
label_30c98c:
    // 0x30c98c: 0xc05a55c  jal         func_169570
    ctx->pc = 0x30C98Cu;
    SET_GPR_U32(ctx, 31, 0x30C994u);
    ctx->pc = 0x30C990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C98Cu;
    // 0x30c990: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169570u, 0x30C98Cu, 0x30C994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C994u;
label_30c994:
    // 0x30c994: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30c994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30c998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c99c: 0x3e00008  jr          $ra
    ctx->pc = 0x30C99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C99Cu;
        // 0x30c9a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C99Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C9A4u;
    // 0x30c9a4: 0x0  nop
    ctx->pc = 0x30c9a4u;
    // NOP
    ctx->pc = 0x30c9a8u;
}
