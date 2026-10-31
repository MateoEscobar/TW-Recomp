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

// Function: sub_003ED008
// Address: 0x3ed008 - 0x3ed3c8
void sub_003ED008_0x3ed008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ED008_0x3ed008");
#endif

    switch (ctx->pc) {
        case 0x3ed008u: goto label_3ed008;
        case 0x3ed00cu: goto label_3ed00c;
        case 0x3ed010u: goto label_3ed010;
        case 0x3ed014u: goto label_3ed014;
        case 0x3ed018u: goto label_3ed018;
        case 0x3ed01cu: goto label_3ed01c;
        case 0x3ed020u: goto label_3ed020;
        case 0x3ed024u: goto label_3ed024;
        case 0x3ed028u: goto label_3ed028;
        case 0x3ed02cu: goto label_3ed02c;
        case 0x3ed030u: goto label_3ed030;
        case 0x3ed034u: goto label_3ed034;
        case 0x3ed038u: goto label_3ed038;
        case 0x3ed03cu: goto label_3ed03c;
        case 0x3ed040u: goto label_3ed040;
        case 0x3ed044u: goto label_3ed044;
        case 0x3ed048u: goto label_3ed048;
        case 0x3ed04cu: goto label_3ed04c;
        case 0x3ed050u: goto label_3ed050;
        case 0x3ed054u: goto label_3ed054;
        case 0x3ed058u: goto label_3ed058;
        case 0x3ed05cu: goto label_3ed05c;
        case 0x3ed060u: goto label_3ed060;
        case 0x3ed064u: goto label_3ed064;
        case 0x3ed068u: goto label_3ed068;
        case 0x3ed06cu: goto label_3ed06c;
        case 0x3ed070u: goto label_3ed070;
        case 0x3ed074u: goto label_3ed074;
        case 0x3ed078u: goto label_3ed078;
        case 0x3ed07cu: goto label_3ed07c;
        case 0x3ed080u: goto label_3ed080;
        case 0x3ed084u: goto label_3ed084;
        case 0x3ed088u: goto label_3ed088;
        case 0x3ed08cu: goto label_3ed08c;
        case 0x3ed090u: goto label_3ed090;
        case 0x3ed094u: goto label_3ed094;
        case 0x3ed098u: goto label_3ed098;
        case 0x3ed09cu: goto label_3ed09c;
        case 0x3ed0a0u: goto label_3ed0a0;
        case 0x3ed0a4u: goto label_3ed0a4;
        case 0x3ed0a8u: goto label_3ed0a8;
        case 0x3ed0acu: goto label_3ed0ac;
        case 0x3ed0b0u: goto label_3ed0b0;
        case 0x3ed0b4u: goto label_3ed0b4;
        case 0x3ed0b8u: goto label_3ed0b8;
        case 0x3ed0bcu: goto label_3ed0bc;
        case 0x3ed0c0u: goto label_3ed0c0;
        case 0x3ed0c4u: goto label_3ed0c4;
        case 0x3ed0c8u: goto label_3ed0c8;
        case 0x3ed0ccu: goto label_3ed0cc;
        case 0x3ed0d0u: goto label_3ed0d0;
        case 0x3ed0d4u: goto label_3ed0d4;
        case 0x3ed0d8u: goto label_3ed0d8;
        case 0x3ed0dcu: goto label_3ed0dc;
        case 0x3ed0e0u: goto label_3ed0e0;
        case 0x3ed0e4u: goto label_3ed0e4;
        case 0x3ed0e8u: goto label_3ed0e8;
        case 0x3ed0ecu: goto label_3ed0ec;
        case 0x3ed0f0u: goto label_3ed0f0;
        case 0x3ed0f4u: goto label_3ed0f4;
        case 0x3ed0f8u: goto label_3ed0f8;
        case 0x3ed0fcu: goto label_3ed0fc;
        case 0x3ed100u: goto label_3ed100;
        case 0x3ed104u: goto label_3ed104;
        case 0x3ed108u: goto label_3ed108;
        case 0x3ed10cu: goto label_3ed10c;
        case 0x3ed110u: goto label_3ed110;
        case 0x3ed114u: goto label_3ed114;
        case 0x3ed118u: goto label_3ed118;
        case 0x3ed11cu: goto label_3ed11c;
        case 0x3ed120u: goto label_3ed120;
        case 0x3ed124u: goto label_3ed124;
        case 0x3ed128u: goto label_3ed128;
        case 0x3ed12cu: goto label_3ed12c;
        case 0x3ed130u: goto label_3ed130;
        case 0x3ed134u: goto label_3ed134;
        case 0x3ed138u: goto label_3ed138;
        case 0x3ed13cu: goto label_3ed13c;
        case 0x3ed140u: goto label_3ed140;
        case 0x3ed144u: goto label_3ed144;
        case 0x3ed148u: goto label_3ed148;
        case 0x3ed14cu: goto label_3ed14c;
        case 0x3ed150u: goto label_3ed150;
        case 0x3ed154u: goto label_3ed154;
        case 0x3ed158u: goto label_3ed158;
        case 0x3ed15cu: goto label_3ed15c;
        case 0x3ed160u: goto label_3ed160;
        case 0x3ed164u: goto label_3ed164;
        case 0x3ed168u: goto label_3ed168;
        case 0x3ed16cu: goto label_3ed16c;
        case 0x3ed170u: goto label_3ed170;
        case 0x3ed174u: goto label_3ed174;
        case 0x3ed178u: goto label_3ed178;
        case 0x3ed17cu: goto label_3ed17c;
        case 0x3ed180u: goto label_3ed180;
        case 0x3ed184u: goto label_3ed184;
        case 0x3ed188u: goto label_3ed188;
        case 0x3ed18cu: goto label_3ed18c;
        case 0x3ed190u: goto label_3ed190;
        case 0x3ed194u: goto label_3ed194;
        case 0x3ed198u: goto label_3ed198;
        case 0x3ed19cu: goto label_3ed19c;
        case 0x3ed1a0u: goto label_3ed1a0;
        case 0x3ed1a4u: goto label_3ed1a4;
        case 0x3ed1a8u: goto label_3ed1a8;
        case 0x3ed1acu: goto label_3ed1ac;
        case 0x3ed1b0u: goto label_3ed1b0;
        case 0x3ed1b4u: goto label_3ed1b4;
        case 0x3ed1b8u: goto label_3ed1b8;
        case 0x3ed1bcu: goto label_3ed1bc;
        case 0x3ed1c0u: goto label_3ed1c0;
        case 0x3ed1c4u: goto label_3ed1c4;
        case 0x3ed1c8u: goto label_3ed1c8;
        case 0x3ed1ccu: goto label_3ed1cc;
        case 0x3ed1d0u: goto label_3ed1d0;
        case 0x3ed1d4u: goto label_3ed1d4;
        case 0x3ed1d8u: goto label_3ed1d8;
        case 0x3ed1dcu: goto label_3ed1dc;
        case 0x3ed1e0u: goto label_3ed1e0;
        case 0x3ed1e4u: goto label_3ed1e4;
        case 0x3ed1e8u: goto label_3ed1e8;
        case 0x3ed1ecu: goto label_3ed1ec;
        case 0x3ed1f0u: goto label_3ed1f0;
        case 0x3ed1f4u: goto label_3ed1f4;
        case 0x3ed1f8u: goto label_3ed1f8;
        case 0x3ed1fcu: goto label_3ed1fc;
        case 0x3ed200u: goto label_3ed200;
        case 0x3ed204u: goto label_3ed204;
        case 0x3ed208u: goto label_3ed208;
        case 0x3ed20cu: goto label_3ed20c;
        case 0x3ed210u: goto label_3ed210;
        case 0x3ed214u: goto label_3ed214;
        case 0x3ed218u: goto label_3ed218;
        case 0x3ed21cu: goto label_3ed21c;
        case 0x3ed220u: goto label_3ed220;
        case 0x3ed224u: goto label_3ed224;
        case 0x3ed228u: goto label_3ed228;
        case 0x3ed22cu: goto label_3ed22c;
        case 0x3ed230u: goto label_3ed230;
        case 0x3ed234u: goto label_3ed234;
        case 0x3ed238u: goto label_3ed238;
        case 0x3ed23cu: goto label_3ed23c;
        case 0x3ed240u: goto label_3ed240;
        case 0x3ed244u: goto label_3ed244;
        case 0x3ed248u: goto label_3ed248;
        case 0x3ed24cu: goto label_3ed24c;
        case 0x3ed250u: goto label_3ed250;
        case 0x3ed254u: goto label_3ed254;
        case 0x3ed258u: goto label_3ed258;
        case 0x3ed25cu: goto label_3ed25c;
        case 0x3ed260u: goto label_3ed260;
        case 0x3ed264u: goto label_3ed264;
        case 0x3ed268u: goto label_3ed268;
        case 0x3ed26cu: goto label_3ed26c;
        case 0x3ed270u: goto label_3ed270;
        case 0x3ed274u: goto label_3ed274;
        case 0x3ed278u: goto label_3ed278;
        case 0x3ed27cu: goto label_3ed27c;
        case 0x3ed280u: goto label_3ed280;
        case 0x3ed284u: goto label_3ed284;
        case 0x3ed288u: goto label_3ed288;
        case 0x3ed28cu: goto label_3ed28c;
        case 0x3ed290u: goto label_3ed290;
        case 0x3ed294u: goto label_3ed294;
        case 0x3ed298u: goto label_3ed298;
        case 0x3ed29cu: goto label_3ed29c;
        case 0x3ed2a0u: goto label_3ed2a0;
        case 0x3ed2a4u: goto label_3ed2a4;
        case 0x3ed2a8u: goto label_3ed2a8;
        case 0x3ed2acu: goto label_3ed2ac;
        case 0x3ed2b0u: goto label_3ed2b0;
        case 0x3ed2b4u: goto label_3ed2b4;
        case 0x3ed2b8u: goto label_3ed2b8;
        case 0x3ed2bcu: goto label_3ed2bc;
        case 0x3ed2c0u: goto label_3ed2c0;
        case 0x3ed2c4u: goto label_3ed2c4;
        case 0x3ed2c8u: goto label_3ed2c8;
        case 0x3ed2ccu: goto label_3ed2cc;
        case 0x3ed2d0u: goto label_3ed2d0;
        case 0x3ed2d4u: goto label_3ed2d4;
        case 0x3ed2d8u: goto label_3ed2d8;
        case 0x3ed2dcu: goto label_3ed2dc;
        case 0x3ed2e0u: goto label_3ed2e0;
        case 0x3ed2e4u: goto label_3ed2e4;
        case 0x3ed2e8u: goto label_3ed2e8;
        case 0x3ed2ecu: goto label_3ed2ec;
        case 0x3ed2f0u: goto label_3ed2f0;
        case 0x3ed2f4u: goto label_3ed2f4;
        case 0x3ed2f8u: goto label_3ed2f8;
        case 0x3ed2fcu: goto label_3ed2fc;
        case 0x3ed300u: goto label_3ed300;
        case 0x3ed304u: goto label_3ed304;
        case 0x3ed308u: goto label_3ed308;
        case 0x3ed30cu: goto label_3ed30c;
        case 0x3ed310u: goto label_3ed310;
        case 0x3ed314u: goto label_3ed314;
        case 0x3ed318u: goto label_3ed318;
        case 0x3ed31cu: goto label_3ed31c;
        case 0x3ed320u: goto label_3ed320;
        case 0x3ed324u: goto label_3ed324;
        case 0x3ed328u: goto label_3ed328;
        case 0x3ed32cu: goto label_3ed32c;
        case 0x3ed330u: goto label_3ed330;
        case 0x3ed334u: goto label_3ed334;
        case 0x3ed338u: goto label_3ed338;
        case 0x3ed33cu: goto label_3ed33c;
        case 0x3ed340u: goto label_3ed340;
        case 0x3ed344u: goto label_3ed344;
        case 0x3ed348u: goto label_3ed348;
        case 0x3ed34cu: goto label_3ed34c;
        case 0x3ed350u: goto label_3ed350;
        case 0x3ed354u: goto label_3ed354;
        case 0x3ed358u: goto label_3ed358;
        case 0x3ed35cu: goto label_3ed35c;
        case 0x3ed360u: goto label_3ed360;
        case 0x3ed364u: goto label_3ed364;
        case 0x3ed368u: goto label_3ed368;
        case 0x3ed36cu: goto label_3ed36c;
        case 0x3ed370u: goto label_3ed370;
        case 0x3ed374u: goto label_3ed374;
        case 0x3ed378u: goto label_3ed378;
        case 0x3ed37cu: goto label_3ed37c;
        case 0x3ed380u: goto label_3ed380;
        case 0x3ed384u: goto label_3ed384;
        case 0x3ed388u: goto label_3ed388;
        case 0x3ed38cu: goto label_3ed38c;
        case 0x3ed390u: goto label_3ed390;
        case 0x3ed394u: goto label_3ed394;
        case 0x3ed398u: goto label_3ed398;
        case 0x3ed39cu: goto label_3ed39c;
        case 0x3ed3a0u: goto label_3ed3a0;
        case 0x3ed3a4u: goto label_3ed3a4;
        case 0x3ed3a8u: goto label_3ed3a8;
        case 0x3ed3acu: goto label_3ed3ac;
        case 0x3ed3b0u: goto label_3ed3b0;
        case 0x3ed3b4u: goto label_3ed3b4;
        case 0x3ed3b8u: goto label_3ed3b8;
        case 0x3ed3bcu: goto label_3ed3bc;
        case 0x3ed3c0u: goto label_3ed3c0;
        case 0x3ed3c4u: goto label_3ed3c4;
        default: break;
    }

    ctx->pc = 0x3ed008u;

