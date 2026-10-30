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

// Function: sub_00340120
// Address: 0x340120 - 0x3404a8
void sub_00340120_0x340120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340120_0x340120");
#endif

    switch (ctx->pc) {
        case 0x340120u: goto label_340120;
        case 0x340124u: goto label_340124;
        case 0x340128u: goto label_340128;
        case 0x34012cu: goto label_34012c;
        case 0x340130u: goto label_340130;
        case 0x340134u: goto label_340134;
        case 0x340138u: goto label_340138;
        case 0x34013cu: goto label_34013c;
        case 0x340140u: goto label_340140;
        case 0x340144u: goto label_340144;
        case 0x340148u: goto label_340148;
        case 0x34014cu: goto label_34014c;
        case 0x340150u: goto label_340150;
        case 0x340154u: goto label_340154;
        case 0x340158u: goto label_340158;
        case 0x34015cu: goto label_34015c;
        case 0x340160u: goto label_340160;
        case 0x340164u: goto label_340164;
        case 0x340168u: goto label_340168;
        case 0x34016cu: goto label_34016c;
        case 0x340170u: goto label_340170;
        case 0x340174u: goto label_340174;
        case 0x340178u: goto label_340178;
        case 0x34017cu: goto label_34017c;
        case 0x340180u: goto label_340180;
        case 0x340184u: goto label_340184;
        case 0x340188u: goto label_340188;
        case 0x34018cu: goto label_34018c;
        case 0x340190u: goto label_340190;
        case 0x340194u: goto label_340194;
        case 0x340198u: goto label_340198;
        case 0x34019cu: goto label_34019c;
        case 0x3401a0u: goto label_3401a0;
        case 0x3401a4u: goto label_3401a4;
        case 0x3401a8u: goto label_3401a8;
        case 0x3401acu: goto label_3401ac;
        case 0x3401b0u: goto label_3401b0;
        case 0x3401b4u: goto label_3401b4;
        case 0x3401b8u: goto label_3401b8;
        case 0x3401bcu: goto label_3401bc;
        case 0x3401c0u: goto label_3401c0;
        case 0x3401c4u: goto label_3401c4;
        case 0x3401c8u: goto label_3401c8;
        case 0x3401ccu: goto label_3401cc;
        case 0x3401d0u: goto label_3401d0;
        case 0x3401d4u: goto label_3401d4;
        case 0x3401d8u: goto label_3401d8;
        case 0x3401dcu: goto label_3401dc;
        case 0x3401e0u: goto label_3401e0;
        case 0x3401e4u: goto label_3401e4;
        case 0x3401e8u: goto label_3401e8;
        case 0x3401ecu: goto label_3401ec;
        case 0x3401f0u: goto label_3401f0;
        case 0x3401f4u: goto label_3401f4;
        case 0x3401f8u: goto label_3401f8;
        case 0x3401fcu: goto label_3401fc;
        case 0x340200u: goto label_340200;
        case 0x340204u: goto label_340204;
        case 0x340208u: goto label_340208;
        case 0x34020cu: goto label_34020c;
        case 0x340210u: goto label_340210;
        case 0x340214u: goto label_340214;
        case 0x340218u: goto label_340218;
        case 0x34021cu: goto label_34021c;
        case 0x340220u: goto label_340220;
        case 0x340224u: goto label_340224;
        case 0x340228u: goto label_340228;
        case 0x34022cu: goto label_34022c;
        case 0x340230u: goto label_340230;
        case 0x340234u: goto label_340234;
        case 0x340238u: goto label_340238;
        case 0x34023cu: goto label_34023c;
        case 0x340240u: goto label_340240;
        case 0x340244u: goto label_340244;
        case 0x340248u: goto label_340248;
        case 0x34024cu: goto label_34024c;
        case 0x340250u: goto label_340250;
        case 0x340254u: goto label_340254;
        case 0x340258u: goto label_340258;
        case 0x34025cu: goto label_34025c;
        case 0x340260u: goto label_340260;
        case 0x340264u: goto label_340264;
        case 0x340268u: goto label_340268;
        case 0x34026cu: goto label_34026c;
        case 0x340270u: goto label_340270;
        case 0x340274u: goto label_340274;
        case 0x340278u: goto label_340278;
        case 0x34027cu: goto label_34027c;
        case 0x340280u: goto label_340280;
        case 0x340284u: goto label_340284;
        case 0x340288u: goto label_340288;
        case 0x34028cu: goto label_34028c;
        case 0x340290u: goto label_340290;
        case 0x340294u: goto label_340294;
        case 0x340298u: goto label_340298;
        case 0x34029cu: goto label_34029c;
        case 0x3402a0u: goto label_3402a0;
        case 0x3402a4u: goto label_3402a4;
        case 0x3402a8u: goto label_3402a8;
        case 0x3402acu: goto label_3402ac;
        case 0x3402b0u: goto label_3402b0;
        case 0x3402b4u: goto label_3402b4;
        case 0x3402b8u: goto label_3402b8;
        case 0x3402bcu: goto label_3402bc;
        case 0x3402c0u: goto label_3402c0;
        case 0x3402c4u: goto label_3402c4;
        case 0x3402c8u: goto label_3402c8;
        case 0x3402ccu: goto label_3402cc;
        case 0x3402d0u: goto label_3402d0;
        case 0x3402d4u: goto label_3402d4;
        case 0x3402d8u: goto label_3402d8;
        case 0x3402dcu: goto label_3402dc;
        case 0x3402e0u: goto label_3402e0;
        case 0x3402e4u: goto label_3402e4;
        case 0x3402e8u: goto label_3402e8;
        case 0x3402ecu: goto label_3402ec;
        case 0x3402f0u: goto label_3402f0;
        case 0x3402f4u: goto label_3402f4;
        case 0x3402f8u: goto label_3402f8;
        case 0x3402fcu: goto label_3402fc;
        case 0x340300u: goto label_340300;
        case 0x340304u: goto label_340304;
        case 0x340308u: goto label_340308;
        case 0x34030cu: goto label_34030c;
        case 0x340310u: goto label_340310;
        case 0x340314u: goto label_340314;
        case 0x340318u: goto label_340318;
        case 0x34031cu: goto label_34031c;
        case 0x340320u: goto label_340320;
        case 0x340324u: goto label_340324;
        case 0x340328u: goto label_340328;
        case 0x34032cu: goto label_34032c;
        case 0x340330u: goto label_340330;
        case 0x340334u: goto label_340334;
        case 0x340338u: goto label_340338;
        case 0x34033cu: goto label_34033c;
        case 0x340340u: goto label_340340;
        case 0x340344u: goto label_340344;
        case 0x340348u: goto label_340348;
        case 0x34034cu: goto label_34034c;
        case 0x340350u: goto label_340350;
        case 0x340354u: goto label_340354;
        case 0x340358u: goto label_340358;
        case 0x34035cu: goto label_34035c;
        case 0x340360u: goto label_340360;
        case 0x340364u: goto label_340364;
        case 0x340368u: goto label_340368;
        case 0x34036cu: goto label_34036c;
        case 0x340370u: goto label_340370;
        case 0x340374u: goto label_340374;
        case 0x340378u: goto label_340378;
        case 0x34037cu: goto label_34037c;
        case 0x340380u: goto label_340380;
        case 0x340384u: goto label_340384;
        case 0x340388u: goto label_340388;
        case 0x34038cu: goto label_34038c;
        case 0x340390u: goto label_340390;
        case 0x340394u: goto label_340394;
        case 0x340398u: goto label_340398;
        case 0x34039cu: goto label_34039c;
        case 0x3403a0u: goto label_3403a0;
        case 0x3403a4u: goto label_3403a4;
        case 0x3403a8u: goto label_3403a8;
        case 0x3403acu: goto label_3403ac;
        case 0x3403b0u: goto label_3403b0;
        case 0x3403b4u: goto label_3403b4;
        case 0x3403b8u: goto label_3403b8;
        case 0x3403bcu: goto label_3403bc;
        case 0x3403c0u: goto label_3403c0;
        case 0x3403c4u: goto label_3403c4;
        case 0x3403c8u: goto label_3403c8;
        case 0x3403ccu: goto label_3403cc;
        case 0x3403d0u: goto label_3403d0;
        case 0x3403d4u: goto label_3403d4;
        case 0x3403d8u: goto label_3403d8;
        case 0x3403dcu: goto label_3403dc;
        case 0x3403e0u: goto label_3403e0;
        case 0x3403e4u: goto label_3403e4;
        case 0x3403e8u: goto label_3403e8;
        case 0x3403ecu: goto label_3403ec;
        case 0x3403f0u: goto label_3403f0;
        case 0x3403f4u: goto label_3403f4;
        case 0x3403f8u: goto label_3403f8;
        case 0x3403fcu: goto label_3403fc;
        case 0x340400u: goto label_340400;
        case 0x340404u: goto label_340404;
        case 0x340408u: goto label_340408;
        case 0x34040cu: goto label_34040c;
        case 0x340410u: goto label_340410;
        case 0x340414u: goto label_340414;
        case 0x340418u: goto label_340418;
        case 0x34041cu: goto label_34041c;
        case 0x340420u: goto label_340420;
        case 0x340424u: goto label_340424;
        case 0x340428u: goto label_340428;
        case 0x34042cu: goto label_34042c;
        case 0x340430u: goto label_340430;
        case 0x340434u: goto label_340434;
        case 0x340438u: goto label_340438;
        case 0x34043cu: goto label_34043c;
        case 0x340440u: goto label_340440;
        case 0x340444u: goto label_340444;
        case 0x340448u: goto label_340448;
        case 0x34044cu: goto label_34044c;
        case 0x340450u: goto label_340450;
        case 0x340454u: goto label_340454;
        case 0x340458u: goto label_340458;
        case 0x34045cu: goto label_34045c;
        case 0x340460u: goto label_340460;
        case 0x340464u: goto label_340464;
        case 0x340468u: goto label_340468;
        case 0x34046cu: goto label_34046c;
        case 0x340470u: goto label_340470;
        case 0x340474u: goto label_340474;
        case 0x340478u: goto label_340478;
        case 0x34047cu: goto label_34047c;
        case 0x340480u: goto label_340480;
        case 0x340484u: goto label_340484;
        case 0x340488u: goto label_340488;
        case 0x34048cu: goto label_34048c;
        case 0x340490u: goto label_340490;
        case 0x340494u: goto label_340494;
        case 0x340498u: goto label_340498;
        case 0x34049cu: goto label_34049c;
        case 0x3404a0u: goto label_3404a0;
        case 0x3404a4u: goto label_3404a4;
        default: break;
    }

    ctx->pc = 0x340120u;

