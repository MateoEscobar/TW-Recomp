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

// Function: sub_0025AF90
// Address: 0x25af90 - 0x25b200
void sub_0025AF90_0x25af90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AF90_0x25af90");
#endif

    switch (ctx->pc) {
        case 0x25af90u: goto label_25af90;
        case 0x25af94u: goto label_25af94;
        case 0x25af98u: goto label_25af98;
        case 0x25af9cu: goto label_25af9c;
        case 0x25afa0u: goto label_25afa0;
        case 0x25afa4u: goto label_25afa4;
        case 0x25afa8u: goto label_25afa8;
        case 0x25afacu: goto label_25afac;
        case 0x25afb0u: goto label_25afb0;
        case 0x25afb4u: goto label_25afb4;
        case 0x25afb8u: goto label_25afb8;
        case 0x25afbcu: goto label_25afbc;
        case 0x25afc0u: goto label_25afc0;
        case 0x25afc4u: goto label_25afc4;
        case 0x25afc8u: goto label_25afc8;
        case 0x25afccu: goto label_25afcc;
        case 0x25afd0u: goto label_25afd0;
        case 0x25afd4u: goto label_25afd4;
        case 0x25afd8u: goto label_25afd8;
        case 0x25afdcu: goto label_25afdc;
        case 0x25afe0u: goto label_25afe0;
        case 0x25afe4u: goto label_25afe4;
        case 0x25afe8u: goto label_25afe8;
        case 0x25afecu: goto label_25afec;
        case 0x25aff0u: goto label_25aff0;
        case 0x25aff4u: goto label_25aff4;
        case 0x25aff8u: goto label_25aff8;
        case 0x25affcu: goto label_25affc;
        case 0x25b000u: goto label_25b000;
        case 0x25b004u: goto label_25b004;
        case 0x25b008u: goto label_25b008;
        case 0x25b00cu: goto label_25b00c;
        case 0x25b010u: goto label_25b010;
        case 0x25b014u: goto label_25b014;
        case 0x25b018u: goto label_25b018;
        case 0x25b01cu: goto label_25b01c;
        case 0x25b020u: goto label_25b020;
        case 0x25b024u: goto label_25b024;
        case 0x25b028u: goto label_25b028;
        case 0x25b02cu: goto label_25b02c;
        case 0x25b030u: goto label_25b030;
        case 0x25b034u: goto label_25b034;
        case 0x25b038u: goto label_25b038;
        case 0x25b03cu: goto label_25b03c;
        case 0x25b040u: goto label_25b040;
        case 0x25b044u: goto label_25b044;
        case 0x25b048u: goto label_25b048;
        case 0x25b04cu: goto label_25b04c;
        case 0x25b050u: goto label_25b050;
        case 0x25b054u: goto label_25b054;
        case 0x25b058u: goto label_25b058;
        case 0x25b05cu: goto label_25b05c;
        case 0x25b060u: goto label_25b060;
        case 0x25b064u: goto label_25b064;
        case 0x25b068u: goto label_25b068;
        case 0x25b06cu: goto label_25b06c;
        case 0x25b070u: goto label_25b070;
        case 0x25b074u: goto label_25b074;
        case 0x25b078u: goto label_25b078;
        case 0x25b07cu: goto label_25b07c;
        case 0x25b080u: goto label_25b080;
        case 0x25b084u: goto label_25b084;
        case 0x25b088u: goto label_25b088;
        case 0x25b08cu: goto label_25b08c;
        case 0x25b090u: goto label_25b090;
        case 0x25b094u: goto label_25b094;
        case 0x25b098u: goto label_25b098;
        case 0x25b09cu: goto label_25b09c;
        case 0x25b0a0u: goto label_25b0a0;
        case 0x25b0a4u: goto label_25b0a4;
        case 0x25b0a8u: goto label_25b0a8;
        case 0x25b0acu: goto label_25b0ac;
        case 0x25b0b0u: goto label_25b0b0;
        case 0x25b0b4u: goto label_25b0b4;
        case 0x25b0b8u: goto label_25b0b8;
        case 0x25b0bcu: goto label_25b0bc;
        case 0x25b0c0u: goto label_25b0c0;
        case 0x25b0c4u: goto label_25b0c4;
        case 0x25b0c8u: goto label_25b0c8;
        case 0x25b0ccu: goto label_25b0cc;
        case 0x25b0d0u: goto label_25b0d0;
        case 0x25b0d4u: goto label_25b0d4;
        case 0x25b0d8u: goto label_25b0d8;
        case 0x25b0dcu: goto label_25b0dc;
        case 0x25b0e0u: goto label_25b0e0;
        case 0x25b0e4u: goto label_25b0e4;
        case 0x25b0e8u: goto label_25b0e8;
        case 0x25b0ecu: goto label_25b0ec;
        case 0x25b0f0u: goto label_25b0f0;
        case 0x25b0f4u: goto label_25b0f4;
        case 0x25b0f8u: goto label_25b0f8;
        case 0x25b0fcu: goto label_25b0fc;
        case 0x25b100u: goto label_25b100;
        case 0x25b104u: goto label_25b104;
        case 0x25b108u: goto label_25b108;
        case 0x25b10cu: goto label_25b10c;
        case 0x25b110u: goto label_25b110;
        case 0x25b114u: goto label_25b114;
        case 0x25b118u: goto label_25b118;
        case 0x25b11cu: goto label_25b11c;
        case 0x25b120u: goto label_25b120;
        case 0x25b124u: goto label_25b124;
        case 0x25b128u: goto label_25b128;
        case 0x25b12cu: goto label_25b12c;
        case 0x25b130u: goto label_25b130;
        case 0x25b134u: goto label_25b134;
        case 0x25b138u: goto label_25b138;
        case 0x25b13cu: goto label_25b13c;
        case 0x25b140u: goto label_25b140;
        case 0x25b144u: goto label_25b144;
        case 0x25b148u: goto label_25b148;
        case 0x25b14cu: goto label_25b14c;
        case 0x25b150u: goto label_25b150;
        case 0x25b154u: goto label_25b154;
        case 0x25b158u: goto label_25b158;
        case 0x25b15cu: goto label_25b15c;
        case 0x25b160u: goto label_25b160;
        case 0x25b164u: goto label_25b164;
        case 0x25b168u: goto label_25b168;
        case 0x25b16cu: goto label_25b16c;
        case 0x25b170u: goto label_25b170;
        case 0x25b174u: goto label_25b174;
        case 0x25b178u: goto label_25b178;
        case 0x25b17cu: goto label_25b17c;
        case 0x25b180u: goto label_25b180;
        case 0x25b184u: goto label_25b184;
        case 0x25b188u: goto label_25b188;
        case 0x25b18cu: goto label_25b18c;
        case 0x25b190u: goto label_25b190;
        case 0x25b194u: goto label_25b194;
        case 0x25b198u: goto label_25b198;
        case 0x25b19cu: goto label_25b19c;
        case 0x25b1a0u: goto label_25b1a0;
        case 0x25b1a4u: goto label_25b1a4;
        case 0x25b1a8u: goto label_25b1a8;
        case 0x25b1acu: goto label_25b1ac;
        case 0x25b1b0u: goto label_25b1b0;
        case 0x25b1b4u: goto label_25b1b4;
        case 0x25b1b8u: goto label_25b1b8;
        case 0x25b1bcu: goto label_25b1bc;
        case 0x25b1c0u: goto label_25b1c0;
        case 0x25b1c4u: goto label_25b1c4;
        case 0x25b1c8u: goto label_25b1c8;
        case 0x25b1ccu: goto label_25b1cc;
        case 0x25b1d0u: goto label_25b1d0;
        case 0x25b1d4u: goto label_25b1d4;
        case 0x25b1d8u: goto label_25b1d8;
        case 0x25b1dcu: goto label_25b1dc;
        case 0x25b1e0u: goto label_25b1e0;
        case 0x25b1e4u: goto label_25b1e4;
        case 0x25b1e8u: goto label_25b1e8;
        case 0x25b1ecu: goto label_25b1ec;
        case 0x25b1f0u: goto label_25b1f0;
        case 0x25b1f4u: goto label_25b1f4;
        case 0x25b1f8u: goto label_25b1f8;
        case 0x25b1fcu: goto label_25b1fc;
        default: break;
    }

    ctx->pc = 0x25af90u;

