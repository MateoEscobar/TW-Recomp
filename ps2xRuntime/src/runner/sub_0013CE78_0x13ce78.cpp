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

// Function: sub_0013CE78
// Address: 0x13ce78 - 0x13cf20
void sub_0013CE78_0x13ce78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CE78_0x13ce78");
#endif

    switch (ctx->pc) {
        case 0x13ce78u: goto label_13ce78;
        case 0x13ce7cu: goto label_13ce7c;
        case 0x13ce80u: goto label_13ce80;
        case 0x13ce84u: goto label_13ce84;
        case 0x13ce88u: goto label_13ce88;
        case 0x13ce8cu: goto label_13ce8c;
        case 0x13ce90u: goto label_13ce90;
        case 0x13ce94u: goto label_13ce94;
        case 0x13ce98u: goto label_13ce98;
        case 0x13ce9cu: goto label_13ce9c;
        case 0x13cea0u: goto label_13cea0;
        case 0x13cea4u: goto label_13cea4;
        case 0x13cea8u: goto label_13cea8;
        case 0x13ceacu: goto label_13ceac;
        case 0x13ceb0u: goto label_13ceb0;
        case 0x13ceb4u: goto label_13ceb4;
        case 0x13ceb8u: goto label_13ceb8;
        case 0x13cebcu: goto label_13cebc;
        case 0x13cec0u: goto label_13cec0;
        case 0x13cec4u: goto label_13cec4;
        case 0x13cec8u: goto label_13cec8;
        case 0x13ceccu: goto label_13cecc;
        case 0x13ced0u: goto label_13ced0;
        case 0x13ced4u: goto label_13ced4;
        case 0x13ced8u: goto label_13ced8;
        case 0x13cedcu: goto label_13cedc;
        case 0x13cee0u: goto label_13cee0;
        case 0x13cee4u: goto label_13cee4;
        case 0x13cee8u: goto label_13cee8;
        case 0x13ceecu: goto label_13ceec;
        case 0x13cef0u: goto label_13cef0;
        case 0x13cef4u: goto label_13cef4;
        case 0x13cef8u: goto label_13cef8;
        case 0x13cefcu: goto label_13cefc;
        case 0x13cf00u: goto label_13cf00;
        case 0x13cf04u: goto label_13cf04;
        case 0x13cf08u: goto label_13cf08;
        case 0x13cf0cu: goto label_13cf0c;
        case 0x13cf10u: goto label_13cf10;
        case 0x13cf14u: goto label_13cf14;
        case 0x13cf18u: goto label_13cf18;
        case 0x13cf1cu: goto label_13cf1c;
        default: break;
    }

    ctx->pc = 0x13ce78u;

label_13ce78:
    // 0x13ce78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13ce78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13ce7c:
    // 0x13ce7c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x13ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_13ce80:
    // 0x13ce80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13ce80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13ce84:
    // 0x13ce84: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13ce84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_13ce88:
    // 0x13ce88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13ce88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13ce8c:
    // 0x13ce8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13ce8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13ce90:
    // 0x13ce90: 0x8c4347c4  lw          $v1, 0x47C4($v0)
    ctx->pc = 0x13ce90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
label_13ce94:
    // 0x13ce94: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x13ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_13ce98:
    // 0x13ce98: 0xc048622  jal         func_121888
label_13ce9c:
    if (ctx->pc == 0x13CE9Cu) {
        ctx->pc = 0x13CE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE98u;
        // 0x13ce9c: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CEA0u;
        goto label_13cea0;
    }
    ctx->pc = 0x13CE98u;
    SET_GPR_U32(ctx, 31, 0x13CEA0u);
    ctx->pc = 0x13CE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CE98u;
    // 0x13ce9c: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121888u, 0x13CE98u, 0x13CEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CEA0u;
label_13cea0:
    // 0x13cea0: 0xc04f164  jal         func_13C590
label_13cea4:
    if (ctx->pc == 0x13CEA4u) {
        ctx->pc = 0x13CEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CEA0u;
        // 0x13cea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CEA8u;
        goto label_13cea8;
    }
    ctx->pc = 0x13CEA0u;
    SET_GPR_U32(ctx, 31, 0x13CEA8u);
    ctx->pc = 0x13CEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CEA0u;
    // 0x13cea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C590u, 0x13CEA0u, 0x13CEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CEA8u;
label_13cea8:
    // 0x13cea8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13cea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13ceac:
    // 0x13ceac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13ceacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13ceb0:
    // 0x13ceb0: 0xc04edee  jal         func_13B7B8