label_340120:
    // 0x340120: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x340120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_340124:
    // 0x340124: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x340124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_340128:
    // 0x340128: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x340128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_34012c:
    // 0x34012c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x34012cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_340130:
    // 0x340130: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x340130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_340134:
    // 0x340134: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x340134u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_340138:
    // 0x340138: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x340138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_34013c:
    // 0x34013c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x34013cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_340140:
    // 0x340140: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x340140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_340144:
    // 0x340144: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x340144u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_340148:
    // 0x340148: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x340148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_34014c:
    // 0x34014c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x34014cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_340150:
    // 0x340150: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x340150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_340154:
    // 0x340154: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x340154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_340158:
    // 0x340158: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x340158u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_34015c:
    // 0x34015c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x34015cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_340160:
    // 0x340160: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x340160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_340164:
    // 0x340164: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x340164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_340168:
    // 0x340168: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x340168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
label_34016c:
    // 0x34016c: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x34016cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
label_340170:
    // 0x340170: 0x1280005d  beqz        $s4, . + 4 + (0x5D << 2)
label_340174:
    if (ctx->pc == 0x340174u) {
        ctx->pc = 0x340174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340170u;
        // 0x340174: 0x8fb700c0  lw          $s7, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340178u;
        goto label_340178;
    }
    ctx->pc = 0x340170u;
    {
        const bool branch_taken_0x340170 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x340174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340170u;
        // 0x340174: 0x8fb700c0  lw          $s7, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340170) {
            ctx->pc = 0x3402E8u;
            goto label_3402e8;
        }
    }
    ctx->pc = 0x340178u;
