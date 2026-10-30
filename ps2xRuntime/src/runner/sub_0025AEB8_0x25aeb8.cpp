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

// Function: sub_0025AEB8
// Address: 0x25aeb8 - 0x25af90
void sub_0025AEB8_0x25aeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AEB8_0x25aeb8");
#endif

    switch (ctx->pc) {
        case 0x25aeb8u: goto label_25aeb8;
        case 0x25aebcu: goto label_25aebc;
        case 0x25aec0u: goto label_25aec0;
        case 0x25aec4u: goto label_25aec4;
        case 0x25aec8u: goto label_25aec8;
        case 0x25aeccu: goto label_25aecc;
        case 0x25aed0u: goto label_25aed0;
        case 0x25aed4u: goto label_25aed4;
        case 0x25aed8u: goto label_25aed8;
        case 0x25aedcu: goto label_25aedc;
        case 0x25aee0u: goto label_25aee0;
        case 0x25aee4u: goto label_25aee4;
        case 0x25aee8u: goto label_25aee8;
        case 0x25aeecu: goto label_25aeec;
        case 0x25aef0u: goto label_25aef0;
        case 0x25aef4u: goto label_25aef4;
        case 0x25aef8u: goto label_25aef8;
        case 0x25aefcu: goto label_25aefc;
        case 0x25af00u: goto label_25af00;
        case 0x25af04u: goto label_25af04;
        case 0x25af08u: goto label_25af08;
        case 0x25af0cu: goto label_25af0c;
        case 0x25af10u: goto label_25af10;
        case 0x25af14u: goto label_25af14;
        case 0x25af18u: goto label_25af18;
        case 0x25af1cu: goto label_25af1c;
        case 0x25af20u: goto label_25af20;
        case 0x25af24u: goto label_25af24;
        case 0x25af28u: goto label_25af28;
        case 0x25af2cu: goto label_25af2c;
        case 0x25af30u: goto label_25af30;
        case 0x25af34u: goto label_25af34;
        case 0x25af38u: goto label_25af38;
        case 0x25af3cu: goto label_25af3c;
        case 0x25af40u: goto label_25af40;
        case 0x25af44u: goto label_25af44;
        case 0x25af48u: goto label_25af48;
        case 0x25af4cu: goto label_25af4c;
        case 0x25af50u: goto label_25af50;
        case 0x25af54u: goto label_25af54;
        case 0x25af58u: goto label_25af58;
        case 0x25af5cu: goto label_25af5c;
        case 0x25af60u: goto label_25af60;
        case 0x25af64u: goto label_25af64;
        case 0x25af68u: goto label_25af68;
        case 0x25af6cu: goto label_25af6c;
        case 0x25af70u: goto label_25af70;
        case 0x25af74u: goto label_25af74;
        case 0x25af78u: goto label_25af78;
        case 0x25af7cu: goto label_25af7c;
        case 0x25af80u: goto label_25af80;
        case 0x25af84u: goto label_25af84;
        case 0x25af88u: goto label_25af88;
        case 0x25af8cu: goto label_25af8c;
        default: break;
    }

    ctx->pc = 0x25aeb8u;

label_25aeb8:
    // 0x25aeb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25aeb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_25aebc:
    // 0x25aebc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x25aebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_25aec0:
    // 0x25aec0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25aec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_25aec4:
    // 0x25aec4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25aec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25aec8:
    // 0x25aec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25aec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25aecc:
    // 0x25aecc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x25aeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_25aed0:
    // 0x25aed0: 0x8e1200d8  lw          $s2, 0xD8($s0)
    ctx->pc = 0x25aed0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_25aed4:
    // 0x25aed4: 0x52400028  beql        $s2, $zero, . + 4 + (0x28 << 2)
label_25aed8:
    if (ctx->pc == 0x25AED8u) {
        ctx->pc = 0x25AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AED4u;
        // 0x25aed8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AEDCu;
        goto label_25aedc;
    }
    ctx->pc = 0x25AED4u;
    {
        const bool branch_taken_0x25aed4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x25aed4) {
            ctx->pc = 0x25AED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AED4u;
            // 0x25aed8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25AF78u;
            goto label_25af78;
        }
    }
    ctx->pc = 0x25AEDCu;
