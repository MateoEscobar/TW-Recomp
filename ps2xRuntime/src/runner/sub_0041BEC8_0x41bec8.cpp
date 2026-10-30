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

// Function: sub_0041BEC8
// Address: 0x41bec8 - 0x41c028
void sub_0041BEC8_0x41bec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041BEC8_0x41bec8");
#endif

    switch (ctx->pc) {
        case 0x41bec8u: goto label_41bec8;
        case 0x41beccu: goto label_41becc;
        case 0x41bed0u: goto label_41bed0;
        case 0x41bed4u: goto label_41bed4;
        case 0x41bed8u: goto label_41bed8;
        case 0x41bedcu: goto label_41bedc;
        case 0x41bee0u: goto label_41bee0;
        case 0x41bee4u: goto label_41bee4;
        case 0x41bee8u: goto label_41bee8;
        case 0x41beecu: goto label_41beec;
        case 0x41bef0u: goto label_41bef0;
        case 0x41bef4u: goto label_41bef4;
        case 0x41bef8u: goto label_41bef8;
        case 0x41befcu: goto label_41befc;
        case 0x41bf00u: goto label_41bf00;
        case 0x41bf04u: goto label_41bf04;
        case 0x41bf08u: goto label_41bf08;
        case 0x41bf0cu: goto label_41bf0c;
        case 0x41bf10u: goto label_41bf10;
        case 0x41bf14u: goto label_41bf14;
        case 0x41bf18u: goto label_41bf18;
        case 0x41bf1cu: goto label_41bf1c;
        case 0x41bf20u: goto label_41bf20;
        case 0x41bf24u: goto label_41bf24;
        case 0x41bf28u: goto label_41bf28;
        case 0x41bf2cu: goto label_41bf2c;
        case 0x41bf30u: goto label_41bf30;
        case 0x41bf34u: goto label_41bf34;
        case 0x41bf38u: goto label_41bf38;
        case 0x41bf3cu: goto label_41bf3c;
        case 0x41bf40u: goto label_41bf40;
        case 0x41bf44u: goto label_41bf44;
        case 0x41bf48u: goto label_41bf48;
        case 0x41bf4cu: goto label_41bf4c;
        case 0x41bf50u: goto label_41bf50;
        case 0x41bf54u: goto label_41bf54;
        case 0x41bf58u: goto label_41bf58;
        case 0x41bf5cu: goto label_41bf5c;
        case 0x41bf60u: goto label_41bf60;
        case 0x41bf64u: goto label_41bf64;
        case 0x41bf68u: goto label_41bf68;
        case 0x41bf6cu: goto label_41bf6c;
        case 0x41bf70u: goto label_41bf70;
        case 0x41bf74u: goto label_41bf74;
        case 0x41bf78u: goto label_41bf78;
        case 0x41bf7cu: goto label_41bf7c;
        case 0x41bf80u: goto label_41bf80;
        case 0x41bf84u: goto label_41bf84;
        case 0x41bf88u: goto label_41bf88;
        case 0x41bf8cu: goto label_41bf8c;
        case 0x41bf90u: goto label_41bf90;
        case 0x41bf94u: goto label_41bf94;
        case 0x41bf98u: goto label_41bf98;
        case 0x41bf9cu: goto label_41bf9c;
        case 0x41bfa0u: goto label_41bfa0;
        case 0x41bfa4u: goto label_41bfa4;
        case 0x41bfa8u: goto label_41bfa8;
        case 0x41bfacu: goto label_41bfac;
        case 0x41bfb0u: goto label_41bfb0;
        case 0x41bfb4u: goto label_41bfb4;
        case 0x41bfb8u: goto label_41bfb8;
        case 0x41bfbcu: goto label_41bfbc;
        case 0x41bfc0u: goto label_41bfc0;
        case 0x41bfc4u: goto label_41bfc4;
        case 0x41bfc8u: goto label_41bfc8;
        case 0x41bfccu: goto label_41bfcc;
        case 0x41bfd0u: goto label_41bfd0;
        case 0x41bfd4u: goto label_41bfd4;
        case 0x41bfd8u: goto label_41bfd8;
        case 0x41bfdcu: goto label_41bfdc;
        case 0x41bfe0u: goto label_41bfe0;
        case 0x41bfe4u: goto label_41bfe4;
        case 0x41bfe8u: goto label_41bfe8;
        case 0x41bfecu: goto label_41bfec;
        case 0x41bff0u: goto label_41bff0;
        case 0x41bff4u: goto label_41bff4;
        case 0x41bff8u: goto label_41bff8;
        case 0x41bffcu: goto label_41bffc;
        case 0x41c000u: goto label_41c000;
        case 0x41c004u: goto label_41c004;
        case 0x41c008u: goto label_41c008;
        case 0x41c00cu: goto label_41c00c;
        case 0x41c010u: goto label_41c010;
        case 0x41c014u: goto label_41c014;
        case 0x41c018u: goto label_41c018;
        case 0x41c01cu: goto label_41c01c;
        case 0x41c020u: goto label_41c020;
        case 0x41c024u: goto label_41c024;
        default: break;
    }

    ctx->pc = 0x41bec8u;