label_340178:
    // 0x340178: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x340178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_34017c:
    // 0x34017c: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x34017cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_340180:
    // 0x340180: 0x1000004c  b           . + 4 + (0x4C << 2)
label_340184:
    if (ctx->pc == 0x340184u) {
        ctx->pc = 0x340184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340180u;
        // 0x340184: 0xc6000010  lwc1        $f0, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x340188u;
        goto label_340188;
    }
    ctx->pc = 0x340180u;
    {
        const bool branch_taken_0x340180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340180u;
        // 0x340184: 0xc6000010  lwc1        $f0, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x340180) {
            ctx->pc = 0x3402B4u;
            goto label_3402b4;
        }
    }
    ctx->pc = 0x340188u;
label_340188:
    // 0x340188: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x340188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_34018c:
    // 0x34018c: 0x3442f450  ori         $v0, $v0, 0xF450
    ctx->pc = 0x34018cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62544);
label_340190:
    // 0x340190: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x340190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_340194:
    // 0x340194: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x340194u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_340198:
    // 0x340198: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x340198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_34019c:
    // 0x34019c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x34019cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3401a0:
    // 0x3401a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3401a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3401a4:
    // 0x3401a4: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x3401a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3401a8:
    // 0x3401a8: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x3401a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_3401ac:
    // 0x3401ac: 0x10a2003c  beq         $a1, $v0, . + 4 + (0x3C << 2)
label_3401b0:
    if (ctx->pc == 0x3401B0u) {
        ctx->pc = 0x3401B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3401ACu;
        // 0x3401b0: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3401B4u;
        goto label_3401b4;
    }
    ctx->pc = 0x3401ACu;
    {
        const bool branch_taken_0x3401ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3401B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3401ACu;
        // 0x3401b0: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3401ac) {
            ctx->pc = 0x3402A0u;
            goto label_3402a0;
        }
    }
    ctx->pc = 0x3401B4u;
label_3401b4:
    // 0x3401b4: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x3401b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_3401b8:
    // 0x3401b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3401b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3401bc:
    // 0x3401bc: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
label_3401c0:
    if (ctx->pc == 0x3401C0u) {
        ctx->pc = 0x3401C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3401BCu;
        // 0x3401c0: 0x8e100024  lw          $s0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3401C4u;
        goto label_3401c4;
    }
    ctx->pc = 0x3401BCu;
    {
        const bool branch_taken_0x3401bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3401bc) {
            ctx->pc = 0x3401C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3401BCu;
            // 0x3401c0: 0x8e100024  lw          $s0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3402A4u;
            goto label_3402a4;
        }
    }
    ctx->pc = 0x3401C4u;
label_3401c4:
    // 0x3401c4: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_3401c8:
    if (ctx->pc == 0x3401C8u) {
        ctx->pc = 0x3401C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3401C4u;
        // 0x3401c8: 0x8e230040  lw          $v1, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3401CCu;
        goto label_3401cc;
    }
    ctx->pc = 0x3401C4u;
    {
        const bool branch_taken_0x3401c4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3401C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3401C4u;
        // 0x3401c8: 0x8e230040  lw          $v1, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3401c4) {
            ctx->pc = 0x3401D8u;
            goto label_3401d8;
        }
    }
    ctx->pc = 0x3401CCu;
label_3401cc:
    // 0x3401cc: 0x751024  and         $v0, $v1, $s5
    ctx->pc = 0x3401ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
label_3401d0:
    // 0x3401d0: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
label_3401d4:
    if (ctx->pc == 0x3401D4u) {
        ctx->pc = 0x3401D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3401D0u;
        // 0x3401d4: 0x8e100024  lw          $s0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3401D8u;
        goto label_3401d8;
    }
    ctx->pc = 0x3401D0u;
    {
        const bool branch_taken_0x3401d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3401d0) {
            ctx->pc = 0x3401D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3401D0u;
            // 0x3401d4: 0x8e100024  lw          $s0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3402A4u;
            goto label_3402a4;
        }
    }
    ctx->pc = 0x3401D8u;
label_3401d8:
    // 0x3401d8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x3401d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3401dc:
    // 0x3401dc: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x3401dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3401e0:
    // 0x3401e0: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
