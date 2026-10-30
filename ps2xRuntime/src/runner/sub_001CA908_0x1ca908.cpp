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

// Function: sub_001CA908
// Address: 0x1ca908 - 0x1ca950
void sub_001CA908_0x1ca908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA908_0x1ca908");
#endif

    switch (ctx->pc) {
        case 0x1ca92cu: goto label_1ca92c;
        case 0x1ca938u: goto label_1ca938;
        default: break;
    }

    ctx->pc = 0x1ca908u;

    // 0x1ca908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ca908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ca90c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ca90cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca910: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ca910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ca914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ca918: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca91c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1ca91cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ca920: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ca920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca924: 0xc048b52  jal         func_122D48
    ctx->pc = 0x1CA924u;
    SET_GPR_U32(ctx, 31, 0x1CA92Cu);
    ctx->pc = 0x1CA928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA924u;
    // 0x1ca928: 0x7e020000  sq          $v0, 0x0($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1CA924u, 0x1CA92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA92Cu;
label_1ca92c:
    // 0x1ca92c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca930: 0xc072b1e  jal         func_1CAC78
    ctx->pc = 0x1CA930u;
    SET_GPR_U32(ctx, 31, 0x1CA938u);
    ctx->pc = 0x1CA934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA930u;
    // 0x1ca934: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAC78u, 0x1CA930u, 0x1CA938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA938u;
label_1ca938:
    // 0x1ca938: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ca938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca93c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ca93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca944: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA944u;
        // 0x1ca948: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA94Cu;
    // 0x1ca94c: 0x0  nop
    ctx->pc = 0x1ca94cu;
    // NOP
    ctx->pc = 0x1ca950u;
}
