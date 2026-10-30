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

// Function: sub_00391560
// Address: 0x391560 - 0x391590
void sub_00391560_0x391560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00391560_0x391560");
#endif

    switch (ctx->pc) {
        case 0x391574u: goto label_391574;
        default: break;
    }

    ctx->pc = 0x391560u;

    // 0x391560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x391560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x391564: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x391564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x391568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x391568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39156c: 0xc0e44f6  jal         func_3913D8
    ctx->pc = 0x39156Cu;
    SET_GPR_U32(ctx, 31, 0x391574u);
    ctx->pc = 0x391570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39156Cu;
    // 0x391570: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3913D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3913D8u, 0x39156Cu, 0x391574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391574u;
label_391574:
    // 0x391574: 0x24030090  addiu       $v1, $zero, 0x90
    ctx->pc = 0x391574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x391578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x391578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39157c: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x39157cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x391580: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x391580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x391584: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x391584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x391588: 0x3e00008  jr          $ra
    ctx->pc = 0x391588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391588u;
        // 0x39158c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391590u;
}