label_3401e4:
    if (ctx->pc == 0x3401E4u) {
        ctx->pc = 0x3401E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3401E0u;
        // 0x3401e4: 0x8e100024  lw          $s0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3401E8u;
        goto label_3401e8;
    }
    ctx->pc = 0x3401E0u;
    {
        const bool branch_taken_0x3401e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3401e0) {
            ctx->pc = 0x3401E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3401E0u;
            // 0x3401e4: 0x8e100024  lw          $s0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3402A4u;
            goto label_3402a4;
        }
    }
    ctx->pc = 0x3401E8u;
label_3401e8:
    // 0x3401e8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3401e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3401ec:
    // 0x3401ec: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3401ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3401f0:
    // 0x3401f0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3401f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3401f4:
    // 0x3401f4: 0x40f809  jalr        $v0
label_3401f8:
    if (ctx->pc == 0x3401F8u) {
        ctx->pc = 0x3401F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3401F4u;
        // 0x3401f8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3401FCu;
        goto label_3401fc;
    }
    ctx->pc = 0x3401F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3401FCu);
        ctx->pc = 0x3401F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3401F4u;
        // 0x3401f8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3401F4u, 0x3401FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3401FCu;
label_3401fc:
    // 0x3401fc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3401fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_340200:
    // 0x340200: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x340200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_340204:
    // 0x340204: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
label_340208:
    if (ctx->pc == 0x340208u) {
        ctx->pc = 0x340208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340204u;
        // 0x340208: 0x8e100024  lw          $s0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34020Cu;
        goto label_34020c;
    }
    ctx->pc = 0x340204u;
    {
        const bool branch_taken_0x340204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x340204) {
            ctx->pc = 0x340208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340204u;
            // 0x340208: 0x8e100024  lw          $s0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3402A4u;
            goto label_3402a4;
        }
    }
    ctx->pc = 0x34020Cu;
label_34020c:
    // 0x34020c: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
label_340210:
    if (ctx->pc == 0x340210u) {
        ctx->pc = 0x340210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34020Cu;
        // 0x340210: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340214u;
        goto label_340214;
    }
    ctx->pc = 0x34020Cu;
    {
        const bool branch_taken_0x34020c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x340210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34020Cu;
        // 0x340210: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34020c) {
            ctx->pc = 0x340228u;
            goto label_340228;
        }
    }
    ctx->pc = 0x340214u;
label_340214:
    // 0x340214: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x340214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_340218:
    // 0x340218: 0x2e0f809  jalr        $s7
label_34021c:
    if (ctx->pc == 0x34021Cu) {
        ctx->pc = 0x34021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340218u;
        // 0x34021c: 0x8c440034  lw          $a0, 0x34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340220u;
        goto label_340220;
    }
    ctx->pc = 0x340218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x340220u);
        ctx->pc = 0x34021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340218u;
        // 0x34021c: 0x8c440034  lw          $a0, 0x34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340218u, 0x340220u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x340220u;
label_340220:
    // 0x340220: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
label_340224:
    if (ctx->pc == 0x340224u) {
        ctx->pc = 0x340224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340220u;
        // 0x340224: 0x8e100024  lw          $s0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340228u;
        goto label_340228;
    }
    ctx->pc = 0x340220u;
    {
        const bool branch_taken_0x340220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x340220) {
            ctx->pc = 0x340224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340220u;
            // 0x340224: 0x8e100024  lw          $s0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3402A4u;
            goto label_3402a4;
        }
    }
    ctx->pc = 0x340228u;
label_340228:
    // 0x340228: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x340228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34022c:
    // 0x34022c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34022cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_340230:
    // 0x340230: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x340230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_340234:
    // 0x340234: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x340234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_340238:
    // 0x340238: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x340238u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34023c:
    // 0x34023c: 0x0  nop
    ctx->pc = 0x34023cu;
    // NOP
label_340240:
    // 0x340240: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_340244:
    if (ctx->pc == 0x340244u) {
        ctx->pc = 0x340244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340240u;
        // 0x340244: 0xc6400004  lwc1        $f0, 0x4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x340248u;
        goto label_340248;
    }
    ctx->pc = 0x340240u;
    {
        const bool branch_taken_0x340240 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x340244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340240u;
        // 0x340244: 0xc6400004  lwc1        $f0, 0x4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x340240) {
            ctx->pc = 0x340258u;
            goto label_340258;
        }
    }
    ctx->pc = 0x340248u;
label_340248:
    // 0x340248: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x340248u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34024c:
    // 0x34024c: 0x0  nop
    ctx->pc = 0x34024cu;
    // NOP
label_340250:
    // 0x340250: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_340254:
    if (ctx->pc == 0x340254u) {
        ctx->pc = 0x340254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340250u;
        // 0x340254: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340258u;
        goto label_340258;
    }
    ctx->pc = 0x340250u;
    {
        const bool branch_taken_0x340250 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x340250) {
            ctx->pc = 0x340254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340250u;
            // 0x340254: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340258u;
            goto label_340258;
        }
    }
    ctx->pc = 0x340258u;
label_340258:
    // 0x340258: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_34025c:
    if (ctx->pc == 0x34025Cu) {
        ctx->pc = 0x34025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340258u;
        // 0x34025c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340260u;
        goto label_340260;
    }
    ctx->pc = 0x340258u;
    {
        const bool branch_taken_0x340258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340258u;
        // 0x34025c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340258) {
            ctx->pc = 0x3402A0u;
            goto label_3402a0;
        }
    }
    ctx->pc = 0x340260u;
