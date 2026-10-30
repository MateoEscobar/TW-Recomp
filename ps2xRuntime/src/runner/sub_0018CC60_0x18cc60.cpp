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

// Function: sub_0018CC60
// Address: 0x18cc60 - 0x18ce58
void sub_0018CC60_0x18cc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018CC60_0x18cc60");
#endif

    switch (ctx->pc) {
        case 0x18cc60u: goto label_18cc60;
        case 0x18cc64u: goto label_18cc64;
        case 0x18cc68u: goto label_18cc68;
        case 0x18cc6cu: goto label_18cc6c;
        case 0x18cc70u: goto label_18cc70;
        case 0x18cc74u: goto label_18cc74;
        case 0x18cc78u: goto label_18cc78;
        case 0x18cc7cu: goto label_18cc7c;
        case 0x18cc80u: goto label_18cc80;
        case 0x18cc84u: goto label_18cc84;
        case 0x18cc88u: goto label_18cc88;
        case 0x18cc8cu: goto label_18cc8c;
        case 0x18cc90u: goto label_18cc90;
        case 0x18cc94u: goto label_18cc94;
        case 0x18cc98u: goto label_18cc98;
        case 0x18cc9cu: goto label_18cc9c;
        case 0x18cca0u: goto label_18cca0;
        case 0x18cca4u: goto label_18cca4;
        case 0x18cca8u: goto label_18cca8;
        case 0x18ccacu: goto label_18ccac;
        case 0x18ccb0u: goto label_18ccb0;
        case 0x18ccb4u: goto label_18ccb4;
        case 0x18ccb8u: goto label_18ccb8;
        case 0x18ccbcu: goto label_18ccbc;
        case 0x18ccc0u: goto label_18ccc0;
        case 0x18ccc4u: goto label_18ccc4;
        case 0x18ccc8u: goto label_18ccc8;
        case 0x18ccccu: goto label_18cccc;
        case 0x18ccd0u: goto label_18ccd0;
        case 0x18ccd4u: goto label_18ccd4;
        case 0x18ccd8u: goto label_18ccd8;
        case 0x18ccdcu: goto label_18ccdc;
        case 0x18cce0u: goto label_18cce0;
        case 0x18cce4u: goto label_18cce4;
        case 0x18cce8u: goto label_18cce8;
        case 0x18ccecu: goto label_18ccec;
        case 0x18ccf0u: goto label_18ccf0;
        case 0x18ccf4u: goto label_18ccf4;
        case 0x18ccf8u: goto label_18ccf8;
        case 0x18ccfcu: goto label_18ccfc;
        case 0x18cd00u: goto label_18cd00;
        case 0x18cd04u: goto label_18cd04;
        case 0x18cd08u: goto label_18cd08;
        case 0x18cd0cu: goto label_18cd0c;
        case 0x18cd10u: goto label_18cd10;
        case 0x18cd14u: goto label_18cd14;
        case 0x18cd18u: goto label_18cd18;
        case 0x18cd1cu: goto label_18cd1c;
        case 0x18cd20u: goto label_18cd20;
        case 0x18cd24u: goto label_18cd24;
        case 0x18cd28u: goto label_18cd28;
        case 0x18cd2cu: goto label_18cd2c;
        case 0x18cd30u: goto label_18cd30;
        case 0x18cd34u: goto label_18cd34;
        case 0x18cd38u: goto label_18cd38;
        case 0x18cd3cu: goto label_18cd3c;
        case 0x18cd40u: goto label_18cd40;
        case 0x18cd44u: goto label_18cd44;
        case 0x18cd48u: goto label_18cd48;
        case 0x18cd4cu: goto label_18cd4c;
        case 0x18cd50u: goto label_18cd50;
        case 0x18cd54u: goto label_18cd54;
        case 0x18cd58u: goto label_18cd58;
        case 0x18cd5cu: goto label_18cd5c;
        case 0x18cd60u: goto label_18cd60;
        case 0x18cd64u: goto label_18cd64;
        case 0x18cd68u: goto label_18cd68;
        case 0x18cd6cu: goto label_18cd6c;
        case 0x18cd70u: goto label_18cd70;
        case 0x18cd74u: goto label_18cd74;
        case 0x18cd78u: goto label_18cd78;
        case 0x18cd7cu: goto label_18cd7c;
        case 0x18cd80u: goto label_18cd80;
        case 0x18cd84u: goto label_18cd84;
        case 0x18cd88u: goto label_18cd88;
        case 0x18cd8cu: goto label_18cd8c;
        case 0x18cd90u: goto label_18cd90;
        case 0x18cd94u: goto label_18cd94;
        case 0x18cd98u: goto label_18cd98;
        case 0x18cd9cu: goto label_18cd9c;
        case 0x18cda0u: goto label_18cda0;
        case 0x18cda4u: goto label_18cda4;
        case 0x18cda8u: goto label_18cda8;
        case 0x18cdacu: goto label_18cdac;
        case 0x18cdb0u: goto label_18cdb0;
        case 0x18cdb4u: goto label_18cdb4;
        case 0x18cdb8u: goto label_18cdb8;
        case 0x18cdbcu: goto label_18cdbc;
        case 0x18cdc0u: goto label_18cdc0;
        case 0x18cdc4u: goto label_18cdc4;
        case 0x18cdc8u: goto label_18cdc8;
        case 0x18cdccu: goto label_18cdcc;
        case 0x18cdd0u: goto label_18cdd0;
        case 0x18cdd4u: goto label_18cdd4;
        case 0x18cdd8u: goto label_18cdd8;
        case 0x18cddcu: goto label_18cddc;
        case 0x18cde0u: goto label_18cde0;
        case 0x18cde4u: goto label_18cde4;
        case 0x18cde8u: goto label_18cde8;
        case 0x18cdecu: goto label_18cdec;
        case 0x18cdf0u: goto label_18cdf0;
        case 0x18cdf4u: goto label_18cdf4;
        case 0x18cdf8u: goto label_18cdf8;
        case 0x18cdfcu: goto label_18cdfc;
        case 0x18ce00u: goto label_18ce00;
        case 0x18ce04u: goto label_18ce04;
        case 0x18ce08u: goto label_18ce08;
        case 0x18ce0cu: goto label_18ce0c;
        case 0x18ce10u: goto label_18ce10;
        case 0x18ce14u: goto label_18ce14;
        case 0x18ce18u: goto label_18ce18;
        case 0x18ce1cu: goto label_18ce1c;
        case 0x18ce20u: goto label_18ce20;
        case 0x18ce24u: goto label_18ce24;
        case 0x18ce28u: goto label_18ce28;
        case 0x18ce2cu: goto label_18ce2c;
        case 0x18ce30u: goto label_18ce30;
        case 0x18ce34u: goto label_18ce34;
        case 0x18ce38u: goto label_18ce38;
        case 0x18ce3cu: goto label_18ce3c;
        case 0x18ce40u: goto label_18ce40;
        case 0x18ce44u: goto label_18ce44;
        case 0x18ce48u: goto label_18ce48;
        case 0x18ce4cu: goto label_18ce4c;
        case 0x18ce50u: goto label_18ce50;
        case 0x18ce54u: goto label_18ce54;
        default: break;
    }

    ctx->pc = 0x18cc60u;

