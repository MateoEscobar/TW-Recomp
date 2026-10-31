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

// Function: sub_002C5E78
// Address: 0x2c5e78 - 0x2c61f8
void sub_002C5E78_0x2c5e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5E78_0x2c5e78");
#endif

    switch (ctx->pc) {
        case 0x2c5e78u: goto label_2c5e78;
        case 0x2c5e7cu: goto label_2c5e7c;
        case 0x2c5e80u: goto label_2c5e80;
        case 0x2c5e84u: goto label_2c5e84;
        case 0x2c5e88u: goto label_2c5e88;
        case 0x2c5e8cu: goto label_2c5e8c;
        case 0x2c5e90u: goto label_2c5e90;
        case 0x2c5e94u: goto label_2c5e94;
        case 0x2c5e98u: goto label_2c5e98;
        case 0x2c5e9cu: goto label_2c5e9c;
        case 0x2c5ea0u: goto label_2c5ea0;
        case 0x2c5ea4u: goto label_2c5ea4;
        case 0x2c5ea8u: goto label_2c5ea8;
        case 0x2c5eacu: goto label_2c5eac;
        case 0x2c5eb0u: goto label_2c5eb0;
        case 0x2c5eb4u: goto label_2c5eb4;
        case 0x2c5eb8u: goto label_2c5eb8;
        case 0x2c5ebcu: goto label_2c5ebc;
        case 0x2c5ec0u: goto label_2c5ec0;
        case 0x2c5ec4u: goto label_2c5ec4;
        case 0x2c5ec8u: goto label_2c5ec8;
        case 0x2c5eccu: goto label_2c5ecc;
        case 0x2c5ed0u: goto label_2c5ed0;
        case 0x2c5ed4u: goto label_2c5ed4;
        case 0x2c5ed8u: goto label_2c5ed8;
        case 0x2c5edcu: goto label_2c5edc;
        case 0x2c5ee0u: goto label_2c5ee0;
        case 0x2c5ee4u: goto label_2c5ee4;
        case 0x2c5ee8u: goto label_2c5ee8;
        case 0x2c5eecu: goto label_2c5eec;
        case 0x2c5ef0u: goto label_2c5ef0;
        case 0x2c5ef4u: goto label_2c5ef4;
        case 0x2c5ef8u: goto label_2c5ef8;
        case 0x2c5efcu: goto label_2c5efc;
        case 0x2c5f00u: goto label_2c5f00;
        case 0x2c5f04u: goto label_2c5f04;
        case 0x2c5f08u: goto label_2c5f08;
        case 0x2c5f0cu: goto label_2c5f0c;
        case 0x2c5f10u: goto label_2c5f10;
        case 0x2c5f14u: goto label_2c5f14;
        case 0x2c5f18u: goto label_2c5f18;
        case 0x2c5f1cu: goto label_2c5f1c;
        case 0x2c5f20u: goto label_2c5f20;
        case 0x2c5f24u: goto label_2c5f24;
        case 0x2c5f28u: goto label_2c5f28;
        case 0x2c5f2cu: goto label_2c5f2c;
        case 0x2c5f30u: goto label_2c5f30;
        case 0x2c5f34u: goto label_2c5f34;
        case 0x2c5f38u: goto label_2c5f38;
        case 0x2c5f3cu: goto label_2c5f3c;
        case 0x2c5f40u: goto label_2c5f40;
        case 0x2c5f44u: goto label_2c5f44;
        case 0x2c5f48u: goto label_2c5f48;
        case 0x2c5f4cu: goto label_2c5f4c;
        case 0x2c5f50u: goto label_2c5f50;
        case 0x2c5f54u: goto label_2c5f54;
        case 0x2c5f58u: goto label_2c5f58;
        case 0x2c5f5cu: goto label_2c5f5c;
        case 0x2c5f60u: goto label_2c5f60;
        case 0x2c5f64u: goto label_2c5f64;
        case 0x2c5f68u: goto label_2c5f68;
        case 0x2c5f6cu: goto label_2c5f6c;
        case 0x2c5f70u: goto label_2c5f70;
        case 0x2c5f74u: goto label_2c5f74;
        case 0x2c5f78u: goto label_2c5f78;
        case 0x2c5f7cu: goto label_2c5f7c;
        case 0x2c5f80u: goto label_2c5f80;
        case 0x2c5f84u: goto label_2c5f84;
        case 0x2c5f88u: goto label_2c5f88;
        case 0x2c5f8cu: goto label_2c5f8c;
        case 0x2c5f90u: goto label_2c5f90;
        case 0x2c5f94u: goto label_2c5f94;
        case 0x2c5f98u: goto label_2c5f98;
        case 0x2c5f9cu: goto label_2c5f9c;
        case 0x2c5fa0u: goto label_2c5fa0;
        case 0x2c5fa4u: goto label_2c5fa4;
        case 0x2c5fa8u: goto label_2c5fa8;
        case 0x2c5facu: goto label_2c5fac;
        case 0x2c5fb0u: goto label_2c5fb0;
        case 0x2c5fb4u: goto label_2c5fb4;
        case 0x2c5fb8u: goto label_2c5fb8;
        case 0x2c5fbcu: goto label_2c5fbc;
        case 0x2c5fc0u: goto label_2c5fc0;
        case 0x2c5fc4u: goto label_2c5fc4;
        case 0x2c5fc8u: goto label_2c5fc8;
        case 0x2c5fccu: goto label_2c5fcc;
        case 0x2c5fd0u: goto label_2c5fd0;
        case 0x2c5fd4u: goto label_2c5fd4;
        case 0x2c5fd8u: goto label_2c5fd8;
        case 0x2c5fdcu: goto label_2c5fdc;
        case 0x2c5fe0u: goto label_2c5fe0;
        case 0x2c5fe4u: goto label_2c5fe4;
        case 0x2c5fe8u: goto label_2c5fe8;
        case 0x2c5fecu: goto label_2c5fec;
        case 0x2c5ff0u: goto label_2c5ff0;
        case 0x2c5ff4u: goto label_2c5ff4;
        case 0x2c5ff8u: goto label_2c5ff8;
        case 0x2c5ffcu: goto label_2c5ffc;
        case 0x2c6000u: goto label_2c6000;
        case 0x2c6004u: goto label_2c6004;
        case 0x2c6008u: goto label_2c6008;
        case 0x2c600cu: goto label_2c600c;
        case 0x2c6010u: goto label_2c6010;
        case 0x2c6014u: goto label_2c6014;
        case 0x2c6018u: goto label_2c6018;
        case 0x2c601cu: goto label_2c601c;
        case 0x2c6020u: goto label_2c6020;
        case 0x2c6024u: goto label_2c6024;
        case 0x2c6028u: goto label_2c6028;
        case 0x2c602cu: goto label_2c602c;
        case 0x2c6030u: goto label_2c6030;
        case 0x2c6034u: goto label_2c6034;
        case 0x2c6038u: goto label_2c6038;
        case 0x2c603cu: goto label_2c603c;
        case 0x2c6040u: goto label_2c6040;
        case 0x2c6044u: goto label_2c6044;
        case 0x2c6048u: goto label_2c6048;
        case 0x2c604cu: goto label_2c604c;
        case 0x2c6050u: goto label_2c6050;
        case 0x2c6054u: goto label_2c6054;
        case 0x2c6058u: goto label_2c6058;
        case 0x2c605cu: goto label_2c605c;
        case 0x2c6060u: goto label_2c6060;
        case 0x2c6064u: goto label_2c6064;
        case 0x2c6068u: goto label_2c6068;
        case 0x2c606cu: goto label_2c606c;
        case 0x2c6070u: goto label_2c6070;
        case 0x2c6074u: goto label_2c6074;
        case 0x2c6078u: goto label_2c6078;
        case 0x2c607cu: goto label_2c607c;
        case 0x2c6080u: goto label_2c6080;
        case 0x2c6084u: goto label_2c6084;
        case 0x2c6088u: goto label_2c6088;
        case 0x2c608cu: goto label_2c608c;
        case 0x2c6090u: goto label_2c6090;
        case 0x2c6094u: goto label_2c6094;
        case 0x2c6098u: goto label_2c6098;
        case 0x2c609cu: goto label_2c609c;
        case 0x2c60a0u: goto label_2c60a0;
        case 0x2c60a4u: goto label_2c60a4;
        case 0x2c60a8u: goto label_2c60a8;
        case 0x2c60acu: goto label_2c60ac;
        case 0x2c60b0u: goto label_2c60b0;
        case 0x2c60b4u: goto label_2c60b4;
        case 0x2c60b8u: goto label_2c60b8;
        case 0x2c60bcu: goto label_2c60bc;
        case 0x2c60c0u: goto label_2c60c0;
        case 0x2c60c4u: goto label_2c60c4;
        case 0x2c60c8u: goto label_2c60c8;
        case 0x2c60ccu: goto label_2c60cc;
        case 0x2c60d0u: goto label_2c60d0;
        case 0x2c60d4u: goto label_2c60d4;
        case 0x2c60d8u: goto label_2c60d8;
        case 0x2c60dcu: goto label_2c60dc;
        case 0x2c60e0u: goto label_2c60e0;
        case 0x2c60e4u: goto label_2c60e4;
        case 0x2c60e8u: goto label_2c60e8;
        case 0x2c60ecu: goto label_2c60ec;
        case 0x2c60f0u: goto label_2c60f0;
        case 0x2c60f4u: goto label_2c60f4;
        case 0x2c60f8u: goto label_2c60f8;
        case 0x2c60fcu: goto label_2c60fc;
        case 0x2c6100u: goto label_2c6100;
        case 0x2c6104u: goto label_2c6104;
        case 0x2c6108u: goto label_2c6108;
        case 0x2c610cu: goto label_2c610c;
        case 0x2c6110u: goto label_2c6110;
        case 0x2c6114u: goto label_2c6114;
        case 0x2c6118u: goto label_2c6118;
        case 0x2c611cu: goto label_2c611c;
        case 0x2c6120u: goto label_2c6120;
        case 0x2c6124u: goto label_2c6124;
        case 0x2c6128u: goto label_2c6128;
        case 0x2c612cu: goto label_2c612c;
        case 0x2c6130u: goto label_2c6130;
        case 0x2c6134u: goto label_2c6134;
        case 0x2c6138u: goto label_2c6138;
        case 0x2c613cu: goto label_2c613c;
        case 0x2c6140u: goto label_2c6140;
        case 0x2c6144u: goto label_2c6144;
        case 0x2c6148u: goto label_2c6148;
        case 0x2c614cu: goto label_2c614c;
        case 0x2c6150u: goto label_2c6150;
        case 0x2c6154u: goto label_2c6154;
        case 0x2c6158u: goto label_2c6158;
        case 0x2c615cu: goto label_2c615c;
        case 0x2c6160u: goto label_2c6160;
        case 0x2c6164u: goto label_2c6164;
        case 0x2c6168u: goto label_2c6168;
        case 0x2c616cu: goto label_2c616c;
        case 0x2c6170u: goto label_2c6170;
        case 0x2c6174u: goto label_2c6174;
        case 0x2c6178u: goto label_2c6178;
        case 0x2c617cu: goto label_2c617c;
        case 0x2c6180u: goto label_2c6180;
        case 0x2c6184u: goto label_2c6184;
        case 0x2c6188u: goto label_2c6188;
        case 0x2c618cu: goto label_2c618c;
        case 0x2c6190u: goto label_2c6190;
        case 0x2c6194u: goto label_2c6194;
        case 0x2c6198u: goto label_2c6198;
        case 0x2c619cu: goto label_2c619c;
        case 0x2c61a0u: goto label_2c61a0;
        case 0x2c61a4u: goto label_2c61a4;
        case 0x2c61a8u: goto label_2c61a8;
        case 0x2c61acu: goto label_2c61ac;
        case 0x2c61b0u: goto label_2c61b0;
        case 0x2c61b4u: goto label_2c61b4;
        case 0x2c61b8u: goto label_2c61b8;
        case 0x2c61bcu: goto label_2c61bc;
        case 0x2c61c0u: goto label_2c61c0;
        case 0x2c61c4u: goto label_2c61c4;
        case 0x2c61c8u: goto label_2c61c8;
        case 0x2c61ccu: goto label_2c61cc;
        case 0x2c61d0u: goto label_2c61d0;
        case 0x2c61d4u: goto label_2c61d4;
        case 0x2c61d8u: goto label_2c61d8;
        case 0x2c61dcu: goto label_2c61dc;
        case 0x2c61e0u: goto label_2c61e0;
        case 0x2c61e4u: goto label_2c61e4;
        case 0x2c61e8u: goto label_2c61e8;
        case 0x2c61ecu: goto label_2c61ec;
        case 0x2c61f0u: goto label_2c61f0;
        case 0x2c61f4u: goto label_2c61f4;
        default: break;
    }

    ctx->pc = 0x2c5e78u;

