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

// Function: sub_0023AEE0
// Address: 0x23aee0 - 0x23b0e0
void sub_0023AEE0_0x23aee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AEE0_0x23aee0");
#endif

    switch (ctx->pc) {
        case 0x23aee0u: goto label_23aee0;
        case 0x23aee4u: goto label_23aee4;
        case 0x23aee8u: goto label_23aee8;
        case 0x23aeecu: goto label_23aeec;
        case 0x23aef0u: goto label_23aef0;
        case 0x23aef4u: goto label_23aef4;
        case 0x23aef8u: goto label_23aef8;
        case 0x23aefcu: goto label_23aefc;
        case 0x23af00u: goto label_23af00;
        case 0x23af04u: goto label_23af04;
        case 0x23af08u: goto label_23af08;
        case 0x23af0cu: goto label_23af0c;
        case 0x23af10u: goto label_23af10;
        case 0x23af14u: goto label_23af14;
        case 0x23af18u: goto label_23af18;
        case 0x23af1cu: goto label_23af1c;
        case 0x23af20u: goto label_23af20;
        case 0x23af24u: goto label_23af24;
        case 0x23af28u: goto label_23af28;
        case 0x23af2cu: goto label_23af2c;
        case 0x23af30u: goto label_23af30;
        case 0x23af34u: goto label_23af34;
        case 0x23af38u: goto label_23af38;
        case 0x23af3cu: goto label_23af3c;
        case 0x23af40u: goto label_23af40;
        case 0x23af44u: goto label_23af44;
        case 0x23af48u: goto label_23af48;
        case 0x23af4cu: goto label_23af4c;
        case 0x23af50u: goto label_23af50;
        case 0x23af54u: goto label_23af54;
        case 0x23af58u: goto label_23af58;
        case 0x23af5cu: goto label_23af5c;
        case 0x23af60u: goto label_23af60;
        case 0x23af64u: goto label_23af64;
        case 0x23af68u: goto label_23af68;
        case 0x23af6cu: goto label_23af6c;
        case 0x23af70u: goto label_23af70;
        case 0x23af74u: goto label_23af74;
        case 0x23af78u: goto label_23af78;
        case 0x23af7cu: goto label_23af7c;
        case 0x23af80u: goto label_23af80;
        case 0x23af84u: goto label_23af84;
        case 0x23af88u: goto label_23af88;
        case 0x23af8cu: goto label_23af8c;
        case 0x23af90u: goto label_23af90;
        case 0x23af94u: goto label_23af94;
        case 0x23af98u: goto label_23af98;
        case 0x23af9cu: goto label_23af9c;
        case 0x23afa0u: goto label_23afa0;
        case 0x23afa4u: goto label_23afa4;
        case 0x23afa8u: goto label_23afa8;
        case 0x23afacu: goto label_23afac;
        case 0x23afb0u: goto label_23afb0;
        case 0x23afb4u: goto label_23afb4;
        case 0x23afb8u: goto label_23afb8;
        case 0x23afbcu: goto label_23afbc;
        case 0x23afc0u: goto label_23afc0;
        case 0x23afc4u: goto label_23afc4;
        case 0x23afc8u: goto label_23afc8;
        case 0x23afccu: goto label_23afcc;
        case 0x23afd0u: goto label_23afd0;
        case 0x23afd4u: goto label_23afd4;
        case 0x23afd8u: goto label_23afd8;
        case 0x23afdcu: goto label_23afdc;
        case 0x23afe0u: goto label_23afe0;
        case 0x23afe4u: goto label_23afe4;
        case 0x23afe8u: goto label_23afe8;
        case 0x23afecu: goto label_23afec;
        case 0x23aff0u: goto label_23aff0;
        case 0x23aff4u: goto label_23aff4;
        case 0x23aff8u: goto label_23aff8;
        case 0x23affcu: goto label_23affc;
        case 0x23b000u: goto label_23b000;
        case 0x23b004u: goto label_23b004;
        case 0x23b008u: goto label_23b008;
        case 0x23b00cu: goto label_23b00c;
        case 0x23b010u: goto label_23b010;
        case 0x23b014u: goto label_23b014;
        case 0x23b018u: goto label_23b018;
        case 0x23b01cu: goto label_23b01c;
        case 0x23b020u: goto label_23b020;
        case 0x23b024u: goto label_23b024;
        case 0x23b028u: goto label_23b028;
        case 0x23b02cu: goto label_23b02c;
        case 0x23b030u: goto label_23b030;
        case 0x23b034u: goto label_23b034;
        case 0x23b038u: goto label_23b038;
        case 0x23b03cu: goto label_23b03c;
        case 0x23b040u: goto label_23b040;
        case 0x23b044u: goto label_23b044;
        case 0x23b048u: goto label_23b048;
        case 0x23b04cu: goto label_23b04c;
        case 0x23b050u: goto label_23b050;
        case 0x23b054u: goto label_23b054;
        case 0x23b058u: goto label_23b058;
        case 0x23b05cu: goto label_23b05c;
        case 0x23b060u: goto label_23b060;
        case 0x23b064u: goto label_23b064;
        case 0x23b068u: goto label_23b068;
        case 0x23b06cu: goto label_23b06c;
        case 0x23b070u: goto label_23b070;
        case 0x23b074u: goto label_23b074;
        case 0x23b078u: goto label_23b078;
        case 0x23b07cu: goto label_23b07c;
        case 0x23b080u: goto label_23b080;
        case 0x23b084u: goto label_23b084;
        case 0x23b088u: goto label_23b088;
        case 0x23b08cu: goto label_23b08c;
        case 0x23b090u: goto label_23b090;
        case 0x23b094u: goto label_23b094;
        case 0x23b098u: goto label_23b098;
        case 0x23b09cu: goto label_23b09c;
        case 0x23b0a0u: goto label_23b0a0;
        case 0x23b0a4u: goto label_23b0a4;
        case 0x23b0a8u: goto label_23b0a8;
        case 0x23b0acu: goto label_23b0ac;
        case 0x23b0b0u: goto label_23b0b0;
        case 0x23b0b4u: goto label_23b0b4;
        case 0x23b0b8u: goto label_23b0b8;
        case 0x23b0bcu: goto label_23b0bc;
        case 0x23b0c0u: goto label_23b0c0;
        case 0x23b0c4u: goto label_23b0c4;
        case 0x23b0c8u: goto label_23b0c8;
        case 0x23b0ccu: goto label_23b0cc;
        case 0x23b0d0u: goto label_23b0d0;
        case 0x23b0d4u: goto label_23b0d4;
        case 0x23b0d8u: goto label_23b0d8;
        case 0x23b0dcu: goto label_23b0dc;
        default: break;
    }

    ctx->pc = 0x23aee0u;

