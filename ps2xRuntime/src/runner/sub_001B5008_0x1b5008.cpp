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

// Function: sub_001B5008
// Address: 0x1b5008 - 0x1b5380
void sub_001B5008_0x1b5008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5008_0x1b5008");
#endif

    switch (ctx->pc) {
        case 0x1b5008u: goto label_1b5008;
        case 0x1b500cu: goto label_1b500c;
        case 0x1b5010u: goto label_1b5010;
        case 0x1b5014u: goto label_1b5014;
        case 0x1b5018u: goto label_1b5018;
        case 0x1b501cu: goto label_1b501c;
        case 0x1b5020u: goto label_1b5020;
        case 0x1b5024u: goto label_1b5024;
        case 0x1b5028u: goto label_1b5028;
        case 0x1b502cu: goto label_1b502c;
        case 0x1b5030u: goto label_1b5030;
        case 0x1b5034u: goto label_1b5034;
        case 0x1b5038u: goto label_1b5038;
        case 0x1b503cu: goto label_1b503c;
        case 0x1b5040u: goto label_1b5040;
        case 0x1b5044u: goto label_1b5044;
        case 0x1b5048u: goto label_1b5048;
        case 0x1b504cu: goto label_1b504c;
        case 0x1b5050u: goto label_1b5050;
        case 0x1b5054u: goto label_1b5054;
        case 0x1b5058u: goto label_1b5058;
        case 0x1b505cu: goto label_1b505c;
        case 0x1b5060u: goto label_1b5060;
        case 0x1b5064u: goto label_1b5064;
        case 0x1b5068u: goto label_1b5068;
        case 0x1b506cu: goto label_1b506c;
        case 0x1b5070u: goto label_1b5070;
        case 0x1b5074u: goto label_1b5074;
        case 0x1b5078u: goto label_1b5078;
        case 0x1b507cu: goto label_1b507c;
        case 0x1b5080u: goto label_1b5080;
        case 0x1b5084u: goto label_1b5084;
        case 0x1b5088u: goto label_1b5088;
        case 0x1b508cu: goto label_1b508c;
        case 0x1b5090u: goto label_1b5090;
        case 0x1b5094u: goto label_1b5094;
        case 0x1b5098u: goto label_1b5098;
        case 0x1b509cu: goto label_1b509c;
        case 0x1b50a0u: goto label_1b50a0;
        case 0x1b50a4u: goto label_1b50a4;
        case 0x1b50a8u: goto label_1b50a8;
        case 0x1b50acu: goto label_1b50ac;
        case 0x1b50b0u: goto label_1b50b0;
        case 0x1b50b4u: goto label_1b50b4;
        case 0x1b50b8u: goto label_1b50b8;
        case 0x1b50bcu: goto label_1b50bc;
        case 0x1b50c0u: goto label_1b50c0;
        case 0x1b50c4u: goto label_1b50c4;
        case 0x1b50c8u: goto label_1b50c8;
        case 0x1b50ccu: goto label_1b50cc;
        case 0x1b50d0u: goto label_1b50d0;
        case 0x1b50d4u: goto label_1b50d4;
        case 0x1b50d8u: goto label_1b50d8;
        case 0x1b50dcu: goto label_1b50dc;
        case 0x1b50e0u: goto label_1b50e0;
        case 0x1b50e4u: goto label_1b50e4;
        case 0x1b50e8u: goto label_1b50e8;
        case 0x1b50ecu: goto label_1b50ec;
        case 0x1b50f0u: goto label_1b50f0;
        case 0x1b50f4u: goto label_1b50f4;
        case 0x1b50f8u: goto label_1b50f8;
        case 0x1b50fcu: goto label_1b50fc;
        case 0x1b5100u: goto label_1b5100;
        case 0x1b5104u: goto label_1b5104;
        case 0x1b5108u: goto label_1b5108;
        case 0x1b510cu: goto label_1b510c;
        case 0x1b5110u: goto label_1b5110;
        case 0x1b5114u: goto label_1b5114;
        case 0x1b5118u: goto label_1b5118;
        case 0x1b511cu: goto label_1b511c;
        case 0x1b5120u: goto label_1b5120;
        case 0x1b5124u: goto label_1b5124;
        case 0x1b5128u: goto label_1b5128;
        case 0x1b512cu: goto label_1b512c;
        case 0x1b5130u: goto label_1b5130;
        case 0x1b5134u: goto label_1b5134;
        case 0x1b5138u: goto label_1b5138;
        case 0x1b513cu: goto label_1b513c;
        case 0x1b5140u: goto label_1b5140;
        case 0x1b5144u: goto label_1b5144;
        case 0x1b5148u: goto label_1b5148;
        case 0x1b514cu: goto label_1b514c;
        case 0x1b5150u: goto label_1b5150;
        case 0x1b5154u: goto label_1b5154;
        case 0x1b5158u: goto label_1b5158;
        case 0x1b515cu: goto label_1b515c;
        case 0x1b5160u: goto label_1b5160;
        case 0x1b5164u: goto label_1b5164;
        case 0x1b5168u: goto label_1b5168;
        case 0x1b516cu: goto label_1b516c;
        case 0x1b5170u: goto label_1b5170;
        case 0x1b5174u: goto label_1b5174;
        case 0x1b5178u: goto label_1b5178;
        case 0x1b517cu: goto label_1b517c;
        case 0x1b5180u: goto label_1b5180;
        case 0x1b5184u: goto label_1b5184;
        case 0x1b5188u: goto label_1b5188;
        case 0x1b518cu: goto label_1b518c;
        case 0x1b5190u: goto label_1b5190;
        case 0x1b5194u: goto label_1b5194;
        case 0x1b5198u: goto label_1b5198;
        case 0x1b519cu: goto label_1b519c;
        case 0x1b51a0u: goto label_1b51a0;
        case 0x1b51a4u: goto label_1b51a4;
        case 0x1b51a8u: goto label_1b51a8;
        case 0x1b51acu: goto label_1b51ac;
        case 0x1b51b0u: goto label_1b51b0;
        case 0x1b51b4u: goto label_1b51b4;
        case 0x1b51b8u: goto label_1b51b8;
        case 0x1b51bcu: goto label_1b51bc;
        case 0x1b51c0u: goto label_1b51c0;
        case 0x1b51c4u: goto label_1b51c4;
        case 0x1b51c8u: goto label_1b51c8;
        case 0x1b51ccu: goto label_1b51cc;
        case 0x1b51d0u: goto label_1b51d0;
        case 0x1b51d4u: goto label_1b51d4;
        case 0x1b51d8u: goto label_1b51d8;
        case 0x1b51dcu: goto label_1b51dc;
        case 0x1b51e0u: goto label_1b51e0;
        case 0x1b51e4u: goto label_1b51e4;
        case 0x1b51e8u: goto label_1b51e8;
        case 0x1b51ecu: goto label_1b51ec;
        case 0x1b51f0u: goto label_1b51f0;
        case 0x1b51f4u: goto label_1b51f4;
        case 0x1b51f8u: goto label_1b51f8;
        case 0x1b51fcu: goto label_1b51fc;
        case 0x1b5200u: goto label_1b5200;
        case 0x1b5204u: goto label_1b5204;
        case 0x1b5208u: goto label_1b5208;
        case 0x1b520cu: goto label_1b520c;
        case 0x1b5210u: goto label_1b5210;
        case 0x1b5214u: goto label_1b5214;
        case 0x1b5218u: goto label_1b5218;
        case 0x1b521cu: goto label_1b521c;
        case 0x1b5220u: goto label_1b5220;
        case 0x1b5224u: goto label_1b5224;
        case 0x1b5228u: goto label_1b5228;
        case 0x1b522cu: goto label_1b522c;
        case 0x1b5230u: goto label_1b5230;
        case 0x1b5234u: goto label_1b5234;
        case 0x1b5238u: goto label_1b5238;
        case 0x1b523cu: goto label_1b523c;
        case 0x1b5240u: goto label_1b5240;
        case 0x1b5244u: goto label_1b5244;
        case 0x1b5248u: goto label_1b5248;
        case 0x1b524cu: goto label_1b524c;
        case 0x1b5250u: goto label_1b5250;
        case 0x1b5254u: goto label_1b5254;
        case 0x1b5258u: goto label_1b5258;
        case 0x1b525cu: goto label_1b525c;
        case 0x1b5260u: goto label_1b5260;
        case 0x1b5264u: goto label_1b5264;
        case 0x1b5268u: goto label_1b5268;
        case 0x1b526cu: goto label_1b526c;
        case 0x1b5270u: goto label_1b5270;
        case 0x1b5274u: goto label_1b5274;
        case 0x1b5278u: goto label_1b5278;
        case 0x1b527cu: goto label_1b527c;
        case 0x1b5280u: goto label_1b5280;
        case 0x1b5284u: goto label_1b5284;
        case 0x1b5288u: goto label_1b5288;
        case 0x1b528cu: goto label_1b528c;
        case 0x1b5290u: goto label_1b5290;
        case 0x1b5294u: goto label_1b5294;
        case 0x1b5298u: goto label_1b5298;
        case 0x1b529cu: goto label_1b529c;
        case 0x1b52a0u: goto label_1b52a0;
        case 0x1b52a4u: goto label_1b52a4;
        case 0x1b52a8u: goto label_1b52a8;
        case 0x1b52acu: goto label_1b52ac;
        case 0x1b52b0u: goto label_1b52b0;
        case 0x1b52b4u: goto label_1b52b4;
        case 0x1b52b8u: goto label_1b52b8;
        case 0x1b52bcu: goto label_1b52bc;
        case 0x1b52c0u: goto label_1b52c0;
        case 0x1b52c4u: goto label_1b52c4;
        case 0x1b52c8u: goto label_1b52c8;
        case 0x1b52ccu: goto label_1b52cc;
        case 0x1b52d0u: goto label_1b52d0;
        case 0x1b52d4u: goto label_1b52d4;
        case 0x1b52d8u: goto label_1b52d8;
        case 0x1b52dcu: goto label_1b52dc;
        case 0x1b52e0u: goto label_1b52e0;
        case 0x1b52e4u: goto label_1b52e4;
        case 0x1b52e8u: goto label_1b52e8;
        case 0x1b52ecu: goto label_1b52ec;
        case 0x1b52f0u: goto label_1b52f0;
        case 0x1b52f4u: goto label_1b52f4;
        case 0x1b52f8u: goto label_1b52f8;
        case 0x1b52fcu: goto label_1b52fc;
        case 0x1b5300u: goto label_1b5300;
        case 0x1b5304u: goto label_1b5304;
        case 0x1b5308u: goto label_1b5308;
        case 0x1b530cu: goto label_1b530c;
        case 0x1b5310u: goto label_1b5310;
        case 0x1b5314u: goto label_1b5314;
        case 0x1b5318u: goto label_1b5318;
        case 0x1b531cu: goto label_1b531c;
        case 0x1b5320u: goto label_1b5320;
        case 0x1b5324u: goto label_1b5324;
        case 0x1b5328u: goto label_1b5328;
        case 0x1b532cu: goto label_1b532c;
        case 0x1b5330u: goto label_1b5330;
        case 0x1b5334u: goto label_1b5334;
        case 0x1b5338u: goto label_1b5338;
        case 0x1b533cu: goto label_1b533c;
        case 0x1b5340u: goto label_1b5340;
        case 0x1b5344u: goto label_1b5344;
        case 0x1b5348u: goto label_1b5348;
        case 0x1b534cu: goto label_1b534c;
        case 0x1b5350u: goto label_1b5350;
        case 0x1b5354u: goto label_1b5354;
        case 0x1b5358u: goto label_1b5358;
        case 0x1b535cu: goto label_1b535c;
        case 0x1b5360u: goto label_1b5360;
        case 0x1b5364u: goto label_1b5364;
        case 0x1b5368u: goto label_1b5368;
        case 0x1b536cu: goto label_1b536c;
        case 0x1b5370u: goto label_1b5370;
        case 0x1b5374u: goto label_1b5374;
        case 0x1b5378u: goto label_1b5378;
        case 0x1b537cu: goto label_1b537c;
        default: break;
    }

    ctx->pc = 0x1b5008u;

