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

// Function: sub_001FEE10
// Address: 0x1fee10 - 0x1ff1c8
void sub_001FEE10_0x1fee10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEE10_0x1fee10");
#endif

    switch (ctx->pc) {
        case 0x1fee10u: goto label_1fee10;
        case 0x1fee14u: goto label_1fee14;
        case 0x1fee18u: goto label_1fee18;
        case 0x1fee1cu: goto label_1fee1c;
        case 0x1fee20u: goto label_1fee20;
        case 0x1fee24u: goto label_1fee24;
        case 0x1fee28u: goto label_1fee28;
        case 0x1fee2cu: goto label_1fee2c;
        case 0x1fee30u: goto label_1fee30;
        case 0x1fee34u: goto label_1fee34;
        case 0x1fee38u: goto label_1fee38;
        case 0x1fee3cu: goto label_1fee3c;
        case 0x1fee40u: goto label_1fee40;
        case 0x1fee44u: goto label_1fee44;
        case 0x1fee48u: goto label_1fee48;
        case 0x1fee4cu: goto label_1fee4c;
        case 0x1fee50u: goto label_1fee50;
        case 0x1fee54u: goto label_1fee54;
        case 0x1fee58u: goto label_1fee58;
        case 0x1fee5cu: goto label_1fee5c;
        case 0x1fee60u: goto label_1fee60;
        case 0x1fee64u: goto label_1fee64;
        case 0x1fee68u: goto label_1fee68;
        case 0x1fee6cu: goto label_1fee6c;
        case 0x1fee70u: goto label_1fee70;
        case 0x1fee74u: goto label_1fee74;
        case 0x1fee78u: goto label_1fee78;
        case 0x1fee7cu: goto label_1fee7c;
        case 0x1fee80u: goto label_1fee80;
        case 0x1fee84u: goto label_1fee84;
        case 0x1fee88u: goto label_1fee88;
        case 0x1fee8cu: goto label_1fee8c;
        case 0x1fee90u: goto label_1fee90;
        case 0x1fee94u: goto label_1fee94;
        case 0x1fee98u: goto label_1fee98;
        case 0x1fee9cu: goto label_1fee9c;
        case 0x1feea0u: goto label_1feea0;
        case 0x1feea4u: goto label_1feea4;
        case 0x1feea8u: goto label_1feea8;
        case 0x1feeacu: goto label_1feeac;
        case 0x1feeb0u: goto label_1feeb0;
        case 0x1feeb4u: goto label_1feeb4;
        case 0x1feeb8u: goto label_1feeb8;
        case 0x1feebcu: goto label_1feebc;
        case 0x1feec0u: goto label_1feec0;
        case 0x1feec4u: goto label_1feec4;
        case 0x1feec8u: goto label_1feec8;
        case 0x1feeccu: goto label_1feecc;
        case 0x1feed0u: goto label_1feed0;
        case 0x1feed4u: goto label_1feed4;
        case 0x1feed8u: goto label_1feed8;
        case 0x1feedcu: goto label_1feedc;
        case 0x1feee0u: goto label_1feee0;
        case 0x1feee4u: goto label_1feee4;
        case 0x1feee8u: goto label_1feee8;
        case 0x1feeecu: goto label_1feeec;
        case 0x1feef0u: goto label_1feef0;
        case 0x1feef4u: goto label_1feef4;
        case 0x1feef8u: goto label_1feef8;
        case 0x1feefcu: goto label_1feefc;
        case 0x1fef00u: goto label_1fef00;
        case 0x1fef04u: goto label_1fef04;
        case 0x1fef08u: goto label_1fef08;
        case 0x1fef0cu: goto label_1fef0c;
        case 0x1fef10u: goto label_1fef10;
        case 0x1fef14u: goto label_1fef14;
        case 0x1fef18u: goto label_1fef18;
        case 0x1fef1cu: goto label_1fef1c;
        case 0x1fef20u: goto label_1fef20;
        case 0x1fef24u: goto label_1fef24;
        case 0x1fef28u: goto label_1fef28;
        case 0x1fef2cu: goto label_1fef2c;
        case 0x1fef30u: goto label_1fef30;
        case 0x1fef34u: goto label_1fef34;
        case 0x1fef38u: goto label_1fef38;
        case 0x1fef3cu: goto label_1fef3c;
        case 0x1fef40u: goto label_1fef40;
        case 0x1fef44u: goto label_1fef44;
        case 0x1fef48u: goto label_1fef48;
        case 0x1fef4cu: goto label_1fef4c;
        case 0x1fef50u: goto label_1fef50;
        case 0x1fef54u: goto label_1fef54;
        case 0x1fef58u: goto label_1fef58;
        case 0x1fef5cu: goto label_1fef5c;
        case 0x1fef60u: goto label_1fef60;
        case 0x1fef64u: goto label_1fef64;
        case 0x1fef68u: goto label_1fef68;
        case 0x1fef6cu: goto label_1fef6c;
        case 0x1fef70u: goto label_1fef70;
        case 0x1fef74u: goto label_1fef74;
        case 0x1fef78u: goto label_1fef78;
        case 0x1fef7cu: goto label_1fef7c;
        case 0x1fef80u: goto label_1fef80;
        case 0x1fef84u: goto label_1fef84;
        case 0x1fef88u: goto label_1fef88;
        case 0x1fef8cu: goto label_1fef8c;
        case 0x1fef90u: goto label_1fef90;
        case 0x1fef94u: goto label_1fef94;
        case 0x1fef98u: goto label_1fef98;
        case 0x1fef9cu: goto label_1fef9c;
        case 0x1fefa0u: goto label_1fefa0;
        case 0x1fefa4u: goto label_1fefa4;
        case 0x1fefa8u: goto label_1fefa8;
        case 0x1fefacu: goto label_1fefac;
        case 0x1fefb0u: goto label_1fefb0;
        case 0x1fefb4u: goto label_1fefb4;
        case 0x1fefb8u: goto label_1fefb8;
        case 0x1fefbcu: goto label_1fefbc;
        case 0x1fefc0u: goto label_1fefc0;
        case 0x1fefc4u: goto label_1fefc4;
        case 0x1fefc8u: goto label_1fefc8;
        case 0x1fefccu: goto label_1fefcc;
        case 0x1fefd0u: goto label_1fefd0;
        case 0x1fefd4u: goto label_1fefd4;
        case 0x1fefd8u: goto label_1fefd8;
        case 0x1fefdcu: goto label_1fefdc;
        case 0x1fefe0u: goto label_1fefe0;
        case 0x1fefe4u: goto label_1fefe4;
        case 0x1fefe8u: goto label_1fefe8;
        case 0x1fefecu: goto label_1fefec;
        case 0x1feff0u: goto label_1feff0;
        case 0x1feff4u: goto label_1feff4;
        case 0x1feff8u: goto label_1feff8;
        case 0x1feffcu: goto label_1feffc;
        case 0x1ff000u: goto label_1ff000;
        case 0x1ff004u: goto label_1ff004;
        case 0x1ff008u: goto label_1ff008;
        case 0x1ff00cu: goto label_1ff00c;
        case 0x1ff010u: goto label_1ff010;
        case 0x1ff014u: goto label_1ff014;
        case 0x1ff018u: goto label_1ff018;
        case 0x1ff01cu: goto label_1ff01c;
        case 0x1ff020u: goto label_1ff020;
        case 0x1ff024u: goto label_1ff024;
        case 0x1ff028u: goto label_1ff028;
        case 0x1ff02cu: goto label_1ff02c;
        case 0x1ff030u: goto label_1ff030;
        case 0x1ff034u: goto label_1ff034;
        case 0x1ff038u: goto label_1ff038;
        case 0x1ff03cu: goto label_1ff03c;
        case 0x1ff040u: goto label_1ff040;
        case 0x1ff044u: goto label_1ff044;
        case 0x1ff048u: goto label_1ff048;
        case 0x1ff04cu: goto label_1ff04c;
        case 0x1ff050u: goto label_1ff050;
        case 0x1ff054u: goto label_1ff054;
        case 0x1ff058u: goto label_1ff058;
        case 0x1ff05cu: goto label_1ff05c;
        case 0x1ff060u: goto label_1ff060;
        case 0x1ff064u: goto label_1ff064;
        case 0x1ff068u: goto label_1ff068;
        case 0x1ff06cu: goto label_1ff06c;
        case 0x1ff070u: goto label_1ff070;
        case 0x1ff074u: goto label_1ff074;
        case 0x1ff078u: goto label_1ff078;
        case 0x1ff07cu: goto label_1ff07c;
        case 0x1ff080u: goto label_1ff080;
        case 0x1ff084u: goto label_1ff084;
        case 0x1ff088u: goto label_1ff088;
        case 0x1ff08cu: goto label_1ff08c;
        case 0x1ff090u: goto label_1ff090;
        case 0x1ff094u: goto label_1ff094;
        case 0x1ff098u: goto label_1ff098;
        case 0x1ff09cu: goto label_1ff09c;
        case 0x1ff0a0u: goto label_1ff0a0;
        case 0x1ff0a4u: goto label_1ff0a4;
        case 0x1ff0a8u: goto label_1ff0a8;
        case 0x1ff0acu: goto label_1ff0ac;
        case 0x1ff0b0u: goto label_1ff0b0;
        case 0x1ff0b4u: goto label_1ff0b4;
        case 0x1ff0b8u: goto label_1ff0b8;
        case 0x1ff0bcu: goto label_1ff0bc;
        case 0x1ff0c0u: goto label_1ff0c0;
        case 0x1ff0c4u: goto label_1ff0c4;
        case 0x1ff0c8u: goto label_1ff0c8;
        case 0x1ff0ccu: goto label_1ff0cc;
        case 0x1ff0d0u: goto label_1ff0d0;
        case 0x1ff0d4u: goto label_1ff0d4;
        case 0x1ff0d8u: goto label_1ff0d8;
        case 0x1ff0dcu: goto label_1ff0dc;
        case 0x1ff0e0u: goto label_1ff0e0;
        case 0x1ff0e4u: goto label_1ff0e4;
        case 0x1ff0e8u: goto label_1ff0e8;
        case 0x1ff0ecu: goto label_1ff0ec;
        case 0x1ff0f0u: goto label_1ff0f0;
        case 0x1ff0f4u: goto label_1ff0f4;
        case 0x1ff0f8u: goto label_1ff0f8;
        case 0x1ff0fcu: goto label_1ff0fc;
        case 0x1ff100u: goto label_1ff100;
        case 0x1ff104u: goto label_1ff104;
        case 0x1ff108u: goto label_1ff108;
        case 0x1ff10cu: goto label_1ff10c;
        case 0x1ff110u: goto label_1ff110;
        case 0x1ff114u: goto label_1ff114;
        case 0x1ff118u: goto label_1ff118;
        case 0x1ff11cu: goto label_1ff11c;
        case 0x1ff120u: goto label_1ff120;
        case 0x1ff124u: goto label_1ff124;
        case 0x1ff128u: goto label_1ff128;
        case 0x1ff12cu: goto label_1ff12c;
        case 0x1ff130u: goto label_1ff130;
        case 0x1ff134u: goto label_1ff134;
        case 0x1ff138u: goto label_1ff138;
        case 0x1ff13cu: goto label_1ff13c;
        case 0x1ff140u: goto label_1ff140;
        case 0x1ff144u: goto label_1ff144;
        case 0x1ff148u: goto label_1ff148;
        case 0x1ff14cu: goto label_1ff14c;
        case 0x1ff150u: goto label_1ff150;
        case 0x1ff154u: goto label_1ff154;
        case 0x1ff158u: goto label_1ff158;
        case 0x1ff15cu: goto label_1ff15c;
        case 0x1ff160u: goto label_1ff160;
        case 0x1ff164u: goto label_1ff164;
        case 0x1ff168u: goto label_1ff168;
        case 0x1ff16cu: goto label_1ff16c;
        case 0x1ff170u: goto label_1ff170;
        case 0x1ff174u: goto label_1ff174;
        case 0x1ff178u: goto label_1ff178;
        case 0x1ff17cu: goto label_1ff17c;
        case 0x1ff180u: goto label_1ff180;
        case 0x1ff184u: goto label_1ff184;
        case 0x1ff188u: goto label_1ff188;
        case 0x1ff18cu: goto label_1ff18c;
        case 0x1ff190u: goto label_1ff190;
        case 0x1ff194u: goto label_1ff194;
        case 0x1ff198u: goto label_1ff198;
        case 0x1ff19cu: goto label_1ff19c;
        case 0x1ff1a0u: goto label_1ff1a0;
        case 0x1ff1a4u: goto label_1ff1a4;
        case 0x1ff1a8u: goto label_1ff1a8;
        case 0x1ff1acu: goto label_1ff1ac;
        case 0x1ff1b0u: goto label_1ff1b0;
        case 0x1ff1b4u: goto label_1ff1b4;
        case 0x1ff1b8u: goto label_1ff1b8;
        case 0x1ff1bcu: goto label_1ff1bc;
        case 0x1ff1c0u: goto label_1ff1c0;
        case 0x1ff1c4u: goto label_1ff1c4;
        default: break;
    }

    ctx->pc = 0x1fee10u;