label_18cc60:
    // 0x18cc60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18cc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_18cc64:
    // 0x18cc64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18cc68:
    // 0x18cc68: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18cc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_18cc6c:
    // 0x18cc6c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x18cc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_18cc70:
    // 0x18cc70: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18cc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_18cc74:
    // 0x18cc74: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x18cc74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18cc78:
    // 0x18cc78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18cc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18cc7c:
    // 0x18cc7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18cc7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18cc80:
    // 0x18cc80: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x18cc80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_18cc84:
    // 0x18cc84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18cc84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18cc88:
    // 0x18cc88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18cc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18cc8c:
    // 0x18cc8c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x18cc8cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_18cc90:
    // 0x18cc90: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x18cc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_18cc94:
    // 0x18cc94: 0x8e5301d4  lw          $s3, 0x1D4($s2)
    ctx->pc = 0x18cc94u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 468)));
label_18cc98:
    // 0x18cc98: 0xae4201d4  sw          $v0, 0x1D4($s2)
    ctx->pc = 0x18cc98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 2));
label_18cc9c:
    // 0x18cc9c: 0xae4701e0  sw          $a3, 0x1E0($s2)
    ctx->pc = 0x18cc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 480), GPR_U32(ctx, 7));
label_18cca0:
    // 0x18cca0: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x18cca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_18cca4:
    // 0x18cca4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x18cca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18cca8:
    // 0x18cca8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x18cca8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_18ccac:
    // 0x18ccac: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x18ccacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18ccb0:
    // 0x18ccb0: 0x40f809  jalr        $v0