label_2c5e78:
    // 0x2c5e78: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x2c5e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_2c5e7c:
    // 0x2c5e7c: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x2c5e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
label_2c5e80:
    // 0x2c5e80: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x2c5e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
label_2c5e84:
    // 0x2c5e84: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2c5e84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c5e88:
    // 0x2c5e88: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x2c5e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
label_2c5e8c:
    // 0x2c5e8c: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x2c5e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
label_2c5e90:
    // 0x2c5e90: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x2c5e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
label_2c5e94:
    // 0x2c5e94: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x2c5e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
label_2c5e98:
    // 0x2c5e98: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x2c5e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
label_2c5e9c:
    // 0x2c5e9c: 0x7fb70110  sq          $s7, 0x110($sp)
    ctx->pc = 0x2c5e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 23));
label_2c5ea0:
    // 0x2c5ea0: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x2c5ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_2c5ea4:
    // 0x2c5ea4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2c5ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2c5ea8:
    // 0x2c5ea8: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2c5ea8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c5eac:
    // 0x2c5eac: 0x12800067  beqz        $s4, . + 4 + (0x67 << 2)
label_2c5eb0:
    if (ctx->pc == 0x2C5EB0u) {
        ctx->pc = 0x2C5EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5EACu;
        // 0x2c5eb0: 0x3a0102d  daddu       $v0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5EB4u;
        goto label_2c5eb4;
    }
    ctx->pc = 0x2C5EACu;
    {
        const bool branch_taken_0x2c5eac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5EACu;
        // 0x2c5eb0: 0x3a0102d  daddu       $v0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5eac) {
            ctx->pc = 0x2C604Cu;
            goto label_2c604c;
        }
    }
    ctx->pc = 0x2C5EB4u;
