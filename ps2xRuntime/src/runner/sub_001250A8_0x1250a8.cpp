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

// Function: sub_001250A8
// Address: 0x1250a8 - 0x1254f0
void sub_001250A8_0x1250a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001250A8_0x1250a8");
#endif

    switch (ctx->pc) {
        case 0x1250a8u: goto label_1250a8;
        case 0x1250acu: goto label_1250ac;
        case 0x1250b0u: goto label_1250b0;
        case 0x1250b4u: goto label_1250b4;
        case 0x1250b8u: goto label_1250b8;
        case 0x1250bcu: goto label_1250bc;
        case 0x1250c0u: goto label_1250c0;
        case 0x1250c4u: goto label_1250c4;
        case 0x1250c8u: goto label_1250c8;
        case 0x1250ccu: goto label_1250cc;
        case 0x1250d0u: goto label_1250d0;
        case 0x1250d4u: goto label_1250d4;
        case 0x1250d8u: goto label_1250d8;
        case 0x1250dcu: goto label_1250dc;
        case 0x1250e0u: goto label_1250e0;
        case 0x1250e4u: goto label_1250e4;
        case 0x1250e8u: goto label_1250e8;
        case 0x1250ecu: goto label_1250ec;
        case 0x1250f0u: goto label_1250f0;
        case 0x1250f4u: goto label_1250f4;
        case 0x1250f8u: goto label_1250f8;
        case 0x1250fcu: goto label_1250fc;
        case 0x125100u: goto label_125100;
        case 0x125104u: goto label_125104;
        case 0x125108u: goto label_125108;
        case 0x12510cu: goto label_12510c;
        case 0x125110u: goto label_125110;
        case 0x125114u: goto label_125114;
        case 0x125118u: goto label_125118;
        case 0x12511cu: goto label_12511c;
        case 0x125120u: goto label_125120;
        case 0x125124u: goto label_125124;
        case 0x125128u: goto label_125128;
        case 0x12512cu: goto label_12512c;
        case 0x125130u: goto label_125130;
        case 0x125134u: goto label_125134;
        case 0x125138u: goto label_125138;
        case 0x12513cu: goto label_12513c;
        case 0x125140u: goto label_125140;
        case 0x125144u: goto label_125144;
        case 0x125148u: goto label_125148;
        case 0x12514cu: goto label_12514c;
        case 0x125150u: goto label_125150;
        case 0x125154u: goto label_125154;
        case 0x125158u: goto label_125158;
        case 0x12515cu: goto label_12515c;
        case 0x125160u: goto label_125160;
        case 0x125164u: goto label_125164;
        case 0x125168u: goto label_125168;
        case 0x12516cu: goto label_12516c;
        case 0x125170u: goto label_125170;
        case 0x125174u: goto label_125174;
        case 0x125178u: goto label_125178;
        case 0x12517cu: goto label_12517c;
        case 0x125180u: goto label_125180;
        case 0x125184u: goto label_125184;
        case 0x125188u: goto label_125188;
        case 0x12518cu: goto label_12518c;
        case 0x125190u: goto label_125190;
        case 0x125194u: goto label_125194;
        case 0x125198u: goto label_125198;
        case 0x12519cu: goto label_12519c;
        case 0x1251a0u: goto label_1251a0;
        case 0x1251a4u: goto label_1251a4;
        case 0x1251a8u: goto label_1251a8;
        case 0x1251acu: goto label_1251ac;
        case 0x1251b0u: goto label_1251b0;
        case 0x1251b4u: goto label_1251b4;
        case 0x1251b8u: goto label_1251b8;
        case 0x1251bcu: goto label_1251bc;
        case 0x1251c0u: goto label_1251c0;
        case 0x1251c4u: goto label_1251c4;
        case 0x1251c8u: goto label_1251c8;
        case 0x1251ccu: goto label_1251cc;
        case 0x1251d0u: goto label_1251d0;
        case 0x1251d4u: goto label_1251d4;
        case 0x1251d8u: goto label_1251d8;
        case 0x1251dcu: goto label_1251dc;
        case 0x1251e0u: goto label_1251e0;
        case 0x1251e4u: goto label_1251e4;
        case 0x1251e8u: goto label_1251e8;
        case 0x1251ecu: goto label_1251ec;
        case 0x1251f0u: goto label_1251f0;
        case 0x1251f4u: goto label_1251f4;
        case 0x1251f8u: goto label_1251f8;
        case 0x1251fcu: goto label_1251fc;
        case 0x125200u: goto label_125200;
        case 0x125204u: goto label_125204;
        case 0x125208u: goto label_125208;
        case 0x12520cu: goto label_12520c;
        case 0x125210u: goto label_125210;
        case 0x125214u: goto label_125214;
        case 0x125218u: goto label_125218;
        case 0x12521cu: goto label_12521c;
        case 0x125220u: goto label_125220;
        case 0x125224u: goto label_125224;
        case 0x125228u: goto label_125228;
        case 0x12522cu: goto label_12522c;
        case 0x125230u: goto label_125230;
        case 0x125234u: goto label_125234;
        case 0x125238u: goto label_125238;
        case 0x12523cu: goto label_12523c;
        case 0x125240u: goto label_125240;
        case 0x125244u: goto label_125244;
        case 0x125248u: goto label_125248;
        case 0x12524cu: goto label_12524c;
        case 0x125250u: goto label_125250;
        case 0x125254u: goto label_125254;
        case 0x125258u: goto label_125258;
        case 0x12525cu: goto label_12525c;
        case 0x125260u: goto label_125260;
        case 0x125264u: goto label_125264;
        case 0x125268u: goto label_125268;
        case 0x12526cu: goto label_12526c;
        case 0x125270u: goto label_125270;
        case 0x125274u: goto label_125274;
        case 0x125278u: goto label_125278;
        case 0x12527cu: goto label_12527c;
        case 0x125280u: goto label_125280;
        case 0x125284u: goto label_125284;
        case 0x125288u: goto label_125288;
        case 0x12528cu: goto label_12528c;
        case 0x125290u: goto label_125290;
        case 0x125294u: goto label_125294;
        case 0x125298u: goto label_125298;
        case 0x12529cu: goto label_12529c;
        case 0x1252a0u: goto label_1252a0;
        case 0x1252a4u: goto label_1252a4;
        case 0x1252a8u: goto label_1252a8;
        case 0x1252acu: goto label_1252ac;
        case 0x1252b0u: goto label_1252b0;
        case 0x1252b4u: goto label_1252b4;
        case 0x1252b8u: goto label_1252b8;
        case 0x1252bcu: goto label_1252bc;
        case 0x1252c0u: goto label_1252c0;
        case 0x1252c4u: goto label_1252c4;
        case 0x1252c8u: goto label_1252c8;
        case 0x1252ccu: goto label_1252cc;
        case 0x1252d0u: goto label_1252d0;
        case 0x1252d4u: goto label_1252d4;
        case 0x1252d8u: goto label_1252d8;
        case 0x1252dcu: goto label_1252dc;
        case 0x1252e0u: goto label_1252e0;
        case 0x1252e4u: goto label_1252e4;
        case 0x1252e8u: goto label_1252e8;
        case 0x1252ecu: goto label_1252ec;
        case 0x1252f0u: goto label_1252f0;
        case 0x1252f4u: goto label_1252f4;
        case 0x1252f8u: goto label_1252f8;
        case 0x1252fcu: goto label_1252fc;
        case 0x125300u: goto label_125300;
        case 0x125304u: goto label_125304;
        case 0x125308u: goto label_125308;
        case 0x12530cu: goto label_12530c;
        case 0x125310u: goto label_125310;
        case 0x125314u: goto label_125314;
        case 0x125318u: goto label_125318;
        case 0x12531cu: goto label_12531c;
        case 0x125320u: goto label_125320;
        case 0x125324u: goto label_125324;
        case 0x125328u: goto label_125328;
        case 0x12532cu: goto label_12532c;
        case 0x125330u: goto label_125330;
        case 0x125334u: goto label_125334;
        case 0x125338u: goto label_125338;
        case 0x12533cu: goto label_12533c;
        case 0x125340u: goto label_125340;
        case 0x125344u: goto label_125344;
        case 0x125348u: goto label_125348;
        case 0x12534cu: goto label_12534c;
        case 0x125350u: goto label_125350;
        case 0x125354u: goto label_125354;
        case 0x125358u: goto label_125358;
        case 0x12535cu: goto label_12535c;
        case 0x125360u: goto label_125360;
        case 0x125364u: goto label_125364;
        case 0x125368u: goto label_125368;
        case 0x12536cu: goto label_12536c;
        case 0x125370u: goto label_125370;
        case 0x125374u: goto label_125374;
        case 0x125378u: goto label_125378;
        case 0x12537cu: goto label_12537c;
        case 0x125380u: goto label_125380;
        case 0x125384u: goto label_125384;
        case 0x125388u: goto label_125388;
        case 0x12538cu: goto label_12538c;
        case 0x125390u: goto label_125390;
        case 0x125394u: goto label_125394;
        case 0x125398u: goto label_125398;
        case 0x12539cu: goto label_12539c;
        case 0x1253a0u: goto label_1253a0;
        case 0x1253a4u: goto label_1253a4;
        case 0x1253a8u: goto label_1253a8;
        case 0x1253acu: goto label_1253ac;
        case 0x1253b0u: goto label_1253b0;
        case 0x1253b4u: goto label_1253b4;
        case 0x1253b8u: goto label_1253b8;
        case 0x1253bcu: goto label_1253bc;
        case 0x1253c0u: goto label_1253c0;
        case 0x1253c4u: goto label_1253c4;
        case 0x1253c8u: goto label_1253c8;
        case 0x1253ccu: goto label_1253cc;
        case 0x1253d0u: goto label_1253d0;
        case 0x1253d4u: goto label_1253d4;
        case 0x1253d8u: goto label_1253d8;
        case 0x1253dcu: goto label_1253dc;
        case 0x1253e0u: goto label_1253e0;
        case 0x1253e4u: goto label_1253e4;
        case 0x1253e8u: goto label_1253e8;
        case 0x1253ecu: goto label_1253ec;
        case 0x1253f0u: goto label_1253f0;
        case 0x1253f4u: goto label_1253f4;
        case 0x1253f8u: goto label_1253f8;
        case 0x1253fcu: goto label_1253fc;
        case 0x125400u: goto label_125400;
        case 0x125404u: goto label_125404;
        case 0x125408u: goto label_125408;
        case 0x12540cu: goto label_12540c;
        case 0x125410u: goto label_125410;
        case 0x125414u: goto label_125414;
        case 0x125418u: goto label_125418;
        case 0x12541cu: goto label_12541c;
        case 0x125420u: goto label_125420;
        case 0x125424u: goto label_125424;
        case 0x125428u: goto label_125428;
        case 0x12542cu: goto label_12542c;
        case 0x125430u: goto label_125430;
        case 0x125434u: goto label_125434;
        case 0x125438u: goto label_125438;
        case 0x12543cu: goto label_12543c;
        case 0x125440u: goto label_125440;
        case 0x125444u: goto label_125444;
        case 0x125448u: goto label_125448;
        case 0x12544cu: goto label_12544c;
        case 0x125450u: goto label_125450;
        case 0x125454u: goto label_125454;
        case 0x125458u: goto label_125458;
        case 0x12545cu: goto label_12545c;
        case 0x125460u: goto label_125460;
        case 0x125464u: goto label_125464;
        case 0x125468u: goto label_125468;
        case 0x12546cu: goto label_12546c;
        case 0x125470u: goto label_125470;
        case 0x125474u: goto label_125474;
        case 0x125478u: goto label_125478;
        case 0x12547cu: goto label_12547c;
        case 0x125480u: goto label_125480;
        case 0x125484u: goto label_125484;
        case 0x125488u: goto label_125488;
        case 0x12548cu: goto label_12548c;
        case 0x125490u: goto label_125490;
        case 0x125494u: goto label_125494;
        case 0x125498u: goto label_125498;
        case 0x12549cu: goto label_12549c;
        case 0x1254a0u: goto label_1254a0;
        case 0x1254a4u: goto label_1254a4;
        case 0x1254a8u: goto label_1254a8;
        case 0x1254acu: goto label_1254ac;
        case 0x1254b0u: goto label_1254b0;
        case 0x1254b4u: goto label_1254b4;
        case 0x1254b8u: goto label_1254b8;
        case 0x1254bcu: goto label_1254bc;
        case 0x1254c0u: goto label_1254c0;
        case 0x1254c4u: goto label_1254c4;
        case 0x1254c8u: goto label_1254c8;
        case 0x1254ccu: goto label_1254cc;
        case 0x1254d0u: goto label_1254d0;
        case 0x1254d4u: goto label_1254d4;
        case 0x1254d8u: goto label_1254d8;
        case 0x1254dcu: goto label_1254dc;
        case 0x1254e0u: goto label_1254e0;
        case 0x1254e4u: goto label_1254e4;
        case 0x1254e8u: goto label_1254e8;
        case 0x1254ecu: goto label_1254ec;
        default: break;
    }

    ctx->pc = 0x1250a8u;

