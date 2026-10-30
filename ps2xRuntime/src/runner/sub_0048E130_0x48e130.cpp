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

// Function: sub_0048E130
// Address: 0x48e130 - 0x48e1c8
void sub_0048E130_0x48e130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E130_0x48e130");
#endif

    switch (ctx->pc) {
        case 0x48e14cu: goto label_48e14c;
        case 0x48e164u: goto label_48e164;
        case 0x48e17cu: goto label_48e17c;
        case 0x48e190u: goto label_48e190;
        case 0x48e1a0u: goto label_48e1a0;
        case 0x48e1b0u: goto label_48e1b0;
        default: break;
    }

    ctx->pc = 0x48e130u;

    // 0x48e130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48e130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48e134: 0x9382869a  lbu         $v0, -0x7966($gp)
    ctx->pc = 0x48e134u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936218)));
    // 0x48e138: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x48e138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x48e13c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48E13Cu;
    {
        const bool branch_taken_0x48e13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E13Cu;
        // 0x48e140: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e13c) {
            ctx->pc = 0x48E150u;
            goto label_48e150;
        }
    }
    ctx->pc = 0x48E144u;
    // 0x48e144: 0xc10f6ea  jal         func_43DBA8
    ctx->pc = 0x48E144u;
    SET_GPR_U32(ctx, 31, 0x48E14Cu);
    ctx->pc = 0x48E148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E144u;
    // 0x48e148: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43DBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43DBA8u, 0x48E144u, 0x48E14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E14Cu;
label_48e14c:
    // 0x48e14c: 0xa380869a  sb          $zero, -0x7966($gp)
    ctx->pc = 0x48e14cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936218), (uint8_t)GPR_U32(ctx, 0));
label_48e150:
    // 0x48e150: 0x93828699  lbu         $v0, -0x7967($gp)
    ctx->pc = 0x48e150u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936217)));
    // 0x48e154: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x48E154u;
    {
        const bool branch_taken_0x48e154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E154u;
        // 0x48e158: 0x93828698  lbu         $v0, -0x7968($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e154) {
            ctx->pc = 0x48E16Cu;
            goto label_48e16c;
        }
    }
    ctx->pc = 0x48E15Cu;
    // 0x48e15c: 0xc10f6ea  jal         func_43DBA8
    ctx->pc = 0x48E15Cu;
    SET_GPR_U32(ctx, 31, 0x48E164u);
    ctx->pc = 0x48E160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E15Cu;
    // 0x48e160: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43DBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43DBA8u, 0x48E15Cu, 0x48E164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E164u;
label_48e164:
    // 0x48e164: 0xa3808699  sb          $zero, -0x7967($gp)
    ctx->pc = 0x48e164u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936217), (uint8_t)GPR_U32(ctx, 0));
    // 0x48e168: 0x93828698  lbu         $v0, -0x7968($gp)
    ctx->pc = 0x48e168u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936216)));
label_48e16c:
    // 0x48e16c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x48E16Cu;
    {
        const bool branch_taken_0x48e16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E16Cu;
        // 0x48e170: 0x8f858694  lw          $a1, -0x796C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e16c) {
            ctx->pc = 0x48E184u;
            goto label_48e184;
        }
    }
    ctx->pc = 0x48E174u;
    // 0x48e174: 0xc10f6b6  jal         func_43DAD8
    ctx->pc = 0x48E174u;
    SET_GPR_U32(ctx, 31, 0x48E17Cu);
    ctx->pc = 0x48E178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E174u;
    // 0x48e178: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43DAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43DAD8u, 0x48E174u, 0x48E17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E17Cu;
label_48e17c:
    // 0x48e17c: 0xa3808698  sb          $zero, -0x7968($gp)
    ctx->pc = 0x48e17cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936216), (uint8_t)GPR_U32(ctx, 0));
    // 0x48e180: 0x8f858694  lw          $a1, -0x796C($gp)
    ctx->pc = 0x48e180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936212)));
label_48e184:
    // 0x48e184: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x48e184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48e188: 0xc10f374  jal         func_43CDD0
    ctx->pc = 0x48E188u;
    SET_GPR_U32(ctx, 31, 0x48E190u);
    ctx->pc = 0x48E18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E188u;
    // 0x48e18c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CDD0u, 0x48E188u, 0x48E190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E190u;
label_48e190:
    // 0x48e190: 0x8f858690  lw          $a1, -0x7970($gp)
    ctx->pc = 0x48e190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936208)));
    // 0x48e194: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x48e194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48e198: 0xc10f374  jal         func_43CDD0
    ctx->pc = 0x48E198u;
    SET_GPR_U32(ctx, 31, 0x48E1A0u);
    ctx->pc = 0x48E19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E198u;
    // 0x48e19c: 0xaf908694  sw          $s0, -0x796C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936212), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CDD0u, 0x48E198u, 0x48E1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E1A0u;
label_48e1a0:
    // 0x48e1a0: 0x8f85868c  lw          $a1, -0x7974($gp)
    ctx->pc = 0x48e1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936204)));
    // 0x48e1a4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x48e1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48e1a8: 0xc10f368  jal         func_43CDA0
    ctx->pc = 0x48E1A8u;
    SET_GPR_U32(ctx, 31, 0x48E1B0u);
    ctx->pc = 0x48E1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E1A8u;
    // 0x48e1ac: 0xaf908690  sw          $s0, -0x7970($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936208), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43CDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CDA0u, 0x48E1A8u, 0x48E1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E1B0u;
label_48e1b0:
    // 0x48e1b0: 0xaf90868c  sw          $s0, -0x7974($gp)
    ctx->pc = 0x48e1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936204), GPR_U32(ctx, 16));
    // 0x48e1b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x48e1b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48e1b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48e1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x48E1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48E1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E1BCu;
        // 0x48e1c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E1C4u;
    // 0x48e1c4: 0x0  nop
    ctx->pc = 0x48e1c4u;
    // NOP
    ctx->pc = 0x48e1c8u;
}