label_18ccb4:
    if (ctx->pc == 0x18CCB4u) {
        ctx->pc = 0x18CCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CCB0u;
        // 0x18ccb4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CCB8u;
        goto label_18ccb8;
    }
    ctx->pc = 0x18CCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18CCB8u);
        ctx->pc = 0x18CCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CCB0u;
        // 0x18ccb4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CCB0u, 0x18CCB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18CCB8u;
label_18ccb8:
    // 0x18ccb8: 0x924301c7  lbu         $v1, 0x1C7($s2)
    ctx->pc = 0x18ccb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 455)));
label_18ccbc:
    // 0x18ccbc: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x18ccbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
label_18ccc0:
    // 0x18ccc0: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x18ccc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
label_18ccc4:
    // 0x18ccc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18ccc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18ccc8:
    // 0x18ccc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18ccc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18cccc:
    // 0x18cccc: 0x0  nop
    ctx->pc = 0x18ccccu;
    // NOP
label_18ccd0:
    // 0x18ccd0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18ccd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18ccd4:
    // 0x18ccd4: 0xae4201e4  sw          $v0, 0x1E4($s2)
    ctx->pc = 0x18ccd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 484), GPR_U32(ctx, 2));
label_18ccd8:
    // 0x18ccd8: 0xae5001d0  sw          $s0, 0x1D0($s2)
    ctx->pc = 0x18ccd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 464), GPR_U32(ctx, 16));
label_18ccdc:
    // 0x18ccdc: 0x12200040  beqz        $s1, . + 4 + (0x40 << 2)
label_18cce0:
    if (ctx->pc == 0x18CCE0u) {
        ctx->pc = 0x18CCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CCDCu;
        // 0x18cce0: 0x46010102  mul.s       $f4, $f0, $f1 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CCE4u;
        goto label_18cce4;
    }
    ctx->pc = 0x18CCDCu;
    {
        const bool branch_taken_0x18ccdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CCDCu;
        // 0x18cce0: 0x46010102  mul.s       $f4, $f0, $f1 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ccdc) {
            ctx->pc = 0x18CDE0u;
            goto label_18cde0;
        }
    }
    ctx->pc = 0x18CCE4u;
label_18cce4:
    // 0x18cce4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x18cce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_18cce8:
    // 0x18cce8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18cce8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_18ccec:
    // 0x18ccec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18ccecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ccf0:
    // 0x18ccf0: 0x0  nop
    ctx->pc = 0x18ccf0u;
    // NOP
label_18ccf4:
    // 0x18ccf4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x18ccf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ccf8:
    // 0x18ccf8: 0x0  nop
    ctx->pc = 0x18ccf8u;
    // NOP
label_18ccfc:
    // 0x18ccfc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_18cd00:
    if (ctx->pc == 0x18CD00u) {
        ctx->pc = 0x18CD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CCFCu;
        // 0x18cd00: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CD04u;
        goto label_18cd04;
    }
    ctx->pc = 0x18CCFCu;
    {
        const bool branch_taken_0x18ccfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ccfc) {
            ctx->pc = 0x18CD00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CCFCu;
            // 0x18cd00: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CD04u;
            goto label_18cd04;
        }
    }
    ctx->pc = 0x18CD04u;
label_18cd04:
    // 0x18cd04: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x18cd04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_18cd08:
    // 0x18cd08: 0x0  nop
    ctx->pc = 0x18cd08u;
    // NOP
label_18cd0c:
    // 0x18cd0c: 0x46142834  c.lt.s      $f5, $f20
    ctx->pc = 0x18cd0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18cd10:
    // 0x18cd10: 0x0  nop
    ctx->pc = 0x18cd10u;
    // NOP
label_18cd14:
    // 0x18cd14: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
