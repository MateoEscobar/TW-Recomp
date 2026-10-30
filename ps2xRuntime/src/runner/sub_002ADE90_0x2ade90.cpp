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

// Function: sub_002ADE90
// Address: 0x2ade90 - 0x2ae028
void sub_002ADE90_0x2ade90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ADE90_0x2ade90");
#endif

    switch (ctx->pc) {
        case 0x2ade90u: goto label_2ade90;
        case 0x2ade94u: goto label_2ade94;
        case 0x2ade98u: goto label_2ade98;
        case 0x2ade9cu: goto label_2ade9c;
        case 0x2adea0u: goto label_2adea0;
        case 0x2adea4u: goto label_2adea4;
        case 0x2adea8u: goto label_2adea8;
        case 0x2adeacu: goto label_2adeac;
        case 0x2adeb0u: goto label_2adeb0;
        case 0x2adeb4u: goto label_2adeb4;
        case 0x2adeb8u: goto label_2adeb8;
        case 0x2adebcu: goto label_2adebc;
        case 0x2adec0u: goto label_2adec0;
        case 0x2adec4u: goto label_2adec4;
        case 0x2adec8u: goto label_2adec8;
        case 0x2adeccu: goto label_2adecc;
        case 0x2aded0u: goto label_2aded0;
        case 0x2aded4u: goto label_2aded4;
        case 0x2aded8u: goto label_2aded8;
        case 0x2adedcu: goto label_2adedc;
        case 0x2adee0u: goto label_2adee0;
        case 0x2adee4u: goto label_2adee4;
        case 0x2adee8u: goto label_2adee8;
        case 0x2adeecu: goto label_2adeec;
        case 0x2adef0u: goto label_2adef0;
        case 0x2adef4u: goto label_2adef4;
        case 0x2adef8u: goto label_2adef8;
        case 0x2adefcu: goto label_2adefc;
        case 0x2adf00u: goto label_2adf00;
        case 0x2adf04u: goto label_2adf04;
        case 0x2adf08u: goto label_2adf08;
        case 0x2adf0cu: goto label_2adf0c;
        case 0x2adf10u: goto label_2adf10;
        case 0x2adf14u: goto label_2adf14;
        case 0x2adf18u: goto label_2adf18;
        case 0x2adf1cu: goto label_2adf1c;
        case 0x2adf20u: goto label_2adf20;
        case 0x2adf24u: goto label_2adf24;
        case 0x2adf28u: goto label_2adf28;
        case 0x2adf2cu: goto label_2adf2c;
        case 0x2adf30u: goto label_2adf30;
        case 0x2adf34u: goto label_2adf34;
        case 0x2adf38u: goto label_2adf38;
        case 0x2adf3cu: goto label_2adf3c;
        case 0x2adf40u: goto label_2adf40;
        case 0x2adf44u: goto label_2adf44;
        case 0x2adf48u: goto label_2adf48;
        case 0x2adf4cu: goto label_2adf4c;
        case 0x2adf50u: goto label_2adf50;
        case 0x2adf54u: goto label_2adf54;
        case 0x2adf58u: goto label_2adf58;
        case 0x2adf5cu: goto label_2adf5c;
        case 0x2adf60u: goto label_2adf60;
        case 0x2adf64u: goto label_2adf64;
        case 0x2adf68u: goto label_2adf68;
        case 0x2adf6cu: goto label_2adf6c;
        case 0x2adf70u: goto label_2adf70;
        case 0x2adf74u: goto label_2adf74;
        case 0x2adf78u: goto label_2adf78;
        case 0x2adf7cu: goto label_2adf7c;
        case 0x2adf80u: goto label_2adf80;
        case 0x2adf84u: goto label_2adf84;
        case 0x2adf88u: goto label_2adf88;
        case 0x2adf8cu: goto label_2adf8c;
        case 0x2adf90u: goto label_2adf90;
        case 0x2adf94u: goto label_2adf94;
        case 0x2adf98u: goto label_2adf98;
        case 0x2adf9cu: goto label_2adf9c;
        case 0x2adfa0u: goto label_2adfa0;
        case 0x2adfa4u: goto label_2adfa4;
        case 0x2adfa8u: goto label_2adfa8;
        case 0x2adfacu: goto label_2adfac;
        case 0x2adfb0u: goto label_2adfb0;
        case 0x2adfb4u: goto label_2adfb4;
        case 0x2adfb8u: goto label_2adfb8;
        case 0x2adfbcu: goto label_2adfbc;
        case 0x2adfc0u: goto label_2adfc0;
        case 0x2adfc4u: goto label_2adfc4;
        case 0x2adfc8u: goto label_2adfc8;
        case 0x2adfccu: goto label_2adfcc;
        case 0x2adfd0u: goto label_2adfd0;
        case 0x2adfd4u: goto label_2adfd4;
        case 0x2adfd8u: goto label_2adfd8;
        case 0x2adfdcu: goto label_2adfdc;
        case 0x2adfe0u: goto label_2adfe0;
        case 0x2adfe4u: goto label_2adfe4;
        case 0x2adfe8u: goto label_2adfe8;
        case 0x2adfecu: goto label_2adfec;
        case 0x2adff0u: goto label_2adff0;
        case 0x2adff4u: goto label_2adff4;
        case 0x2adff8u: goto label_2adff8;
        case 0x2adffcu: goto label_2adffc;
        case 0x2ae000u: goto label_2ae000;
        case 0x2ae004u: goto label_2ae004;
        case 0x2ae008u: goto label_2ae008;
        case 0x2ae00cu: goto label_2ae00c;
        case 0x2ae010u: goto label_2ae010;
        case 0x2ae014u: goto label_2ae014;
        case 0x2ae018u: goto label_2ae018;
        case 0x2ae01cu: goto label_2ae01c;
        case 0x2ae020u: goto label_2ae020;
        case 0x2ae024u: goto label_2ae024;
        default: break;
    }

    ctx->pc = 0x2ade90u;

