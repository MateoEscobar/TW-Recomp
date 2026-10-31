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

// Function: sub_001D3C90
// Address: 0x1d3c90 - 0x1d3cd0
void sub_001D3C90_0x1d3c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3C90_0x1d3c90");
#endif

    switch (ctx->pc) {
        case 0x1d3c90u: goto label_1d3c90;
        case 0x1d3c94u: goto label_1d3c94;
        case 0x1d3c98u: goto label_1d3c98;
        case 0x1d3c9cu: goto label_1d3c9c;
        case 0x1d3ca0u: goto label_1d3ca0;
        case 0x1d3ca4u: goto label_1d3ca4;
        case 0x1d3ca8u: goto label_1d3ca8;
        case 0x1d3cacu: goto label_1d3cac;
        case 0x1d3cb0u: goto label_1d3cb0;
        case 0x1d3cb4u: goto label_1d3cb4;
        case 0x1d3cb8u: goto label_1d3cb8;
        case 0x1d3cbcu: goto label_1d3cbc;
        case 0x1d3cc0u: goto label_1d3cc0;
        case 0x1d3cc4u: goto label_1d3cc4;
        case 0x1d3cc8u: goto label_1d3cc8;
        case 0x1d3cccu: goto label_1d3ccc;
        default: break;
    }

    ctx->pc = 0x1d3c90u;

label_1d3c90:
    // 0x1d3c90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d3c94:
    // 0x1d3c94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d3c98:
    // 0x1d3c98: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1d3c98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1d3c9c:
    // 0x1d3c9c: 0x8c870050  lw          $a3, 0x50($a0)
    ctx->pc = 0x1d3c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_1d3ca0:
    // 0x1d3ca0: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
label_1d3ca4:
    if (ctx->pc == 0x1D3CA4u) {
        ctx->pc = 0x1D3CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CA0u;
        // 0x1d3ca4: 0x7c820020  sq          $v0, 0x20($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3CA8u;
        goto label_1d3ca8;
    }
    ctx->pc = 0x1D3CA0u;
    {
        const bool branch_taken_0x1d3ca0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CA0u;
        // 0x1d3ca4: 0x7c820020  sq          $v0, 0x20($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ca0) {
            ctx->pc = 0x1D3CC4u;
            goto label_1d3cc4;
        }
    }
    ctx->pc = 0x1D3CA8u;
label_1d3ca8:
    // 0x1d3ca8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1d3ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1d3cac:
    // 0x1d3cac: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x1d3cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_1d3cb0:
    // 0x1d3cb0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d3cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d3cb4:
    // 0x1d3cb4: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1d3cb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1d3cb8:
    // 0x1d3cb8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1d3cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1d3cbc:
    // 0x1d3cbc: 0x60f809  jalr        $v1
label_1d3cc0:
    if (ctx->pc == 0x1D3CC0u) {
        ctx->pc = 0x1D3CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CBCu;
        // 0x1d3cc0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3CC4u;
        goto label_1d3cc4;
    }
    ctx->pc = 0x1D3CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D3CC4u);
        ctx->pc = 0x1D3CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CBCu;
        // 0x1d3cc0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3CBCu, 0x1D3CC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D3CC4u;
label_1d3cc4:
    // 0x1d3cc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3cc8:
    // 0x1d3cc8: 0x3e00008  jr          $ra
label_1d3ccc:
    if (ctx->pc == 0x1D3CCCu) {
        ctx->pc = 0x1D3CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CC8u;
        // 0x1d3ccc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3CD0u;
        goto label_fallthrough_0x1d3cc8;
    }
    ctx->pc = 0x1D3CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CC8u;
        // 0x1d3ccc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d3cc8:
    ctx->pc = 0x1D3CD0u;
}
