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

// Function: sub_003DEEF8
// Address: 0x3deef8 - 0x3df038
void sub_003DEEF8_0x3deef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DEEF8_0x3deef8");
#endif

    switch (ctx->pc) {
        case 0x3deef8u: goto label_3deef8;
        case 0x3deefcu: goto label_3deefc;
        case 0x3def00u: goto label_3def00;
        case 0x3def04u: goto label_3def04;
        case 0x3def08u: goto label_3def08;
        case 0x3def0cu: goto label_3def0c;
        case 0x3def10u: goto label_3def10;
        case 0x3def14u: goto label_3def14;
        case 0x3def18u: goto label_3def18;
        case 0x3def1cu: goto label_3def1c;
        case 0x3def20u: goto label_3def20;
        case 0x3def24u: goto label_3def24;
        case 0x3def28u: goto label_3def28;
        case 0x3def2cu: goto label_3def2c;
        case 0x3def30u: goto label_3def30;
        case 0x3def34u: goto label_3def34;
        case 0x3def38u: goto label_3def38;
        case 0x3def3cu: goto label_3def3c;
        case 0x3def40u: goto label_3def40;
        case 0x3def44u: goto label_3def44;
        case 0x3def48u: goto label_3def48;
        case 0x3def4cu: goto label_3def4c;
        case 0x3def50u: goto label_3def50;
        case 0x3def54u: goto label_3def54;
        case 0x3def58u: goto label_3def58;
        case 0x3def5cu: goto label_3def5c;
        case 0x3def60u: goto label_3def60;
        case 0x3def64u: goto label_3def64;
        case 0x3def68u: goto label_3def68;
        case 0x3def6cu: goto label_3def6c;
        case 0x3def70u: goto label_3def70;
        case 0x3def74u: goto label_3def74;
        case 0x3def78u: goto label_3def78;
        case 0x3def7cu: goto label_3def7c;
        case 0x3def80u: goto label_3def80;
        case 0x3def84u: goto label_3def84;
        case 0x3def88u: goto label_3def88;
        case 0x3def8cu: goto label_3def8c;
        case 0x3def90u: goto label_3def90;
        case 0x3def94u: goto label_3def94;
        case 0x3def98u: goto label_3def98;
        case 0x3def9cu: goto label_3def9c;
        case 0x3defa0u: goto label_3defa0;
        case 0x3defa4u: goto label_3defa4;
        case 0x3defa8u: goto label_3defa8;
        case 0x3defacu: goto label_3defac;
        case 0x3defb0u: goto label_3defb0;
        case 0x3defb4u: goto label_3defb4;
        case 0x3defb8u: goto label_3defb8;
        case 0x3defbcu: goto label_3defbc;
        case 0x3defc0u: goto label_3defc0;
        case 0x3defc4u: goto label_3defc4;
        case 0x3defc8u: goto label_3defc8;
        case 0x3defccu: goto label_3defcc;
        case 0x3defd0u: goto label_3defd0;
        case 0x3defd4u: goto label_3defd4;
        case 0x3defd8u: goto label_3defd8;
        case 0x3defdcu: goto label_3defdc;
        case 0x3defe0u: goto label_3defe0;
        case 0x3defe4u: goto label_3defe4;
        case 0x3defe8u: goto label_3defe8;
        case 0x3defecu: goto label_3defec;
        case 0x3deff0u: goto label_3deff0;
        case 0x3deff4u: goto label_3deff4;
        case 0x3deff8u: goto label_3deff8;
        case 0x3deffcu: goto label_3deffc;
        case 0x3df000u: goto label_3df000;
        case 0x3df004u: goto label_3df004;
        case 0x3df008u: goto label_3df008;
        case 0x3df00cu: goto label_3df00c;
        case 0x3df010u: goto label_3df010;
        case 0x3df014u: goto label_3df014;
        case 0x3df018u: goto label_3df018;
        case 0x3df01cu: goto label_3df01c;
        case 0x3df020u: goto label_3df020;
        case 0x3df024u: goto label_3df024;
        case 0x3df028u: goto label_3df028;
        case 0x3df02cu: goto label_3df02c;
        case 0x3df030u: goto label_3df030;
        case 0x3df034u: goto label_3df034;
        default: break;
    }

    ctx->pc = 0x3deef8u;

