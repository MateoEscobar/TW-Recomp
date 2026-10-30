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

// Function: sub_0027EC20
// Address: 0x27ec20 - 0x27f1a0
void sub_0027EC20_0x27ec20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027EC20_0x27ec20");
#endif

    switch (ctx->pc) {
        case 0x27ec48u: goto label_27ec48;
        case 0x27ec54u: goto label_27ec54;
        case 0x27ec68u: goto label_27ec68;
        case 0x27ec78u: goto label_27ec78;
        case 0x27ec88u: goto label_27ec88;
        case 0x27ecb8u: goto label_27ecb8;
        case 0x27ece0u: goto label_27ece0;
        case 0x27ecf8u: goto label_27ecf8;
        case 0x27ed14u: goto label_27ed14;
        case 0x27ed34u: goto label_27ed34;
        case 0x27ed44u: goto label_27ed44;
        case 0x27ed80u: goto label_27ed80;
        case 0x27ed90u: goto label_27ed90;
        case 0x27ed98u: goto label_27ed98;
        case 0x27edb0u: goto label_27edb0;
        case 0x27edd0u: goto label_27edd0;
        case 0x27ede8u: goto label_27ede8;
        case 0x27edf8u: goto label_27edf8;
        case 0x27ee18u: goto label_27ee18;
        case 0x27ee30u: goto label_27ee30;
        case 0x27ee40u: goto label_27ee40;
        case 0x27ee60u: goto label_27ee60;
        case 0x27ee70u: goto label_27ee70;
        case 0x27ee78u: goto label_27ee78;
        case 0x27ee88u: goto label_27ee88;
        case 0x27ee98u: goto label_27ee98;
        case 0x27eeacu: goto label_27eeac;
        case 0x27eeccu: goto label_27eecc;
        case 0x27eee0u: goto label_27eee0;
        case 0x27eefcu: goto label_27eefc;
        case 0x27ef14u: goto label_27ef14;
        case 0x27ef5cu: goto label_27ef5c;
        case 0x27ef6cu: goto label_27ef6c;
        case 0x27ef7cu: goto label_27ef7c;
        case 0x27ef8cu: goto label_27ef8c;
        case 0x27efa0u: goto label_27efa0;
        case 0x27efc0u: goto label_27efc0;
        case 0x27efd0u: goto label_27efd0;
        case 0x27efe4u: goto label_27efe4;
        case 0x27effcu: goto label_27effc;
        case 0x27f024u: goto label_27f024;
        case 0x27f074u: goto label_27f074;
        case 0x27f080u: goto label_27f080;
        case 0x27f090u: goto label_27f090;
        case 0x27f0a0u: goto label_27f0a0;
        case 0x27f0b0u: goto label_27f0b0;
        case 0x27f0dcu: goto label_27f0dc;
        case 0x27f0ecu: goto label_27f0ec;
        case 0x27f0fcu: goto label_27f0fc;
        case 0x27f10cu: goto label_27f10c;
        case 0x27f13cu: goto label_27f13c;
        case 0x27f14cu: goto label_27f14c;
        case 0x27f15cu: goto label_27f15c;
        case 0x27f16cu: goto label_27f16c;
        case 0x27f17cu: goto label_27f17c;
        default: break;
    }

    ctx->pc = 0x27ec20u;

    // 0x27ec20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x27ec20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x27ec24: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x27ec24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x27ec28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27ec28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ec2c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x27ec2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x27ec30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27ec30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27ec34: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x27ec34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x27ec38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27ec38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27ec3c: 0x261300c4  addiu       $s3, $s0, 0xC4
    ctx->pc = 0x27ec3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x27ec40: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x27EC40u;
    SET_GPR_U32(ctx, 31, 0x27EC48u);
    ctx->pc = 0x27EC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EC40u;
    // 0x27ec44: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x27EC40u, 0x27EC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EC48u;
label_27ec48:
    // 0x27ec48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27ec48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ec4c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27EC4Cu;
    SET_GPR_U32(ctx, 31, 0x27EC54u);
    ctx->pc = 0x27EC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EC4Cu;
    // 0x27ec50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27EC4Cu, 0x27EC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EC54u;
label_27ec54:
    // 0x27ec54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27ec54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ec58: 0x12400149  beqz        $s2, . + 4 + (0x149 << 2)
    ctx->pc = 0x27EC58u;
    {
        const bool branch_taken_0x27ec58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC58u;
        // 0x27ec5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec58) {
            ctx->pc = 0x27F180u;
            goto label_27f180;
        }
    }
    ctx->pc = 0x27EC60u;
    // 0x27ec60: 0xc088e38  jal         func_2238E0
    ctx->pc = 0x27EC60u;
    SET_GPR_U32(ctx, 31, 0x27EC68u);
    ctx->pc = 0x27EC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EC60u;
    // 0x27ec64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238E0u, 0x27EC60u, 0x27EC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EC68u;
label_27ec68:
    // 0x27ec68: 0x10400145  beqz        $v0, . + 4 + (0x145 << 2)
    ctx->pc = 0x27EC68u;
    {
        const bool branch_taken_0x27ec68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC68u;
        // 0x27ec6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec68) {
            ctx->pc = 0x27F180u;
            goto label_27f180;
        }
    }
    ctx->pc = 0x27EC70u;
    // 0x27ec70: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27EC70u;
    SET_GPR_U32(ctx, 31, 0x27EC78u);
    ctx->pc = 0x27EC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EC70u;
    // 0x27ec74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27EC70u, 0x27EC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EC78u;
