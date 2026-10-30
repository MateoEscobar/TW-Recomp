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

// Function: sub_003863A0
// Address: 0x3863a0 - 0x3863d8
void sub_003863A0_0x3863a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003863A0_0x3863a0");
#endif

    switch (ctx->pc) {
        case 0x3863a0u: goto label_3863a0;
        case 0x3863a4u: goto label_3863a4;
        case 0x3863a8u: goto label_3863a8;
        case 0x3863acu: goto label_3863ac;
        case 0x3863b0u: goto label_3863b0;
        case 0x3863b4u: goto label_3863b4;
        case 0x3863b8u: goto label_3863b8;
        case 0x3863bcu: goto label_3863bc;
        case 0x3863c0u: goto label_3863c0;
        case 0x3863c4u: goto label_3863c4;
        case 0x3863c8u: goto label_3863c8;
        case 0x3863ccu: goto label_3863cc;
        case 0x3863d0u: goto label_3863d0;
        case 0x3863d4u: goto label_3863d4;
        default: break;
    }

    ctx->pc = 0x3863a0u;

label_3863a0:
    // 0x3863a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3863a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3863a4:
    // 0x3863a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3863a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3863a8:
    // 0x3863a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3863a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3863ac:
    // 0x3863ac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3863acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3863b0:
    // 0x3863b0: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x3863b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_3863b4:
    // 0x3863b4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3863b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3863b8:
    // 0x3863b8: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x3863b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_3863bc:
    // 0x3863bc: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x3863bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_3863c0:
    // 0x3863c0: 0x60f809  jalr        $v1
label_3863c4:
    if (ctx->pc == 0x3863C4u) {
        ctx->pc = 0x3863C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3863C0u;
        // 0x3863c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3863C8u;
        goto label_3863c8;
    }
    ctx->pc = 0x3863C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3863C8u);
        ctx->pc = 0x3863C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3863C0u;
        // 0x3863c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3863C0u, 0x3863C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3863C8u;
label_3863c8:
    // 0x3863c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3863c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3863cc:
    // 0x3863cc: 0x3e00008  jr          $ra
label_3863d0:
    if (ctx->pc == 0x3863D0u) {
        ctx->pc = 0x3863D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3863CCu;
        // 0x3863d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3863D4u;
        goto label_3863d4;
    }
    ctx->pc = 0x3863CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3863D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3863CCu;
        // 0x3863d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3863CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3863D4u;
label_3863d4:
    // 0x3863d4: 0x0  nop
    ctx->pc = 0x3863d4u;
    // NOP
    ctx->pc = 0x3863d8u;
}
