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

// Function: sub_001B46A0
// Address: 0x1b46a0 - 0x1b46e0
void sub_001B46A0_0x1b46a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B46A0_0x1b46a0");
#endif

    switch (ctx->pc) {
        case 0x1b46a0u: goto label_1b46a0;
        case 0x1b46a4u: goto label_1b46a4;
        case 0x1b46a8u: goto label_1b46a8;
        case 0x1b46acu: goto label_1b46ac;
        case 0x1b46b0u: goto label_1b46b0;
        case 0x1b46b4u: goto label_1b46b4;
        case 0x1b46b8u: goto label_1b46b8;
        case 0x1b46bcu: goto label_1b46bc;
        case 0x1b46c0u: goto label_1b46c0;
        case 0x1b46c4u: goto label_1b46c4;
        case 0x1b46c8u: goto label_1b46c8;
        case 0x1b46ccu: goto label_1b46cc;
        case 0x1b46d0u: goto label_1b46d0;
        case 0x1b46d4u: goto label_1b46d4;
        case 0x1b46d8u: goto label_1b46d8;
        case 0x1b46dcu: goto label_1b46dc;
        default: break;
    }

    ctx->pc = 0x1b46a0u;

label_1b46a0:
    // 0x1b46a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b46a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b46a4:
    // 0x1b46a4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b46a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1b46a8:
    // 0x1b46a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b46a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b46ac:
    // 0x1b46ac: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1b46acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1b46b0:
    // 0x1b46b0: 0x24420840  addiu       $v0, $v0, 0x840
    ctx->pc = 0x1b46b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_1b46b4:
    // 0x1b46b4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b46b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1b46b8:
    // 0x1b46b8: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x1b46b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1b46bc:
    // 0x1b46bc: 0x8cc34120  lw          $v1, 0x4120($a2)
    ctx->pc = 0x1b46bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16672)));
label_1b46c0:
    // 0x1b46c0: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x1b46c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_1b46c4:
    // 0x1b46c4: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x1b46c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_1b46c8:
    // 0x1b46c8: 0x40f809  jalr        $v0
label_1b46cc:
    if (ctx->pc == 0x1B46CCu) {
        ctx->pc = 0x1B46CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B46C8u;
        // 0x1b46cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B46D0u;
        goto label_1b46d0;
    }
    ctx->pc = 0x1B46C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B46D0u);
        ctx->pc = 0x1B46CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B46C8u;
        // 0x1b46cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B46C8u, 0x1B46D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B46D0u;
label_1b46d0:
    // 0x1b46d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b46d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b46d4:
    // 0x1b46d4: 0x3e00008  jr          $ra
label_1b46d8:
    if (ctx->pc == 0x1B46D8u) {
        ctx->pc = 0x1B46D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B46D4u;
        // 0x1b46d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B46DCu;
        goto label_1b46dc;
    }
    ctx->pc = 0x1B46D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B46D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B46D4u;
        // 0x1b46d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B46D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B46DCu;
label_1b46dc:
    // 0x1b46dc: 0x0  nop
    ctx->pc = 0x1b46dcu;
    // NOP
    ctx->pc = 0x1b46e0u;
}
