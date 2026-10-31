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

// Function: sub_001FD388
// Address: 0x1fd388 - 0x1fd3b0
void sub_001FD388_0x1fd388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD388_0x1fd388");
#endif

    switch (ctx->pc) {
        case 0x1fd388u: goto label_1fd388;
        case 0x1fd38cu: goto label_1fd38c;
        case 0x1fd390u: goto label_1fd390;
        case 0x1fd394u: goto label_1fd394;
        case 0x1fd398u: goto label_1fd398;
        case 0x1fd39cu: goto label_1fd39c;
        case 0x1fd3a0u: goto label_1fd3a0;
        case 0x1fd3a4u: goto label_1fd3a4;
        case 0x1fd3a8u: goto label_1fd3a8;
        case 0x1fd3acu: goto label_1fd3ac;
        default: break;
    }

    ctx->pc = 0x1fd388u;

label_1fd388:
    // 0x1fd388: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1fd38c:
    // 0x1fd38c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fd390:
    // 0x1fd390: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fd390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fd394:
    // 0x1fd394: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x1fd394u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1fd398:
    // 0x1fd398: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x1fd398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1fd39c:
    // 0x1fd39c: 0xa0f809  jalr        $a1
label_1fd3a0:
    if (ctx->pc == 0x1FD3A0u) {
        ctx->pc = 0x1FD3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD39Cu;
        // 0x1fd3a0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD3A4u;
        goto label_1fd3a4;
    }
    ctx->pc = 0x1FD39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1FD3A4u);
        ctx->pc = 0x1FD3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD39Cu;
        // 0x1fd3a0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD39Cu, 0x1FD3A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD3A4u;
label_1fd3a4:
    // 0x1fd3a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd3a8:
    // 0x1fd3a8: 0x3e00008  jr          $ra
label_1fd3ac:
    if (ctx->pc == 0x1FD3ACu) {
        ctx->pc = 0x1FD3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD3A8u;
        // 0x1fd3ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD3B0u;
        goto label_fallthrough_0x1fd3a8;
    }
    ctx->pc = 0x1FD3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD3A8u;
        // 0x1fd3ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fd3a8:
    ctx->pc = 0x1FD3B0u;
}