label_1fee10:
    // 0x1fee10: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1fee10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_1fee14:
    // 0x1fee14: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1fee14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_1fee18:
    // 0x1fee18: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1fee18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_1fee1c:
    // 0x1fee1c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1fee1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fee20:
    // 0x1fee20: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1fee20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_1fee24:
    // 0x1fee24: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1fee24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_1fee28:
    // 0x1fee28: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1fee28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_1fee2c:
    // 0x1fee2c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1fee2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1fee30:
    // 0x1fee30: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1fee30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1fee34:
    // 0x1fee34: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x1fee34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_1fee38:
    // 0x1fee38: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x1fee38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_1fee3c:
    // 0x1fee3c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1fee3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1fee40:
    // 0x1fee40: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x1fee40u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1fee44:
    // 0x1fee44: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x1fee44u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1fee48:
    // 0x1fee48: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x1fee48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1fee4c:
    // 0x1fee4c: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x1fee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1fee50:
    // 0x1fee50: 0x144000ce  bnez        $v0, . + 4 + (0xCE << 2)
label_1fee54:
    if (ctx->pc == 0x1FEE54u) {
        ctx->pc = 0x1FEE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE50u;
        // 0x1fee54: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEE58u;
        goto label_1fee58;
    }
    ctx->pc = 0x1FEE50u;
    {
        const bool branch_taken_0x1fee50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE50u;
        // 0x1fee54: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fee50) {
            ctx->pc = 0x1FF18Cu;
            goto label_1ff18c;
        }
    }
    ctx->pc = 0x1FEE58u;
