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

// Function: sub_0020B840
// Address: 0x20b840 - 0x20b870
void sub_0020B840_0x20b840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B840_0x20b840");
#endif

    switch (ctx->pc) {
        case 0x20b840u: goto label_20b840;
        case 0x20b844u: goto label_20b844;
        case 0x20b848u: goto label_20b848;
        case 0x20b84cu: goto label_20b84c;
        case 0x20b850u: goto label_20b850;
        case 0x20b854u: goto label_20b854;
        case 0x20b858u: goto label_20b858;
        case 0x20b85cu: goto label_20b85c;
        case 0x20b860u: goto label_20b860;
        case 0x20b864u: goto label_20b864;
        case 0x20b868u: goto label_20b868;
        case 0x20b86cu: goto label_20b86c;
        default: break;
    }

    ctx->pc = 0x20b840u;

label_20b840:
    // 0x20b840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20b840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20b844:
    // 0x20b844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20b844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20b848:
    // 0x20b848: 0xac850070  sw          $a1, 0x70($a0)
    ctx->pc = 0x20b848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 5));
label_20b84c:
    // 0x20b84c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20b84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20b850:
    // 0x20b850: 0x844300a8  lh          $v1, 0xA8($v0)
    ctx->pc = 0x20b850u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_20b854:
    // 0x20b854: 0x8c4500ac  lw          $a1, 0xAC($v0)
    ctx->pc = 0x20b854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_20b858:
    // 0x20b858: 0xa0f809  jalr        $a1
label_20b85c:
    if (ctx->pc == 0x20B85Cu) {
        ctx->pc = 0x20B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B858u;
        // 0x20b85c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B860u;
        goto label_20b860;
    }
    ctx->pc = 0x20B858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x20B860u);
        ctx->pc = 0x20B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B858u;
        // 0x20b85c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B858u, 0x20B860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B860u;
label_20b860:
    // 0x20b860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20b864:
    // 0x20b864: 0x3e00008  jr          $ra
label_20b868:
    if (ctx->pc == 0x20B868u) {
        ctx->pc = 0x20B868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B864u;
        // 0x20b868: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B86Cu;
        goto label_20b86c;
    }
    ctx->pc = 0x20B864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B864u;
        // 0x20b868: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B86Cu;
label_20b86c:
    // 0x20b86c: 0x0  nop
    ctx->pc = 0x20b86cu;
    // NOP
    ctx->pc = 0x20b870u;
}