label_3deef8:
    // 0x3deef8: 0x27bdfb80  addiu       $sp, $sp, -0x480
    ctx->pc = 0x3deef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966144));
label_3deefc:
    // 0x3deefc: 0x7fb00470  sq          $s0, 0x470($sp)
    ctx->pc = 0x3deefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 16));
label_3def00:
    // 0x3def00: 0x7fb10460  sq          $s1, 0x460($sp)
    ctx->pc = 0x3def00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 17));
label_3def04:
    // 0x3def04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3def04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3def08:
    // 0x3def08: 0x7fb20450  sq          $s2, 0x450($sp)
    ctx->pc = 0x3def08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 18));
label_3def0c:
    // 0x3def0c: 0xffbf0440  sd          $ra, 0x440($sp)
    ctx->pc = 0x3def0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 31));
label_3def10:
    // 0x3def10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3def10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3def14:
    // 0x3def14: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3def14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3def18:
    // 0x3def18: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3def18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3def1c:
    // 0x3def1c: 0x40f809  jalr        $v0
label_3def20:
    if (ctx->pc == 0x3DEF20u) {
        ctx->pc = 0x3DEF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEF1Cu;
        // 0x3def20: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEF24u;
        goto label_3def24;
    }
    ctx->pc = 0x3DEF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DEF24u);
        ctx->pc = 0x3DEF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEF1Cu;
        // 0x3def20: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DEF1Cu, 0x3DEF24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DEF24u;
label_3def24:
    // 0x3def24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3def24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3def28:
    // 0x3def28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3def28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3def2c:
    // 0x3def2c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3def2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3def30:
    // 0x3def30: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3def30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3def34:
    // 0x3def34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3def34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3def38:
    // 0x3def38: 0x0  nop
    ctx->pc = 0x3def38u;
    // NOP
label_3def3c:
    // 0x3def3c: 0x0  nop
    ctx->pc = 0x3def3cu;
    // NOP
label_3def40:
    // 0x3def40: 0x0  nop
    ctx->pc = 0x3def40u;
    // NOP
label_3def44:
    // 0x3def44: 0x0  nop
    ctx->pc = 0x3def44u;
    // NOP
label_3def48:
    // 0x3def48: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3def4c:
    if (ctx->pc == 0x3DEF4Cu) {
        ctx->pc = 0x3DEF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEF48u;
        // 0x3def4c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEF50u;
        goto label_3def50;
    }
    ctx->pc = 0x3DEF48u;
    {
        const bool branch_taken_0x3def48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3DEF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEF48u;
        // 0x3def4c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3def48) {
            ctx->pc = 0x3DEF38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3def38;
        }
    }
    ctx->pc = 0x3DEF50u;
label_3def50:
    // 0x3def50: 0xc138ddc  jal         func_4E3770
label_3def54:
    if (ctx->pc == 0x3DEF54u) {
        ctx->pc = 0x3DEF58u;
        goto label_3def58;
    }
    ctx->pc = 0x3DEF50u;
    SET_GPR_U32(ctx, 31, 0x3DEF58u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3DEF50u, 0x3DEF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEF58u;
label_3def58:
    // 0x3def58: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3def58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3def5c:
    // 0x3def5c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x3def5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_3def60:
    // 0x3def60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3def60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3def64:
    // 0x3def64: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_3def68:
    if (ctx->pc == 0x3DEF68u) {
        ctx->pc = 0x3DEF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEF64u;
        // 0x3def68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEF6Cu;
        goto label_3def6c;
    }
    ctx->pc = 0x3DEF64u;
    {
        const bool branch_taken_0x3def64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DEF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEF64u;
        // 0x3def68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3def64) {
            ctx->pc = 0x3DF020u;
            goto label_3df020;
        }
    }
    ctx->pc = 0x3DEF6Cu;
