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

// Function: sub_0046AEA0
// Address: 0x46aea0 - 0x46b170
void sub_0046AEA0_0x46aea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046AEA0_0x46aea0");
#endif

    switch (ctx->pc) {
        case 0x46aea0u: goto label_46aea0;
        case 0x46aea4u: goto label_46aea4;
        case 0x46aea8u: goto label_46aea8;
        case 0x46aeacu: goto label_46aeac;
        case 0x46aeb0u: goto label_46aeb0;
        case 0x46aeb4u: goto label_46aeb4;
        case 0x46aeb8u: goto label_46aeb8;
        case 0x46aebcu: goto label_46aebc;
        case 0x46aec0u: goto label_46aec0;
        case 0x46aec4u: goto label_46aec4;
        case 0x46aec8u: goto label_46aec8;
        case 0x46aeccu: goto label_46aecc;
        case 0x46aed0u: goto label_46aed0;
        case 0x46aed4u: goto label_46aed4;
        case 0x46aed8u: goto label_46aed8;
        case 0x46aedcu: goto label_46aedc;
        case 0x46aee0u: goto label_46aee0;
        case 0x46aee4u: goto label_46aee4;
        case 0x46aee8u: goto label_46aee8;
        case 0x46aeecu: goto label_46aeec;
        case 0x46aef0u: goto label_46aef0;
        case 0x46aef4u: goto label_46aef4;
        case 0x46aef8u: goto label_46aef8;
        case 0x46aefcu: goto label_46aefc;
        case 0x46af00u: goto label_46af00;
        case 0x46af04u: goto label_46af04;
        case 0x46af08u: goto label_46af08;
        case 0x46af0cu: goto label_46af0c;
        case 0x46af10u: goto label_46af10;
        case 0x46af14u: goto label_46af14;
        case 0x46af18u: goto label_46af18;
        case 0x46af1cu: goto label_46af1c;
        case 0x46af20u: goto label_46af20;
        case 0x46af24u: goto label_46af24;
        case 0x46af28u: goto label_46af28;
        case 0x46af2cu: goto label_46af2c;
        case 0x46af30u: goto label_46af30;
        case 0x46af34u: goto label_46af34;
        case 0x46af38u: goto label_46af38;
        case 0x46af3cu: goto label_46af3c;
        case 0x46af40u: goto label_46af40;
        case 0x46af44u: goto label_46af44;
        case 0x46af48u: goto label_46af48;
        case 0x46af4cu: goto label_46af4c;
        case 0x46af50u: goto label_46af50;
        case 0x46af54u: goto label_46af54;
        case 0x46af58u: goto label_46af58;
        case 0x46af5cu: goto label_46af5c;
        case 0x46af60u: goto label_46af60;
        case 0x46af64u: goto label_46af64;
        case 0x46af68u: goto label_46af68;
        case 0x46af6cu: goto label_46af6c;
        case 0x46af70u: goto label_46af70;
        case 0x46af74u: goto label_46af74;
        case 0x46af78u: goto label_46af78;
        case 0x46af7cu: goto label_46af7c;
        case 0x46af80u: goto label_46af80;
        case 0x46af84u: goto label_46af84;
        case 0x46af88u: goto label_46af88;
        case 0x46af8cu: goto label_46af8c;
        case 0x46af90u: goto label_46af90;
        case 0x46af94u: goto label_46af94;
        case 0x46af98u: goto label_46af98;
        case 0x46af9cu: goto label_46af9c;
        case 0x46afa0u: goto label_46afa0;
        case 0x46afa4u: goto label_46afa4;
        case 0x46afa8u: goto label_46afa8;
        case 0x46afacu: goto label_46afac;
        case 0x46afb0u: goto label_46afb0;
        case 0x46afb4u: goto label_46afb4;
        case 0x46afb8u: goto label_46afb8;
        case 0x46afbcu: goto label_46afbc;
        case 0x46afc0u: goto label_46afc0;
        case 0x46afc4u: goto label_46afc4;
        case 0x46afc8u: goto label_46afc8;
        case 0x46afccu: goto label_46afcc;
        case 0x46afd0u: goto label_46afd0;
        case 0x46afd4u: goto label_46afd4;
        case 0x46afd8u: goto label_46afd8;
        case 0x46afdcu: goto label_46afdc;
        case 0x46afe0u: goto label_46afe0;
        case 0x46afe4u: goto label_46afe4;
        case 0x46afe8u: goto label_46afe8;
        case 0x46afecu: goto label_46afec;
        case 0x46aff0u: goto label_46aff0;
        case 0x46aff4u: goto label_46aff4;
        case 0x46aff8u: goto label_46aff8;
        case 0x46affcu: goto label_46affc;
        case 0x46b000u: goto label_46b000;
        case 0x46b004u: goto label_46b004;
        case 0x46b008u: goto label_46b008;
        case 0x46b00cu: goto label_46b00c;
        case 0x46b010u: goto label_46b010;
        case 0x46b014u: goto label_46b014;
        case 0x46b018u: goto label_46b018;
        case 0x46b01cu: goto label_46b01c;
        case 0x46b020u: goto label_46b020;
        case 0x46b024u: goto label_46b024;
        case 0x46b028u: goto label_46b028;
        case 0x46b02cu: goto label_46b02c;
        case 0x46b030u: goto label_46b030;
        case 0x46b034u: goto label_46b034;
        case 0x46b038u: goto label_46b038;
        case 0x46b03cu: goto label_46b03c;
        case 0x46b040u: goto label_46b040;
        case 0x46b044u: goto label_46b044;
        case 0x46b048u: goto label_46b048;
        case 0x46b04cu: goto label_46b04c;
        case 0x46b050u: goto label_46b050;
        case 0x46b054u: goto label_46b054;
        case 0x46b058u: goto label_46b058;
        case 0x46b05cu: goto label_46b05c;
        case 0x46b060u: goto label_46b060;
        case 0x46b064u: goto label_46b064;
        case 0x46b068u: goto label_46b068;
        case 0x46b06cu: goto label_46b06c;
        case 0x46b070u: goto label_46b070;
        case 0x46b074u: goto label_46b074;
        case 0x46b078u: goto label_46b078;
        case 0x46b07cu: goto label_46b07c;
        case 0x46b080u: goto label_46b080;
        case 0x46b084u: goto label_46b084;
        case 0x46b088u: goto label_46b088;
        case 0x46b08cu: goto label_46b08c;
        case 0x46b090u: goto label_46b090;
        case 0x46b094u: goto label_46b094;
        case 0x46b098u: goto label_46b098;
        case 0x46b09cu: goto label_46b09c;
        case 0x46b0a0u: goto label_46b0a0;
        case 0x46b0a4u: goto label_46b0a4;
        case 0x46b0a8u: goto label_46b0a8;
        case 0x46b0acu: goto label_46b0ac;
        case 0x46b0b0u: goto label_46b0b0;
        case 0x46b0b4u: goto label_46b0b4;
        case 0x46b0b8u: goto label_46b0b8;
        case 0x46b0bcu: goto label_46b0bc;
        case 0x46b0c0u: goto label_46b0c0;
        case 0x46b0c4u: goto label_46b0c4;
        case 0x46b0c8u: goto label_46b0c8;
        case 0x46b0ccu: goto label_46b0cc;
        case 0x46b0d0u: goto label_46b0d0;
        case 0x46b0d4u: goto label_46b0d4;
        case 0x46b0d8u: goto label_46b0d8;
        case 0x46b0dcu: goto label_46b0dc;
        case 0x46b0e0u: goto label_46b0e0;
        case 0x46b0e4u: goto label_46b0e4;
        case 0x46b0e8u: goto label_46b0e8;
        case 0x46b0ecu: goto label_46b0ec;
        case 0x46b0f0u: goto label_46b0f0;
        case 0x46b0f4u: goto label_46b0f4;
        case 0x46b0f8u: goto label_46b0f8;
        case 0x46b0fcu: goto label_46b0fc;
        case 0x46b100u: goto label_46b100;
        case 0x46b104u: goto label_46b104;
        case 0x46b108u: goto label_46b108;
        case 0x46b10cu: goto label_46b10c;
        case 0x46b110u: goto label_46b110;
        case 0x46b114u: goto label_46b114;
        case 0x46b118u: goto label_46b118;
        case 0x46b11cu: goto label_46b11c;
        case 0x46b120u: goto label_46b120;
        case 0x46b124u: goto label_46b124;
        case 0x46b128u: goto label_46b128;
        case 0x46b12cu: goto label_46b12c;
        case 0x46b130u: goto label_46b130;
        case 0x46b134u: goto label_46b134;
        case 0x46b138u: goto label_46b138;
        case 0x46b13cu: goto label_46b13c;
        case 0x46b140u: goto label_46b140;
        case 0x46b144u: goto label_46b144;
        case 0x46b148u: goto label_46b148;
        case 0x46b14cu: goto label_46b14c;
        case 0x46b150u: goto label_46b150;
        case 0x46b154u: goto label_46b154;
        case 0x46b158u: goto label_46b158;
        case 0x46b15cu: goto label_46b15c;
        case 0x46b160u: goto label_46b160;
        case 0x46b164u: goto label_46b164;
        case 0x46b168u: goto label_46b168;
        case 0x46b16cu: goto label_46b16c;
        default: break;
    }

    ctx->pc = 0x46aea0u;

