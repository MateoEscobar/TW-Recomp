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

// Function: sub_001E3670
// Address: 0x1e3670 - 0x1e36a8
void sub_001E3670_0x1e3670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3670_0x1e3670");
#endif

    switch (ctx->pc) {
        case 0x1e3690u: goto label_1e3690;
        case 0x1e3698u: goto label_1e3698;
        default: break;
    }

    ctx->pc = 0x1e3670u;

    // 0x1e3670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3674: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e3674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e3678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e367c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e367cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3680: 0x92050130  lbu         $a1, 0x130($s0)
    ctx->pc = 0x1e3680u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1e3684: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x1e3684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1e3688: 0xc073476  jal         func_1CD1D8
    ctx->pc = 0x1E3688u;
    SET_GPR_U32(ctx, 31, 0x1E3690u);
    ctx->pc = 0x1E368Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3688u;
    // 0x1e368c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1D8u, 0x1E3688u, 0x1E3690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3690u;
label_1e3690:
    // 0x1e3690: 0xc0734a2  jal         func_1CD288
    ctx->pc = 0x1E3690u;
    SET_GPR_U32(ctx, 31, 0x1E3698u);
    ctx->pc = 0x1E3694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3690u;
    // 0x1e3694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD288u, 0x1E3690u, 0x1E3698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3698u;
label_1e3698:
    // 0x1e3698: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e3698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e369c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e369cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e36a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E36A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E36A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E36A0u;
        // 0x1e36a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E36A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E36A8u;
}