label_23aee0:
    // 0x23aee0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x23aee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_23aee4:
    // 0x23aee4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x23aee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_23aee8:
    // 0x23aee8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x23aee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_23aeec:
    // 0x23aeec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23aeecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23aef0:
    // 0x23aef0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x23aef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_23aef4:
    // 0x23aef4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x23aef4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_23aef8:
    // 0x23aef8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x23aef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_23aefc:
    // 0x23aefc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x23aefcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23af00:
    // 0x23af00: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x23af00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_23af04:
    // 0x23af04: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x23af04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23af08:
    // 0x23af08: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x23af08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_23af0c:
    // 0x23af0c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x23af0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_23af10:
    // 0x23af10: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23af10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_23af14:
    // 0x23af14: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x23af14u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_23af18:
    // 0x23af18: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x23af18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_23af1c:
    // 0x23af1c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x23af1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_23af20:
    // 0x23af20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23af20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23af24:
    // 0x23af24: 0xc0e4060  jal         func_390180
label_23af28:
    if (ctx->pc == 0x23AF28u) {
        ctx->pc = 0x23AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF24u;
        // 0x23af28: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AF2Cu;
        goto label_23af2c;
    }
    ctx->pc = 0x23AF24u;
    SET_GPR_U32(ctx, 31, 0x23AF2Cu);
    ctx->pc = 0x23AF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AF24u;
    // 0x23af28: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23AF24u, 0x23AF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AF2Cu;