label_46aea0:
    // 0x46aea0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x46aea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_46aea4:
    // 0x46aea4: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x46aea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_46aea8:
    // 0x46aea8: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x46aea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_46aeac:
    // 0x46aeac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x46aeacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46aeb0:
    // 0x46aeb0: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x46aeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_46aeb4:
    // 0x46aeb4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x46aeb4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46aeb8:
    // 0x46aeb8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x46aeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_46aebc:
    // 0x46aebc: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x46aebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_46aec0:
    // 0x46aec0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x46aec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_46aec4:
    // 0x46aec4: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x46aec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_46aec8:
    // 0x46aec8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x46aec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_46aecc:
    // 0x46aecc: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x46aeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_46aed0:
    // 0x46aed0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x46aed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_46aed4:
    // 0x46aed4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x46aed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_46aed8:
    // 0x46aed8: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x46aed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_46aedc:
    // 0x46aedc: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
label_46aee0:
    if (ctx->pc == 0x46AEE0u) {
        ctx->pc = 0x46AEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AEDCu;
        // 0x46aee0: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46AEE4u;
        goto label_46aee4;
    }
    ctx->pc = 0x46AEDCu;
    {
        const bool branch_taken_0x46aedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46AEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AEDCu;
        // 0x46aee0: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46aedc) {
            ctx->pc = 0x46B13Cu;
            goto label_46b13c;
        }
    }
    ctx->pc = 0x46AEE4u;