label_27ec78:
    // 0x27ec78: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x27EC78u;
    {
        const bool branch_taken_0x27ec78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC78u;
        // 0x27ec7c: 0x3c0505c7  lui         $a1, 0x5C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec78) {
            ctx->pc = 0x27ED08u;
            goto label_27ed08;
        }
    }
    ctx->pc = 0x27EC80u;
    // 0x27ec80: 0xc09512e  jal         func_2544B8
    ctx->pc = 0x27EC80u;
    SET_GPR_U32(ctx, 31, 0x27EC88u);
    ctx->pc = 0x27EC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EC80u;
    // 0x27ec84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544B8u, 0x27EC80u, 0x27EC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EC88u;
label_27ec88:
    // 0x27ec88: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x27ec88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x27ec8c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x27ec8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x27ec90: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27ec90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27ec94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ec94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ec98: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x27ec98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x27ec9c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x27ec9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x27eca0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27eca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27eca4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27eca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eca8: 0x46020502  mul.s       $f20, $f0, $f2
    ctx->pc = 0x27eca8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x27ecac: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x27ecacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27ecb0: 0xc08a684  jal         func_229A10
    ctx->pc = 0x27ECB0u;
    SET_GPR_U32(ctx, 31, 0x27ECB8u);
    ctx->pc = 0x27ECB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ECB0u;
    // 0x27ecb4: 0x4601a528  max.s       $f20, $f20, $f1 (Delay Slot)
    ctx->f[20] = std::max(ctx->f[20], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x229A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229A10u, 0x27ECB0u, 0x27ECB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ECB8u;
label_27ecb8:
    // 0x27ecb8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x27ecb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x27ecbc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27ecbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x27ecc0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27ecc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27ecc4: 0x0  nop
    ctx->pc = 0x27ecc4u;
    // NOP
    // 0x27ecc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27ecc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27eccc: 0x0  nop
    ctx->pc = 0x27ecccu;
    // NOP
    // 0x27ecd0: 0x450100b9  bc1t        . + 4 + (0xB9 << 2)
    ctx->pc = 0x27ECD0u;
    {
        const bool branch_taken_0x27ecd0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27ECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ECD0u;
        // 0x27ecd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ecd0) {
            ctx->pc = 0x27EFB8u;
            goto label_27efb8;
        }
    }
    ctx->pc = 0x27ECD8u;
    // 0x27ecd8: 0xc08a658  jal         func_229960
    ctx->pc = 0x27ECD8u;
    SET_GPR_U32(ctx, 31, 0x27ECE0u);
    ctx->pc = 0x27ECDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ECD8u;
    // 0x27ecdc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229960u, 0x27ECD8u, 0x27ECE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ECE0u;
label_27ece0:
    // 0x27ece0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x27ece0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ece4: 0x0  nop
    ctx->pc = 0x27ece4u;
    // NOP
    // 0x27ece8: 0x450100b3  bc1t        . + 4 + (0xB3 << 2)
    ctx->pc = 0x27ECE8u;
    {
        const bool branch_taken_0x27ece8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ECE8u;
        // 0x27ecec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ece8) {
            ctx->pc = 0x27EFB8u;
            goto label_27efb8;
        }
    }
    ctx->pc = 0x27ECF0u;
    // 0x27ecf0: 0xc087090  jal         func_21C240
    ctx->pc = 0x27ECF0u;
    SET_GPR_U32(ctx, 31, 0x27ECF8u);
    ctx->pc = 0x27ECF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ECF0u;
    // 0x27ecf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C240u, 0x27ECF0u, 0x27ECF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ECF8u;
label_27ecf8:
    // 0x27ecf8: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x27ECF8u;
    {
        const bool branch_taken_0x27ecf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ECF8u;
        // 0x27ecfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ecf8) {
            ctx->pc = 0x27EFB8u;
            goto label_27efb8;
        }
    }
    ctx->pc = 0x27ED00u;
    // 0x27ed00: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x27ED00u;
    {
        const bool branch_taken_0x27ed00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED00u;
        // 0x27ed04: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed00) {
            ctx->pc = 0x27F184u;
            goto label_27f184;
        }
    }
    ctx->pc = 0x27ED08u;
label_27ed08:
    // 0x27ed08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ed08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ed0c: 0xc089998  jal         func_226660
    ctx->pc = 0x27ED0Cu;
    SET_GPR_U32(ctx, 31, 0x27ED14u);
    ctx->pc = 0x27ED10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ED0Cu;
    // 0x27ed10: 0x34a5eee1  ori         $a1, $a1, 0xEEE1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61153);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27ED0Cu, 0x27ED14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ED14u;
label_27ed14:
    // 0x27ed14: 0x1440011a  bnez        $v0, . + 4 + (0x11A << 2)
    ctx->pc = 0x27ED14u;
    {
        const bool branch_taken_0x27ed14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED14u;
        // 0x27ed18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed14) {
            ctx->pc = 0x27F180u;
            goto label_27f180;
        }
    }
    ctx->pc = 0x27ED1Cu;
    // 0x27ed1c: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x27ed1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x27ed20: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x27ed20u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x27ed24: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x27ED24u;
    {
        const bool branch_taken_0x27ed24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ed24) {
            ctx->pc = 0x27EDE0u;
            goto label_27ede0;
        }
    }
    ctx->pc = 0x27ED2Cu;
    // 0x27ed2c: 0xc09ee10  jal         func_27B840
    ctx->pc = 0x27ED2Cu;
    SET_GPR_U32(ctx, 31, 0x27ED34u);
    ctx->pc = 0x27ED30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ED2Cu;
    // 0x27ed30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B840u, 0x27ED2Cu, 0x27ED34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ED34u;
