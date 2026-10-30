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

// Function: sub_002DD210
// Address: 0x2dd210 - 0x2dd630
void sub_002DD210_0x2dd210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD210_0x2dd210");
#endif

    switch (ctx->pc) {
        case 0x2dd210u: goto label_2dd210;
        case 0x2dd214u: goto label_2dd214;
        case 0x2dd218u: goto label_2dd218;
        case 0x2dd21cu: goto label_2dd21c;
        case 0x2dd220u: goto label_2dd220;
        case 0x2dd224u: goto label_2dd224;
        case 0x2dd228u: goto label_2dd228;
        case 0x2dd22cu: goto label_2dd22c;
        case 0x2dd230u: goto label_2dd230;
        case 0x2dd234u: goto label_2dd234;
        case 0x2dd238u: goto label_2dd238;
        case 0x2dd23cu: goto label_2dd23c;
        case 0x2dd240u: goto label_2dd240;
        case 0x2dd244u: goto label_2dd244;
        case 0x2dd248u: goto label_2dd248;
        case 0x2dd24cu: goto label_2dd24c;
        case 0x2dd250u: goto label_2dd250;
        case 0x2dd254u: goto label_2dd254;
        case 0x2dd258u: goto label_2dd258;
        case 0x2dd25cu: goto label_2dd25c;
        case 0x2dd260u: goto label_2dd260;
        case 0x2dd264u: goto label_2dd264;
        case 0x2dd268u: goto label_2dd268;
        case 0x2dd26cu: goto label_2dd26c;
        case 0x2dd270u: goto label_2dd270;
        case 0x2dd274u: goto label_2dd274;
        case 0x2dd278u: goto label_2dd278;
        case 0x2dd27cu: goto label_2dd27c;
        case 0x2dd280u: goto label_2dd280;
        case 0x2dd284u: goto label_2dd284;
        case 0x2dd288u: goto label_2dd288;
        case 0x2dd28cu: goto label_2dd28c;
        case 0x2dd290u: goto label_2dd290;
        case 0x2dd294u: goto label_2dd294;
        case 0x2dd298u: goto label_2dd298;
        case 0x2dd29cu: goto label_2dd29c;
        case 0x2dd2a0u: goto label_2dd2a0;
        case 0x2dd2a4u: goto label_2dd2a4;
        case 0x2dd2a8u: goto label_2dd2a8;
        case 0x2dd2acu: goto label_2dd2ac;
        case 0x2dd2b0u: goto label_2dd2b0;
        case 0x2dd2b4u: goto label_2dd2b4;
        case 0x2dd2b8u: goto label_2dd2b8;
        case 0x2dd2bcu: goto label_2dd2bc;
        case 0x2dd2c0u: goto label_2dd2c0;
        case 0x2dd2c4u: goto label_2dd2c4;
        case 0x2dd2c8u: goto label_2dd2c8;
        case 0x2dd2ccu: goto label_2dd2cc;
        case 0x2dd2d0u: goto label_2dd2d0;
        case 0x2dd2d4u: goto label_2dd2d4;
        case 0x2dd2d8u: goto label_2dd2d8;
        case 0x2dd2dcu: goto label_2dd2dc;
        case 0x2dd2e0u: goto label_2dd2e0;
        case 0x2dd2e4u: goto label_2dd2e4;
        case 0x2dd2e8u: goto label_2dd2e8;
        case 0x2dd2ecu: goto label_2dd2ec;
        case 0x2dd2f0u: goto label_2dd2f0;
        case 0x2dd2f4u: goto label_2dd2f4;
        case 0x2dd2f8u: goto label_2dd2f8;
        case 0x2dd2fcu: goto label_2dd2fc;
        case 0x2dd300u: goto label_2dd300;
        case 0x2dd304u: goto label_2dd304;
        case 0x2dd308u: goto label_2dd308;
        case 0x2dd30cu: goto label_2dd30c;
        case 0x2dd310u: goto label_2dd310;
        case 0x2dd314u: goto label_2dd314;
        case 0x2dd318u: goto label_2dd318;
        case 0x2dd31cu: goto label_2dd31c;
        case 0x2dd320u: goto label_2dd320;
        case 0x2dd324u: goto label_2dd324;
        case 0x2dd328u: goto label_2dd328;
        case 0x2dd32cu: goto label_2dd32c;
        case 0x2dd330u: goto label_2dd330;
        case 0x2dd334u: goto label_2dd334;
        case 0x2dd338u: goto label_2dd338;
        case 0x2dd33cu: goto label_2dd33c;
        case 0x2dd340u: goto label_2dd340;
        case 0x2dd344u: goto label_2dd344;
        case 0x2dd348u: goto label_2dd348;
        case 0x2dd34cu: goto label_2dd34c;
        case 0x2dd350u: goto label_2dd350;
        case 0x2dd354u: goto label_2dd354;
        case 0x2dd358u: goto label_2dd358;
        case 0x2dd35cu: goto label_2dd35c;
        case 0x2dd360u: goto label_2dd360;
        case 0x2dd364u: goto label_2dd364;
        case 0x2dd368u: goto label_2dd368;
        case 0x2dd36cu: goto label_2dd36c;
        case 0x2dd370u: goto label_2dd370;
        case 0x2dd374u: goto label_2dd374;
        case 0x2dd378u: goto label_2dd378;
        case 0x2dd37cu: goto label_2dd37c;
        case 0x2dd380u: goto label_2dd380;
        case 0x2dd384u: goto label_2dd384;
        case 0x2dd388u: goto label_2dd388;
        case 0x2dd38cu: goto label_2dd38c;
        case 0x2dd390u: goto label_2dd390;
        case 0x2dd394u: goto label_2dd394;
        case 0x2dd398u: goto label_2dd398;
        case 0x2dd39cu: goto label_2dd39c;
        case 0x2dd3a0u: goto label_2dd3a0;
        case 0x2dd3a4u: goto label_2dd3a4;
        case 0x2dd3a8u: goto label_2dd3a8;
        case 0x2dd3acu: goto label_2dd3ac;
        case 0x2dd3b0u: goto label_2dd3b0;
        case 0x2dd3b4u: goto label_2dd3b4;
        case 0x2dd3b8u: goto label_2dd3b8;
        case 0x2dd3bcu: goto label_2dd3bc;
        case 0x2dd3c0u: goto label_2dd3c0;
        case 0x2dd3c4u: goto label_2dd3c4;
        case 0x2dd3c8u: goto label_2dd3c8;
        case 0x2dd3ccu: goto label_2dd3cc;
        case 0x2dd3d0u: goto label_2dd3d0;
        case 0x2dd3d4u: goto label_2dd3d4;
        case 0x2dd3d8u: goto label_2dd3d8;
        case 0x2dd3dcu: goto label_2dd3dc;
        case 0x2dd3e0u: goto label_2dd3e0;
        case 0x2dd3e4u: goto label_2dd3e4;
        case 0x2dd3e8u: goto label_2dd3e8;
        case 0x2dd3ecu: goto label_2dd3ec;
        case 0x2dd3f0u: goto label_2dd3f0;
        case 0x2dd3f4u: goto label_2dd3f4;
        case 0x2dd3f8u: goto label_2dd3f8;
        case 0x2dd3fcu: goto label_2dd3fc;
        case 0x2dd400u: goto label_2dd400;
        case 0x2dd404u: goto label_2dd404;
        case 0x2dd408u: goto label_2dd408;
        case 0x2dd40cu: goto label_2dd40c;
        case 0x2dd410u: goto label_2dd410;
        case 0x2dd414u: goto label_2dd414;
        case 0x2dd418u: goto label_2dd418;
        case 0x2dd41cu: goto label_2dd41c;
        case 0x2dd420u: goto label_2dd420;
        case 0x2dd424u: goto label_2dd424;
        case 0x2dd428u: goto label_2dd428;
        case 0x2dd42cu: goto label_2dd42c;
        case 0x2dd430u: goto label_2dd430;
        case 0x2dd434u: goto label_2dd434;
        case 0x2dd438u: goto label_2dd438;
        case 0x2dd43cu: goto label_2dd43c;
        case 0x2dd440u: goto label_2dd440;
        case 0x2dd444u: goto label_2dd444;
        case 0x2dd448u: goto label_2dd448;
        case 0x2dd44cu: goto label_2dd44c;
        case 0x2dd450u: goto label_2dd450;
        case 0x2dd454u: goto label_2dd454;
        case 0x2dd458u: goto label_2dd458;
        case 0x2dd45cu: goto label_2dd45c;
        case 0x2dd460u: goto label_2dd460;
        case 0x2dd464u: goto label_2dd464;
        case 0x2dd468u: goto label_2dd468;
        case 0x2dd46cu: goto label_2dd46c;
        case 0x2dd470u: goto label_2dd470;
        case 0x2dd474u: goto label_2dd474;
        case 0x2dd478u: goto label_2dd478;
        case 0x2dd47cu: goto label_2dd47c;
        case 0x2dd480u: goto label_2dd480;
        case 0x2dd484u: goto label_2dd484;
        case 0x2dd488u: goto label_2dd488;
        case 0x2dd48cu: goto label_2dd48c;
        case 0x2dd490u: goto label_2dd490;
        case 0x2dd494u: goto label_2dd494;
        case 0x2dd498u: goto label_2dd498;
        case 0x2dd49cu: goto label_2dd49c;
        case 0x2dd4a0u: goto label_2dd4a0;
        case 0x2dd4a4u: goto label_2dd4a4;
        case 0x2dd4a8u: goto label_2dd4a8;
        case 0x2dd4acu: goto label_2dd4ac;
        case 0x2dd4b0u: goto label_2dd4b0;
        case 0x2dd4b4u: goto label_2dd4b4;
        case 0x2dd4b8u: goto label_2dd4b8;
        case 0x2dd4bcu: goto label_2dd4bc;
        case 0x2dd4c0u: goto label_2dd4c0;
        case 0x2dd4c4u: goto label_2dd4c4;
        case 0x2dd4c8u: goto label_2dd4c8;
        case 0x2dd4ccu: goto label_2dd4cc;
        case 0x2dd4d0u: goto label_2dd4d0;
        case 0x2dd4d4u: goto label_2dd4d4;
        case 0x2dd4d8u: goto label_2dd4d8;
        case 0x2dd4dcu: goto label_2dd4dc;
        case 0x2dd4e0u: goto label_2dd4e0;
        case 0x2dd4e4u: goto label_2dd4e4;
        case 0x2dd4e8u: goto label_2dd4e8;
        case 0x2dd4ecu: goto label_2dd4ec;
        case 0x2dd4f0u: goto label_2dd4f0;
        case 0x2dd4f4u: goto label_2dd4f4;
        case 0x2dd4f8u: goto label_2dd4f8;
        case 0x2dd4fcu: goto label_2dd4fc;
        case 0x2dd500u: goto label_2dd500;
        case 0x2dd504u: goto label_2dd504;
        case 0x2dd508u: goto label_2dd508;
        case 0x2dd50cu: goto label_2dd50c;
        case 0x2dd510u: goto label_2dd510;
        case 0x2dd514u: goto label_2dd514;
        case 0x2dd518u: goto label_2dd518;
        case 0x2dd51cu: goto label_2dd51c;
        case 0x2dd520u: goto label_2dd520;
        case 0x2dd524u: goto label_2dd524;
        case 0x2dd528u: goto label_2dd528;
        case 0x2dd52cu: goto label_2dd52c;
        case 0x2dd530u: goto label_2dd530;
        case 0x2dd534u: goto label_2dd534;
        case 0x2dd538u: goto label_2dd538;
        case 0x2dd53cu: goto label_2dd53c;
        case 0x2dd540u: goto label_2dd540;
        case 0x2dd544u: goto label_2dd544;
        case 0x2dd548u: goto label_2dd548;
        case 0x2dd54cu: goto label_2dd54c;
        case 0x2dd550u: goto label_2dd550;
        case 0x2dd554u: goto label_2dd554;
        case 0x2dd558u: goto label_2dd558;
        case 0x2dd55cu: goto label_2dd55c;
        case 0x2dd560u: goto label_2dd560;
        case 0x2dd564u: goto label_2dd564;
        case 0x2dd568u: goto label_2dd568;
        case 0x2dd56cu: goto label_2dd56c;
        case 0x2dd570u: goto label_2dd570;
        case 0x2dd574u: goto label_2dd574;
        case 0x2dd578u: goto label_2dd578;
        case 0x2dd57cu: goto label_2dd57c;
        case 0x2dd580u: goto label_2dd580;
        case 0x2dd584u: goto label_2dd584;
        case 0x2dd588u: goto label_2dd588;
        case 0x2dd58cu: goto label_2dd58c;
        case 0x2dd590u: goto label_2dd590;
        case 0x2dd594u: goto label_2dd594;
        case 0x2dd598u: goto label_2dd598;
        case 0x2dd59cu: goto label_2dd59c;
        case 0x2dd5a0u: goto label_2dd5a0;
        case 0x2dd5a4u: goto label_2dd5a4;
        case 0x2dd5a8u: goto label_2dd5a8;
        case 0x2dd5acu: goto label_2dd5ac;
        case 0x2dd5b0u: goto label_2dd5b0;
        case 0x2dd5b4u: goto label_2dd5b4;
        case 0x2dd5b8u: goto label_2dd5b8;
        case 0x2dd5bcu: goto label_2dd5bc;
        case 0x2dd5c0u: goto label_2dd5c0;
        case 0x2dd5c4u: goto label_2dd5c4;
        case 0x2dd5c8u: goto label_2dd5c8;
        case 0x2dd5ccu: goto label_2dd5cc;
        case 0x2dd5d0u: goto label_2dd5d0;
        case 0x2dd5d4u: goto label_2dd5d4;
        case 0x2dd5d8u: goto label_2dd5d8;
        case 0x2dd5dcu: goto label_2dd5dc;
        case 0x2dd5e0u: goto label_2dd5e0;
        case 0x2dd5e4u: goto label_2dd5e4;
        case 0x2dd5e8u: goto label_2dd5e8;
        case 0x2dd5ecu: goto label_2dd5ec;
        case 0x2dd5f0u: goto label_2dd5f0;
        case 0x2dd5f4u: goto label_2dd5f4;
        case 0x2dd5f8u: goto label_2dd5f8;
        case 0x2dd5fcu: goto label_2dd5fc;
        case 0x2dd600u: goto label_2dd600;
        case 0x2dd604u: goto label_2dd604;
        case 0x2dd608u: goto label_2dd608;
        case 0x2dd60cu: goto label_2dd60c;
        case 0x2dd610u: goto label_2dd610;
        case 0x2dd614u: goto label_2dd614;
        case 0x2dd618u: goto label_2dd618;
        case 0x2dd61cu: goto label_2dd61c;
        case 0x2dd620u: goto label_2dd620;
        case 0x2dd624u: goto label_2dd624;
        case 0x2dd628u: goto label_2dd628;
        case 0x2dd62cu: goto label_2dd62c;
        default: break;
    }

    ctx->pc = 0x2dd210u;

