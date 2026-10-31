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

// Function: sub_002FEE38
// Address: 0x2fee38 - 0x2feeb0
void sub_002FEE38_0x2fee38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FEE38_0x2fee38");
#endif

    switch (ctx->pc) {
        case 0x2fee38u: goto label_2fee38;
        case 0x2fee3cu: goto label_2fee3c;
        case 0x2fee40u: goto label_2fee40;
        case 0x2fee44u: goto label_2fee44;
        case 0x2fee48u: goto label_2fee48;
        case 0x2fee4cu: goto label_2fee4c;
        case 0x2fee50u: goto label_2fee50;
        case 0x2fee54u: goto label_2fee54;
        case 0x2fee58u: goto label_2fee58;
        case 0x2fee5cu: goto label_2fee5c;
        case 0x2fee60u: goto label_2fee60;
        case 0x2fee64u: goto label_2fee64;
        case 0x2fee68u: goto label_2fee68;
        case 0x2fee6cu: goto label_2fee6c;
        case 0x2fee70u: goto label_2fee70;
        case 0x2fee74u: goto label_2fee74;
        case 0x2fee78u: goto label_2fee78;
        case 0x2fee7cu: goto label_2fee7c;
        case 0x2fee80u: goto label_2fee80;
        case 0x2fee84u: goto label_2fee84;
        case 0x2fee88u: goto label_2fee88;
        case 0x2fee8cu: goto label_2fee8c;
        case 0x2fee90u: goto label_2fee90;
        case 0x2fee94u: goto label_2fee94;
        case 0x2fee98u: goto label_2fee98;
        case 0x2fee9cu: goto label_2fee9c;
        case 0x2feea0u: goto label_2feea0;
        case 0x2feea4u: goto label_2feea4;
        case 0x2feea8u: goto label_2feea8;
        case 0x2feeacu: goto label_2feeac;
        default: break;
    }

    ctx->pc = 0x2fee38u;

label_2fee38:
    // 0x2fee38: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2fee38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2fee3c:
    // 0x2fee3c: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2fee3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_2fee40:
    // 0x2fee40: 0xafa50044  sw          $a1, 0x44($sp)
    ctx->pc = 0x2fee40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
label_2fee44:
    // 0x2fee44: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2fee44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2fee48:
    // 0x2fee48: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2fee48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2fee4c:
    // 0x2fee4c: 0xc0e409a  jal         func_390268
label_2fee50:
    if (ctx->pc == 0x2FEE50u) {
        ctx->pc = 0x2FEE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE4Cu;
        // 0x2fee50: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEE54u;
        goto label_2fee54;
    }
    ctx->pc = 0x2FEE4Cu;
    SET_GPR_U32(ctx, 31, 0x2FEE54u);
    ctx->pc = 0x2FEE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEE4Cu;
    // 0x2fee50: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2FEE4Cu, 0x2FEE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEE54u;
label_2fee54:
    // 0x2fee54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2fee54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fee58:
    // 0x2fee58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fee58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2fee5c:
    // 0x2fee5c: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2fee5cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2fee60:
    // 0x2fee60: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x2fee60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2fee64:
    // 0x2fee64: 0xc0f809  jalr        $a2
label_2fee68:
    if (ctx->pc == 0x2FEE68u) {
        ctx->pc = 0x2FEE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE64u;
        // 0x2fee68: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEE6Cu;
        goto label_2fee6c;
    }
    ctx->pc = 0x2FEE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2FEE6Cu);
        ctx->pc = 0x2FEE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE64u;
        // 0x2fee68: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEE64u, 0x2FEE6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FEE6Cu;
label_2fee6c:
    // 0x2fee6c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2fee6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2fee70:
    // 0x2fee70: 0xc0e409a  jal         func_390268
label_2fee74:
    if (ctx->pc == 0x2FEE74u) {
        ctx->pc = 0x2FEE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE70u;
        // 0x2fee74: 0x27a40044  addiu       $a0, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEE78u;
        goto label_2fee78;
    }
    ctx->pc = 0x2FEE70u;
    SET_GPR_U32(ctx, 31, 0x2FEE78u);
    ctx->pc = 0x2FEE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEE70u;
    // 0x2fee74: 0x27a40044  addiu       $a0, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2FEE70u, 0x2FEE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEE78u;
label_2fee78:
    // 0x2fee78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2fee78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fee7c:
    // 0x2fee7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fee7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fee80:
    // 0x2fee80: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2fee80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2fee84:
    // 0x2fee84: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x2fee84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2fee88:
    // 0x2fee88: 0xc0f809  jalr        $a2
label_2fee8c:
    if (ctx->pc == 0x2FEE8Cu) {
        ctx->pc = 0x2FEE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE88u;
        // 0x2fee8c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEE90u;
        goto label_2fee90;
    }
    ctx->pc = 0x2FEE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2FEE90u);
        ctx->pc = 0x2FEE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE88u;
        // 0x2fee8c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEE88u, 0x2FEE90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FEE90u;
label_2fee90:
    // 0x2fee90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fee90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fee94:
    // 0x2fee94: 0xc0cdb62  jal         func_336D88
label_2fee98:
    if (ctx->pc == 0x2FEE98u) {
        ctx->pc = 0x2FEE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE94u;
        // 0x2fee98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEE9Cu;
        goto label_2fee9c;
    }
    ctx->pc = 0x2FEE94u;
    SET_GPR_U32(ctx, 31, 0x2FEE9Cu);
    ctx->pc = 0x2FEE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEE94u;
    // 0x2fee98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D88u, 0x2FEE94u, 0x2FEE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEE9Cu;
label_2fee9c:
    // 0x2fee9c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2fee9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2feea0:
    // 0x2feea0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2feea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2feea4:
    // 0x2feea4: 0x3e00008  jr          $ra
label_2feea8:
    if (ctx->pc == 0x2FEEA8u) {
        ctx->pc = 0x2FEEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEEA4u;
        // 0x2feea8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEEACu;
        goto label_2feeac;
    }
    ctx->pc = 0x2FEEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEEA4u;
        // 0x2feea8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FEEACu;
label_2feeac:
    // 0x2feeac: 0x0  nop
    ctx->pc = 0x2feeacu;
    // NOP
    ctx->pc = 0x2feeb0u;
}