label_18cd18:
    if (ctx->pc == 0x18CD18u) {
        ctx->pc = 0x18CD1Cu;
        goto label_18cd1c;
    }
    ctx->pc = 0x18CD14u;
    {
        const bool branch_taken_0x18cd14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18cd14) {
            ctx->pc = 0x18CD94u;
            goto label_18cd94;
        }
    }
    ctx->pc = 0x18CD1Cu;
label_18cd1c:
    // 0x18cd1c: 0xc64201d8  lwc1        $f2, 0x1D8($s2)
    ctx->pc = 0x18cd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18cd20:
    // 0x18cd20: 0x46051032  c.eq.s      $f2, $f5
    ctx->pc = 0x18cd20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18cd24:
    // 0x18cd24: 0x0  nop
    ctx->pc = 0x18cd24u;
    // NOP
label_18cd28:
    // 0x18cd28: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_18cd2c:
    if (ctx->pc == 0x18CD2Cu) {
        ctx->pc = 0x18CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CD28u;
        // 0x18cd2c: 0x46002007  neg.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CD30u;
        goto label_18cd30;
    }
    ctx->pc = 0x18CD28u;
    {
        const bool branch_taken_0x18cd28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18cd28) {
            ctx->pc = 0x18CD2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CD28u;
            // 0x18cd2c: 0x46002007  neg.s       $f0, $f4 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CD54u;
            goto label_18cd54;
        }
    }
    ctx->pc = 0x18CD30u;
label_18cd30:
    // 0x18cd30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18cd30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_18cd34:
    // 0x18cd34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18cd34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18cd38:
    // 0x18cd38: 0x46002047  neg.s       $f1, $f4
    ctx->pc = 0x18cd38u;
    ctx->f[1] = FPU_NEG_S(ctx->f[4]);
label_18cd3c:
    // 0x18cd3c: 0x0  nop
    ctx->pc = 0x18cd3cu;
    // NOP
label_18cd40:
    // 0x18cd40: 0x0  nop
    ctx->pc = 0x18cd40u;
    // NOP
label_18cd44:
    // 0x18cd44: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x18cd44u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_18cd48:
    // 0x18cd48: 0xe64101d8  swc1        $f1, 0x1D8($s2)
    ctx->pc = 0x18cd48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 472), bits); }
label_18cd4c:
    // 0x18cd4c: 0x10000016  b           . + 4 + (0x16 << 2)
label_18cd50:
    if (ctx->pc == 0x18CD50u) {
        ctx->pc = 0x18CD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CD4Cu;
        // 0x18cd50: 0xe64001dc  swc1        $f0, 0x1DC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 476), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CD54u;
        goto label_18cd54;
    }
    ctx->pc = 0x18CD4Cu;
    {
        const bool branch_taken_0x18cd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CD4Cu;
        // 0x18cd50: 0xe64001dc  swc1        $f0, 0x1DC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 476), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cd4c) {
            ctx->pc = 0x18CDA8u;
            goto label_18cda8;
        }
    }
    ctx->pc = 0x18CD54u;
label_18cd54:
    // 0x18cd54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18cd54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_18cd58:
    // 0x18cd58: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x18cd58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_18cd5c:
    // 0x18cd5c: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x18cd5cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
label_18cd60:
    // 0x18cd60: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x18cd60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_18cd64:
    // 0x18cd64: 0xe64001d8  swc1        $f0, 0x1D8($s2)
    ctx->pc = 0x18cd64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 472), bits); }
label_18cd68:
    // 0x18cd68: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x18cd68u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_18cd6c:
    // 0x18cd6c: 0x4605a032  c.eq.s      $f20, $f5
    ctx->pc = 0x18cd6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18cd70:
    // 0x18cd70: 0x0  nop
    ctx->pc = 0x18cd70u;
    // NOP
label_18cd74:
    // 0x18cd74: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_18cd78:
    if (ctx->pc == 0x18CD78u) {
        ctx->pc = 0x18CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CD74u;
        // 0x18cd78: 0xe64301dc  swc1        $f3, 0x1DC($s2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 476), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CD7Cu;
        goto label_18cd7c;
    }
    ctx->pc = 0x18CD74u;
    {
        const bool branch_taken_0x18cd74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CD74u;
        // 0x18cd78: 0xe64301dc  swc1        $f3, 0x1DC($s2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 476), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cd74) {
            ctx->pc = 0x18CD8Cu;
            goto label_18cd8c;
        }
    }
    ctx->pc = 0x18CD7Cu;