label_25aedc:
    // 0x25aedc: 0x920203bc  lbu         $v0, 0x3BC($s0)
    ctx->pc = 0x25aedcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 956)));
label_25aee0:
    // 0x25aee0: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
label_25aee4:
    if (ctx->pc == 0x25AEE4u) {
        ctx->pc = 0x25AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AEE0u;
        // 0x25aee4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AEE8u;
        goto label_25aee8;
    }
    ctx->pc = 0x25AEE0u;
    {
        const bool branch_taken_0x25aee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25aee0) {
            ctx->pc = 0x25AEE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AEE0u;
            // 0x25aee4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25AF78u;
            goto label_25af78;
        }
    }
    ctx->pc = 0x25AEE8u;
label_25aee8:
    // 0x25aee8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x25aee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_25aeec:
    // 0x25aeec: 0xc089998  jal         func_226660
label_25aef0:
    if (ctx->pc == 0x25AEF0u) {
        ctx->pc = 0x25AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AEECu;
        // 0x25aef0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AEF4u;
        goto label_25aef4;
    }
    ctx->pc = 0x25AEECu;
    SET_GPR_U32(ctx, 31, 0x25AEF4u);
    ctx->pc = 0x25AEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AEECu;
    // 0x25aef0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x25AEECu, 0x25AEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AEF4u;
label_25aef4:
    // 0x25aef4: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
label_25aef8:
    if (ctx->pc == 0x25AEF8u) {
        ctx->pc = 0x25AEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AEF4u;
        // 0x25aef8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AEFCu;
        goto label_25aefc;
    }
    ctx->pc = 0x25AEF4u;
    {
        const bool branch_taken_0x25aef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25aef4) {
            ctx->pc = 0x25AEF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AEF4u;
            // 0x25aef8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25AF78u;
            goto label_25af78;
        }
    }
    ctx->pc = 0x25AEFCu;
label_25aefc:
    // 0x25aefc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x25aefcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_25af00:
    // 0x25af00: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x25af00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_25af04:
    // 0x25af04: 0xc0cd4ee  jal         func_3353B8
label_25af08:
    if (ctx->pc == 0x25AF08u) {
        ctx->pc = 0x25AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF04u;
        // 0x25af08: 0x2484b898  addiu       $a0, $a0, -0x4768 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AF0Cu;
        goto label_25af0c;
    }
    ctx->pc = 0x25AF04u;
    SET_GPR_U32(ctx, 31, 0x25AF0Cu);
    ctx->pc = 0x25AF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AF04u;
    // 0x25af08: 0x2484b898  addiu       $a0, $a0, -0x4768 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x25AF04u, 0x25AF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AF0Cu;
label_25af0c:
    // 0x25af0c: 0x2c42001e  sltiu       $v0, $v0, 0x1E
    ctx->pc = 0x25af0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_25af10:
    // 0x25af10: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_25af14:
    if (ctx->pc == 0x25AF14u) {
        ctx->pc = 0x25AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF10u;
        // 0x25af14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AF18u;
        goto label_25af18;
    }
    ctx->pc = 0x25AF10u;
    {
        const bool branch_taken_0x25af10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF10u;
        // 0x25af14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25af10) {
            ctx->pc = 0x25AF74u;
            goto label_25af74;
        }
    }
    ctx->pc = 0x25AF18u;
label_25af18:
    // 0x25af18: 0xc089990  jal         func_226640
label_25af1c:
    if (ctx->pc == 0x25AF1Cu) {
        ctx->pc = 0x25AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF18u;
        // 0x25af1c: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AF20u;
        goto label_25af20;
    }
    ctx->pc = 0x25AF18u;
    SET_GPR_U32(ctx, 31, 0x25AF20u);
    ctx->pc = 0x25AF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AF18u;
    // 0x25af1c: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x25AF18u, 0x25AF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AF20u;
label_25af20:
    // 0x25af20: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x25af20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_25af24:
    // 0x25af24: 0xc041532  jal         func_1054C8
