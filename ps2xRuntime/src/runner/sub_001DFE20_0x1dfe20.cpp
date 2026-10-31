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

// Function: sub_001DFE20
// Address: 0x1dfe20 - 0x1dfe88
void sub_001DFE20_0x1dfe20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFE20_0x1dfe20");
#endif

    switch (ctx->pc) {
        case 0x1dfe20u: goto label_1dfe20;
        case 0x1dfe24u: goto label_1dfe24;
        case 0x1dfe28u: goto label_1dfe28;
        case 0x1dfe2cu: goto label_1dfe2c;
        case 0x1dfe30u: goto label_1dfe30;
        case 0x1dfe34u: goto label_1dfe34;
        case 0x1dfe38u: goto label_1dfe38;
        case 0x1dfe3cu: goto label_1dfe3c;
        case 0x1dfe40u: goto label_1dfe40;
        case 0x1dfe44u: goto label_1dfe44;
        case 0x1dfe48u: goto label_1dfe48;
        case 0x1dfe4cu: goto label_1dfe4c;
        case 0x1dfe50u: goto label_1dfe50;
        case 0x1dfe54u: goto label_1dfe54;
        case 0x1dfe58u: goto label_1dfe58;
        case 0x1dfe5cu: goto label_1dfe5c;
        case 0x1dfe60u: goto label_1dfe60;
        case 0x1dfe64u: goto label_1dfe64;
        case 0x1dfe68u: goto label_1dfe68;
        case 0x1dfe6cu: goto label_1dfe6c;
        case 0x1dfe70u: goto label_1dfe70;
        case 0x1dfe74u: goto label_1dfe74;
        case 0x1dfe78u: goto label_1dfe78;
        case 0x1dfe7cu: goto label_1dfe7c;
        case 0x1dfe80u: goto label_1dfe80;
        case 0x1dfe84u: goto label_1dfe84;
        default: break;
    }

    ctx->pc = 0x1dfe20u;

label_1dfe20:
    // 0x1dfe20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dfe20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1dfe24:
    // 0x1dfe24: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1dfe24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1dfe28:
    // 0x1dfe28: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1dfe28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1dfe2c:
    // 0x1dfe2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dfe2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dfe30:
    // 0x1dfe30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dfe30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1dfe34:
    // 0x1dfe34: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1dfe34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1dfe38:
    // 0x1dfe38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dfe38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1dfe3c:
    // 0x1dfe3c: 0xc055592  jal         func_155648
label_1dfe40:
    if (ctx->pc == 0x1DFE40u) {
        ctx->pc = 0x1DFE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE3Cu;
        // 0x1dfe40: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFE44u;
        goto label_1dfe44;
    }
    ctx->pc = 0x1DFE3Cu;
    SET_GPR_U32(ctx, 31, 0x1DFE44u);
    ctx->pc = 0x1DFE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFE3Cu;
    // 0x1dfe40: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155648u, 0x1DFE3Cu, 0x1DFE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFE44u;
label_1dfe44:
    // 0x1dfe44: 0x8e26ee94  lw          $a2, -0x116C($s1)
    ctx->pc = 0x1dfe44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962836)));
label_1dfe48:
    // 0x1dfe48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dfe48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dfe4c:
    // 0x1dfe4c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1dfe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1dfe50:
    // 0x1dfe50: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1dfe50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_1dfe54:
    // 0x1dfe54: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x1dfe54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1dfe58:
    // 0x1dfe58: 0x60f809  jalr        $v1
label_1dfe5c:
    if (ctx->pc == 0x1DFE5Cu) {
        ctx->pc = 0x1DFE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE58u;
        // 0x1dfe5c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFE60u;
        goto label_1dfe60;
    }
    ctx->pc = 0x1DFE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DFE60u);
        ctx->pc = 0x1DFE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE58u;
        // 0x1dfe5c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFE58u, 0x1DFE60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DFE60u;
label_1dfe60:
    // 0x1dfe60: 0x8e24ee94  lw          $a0, -0x116C($s1)
    ctx->pc = 0x1dfe60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962836)));
label_1dfe64:
    // 0x1dfe64: 0xc077fa2  jal         func_1DFE88
label_1dfe68:
    if (ctx->pc == 0x1DFE68u) {
        ctx->pc = 0x1DFE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE64u;
        // 0x1dfe68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFE6Cu;
        goto label_1dfe6c;
    }
    ctx->pc = 0x1DFE64u;
    SET_GPR_U32(ctx, 31, 0x1DFE6Cu);
    ctx->pc = 0x1DFE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFE64u;
    // 0x1dfe68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFE88u, 0x1DFE64u, 0x1DFE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFE6Cu;
label_1dfe6c:
    // 0x1dfe6c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1dfe6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dfe70:
    // 0x1dfe70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1dfe70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dfe74:
    // 0x1dfe74: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1dfe74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dfe78:
    // 0x1dfe78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dfe78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dfe7c:
    // 0x1dfe7c: 0x3e00008  jr          $ra
label_1dfe80:
    if (ctx->pc == 0x1DFE80u) {
        ctx->pc = 0x1DFE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE7Cu;
        // 0x1dfe80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFE84u;
        goto label_1dfe84;
    }
    ctx->pc = 0x1DFE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE7Cu;
        // 0x1dfe80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFE7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFE84u;
label_1dfe84:
    // 0x1dfe84: 0x0  nop
    ctx->pc = 0x1dfe84u;
    // NOP
    ctx->pc = 0x1dfe88u;
}