label_2c5eb4:
    // 0x2c5eb4: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2c5eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2c5eb8:
    // 0x2c5eb8: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2c5eb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2c5ebc:
    // 0x2c5ebc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c5ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c5ec0:
    // 0x2c5ec0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2c5ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_2c5ec4:
    // 0x2c5ec4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2c5ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2c5ec8:
    // 0x2c5ec8: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2c5ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_2c5ecc:
    // 0x2c5ecc: 0x26930090  addiu       $s3, $s4, 0x90
    ctx->pc = 0x2c5eccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_2c5ed0:
    // 0x2c5ed0: 0x3c170071  lui         $s7, 0x71
    ctx->pc = 0x2c5ed0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)113 << 16));
label_2c5ed4:
    // 0x2c5ed4: 0x27b100f0  addiu       $s1, $sp, 0xF0
    ctx->pc = 0x2c5ed4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2c5ed8:
    // 0x2c5ed8: 0x27b200f4  addiu       $s2, $sp, 0xF4
    ctx->pc = 0x2c5ed8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
label_2c5edc:
    // 0x2c5edc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2c5edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2c5ee0:
    // 0x2c5ee0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c5ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c5ee4:
    // 0x2c5ee4: 0x0  nop
    ctx->pc = 0x2c5ee4u;
    // NOP
label_2c5ee8:
    // 0x2c5ee8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2c5ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2c5eec:
    // 0x2c5eec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2c5eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2c5ef0:
    // 0x2c5ef0: 0x0  nop
    ctx->pc = 0x2c5ef0u;
    // NOP
label_2c5ef4:
    // 0x2c5ef4: 0x0  nop
    ctx->pc = 0x2c5ef4u;
    // NOP
label_2c5ef8:
    // 0x2c5ef8: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
label_2c5efc:
    if (ctx->pc == 0x2C5EFCu) {
        ctx->pc = 0x2C5EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5EF8u;
        // 0x2c5efc: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5F00u;
        goto label_2c5f00;
    }
    ctx->pc = 0x2C5EF8u;
    {
        const bool branch_taken_0x2c5ef8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2C5EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5EF8u;
        // 0x2c5efc: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ef8) {
            ctx->pc = 0x2C5EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5ee8;
        }
    }
    ctx->pc = 0x2C5F00u;
