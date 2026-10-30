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

// Function: sub_0017BC28
// Address: 0x17bc28 - 0x17bec8
void sub_0017BC28_0x17bc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BC28_0x17bc28");
#endif

    switch (ctx->pc) {
        case 0x17bc28u: goto label_17bc28;
        case 0x17bc2cu: goto label_17bc2c;
        case 0x17bc30u: goto label_17bc30;
        case 0x17bc34u: goto label_17bc34;
        case 0x17bc38u: goto label_17bc38;
        case 0x17bc3cu: goto label_17bc3c;
        case 0x17bc40u: goto label_17bc40;
        case 0x17bc44u: goto label_17bc44;
        case 0x17bc48u: goto label_17bc48;
        case 0x17bc4cu: goto label_17bc4c;
        case 0x17bc50u: goto label_17bc50;
        case 0x17bc54u: goto label_17bc54;
        case 0x17bc58u: goto label_17bc58;
        case 0x17bc5cu: goto label_17bc5c;
        case 0x17bc60u: goto label_17bc60;
        case 0x17bc64u: goto label_17bc64;
        case 0x17bc68u: goto label_17bc68;
        case 0x17bc6cu: goto label_17bc6c;
        case 0x17bc70u: goto label_17bc70;
        case 0x17bc74u: goto label_17bc74;
        case 0x17bc78u: goto label_17bc78;
        case 0x17bc7cu: goto label_17bc7c;
        case 0x17bc80u: goto label_17bc80;
        case 0x17bc84u: goto label_17bc84;
        case 0x17bc88u: goto label_17bc88;
        case 0x17bc8cu: goto label_17bc8c;
        case 0x17bc90u: goto label_17bc90;
        case 0x17bc94u: goto label_17bc94;
        case 0x17bc98u: goto label_17bc98;
        case 0x17bc9cu: goto label_17bc9c;
        case 0x17bca0u: goto label_17bca0;
        case 0x17bca4u: goto label_17bca4;
        case 0x17bca8u: goto label_17bca8;
        case 0x17bcacu: goto label_17bcac;
        case 0x17bcb0u: goto label_17bcb0;
        case 0x17bcb4u: goto label_17bcb4;
        case 0x17bcb8u: goto label_17bcb8;
        case 0x17bcbcu: goto label_17bcbc;
        case 0x17bcc0u: goto label_17bcc0;
        case 0x17bcc4u: goto label_17bcc4;
        case 0x17bcc8u: goto label_17bcc8;
        case 0x17bcccu: goto label_17bccc;
        case 0x17bcd0u: goto label_17bcd0;
        case 0x17bcd4u: goto label_17bcd4;
        case 0x17bcd8u: goto label_17bcd8;
        case 0x17bcdcu: goto label_17bcdc;
        case 0x17bce0u: goto label_17bce0;
        case 0x17bce4u: goto label_17bce4;
        case 0x17bce8u: goto label_17bce8;
        case 0x17bcecu: goto label_17bcec;
        case 0x17bcf0u: goto label_17bcf0;
        case 0x17bcf4u: goto label_17bcf4;
        case 0x17bcf8u: goto label_17bcf8;
        case 0x17bcfcu: goto label_17bcfc;
        case 0x17bd00u: goto label_17bd00;
        case 0x17bd04u: goto label_17bd04;
        case 0x17bd08u: goto label_17bd08;
        case 0x17bd0cu: goto label_17bd0c;
        case 0x17bd10u: goto label_17bd10;
        case 0x17bd14u: goto label_17bd14;
        case 0x17bd18u: goto label_17bd18;
        case 0x17bd1cu: goto label_17bd1c;
        case 0x17bd20u: goto label_17bd20;
        case 0x17bd24u: goto label_17bd24;
        case 0x17bd28u: goto label_17bd28;
        case 0x17bd2cu: goto label_17bd2c;
        case 0x17bd30u: goto label_17bd30;
        case 0x17bd34u: goto label_17bd34;
        case 0x17bd38u: goto label_17bd38;
        case 0x17bd3cu: goto label_17bd3c;
        case 0x17bd40u: goto label_17bd40;
        case 0x17bd44u: goto label_17bd44;
        case 0x17bd48u: goto label_17bd48;
        case 0x17bd4cu: goto label_17bd4c;
        case 0x17bd50u: goto label_17bd50;
        case 0x17bd54u: goto label_17bd54;
        case 0x17bd58u: goto label_17bd58;
        case 0x17bd5cu: goto label_17bd5c;
        case 0x17bd60u: goto label_17bd60;
        case 0x17bd64u: goto label_17bd64;
        case 0x17bd68u: goto label_17bd68;
        case 0x17bd6cu: goto label_17bd6c;
        case 0x17bd70u: goto label_17bd70;
        case 0x17bd74u: goto label_17bd74;
        case 0x17bd78u: goto label_17bd78;
        case 0x17bd7cu: goto label_17bd7c;
        case 0x17bd80u: goto label_17bd80;
        case 0x17bd84u: goto label_17bd84;
        case 0x17bd88u: goto label_17bd88;
        case 0x17bd8cu: goto label_17bd8c;
        case 0x17bd90u: goto label_17bd90;
        case 0x17bd94u: goto label_17bd94;
        case 0x17bd98u: goto label_17bd98;
        case 0x17bd9cu: goto label_17bd9c;
        case 0x17bda0u: goto label_17bda0;
        case 0x17bda4u: goto label_17bda4;
        case 0x17bda8u: goto label_17bda8;
        case 0x17bdacu: goto label_17bdac;
        case 0x17bdb0u: goto label_17bdb0;
        case 0x17bdb4u: goto label_17bdb4;
        case 0x17bdb8u: goto label_17bdb8;
        case 0x17bdbcu: goto label_17bdbc;
        case 0x17bdc0u: goto label_17bdc0;
        case 0x17bdc4u: goto label_17bdc4;
        case 0x17bdc8u: goto label_17bdc8;
        case 0x17bdccu: goto label_17bdcc;
        case 0x17bdd0u: goto label_17bdd0;
        case 0x17bdd4u: goto label_17bdd4;
        case 0x17bdd8u: goto label_17bdd8;
        case 0x17bddcu: goto label_17bddc;
        case 0x17bde0u: goto label_17bde0;
        case 0x17bde4u: goto label_17bde4;
        case 0x17bde8u: goto label_17bde8;
        case 0x17bdecu: goto label_17bdec;
        case 0x17bdf0u: goto label_17bdf0;
        case 0x17bdf4u: goto label_17bdf4;
        case 0x17bdf8u: goto label_17bdf8;
        case 0x17bdfcu: goto label_17bdfc;
        case 0x17be00u: goto label_17be00;
        case 0x17be04u: goto label_17be04;
        case 0x17be08u: goto label_17be08;
        case 0x17be0cu: goto label_17be0c;
        case 0x17be10u: goto label_17be10;
        case 0x17be14u: goto label_17be14;
        case 0x17be18u: goto label_17be18;
        case 0x17be1cu: goto label_17be1c;
        case 0x17be20u: goto label_17be20;
        case 0x17be24u: goto label_17be24;
        case 0x17be28u: goto label_17be28;
        case 0x17be2cu: goto label_17be2c;
        case 0x17be30u: goto label_17be30;
        case 0x17be34u: goto label_17be34;
        case 0x17be38u: goto label_17be38;
        case 0x17be3cu: goto label_17be3c;
        case 0x17be40u: goto label_17be40;
        case 0x17be44u: goto label_17be44;
        case 0x17be48u: goto label_17be48;
        case 0x17be4cu: goto label_17be4c;
        case 0x17be50u: goto label_17be50;
        case 0x17be54u: goto label_17be54;
        case 0x17be58u: goto label_17be58;
        case 0x17be5cu: goto label_17be5c;
        case 0x17be60u: goto label_17be60;
        case 0x17be64u: goto label_17be64;
        case 0x17be68u: goto label_17be68;
        case 0x17be6cu: goto label_17be6c;
        case 0x17be70u: goto label_17be70;
        case 0x17be74u: goto label_17be74;
        case 0x17be78u: goto label_17be78;
        case 0x17be7cu: goto label_17be7c;
        case 0x17be80u: goto label_17be80;
        case 0x17be84u: goto label_17be84;
        case 0x17be88u: goto label_17be88;
        case 0x17be8cu: goto label_17be8c;
        case 0x17be90u: goto label_17be90;
        case 0x17be94u: goto label_17be94;
        case 0x17be98u: goto label_17be98;
        case 0x17be9cu: goto label_17be9c;
        case 0x17bea0u: goto label_17bea0;
        case 0x17bea4u: goto label_17bea4;
        case 0x17bea8u: goto label_17bea8;
        case 0x17beacu: goto label_17beac;
        case 0x17beb0u: goto label_17beb0;
        case 0x17beb4u: goto label_17beb4;
        case 0x17beb8u: goto label_17beb8;
        case 0x17bebcu: goto label_17bebc;
        case 0x17bec0u: goto label_17bec0;
        case 0x17bec4u: goto label_17bec4;
        default: break;
    }

    ctx->pc = 0x17bc28u;

