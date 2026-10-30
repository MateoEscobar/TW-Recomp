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

// Function: sub_0033CB08
// Address: 0x33cb08 - 0x33cbf0
void sub_0033CB08_0x33cb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CB08_0x33cb08");
#endif

    switch (ctx->pc) {
        case 0x33cb08u: goto label_33cb08;
        case 0x33cb0cu: goto label_33cb0c;
        case 0x33cb10u: goto label_33cb10;
        case 0x33cb14u: goto label_33cb14;
        case 0x33cb18u: goto label_33cb18;
        case 0x33cb1cu: goto label_33cb1c;
        case 0x33cb20u: goto label_33cb20;
        case 0x33cb24u: goto label_33cb24;
        case 0x33cb28u: goto label_33cb28;
        case 0x33cb2cu: goto label_33cb2c;
        case 0x33cb30u: goto label_33cb30;
        case 0x33cb34u: goto label_33cb34;
        case 0x33cb38u: goto label_33cb38;
        case 0x33cb3cu: goto label_33cb3c;
        case 0x33cb40u: goto label_33cb40;
        case 0x33cb44u: goto label_33cb44;
        case 0x33cb48u: goto label_33cb48;
        case 0x33cb4cu: goto label_33cb4c;
        case 0x33cb50u: goto label_33cb50;
        case 0x33cb54u: goto label_33cb54;
        case 0x33cb58u: goto label_33cb58;
        case 0x33cb5cu: goto label_33cb5c;
        case 0x33cb60u: goto label_33cb60;
        case 0x33cb64u: goto label_33cb64;
        case 0x33cb68u: goto label_33cb68;
        case 0x33cb6cu: goto label_33cb6c;
        case 0x33cb70u: goto label_33cb70;
        case 0x33cb74u: goto label_33cb74;
        case 0x33cb78u: goto label_33cb78;
        case 0x33cb7cu: goto label_33cb7c;
        case 0x33cb80u: goto label_33cb80;
        case 0x33cb84u: goto label_33cb84;
        case 0x33cb88u: goto label_33cb88;
        case 0x33cb8cu: goto label_33cb8c;
        case 0x33cb90u: goto label_33cb90;
        case 0x33cb94u: goto label_33cb94;
        case 0x33cb98u: goto label_33cb98;
        case 0x33cb9cu: goto label_33cb9c;
        case 0x33cba0u: goto label_33cba0;
        case 0x33cba4u: goto label_33cba4;
        case 0x33cba8u: goto label_33cba8;
        case 0x33cbacu: goto label_33cbac;
        case 0x33cbb0u: goto label_33cbb0;
        case 0x33cbb4u: goto label_33cbb4;
        case 0x33cbb8u: goto label_33cbb8;
        case 0x33cbbcu: goto label_33cbbc;
        case 0x33cbc0u: goto label_33cbc0;
        case 0x33cbc4u: goto label_33cbc4;
        case 0x33cbc8u: goto label_33cbc8;
        case 0x33cbccu: goto label_33cbcc;
        case 0x33cbd0u: goto label_33cbd0;
        case 0x33cbd4u: goto label_33cbd4;
        case 0x33cbd8u: goto label_33cbd8;
        case 0x33cbdcu: goto label_33cbdc;
        case 0x33cbe0u: goto label_33cbe0;
        case 0x33cbe4u: goto label_33cbe4;
        case 0x33cbe8u: goto label_33cbe8;
        case 0x33cbecu: goto label_33cbec;
        default: break;
    }

    ctx->pc = 0x33cb08u;

label_33cb08:
    // 0x33cb08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33cb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_33cb0c:
    // 0x33cb0c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x33cb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_33cb10:
    // 0x33cb10: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x33cb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_33cb14:
    // 0x33cb14: 0x3c110004  lui         $s1, 0x4
    ctx->pc = 0x33cb14u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4 << 16));