label_1fee58:
    // 0x1fee58: 0x8e8500b8  lw          $a1, 0xB8($s4)
    ctx->pc = 0x1fee58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
label_1fee5c:
    // 0x1fee5c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1fee5cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1fee60:
    // 0x1fee60: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1fee60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_1fee64:
    // 0x1fee64: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1fee64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1fee68:
    // 0x1fee68: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1fee68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1fee6c:
    // 0x1fee6c: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x1fee6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_1fee70:
    // 0x1fee70: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fee70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fee74:
    // 0x1fee74: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1fee74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1fee78:
    // 0x1fee78: 0x84640100  lh          $a0, 0x100($v1)
    ctx->pc = 0x1fee78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 256)));
label_1fee7c:
    // 0x1fee7c: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x1fee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_1fee80:
    // 0x1fee80: 0x40f809  jalr        $v0
label_1fee84:
    if (ctx->pc == 0x1FEE84u) {
        ctx->pc = 0x1FEE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE80u;
        // 0x1fee84: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEE88u;
        goto label_1fee88;
    }
    ctx->pc = 0x1FEE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FEE88u);
        ctx->pc = 0x1FEE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE80u;
        // 0x1fee84: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEE80u, 0x1FEE88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FEE88u;
label_1fee88:
    // 0x1fee88: 0x8e8500b8  lw          $a1, 0xB8($s4)
    ctx->pc = 0x1fee88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