label_1b5008:
    // 0x1b5008: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1b5008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1b500c:
    // 0x1b500c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b500cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b5010:
    // 0x1b5010: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1b5010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_1b5014:
    // 0x1b5014: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1b5014u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b5018:
    // 0x1b5018: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1b5018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_1b501c:
    // 0x1b501c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b501cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b5020:
    // 0x1b5020: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1b5020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1b5024:
    // 0x1b5024: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1b5024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_1b5028:
    // 0x1b5028: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1b5028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_1b502c:
    // 0x1b502c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1b502cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_1b5030:
    // 0x1b5030: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1b5030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1b5034:
    // 0x1b5034: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1b5034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1b5038:
    // 0x1b5038: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1b5038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_1b503c:
    // 0x1b503c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1b503cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_1b5040:
    // 0x1b5040: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b5040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b5044:
    // 0x1b5044: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x1b5044u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1b5048:
    // 0x1b5048: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1b5048u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1b504c:
    // 0x1b504c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b504cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1b5050:
    // 0x1b5050: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1b5050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1b5054:
    // 0x1b5054: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1b5058:
    if (ctx->pc == 0x1B5058u) {
        ctx->pc = 0x1B5058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5054u;
        // 0x1b5058: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B505Cu;
        goto label_1b505c;
    }
    ctx->pc = 0x1B5054u;
    {
        const bool branch_taken_0x1b5054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5054u;
        // 0x1b5058: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5054) {
            ctx->pc = 0x1B508Cu;
            goto label_1b508c;
        }
    }
    ctx->pc = 0x1B505Cu;