label_33cb18:
    // 0x33cb18: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x33cb18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33cb1c:
    // 0x33cb1c: 0x3631f2a0  ori         $s1, $s1, 0xF2A0
    ctx->pc = 0x33cb1cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)62112);
label_33cb20:
    // 0x33cb20: 0x2518821  addu        $s1, $s2, $s1
    ctx->pc = 0x33cb20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_33cb24:
    // 0x33cb24: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x33cb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_33cb28:
    // 0x33cb28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33cb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_33cb2c:
    // 0x33cb2c: 0xc0d069a  jal         func_341A68
label_33cb30:
    if (ctx->pc == 0x33CB30u) {
        ctx->pc = 0x33CB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB2Cu;
        // 0x33cb30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CB34u;
        goto label_33cb34;
    }
    ctx->pc = 0x33CB2Cu;
    SET_GPR_U32(ctx, 31, 0x33CB34u);
    ctx->pc = 0x33CB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CB2Cu;
    // 0x33cb30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341A68u, 0x33CB2Cu, 0x33CB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CB34u;
label_33cb34:
    // 0x33cb34: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x33cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_33cb38:
    // 0x33cb38: 0x3c100004  lui         $s0, 0x4
    ctx->pc = 0x33cb38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4 << 16));
label_33cb3c:
    // 0x33cb3c: 0x244216d0  addiu       $v0, $v0, 0x16D0
    ctx->pc = 0x33cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5840));
label_33cb40:
    // 0x33cb40: 0x36108000  ori         $s0, $s0, 0x8000
    ctx->pc = 0x33cb40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32768);
label_33cb44:
    // 0x33cb44: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x33cb44u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_33cb48:
    // 0x33cb48: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x33cb48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_33cb4c:
    // 0x33cb4c: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x33cb4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_33cb50:
    // 0x33cb50: 0x3463243f  ori         $v1, $v1, 0x243F
    ctx->pc = 0x33cb50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9279);
label_33cb54:
    // 0x33cb54: 0x7e047300  sq          $a0, 0x7300($s0)
    ctx->pc = 0x33cb54u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 29440), GPR_VEC(ctx, 4));
label_33cb58:
    // 0x33cb58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33cb58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33cb5c:
    // 0x33cb5c: 0xae0372e0  sw          $v1, 0x72E0($s0)
    ctx->pc = 0x33cb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29408), GPR_U32(ctx, 3));
label_33cb60:
    // 0x33cb60: 0xa60072dc  sh          $zero, 0x72DC($s0)
    ctx->pc = 0x33cb60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 29404), (uint16_t)GPR_U32(ctx, 0));
label_33cb64:
    // 0x33cb64: 0xae007310  sw          $zero, 0x7310($s0)
    ctx->pc = 0x33cb64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29456), GPR_U32(ctx, 0));
label_33cb68:
    // 0x33cb68: 0xae007360  sw          $zero, 0x7360($s0)
    ctx->pc = 0x33cb68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29536), GPR_U32(ctx, 0));
label_33cb6c:
    // 0x33cb6c: 0xae007364  sw          $zero, 0x7364($s0)
    ctx->pc = 0x33cb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29540), GPR_U32(ctx, 0));
label_33cb70:
    // 0x33cb70: 0xae007370  sw          $zero, 0x7370($s0)
    ctx->pc = 0x33cb70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29552), GPR_U32(ctx, 0));
label_33cb74:
    // 0x33cb74: 0x8e0672d0  lw          $a2, 0x72D0($s0)
    ctx->pc = 0x33cb74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29392)));
label_33cb78:
    // 0x33cb78: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x33cb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_33cb7c:
    // 0x33cb7c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x33cb7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_33cb80:
    // 0x33cb80: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x33cb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_33cb84:
    // 0x33cb84: 0x60f809  jalr        $v1