label_41bec8:
    // 0x41bec8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x41bec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_41becc:
    // 0x41becc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x41beccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_41bed0:
    // 0x41bed0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x41bed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_41bed4:
    // 0x41bed4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x41bed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_41bed8:
    // 0x41bed8: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x41bed8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_41bedc:
    // 0x41bedc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x41bedcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41bee0:
    // 0x41bee0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x41bee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_41bee4:
    // 0x41bee4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x41bee4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_41bee8:
    // 0x41bee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41bee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41beec:
    // 0x41beec: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x41beecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41bef0:
    // 0x41bef0: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x41bef0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_41bef4:
    // 0x41bef4: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x41bef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_41bef8:
    // 0x41bef8: 0x40f809  jalr        $v0
label_41befc:
    if (ctx->pc == 0x41BEFCu) {
        ctx->pc = 0x41BEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BEF8u;
        // 0x41befc: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BF00u;
        goto label_41bf00;
    }
    ctx->pc = 0x41BEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41BF00u);
        ctx->pc = 0x41BEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BEF8u;
        // 0x41befc: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41BEF8u, 0x41BF00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41BF00u;
label_41bf00:
    // 0x41bf00: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x41bf00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41bf04:
    // 0x41bf04: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x41bf04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_41bf08:
    // 0x41bf08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41bf08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41bf0c:
    // 0x41bf0c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x41bf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_41bf10:
    // 0x41bf10: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x41bf10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_41bf14:
    // 0x41bf14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x41bf14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41bf18:
    // 0x41bf18: 0xc105df6  jal         func_4177D8
label_41bf1c:
    if (ctx->pc == 0x41BF1Cu) {
        ctx->pc = 0x41BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BF18u;
        // 0x41bf1c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BF20u;
        goto label_41bf20;
    }
    ctx->pc = 0x41BF18u;
    SET_GPR_U32(ctx, 31, 0x41BF20u);
    ctx->pc = 0x41BF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BF18u;
    // 0x41bf1c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4177D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4177D8u, 0x41BF18u, 0x41BF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BF20u;
label_41bf20:
    // 0x41bf20: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x41bf20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41bf24:
    // 0x41bf24: 0x10c0003a  beqz        $a2, . + 4 + (0x3A << 2)
label_41bf28:
    if (ctx->pc == 0x41BF28u) {
        ctx->pc = 0x41BF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BF24u;
        // 0x41bf28: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BF2Cu;
        goto label_41bf2c;
    }
    ctx->pc = 0x41BF24u;
    {
        const bool branch_taken_0x41bf24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BF24u;
        // 0x41bf28: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bf24) {
            ctx->pc = 0x41C010u;
            goto label_41c010;
        }
    }
    ctx->pc = 0x41BF2Cu;
label_41bf2c:
    // 0x41bf2c: 0x8cc300d8  lw          $v1, 0xD8($a2)
    ctx->pc = 0x41bf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 216)));
label_41bf30:
    // 0x41bf30: 0x8c85b734  lw          $a1, -0x48CC($a0)
    ctx->pc = 0x41bf30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_41bf34:
    // 0x41bf34: 0x34029c40  ori         $v0, $zero, 0x9C40
    ctx->pc = 0x41bf34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40000);
label_41bf38:
    // 0x41bf38: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x41bf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_41bf3c:
    // 0x41bf3c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x41bf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_41bf40:
    // 0x41bf40: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x41bf40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_41bf44:
    // 0x41bf44: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_41bf48:
    if (ctx->pc == 0x41BF48u) {
        ctx->pc = 0x41BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BF44u;
        // 0x41bf48: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BF4Cu;
        goto label_41bf4c;
    }
    ctx->pc = 0x41BF44u;
    {
        const bool branch_taken_0x41bf44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BF44u;
        // 0x41bf48: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bf44) {
            ctx->pc = 0x41C010u;
            goto label_41c010;
        }
    }
    ctx->pc = 0x41BF4Cu;
label_41bf4c:
    // 0x41bf4c: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x41bf4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_41bf50:
    // 0x41bf50: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x41bf50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41bf54:
    // 0x41bf54: 0x0  nop
    ctx->pc = 0x41bf54u;
    // NOP
label_41bf58:
    // 0x41bf58: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
label_41bf5c:
    if (ctx->pc == 0x41BF5Cu) {
        ctx->pc = 0x41BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BF58u;
        // 0x41bf5c: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BF60u;
        goto label_41bf60;
    }
    ctx->pc = 0x41BF58u;
    {
        const bool branch_taken_0x41bf58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x41BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BF58u;
        // 0x41bf5c: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bf58) {
            ctx->pc = 0x41C010u;
            goto label_41c010;
        }
    }
    ctx->pc = 0x41BF60u;
