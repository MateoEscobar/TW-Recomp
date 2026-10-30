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

// Function: sub_003CADD8
// Address: 0x3cadd8 - 0x3caed8
void sub_003CADD8_0x3cadd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CADD8_0x3cadd8");
#endif

    switch (ctx->pc) {
        case 0x3cadd8u: goto label_3cadd8;
        case 0x3caddcu: goto label_3caddc;
        case 0x3cade0u: goto label_3cade0;
        case 0x3cade4u: goto label_3cade4;
        case 0x3cade8u: goto label_3cade8;
        case 0x3cadecu: goto label_3cadec;
        case 0x3cadf0u: goto label_3cadf0;
        case 0x3cadf4u: goto label_3cadf4;
        case 0x3cadf8u: goto label_3cadf8;
        case 0x3cadfcu: goto label_3cadfc;
        case 0x3cae00u: goto label_3cae00;
        case 0x3cae04u: goto label_3cae04;
        case 0x3cae08u: goto label_3cae08;
        case 0x3cae0cu: goto label_3cae0c;
        case 0x3cae10u: goto label_3cae10;
        case 0x3cae14u: goto label_3cae14;
        case 0x3cae18u: goto label_3cae18;
        case 0x3cae1cu: goto label_3cae1c;
        case 0x3cae20u: goto label_3cae20;
        case 0x3cae24u: goto label_3cae24;
        case 0x3cae28u: goto label_3cae28;
        case 0x3cae2cu: goto label_3cae2c;
        case 0x3cae30u: goto label_3cae30;
        case 0x3cae34u: goto label_3cae34;
        case 0x3cae38u: goto label_3cae38;
        case 0x3cae3cu: goto label_3cae3c;
        case 0x3cae40u: goto label_3cae40;
        case 0x3cae44u: goto label_3cae44;
        case 0x3cae48u: goto label_3cae48;
        case 0x3cae4cu: goto label_3cae4c;
        case 0x3cae50u: goto label_3cae50;
        case 0x3cae54u: goto label_3cae54;
        case 0x3cae58u: goto label_3cae58;
        case 0x3cae5cu: goto label_3cae5c;
        case 0x3cae60u: goto label_3cae60;
        case 0x3cae64u: goto label_3cae64;
        case 0x3cae68u: goto label_3cae68;
        case 0x3cae6cu: goto label_3cae6c;
        case 0x3cae70u: goto label_3cae70;
        case 0x3cae74u: goto label_3cae74;
        case 0x3cae78u: goto label_3cae78;
        case 0x3cae7cu: goto label_3cae7c;
        case 0x3cae80u: goto label_3cae80;
        case 0x3cae84u: goto label_3cae84;
        case 0x3cae88u: goto label_3cae88;
        case 0x3cae8cu: goto label_3cae8c;
        case 0x3cae90u: goto label_3cae90;
        case 0x3cae94u: goto label_3cae94;
        case 0x3cae98u: goto label_3cae98;
        case 0x3cae9cu: goto label_3cae9c;
        case 0x3caea0u: goto label_3caea0;
        case 0x3caea4u: goto label_3caea4;
        case 0x3caea8u: goto label_3caea8;
        case 0x3caeacu: goto label_3caeac;
        case 0x3caeb0u: goto label_3caeb0;
        case 0x3caeb4u: goto label_3caeb4;
        case 0x3caeb8u: goto label_3caeb8;
        case 0x3caebcu: goto label_3caebc;
        case 0x3caec0u: goto label_3caec0;
        case 0x3caec4u: goto label_3caec4;
        case 0x3caec8u: goto label_3caec8;
        case 0x3caeccu: goto label_3caecc;
        case 0x3caed0u: goto label_3caed0;
        case 0x3caed4u: goto label_3caed4;
        default: break;
    }

    ctx->pc = 0x3cadd8u;