label_1250a8:
    // 0x1250a8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1250a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_1250ac:
    // 0x1250ac: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1250acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_1250b0:
    // 0x1250b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1250b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1250b4:
    // 0x1250b4: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1250b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_1250b8:
    // 0x1250b8: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1250b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1250bc:
    // 0x1250bc: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x1250bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_1250c0:
    // 0x1250c0: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x1250c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1250c4:
    // 0x1250c4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1250c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1250c8:
    // 0x1250c8: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x1250c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1250cc:
    // 0x1250cc: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x1250ccu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
label_1250d0:
    // 0x1250d0: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1250d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_1250d4:
    // 0x1250d4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1250d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1250d8:
    // 0x1250d8: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1250d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_1250dc:
    // 0x1250dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1250dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1250e0:
    // 0x1250e0: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1250e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_1250e4:
    // 0x1250e4: 0x248491a8  addiu       $a0, $a0, -0x6E58
    ctx->pc = 0x1250e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939048));
label_1250e8:
    // 0x1250e8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1250e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1250ec:
    // 0x1250ec: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1250ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1250f0:
    // 0x1250f0: 0xc136b50  jal         func_4DAD40
label_1250f4:
    if (ctx->pc == 0x1250F4u) {
        ctx->pc = 0x1250F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250F0u;
        // 0x1250f4: 0xe7b500e8  swc1        $f21, 0xE8($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1250F8u;
        goto label_1250f8;
    }
    ctx->pc = 0x1250F0u;
    SET_GPR_U32(ctx, 31, 0x1250F8u);
    ctx->pc = 0x1250F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1250F0u;
    // 0x1250f4: 0xe7b500e8  swc1        $f21, 0xE8($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAD40u, 0x1250F0u, 0x1250F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1250F8u;
