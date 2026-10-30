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

// Function: sub_004DC6C8
// Address: 0x4dc6c8 - 0x4dc6f8
void sub_004DC6C8_0x4dc6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DC6C8_0x4dc6c8");
#endif

    switch (ctx->pc) {
        case 0x4dc6c8u: goto label_4dc6c8;
        case 0x4dc6ccu: goto label_4dc6cc;
        case 0x4dc6d0u: goto label_4dc6d0;
        case 0x4dc6d4u: goto label_4dc6d4;
        case 0x4dc6d8u: goto label_4dc6d8;
        case 0x4dc6dcu: goto label_4dc6dc;
        case 0x4dc6e0u: goto label_4dc6e0;
        case 0x4dc6e4u: goto label_4dc6e4;
        case 0x4dc6e8u: goto label_4dc6e8;
        case 0x4dc6ecu: goto label_4dc6ec;
        case 0x4dc6f0u: goto label_4dc6f0;
        case 0x4dc6f4u: goto label_4dc6f4;
        default: break;
    }

    ctx->pc = 0x4dc6c8u;

label_4dc6c8:
    // 0x4dc6c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dc6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4dc6cc:
    // 0x4dc6cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dc6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4dc6d0:
    // 0x4dc6d0: 0x8c850214  lw          $a1, 0x214($a0)
    ctx->pc = 0x4dc6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
label_4dc6d4:
    // 0x4dc6d4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4dc6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4dc6d8:
    // 0x4dc6d8: 0x844401c8  lh          $a0, 0x1C8($v0)
    ctx->pc = 0x4dc6d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 456)));
label_4dc6dc:
    // 0x4dc6dc: 0x8c4301cc  lw          $v1, 0x1CC($v0)
    ctx->pc = 0x4dc6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 460)));
label_4dc6e0:
    // 0x4dc6e0: 0x60f809  jalr        $v1
label_4dc6e4:
    if (ctx->pc == 0x4DC6E4u) {
        ctx->pc = 0x4DC6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC6E0u;
        // 0x4dc6e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC6E8u;
        goto label_4dc6e8;
    }
    ctx->pc = 0x4DC6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DC6E8u);
        ctx->pc = 0x4DC6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC6E0u;
        // 0x4dc6e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC6E0u, 0x4DC6E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DC6E8u;
label_4dc6e8:
    // 0x4dc6e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dc6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4dc6ec:
    // 0x4dc6ec: 0x3e00008  jr          $ra
label_4dc6f0:
    if (ctx->pc == 0x4DC6F0u) {
        ctx->pc = 0x4DC6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC6ECu;
        // 0x4dc6f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC6F4u;
        goto label_4dc6f4;
    }
    ctx->pc = 0x4DC6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DC6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC6ECu;
        // 0x4dc6f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DC6F4u;
label_4dc6f4:
    // 0x4dc6f4: 0x0  nop
    ctx->pc = 0x4dc6f4u;
    // NOP
    ctx->pc = 0x4dc6f8u;
}
