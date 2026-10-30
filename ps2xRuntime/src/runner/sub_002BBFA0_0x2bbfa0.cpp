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

// Function: sub_002BBFA0
// Address: 0x2bbfa0 - 0x2bc198
void sub_002BBFA0_0x2bbfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBFA0_0x2bbfa0");
#endif

    switch (ctx->pc) {
        case 0x2bbfa0u: goto label_2bbfa0;
        case 0x2bbfa4u: goto label_2bbfa4;
        case 0x2bbfa8u: goto label_2bbfa8;
        case 0x2bbfacu: goto label_2bbfac;
        case 0x2bbfb0u: goto label_2bbfb0;
        case 0x2bbfb4u: goto label_2bbfb4;
        case 0x2bbfb8u: goto label_2bbfb8;
        case 0x2bbfbcu: goto label_2bbfbc;
        case 0x2bbfc0u: goto label_2bbfc0;
        case 0x2bbfc4u: goto label_2bbfc4;
        case 0x2bbfc8u: goto label_2bbfc8;
        case 0x2bbfccu: goto label_2bbfcc;
        case 0x2bbfd0u: goto label_2bbfd0;
        case 0x2bbfd4u: goto label_2bbfd4;
        case 0x2bbfd8u: goto label_2bbfd8;
        case 0x2bbfdcu: goto label_2bbfdc;
        case 0x2bbfe0u: goto label_2bbfe0;
        case 0x2bbfe4u: goto label_2bbfe4;
        case 0x2bbfe8u: goto label_2bbfe8;
        case 0x2bbfecu: goto label_2bbfec;
        case 0x2bbff0u: goto label_2bbff0;
        case 0x2bbff4u: goto label_2bbff4;
        case 0x2bbff8u: goto label_2bbff8;
        case 0x2bbffcu: goto label_2bbffc;
        case 0x2bc000u: goto label_2bc000;
        case 0x2bc004u: goto label_2bc004;
        case 0x2bc008u: goto label_2bc008;
        case 0x2bc00cu: goto label_2bc00c;
        case 0x2bc010u: goto label_2bc010;
        case 0x2bc014u: goto label_2bc014;
        case 0x2bc018u: goto label_2bc018;
        case 0x2bc01cu: goto label_2bc01c;
        case 0x2bc020u: goto label_2bc020;
        case 0x2bc024u: goto label_2bc024;
        case 0x2bc028u: goto label_2bc028;
        case 0x2bc02cu: goto label_2bc02c;
        case 0x2bc030u: goto label_2bc030;
        case 0x2bc034u: goto label_2bc034;
        case 0x2bc038u: goto label_2bc038;
        case 0x2bc03cu: goto label_2bc03c;
        case 0x2bc040u: goto label_2bc040;
        case 0x2bc044u: goto label_2bc044;
        case 0x2bc048u: goto label_2bc048;
        case 0x2bc04cu: goto label_2bc04c;
        case 0x2bc050u: goto label_2bc050;
        case 0x2bc054u: goto label_2bc054;
        case 0x2bc058u: goto label_2bc058;
        case 0x2bc05cu: goto label_2bc05c;
        case 0x2bc060u: goto label_2bc060;
        case 0x2bc064u: goto label_2bc064;
        case 0x2bc068u: goto label_2bc068;
        case 0x2bc06cu: goto label_2bc06c;
        case 0x2bc070u: goto label_2bc070;
        case 0x2bc074u: goto label_2bc074;
        case 0x2bc078u: goto label_2bc078;
        case 0x2bc07cu: goto label_2bc07c;
        case 0x2bc080u: goto label_2bc080;
        case 0x2bc084u: goto label_2bc084;
        case 0x2bc088u: goto label_2bc088;
        case 0x2bc08cu: goto label_2bc08c;
        case 0x2bc090u: goto label_2bc090;
        case 0x2bc094u: goto label_2bc094;
        case 0x2bc098u: goto label_2bc098;
        case 0x2bc09cu: goto label_2bc09c;
        case 0x2bc0a0u: goto label_2bc0a0;
        case 0x2bc0a4u: goto label_2bc0a4;
        case 0x2bc0a8u: goto label_2bc0a8;
        case 0x2bc0acu: goto label_2bc0ac;
        case 0x2bc0b0u: goto label_2bc0b0;
        case 0x2bc0b4u: goto label_2bc0b4;
        case 0x2bc0b8u: goto label_2bc0b8;
        case 0x2bc0bcu: goto label_2bc0bc;
        case 0x2bc0c0u: goto label_2bc0c0;
        case 0x2bc0c4u: goto label_2bc0c4;
        case 0x2bc0c8u: goto label_2bc0c8;
        case 0x2bc0ccu: goto label_2bc0cc;
        case 0x2bc0d0u: goto label_2bc0d0;
        case 0x2bc0d4u: goto label_2bc0d4;
        case 0x2bc0d8u: goto label_2bc0d8;
        case 0x2bc0dcu: goto label_2bc0dc;
        case 0x2bc0e0u: goto label_2bc0e0;
        case 0x2bc0e4u: goto label_2bc0e4;
        case 0x2bc0e8u: goto label_2bc0e8;
        case 0x2bc0ecu: goto label_2bc0ec;
        case 0x2bc0f0u: goto label_2bc0f0;
        case 0x2bc0f4u: goto label_2bc0f4;
        case 0x2bc0f8u: goto label_2bc0f8;
        case 0x2bc0fcu: goto label_2bc0fc;
        case 0x2bc100u: goto label_2bc100;
        case 0x2bc104u: goto label_2bc104;
        case 0x2bc108u: goto label_2bc108;
        case 0x2bc10cu: goto label_2bc10c;
        case 0x2bc110u: goto label_2bc110;
        case 0x2bc114u: goto label_2bc114;
        case 0x2bc118u: goto label_2bc118;
        case 0x2bc11cu: goto label_2bc11c;
        case 0x2bc120u: goto label_2bc120;
        case 0x2bc124u: goto label_2bc124;
        case 0x2bc128u: goto label_2bc128;
        case 0x2bc12cu: goto label_2bc12c;
        case 0x2bc130u: goto label_2bc130;
        case 0x2bc134u: goto label_2bc134;
        case 0x2bc138u: goto label_2bc138;
        case 0x2bc13cu: goto label_2bc13c;
        case 0x2bc140u: goto label_2bc140;
        case 0x2bc144u: goto label_2bc144;
        case 0x2bc148u: goto label_2bc148;
        case 0x2bc14cu: goto label_2bc14c;
        case 0x2bc150u: goto label_2bc150;
        case 0x2bc154u: goto label_2bc154;
        case 0x2bc158u: goto label_2bc158;
        case 0x2bc15cu: goto label_2bc15c;
        case 0x2bc160u: goto label_2bc160;
        case 0x2bc164u: goto label_2bc164;
        case 0x2bc168u: goto label_2bc168;
        case 0x2bc16cu: goto label_2bc16c;
        case 0x2bc170u: goto label_2bc170;
        case 0x2bc174u: goto label_2bc174;
        case 0x2bc178u: goto label_2bc178;
        case 0x2bc17cu: goto label_2bc17c;
        case 0x2bc180u: goto label_2bc180;
        case 0x2bc184u: goto label_2bc184;
        case 0x2bc188u: goto label_2bc188;
        case 0x2bc18cu: goto label_2bc18c;
        case 0x2bc190u: goto label_2bc190;
        case 0x2bc194u: goto label_2bc194;
        default: break;
    }

    ctx->pc = 0x2bbfa0u;