label_17bc28:
    // 0x17bc28: 0x27bddec0  addiu       $sp, $sp, -0x2140
    ctx->pc = 0x17bc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294958784));
label_17bc2c:
    // 0x17bc2c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x17bc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_17bc30:
    // 0x17bc30: 0x7fb020d0  sq          $s0, 0x20D0($sp)
    ctx->pc = 0x17bc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8400), GPR_VEC(ctx, 16));
label_17bc34:
    // 0x17bc34: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17bc34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17bc38:
    // 0x17bc38: 0x7fb220b0  sq          $s2, 0x20B0($sp)
    ctx->pc = 0x17bc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8368), GPR_VEC(ctx, 18));
label_17bc3c:
    // 0x17bc3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17bc3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17bc40:
    // 0x17bc40: 0x7fb42090  sq          $s4, 0x2090($sp)
    ctx->pc = 0x17bc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8336), GPR_VEC(ctx, 20));
label_17bc44:
    // 0x17bc44: 0x27b22000  addiu       $s2, $sp, 0x2000
    ctx->pc = 0x17bc44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 8192));
label_17bc48:
    // 0x17bc48: 0x7fb62070  sq          $s6, 0x2070($sp)
    ctx->pc = 0x17bc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8304), GPR_VEC(ctx, 22));
