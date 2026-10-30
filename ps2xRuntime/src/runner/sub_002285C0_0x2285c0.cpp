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

// Function: sub_002285C0
// Address: 0x2285c0 - 0x2285f8
void sub_002285C0_0x2285c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002285C0_0x2285c0");
#endif

    switch (ctx->pc) {
        case 0x2285e0u: goto label_2285e0;
        default: break;
    }

    ctx->pc = 0x2285c0u;

    // 0x2285c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2285c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2285c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2285c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2285c8: 0x808201b0  lb          $v0, 0x1B0($a0)
    ctx->pc = 0x2285c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x2285cc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2285ccu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2285d0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2285D0u;
    {
        const bool branch_taken_0x2285d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2285d0) {
            ctx->pc = 0x2285D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2285D0u;
            // 0x2285d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2285ECu;
            goto label_2285ec;
        }
    }
    ctx->pc = 0x2285D8u;
    // 0x2285d8: 0xc088ab6  jal         func_222AD8
    ctx->pc = 0x2285D8u;
    SET_GPR_U32(ctx, 31, 0x2285E0u);
    ctx->pc = 0x222AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222AD8u, 0x2285D8u, 0x2285E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2285E0u;
label_2285e0:
    // 0x2285e0: 0x94430046  lhu         $v1, 0x46($v0)
    ctx->pc = 0x2285e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x2285e4: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x2285e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x2285e8: 0x2c620001  sltiu       $v0, $v1, 0x1
    ctx->pc = 0x2285e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2285ec:
    // 0x2285ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2285ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2285f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2285F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2285F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2285F0u;
        // 0x2285f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2285F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2285F8u;
}