label_340260:
    // 0x340260: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x340260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_340264:
    // 0x340264: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x340264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_340268:
    // 0x340268: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x340268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_34026c:
    // 0x34026c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34026cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_340270:
    // 0x340270: 0x0  nop
    ctx->pc = 0x340270u;
    // NOP
label_340274:
    // 0x340274: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_340278:
    if (ctx->pc == 0x340278u) {
        ctx->pc = 0x340278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340274u;
        // 0x340278: 0xc6400008  lwc1        $f0, 0x8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x34027Cu;
        goto label_34027c;
    }
    ctx->pc = 0x340274u;
    {
        const bool branch_taken_0x340274 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x340278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340274u;
        // 0x340278: 0xc6400008  lwc1        $f0, 0x8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x340274) {
            ctx->pc = 0x34028Cu;
            goto label_34028c;
        }
    }
    ctx->pc = 0x34027Cu;
label_34027c:
    // 0x34027c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x34027cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_340280:
    // 0x340280: 0x0  nop
    ctx->pc = 0x340280u;
    // NOP
label_340284:
    // 0x340284: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_340288:
    if (ctx->pc == 0x340288u) {
        ctx->pc = 0x340288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340284u;
        // 0x340288: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34028Cu;
        goto label_34028c;
    }
    ctx->pc = 0x340284u;
    {
        const bool branch_taken_0x340284 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x340284) {
            ctx->pc = 0x340288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340284u;
            // 0x340288: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34028Cu;
            goto label_34028c;
        }
    }
    ctx->pc = 0x34028Cu;
label_34028c:
    // 0x34028c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_340290:
    if (ctx->pc == 0x340290u) {
        ctx->pc = 0x340290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34028Cu;
        // 0x340290: 0x161080  sll         $v0, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340294u;
        goto label_340294;
    }
    ctx->pc = 0x34028Cu;
    {
        const bool branch_taken_0x34028c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x340290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34028Cu;
        // 0x340290: 0x161080  sll         $v0, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34028c) {
            ctx->pc = 0x3402A0u;
            goto label_3402a0;
        }
    }
    ctx->pc = 0x340294u;
label_340294:
    // 0x340294: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x340294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_340298:
    // 0x340298: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x340298u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_34029c:
    // 0x34029c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x34029cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_3402a0:
    // 0x3402a0: 0x8e100024  lw          $s0, 0x24($s0)
    ctx->pc = 0x3402a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3402a4:
    // 0x3402a4: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
label_3402a8:
    if (ctx->pc == 0x3402A8u) {
        ctx->pc = 0x3402A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3402A4u;
        // 0x3402a8: 0x8e940028  lw          $s4, 0x28($s4) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3402ACu;
        goto label_3402ac;
    }
    ctx->pc = 0x3402A4u;
    {
        const bool branch_taken_0x3402a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3402a4) {
            ctx->pc = 0x3402A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3402A4u;
            // 0x3402a8: 0x8e940028  lw          $s4, 0x28($s4) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3402ECu;
            goto label_3402ec;
        }
    }
    ctx->pc = 0x3402ACu;
label_3402ac:
    // 0x3402ac: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x3402acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3402b0:
    // 0x3402b0: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x3402b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3402b4:
    // 0x3402b4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3402b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3402b8:
    // 0x3402b8: 0x0  nop
    ctx->pc = 0x3402b8u;
    // NOP
label_3402bc:
    // 0x3402bc: 0x4503fff9  bc1tl       . + 4 + (-0x7 << 2)
label_3402c0:
    if (ctx->pc == 0x3402C0u) {
        ctx->pc = 0x3402C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3402BCu;
        // 0x3402c0: 0x8e100024  lw          $s0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3402C4u;
        goto label_3402c4;
    }
    ctx->pc = 0x3402BCu;
    {
        const bool branch_taken_0x3402bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3402bc) {
            ctx->pc = 0x3402C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3402BCu;
            // 0x3402c0: 0x8e100024  lw          $s0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3402A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3402a4;
        }
    }
    ctx->pc = 0x3402C4u;
label_3402c4:
    // 0x3402c4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3402c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3402c8:
    // 0x3402c8: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x3402c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3402cc:
    // 0x3402cc: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3402ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3402d0:
    // 0x3402d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3402d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3402d4:
    // 0x3402d4: 0x0  nop
    ctx->pc = 0x3402d4u;
    // NOP
label_3402d8:
    // 0x3402d8: 0x4500ffab  bc1f        . + 4 + (-0x55 << 2)
label_3402dc:
    if (ctx->pc == 0x3402DCu) {
        ctx->pc = 0x3402DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3402D8u;
        // 0x3402dc: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3402E0u;
        goto label_3402e0;
    }
    ctx->pc = 0x3402D8u;
    {
        const bool branch_taken_0x3402d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3402DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3402D8u;
        // 0x3402dc: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3402d8) {
            ctx->pc = 0x340188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340188;
        }
    }
    ctx->pc = 0x3402E0u;
label_3402e0:
    // 0x3402e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_3402e4:
    if (ctx->pc == 0x3402E4u) {
        ctx->pc = 0x3402E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3402E0u;
        // 0x3402e4: 0x8e940028  lw          $s4, 0x28($s4) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3402E8u;
        goto label_3402e8;
    }
    ctx->pc = 0x3402E0u;
    {
        const bool branch_taken_0x3402e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3402E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3402E0u;
        // 0x3402e4: 0x8e940028  lw          $s4, 0x28($s4) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3402e0) {
            ctx->pc = 0x3402ECu;
            goto label_3402ec;
        }
    }
    ctx->pc = 0x3402E8u;