label_27ed34:
    // 0x27ed34: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x27ED34u;
    {
        const bool branch_taken_0x27ed34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ed34) {
            ctx->pc = 0x27EE80u;
            goto label_27ee80;
        }
    }
    ctx->pc = 0x27ED3Cu;
    // 0x27ed3c: 0xc089944  jal         func_226510
    ctx->pc = 0x27ED3Cu;
    SET_GPR_U32(ctx, 31, 0x27ED44u);
    ctx->pc = 0x27ED40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ED3Cu;
    // 0x27ed40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226510u, 0x27ED3Cu, 0x27ED44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ED44u;
label_27ed44:
    // 0x27ed44: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27ed44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x27ed48: 0xc4410278  lwc1        $f1, 0x278($v0)
    ctx->pc = 0x27ed48u;
    { uint32_t bits = FAST_READ32(0x510278u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ed4c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27ed4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ed50: 0x0  nop
    ctx->pc = 0x27ed50u;
    // NOP
    // 0x27ed54: 0x45010098  bc1t        . + 4 + (0x98 << 2)
    ctx->pc = 0x27ED54u;
    {
        const bool branch_taken_0x27ed54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED54u;
        // 0x27ed58: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed54) {
            ctx->pc = 0x27EFB8u;
            goto label_27efb8;
        }
    }
    ctx->pc = 0x27ED5Cu;
    // 0x27ed5c: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x27ed5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x27ed60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27ed60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27ed64: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27ed64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27ed68: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x27ed68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27ed6c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x27ed6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x27ed70: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x27ED70u;
    {
        const bool branch_taken_0x27ed70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ed70) {
            ctx->pc = 0x27EDC8u;
            goto label_27edc8;
        }
    }
    ctx->pc = 0x27ED78u;
    // 0x27ed78: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27ED78u;
    SET_GPR_U32(ctx, 31, 0x27ED80u);
    ctx->pc = 0x27ED7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ED78u;
    // 0x27ed7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27ED78u, 0x27ED80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ED80u;
label_27ed80:
    // 0x27ed80: 0x240500e7  addiu       $a1, $zero, 0xE7
    ctx->pc = 0x27ed80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
    // 0x27ed84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27ed84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ed88: 0xc0950ba  jal         func_2542E8
    ctx->pc = 0x27ED88u;
    SET_GPR_U32(ctx, 31, 0x27ED90u);
    ctx->pc = 0x27ED8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ED88u;
    // 0x27ed8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2542E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2542E8u, 0x27ED88u, 0x27ED90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ED90u;
label_27ed90:
    // 0x27ed90: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x27ED90u;
    SET_GPR_U32(ctx, 31, 0x27ED98u);
    ctx->pc = 0x27ED94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ED90u;
    // 0x27ed94: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x27ED90u, 0x27ED98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ED98u;
label_27ed98:
    // 0x27ed98: 0xde0300e0  ld          $v1, 0xE0($s0)
    ctx->pc = 0x27ed98u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x27ed9c: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x27ed9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x27eda0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27eda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eda4: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x27eda4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x27eda8: 0xc09970a  jal         func_265C28
    ctx->pc = 0x27EDA8u;
    SET_GPR_U32(ctx, 31, 0x27EDB0u);
    ctx->pc = 0x27EDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EDA8u;
    // 0x27edac: 0x43280a  movz        $a1, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265C28u, 0x27EDA8u, 0x27EDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EDB0u;
label_27edb0:
    // 0x27edb0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x27EDB0u;
    {
        const bool branch_taken_0x27edb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EDB0u;
        // 0x27edb4: 0x2403fff7  addiu       $v1, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27edb0) {
            ctx->pc = 0x27EE58u;
            goto label_27ee58;
        }
    }
    ctx->pc = 0x27EDB8u;
    // 0x27edb8: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x27edb8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x27edbc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27edbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27edc0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x27EDC0u;
    {
        const bool branch_taken_0x27edc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EDC0u;
        // 0x27edc4: 0xfe2200e0  sd          $v0, 0xE0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27edc0) {
            ctx->pc = 0x27EE58u;
            goto label_27ee58;
        }
    }
    ctx->pc = 0x27EDC8u;
label_27edc8:
    // 0x27edc8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27EDC8u;
    SET_GPR_U32(ctx, 31, 0x27EDD0u);
    ctx->pc = 0x27EDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EDC8u;
    // 0x27edcc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27EDC8u, 0x27EDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EDD0u;
label_27edd0:
    // 0x27edd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27edd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27edd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27edd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27edd8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x27EDD8u;
    {
        const bool branch_taken_0x27edd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EDD8u;
        // 0x27eddc: 0x240600e1  addiu       $a2, $zero, 0xE1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27edd8) {
            ctx->pc = 0x27EE6Cu;
            goto label_27ee6c;
        }
    }
    ctx->pc = 0x27EDE0u;
label_27ede0:
    // 0x27ede0: 0xc09ee10  jal         func_27B840
    ctx->pc = 0x27EDE0u;
    SET_GPR_U32(ctx, 31, 0x27EDE8u);
    ctx->pc = 0x27EDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EDE0u;
    // 0x27ede4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B840u, 0x27EDE0u, 0x27EDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EDE8u;
label_27ede8:
    // 0x27ede8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x27EDE8u;
    {
        const bool branch_taken_0x27ede8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ede8) {
            ctx->pc = 0x27EE28u;
            goto label_27ee28;
        }
    }
    ctx->pc = 0x27EDF0u;
    // 0x27edf0: 0xc089944  jal         func_226510
    ctx->pc = 0x27EDF0u;
    SET_GPR_U32(ctx, 31, 0x27EDF8u);
    ctx->pc = 0x27EDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EDF0u;
    // 0x27edf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226510u, 0x27EDF0u, 0x27EDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EDF8u;