label_3ed008:
    // 0x3ed008: 0x27bdfa40  addiu       $sp, $sp, -0x5C0
    ctx->pc = 0x3ed008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965824));
label_3ed00c:
    // 0x3ed00c: 0x7fb00580  sq          $s0, 0x580($sp)
    ctx->pc = 0x3ed00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1408), GPR_VEC(ctx, 16));
label_3ed010:
    // 0x3ed010: 0x7fb10570  sq          $s1, 0x570($sp)
    ctx->pc = 0x3ed010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1392), GPR_VEC(ctx, 17));
label_3ed014:
    // 0x3ed014: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ed014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ed018:
    // 0x3ed018: 0x7fb20560  sq          $s2, 0x560($sp)
    ctx->pc = 0x3ed018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1376), GPR_VEC(ctx, 18));
label_3ed01c:
    // 0x3ed01c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ed01cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ed020:
    // 0x3ed020: 0x7fb30550  sq          $s3, 0x550($sp)
    ctx->pc = 0x3ed020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1360), GPR_VEC(ctx, 19));
label_3ed024:
    // 0x3ed024: 0x7fb40540  sq          $s4, 0x540($sp)
    ctx->pc = 0x3ed024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), GPR_VEC(ctx, 20));
label_3ed028:
    // 0x3ed028: 0x7fb50530  sq          $s5, 0x530($sp)
    ctx->pc = 0x3ed028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), GPR_VEC(ctx, 21));