label_1fee8c:
    // 0x1fee8c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x1fee8cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_1fee90:
    // 0x1fee90: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1fee90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1fee94:
    // 0x1fee94: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fee94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fee98:
    // 0x1fee98: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1fee98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1fee9c:
    // 0x1fee9c: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1fee9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1feea0:
    // 0x1feea0: 0x60f809  jalr        $v1
label_1feea4:
    if (ctx->pc == 0x1FEEA4u) {
        ctx->pc = 0x1FEEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEEA0u;
        // 0x1feea4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEEA8u;
        goto label_1feea8;
    }
    ctx->pc = 0x1FEEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FEEA8u);
        ctx->pc = 0x1FEEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEEA0u;
        // 0x1feea4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEEA0u, 0x1FEEA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FEEA8u;
label_1feea8:
    // 0x1feea8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1feea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1feeac:
    // 0x1feeac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1feeacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1feeb0:
    // 0x1feeb0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1feeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1feeb4:
    // 0x1feeb4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1feeb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_1feeb8:
    // 0x1feeb8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1feeb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1feebc:
    // 0x1feebc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1feebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1feec0:
    // 0x1feec0: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1feec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1feec4:
    // 0x1feec4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1feec4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1feec8:
    // 0x1feec8: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x1feec8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1feecc:
    // 0x1feecc: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1feeccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1feed0:
    // 0x1feed0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1feed0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1feed4:
    // 0x1feed4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1feed4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1feed8:
    // 0x1feed8: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x1feed8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_1feedc:
    // 0x1feedc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1feedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1feee0:
    // 0x1feee0: 0x26088298  addiu       $t0, $s0, -0x7D68
    ctx->pc = 0x1feee0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935192));
label_1feee4:
    // 0x1feee4: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1feee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1feee8:
    // 0x1feee8: 0x24a582d0  addiu       $a1, $a1, -0x7D30
    ctx->pc = 0x1feee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935248));
label_1feeec:
    // 0x1feeec: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x1feeecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1feef0:
    // 0x1feef0: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x1feef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_1feef4:
    // 0x1feef4: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x1feef4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1feef8:
    // 0x1feef8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1feef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1feefc:
    // 0x1feefc: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x1feefcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1fef00:
    // 0x1fef00: 0x24090097  addiu       $t1, $zero, 0x97
    ctx->pc = 0x1fef00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
label_1fef04:
    // 0x1fef04: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x1fef04u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1fef08:
    // 0x1fef08: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1fef08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fef0c:
    // 0x1fef0c: 0xe7b50024  swc1        $f21, 0x24($sp)
    ctx->pc = 0x1fef0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1fef10:
    // 0x1fef10: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fef10u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fef14:
    // 0x1fef14: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x1fef14u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1fef18:
    // 0x1fef18: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x1fef18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1fef1c:
    // 0x1fef1c: 0x8e2c27e4  lw          $t4, 0x27E4($s1)
    ctx->pc = 0x1fef1cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_1fef20:
    // 0x1fef20: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1fef20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1fef24:
    // 0x1fef24: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1fef24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1fef28:
    // 0x1fef28: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1fef28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1fef2c:
    // 0x1fef2c: 0x40f809  jalr        $v0
label_1fef30:
    if (ctx->pc == 0x1FEF30u) {
        ctx->pc = 0x1FEF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF2Cu;
        // 0x1fef30: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEF34u;
        goto label_1fef34;
    }
    ctx->pc = 0x1FEF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FEF34u);
        ctx->pc = 0x1FEF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF2Cu;
        // 0x1fef30: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEF2Cu, 0x1FEF34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FEF34u;
label_1fef34:
    // 0x1fef34: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1fef34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fef38:
    // 0x1fef38: 0x51000005  beql        $t0, $zero, . + 4 + (0x5 << 2)
label_1fef3c:
    if (ctx->pc == 0x1FEF3Cu) {
        ctx->pc = 0x1FEF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF38u;
        // 0x1fef3c: 0xae680014  sw          $t0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEF40u;
        goto label_1fef40;
    }
    ctx->pc = 0x1FEF38u;
    {
        const bool branch_taken_0x1fef38 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fef38) {
            ctx->pc = 0x1FEF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEF38u;
            // 0x1fef3c: 0xae680014  sw          $t0, 0x14($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEF50u;
            goto label_1fef50;
        }
    }
    ctx->pc = 0x1FEF40u;
label_1fef40:
    // 0x1fef40: 0xc0784ce  jal         func_1E1338
label_1fef44:
    if (ctx->pc == 0x1FEF44u) {
        ctx->pc = 0x1FEF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF40u;
        // 0x1fef44: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEF48u;
        goto label_1fef48;
    }
    ctx->pc = 0x1FEF40u;
    SET_GPR_U32(ctx, 31, 0x1FEF48u);
    ctx->pc = 0x1FEF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEF40u;
    // 0x1fef44: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1338u, 0x1FEF40u, 0x1FEF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEF48u;