label_1250f8:
    // 0x1250f8: 0xae02b194  sw          $v0, -0x4E6C($s0)
    ctx->pc = 0x1250f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294947220), GPR_U32(ctx, 2));
label_1250fc:
    // 0x1250fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1250fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_125100:
    // 0x125100: 0xc049f52  jal         func_127D48
label_125104:
    if (ctx->pc == 0x125104u) {
        ctx->pc = 0x125104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125100u;
        // 0x125104: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125108u;
        goto label_125108;
    }
    ctx->pc = 0x125100u;
    SET_GPR_U32(ctx, 31, 0x125108u);
    ctx->pc = 0x125104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125100u;
    // 0x125104: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D48u, 0x125100u, 0x125108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125108u;
label_125108:
    // 0x125108: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x125108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_12510c:
    // 0x12510c: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x12510cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_125110:
    // 0x125110: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x125110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_125114:
    // 0x125114: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x125114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_125118:
    // 0x125118: 0xc0cd7a8  jal         func_335EA0
label_12511c:
    if (ctx->pc == 0x12511Cu) {
        ctx->pc = 0x12511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125118u;
        // 0x12511c: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x125120u;
        goto label_125120;
    }
    ctx->pc = 0x125118u;
    SET_GPR_U32(ctx, 31, 0x125120u);
    ctx->pc = 0x12511Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125118u;
    // 0x12511c: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335EA0u, 0x125118u, 0x125120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125120u;
label_125120:
    // 0x125120: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x125120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_125124:
    // 0x125124: 0x8e04b194  lw          $a0, -0x4E6C($s0)
    ctx->pc = 0x125124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947220)));