label_2bbfa0:
    // 0x2bbfa0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2bbfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2bbfa4:
    // 0x2bbfa4: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x2bbfa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
label_2bbfa8:
    // 0x2bbfa8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bbfa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bbfac:
    // 0x2bbfac: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2bbfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2bbfb0:
    // 0x2bbfb0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bbfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2bbfb4:
    // 0x2bbfb4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2bbfb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bbfb8:
    // 0x2bbfb8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2bbfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_2bbfbc:
    // 0x2bbfbc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2bbfbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bbfc0:
    // 0x2bbfc0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2bbfc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2bbfc4:
    // 0x2bbfc4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2bbfc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bbfc8:
    // 0x2bbfc8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2bbfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2bbfcc:
    // 0x2bbfcc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2bbfccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_2bbfd0:
    // 0x2bbfd0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2bbfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2bbfd4:
    // 0x2bbfd4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2bbfd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bbfd8:
    // 0x2bbfd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bbfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2bbfdc:
    // 0x2bbfdc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2bbfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2bbfe0:
    // 0x2bbfe0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2bbfe4:
    if (ctx->pc == 0x2BBFE4u) {
        ctx->pc = 0x2BBFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFE0u;
        // 0x2bbfe4: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBFE8u;
        goto label_2bbfe8;
    }
    ctx->pc = 0x2BBFE0u;
    {
        const bool branch_taken_0x2bbfe0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BBFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFE0u;
        // 0x2bbfe4: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbfe0) {
            ctx->pc = 0x2BBFECu;
            goto label_2bbfec;
        }
    }
    ctx->pc = 0x2BBFE8u;