label_46aee4:
    // 0x46aee4: 0xc11b72a  jal         func_46DCA8
label_46aee8:
    if (ctx->pc == 0x46AEE8u) {
        ctx->pc = 0x46AEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AEE4u;
        // 0x46aee8: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46AEECu;
        goto label_46aeec;
    }
    ctx->pc = 0x46AEE4u;
    SET_GPR_U32(ctx, 31, 0x46AEECu);
    ctx->pc = 0x46AEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46AEE4u;
    // 0x46aee8: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46DCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46DCA8u, 0x46AEE4u, 0x46AEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46AEECu;
label_46aeec:
    // 0x46aeec: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
label_46aef0:
    if (ctx->pc == 0x46AEF0u) {
        ctx->pc = 0x46AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AEECu;
        // 0x46aef0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46AEF4u;
        goto label_46aef4;
    }
    ctx->pc = 0x46AEECu;
    {
        const bool branch_taken_0x46aeec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AEECu;
        // 0x46aef0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46aeec) {
            ctx->pc = 0x46B134u;
            goto label_46b134;
        }
    }
    ctx->pc = 0x46AEF4u;
label_46aef4:
    // 0x46aef4: 0x8e710024  lw          $s1, 0x24($s3)
    ctx->pc = 0x46aef4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_46aef8:
    // 0x46aef8: 0x1a20007e  blez        $s1, . + 4 + (0x7E << 2)
label_46aefc:
    if (ctx->pc == 0x46AEFCu) {
        ctx->pc = 0x46AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AEF8u;
        // 0x46aefc: 0x3c100071  lui         $s0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46AF00u;
        goto label_46af00;
    }
    ctx->pc = 0x46AEF8u;
    {
        const bool branch_taken_0x46aef8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x46AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AEF8u;
        // 0x46aefc: 0x3c100071  lui         $s0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46aef8) {
            ctx->pc = 0x46B0F4u;
            goto label_46b0f4;
        }
    }
    ctx->pc = 0x46AF00u;
label_46af00:
    // 0x46af00: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x46af00u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_46af04:
    // 0x46af04: 0x2610ad18  addiu       $s0, $s0, -0x52E8
    ctx->pc = 0x46af04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946072));
label_46af08:
    // 0x46af08: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x46af08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_46af0c:
    // 0x46af0c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x46af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_46af10:
    // 0x46af10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x46af10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46af14:
    // 0x46af14: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x46af14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
label_46af18:
    // 0x46af18: 0x40f809  jalr        $v0
label_46af1c:
    if (ctx->pc == 0x46AF1Cu) {
        ctx->pc = 0x46AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AF18u;
        // 0x46af1c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46AF20u;
        goto label_46af20;
    }
    ctx->pc = 0x46AF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46AF20u);
        ctx->pc = 0x46AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AF18u;
        // 0x46af1c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46AF18u, 0x46AF20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46AF20u;
label_46af20:
    // 0x46af20: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x46af20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46af24:
    // 0x46af24: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x46af24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_46af28:
    // 0x46af28: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x46af28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_46af2c:
    // 0x46af2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x46af2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46af30:
    // 0x46af30: 0x40f809  jalr        $v0
label_46af34:
    if (ctx->pc == 0x46AF34u) {
        ctx->pc = 0x46AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AF30u;
        // 0x46af34: 0x34a50503  ori         $a1, $a1, 0x503 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1283);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46AF38u;
        goto label_46af38;
    }
    ctx->pc = 0x46AF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46AF38u);
        ctx->pc = 0x46AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AF30u;
        // 0x46af34: 0x34a50503  ori         $a1, $a1, 0x503 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1283);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46AF30u, 0x46AF38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46AF38u;
label_46af38:
    // 0x46af38: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x46af38u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46af3c:
    // 0x46af3c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x46af3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_46af40:
    // 0x46af40: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x46af40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_46af44:
    // 0x46af44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x46af44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46af48:
    // 0x46af48: 0x40f809  jalr        $v0