label_17bc4c:
    // 0x17bc4c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17bc4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17bc50:
    // 0x17bc50: 0xe7bd2128  swc1        $f29, 0x2128($sp)
    ctx->pc = 0x17bc50u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8488), bits); }
label_17bc54:
    // 0x17bc54: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x17bc54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17bc58:
    // 0x17bc58: 0xe7b82100  swc1        $f24, 0x2100($sp)
    ctx->pc = 0x17bc58u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8448), bits); }
label_17bc5c:
    // 0x17bc5c: 0xe7b720f8  swc1        $f23, 0x20F8($sp)
    ctx->pc = 0x17bc5cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8440), bits); }
label_17bc60:
    // 0x17bc60: 0x7fb120c0  sq          $s1, 0x20C0($sp)
    ctx->pc = 0x17bc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8384), GPR_VEC(ctx, 17));
label_17bc64:
    // 0x17bc64: 0x7fb320a0  sq          $s3, 0x20A0($sp)
    ctx->pc = 0x17bc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8352), GPR_VEC(ctx, 19));
label_17bc68:
    // 0x17bc68: 0x7fb52080  sq          $s5, 0x2080($sp)
    ctx->pc = 0x17bc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8320), GPR_VEC(ctx, 21));
label_17bc6c:
    // 0x17bc6c: 0x7fb72060  sq          $s7, 0x2060($sp)
    ctx->pc = 0x17bc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8288), GPR_VEC(ctx, 23));
label_17bc70:
    // 0x17bc70: 0xffbf2050  sd          $ra, 0x2050($sp)
    ctx->pc = 0x17bc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8272), GPR_U64(ctx, 31));
label_17bc74:
    // 0x17bc74: 0xe7be2130  swc1        $f30, 0x2130($sp)
    ctx->pc = 0x17bc74u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8496), bits); }
label_17bc78:
    // 0x17bc78: 0xe7bc2120  swc1        $f28, 0x2120($sp)
    ctx->pc = 0x17bc78u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8480), bits); }
label_17bc7c:
    // 0x17bc7c: 0xe7bb2118  swc1        $f27, 0x2118($sp)
    ctx->pc = 0x17bc7cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8472), bits); }
label_17bc80:
    // 0x17bc80: 0xe7ba2110  swc1        $f26, 0x2110($sp)
    ctx->pc = 0x17bc80u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8464), bits); }