label_2bbfe8:
    // 0x2bbfe8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2bbfe8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bbfec:
    // 0x2bbfec: 0x90420265  lbu         $v0, 0x265($v0)
    ctx->pc = 0x2bbfecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 613)));
label_2bbff0:
    // 0x2bbff0: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
label_2bbff4:
    if (ctx->pc == 0x2BBFF4u) {
        ctx->pc = 0x2BBFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFF0u;
        // 0x2bbff4: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBFF8u;
        goto label_2bbff8;
    }
    ctx->pc = 0x2BBFF0u;
    {
        const bool branch_taken_0x2bbff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFF0u;
        // 0x2bbff4: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbff0) {
            ctx->pc = 0x2BC16Cu;
            goto label_2bc16c;
        }
    }
    ctx->pc = 0x2BBFF8u;
label_2bbff8:
    // 0x2bbff8: 0xc08a08a  jal         func_228228
label_2bbffc:
    if (ctx->pc == 0x2BBFFCu) {
        ctx->pc = 0x2BBFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFF8u;
        // 0x2bbffc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC000u;
        goto label_2bc000;
    }
    ctx->pc = 0x2BBFF8u;
    SET_GPR_U32(ctx, 31, 0x2BC000u);
    ctx->pc = 0x2BBFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBFF8u;
    // 0x2bbffc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2BBFF8u, 0x2BC000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC000u;
label_2bc000:
    // 0x2bc000: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
label_2bc004:
    if (ctx->pc == 0x2BC004u) {
        ctx->pc = 0x2BC004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC000u;
        // 0x2bc004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC008u;
        goto label_2bc008;
    }
    ctx->pc = 0x2BC000u;
    {
        const bool branch_taken_0x2bc000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC000u;
        // 0x2bc004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc000) {
            ctx->pc = 0x2BC170u;
            goto label_2bc170;
        }
    }
    ctx->pc = 0x2BC008u;
label_2bc008:
    // 0x2bc008: 0xc089bfc  jal         func_226FF0
label_2bc00c:
    if (ctx->pc == 0x2BC00Cu) {
        ctx->pc = 0x2BC00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC008u;
        // 0x2bc00c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC010u;
        goto label_2bc010;
    }
    ctx->pc = 0x2BC008u;
    SET_GPR_U32(ctx, 31, 0x2BC010u);
    ctx->pc = 0x2BC00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC008u;
    // 0x2bc00c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2BC008u, 0x2BC010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC010u;