label_27edf8:
    // 0x27edf8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x27edfc: 0xc4410278  lwc1        $f1, 0x278($v0)
    ctx->pc = 0x27edfcu;
    { uint32_t bits = FAST_READ32(0x510278u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ee00: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27ee00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ee04: 0x0  nop
    ctx->pc = 0x27ee04u;
    // NOP
    // 0x27ee08: 0x4501006b  bc1t        . + 4 + (0x6B << 2)
    ctx->pc = 0x27EE08u;
    {
        const bool branch_taken_0x27ee08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27ee08) {
            ctx->pc = 0x27EFB8u;
            goto label_27efb8;
        }
    }
    ctx->pc = 0x27EE10u;
    // 0x27ee10: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27EE10u;
    SET_GPR_U32(ctx, 31, 0x27EE18u);
    ctx->pc = 0x27EE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EE10u;
    // 0x27ee14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27EE10u, 0x27EE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EE18u;
label_27ee18:
    // 0x27ee18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27ee18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ee1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ee1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ee20: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x27EE20u;
    {
        const bool branch_taken_0x27ee20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EE20u;
        // 0x27ee24: 0x240600e1  addiu       $a2, $zero, 0xE1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ee20) {
            ctx->pc = 0x27EE6Cu;
            goto label_27ee6c;
        }
    }
    ctx->pc = 0x27EE28u;
label_27ee28:
    // 0x27ee28: 0xc09ee1a  jal         func_27B868
    ctx->pc = 0x27EE28u;
    SET_GPR_U32(ctx, 31, 0x27EE30u);
    ctx->pc = 0x27EE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EE28u;
    // 0x27ee2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B868u, 0x27EE28u, 0x27EE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EE30u;
label_27ee30:
    // 0x27ee30: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x27EE30u;
    {
        const bool branch_taken_0x27ee30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ee30) {
            ctx->pc = 0x27EE80u;
            goto label_27ee80;
        }
    }
    ctx->pc = 0x27EE38u;
    // 0x27ee38: 0xc089944  jal         func_226510
    ctx->pc = 0x27EE38u;
    SET_GPR_U32(ctx, 31, 0x27EE40u);
    ctx->pc = 0x27EE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EE38u;
    // 0x27ee3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226510u, 0x27EE38u, 0x27EE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EE40u;
label_27ee40:
    // 0x27ee40: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27ee40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x27ee44: 0xc4410278  lwc1        $f1, 0x278($v0)
    ctx->pc = 0x27ee44u;
    { uint32_t bits = FAST_READ32(0x510278u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ee48: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27ee48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ee4c: 0x0  nop
    ctx->pc = 0x27ee4cu;
    // NOP
    // 0x27ee50: 0x45010059  bc1t        . + 4 + (0x59 << 2)
    ctx->pc = 0x27EE50u;
    {
        const bool branch_taken_0x27ee50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27ee50) {
            ctx->pc = 0x27EFB8u;
            goto label_27efb8;
        }
    }
    ctx->pc = 0x27EE58u;
label_27ee58:
    // 0x27ee58: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27EE58u;
    SET_GPR_U32(ctx, 31, 0x27EE60u);
    ctx->pc = 0x27EE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EE58u;
    // 0x27ee5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27EE58u, 0x27EE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EE60u;
label_27ee60:
    // 0x27ee60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27ee60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ee64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ee64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ee68: 0x240600e7  addiu       $a2, $zero, 0xE7
    ctx->pc = 0x27ee68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
label_27ee6c:
    // 0x27ee6c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x27ee6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27ee70:
    // 0x27ee70: 0xc098ab2  jal         func_262AC8
    ctx->pc = 0x27EE70u;
    SET_GPR_U32(ctx, 31, 0x27EE78u);
    ctx->pc = 0x27EE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EE70u;
    // 0x27ee74: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AC8u, 0x27EE70u, 0x27EE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EE78u;
label_27ee78:
    // 0x27ee78: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x27EE78u;
    {
        const bool branch_taken_0x27ee78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EE78u;
        // 0x27ee7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ee78) {
            ctx->pc = 0x27F180u;
            goto label_27f180;
        }
    }
    ctx->pc = 0x27EE80u;
label_27ee80:
    // 0x27ee80: 0xc09ed78  jal         func_27B5E0
    ctx->pc = 0x27EE80u;
    SET_GPR_U32(ctx, 31, 0x27EE88u);
    ctx->pc = 0x27EE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EE80u;
    // 0x27ee84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B5E0u, 0x27EE80u, 0x27EE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EE88u;
label_27ee88:
    // 0x27ee88: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x27EE88u;
    {
        const bool branch_taken_0x27ee88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ee88) {
            ctx->pc = 0x27EF74u;
            goto label_27ef74;
        }
    }
    ctx->pc = 0x27EE90u;
    // 0x27ee90: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x27EE90u;
    SET_GPR_U32(ctx, 31, 0x27EE98u);
    ctx->pc = 0x27EE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EE90u;
    // 0x27ee94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x27EE90u, 0x27EE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EE98u;
label_27ee98:
    // 0x27ee98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27ee98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ee9c: 0x5443001f  bnel        $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x27EE9Cu;
    {
        const bool branch_taken_0x27ee9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27ee9c) {
            ctx->pc = 0x27EEA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27EE9Cu;
            // 0x27eea0: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27EF1Cu;
            goto label_27ef1c;
        }
    }
    ctx->pc = 0x27EEA4u;
    // 0x27eea4: 0xc089944  jal         func_226510
    ctx->pc = 0x27EEA4u;
    SET_GPR_U32(ctx, 31, 0x27EEACu);
    ctx->pc = 0x27EEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EEA4u;
    // 0x27eea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226510u, 0x27EEA4u, 0x27EEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EEACu;
