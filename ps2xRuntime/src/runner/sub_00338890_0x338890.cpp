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

// Function: sub_00338890
// Address: 0x338890 - 0x3388c0
void sub_00338890_0x338890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338890_0x338890");
#endif

    switch (ctx->pc) {
        case 0x338890u: goto label_338890;
        case 0x338894u: goto label_338894;
        case 0x338898u: goto label_338898;
        case 0x33889cu: goto label_33889c;
        case 0x3388a0u: goto label_3388a0;
        case 0x3388a4u: goto label_3388a4;
        case 0x3388a8u: goto label_3388a8;
        case 0x3388acu: goto label_3388ac;
        case 0x3388b0u: goto label_3388b0;
        case 0x3388b4u: goto label_3388b4;
        case 0x3388b8u: goto label_3388b8;
        case 0x3388bcu: goto label_3388bc;
        default: break;
    }

    ctx->pc = 0x338890u;

label_338890:
    // 0x338890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x338890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_338894:
    // 0x338894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x338894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_338898:
    // 0x338898: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x338898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_33889c:
    // 0x33889c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x33889cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3388a0:
    // 0x3388a0: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x3388a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_3388a4:
    // 0x3388a4: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x3388a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_3388a8:
    // 0x3388a8: 0x40f809  jalr        $v0
label_3388ac:
    if (ctx->pc == 0x3388ACu) {
        ctx->pc = 0x3388ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3388A8u;
        // 0x3388ac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3388B0u;
        goto label_3388b0;
    }
    ctx->pc = 0x3388A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3388B0u);
        ctx->pc = 0x3388ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3388A8u;
        // 0x3388ac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3388A8u, 0x3388B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3388B0u;
label_3388b0:
    // 0x3388b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3388b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3388b4:
    // 0x3388b4: 0x3e00008  jr          $ra
label_3388b8:
    if (ctx->pc == 0x3388B8u) {
        ctx->pc = 0x3388B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3388B4u;
        // 0x3388b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3388BCu;
        goto label_3388bc;
    }
    ctx->pc = 0x3388B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3388B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3388B4u;
        // 0x3388b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3388B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3388BCu;
label_3388bc:
    // 0x3388bc: 0x0  nop
    ctx->pc = 0x3388bcu;
    // NOP
    ctx->pc = 0x3388c0u;
}
