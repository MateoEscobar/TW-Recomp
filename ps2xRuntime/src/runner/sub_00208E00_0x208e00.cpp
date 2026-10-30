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

// Function: sub_00208E00
// Address: 0x208e00 - 0x208e30
void sub_00208E00_0x208e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208E00_0x208e00");
#endif

    switch (ctx->pc) {
        case 0x208e00u: goto label_208e00;
        case 0x208e04u: goto label_208e04;
        case 0x208e08u: goto label_208e08;
        case 0x208e0cu: goto label_208e0c;
        case 0x208e10u: goto label_208e10;
        case 0x208e14u: goto label_208e14;
        case 0x208e18u: goto label_208e18;
        case 0x208e1cu: goto label_208e1c;
        case 0x208e20u: goto label_208e20;
        case 0x208e24u: goto label_208e24;
        case 0x208e28u: goto label_208e28;
        case 0x208e2cu: goto label_208e2c;
        default: break;
    }

    ctx->pc = 0x208e00u;

label_208e00:
    // 0x208e00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x208e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_208e04:
    // 0x208e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_208e08:
    // 0x208e08: 0xac850070  sw          $a1, 0x70($a0)
    ctx->pc = 0x208e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 5));
label_208e0c:
    // 0x208e0c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x208e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_208e10:
    // 0x208e10: 0x844300a8  lh          $v1, 0xA8($v0)
    ctx->pc = 0x208e10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_208e14:
    // 0x208e14: 0x8c4500ac  lw          $a1, 0xAC($v0)
    ctx->pc = 0x208e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_208e18:
    // 0x208e18: 0xa0f809  jalr        $a1
label_208e1c:
    if (ctx->pc == 0x208E1Cu) {
        ctx->pc = 0x208E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E18u;
        // 0x208e1c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208E20u;
        goto label_208e20;
    }
    ctx->pc = 0x208E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x208E20u);
        ctx->pc = 0x208E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E18u;
        // 0x208e1c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208E18u, 0x208E20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208E20u;
label_208e20:
    // 0x208e20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_208e24:
    // 0x208e24: 0x3e00008  jr          $ra
label_208e28:
    if (ctx->pc == 0x208E28u) {
        ctx->pc = 0x208E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E24u;
        // 0x208e28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208E2Cu;
        goto label_208e2c;
    }
    ctx->pc = 0x208E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E24u;
        // 0x208e28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208E2Cu;
label_208e2c:
    // 0x208e2c: 0x0  nop
    ctx->pc = 0x208e2cu;
    // NOP
    ctx->pc = 0x208e30u;
}
