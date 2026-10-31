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

// Function: sub_0028CB98
// Address: 0x28cb98 - 0x28cca8
void sub_0028CB98_0x28cb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CB98_0x28cb98");
#endif

    switch (ctx->pc) {
        case 0x28cb98u: goto label_28cb98;
        case 0x28cb9cu: goto label_28cb9c;
        case 0x28cba0u: goto label_28cba0;
        case 0x28cba4u: goto label_28cba4;
        case 0x28cba8u: goto label_28cba8;
        case 0x28cbacu: goto label_28cbac;
        case 0x28cbb0u: goto label_28cbb0;
        case 0x28cbb4u: goto label_28cbb4;
        case 0x28cbb8u: goto label_28cbb8;
        case 0x28cbbcu: goto label_28cbbc;
        case 0x28cbc0u: goto label_28cbc0;
        case 0x28cbc4u: goto label_28cbc4;
        case 0x28cbc8u: goto label_28cbc8;
        case 0x28cbccu: goto label_28cbcc;
        case 0x28cbd0u: goto label_28cbd0;
        case 0x28cbd4u: goto label_28cbd4;
        case 0x28cbd8u: goto label_28cbd8;
        case 0x28cbdcu: goto label_28cbdc;
        case 0x28cbe0u: goto label_28cbe0;
        case 0x28cbe4u: goto label_28cbe4;
        case 0x28cbe8u: goto label_28cbe8;
        case 0x28cbecu: goto label_28cbec;
        case 0x28cbf0u: goto label_28cbf0;
        case 0x28cbf4u: goto label_28cbf4;
        case 0x28cbf8u: goto label_28cbf8;
        case 0x28cbfcu: goto label_28cbfc;
        case 0x28cc00u: goto label_28cc00;
        case 0x28cc04u: goto label_28cc04;
        case 0x28cc08u: goto label_28cc08;
        case 0x28cc0cu: goto label_28cc0c;
        case 0x28cc10u: goto label_28cc10;
        case 0x28cc14u: goto label_28cc14;
        case 0x28cc18u: goto label_28cc18;
        case 0x28cc1cu: goto label_28cc1c;
        case 0x28cc20u: goto label_28cc20;
        case 0x28cc24u: goto label_28cc24;
        case 0x28cc28u: goto label_28cc28;
        case 0x28cc2cu: goto label_28cc2c;
        case 0x28cc30u: goto label_28cc30;
        case 0x28cc34u: goto label_28cc34;
        case 0x28cc38u: goto label_28cc38;
        case 0x28cc3cu: goto label_28cc3c;
        case 0x28cc40u: goto label_28cc40;
        case 0x28cc44u: goto label_28cc44;
        case 0x28cc48u: goto label_28cc48;
        case 0x28cc4cu: goto label_28cc4c;
        case 0x28cc50u: goto label_28cc50;
        case 0x28cc54u: goto label_28cc54;
        case 0x28cc58u: goto label_28cc58;
        case 0x28cc5cu: goto label_28cc5c;
        case 0x28cc60u: goto label_28cc60;
        case 0x28cc64u: goto label_28cc64;
        case 0x28cc68u: goto label_28cc68;
        case 0x28cc6cu: goto label_28cc6c;
        case 0x28cc70u: goto label_28cc70;
        case 0x28cc74u: goto label_28cc74;
        case 0x28cc78u: goto label_28cc78;
        case 0x28cc7cu: goto label_28cc7c;
        case 0x28cc80u: goto label_28cc80;
        case 0x28cc84u: goto label_28cc84;
        case 0x28cc88u: goto label_28cc88;
        case 0x28cc8cu: goto label_28cc8c;
        case 0x28cc90u: goto label_28cc90;
        case 0x28cc94u: goto label_28cc94;
        case 0x28cc98u: goto label_28cc98;
        case 0x28cc9cu: goto label_28cc9c;
        case 0x28cca0u: goto label_28cca0;
        case 0x28cca4u: goto label_28cca4;
        default: break;
    }

    ctx->pc = 0x28cb98u;

label_28cb98:
    // 0x28cb98: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x28cb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_28cb9c:
    // 0x28cb9c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x28cb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_28cba0:
    // 0x28cba0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x28cba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_28cba4:
    // 0x28cba4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28cba4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28cba8:
    // 0x28cba8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28cba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_28cbac:
    // 0x28cbac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28cbacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28cbb0:
    // 0x28cbb0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x28cbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_28cbb4:
    // 0x28cbb4: 0x2414002d  addiu       $s4, $zero, 0x2D
    ctx->pc = 0x28cbb4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_28cbb8:
    // 0x28cbb8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x28cbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_28cbbc:
    // 0x28cbbc: 0x2415000f  addiu       $s5, $zero, 0xF
    ctx->pc = 0x28cbbcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_28cbc0:
    // 0x28cbc0: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x28cbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_28cbc4:
    // 0x28cbc4: 0x24160004  addiu       $s6, $zero, 0x4
    ctx->pc = 0x28cbc4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_28cbc8:
    // 0x28cbc8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x28cbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_28cbcc:
    // 0x28cbcc: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x28cbccu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_28cbd0:
    // 0x28cbd0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x28cbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_28cbd4:
    // 0x28cbd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28cbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28cbd8:
    // 0x28cbd8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28cbd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28cbdc:
    // 0x28cbdc: 0x0  nop
    ctx->pc = 0x28cbdcu;
    // NOP
