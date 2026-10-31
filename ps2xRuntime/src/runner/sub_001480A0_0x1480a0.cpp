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

// Function: sub_001480A0
// Address: 0x1480a0 - 0x1480e0
void sub_001480A0_0x1480a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001480A0_0x1480a0");
#endif

    switch (ctx->pc) {
        case 0x1480a0u: goto label_1480a0;
        case 0x1480a4u: goto label_1480a4;
        case 0x1480a8u: goto label_1480a8;
        case 0x1480acu: goto label_1480ac;
        case 0x1480b0u: goto label_1480b0;
        case 0x1480b4u: goto label_1480b4;
        case 0x1480b8u: goto label_1480b8;
        case 0x1480bcu: goto label_1480bc;
        case 0x1480c0u: goto label_1480c0;
        case 0x1480c4u: goto label_1480c4;
        case 0x1480c8u: goto label_1480c8;
        case 0x1480ccu: goto label_1480cc;
        case 0x1480d0u: goto label_1480d0;
        case 0x1480d4u: goto label_1480d4;
        case 0x1480d8u: goto label_1480d8;
        case 0x1480dcu: goto label_1480dc;
        default: break;
    }

    ctx->pc = 0x1480a0u;

label_1480a0:
    // 0x1480a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1480a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1480a4:
    // 0x1480a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1480a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1480a8:
    // 0x1480a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1480a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1480ac:
    // 0x1480ac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1480acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1480b0:
    // 0x1480b0: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x1480b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_1480b4:
    // 0x1480b4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1480b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1480b8:
    // 0x1480b8: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1480b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_1480bc:
    // 0x1480bc: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1480bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_1480c0:
    // 0x1480c0: 0x40f809  jalr        $v0
label_1480c4:
    if (ctx->pc == 0x1480C4u) {
        ctx->pc = 0x1480C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1480C0u;
        // 0x1480c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1480C8u;
        goto label_1480c8;
    }
    ctx->pc = 0x1480C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1480C8u);
        ctx->pc = 0x1480C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1480C0u;
        // 0x1480c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1480C0u, 0x1480C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1480C8u;
label_1480c8:
    // 0x1480c8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1480c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1480cc:
    // 0x1480cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1480ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1480d0:
    // 0x1480d0: 0xac62b73c  sw          $v0, -0x48C4($v1)
    ctx->pc = 0x1480d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294948668), GPR_U32(ctx, 2));
label_1480d4:
    // 0x1480d4: 0x3e00008  jr          $ra
label_1480d8:
    if (ctx->pc == 0x1480D8u) {
        ctx->pc = 0x1480D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1480D4u;
        // 0x1480d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1480DCu;
        goto label_1480dc;
    }
    ctx->pc = 0x1480D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1480D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1480D4u;
        // 0x1480d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1480D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1480DCu;
label_1480dc:
    // 0x1480dc: 0x0  nop
    ctx->pc = 0x1480dcu;
    // NOP
    ctx->pc = 0x1480e0u;
}