label_23af2c:
    // 0x23af2c: 0xc08a61a  jal         func_229868
label_23af30:
    if (ctx->pc == 0x23AF30u) {
        ctx->pc = 0x23AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF2Cu;
        // 0x23af30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AF34u;
        goto label_23af34;
    }
    ctx->pc = 0x23AF2Cu;
    SET_GPR_U32(ctx, 31, 0x23AF34u);
    ctx->pc = 0x23AF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AF2Cu;
    // 0x23af30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23AF2Cu, 0x23AF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AF34u;
label_23af34:
    // 0x23af34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23af34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23af38:
    // 0x23af38: 0x1240005e  beqz        $s2, . + 4 + (0x5E << 2)
label_23af3c:
    if (ctx->pc == 0x23AF3Cu) {
        ctx->pc = 0x23AF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF38u;
        // 0x23af3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AF40u;
        goto label_23af40;
    }
    ctx->pc = 0x23AF38u;
    {
        const bool branch_taken_0x23af38 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF38u;
        // 0x23af3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af38) {
            ctx->pc = 0x23B0B4u;
            goto label_23b0b4;
        }
    }
    ctx->pc = 0x23AF40u;
label_23af40:
    // 0x23af40: 0xc088ac6  jal         func_222B18
label_23af44:
    if (ctx->pc == 0x23AF44u) {
        ctx->pc = 0x23AF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF40u;
        // 0x23af44: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AF48u;
        goto label_23af48;
    }
    ctx->pc = 0x23AF40u;
    SET_GPR_U32(ctx, 31, 0x23AF48u);
    ctx->pc = 0x23AF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AF40u;
    // 0x23af44: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x23AF40u, 0x23AF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AF48u;
label_23af48:
    // 0x23af48: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x23af48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_23af4c:
    // 0x23af4c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x23af4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_23af50:
    // 0x23af50: 0x8c862b04  lw          $a2, 0x2B04($a0)
    ctx->pc = 0x23af50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11012)));
label_23af54:
    // 0x23af54: 0x2451001c  addiu       $s1, $v0, 0x1C
    ctx->pc = 0x23af54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_23af58:
    // 0x23af58: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x23af58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_23af5c:
    // 0x23af5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23af5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23af60:
    // 0x23af60: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x23af60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_23af64:
    // 0x23af64: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x23af64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_23af68:
    // 0x23af68: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x23af68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_23af6c:
    // 0x23af6c: 0x40f809  jalr        $v0
label_23af70:
    if (ctx->pc == 0x23AF70u) {
        ctx->pc = 0x23AF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF6Cu;
        // 0x23af70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AF74u;
        goto label_23af74;
    }
    ctx->pc = 0x23AF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23AF74u);
        ctx->pc = 0x23AF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF6Cu;
        // 0x23af70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AF6Cu, 0x23AF74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23AF74u;
label_23af74:
    // 0x23af74: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x23af74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_23af78:
    // 0x23af78: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x23af78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_23af7c:
    // 0x23af7c: 0x8e05b734  lw          $a1, -0x48CC($s0)
    ctx->pc = 0x23af7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
label_23af80:
    // 0x23af80: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x23af80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_23af84:
    // 0x23af84: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x23af84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_23af88:
    // 0x23af88: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x23af88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_23af8c:
    // 0x23af8c: 0x40f809  jalr        $v0
label_23af90:
    if (ctx->pc == 0x23AF90u) {
        ctx->pc = 0x23AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF8Cu;
        // 0x23af90: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AF94u;
        goto label_23af94;
    }
    ctx->pc = 0x23AF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23AF94u);
        ctx->pc = 0x23AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF8Cu;
        // 0x23af90: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AF8Cu, 0x23AF94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23AF94u;