label_2bc010:
    // 0x2bc010: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2bc014:
    if (ctx->pc == 0x2BC014u) {
        ctx->pc = 0x2BC018u;
        goto label_2bc018;
    }
    ctx->pc = 0x2BC010u;
    {
        const bool branch_taken_0x2bc010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc010) {
            ctx->pc = 0x2BC020u;
            goto label_2bc020;
        }
    }
    ctx->pc = 0x2BC018u;
label_2bc018:
    // 0x2bc018: 0x16000055  bnez        $s0, . + 4 + (0x55 << 2)
label_2bc01c:
    if (ctx->pc == 0x2BC01Cu) {
        ctx->pc = 0x2BC01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC018u;
        // 0x2bc01c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC020u;
        goto label_2bc020;
    }
    ctx->pc = 0x2BC018u;
    {
        const bool branch_taken_0x2bc018 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC018u;
        // 0x2bc01c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc018) {
            ctx->pc = 0x2BC170u;
            goto label_2bc170;
        }
    }
    ctx->pc = 0x2BC020u;
label_2bc020:
    // 0x2bc020: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bc020u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bc024:
    // 0x2bc024: 0x0  nop
    ctx->pc = 0x2bc024u;
    // NOP
label_2bc028:
    // 0x2bc028: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2bc028u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bc02c:
    // 0x2bc02c: 0x0  nop
    ctx->pc = 0x2bc02cu;
    // NOP
label_2bc030:
    // 0x2bc030: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_2bc034:
    if (ctx->pc == 0x2BC034u) {
        ctx->pc = 0x2BC034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC030u;
        // 0x2bc034: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC038u;
        goto label_2bc038;
    }
    ctx->pc = 0x2BC030u;
    {
        const bool branch_taken_0x2bc030 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BC034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC030u;
        // 0x2bc034: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc030) {
            ctx->pc = 0x2BC058u;
            goto label_2bc058;
        }
    }
    ctx->pc = 0x2BC038u;
label_2bc038:
    // 0x2bc038: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2bc038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2bc03c:
    // 0x2bc03c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2bc040:
    if (ctx->pc == 0x2BC040u) {
        ctx->pc = 0x2BC040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC03Cu;
        // 0x2bc040: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC044u;
        goto label_2bc044;
    }
    ctx->pc = 0x2BC03Cu;
    {
        const bool branch_taken_0x2bc03c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc03c) {
            ctx->pc = 0x2BC040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC03Cu;
            // 0x2bc040: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC044u;
            goto label_2bc044;
        }
    }
    ctx->pc = 0x2BC044u;
label_2bc044:
    // 0x2bc044: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2bc044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2bc048:
    // 0x2bc048: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2bc048u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2bc04c:
    // 0x2bc04c: 0x2010  mfhi        $a0
    ctx->pc = 0x2bc04cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2bc050:
    // 0x2bc050: 0x14800047  bnez        $a0, . + 4 + (0x47 << 2)
label_2bc054:
    if (ctx->pc == 0x2BC054u) {
        ctx->pc = 0x2BC054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC050u;
        // 0x2bc054: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC058u;
        goto label_2bc058;
    }
    ctx->pc = 0x2BC050u;
    {
        const bool branch_taken_0x2bc050 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC050u;
        // 0x2bc054: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc050) {
            ctx->pc = 0x2BC170u;
            goto label_2bc170;
        }
    }
    ctx->pc = 0x2BC058u;
label_2bc058:
    // 0x2bc058: 0x16910004  bne         $s4, $s1, . + 4 + (0x4 << 2)
label_2bc05c:
    if (ctx->pc == 0x2BC05Cu) {
        ctx->pc = 0x2BC05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC058u;
        // 0x2bc05c: 0x3c040002  lui         $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC060u;
        goto label_2bc060;
    }
    ctx->pc = 0x2BC058u;
    {
        const bool branch_taken_0x2bc058 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 17));
        ctx->pc = 0x2BC05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC058u;
        // 0x2bc05c: 0x3c040002  lui         $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc058) {
            ctx->pc = 0x2BC06Cu;
            goto label_2bc06c;
        }
    }
    ctx->pc = 0x2BC060u;