label_3402e8:
    // 0x3402e8: 0x8e740008  lw          $s4, 0x8($s3)
    ctx->pc = 0x3402e8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3402ec:
    // 0x3402ec: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3402ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3402f0:
    // 0x3402f0: 0x12000061  beqz        $s0, . + 4 + (0x61 << 2)
label_3402f4:
    if (ctx->pc == 0x3402F4u) {
        ctx->pc = 0x3402F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3402F0u;
        // 0x3402f4: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3402F8u;
        goto label_3402f8;
    }
    ctx->pc = 0x3402F0u;
    {
        const bool branch_taken_0x3402f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3402F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3402F0u;
        // 0x3402f4: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3402f0) {
            ctx->pc = 0x340478u;
            goto label_340478;
        }
    }
    ctx->pc = 0x3402F8u;
label_3402f8:
    // 0x3402f8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x3402f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3402fc:
    // 0x3402fc: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x3402fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_340300:
    // 0x340300: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x340300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_340304:
    // 0x340304: 0x0  nop
    ctx->pc = 0x340304u;
    // NOP
label_340308:
    // 0x340308: 0x4503005c  bc1tl       . + 4 + (0x5C << 2)
label_34030c:
    if (ctx->pc == 0x34030Cu) {
        ctx->pc = 0x34030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340308u;
        // 0x34030c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340310u;
        goto label_340310;
    }
    ctx->pc = 0x340308u;
    {
        const bool branch_taken_0x340308 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x340308) {
            ctx->pc = 0x34030Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340308u;
            // 0x34030c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34047Cu;
            goto label_34047c;
        }
    }
    ctx->pc = 0x340310u;
label_340310:
    // 0x340310: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x340310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_340314:
    // 0x340314: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x340314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_340318:
    // 0x340318: 0x3442f450  ori         $v0, $v0, 0xF450
    ctx->pc = 0x340318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62544);
label_34031c:
    // 0x34031c: 0x7ea021  addu        $s4, $v1, $fp
    ctx->pc = 0x34031cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_340320:
    // 0x340320: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x340320u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_340324:
    // 0x340324: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x340324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_340328:
    // 0x340328: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x340328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34032c:
    // 0x34032c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34032cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_340330:
    // 0x340330: 0x0  nop
    ctx->pc = 0x340330u;
    // NOP
label_340334:
    // 0x340334: 0x45030047  bc1tl       . + 4 + (0x47 << 2)
label_340338:
    if (ctx->pc == 0x340338u) {
        ctx->pc = 0x340338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340334u;
        // 0x340338: 0x8e100028  lw          $s0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34033Cu;
        goto label_34033c;
    }
    ctx->pc = 0x340334u;
    {
        const bool branch_taken_0x340334 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x340334) {
            ctx->pc = 0x340338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340334u;
            // 0x340338: 0x8e100028  lw          $s0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340454u;
            goto label_340454;
        }
    }
    ctx->pc = 0x34033Cu;
label_34033c:
    // 0x34033c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x34033cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_340340:
    // 0x340340: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x340340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_340344:
    // 0x340344: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x340344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_340348:
    // 0x340348: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x340348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_34034c:
    // 0x34034c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x34034cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_340350:
    // 0x340350: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x340350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_340354:
    // 0x340354: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x340354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_340358:
    // 0x340358: 0x50a3003e  beql        $a1, $v1, . + 4 + (0x3E << 2)
label_34035c:
    if (ctx->pc == 0x34035Cu) {
        ctx->pc = 0x34035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340358u;
        // 0x34035c: 0x8e100028  lw          $s0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340360u;
        goto label_340360;
    }
    ctx->pc = 0x340358u;
    {
        const bool branch_taken_0x340358 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x340358) {
            ctx->pc = 0x34035Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340358u;
            // 0x34035c: 0x8e100028  lw          $s0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340454u;
            goto label_340454;
        }
    }
    ctx->pc = 0x340360u;
label_340360:
    // 0x340360: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x340360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_340364:
    // 0x340364: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x340364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_340368:
    // 0x340368: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x340368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_34036c:
    // 0x34036c: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
label_340370:
    if (ctx->pc == 0x340370u) {
        ctx->pc = 0x340370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34036Cu;
        // 0x340370: 0x8e100028  lw          $s0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340374u;
        goto label_340374;
    }
    ctx->pc = 0x34036Cu;
    {
        const bool branch_taken_0x34036c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34036c) {
            ctx->pc = 0x340370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34036Cu;
            // 0x340370: 0x8e100028  lw          $s0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340454u;
            goto label_340454;
        }
    }
    ctx->pc = 0x340374u;
label_340374:
    // 0x340374: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_340378:
    if (ctx->pc == 0x340378u) {
        ctx->pc = 0x340378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340374u;
        // 0x340378: 0x8e230040  lw          $v1, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34037Cu;
        goto label_34037c;
    }
    ctx->pc = 0x340374u;
    {
        const bool branch_taken_0x340374 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x340378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340374u;
        // 0x340378: 0x8e230040  lw          $v1, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340374) {
            ctx->pc = 0x340388u;
            goto label_340388;
        }
    }
    ctx->pc = 0x34037Cu;
label_34037c:
    // 0x34037c: 0x751024  and         $v0, $v1, $s5
    ctx->pc = 0x34037cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
label_340380:
    // 0x340380: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