label_3ed02c:
    // 0x3ed02c: 0x7fb60520  sq          $s6, 0x520($sp)
    ctx->pc = 0x3ed02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 22));
label_3ed030:
    // 0x3ed030: 0x7fb70510  sq          $s7, 0x510($sp)
    ctx->pc = 0x3ed030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 23));
label_3ed034:
    // 0x3ed034: 0x7fbe0500  sq          $fp, 0x500($sp)
    ctx->pc = 0x3ed034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 30));
label_3ed038:
    // 0x3ed038: 0xffbf04f0  sd          $ra, 0x4F0($sp)
    ctx->pc = 0x3ed038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1264), GPR_U64(ctx, 31));
label_3ed03c:
    // 0x3ed03c: 0xe7b905b8  swc1        $f25, 0x5B8($sp)
    ctx->pc = 0x3ed03cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1464), bits); }
label_3ed040:
    // 0x3ed040: 0xe7b805b0  swc1        $f24, 0x5B0($sp)
    ctx->pc = 0x3ed040u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1456), bits); }
label_3ed044:
    // 0x3ed044: 0xe7b705a8  swc1        $f23, 0x5A8($sp)
    ctx->pc = 0x3ed044u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1448), bits); }
label_3ed048:
    // 0x3ed048: 0xe7b605a0  swc1        $f22, 0x5A0($sp)
    ctx->pc = 0x3ed048u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1440), bits); }
label_3ed04c:
    // 0x3ed04c: 0xe7b50598  swc1        $f21, 0x598($sp)
    ctx->pc = 0x3ed04cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1432), bits); }
label_3ed050:
    // 0x3ed050: 0xe7b40590  swc1        $f20, 0x590($sp)
    ctx->pc = 0x3ed050u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1424), bits); }
label_3ed054:
    // 0x3ed054: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ed054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ed058:
    // 0x3ed058: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ed058u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ed05c:
    // 0x3ed05c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ed05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ed060:
    // 0x3ed060: 0x40f809  jalr        $v0
label_3ed064:
    if (ctx->pc == 0x3ED064u) {
        ctx->pc = 0x3ED064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED060u;
        // 0x3ed064: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED068u;
        goto label_3ed068;
    }
    ctx->pc = 0x3ED060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ED068u);
        ctx->pc = 0x3ED064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED060u;
        // 0x3ed064: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED060u, 0x3ED068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ED068u;
label_3ed068:
    // 0x3ed068: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x3ed068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3ed06c:
    // 0x3ed06c: 0x160300c4  bne         $s0, $v1, . + 4 + (0xC4 << 2)
label_3ed070:
    if (ctx->pc == 0x3ED070u) {
        ctx->pc = 0x3ED070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED06Cu;
        // 0x3ed070: 0x7bb00580  lq          $s0, 0x580($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1408)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED074u;
        goto label_3ed074;
    }
    ctx->pc = 0x3ED06Cu;
    {
        const bool branch_taken_0x3ed06c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x3ED070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED06Cu;
        // 0x3ed070: 0x7bb00580  lq          $s0, 0x580($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed06c) {
            ctx->pc = 0x3ED380u;
            goto label_3ed380;
        }
    }
    ctx->pc = 0x3ED074u;