label_46af4c:
    if (ctx->pc == 0x46AF4Cu) {
        ctx->pc = 0x46AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AF48u;
        // 0x46af4c: 0x34a50503  ori         $a1, $a1, 0x503 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1283);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46AF50u;
        goto label_46af50;
    }
    ctx->pc = 0x46AF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46AF50u);
        ctx->pc = 0x46AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AF48u;
        // 0x46af4c: 0x34a50503  ori         $a1, $a1, 0x503 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1283);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46AF48u, 0x46AF50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46AF50u;
label_46af50:
    // 0x46af50: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x46af50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46af54:
    // 0x46af54: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x46af54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_46af58:
    // 0x46af58: 0x1840005c  blez        $v0, . + 4 + (0x5C << 2)
label_46af5c:
    if (ctx->pc == 0x46AF5Cu) {
        ctx->pc = 0x46AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AF58u;
        // 0x46af5c: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46AF60u;
        goto label_46af60;
    }
    ctx->pc = 0x46AF58u;
    {
        const bool branch_taken_0x46af58 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x46AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AF58u;
        // 0x46af5c: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46af58) {
            ctx->pc = 0x46B0CCu;
            goto label_46b0cc;
        }
    }
    ctx->pc = 0x46AF60u;
label_46af60:
    // 0x46af60: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x46af60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_46af64:
    // 0x46af64: 0x0  nop
    ctx->pc = 0x46af64u;
    // NOP
label_46af68:
    // 0x46af68: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x46af68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_46af6c:
    // 0x46af6c: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x46af6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_46af70:
    // 0x46af70: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x46af70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_46af74:
    // 0x46af74: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x46af74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_46af78:
    // 0x46af78: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x46af78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46af7c:
    // 0x46af7c: 0xc11b5bc  jal         func_46D6F0
label_46af80:
    if (ctx->pc == 0x46AF80u) {
        ctx->pc = 0x46AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AF7Cu;
        // 0x46af80: 0x96050006  lhu         $a1, 0x6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46AF84u;
        goto label_46af84;
    }
    ctx->pc = 0x46AF7Cu;
    SET_GPR_U32(ctx, 31, 0x46AF84u);
    ctx->pc = 0x46AF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46AF7Cu;
    // 0x46af80: 0x96050006  lhu         $a1, 0x6($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D6F0u, 0x46AF7Cu, 0x46AF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46AF84u;
label_46af84:
    // 0x46af84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46af84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46af88:
    // 0x46af88: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x46af88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46af8c:
    // 0x46af8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_46af90:
    // 0x46af90: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_46af94:
    if (ctx->pc == 0x46AF94u) {
        ctx->pc = 0x46AF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AF90u;
        // 0x46af94: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46AF98u;
        goto label_46af98;
    }
    ctx->pc = 0x46AF90u;
    {
        const bool branch_taken_0x46af90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46AF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AF90u;
        // 0x46af94: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46af90) {
            ctx->pc = 0x46AFD0u;
            goto label_46afd0;
        }
    }
    ctx->pc = 0x46AF98u;
label_46af98:
    // 0x46af98: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x46af98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_46af9c:
    // 0x46af9c: 0x1044000c  beq         $v0, $a0, . + 4 + (0xC << 2)
label_46afa0:
    if (ctx->pc == 0x46AFA0u) {
        ctx->pc = 0x46AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AF9Cu;
        // 0x46afa0: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46AFA4u;
        goto label_46afa4;
    }
    ctx->pc = 0x46AF9Cu;
    {
        const bool branch_taken_0x46af9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x46AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AF9Cu;
        // 0x46afa0: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46af9c) {
            ctx->pc = 0x46AFD0u;
            goto label_46afd0;
        }
    }
    ctx->pc = 0x46AFA4u;
label_46afa4:
    // 0x46afa4: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x46afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_46afa8:
    // 0x46afa8: 0x304affff  andi        $t2, $v0, 0xFFFF
    ctx->pc = 0x46afa8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_46afac:
    // 0x46afac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46afacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_46afb0:
    // 0x46afb0: 0x142182b  sltu        $v1, $t2, $v0
    ctx->pc = 0x46afb0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_46afb4:
    // 0x46afb4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_46afb8:
    if (ctx->pc == 0x46AFB8u) {
        ctx->pc = 0x46AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AFB4u;
        // 0x46afb8: 0xa1080  sll         $v0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46AFBCu;
        goto label_46afbc;
    }
    ctx->pc = 0x46AFB4u;
    {
        const bool branch_taken_0x46afb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x46AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AFB4u;
        // 0x46afb8: 0xa1080  sll         $v0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46afb4) {
            ctx->pc = 0x46AFCCu;
            goto label_46afcc;
        }
    }
    ctx->pc = 0x46AFBCu;