label_41bf60:
    // 0x41bf60: 0xacc400d8  sw          $a0, 0xD8($a2)
    ctx->pc = 0x41bf60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 216), GPR_U32(ctx, 4));
label_41bf64:
    // 0x41bf64: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x41bf64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_41bf68:
    // 0x41bf68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41bf68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41bf6c:
    // 0x41bf6c: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x41bf6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_41bf70:
    // 0x41bf70: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x41bf70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_41bf74:
    // 0x41bf74: 0x7ba70000  lq          $a3, 0x0($sp)
    ctx->pc = 0x41bf74u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41bf78:
    // 0x41bf78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x41bf78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41bf7c:
    // 0x41bf7c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x41bf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_41bf80:
    // 0x41bf80: 0x7fa70010  sq          $a3, 0x10($sp)
    ctx->pc = 0x41bf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 7));
label_41bf84:
    // 0x41bf84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x41bf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_41bf88:
    // 0x41bf88: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x41bf88u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_41bf8c:
    // 0x41bf8c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x41bf8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_41bf90:
    // 0x41bf90: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x41bf90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_41bf94:
    // 0x41bf94: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x41bf94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_41bf98:
    // 0x41bf98: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x41bf98u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_41bf9c:
    // 0x41bf9c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x41bf9cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_41bfa0:
    // 0x41bfa0: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x41bfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_41bfa4:
    // 0x41bfa4: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x41bfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_41bfa8:
    // 0x41bfa8: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x41bfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_41bfac:
    // 0x41bfac: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x41bfacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41bfb0:
    // 0x41bfb0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x41bfb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_41bfb4:
    // 0x41bfb4: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x41bfb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_41bfb8:
    // 0x41bfb8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x41bfb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_41bfbc:
    // 0x41bfbc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x41bfbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_41bfc0:
    // 0x41bfc0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x41bfc0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_41bfc4:
    // 0x41bfc4: 0x4a0003bf  vwaitq
    ctx->pc = 0x41bfc4u;
    // VWAITQ (Q already resolved in this runtime)
label_41bfc8:
    // 0x41bfc8: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x41bfc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_41bfcc:
    // 0x41bfcc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x41bfccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_41bfd0:
    // 0x41bfd0: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x41bfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_41bfd4:
    // 0x41bfd4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x41bfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_41bfd8:
    // 0x41bfd8: 0xc094ab8  jal         func_252AE0
label_41bfdc:
    if (ctx->pc == 0x41BFDCu) {
        ctx->pc = 0x41BFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BFD8u;
        // 0x41bfdc: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BFE0u;
        goto label_41bfe0;
    }
    ctx->pc = 0x41BFD8u;
    SET_GPR_U32(ctx, 31, 0x41BFE0u);
    ctx->pc = 0x41BFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BFD8u;
    // 0x41bfdc: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252AE0u, 0x41BFD8u, 0x41BFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BFE0u;
label_41bfe0:
    // 0x41bfe0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_41bfe4:
    if (ctx->pc == 0x41BFE4u) {
        ctx->pc = 0x41BFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BFE0u;
        // 0x41bfe4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BFE8u;
        goto label_41bfe8;
    }
    ctx->pc = 0x41BFE0u;
    {
        const bool branch_taken_0x41bfe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BFE0u;
        // 0x41bfe4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bfe0) {
            ctx->pc = 0x41C010u;
            goto label_41c010;
        }
    }
    ctx->pc = 0x41BFE8u;
label_41bfe8:
    // 0x41bfe8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x41bfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_41bfec:
    // 0x41bfec: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x41bfecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_41bff0:
    // 0x41bff0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41bff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41bff4:
    // 0x41bff4: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x41bff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_41bff8:
    // 0x41bff8: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x41bff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_41bffc:
    // 0x41bffc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x41bffcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41c000:
    // 0x41c000: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x41c000u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_41c004:
    // 0x41c004: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x41c004u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41c008:
    // 0x41c008: 0xc106e2c  jal         func_41B8B0
label_41c00c:
    if (ctx->pc == 0x41C00Cu) {
        ctx->pc = 0x41C00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C008u;
        // 0x41c00c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C010u;
        goto label_41c010;
    }
    ctx->pc = 0x41C008u;
    SET_GPR_U32(ctx, 31, 0x41C010u);
    ctx->pc = 0x41C00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C008u;
    // 0x41c00c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B8B0u, 0x41C008u, 0x41C010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C010u;
label_41c010:
    // 0x41c010: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x41c010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_41c014:
    // 0x41c014: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x41c014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_41c018:
    // 0x41c018: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x41c018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_41c01c:
    // 0x41c01c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x41c01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_41c020:
    // 0x41c020: 0x3e00008  jr          $ra
label_41c024:
    if (ctx->pc == 0x41C024u) {
        ctx->pc = 0x41C024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C020u;
        // 0x41c024: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C028u;
        goto label_fallthrough_0x41c020;
    }
    ctx->pc = 0x41C020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C020u;
        // 0x41c024: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x41c020:
    ctx->pc = 0x41C028u;
}