label_17bc84:
    // 0x17bc84: 0xe7b92108  swc1        $f25, 0x2108($sp)
    ctx->pc = 0x17bc84u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8456), bits); }
label_17bc88:
    // 0x17bc88: 0xe7b620f0  swc1        $f22, 0x20F0($sp)
    ctx->pc = 0x17bc88u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8432), bits); }
label_17bc8c:
    // 0x17bc8c: 0xe7b520e8  swc1        $f21, 0x20E8($sp)
    ctx->pc = 0x17bc8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8424), bits); }
label_17bc90:
    // 0x17bc90: 0xe7b420e0  swc1        $f20, 0x20E0($sp)
    ctx->pc = 0x17bc90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8416), bits); }
label_17bc94:
    // 0x17bc94: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x17bc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_17bc98:
    // 0x17bc98: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x17bc98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_17bc9c:
    // 0x17bc9c: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x17bc9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_17bca0:
    // 0x17bca0: 0x9215002c  lbu         $s5, 0x2C($s0)
    ctx->pc = 0x17bca0u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_17bca4:
    // 0x17bca4: 0x7fa22000  sq          $v0, 0x2000($sp)
    ctx->pc = 0x17bca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8192), GPR_VEC(ctx, 2));
label_17bca8:
    // 0x17bca8: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x17bca8u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17bcac:
    // 0x17bcac: 0x0  nop
    ctx->pc = 0x17bcacu;
    // NOP
label_17bcb0:
    // 0x17bcb0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17bcb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_17bcb4:
    // 0x17bcb4: 0x3c01c0c9  lui         $at, 0xC0C9
    ctx->pc = 0x17bcb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49353 << 16));
label_17bcb8:
    // 0x17bcb8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x17bcb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_17bcbc:
    // 0x17bcbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17bcbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17bcc0:
    // 0x17bcc0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17bcc4:
    // 0x17bcc4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x17bcc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_17bcc8:
    // 0x17bcc8: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x17bcc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_17bccc:
    // 0x17bccc: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x17bcccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_17bcd0:
    // 0x17bcd0: 0x0  nop
    ctx->pc = 0x17bcd0u;
    // NOP
label_17bcd4:
    // 0x17bcd4: 0x0  nop
    ctx->pc = 0x17bcd4u;
    // NOP
label_17bcd8:
    // 0x17bcd8: 0x460105c3  div.s       $f23, $f0, $f1
    ctx->pc = 0x17bcd8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_17bcdc:
    // 0x17bcdc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x17bcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_17bce0:
    // 0x17bce0: 0x4600c746  mov.s       $f29, $f24
    ctx->pc = 0x17bce0u;
    ctx->f[29] = FPU_MOV_S(ctx->f[24]);
label_17bce4:
    // 0x17bce4: 0x60f809  jalr        $v1
label_17bce8:
    if (ctx->pc == 0x17BCE8u) {
        ctx->pc = 0x17BCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BCE4u;
        // 0x17bce8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BCECu;
        goto label_17bcec;
    }
    ctx->pc = 0x17BCE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17BCECu);
        ctx->pc = 0x17BCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BCE4u;
        // 0x17bce8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BCE4u, 0x17BCECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17BCECu;
label_17bcec:
    // 0x17bcec: 0x8e14005c  lw          $s4, 0x5C($s0)
    ctx->pc = 0x17bcecu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_17bcf0:
    // 0x17bcf0: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_17bcf4:
    if (ctx->pc == 0x17BCF4u) {
        ctx->pc = 0x17BCF8u;
        goto label_17bcf8;
    }
    ctx->pc = 0x17BCF0u;
    {
        const bool branch_taken_0x17bcf0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bcf0) {
            ctx->pc = 0x17BD04u;
            goto label_17bd04;
        }
    }
    ctx->pc = 0x17BCF8u;
label_17bcf8:
    // 0x17bcf8: 0xc61d004c  lwc1        $f29, 0x4C($s0)
    ctx->pc = 0x17bcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_17bcfc:
    // 0x17bcfc: 0x27b62010  addiu       $s6, $sp, 0x2010
    ctx->pc = 0x17bcfcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 8208));