label_125128:
    // 0x125128: 0x24631730  addiu       $v1, $v1, 0x1730
    ctx->pc = 0x125128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5936));
label_12512c:
    // 0x12512c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x12512cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_125130:
    // 0x125130: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x125130u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_125134:
    // 0x125134: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_125138:
    if (ctx->pc == 0x125138u) {
        ctx->pc = 0x125138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125134u;
        // 0x125138: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12513Cu;
        goto label_12513c;
    }
    ctx->pc = 0x125134u;
    {
        const bool branch_taken_0x125134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x125138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125134u;
        // 0x125138: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125134) {
            ctx->pc = 0x125170u;
            goto label_125170;
        }
    }
    ctx->pc = 0x12513Cu;
label_12513c:
    // 0x12513c: 0x8e220314  lw          $v0, 0x314($s1)
    ctx->pc = 0x12513cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
label_125140:
    // 0x125140: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_125144:
    if (ctx->pc == 0x125144u) {
        ctx->pc = 0x125144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125140u;
        // 0x125144: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125148u;
        goto label_125148;
    }
    ctx->pc = 0x125140u;
    {
        const bool branch_taken_0x125140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125140) {
            ctx->pc = 0x125144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125140u;
            // 0x125144: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125174u;
            goto label_125174;
        }
    }
    ctx->pc = 0x125148u;
label_125148:
    // 0x125148: 0x84450092  lh          $a1, 0x92($v0)
    ctx->pc = 0x125148u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_12514c:
    // 0x12514c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12514cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_125150:
    // 0x125150: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x125150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_125154:
    // 0x125154: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x125154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_125158:
    // 0x125158: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x125158u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_12515c:
    // 0x12515c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x12515cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_125160:
    // 0x125160: 0xc0cd8ec  jal         func_3363B0
label_125164:
    if (ctx->pc == 0x125164u) {
        ctx->pc = 0x125164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125160u;
        // 0x125164: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125168u;
        goto label_125168;
    }
    ctx->pc = 0x125160u;
    SET_GPR_U32(ctx, 31, 0x125168u);
    ctx->pc = 0x125164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125160u;
    // 0x125164: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x125160u, 0x125168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125168u;
label_125168:
    // 0x125168: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x125168u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12516c:
    // 0x12516c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x12516cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_125170:
    // 0x125170: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x125170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_125174:
    // 0x125174: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x125174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_125178:
    // 0x125178: 0x26340180  addiu       $s4, $s1, 0x180
    ctx->pc = 0x125178u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
label_12517c:
    // 0x12517c: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x12517cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_125180:
    // 0x125180: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x125180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_125184:
    // 0x125184: 0x40f809  jalr        $v0
label_125188:
    if (ctx->pc == 0x125188u) {
        ctx->pc = 0x125188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125184u;
        // 0x125188: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12518Cu;
        goto label_12518c;
    }
    ctx->pc = 0x125184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12518Cu);
        ctx->pc = 0x125188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125184u;
        // 0x125188: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125184u, 0x12518Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12518Cu;
label_12518c:
    // 0x12518c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12518cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125190:
    // 0x125190: 0xc0cd8ec  jal         func_3363B0
label_125194:
    if (ctx->pc == 0x125194u) {
        ctx->pc = 0x125194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125190u;
        // 0x125194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125198u;
        goto label_125198;
    }
    ctx->pc = 0x125190u;
    SET_GPR_U32(ctx, 31, 0x125198u);
    ctx->pc = 0x125194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125190u;
    // 0x125194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x125190u, 0x125198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125198u;
label_125198:
    // 0x125198: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x125198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_12519c:
    // 0x12519c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12519cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1251a0:
    // 0x1251a0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1251a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1251a4:
    // 0x1251a4: 0xc136b24  jal         func_4DAC90
label_1251a8:
    if (ctx->pc == 0x1251A8u) {
        ctx->pc = 0x1251A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1251A4u;
        // 0x1251a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1251ACu;
        goto label_1251ac;
    }
    ctx->pc = 0x1251A4u;
    SET_GPR_U32(ctx, 31, 0x1251ACu);
    ctx->pc = 0x1251A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1251A4u;
    // 0x1251a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x1251A4u, 0x1251ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1251ACu;
label_1251ac:
    // 0x1251ac: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x1251acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1251b0:
    // 0x1251b0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1251b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1251b4:
    // 0x1251b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1251b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1251b8:
    // 0x1251b8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1251b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1251bc:
    // 0x1251bc: 0xc136b30  jal         func_4DACC0
label_1251c0:
    if (ctx->pc == 0x1251C0u) {
        ctx->pc = 0x1251C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1251BCu;
        // 0x1251c0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1251C4u;
        goto label_1251c4;
    }
    ctx->pc = 0x1251BCu;
    SET_GPR_U32(ctx, 31, 0x1251C4u);
    ctx->pc = 0x1251C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1251BCu;
    // 0x1251c0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x1251BCu, 0x1251C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1251C4u;
label_1251c4:
    // 0x1251c4: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x1251c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1251c8:
    // 0x1251c8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1251c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1251cc:
    // 0x1251cc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1251ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1251d0:
    // 0x1251d0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1251d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1251d4:
    // 0x1251d4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1251d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1251d8:
    // 0x1251d8: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x1251d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1251dc:
    // 0x1251dc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1251dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1251e0:
    // 0x1251e0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1251e0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_1251e4:
    // 0x1251e4: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x1251e4u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1251e8:
    // 0x1251e8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1251e8u;
    // VWAITQ (Q already resolved in this runtime)