label_33cb88:
    if (ctx->pc == 0x33CB88u) {
        ctx->pc = 0x33CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB84u;
        // 0x33cb88: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CB8Cu;
        goto label_33cb8c;
    }
    ctx->pc = 0x33CB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33CB8Cu);
        ctx->pc = 0x33CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB84u;
        // 0x33cb88: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CB84u, 0x33CB8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33CB8Cu;
label_33cb8c:
    // 0x33cb8c: 0x8e0472d0  lw          $a0, 0x72D0($s0)
    ctx->pc = 0x33cb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29392)));
label_33cb90:
    // 0x33cb90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33cb90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33cb94:
    // 0x33cb94: 0x94820032  lhu         $v0, 0x32($a0)
    ctx->pc = 0x33cb94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 50)));
label_33cb98:
    // 0x33cb98: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x33cb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
label_33cb9c:
    // 0x33cb9c: 0xa4820032  sh          $v0, 0x32($a0)
    ctx->pc = 0x33cb9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 50), (uint16_t)GPR_U32(ctx, 2));
label_33cba0:
    // 0x33cba0: 0x8e067320  lw          $a2, 0x7320($s0)
    ctx->pc = 0x33cba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29472)));
label_33cba4:
    // 0x33cba4: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x33cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_33cba8:
    // 0x33cba8: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x33cba8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_33cbac:
    // 0x33cbac: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x33cbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_33cbb0:
    // 0x33cbb0: 0x60f809  jalr        $v1
label_33cbb4:
    if (ctx->pc == 0x33CBB4u) {
        ctx->pc = 0x33CBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CBB0u;
        // 0x33cbb4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CBB8u;
        goto label_33cbb8;
    }
    ctx->pc = 0x33CBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33CBB8u);
        ctx->pc = 0x33CBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CBB0u;
        // 0x33cbb4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CBB0u, 0x33CBB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33CBB8u;
label_33cbb8:
    // 0x33cbb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33cbb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33cbbc:
    // 0x33cbbc: 0xc0d01e8  jal         func_3407A0
label_33cbc0:
    if (ctx->pc == 0x33CBC0u) {
        ctx->pc = 0x33CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CBBCu;
        // 0x33cbc0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CBC4u;
        goto label_33cbc4;
    }
    ctx->pc = 0x33CBBCu;
    SET_GPR_U32(ctx, 31, 0x33CBC4u);
    ctx->pc = 0x33CBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CBBCu;
    // 0x33cbc0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3407A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3407A0u, 0x33CBBCu, 0x33CBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CBC4u;
label_33cbc4:
    // 0x33cbc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33cbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33cbc8:
    // 0x33cbc8: 0xc0d019a  jal         func_340668
label_33cbcc:
    if (ctx->pc == 0x33CBCCu) {
        ctx->pc = 0x33CBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CBC8u;
        // 0x33cbcc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CBD0u;
        goto label_33cbd0;
    }
    ctx->pc = 0x33CBC8u;
    SET_GPR_U32(ctx, 31, 0x33CBD0u);
    ctx->pc = 0x33CBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CBC8u;
    // 0x33cbcc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340668u, 0x33CBC8u, 0x33CBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CBD0u;
label_33cbd0:
    // 0x33cbd0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x33cbd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33cbd4:
    // 0x33cbd4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x33cbd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33cbd8:
    // 0x33cbd8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x33cbd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33cbdc:
    // 0x33cbdc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x33cbdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33cbe0:
    // 0x33cbe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33cbe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33cbe4:
    // 0x33cbe4: 0x3e00008  jr          $ra
label_33cbe8:
    if (ctx->pc == 0x33CBE8u) {
        ctx->pc = 0x33CBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CBE4u;
        // 0x33cbe8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CBECu;
        goto label_33cbec;
    }
    ctx->pc = 0x33CBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CBE4u;
        // 0x33cbe8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CBECu;
label_33cbec:
    // 0x33cbec: 0x0  nop
    ctx->pc = 0x33cbecu;
    // NOP
    ctx->pc = 0x33cbf0u;
}