label_2c5f00:
    // 0x2c5f00: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x2c5f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_2c5f04:
    // 0x2c5f04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c5f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c5f08:
    // 0x2c5f08: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2c5f08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_2c5f0c:
    // 0x2c5f0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c5f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c5f10:
    // 0x2c5f10: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c5f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c5f14:
    // 0x2c5f14: 0x24c65ab0  addiu       $a2, $a2, 0x5AB0
    ctx->pc = 0x2c5f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23216));
label_2c5f18:
    // 0x2c5f18: 0xc0a71fa  jal         func_29C7E8
label_2c5f1c:
    if (ctx->pc == 0x2C5F1Cu) {
        ctx->pc = 0x2C5F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F18u;
        // 0x2c5f1c: 0x26f04b00  addiu       $s0, $s7, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 19200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5F20u;
        goto label_2c5f20;
    }
    ctx->pc = 0x2C5F18u;
    SET_GPR_U32(ctx, 31, 0x2C5F20u);
    ctx->pc = 0x2C5F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5F18u;
    // 0x2c5f1c: 0x26f04b00  addiu       $s0, $s7, 0x4B00 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 19200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C7E8u, 0x2C5F18u, 0x2C5F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5F20u;
label_2c5f20:
    // 0x2c5f20: 0x86650002  lh          $a1, 0x2($s3)
    ctx->pc = 0x2c5f20u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_2c5f24:
    // 0x2c5f24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c5f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c5f28:
    // 0x2c5f28: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c5f28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c5f2c:
    // 0x2c5f2c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2c5f2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c5f30:
    // 0x2c5f30: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2c5f30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2c5f34:
    // 0x2c5f34: 0xc136d6c  jal         func_4DB5B0
label_2c5f38:
    if (ctx->pc == 0x2C5F38u) {
        ctx->pc = 0x2C5F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F34u;
        // 0x2c5f38: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5F3Cu;
        goto label_2c5f3c;
    }
    ctx->pc = 0x2C5F34u;
    SET_GPR_U32(ctx, 31, 0x2C5F3Cu);
    ctx->pc = 0x2C5F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5F34u;
    // 0x2c5f38: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB5B0u, 0x2C5F34u, 0x2C5F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5F3Cu;
label_2c5f3c:
    // 0x2c5f3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c5f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c5f40:
    // 0x2c5f40: 0xc0e409a  jal         func_390268
label_2c5f44:
    if (ctx->pc == 0x2C5F44u) {
        ctx->pc = 0x2C5F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F40u;
        // 0x2c5f44: 0xafa200f4  sw          $v0, 0xF4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5F48u;
        goto label_2c5f48;
    }
    ctx->pc = 0x2C5F40u;
    SET_GPR_U32(ctx, 31, 0x2C5F48u);
    ctx->pc = 0x2C5F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5F40u;
    // 0x2c5f44: 0xafa200f4  sw          $v0, 0xF4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C5F40u, 0x2C5F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5F48u;
label_2c5f48:
    // 0x2c5f48: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c5f48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c5f4c:
    // 0x2c5f4c: 0x1240003f  beqz        $s2, . + 4 + (0x3F << 2)
label_2c5f50:
    if (ctx->pc == 0x2C5F50u) {
        ctx->pc = 0x2C5F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F4Cu;
        // 0x2c5f50: 0x26420090  addiu       $v0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5F54u;
        goto label_2c5f54;
    }
    ctx->pc = 0x2C5F4Cu;
    {
        const bool branch_taken_0x2c5f4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F4Cu;
        // 0x2c5f50: 0x26420090  addiu       $v0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5f4c) {
            ctx->pc = 0x2C604Cu;
            goto label_2c604c;
        }
    }
    ctx->pc = 0x2C5F54u;
label_2c5f54:
    // 0x2c5f54: 0x86650002  lh          $a1, 0x2($s3)
    ctx->pc = 0x2c5f54u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_2c5f58:
    // 0x2c5f58: 0x84460002  lh          $a2, 0x2($v0)
    ctx->pc = 0x2c5f58u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2c5f5c:
    // 0x2c5f5c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2c5f5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c5f60:
    // 0x2c5f60: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2c5f60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2c5f64:
    // 0x2c5f64: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2c5f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2c5f68:
    // 0x2c5f68: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x2c5f68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_2c5f6c:
    // 0x2c5f6c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2c5f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_2c5f70:
    // 0x2c5f70: 0xc136afa  jal         func_4DABE8
label_2c5f74:
    if (ctx->pc == 0x2C5F74u) {
        ctx->pc = 0x2C5F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F70u;
        // 0x2c5f74: 0xd03021  addu        $a2, $a2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5F78u;
        goto label_2c5f78;
    }
    ctx->pc = 0x2C5F70u;
    SET_GPR_U32(ctx, 31, 0x2C5F78u);
    ctx->pc = 0x2C5F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5F70u;
    // 0x2c5f74: 0xd03021  addu        $a2, $a2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x2C5F70u, 0x2C5F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5F78u;
label_2c5f78:
    // 0x2c5f78: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x2c5f78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c5f7c:
    // 0x2c5f7c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2c5f7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2c5f80:
    // 0x2c5f80: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2c5f80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c5f84:
    // 0x2c5f84: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2c5f84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c5f88:
    // 0x2c5f88: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2c5f88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c5f8c:
    // 0x2c5f8c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2c5f8cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_2c5f90:
    // 0x2c5f90: 0x3c0142a2  lui         $at, 0x42A2
    ctx->pc = 0x2c5f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17058 << 16));
label_2c5f94:
    // 0x2c5f94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c5f94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c5f98:
    // 0x2c5f98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c5f98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c5f9c:
    // 0x2c5f9c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2c5f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2c5fa0:
    // 0x2c5fa0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c5fa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c5fa4:
    // 0x2c5fa4: 0x0  nop
    ctx->pc = 0x2c5fa4u;
    // NOP