label_1fef48:
    // 0x1fef48: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1fef48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fef4c:
    // 0x1fef4c: 0xae680014  sw          $t0, 0x14($s3)
    ctx->pc = 0x1fef4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 8));
label_1fef50:
    // 0x1fef50: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fef50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fef54:
    // 0x1fef54: 0x26860050  addiu       $a2, $s4, 0x50
    ctx->pc = 0x1fef54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
label_1fef58:
    // 0x1fef58: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1fef58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fef5c:
    // 0x1fef5c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1fef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1fef60:
    // 0x1fef60: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1fef60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1fef64:
    // 0x1fef64: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x1fef64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1fef68:
    // 0x1fef68: 0x60f809  jalr        $v1
label_1fef6c:
    if (ctx->pc == 0x1FEF6Cu) {
        ctx->pc = 0x1FEF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF68u;
        // 0x1fef6c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEF70u;
        goto label_1fef70;
    }
    ctx->pc = 0x1FEF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FEF70u);
        ctx->pc = 0x1FEF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF68u;
        // 0x1fef6c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEF68u, 0x1FEF70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FEF70u;
label_1fef70:
    // 0x1fef70: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x1fef70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1fef74:
    // 0x1fef74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fef74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fef78:
    // 0x1fef78: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1fef78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fef7c:
    // 0x1fef7c: 0x84440160  lh          $a0, 0x160($v0)
    ctx->pc = 0x1fef7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 352)));
label_1fef80:
    // 0x1fef80: 0x8c430164  lw          $v1, 0x164($v0)
    ctx->pc = 0x1fef80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 356)));
label_1fef84:
    // 0x1fef84: 0x60f809  jalr        $v1
label_1fef88:
    if (ctx->pc == 0x1FEF88u) {
        ctx->pc = 0x1FEF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF84u;
        // 0x1fef88: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEF8Cu;
        goto label_1fef8c;
    }
    ctx->pc = 0x1FEF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FEF8Cu);
        ctx->pc = 0x1FEF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF84u;
        // 0x1fef88: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEF84u, 0x1FEF8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FEF8Cu;
label_1fef8c:
    // 0x1fef8c: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x1fef8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1fef90:
    // 0x1fef90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fef90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fef94:
    // 0x1fef94: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1fef94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fef98:
    // 0x1fef98: 0x84440170  lh          $a0, 0x170($v0)
    ctx->pc = 0x1fef98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 368)));
label_1fef9c:
    // 0x1fef9c: 0x8c430174  lw          $v1, 0x174($v0)
    ctx->pc = 0x1fef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
label_1fefa0:
    // 0x1fefa0: 0x60f809  jalr        $v1
label_1fefa4:
    if (ctx->pc == 0x1FEFA4u) {
        ctx->pc = 0x1FEFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFA0u;
        // 0x1fefa4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEFA8u;
        goto label_1fefa8;
    }
    ctx->pc = 0x1FEFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FEFA8u);
        ctx->pc = 0x1FEFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFA0u;
        // 0x1fefa4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEFA0u, 0x1FEFA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FEFA8u;
label_1fefa8:
    // 0x1fefa8: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x1fefa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1fefac:
    // 0x1fefac: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1fefacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1fefb0:
    // 0x1fefb0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fefb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fefb4:
    // 0x1fefb4: 0x844400d8  lh          $a0, 0xD8($v0)
    ctx->pc = 0x1fefb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 216)));
label_1fefb8:
    // 0x1fefb8: 0x8c4300dc  lw          $v1, 0xDC($v0)
    ctx->pc = 0x1fefb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_1fefbc:
    // 0x1fefbc: 0x60f809  jalr        $v1
label_1fefc0:
    if (ctx->pc == 0x1FEFC0u) {
        ctx->pc = 0x1FEFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFBCu;
        // 0x1fefc0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEFC4u;
        goto label_1fefc4;
    }
    ctx->pc = 0x1FEFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FEFC4u);
        ctx->pc = 0x1FEFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFBCu;
        // 0x1fefc0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEFBCu, 0x1FEFC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FEFC4u;
label_1fefc4:
    // 0x1fefc4: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1fefc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1fefc8:
    // 0x1fefc8: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x1fefc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_1fefcc:
    // 0x1fefcc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1fefccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1fefd0:
    // 0x1fefd0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1fefd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fefd4:
    // 0x1fefd4: 0xc05e602  jal         func_179808
label_1fefd8:
    if (ctx->pc == 0x1FEFD8u) {
        ctx->pc = 0x1FEFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFD4u;
        // 0x1fefd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEFDCu;
        goto label_1fefdc;
    }
    ctx->pc = 0x1FEFD4u;
    SET_GPR_U32(ctx, 31, 0x1FEFDCu);
    ctx->pc = 0x1FEFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEFD4u;
    // 0x1fefd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1FEFD4u, 0x1FEFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEFDCu;
label_1fefdc:
    // 0x1fefdc: 0x26620004  addiu       $v0, $s3, 0x4
    ctx->pc = 0x1fefdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1fefe0:
    // 0x1fefe0: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x1fefe0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1fefe4:
    // 0x1fefe4: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x1fefe4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fefe8:
    // 0x1fefe8: 0x1000003a  b           . + 4 + (0x3A << 2)