label_27eeac:
    // 0x27eeac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27eeacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x27eeb0: 0xc4410278  lwc1        $f1, 0x278($v0)
    ctx->pc = 0x27eeb0u;
    { uint32_t bits = FAST_READ32(0x510278u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27eeb4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27eeb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27eeb8: 0x0  nop
    ctx->pc = 0x27eeb8u;
    // NOP
    // 0x27eebc: 0x4501003e  bc1t        . + 4 + (0x3E << 2)
    ctx->pc = 0x27EEBCu;
    {
        const bool branch_taken_0x27eebc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27eebc) {
            ctx->pc = 0x27EFB8u;
            goto label_27efb8;
        }
    }
    ctx->pc = 0x27EEC4u;
    // 0x27eec4: 0xc08c68e  jal         func_231A38
    ctx->pc = 0x27EEC4u;
    SET_GPR_U32(ctx, 31, 0x27EECCu);
    ctx->pc = 0x27EEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EEC4u;
    // 0x27eec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A38u, 0x27EEC4u, 0x27EECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EECCu;
label_27eecc:
    // 0x27eecc: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x27eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x27eed0: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x27EED0u;
    {
        const bool branch_taken_0x27eed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27eed0) {
            ctx->pc = 0x27EEF4u;
            goto label_27eef4;
        }
    }
    ctx->pc = 0x27EED8u;
    // 0x27eed8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27EED8u;
    SET_GPR_U32(ctx, 31, 0x27EEE0u);
    ctx->pc = 0x27EEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EED8u;
    // 0x27eedc: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27EED8u, 0x27EEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EEE0u;
label_27eee0:
    // 0x27eee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27eee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eee4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27eee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eee8: 0x240601f0  addiu       $a2, $zero, 0x1F0
    ctx->pc = 0x27eee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
    // 0x27eeec: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x27EEECu;
    {
        const bool branch_taken_0x27eeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EEECu;
        // 0x27eef0: 0x3c070080  lui         $a3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eeec) {
            ctx->pc = 0x27EE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27ee70;
        }
    }
    ctx->pc = 0x27EEF4u;
label_27eef4:
    // 0x27eef4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27EEF4u;
    SET_GPR_U32(ctx, 31, 0x27EEFCu);
    ctx->pc = 0x27EEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EEF4u;
    // 0x27eef8: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27EEF4u, 0x27EEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EEFCu;
label_27eefc:
    // 0x27eefc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27eefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ef00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27ef00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ef04: 0x240601e8  addiu       $a2, $zero, 0x1E8
    ctx->pc = 0x27ef04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 488));
    // 0x27ef08: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x27ef08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x27ef0c: 0xc098ab2  jal         func_262AC8
    ctx->pc = 0x27EF0Cu;
    SET_GPR_U32(ctx, 31, 0x27EF14u);
    ctx->pc = 0x27EF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EF0Cu;
    // 0x27ef10: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AC8u, 0x27EF0Cu, 0x27EF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EF14u;
label_27ef14:
    // 0x27ef14: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x27EF14u;
    {
        const bool branch_taken_0x27ef14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EF14u;
        // 0x27ef18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef14) {
            ctx->pc = 0x27F180u;
            goto label_27f180;
        }
    }
    ctx->pc = 0x27EF1Cu;
label_27ef1c:
    // 0x27ef1c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x27ef1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27ef20: 0xa44000bc  sh          $zero, 0xBC($v0)
    ctx->pc = 0x27ef20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 188), (uint16_t)GPR_U32(ctx, 0));
    // 0x27ef24: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x27ef24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x27ef28: 0xa46400bc  sh          $a0, 0xBC($v1)
    ctx->pc = 0x27ef28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 188), (uint16_t)GPR_U32(ctx, 4));
    // 0x27ef2c: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x27ef2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x27ef30: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x27ef30u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x27ef34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27EF34u;
    {
        const bool branch_taken_0x27ef34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EF34u;
        // 0x27ef38: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef34) {
            ctx->pc = 0x27EF50u;
            goto label_27ef50;
        }
    }
    ctx->pc = 0x27EF3Cu;
    // 0x27ef3c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27ef3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x27ef40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27ef40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27ef44: 0xc4400998  lwc1        $f0, 0x998($v0)
    ctx->pc = 0x27ef44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ef48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27EF48u;
    {
        const bool branch_taken_0x27ef48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EF48u;
        // 0x27ef4c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef48) {
            ctx->pc = 0x27EF54u;
            goto label_27ef54;
        }
    }
    ctx->pc = 0x27EF50u;
label_27ef50:
    // 0x27ef50: 0xc44c0998  lwc1        $f12, 0x998($v0)
    ctx->pc = 0x27ef50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27ef54:
    // 0x27ef54: 0xc089912  jal         func_226448
    ctx->pc = 0x27EF54u;
    SET_GPR_U32(ctx, 31, 0x27EF5Cu);
    ctx->pc = 0x27EF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EF54u;
    // 0x27ef58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226448u, 0x27EF54u, 0x27EF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EF5Cu;
label_27ef5c:
    // 0x27ef5c: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x27ef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x27ef60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ef60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ef64: 0xc09c2ce  jal         func_270B38
    ctx->pc = 0x27EF64u;
    SET_GPR_U32(ctx, 31, 0x27EF6Cu);
    ctx->pc = 0x27EF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EF64u;
    // 0x27ef68: 0x8c45006c  lw          $a1, 0x6C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270B38u, 0x27EF64u, 0x27EF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EF6Cu;