label_2c5fa8:
    // 0x2c5fa8: 0x45010028  bc1t        . + 4 + (0x28 << 2)
label_2c5fac:
    if (ctx->pc == 0x2C5FACu) {
        ctx->pc = 0x2C5FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5FA8u;
        // 0x2c5fac: 0xe7a000f0  swc1        $f0, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5FB0u;
        goto label_2c5fb0;
    }
    ctx->pc = 0x2C5FA8u;
    {
        const bool branch_taken_0x2c5fa8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C5FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5FA8u;
        // 0x2c5fac: 0xe7a000f0  swc1        $f0, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5fa8) {
            ctx->pc = 0x2C604Cu;
            goto label_2c604c;
        }
    }
    ctx->pc = 0x2C5FB0u;
label_2c5fb0:
    // 0x2c5fb0: 0xc087502  jal         func_21D408
label_2c5fb4:
    if (ctx->pc == 0x2C5FB4u) {
        ctx->pc = 0x2C5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5FB0u;
        // 0x2c5fb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5FB8u;
        goto label_2c5fb8;
    }
    ctx->pc = 0x2C5FB0u;
    SET_GPR_U32(ctx, 31, 0x2C5FB8u);
    ctx->pc = 0x2C5FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5FB0u;
    // 0x2c5fb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C5FB0u, 0x2C5FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5FB8u;
label_2c5fb8:
    // 0x2c5fb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c5fb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c5fbc:
    // 0x2c5fbc: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x2c5fbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_2c5fc0:
    // 0x2c5fc0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2c5fc4:
    if (ctx->pc == 0x2C5FC4u) {
        ctx->pc = 0x2C5FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5FC0u;
        // 0x2c5fc4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5FC8u;
        goto label_2c5fc8;
    }
    ctx->pc = 0x2C5FC0u;
    {
        const bool branch_taken_0x2c5fc0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C5FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5FC0u;
        // 0x2c5fc4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5fc0) {
            ctx->pc = 0x2C5FD4u;
            goto label_2c5fd4;
        }
    }
    ctx->pc = 0x2C5FC8u;
label_2c5fc8:
    // 0x2c5fc8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2c5fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2c5fcc:
    // 0x2c5fcc: 0x10000002  b           . + 4 + (0x2 << 2)
label_2c5fd0:
    if (ctx->pc == 0x2C5FD0u) {
        ctx->pc = 0x2C5FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5FCCu;
        // 0x2c5fd0: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5FD4u;
        goto label_2c5fd4;
    }
    ctx->pc = 0x2C5FCCu;
    {
        const bool branch_taken_0x2c5fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5FCCu;
        // 0x2c5fd0: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5fcc) {
            ctx->pc = 0x2C5FD8u;
            goto label_2c5fd8;
        }
    }
    ctx->pc = 0x2C5FD4u;
label_2c5fd4:
    // 0x2c5fd4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c5fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c5fd8:
    // 0x2c5fd8: 0x5200001e  beql        $s0, $zero, . + 4 + (0x1E << 2)
label_2c5fdc:
    if (ctx->pc == 0x2C5FDCu) {
        ctx->pc = 0x2C5FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5FD8u;
        // 0x2c5fdc: 0x86620002  lh          $v0, 0x2($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5FE0u;
        goto label_2c5fe0;
    }
    ctx->pc = 0x2C5FD8u;
    {
        const bool branch_taken_0x2c5fd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5fd8) {
            ctx->pc = 0x2C5FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5FD8u;
            // 0x2c5fdc: 0x86620002  lh          $v0, 0x2($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6054u;
            goto label_2c6054;
        }
    }
    ctx->pc = 0x2C5FE0u;
label_2c5fe0:
    // 0x2c5fe0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2c5fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2c5fe4:
    // 0x2c5fe4: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2c5fe4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2c5fe8:
    // 0x2c5fe8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2c5fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2c5fec:
    // 0x2c5fec: 0x40f809  jalr        $v0
label_2c5ff0:
    if (ctx->pc == 0x2C5FF0u) {
        ctx->pc = 0x2C5FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5FECu;
        // 0x2c5ff0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5FF4u;
        goto label_2c5ff4;
    }
    ctx->pc = 0x2C5FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C5FF4u);
        ctx->pc = 0x2C5FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5FECu;
        // 0x2c5ff0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5FECu, 0x2C5FF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C5FF4u;
label_2c5ff4:
    // 0x2c5ff4: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x2c5ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_2c5ff8:
    // 0x2c5ff8: 0x10430074  beq         $v0, $v1, . + 4 + (0x74 << 2)
label_2c5ffc:
    if (ctx->pc == 0x2C5FFCu) {
        ctx->pc = 0x2C5FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5FF8u;
        // 0x2c5ffc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6000u;
        goto label_2c6000;
    }
    ctx->pc = 0x2C5FF8u;
    {
        const bool branch_taken_0x2c5ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C5FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5FF8u;
        // 0x2c5ffc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ff8) {
            ctx->pc = 0x2C61CCu;
            goto label_2c61cc;
        }
    }
    ctx->pc = 0x2C6000u;
label_2c6000:
    // 0x2c6000: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2c6000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2c6004:
    // 0x2c6004: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2c6004u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2c6008:
    // 0x2c6008: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2c6008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2c600c:
    // 0x2c600c: 0x40f809  jalr        $v0
label_2c6010:
    if (ctx->pc == 0x2C6010u) {
        ctx->pc = 0x2C6010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C600Cu;
        // 0x2c6010: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6014u;
        goto label_2c6014;
    }
    ctx->pc = 0x2C600Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C6014u);
        ctx->pc = 0x2C6010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C600Cu;
        // 0x2c6010: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C600Cu, 0x2C6014u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C6014u;
label_2c6014:
    // 0x2c6014: 0x2403007b  addiu       $v1, $zero, 0x7B
    ctx->pc = 0x2c6014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