label_1fefec:
    if (ctx->pc == 0x1FEFECu) {
        ctx->pc = 0x1FEFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFE8u;
        // 0x1fefec: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEFF0u;
        goto label_1feff0;
    }
    ctx->pc = 0x1FEFE8u;
    {
        const bool branch_taken_0x1fefe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFE8u;
        // 0x1fefec: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fefe8) {
            ctx->pc = 0x1FF0D4u;
            goto label_1ff0d4;
        }
    }
    ctx->pc = 0x1FEFF0u;
label_1feff0:
    // 0x1feff0: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x1feff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_1feff4:
    // 0x1feff4: 0x8c4b27e4  lw          $t3, 0x27E4($v0)
    ctx->pc = 0x1feff4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1feff8:
    // 0x1feff8: 0x24a582e0  addiu       $a1, $a1, -0x7D20
    ctx->pc = 0x1feff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935264));
label_1feffc:
    // 0x1feffc: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x1feffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_1ff000:
    // 0x1ff000: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1ff000u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ff004:
    // 0x1ff004: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1ff004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1ff008:
    // 0x1ff008: 0x24488298  addiu       $t0, $v0, -0x7D68
    ctx->pc = 0x1ff008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935192));
label_1ff00c:
    // 0x1ff00c: 0x24060270  addiu       $a2, $zero, 0x270
    ctx->pc = 0x1ff00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
label_1ff010:
    // 0x1ff010: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1ff010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ff014:
    // 0x1ff014: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1ff014u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1ff018:
    // 0x1ff018: 0x240900a7  addiu       $t1, $zero, 0xA7
    ctx->pc = 0x1ff018u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
label_1ff01c:
    // 0x1ff01c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1ff01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1ff020:
    // 0x1ff020: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ff020u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff024:
    // 0x1ff024: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1ff024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_1ff028:
    // 0x1ff028: 0x40f809  jalr        $v0
label_1ff02c:
    if (ctx->pc == 0x1FF02Cu) {
        ctx->pc = 0x1FF02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF028u;
        // 0x1ff02c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF030u;
        goto label_1ff030;
    }
    ctx->pc = 0x1FF028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FF030u);
        ctx->pc = 0x1FF02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF028u;
        // 0x1ff02c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF028u, 0x1FF030u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF030u;
label_1ff030:
    // 0x1ff030: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ff030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ff034:
    // 0x1ff034: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
label_1ff038:
    if (ctx->pc == 0x1FF038u) {
        ctx->pc = 0x1FF038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF034u;
        // 0x1ff038: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF03Cu;
        goto label_1ff03c;
    }
    ctx->pc = 0x1FF034u;
    {
        const bool branch_taken_0x1ff034 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff034) {
            ctx->pc = 0x1FF038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF034u;
            // 0x1ff038: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF04Cu;
            goto label_1ff04c;
        }
    }
    ctx->pc = 0x1FF03Cu;
label_1ff03c:
    // 0x1ff03c: 0xc078bd0  jal         func_1E2F40
label_1ff040:
    if (ctx->pc == 0x1FF040u) {
        ctx->pc = 0x1FF040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF03Cu;
        // 0x1ff040: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF044u;
        goto label_1ff044;
    }
    ctx->pc = 0x1FF03Cu;
    SET_GPR_U32(ctx, 31, 0x1FF044u);
    ctx->pc = 0x1FF040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF03Cu;
    // 0x1ff040: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2F40u, 0x1FF03Cu, 0x1FF044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF044u;
label_1ff044:
    // 0x1ff044: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ff044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ff048:
    // 0x1ff048: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ff048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ff04c:
    // 0x1ff04c: 0x3c08001c  lui         $t0, 0x1C
    ctx->pc = 0x1ff04cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28 << 16));
label_1ff050:
    // 0x1ff050: 0x8e8900b0  lw          $t1, 0xB0($s4)
    ctx->pc = 0x1ff050u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
label_1ff054:
    // 0x1ff054: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ff054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ff058:
    // 0x1ff058: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1ff058u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1ff05c:
    // 0x1ff05c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1ff05cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ff060:
    // 0x1ff060: 0x8c4b00c4  lw          $t3, 0xC4($v0)
    ctx->pc = 0x1ff060u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1ff064:
    // 0x1ff064: 0x3508001c  ori         $t0, $t0, 0x1C
    ctx->pc = 0x1ff064u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)28);
label_1ff068:
    // 0x1ff068: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1ff068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_1ff06c:
    // 0x1ff06c: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1ff06cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ff070:
    // 0x1ff070: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1ff070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1ff074:
    // 0x1ff074: 0x160f809  jalr        $t3
label_1ff078:
    if (ctx->pc == 0x1FF078u) {
        ctx->pc = 0x1FF078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF074u;
        // 0x1ff078: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF07Cu;
        goto label_1ff07c;
    }
    ctx->pc = 0x1FF074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 11);
        SET_GPR_U32(ctx, 31, 0x1FF07Cu);
        ctx->pc = 0x1FF078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF074u;
        // 0x1ff078: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF074u, 0x1FF07Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF07Cu;
label_1ff07c:
    // 0x1ff07c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ff07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ff080:
    // 0x1ff080: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1ff080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1ff084:
    // 0x1ff084: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ff084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff088:
    // 0x1ff088: 0x846400d0  lh          $a0, 0xD0($v1)
    ctx->pc = 0x1ff088u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