label_2ade90:
    // 0x2ade90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ade90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2ade94:
    // 0x2ade94: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x2ade94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
label_2ade98:
    // 0x2ade98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ade98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ade9c:
    // 0x2ade9c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2ade9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2adea0:
    // 0x2adea0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2adea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2adea4:
    // 0x2adea4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2adea4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2adea8:
    // 0x2adea8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2adea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_2adeac:
    // 0x2adeac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2adeacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2adeb0:
    // 0x2adeb0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2adeb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2adeb4:
    // 0x2adeb4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2adeb4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2adeb8:
    // 0x2adeb8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2adeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2adebc:
    // 0x2adebc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2adebcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_2adec0:
    // 0x2adec0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2adec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2adec4:
    // 0x2adec4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2adec4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2adec8:
    // 0x2adec8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2adec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2adecc:
    // 0x2adecc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2adeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2aded0:
    // 0x2aded0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2aded4:
    if (ctx->pc == 0x2ADED4u) {
        ctx->pc = 0x2ADED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADED0u;
        // 0x2aded4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADED8u;
        goto label_2aded8;
    }
    ctx->pc = 0x2ADED0u;
    {
        const bool branch_taken_0x2aded0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ADED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADED0u;
        // 0x2aded4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aded0) {
            ctx->pc = 0x2ADEDCu;
            goto label_2adedc;
        }
    }
    ctx->pc = 0x2ADED8u;
label_2aded8:
    // 0x2aded8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2aded8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2adedc:
    // 0x2adedc: 0x90420265  lbu         $v0, 0x265($v0)
    ctx->pc = 0x2adedcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 613)));
label_2adee0:
    // 0x2adee0: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_2adee4:
    if (ctx->pc == 0x2ADEE4u) {
        ctx->pc = 0x2ADEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADEE0u;
        // 0x2adee4: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADEE8u;
        goto label_2adee8;
    }
    ctx->pc = 0x2ADEE0u;
    {
        const bool branch_taken_0x2adee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADEE0u;
        // 0x2adee4: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adee0) {
            ctx->pc = 0x2ADFFCu;
            goto label_2adffc;
        }
    }
    ctx->pc = 0x2ADEE8u;
label_2adee8:
    // 0x2adee8: 0xc08a08a  jal         func_228228