label_3ed074:
    // 0x3ed074: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x3ed074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ed078:
    // 0x3ed078: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ed078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ed07c:
    // 0x3ed07c: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x3ed07cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
label_3ed080:
    // 0x3ed080: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3ed080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ed084:
    // 0x3ed084: 0xac510024  sw          $s1, 0x24($v0)
    ctx->pc = 0x3ed084u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 17));
label_3ed088:
    // 0x3ed088: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x3ed088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_3ed08c:
    // 0x3ed08c: 0xafb10014  sw          $s1, 0x14($sp)
    ctx->pc = 0x3ed08cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 17));
label_3ed090:
    // 0x3ed090: 0xa3a00021  sb          $zero, 0x21($sp)
    ctx->pc = 0x3ed090u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 0));
label_3ed094:
    // 0x3ed094: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ed094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ed098:
    // 0x3ed098: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x3ed098u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_3ed09c:
    // 0x3ed09c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x3ed09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_3ed0a0:
    // 0x3ed0a0: 0x40f809  jalr        $v0
label_3ed0a4:
    if (ctx->pc == 0x3ED0A4u) {
        ctx->pc = 0x3ED0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED0A0u;
        // 0x3ed0a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED0A8u;
        goto label_3ed0a8;
    }
    ctx->pc = 0x3ED0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ED0A8u);
        ctx->pc = 0x3ED0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED0A0u;
        // 0x3ed0a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED0A0u, 0x3ED0A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ED0A8u;
label_3ed0a8:
    // 0x3ed0a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ed0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ed0ac:
    // 0x3ed0ac: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x3ed0acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_3ed0b0:
    // 0x3ed0b0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3ed0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3ed0b4:
    // 0x3ed0b4: 0x40f809  jalr        $v0
label_3ed0b8:
    if (ctx->pc == 0x3ED0B8u) {
        ctx->pc = 0x3ED0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED0B4u;
        // 0x3ed0b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED0BCu;
        goto label_3ed0bc;
    }
    ctx->pc = 0x3ED0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ED0BCu);
        ctx->pc = 0x3ED0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED0B4u;
        // 0x3ed0b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED0B4u, 0x3ED0BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ED0BCu;
label_3ed0bc:
    // 0x3ed0bc: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3ed0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3ed0c0:
    // 0x3ed0c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ed0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ed0c4:
    // 0x3ed0c4: 0xc10c313  jal         func_430C4C
label_3ed0c8:
    if (ctx->pc == 0x3ED0C8u) {
        ctx->pc = 0x3ED0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED0C4u;
        // 0x3ed0c8: 0x24a55c48  addiu       $a1, $a1, 0x5C48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED0CCu;
        goto label_3ed0cc;
    }
    ctx->pc = 0x3ED0C4u;
    SET_GPR_U32(ctx, 31, 0x3ED0CCu);
    ctx->pc = 0x3ED0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED0C4u;
    // 0x3ed0c8: 0x24a55c48  addiu       $a1, $a1, 0x5C48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x3ED0C4u, 0x3ED0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED0CCu;
label_3ed0cc:
    // 0x3ed0cc: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_3ed0d0:
    if (ctx->pc == 0x3ED0D0u) {
        ctx->pc = 0x3ED0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED0CCu;
        // 0x3ed0d0: 0x7a220010  lq          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED0D4u;
        goto label_3ed0d4;
    }
    ctx->pc = 0x3ED0CCu;
    {
        const bool branch_taken_0x3ed0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed0cc) {
            ctx->pc = 0x3ED0D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ED0CCu;
            // 0x3ed0d0: 0x7a220010  lq          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ED100u;
            goto label_3ed100;
        }
    }
    ctx->pc = 0x3ED0D4u;
label_3ed0d4:
    // 0x3ed0d4: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x3ed0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_3ed0d8:
    // 0x3ed0d8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3ed0d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3ed0dc:
    // 0x3ed0dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ed0dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ed0e0:
    // 0x3ed0e0: 0xc0e9182  jal         func_3A4608
label_3ed0e4:
    if (ctx->pc == 0x3ED0E4u) {
        ctx->pc = 0x3ED0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED0E0u;
        // 0x3ed0e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED0E8u;
        goto label_3ed0e8;
    }
    ctx->pc = 0x3ED0E0u;
    SET_GPR_U32(ctx, 31, 0x3ED0E8u);
    ctx->pc = 0x3ED0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED0E0u;
    // 0x3ed0e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4608u, 0x3ED0E0u, 0x3ED0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED0E8u;
label_3ed0e8:
    // 0x3ed0e8: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x3ed0e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_3ed0ec:
    // 0x3ed0ec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3ed0ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3ed0f0:
    // 0x3ed0f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ed0f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ed0f4:
    // 0x3ed0f4: 0xc0e919a  jal         func_3A4668
label_3ed0f8:
    if (ctx->pc == 0x3ED0F8u) {
        ctx->pc = 0x3ED0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED0F4u;
        // 0x3ed0f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED0FCu;
        goto label_3ed0fc;
    }
    ctx->pc = 0x3ED0F4u;
    SET_GPR_U32(ctx, 31, 0x3ED0FCu);
    ctx->pc = 0x3ED0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED0F4u;
    // 0x3ed0f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4668u, 0x3ED0F4u, 0x3ED0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED0FCu;
label_3ed0fc:
    // 0x3ed0fc: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x3ed0fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3ed100:
    // 0x3ed100: 0x27b00490  addiu       $s0, $sp, 0x490
    ctx->pc = 0x3ed100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3ed104:
    // 0x3ed104: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ed104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ed108:
    // 0x3ed108: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3ed108u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3ed10c:
    // 0x3ed10c: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x3ed10cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
