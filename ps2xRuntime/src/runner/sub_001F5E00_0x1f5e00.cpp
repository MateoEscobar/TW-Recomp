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

// Function: sub_001F5E00
// Address: 0x1f5e00 - 0x1f5e48
void sub_001F5E00_0x1f5e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5E00_0x1f5e00");
#endif

    switch (ctx->pc) {
        case 0x1f5e00u: goto label_1f5e00;
        case 0x1f5e04u: goto label_1f5e04;
        case 0x1f5e08u: goto label_1f5e08;
        case 0x1f5e0cu: goto label_1f5e0c;
        case 0x1f5e10u: goto label_1f5e10;
        case 0x1f5e14u: goto label_1f5e14;
        case 0x1f5e18u: goto label_1f5e18;
        case 0x1f5e1cu: goto label_1f5e1c;
        case 0x1f5e20u: goto label_1f5e20;
        case 0x1f5e24u: goto label_1f5e24;
        case 0x1f5e28u: goto label_1f5e28;
        case 0x1f5e2cu: goto label_1f5e2c;
        case 0x1f5e30u: goto label_1f5e30;
        case 0x1f5e34u: goto label_1f5e34;
        case 0x1f5e38u: goto label_1f5e38;
        case 0x1f5e3cu: goto label_1f5e3c;
        case 0x1f5e40u: goto label_1f5e40;
        case 0x1f5e44u: goto label_1f5e44;
        default: break;
    }

    ctx->pc = 0x1f5e00u;

label_1f5e00:
    // 0x1f5e00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f5e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f5e04:
    // 0x1f5e04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f5e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5e08:
    // 0x1f5e08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f5e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1f5e0c:
    // 0x1f5e0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f5e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f5e10:
    // 0x1f5e10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f5e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f5e14:
    // 0x1f5e14: 0x8e060070  lw          $a2, 0x70($s0)
    ctx->pc = 0x1f5e14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_1f5e18:
    // 0x1f5e18: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1f5e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1f5e1c:
    // 0x1f5e1c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1f5e1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1f5e20:
    // 0x1f5e20: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1f5e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1f5e24:
    // 0x1f5e24: 0x40f809  jalr        $v0
label_1f5e28:
    if (ctx->pc == 0x1F5E28u) {
        ctx->pc = 0x1F5E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5E24u;
        // 0x1f5e28: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5E2Cu;
        goto label_1f5e2c;
    }
    ctx->pc = 0x1F5E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F5E2Cu);
        ctx->pc = 0x1F5E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5E24u;
        // 0x1f5e28: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5E24u, 0x1F5E2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5E2Cu;
label_1f5e2c:
    // 0x1f5e2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f5e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f5e30:
    // 0x1f5e30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f5e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5e34:
    // 0x1f5e34: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x1f5e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
label_1f5e38:
    // 0x1f5e38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f5e38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5e3c:
    // 0x1f5e3c: 0x3e00008  jr          $ra
label_1f5e40:
    if (ctx->pc == 0x1F5E40u) {
        ctx->pc = 0x1F5E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5E3Cu;
        // 0x1f5e40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5E44u;
        goto label_1f5e44;
    }
    ctx->pc = 0x1F5E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5E3Cu;
        // 0x1f5e40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5E44u;
label_1f5e44:
    // 0x1f5e44: 0x0  nop
    ctx->pc = 0x1f5e44u;
    // NOP
    ctx->pc = 0x1f5e48u;
}