label_2bc060:
    // 0x2bc060: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x2bc060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_2bc064:
    // 0x2bc064: 0x3a020001  xori        $v0, $s0, 0x1
    ctx->pc = 0x2bc064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
label_2bc068:
    // 0x2bc068: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x2bc068u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_2bc06c:
    // 0x2bc06c: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2bc06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_2bc070:
    // 0x2bc070: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bc070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bc074:
    // 0x2bc074: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_2bc078:
    if (ctx->pc == 0x2BC078u) {
        ctx->pc = 0x2BC078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC074u;
        // 0x2bc078: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC07Cu;
        goto label_2bc07c;
    }
    ctx->pc = 0x2BC074u;
    {
        const bool branch_taken_0x2bc074 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC074u;
        // 0x2bc078: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc074) {
            ctx->pc = 0x2BC084u;
            goto label_2bc084;
        }
    }
    ctx->pc = 0x2BC07Cu;
label_2bc07c:
    // 0x2bc07c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2bc07cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_2bc080:
    // 0x2bc080: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bc080u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bc084:
    // 0x2bc084: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x2bc084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
label_2bc088:
    // 0x2bc088: 0x2442f2d0  addiu       $v0, $v0, -0xD30
    ctx->pc = 0x2bc088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963920));
label_2bc08c:
    // 0x2bc08c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bc08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bc090:
    // 0x2bc090: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2bc090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2bc094:
    // 0x2bc094: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bc094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bc098:
    // 0x2bc098: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2bc098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bc09c:
    // 0x2bc09c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2bc09cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bc0a0:
    // 0x2bc0a0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2bc0a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bc0a4:
    // 0x2bc0a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2bc0a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bc0a8:
    // 0x2bc0a8: 0xc0a757c  jal         func_29D5F0
label_2bc0ac:
    if (ctx->pc == 0x2BC0ACu) {
        ctx->pc = 0x2BC0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC0A8u;
        // 0x2bc0ac: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC0B0u;
        goto label_2bc0b0;
    }
    ctx->pc = 0x2BC0A8u;
    SET_GPR_U32(ctx, 31, 0x2BC0B0u);
    ctx->pc = 0x2BC0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC0A8u;
    // 0x2bc0ac: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D5F0u, 0x2BC0A8u, 0x2BC0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC0B0u;
label_2bc0b0:
    // 0x2bc0b0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2bc0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2bc0b4:
    // 0x2bc0b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bc0b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc0b8:
    // 0x2bc0b8: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x2bc0b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2bc0bc:
    // 0x2bc0bc: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
label_2bc0c0:
    if (ctx->pc == 0x2BC0C0u) {
        ctx->pc = 0x2BC0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC0BCu;
        // 0x2bc0c0: 0x2470f2f0  addiu       $s0, $v1, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC0C4u;
        goto label_2bc0c4;
    }
    ctx->pc = 0x2BC0BCu;
    {
        const bool branch_taken_0x2bc0bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC0BCu;
        // 0x2bc0c0: 0x2470f2f0  addiu       $s0, $v1, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc0bc) {
            ctx->pc = 0x2BC168u;
            goto label_2bc168;
        }
    }
    ctx->pc = 0x2BC0C4u;
label_2bc0c4:
    // 0x2bc0c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2bc0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2bc0c8:
    // 0x2bc0c8: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x2bc0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2bc0cc:
    // 0x2bc0cc: 0x8c645704  lw          $a0, 0x5704($v1)
    ctx->pc = 0x2bc0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22276)));
label_2bc0d0:
    // 0x2bc0d0: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_2bc0d4:
    if (ctx->pc == 0x2BC0D4u) {
        ctx->pc = 0x2BC0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC0D0u;
        // 0x2bc0d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC0D8u;
        goto label_2bc0d8;
    }
    ctx->pc = 0x2BC0D0u;
    {
        const bool branch_taken_0x2bc0d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC0D0u;
        // 0x2bc0d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc0d0) {
            ctx->pc = 0x2BC0F8u;
            goto label_2bc0f8;
        }
    }
    ctx->pc = 0x2BC0D8u;
