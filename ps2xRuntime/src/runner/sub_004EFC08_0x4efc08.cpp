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

// Function: sub_004EFC08
// Address: 0x4efc08 - 0x4efc38
void sub_004EFC08_0x4efc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EFC08_0x4efc08");
#endif

    switch (ctx->pc) {
        case 0x4efc08u: goto label_4efc08;
        case 0x4efc0cu: goto label_4efc0c;
        case 0x4efc10u: goto label_4efc10;
        case 0x4efc14u: goto label_4efc14;
        case 0x4efc18u: goto label_4efc18;
        case 0x4efc1cu: goto label_4efc1c;
        case 0x4efc20u: goto label_4efc20;
        case 0x4efc24u: goto label_4efc24;
        case 0x4efc28u: goto label_4efc28;
        case 0x4efc2cu: goto label_4efc2c;
        case 0x4efc30u: goto label_4efc30;
        case 0x4efc34u: goto label_4efc34;
        default: break;
    }

    ctx->pc = 0x4efc08u;

label_4efc08:
    // 0x4efc08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4efc08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4efc0c:
    // 0x4efc0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4efc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4efc10:
    // 0x4efc10: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4efc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4efc14:
    // 0x4efc14: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4efc14u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4efc18:
    // 0x4efc18: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4efc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4efc1c:
    // 0x4efc1c: 0x40f809  jalr        $v0
label_4efc20:
    if (ctx->pc == 0x4EFC20u) {
        ctx->pc = 0x4EFC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFC1Cu;
        // 0x4efc20: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EFC24u;
        goto label_4efc24;
    }
    ctx->pc = 0x4EFC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4EFC24u);
        ctx->pc = 0x4EFC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFC1Cu;
        // 0x4efc20: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EFC1Cu, 0x4EFC24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EFC24u;
label_4efc24:
    // 0x4efc24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4efc24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4efc28:
    // 0x4efc28: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x4efc28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_4efc2c:
    // 0x4efc2c: 0x3e00008  jr          $ra
label_4efc30:
    if (ctx->pc == 0x4EFC30u) {
        ctx->pc = 0x4EFC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFC2Cu;
        // 0x4efc30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EFC34u;
        goto label_4efc34;
    }
    ctx->pc = 0x4EFC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EFC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFC2Cu;
        // 0x4efc30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EFC2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EFC34u;
label_4efc34:
    // 0x4efc34: 0x0  nop
    ctx->pc = 0x4efc34u;
    // NOP
    ctx->pc = 0x4efc38u;
}
