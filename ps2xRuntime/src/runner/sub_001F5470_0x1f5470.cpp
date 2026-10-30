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

// Function: sub_001F5470
// Address: 0x1f5470 - 0x1f5498
void sub_001F5470_0x1f5470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5470_0x1f5470");
#endif

    switch (ctx->pc) {
        case 0x1f5470u: goto label_1f5470;
        case 0x1f5474u: goto label_1f5474;
        case 0x1f5478u: goto label_1f5478;
        case 0x1f547cu: goto label_1f547c;
        case 0x1f5480u: goto label_1f5480;
        case 0x1f5484u: goto label_1f5484;
        case 0x1f5488u: goto label_1f5488;
        case 0x1f548cu: goto label_1f548c;
        case 0x1f5490u: goto label_1f5490;
        case 0x1f5494u: goto label_1f5494;
        default: break;
    }

    ctx->pc = 0x1f5470u;

label_1f5470:
    // 0x1f5470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f5470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f5474:
    // 0x1f5474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f5474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f5478:
    // 0x1f5478: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f5478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f547c:
    // 0x1f547c: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x1f547cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1f5480:
    // 0x1f5480: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x1f5480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1f5484:
    // 0x1f5484: 0xa0f809  jalr        $a1
label_1f5488:
    if (ctx->pc == 0x1F5488u) {
        ctx->pc = 0x1F5488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5484u;
        // 0x1f5488: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F548Cu;
        goto label_1f548c;
    }
    ctx->pc = 0x1F5484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1F548Cu);
        ctx->pc = 0x1F5488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5484u;
        // 0x1f5488: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5484u, 0x1F548Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F548Cu;
label_1f548c:
    // 0x1f548c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f548cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5490:
    // 0x1f5490: 0x3e00008  jr          $ra
label_1f5494:
    if (ctx->pc == 0x1F5494u) {
        ctx->pc = 0x1F5494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5490u;
        // 0x1f5494: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5498u;
        goto label_fallthrough_0x1f5490;
    }
    ctx->pc = 0x1F5490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5490u;
        // 0x1f5494: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f5490:
    ctx->pc = 0x1F5498u;
}