label_3cadd8:
    // 0x3cadd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3cadd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3caddc:
    // 0x3caddc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3caddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3cade0:
    // 0x3cade0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3cade0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3cade4:
    // 0x3cade4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3cade4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3cade8:
    // 0x3cade8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3cade8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3cadec:
    // 0x3cadec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3cadecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3cadf0:
    // 0x3cadf0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3cadf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cadf4:
    // 0x3cadf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3cadf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3cadf8:
    // 0x3cadf8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3cadf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3cadfc:
    // 0x3cadfc: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3cadfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3cae00:
    // 0x3cae00: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3cae00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3cae04:
    // 0x3cae04: 0x40f809  jalr        $v0
label_3cae08:
    if (ctx->pc == 0x3CAE08u) {
        ctx->pc = 0x3CAE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAE04u;
        // 0x3cae08: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAE0Cu;
        goto label_3cae0c;
    }
    ctx->pc = 0x3CAE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CAE0Cu);
        ctx->pc = 0x3CAE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAE04u;
        // 0x3cae08: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CAE04u, 0x3CAE0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CAE0Cu;
label_3cae0c:
    // 0x3cae0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3cae0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cae10:
    // 0x3cae10: 0xc0ea13a  jal         func_3A84E8
label_3cae14:
    if (ctx->pc == 0x3CAE14u) {
        ctx->pc = 0x3CAE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAE10u;
        // 0x3cae14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAE18u;
        goto label_3cae18;
    }
    ctx->pc = 0x3CAE10u;
    SET_GPR_U32(ctx, 31, 0x3CAE18u);
    ctx->pc = 0x3CAE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CAE10u;
    // 0x3cae14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3CAE10u, 0x3CAE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CAE18u;
label_3cae18:
    // 0x3cae18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cae18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cae1c:
    // 0x3cae1c: 0xc0ea13a  jal         func_3A84E8
label_3cae20:
    if (ctx->pc == 0x3CAE20u) {
        ctx->pc = 0x3CAE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAE1Cu;
        // 0x3cae20: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAE24u;
        goto label_3cae24;
    }
    ctx->pc = 0x3CAE1Cu;
    SET_GPR_U32(ctx, 31, 0x3CAE24u);
    ctx->pc = 0x3CAE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CAE1Cu;
    // 0x3cae20: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3CAE1Cu, 0x3CAE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CAE24u;
label_3cae24:
    // 0x3cae24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cae24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cae28:
    // 0x3cae28: 0xc0ea13a  jal         func_3A84E8
label_3cae2c:
    if (ctx->pc == 0x3CAE2Cu) {
        ctx->pc = 0x3CAE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAE28u;
        // 0x3cae2c: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAE30u;
        goto label_3cae30;
    }
    ctx->pc = 0x3CAE28u;
    SET_GPR_U32(ctx, 31, 0x3CAE30u);
    ctx->pc = 0x3CAE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CAE28u;
    // 0x3cae2c: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3CAE28u, 0x3CAE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CAE30u;
label_3cae30:
    // 0x3cae30: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x3cae30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_3cae34:
    // 0x3cae34: 0xc0ea146  jal         func_3A8518
label_3cae38:
    if (ctx->pc == 0x3CAE38u) {
        ctx->pc = 0x3CAE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAE34u;
        // 0x3cae38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAE3Cu;
        goto label_3cae3c;
    }
    ctx->pc = 0x3CAE34u;
    SET_GPR_U32(ctx, 31, 0x3CAE3Cu);
    ctx->pc = 0x3CAE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CAE34u;
    // 0x3cae38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3CAE34u, 0x3CAE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CAE3Cu;
label_3cae3c:
    // 0x3cae3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cae3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cae40:
    // 0x3cae40: 0xc0ea146  jal         func_3A8518
label_3cae44:
    if (ctx->pc == 0x3CAE44u) {
        ctx->pc = 0x3CAE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAE40u;
        // 0x3cae44: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAE48u;
        goto label_3cae48;
    }
    ctx->pc = 0x3CAE40u;
    SET_GPR_U32(ctx, 31, 0x3CAE48u);
    ctx->pc = 0x3CAE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CAE40u;
    // 0x3cae44: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3CAE40u, 0x3CAE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CAE48u;