label_1b505c:
    // 0x1b505c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1b505cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1b5060:
    // 0x1b5060: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1b5064:
    if (ctx->pc == 0x1B5064u) {
        ctx->pc = 0x1B5064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5060u;
        // 0x1b5064: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5068u;
        goto label_1b5068;
    }
    ctx->pc = 0x1B5060u;
    {
        const bool branch_taken_0x1b5060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5060u;
        // 0x1b5064: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5060) {
            ctx->pc = 0x1B508Cu;
            goto label_1b508c;
        }
    }
    ctx->pc = 0x1B5068u;
label_1b5068:
    // 0x1b5068: 0x3c013e61  lui         $at, 0x3E61
    ctx->pc = 0x1b5068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15969 << 16));
label_1b506c:
    // 0x1b506c: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1b506cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1b5070:
    // 0x1b5070: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b5070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b5074:
    // 0x1b5074: 0x3c013c93  lui         $at, 0x3C93
    ctx->pc = 0x1b5074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15507 << 16));
label_1b5078:
    // 0x1b5078: 0x342174bc  ori         $at, $at, 0x74BC
    ctx->pc = 0x1b5078u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29884);
label_1b507c:
    // 0x1b507c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b507cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5080:
    // 0x1b5080: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b5080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b5084:
    // 0x1b5084: 0xe461d564  swc1        $f1, -0x2A9C($v1)
    ctx->pc = 0x1b5084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956388), bits); }
label_1b5088:
    // 0x1b5088: 0xe440d568  swc1        $f0, -0x2A98($v0)
    ctx->pc = 0x1b5088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956392), bits); }
label_1b508c:
    // 0x1b508c: 0x10e00026  beqz        $a3, . + 4 + (0x26 << 2)
