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

// Function: sub_00470858
// Address: 0x470858 - 0x470888
void sub_00470858_0x470858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00470858_0x470858");
#endif

    switch (ctx->pc) {
        case 0x470858u: goto label_470858;
        case 0x47085cu: goto label_47085c;
        case 0x470860u: goto label_470860;
        case 0x470864u: goto label_470864;
        case 0x470868u: goto label_470868;
        case 0x47086cu: goto label_47086c;
        case 0x470870u: goto label_470870;
        case 0x470874u: goto label_470874;
        case 0x470878u: goto label_470878;
        case 0x47087cu: goto label_47087c;
        case 0x470880u: goto label_470880;
        case 0x470884u: goto label_470884;
        default: break;
    }

    ctx->pc = 0x470858u;

label_470858:
    // 0x470858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x470858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_47085c:
    // 0x47085c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x47085cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_470860:
    // 0x470860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x470860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_470864:
    // 0x470864: 0x8c43ad1c  lw          $v1, -0x52E4($v0)
    ctx->pc = 0x470864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946076)));
label_470868:
    // 0x470868: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x470868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
label_47086c:
    // 0x47086c: 0x40f809  jalr        $v0
label_470870:
    if (ctx->pc == 0x470870u) {
        ctx->pc = 0x470874u;
        goto label_470874;
    }
    ctx->pc = 0x47086Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x470874u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47086Cu, 0x470874u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x470874u;
label_470874:
    // 0x470874: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x470874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_470878:
    // 0x470878: 0x3e00008  jr          $ra
label_47087c:
    if (ctx->pc == 0x47087Cu) {
        ctx->pc = 0x47087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470878u;
        // 0x47087c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470880u;
        goto label_470880;
    }
    ctx->pc = 0x470878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470878u;
        // 0x47087c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x470880u;
label_470880:
    // 0x470880: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x470880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_470884:
    // 0x470884: 0x0  nop
    ctx->pc = 0x470884u;
    // NOP
    ctx->pc = 0x470888u;
}