label_3cae48:
    // 0x3cae48: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3cae48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cae4c:
    // 0x3cae4c: 0xc0ea146  jal         func_3A8518
label_3cae50:
    if (ctx->pc == 0x3CAE50u) {
        ctx->pc = 0x3CAE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAE4Cu;
        // 0x3cae50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAE54u;
        goto label_3cae54;
    }
    ctx->pc = 0x3CAE4Cu;
    SET_GPR_U32(ctx, 31, 0x3CAE54u);
    ctx->pc = 0x3CAE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CAE4Cu;
    // 0x3cae50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3CAE4Cu, 0x3CAE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CAE54u;
label_3cae54:
    // 0x3cae54: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x3cae54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_3cae58:
    // 0x3cae58: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3cae58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3cae5c:
    // 0x3cae5c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3cae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3cae60:
    // 0x3cae60: 0x261016c0  addiu       $s0, $s0, 0x16C0
    ctx->pc = 0x3cae60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_3cae64:
    // 0x3cae64: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x3cae64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_3cae68:
    // 0x3cae68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cae68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cae6c:
    // 0x3cae6c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3cae6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3cae70:
    // 0x3cae70: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x3cae70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_3cae74:
    // 0x3cae74: 0xc0e858c  jal         func_3A1630
label_3cae78:
    if (ctx->pc == 0x3CAE78u) {
        ctx->pc = 0x3CAE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAE74u;
        // 0x3cae78: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAE7Cu;
        goto label_3cae7c;
    }
    ctx->pc = 0x3CAE74u;
    SET_GPR_U32(ctx, 31, 0x3CAE7Cu);
    ctx->pc = 0x3CAE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CAE74u;
    // 0x3cae78: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3CAE74u, 0x3CAE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CAE7Cu;
label_3cae7c:
    // 0x3cae7c: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x3cae7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3cae80:
    // 0x3cae80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3cae80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cae84:
    // 0x3cae84: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x3cae84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
label_3cae88:
    // 0x3cae88: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x3cae88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_3cae8c:
    // 0x3cae8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3cae8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3cae90:
    // 0x3cae90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3cae90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cae94:
    // 0x3cae94: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x3cae94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3cae98:
    // 0x3cae98: 0xc0e93a2  jal         func_3A4E88
label_3cae9c:
    if (ctx->pc == 0x3CAE9Cu) {
        ctx->pc = 0x3CAE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAE98u;
        // 0x3cae9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAEA0u;
        goto label_3caea0;
    }
    ctx->pc = 0x3CAE98u;
    SET_GPR_U32(ctx, 31, 0x3CAEA0u);
    ctx->pc = 0x3CAE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CAE98u;
    // 0x3cae9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4E88u, 0x3CAE98u, 0x3CAEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CAEA0u;
label_3caea0:
    // 0x3caea0: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x3caea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_3caea4:
    // 0x3caea4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3caea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3caea8:
    // 0x3caea8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x3caea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3caeac:
    // 0x3caeac: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3caeacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3caeb0:
    // 0x3caeb0: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x3caeb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_3caeb4:
    // 0x3caeb4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x3caeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_3caeb8:
    // 0x3caeb8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3caeb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3caebc:
    // 0x3caebc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3caebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3caec0:
    // 0x3caec0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3caec0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3caec4:
    // 0x3caec4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3caec4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3caec8:
    // 0x3caec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3caec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3caecc:
    // 0x3caecc: 0x3e00008  jr          $ra
label_3caed0:
    if (ctx->pc == 0x3CAED0u) {
        ctx->pc = 0x3CAED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAECCu;
        // 0x3caed0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAED4u;
        goto label_3caed4;
    }
    ctx->pc = 0x3CAECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CAED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAECCu;
        // 0x3caed0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CAECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CAED4u;
label_3caed4:
    // 0x3caed4: 0x0  nop
    ctx->pc = 0x3caed4u;
    // NOP
    ctx->pc = 0x3caed8u;
}