label_23af94:
    // 0x23af94: 0x8e05b734  lw          $a1, -0x48CC($s0)
    ctx->pc = 0x23af94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
label_23af98:
    // 0x23af98: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x23af98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_23af9c:
    // 0x23af9c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x23af9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_23afa0:
    // 0x23afa0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x23afa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_23afa4:
    // 0x23afa4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x23afa4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_23afa8:
    // 0x23afa8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x23afa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_23afac:
    // 0x23afac: 0x40f809  jalr        $v0
label_23afb0:
    if (ctx->pc == 0x23AFB0u) {
        ctx->pc = 0x23AFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AFACu;
        // 0x23afb0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AFB4u;
        goto label_23afb4;
    }
    ctx->pc = 0x23AFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23AFB4u);
        ctx->pc = 0x23AFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AFACu;
        // 0x23afb0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AFACu, 0x23AFB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23AFB4u;
label_23afb4:
    // 0x23afb4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x23afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_23afb8:
    // 0x23afb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23afb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23afbc:
    // 0x23afbc: 0xc08a162  jal         func_228588
label_23afc0:
    if (ctx->pc == 0x23AFC0u) {
        ctx->pc = 0x23AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AFBCu;
        // 0x23afc0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AFC4u;
        goto label_23afc4;
    }
    ctx->pc = 0x23AFBCu;
    SET_GPR_U32(ctx, 31, 0x23AFC4u);
    ctx->pc = 0x23AFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AFBCu;
    // 0x23afc0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228588u, 0x23AFBCu, 0x23AFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AFC4u;
label_23afc4:
    // 0x23afc4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_23afc8:
    if (ctx->pc == 0x23AFC8u) {
        ctx->pc = 0x23AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AFC4u;
        // 0x23afc8: 0x24100028  addiu       $s0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AFCCu;
        goto label_23afcc;
    }
    ctx->pc = 0x23AFC4u;
    {
        const bool branch_taken_0x23afc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AFC4u;
        // 0x23afc8: 0x24100028  addiu       $s0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23afc4) {
            ctx->pc = 0x23B014u;
            goto label_23b014;
        }
    }
    ctx->pc = 0x23AFCCu;
label_23afcc:
    // 0x23afcc: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x23afccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_23afd0:
    // 0x23afd0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x23afd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23afd4:
    // 0x23afd4: 0xb01018  mult        $v0, $a1, $s0
    ctx->pc = 0x23afd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_23afd8:
    // 0x23afd8: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x23afd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_23afdc:
    // 0x23afdc: 0xc10c313  jal         func_430C4C
label_23afe0:
    if (ctx->pc == 0x23AFE0u) {
        ctx->pc = 0x23AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AFDCu;
        // 0x23afe0: 0x24a503c8  addiu       $a1, $a1, 0x3C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AFE4u;
        goto label_23afe4;
    }
    ctx->pc = 0x23AFDCu;
    SET_GPR_U32(ctx, 31, 0x23AFE4u);
    ctx->pc = 0x23AFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AFDCu;
    // 0x23afe0: 0x24a503c8  addiu       $a1, $a1, 0x3C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x23AFDCu, 0x23AFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AFE4u;
label_23afe4:
    // 0x23afe4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_23afe8:
    if (ctx->pc == 0x23AFE8u) {
        ctx->pc = 0x23AFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AFE4u;
        // 0x23afe8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AFECu;
        goto label_23afec;
    }
    ctx->pc = 0x23AFE4u;
    {
        const bool branch_taken_0x23afe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AFE4u;
        // 0x23afe8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23afe4) {
            ctx->pc = 0x23B034u;
            goto label_23b034;
        }
    }
    ctx->pc = 0x23AFECu;
label_23afec:
    // 0x23afec: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x23afecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_23aff0:
    // 0x23aff0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x23aff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_23aff4:
    // 0x23aff4: 0xb01018  mult        $v0, $a1, $s0
    ctx->pc = 0x23aff4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_23aff8:
    // 0x23aff8: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x23aff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_23affc:
    // 0x23affc: 0xc10c313  jal         func_430C4C