label_3ed110:
    // 0x3ed110: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3ed110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3ed114:
    // 0x3ed114: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3ed114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3ed118:
    // 0x3ed118: 0x27b60050  addiu       $s6, $sp, 0x50
    ctx->pc = 0x3ed118u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3ed11c:
    // 0x3ed11c: 0xafa00490  sw          $zero, 0x490($sp)
    ctx->pc = 0x3ed11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 0));
label_3ed120:
    // 0x3ed120: 0x27b20460  addiu       $s2, $sp, 0x460
    ctx->pc = 0x3ed120u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3ed124:
    // 0x3ed124: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3ed124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3ed128:
    // 0x3ed128: 0x27b10470  addiu       $s1, $sp, 0x470
    ctx->pc = 0x3ed128u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3ed12c:
    // 0x3ed12c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3ed12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3ed130:
    // 0x3ed130: 0x27b504a0  addiu       $s5, $sp, 0x4A0
    ctx->pc = 0x3ed130u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_3ed134:
    // 0x3ed134: 0xafa00494  sw          $zero, 0x494($sp)
    ctx->pc = 0x3ed134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1172), GPR_U32(ctx, 0));
label_3ed138:
    // 0x3ed138: 0x27b304b0  addiu       $s3, $sp, 0x4B0
    ctx->pc = 0x3ed138u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_3ed13c:
    // 0x3ed13c: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x3ed13cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3ed140:
    // 0x3ed140: 0x3463d8ff  ori         $v1, $v1, 0xD8FF
    ctx->pc = 0x3ed140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55551);
label_3ed144:
    // 0x3ed144: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3ed144u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3ed148:
    // 0x3ed148: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x3ed148u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
label_3ed14c:
    // 0x3ed14c: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x3ed14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_3ed150:
    // 0x3ed150: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3ed150u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3ed154:
    // 0x3ed154: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ed154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ed158:
    // 0x3ed158: 0x26945c10  addiu       $s4, $s4, 0x5C10
    ctx->pc = 0x3ed158u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 23568));
label_3ed15c:
    // 0x3ed15c: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3ed15cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3ed160:
    // 0x3ed160: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3ed160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ed164:
    // 0x3ed164: 0xafa30490  sw          $v1, 0x490($sp)
    ctx->pc = 0x3ed164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 3));
label_3ed168:
    // 0x3ed168: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3ed168u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ed16c:
    // 0x3ed16c: 0x7fa20470  sq          $v0, 0x470($sp)
    ctx->pc = 0x3ed16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
label_3ed170:
    // 0x3ed170: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3ed170u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ed174:
    // 0x3ed174: 0x7fa20480  sq          $v0, 0x480($sp)
    ctx->pc = 0x3ed174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
label_3ed178:
    // 0x3ed178: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3ed178u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ed17c:
    // 0x3ed17c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ed17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ed180:
    // 0x3ed180: 0xe7a004a0  swc1        $f0, 0x4A0($sp)
    ctx->pc = 0x3ed180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1184), bits); }
label_3ed184:
    // 0x3ed184: 0xafa204b0  sw          $v0, 0x4B0($sp)
    ctx->pc = 0x3ed184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 2));
label_3ed188:
    // 0x3ed188: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3ed188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ed18c:
    // 0x3ed18c: 0x3c1effe2  lui         $fp, 0xFFE2
    ctx->pc = 0x3ed18cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65506 << 16));
label_3ed190:
    // 0x3ed190: 0xc0ea004  jal         func_3A8010
label_3ed194:
    if (ctx->pc == 0x3ED194u) {
        ctx->pc = 0x3ED194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED190u;
        // 0x3ed194: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED198u;
        goto label_3ed198;
    }
    ctx->pc = 0x3ED190u;
    SET_GPR_U32(ctx, 31, 0x3ED198u);
    ctx->pc = 0x3ED194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED190u;
    // 0x3ed194: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8010u, 0x3ED190u, 0x3ED198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED198u;
label_3ed198:
    // 0x3ed198: 0x3c170001  lui         $s7, 0x1
    ctx->pc = 0x3ed198u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)1 << 16));
label_3ed19c:
    // 0x3ed19c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ed19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ed1a0:
    // 0x3ed1a0: 0xc0f15bc  jal         func_3C56F0
label_3ed1a4:
    if (ctx->pc == 0x3ED1A4u) {
        ctx->pc = 0x3ED1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED1A0u;
        // 0x3ed1a4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED1A8u;
        goto label_3ed1a8;
    }
    ctx->pc = 0x3ED1A0u;
    SET_GPR_U32(ctx, 31, 0x3ED1A8u);
    ctx->pc = 0x3ED1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED1A0u;
    // 0x3ed1a4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3ED1A0u, 0x3ED1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED1A8u;
label_3ed1a8:
    // 0x3ed1a8: 0x3c01bf4c  lui         $at, 0xBF4C
    ctx->pc = 0x3ed1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48972 << 16));
label_3ed1ac:
    // 0x3ed1ac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3ed1acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3ed1b0:
    // 0x3ed1b0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3ed1b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3ed1b4:
    // 0x3ed1b4: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3ed1b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ed1b8:
    // 0x3ed1b8: 0x3c03ffe2  lui         $v1, 0xFFE2
    ctx->pc = 0x3ed1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65506 << 16));
label_3ed1bc:
    // 0x3ed1bc: 0xafa00490  sw          $zero, 0x490($sp)
    ctx->pc = 0x3ed1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 0));
label_3ed1c0:
    // 0x3ed1c0: 0x3463a790  ori         $v1, $v1, 0xA790
    ctx->pc = 0x3ed1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)42896);
label_3ed1c4:
    // 0x3ed1c4: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3ed1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3ed1c8:
    // 0x3ed1c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3ed1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ed1cc:
    // 0x3ed1cc: 0xafa00494  sw          $zero, 0x494($sp)
    ctx->pc = 0x3ed1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1172), GPR_U32(ctx, 0));