label_340384:
    if (ctx->pc == 0x340384u) {
        ctx->pc = 0x340384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340380u;
        // 0x340384: 0x8e100028  lw          $s0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340388u;
        goto label_340388;
    }
    ctx->pc = 0x340380u;
    {
        const bool branch_taken_0x340380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x340380) {
            ctx->pc = 0x340384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340380u;
            // 0x340384: 0x8e100028  lw          $s0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340454u;
            goto label_340454;
        }
    }
    ctx->pc = 0x340388u;
label_340388:
    // 0x340388: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x340388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_34038c:
    // 0x34038c: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x34038cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_340390:
    // 0x340390: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
label_340394:
    if (ctx->pc == 0x340394u) {
        ctx->pc = 0x340394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340390u;
        // 0x340394: 0x8e100028  lw          $s0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340398u;
        goto label_340398;
    }
    ctx->pc = 0x340390u;
    {
        const bool branch_taken_0x340390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x340390) {
            ctx->pc = 0x340394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340390u;
            // 0x340394: 0x8e100028  lw          $s0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340454u;
            goto label_340454;
        }
    }
    ctx->pc = 0x340398u;
label_340398:
    // 0x340398: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x340398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_34039c:
    // 0x34039c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x34039cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3403a0:
    // 0x3403a0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3403a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3403a4:
    // 0x3403a4: 0x40f809  jalr        $v0
label_3403a8:
    if (ctx->pc == 0x3403A8u) {
        ctx->pc = 0x3403A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3403A4u;
        // 0x3403a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3403ACu;
        goto label_3403ac;
    }
    ctx->pc = 0x3403A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3403ACu);
        ctx->pc = 0x3403A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3403A4u;
        // 0x3403a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3403A4u, 0x3403ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3403ACu;
label_3403ac:
    // 0x3403ac: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3403acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_3403b0:
    // 0x3403b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3403b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3403b4:
    // 0x3403b4: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
label_3403b8:
    if (ctx->pc == 0x3403B8u) {
        ctx->pc = 0x3403B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3403B4u;
        // 0x3403b8: 0x8e100028  lw          $s0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3403BCu;
        goto label_3403bc;
    }
    ctx->pc = 0x3403B4u;
    {
        const bool branch_taken_0x3403b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3403b4) {
            ctx->pc = 0x3403B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3403B4u;
            // 0x3403b8: 0x8e100028  lw          $s0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340454u;
            goto label_340454;
        }
    }
    ctx->pc = 0x3403BCu;
label_3403bc:
    // 0x3403bc: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
label_3403c0:
    if (ctx->pc == 0x3403C0u) {
        ctx->pc = 0x3403C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3403BCu;
        // 0x3403c0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3403C4u;
        goto label_3403c4;
    }
    ctx->pc = 0x3403BCu;
    {
        const bool branch_taken_0x3403bc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x3403C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3403BCu;
        // 0x3403c0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3403bc) {
            ctx->pc = 0x3403D8u;
            goto label_3403d8;
        }
    }
    ctx->pc = 0x3403C4u;
label_3403c4:
    // 0x3403c4: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x3403c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_3403c8:
    // 0x3403c8: 0x2e0f809  jalr        $s7
label_3403cc:
    if (ctx->pc == 0x3403CCu) {
        ctx->pc = 0x3403CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3403C8u;
        // 0x3403cc: 0x8c440034  lw          $a0, 0x34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3403D0u;
        goto label_3403d0;
    }
    ctx->pc = 0x3403C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3403D0u);
        ctx->pc = 0x3403CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3403C8u;
        // 0x3403cc: 0x8c440034  lw          $a0, 0x34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3403C8u, 0x3403D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3403D0u;
label_3403d0:
    // 0x3403d0: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
label_3403d4:
    if (ctx->pc == 0x3403D4u) {
        ctx->pc = 0x3403D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3403D0u;
        // 0x3403d4: 0x8e100028  lw          $s0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3403D8u;
        goto label_3403d8;
    }
    ctx->pc = 0x3403D0u;
    {
        const bool branch_taken_0x3403d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3403d0) {
            ctx->pc = 0x3403D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3403D0u;
            // 0x3403d4: 0x8e100028  lw          $s0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340454u;
            goto label_340454;
        }
    }
    ctx->pc = 0x3403D8u;
label_3403d8:
    // 0x3403d8: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x3403d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3403dc:
    // 0x3403dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3403dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3403e0:
    // 0x3403e0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x3403e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3403e4:
    // 0x3403e4: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x3403e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3403e8:
    // 0x3403e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3403e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3403ec:
    // 0x3403ec: 0x0  nop
    ctx->pc = 0x3403ecu;
    // NOP
label_3403f0:
    // 0x3403f0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_3403f4:
    if (ctx->pc == 0x3403F4u) {
        ctx->pc = 0x3403F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3403F0u;
        // 0x3403f4: 0xc6400004  lwc1        $f0, 0x4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3403F8u;
        goto label_3403f8;
    }
    ctx->pc = 0x3403F0u;
    {
        const bool branch_taken_0x3403f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3403F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3403F0u;
        // 0x3403f4: 0xc6400004  lwc1        $f0, 0x4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3403f0) {
            ctx->pc = 0x340408u;
            goto label_340408;
        }
    }
    ctx->pc = 0x3403F8u;
label_3403f8:
    // 0x3403f8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x3403f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3403fc:
    // 0x3403fc: 0x0  nop
    ctx->pc = 0x3403fcu;
    // NOP