label_1b5090:
    if (ctx->pc == 0x1B5090u) {
        ctx->pc = 0x1B5090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B508Cu;
        // 0x1b5090: 0x240403f0  addiu       $a0, $zero, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5094u;
        goto label_1b5094;
    }
    ctx->pc = 0x1B508Cu;
    {
        const bool branch_taken_0x1b508c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B508Cu;
        // 0x1b5090: 0x240403f0  addiu       $a0, $zero, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b508c) {
            ctx->pc = 0x1B5128u;
            goto label_1b5128;
        }
    }
    ctx->pc = 0x1B5094u;
label_1b5094:
    // 0x1b5094: 0x3c100061  lui         $s0, 0x61
    ctx->pc = 0x1b5094u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
label_1b5098:
    // 0x1b5098: 0x2c42018  mult        $a0, $s6, $a0
    ctx->pc = 0x1b5098u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1b509c:
    // 0x1b509c: 0x2602a1b0  addiu       $v0, $s0, -0x5E50
    ctx->pc = 0x1b509cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943152));
label_1b50a0:
    // 0x1b50a0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1b50a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1b50a4:
    // 0x1b50a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b50a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b50a8:
    // 0x1b50a8: 0x84650058  lh          $a1, 0x58($v1)
    ctx->pc = 0x1b50a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1b50ac:
    // 0x1b50ac: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1b50acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1b50b0:
    // 0x1b50b0: 0x40f809  jalr        $v0
label_1b50b4:
    if (ctx->pc == 0x1B50B4u) {
        ctx->pc = 0x1B50B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50B0u;
        // 0x1b50b4: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B50B8u;
        goto label_1b50b8;
    }
    ctx->pc = 0x1B50B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B50B8u);
        ctx->pc = 0x1B50B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50B0u;
        // 0x1b50b4: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B50B0u, 0x1B50B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B50B8u;
label_1b50b8:
    // 0x1b50b8: 0x50510010  beql        $v0, $s1, . + 4 + (0x10 << 2)
label_1b50bc:
    if (ctx->pc == 0x1B50BCu) {
        ctx->pc = 0x1B50BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50B8u;
        // 0x1b50bc: 0x240403f0  addiu       $a0, $zero, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B50C0u;
        goto label_1b50c0;
    }
    ctx->pc = 0x1B50B8u;
    {
        const bool branch_taken_0x1b50b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1b50b8) {
            ctx->pc = 0x1B50BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B50B8u;
            // 0x1b50bc: 0x240403f0  addiu       $a0, $zero, 0x3F0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B50FCu;
            goto label_1b50fc;
        }
    }
    ctx->pc = 0x1B50C0u;
label_1b50c0:
    // 0x1b50c0: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_1b50c4:
    if (ctx->pc == 0x1B50C4u) {
        ctx->pc = 0x1B50C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50C0u;
        // 0x1b50c4: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B50C8u;
        goto label_1b50c8;
    }
    ctx->pc = 0x1B50C0u;
    {
        const bool branch_taken_0x1b50c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B50C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50C0u;
        // 0x1b50c4: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b50c0) {
            ctx->pc = 0x1B50E0u;
            goto label_1b50e0;
        }
    }
    ctx->pc = 0x1B50C8u;
label_1b50c8:
    // 0x1b50c8: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1b50c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1b50cc:
    // 0x1b50cc: 0x24420840  addiu       $v0, $v0, 0x840
    ctx->pc = 0x1b50ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_1b50d0:
    // 0x1b50d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b50d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1b50d4:
    // 0x1b50d4: 0x8c432930  lw          $v1, 0x2930($v0)
    ctx->pc = 0x1b50d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10544)));
label_1b50d8:
    // 0x1b50d8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b50dc:
    if (ctx->pc == 0x1B50DCu) {
        ctx->pc = 0x1B50DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50D8u;
        // 0x1b50dc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B50E0u;
        goto label_1b50e0;
    }
    ctx->pc = 0x1B50D8u;
    {
        const bool branch_taken_0x1b50d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B50DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50D8u;
        // 0x1b50dc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b50d8) {
            ctx->pc = 0x1B50F4u;
            goto label_1b50f4;
        }
    }
    ctx->pc = 0x1B50E0u;
label_1b50e0:
    // 0x1b50e0: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1b50e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1b50e4:
    // 0x1b50e4: 0x24420840  addiu       $v0, $v0, 0x840
    ctx->pc = 0x1b50e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_1b50e8:
    // 0x1b50e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b50e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1b50ec:
    // 0x1b50ec: 0x8c432930  lw          $v1, 0x2930($v0)
    ctx->pc = 0x1b50ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10544)));
label_1b50f0:
    // 0x1b50f0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b50f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1b50f4:
    // 0x1b50f4: 0xac432930  sw          $v1, 0x2930($v0)
    ctx->pc = 0x1b50f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10544), GPR_U32(ctx, 3));
label_1b50f8:
    // 0x1b50f8: 0x240403f0  addiu       $a0, $zero, 0x3F0
    ctx->pc = 0x1b50f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
label_1b50fc:
    // 0x1b50fc: 0x2603a1b0  addiu       $v1, $s0, -0x5E50
    ctx->pc = 0x1b50fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943152));