label_3ed1d0:
    // 0x3ed1d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3ed1d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ed1d4:
    // 0x3ed1d4: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x3ed1d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3ed1d8:
    // 0x3ed1d8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3ed1d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ed1dc:
    // 0x3ed1dc: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3ed1dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3ed1e0:
    // 0x3ed1e0: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3ed1e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ed1e4:
    // 0x3ed1e4: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x3ed1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_3ed1e8:
    // 0x3ed1e8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3ed1e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3ed1ec:
    // 0x3ed1ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ed1ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ed1f0:
    // 0x3ed1f0: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3ed1f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ed1f4:
    // 0x3ed1f4: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3ed1f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3ed1f8:
    // 0x3ed1f8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3ed1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3ed1fc:
    // 0x3ed1fc: 0xafa30490  sw          $v1, 0x490($sp)
    ctx->pc = 0x3ed1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 3));
label_3ed200:
    // 0x3ed200: 0x4600a606  mov.s       $f24, $f20
    ctx->pc = 0x3ed200u;
    ctx->f[24] = FPU_MOV_S(ctx->f[20]);
label_3ed204:
    // 0x3ed204: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ed204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ed208:
    // 0x3ed208: 0xe7a004a0  swc1        $f0, 0x4A0($sp)
    ctx->pc = 0x3ed208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1184), bits); }
label_3ed20c:
    // 0x3ed20c: 0x7fa20470  sq          $v0, 0x470($sp)
    ctx->pc = 0x3ed20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
label_3ed210:
    // 0x3ed210: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ed210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ed214:
    // 0x3ed214: 0xafa304b0  sw          $v1, 0x4B0($sp)
    ctx->pc = 0x3ed214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 3));
label_3ed218:
    // 0x3ed218: 0x3c150058  lui         $s5, 0x58
    ctx->pc = 0x3ed218u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)88 << 16));
label_3ed21c:
    // 0x3ed21c: 0x7fa20480  sq          $v0, 0x480($sp)
    ctx->pc = 0x3ed21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
label_3ed220:
    // 0x3ed220: 0xc0ea004  jal         func_3A8010
label_3ed224:
    if (ctx->pc == 0x3ED224u) {
        ctx->pc = 0x3ED224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED220u;
        // 0x3ed224: 0x37dea7ff  ori         $fp, $fp, 0xA7FF (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)43007);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED228u;
        goto label_3ed228;
    }
    ctx->pc = 0x3ED220u;
    SET_GPR_U32(ctx, 31, 0x3ED228u);
    ctx->pc = 0x3ED224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED220u;
    // 0x3ed224: 0x37dea7ff  ori         $fp, $fp, 0xA7FF (Delay Slot)
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)43007);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8010u, 0x3ED220u, 0x3ED228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED228u;
label_3ed228:
    // 0x3ed228: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x3ed228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_3ed22c:
    // 0x3ed22c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3ed22cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3ed230:
    // 0x3ed230: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3ed230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3ed234:
    // 0x3ed234: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ed234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ed238:
    // 0x3ed238: 0xc0f15bc  jal         func_3C56F0
label_3ed23c:
    if (ctx->pc == 0x3ED23Cu) {
        ctx->pc = 0x3ED23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED238u;
        // 0x3ed23c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED240u;
        goto label_3ed240;
    }
    ctx->pc = 0x3ED238u;
    SET_GPR_U32(ctx, 31, 0x3ED240u);
    ctx->pc = 0x3ED23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED238u;
    // 0x3ed23c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3ED238u, 0x3ED240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED240u;
label_3ed240:
    // 0x3ed240: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3ed240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3ed244:
    // 0x3ed244: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3ed244u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3ed248:
    // 0x3ed248: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3ed248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3ed24c:
    // 0x3ed24c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3ed24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3ed250:
    // 0x3ed250: 0x36f70018  ori         $s7, $s7, 0x18
    ctx->pc = 0x3ed250u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)24);
label_3ed254:
    // 0x3ed254: 0x27b404c0  addiu       $s4, $sp, 0x4C0
    ctx->pc = 0x3ed254u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_3ed258:
    // 0x3ed258: 0x27b304d0  addiu       $s3, $sp, 0x4D0
    ctx->pc = 0x3ed258u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
label_3ed25c:
    // 0x3ed25c: 0x27b204e0  addiu       $s2, $sp, 0x4E0
    ctx->pc = 0x3ed25cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
label_3ed260:
    // 0x3ed260: 0x2450b8b8  addiu       $s0, $v0, -0x4748
    ctx->pc = 0x3ed260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3ed264:
    // 0x3ed264: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3ed264u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ed268:
    // 0x3ed268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ed26c:
    // 0x3ed26c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3ed26cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3ed270:
    // 0x3ed270: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3ed270u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3ed274:
    // 0x3ed274: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3ed274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3ed278:
    // 0x3ed278: 0xc0cd518  jal         func_335460
label_3ed27c:
    if (ctx->pc == 0x3ED27Cu) {
        ctx->pc = 0x3ED27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED278u;
        // 0x3ed27c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED280u;
        goto label_3ed280;
    }
    ctx->pc = 0x3ED278u;
    SET_GPR_U32(ctx, 31, 0x3ED280u);
    ctx->pc = 0x3ED27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED278u;
    // 0x3ed27c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3ED278u, 0x3ED280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED280u;
label_3ed280:
    // 0x3ed280: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3ed280u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3ed284:
    // 0x3ed284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ed288:
    // 0x3ed288: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3ed288u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3ed28c:
    // 0x3ed28c: 0xc0cd518  jal         func_335460
label_3ed290:
    if (ctx->pc == 0x3ED290u) {
        ctx->pc = 0x3ED290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED28Cu;
        // 0x3ed290: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED294u;
        goto label_3ed294;
    }
    ctx->pc = 0x3ED28Cu;
    SET_GPR_U32(ctx, 31, 0x3ED294u);
    ctx->pc = 0x3ED290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED28Cu;
    // 0x3ed290: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3ED28Cu, 0x3ED294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED294u;
label_3ed294:
    // 0x3ed294: 0x3c01c040  lui         $at, 0xC040
    ctx->pc = 0x3ed294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49216 << 16));
label_3ed298:
    // 0x3ed298: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ed298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ed29c:
    // 0x3ed29c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3ed29cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3ed2a0:
    // 0x3ed2a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3ed2a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3ed2a4:
    // 0x3ed2a4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ed2a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ed2a8:
    // 0x3ed2a8: 0xc0cd518  jal         func_335460