label_1ff08c:
    // 0x1ff08c: 0x8c6200d4  lw          $v0, 0xD4($v1)
    ctx->pc = 0x1ff08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_1ff090:
    // 0x1ff090: 0x40f809  jalr        $v0
label_1ff094:
    if (ctx->pc == 0x1FF094u) {
        ctx->pc = 0x1FF094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF090u;
        // 0x1ff094: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF098u;
        goto label_1ff098;
    }
    ctx->pc = 0x1FF090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FF098u);
        ctx->pc = 0x1FF094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF090u;
        // 0x1ff094: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF090u, 0x1FF098u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF098u;
label_1ff098:
    // 0x1ff098: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ff098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ff09c:
    // 0x1ff09c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ff09cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff0a0:
    // 0x1ff0a0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1ff0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ff0a4:
    // 0x1ff0a4: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1ff0a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_1ff0a8:
    // 0x1ff0a8: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1ff0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_1ff0ac:
    // 0x1ff0ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ff0acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ff0b0:
    // 0x1ff0b0: 0x40f809  jalr        $v0
label_1ff0b4:
    if (ctx->pc == 0x1FF0B4u) {
        ctx->pc = 0x1FF0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0B0u;
        // 0x1ff0b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF0B8u;
        goto label_1ff0b8;
    }
    ctx->pc = 0x1FF0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FF0B8u);
        ctx->pc = 0x1FF0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0B0u;
        // 0x1ff0b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF0B0u, 0x1FF0B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF0B8u;
label_1ff0b8:
    // 0x1ff0b8: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x1ff0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1ff0bc:
    // 0x1ff0bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ff0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ff0c0:
    // 0x1ff0c0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ff0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff0c4:
    // 0x1ff0c4: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x1ff0c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_1ff0c8:
    // 0x1ff0c8: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x1ff0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_1ff0cc:
    // 0x1ff0cc: 0x60f809  jalr        $v1
label_1ff0d0:
    if (ctx->pc == 0x1FF0D0u) {
        ctx->pc = 0x1FF0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0CCu;
        // 0x1ff0d0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF0D4u;
        goto label_1ff0d4;
    }
    ctx->pc = 0x1FF0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FF0D4u);
        ctx->pc = 0x1FF0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0CCu;
        // 0x1ff0d0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF0CCu, 0x1FF0D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF0D4u;
label_1ff0d4:
    // 0x1ff0d4: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1ff0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1ff0d8:
    // 0x1ff0d8: 0x5242000b  beql        $s2, $v0, . + 4 + (0xB << 2)
label_1ff0dc:
    if (ctx->pc == 0x1FF0DCu) {
        ctx->pc = 0x1FF0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0D8u;
        // 0x1ff0dc: 0x8e640014  lw          $a0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF0E0u;
        goto label_1ff0e0;
    }
    ctx->pc = 0x1FF0D8u;
    {
        const bool branch_taken_0x1ff0d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ff0d8) {
            ctx->pc = 0x1FF0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF0D8u;
            // 0x1ff0dc: 0x8e640014  lw          $a0, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF108u;
            goto label_1ff108;
        }
    }
    ctx->pc = 0x1FF0E0u;
label_1ff0e0:
    // 0x1ff0e0: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x1ff0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1ff0e4:
    // 0x1ff0e4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ff0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ff0e8:
    // 0x1ff0e8: 0x84640140  lh          $a0, 0x140($v1)
    ctx->pc = 0x1ff0e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
label_1ff0ec:
    // 0x1ff0ec: 0x8c620144  lw          $v0, 0x144($v1)
    ctx->pc = 0x1ff0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
label_1ff0f0:
    // 0x1ff0f0: 0x40f809  jalr        $v0
label_1ff0f4:
    if (ctx->pc == 0x1FF0F4u) {
        ctx->pc = 0x1FF0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0F0u;
        // 0x1ff0f4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF0F8u;
        goto label_1ff0f8;
    }
    ctx->pc = 0x1FF0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FF0F8u);
        ctx->pc = 0x1FF0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0F0u;
        // 0x1ff0f4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF0F0u, 0x1FF0F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF0F8u;
label_1ff0f8:
    // 0x1ff0f8: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x1ff0f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1ff0fc:
    // 0x1ff0fc: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
label_1ff100:
    if (ctx->pc == 0x1FF100u) {
        ctx->pc = 0x1FF100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0FCu;
        // 0x1ff100: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF104u;
        goto label_1ff104;
    }
    ctx->pc = 0x1FF0FCu;
    {
        const bool branch_taken_0x1ff0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0FCu;
        // 0x1ff100: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff0fc) {
            ctx->pc = 0x1FEFF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1feff0;
        }
    }
    ctx->pc = 0x1FF104u;
label_1ff104:
    // 0x1ff104: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x1ff104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1ff108:
    // 0x1ff108: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ff108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ff10c:
    // 0x1ff10c: 0x84700128  lh          $s0, 0x128($v1)
    ctx->pc = 0x1ff10cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 296)));
label_1ff110:
    // 0x1ff110: 0x24710128  addiu       $s1, $v1, 0x128
    ctx->pc = 0x1ff110u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 296));
label_1ff114:
    // 0x1ff114: 0x84650140  lh          $a1, 0x140($v1)
    ctx->pc = 0x1ff114u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