label_1251ec:
    // 0x1251ec: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x1251ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1251f0:
    // 0x1251f0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1251f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_1251f4:
    // 0x1251f4: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x1251f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_1251f8:
    // 0x1251f8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1251f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1251fc:
    // 0x1251fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1251fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_125200:
    // 0x125200: 0xc136b18  jal         func_4DAC60
label_125204:
    if (ctx->pc == 0x125204u) {
        ctx->pc = 0x125204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125200u;
        // 0x125204: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125208u;
        goto label_125208;
    }
    ctx->pc = 0x125200u;
    SET_GPR_U32(ctx, 31, 0x125208u);
    ctx->pc = 0x125204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125200u;
    // 0x125204: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x125200u, 0x125208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125208u;
label_125208:
    // 0x125208: 0x7ba50050  lq          $a1, 0x50($sp)
    ctx->pc = 0x125208u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_12520c:
    // 0x12520c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x12520cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_125210:
    // 0x125210: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x125210u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_125214:
    // 0x125214: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x125214u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_125218:
    // 0x125218: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x125218u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_12521c:
    // 0x12521c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x12521cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_125220:
    // 0x125220: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x125220u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_125224:
    // 0x125224: 0x4a0003bf  vwaitq
    ctx->pc = 0x125224u;
    // VWAITQ (Q already resolved in this runtime)
label_125228:
    // 0x125228: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x125228u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_12522c:
    // 0x12522c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x12522cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_125230:
    // 0x125230: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x125230u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_125234:
    // 0x125234: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x125234u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_125238:
    // 0x125238: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x125238u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12523c:
    // 0x12523c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12523cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_125240:
    // 0x125240: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x125240u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_125244:
    // 0x125244: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x125244u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_125248:
    // 0x125248: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x125248u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12524c:
    // 0x12524c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x12524cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_125250:
    // 0x125250: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x125250u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_125254:
    // 0x125254: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x125254u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_125258:
    // 0x125258: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x125258u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_12525c:
    // 0x12525c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x12525cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_125260:
    // 0x125260: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x125260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_125264:
    // 0x125264: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x125264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_125268:
    // 0x125268: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x125268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
label_12526c:
    // 0x12526c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x12526cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_125270:
    // 0x125270: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x125270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
label_125274:
    // 0x125274: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x125274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_125278:
    // 0x125278: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x125278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12527c:
    // 0x12527c: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x12527cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
label_125280:
    // 0x125280: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x125280u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_125284:
    // 0x125284: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x125284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_125288:
    // 0x125288: 0x40f809  jalr        $v0
label_12528c:
    if (ctx->pc == 0x12528Cu) {
        ctx->pc = 0x12528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125288u;
        // 0x12528c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125290u;
        goto label_125290;
    }
    ctx->pc = 0x125288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125290u);
        ctx->pc = 0x12528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125288u;
        // 0x12528c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125288u, 0x125290u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125290u;
label_125290:
    // 0x125290: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x125290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125294:
    // 0x125294: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x125294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_125298:
    // 0x125298: 0xc136d44  jal         func_4DB510
label_12529c:
    if (ctx->pc == 0x12529Cu) {
        ctx->pc = 0x12529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125298u;
        // 0x12529c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1252A0u;
        goto label_1252a0;
    }
    ctx->pc = 0x125298u;
    SET_GPR_U32(ctx, 31, 0x1252A0u);
    ctx->pc = 0x12529Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125298u;
    // 0x12529c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB510u, 0x125298u, 0x1252A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1252A0u;
label_1252a0:
    // 0x1252a0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1252a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1252a4:
    // 0x1252a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1252a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1252a8:
    // 0x1252a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1252a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1252ac:
    // 0x1252ac: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1252acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1252b0:
    // 0x1252b0: 0xc0cd8ec  jal         func_3363B0
label_1252b4:
    if (ctx->pc == 0x1252B4u) {
        ctx->pc = 0x1252B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1252B0u;
        // 0x1252b4: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1252B8u;
        goto label_1252b8;
    }
    ctx->pc = 0x1252B0u;
    SET_GPR_U32(ctx, 31, 0x1252B8u);
    ctx->pc = 0x1252B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1252B0u;
    // 0x1252b4: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x1252B0u, 0x1252B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1252B8u;
label_1252b8:
    // 0x1252b8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1252b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1252bc:
    // 0x1252bc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1252bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1252c0:
    // 0x1252c0: 0xc62c032c  lwc1        $f12, 0x32C($s1)
    ctx->pc = 0x1252c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1252c4:
    // 0x1252c4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1252c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1252c8:
    // 0x1252c8: 0xc136b24  jal         func_4DAC90
label_1252cc:
    if (ctx->pc == 0x1252CCu) {
        ctx->pc = 0x1252CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1252C8u;
        // 0x1252cc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1252D0u;
        goto label_1252d0;
    }
    ctx->pc = 0x1252C8u;
    SET_GPR_U32(ctx, 31, 0x1252D0u);
    ctx->pc = 0x1252CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1252C8u;
    // 0x1252cc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x1252C8u, 0x1252D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1252D0u;
label_1252d0:
    // 0x1252d0: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x1252d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1252d4:
    // 0x1252d4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1252d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1252d8:
    // 0x1252d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1252d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1252dc:
    // 0x1252dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1252dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1252e0:
    // 0x1252e0: 0xc136afa  jal         func_4DABE8
label_1252e4:
    if (ctx->pc == 0x1252E4u) {
        ctx->pc = 0x1252E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1252E0u;
        // 0x1252e4: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1252E8u;
        goto label_1252e8;
    }
    ctx->pc = 0x1252E0u;
    SET_GPR_U32(ctx, 31, 0x1252E8u);
    ctx->pc = 0x1252E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1252E0u;
    // 0x1252e4: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x1252E0u, 0x1252E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1252E8u;
