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

// Function: sub_003C5490
// Address: 0x3c5490 - 0x3c54b8
void sub_003C5490_0x3c5490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5490_0x3c5490");
#endif

    switch (ctx->pc) {
        case 0x3c5490u: goto label_3c5490;
        case 0x3c5494u: goto label_3c5494;
        case 0x3c5498u: goto label_3c5498;
        case 0x3c549cu: goto label_3c549c;
        case 0x3c54a0u: goto label_3c54a0;
        case 0x3c54a4u: goto label_3c54a4;
        case 0x3c54a8u: goto label_3c54a8;
        case 0x3c54acu: goto label_3c54ac;
        case 0x3c54b0u: goto label_3c54b0;
        case 0x3c54b4u: goto label_3c54b4;
        default: break;
    }

    ctx->pc = 0x3c5490u;

label_3c5490:
    // 0x3c5490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3c5490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3c5494:
    // 0x3c5494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c5494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c5498:
    // 0x3c5498: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3c5498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c549c:
    // 0x3c549c: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3c549cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c54a0:
    // 0x3c54a0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c54a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c54a4:
    // 0x3c54a4: 0x40f809  jalr        $v0
label_3c54a8:
    if (ctx->pc == 0x3C54A8u) {
        ctx->pc = 0x3C54A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C54A4u;
        // 0x3c54a8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C54ACu;
        goto label_3c54ac;
    }
    ctx->pc = 0x3C54A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C54ACu);
        ctx->pc = 0x3C54A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C54A4u;
        // 0x3c54a8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C54A4u, 0x3C54ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C54ACu;
label_3c54ac:
    // 0x3c54ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c54acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c54b0:
    // 0x3c54b0: 0x3e00008  jr          $ra
label_3c54b4:
    if (ctx->pc == 0x3C54B4u) {
        ctx->pc = 0x3C54B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C54B0u;
        // 0x3c54b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C54B8u;
        goto label_fallthrough_0x3c54b0;
    }
    ctx->pc = 0x3C54B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C54B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C54B0u;
        // 0x3c54b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C54B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c54b0:
    ctx->pc = 0x3C54B8u;
}