label_25af90:
    // 0x25af90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x25af90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_25af94:
    // 0x25af94: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x25af94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_25af98:
    // 0x25af98: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x25af98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_25af9c:
    // 0x25af9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25af9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25afa0:
    // 0x25afa0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x25afa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_25afa4:
    // 0x25afa4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x25afa4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_25afa8:
    // 0x25afa8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x25afa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_25afac:
    // 0x25afac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x25afacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_25afb0:
    // 0x25afb0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x25afb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_25afb4:
    // 0x25afb4: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x25afb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_25afb8:
    // 0x25afb8: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x25afb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_25afbc:
    // 0x25afbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25afbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25afc0:
    // 0x25afc0: 0xc0e409a  jal         func_390268
label_25afc4:
    if (ctx->pc == 0x25AFC4u) {
        ctx->pc = 0x25AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AFC0u;
        // 0x25afc4: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AFC8u;
        goto label_25afc8;
    }
    ctx->pc = 0x25AFC0u;
    SET_GPR_U32(ctx, 31, 0x25AFC8u);
    ctx->pc = 0x25AFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AFC0u;
    // 0x25afc4: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x25AFC0u, 0x25AFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AFC8u;
label_25afc8:
    // 0x25afc8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x25afc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25afcc:
    // 0x25afcc: 0x8e1400d8  lw          $s4, 0xD8($s0)
    ctx->pc = 0x25afccu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_25afd0:
    // 0x25afd0: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x25afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_25afd4:
    // 0x25afd4: 0x2455d9f0  addiu       $s5, $v0, -0x2610
    ctx->pc = 0x25afd4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957552));