label_18cd7c:
    // 0x18cd7c: 0x0  nop
    ctx->pc = 0x18cd7cu;
    // NOP
label_18cd80:
    // 0x18cd80: 0x0  nop
    ctx->pc = 0x18cd80u;
    // NOP
label_18cd84:
    // 0x18cd84: 0x46141803  div.s       $f0, $f3, $f20
    ctx->pc = 0x18cd84u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[20]); }
label_18cd88:
    // 0x18cd88: 0xe64001dc  swc1        $f0, 0x1DC($s2)
    ctx->pc = 0x18cd88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 476), bits); }
label_18cd8c:
    // 0x18cd8c: 0x10000006  b           . + 4 + (0x6 << 2)
label_18cd90:
    if (ctx->pc == 0x18CD90u) {
        ctx->pc = 0x18CD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CD8Cu;
        // 0x18cd90: 0xae5301d4  sw          $s3, 0x1D4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CD94u;
        goto label_18cd94;
    }
    ctx->pc = 0x18CD8Cu;
    {
        const bool branch_taken_0x18cd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CD8Cu;
        // 0x18cd90: 0xae5301d4  sw          $s3, 0x1D4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cd8c) {
            ctx->pc = 0x18CDA8u;
            goto label_18cda8;
        }
    }
    ctx->pc = 0x18CD94u;
label_18cd94:
    // 0x18cd94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18cd94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_18cd98:
    // 0x18cd98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18cd98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18cd9c:
    // 0x18cd9c: 0x0  nop
    ctx->pc = 0x18cd9cu;
    // NOP
label_18cda0:
    // 0x18cda0: 0xe64001dc  swc1        $f0, 0x1DC($s2)
    ctx->pc = 0x18cda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 476), bits); }
label_18cda4:
    // 0x18cda4: 0xe64001d8  swc1        $f0, 0x1D8($s2)
    ctx->pc = 0x18cda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 472), bits); }
label_18cda8:
    // 0x18cda8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x18cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_18cdac:
    // 0x18cdac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18cdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18cdb0:
    // 0x18cdb0: 0x24421e10  addiu       $v0, $v0, 0x1E10
    ctx->pc = 0x18cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7696));
label_18cdb4:
    // 0x18cdb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18cdb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18cdb8:
    // 0x18cdb8: 0x2450ea30  addiu       $s0, $v0, -0x15D0
    ctx->pc = 0x18cdb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961712));
label_18cdbc:
    // 0x18cdbc: 0xac432944  sw          $v1, 0x2944($v0)
    ctx->pc = 0x18cdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10564), GPR_U32(ctx, 3));
label_18cdc0:
    // 0x18cdc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cdc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18cdc4:
    // 0x18cdc4: 0xc06c996  jal         func_1B2658
label_18cdc8:
    if (ctx->pc == 0x18CDC8u) {
        ctx->pc = 0x18CDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CDC4u;
        // 0x18cdc8: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CDCCu;
        goto label_18cdcc;
    }
    ctx->pc = 0x18CDC4u;
    SET_GPR_U32(ctx, 31, 0x18CDCCu);
    ctx->pc = 0x18CDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CDC4u;
    // 0x18cdc8: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2658u, 0x18CDC4u, 0x18CDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CDCCu;
label_18cdcc:
    // 0x18cdcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cdccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18cdd0:
    // 0x18cdd0: 0xc06c996  jal         func_1B2658
label_18cdd4:
    if (ctx->pc == 0x18CDD4u) {
        ctx->pc = 0x18CDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CDD0u;
        // 0x18cdd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CDD8u;
        goto label_18cdd8;
    }
    ctx->pc = 0x18CDD0u;
    SET_GPR_U32(ctx, 31, 0x18CDD8u);
    ctx->pc = 0x18CDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CDD0u;
    // 0x18cdd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2658u, 0x18CDD0u, 0x18CDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CDD8u;
label_18cdd8:
    // 0x18cdd8: 0x10000017  b           . + 4 + (0x17 << 2)