label_46afbc:
    // 0x46afbc: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x46afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_46afc0:
    // 0x46afc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x46afc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46afc4:
    // 0x46afc4: 0x1464fff8  bne         $v1, $a0, . + 4 + (-0x8 << 2)
label_46afc8:
    if (ctx->pc == 0x46AFC8u) {
        ctx->pc = 0x46AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AFC4u;
        // 0x46afc8: 0x25420001  addiu       $v0, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46AFCCu;
        goto label_46afcc;
    }
    ctx->pc = 0x46AFC4u;
    {
        const bool branch_taken_0x46afc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x46AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AFC4u;
        // 0x46afc8: 0x25420001  addiu       $v0, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46afc4) {
            ctx->pc = 0x46AFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46afa8;
        }
    }
    ctx->pc = 0x46AFCCu;
label_46afcc:
    // 0x46afcc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46afccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_46afd0:
    // 0x46afd0: 0x15420006  bne         $t2, $v0, . + 4 + (0x6 << 2)
label_46afd4:
    if (ctx->pc == 0x46AFD4u) {
        ctx->pc = 0x46AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AFD0u;
        // 0x46afd4: 0x25430001  addiu       $v1, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46AFD8u;
        goto label_46afd8;
    }
    ctx->pc = 0x46AFD0u;
    {
        const bool branch_taken_0x46afd0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x46AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AFD0u;
        // 0x46afd4: 0x25430001  addiu       $v1, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46afd0) {
            ctx->pc = 0x46AFECu;
            goto label_46afec;
        }
    }
    ctx->pc = 0x46AFD8u;
label_46afd8:
    // 0x46afd8: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x46afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_46afdc:
    // 0x46afdc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x46afdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_46afe0:
    // 0x46afe0: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x46afe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_46afe4:
    // 0x46afe4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x46afe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_46afe8:
    // 0x46afe8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x46afe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_46afec:
    // 0x46afec: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
label_46aff0:
    if (ctx->pc == 0x46AFF0u) {
        ctx->pc = 0x46AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AFECu;
        // 0x46aff0: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46AFF4u;
        goto label_46aff4;
    }
    ctx->pc = 0x46AFECu;
    {
        const bool branch_taken_0x46afec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x46afec) {
            ctx->pc = 0x46AFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46AFECu;
            // 0x46aff0: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46AFF4u;
            goto label_46aff4;
        }
    }
    ctx->pc = 0x46AFF4u;
label_46aff4:
    // 0x46aff4: 0x13c0000c  beqz        $fp, . + 4 + (0xC << 2)
label_46aff8:
    if (ctx->pc == 0x46AFF8u) {
        ctx->pc = 0x46AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AFF4u;
        // 0x46aff8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46AFFCu;
        goto label_46affc;
    }
    ctx->pc = 0x46AFF4u;
    {
        const bool branch_taken_0x46aff4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x46AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AFF4u;
        // 0x46aff8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46aff4) {
            ctx->pc = 0x46B028u;
            goto label_46b028;
        }
    }
    ctx->pc = 0x46AFFCu;
label_46affc:
    // 0x46affc: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x46affcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_46b000:
    // 0x46b000: 0x10510009  beq         $v0, $s1, . + 4 + (0x9 << 2)
label_46b004:
    if (ctx->pc == 0x46B004u) {
        ctx->pc = 0x46B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B000u;
        // 0x46b004: 0x25620001  addiu       $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B008u;
        goto label_46b008;
    }
    ctx->pc = 0x46B000u;
    {
        const bool branch_taken_0x46b000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x46B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B000u;
        // 0x46b004: 0x25620001  addiu       $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b000) {
            ctx->pc = 0x46B028u;
            goto label_46b028;
        }
    }
    ctx->pc = 0x46B008u;
label_46b008:
    // 0x46b008: 0x304bffff  andi        $t3, $v0, 0xFFFF
    ctx->pc = 0x46b008u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_46b00c:
    // 0x46b00c: 0x17e182b  sltu        $v1, $t3, $fp
    ctx->pc = 0x46b00cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_46b010:
    // 0x46b010: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_46b014:
    if (ctx->pc == 0x46B014u) {
        ctx->pc = 0x46B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B010u;
        // 0x46b014: 0xb1080  sll         $v0, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B018u;
        goto label_46b018;
    }
    ctx->pc = 0x46B010u;
    {
        const bool branch_taken_0x46b010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B010u;
        // 0x46b014: 0xb1080  sll         $v0, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b010) {
            ctx->pc = 0x46B028u;
            goto label_46b028;
        }
    }
    ctx->pc = 0x46B018u;
label_46b018:
    // 0x46b018: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x46b018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_46b01c:
    // 0x46b01c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x46b01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46b020:
    // 0x46b020: 0x1471fff9  bne         $v1, $s1, . + 4 + (-0x7 << 2)
