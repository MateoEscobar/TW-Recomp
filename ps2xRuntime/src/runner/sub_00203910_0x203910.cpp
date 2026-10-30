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

// Function: sub_00203910
// Address: 0x203910 - 0x203940
void sub_00203910_0x203910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203910_0x203910");
#endif

    switch (ctx->pc) {
        case 0x203910u: goto label_203910;
        case 0x203914u: goto label_203914;
        case 0x203918u: goto label_203918;
        case 0x20391cu: goto label_20391c;
        case 0x203920u: goto label_203920;
        case 0x203924u: goto label_203924;
        case 0x203928u: goto label_203928;
        case 0x20392cu: goto label_20392c;
        case 0x203930u: goto label_203930;
        case 0x203934u: goto label_203934;
        case 0x203938u: goto label_203938;
        case 0x20393cu: goto label_20393c;
        default: break;
    }

    ctx->pc = 0x203910u;

label_203910:
    // 0x203910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x203910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_203914:
    // 0x203914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x203914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_203918:
    // 0x203918: 0xac850070  sw          $a1, 0x70($a0)
    ctx->pc = 0x203918u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 5));
label_20391c:
    // 0x20391c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20391cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_203920:
    // 0x203920: 0x844300a8  lh          $v1, 0xA8($v0)
    ctx->pc = 0x203920u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_203924:
    // 0x203924: 0x8c4500ac  lw          $a1, 0xAC($v0)
    ctx->pc = 0x203924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_203928:
    // 0x203928: 0xa0f809  jalr        $a1
label_20392c:
    if (ctx->pc == 0x20392Cu) {
        ctx->pc = 0x20392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203928u;
        // 0x20392c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203930u;
        goto label_203930;
    }
    ctx->pc = 0x203928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x203930u);
        ctx->pc = 0x20392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203928u;
        // 0x20392c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203928u, 0x203930u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203930u;
label_203930:
    // 0x203930: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_203934:
    // 0x203934: 0x3e00008  jr          $ra
label_203938:
    if (ctx->pc == 0x203938u) {
        ctx->pc = 0x203938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203934u;
        // 0x203938: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20393Cu;
        goto label_20393c;
    }
    ctx->pc = 0x203934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203934u;
        // 0x203938: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20393Cu;
label_20393c:
    // 0x20393c: 0x0  nop
    ctx->pc = 0x20393cu;
    // NOP
    ctx->pc = 0x203940u;
}