label_1252e8:
    // 0x1252e8: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x1252e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1252ec:
    // 0x1252ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1252ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1252f0:
    // 0x1252f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1252f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1252f4:
    // 0x1252f4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1252f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1252f8:
    // 0x1252f8: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x1252f8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
label_1252fc:
    // 0x1252fc: 0xc04b642  jal         func_12D908
label_125300:
    if (ctx->pc == 0x125300u) {
        ctx->pc = 0x125300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1252FCu;
        // 0x125300: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125304u;
        goto label_125304;
    }
    ctx->pc = 0x1252FCu;
    SET_GPR_U32(ctx, 31, 0x125304u);
    ctx->pc = 0x125300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1252FCu;
    // 0x125300: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D908u, 0x1252FCu, 0x125304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125304u;
label_125304:
    // 0x125304: 0xc62103b4  lwc1        $f1, 0x3B4($s1)
    ctx->pc = 0x125304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_125308:
    // 0x125308: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x125308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_12530c:
    // 0x12530c: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x12530cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_125310:
    // 0x125310: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x125310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_125314:
    // 0x125314: 0x46000d41  sub.s       $f21, $f1, $f0
    ctx->pc = 0x125314u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_125318:
    // 0x125318: 0x4600a805  abs.s       $f0, $f21
    ctx->pc = 0x125318u;
    ctx->f[0] = FPU_ABS_S(ctx->f[21]);
label_12531c:
    // 0x12531c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x12531cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_125320:
    // 0x125320: 0x0  nop
    ctx->pc = 0x125320u;
    // NOP
label_125324:
    // 0x125324: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
label_125328:
    if (ctx->pc == 0x125328u) {
        ctx->pc = 0x125328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125324u;
        // 0x125328: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12532Cu;
        goto label_12532c;
    }
    ctx->pc = 0x125324u;
    {
        const bool branch_taken_0x125324 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x125328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125324u;
        // 0x125328: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125324) {
            ctx->pc = 0x1253DCu;
            goto label_1253dc;
        }
    }
    ctx->pc = 0x12532Cu;
label_12532c:
    // 0x12532c: 0xc0cd8c2  jal         func_336308
label_125330:
    if (ctx->pc == 0x125330u) {
        ctx->pc = 0x125330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12532Cu;
        // 0x125330: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125334u;
        goto label_125334;
    }
    ctx->pc = 0x12532Cu;
    SET_GPR_U32(ctx, 31, 0x125334u);
    ctx->pc = 0x125330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12532Cu;
    // 0x125330: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336308u, 0x12532Cu, 0x125334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125334u;
label_125334:
    // 0x125334: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x125334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_125338:
    // 0x125338: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x125338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_12533c:
    // 0x12533c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x12533cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_125340:
    // 0x125340: 0x4614ad02  mul.s       $f20, $f21, $f20
    ctx->pc = 0x125340u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
label_125344:
    // 0x125344: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x125344u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_125348:
    // 0x125348: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x125348u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_12534c:
    // 0x12534c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x12534cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_125350:
    // 0x125350: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x125350u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_125354:
    // 0x125354: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x125354u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_125358:
    // 0x125358: 0x4a0003bf  vwaitq
    ctx->pc = 0x125358u;
    // VWAITQ (Q already resolved in this runtime)
label_12535c:
    // 0x12535c: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x12535cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_125360:
    // 0x125360: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x125360u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_125364:
    // 0x125364: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x125364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_125368:
    // 0x125368: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x125368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_12536c:
    // 0x12536c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x12536cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_125370:
    // 0x125370: 0xc12e310  jal         func_4B8C40
label_125374:
    if (ctx->pc == 0x125374u) {
        ctx->pc = 0x125374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125370u;
        // 0x125374: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x125378u;
        goto label_125378;
    }
    ctx->pc = 0x125370u;
    SET_GPR_U32(ctx, 31, 0x125378u);
    ctx->pc = 0x125374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125370u;
    // 0x125374: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x125370u, 0x125378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125378u;
label_125378:
    // 0x125378: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x125378u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_12537c:
    // 0x12537c: 0xc12e29c  jal         func_4B8A70
label_125380:
    if (ctx->pc == 0x125380u) {
        ctx->pc = 0x125380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12537Cu;
        // 0x125380: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x125384u;
        goto label_125384;
    }
    ctx->pc = 0x12537Cu;
    SET_GPR_U32(ctx, 31, 0x125384u);
    ctx->pc = 0x125380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12537Cu;
    // 0x125380: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x12537Cu, 0x125384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125384u;
label_125384:
    // 0x125384: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x125384u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_125388:
    // 0x125388: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x125388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_12538c:
    // 0x12538c: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x12538cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_125390:
    // 0x125390: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x125390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_125394:
    // 0x125394: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x125394u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_125398:
    // 0x125398: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x125398u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_12539c:
    // 0x12539c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x12539cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1253a0:
    // 0x1253a0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1253a0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_1253a4:
    // 0x1253a4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1253a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1253a8:
    // 0x1253a8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1253a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_1253ac:
    // 0x1253ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1253acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1253b0:
    // 0x1253b0: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x1253b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_1253b4:
    // 0x1253b4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1253b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1253b8:
    // 0x1253b8: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1253b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1253bc:
    // 0x1253bc: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x1253bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1253c0:
    // 0x1253c0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1253c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1253c4:
    // 0x1253c4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1253c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1253c8:
    // 0x1253c8: 0xc136d44  jal         func_4DB510