label_18cddc:
    if (ctx->pc == 0x18CDDCu) {
        ctx->pc = 0x18CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CDD8u;
        // 0x18cddc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CDE0u;
        goto label_18cde0;
    }
    ctx->pc = 0x18CDD8u;
    {
        const bool branch_taken_0x18cdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CDD8u;
        // 0x18cddc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cdd8) {
            ctx->pc = 0x18CE38u;
            goto label_18ce38;
        }
    }
    ctx->pc = 0x18CDE0u;
label_18cde0:
    // 0x18cde0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x18cde0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18cde4:
    // 0x18cde4: 0x0  nop
    ctx->pc = 0x18cde4u;
    // NOP
label_18cde8:
    // 0x18cde8: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x18cde8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18cdec:
    // 0x18cdec: 0x0  nop
    ctx->pc = 0x18cdecu;
    // NOP
label_18cdf0:
    // 0x18cdf0: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
label_18cdf4:
    if (ctx->pc == 0x18CDF4u) {
        ctx->pc = 0x18CDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CDF0u;
        // 0x18cdf4: 0xe64101d8  swc1        $f1, 0x1D8($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 472), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CDF8u;
        goto label_18cdf8;
    }
    ctx->pc = 0x18CDF0u;
    {
        const bool branch_taken_0x18cdf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18cdf0) {
            ctx->pc = 0x18CDF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CDF0u;
            // 0x18cdf4: 0xe64101d8  swc1        $f1, 0x1D8($s2) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 472), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CE24u;
            goto label_18ce24;
        }
    }
    ctx->pc = 0x18CDF8u;
label_18cdf8:
    // 0x18cdf8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x18cdf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_18cdfc:
    // 0x18cdfc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18cdfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18ce00:
    // 0x18ce00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18ce00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_18ce04:
    // 0x18ce04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18ce04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ce08:
    // 0x18ce08: 0x0  nop
    ctx->pc = 0x18ce08u;
    // NOP
label_18ce0c:
    // 0x18ce0c: 0x0  nop
    ctx->pc = 0x18ce0cu;
    // NOP
label_18ce10:
    // 0x18ce10: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x18ce10u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[20]); }
label_18ce14:
    // 0x18ce14: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x18ce14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_18ce18:
    // 0x18ce18: 0xe64001d8  swc1        $f0, 0x1D8($s2)
    ctx->pc = 0x18ce18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 472), bits); }
label_18ce1c:
    // 0x18ce1c: 0x10000005  b           . + 4 + (0x5 << 2)
label_18ce20:
    if (ctx->pc == 0x18CE20u) {
        ctx->pc = 0x18CE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE1Cu;
        // 0x18ce20: 0xe64101dc  swc1        $f1, 0x1DC($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 476), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CE24u;
        goto label_18ce24;
    }
    ctx->pc = 0x18CE1Cu;
    {
        const bool branch_taken_0x18ce1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE1Cu;
        // 0x18ce20: 0xe64101dc  swc1        $f1, 0x1DC($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 476), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce1c) {
            ctx->pc = 0x18CE34u;
            goto label_18ce34;
        }
    }
    ctx->pc = 0x18CE24u;
label_18ce24:
    // 0x18ce24: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x18ce24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_18ce28:
    // 0x18ce28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18ce28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ce2c:
    // 0x18ce2c: 0x0  nop
    ctx->pc = 0x18ce2cu;
    // NOP
label_18ce30:
    // 0x18ce30: 0xe64001dc  swc1        $f0, 0x1DC($s2)
    ctx->pc = 0x18ce30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 476), bits); }
label_18ce34:
    // 0x18ce34: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18ce34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18ce38:
    // 0x18ce38: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18ce38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18ce3c:
    // 0x18ce3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18ce3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18ce40:
    // 0x18ce40: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x18ce40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18ce44:
    // 0x18ce44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ce44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18ce48:
    // 0x18ce48: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x18ce48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18ce4c:
    // 0x18ce4c: 0x3e00008  jr          $ra
label_18ce50:
    if (ctx->pc == 0x18CE50u) {
        ctx->pc = 0x18CE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE4Cu;
        // 0x18ce50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CE54u;
        goto label_18ce54;
    }
    ctx->pc = 0x18CE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE4Cu;
        // 0x18ce50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CE54u;
label_18ce54:
    // 0x18ce54: 0x0  nop
    ctx->pc = 0x18ce54u;
    // NOP
    ctx->pc = 0x18ce58u;
}