label_25afd8:
    // 0x25afd8: 0xc041532  jal         func_1054C8
label_25afdc:
    if (ctx->pc == 0x25AFDCu) {
        ctx->pc = 0x25AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AFD8u;
        // 0x25afdc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AFE0u;
        goto label_25afe0;
    }
    ctx->pc = 0x25AFD8u;
    SET_GPR_U32(ctx, 31, 0x25AFE0u);
    ctx->pc = 0x25AFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AFD8u;
    // 0x25afdc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25AFD8u, 0x25AFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AFE0u;
label_25afe0:
    // 0x25afe0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25afe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25afe4:
    // 0x25afe4: 0xc041532  jal         func_1054C8
label_25afe8:
    if (ctx->pc == 0x25AFE8u) {
        ctx->pc = 0x25AFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AFE4u;
        // 0x25afe8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AFECu;
        goto label_25afec;
    }
    ctx->pc = 0x25AFE4u;
    SET_GPR_U32(ctx, 31, 0x25AFECu);
    ctx->pc = 0x25AFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AFE4u;
    // 0x25afe8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25AFE4u, 0x25AFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AFECu;
label_25afec:
    // 0x25afec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25afecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25aff0:
    // 0x25aff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25aff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25aff4:
    // 0x25aff4: 0xc089998  jal         func_226660
label_25aff8:
    if (ctx->pc == 0x25AFF8u) {
        ctx->pc = 0x25AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AFF4u;
        // 0x25aff8: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AFFCu;
        goto label_25affc;
    }
    ctx->pc = 0x25AFF4u;
    SET_GPR_U32(ctx, 31, 0x25AFFCu);
    ctx->pc = 0x25AFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AFF4u;
    // 0x25aff8: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x25AFF4u, 0x25AFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AFFCu;
label_25affc:
    // 0x25affc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_25b000:
    if (ctx->pc == 0x25B000u) {
        ctx->pc = 0x25B004u;
        goto label_25b004;
    }
    ctx->pc = 0x25AFFCu;
    {
        const bool branch_taken_0x25affc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25affc) {
            ctx->pc = 0x25B018u;
            goto label_25b018;
        }
    }
    ctx->pc = 0x25B004u;
label_25b004:
    // 0x25b004: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x25b004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_25b008:
    // 0x25b008: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x25b008u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_25b00c:
    // 0x25b00c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25b00cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25b010:
    // 0x25b010: 0x0  nop
    ctx->pc = 0x25b010u;
    // NOP
label_25b014:
    // 0x25b014: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x25b014u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_25b018:
    // 0x25b018: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_25b01c:
    if (ctx->pc == 0x25B01Cu) {
        ctx->pc = 0x25B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B018u;
        // 0x25b01c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B020u;
        goto label_25b020;
    }
    ctx->pc = 0x25B018u;
    {
        const bool branch_taken_0x25b018 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B018u;
        // 0x25b01c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b018) {
            ctx->pc = 0x25B038u;
            goto label_25b038;
        }
    }
    ctx->pc = 0x25B020u;