label_17bd00:
    // 0x17bd00: 0xc6180050  lwc1        $f24, 0x50($s0)
    ctx->pc = 0x17bd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_17bd04:
    // 0x17bd04: 0x6a020043  ldl         $v0, 0x43($s0)
    ctx->pc = 0x17bd04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_17bd08:
    // 0x17bd08: 0x6e02003c  ldr         $v0, 0x3C($s0)
    ctx->pc = 0x17bd08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_17bd0c:
    // 0x17bd0c: 0x6a03004b  ldl         $v1, 0x4B($s0)
    ctx->pc = 0x17bd0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_17bd10:
    // 0x17bd10: 0x6e030044  ldr         $v1, 0x44($s0)
    ctx->pc = 0x17bd10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_17bd14:
    // 0x17bd14: 0xb3a22027  sdl         $v0, 0x2027($sp)
    ctx->pc = 0x17bd14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17bd18:
    // 0x17bd18: 0xb7a22020  sdr         $v0, 0x2020($sp)
    ctx->pc = 0x17bd18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17bd1c:
    // 0x17bd1c: 0xb3a3202f  sdl         $v1, 0x202F($sp)
    ctx->pc = 0x17bd1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8239); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17bd20:
    // 0x17bd20: 0xb7a32028  sdr         $v1, 0x2028($sp)
    ctx->pc = 0x17bd20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8232); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17bd24:
    // 0x17bd24: 0x27a62020  addiu       $a2, $sp, 0x2020
    ctx->pc = 0x17bd24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8224));
label_17bd28:
    // 0x17bd28: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x17bd28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17bd2c:
    // 0x17bd2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17bd2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17bd30:
    // 0x17bd30: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x17bd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17bd34:
    // 0x17bd34: 0x2607004c  addiu       $a3, $s0, 0x4C
    ctx->pc = 0x17bd34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
label_17bd38:
    // 0x17bd38: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x17bd38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17bd3c:
    // 0x17bd3c: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x17bd3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_17bd40:
    // 0x17bd40: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x17bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_17bd44:
    // 0x17bd44: 0x40f809  jalr        $v0
label_17bd48:
    if (ctx->pc == 0x17BD48u) {
        ctx->pc = 0x17BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD44u;
        // 0x17bd48: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BD4Cu;
        goto label_17bd4c;
    }
    ctx->pc = 0x17BD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17BD4Cu);
        ctx->pc = 0x17BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD44u;
        // 0x17bd48: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BD44u, 0x17BD4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17BD4Cu;
label_17bd4c:
    // 0x17bd4c: 0x27a42040  addiu       $a0, $sp, 0x2040
    ctx->pc = 0x17bd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 8256));
label_17bd50:
    // 0x17bd50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17bd50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17bd54:
    // 0x17bd54: 0xc10c1fa  jal         func_4307E8
label_17bd58:
    if (ctx->pc == 0x17BD58u) {
        ctx->pc = 0x17BD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD54u;
        // 0x17bd58: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BD5Cu;
        goto label_17bd5c;
    }
    ctx->pc = 0x17BD54u;
    SET_GPR_U32(ctx, 31, 0x17BD5Cu);
    ctx->pc = 0x17BD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BD54u;
    // 0x17bd58: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x17BD54u, 0x17BD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BD5Cu;
label_17bd5c:
    // 0x17bd5c: 0x26a20002  addiu       $v0, $s5, 0x2
    ctx->pc = 0x17bd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
label_17bd60:
    // 0x17bd60: 0xc61c0010  lwc1        $f28, 0x10($s0)
    ctx->pc = 0x17bd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_17bd64:
    // 0x17bd64: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x17bd64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17bd68:
    // 0x17bd68: 0xc61b0014  lwc1        $f27, 0x14($s0)
    ctx->pc = 0x17bd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_17bd6c:
    // 0x17bd6c: 0xc61a0018  lwc1        $f26, 0x18($s0)
    ctx->pc = 0x17bd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_17bd70:
    // 0x17bd70: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x17bd70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_17bd74:
    // 0x17bd74: 0xc619001c  lwc1        $f25, 0x1C($s0)
    ctx->pc = 0x17bd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_17bd78:
    // 0x17bd78: 0xc6160020  lwc1        $f22, 0x20($s0)
    ctx->pc = 0x17bd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_17bd7c:
    // 0x17bd7c: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_17bd80:
    if (ctx->pc == 0x17BD80u) {
        ctx->pc = 0x17BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD7Cu;
        // 0x17bd80: 0xc6150024  lwc1        $f21, 0x24($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BD84u;
        goto label_17bd84;
    }
    ctx->pc = 0x17BD7Cu;
    {
        const bool branch_taken_0x17bd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD7Cu;
        // 0x17bd80: 0xc6150024  lwc1        $f21, 0x24($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bd7c) {
            ctx->pc = 0x17BE4Cu;
            goto label_17be4c;
        }
    }
    ctx->pc = 0x17BD84u;