label_340400:
    // 0x340400: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_340404:
    if (ctx->pc == 0x340404u) {
        ctx->pc = 0x340404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340400u;
        // 0x340404: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340408u;
        goto label_340408;
    }
    ctx->pc = 0x340400u;
    {
        const bool branch_taken_0x340400 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x340400) {
            ctx->pc = 0x340404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340400u;
            // 0x340404: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340408u;
            goto label_340408;
        }
    }
    ctx->pc = 0x340408u;
label_340408:
    // 0x340408: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_34040c:
    if (ctx->pc == 0x34040Cu) {
        ctx->pc = 0x34040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340408u;
        // 0x34040c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340410u;
        goto label_340410;
    }
    ctx->pc = 0x340408u;
    {
        const bool branch_taken_0x340408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340408u;
        // 0x34040c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340408) {
            ctx->pc = 0x340450u;
            goto label_340450;
        }
    }
    ctx->pc = 0x340410u;
label_340410:
    // 0x340410: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x340410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_340414:
    // 0x340414: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x340414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_340418:
    // 0x340418: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x340418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_34041c:
    // 0x34041c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34041cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_340420:
    // 0x340420: 0x0  nop
    ctx->pc = 0x340420u;
    // NOP
label_340424:
    // 0x340424: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_340428:
    if (ctx->pc == 0x340428u) {
        ctx->pc = 0x340428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340424u;
        // 0x340428: 0xc6400008  lwc1        $f0, 0x8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x34042Cu;
        goto label_34042c;
    }
    ctx->pc = 0x340424u;
    {
        const bool branch_taken_0x340424 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x340428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340424u;
        // 0x340428: 0xc6400008  lwc1        $f0, 0x8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x340424) {
            ctx->pc = 0x34043Cu;
            goto label_34043c;
        }
    }
    ctx->pc = 0x34042Cu;
label_34042c:
    // 0x34042c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x34042cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_340430:
    // 0x340430: 0x0  nop
    ctx->pc = 0x340430u;
    // NOP
label_340434:
    // 0x340434: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_340438:
    if (ctx->pc == 0x340438u) {
        ctx->pc = 0x340438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340434u;
        // 0x340438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34043Cu;
        goto label_34043c;
    }
    ctx->pc = 0x340434u;
    {
        const bool branch_taken_0x340434 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x340434) {
            ctx->pc = 0x340438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340434u;
            // 0x340438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34043Cu;
            goto label_34043c;
        }
    }
    ctx->pc = 0x34043Cu;
label_34043c:
    // 0x34043c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_340440:
    if (ctx->pc == 0x340440u) {
        ctx->pc = 0x340440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34043Cu;
        // 0x340440: 0x8e100028  lw          $s0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340444u;
        goto label_340444;
    }
    ctx->pc = 0x34043Cu;
    {
        const bool branch_taken_0x34043c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34043c) {
            ctx->pc = 0x340440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34043Cu;
            // 0x340440: 0x8e100028  lw          $s0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340454u;
            goto label_340454;
        }
    }
    ctx->pc = 0x340444u;
label_340444:
    // 0x340444: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x340444u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
label_340448:
    // 0x340448: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x340448u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_34044c:
    // 0x34044c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x34044cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_340450:
    // 0x340450: 0x8e100028  lw          $s0, 0x28($s0)
    ctx->pc = 0x340450u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_340454:
    // 0x340454: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_340458:
    if (ctx->pc == 0x340458u) {
        ctx->pc = 0x340458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340454u;
        // 0x340458: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34045Cu;
        goto label_34045c;
    }
    ctx->pc = 0x340454u;
    {
        const bool branch_taken_0x340454 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x340458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340454u;
        // 0x340458: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340454) {
            ctx->pc = 0x340478u;
            goto label_340478;
        }
    }
    ctx->pc = 0x34045Cu;
label_34045c:
    // 0x34045c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x34045cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_340460:
    // 0x340460: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x340460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_340464:
    // 0x340464: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x340464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_340468:
    // 0x340468: 0x0  nop
    ctx->pc = 0x340468u;
    // NOP
label_34046c:
    // 0x34046c: 0x4502ffae  bc1fl       . + 4 + (-0x52 << 2)
label_340470:
    if (ctx->pc == 0x340470u) {
        ctx->pc = 0x340470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34046Cu;
        // 0x340470: 0xc6010010  lwc1        $f1, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x340474u;
        goto label_340474;
    }
    ctx->pc = 0x34046Cu;
    {
        const bool branch_taken_0x34046c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34046c) {
            ctx->pc = 0x340470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34046Cu;
            // 0x340470: 0xc6010010  lwc1        $f1, 0x10($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x340328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340328;
        }
    }
    ctx->pc = 0x340474u;
label_340474:
    // 0x340474: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x340474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_340478:
    // 0x340478: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x340478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_34047c:
    // 0x34047c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x34047cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_340480:
    // 0x340480: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x340480u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_340484:
    // 0x340484: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x340484u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_340488:
    // 0x340488: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x340488u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_34048c:
    // 0x34048c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x34048cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_340490:
    // 0x340490: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x340490u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_340494:
    // 0x340494: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x340494u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_340498:
    // 0x340498: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x340498u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_34049c:
    // 0x34049c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34049cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3404a0:
    // 0x3404a0: 0x3e00008  jr          $ra
label_3404a4:
    if (ctx->pc == 0x3404A4u) {
        ctx->pc = 0x3404A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3404A0u;
        // 0x3404a4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3404A8u;
        goto label_fallthrough_0x3404a0;
    }
    ctx->pc = 0x3404A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3404A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3404A0u;
        // 0x3404a4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3404A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3404a0:
    ctx->pc = 0x3404A8u;
}