label_2c6018:
    // 0x2c6018: 0x1043006c  beq         $v0, $v1, . + 4 + (0x6C << 2)
label_2c601c:
    if (ctx->pc == 0x2C601Cu) {
        ctx->pc = 0x2C601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6018u;
        // 0x2c601c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6020u;
        goto label_2c6020;
    }
    ctx->pc = 0x2C6018u;
    {
        const bool branch_taken_0x2c6018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6018u;
        // 0x2c601c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6018) {
            ctx->pc = 0x2C61CCu;
            goto label_2c61cc;
        }
    }
    ctx->pc = 0x2C6020u;
label_2c6020:
    // 0x2c6020: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2c6020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2c6024:
    // 0x2c6024: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2c6024u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2c6028:
    // 0x2c6028: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2c6028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2c602c:
    // 0x2c602c: 0x40f809  jalr        $v0
label_2c6030:
    if (ctx->pc == 0x2C6030u) {
        ctx->pc = 0x2C6030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C602Cu;
        // 0x2c6030: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6034u;
        goto label_2c6034;
    }
    ctx->pc = 0x2C602Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C6034u);
        ctx->pc = 0x2C6030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C602Cu;
        // 0x2c6030: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C602Cu, 0x2C6034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C6034u;
label_2c6034:
    // 0x2c6034: 0x24030069  addiu       $v1, $zero, 0x69
    ctx->pc = 0x2c6034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_2c6038:
    // 0x2c6038: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_2c603c:
    if (ctx->pc == 0x2C603Cu) {
        ctx->pc = 0x2C603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6038u;
        // 0x2c603c: 0x86620002  lh          $v0, 0x2($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6040u;
        goto label_2c6040;
    }
    ctx->pc = 0x2C6038u;
    {
        const bool branch_taken_0x2c6038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c6038) {
            ctx->pc = 0x2C603Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6038u;
            // 0x2c603c: 0x86620002  lh          $v0, 0x2($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6054u;
            goto label_2c6054;
        }
    }
    ctx->pc = 0x2C6040u;
label_2c6040:
    // 0x2c6040: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2c6040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2c6044:
    // 0x2c6044: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2c6048:
    if (ctx->pc == 0x2C6048u) {
        ctx->pc = 0x2C6048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6044u;
        // 0x2c6048: 0x86620002  lh          $v0, 0x2($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C604Cu;
        goto label_2c604c;
    }
    ctx->pc = 0x2C6044u;
    {
        const bool branch_taken_0x2c6044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6044) {
            ctx->pc = 0x2C6048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6044u;
            // 0x2c6048: 0x86620002  lh          $v0, 0x2($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6054u;
            goto label_2c6054;
        }
    }
    ctx->pc = 0x2C604Cu;
label_2c604c:
    // 0x2c604c: 0x1000005f  b           . + 4 + (0x5F << 2)
label_2c6050:
    if (ctx->pc == 0x2C6050u) {
        ctx->pc = 0x2C6050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C604Cu;
        // 0x2c6050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6054u;
        goto label_2c6054;
    }
    ctx->pc = 0x2C604Cu;
    {
        const bool branch_taken_0x2c604c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C604Cu;
        // 0x2c6050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c604c) {
            ctx->pc = 0x2C61CCu;
            goto label_2c61cc;
        }
    }
    ctx->pc = 0x2C6054u;
label_2c6054:
    // 0x2c6054: 0x26e74b00  addiu       $a3, $s7, 0x4B00
    ctx->pc = 0x2c6054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 19200));
label_2c6058:
    // 0x2c6058: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2c6058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2c605c:
    // 0x2c605c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2c605cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2c6060:
    // 0x2c6060: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2c6060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2c6064:
    // 0x2c6064: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x2c6064u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2c6068:
    // 0x2c6068: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x2c6068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
label_2c606c:
    // 0x2c606c: 0x86c30002  lh          $v1, 0x2($s6)
    ctx->pc = 0x2c606cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
label_2c6070:
    // 0x2c6070: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x2c6070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
label_2c6074:
    // 0x2c6074: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2c6074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2c6078:
    // 0x2c6078: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2c6078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2c607c:
    // 0x2c607c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2c607cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2c6080:
    // 0x2c6080: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2c6080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_2c6084:
    // 0x2c6084: 0x86c50002  lh          $a1, 0x2($s6)
    ctx->pc = 0x2c6084u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
label_2c6088:
    // 0x2c6088: 0x86660002  lh          $a2, 0x2($s3)
    ctx->pc = 0x2c6088u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_2c608c:
    // 0x2c608c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2c608cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2c6090:
    // 0x2c6090: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x2c6090u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_2c6094:
    // 0x2c6094: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2c6094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_2c6098:
    // 0x2c6098: 0xc136afa  jal         func_4DABE8
label_2c609c:
    if (ctx->pc == 0x2C609Cu) {
        ctx->pc = 0x2C609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6098u;
        // 0x2c609c: 0xc73021  addu        $a2, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C60A0u;
        goto label_2c60a0;
    }
    ctx->pc = 0x2C6098u;
    SET_GPR_U32(ctx, 31, 0x2C60A0u);
    ctx->pc = 0x2C609Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6098u;
    // 0x2c609c: 0xc73021  addu        $a2, $a2, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x2C6098u, 0x2C60A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C60A0u;
label_2c60a0:
    // 0x2c60a0: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x2c60a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2c60a4:
    // 0x2c60a4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2c60a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2c60a8:
    // 0x2c60a8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2c60a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2c60ac:
    // 0x2c60ac: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2c60acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c60b0:
    // 0x2c60b0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2c60b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c60b4:
    // 0x2c60b4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2c60b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c60b8:
    // 0x2c60b8: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2c60b8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_2c60bc:
    // 0x2c60bc: 0x4a0003bf  vwaitq
    ctx->pc = 0x2c60bcu;
    // VWAITQ (Q already resolved in this runtime)