label_3def6c:
    // 0x3def6c: 0xc0e9694  jal         func_3A5A50
label_3def70:
    if (ctx->pc == 0x3DEF70u) {
        ctx->pc = 0x3DEF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEF6Cu;
        // 0x3def70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEF74u;
        goto label_3def74;
    }
    ctx->pc = 0x3DEF6Cu;
    SET_GPR_U32(ctx, 31, 0x3DEF74u);
    ctx->pc = 0x3DEF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEF6Cu;
    // 0x3def70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3DEF6Cu, 0x3DEF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEF74u;
label_3def74:
    // 0x3def74: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3def78:
    if (ctx->pc == 0x3DEF78u) {
        ctx->pc = 0x3DEF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEF74u;
        // 0x3def78: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEF7Cu;
        goto label_3def7c;
    }
    ctx->pc = 0x3DEF74u;
    {
        const bool branch_taken_0x3def74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3def74) {
            ctx->pc = 0x3DEF78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DEF74u;
            // 0x3def78: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DEF84u;
            goto label_3def84;
        }
    }
    ctx->pc = 0x3DEF7Cu;
label_3def7c:
    // 0x3def7c: 0x10000028  b           . + 4 + (0x28 << 2)
label_3def80:
    if (ctx->pc == 0x3DEF80u) {
        ctx->pc = 0x3DEF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEF7Cu;
        // 0x3def80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEF84u;
        goto label_3def84;
    }
    ctx->pc = 0x3DEF7Cu;
    {
        const bool branch_taken_0x3def7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEF7Cu;
        // 0x3def80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3def7c) {
            ctx->pc = 0x3DF020u;
            goto label_3df020;
        }
    }
    ctx->pc = 0x3DEF84u;
label_3def84:
    // 0x3def84: 0x2842000f  slti        $v0, $v0, 0xF
    ctx->pc = 0x3def84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
label_3def88:
    // 0x3def88: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_3def8c:
    if (ctx->pc == 0x3DEF8Cu) {
        ctx->pc = 0x3DEF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEF88u;
        // 0x3def8c: 0x26120030  addiu       $s2, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEF90u;
        goto label_3def90;
    }
    ctx->pc = 0x3DEF88u;
    {
        const bool branch_taken_0x3def88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DEF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEF88u;
        // 0x3def8c: 0x26120030  addiu       $s2, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3def88) {
            ctx->pc = 0x3DEFE8u;
            goto label_3defe8;
        }
    }
    ctx->pc = 0x3DEF90u;
label_3def90:
    // 0x3def90: 0x3c01bf47  lui         $at, 0xBF47
    ctx->pc = 0x3def90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48967 << 16));
label_3def94:
    // 0x3def94: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x3def94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
label_3def98:
    // 0x3def98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3def98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3def9c:
    // 0x3def9c: 0x27a20430  addiu       $v0, $sp, 0x430
    ctx->pc = 0x3def9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3defa0:
    // 0x3defa0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3defa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3defa4:
    // 0x3defa4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3defa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3defa8:
    // 0x3defa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3defa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3defac:
    // 0x3defac: 0xafa00430  sw          $zero, 0x430($sp)
    ctx->pc = 0x3defacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 0));
label_3defb0:
    // 0x3defb0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3defb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3defb4:
    // 0x3defb4: 0xafa00434  sw          $zero, 0x434($sp)
    ctx->pc = 0x3defb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1076), GPR_U32(ctx, 0));