label_2dd210:
    // 0x2dd210: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2dd210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_2dd214:
    // 0x2dd214: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x2dd214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_2dd218:
    // 0x2dd218: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x2dd218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_2dd21c:
    // 0x2dd21c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2dd21cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dd220:
    // 0x2dd220: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x2dd220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_2dd224:
    // 0x2dd224: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x2dd224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_2dd228:
    // 0x2dd228: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x2dd228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_2dd22c:
    // 0x2dd22c: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x2dd22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_2dd230:
    // 0x2dd230: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x2dd230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_2dd234:
    // 0x2dd234: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x2dd234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_2dd238:
    // 0x2dd238: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2dd238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2dd23c:
    // 0x2dd23c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2dd23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2dd240:
    // 0x2dd240: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x2dd240u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_2dd244:
    // 0x2dd244: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x2dd244u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_2dd248:
    // 0x2dd248: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x2dd248u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_2dd24c:
    // 0x2dd24c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2dd24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2dd250:
    // 0x2dd250: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2dd250u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2dd254:
    // 0x2dd254: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_2dd258:
    if (ctx->pc == 0x2DD258u) {
        ctx->pc = 0x2DD258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD254u;
        // 0x2dd258: 0x8c750000  lw          $s5, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD25Cu;
        goto label_2dd25c;
    }
    ctx->pc = 0x2DD254u;
    {
        const bool branch_taken_0x2dd254 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2DD258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD254u;
        // 0x2dd258: 0x8c750000  lw          $s5, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd254) {
            ctx->pc = 0x2DD264u;
            goto label_2dd264;
        }
    }
    ctx->pc = 0x2DD25Cu;