label_46b024:
    if (ctx->pc == 0x46B024u) {
        ctx->pc = 0x46B024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B020u;
        // 0x46b024: 0x25620001  addiu       $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B028u;
        goto label_46b028;
    }
    ctx->pc = 0x46B020u;
    {
        const bool branch_taken_0x46b020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x46B024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B020u;
        // 0x46b024: 0x25620001  addiu       $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b020) {
            ctx->pc = 0x46B008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46b008;
        }
    }
    ctx->pc = 0x46B028u;
label_46b028:
    // 0x46b028: 0x557e0007  bnel        $t3, $fp, . + 4 + (0x7 << 2)
label_46b02c:
    if (ctx->pc == 0x46B02Cu) {
        ctx->pc = 0x46B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B028u;
        // 0x46b02c: 0x8ca60008  lw          $a2, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B030u;
        goto label_46b030;
    }
    ctx->pc = 0x46B028u;
    {
        const bool branch_taken_0x46b028 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 30));
        if (branch_taken_0x46b028) {
            ctx->pc = 0x46B02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46B028u;
            // 0x46b02c: 0x8ca60008  lw          $a2, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46B048u;
            goto label_46b048;
        }
    }
    ctx->pc = 0x46B030u;
label_46b030:
    // 0x46b030: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x46b030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_46b034:
    // 0x46b034: 0x25630001  addiu       $v1, $t3, 0x1
    ctx->pc = 0x46b034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_46b038:
    // 0x46b038: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x46b038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_46b03c:
    // 0x46b03c: 0x307effff  andi        $fp, $v1, 0xFFFF
    ctx->pc = 0x46b03cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_46b040:
    // 0x46b040: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x46b040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_46b044:
    // 0x46b044: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x46b044u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_46b048:
    // 0x46b048: 0x12e0000d  beqz        $s7, . + 4 + (0xD << 2)
label_46b04c:
    if (ctx->pc == 0x46B04Cu) {
        ctx->pc = 0x46B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B048u;
        // 0x46b04c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B050u;
        goto label_46b050;
    }
    ctx->pc = 0x46B048u;
    {
        const bool branch_taken_0x46b048 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B048u;
        // 0x46b04c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b048) {
            ctx->pc = 0x46B080u;
            goto label_46b080;
        }
    }
    ctx->pc = 0x46B050u;
label_46b050:
    // 0x46b050: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x46b050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_46b054:
    // 0x46b054: 0x1046000a  beq         $v0, $a2, . + 4 + (0xA << 2)
label_46b058:
    if (ctx->pc == 0x46B058u) {
        ctx->pc = 0x46B058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B054u;
        // 0x46b058: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B05Cu;
        goto label_46b05c;
    }
    ctx->pc = 0x46B054u;
    {
        const bool branch_taken_0x46b054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x46B058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B054u;
        // 0x46b058: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b054) {
            ctx->pc = 0x46B080u;
            goto label_46b080;
        }
    }
    ctx->pc = 0x46B05Cu;
label_46b05c:
    // 0x46b05c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x46b05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_46b060:
    // 0x46b060: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x46b060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_46b064:
    // 0x46b064: 0x97182b  sltu        $v1, $a0, $s7
    ctx->pc = 0x46b064u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_46b068:
    // 0x46b068: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_46b06c:
    if (ctx->pc == 0x46B06Cu) {
        ctx->pc = 0x46B06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B068u;
        // 0x46b06c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B070u;
        goto label_46b070;
    }
    ctx->pc = 0x46B068u;
    {
        const bool branch_taken_0x46b068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B068u;
        // 0x46b06c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b068) {
            ctx->pc = 0x46B080u;
            goto label_46b080;
        }
    }
    ctx->pc = 0x46B070u;
label_46b070:
    // 0x46b070: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x46b070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_46b074:
    // 0x46b074: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x46b074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46b078:
    // 0x46b078: 0x1467fff9  bne         $v1, $a3, . + 4 + (-0x7 << 2)
label_46b07c:
    if (ctx->pc == 0x46B07Cu) {
        ctx->pc = 0x46B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B078u;
        // 0x46b07c: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B080u;
        goto label_46b080;
    }
    ctx->pc = 0x46B078u;
    {
        const bool branch_taken_0x46b078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x46B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B078u;
        // 0x46b07c: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b078) {
            ctx->pc = 0x46B060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46b060;
        }
    }
    ctx->pc = 0x46B080u;
label_46b080:
    // 0x46b080: 0x54970007  bnel        $a0, $s7, . + 4 + (0x7 << 2)
label_46b084:
    if (ctx->pc == 0x46B084u) {
        ctx->pc = 0x46B084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B080u;
        // 0x46b084: 0x96090006  lhu         $t1, 0x6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B088u;
        goto label_46b088;
    }
    ctx->pc = 0x46B080u;
    {
        const bool branch_taken_0x46b080 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 23));
        if (branch_taken_0x46b080) {
            ctx->pc = 0x46B084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46B080u;
            // 0x46b084: 0x96090006  lhu         $t1, 0x6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46B0A0u;
            goto label_46b0a0;
        }
    }
    ctx->pc = 0x46B088u;