label_2c60c0:
    // 0x2c60c0: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2c60c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c60c4:
    // 0x2c60c4: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2c60c4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_2c60c8:
    // 0x2c60c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c60c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2c60cc:
    // 0x2c60cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c60ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c60d0:
    // 0x2c60d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c60d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c60d4:
    // 0x2c60d4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2c60d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c60d8:
    // 0x2c60d8: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2c60d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_2c60dc:
    // 0x2c60dc: 0x0  nop
    ctx->pc = 0x2c60dcu;
    // NOP
label_2c60e0:
    // 0x2c60e0: 0x0  nop
    ctx->pc = 0x2c60e0u;
    // NOP
label_2c60e4:
    // 0x2c60e4: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x2c60e4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
label_2c60e8:
    // 0x2c60e8: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x2c60e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_2c60ec:
    // 0x2c60ec: 0xc136b24  jal         func_4DAC90
label_2c60f0:
    if (ctx->pc == 0x2C60F0u) {
        ctx->pc = 0x2C60F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C60ECu;
        // 0x2c60f0: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C60F4u;
        goto label_2c60f4;
    }
    ctx->pc = 0x2C60ECu;
    SET_GPR_U32(ctx, 31, 0x2C60F4u);
    ctx->pc = 0x2C60F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C60ECu;
    // 0x2c60f0: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x2C60ECu, 0x2C60F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C60F4u;
label_2c60f4:
    // 0x2c60f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2c60f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2c60f8:
    // 0x2c60f8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2c60f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2c60fc:
    // 0x2c60fc: 0x8c4447c4  lw          $a0, 0x47C4($v0)
    ctx->pc = 0x2c60fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
label_2c6100:
    // 0x2c6100: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2c6100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2c6104:
    // 0x2c6104: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c6104u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c6108:
    // 0x2c6108: 0xc1036e2  jal         func_40DB88
label_2c610c:
    if (ctx->pc == 0x2C610Cu) {
        ctx->pc = 0x2C610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6108u;
        // 0x2c610c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6110u;
        goto label_2c6110;
    }
    ctx->pc = 0x2C6108u;
    SET_GPR_U32(ctx, 31, 0x2C6110u);
    ctx->pc = 0x2C610Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6108u;
    // 0x2c610c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x2C6108u, 0x2C6110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6110u;
label_2c6110:
    // 0x2c6110: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2c6110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2c6114:
    // 0x2c6114: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_2c6118:
    if (ctx->pc == 0x2C6118u) {
        ctx->pc = 0x2C6118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6114u;
        // 0x2c6118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C611Cu;
        goto label_2c611c;
    }
    ctx->pc = 0x2C6114u;
    {
        const bool branch_taken_0x2c6114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6114u;
        // 0x2c6118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6114) {
            ctx->pc = 0x2C61CCu;
            goto label_2c61cc;
        }
    }
    ctx->pc = 0x2C611Cu;
label_2c611c:
    // 0x2c611c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2c611cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c6120:
    // 0x2c6120: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c6120u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c6124:
    // 0x2c6124: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c6124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c6128:
    // 0x2c6128: 0x40f809  jalr        $v0
label_2c612c:
    if (ctx->pc == 0x2C612Cu) {
        ctx->pc = 0x2C612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6128u;
        // 0x2c612c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6130u;
        goto label_2c6130;
    }
    ctx->pc = 0x2C6128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C6130u);
        ctx->pc = 0x2C612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6128u;
        // 0x2c612c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6128u, 0x2C6130u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C6130u;
label_2c6130:
    // 0x2c6130: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x2c6130u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
label_2c6134:
    // 0x2c6134: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x2c6134u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_2c6138:
    // 0x2c6138: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2c613c:
    if (ctx->pc == 0x2C613Cu) {
        ctx->pc = 0x2C613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6138u;
        // 0x2c613c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6140u;
        goto label_2c6140;
    }
    ctx->pc = 0x2C6138u;
    {
        const bool branch_taken_0x2c6138 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6138u;
        // 0x2c613c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6138) {
            ctx->pc = 0x2C614Cu;
            goto label_2c614c;
        }
    }
    ctx->pc = 0x2C6140u;
label_2c6140:
    // 0x2c6140: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2c6140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2c6144:
    // 0x2c6144: 0x10000002  b           . + 4 + (0x2 << 2)
label_2c6148:
    if (ctx->pc == 0x2C6148u) {
        ctx->pc = 0x2C6148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6144u;
        // 0x2c6148: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C614Cu;
        goto label_2c614c;
    }
    ctx->pc = 0x2C6144u;
    {
        const bool branch_taken_0x2c6144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6144u;
        // 0x2c6148: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6144) {
            ctx->pc = 0x2C6150u;
            goto label_2c6150;
        }
    }
    ctx->pc = 0x2C614Cu;
label_2c614c:
    // 0x2c614c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c614cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c6150:
    // 0x2c6150: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_2c6154:
    if (ctx->pc == 0x2C6154u) {
        ctx->pc = 0x2C6154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6150u;
        // 0x2c6154: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6158u;
        goto label_2c6158;
    }
    ctx->pc = 0x2C6150u;
    {
        const bool branch_taken_0x2c6150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6150u;
        // 0x2c6154: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6150) {
            ctx->pc = 0x2C61C4u;
            goto label_2c61c4;
        }
    }
    ctx->pc = 0x2C6158u;