label_2dd25c:
    // 0x2dd25c: 0x100000e4  b           . + 4 + (0xE4 << 2)
label_2dd260:
    if (ctx->pc == 0x2DD260u) {
        ctx->pc = 0x2DD260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD25Cu;
        // 0x2dd260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD264u;
        goto label_2dd264;
    }
    ctx->pc = 0x2DD25Cu;
    {
        const bool branch_taken_0x2dd25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD25Cu;
        // 0x2dd260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd25c) {
            ctx->pc = 0x2DD5F0u;
            goto label_2dd5f0;
        }
    }
    ctx->pc = 0x2DD264u;
label_2dd264:
    // 0x2dd264: 0xc0e4060  jal         func_390180
label_2dd268:
    if (ctx->pc == 0x2DD268u) {
        ctx->pc = 0x2DD268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD264u;
        // 0x2dd268: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD26Cu;
        goto label_2dd26c;
    }
    ctx->pc = 0x2DD264u;
    SET_GPR_U32(ctx, 31, 0x2DD26Cu);
    ctx->pc = 0x2DD268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD264u;
    // 0x2dd268: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2DD264u, 0x2DD26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD26Cu;
label_2dd26c:
    // 0x2dd26c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2dd26cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dd270:
    // 0x2dd270: 0x124000de  beqz        $s2, . + 4 + (0xDE << 2)
label_2dd274:
    if (ctx->pc == 0x2DD274u) {
        ctx->pc = 0x2DD274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD270u;
        // 0x2dd274: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD278u;
        goto label_2dd278;
    }
    ctx->pc = 0x2DD270u;
    {
        const bool branch_taken_0x2dd270 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD270u;
        // 0x2dd274: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd270) {
            ctx->pc = 0x2DD5ECu;
            goto label_2dd5ec;
        }
    }
    ctx->pc = 0x2DD278u;
label_2dd278:
    // 0x2dd278: 0xc0e57ce  jal         func_395F38
label_2dd27c:
    if (ctx->pc == 0x2DD27Cu) {
        ctx->pc = 0x2DD27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD278u;
        // 0x2dd27c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD280u;
        goto label_2dd280;
    }
    ctx->pc = 0x2DD278u;
    SET_GPR_U32(ctx, 31, 0x2DD280u);
    ctx->pc = 0x2DD27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD278u;
    // 0x2dd27c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2DD278u, 0x2DD280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD280u;
label_2dd280:
    // 0x2dd280: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2dd280u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dd284:
    // 0x2dd284: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_2dd288:
    if (ctx->pc == 0x2DD288u) {
        ctx->pc = 0x2DD288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD284u;
        // 0x2dd288: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD28Cu;
        goto label_2dd28c;
    }
    ctx->pc = 0x2DD284u;
    {
        const bool branch_taken_0x2dd284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd284) {
            ctx->pc = 0x2DD288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD284u;
            // 0x2dd288: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD2C8u;
            goto label_2dd2c8;
        }
    }
    ctx->pc = 0x2DD28Cu;
label_2dd28c:
    // 0x2dd28c: 0x9062010d  lbu         $v0, 0x10D($v1)
    ctx->pc = 0x2dd28cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 269)));
label_2dd290:
    // 0x2dd290: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2dd294:
    if (ctx->pc == 0x2DD294u) {
        ctx->pc = 0x2DD294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD290u;
        // 0x2dd294: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD298u;
        goto label_2dd298;
    }
    ctx->pc = 0x2DD290u;
    {
        const bool branch_taken_0x2dd290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD290u;
        // 0x2dd294: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd290) {
            ctx->pc = 0x2DD2A4u;
            goto label_2dd2a4;
        }
    }
    ctx->pc = 0x2DD298u;
label_2dd298:
    // 0x2dd298: 0x9062010e  lbu         $v0, 0x10E($v1)
    ctx->pc = 0x2dd298u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 270)));
label_2dd29c:
    // 0x2dd29c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2dd2a0:
    if (ctx->pc == 0x2DD2A0u) {
        ctx->pc = 0x2DD2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD29Cu;
        // 0x2dd2a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD2A4u;
        goto label_2dd2a4;
    }
    ctx->pc = 0x2DD29Cu;
    {
        const bool branch_taken_0x2dd29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD29Cu;
        // 0x2dd2a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd29c) {
            ctx->pc = 0x2DD2ACu;
            goto label_2dd2ac;
        }
    }
    ctx->pc = 0x2DD2A4u;
label_2dd2a4:
    // 0x2dd2a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dd2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dd2a8:
    // 0x2dd2a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dd2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dd2ac:
    // 0x2dd2ac: 0x108200cf  beq         $a0, $v0, . + 4 + (0xCF << 2)