label_25b020:
    // 0x25b020: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x25b020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_25b024:
    // 0x25b024: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25b024u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25b028:
    // 0x25b028: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25b028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25b02c:
    // 0x25b02c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25b02cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25b030:
    // 0x25b030: 0xc041b20  jal         func_106C80
label_25b034:
    if (ctx->pc == 0x25B034u) {
        ctx->pc = 0x25B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B030u;
        // 0x25b034: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B038u;
        goto label_25b038;
    }
    ctx->pc = 0x25B030u;
    SET_GPR_U32(ctx, 31, 0x25B038u);
    ctx->pc = 0x25B034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B030u;
    // 0x25b034: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25B030u, 0x25B038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B038u;
label_25b038:
    // 0x25b038: 0xc05d484  jal         func_175210
label_25b03c:
    if (ctx->pc == 0x25B03Cu) {
        ctx->pc = 0x25B03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B038u;
        // 0x25b03c: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B040u;
        goto label_25b040;
    }
    ctx->pc = 0x25B038u;
    SET_GPR_U32(ctx, 31, 0x25B040u);
    ctx->pc = 0x25B03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B038u;
    // 0x25b03c: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25B038u, 0x25B040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B040u;
label_25b040:
    // 0x25b040: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25b040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25b044:
    // 0x25b044: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25b044u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25b048:
    // 0x25b048: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25b048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25b04c:
    // 0x25b04c: 0xa0f809  jalr        $a1
label_25b050:
    if (ctx->pc == 0x25B050u) {
        ctx->pc = 0x25B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B04Cu;
        // 0x25b050: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B054u;
        goto label_25b054;
    }
    ctx->pc = 0x25B04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25B054u);
        ctx->pc = 0x25B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B04Cu;
        // 0x25b050: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B04Cu, 0x25B054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B054u;
label_25b054:
    // 0x25b054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25b054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25b058:
    // 0x25b058: 0xc087016  jal         func_21C058
label_25b05c:
    if (ctx->pc == 0x25B05Cu) {
        ctx->pc = 0x25B05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B058u;
        // 0x25b05c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B060u;
        goto label_25b060;
    }
    ctx->pc = 0x25B058u;
    SET_GPR_U32(ctx, 31, 0x25B060u);
    ctx->pc = 0x25B05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B058u;
    // 0x25b05c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25B058u, 0x25B060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B060u;
label_25b060:
    // 0x25b060: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_25b064:
    if (ctx->pc == 0x25B064u) {
        ctx->pc = 0x25B064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B060u;
        // 0x25b064: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B068u;
        goto label_25b068;
    }
    ctx->pc = 0x25B060u;
    {
        const bool branch_taken_0x25b060 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B060u;
        // 0x25b064: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b060) {
            ctx->pc = 0x25B0A0u;
            goto label_25b0a0;
        }
    }
    ctx->pc = 0x25B068u;
label_25b068:
    // 0x25b068: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x25b068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_25b06c:
    // 0x25b06c: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x25b06cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25b070:
    // 0x25b070: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25b070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25b074:
    // 0x25b074: 0x8c670038  lw          $a3, 0x38($v1)
    ctx->pc = 0x25b074u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_25b078:
    // 0x25b078: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x25b078u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b07c:
    // 0x25b07c: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x25b07cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_25b080:
    // 0x25b080: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x25b080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_25b084:
    // 0x25b084: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x25b084u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_25b088:
    // 0x25b088: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25b088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25b08c:
    // 0x25b08c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25b08cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25b090:
    // 0x25b090: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x25b090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_25b094:
    // 0x25b094: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x25b094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_25b098:
    // 0x25b098: 0xc041bd4  jal         func_106F50
label_25b09c:
    if (ctx->pc == 0x25B09Cu) {
        ctx->pc = 0x25B09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B098u;
        // 0x25b09c: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B0A0u;
        goto label_25b0a0;
    }
    ctx->pc = 0x25B098u;
    SET_GPR_U32(ctx, 31, 0x25B0A0u);
    ctx->pc = 0x25B09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B098u;
    // 0x25b09c: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F50u, 0x25B098u, 0x25B0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B0A0u;
label_25b0a0:
    // 0x25b0a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25b0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25b0a4:
    // 0x25b0a4: 0x240500c1  addiu       $a1, $zero, 0xC1
    ctx->pc = 0x25b0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