label_2c6158:
    // 0x2c6158: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x2c6158u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_2c615c:
    // 0x2c615c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2c6160:
    if (ctx->pc == 0x2C6160u) {
        ctx->pc = 0x2C6160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C615Cu;
        // 0x2c6160: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6164u;
        goto label_2c6164;
    }
    ctx->pc = 0x2C615Cu;
    {
        const bool branch_taken_0x2c615c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C6160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C615Cu;
        // 0x2c6160: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c615c) {
            ctx->pc = 0x2C6170u;
            goto label_2c6170;
        }
    }
    ctx->pc = 0x2C6164u;
label_2c6164:
    // 0x2c6164: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2c6164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2c6168:
    // 0x2c6168: 0x10000002  b           . + 4 + (0x2 << 2)
label_2c616c:
    if (ctx->pc == 0x2C616Cu) {
        ctx->pc = 0x2C616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6168u;
        // 0x2c616c: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6170u;
        goto label_2c6170;
    }
    ctx->pc = 0x2C6168u;
    {
        const bool branch_taken_0x2c6168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6168u;
        // 0x2c616c: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6168) {
            ctx->pc = 0x2C6174u;
            goto label_2c6174;
        }
    }
    ctx->pc = 0x2C6170u;
label_2c6170:
    // 0x2c6170: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c6170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c6174:
    // 0x2c6174: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2c6174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2c6178:
    // 0x2c6178: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2c6178u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2c617c:
    // 0x2c617c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2c617cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2c6180:
    // 0x2c6180: 0x40f809  jalr        $v0
label_2c6184:
    if (ctx->pc == 0x2C6184u) {
        ctx->pc = 0x2C6184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6180u;
        // 0x2c6184: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6188u;
        goto label_2c6188;
    }
    ctx->pc = 0x2C6180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C6188u);
        ctx->pc = 0x2C6184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6180u;
        // 0x2c6184: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6180u, 0x2C6188u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C6188u;
label_2c6188:
    // 0x2c6188: 0x24030069  addiu       $v1, $zero, 0x69
    ctx->pc = 0x2c6188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_2c618c:
    // 0x2c618c: 0x5443000d  bnel        $v0, $v1, . + 4 + (0xD << 2)
label_2c6190:
    if (ctx->pc == 0x2C6190u) {
        ctx->pc = 0x2C6190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C618Cu;
        // 0x2c6190: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6194u;
        goto label_2c6194;
    }
    ctx->pc = 0x2C618Cu;
    {
        const bool branch_taken_0x2c618c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c618c) {
            ctx->pc = 0x2C6190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C618Cu;
            // 0x2c6190: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C61C4u;
            goto label_2c61c4;
        }
    }
    ctx->pc = 0x2C6194u;
label_2c6194:
    // 0x2c6194: 0xc0a36c8  jal         func_28DB20
label_2c6198:
    if (ctx->pc == 0x2C6198u) {
        ctx->pc = 0x2C6198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6194u;
        // 0x2c6198: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C619Cu;
        goto label_2c619c;
    }
    ctx->pc = 0x2C6194u;
    SET_GPR_U32(ctx, 31, 0x2C619Cu);
    ctx->pc = 0x2C6198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6194u;
    // 0x2c6198: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2C6194u, 0x2C619Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C619Cu;
label_2c619c:
    // 0x2c619c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2c619cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2c61a0:
    // 0x2c61a0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c61a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c61a4:
    // 0x2c61a4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c61a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c61a8:
    // 0x2c61a8: 0x40f809  jalr        $v0
label_2c61ac:
    if (ctx->pc == 0x2C61ACu) {
        ctx->pc = 0x2C61ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C61A8u;
        // 0x2c61ac: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C61B0u;
        goto label_2c61b0;
    }
    ctx->pc = 0x2C61A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C61B0u);
        ctx->pc = 0x2C61ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C61A8u;
        // 0x2c61ac: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C61A8u, 0x2C61B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C61B0u;
label_2c61b0:
    // 0x2c61b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c61b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c61b4:
    // 0x2c61b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c61b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c61b8:
    // 0x2c61b8: 0xc0b16be  jal         func_2C5AF8
label_2c61bc:
    if (ctx->pc == 0x2C61BCu) {
        ctx->pc = 0x2C61BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C61B8u;
        // 0x2c61bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C61C0u;
        goto label_2c61c0;
    }
    ctx->pc = 0x2C61B8u;
    SET_GPR_U32(ctx, 31, 0x2C61C0u);
    ctx->pc = 0x2C61BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C61B8u;
    // 0x2c61bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5AF8u, 0x2C61B8u, 0x2C61C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C61C0u;
label_2c61c0:
    // 0x2c61c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c61c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c61c4:
    // 0x2c61c4: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x2c61c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
label_2c61c8:
    // 0x2c61c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c61c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c61cc:
    // 0x2c61cc: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x2c61ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_2c61d0:
    // 0x2c61d0: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x2c61d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_2c61d4:
    // 0x2c61d4: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x2c61d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_2c61d8:
    // 0x2c61d8: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x2c61d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_2c61dc:
    // 0x2c61dc: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x2c61dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_2c61e0:
    // 0x2c61e0: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x2c61e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_2c61e4:
    // 0x2c61e4: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x2c61e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_2c61e8:
    // 0x2c61e8: 0x7bb70110  lq          $s7, 0x110($sp)
    ctx->pc = 0x2c61e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2c61ec:
    // 0x2c61ec: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x2c61ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_2c61f0:
    // 0x2c61f0: 0x3e00008  jr          $ra
label_2c61f4:
    if (ctx->pc == 0x2C61F4u) {
        ctx->pc = 0x2C61F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C61F0u;
        // 0x2c61f4: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C61F8u;
        goto label_fallthrough_0x2c61f0;
    }
    ctx->pc = 0x2C61F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C61F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C61F0u;
        // 0x2c61f4: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C61F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c61f0:
    ctx->pc = 0x2C61F8u;
}