label_2dd2b0:
    if (ctx->pc == 0x2DD2B0u) {
        ctx->pc = 0x2DD2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD2ACu;
        // 0x2dd2b0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD2B4u;
        goto label_2dd2b4;
    }
    ctx->pc = 0x2DD2ACu;
    {
        const bool branch_taken_0x2dd2ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DD2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD2ACu;
        // 0x2dd2b0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd2ac) {
            ctx->pc = 0x2DD5ECu;
            goto label_2dd5ec;
        }
    }
    ctx->pc = 0x2DD2B4u;
label_2dd2b4:
    // 0x2dd2b4: 0x94650112  lhu         $a1, 0x112($v1)
    ctx->pc = 0x2dd2b4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 274)));
label_2dd2b8:
    // 0x2dd2b8: 0xc0e44cc  jal         func_391330
label_2dd2bc:
    if (ctx->pc == 0x2DD2BCu) {
        ctx->pc = 0x2DD2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD2B8u;
        // 0x2dd2bc: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD2C0u;
        goto label_2dd2c0;
    }
    ctx->pc = 0x2DD2B8u;
    SET_GPR_U32(ctx, 31, 0x2DD2C0u);
    ctx->pc = 0x2DD2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD2B8u;
    // 0x2dd2bc: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x2DD2B8u, 0x2DD2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD2C0u;
label_2dd2c0:
    // 0x2dd2c0: 0x10000009  b           . + 4 + (0x9 << 2)
label_2dd2c4:
    if (ctx->pc == 0x2DD2C4u) {
        ctx->pc = 0x2DD2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD2C0u;
        // 0x2dd2c4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD2C8u;
        goto label_2dd2c8;
    }
    ctx->pc = 0x2DD2C0u;
    {
        const bool branch_taken_0x2dd2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD2C0u;
        // 0x2dd2c4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd2c0) {
            ctx->pc = 0x2DD2E8u;
            goto label_2dd2e8;
        }
    }
    ctx->pc = 0x2DD2C8u;
label_2dd2c8:
    // 0x2dd2c8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2dd2c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2dd2cc:
    // 0x2dd2cc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2dd2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2dd2d0:
    // 0x2dd2d0: 0x40f809  jalr        $v0
label_2dd2d4:
    if (ctx->pc == 0x2DD2D4u) {
        ctx->pc = 0x2DD2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD2D0u;
        // 0x2dd2d4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD2D8u;
        goto label_2dd2d8;
    }
    ctx->pc = 0x2DD2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DD2D8u);
        ctx->pc = 0x2DD2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD2D0u;
        // 0x2dd2d4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD2D0u, 0x2DD2D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DD2D8u;
label_2dd2d8:
    // 0x2dd2d8: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x2dd2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_2dd2dc:
    // 0x2dd2dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2dd2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2dd2e0:
    // 0x2dd2e0: 0x144000c3  bnez        $v0, . + 4 + (0xC3 << 2)
label_2dd2e4:
    if (ctx->pc == 0x2DD2E4u) {
        ctx->pc = 0x2DD2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD2E0u;
        // 0x2dd2e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD2E8u;
        goto label_2dd2e8;
    }
    ctx->pc = 0x2DD2E0u;
    {
        const bool branch_taken_0x2dd2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD2E0u;
        // 0x2dd2e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd2e0) {
            ctx->pc = 0x2DD5F0u;
            goto label_2dd5f0;
        }
    }
    ctx->pc = 0x2DD2E8u;
label_2dd2e8:
    // 0x2dd2e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2dd2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2dd2ec:
    // 0x2dd2ec: 0xc08bfbc  jal         func_22FEF0
label_2dd2f0:
    if (ctx->pc == 0x2DD2F0u) {
        ctx->pc = 0x2DD2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD2ECu;
        // 0x2dd2f0: 0x26b10090  addiu       $s1, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD2F4u;
        goto label_2dd2f4;
    }
    ctx->pc = 0x2DD2ECu;
    SET_GPR_U32(ctx, 31, 0x2DD2F4u);
    ctx->pc = 0x2DD2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD2ECu;
    // 0x2dd2f0: 0x26b10090  addiu       $s1, $s5, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2DD2ECu, 0x2DD2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD2F4u;
label_2dd2f4:
    // 0x2dd2f4: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x2dd2f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_2dd2f8:
    // 0x2dd2f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dd2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2dd2fc:
    // 0x2dd2fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2dd2fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2dd300:
    // 0x2dd300: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2dd300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dd304:
    // 0x2dd304: 0x240601f4  addiu       $a2, $zero, 0x1F4
    ctx->pc = 0x2dd304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
label_2dd308:
    // 0x2dd308: 0x26a40284  addiu       $a0, $s5, 0x284
    ctx->pc = 0x2dd308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 644));
label_2dd30c:
    // 0x2dd30c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dd30cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dd310:
    // 0x2dd310: 0xc0a6800  jal         func_29A000
label_2dd314:
    if (ctx->pc == 0x2DD314u) {
        ctx->pc = 0x2DD314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD310u;
        // 0x2dd314: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD318u;
        goto label_2dd318;
    }
    ctx->pc = 0x2DD310u;
    SET_GPR_U32(ctx, 31, 0x2DD318u);
    ctx->pc = 0x2DD314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD310u;
    // 0x2dd314: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2DD310u, 0x2DD318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD318u;
label_2dd318:
    // 0x2dd318: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x2dd318u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dd31c:
    // 0x2dd31c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2dd31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2dd320:
    // 0x2dd320: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x2dd320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_2dd324:
    // 0x2dd324: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x2dd324u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2dd328:
    // 0x2dd328: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dd328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2dd32c:
    // 0x2dd32c: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2dd32cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2dd330:
    // 0x2dd330: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2dd330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2dd334:
    // 0x2dd334: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x2dd334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2dd338:
    // 0x2dd338: 0x50a021  addu        $s4, $v0, $s0
    ctx->pc = 0x2dd338u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2dd33c:
    // 0x2dd33c: 0xc0f809  jalr        $a2
label_2dd340:
    if (ctx->pc == 0x2DD340u) {
        ctx->pc = 0x2DD340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD33Cu;
        // 0x2dd340: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD344u;
        goto label_2dd344;
    }
    ctx->pc = 0x2DD33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2DD344u);
        ctx->pc = 0x2DD340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD33Cu;
        // 0x2dd340: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD33Cu, 0x2DD344u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DD344u;
label_2dd344:
    // 0x2dd344: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x2dd344u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_2dd348:
    // 0x2dd348: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x2dd348u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2dd34c:
    // 0x2dd34c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2dd34cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2dd350:
    // 0x2dd350: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2dd350u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2dd354:
    // 0x2dd354: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2dd354u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2dd358:
    // 0x2dd358: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2dd358u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2dd35c:
    // 0x2dd35c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2dd35cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2dd360:
    // 0x2dd360: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2dd360u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2dd364:
    // 0x2dd364: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x2dd364u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2dd368:
    // 0x2dd368: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2dd368u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2dd36c:
    // 0x2dd36c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2dd36cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2dd370:
    // 0x2dd370: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2dd370u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2dd374:
    // 0x2dd374: 0x4a0003bf  vwaitq
    ctx->pc = 0x2dd374u;
    // VWAITQ (Q already resolved in this runtime)