label_1253cc:
    if (ctx->pc == 0x1253CCu) {
        ctx->pc = 0x1253CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1253C8u;
        // 0x1253cc: 0xe7a20038  swc1        $f2, 0x38($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1253D0u;
        goto label_1253d0;
    }
    ctx->pc = 0x1253C8u;
    SET_GPR_U32(ctx, 31, 0x1253D0u);
    ctx->pc = 0x1253CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1253C8u;
    // 0x1253cc: 0xe7a20038  swc1        $f2, 0x38($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB510u, 0x1253C8u, 0x1253D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1253D0u;
label_1253d0:
    // 0x1253d0: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x1253d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1253d4:
    // 0x1253d4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1253d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1253d8:
    // 0x1253d8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1253d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_1253dc:
    // 0x1253dc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1253dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1253e0:
    // 0x1253e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1253e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1253e4:
    // 0x1253e4: 0x844401c0  lh          $a0, 0x1C0($v0)
    ctx->pc = 0x1253e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 448)));
label_1253e8:
    // 0x1253e8: 0x8c4301c4  lw          $v1, 0x1C4($v0)
    ctx->pc = 0x1253e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
label_1253ec:
    // 0x1253ec: 0x60f809  jalr        $v1
label_1253f0:
    if (ctx->pc == 0x1253F0u) {
        ctx->pc = 0x1253F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1253ECu;
        // 0x1253f0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1253F4u;
        goto label_1253f4;
    }
    ctx->pc = 0x1253ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1253F4u);
        ctx->pc = 0x1253F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1253ECu;
        // 0x1253f0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1253ECu, 0x1253F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1253F4u;
label_1253f4:
    // 0x1253f4: 0x52a00032  beql        $s5, $zero, . + 4 + (0x32 << 2)
label_1253f8:
    if (ctx->pc == 0x1253F8u) {
        ctx->pc = 0x1253F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1253F4u;
        // 0x1253f8: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1253FCu;
        goto label_1253fc;
    }
    ctx->pc = 0x1253F4u;
    {
        const bool branch_taken_0x1253f4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1253f4) {
            ctx->pc = 0x1253F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1253F4u;
            // 0x1253f8: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1254C0u;
            goto label_1254c0;
        }
    }
    ctx->pc = 0x1253FCu;
label_1253fc:
    // 0x1253fc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1253fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_125400:
    // 0x125400: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x125400u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_125404:
    // 0x125404: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x125404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_125408:
    // 0x125408: 0x40f809  jalr        $v0
label_12540c:
    if (ctx->pc == 0x12540Cu) {
        ctx->pc = 0x12540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125408u;
        // 0x12540c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125410u;
        goto label_125410;
    }
    ctx->pc = 0x125408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125410u);
        ctx->pc = 0x12540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125408u;
        // 0x12540c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125408u, 0x125410u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125410u;
label_125410:
    // 0x125410: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x125410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125414:
    // 0x125414: 0xc0cd8ec  jal         func_3363B0
label_125418:
    if (ctx->pc == 0x125418u) {
        ctx->pc = 0x125418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125414u;
        // 0x125418: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12541Cu;
        goto label_12541c;
    }
    ctx->pc = 0x125414u;
    SET_GPR_U32(ctx, 31, 0x12541Cu);
    ctx->pc = 0x125418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125414u;
    // 0x125418: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x125414u, 0x12541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12541Cu;
label_12541c:
    // 0x12541c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12541cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_125420:
    // 0x125420: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x125420u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_125424:
    // 0x125424: 0xc136b24  jal         func_4DAC90
label_125428:
    if (ctx->pc == 0x125428u) {
        ctx->pc = 0x125428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125424u;
        // 0x125428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12542Cu;
        goto label_12542c;
    }
    ctx->pc = 0x125424u;
    SET_GPR_U32(ctx, 31, 0x12542Cu);
    ctx->pc = 0x125428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125424u;
    // 0x125428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x125424u, 0x12542Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12542Cu;
label_12542c:
    // 0x12542c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x12542cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_125430:
    // 0x125430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x125430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_125434:
    // 0x125434: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x125434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_125438:
    // 0x125438: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x125438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12543c:
    // 0x12543c: 0xc136afa  jal         func_4DABE8
label_125440:
    if (ctx->pc == 0x125440u) {
        ctx->pc = 0x125440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12543Cu;
        // 0x125440: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125444u;
        goto label_125444;
    }
    ctx->pc = 0x12543Cu;
    SET_GPR_U32(ctx, 31, 0x125444u);
    ctx->pc = 0x125440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12543Cu;
    // 0x125440: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x12543Cu, 0x125444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125444u;
label_125444:
    // 0x125444: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x125444u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_125448:
    // 0x125448: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x125448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_12544c:
    // 0x12544c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12544cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_125450:
    // 0x125450: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x125450u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
label_125454:
    // 0x125454: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x125454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_125458:
    // 0x125458: 0xe636032c  swc1        $f22, 0x32C($s1)
    ctx->pc = 0x125458u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 812), bits); }
label_12545c:
    // 0x12545c: 0xc62c0300  lwc1        $f12, 0x300($s1)
    ctx->pc = 0x12545cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_125460:
    // 0x125460: 0xc6220304  lwc1        $f2, 0x304($s1)
    ctx->pc = 0x125460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_125464:
    // 0x125464: 0x460cb036  c.le.s      $f22, $f12
    ctx->pc = 0x125464u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_125468:
    // 0x125468: 0x460c1001  sub.s       $f0, $f2, $f12
    ctx->pc = 0x125468u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
label_12546c:
    // 0x12546c: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x12546cu;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
