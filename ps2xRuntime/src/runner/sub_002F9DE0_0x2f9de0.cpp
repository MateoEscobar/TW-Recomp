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

// Function: sub_002F9DE0
// Address: 0x2f9de0 - 0x2f9e48
void sub_002F9DE0_0x2f9de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9DE0_0x2f9de0");
#endif

    switch (ctx->pc) {
        case 0x2f9de0u: goto label_2f9de0;
        case 0x2f9de4u: goto label_2f9de4;
        case 0x2f9de8u: goto label_2f9de8;
        case 0x2f9decu: goto label_2f9dec;
        case 0x2f9df0u: goto label_2f9df0;
        case 0x2f9df4u: goto label_2f9df4;
        case 0x2f9df8u: goto label_2f9df8;
        case 0x2f9dfcu: goto label_2f9dfc;
        case 0x2f9e00u: goto label_2f9e00;
        case 0x2f9e04u: goto label_2f9e04;
        case 0x2f9e08u: goto label_2f9e08;
        case 0x2f9e0cu: goto label_2f9e0c;
        case 0x2f9e10u: goto label_2f9e10;
        case 0x2f9e14u: goto label_2f9e14;
        case 0x2f9e18u: goto label_2f9e18;
        case 0x2f9e1cu: goto label_2f9e1c;
        case 0x2f9e20u: goto label_2f9e20;
        case 0x2f9e24u: goto label_2f9e24;
        case 0x2f9e28u: goto label_2f9e28;
        case 0x2f9e2cu: goto label_2f9e2c;
        case 0x2f9e30u: goto label_2f9e30;
        case 0x2f9e34u: goto label_2f9e34;
        case 0x2f9e38u: goto label_2f9e38;
        case 0x2f9e3cu: goto label_2f9e3c;
        case 0x2f9e40u: goto label_2f9e40;
        case 0x2f9e44u: goto label_2f9e44;
        default: break;
    }

    ctx->pc = 0x2f9de0u;

label_2f9de0:
    // 0x2f9de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f9de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2f9de4:
    // 0x2f9de4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f9de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9de8:
    // 0x2f9de8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f9de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2f9dec:
    // 0x2f9dec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f9decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2f9df0:
    // 0x2f9df0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f9df0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f9df4:
    // 0x2f9df4: 0x92030006  lbu         $v1, 0x6($s0)
    ctx->pc = 0x2f9df4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
label_2f9df8:
    // 0x2f9df8: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_2f9dfc:
    if (ctx->pc == 0x2F9DFCu) {
        ctx->pc = 0x2F9DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9DF8u;
        // 0x2f9dfc: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9E00u;
        goto label_2f9e00;
    }
    ctx->pc = 0x2F9DF8u;
    {
        const bool branch_taken_0x2f9df8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f9df8) {
            ctx->pc = 0x2F9DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9DF8u;
            // 0x2f9dfc: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9E24u;
            goto label_2f9e24;
        }
    }
    ctx->pc = 0x2F9E00u;
label_2f9e00:
    // 0x2f9e00: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2f9e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2f9e04:
    // 0x2f9e04: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x2f9e04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_2f9e08:
    // 0x2f9e08: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2f9e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_2f9e0c:
    // 0x2f9e0c: 0x40f809  jalr        $v0
label_2f9e10:
    if (ctx->pc == 0x2F9E10u) {
        ctx->pc = 0x2F9E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E0Cu;
        // 0x2f9e10: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9E14u;
        goto label_2f9e14;
    }
    ctx->pc = 0x2F9E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F9E14u);
        ctx->pc = 0x2F9E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E0Cu;
        // 0x2f9e10: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9E0Cu, 0x2F9E14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F9E14u;
label_2f9e14:
    // 0x2f9e14: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2f9e18:
    if (ctx->pc == 0x2F9E18u) {
        ctx->pc = 0x2F9E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E14u;
        // 0x2f9e18: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9E1Cu;
        goto label_2f9e1c;
    }
    ctx->pc = 0x2F9E14u;
    {
        const bool branch_taken_0x2f9e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9e14) {
            ctx->pc = 0x2F9E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9E14u;
            // 0x2f9e18: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9E24u;
            goto label_2f9e24;
        }
    }
    ctx->pc = 0x2F9E1Cu;
label_2f9e1c:
    // 0x2f9e1c: 0x10000006  b           . + 4 + (0x6 << 2)
label_2f9e20:
    if (ctx->pc == 0x2F9E20u) {
        ctx->pc = 0x2F9E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E1Cu;
        // 0x2f9e20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9E24u;
        goto label_2f9e24;
    }
    ctx->pc = 0x2F9E1Cu;
    {
        const bool branch_taken_0x2f9e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E1Cu;
        // 0x2f9e20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9e1c) {
            ctx->pc = 0x2F9E38u;
            goto label_2f9e38;
        }
    }
    ctx->pc = 0x2F9E24u;
label_2f9e24:
    // 0x2f9e24: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x2f9e24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_2f9e28:
    // 0x2f9e28: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2f9e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2f9e2c:
    // 0x2f9e2c: 0x60f809  jalr        $v1
label_2f9e30:
    if (ctx->pc == 0x2F9E30u) {
        ctx->pc = 0x2F9E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E2Cu;
        // 0x2f9e30: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9E34u;
        goto label_2f9e34;
    }
    ctx->pc = 0x2F9E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F9E34u);
        ctx->pc = 0x2F9E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E2Cu;
        // 0x2f9e30: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9E2Cu, 0x2F9E34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F9E34u;
label_2f9e34:
    // 0x2f9e34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f9e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9e38:
    // 0x2f9e38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f9e38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f9e3c:
    // 0x2f9e3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f9e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f9e40:
    // 0x2f9e40: 0x3e00008  jr          $ra
label_2f9e44:
    if (ctx->pc == 0x2F9E44u) {
        ctx->pc = 0x2F9E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E40u;
        // 0x2f9e44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9E48u;
        goto label_fallthrough_0x2f9e40;
    }
    ctx->pc = 0x2F9E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E40u;
        // 0x2f9e44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f9e40:
    ctx->pc = 0x2F9E48u;
}