label_23b000:
    if (ctx->pc == 0x23B000u) {
        ctx->pc = 0x23B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AFFCu;
        // 0x23b000: 0x24a503c8  addiu       $a1, $a1, 0x3C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B004u;
        goto label_23b004;
    }
    ctx->pc = 0x23AFFCu;
    SET_GPR_U32(ctx, 31, 0x23B004u);
    ctx->pc = 0x23B000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AFFCu;
    // 0x23b000: 0x24a503c8  addiu       $a1, $a1, 0x3C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x23AFFCu, 0x23B004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B004u;
label_23b004:
    // 0x23b004: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_23b008:
    if (ctx->pc == 0x23B008u) {
        ctx->pc = 0x23B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B004u;
        // 0x23b008: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B00Cu;
        goto label_23b00c;
    }
    ctx->pc = 0x23B004u;
    {
        const bool branch_taken_0x23b004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B004u;
        // 0x23b008: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b004) {
            ctx->pc = 0x23B0B4u;
            goto label_23b0b4;
        }
    }
    ctx->pc = 0x23B00Cu;
label_23b00c:
    // 0x23b00c: 0x1000000a  b           . + 4 + (0xA << 2)
label_23b010:
    if (ctx->pc == 0x23B010u) {
        ctx->pc = 0x23B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B00Cu;
        // 0x23b010: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B014u;
        goto label_23b014;
    }
    ctx->pc = 0x23B00Cu;
    {
        const bool branch_taken_0x23b00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B00Cu;
        // 0x23b010: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b00c) {
            ctx->pc = 0x23B038u;
            goto label_23b038;
        }
    }
    ctx->pc = 0x23B014u;
label_23b014:
    // 0x23b014: 0xc088ac6  jal         func_222B18
label_23b018:
    if (ctx->pc == 0x23B018u) {
        ctx->pc = 0x23B018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B014u;
        // 0x23b018: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B01Cu;
        goto label_23b01c;
    }
    ctx->pc = 0x23B014u;
    SET_GPR_U32(ctx, 31, 0x23B01Cu);
    ctx->pc = 0x23B018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B014u;
    // 0x23b018: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x23B014u, 0x23B01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B01Cu;
label_23b01c:
    // 0x23b01c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x23b01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23b020:
    // 0x23b020: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23b020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23b024:
    // 0x23b024: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x23b024u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
label_23b028:
    // 0x23b028: 0xc08b710  jal         func_22DC40
label_23b02c:
    if (ctx->pc == 0x23B02Cu) {
        ctx->pc = 0x23B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B028u;
        // 0x23b02c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B030u;
        goto label_23b030;
    }
    ctx->pc = 0x23B028u;
    SET_GPR_U32(ctx, 31, 0x23B030u);
    ctx->pc = 0x23B02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B028u;
    // 0x23b02c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DC40u, 0x23B028u, 0x23B030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B030u;
label_23b030:
    // 0x23b030: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23b030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23b034:
    // 0x23b034: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x23b034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_23b038:
    // 0x23b038: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x23b038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23b03c:
    // 0x23b03c: 0x26440468  addiu       $a0, $s2, 0x468
    ctx->pc = 0x23b03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1128));
label_23b040:
    // 0x23b040: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x23b040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_23b044:
    // 0x23b044: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x23b044u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_23b048:
    // 0x23b048: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x23b048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_23b04c:
    // 0x23b04c: 0xc042f0e  jal         func_10BC38
label_23b050:
    if (ctx->pc == 0x23B050u) {
        ctx->pc = 0x23B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B04Cu;
        // 0x23b050: 0x24100028  addiu       $s0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B054u;
        goto label_23b054;
    }
    ctx->pc = 0x23B04Cu;
    SET_GPR_U32(ctx, 31, 0x23B054u);
    ctx->pc = 0x23B050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B04Cu;
    // 0x23b050: 0x24100028  addiu       $s0, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x23B04Cu, 0x23B054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B054u;