label_13ceb4:
    if (ctx->pc == 0x13CEB4u) {
        ctx->pc = 0x13CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CEB0u;
        // 0x13ceb4: 0xa22203e7  sb          $v0, 0x3E7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 999), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CEB8u;
        goto label_13ceb8;
    }
    ctx->pc = 0x13CEB0u;
    SET_GPR_U32(ctx, 31, 0x13CEB8u);
    ctx->pc = 0x13CEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CEB0u;
    // 0x13ceb4: 0xa22203e7  sb          $v0, 0x3E7($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 999), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B7B8u, 0x13CEB0u, 0x13CEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CEB8u;
label_13ceb8:
    // 0x13ceb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13ceb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13cebc:
    // 0x13cebc: 0xc04f3c8  jal         func_13CF20
label_13cec0:
    if (ctx->pc == 0x13CEC0u) {
        ctx->pc = 0x13CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CEBCu;
        // 0x13cec0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CEC4u;
        goto label_13cec4;
    }
    ctx->pc = 0x13CEBCu;
    SET_GPR_U32(ctx, 31, 0x13CEC4u);
    ctx->pc = 0x13CEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CEBCu;
    // 0x13cec0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CF20u, 0x13CEBCu, 0x13CEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CEC4u;
label_13cec4:
    // 0x13cec4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13cec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13cec8:
    // 0x13cec8: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x13cec8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_13cecc:
    // 0x13cecc: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x13ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_13ced0:
    // 0x13ced0: 0x40f809  jalr        $v0
label_13ced4:
    if (ctx->pc == 0x13CED4u) {
        ctx->pc = 0x13CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CED0u;
        // 0x13ced4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CED8u;
        goto label_13ced8;
    }
    ctx->pc = 0x13CED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13CED8u);
        ctx->pc = 0x13CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CED0u;
        // 0x13ced4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CED0u, 0x13CED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13CED8u;
label_13ced8:
    // 0x13ced8: 0xc047e6c  jal         func_11F9B0
label_13cedc:
    if (ctx->pc == 0x13CEDCu) {
        ctx->pc = 0x13CEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CED8u;
        // 0x13cedc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CEE0u;
        goto label_13cee0;
    }
    ctx->pc = 0x13CED8u;
    SET_GPR_U32(ctx, 31, 0x13CEE0u);
    ctx->pc = 0x13CEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CED8u;
    // 0x13cedc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x13CED8u, 0x13CEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CEE0u;
label_13cee0:
    // 0x13cee0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_13cee4:
    if (ctx->pc == 0x13CEE4u) {
        ctx->pc = 0x13CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CEE0u;
        // 0x13cee4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CEE8u;
        goto label_13cee8;
    }
    ctx->pc = 0x13CEE0u;
    {
        const bool branch_taken_0x13cee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CEE0u;
        // 0x13cee4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cee0) {
            ctx->pc = 0x13CF0Cu;
            goto label_13cf0c;
        }
    }
    ctx->pc = 0x13CEE8u;
label_13cee8:
    // 0x13cee8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x13cee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13ceec:
    // 0x13ceec: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x13ceecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_13cef0:
    // 0x13cef0: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x13cef0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_13cef4:
    // 0x13cef4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13cef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13cef8:
    // 0x13cef8: 0x84440130  lh          $a0, 0x130($v0)
    ctx->pc = 0x13cef8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 304)));
label_13cefc:
    // 0x13cefc: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x13cefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_13cf00:
    // 0x13cf00: 0x60f809  jalr        $v1
label_13cf04:
    if (ctx->pc == 0x13CF04u) {
        ctx->pc = 0x13CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF00u;
        // 0x13cf04: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CF08u;
        goto label_13cf08;
    }
    ctx->pc = 0x13CF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13CF08u);
        ctx->pc = 0x13CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF00u;
        // 0x13cf04: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CF00u, 0x13CF08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13CF08u;
label_13cf08:
    // 0x13cf08: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13cf08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13cf0c:
    // 0x13cf0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13cf0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13cf10:
    // 0x13cf10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13cf10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13cf14:
    // 0x13cf14: 0x3e00008  jr          $ra
label_13cf18:
    if (ctx->pc == 0x13CF18u) {
        ctx->pc = 0x13CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF14u;
        // 0x13cf18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CF1Cu;
        goto label_13cf1c;
    }
    ctx->pc = 0x13CF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF14u;
        // 0x13cf18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CF1Cu;
label_13cf1c:
    // 0x13cf1c: 0x0  nop
    ctx->pc = 0x13cf1cu;
    // NOP
    ctx->pc = 0x13cf20u;
}