label_17bd84:
    // 0x17bd84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17bd84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_17bd88:
    // 0x17bd88: 0x4481f000  mtc1        $at, $f30
    ctx->pc = 0x17bd88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
label_17bd8c:
    // 0x17bd8c: 0x27b22030  addiu       $s2, $sp, 0x2030
    ctx->pc = 0x17bd8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 8240));
label_17bd90:
    // 0x17bd90: 0xc12e310  jal         func_4B8C40
label_17bd94:
    if (ctx->pc == 0x17BD94u) {
        ctx->pc = 0x17BD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD90u;
        // 0x17bd94: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BD98u;
        goto label_17bd98;
    }
    ctx->pc = 0x17BD90u;
    SET_GPR_U32(ctx, 31, 0x17BD98u);
    ctx->pc = 0x17BD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BD90u;
    // 0x17bd94: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x17BD90u, 0x17BD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BD98u;
label_17bd98:
    // 0x17bd98: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x17bd98u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_17bd9c:
    // 0x17bd9c: 0xc12e29c  jal         func_4B8A70
label_17bda0:
    if (ctx->pc == 0x17BDA0u) {
        ctx->pc = 0x17BDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD9Cu;
        // 0x17bda0: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BDA4u;
        goto label_17bda4;
    }
    ctx->pc = 0x17BD9Cu;
    SET_GPR_U32(ctx, 31, 0x17BDA4u);
    ctx->pc = 0x17BDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BD9Cu;
    // 0x17bda0: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x17BD9Cu, 0x17BDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BDA4u;
label_17bda4:
    // 0x17bda4: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
label_17bda8:
    if (ctx->pc == 0x17BDA8u) {
        ctx->pc = 0x17BDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BDA4u;
        // 0x17bda8: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BDACu;
        goto label_17bdac;
    }
    ctx->pc = 0x17BDA4u;
    {
        const bool branch_taken_0x17bda4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BDA4u;
        // 0x17bda8: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bda4) {
            ctx->pc = 0x17BDD4u;
            goto label_17bdd4;
        }
    }
    ctx->pc = 0x17BDACu;
label_17bdac:
    // 0x17bdac: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x17bdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17bdb0:
    // 0x17bdb0: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x17bdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17bdb4:
    // 0x17bdb4: 0x4600e002  mul.s       $f0, $f28, $f0
    ctx->pc = 0x17bdb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[28], ctx->f[0]);
label_17bdb8:
    // 0x17bdb8: 0x4601d842  mul.s       $f1, $f27, $f1
    ctx->pc = 0x17bdb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[27], ctx->f[1]);
label_17bdbc:
    // 0x17bdbc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x17bdbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_17bdc0:
    // 0x17bdc0: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x17bdc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_17bdc4:
    // 0x17bdc4: 0x461d0000  add.s       $f0, $f0, $f29
    ctx->pc = 0x17bdc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[29]);
label_17bdc8:
    // 0x17bdc8: 0x4601c041  sub.s       $f1, $f24, $f1
    ctx->pc = 0x17bdc8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[24], ctx->f[1]);
label_17bdcc:
    // 0x17bdcc: 0xe7a02010  swc1        $f0, 0x2010($sp)
    ctx->pc = 0x17bdccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8208), bits); }
label_17bdd0:
    // 0x17bdd0: 0xe7a12014  swc1        $f1, 0x2014($sp)
    ctx->pc = 0x17bdd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8212), bits); }
label_17bdd4:
    // 0x17bdd4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x17bdd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_17bdd8:
    // 0x17bdd8: 0xc12e310  jal         func_4B8C40