label_1b5100:
    // 0x1b5100: 0x2c42018  mult        $a0, $s6, $a0
    ctx->pc = 0x1b5100u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1b5104:
    // 0x1b5104: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b5104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b5108:
    // 0x1b5108: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1b5108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1b510c:
    // 0x1b510c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b510cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b5110:
    // 0x1b5110: 0x84430050  lh          $v1, 0x50($v0)
    ctx->pc = 0x1b5110u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1b5114:
    // 0x1b5114: 0x8c460054  lw          $a2, 0x54($v0)
    ctx->pc = 0x1b5114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1b5118:
    // 0x1b5118: 0xc0f809  jalr        $a2
label_1b511c:
    if (ctx->pc == 0x1B511Cu) {
        ctx->pc = 0x1B511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5118u;
        // 0x1b511c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5120u;
        goto label_1b5120;
    }
    ctx->pc = 0x1B5118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1B5120u);
        ctx->pc = 0x1B511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5118u;
        // 0x1b511c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5118u, 0x1B5120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5120u;
label_1b5120:
    // 0x1b5120: 0x1000008a  b           . + 4 + (0x8A << 2)
label_1b5124:
    if (ctx->pc == 0x1B5124u) {
        ctx->pc = 0x1B5124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5120u;
        // 0x1b5124: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5128u;
        goto label_1b5128;
    }
    ctx->pc = 0x1B5120u;
    {
        const bool branch_taken_0x1b5120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5120u;
        // 0x1b5124: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5120) {
            ctx->pc = 0x1B534Cu;
            goto label_1b534c;
        }
    }
    ctx->pc = 0x1B5128u;
label_1b5128:
    // 0x1b5128: 0x1220007a  beqz        $s1, . + 4 + (0x7A << 2)
label_1b512c:
    if (ctx->pc == 0x1B512Cu) {
        ctx->pc = 0x1B512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5128u;
        // 0x1b512c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5130u;
        goto label_1b5130;
    }
    ctx->pc = 0x1B5128u;
    {
        const bool branch_taken_0x1b5128 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5128u;
        // 0x1b512c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5128) {
            ctx->pc = 0x1B5314u;
            goto label_1b5314;
        }
    }
    ctx->pc = 0x1B5130u;
label_1b5130:
    // 0x1b5130: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1b5130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1b5134:
    // 0x1b5134: 0x24420840  addiu       $v0, $v0, 0x840
    ctx->pc = 0x1b5134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_1b5138:
    // 0x1b5138: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1b5138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_1b513c:
    // 0x1b513c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b513cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1b5140:
    // 0x1b5140: 0x8c659e8c  lw          $a1, -0x6174($v1)
    ctx->pc = 0x1b5140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942348)));
label_1b5144:
    // 0x1b5144: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x1b5144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
label_1b5148:
    // 0x1b5148: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1b5148u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1b514c:
    // 0x1b514c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1b514cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1b5150:
    // 0x1b5150: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1b5154:
    if (ctx->pc == 0x1B5154u) {
        ctx->pc = 0x1B5154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5150u;
        // 0x1b5154: 0xac562930  sw          $s6, 0x2930($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 10544), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5158u;
        goto label_1b5158;
    }
    ctx->pc = 0x1B5150u;
    {
        const bool branch_taken_0x1b5150 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5150u;
        // 0x1b5154: 0xac562930  sw          $s6, 0x2930($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 10544), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5150) {
            ctx->pc = 0x1B5170u;
            goto label_1b5170;
        }
    }
    ctx->pc = 0x1B5158u;
label_1b5158:
    // 0x1b5158: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b5158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b515c:
    // 0x1b515c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b515cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b5160:
    // 0x1b5160: 0xc460d560  lwc1        $f0, -0x2AA0($v1)
    ctx->pc = 0x1b5160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b5164:
    // 0x1b5164: 0xc441d544  lwc1        $f1, -0x2ABC($v0)
    ctx->pc = 0x1b5164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5168:
    // 0x1b5168: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b5168u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b516c:
    // 0x1b516c: 0xe460d560  swc1        $f0, -0x2AA0($v1)
    ctx->pc = 0x1b516cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956384), bits); }
label_1b5170:
    // 0x1b5170: 0x12c00075  beqz        $s6, . + 4 + (0x75 << 2)
label_1b5174:
    if (ctx->pc == 0x1B5174u) {
        ctx->pc = 0x1B5174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5170u;
        // 0x1b5174: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5178u;
        goto label_1b5178;
    }
    ctx->pc = 0x1B5170u;
    {
        const bool branch_taken_0x1b5170 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5170u;
        // 0x1b5174: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5170) {
            ctx->pc = 0x1B5348u;
            goto label_1b5348;
        }
    }
    ctx->pc = 0x1B5178u;
label_1b5178:
    // 0x1b5178: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1b5178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_1b517c:
    // 0x1b517c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b517cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b5180:
    // 0x1b5180: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b5180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b5184:
    // 0x1b5184: 0x2471a1b0  addiu       $s1, $v1, -0x5E50
    ctx->pc = 0x1b5184u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943152));