label_1ff118:
    // 0x1ff118: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x1ff118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1ff11c:
    // 0x1ff11c: 0x8c620144  lw          $v0, 0x144($v1)
    ctx->pc = 0x1ff11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
label_1ff120:
    // 0x1ff120: 0x40f809  jalr        $v0
label_1ff124:
    if (ctx->pc == 0x1FF124u) {
        ctx->pc = 0x1FF124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF120u;
        // 0x1ff124: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF128u;
        goto label_1ff128;
    }
    ctx->pc = 0x1FF120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FF128u);
        ctx->pc = 0x1FF124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF120u;
        // 0x1ff124: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF120u, 0x1FF128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF128u;
label_1ff128:
    // 0x1ff128: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1ff128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ff12c:
    // 0x1ff12c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ff12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ff130:
    // 0x1ff130: 0x60f809  jalr        $v1
label_1ff134:
    if (ctx->pc == 0x1FF134u) {
        ctx->pc = 0x1FF134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF130u;
        // 0x1ff134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF138u;
        goto label_1ff138;
    }
    ctx->pc = 0x1FF130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FF138u);
        ctx->pc = 0x1FF134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF130u;
        // 0x1ff134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF130u, 0x1FF138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF138u;
label_1ff138:
    // 0x1ff138: 0x8e8400b8  lw          $a0, 0xB8($s4)
    ctx->pc = 0x1ff138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
label_1ff13c:
    // 0x1ff13c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ff13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ff140:
    // 0x1ff140: 0x847000d0  lh          $s0, 0xD0($v1)
    ctx->pc = 0x1ff140u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
label_1ff144:
    // 0x1ff144: 0x247100d0  addiu       $s1, $v1, 0xD0
    ctx->pc = 0x1ff144u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
label_1ff148:
    // 0x1ff148: 0x84650110  lh          $a1, 0x110($v1)
    ctx->pc = 0x1ff148u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 272)));
label_1ff14c:
    // 0x1ff14c: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x1ff14cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1ff150:
    // 0x1ff150: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x1ff150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
label_1ff154:
    // 0x1ff154: 0x40f809  jalr        $v0
label_1ff158:
    if (ctx->pc == 0x1FF158u) {
        ctx->pc = 0x1FF158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF154u;
        // 0x1ff158: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF15Cu;
        goto label_1ff15c;
    }
    ctx->pc = 0x1FF154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FF15Cu);
        ctx->pc = 0x1FF158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF154u;
        // 0x1ff158: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF154u, 0x1FF15Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF15Cu;
label_1ff15c:
    // 0x1ff15c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1ff15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ff160:
    // 0x1ff160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ff160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ff164:
    // 0x1ff164: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x1ff164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1ff168:
    // 0x1ff168: 0x60f809  jalr        $v1
label_1ff16c:
    if (ctx->pc == 0x1FF16Cu) {
        ctx->pc = 0x1FF16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF168u;
        // 0x1ff16c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF170u;
        goto label_1ff170;
    }
    ctx->pc = 0x1FF168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FF170u);
        ctx->pc = 0x1FF16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF168u;
        // 0x1ff16c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF168u, 0x1FF170u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF170u;
label_1ff170:
    // 0x1ff170: 0x8e8500b8  lw          $a1, 0xB8($s4)
    ctx->pc = 0x1ff170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
label_1ff174:
    // 0x1ff174: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1ff174u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1ff178:
    // 0x1ff178: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ff178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ff17c:
    // 0x1ff17c: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1ff17cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1ff180:
    // 0x1ff180: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1ff180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1ff184:
    // 0x1ff184: 0x60f809  jalr        $v1
label_1ff188:
    if (ctx->pc == 0x1FF188u) {
        ctx->pc = 0x1FF188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF184u;
        // 0x1ff188: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF18Cu;
        goto label_1ff18c;
    }
    ctx->pc = 0x1FF184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FF18Cu);
        ctx->pc = 0x1FF188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF184u;
        // 0x1ff188: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF184u, 0x1FF18Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF18Cu;
label_1ff18c:
    // 0x1ff18c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1ff18cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1ff190:
    // 0x1ff190: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1ff190u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1ff194:
    // 0x1ff194: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1ff194u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1ff198:
    // 0x1ff198: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1ff198u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1ff19c:
    // 0x1ff19c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1ff19cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1ff1a0:
    // 0x1ff1a0: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1ff1a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1ff1a4:
    // 0x1ff1a4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1ff1a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ff1a8:
    // 0x1ff1a8: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x1ff1a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ff1ac:
    // 0x1ff1ac: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x1ff1acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ff1b0:
    // 0x1ff1b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ff1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ff1b4:
    // 0x1ff1b4: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x1ff1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1ff1b8:
    // 0x1ff1b8: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x1ff1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1ff1bc:
    // 0x1ff1bc: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x1ff1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1ff1c0:
    // 0x1ff1c0: 0x3e00008  jr          $ra
label_1ff1c4:
    if (ctx->pc == 0x1FF1C4u) {
        ctx->pc = 0x1FF1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF1C0u;
        // 0x1ff1c4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF1C8u;
        goto label_fallthrough_0x1ff1c0;
    }
    ctx->pc = 0x1FF1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF1C0u;
        // 0x1ff1c4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF1C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ff1c0:
    ctx->pc = 0x1FF1C8u;
}