label_27ef6c:
    // 0x27ef6c: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x27EF6Cu;
    {
        const bool branch_taken_0x27ef6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EF6Cu;
        // 0x27ef70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef6c) {
            ctx->pc = 0x27F180u;
            goto label_27f180;
        }
    }
    ctx->pc = 0x27EF74u;
label_27ef74:
    // 0x27ef74: 0xc09ed82  jal         func_27B608
    ctx->pc = 0x27EF74u;
    SET_GPR_U32(ctx, 31, 0x27EF7Cu);
    ctx->pc = 0x27EF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EF74u;
    // 0x27ef78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B608u, 0x27EF74u, 0x27EF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EF7Cu;
label_27ef7c:
    // 0x27ef7c: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x27EF7Cu;
    {
        const bool branch_taken_0x27ef7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ef7c) {
            ctx->pc = 0x27F088u;
            goto label_27f088;
        }
    }
    ctx->pc = 0x27EF84u;
    // 0x27ef84: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x27EF84u;
    SET_GPR_U32(ctx, 31, 0x27EF8Cu);
    ctx->pc = 0x27EF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EF84u;
    // 0x27ef88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x27EF84u, 0x27EF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EF8Cu;
label_27ef8c:
    // 0x27ef8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27ef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ef90: 0x5443001f  bnel        $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x27EF90u;
    {
        const bool branch_taken_0x27ef90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27ef90) {
            ctx->pc = 0x27EF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27EF90u;
            // 0x27ef94: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F010u;
            goto label_27f010;
        }
    }
    ctx->pc = 0x27EF98u;
    // 0x27ef98: 0xc089944  jal         func_226510
    ctx->pc = 0x27EF98u;
    SET_GPR_U32(ctx, 31, 0x27EFA0u);
    ctx->pc = 0x27EF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EF98u;
    // 0x27ef9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226510u, 0x27EF98u, 0x27EFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EFA0u;
label_27efa0:
    // 0x27efa0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x27efa4: 0xc4410278  lwc1        $f1, 0x278($v0)
    ctx->pc = 0x27efa4u;
    { uint32_t bits = FAST_READ32(0x510278u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27efa8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27efa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27efac: 0x0  nop
    ctx->pc = 0x27efacu;
    // NOP
    // 0x27efb0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27EFB0u;
    {
        const bool branch_taken_0x27efb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27efb0) {
            ctx->pc = 0x27EFC8u;
            goto label_27efc8;
        }
    }
    ctx->pc = 0x27EFB8u;
label_27efb8:
    // 0x27efb8: 0xc09c51c  jal         func_271470
    ctx->pc = 0x27EFB8u;
    SET_GPR_U32(ctx, 31, 0x27EFC0u);
    ctx->pc = 0x27EFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EFB8u;
    // 0x27efbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271470u, 0x27EFB8u, 0x27EFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EFC0u;
label_27efc0:
    // 0x27efc0: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x27EFC0u;
    {
        const bool branch_taken_0x27efc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EFC0u;
        // 0x27efc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27efc0) {
            ctx->pc = 0x27F180u;
            goto label_27f180;
        }
    }
    ctx->pc = 0x27EFC8u;
label_27efc8:
    // 0x27efc8: 0xc08c68e  jal         func_231A38
    ctx->pc = 0x27EFC8u;
    SET_GPR_U32(ctx, 31, 0x27EFD0u);
    ctx->pc = 0x27EFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EFC8u;
    // 0x27efcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A38u, 0x27EFC8u, 0x27EFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EFD0u;
label_27efd0:
    // 0x27efd0: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x27efd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x27efd4: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27EFD4u;
    {
        const bool branch_taken_0x27efd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27efd4) {
            ctx->pc = 0x27EFF4u;
            goto label_27eff4;
        }
    }
    ctx->pc = 0x27EFDCu;
    // 0x27efdc: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27EFDCu;
    SET_GPR_U32(ctx, 31, 0x27EFE4u);
    ctx->pc = 0x27EFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EFDCu;
    // 0x27efe0: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27EFDCu, 0x27EFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EFE4u;
label_27efe4:
    // 0x27efe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27efe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27efe8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27efe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27efec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27EFECu;
    {
        const bool branch_taken_0x27efec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EFECu;
        // 0x27eff0: 0x240601f0  addiu       $a2, $zero, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27efec) {
            ctx->pc = 0x27F008u;
            goto label_27f008;
        }
    }
    ctx->pc = 0x27EFF4u;
label_27eff4:
    // 0x27eff4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27EFF4u;
    SET_GPR_U32(ctx, 31, 0x27EFFCu);
    ctx->pc = 0x27EFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EFF4u;
    // 0x27eff8: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27EFF4u, 0x27EFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EFFCu;
label_27effc:
    // 0x27effc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27effcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f000: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27f000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f004: 0x240601e8  addiu       $a2, $zero, 0x1E8
    ctx->pc = 0x27f004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 488));
label_27f008:
    // 0x27f008: 0x1000ff99  b           . + 4 + (-0x67 << 2)
    ctx->pc = 0x27F008u;
    {
        const bool branch_taken_0x27f008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F008u;
        // 0x27f00c: 0x3c070080  lui         $a3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f008) {
            ctx->pc = 0x27EE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27ee70;
        }
    }
    ctx->pc = 0x27F010u;
label_27f010:
    // 0x27f010: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x27f010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x27f014: 0x2484b898  addiu       $a0, $a0, -0x4768
    ctx->pc = 0x27f014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949016));
    // 0x27f018: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27f018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27f01c: 0xc0cd526  jal         func_335498
    ctx->pc = 0x27F01Cu;
    SET_GPR_U32(ctx, 31, 0x27F024u);
    ctx->pc = 0x27F020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F01Cu;
    // 0x27f020: 0xa44000bc  sh          $zero, 0xBC($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 188), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x27F01Cu, 0x27F024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F024u;