label_125470:
    // 0x125470: 0x4601b040  add.s       $f1, $f22, $f1
    ctx->pc = 0x125470u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
label_125474:
    // 0x125474: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_125478:
    if (ctx->pc == 0x125478u) {
        ctx->pc = 0x125478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125474u;
        // 0x125478: 0xe6210330  swc1        $f1, 0x330($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 816), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12547Cu;
        goto label_12547c;
    }
    ctx->pc = 0x125474u;
    {
        const bool branch_taken_0x125474 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x125478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125474u;
        // 0x125478: 0xe6210330  swc1        $f1, 0x330($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 816), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x125474) {
            ctx->pc = 0x125490u;
            goto label_125490;
        }
    }
    ctx->pc = 0x12547Cu;
label_12547c:
    // 0x12547c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12547cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_125480:
    // 0x125480: 0xc04953c  jal         func_1254F0
label_125484:
    if (ctx->pc == 0x125484u) {
        ctx->pc = 0x125484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125480u;
        // 0x125484: 0xc48c0308  lwc1        $f12, 0x308($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x125488u;
        goto label_125488;
    }
    ctx->pc = 0x125480u;
    SET_GPR_U32(ctx, 31, 0x125488u);
    ctx->pc = 0x125484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125480u;
    // 0x125484: 0xc48c0308  lwc1        $f12, 0x308($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254F0u, 0x125480u, 0x125488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125488u;
label_125488:
    // 0x125488: 0x1000000d  b           . + 4 + (0xD << 2)
label_12548c:
    if (ctx->pc == 0x12548Cu) {
        ctx->pc = 0x12548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125488u;
        // 0x12548c: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125490u;
        goto label_125490;
    }
    ctx->pc = 0x125488u;
    {
        const bool branch_taken_0x125488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125488u;
        // 0x12548c: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125488) {
            ctx->pc = 0x1254C0u;
            goto label_1254c0;
        }
    }
    ctx->pc = 0x125490u;
label_125490:
    // 0x125490: 0xc6200308  lwc1        $f0, 0x308($s1)
    ctx->pc = 0x125490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_125494:
    // 0x125494: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x125494u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_125498:
    // 0x125498: 0x0  nop
    ctx->pc = 0x125498u;
    // NOP
label_12549c:
    // 0x12549c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1254a0:
    if (ctx->pc == 0x1254A0u) {
        ctx->pc = 0x1254A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12549Cu;
        // 0x1254a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1254A4u;
        goto label_1254a4;
    }
    ctx->pc = 0x12549Cu;
    {
        const bool branch_taken_0x12549c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1254A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12549Cu;
        // 0x1254a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12549c) {
            ctx->pc = 0x1254B4u;
            goto label_1254b4;
        }
    }
    ctx->pc = 0x1254A4u;
label_1254a4:
    // 0x1254a4: 0xc04953c  jal         func_1254F0
label_1254a8:
    if (ctx->pc == 0x1254A8u) {
        ctx->pc = 0x1254A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1254A4u;
        // 0x1254a8: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1254ACu;
        goto label_1254ac;
    }
    ctx->pc = 0x1254A4u;
    SET_GPR_U32(ctx, 31, 0x1254ACu);
    ctx->pc = 0x1254A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1254A4u;
    // 0x1254a8: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254F0u, 0x1254A4u, 0x1254ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1254ACu;
label_1254ac:
    // 0x1254ac: 0x10000004  b           . + 4 + (0x4 << 2)
label_1254b0:
    if (ctx->pc == 0x1254B0u) {
        ctx->pc = 0x1254B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1254ACu;
        // 0x1254b0: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1254B4u;
        goto label_1254b4;
    }
    ctx->pc = 0x1254ACu;
    {
        const bool branch_taken_0x1254ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1254B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1254ACu;
        // 0x1254b0: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1254ac) {
            ctx->pc = 0x1254C0u;
            goto label_1254c0;
        }
    }
    ctx->pc = 0x1254B4u;
label_1254b4:
    // 0x1254b4: 0xc04953c  jal         func_1254F0
label_1254b8:
    if (ctx->pc == 0x1254B8u) {
        ctx->pc = 0x1254B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1254B4u;
        // 0x1254b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1254BCu;
        goto label_1254bc;
    }
    ctx->pc = 0x1254B4u;
    SET_GPR_U32(ctx, 31, 0x1254BCu);
    ctx->pc = 0x1254B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1254B4u;
    // 0x1254b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254F0u, 0x1254B4u, 0x1254BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1254BCu;
label_1254bc:
    // 0x1254bc: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1254bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1254c0:
    // 0x1254c0: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1254c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1254c4:
    // 0x1254c4: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1254c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1254c8:
    // 0x1254c8: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1254c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1254cc:
    // 0x1254cc: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1254ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1254d0:
    // 0x1254d0: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1254d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1254d4:
    // 0x1254d4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1254d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1254d8:
    // 0x1254d8: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x1254d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1254dc:
    // 0x1254dc: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x1254dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1254e0:
    // 0x1254e0: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x1254e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1254e4:
    // 0x1254e4: 0x3e00008  jr          $ra
label_1254e8:
    if (ctx->pc == 0x1254E8u) {
        ctx->pc = 0x1254E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1254E4u;
        // 0x1254e8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1254ECu;
        goto label_1254ec;
    }
    ctx->pc = 0x1254E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1254E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1254E4u;
        // 0x1254e8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1254E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1254ECu;
label_1254ec:
    // 0x1254ec: 0x0  nop
    ctx->pc = 0x1254ecu;
    // NOP
    ctx->pc = 0x1254f0u;
}
