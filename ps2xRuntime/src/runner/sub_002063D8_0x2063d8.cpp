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

// Function: sub_002063D8
// Address: 0x2063d8 - 0x206408
void sub_002063D8_0x2063d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002063D8_0x2063d8");
#endif

    switch (ctx->pc) {
        case 0x2063d8u: goto label_2063d8;
        case 0x2063dcu: goto label_2063dc;
        case 0x2063e0u: goto label_2063e0;
        case 0x2063e4u: goto label_2063e4;
        case 0x2063e8u: goto label_2063e8;
        case 0x2063ecu: goto label_2063ec;
        case 0x2063f0u: goto label_2063f0;
        case 0x2063f4u: goto label_2063f4;
        case 0x2063f8u: goto label_2063f8;
        case 0x2063fcu: goto label_2063fc;
        case 0x206400u: goto label_206400;
        case 0x206404u: goto label_206404;
        default: break;
    }

    ctx->pc = 0x2063d8u;

label_2063d8:
    // 0x2063d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2063d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2063dc:
    // 0x2063dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2063dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2063e0:
    // 0x2063e0: 0xac850070  sw          $a1, 0x70($a0)
    ctx->pc = 0x2063e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 5));
label_2063e4:
    // 0x2063e4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2063e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2063e8:
    // 0x2063e8: 0x844300a8  lh          $v1, 0xA8($v0)
    ctx->pc = 0x2063e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2063ec:
    // 0x2063ec: 0x8c4500ac  lw          $a1, 0xAC($v0)
    ctx->pc = 0x2063ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2063f0:
    // 0x2063f0: 0xa0f809  jalr        $a1
label_2063f4:
    if (ctx->pc == 0x2063F4u) {
        ctx->pc = 0x2063F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2063F0u;
        // 0x2063f4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2063F8u;
        goto label_2063f8;
    }
    ctx->pc = 0x2063F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2063F8u);
        ctx->pc = 0x2063F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2063F0u;
        // 0x2063f4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2063F0u, 0x2063F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2063F8u;
label_2063f8:
    // 0x2063f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2063f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2063fc:
    // 0x2063fc: 0x3e00008  jr          $ra
label_206400:
    if (ctx->pc == 0x206400u) {
        ctx->pc = 0x206400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2063FCu;
        // 0x206400: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206404u;
        goto label_206404;
    }
    ctx->pc = 0x2063FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2063FCu;
        // 0x206400: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2063FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206404u;
label_206404:
    // 0x206404: 0x0  nop
    ctx->pc = 0x206404u;
    // NOP
    ctx->pc = 0x206408u;
}