label_46b088:
    // 0x46b088: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x46b088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_46b08c:
    // 0x46b08c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x46b08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_46b090:
    // 0x46b090: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x46b090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_46b094:
    // 0x46b094: 0x3077ffff  andi        $s7, $v1, 0xFFFF
    ctx->pc = 0x46b094u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_46b098:
    // 0x46b098: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x46b098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_46b09c:
    // 0x46b09c: 0x96090006  lhu         $t1, 0x6($s0)
    ctx->pc = 0x46b09cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_46b0a0:
    // 0x46b0a0: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x46b0a0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_46b0a4:
    // 0x46b0a4: 0x96070002  lhu         $a3, 0x2($s0)
    ctx->pc = 0x46b0a4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_46b0a8:
    // 0x46b0a8: 0x96080004  lhu         $t0, 0x4($s0)
    ctx->pc = 0x46b0a8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_46b0ac:
    // 0x46b0ac: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x46b0acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_46b0b0:
    // 0x46b0b0: 0xc11b796  jal         func_46DE58
label_46b0b4:
    if (ctx->pc == 0x46B0B4u) {
        ctx->pc = 0x46B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B0B0u;
        // 0x46b0b4: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B0B8u;
        goto label_46b0b8;
    }
    ctx->pc = 0x46B0B0u;
    SET_GPR_U32(ctx, 31, 0x46B0B8u);
    ctx->pc = 0x46B0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B0B0u;
    // 0x46b0b4: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46DE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46DE58u, 0x46B0B0u, 0x46B0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B0B8u;
label_46b0b8:
    // 0x46b0b8: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x46b0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_46b0bc:
    // 0x46b0bc: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x46b0bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_46b0c0:
    // 0x46b0c0: 0x5460ffa9  bnel        $v1, $zero, . + 4 + (-0x57 << 2)
label_46b0c4:
    if (ctx->pc == 0x46B0C4u) {
        ctx->pc = 0x46B0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B0C0u;
        // 0x46b0c4: 0x8e63002c  lw          $v1, 0x2C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B0C8u;
        goto label_46b0c8;
    }
    ctx->pc = 0x46B0C0u;
    {
        const bool branch_taken_0x46b0c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x46b0c0) {
            ctx->pc = 0x46B0C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46B0C0u;
            // 0x46b0c4: 0x8e63002c  lw          $v1, 0x2C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46AF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46af68;
        }
    }
    ctx->pc = 0x46B0C8u;
label_46b0c8:
    // 0x46b0c8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x46b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_46b0cc:
    // 0x46b0cc: 0x2450ad18  addiu       $s0, $v0, -0x52E8
    ctx->pc = 0x46b0ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_46b0d0:
    // 0x46b0d0: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x46b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_46b0d4:
    // 0x46b0d4: 0x40f809  jalr        $v0
label_46b0d8:
    if (ctx->pc == 0x46B0D8u) {
        ctx->pc = 0x46B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B0D4u;
        // 0x46b0d8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B0DCu;
        goto label_46b0dc;
    }
    ctx->pc = 0x46B0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46B0DCu);
        ctx->pc = 0x46B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B0D4u;
        // 0x46b0d8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B0D4u, 0x46B0DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46B0DCu;
label_46b0dc:
    // 0x46b0dc: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x46b0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_46b0e0:
    // 0x46b0e0: 0x60f809  jalr        $v1
label_46b0e4:
    if (ctx->pc == 0x46B0E4u) {
        ctx->pc = 0x46B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B0E0u;
        // 0x46b0e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B0E8u;
        goto label_46b0e8;
    }
    ctx->pc = 0x46B0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x46B0E8u);
        ctx->pc = 0x46B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B0E0u;
        // 0x46b0e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B0E0u, 0x46B0E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46B0E8u;
label_46b0e8:
    // 0x46b0e8: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x46b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_46b0ec:
    // 0x46b0ec: 0x40f809  jalr        $v0
label_46b0f0:
    if (ctx->pc == 0x46B0F0u) {
        ctx->pc = 0x46B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B0ECu;
        // 0x46b0f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B0F4u;
        goto label_46b0f4;
    }
    ctx->pc = 0x46B0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46B0F4u);
        ctx->pc = 0x46B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B0ECu;
        // 0x46b0f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B0ECu, 0x46B0F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46B0F4u;
label_46b0f4:
    // 0x46b0f4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x46b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_46b0f8:
    // 0x46b0f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x46b0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_46b0fc:
    // 0x46b0fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_46b100:
    if (ctx->pc == 0x46B100u) {
        ctx->pc = 0x46B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B0FCu;
        // 0x46b100: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B104u;
        goto label_46b104;
    }
    ctx->pc = 0x46B0FCu;
    {
        const bool branch_taken_0x46b0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B0FCu;
        // 0x46b100: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b0fc) {
            ctx->pc = 0x46B114u;
            goto label_46b114;
        }
    }
    ctx->pc = 0x46B104u;