label_2dd378:
    // 0x2dd378: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x2dd378u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2dd37c:
    // 0x2dd37c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x2dd37cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_2dd380:
    // 0x2dd380: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2dd380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_2dd384:
    // 0x2dd384: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2dd384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2dd388:
    // 0x2dd388: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2dd388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_2dd38c:
    // 0x2dd38c: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x2dd38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
label_2dd390:
    // 0x2dd390: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2dd390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_2dd394:
    // 0x2dd394: 0x12c00009  beqz        $s6, . + 4 + (0x9 << 2)
label_2dd398:
    if (ctx->pc == 0x2DD398u) {
        ctx->pc = 0x2DD398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD394u;
        // 0x2dd398: 0x7fa40050  sq          $a0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD39Cu;
        goto label_2dd39c;
    }
    ctx->pc = 0x2DD394u;
    {
        const bool branch_taken_0x2dd394 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD394u;
        // 0x2dd398: 0x7fa40050  sq          $a0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd394) {
            ctx->pc = 0x2DD3BCu;
            goto label_2dd3bc;
        }
    }
    ctx->pc = 0x2DD39Cu;
label_2dd39c:
    // 0x2dd39c: 0xc6c0007c  lwc1        $f0, 0x7C($s6)
    ctx->pc = 0x2dd39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd3a0:
    // 0x2dd3a0: 0xc6c10078  lwc1        $f1, 0x78($s6)
    ctx->pc = 0x2dd3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd3a4:
    // 0x2dd3a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dd3a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dd3a8:
    // 0x2dd3a8: 0x0  nop
    ctx->pc = 0x2dd3a8u;
    // NOP
label_2dd3ac:
    // 0x2dd3ac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2dd3b0:
    if (ctx->pc == 0x2DD3B0u) {
        ctx->pc = 0x2DD3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD3ACu;
        // 0x2dd3b0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD3B4u;
        goto label_2dd3b4;
    }
    ctx->pc = 0x2DD3ACu;
    {
        const bool branch_taken_0x2dd3ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DD3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD3ACu;
        // 0x2dd3b0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd3ac) {
            ctx->pc = 0x2DD3C4u;
            goto label_2dd3c4;
        }
    }
    ctx->pc = 0x2DD3B4u;
label_2dd3b4:
    // 0x2dd3b4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2dd3b8:
    if (ctx->pc == 0x2DD3B8u) {
        ctx->pc = 0x2DD3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD3B4u;
        // 0x2dd3b8: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD3BCu;
        goto label_2dd3bc;
    }
    ctx->pc = 0x2DD3B4u;
    {
        const bool branch_taken_0x2dd3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD3B4u;
        // 0x2dd3b8: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd3b4) {
            ctx->pc = 0x2DD3C4u;
            goto label_2dd3c4;
        }
    }
    ctx->pc = 0x2DD3BCu;
label_2dd3bc:
    // 0x2dd3bc: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2dd3bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_2dd3c0:
    // 0x2dd3c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2dd3c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2dd3c4:
    // 0x2dd3c4: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x2dd3c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2dd3c8:
    // 0x2dd3c8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2dd3c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2dd3cc:
    // 0x2dd3cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dd3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dd3d0:
    // 0x2dd3d0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2dd3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2dd3d4:
    // 0x2dd3d4: 0xc094904  jal         func_252410
label_2dd3d8:
    if (ctx->pc == 0x2DD3D8u) {
        ctx->pc = 0x2DD3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD3D4u;
        // 0x2dd3d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD3DCu;
        goto label_2dd3dc;
    }
    ctx->pc = 0x2DD3D4u;
    SET_GPR_U32(ctx, 31, 0x2DD3DCu);
    ctx->pc = 0x2DD3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD3D4u;
    // 0x2dd3d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252410u, 0x2DD3D4u, 0x2DD3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD3DCu;
label_2dd3dc:
    // 0x2dd3dc: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
label_2dd3e0:
    if (ctx->pc == 0x2DD3E0u) {
        ctx->pc = 0x2DD3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD3DCu;
        // 0x2dd3e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD3E4u;
        goto label_2dd3e4;
    }
    ctx->pc = 0x2DD3DCu;
    {
        const bool branch_taken_0x2dd3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD3DCu;
        // 0x2dd3e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd3dc) {
            ctx->pc = 0x2DD5ECu;
            goto label_2dd5ec;
        }
    }
    ctx->pc = 0x2DD3E4u;
label_2dd3e4:
    // 0x2dd3e4: 0xc0cdb38  jal         func_336CE0
label_2dd3e8:
    if (ctx->pc == 0x2DD3E8u) {
        ctx->pc = 0x2DD3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD3E4u;
        // 0x2dd3e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD3ECu;
        goto label_2dd3ec;
    }
    ctx->pc = 0x2DD3E4u;
    SET_GPR_U32(ctx, 31, 0x2DD3ECu);
    ctx->pc = 0x2DD3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD3E4u;
    // 0x2dd3e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2DD3E4u, 0x2DD3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD3ECu;
label_2dd3ec:
    // 0x2dd3ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dd3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2dd3f0:
    // 0x2dd3f0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2dd3f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_2dd3f4:
    // 0x2dd3f4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2dd3f4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2dd3f8:
    // 0x2dd3f8: 0x4601b034  c.lt.s      $f22, $f1
    ctx->pc = 0x2dd3f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dd3fc:
    // 0x2dd3fc: 0x0  nop
    ctx->pc = 0x2dd3fcu;
    // NOP
label_2dd400:
    // 0x2dd400: 0x4502001f  bc1fl       . + 4 + (0x1F << 2)
label_2dd404:
    if (ctx->pc == 0x2DD404u) {
        ctx->pc = 0x2DD404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD400u;
        // 0x2dd404: 0x86e40002  lh          $a0, 0x2($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD408u;
        goto label_2dd408;
    }
    ctx->pc = 0x2DD400u;
    {
        const bool branch_taken_0x2dd400 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd400) {
            ctx->pc = 0x2DD404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD400u;
            // 0x2dd404: 0x86e40002  lh          $a0, 0x2($s7) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD480u;
            goto label_2dd480;
        }
    }
    ctx->pc = 0x2DD408u;
label_2dd408:
    // 0x2dd408: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x2dd408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2dd40c:
    // 0x2dd40c: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x2dd40cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2dd410:
    // 0x2dd410: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
label_2dd414:
    if (ctx->pc == 0x2DD414u) {
        ctx->pc = 0x2DD414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD410u;
        // 0x2dd414: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD418u;
        goto label_2dd418;
    }
    ctx->pc = 0x2DD410u;
    {
        const bool branch_taken_0x2dd410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD410u;
        // 0x2dd414: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd410) {
            ctx->pc = 0x2DD5ECu;
            goto label_2dd5ec;
        }
    }
    ctx->pc = 0x2DD418u;