label_2adeec:
    if (ctx->pc == 0x2ADEECu) {
        ctx->pc = 0x2ADEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADEE8u;
        // 0x2adeec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADEF0u;
        goto label_2adef0;
    }
    ctx->pc = 0x2ADEE8u;
    SET_GPR_U32(ctx, 31, 0x2ADEF0u);
    ctx->pc = 0x2ADEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADEE8u;
    // 0x2adeec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2ADEE8u, 0x2ADEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADEF0u;
label_2adef0:
    // 0x2adef0: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
label_2adef4:
    if (ctx->pc == 0x2ADEF4u) {
        ctx->pc = 0x2ADEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADEF0u;
        // 0x2adef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADEF8u;
        goto label_2adef8;
    }
    ctx->pc = 0x2ADEF0u;
    {
        const bool branch_taken_0x2adef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ADEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADEF0u;
        // 0x2adef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adef0) {
            ctx->pc = 0x2AE000u;
            goto label_2ae000;
        }
    }
    ctx->pc = 0x2ADEF8u;
label_2adef8:
    // 0x2adef8: 0xc089bfc  jal         func_226FF0
label_2adefc:
    if (ctx->pc == 0x2ADEFCu) {
        ctx->pc = 0x2ADEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADEF8u;
        // 0x2adefc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADF00u;
        goto label_2adf00;
    }
    ctx->pc = 0x2ADEF8u;
    SET_GPR_U32(ctx, 31, 0x2ADF00u);
    ctx->pc = 0x2ADEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADEF8u;
    // 0x2adefc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2ADEF8u, 0x2ADF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADF00u;
label_2adf00:
    // 0x2adf00: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
label_2adf04:
    if (ctx->pc == 0x2ADF04u) {
        ctx->pc = 0x2ADF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADF00u;
        // 0x2adf04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADF08u;
        goto label_2adf08;
    }
    ctx->pc = 0x2ADF00u;
    {
        const bool branch_taken_0x2adf00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ADF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADF00u;
        // 0x2adf04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adf00) {
            ctx->pc = 0x2AE000u;
            goto label_2ae000;
        }
    }
    ctx->pc = 0x2ADF08u;
label_2adf08:
    // 0x2adf08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2adf08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2adf0c:
    // 0x2adf0c: 0x0  nop
    ctx->pc = 0x2adf0cu;
    // NOP
label_2adf10:
    // 0x2adf10: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2adf10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2adf14:
    // 0x2adf14: 0x0  nop
    ctx->pc = 0x2adf14u;
    // NOP
label_2adf18:
    // 0x2adf18: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_2adf1c:
    if (ctx->pc == 0x2ADF1Cu) {
        ctx->pc = 0x2ADF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADF18u;
        // 0x2adf1c: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADF20u;
        goto label_2adf20;
    }
    ctx->pc = 0x2ADF18u;
    {
        const bool branch_taken_0x2adf18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ADF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADF18u;
        // 0x2adf1c: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adf18) {
            ctx->pc = 0x2ADF40u;
            goto label_2adf40;
        }
    }
    ctx->pc = 0x2ADF20u;
label_2adf20:
    // 0x2adf20: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2adf20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2adf24:
    // 0x2adf24: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2adf28:
    if (ctx->pc == 0x2ADF28u) {
        ctx->pc = 0x2ADF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADF24u;
        // 0x2adf28: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADF2Cu;
        goto label_2adf2c;
    }
    ctx->pc = 0x2ADF24u;
    {
        const bool branch_taken_0x2adf24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adf24) {
            ctx->pc = 0x2ADF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADF24u;
            // 0x2adf28: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADF2Cu;
            goto label_2adf2c;
        }
    }
    ctx->pc = 0x2ADF2Cu;
label_2adf2c:
    // 0x2adf2c: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2adf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2adf30:
    // 0x2adf30: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2adf30u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2adf34:
    // 0x2adf34: 0x2010  mfhi        $a0
    ctx->pc = 0x2adf34u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2adf38:
    // 0x2adf38: 0x14800031  bnez        $a0, . + 4 + (0x31 << 2)