label_25b0a8:
    // 0x25b0a8: 0x24160004  addiu       $s6, $zero, 0x4
    ctx->pc = 0x25b0a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25b0ac:
    // 0x25b0ac: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x25b0acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_25b0b0:
    // 0x25b0b0: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x25b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_25b0b4:
    // 0x25b0b4: 0x40f809  jalr        $v0
label_25b0b8:
    if (ctx->pc == 0x25B0B8u) {
        ctx->pc = 0x25B0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B0B4u;
        // 0x25b0b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B0BCu;
        goto label_25b0bc;
    }
    ctx->pc = 0x25B0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25B0BCu);
        ctx->pc = 0x25B0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B0B4u;
        // 0x25b0b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B0B4u, 0x25B0BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B0BCu;
label_25b0bc:
    // 0x25b0bc: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x25b0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_25b0c0:
    // 0x25b0c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25b0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25b0c4:
    // 0x25b0c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25b0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25b0c8:
    // 0x25b0c8: 0xc05d53a  jal         func_1754E8
label_25b0cc:
    if (ctx->pc == 0x25B0CCu) {
        ctx->pc = 0x25B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B0C8u;
        // 0x25b0cc: 0xac760018  sw          $s6, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B0D0u;
        goto label_25b0d0;
    }
    ctx->pc = 0x25B0C8u;
    SET_GPR_U32(ctx, 31, 0x25B0D0u);
    ctx->pc = 0x25B0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B0C8u;
    // 0x25b0cc: 0xac760018  sw          $s6, 0x18($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25B0C8u, 0x25B0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B0D0u;
label_25b0d0:
    // 0x25b0d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25b0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25b0d4:
    // 0x25b0d4: 0xc05d4f6  jal         func_1753D8
label_25b0d8:
    if (ctx->pc == 0x25B0D8u) {
        ctx->pc = 0x25B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B0D4u;
        // 0x25b0d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B0DCu;
        goto label_25b0dc;
    }
    ctx->pc = 0x25B0D4u;
    SET_GPR_U32(ctx, 31, 0x25B0DCu);
    ctx->pc = 0x25B0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B0D4u;
    // 0x25b0d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25B0D4u, 0x25B0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B0DCu;
label_25b0dc:
    // 0x25b0dc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x25b0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_25b0e0:
    // 0x25b0e0: 0xc0899aa  jal         func_2266A8
label_25b0e4:
    if (ctx->pc == 0x25B0E4u) {
        ctx->pc = 0x25B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B0E0u;
        // 0x25b0e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B0E8u;
        goto label_25b0e8;
    }
    ctx->pc = 0x25B0E0u;
    SET_GPR_U32(ctx, 31, 0x25B0E8u);
    ctx->pc = 0x25B0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B0E0u;
    // 0x25b0e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25B0E0u, 0x25B0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B0E8u;
label_25b0e8:
    // 0x25b0e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25b0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25b0ec:
    // 0x25b0ec: 0xc041532  jal         func_1054C8
label_25b0f0:
    if (ctx->pc == 0x25B0F0u) {
        ctx->pc = 0x25B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B0ECu;
        // 0x25b0f0: 0x8e7400d8  lw          $s4, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B0F4u;
        goto label_25b0f4;
    }
    ctx->pc = 0x25B0ECu;
    SET_GPR_U32(ctx, 31, 0x25B0F4u);
    ctx->pc = 0x25B0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B0ECu;
    // 0x25b0f0: 0x8e7400d8  lw          $s4, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25B0ECu, 0x25B0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B0F4u;
label_25b0f4:
    // 0x25b0f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25b0f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25b0f8:
    // 0x25b0f8: 0xc041532  jal         func_1054C8
label_25b0fc:
    if (ctx->pc == 0x25B0FCu) {
        ctx->pc = 0x25B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B0F8u;
        // 0x25b0fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B100u;
        goto label_25b100;
    }
    ctx->pc = 0x25B0F8u;
    SET_GPR_U32(ctx, 31, 0x25B100u);
    ctx->pc = 0x25B0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B0F8u;
    // 0x25b0fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25B0F8u, 0x25B100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B100u;
