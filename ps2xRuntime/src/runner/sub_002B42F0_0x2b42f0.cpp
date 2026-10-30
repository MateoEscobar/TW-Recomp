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

// Function: sub_002B42F0
// Address: 0x2b42f0 - 0x2b4330
void sub_002B42F0_0x2b42f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B42F0_0x2b42f0");
#endif

    switch (ctx->pc) {
        case 0x2b4310u: goto label_2b4310;
        case 0x2b4318u: goto label_2b4318;
        default: break;
    }

    ctx->pc = 0x2b42f0u;

    // 0x2b42f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b42f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b42f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b42f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b42f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b42f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b42fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b42fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4300: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b4304: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b4304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4308: 0xc0a33f8  jal         func_28CFE0
    ctx->pc = 0x2B4308u;
    SET_GPR_U32(ctx, 31, 0x2B4310u);
    ctx->pc = 0x2B430Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4308u;
    // 0x2b430c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2B4308u, 0x2B4310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4310u;
label_2b4310:
    // 0x2b4310: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2B4310u;
    SET_GPR_U32(ctx, 31, 0x2B4318u);
    ctx->pc = 0x2B4314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4310u;
    // 0x2b4314: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2B4310u, 0x2B4318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4318u;
label_2b4318:
    // 0x2b4318: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b4318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b431c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b431cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4324: 0xac600284  sw          $zero, 0x284($v1)
    ctx->pc = 0x2b4324u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
    // 0x2b4328: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4328u;
        // 0x2b432c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4330u;
}