label_17bddc:
    if (ctx->pc == 0x17BDDCu) {
        ctx->pc = 0x17BDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BDD8u;
        // 0x17bddc: 0x4617b580  add.s       $f22, $f22, $f23 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BDE0u;
        goto label_17bde0;
    }
    ctx->pc = 0x17BDD8u;
    SET_GPR_U32(ctx, 31, 0x17BDE0u);
    ctx->pc = 0x17BDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BDD8u;
    // 0x17bddc: 0x4617b580  add.s       $f22, $f22, $f23 (Delay Slot)
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x17BDD8u, 0x17BDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BDE0u;
label_17bde0:
    // 0x17bde0: 0x4600d502  mul.s       $f20, $f26, $f0
    ctx->pc = 0x17bde0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
label_17bde4:
    // 0x17bde4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x17bde4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_17bde8:
    // 0x17bde8: 0xc7a02000  lwc1        $f0, 0x2000($sp)
    ctx->pc = 0x17bde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17bdec:
    // 0x17bdec: 0x4617ad40  add.s       $f21, $f21, $f23
    ctx->pc = 0x17bdecu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
label_17bdf0:
    // 0x17bdf0: 0xc12e29c  jal         func_4B8A70
label_17bdf4:
    if (ctx->pc == 0x17BDF4u) {
        ctx->pc = 0x17BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BDF0u;
        // 0x17bdf4: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BDF8u;
        goto label_17bdf8;
    }
    ctx->pc = 0x17BDF0u;
    SET_GPR_U32(ctx, 31, 0x17BDF8u);
    ctx->pc = 0x17BDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BDF0u;
    // 0x17bdf4: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x17BDF0u, 0x17BDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BDF8u;
label_17bdf8:
    // 0x17bdf8: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x17bdf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
label_17bdfc:
    // 0x17bdfc: 0xc7a12004  lwc1        $f1, 0x2004($sp)
    ctx->pc = 0x17bdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17be00:
    // 0x17be00: 0xc7a22008  lwc1        $f2, 0x2008($sp)
    ctx->pc = 0x17be00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17be04:
    // 0x17be04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17be04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17be08:
    // 0x17be08: 0xe7b42030  swc1        $f20, 0x2030($sp)
    ctx->pc = 0x17be08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8240), bits); }
label_17be0c:
    // 0x17be0c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x17be0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_17be10:
    // 0x17be10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17be10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_17be14:
    // 0x17be14: 0xe7a22038  swc1        $f2, 0x2038($sp)
    ctx->pc = 0x17be14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8248), bits); }
label_17be18:
    // 0x17be18: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x17be18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_17be1c:
    // 0x17be1c: 0xe7a02034  swc1        $f0, 0x2034($sp)
    ctx->pc = 0x17be1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8244), bits); }
label_17be20:
    // 0x17be20: 0xe65e000c  swc1        $f30, 0xC($s2)
    ctx->pc = 0x17be20u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_17be24:
    // 0x17be24: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17be24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17be28:
    // 0x17be28: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x17be28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_17be2c:
    // 0x17be2c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x17be2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_17be30:
    // 0x17be30: 0x60f809  jalr        $v1
label_17be34:
    if (ctx->pc == 0x17BE34u) {
        ctx->pc = 0x17BE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE30u;
        // 0x17be34: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BE38u;
        goto label_17be38;
    }
    ctx->pc = 0x17BE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17BE38u);
        ctx->pc = 0x17BE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE30u;
        // 0x17be34: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BE30u, 0x17BE38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17BE38u;
label_17be38:
    // 0x17be38: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x17be38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_17be3c:
    // 0x17be3c: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x17be3cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17be40:
    // 0x17be40: 0x275182a  slt         $v1, $s3, $s5
    ctx->pc = 0x17be40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_17be44:
    // 0x17be44: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
label_17be48:
    if (ctx->pc == 0x17BE48u) {
        ctx->pc = 0x17BE4Cu;
        goto label_17be4c;
    }
    ctx->pc = 0x17BE44u;
    {
        const bool branch_taken_0x17be44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17be44) {
            ctx->pc = 0x17BD90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bd90;
        }
    }
    ctx->pc = 0x17BE4Cu;
label_17be4c:
    // 0x17be4c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17be50:
    // 0x17be50: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x17be50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_17be54:
    // 0x17be54: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x17be54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_17be58:
    // 0x17be58: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17be58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17be5c:
    // 0x17be5c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x17be5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_17be60:
    // 0x17be60: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x17be60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_17be64:
    // 0x17be64: 0x60f809  jalr        $v1