label_23b054:
    // 0x23b054: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x23b054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23b058:
    // 0x23b058: 0x2406029d  addiu       $a2, $zero, 0x29D
    ctx->pc = 0x23b058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 669));
label_23b05c:
    // 0x23b05c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x23b05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_23b060:
    // 0x23b060: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x23b060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_23b064:
    // 0x23b064: 0x26440490  addiu       $a0, $s2, 0x490
    ctx->pc = 0x23b064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
label_23b068:
    // 0x23b068: 0xc042f0e  jal         func_10BC38
label_23b06c:
    if (ctx->pc == 0x23B06Cu) {
        ctx->pc = 0x23B06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B068u;
        // 0x23b06c: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B070u;
        goto label_23b070;
    }
    ctx->pc = 0x23B068u;
    SET_GPR_U32(ctx, 31, 0x23B070u);
    ctx->pc = 0x23B06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B068u;
    // 0x23b06c: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x23B068u, 0x23B070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B070u;
label_23b070:
    // 0x23b070: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x23b070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_23b074:
    // 0x23b074: 0xd01018  mult        $v0, $a2, $s0
    ctx->pc = 0x23b074u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_23b078:
    // 0x23b078: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x23b078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_23b07c:
    // 0x23b07c: 0x8e0203e8  lw          $v0, 0x3E8($s0)
    ctx->pc = 0x23b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1000)));
label_23b080:
    // 0x23b080: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_23b084:
    if (ctx->pc == 0x23B084u) {
        ctx->pc = 0x23B084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B080u;
        // 0x23b084: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B088u;
        goto label_23b088;
    }
    ctx->pc = 0x23B080u;
    {
        const bool branch_taken_0x23b080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B080u;
        // 0x23b084: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b080) {
            ctx->pc = 0x23B0B4u;
            goto label_23b0b4;
        }
    }
    ctx->pc = 0x23B088u;
label_23b088:
    // 0x23b088: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x23b088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_23b08c:
    // 0x23b08c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x23b08cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_23b090:
    // 0x23b090: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23b090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_23b094:
    // 0x23b094: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x23b094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_23b098:
    // 0x23b098: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23b098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23b09c:
    // 0x23b09c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x23b09cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_23b0a0:
    // 0x23b0a0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x23b0a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23b0a4:
    // 0x23b0a4: 0xc0968f8  jal         func_25A3E0
label_23b0a8:
    if (ctx->pc == 0x23B0A8u) {
        ctx->pc = 0x23B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0A4u;
        // 0x23b0a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B0ACu;
        goto label_23b0ac;
    }
    ctx->pc = 0x23B0A4u;
    SET_GPR_U32(ctx, 31, 0x23B0ACu);
    ctx->pc = 0x23B0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B0A4u;
    // 0x23b0a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3E0u, 0x23B0A4u, 0x23B0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B0ACu;
label_23b0ac:
    // 0x23b0ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23b0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23b0b0:
    // 0x23b0b0: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x23b0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_23b0b4:
    // 0x23b0b4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x23b0b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_23b0b8:
    // 0x23b0b8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x23b0b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_23b0bc:
    // 0x23b0bc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x23b0bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_23b0c0:
    // 0x23b0c0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x23b0c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_23b0c4:
    // 0x23b0c4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x23b0c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23b0c8:
    // 0x23b0c8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x23b0c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23b0cc:
    // 0x23b0cc: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x23b0ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23b0d0:
    // 0x23b0d0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x23b0d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23b0d4:
    // 0x23b0d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23b0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23b0d8:
    // 0x23b0d8: 0x3e00008  jr          $ra
label_23b0dc:
    if (ctx->pc == 0x23B0DCu) {
        ctx->pc = 0x23B0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0D8u;
        // 0x23b0dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B0E0u;
        goto label_fallthrough_0x23b0d8;
    }
    ctx->pc = 0x23B0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0D8u;
        // 0x23b0dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23b0d8:
    ctx->pc = 0x23B0E0u;
}