label_25b100:
    // 0x25b100: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25b100u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25b104:
    // 0x25b104: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_25b108:
    if (ctx->pc == 0x25B108u) {
        ctx->pc = 0x25B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B104u;
        // 0x25b108: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B10Cu;
        goto label_25b10c;
    }
    ctx->pc = 0x25B104u;
    {
        const bool branch_taken_0x25b104 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B104u;
        // 0x25b108: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b104) {
            ctx->pc = 0x25B124u;
            goto label_25b124;
        }
    }
    ctx->pc = 0x25B10Cu;
label_25b10c:
    // 0x25b10c: 0x8e6500d8  lw          $a1, 0xD8($s3)
    ctx->pc = 0x25b10cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_25b110:
    // 0x25b110: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25b110u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25b114:
    // 0x25b114: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25b114u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25b118:
    // 0x25b118: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25b118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25b11c:
    // 0x25b11c: 0xc041b20  jal         func_106C80
label_25b120:
    if (ctx->pc == 0x25B120u) {
        ctx->pc = 0x25B120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B11Cu;
        // 0x25b120: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B124u;
        goto label_25b124;
    }
    ctx->pc = 0x25B11Cu;
    SET_GPR_U32(ctx, 31, 0x25B124u);
    ctx->pc = 0x25B120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B11Cu;
    // 0x25b120: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25B11Cu, 0x25B124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B124u;
label_25b124:
    // 0x25b124: 0xc05d484  jal         func_175210
label_25b128:
    if (ctx->pc == 0x25B128u) {
        ctx->pc = 0x25B128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B124u;
        // 0x25b128: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B12Cu;
        goto label_25b12c;
    }
    ctx->pc = 0x25B124u;
    SET_GPR_U32(ctx, 31, 0x25B12Cu);
    ctx->pc = 0x25B128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B124u;
    // 0x25b128: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25B124u, 0x25B12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B12Cu;
label_25b12c:
    // 0x25b12c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25b12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25b130:
    // 0x25b130: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25b130u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25b134:
    // 0x25b134: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25b134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25b138:
    // 0x25b138: 0xa0f809  jalr        $a1
label_25b13c:
    if (ctx->pc == 0x25B13Cu) {
        ctx->pc = 0x25B13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B138u;
        // 0x25b13c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B140u;
        goto label_25b140;
    }
    ctx->pc = 0x25B138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25B140u);
        ctx->pc = 0x25B13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B138u;
        // 0x25b13c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B138u, 0x25B140u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B140u;
label_25b140:
    // 0x25b140: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25b140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25b144:
    // 0x25b144: 0xc087016  jal         func_21C058
label_25b148:
    if (ctx->pc == 0x25B148u) {
        ctx->pc = 0x25B148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B144u;
        // 0x25b148: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B14Cu;
        goto label_25b14c;
    }
    ctx->pc = 0x25B144u;
    SET_GPR_U32(ctx, 31, 0x25B14Cu);
    ctx->pc = 0x25B148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B144u;
    // 0x25b148: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25B144u, 0x25B14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B14Cu;
label_25b14c:
    // 0x25b14c: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_25b150:
    if (ctx->pc == 0x25B150u) {
        ctx->pc = 0x25B150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B14Cu;
        // 0x25b150: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B154u;
        goto label_25b154;
    }
    ctx->pc = 0x25B14Cu;
    {
        const bool branch_taken_0x25b14c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B14Cu;
        // 0x25b150: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b14c) {
            ctx->pc = 0x25B18Cu;
            goto label_25b18c;
        }
    }
    ctx->pc = 0x25B154u;
label_25b154:
    // 0x25b154: 0x8e6300d4  lw          $v1, 0xD4($s3)
    ctx->pc = 0x25b154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_25b158:
    // 0x25b158: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x25b158u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25b15c:
    // 0x25b15c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25b15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25b160:
    // 0x25b160: 0x8c670038  lw          $a3, 0x38($v1)
    ctx->pc = 0x25b160u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_25b164:
    // 0x25b164: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x25b164u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b168:
    // 0x25b168: 0x8e6500d8  lw          $a1, 0xD8($s3)
    ctx->pc = 0x25b168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_25b16c:
    // 0x25b16c: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x25b16cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_25b170:
    // 0x25b170: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x25b170u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_25b174:
    // 0x25b174: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25b174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25b178:
    // 0x25b178: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25b178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25b17c:
    // 0x25b17c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x25b17cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_25b180:
    // 0x25b180: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x25b180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_25b184:
    // 0x25b184: 0xc041bd4  jal         func_106F50
