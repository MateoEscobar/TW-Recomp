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

// Function: sub_004EF488
// Address: 0x4ef488 - 0x4ef4b8
void sub_004EF488_0x4ef488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF488_0x4ef488");
#endif

    switch (ctx->pc) {
        case 0x4ef488u: goto label_4ef488;
        case 0x4ef48cu: goto label_4ef48c;
        case 0x4ef490u: goto label_4ef490;
        case 0x4ef494u: goto label_4ef494;
        case 0x4ef498u: goto label_4ef498;
        case 0x4ef49cu: goto label_4ef49c;
        case 0x4ef4a0u: goto label_4ef4a0;
        case 0x4ef4a4u: goto label_4ef4a4;
        case 0x4ef4a8u: goto label_4ef4a8;
        case 0x4ef4acu: goto label_4ef4ac;
        case 0x4ef4b0u: goto label_4ef4b0;
        case 0x4ef4b4u: goto label_4ef4b4;
        default: break;
    }

    ctx->pc = 0x4ef488u;

label_4ef488:
    // 0x4ef488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ef488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4ef48c:
    // 0x4ef48c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ef48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ef490:
    // 0x4ef490: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4ef490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4ef494:
    // 0x4ef494: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4ef494u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4ef498:
    // 0x4ef498: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4ef498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4ef49c:
    // 0x4ef49c: 0x40f809  jalr        $v0
label_4ef4a0:
    if (ctx->pc == 0x4EF4A0u) {
        ctx->pc = 0x4EF4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF49Cu;
        // 0x4ef4a0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EF4A4u;
        goto label_4ef4a4;
    }
    ctx->pc = 0x4EF49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4EF4A4u);
        ctx->pc = 0x4EF4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF49Cu;
        // 0x4ef4a0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF49Cu, 0x4EF4A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EF4A4u;
label_4ef4a4:
    // 0x4ef4a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ef4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ef4a8:
    // 0x4ef4a8: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x4ef4a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_4ef4ac:
    // 0x4ef4ac: 0x3e00008  jr          $ra
label_4ef4b0:
    if (ctx->pc == 0x4EF4B0u) {
        ctx->pc = 0x4EF4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF4ACu;
        // 0x4ef4b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EF4B4u;
        goto label_4ef4b4;
    }
    ctx->pc = 0x4EF4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF4ACu;
        // 0x4ef4b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EF4B4u;
label_4ef4b4:
    // 0x4ef4b4: 0x0  nop
    ctx->pc = 0x4ef4b4u;
    // NOP
    ctx->pc = 0x4ef4b8u;
}