label_27f024:
    // 0x27f024: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x27f024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x27f028: 0xa46200bc  sh          $v0, 0xBC($v1)
    ctx->pc = 0x27f028u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 188), (uint16_t)GPR_U32(ctx, 2));
    // 0x27f02c: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x27f02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x27f030: 0x820301b0  lb          $v1, 0x1B0($s0)
    ctx->pc = 0x27f030u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x27f034: 0x848200bc  lh          $v0, 0xBC($a0)
    ctx->pc = 0x27f034u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x27f038: 0x8c850068  lw          $a1, 0x68($a0)
    ctx->pc = 0x27f038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x27f03c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x27f03cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x27f040: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x27f040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x27f044: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27F044u;
    {
        const bool branch_taken_0x27f044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F044u;
        // 0x27f048: 0x458821  addu        $s1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f044) {
            ctx->pc = 0x27F064u;
            goto label_27f064;
        }
    }
    ctx->pc = 0x27F04Cu;
    // 0x27f04c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x27f050: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27f050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x27f054: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27f054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27f058: 0xc4400998  lwc1        $f0, 0x998($v0)
    ctx->pc = 0x27f058u;
    { uint32_t bits = FAST_READ32(0x510998u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f05c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27F05Cu;
    {
        const bool branch_taken_0x27f05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F05Cu;
        // 0x27f060: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f05c) {
            ctx->pc = 0x27F06Cu;
            goto label_27f06c;
        }
    }
    ctx->pc = 0x27F064u;
label_27f064:
    // 0x27f064: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27f064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x27f068: 0xc44c0998  lwc1        $f12, 0x998($v0)
    ctx->pc = 0x27f068u;
    { uint32_t bits = FAST_READ32(0x510998u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27f06c:
    // 0x27f06c: 0xc089912  jal         func_226448
    ctx->pc = 0x27F06Cu;
    SET_GPR_U32(ctx, 31, 0x27F074u);
    ctx->pc = 0x27F070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F06Cu;
    // 0x27f070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226448u, 0x27F06Cu, 0x27F074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F074u;
label_27f074:
    // 0x27f074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f078: 0xc09c2ce  jal         func_270B38
    ctx->pc = 0x27F078u;
    SET_GPR_U32(ctx, 31, 0x27F080u);
    ctx->pc = 0x27F07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F078u;
    // 0x27f07c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270B38u, 0x27F078u, 0x27F080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F080u;
label_27f080:
    // 0x27f080: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x27F080u;
    {
        const bool branch_taken_0x27f080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F080u;
        // 0x27f084: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f080) {
            ctx->pc = 0x27F180u;
            goto label_27f180;
        }
    }
    ctx->pc = 0x27F088u;
label_27f088:
    // 0x27f088: 0xc09efc2  jal         func_27BF08
    ctx->pc = 0x27F088u;
    SET_GPR_U32(ctx, 31, 0x27F090u);
    ctx->pc = 0x27F08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F088u;
    // 0x27f08c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BF08u, 0x27F088u, 0x27F090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F090u;
label_27f090:
    // 0x27f090: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27F090u;
    {
        const bool branch_taken_0x27f090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f090) {
            ctx->pc = 0x27F0A8u;
            goto label_27f0a8;
        }
    }
    ctx->pc = 0x27F098u;
    // 0x27f098: 0xc09c426  jal         func_271098
    ctx->pc = 0x27F098u;
    SET_GPR_U32(ctx, 31, 0x27F0A0u);
    ctx->pc = 0x27F09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F098u;
    // 0x27f09c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271098u, 0x27F098u, 0x27F0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F0A0u;
label_27f0a0:
    // 0x27f0a0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x27F0A0u;
    {
        const bool branch_taken_0x27f0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F0A0u;
        // 0x27f0a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f0a0) {
            ctx->pc = 0x27F180u;
            goto label_27f180;
        }
    }
    ctx->pc = 0x27F0A8u;
label_27f0a8:
    // 0x27f0a8: 0xc09effc  jal         func_27BFF0
    ctx->pc = 0x27F0A8u;
    SET_GPR_U32(ctx, 31, 0x27F0B0u);
    ctx->pc = 0x27F0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F0A8u;
    // 0x27f0ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BFF0u, 0x27F0A8u, 0x27F0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F0B0u;
label_27f0b0:
    // 0x27f0b0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27F0B0u;
    {
        const bool branch_taken_0x27f0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F0B0u;
        // 0x27f0b4: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f0b0) {
            ctx->pc = 0x27F0E4u;
            goto label_27f0e4;
        }
    }
    ctx->pc = 0x27F0B8u;
    // 0x27f0b8: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x27f0b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x27f0bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27f0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27f0c0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27f0c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27f0c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x27f0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27f0c8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x27f0c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x27f0cc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27F0CCu;
    {
        const bool branch_taken_0x27f0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f0cc) {
            ctx->pc = 0x27F0E4u;
            goto label_27f0e4;
        }
    }
    ctx->pc = 0x27F0D4u;
    // 0x27f0d4: 0xc09c602  jal         func_271808
    ctx->pc = 0x27F0D4u;
    SET_GPR_U32(ctx, 31, 0x27F0DCu);
    ctx->pc = 0x27F0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F0D4u;
    // 0x27f0d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271808u, 0x27F0D4u, 0x27F0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F0DCu;
label_27f0dc:
    // 0x27f0dc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x27F0DCu;
    {
        const bool branch_taken_0x27f0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F0DCu;
        // 0x27f0e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f0dc) {
            ctx->pc = 0x27F180u;
            goto label_27f180;
        }
    }
    ctx->pc = 0x27F0E4u;
