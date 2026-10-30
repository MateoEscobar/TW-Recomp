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

// Function: sub_0020C6C8
// Address: 0x20c6c8 - 0x20c6f8
void sub_0020C6C8_0x20c6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C6C8_0x20c6c8");
#endif

    switch (ctx->pc) {
        case 0x20c6c8u: goto label_20c6c8;
        case 0x20c6ccu: goto label_20c6cc;
        case 0x20c6d0u: goto label_20c6d0;
        case 0x20c6d4u: goto label_20c6d4;
        case 0x20c6d8u: goto label_20c6d8;
        case 0x20c6dcu: goto label_20c6dc;
        case 0x20c6e0u: goto label_20c6e0;
        case 0x20c6e4u: goto label_20c6e4;
        case 0x20c6e8u: goto label_20c6e8;
        case 0x20c6ecu: goto label_20c6ec;
        case 0x20c6f0u: goto label_20c6f0;
        case 0x20c6f4u: goto label_20c6f4;
        default: break;
    }

    ctx->pc = 0x20c6c8u;

label_20c6c8:
    // 0x20c6c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20c6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20c6cc:
    // 0x20c6cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20c6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20c6d0:
    // 0x20c6d0: 0xac850070  sw          $a1, 0x70($a0)
    ctx->pc = 0x20c6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 5));
label_20c6d4:
    // 0x20c6d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20c6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20c6d8:
    // 0x20c6d8: 0x844300a8  lh          $v1, 0xA8($v0)
    ctx->pc = 0x20c6d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_20c6dc:
    // 0x20c6dc: 0x8c4500ac  lw          $a1, 0xAC($v0)
    ctx->pc = 0x20c6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_20c6e0:
    // 0x20c6e0: 0xa0f809  jalr        $a1
label_20c6e4:
    if (ctx->pc == 0x20C6E4u) {
        ctx->pc = 0x20C6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6E0u;
        // 0x20c6e4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C6E8u;
        goto label_20c6e8;
    }
    ctx->pc = 0x20C6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x20C6E8u);
        ctx->pc = 0x20C6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6E0u;
        // 0x20c6e4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C6E0u, 0x20C6E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20C6E8u;
label_20c6e8:
    // 0x20c6e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20c6ec:
    // 0x20c6ec: 0x3e00008  jr          $ra
label_20c6f0:
    if (ctx->pc == 0x20C6F0u) {
        ctx->pc = 0x20C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6ECu;
        // 0x20c6f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C6F4u;
        goto label_20c6f4;
    }
    ctx->pc = 0x20C6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6ECu;
        // 0x20c6f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C6F4u;
label_20c6f4:
    // 0x20c6f4: 0x0  nop
    ctx->pc = 0x20c6f4u;
    // NOP
    ctx->pc = 0x20c6f8u;
}