label_2adf3c:
    if (ctx->pc == 0x2ADF3Cu) {
        ctx->pc = 0x2ADF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADF38u;
        // 0x2adf3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADF40u;
        goto label_2adf40;
    }
    ctx->pc = 0x2ADF38u;
    {
        const bool branch_taken_0x2adf38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ADF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADF38u;
        // 0x2adf3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adf38) {
            ctx->pc = 0x2AE000u;
            goto label_2ae000;
        }
    }
    ctx->pc = 0x2ADF40u;
label_2adf40:
    // 0x2adf40: 0x16910004  bne         $s4, $s1, . + 4 + (0x4 << 2)
label_2adf44:
    if (ctx->pc == 0x2ADF44u) {
        ctx->pc = 0x2ADF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADF40u;
        // 0x2adf44: 0x3c040002  lui         $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADF48u;
        goto label_2adf48;
    }
    ctx->pc = 0x2ADF40u;
    {
        const bool branch_taken_0x2adf40 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 17));
        ctx->pc = 0x2ADF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADF40u;
        // 0x2adf44: 0x3c040002  lui         $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adf40) {
            ctx->pc = 0x2ADF54u;
            goto label_2adf54;
        }
    }
    ctx->pc = 0x2ADF48u;
label_2adf48:
    // 0x2adf48: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x2adf48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_2adf4c:
    // 0x2adf4c: 0x3a620001  xori        $v0, $s3, 0x1
    ctx->pc = 0x2adf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
label_2adf50:
    // 0x2adf50: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x2adf50u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_2adf54:
    // 0x2adf54: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2adf54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_2adf58:
    // 0x2adf58: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2adf58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2adf5c:
    // 0x2adf5c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_2adf60:
    if (ctx->pc == 0x2ADF60u) {
        ctx->pc = 0x2ADF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADF5Cu;
        // 0x2adf60: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADF64u;
        goto label_2adf64;
    }
    ctx->pc = 0x2ADF5Cu;
    {
        const bool branch_taken_0x2adf5c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADF5Cu;
        // 0x2adf60: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adf5c) {
            ctx->pc = 0x2ADF6Cu;
            goto label_2adf6c;
        }
    }
    ctx->pc = 0x2ADF64u;
label_2adf64:
    // 0x2adf64: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2adf64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2adf68:
    // 0x2adf68: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2adf68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2adf6c:
    // 0x2adf6c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2adf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2adf70:
    // 0x2adf70: 0x2442f2d0  addiu       $v0, $v0, -0xD30
    ctx->pc = 0x2adf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963920));
label_2adf74:
    // 0x2adf74: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x2adf74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
label_2adf78:
    // 0x2adf78: 0x2473f2f0  addiu       $s3, $v1, -0xD10
    ctx->pc = 0x2adf78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963952));
label_2adf7c:
    // 0x2adf7c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2adf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2adf80:
    // 0x2adf80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2adf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2adf84:
    // 0x2adf84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2adf84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2adf88:
    // 0x2adf88: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2adf88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2adf8c:
    // 0x2adf8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2adf8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2adf90:
    // 0x2adf90: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2adf90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2adf94:
    // 0x2adf94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2adf94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2adf98:
    // 0x2adf98: 0xc0a757c  jal         func_29D5F0
label_2adf9c:
    if (ctx->pc == 0x2ADF9Cu) {
        ctx->pc = 0x2ADF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADF98u;
        // 0x2adf9c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADFA0u;
        goto label_2adfa0;
    }
    ctx->pc = 0x2ADF98u;
    SET_GPR_U32(ctx, 31, 0x2ADFA0u);
    ctx->pc = 0x2ADF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADF98u;
    // 0x2adf9c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D5F0u, 0x2ADF98u, 0x2ADFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADFA0u;
label_2adfa0:
    // 0x2adfa0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2adfa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2adfa4:
    // 0x2adfa4: 0x52200015  beql        $s1, $zero, . + 4 + (0x15 << 2)
label_2adfa8:
    if (ctx->pc == 0x2ADFA8u) {
        ctx->pc = 0x2ADFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADFA4u;
        // 0x2adfa8: 0xafb30000  sw          $s3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADFACu;
        goto label_2adfac;
    }
    ctx->pc = 0x2ADFA4u;
    {
        const bool branch_taken_0x2adfa4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adfa4) {
            ctx->pc = 0x2ADFA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADFA4u;
            // 0x2adfa8: 0xafb30000  sw          $s3, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADFFCu;
            goto label_2adffc;
        }
    }
    ctx->pc = 0x2ADFACu;