label_27f0e4:
    // 0x27f0e4: 0xc09efe6  jal         func_27BF98
    ctx->pc = 0x27F0E4u;
    SET_GPR_U32(ctx, 31, 0x27F0ECu);
    ctx->pc = 0x27F0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F0E4u;
    // 0x27f0e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BF98u, 0x27F0E4u, 0x27F0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F0ECu;
label_27f0ec:
    // 0x27f0ec: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x27F0ECu;
    {
        const bool branch_taken_0x27f0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f0ec) {
            ctx->pc = 0x27F154u;
            goto label_27f154;
        }
    }
    ctx->pc = 0x27F0F4u;
    // 0x27f0f4: 0xc088a42  jal         func_222908
    ctx->pc = 0x27F0F4u;
    SET_GPR_U32(ctx, 31, 0x27F0FCu);
    ctx->pc = 0x27F0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F0F4u;
    // 0x27f0f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222908u, 0x27F0F4u, 0x27F0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F0FCu;
label_27f0fc:
    // 0x27f0fc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x27F0FCu;
    {
        const bool branch_taken_0x27f0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f0fc) {
            ctx->pc = 0x27F154u;
            goto label_27f154;
        }
    }
    ctx->pc = 0x27F104u;
    // 0x27f104: 0xc088f88  jal         func_223E20
    ctx->pc = 0x27F104u;
    SET_GPR_U32(ctx, 31, 0x27F10Cu);
    ctx->pc = 0x27F108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F104u;
    // 0x27f108: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E20u, 0x27F104u, 0x27F10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F10Cu;
label_27f10c:
    // 0x27f10c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27F10Cu;
    {
        const bool branch_taken_0x27f10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f10c) {
            ctx->pc = 0x27F154u;
            goto label_27f154;
        }
    }
    ctx->pc = 0x27F114u;
    // 0x27f114: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x27f114u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x27f118: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x27f118u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x27f11c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27F11Cu;
    {
        const bool branch_taken_0x27f11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F11Cu;
        // 0x27f120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f11c) {
            ctx->pc = 0x27F134u;
            goto label_27f134;
        }
    }
    ctx->pc = 0x27F124u;
    // 0x27f124: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x27f124u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x27f128: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x27f128u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x27f12c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27F12Cu;
    {
        const bool branch_taken_0x27f12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f12c) {
            ctx->pc = 0x27F144u;
            goto label_27f144;
        }
    }
    ctx->pc = 0x27F134u;
label_27f134:
    // 0x27f134: 0xc08b40c  jal         func_22D030
    ctx->pc = 0x27F134u;
    SET_GPR_U32(ctx, 31, 0x27F13Cu);
    ctx->pc = 0x27F138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F134u;
    // 0x27f138: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D030u, 0x27F134u, 0x27F13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F13Cu;
label_27f13c:
    // 0x27f13c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x27F13Cu;
    {
        const bool branch_taken_0x27f13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F13Cu;
        // 0x27f140: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f13c) {
            ctx->pc = 0x27F180u;
            goto label_27f180;
        }
    }
    ctx->pc = 0x27F144u;
label_27f144:
    // 0x27f144: 0xc098094  jal         func_260250
    ctx->pc = 0x27F144u;
    SET_GPR_U32(ctx, 31, 0x27F14Cu);
    ctx->pc = 0x27F148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F144u;
    // 0x27f148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260250u, 0x27F144u, 0x27F14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F14Cu;
label_27f14c:
    // 0x27f14c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27F14Cu;
    {
        const bool branch_taken_0x27f14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F14Cu;
        // 0x27f150: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f14c) {
            ctx->pc = 0x27F180u;
            goto label_27f180;
        }
    }
    ctx->pc = 0x27F154u;
label_27f154:
    // 0x27f154: 0xc09ee84  jal         func_27BA10
    ctx->pc = 0x27F154u;
    SET_GPR_U32(ctx, 31, 0x27F15Cu);
    ctx->pc = 0x27F158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F154u;
    // 0x27f158: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BA10u, 0x27F154u, 0x27F15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F15Cu;
label_27f15c:
    // 0x27f15c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27F15Cu;
    {
        const bool branch_taken_0x27f15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F15Cu;
        // 0x27f160: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f15c) {
            ctx->pc = 0x27F180u;
            goto label_27f180;
        }
    }
    ctx->pc = 0x27F164u;
    // 0x27f164: 0xc0897fc  jal         func_225FF0
    ctx->pc = 0x27F164u;
    SET_GPR_U32(ctx, 31, 0x27F16Cu);
    ctx->pc = 0x27F168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F164u;
    // 0x27f168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225FF0u, 0x27F164u, 0x27F16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F16Cu;
label_27f16c:
    // 0x27f16c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F16Cu;
    {
        const bool branch_taken_0x27f16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F16Cu;
        // 0x27f170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f16c) {
            ctx->pc = 0x27F180u;
            goto label_27f180;
        }
    }
    ctx->pc = 0x27F174u;
    // 0x27f174: 0xc09ca6a  jal         func_2729A8
    ctx->pc = 0x27F174u;
    SET_GPR_U32(ctx, 31, 0x27F17Cu);
    ctx->pc = 0x27F178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F174u;
    // 0x27f178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2729A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2729A8u, 0x27F174u, 0x27F17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F17Cu;
label_27f17c:
    // 0x27f17c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27f17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27f180:
    // 0x27f180: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x27f180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27f184:
    // 0x27f184: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x27f184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27f188: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27f188u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f18c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x27f18cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27f190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f194: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x27f194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27f198: 0x3e00008  jr          $ra
    ctx->pc = 0x27F198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F198u;
        // 0x27f19c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F1A0u;
}