label_1b5188:
    // 0x1b5188: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1b5188u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1b518c:
    // 0x1b518c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x1b518cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b5190:
    // 0x1b5190: 0x241700c8  addiu       $s7, $zero, 0xC8
    ctx->pc = 0x1b5190u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1b5194:
    // 0x1b5194: 0x241e00ff  addiu       $fp, $zero, 0xFF
    ctx->pc = 0x1b5194u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1b5198:
    // 0x1b5198: 0x27b20014  addiu       $s2, $sp, 0x14
    ctx->pc = 0x1b5198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_1b519c:
    // 0x1b519c: 0x0  nop
    ctx->pc = 0x1b519cu;
    // NOP
label_1b51a0:
    // 0x1b51a0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1b51a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1b51a4:
    // 0x1b51a4: 0x54400055  bnel        $v0, $zero, . + 4 + (0x55 << 2)
label_1b51a8:
    if (ctx->pc == 0x1B51A8u) {
        ctx->pc = 0x1B51A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B51A4u;
        // 0x1b51a8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B51ACu;
        goto label_1b51ac;
    }
    ctx->pc = 0x1B51A4u;
    {
        const bool branch_taken_0x1b51a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b51a4) {
            ctx->pc = 0x1B51A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B51A4u;
            // 0x1b51a8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B52FCu;
            goto label_1b52fc;
        }
    }
    ctx->pc = 0x1B51ACu;
label_1b51ac:
    // 0x1b51ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b51acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b51b0:
    // 0x1b51b0: 0x2444d560  addiu       $a0, $v0, -0x2AA0
    ctx->pc = 0x1b51b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956384));
label_1b51b4:
    // 0x1b51b4: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_1b51b8:
    if (ctx->pc == 0x1B51B8u) {
        ctx->pc = 0x1B51B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B51B4u;
        // 0x1b51b8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B51BCu;
        goto label_1b51bc;
    }
    ctx->pc = 0x1B51B4u;
    {
        const bool branch_taken_0x1b51b4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1B51B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B51B4u;
        // 0x1b51b8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b51b4) {
            ctx->pc = 0x1B51D0u;
            goto label_1b51d0;
        }
    }
    ctx->pc = 0x1B51BCu;
label_1b51bc:
    // 0x1b51bc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1b51bcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b51c0:
    // 0x1b51c0: 0x0  nop
    ctx->pc = 0x1b51c0u;
    // NOP
label_1b51c4:
    // 0x1b51c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b51c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b51c8:
    // 0x1b51c8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1b51cc:
    if (ctx->pc == 0x1B51CCu) {
        ctx->pc = 0x1B51CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B51C8u;
        // 0x1b51cc: 0x4600a882  mul.s       $f2, $f21, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B51D0u;
        goto label_1b51d0;
    }
    ctx->pc = 0x1B51C8u;
    {
        const bool branch_taken_0x1b51c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B51CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B51C8u;
        // 0x1b51cc: 0x4600a882  mul.s       $f2, $f21, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b51c8) {
            ctx->pc = 0x1B51F0u;
            goto label_1b51f0;
        }
    }
    ctx->pc = 0x1B51D0u;
label_1b51d0:
    // 0x1b51d0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1b51d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_1b51d4:
    // 0x1b51d4: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1b51d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_1b51d8:
    // 0x1b51d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b51d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b51dc:
    // 0x1b51dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b51dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b51e0:
    // 0x1b51e0: 0x0  nop
    ctx->pc = 0x1b51e0u;
    // NOP
label_1b51e4:
    // 0x1b51e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b51e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b51e8:
    // 0x1b51e8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b51e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b51ec:
    // 0x1b51ec: 0x4600a882  mul.s       $f2, $f21, $f0
    ctx->pc = 0x1b51ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1b51f0:
    // 0x1b51f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b51f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b51f4:
    // 0x1b51f4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1b51f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b51f8:
    // 0x1b51f8: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x1b51f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
label_1b51fc:
    // 0x1b51fc: 0xc441d558  lwc1        $f1, -0x2AA8($v0)
    ctx->pc = 0x1b51fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5200:
    // 0x1b5200: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b5204:
    // 0x1b5204: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1b5204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1b5208:
    // 0x1b5208: 0xa3b70010  sb          $s7, 0x10($sp)
    ctx->pc = 0x1b5208u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 23));
label_1b520c:
    // 0x1b520c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1b520cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b5210:
    // 0x1b5210: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1b5210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_1b5214:
    // 0x1b5214: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1b5214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1b5218:
    // 0x1b5218: 0x24428840  addiu       $v0, $v0, -0x77C0
    ctx->pc = 0x1b5218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936640));
label_1b521c:
    // 0x1b521c: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1b521cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1b5220:
    // 0x1b5220: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b5220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b5224:
    // 0x1b5224: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1b5224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1b5228:
    // 0x1b5228: 0x35080050  ori         $t0, $t0, 0x50
    ctx->pc = 0x1b5228u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)80);
label_1b522c:
    // 0x1b522c: 0xc4401124  lwc1        $f0, 0x1124($v0)
    ctx->pc = 0x1b522cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b5230:
    // 0x1b5230: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1b5230u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_1b5234:
    // 0x1b5234: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b5234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b5238:
    // 0x1b5238: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1b5238u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b523c:
    // 0x1b523c: 0xc44cd564  lwc1        $f12, -0x2A9C($v0)
    ctx->pc = 0x1b523cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b5240:
    // 0x1b5240: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b5240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b5244:
    // 0x1b5244: 0xc44dd568  lwc1        $f13, -0x2A98($v0)
    ctx->pc = 0x1b5244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b5248:
    // 0x1b5248: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1b5248u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1b524c:
    // 0x1b524c: 0xa2770001  sb          $s7, 0x1($s3)
    ctx->pc = 0x1b524cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 23));