label_3ed2ac:
    if (ctx->pc == 0x3ED2ACu) {
        ctx->pc = 0x3ED2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED2A8u;
        // 0x3ed2ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED2B0u;
        goto label_3ed2b0;
    }
    ctx->pc = 0x3ED2A8u;
    SET_GPR_U32(ctx, 31, 0x3ED2B0u);
    ctx->pc = 0x3ED2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED2A8u;
    // 0x3ed2ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3ED2A8u, 0x3ED2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED2B0u;
label_3ed2b0:
    // 0x3ed2b0: 0xe7b50490  swc1        $f21, 0x490($sp)
    ctx->pc = 0x3ed2b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1168), bits); }
label_3ed2b4:
    // 0x3ed2b4: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x3ed2b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_3ed2b8:
    // 0x3ed2b8: 0xe7b40494  swc1        $f20, 0x494($sp)
    ctx->pc = 0x3ed2b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1172), bits); }
label_3ed2bc:
    // 0x3ed2bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ed2c0:
    // 0x3ed2c0: 0xe7a00498  swc1        $f0, 0x498($sp)
    ctx->pc = 0x3ed2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1176), bits); }
label_3ed2c4:
    // 0x3ed2c4: 0xe7b8049c  swc1        $f24, 0x49C($sp)
    ctx->pc = 0x3ed2c4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1180), bits); }
label_3ed2c8:
    // 0x3ed2c8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x3ed2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_3ed2cc:
    // 0x3ed2cc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ed2ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ed2d0:
    // 0x3ed2d0: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3ed2d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3ed2d4:
    // 0x3ed2d4: 0x7fa20470  sq          $v0, 0x470($sp)
    ctx->pc = 0x3ed2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
label_3ed2d8:
    // 0x3ed2d8: 0xc0cd518  jal         func_335460
label_3ed2dc:
    if (ctx->pc == 0x3ED2DCu) {
        ctx->pc = 0x3ED2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED2D8u;
        // 0x3ed2dc: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED2E0u;
        goto label_3ed2e0;
    }
    ctx->pc = 0x3ED2D8u;
    SET_GPR_U32(ctx, 31, 0x3ED2E0u);
    ctx->pc = 0x3ED2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED2D8u;
    // 0x3ed2dc: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3ED2D8u, 0x3ED2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED2E0u;
label_3ed2e0:
    // 0x3ed2e0: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x3ed2e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
label_3ed2e4:
    // 0x3ed2e4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3ed2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3ed2e8:
    // 0x3ed2e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ed2ec:
    // 0x3ed2ec: 0xc0cd4ee  jal         func_3353B8
label_3ed2f0:
    if (ctx->pc == 0x3ED2F0u) {
        ctx->pc = 0x3ED2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED2ECu;
        // 0x3ed2f0: 0xe7a00490  swc1        $f0, 0x490($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1168), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED2F4u;
        goto label_3ed2f4;
    }
    ctx->pc = 0x3ED2ECu;
    SET_GPR_U32(ctx, 31, 0x3ED2F4u);
    ctx->pc = 0x3ED2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED2ECu;
    // 0x3ed2f0: 0xe7a00490  swc1        $f0, 0x490($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3ED2ECu, 0x3ED2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED2F4u;
label_3ed2f4:
    // 0x3ed2f4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3ed2f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_3ed2f8:
    // 0x3ed2f8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3ed2f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3ed2fc:
    // 0x3ed2fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ed2fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ed300:
    // 0x3ed300: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x3ed300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_3ed304:
    // 0x3ed304: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x3ed304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_3ed308:
    // 0x3ed308: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3ed308u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3ed30c:
    // 0x3ed30c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ed30cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ed310:
    // 0x3ed310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ed314:
    // 0x3ed314: 0xc0cd518  jal         func_335460
label_3ed318:
    if (ctx->pc == 0x3ED318u) {
        ctx->pc = 0x3ED318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED314u;
        // 0x3ed318: 0xafa204a0  sw          $v0, 0x4A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED31Cu;
        goto label_3ed31c;
    }
    ctx->pc = 0x3ED314u;
    SET_GPR_U32(ctx, 31, 0x3ED31Cu);
    ctx->pc = 0x3ED318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED314u;
    // 0x3ed318: 0xafa204a0  sw          $v0, 0x4A0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3ED314u, 0x3ED31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED31Cu;
label_3ed31c:
    // 0x3ed31c: 0xe7a004b0  swc1        $f0, 0x4B0($sp)
    ctx->pc = 0x3ed31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1200), bits); }
label_3ed320:
    // 0x3ed320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ed324:
    // 0x3ed324: 0xafbe04c0  sw          $fp, 0x4C0($sp)
    ctx->pc = 0x3ed324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 30));
label_3ed328:
    // 0x3ed328: 0xc0cd4ee  jal         func_3353B8
label_3ed32c:
    if (ctx->pc == 0x3ED32Cu) {
        ctx->pc = 0x3ED32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED328u;
        // 0x3ed32c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED330u;
        goto label_3ed330;
    }
    ctx->pc = 0x3ED328u;
    SET_GPR_U32(ctx, 31, 0x3ED330u);
    ctx->pc = 0x3ED32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED328u;
    // 0x3ed32c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3ED328u, 0x3ED330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED330u;
label_3ed330:
    // 0x3ed330: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x3ed330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_3ed334:
    // 0x3ed334: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3ed334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3ed338:
    // 0x3ed338: 0x27a50460  addiu       $a1, $sp, 0x460
    ctx->pc = 0x3ed338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3ed33c:
    // 0x3ed33c: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x3ed33cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ed340:
    // 0x3ed340: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x3ed340u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ed344:
    // 0x3ed344: 0xafa004e0  sw          $zero, 0x4E0($sp)
    ctx->pc = 0x3ed344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1248), GPR_U32(ctx, 0));
label_3ed348:
    // 0x3ed348: 0xafa204d0  sw          $v0, 0x4D0($sp)
    ctx->pc = 0x3ed348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1232), GPR_U32(ctx, 2));