label_2bc0d8:
    // 0x2bc0d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2bc0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2bc0dc:
    // 0x2bc0dc: 0x96250112  lhu         $a1, 0x112($s1)
    ctx->pc = 0x2bc0dcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
label_2bc0e0:
    // 0x2bc0e0: 0xc0e44cc  jal         func_391330
label_2bc0e4:
    if (ctx->pc == 0x2BC0E4u) {
        ctx->pc = 0x2BC0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC0E0u;
        // 0x2bc0e4: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC0E8u;
        goto label_2bc0e8;
    }
    ctx->pc = 0x2BC0E0u;
    SET_GPR_U32(ctx, 31, 0x2BC0E8u);
    ctx->pc = 0x2BC0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC0E0u;
    // 0x2bc0e4: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x2BC0E0u, 0x2BC0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC0E8u;
label_2bc0e8:
    // 0x2bc0e8: 0x80430087  lb          $v1, 0x87($v0)
    ctx->pc = 0x2bc0e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 135)));
label_2bc0ec:
    // 0x2bc0ec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2bc0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2bc0f0:
    // 0x2bc0f0: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_2bc0f4:
    if (ctx->pc == 0x2BC0F4u) {
        ctx->pc = 0x2BC0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC0F0u;
        // 0x2bc0f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC0F8u;
        goto label_2bc0f8;
    }
    ctx->pc = 0x2BC0F0u;
    {
        const bool branch_taken_0x2bc0f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BC0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC0F0u;
        // 0x2bc0f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc0f0) {
            ctx->pc = 0x2BC168u;
            goto label_2bc168;
        }
    }
    ctx->pc = 0x2BC0F8u;
label_2bc0f8:
    // 0x2bc0f8: 0xc0e5452  jal         func_395148
label_2bc0fc:
    if (ctx->pc == 0x2BC0FCu) {
        ctx->pc = 0x2BC0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC0F8u;
        // 0x2bc0fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC100u;
        goto label_2bc100;
    }
    ctx->pc = 0x2BC0F8u;
    SET_GPR_U32(ctx, 31, 0x2BC100u);
    ctx->pc = 0x2BC0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC0F8u;
    // 0x2bc0fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395148u, 0x2BC0F8u, 0x2BC100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC100u;
label_2bc100:
    // 0x2bc100: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2bc104:
    if (ctx->pc == 0x2BC104u) {
        ctx->pc = 0x2BC104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC100u;
        // 0x2bc104: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC108u;
        goto label_2bc108;
    }
    ctx->pc = 0x2BC100u;
    {
        const bool branch_taken_0x2bc100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bc100) {
            ctx->pc = 0x2BC104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC100u;
            // 0x2bc104: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC118u;
            goto label_2bc118;
        }
    }
    ctx->pc = 0x2BC108u;
label_2bc108:
    // 0x2bc108: 0x2683f2f0  addiu       $v1, $s4, -0xD10
    ctx->pc = 0x2bc108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294963952));
label_2bc10c:
    // 0x2bc10c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bc10cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bc110:
    // 0x2bc110: 0x10000017  b           . + 4 + (0x17 << 2)
label_2bc114:
    if (ctx->pc == 0x2BC114u) {
        ctx->pc = 0x2BC114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC110u;
        // 0x2bc114: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC118u;
        goto label_2bc118;
    }
    ctx->pc = 0x2BC110u;
    {
        const bool branch_taken_0x2bc110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC110u;
        // 0x2bc114: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc110) {
            ctx->pc = 0x2BC170u;
            goto label_2bc170;
        }
    }
    ctx->pc = 0x2BC118u;
label_2bc118:
    // 0x2bc118: 0xac400284  sw          $zero, 0x284($v0)
    ctx->pc = 0x2bc118u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 644), GPR_U32(ctx, 0));