label_2dd418:
    // 0x2dd418: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2dd418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2dd41c:
    // 0x2dd41c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dd41cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dd420:
    // 0x2dd420: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x2dd420u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_2dd424:
    // 0x2dd424: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dd424u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dd428:
    // 0x2dd428: 0x0  nop
    ctx->pc = 0x2dd428u;
    // NOP
label_2dd42c:
    // 0x2dd42c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2dd430:
    if (ctx->pc == 0x2DD430u) {
        ctx->pc = 0x2DD430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD42Cu;
        // 0x2dd430: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD434u;
        goto label_2dd434;
    }
    ctx->pc = 0x2DD42Cu;
    {
        const bool branch_taken_0x2dd42c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DD430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD42Cu;
        // 0x2dd430: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd42c) {
            ctx->pc = 0x2DD438u;
            goto label_2dd438;
        }
    }
    ctx->pc = 0x2DD434u;
label_2dd434:
    // 0x2dd434: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2dd434u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2dd438:
    // 0x2dd438: 0xc0a367c  jal         func_28D9F0
label_2dd43c:
    if (ctx->pc == 0x2DD43Cu) {
        ctx->pc = 0x2DD43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD438u;
        // 0x2dd43c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD440u;
        goto label_2dd440;
    }
    ctx->pc = 0x2DD438u;
    SET_GPR_U32(ctx, 31, 0x2DD440u);
    ctx->pc = 0x2DD43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD438u;
    // 0x2dd43c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DD438u, 0x2DD440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD440u;
label_2dd440:
    // 0x2dd440: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dd440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dd444:
    // 0x2dd444: 0x1080ff85  beqz        $a0, . + 4 + (-0x7B << 2)
label_2dd448:
    if (ctx->pc == 0x2DD448u) {
        ctx->pc = 0x2DD448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD444u;
        // 0x2dd448: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD44Cu;
        goto label_2dd44c;
    }
    ctx->pc = 0x2DD444u;
    {
        const bool branch_taken_0x2dd444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD444u;
        // 0x2dd448: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd444) {
            ctx->pc = 0x2DD25Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dd25c;
        }
    }
    ctx->pc = 0x2DD44Cu;
label_2dd44c:
    // 0x2dd44c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2dd44cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2dd450:
    // 0x2dd450: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2dd450u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2dd454:
    // 0x2dd454: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2dd454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dd458:
    // 0x2dd458: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x2dd458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_2dd45c:
    // 0x2dd45c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2dd45cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2dd460:
    // 0x2dd460: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2dd460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2dd464:
    // 0x2dd464: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2dd464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dd468:
    // 0x2dd468: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2dd468u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dd46c:
    // 0x2dd46c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2dd46cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dd470:
    // 0x2dd470: 0xc0bee7a  jal         func_2FB9E8
label_2dd474:
    if (ctx->pc == 0x2DD474u) {
        ctx->pc = 0x2DD474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD470u;
        // 0x2dd474: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD478u;
        goto label_2dd478;
    }
    ctx->pc = 0x2DD470u;
    SET_GPR_U32(ctx, 31, 0x2DD478u);
    ctx->pc = 0x2DD474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD470u;
    // 0x2dd474: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2DD470u, 0x2DD478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD478u;
label_2dd478:
    // 0x2dd478: 0x1000005d  b           . + 4 + (0x5D << 2)
label_2dd47c:
    if (ctx->pc == 0x2DD47Cu) {
        ctx->pc = 0x2DD47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD478u;
        // 0x2dd47c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD480u;
        goto label_2dd480;
    }
    ctx->pc = 0x2DD478u;
    {
        const bool branch_taken_0x2dd478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD478u;
        // 0x2dd47c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd478) {
            ctx->pc = 0x2DD5F0u;
            goto label_2dd5f0;
        }
    }
    ctx->pc = 0x2DD480u;
label_2dd480:
    // 0x2dd480: 0x27c24b00  addiu       $v0, $fp, 0x4B00
    ctx->pc = 0x2dd480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
label_2dd484:
    // 0x2dd484: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2dd484u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2dd488:
    // 0x2dd488: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2dd488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2dd48c:
    // 0x2dd48c: 0xc0cd7d2  jal         func_335F48
label_2dd490:
    if (ctx->pc == 0x2DD490u) {
        ctx->pc = 0x2DD490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD48Cu;
        // 0x2dd490: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD494u;
        goto label_2dd494;
    }
    ctx->pc = 0x2DD48Cu;
    SET_GPR_U32(ctx, 31, 0x2DD494u);
    ctx->pc = 0x2DD490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD48Cu;
    // 0x2dd490: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2DD48Cu, 0x2DD494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD494u;
label_2dd494:
    // 0x2dd494: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2dd494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2dd498:
    // 0x2dd498: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dd498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dd49c:
    // 0x2dd49c: 0xc0cd780  jal         func_335E00
label_2dd4a0:
    if (ctx->pc == 0x2DD4A0u) {
        ctx->pc = 0x2DD4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD49Cu;
        // 0x2dd4a0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD4A4u;
        goto label_2dd4a4;
    }
    ctx->pc = 0x2DD49Cu;
    SET_GPR_U32(ctx, 31, 0x2DD4A4u);
    ctx->pc = 0x2DD4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD49Cu;
    // 0x2dd4a0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2DD49Cu, 0x2DD4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD4A4u;
label_2dd4a4:
    // 0x2dd4a4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2dd4a4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2dd4a8:
    // 0x2dd4a8: 0xc0cd742  jal         func_335D08
label_2dd4ac:
    if (ctx->pc == 0x2DD4ACu) {
        ctx->pc = 0x2DD4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD4A8u;
        // 0x2dd4ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD4B0u;
        goto label_2dd4b0;
    }
    ctx->pc = 0x2DD4A8u;
    SET_GPR_U32(ctx, 31, 0x2DD4B0u);
    ctx->pc = 0x2DD4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD4A8u;
    // 0x2dd4ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2DD4A8u, 0x2DD4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD4B0u;
label_2dd4b0:
    // 0x2dd4b0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2dd4b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2dd4b4:
    // 0x2dd4b4: 0xc0cdd2e  jal         func_3374B8
label_2dd4b8:
    if (ctx->pc == 0x2DD4B8u) {
        ctx->pc = 0x2DD4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD4B4u;
        // 0x2dd4b8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD4BCu;
        goto label_2dd4bc;
    }
    ctx->pc = 0x2DD4B4u;
    SET_GPR_U32(ctx, 31, 0x2DD4BCu);
    ctx->pc = 0x2DD4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD4B4u;
    // 0x2dd4b8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2DD4B4u, 0x2DD4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD4BCu;
label_2dd4bc:
    // 0x2dd4bc: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2dd4bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_2dd4c0:
    // 0x2dd4c0: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2dd4c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2dd4c4:
    // 0x2dd4c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dd4c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dd4c8:
    // 0x2dd4c8: 0x0  nop
    ctx->pc = 0x2dd4c8u;
    // NOP
label_2dd4cc:
    // 0x2dd4cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dd4ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dd4d0:
    // 0x2dd4d0: 0x0  nop
    ctx->pc = 0x2dd4d0u;
    // NOP
label_2dd4d4:
    // 0x2dd4d4: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