label_17be68:
    if (ctx->pc == 0x17BE68u) {
        ctx->pc = 0x17BE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE64u;
        // 0x17be68: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BE6Cu;
        goto label_17be6c;
    }
    ctx->pc = 0x17BE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17BE6Cu);
        ctx->pc = 0x17BE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE64u;
        // 0x17be68: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BE64u, 0x17BE6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17BE6Cu;
label_17be6c:
    // 0x17be6c: 0x7bb020d0  lq          $s0, 0x20D0($sp)
    ctx->pc = 0x17be6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 8400)));
label_17be70:
    // 0x17be70: 0x7bb120c0  lq          $s1, 0x20C0($sp)
    ctx->pc = 0x17be70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 8384)));
label_17be74:
    // 0x17be74: 0x7bb220b0  lq          $s2, 0x20B0($sp)
    ctx->pc = 0x17be74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 8368)));
label_17be78:
    // 0x17be78: 0x7bb320a0  lq          $s3, 0x20A0($sp)
    ctx->pc = 0x17be78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 8352)));
label_17be7c:
    // 0x17be7c: 0x7bb42090  lq          $s4, 0x2090($sp)
    ctx->pc = 0x17be7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 8336)));
label_17be80:
    // 0x17be80: 0x7bb52080  lq          $s5, 0x2080($sp)
    ctx->pc = 0x17be80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 8320)));
label_17be84:
    // 0x17be84: 0x7bb62070  lq          $s6, 0x2070($sp)
    ctx->pc = 0x17be84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 8304)));
label_17be88:
    // 0x17be88: 0x7bb72060  lq          $s7, 0x2060($sp)
    ctx->pc = 0x17be88u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 8288)));
label_17be8c:
    // 0x17be8c: 0xdfbf2050  ld          $ra, 0x2050($sp)
    ctx->pc = 0x17be8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8272)));
label_17be90:
    // 0x17be90: 0xc7be2130  lwc1        $f30, 0x2130($sp)
    ctx->pc = 0x17be90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_17be94:
    // 0x17be94: 0xc7bd2128  lwc1        $f29, 0x2128($sp)
    ctx->pc = 0x17be94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_17be98:
    // 0x17be98: 0xc7bc2120  lwc1        $f28, 0x2120($sp)
    ctx->pc = 0x17be98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_17be9c:
    // 0x17be9c: 0xc7bb2118  lwc1        $f27, 0x2118($sp)
    ctx->pc = 0x17be9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_17bea0:
    // 0x17bea0: 0xc7ba2110  lwc1        $f26, 0x2110($sp)
    ctx->pc = 0x17bea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_17bea4:
    // 0x17bea4: 0xc7b92108  lwc1        $f25, 0x2108($sp)
    ctx->pc = 0x17bea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_17bea8:
    // 0x17bea8: 0xc7b82100  lwc1        $f24, 0x2100($sp)
    ctx->pc = 0x17bea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_17beac:
    // 0x17beac: 0xc7b720f8  lwc1        $f23, 0x20F8($sp)
    ctx->pc = 0x17beacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_17beb0:
    // 0x17beb0: 0xc7b620f0  lwc1        $f22, 0x20F0($sp)
    ctx->pc = 0x17beb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_17beb4:
    // 0x17beb4: 0xc7b520e8  lwc1        $f21, 0x20E8($sp)
    ctx->pc = 0x17beb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_17beb8:
    // 0x17beb8: 0xc7b420e0  lwc1        $f20, 0x20E0($sp)
    ctx->pc = 0x17beb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_17bebc:
    // 0x17bebc: 0x3e00008  jr          $ra
label_17bec0:
    if (ctx->pc == 0x17BEC0u) {
        ctx->pc = 0x17BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BEBCu;
        // 0x17bec0: 0x27bd2140  addiu       $sp, $sp, 0x2140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 8512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BEC4u;
        goto label_17bec4;
    }
    ctx->pc = 0x17BEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BEBCu;
        // 0x17bec0: 0x27bd2140  addiu       $sp, $sp, 0x2140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 8512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BEC4u;
label_17bec4:
    // 0x17bec4: 0x0  nop
    ctx->pc = 0x17bec4u;
    // NOP
    ctx->pc = 0x17bec8u;
}