label_3ed34c:
    // 0x3ed34c: 0x27a60470  addiu       $a2, $sp, 0x470
    ctx->pc = 0x3ed34cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3ed350:
    // 0x3ed350: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x3ed350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_3ed354:
    // 0x3ed354: 0x27a70490  addiu       $a3, $sp, 0x490
    ctx->pc = 0x3ed354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3ed358:
    // 0x3ed358: 0x27a804a0  addiu       $t0, $sp, 0x4A0
    ctx->pc = 0x3ed358u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_3ed35c:
    // 0x3ed35c: 0xc0ea0d0  jal         func_3A8340
label_3ed360:
    if (ctx->pc == 0x3ED360u) {
        ctx->pc = 0x3ED360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED35Cu;
        // 0x3ed360: 0x27a904b0  addiu       $t1, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED364u;
        goto label_3ed364;
    }
    ctx->pc = 0x3ED35Cu;
    SET_GPR_U32(ctx, 31, 0x3ED364u);
    ctx->pc = 0x3ED360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED35Cu;
    // 0x3ed360: 0x27a904b0  addiu       $t1, $sp, 0x4B0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8340u, 0x3ED35Cu, 0x3ED364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED364u;
label_3ed364:
    // 0x3ed364: 0x26a45c20  addiu       $a0, $s5, 0x5C20
    ctx->pc = 0x3ed364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 23584));
label_3ed368:
    // 0x3ed368: 0xc0f15bc  jal         func_3C56F0
label_3ed36c:
    if (ctx->pc == 0x3ED36Cu) {
        ctx->pc = 0x3ED36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED368u;
        // 0x3ed36c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED370u;
        goto label_3ed370;
    }
    ctx->pc = 0x3ED368u;
    SET_GPR_U32(ctx, 31, 0x3ED370u);
    ctx->pc = 0x3ED36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED368u;
    // 0x3ed36c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3ED368u, 0x3ED370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED370u;
label_3ed370:
    // 0x3ed370: 0x2e230014  sltiu       $v1, $s1, 0x14
    ctx->pc = 0x3ed370u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_3ed374:
    // 0x3ed374: 0x1460ffbc  bnez        $v1, . + 4 + (-0x44 << 2)
label_3ed378:
    if (ctx->pc == 0x3ED378u) {
        ctx->pc = 0x3ED378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED374u;
        // 0x3ed378: 0x7ba20040  lq          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED37Cu;
        goto label_3ed37c;
    }
    ctx->pc = 0x3ED374u;
    {
        const bool branch_taken_0x3ed374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ED378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED374u;
        // 0x3ed378: 0x7ba20040  lq          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed374) {
            ctx->pc = 0x3ED268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ed268;
        }
    }
    ctx->pc = 0x3ED37Cu;
label_3ed37c:
    // 0x3ed37c: 0x7bb00580  lq          $s0, 0x580($sp)
    ctx->pc = 0x3ed37cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1408)));
label_3ed380:
    // 0x3ed380: 0x7bb10570  lq          $s1, 0x570($sp)
    ctx->pc = 0x3ed380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1392)));
label_3ed384:
    // 0x3ed384: 0x7bb20560  lq          $s2, 0x560($sp)
    ctx->pc = 0x3ed384u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1376)));
label_3ed388:
    // 0x3ed388: 0x7bb30550  lq          $s3, 0x550($sp)
    ctx->pc = 0x3ed388u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
label_3ed38c:
    // 0x3ed38c: 0x7bb40540  lq          $s4, 0x540($sp)
    ctx->pc = 0x3ed38cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
label_3ed390:
    // 0x3ed390: 0x7bb50530  lq          $s5, 0x530($sp)
    ctx->pc = 0x3ed390u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
label_3ed394:
    // 0x3ed394: 0x7bb60520  lq          $s6, 0x520($sp)
    ctx->pc = 0x3ed394u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
label_3ed398:
    // 0x3ed398: 0x7bb70510  lq          $s7, 0x510($sp)
    ctx->pc = 0x3ed398u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_3ed39c:
    // 0x3ed39c: 0x7bbe0500  lq          $fp, 0x500($sp)
    ctx->pc = 0x3ed39cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_3ed3a0:
    // 0x3ed3a0: 0xdfbf04f0  ld          $ra, 0x4F0($sp)
    ctx->pc = 0x3ed3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1264)));
label_3ed3a4:
    // 0x3ed3a4: 0xc7b905b8  lwc1        $f25, 0x5B8($sp)
    ctx->pc = 0x3ed3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3ed3a8:
    // 0x3ed3a8: 0xc7b805b0  lwc1        $f24, 0x5B0($sp)
    ctx->pc = 0x3ed3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3ed3ac:
    // 0x3ed3ac: 0xc7b705a8  lwc1        $f23, 0x5A8($sp)
    ctx->pc = 0x3ed3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3ed3b0:
    // 0x3ed3b0: 0xc7b605a0  lwc1        $f22, 0x5A0($sp)
    ctx->pc = 0x3ed3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3ed3b4:
    // 0x3ed3b4: 0xc7b50598  lwc1        $f21, 0x598($sp)
    ctx->pc = 0x3ed3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3ed3b8:
    // 0x3ed3b8: 0xc7b40590  lwc1        $f20, 0x590($sp)
    ctx->pc = 0x3ed3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ed3bc:
    // 0x3ed3bc: 0x3e00008  jr          $ra
label_3ed3c0:
    if (ctx->pc == 0x3ED3C0u) {
        ctx->pc = 0x3ED3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED3BCu;
        // 0x3ed3c0: 0x27bd05c0  addiu       $sp, $sp, 0x5C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED3C4u;
        goto label_3ed3c4;
    }
    ctx->pc = 0x3ED3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED3BCu;
        // 0x3ed3c0: 0x27bd05c0  addiu       $sp, $sp, 0x5C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ED3C4u;
label_3ed3c4:
    // 0x3ed3c4: 0x0  nop
    ctx->pc = 0x3ed3c4u;
    // NOP
    ctx->pc = 0x3ed3c8u;
}
