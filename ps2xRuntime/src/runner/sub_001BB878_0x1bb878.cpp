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

// Function: sub_001BB878
// Address: 0x1bb878 - 0x1bb8a8
void sub_001BB878_0x1bb878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB878_0x1bb878");
#endif

    switch (ctx->pc) {
        case 0x1bb898u: goto label_1bb898;
        default: break;
    }

    ctx->pc = 0x1bb878u;

    // 0x1bb878: 0x24030430  addiu       $v1, $zero, 0x430
    ctx->pc = 0x1bb878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1072));
    // 0x1bb87c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb87cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb880: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x1bb880u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bb884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb888: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1bb888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb88c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1bb88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1bb890: 0xc070eb8  jal         func_1C3AE0
    ctx->pc = 0x1BB890u;
    SET_GPR_U32(ctx, 31, 0x1BB898u);
    ctx->pc = 0x1BB894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB890u;
    // 0x1bb894: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3AE0u, 0x1BB890u, 0x1BB898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB898u;
label_1bb898:
    // 0x1bb898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb89c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB89Cu;
        // 0x1bb8a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB8A4u;
    // 0x1bb8a4: 0x0  nop
    ctx->pc = 0x1bb8a4u;
    // NOP
    ctx->pc = 0x1bb8a8u;
}