label_1b5250:
    // 0x1b5250: 0xa2770002  sb          $s7, 0x2($s3)
    ctx->pc = 0x1b5250u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 23));
label_1b5254:
    // 0x1b5254: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x1b5254u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
label_1b5258:
    // 0x1b5258: 0xa27e0003  sb          $fp, 0x3($s3)
    ctx->pc = 0x1b5258u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 30));
label_1b525c:
    // 0x1b525c: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x1b525cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1b5260:
    // 0x1b5260: 0xc0707e0  jal         func_1C1F80
label_1b5264:
    if (ctx->pc == 0x1B5264u) {
        ctx->pc = 0x1B5264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5260u;
        // 0x1b5264: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5268u;
        goto label_1b5268;
    }
    ctx->pc = 0x1B5260u;
    SET_GPR_U32(ctx, 31, 0x1B5268u);
    ctx->pc = 0x1B5264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5260u;
    // 0x1b5264: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F80u, 0x1B5260u, 0x1B5268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5268u;
label_1b5268:
    // 0x1b5268: 0x2402ffd9  addiu       $v0, $zero, -0x27
    ctx->pc = 0x1b5268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967257));
label_1b526c:
    // 0x1b526c: 0x26a4d560  addiu       $a0, $s5, -0x2AA0
    ctx->pc = 0x1b526cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956384));
label_1b5270:
    // 0x1b5270: 0xa3a20014  sb          $v0, 0x14($sp)
    ctx->pc = 0x1b5270u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 2));
label_1b5274:
    // 0x1b5274: 0x2402ff9e  addiu       $v0, $zero, -0x62
    ctx->pc = 0x1b5274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967198));
label_1b5278:
    // 0x1b5278: 0xa25e0003  sb          $fp, 0x3($s2)
    ctx->pc = 0x1b5278u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 30));
label_1b527c:
    // 0x1b527c: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x1b527cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
label_1b5280:
    // 0x1b5280: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b5280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1b5284:
    // 0x1b5284: 0xa2420002  sb          $v0, 0x2($s2)
    ctx->pc = 0x1b5284u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
label_1b5288:
    // 0x1b5288: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1b5288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1b528c:
    // 0x1b528c: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_1b5290:
    if (ctx->pc == 0x1B5290u) {
        ctx->pc = 0x1B5290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B528Cu;
        // 0x1b5290: 0xae220068  sw          $v0, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5294u;
        goto label_1b5294;
    }
    ctx->pc = 0x1B528Cu;
    {
        const bool branch_taken_0x1b528c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1B5290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B528Cu;
        // 0x1b5290: 0xae220068  sw          $v0, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b528c) {
            ctx->pc = 0x1B52A8u;
            goto label_1b52a8;
        }
    }
    ctx->pc = 0x1B5294u;
label_1b5294:
    // 0x1b5294: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1b5294u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5298:
    // 0x1b5298: 0x0  nop
    ctx->pc = 0x1b5298u;
    // NOP
label_1b529c:
    // 0x1b529c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b529cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b52a0:
    // 0x1b52a0: 0x10000009  b           . + 4 + (0x9 << 2)
label_1b52a4:
    if (ctx->pc == 0x1B52A4u) {
        ctx->pc = 0x1B52A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B52A0u;
        // 0x1b52a4: 0x4600a882  mul.s       $f2, $f21, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B52A8u;
        goto label_1b52a8;
    }
    ctx->pc = 0x1B52A0u;
    {
        const bool branch_taken_0x1b52a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B52A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B52A0u;
        // 0x1b52a4: 0x4600a882  mul.s       $f2, $f21, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b52a0) {
            ctx->pc = 0x1B52C8u;
            goto label_1b52c8;
        }
    }
    ctx->pc = 0x1B52A8u;
label_1b52a8:
    // 0x1b52a8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1b52a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_1b52ac:
    // 0x1b52ac: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1b52acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_1b52b0:
    // 0x1b52b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b52b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b52b4:
    // 0x1b52b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b52b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b52b8:
    // 0x1b52b8: 0x0  nop
    ctx->pc = 0x1b52b8u;
    // NOP
label_1b52bc:
    // 0x1b52bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b52bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b52c0:
    // 0x1b52c0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b52c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b52c4:
    // 0x1b52c4: 0x4600a882  mul.s       $f2, $f21, $f0
    ctx->pc = 0x1b52c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1b52c8:
    // 0x1b52c8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b52c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b52cc:
    // 0x1b52cc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1b52ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b52d0:
    // 0x1b52d0: 0xc441d55c  lwc1        $f1, -0x2AA4($v0)
    ctx->pc = 0x1b52d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b52d4:
    // 0x1b52d4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1b52d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1b52d8:
    // 0x1b52d8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1b52d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1b52dc:
    // 0x1b52dc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1b52dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b52e0:
    // 0x1b52e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b52e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b52e4:
    // 0x1b52e4: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1b52e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1b52e8:
    // 0x1b52e8: 0xa222009c  sb          $v0, 0x9C($s1)
    ctx->pc = 0x1b52e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 156), (uint8_t)GPR_U32(ctx, 2));