label_28cbe0:
    // 0x28cbe0: 0xc137826  jal         func_4DE098
label_28cbe4:
    if (ctx->pc == 0x28CBE4u) {
        ctx->pc = 0x28CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CBE0u;
        // 0x28cbe4: 0x266401a4  addiu       $a0, $s3, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 420));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CBE8u;
        goto label_28cbe8;
    }
    ctx->pc = 0x28CBE0u;
    SET_GPR_U32(ctx, 31, 0x28CBE8u);
    ctx->pc = 0x28CBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CBE0u;
    // 0x28cbe4: 0x266401a4  addiu       $a0, $s3, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x28CBE0u, 0x28CBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CBE8u;
label_28cbe8:
    // 0x28cbe8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x28cbe8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_28cbec:
    // 0x28cbec: 0xc0e409a  jal         func_390268
label_28cbf0:
    if (ctx->pc == 0x28CBF0u) {
        ctx->pc = 0x28CBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CBECu;
        // 0x28cbf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CBF4u;
        goto label_28cbf4;
    }
    ctx->pc = 0x28CBECu;
    SET_GPR_U32(ctx, 31, 0x28CBF4u);
    ctx->pc = 0x28CBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CBECu;
    // 0x28cbf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x28CBECu, 0x28CBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CBF4u;
label_28cbf4:
    // 0x28cbf4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_28cbf8:
    if (ctx->pc == 0x28CBF8u) {
        ctx->pc = 0x28CBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CBF4u;
        // 0x28cbf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CBFCu;
        goto label_28cbfc;
    }
    ctx->pc = 0x28CBF4u;
    {
        const bool branch_taken_0x28cbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CBF4u;
        // 0x28cbf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cbf4) {
            ctx->pc = 0x28CC70u;
            goto label_28cc70;
        }
    }
    ctx->pc = 0x28CBFCu;
label_28cbfc:
    // 0x28cbfc: 0xc087502  jal         func_21D408
label_28cc00:
    if (ctx->pc == 0x28CC00u) {
        ctx->pc = 0x28CC04u;
        goto label_28cc04;
    }
    ctx->pc = 0x28CBFCu;
    SET_GPR_U32(ctx, 31, 0x28CC04u);
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x28CBFCu, 0x28CC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CC04u;
label_28cc04:
    // 0x28cc04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28cc04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28cc08:
    // 0x28cc08: 0x8ee4caa8  lw          $a0, -0x3558($s7)
    ctx->pc = 0x28cc08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294953640)));
label_28cc0c:
    // 0x28cc0c: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x28cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_28cc10:
    // 0x28cc10: 0xc059132  jal         func_1644C8
label_28cc14:
    if (ctx->pc == 0x28CC14u) {
        ctx->pc = 0x28CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC10u;
        // 0x28cc14: 0x8c45002c  lw          $a1, 0x2C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CC18u;
        goto label_28cc18;
    }
    ctx->pc = 0x28CC10u;
    SET_GPR_U32(ctx, 31, 0x28CC18u);
    ctx->pc = 0x28CC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CC10u;
    // 0x28cc14: 0x8c45002c  lw          $a1, 0x2C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1644C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1644C8u, 0x28CC10u, 0x28CC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CC18u;
label_28cc18:
    // 0x28cc18: 0x14560016  bne         $v0, $s6, . + 4 + (0x16 << 2)
label_28cc1c:
    if (ctx->pc == 0x28CC1Cu) {
        ctx->pc = 0x28CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC18u;
        // 0x28cc1c: 0x2e420010  sltiu       $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CC20u;
        goto label_28cc20;
    }
    ctx->pc = 0x28CC18u;
    {
        const bool branch_taken_0x28cc18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x28CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC18u;
        // 0x28cc1c: 0x2e420010  sltiu       $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc18) {
            ctx->pc = 0x28CC74u;
            goto label_28cc74;
        }
    }
    ctx->pc = 0x28CC20u;
label_28cc20:
    // 0x28cc20: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x28cc20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_28cc24:
    // 0x28cc24: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_28cc28:
    if (ctx->pc == 0x28CC28u) {
        ctx->pc = 0x28CC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC24u;
        // 0x28cc28: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CC2Cu;
        goto label_28cc2c;
    }
    ctx->pc = 0x28CC24u;
    {
        const bool branch_taken_0x28cc24 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28CC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC24u;
        // 0x28cc28: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc24) {
            ctx->pc = 0x28CC38u;
            goto label_28cc38;
        }
    }
    ctx->pc = 0x28CC2Cu;