label_46b104:
    // 0x46b104: 0xc11c1e2  jal         func_470788
label_46b108:
    if (ctx->pc == 0x46B108u) {
        ctx->pc = 0x46B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B104u;
        // 0x46b108: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B10Cu;
        goto label_46b10c;
    }
    ctx->pc = 0x46B104u;
    SET_GPR_U32(ctx, 31, 0x46B10Cu);
    ctx->pc = 0x46B108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B104u;
    // 0x46b108: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x470788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470788u, 0x46B104u, 0x46B10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B10Cu;
label_46b10c:
    // 0x46b10c: 0x10000003  b           . + 4 + (0x3 << 2)
label_46b110:
    if (ctx->pc == 0x46B110u) {
        ctx->pc = 0x46B114u;
        goto label_46b114;
    }
    ctx->pc = 0x46B10Cu;
    {
        const bool branch_taken_0x46b10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b10c) {
            ctx->pc = 0x46B11Cu;
            goto label_46b11c;
        }
    }
    ctx->pc = 0x46B114u;
label_46b114:
    // 0x46b114: 0xc11c1e2  jal         func_470788
label_46b118:
    if (ctx->pc == 0x46B118u) {
        ctx->pc = 0x46B118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B114u;
        // 0x46b118: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B11Cu;
        goto label_46b11c;
    }
    ctx->pc = 0x46B114u;
    SET_GPR_U32(ctx, 31, 0x46B11Cu);
    ctx->pc = 0x46B118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B114u;
    // 0x46b118: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x470788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470788u, 0x46B114u, 0x46B11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B11Cu;
label_46b11c:
    // 0x46b11c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46b120:
    if (ctx->pc == 0x46B120u) {
        ctx->pc = 0x46B124u;
        goto label_46b124;
    }
    ctx->pc = 0x46B11Cu;
    {
        const bool branch_taken_0x46b11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b11c) {
            ctx->pc = 0x46B12Cu;
            goto label_46b12c;
        }
    }
    ctx->pc = 0x46B124u;
label_46b124:
    // 0x46b124: 0x10000005  b           . + 4 + (0x5 << 2)
label_46b128:
    if (ctx->pc == 0x46B128u) {
        ctx->pc = 0x46B128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B124u;
        // 0x46b128: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B12Cu;
        goto label_46b12c;
    }
    ctx->pc = 0x46B124u;
    {
        const bool branch_taken_0x46b124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B124u;
        // 0x46b128: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b124) {
            ctx->pc = 0x46B13Cu;
            goto label_46b13c;
        }
    }
    ctx->pc = 0x46B12Cu;
label_46b12c:
    // 0x46b12c: 0xc11b768  jal         func_46DDA0
label_46b130:
    if (ctx->pc == 0x46B130u) {
        ctx->pc = 0x46B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B12Cu;
        // 0x46b130: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B134u;
        goto label_46b134;
    }
    ctx->pc = 0x46B12Cu;
    SET_GPR_U32(ctx, 31, 0x46B134u);
    ctx->pc = 0x46B130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B12Cu;
    // 0x46b130: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46DDA0u, 0x46B12Cu, 0x46B134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B134u;
label_46b134:
    // 0x46b134: 0x10000002  b           . + 4 + (0x2 << 2)
label_46b138:
    if (ctx->pc == 0x46B138u) {
        ctx->pc = 0x46B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B134u;
        // 0x46b138: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B13Cu;
        goto label_46b13c;
    }
    ctx->pc = 0x46B134u;
    {
        const bool branch_taken_0x46b134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B134u;
        // 0x46b138: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b134) {
            ctx->pc = 0x46B140u;
            goto label_46b140;
        }
    }
    ctx->pc = 0x46B13Cu;
label_46b13c:
    // 0x46b13c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x46b13cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_46b140:
    // 0x46b140: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x46b140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_46b144:
    // 0x46b144: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x46b144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_46b148:
    // 0x46b148: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x46b148u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_46b14c:
    // 0x46b14c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x46b14cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_46b150:
    // 0x46b150: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x46b150u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_46b154:
    // 0x46b154: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x46b154u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_46b158:
    // 0x46b158: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x46b158u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_46b15c:
    // 0x46b15c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x46b15cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46b160:
    // 0x46b160: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x46b160u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46b164:
    // 0x46b164: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x46b164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_46b168:
    // 0x46b168: 0x3e00008  jr          $ra
label_46b16c:
    if (ctx->pc == 0x46B16Cu) {
        ctx->pc = 0x46B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B168u;
        // 0x46b16c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B170u;
        goto label_fallthrough_0x46b168;
    }
    ctx->pc = 0x46B168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B168u;
        // 0x46b16c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x46b168:
    ctx->pc = 0x46B170u;
}