label_1b52ec:
    // 0x1b52ec: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1b52ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1b52f0:
    // 0x1b52f0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1b52f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b52f4:
    // 0x1b52f4: 0x7e2203c0  sq          $v0, 0x3C0($s1)
    ctx->pc = 0x1b52f4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 960), GPR_VEC(ctx, 2));
label_1b52f8:
    // 0x1b52f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b52f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b52fc:
    // 0x1b52fc: 0x263103f0  addiu       $s1, $s1, 0x3F0
    ctx->pc = 0x1b52fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1008));
label_1b5300:
    // 0x1b5300: 0x216102b  sltu        $v0, $s0, $s6
    ctx->pc = 0x1b5300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_1b5304:
    // 0x1b5304: 0x1440ffa6  bnez        $v0, . + 4 + (-0x5A << 2)
label_1b5308:
    if (ctx->pc == 0x1B5308u) {
        ctx->pc = 0x1B5308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5304u;
        // 0x1b5308: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B530Cu;
        goto label_1b530c;
    }
    ctx->pc = 0x1B5304u;
    {
        const bool branch_taken_0x1b5304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5304u;
        // 0x1b5308: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5304) {
            ctx->pc = 0x1B51A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b51a0;
        }
    }
    ctx->pc = 0x1B530Cu;
label_1b530c:
    // 0x1b530c: 0x1000000f  b           . + 4 + (0xF << 2)
label_1b5310:
    if (ctx->pc == 0x1B5310u) {
        ctx->pc = 0x1B5310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B530Cu;
        // 0x1b5310: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5314u;
        goto label_1b5314;
    }
    ctx->pc = 0x1B530Cu;
    {
        const bool branch_taken_0x1b530c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B530Cu;
        // 0x1b5310: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b530c) {
            ctx->pc = 0x1B534Cu;
            goto label_1b534c;
        }
    }
    ctx->pc = 0x1B5314u;
label_1b5314:
    // 0x1b5314: 0x3c100061  lui         $s0, 0x61
    ctx->pc = 0x1b5314u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
label_1b5318:
    // 0x1b5318: 0x2610a1b0  addiu       $s0, $s0, -0x5E50
    ctx->pc = 0x1b5318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943152));
label_1b531c:
    // 0x1b531c: 0x26110fc0  addiu       $s1, $s0, 0xFC0
    ctx->pc = 0x1b531cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4032));
label_1b5320:
    // 0x1b5320: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b5320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b5324:
    // 0x1b5324: 0x0  nop
    ctx->pc = 0x1b5324u;
    // NOP
label_1b5328:
    // 0x1b5328: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1b5328u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1b532c:
    // 0x1b532c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1b532cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1b5330:
    // 0x1b5330: 0x60f809  jalr        $v1
label_1b5334:
    if (ctx->pc == 0x1B5334u) {
        ctx->pc = 0x1B5334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5330u;
        // 0x1b5334: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5338u;
        goto label_1b5338;
    }
    ctx->pc = 0x1B5330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B5338u);
        ctx->pc = 0x1B5334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5330u;
        // 0x1b5334: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5330u, 0x1B5338u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5338u;
label_1b5338:
    // 0x1b5338: 0x261003f0  addiu       $s0, $s0, 0x3F0
    ctx->pc = 0x1b5338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
label_1b533c:
    // 0x1b533c: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1b533cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1b5340:
    // 0x1b5340: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_1b5344:
    if (ctx->pc == 0x1B5344u) {
        ctx->pc = 0x1B5344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5340u;
        // 0x1b5344: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5348u;
        goto label_1b5348;
    }
    ctx->pc = 0x1B5340u;
    {
        const bool branch_taken_0x1b5340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5340) {
            ctx->pc = 0x1B5344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5340u;
            // 0x1b5344: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5328;
        }
    }
    ctx->pc = 0x1B5348u;
label_1b5348:
    // 0x1b5348: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1b5348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1b534c:
    // 0x1b534c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1b534cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1b5350:
    // 0x1b5350: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1b5350u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1b5354:
    // 0x1b5354: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1b5354u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b5358:
    // 0x1b5358: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1b5358u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b535c:
    // 0x1b535c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1b535cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b5360:
    // 0x1b5360: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1b5360u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b5364:
    // 0x1b5364: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x1b5364u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b5368:
    // 0x1b5368: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x1b5368u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b536c:
    // 0x1b536c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b536cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b5370:
    // 0x1b5370: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x1b5370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1b5374:
    // 0x1b5374: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1b5374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b5378:
    // 0x1b5378: 0x3e00008  jr          $ra
label_1b537c:
    if (ctx->pc == 0x1B537Cu) {
        ctx->pc = 0x1B537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5378u;
        // 0x1b537c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5380u;
        goto label_fallthrough_0x1b5378;
    }
    ctx->pc = 0x1B5378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5378u;
        // 0x1b537c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b5378:
    ctx->pc = 0x1B5380u;
}