label_25af28:
    if (ctx->pc == 0x25AF28u) {
        ctx->pc = 0x25AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF24u;
        // 0x25af28: 0x2484d9f0  addiu       $a0, $a0, -0x2610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AF2Cu;
        goto label_25af2c;
    }
    ctx->pc = 0x25AF24u;
    SET_GPR_U32(ctx, 31, 0x25AF2Cu);
    ctx->pc = 0x25AF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AF24u;
    // 0x25af28: 0x2484d9f0  addiu       $a0, $a0, -0x2610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25AF24u, 0x25AF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AF2Cu;
label_25af2c:
    // 0x25af2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25af2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25af30:
    // 0x25af30: 0x5220000e  beql        $s1, $zero, . + 4 + (0xE << 2)
label_25af34:
    if (ctx->pc == 0x25AF34u) {
        ctx->pc = 0x25AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF30u;
        // 0x25af34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AF38u;
        goto label_25af38;
    }
    ctx->pc = 0x25AF30u;
    {
        const bool branch_taken_0x25af30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x25af30) {
            ctx->pc = 0x25AF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AF30u;
            // 0x25af34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25AF6Cu;
            goto label_25af6c;
        }
    }
    ctx->pc = 0x25AF38u;
label_25af38:
    // 0x25af38: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x25af38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25af3c:
    // 0x25af3c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25af3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25af40:
    // 0x25af40: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25af40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25af44:
    // 0x25af44: 0x40f809  jalr        $v0
label_25af48:
    if (ctx->pc == 0x25AF48u) {
        ctx->pc = 0x25AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF44u;
        // 0x25af48: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AF4Cu;
        goto label_25af4c;
    }
    ctx->pc = 0x25AF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25AF4Cu);
        ctx->pc = 0x25AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF44u;
        // 0x25af48: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AF44u, 0x25AF4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25AF4Cu;
label_25af4c:
    // 0x25af4c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x25af4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25af50:
    // 0x25af50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25af50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25af54:
    // 0x25af54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25af54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25af58:
    // 0x25af58: 0x24060259  addiu       $a2, $zero, 0x259
    ctx->pc = 0x25af58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 601));
label_25af5c:
    // 0x25af5c: 0x3c070020  lui         $a3, 0x20
    ctx->pc = 0x25af5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32 << 16));
label_25af60:
    // 0x25af60: 0xc041850  jal         func_106140
label_25af64:
    if (ctx->pc == 0x25AF64u) {
        ctx->pc = 0x25AF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF60u;
        // 0x25af64: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AF68u;
        goto label_25af68;
    }
    ctx->pc = 0x25AF60u;
    SET_GPR_U32(ctx, 31, 0x25AF68u);
    ctx->pc = 0x25AF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AF60u;
    // 0x25af64: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106140u, 0x25AF60u, 0x25AF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AF68u;
label_25af68:
    // 0x25af68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25af68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25af6c:
    // 0x25af6c: 0xc05d4f6  jal         func_1753D8
label_25af70:
    if (ctx->pc == 0x25AF70u) {
        ctx->pc = 0x25AF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF6Cu;
        // 0x25af70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AF74u;
        goto label_25af74;
    }
    ctx->pc = 0x25AF6Cu;
    SET_GPR_U32(ctx, 31, 0x25AF74u);
    ctx->pc = 0x25AF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AF6Cu;
    // 0x25af70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25AF6Cu, 0x25AF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AF74u;
label_25af74:
    // 0x25af74: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x25af74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25af78:
    // 0x25af78: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25af78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25af7c:
    // 0x25af7c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x25af7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25af80:
    // 0x25af80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25af80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25af84:
    // 0x25af84: 0x3e00008  jr          $ra
label_25af88:
    if (ctx->pc == 0x25AF88u) {
        ctx->pc = 0x25AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF84u;
        // 0x25af88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AF8Cu;
        goto label_25af8c;
    }
    ctx->pc = 0x25AF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF84u;
        // 0x25af88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AF84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25AF8Cu;
label_25af8c:
    // 0x25af8c: 0x0  nop
    ctx->pc = 0x25af8cu;
    // NOP
    ctx->pc = 0x25af90u;
}
