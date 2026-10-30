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

// Function: sub_0024CE40
// Address: 0x24ce40 - 0x24cef0
void sub_0024CE40_0x24ce40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CE40_0x24ce40");
#endif

    switch (ctx->pc) {
        case 0x24ce40u: goto label_24ce40;
        case 0x24ce44u: goto label_24ce44;
        case 0x24ce48u: goto label_24ce48;
        case 0x24ce4cu: goto label_24ce4c;
        case 0x24ce50u: goto label_24ce50;
        case 0x24ce54u: goto label_24ce54;
        case 0x24ce58u: goto label_24ce58;
        case 0x24ce5cu: goto label_24ce5c;
        case 0x24ce60u: goto label_24ce60;
        case 0x24ce64u: goto label_24ce64;
        case 0x24ce68u: goto label_24ce68;
        case 0x24ce6cu: goto label_24ce6c;
        case 0x24ce70u: goto label_24ce70;
        case 0x24ce74u: goto label_24ce74;
        case 0x24ce78u: goto label_24ce78;
        case 0x24ce7cu: goto label_24ce7c;
        case 0x24ce80u: goto label_24ce80;
        case 0x24ce84u: goto label_24ce84;
        case 0x24ce88u: goto label_24ce88;
        case 0x24ce8cu: goto label_24ce8c;
        case 0x24ce90u: goto label_24ce90;
        case 0x24ce94u: goto label_24ce94;
        case 0x24ce98u: goto label_24ce98;
        case 0x24ce9cu: goto label_24ce9c;
        case 0x24cea0u: goto label_24cea0;
        case 0x24cea4u: goto label_24cea4;
        case 0x24cea8u: goto label_24cea8;
        case 0x24ceacu: goto label_24ceac;
        case 0x24ceb0u: goto label_24ceb0;
        case 0x24ceb4u: goto label_24ceb4;
        case 0x24ceb8u: goto label_24ceb8;
        case 0x24cebcu: goto label_24cebc;
        case 0x24cec0u: goto label_24cec0;
        case 0x24cec4u: goto label_24cec4;
        case 0x24cec8u: goto label_24cec8;
        case 0x24ceccu: goto label_24cecc;
        case 0x24ced0u: goto label_24ced0;
        case 0x24ced4u: goto label_24ced4;
        case 0x24ced8u: goto label_24ced8;
        case 0x24cedcu: goto label_24cedc;
        case 0x24cee0u: goto label_24cee0;
        case 0x24cee4u: goto label_24cee4;
        case 0x24cee8u: goto label_24cee8;
        case 0x24ceecu: goto label_24ceec;
        default: break;
    }

    ctx->pc = 0x24ce40u;

label_24ce40:
    // 0x24ce40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24ce40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_24ce44:
    // 0x24ce44: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x24ce44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_24ce48:
    // 0x24ce48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24ce48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_24ce4c:
    // 0x24ce4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24ce4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24ce50:
    // 0x24ce50: 0xc088e78  jal         func_2239E0
label_24ce54:
    if (ctx->pc == 0x24CE54u) {
        ctx->pc = 0x24CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE50u;
        // 0x24ce54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CE58u;
        goto label_24ce58;
    }
    ctx->pc = 0x24CE50u;
    SET_GPR_U32(ctx, 31, 0x24CE58u);
    ctx->pc = 0x24CE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CE50u;
    // 0x24ce54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239E0u, 0x24CE50u, 0x24CE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CE58u;
label_24ce58:
    // 0x24ce58: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_24ce5c:
    if (ctx->pc == 0x24CE5Cu) {
        ctx->pc = 0x24CE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE58u;
        // 0x24ce5c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CE60u;
        goto label_24ce60;
    }
    ctx->pc = 0x24CE58u;
    {
        const bool branch_taken_0x24ce58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE58u;
        // 0x24ce5c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce58) {
            ctx->pc = 0x24CE80u;
            goto label_24ce80;
        }
    }
    ctx->pc = 0x24CE60u;
label_24ce60:
    // 0x24ce60: 0xc08c68e  jal         func_231A38
label_24ce64:
    if (ctx->pc == 0x24CE64u) {
        ctx->pc = 0x24CE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE60u;
        // 0x24ce64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CE68u;
        goto label_24ce68;
    }
    ctx->pc = 0x24CE60u;
    SET_GPR_U32(ctx, 31, 0x24CE68u);
    ctx->pc = 0x24CE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CE60u;
    // 0x24ce64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A38u, 0x24CE60u, 0x24CE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CE68u;
label_24ce68:
    // 0x24ce68: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x24ce68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_24ce6c:
    // 0x24ce6c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_24ce70:
    if (ctx->pc == 0x24CE70u) {
        ctx->pc = 0x24CE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE6Cu;
        // 0x24ce70: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CE74u;
        goto label_24ce74;
    }
    ctx->pc = 0x24CE6Cu;
    {
        const bool branch_taken_0x24ce6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x24CE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE6Cu;
        // 0x24ce70: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce6c) {
            ctx->pc = 0x24CE80u;
            goto label_24ce80;
        }
    }
    ctx->pc = 0x24CE74u;
label_24ce74:
    // 0x24ce74: 0xc095fce  jal         func_257F38
label_24ce78:
    if (ctx->pc == 0x24CE78u) {
        ctx->pc = 0x24CE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE74u;
        // 0x24ce78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CE7Cu;
        goto label_24ce7c;
    }
    ctx->pc = 0x24CE74u;
    SET_GPR_U32(ctx, 31, 0x24CE7Cu);
    ctx->pc = 0x24CE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CE74u;
    // 0x24ce78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x24CE74u, 0x24CE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CE7Cu;