label_3defb8:
    // 0x3defb8: 0x27a60420  addiu       $a2, $sp, 0x420
    ctx->pc = 0x3defb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3defbc:
    // 0x3defbc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x3defbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_3defc0:
    // 0x3defc0: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x3defc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_3defc4:
    // 0x3defc4: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x3defc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_3defc8:
    // 0x3defc8: 0x7ba30430  lq          $v1, 0x430($sp)
    ctx->pc = 0x3defc8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3defcc:
    // 0x3defcc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3defccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3defd0:
    // 0x3defd0: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x3defd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
label_3defd4:
    // 0x3defd4: 0xc136b18  jal         func_4DAC60
label_3defd8:
    if (ctx->pc == 0x3DEFD8u) {
        ctx->pc = 0x3DEFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEFD4u;
        // 0x3defd8: 0x7fa30420  sq          $v1, 0x420($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEFDCu;
        goto label_3defdc;
    }
    ctx->pc = 0x3DEFD4u;
    SET_GPR_U32(ctx, 31, 0x3DEFDCu);
    ctx->pc = 0x3DEFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEFD4u;
    // 0x3defd8: 0x7fa30420  sq          $v1, 0x420($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3DEFD4u, 0x3DEFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEFDCu;
label_3defdc:
    // 0x3defdc: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3defdcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3defe0:
    // 0x3defe0: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x3defe0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_3defe4:
    // 0x3defe4: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3defe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3defe8:
    // 0x3defe8: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x3defe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_3defec:
    // 0x3defec: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3defecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3deff0:
    // 0x3deff0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3deff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3deff4:
    // 0x3deff4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3deff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3deff8:
    // 0x3deff8: 0xc136b24  jal         func_4DAC90
label_3deffc:
    if (ctx->pc == 0x3DEFFCu) {
        ctx->pc = 0x3DEFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEFF8u;
        // 0x3deffc: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF000u;
        goto label_3df000;
    }
    ctx->pc = 0x3DEFF8u;
    SET_GPR_U32(ctx, 31, 0x3DF000u);
    ctx->pc = 0x3DEFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEFF8u;
    // 0x3deffc: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3DEFF8u, 0x3DF000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF000u;
label_3df000:
    // 0x3df000: 0x7ba30420  lq          $v1, 0x420($sp)
    ctx->pc = 0x3df000u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3df004:
    // 0x3df004: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3df004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3df008:
    // 0x3df008: 0x9605006e  lhu         $a1, 0x6E($s0)
    ctx->pc = 0x3df008u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 110)));
label_3df00c:
    // 0x3df00c: 0x7e030030  sq          $v1, 0x30($s0)
    ctx->pc = 0x3df00cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
label_3df010:
    // 0x3df010: 0x7fa30410  sq          $v1, 0x410($sp)
    ctx->pc = 0x3df010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
label_3df014:
    // 0x3df014: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3df014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3df018:
    // 0x3df018: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3df018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3df01c:
    // 0x3df01c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x3df01cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_3df020:
    // 0x3df020: 0x7bb00470  lq          $s0, 0x470($sp)
    ctx->pc = 0x3df020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3df024:
    // 0x3df024: 0x7bb10460  lq          $s1, 0x460($sp)
    ctx->pc = 0x3df024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3df028:
    // 0x3df028: 0x7bb20450  lq          $s2, 0x450($sp)
    ctx->pc = 0x3df028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3df02c:
    // 0x3df02c: 0xdfbf0440  ld          $ra, 0x440($sp)
    ctx->pc = 0x3df02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
label_3df030:
    // 0x3df030: 0x3e00008  jr          $ra
label_3df034:
    if (ctx->pc == 0x3DF034u) {
        ctx->pc = 0x3DF034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF030u;
        // 0x3df034: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF038u;
        goto label_fallthrough_0x3df030;
    }
    ctx->pc = 0x3DF030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF030u;
        // 0x3df034: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3df030:
    ctx->pc = 0x3DF038u;
}
