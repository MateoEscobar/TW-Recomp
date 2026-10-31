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

// Function: sub_004DC698
// Address: 0x4dc698 - 0x4dc6c8
void sub_004DC698_0x4dc698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DC698_0x4dc698");
#endif

    switch (ctx->pc) {
        case 0x4dc698u: goto label_4dc698;
        case 0x4dc69cu: goto label_4dc69c;
        case 0x4dc6a0u: goto label_4dc6a0;
        case 0x4dc6a4u: goto label_4dc6a4;
        case 0x4dc6a8u: goto label_4dc6a8;
        case 0x4dc6acu: goto label_4dc6ac;
        case 0x4dc6b0u: goto label_4dc6b0;
        case 0x4dc6b4u: goto label_4dc6b4;
        case 0x4dc6b8u: goto label_4dc6b8;
        case 0x4dc6bcu: goto label_4dc6bc;
        case 0x4dc6c0u: goto label_4dc6c0;
        case 0x4dc6c4u: goto label_4dc6c4;
        default: break;
    }

    ctx->pc = 0x4dc698u;

label_4dc698:
    // 0x4dc698: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dc698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4dc69c:
    // 0x4dc69c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dc69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4dc6a0:
    // 0x4dc6a0: 0x8c850214  lw          $a1, 0x214($a0)
    ctx->pc = 0x4dc6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
label_4dc6a4:
    // 0x4dc6a4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4dc6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4dc6a8:
    // 0x4dc6a8: 0x844401a8  lh          $a0, 0x1A8($v0)
    ctx->pc = 0x4dc6a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 424)));
label_4dc6ac:
    // 0x4dc6ac: 0x8c4301ac  lw          $v1, 0x1AC($v0)
    ctx->pc = 0x4dc6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
label_4dc6b0:
    // 0x4dc6b0: 0x60f809  jalr        $v1
label_4dc6b4:
    if (ctx->pc == 0x4DC6B4u) {
        ctx->pc = 0x4DC6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC6B0u;
        // 0x4dc6b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC6B8u;
        goto label_4dc6b8;
    }
    ctx->pc = 0x4DC6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DC6B8u);
        ctx->pc = 0x4DC6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC6B0u;
        // 0x4dc6b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC6B0u, 0x4DC6B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DC6B8u;
label_4dc6b8:
    // 0x4dc6b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dc6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4dc6bc:
    // 0x4dc6bc: 0x3e00008  jr          $ra
label_4dc6c0:
    if (ctx->pc == 0x4DC6C0u) {
        ctx->pc = 0x4DC6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC6BCu;
        // 0x4dc6c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC6C4u;
        goto label_4dc6c4;
    }
    ctx->pc = 0x4DC6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DC6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC6BCu;
        // 0x4dc6c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DC6C4u;
label_4dc6c4:
    // 0x4dc6c4: 0x0  nop
    ctx->pc = 0x4dc6c4u;
    // NOP
    ctx->pc = 0x4dc6c8u;
}