label_25b188:
    if (ctx->pc == 0x25B188u) {
        ctx->pc = 0x25B188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B184u;
        // 0x25b188: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B18Cu;
        goto label_25b18c;
    }
    ctx->pc = 0x25B184u;
    SET_GPR_U32(ctx, 31, 0x25B18Cu);
    ctx->pc = 0x25B188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B184u;
    // 0x25b188: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F50u, 0x25B184u, 0x25B18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B18Cu;
label_25b18c:
    // 0x25b18c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x25b18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25b190:
    // 0x25b190: 0x240500c1  addiu       $a1, $zero, 0xC1
    ctx->pc = 0x25b190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
label_25b194:
    // 0x25b194: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x25b194u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_25b198:
    // 0x25b198: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x25b198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_25b19c:
    // 0x25b19c: 0x60f809  jalr        $v1
label_25b1a0:
    if (ctx->pc == 0x25B1A0u) {
        ctx->pc = 0x25B1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B19Cu;
        // 0x25b1a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B1A4u;
        goto label_25b1a4;
    }
    ctx->pc = 0x25B19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25B1A4u);
        ctx->pc = 0x25B1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B19Cu;
        // 0x25b1a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B19Cu, 0x25B1A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B1A4u;
label_25b1a4:
    // 0x25b1a4: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x25b1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_25b1a8:
    // 0x25b1a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25b1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25b1ac:
    // 0x25b1ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25b1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25b1b0:
    // 0x25b1b0: 0xc05d53a  jal         func_1754E8
label_25b1b4:
    if (ctx->pc == 0x25B1B4u) {
        ctx->pc = 0x25B1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B1B0u;
        // 0x25b1b4: 0xac560018  sw          $s6, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B1B8u;
        goto label_25b1b8;
    }
    ctx->pc = 0x25B1B0u;
    SET_GPR_U32(ctx, 31, 0x25B1B8u);
    ctx->pc = 0x25B1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B1B0u;
    // 0x25b1b4: 0xac560018  sw          $s6, 0x18($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25B1B0u, 0x25B1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B1B8u;
label_25b1b8:
    // 0x25b1b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25b1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25b1bc:
    // 0x25b1bc: 0xc05d4f6  jal         func_1753D8
label_25b1c0:
    if (ctx->pc == 0x25B1C0u) {
        ctx->pc = 0x25B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B1BCu;
        // 0x25b1c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B1C4u;
        goto label_25b1c4;
    }
    ctx->pc = 0x25B1BCu;
    SET_GPR_U32(ctx, 31, 0x25B1C4u);
    ctx->pc = 0x25B1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B1BCu;
    // 0x25b1c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25B1BCu, 0x25B1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B1C4u;
label_25b1c4:
    // 0x25b1c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25b1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25b1c8:
    // 0x25b1c8: 0xc0899aa  jal         func_2266A8
label_25b1cc:
    if (ctx->pc == 0x25B1CCu) {
        ctx->pc = 0x25B1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B1C8u;
        // 0x25b1cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B1D0u;
        goto label_25b1d0;
    }
    ctx->pc = 0x25B1C8u;
    SET_GPR_U32(ctx, 31, 0x25B1D0u);
    ctx->pc = 0x25B1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B1C8u;
    // 0x25b1cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25B1C8u, 0x25B1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B1D0u;
label_25b1d0:
    // 0x25b1d0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x25b1d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25b1d4:
    // 0x25b1d4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x25b1d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25b1d8:
    // 0x25b1d8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x25b1d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25b1dc:
    // 0x25b1dc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x25b1dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25b1e0:
    // 0x25b1e0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x25b1e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25b1e4:
    // 0x25b1e4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x25b1e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25b1e8:
    // 0x25b1e8: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x25b1e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25b1ec:
    // 0x25b1ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25b1f0:
    // 0x25b1f0: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x25b1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25b1f4:
    // 0x25b1f4: 0x3e00008  jr          $ra
label_25b1f8:
    if (ctx->pc == 0x25B1F8u) {
        ctx->pc = 0x25B1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B1F4u;
        // 0x25b1f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B1FCu;
        goto label_25b1fc;
    }
    ctx->pc = 0x25B1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B1F4u;
        // 0x25b1f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B1FCu;
label_25b1fc:
    // 0x25b1fc: 0x0  nop
    ctx->pc = 0x25b1fcu;
    // NOP
    ctx->pc = 0x25b200u;
}