label_2adfac:
    // 0x2adfac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2adfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2adfb0:
    // 0x2adfb0: 0xac400284  sw          $zero, 0x284($v0)
    ctx->pc = 0x2adfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 644), GPR_U32(ctx, 0));
label_2adfb4:
    // 0x2adfb4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2adfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2adfb8:
    // 0x2adfb8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2adfb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2adfbc:
    // 0x2adfbc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2adfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2adfc0:
    // 0x2adfc0: 0x40f809  jalr        $v0
label_2adfc4:
    if (ctx->pc == 0x2ADFC4u) {
        ctx->pc = 0x2ADFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADFC0u;
        // 0x2adfc4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADFC8u;
        goto label_2adfc8;
    }
    ctx->pc = 0x2ADFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ADFC8u);
        ctx->pc = 0x2ADFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADFC0u;
        // 0x2adfc4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADFC0u, 0x2ADFC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ADFC8u;
label_2adfc8:
    // 0x2adfc8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2adfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2adfcc:
    // 0x2adfcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2adfccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2adfd0:
    // 0x2adfd0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2adfd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2adfd4:
    // 0x2adfd4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2adfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2adfd8:
    // 0x2adfd8: 0x40f809  jalr        $v0
label_2adfdc:
    if (ctx->pc == 0x2ADFDCu) {
        ctx->pc = 0x2ADFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADFD8u;
        // 0x2adfdc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADFE0u;
        goto label_2adfe0;
    }
    ctx->pc = 0x2ADFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ADFE0u);
        ctx->pc = 0x2ADFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADFD8u;
        // 0x2adfdc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADFD8u, 0x2ADFE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ADFE0u;
label_2adfe0:
    // 0x2adfe0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2adfe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2adfe4:
    // 0x2adfe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2adfe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2adfe8:
    // 0x2adfe8: 0xc0b71c2  jal         func_2DC708
label_2adfec:
    if (ctx->pc == 0x2ADFECu) {
        ctx->pc = 0x2ADFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADFE8u;
        // 0x2adfec: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADFF0u;
        goto label_2adff0;
    }
    ctx->pc = 0x2ADFE8u;
    SET_GPR_U32(ctx, 31, 0x2ADFF0u);
    ctx->pc = 0x2ADFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADFE8u;
    // 0x2adfec: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC708u, 0x2ADFE8u, 0x2ADFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADFF0u;
label_2adff0:
    // 0x2adff0: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x2adff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_2adff4:
    // 0x2adff4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2adff8:
    if (ctx->pc == 0x2ADFF8u) {
        ctx->pc = 0x2ADFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADFF4u;
        // 0x2adff8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADFFCu;
        goto label_2adffc;
    }
    ctx->pc = 0x2ADFF4u;
    {
        const bool branch_taken_0x2adff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADFF4u;
        // 0x2adff8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adff4) {
            ctx->pc = 0x2AE000u;
            goto label_2ae000;
        }
    }
    ctx->pc = 0x2ADFFCu;
label_2adffc:
    // 0x2adffc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2adffcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ae000:
    // 0x2ae000: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2ae000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2ae004:
    // 0x2ae004: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2ae004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ae008:
    // 0x2ae008: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2ae008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ae00c:
    // 0x2ae00c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ae00cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ae010:
    // 0x2ae010: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2ae010u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ae014:
    // 0x2ae014: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ae014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ae018:
    // 0x2ae018: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2ae018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ae01c:
    // 0x2ae01c: 0x3e00008  jr          $ra
label_2ae020:
    if (ctx->pc == 0x2AE020u) {
        ctx->pc = 0x2AE020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE01Cu;
        // 0x2ae020: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE024u;
        goto label_2ae024;
    }
    ctx->pc = 0x2AE01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE01Cu;
        // 0x2ae020: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE01Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE024u;
label_2ae024:
    // 0x2ae024: 0x0  nop
    ctx->pc = 0x2ae024u;
    // NOP
    ctx->pc = 0x2ae028u;
}