label_2dd4d8:
    if (ctx->pc == 0x2DD4D8u) {
        ctx->pc = 0x2DD4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD4D4u;
        // 0x2dd4d8: 0x8e620018  lw          $v0, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD4DCu;
        goto label_2dd4dc;
    }
    ctx->pc = 0x2DD4D4u;
    {
        const bool branch_taken_0x2dd4d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd4d4) {
            ctx->pc = 0x2DD4D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD4D4u;
            // 0x2dd4d8: 0x8e620018  lw          $v0, 0x18($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD518u;
            goto label_2dd518;
        }
    }
    ctx->pc = 0x2DD4DCu;
label_2dd4dc:
    // 0x2dd4dc: 0xc0a367c  jal         func_28D9F0
label_2dd4e0:
    if (ctx->pc == 0x2DD4E0u) {
        ctx->pc = 0x2DD4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD4DCu;
        // 0x2dd4e0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD4E4u;
        goto label_2dd4e4;
    }
    ctx->pc = 0x2DD4DCu;
    SET_GPR_U32(ctx, 31, 0x2DD4E4u);
    ctx->pc = 0x2DD4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD4DCu;
    // 0x2dd4e0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DD4DCu, 0x2DD4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD4E4u;
label_2dd4e4:
    // 0x2dd4e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dd4e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dd4e8:
    // 0x2dd4e8: 0x12000041  beqz        $s0, . + 4 + (0x41 << 2)
label_2dd4ec:
    if (ctx->pc == 0x2DD4ECu) {
        ctx->pc = 0x2DD4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD4E8u;
        // 0x2dd4ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD4F0u;
        goto label_2dd4f0;
    }
    ctx->pc = 0x2DD4E8u;
    {
        const bool branch_taken_0x2dd4e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD4E8u;
        // 0x2dd4ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd4e8) {
            ctx->pc = 0x2DD5F0u;
            goto label_2dd5f0;
        }
    }
    ctx->pc = 0x2DD4F0u;
label_2dd4f0:
    // 0x2dd4f0: 0xc0884f6  jal         func_2213D8
label_2dd4f4:
    if (ctx->pc == 0x2DD4F4u) {
        ctx->pc = 0x2DD4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD4F0u;
        // 0x2dd4f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD4F8u;
        goto label_2dd4f8;
    }
    ctx->pc = 0x2DD4F0u;
    SET_GPR_U32(ctx, 31, 0x2DD4F8u);
    ctx->pc = 0x2DD4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD4F0u;
    // 0x2dd4f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2DD4F0u, 0x2DD4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD4F8u;
label_2dd4f8:
    // 0x2dd4f8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2dd4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2dd4fc:
    // 0x2dd4fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dd500:
    // 0x2dd500: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2dd500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dd504:
    // 0x2dd504: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2dd504u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2dd508:
    // 0x2dd508: 0xc0bf800  jal         func_2FE000
label_2dd50c:
    if (ctx->pc == 0x2DD50Cu) {
        ctx->pc = 0x2DD50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD508u;
        // 0x2dd50c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD510u;
        goto label_2dd510;
    }
    ctx->pc = 0x2DD508u;
    SET_GPR_U32(ctx, 31, 0x2DD510u);
    ctx->pc = 0x2DD50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD508u;
    // 0x2dd50c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2DD508u, 0x2DD510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD510u;
label_2dd510:
    // 0x2dd510: 0x10000037  b           . + 4 + (0x37 << 2)
label_2dd514:
    if (ctx->pc == 0x2DD514u) {
        ctx->pc = 0x2DD514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD510u;
        // 0x2dd514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD518u;
        goto label_2dd518;
    }
    ctx->pc = 0x2DD510u;
    {
        const bool branch_taken_0x2dd510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD510u;
        // 0x2dd514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd510) {
            ctx->pc = 0x2DD5F0u;
            goto label_2dd5f0;
        }
    }
    ctx->pc = 0x2DD518u;
label_2dd518:
    // 0x2dd518: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
label_2dd51c:
    if (ctx->pc == 0x2DD51Cu) {
        ctx->pc = 0x2DD51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD518u;
        // 0x2dd51c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD520u;
        goto label_2dd520;
    }
    ctx->pc = 0x2DD518u;
    {
        const bool branch_taken_0x2dd518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD518u;
        // 0x2dd51c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd518) {
            ctx->pc = 0x2DD5F0u;
            goto label_2dd5f0;
        }
    }
    ctx->pc = 0x2DD520u;
label_2dd520:
    // 0x2dd520: 0xc0a47b4  jal         func_291ED0
label_2dd524:
    if (ctx->pc == 0x2DD524u) {
        ctx->pc = 0x2DD524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD520u;
        // 0x2dd524: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD528u;
        goto label_2dd528;
    }
    ctx->pc = 0x2DD520u;
    SET_GPR_U32(ctx, 31, 0x2DD528u);
    ctx->pc = 0x2DD524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD520u;
    // 0x2dd524: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2DD520u, 0x2DD528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD528u;
label_2dd528:
    // 0x2dd528: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dd528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dd52c:
    // 0x2dd52c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dd52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dd530:
    // 0x2dd530: 0x56020019  bnel        $s0, $v0, . + 4 + (0x19 << 2)
label_2dd534:
    if (ctx->pc == 0x2DD534u) {
        ctx->pc = 0x2DD534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD530u;
        // 0x2dd534: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD538u;
        goto label_2dd538;
    }
    ctx->pc = 0x2DD530u;
    {
        const bool branch_taken_0x2dd530 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2dd530) {
            ctx->pc = 0x2DD534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD530u;
            // 0x2dd534: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD598u;
            goto label_2dd598;
        }
    }
    ctx->pc = 0x2DD538u;
label_2dd538:
    // 0x2dd538: 0xc0a4802  jal         func_292008
label_2dd53c:
    if (ctx->pc == 0x2DD53Cu) {
        ctx->pc = 0x2DD540u;
        goto label_2dd540;
    }
    ctx->pc = 0x2DD538u;
    SET_GPR_U32(ctx, 31, 0x2DD540u);
    ctx->pc = 0x292008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292008u, 0x2DD538u, 0x2DD540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD540u;
label_2dd540:
    // 0x2dd540: 0x14500014  bne         $v0, $s0, . + 4 + (0x14 << 2)
label_2dd544:
    if (ctx->pc == 0x2DD544u) {
        ctx->pc = 0x2DD544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD540u;
        // 0x2dd544: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD548u;
        goto label_2dd548;
    }
    ctx->pc = 0x2DD540u;
    {
        const bool branch_taken_0x2dd540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2DD544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD540u;
        // 0x2dd544: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd540) {
            ctx->pc = 0x2DD594u;
            goto label_2dd594;
        }
    }
    ctx->pc = 0x2DD548u;
label_2dd548:
    // 0x2dd548: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2dd548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2dd54c:
    // 0x2dd54c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2dd54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2dd550:
    // 0x2dd550: 0xc0cd4ee  jal         func_3353B8
label_2dd554:
    if (ctx->pc == 0x2DD554u) {
        ctx->pc = 0x2DD554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD550u;
        // 0x2dd554: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD558u;
        goto label_2dd558;
    }
    ctx->pc = 0x2DD550u;
    SET_GPR_U32(ctx, 31, 0x2DD558u);
    ctx->pc = 0x2DD554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD550u;
    // 0x2dd554: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2DD550u, 0x2DD558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD558u;