label_24ce7c:
    // 0x24ce7c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x24ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_24ce80:
    // 0x24ce80: 0x8e030348  lw          $v1, 0x348($s0)
    ctx->pc = 0x24ce80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 840)));
label_24ce84:
    // 0x24ce84: 0x8c44bd30  lw          $a0, -0x42D0($v0)
    ctx->pc = 0x24ce84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_24ce88:
    // 0x24ce88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24ce88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24ce8c:
    // 0x24ce8c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_24ce90:
    if (ctx->pc == 0x24CE90u) {
        ctx->pc = 0x24CE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE8Cu;
        // 0x24ce90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CE94u;
        goto label_24ce94;
    }
    ctx->pc = 0x24CE8Cu;
    {
        const bool branch_taken_0x24ce8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x24CE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE8Cu;
        // 0x24ce90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce8c) {
            ctx->pc = 0x24CEA0u;
            goto label_24cea0;
        }
    }
    ctx->pc = 0x24CE94u;
label_24ce94:
    // 0x24ce94: 0x8e02034c  lw          $v0, 0x34C($s0)
    ctx->pc = 0x24ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 844)));
label_24ce98:
    // 0x24ce98: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
label_24ce9c:
    if (ctx->pc == 0x24CE9Cu) {
        ctx->pc = 0x24CEA0u;
        goto label_24cea0;
    }
    ctx->pc = 0x24CE98u;
    {
        const bool branch_taken_0x24ce98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x24ce98) {
            ctx->pc = 0x24CEA4u;
            goto label_24cea4;
        }
    }
    ctx->pc = 0x24CEA0u;
label_24cea0:
    // 0x24cea0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24cea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24cea4:
    // 0x24cea4: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_24cea8:
    if (ctx->pc == 0x24CEA8u) {
        ctx->pc = 0x24CEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CEA4u;
        // 0x24cea8: 0x8e22bd30  lw          $v0, -0x42D0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CEACu;
        goto label_24ceac;
    }
    ctx->pc = 0x24CEA4u;
    {
        const bool branch_taken_0x24cea4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CEA4u;
        // 0x24cea8: 0x8e22bd30  lw          $v0, -0x42D0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cea4) {
            ctx->pc = 0x24CEDCu;
            goto label_24cedc;
        }
    }
    ctx->pc = 0x24CEACu;
label_24ceac:
    // 0x24ceac: 0x26040348  addiu       $a0, $s0, 0x348
    ctx->pc = 0x24ceacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 840));
label_24ceb0:
    // 0x24ceb0: 0xc0e4060  jal         func_390180
label_24ceb4:
    if (ctx->pc == 0x24CEB4u) {
        ctx->pc = 0x24CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CEB0u;
        // 0x24ceb4: 0xae02034c  sw          $v0, 0x34C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CEB8u;
        goto label_24ceb8;
    }
    ctx->pc = 0x24CEB0u;
    SET_GPR_U32(ctx, 31, 0x24CEB8u);
    ctx->pc = 0x24CEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CEB0u;
    // 0x24ceb4: 0xae02034c  sw          $v0, 0x34C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 844), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x24CEB0u, 0x24CEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CEB8u;
label_24ceb8:
    // 0x24ceb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24ceb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24cebc:
    // 0x24cebc: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_24cec0:
    if (ctx->pc == 0x24CEC0u) {
        ctx->pc = 0x24CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CEBCu;
        // 0x24cec0: 0x8e22bd30  lw          $v0, -0x42D0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CEC4u;
        goto label_24cec4;
    }
    ctx->pc = 0x24CEBCu;
    {
        const bool branch_taken_0x24cebc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CEBCu;
        // 0x24cec0: 0x8e22bd30  lw          $v0, -0x42D0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cebc) {
            ctx->pc = 0x24CEDCu;
            goto label_24cedc;
        }
    }
    ctx->pc = 0x24CEC4u;
label_24cec4:
    // 0x24cec4: 0xae020348  sw          $v0, 0x348($s0)
    ctx->pc = 0x24cec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 840), GPR_U32(ctx, 2));
label_24cec8:
    // 0x24cec8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x24cec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_24cecc:
    // 0x24cecc: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x24ceccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_24ced0:
    // 0x24ced0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x24ced0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_24ced4:
    // 0x24ced4: 0x40f809  jalr        $v0
label_24ced8:
    if (ctx->pc == 0x24CED8u) {
        ctx->pc = 0x24CED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CED4u;
        // 0x24ced8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CEDCu;
        goto label_24cedc;
    }
    ctx->pc = 0x24CED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24CEDCu);
        ctx->pc = 0x24CED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CED4u;
        // 0x24ced8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CED4u, 0x24CEDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24CEDCu;
label_24cedc:
    // 0x24cedc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x24cedcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24cee0:
    // 0x24cee0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24cee0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24cee4:
    // 0x24cee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24cee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24cee8:
    // 0x24cee8: 0x3e00008  jr          $ra
label_24ceec:
    if (ctx->pc == 0x24CEECu) {
        ctx->pc = 0x24CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CEE8u;
        // 0x24ceec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CEF0u;
        goto label_fallthrough_0x24cee8;
    }
    ctx->pc = 0x24CEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CEE8u;
        // 0x24ceec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24cee8:
    ctx->pc = 0x24CEF0u;
}
