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

// Function: sub_001E92F8
// Address: 0x1e92f8 - 0x1e9330
void sub_001E92F8_0x1e92f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E92F8_0x1e92f8");
#endif

    switch (ctx->pc) {
        case 0x1e92f8u: goto label_1e92f8;
        case 0x1e92fcu: goto label_1e92fc;
        case 0x1e9300u: goto label_1e9300;
        case 0x1e9304u: goto label_1e9304;
        case 0x1e9308u: goto label_1e9308;
        case 0x1e930cu: goto label_1e930c;
        case 0x1e9310u: goto label_1e9310;
        case 0x1e9314u: goto label_1e9314;
        case 0x1e9318u: goto label_1e9318;
        case 0x1e931cu: goto label_1e931c;
        case 0x1e9320u: goto label_1e9320;
        case 0x1e9324u: goto label_1e9324;
        case 0x1e9328u: goto label_1e9328;
        case 0x1e932cu: goto label_1e932c;
        default: break;
    }

    ctx->pc = 0x1e92f8u;

label_1e92f8:
    // 0x1e92f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e92f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e92fc:
    // 0x1e92fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e92fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e9300:
    // 0x1e9300: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x1e9300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_1e9304:
    // 0x1e9304: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1e9308:
    if (ctx->pc == 0x1E9308u) {
        ctx->pc = 0x1E9308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9304u;
        // 0x1e9308: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E930Cu;
        goto label_1e930c;
    }
    ctx->pc = 0x1E9304u;
    {
        const bool branch_taken_0x1e9304 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9304u;
        // 0x1e9308: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9304) {
            ctx->pc = 0x1E9324u;
            goto label_1e9324;
        }
    }
    ctx->pc = 0x1E930Cu;
label_1e930c:
    // 0x1e930c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e930cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e9310:
    // 0x1e9310: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1e9310u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1e9314:
    // 0x1e9314: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1e9314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1e9318:
    // 0x1e9318: 0x60f809  jalr        $v1
label_1e931c:
    if (ctx->pc == 0x1E931Cu) {
        ctx->pc = 0x1E931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9318u;
        // 0x1e931c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9320u;
        goto label_1e9320;
    }
    ctx->pc = 0x1E9318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E9320u);
        ctx->pc = 0x1E931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9318u;
        // 0x1e931c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9318u, 0x1E9320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9320u;
label_1e9320:
    // 0x1e9320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9324:
    // 0x1e9324: 0x3e00008  jr          $ra
label_1e9328:
    if (ctx->pc == 0x1E9328u) {
        ctx->pc = 0x1E9328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9324u;
        // 0x1e9328: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E932Cu;
        goto label_1e932c;
    }
    ctx->pc = 0x1E9324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9324u;
        // 0x1e9328: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E932Cu;
label_1e932c:
    // 0x1e932c: 0x0  nop
    ctx->pc = 0x1e932cu;
    // NOP
    ctx->pc = 0x1e9330u;
}