label_2bc11c:
    // 0x2bc11c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2bc11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2bc120:
    // 0x2bc120: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bc120u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bc124:
    // 0x2bc124: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bc124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bc128:
    // 0x2bc128: 0x40f809  jalr        $v0
label_2bc12c:
    if (ctx->pc == 0x2BC12Cu) {
        ctx->pc = 0x2BC12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC128u;
        // 0x2bc12c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC130u;
        goto label_2bc130;
    }
    ctx->pc = 0x2BC128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BC130u);
        ctx->pc = 0x2BC12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC128u;
        // 0x2bc12c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC128u, 0x2BC130u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BC130u;
label_2bc130:
    // 0x2bc130: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2bc130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bc134:
    // 0x2bc134: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bc134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc138:
    // 0x2bc138: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bc138u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bc13c:
    // 0x2bc13c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bc13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bc140:
    // 0x2bc140: 0x40f809  jalr        $v0
label_2bc144:
    if (ctx->pc == 0x2BC144u) {
        ctx->pc = 0x2BC144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC140u;
        // 0x2bc144: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC148u;
        goto label_2bc148;
    }
    ctx->pc = 0x2BC140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BC148u);
        ctx->pc = 0x2BC144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC140u;
        // 0x2bc144: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC140u, 0x2BC148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BC148u;
label_2bc148:
    // 0x2bc148: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2bc148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc14c:
    // 0x2bc14c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bc14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bc150:
    // 0x2bc150: 0xc0b71c2  jal         func_2DC708
label_2bc154:
    if (ctx->pc == 0x2BC154u) {
        ctx->pc = 0x2BC154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC150u;
        // 0x2bc154: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC158u;
        goto label_2bc158;
    }
    ctx->pc = 0x2BC150u;
    SET_GPR_U32(ctx, 31, 0x2BC158u);
    ctx->pc = 0x2BC154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC150u;
    // 0x2bc154: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC708u, 0x2BC150u, 0x2BC158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC158u;
label_2bc158:
    // 0x2bc158: 0x2683f2f0  addiu       $v1, $s4, -0xD10
    ctx->pc = 0x2bc158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294963952));
label_2bc15c:
    // 0x2bc15c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bc15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bc160:
    // 0x2bc160: 0x10000003  b           . + 4 + (0x3 << 2)
label_2bc164:
    if (ctx->pc == 0x2BC164u) {
        ctx->pc = 0x2BC164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC160u;
        // 0x2bc164: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC168u;
        goto label_2bc168;
    }
    ctx->pc = 0x2BC160u;
    {
        const bool branch_taken_0x2bc160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC160u;
        // 0x2bc164: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc160) {
            ctx->pc = 0x2BC170u;
            goto label_2bc170;
        }
    }
    ctx->pc = 0x2BC168u;
label_2bc168:
    // 0x2bc168: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x2bc168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_2bc16c:
    // 0x2bc16c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bc16cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bc170:
    // 0x2bc170: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2bc170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2bc174:
    // 0x2bc174: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2bc174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2bc178:
    // 0x2bc178: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2bc178u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2bc17c:
    // 0x2bc17c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bc17cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2bc180:
    // 0x2bc180: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2bc180u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2bc184:
    // 0x2bc184: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bc184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bc188:
    // 0x2bc188: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2bc188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2bc18c:
    // 0x2bc18c: 0x3e00008  jr          $ra
label_2bc190:
    if (ctx->pc == 0x2BC190u) {
        ctx->pc = 0x2BC190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC18Cu;
        // 0x2bc190: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC194u;
        goto label_2bc194;
    }
    ctx->pc = 0x2BC18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC18Cu;
        // 0x2bc190: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC194u;
label_2bc194:
    // 0x2bc194: 0x0  nop
    ctx->pc = 0x2bc194u;
    // NOP
    ctx->pc = 0x2bc198u;
}
