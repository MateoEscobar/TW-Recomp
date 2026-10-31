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

// Function: sub_00206E08
// Address: 0x206e08 - 0x206e38
void sub_00206E08_0x206e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206E08_0x206e08");
#endif

    switch (ctx->pc) {
        case 0x206e08u: goto label_206e08;
        case 0x206e0cu: goto label_206e0c;
        case 0x206e10u: goto label_206e10;
        case 0x206e14u: goto label_206e14;
        case 0x206e18u: goto label_206e18;
        case 0x206e1cu: goto label_206e1c;
        case 0x206e20u: goto label_206e20;
        case 0x206e24u: goto label_206e24;
        case 0x206e28u: goto label_206e28;
        case 0x206e2cu: goto label_206e2c;
        case 0x206e30u: goto label_206e30;
        case 0x206e34u: goto label_206e34;
        default: break;
    }

    ctx->pc = 0x206e08u;

label_206e08:
    // 0x206e08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_206e0c:
    // 0x206e0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_206e10:
    // 0x206e10: 0xac850070  sw          $a1, 0x70($a0)
    ctx->pc = 0x206e10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 5));
label_206e14:
    // 0x206e14: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x206e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_206e18:
    // 0x206e18: 0x844300a8  lh          $v1, 0xA8($v0)
    ctx->pc = 0x206e18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_206e1c:
    // 0x206e1c: 0x8c4500ac  lw          $a1, 0xAC($v0)
    ctx->pc = 0x206e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_206e20:
    // 0x206e20: 0xa0f809  jalr        $a1
label_206e24:
    if (ctx->pc == 0x206E24u) {
        ctx->pc = 0x206E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E20u;
        // 0x206e24: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206E28u;
        goto label_206e28;
    }
    ctx->pc = 0x206E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x206E28u);
        ctx->pc = 0x206E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E20u;
        // 0x206e24: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206E20u, 0x206E28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206E28u;
label_206e28:
    // 0x206e28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_206e2c:
    // 0x206e2c: 0x3e00008  jr          $ra
label_206e30:
    if (ctx->pc == 0x206E30u) {
        ctx->pc = 0x206E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E2Cu;
        // 0x206e30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206E34u;
        goto label_206e34;
    }
    ctx->pc = 0x206E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E2Cu;
        // 0x206e30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206E34u;
label_206e34:
    // 0x206e34: 0x0  nop
    ctx->pc = 0x206e34u;
    // NOP
    ctx->pc = 0x206e38u;
}