label_2dd558:
    // 0x2dd558: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x2dd558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_2dd55c:
    // 0x2dd55c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2dd55cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2dd560:
    // 0x2dd560: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2dd560u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2dd564:
    // 0x2dd564: 0x8c89bd30  lw          $t1, -0x42D0($a0)
    ctx->pc = 0x2dd564u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950192)));
label_2dd568:
    // 0x2dd568: 0x2402008f  addiu       $v0, $zero, 0x8F
    ctx->pc = 0x2dd568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_2dd56c:
    // 0x2dd56c: 0x2405008e  addiu       $a1, $zero, 0x8E
    ctx->pc = 0x2dd56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
label_2dd570:
    // 0x2dd570: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x2dd570u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_2dd574:
    // 0x2dd574: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2dd574u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_2dd578:
    // 0x2dd578: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2dd578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2dd57c:
    // 0x2dd57c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dd57cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dd580:
    // 0x2dd580: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dd580u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dd584:
    // 0x2dd584: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2dd584u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dd588:
    // 0x2dd588: 0xc088178  jal         func_2205E0
label_2dd58c:
    if (ctx->pc == 0x2DD58Cu) {
        ctx->pc = 0x2DD58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD588u;
        // 0x2dd58c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD590u;
        goto label_2dd590;
    }
    ctx->pc = 0x2DD588u;
    SET_GPR_U32(ctx, 31, 0x2DD590u);
    ctx->pc = 0x2DD58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD588u;
    // 0x2dd58c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2DD588u, 0x2DD590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD590u;
label_2dd590:
    // 0x2dd590: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dd590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dd594:
    // 0x2dd594: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x2dd594u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2dd598:
    // 0x2dd598: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_2dd59c:
    if (ctx->pc == 0x2DD59Cu) {
        ctx->pc = 0x2DD59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD598u;
        // 0x2dd59c: 0xae620018  sw          $v0, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD5A0u;
        goto label_2dd5a0;
    }
    ctx->pc = 0x2DD598u;
    {
        const bool branch_taken_0x2dd598 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD598u;
        // 0x2dd59c: 0xae620018  sw          $v0, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd598) {
            ctx->pc = 0x2DD5BCu;
            goto label_2dd5bc;
        }
    }
    ctx->pc = 0x2DD5A0u;
label_2dd5a0:
    // 0x2dd5a0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2dd5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2dd5a4:
    // 0x2dd5a4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2dd5a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2dd5a8:
    // 0x2dd5a8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2dd5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2dd5ac:
    // 0x2dd5ac: 0x40f809  jalr        $v0
label_2dd5b0:
    if (ctx->pc == 0x2DD5B0u) {
        ctx->pc = 0x2DD5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD5ACu;
        // 0x2dd5b0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD5B4u;
        goto label_2dd5b4;
    }
    ctx->pc = 0x2DD5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DD5B4u);
        ctx->pc = 0x2DD5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD5ACu;
        // 0x2dd5b0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD5ACu, 0x2DD5B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DD5B4u;
label_2dd5b4:
    // 0x2dd5b4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2dd5b8:
    if (ctx->pc == 0x2DD5B8u) {
        ctx->pc = 0x2DD5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD5B4u;
        // 0x2dd5b8: 0xae020128  sw          $v0, 0x128($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD5BCu;
        goto label_2dd5bc;
    }
    ctx->pc = 0x2DD5B4u;
    {
        const bool branch_taken_0x2dd5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD5B4u;
        // 0x2dd5b8: 0xae020128  sw          $v0, 0x128($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd5b4) {
            ctx->pc = 0x2DD5C8u;
            goto label_2dd5c8;
        }
    }
    ctx->pc = 0x2DD5BCu;
label_2dd5bc:
    // 0x2dd5bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2dd5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2dd5c0:
    // 0x2dd5c0: 0x8c42bd30  lw          $v0, -0x42D0($v0)
    ctx->pc = 0x2dd5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2dd5c4:
    // 0x2dd5c4: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x2dd5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
label_2dd5c8:
    // 0x2dd5c8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2dd5c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2dd5cc:
    // 0x2dd5cc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2dd5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2dd5d0:
    // 0x2dd5d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2dd5d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2dd5d4:
    // 0x2dd5d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dd5d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dd5d8:
    // 0x2dd5d8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2dd5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2dd5dc:
    // 0x2dd5dc: 0xc0a3892  jal         func_28E248
label_2dd5e0:
    if (ctx->pc == 0x2DD5E0u) {
        ctx->pc = 0x2DD5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD5DCu;
        // 0x2dd5e0: 0x24070064  addiu       $a3, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD5E4u;
        goto label_2dd5e4;
    }
    ctx->pc = 0x2DD5DCu;
    SET_GPR_U32(ctx, 31, 0x2DD5E4u);
    ctx->pc = 0x2DD5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD5DCu;
    // 0x2dd5e0: 0x24070064  addiu       $a3, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2DD5DCu, 0x2DD5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD5E4u;
label_2dd5e4:
    // 0x2dd5e4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2dd5e8:
    if (ctx->pc == 0x2DD5E8u) {
        ctx->pc = 0x2DD5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD5E4u;
        // 0x2dd5e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD5ECu;
        goto label_2dd5ec;
    }
    ctx->pc = 0x2DD5E4u;
    {
        const bool branch_taken_0x2dd5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD5E4u;
        // 0x2dd5e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd5e4) {
            ctx->pc = 0x2DD5F0u;
            goto label_2dd5f0;
        }
    }
    ctx->pc = 0x2DD5ECu;
label_2dd5ec:
    // 0x2dd5ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2dd5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2dd5f0:
    // 0x2dd5f0: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x2dd5f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2dd5f4:
    // 0x2dd5f4: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x2dd5f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2dd5f8:
    // 0x2dd5f8: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x2dd5f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2dd5fc:
    // 0x2dd5fc: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x2dd5fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2dd600:
    // 0x2dd600: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x2dd600u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2dd604:
    // 0x2dd604: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x2dd604u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2dd608:
    // 0x2dd608: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x2dd608u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2dd60c:
    // 0x2dd60c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x2dd60cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2dd610:
    // 0x2dd610: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2dd610u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2dd614:
    // 0x2dd614: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2dd614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2dd618:
    // 0x2dd618: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x2dd618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2dd61c:
    // 0x2dd61c: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x2dd61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2dd620:
    // 0x2dd620: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x2dd620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2dd624:
    // 0x2dd624: 0x3e00008  jr          $ra
label_2dd628:
    if (ctx->pc == 0x2DD628u) {
        ctx->pc = 0x2DD628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD624u;
        // 0x2dd628: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD62Cu;
        goto label_2dd62c;
    }
    ctx->pc = 0x2DD624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD624u;
        // 0x2dd628: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD62Cu;
label_2dd62c:
    // 0x2dd62c: 0x0  nop
    ctx->pc = 0x2dd62cu;
    // NOP
    ctx->pc = 0x2dd630u;
}