label_28cc2c:
    // 0x28cc2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28cc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28cc30:
    // 0x28cc30: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x28cc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_28cc34:
    // 0x28cc34: 0x8c510040  lw          $s1, 0x40($v0)
    ctx->pc = 0x28cc34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_28cc38:
    // 0x28cc38: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_28cc3c:
    if (ctx->pc == 0x28CC3Cu) {
        ctx->pc = 0x28CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC38u;
        // 0x28cc3c: 0x2e420010  sltiu       $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CC40u;
        goto label_28cc40;
    }
    ctx->pc = 0x28CC38u;
    {
        const bool branch_taken_0x28cc38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC38u;
        // 0x28cc3c: 0x2e420010  sltiu       $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc38) {
            ctx->pc = 0x28CC74u;
            goto label_28cc74;
        }
    }
    ctx->pc = 0x28CC40u;
label_28cc40:
    // 0x28cc40: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x28cc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_28cc44:
    // 0x28cc44: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x28cc44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_28cc48:
    // 0x28cc48: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x28cc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_28cc4c:
    // 0x28cc4c: 0x40f809  jalr        $v0
label_28cc50:
    if (ctx->pc == 0x28CC50u) {
        ctx->pc = 0x28CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC4Cu;
        // 0x28cc50: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CC54u;
        goto label_28cc54;
    }
    ctx->pc = 0x28CC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28CC54u);
        ctx->pc = 0x28CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC4Cu;
        // 0x28cc50: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CC4Cu, 0x28CC54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28CC54u;
label_28cc54:
    // 0x28cc54: 0x14550006  bne         $v0, $s5, . + 4 + (0x6 << 2)
label_28cc58:
    if (ctx->pc == 0x28CC58u) {
        ctx->pc = 0x28CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC54u;
        // 0x28cc58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CC5Cu;
        goto label_28cc5c;
    }
    ctx->pc = 0x28CC54u;
    {
        const bool branch_taken_0x28cc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x28CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC54u;
        // 0x28cc58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc54) {
            ctx->pc = 0x28CC70u;
            goto label_28cc70;
        }
    }
    ctx->pc = 0x28CC5Cu;
label_28cc5c:
    // 0x28cc5c: 0xc0a36c8  jal         func_28DB20
label_28cc60:
    if (ctx->pc == 0x28CC60u) {
        ctx->pc = 0x28CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC5Cu;
        // 0x28cc60: 0xae340010  sw          $s4, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CC64u;
        goto label_28cc64;
    }
    ctx->pc = 0x28CC5Cu;
    SET_GPR_U32(ctx, 31, 0x28CC64u);
    ctx->pc = 0x28CC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CC5Cu;
    // 0x28cc60: 0xae340010  sw          $s4, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x28CC5Cu, 0x28CC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CC64u;
label_28cc64:
    // 0x28cc64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28cc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28cc68:
    // 0x28cc68: 0xc0a438c  jal         func_290E30
label_28cc6c:
    if (ctx->pc == 0x28CC6Cu) {
        ctx->pc = 0x28CC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC68u;
        // 0x28cc6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CC70u;
        goto label_28cc70;
    }
    ctx->pc = 0x28CC68u;
    SET_GPR_U32(ctx, 31, 0x28CC70u);
    ctx->pc = 0x28CC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CC68u;
    // 0x28cc6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290E30u, 0x28CC68u, 0x28CC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CC70u;
label_28cc70:
    // 0x28cc70: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x28cc70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_28cc74:
    // 0x28cc74: 0x5440ffda  bnel        $v0, $zero, . + 4 + (-0x26 << 2)
label_28cc78:
    if (ctx->pc == 0x28CC78u) {
        ctx->pc = 0x28CC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC74u;
        // 0x28cc78: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CC7Cu;
        goto label_28cc7c;
    }
    ctx->pc = 0x28CC74u;
    {
        const bool branch_taken_0x28cc74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28cc74) {
            ctx->pc = 0x28CC78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CC74u;
            // 0x28cc78: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CBE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28cbe0;
        }
    }
    ctx->pc = 0x28CC7Cu;
label_28cc7c:
    // 0x28cc7c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x28cc7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_28cc80:
    // 0x28cc80: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x28cc80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_28cc84:
    // 0x28cc84: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x28cc84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28cc88:
    // 0x28cc88: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x28cc88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28cc8c:
    // 0x28cc8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28cc8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28cc90:
    // 0x28cc90: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x28cc90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28cc94:
    // 0x28cc94: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x28cc94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28cc98:
    // 0x28cc98: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x28cc98u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28cc9c:
    // 0x28cc9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28cc9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28cca0:
    // 0x28cca0: 0x3e00008  jr          $ra
label_28cca4:
    if (ctx->pc == 0x28CCA4u) {
        ctx->pc = 0x28CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CCA0u;
        // 0x28cca4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CCA8u;
        goto label_fallthrough_0x28cca0;
    }
    ctx->pc = 0x28CCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CCA0u;
        // 0x28cca4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CCA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28cca0:
    ctx->pc = 0x28CCA8u;
}
