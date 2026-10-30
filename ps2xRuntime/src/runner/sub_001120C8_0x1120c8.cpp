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

// Function: sub_001120C8
// Address: 0x1120c8 - 0x112560
void sub_001120C8_0x1120c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001120C8_0x1120c8");
#endif

    switch (ctx->pc) {
        case 0x1120c8u: goto label_1120c8;
        case 0x1120ccu: goto label_1120cc;
        case 0x1120d0u: goto label_1120d0;
        case 0x1120d4u: goto label_1120d4;
        case 0x1120d8u: goto label_1120d8;
        case 0x1120dcu: goto label_1120dc;
        case 0x1120e0u: goto label_1120e0;
        case 0x1120e4u: goto label_1120e4;
        case 0x1120e8u: goto label_1120e8;
        case 0x1120ecu: goto label_1120ec;
        case 0x1120f0u: goto label_1120f0;
        case 0x1120f4u: goto label_1120f4;
        case 0x1120f8u: goto label_1120f8;
        case 0x1120fcu: goto label_1120fc;
        case 0x112100u: goto label_112100;
        case 0x112104u: goto label_112104;
        case 0x112108u: goto label_112108;
        case 0x11210cu: goto label_11210c;
        case 0x112110u: goto label_112110;
        case 0x112114u: goto label_112114;
        case 0x112118u: goto label_112118;
        case 0x11211cu: goto label_11211c;
        case 0x112120u: goto label_112120;
        case 0x112124u: goto label_112124;
        case 0x112128u: goto label_112128;
        case 0x11212cu: goto label_11212c;
        case 0x112130u: goto label_112130;
        case 0x112134u: goto label_112134;
        case 0x112138u: goto label_112138;
        case 0x11213cu: goto label_11213c;
        case 0x112140u: goto label_112140;
        case 0x112144u: goto label_112144;
        case 0x112148u: goto label_112148;
        case 0x11214cu: goto label_11214c;
        case 0x112150u: goto label_112150;
        case 0x112154u: goto label_112154;
        case 0x112158u: goto label_112158;
        case 0x11215cu: goto label_11215c;
        case 0x112160u: goto label_112160;
        case 0x112164u: goto label_112164;
        case 0x112168u: goto label_112168;
        case 0x11216cu: goto label_11216c;
        case 0x112170u: goto label_112170;
        case 0x112174u: goto label_112174;
        case 0x112178u: goto label_112178;
        case 0x11217cu: goto label_11217c;
        case 0x112180u: goto label_112180;
        case 0x112184u: goto label_112184;
        case 0x112188u: goto label_112188;
        case 0x11218cu: goto label_11218c;
        case 0x112190u: goto label_112190;
        case 0x112194u: goto label_112194;
        case 0x112198u: goto label_112198;
        case 0x11219cu: goto label_11219c;
        case 0x1121a0u: goto label_1121a0;
        case 0x1121a4u: goto label_1121a4;
        case 0x1121a8u: goto label_1121a8;
        case 0x1121acu: goto label_1121ac;
        case 0x1121b0u: goto label_1121b0;
        case 0x1121b4u: goto label_1121b4;
        case 0x1121b8u: goto label_1121b8;
        case 0x1121bcu: goto label_1121bc;
        case 0x1121c0u: goto label_1121c0;
        case 0x1121c4u: goto label_1121c4;
        case 0x1121c8u: goto label_1121c8;
        case 0x1121ccu: goto label_1121cc;
        case 0x1121d0u: goto label_1121d0;
        case 0x1121d4u: goto label_1121d4;
        case 0x1121d8u: goto label_1121d8;
        case 0x1121dcu: goto label_1121dc;
        case 0x1121e0u: goto label_1121e0;
        case 0x1121e4u: goto label_1121e4;
        case 0x1121e8u: goto label_1121e8;
        case 0x1121ecu: goto label_1121ec;
        case 0x1121f0u: goto label_1121f0;
        case 0x1121f4u: goto label_1121f4;
        case 0x1121f8u: goto label_1121f8;
        case 0x1121fcu: goto label_1121fc;
        case 0x112200u: goto label_112200;
        case 0x112204u: goto label_112204;
        case 0x112208u: goto label_112208;
        case 0x11220cu: goto label_11220c;
        case 0x112210u: goto label_112210;
        case 0x112214u: goto label_112214;
        case 0x112218u: goto label_112218;
        case 0x11221cu: goto label_11221c;
        case 0x112220u: goto label_112220;
        case 0x112224u: goto label_112224;
        case 0x112228u: goto label_112228;
        case 0x11222cu: goto label_11222c;
        case 0x112230u: goto label_112230;
        case 0x112234u: goto label_112234;
        case 0x112238u: goto label_112238;
        case 0x11223cu: goto label_11223c;
        case 0x112240u: goto label_112240;
        case 0x112244u: goto label_112244;
        case 0x112248u: goto label_112248;
        case 0x11224cu: goto label_11224c;
        case 0x112250u: goto label_112250;
        case 0x112254u: goto label_112254;
        case 0x112258u: goto label_112258;
        case 0x11225cu: goto label_11225c;
        case 0x112260u: goto label_112260;
        case 0x112264u: goto label_112264;
        case 0x112268u: goto label_112268;
        case 0x11226cu: goto label_11226c;
        case 0x112270u: goto label_112270;
        case 0x112274u: goto label_112274;
        case 0x112278u: goto label_112278;
        case 0x11227cu: goto label_11227c;
        case 0x112280u: goto label_112280;
        case 0x112284u: goto label_112284;
        case 0x112288u: goto label_112288;
        case 0x11228cu: goto label_11228c;
        case 0x112290u: goto label_112290;
        case 0x112294u: goto label_112294;
        case 0x112298u: goto label_112298;
        case 0x11229cu: goto label_11229c;
        case 0x1122a0u: goto label_1122a0;
        case 0x1122a4u: goto label_1122a4;
        case 0x1122a8u: goto label_1122a8;
        case 0x1122acu: goto label_1122ac;
        case 0x1122b0u: goto label_1122b0;
        case 0x1122b4u: goto label_1122b4;
        case 0x1122b8u: goto label_1122b8;
        case 0x1122bcu: goto label_1122bc;
        case 0x1122c0u: goto label_1122c0;
        case 0x1122c4u: goto label_1122c4;
        case 0x1122c8u: goto label_1122c8;
        case 0x1122ccu: goto label_1122cc;
        case 0x1122d0u: goto label_1122d0;
        case 0x1122d4u: goto label_1122d4;
        case 0x1122d8u: goto label_1122d8;
        case 0x1122dcu: goto label_1122dc;
        case 0x1122e0u: goto label_1122e0;
        case 0x1122e4u: goto label_1122e4;
        case 0x1122e8u: goto label_1122e8;
        case 0x1122ecu: goto label_1122ec;
        case 0x1122f0u: goto label_1122f0;
        case 0x1122f4u: goto label_1122f4;
        case 0x1122f8u: goto label_1122f8;
        case 0x1122fcu: goto label_1122fc;
        case 0x112300u: goto label_112300;
        case 0x112304u: goto label_112304;
        case 0x112308u: goto label_112308;
        case 0x11230cu: goto label_11230c;
        case 0x112310u: goto label_112310;
        case 0x112314u: goto label_112314;
        case 0x112318u: goto label_112318;
        case 0x11231cu: goto label_11231c;
        case 0x112320u: goto label_112320;
        case 0x112324u: goto label_112324;
        case 0x112328u: goto label_112328;
        case 0x11232cu: goto label_11232c;
        case 0x112330u: goto label_112330;
        case 0x112334u: goto label_112334;
        case 0x112338u: goto label_112338;
        case 0x11233cu: goto label_11233c;
        case 0x112340u: goto label_112340;
        case 0x112344u: goto label_112344;
        case 0x112348u: goto label_112348;
        case 0x11234cu: goto label_11234c;
        case 0x112350u: goto label_112350;
        case 0x112354u: goto label_112354;
        case 0x112358u: goto label_112358;
        case 0x11235cu: goto label_11235c;
        case 0x112360u: goto label_112360;
        case 0x112364u: goto label_112364;
        case 0x112368u: goto label_112368;
        case 0x11236cu: goto label_11236c;
        case 0x112370u: goto label_112370;
        case 0x112374u: goto label_112374;
        case 0x112378u: goto label_112378;
        case 0x11237cu: goto label_11237c;
        case 0x112380u: goto label_112380;
        case 0x112384u: goto label_112384;
        case 0x112388u: goto label_112388;
        case 0x11238cu: goto label_11238c;
        case 0x112390u: goto label_112390;
        case 0x112394u: goto label_112394;
        case 0x112398u: goto label_112398;
        case 0x11239cu: goto label_11239c;
        case 0x1123a0u: goto label_1123a0;
        case 0x1123a4u: goto label_1123a4;
        case 0x1123a8u: goto label_1123a8;
        case 0x1123acu: goto label_1123ac;
        case 0x1123b0u: goto label_1123b0;
        case 0x1123b4u: goto label_1123b4;
        case 0x1123b8u: goto label_1123b8;
        case 0x1123bcu: goto label_1123bc;
        case 0x1123c0u: goto label_1123c0;
        case 0x1123c4u: goto label_1123c4;
        case 0x1123c8u: goto label_1123c8;
        case 0x1123ccu: goto label_1123cc;
        case 0x1123d0u: goto label_1123d0;
        case 0x1123d4u: goto label_1123d4;
        case 0x1123d8u: goto label_1123d8;
        case 0x1123dcu: goto label_1123dc;
        case 0x1123e0u: goto label_1123e0;
        case 0x1123e4u: goto label_1123e4;
        case 0x1123e8u: goto label_1123e8;
        case 0x1123ecu: goto label_1123ec;
        case 0x1123f0u: goto label_1123f0;
        case 0x1123f4u: goto label_1123f4;
        case 0x1123f8u: goto label_1123f8;
        case 0x1123fcu: goto label_1123fc;
        case 0x112400u: goto label_112400;
        case 0x112404u: goto label_112404;
        case 0x112408u: goto label_112408;
        case 0x11240cu: goto label_11240c;
        case 0x112410u: goto label_112410;
        case 0x112414u: goto label_112414;
        case 0x112418u: goto label_112418;
        case 0x11241cu: goto label_11241c;
        case 0x112420u: goto label_112420;
        case 0x112424u: goto label_112424;
        case 0x112428u: goto label_112428;
        case 0x11242cu: goto label_11242c;
        case 0x112430u: goto label_112430;
        case 0x112434u: goto label_112434;
        case 0x112438u: goto label_112438;
        case 0x11243cu: goto label_11243c;
        case 0x112440u: goto label_112440;
        case 0x112444u: goto label_112444;
        case 0x112448u: goto label_112448;
        case 0x11244cu: goto label_11244c;
        case 0x112450u: goto label_112450;
        case 0x112454u: goto label_112454;
        case 0x112458u: goto label_112458;
        case 0x11245cu: goto label_11245c;
        case 0x112460u: goto label_112460;
        case 0x112464u: goto label_112464;
        case 0x112468u: goto label_112468;
        case 0x11246cu: goto label_11246c;
        case 0x112470u: goto label_112470;
        case 0x112474u: goto label_112474;
        case 0x112478u: goto label_112478;
        case 0x11247cu: goto label_11247c;
        case 0x112480u: goto label_112480;
        case 0x112484u: goto label_112484;
        case 0x112488u: goto label_112488;
        case 0x11248cu: goto label_11248c;
        case 0x112490u: goto label_112490;
        case 0x112494u: goto label_112494;
        case 0x112498u: goto label_112498;
        case 0x11249cu: goto label_11249c;
        case 0x1124a0u: goto label_1124a0;
        case 0x1124a4u: goto label_1124a4;
        case 0x1124a8u: goto label_1124a8;
        case 0x1124acu: goto label_1124ac;
        case 0x1124b0u: goto label_1124b0;
        case 0x1124b4u: goto label_1124b4;
        case 0x1124b8u: goto label_1124b8;
        case 0x1124bcu: goto label_1124bc;
        case 0x1124c0u: goto label_1124c0;
        case 0x1124c4u: goto label_1124c4;
        case 0x1124c8u: goto label_1124c8;
        case 0x1124ccu: goto label_1124cc;
        case 0x1124d0u: goto label_1124d0;
        case 0x1124d4u: goto label_1124d4;
        case 0x1124d8u: goto label_1124d8;
        case 0x1124dcu: goto label_1124dc;
        case 0x1124e0u: goto label_1124e0;
        case 0x1124e4u: goto label_1124e4;
        case 0x1124e8u: goto label_1124e8;
        case 0x1124ecu: goto label_1124ec;
        case 0x1124f0u: goto label_1124f0;
        case 0x1124f4u: goto label_1124f4;
        case 0x1124f8u: goto label_1124f8;
        case 0x1124fcu: goto label_1124fc;
        case 0x112500u: goto label_112500;
        case 0x112504u: goto label_112504;
        case 0x112508u: goto label_112508;
        case 0x11250cu: goto label_11250c;
        case 0x112510u: goto label_112510;
        case 0x112514u: goto label_112514;
        case 0x112518u: goto label_112518;
        case 0x11251cu: goto label_11251c;
        case 0x112520u: goto label_112520;
        case 0x112524u: goto label_112524;
        case 0x112528u: goto label_112528;
        case 0x11252cu: goto label_11252c;
        case 0x112530u: goto label_112530;
        case 0x112534u: goto label_112534;
        case 0x112538u: goto label_112538;
        case 0x11253cu: goto label_11253c;
        case 0x112540u: goto label_112540;
        case 0x112544u: goto label_112544;
        case 0x112548u: goto label_112548;
        case 0x11254cu: goto label_11254c;
        case 0x112550u: goto label_112550;
        case 0x112554u: goto label_112554;
        case 0x112558u: goto label_112558;
        case 0x11255cu: goto label_11255c;
        default: break;
    }

    ctx->pc = 0x1120c8u;

label_1120c8:
    // 0x1120c8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1120c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1120cc:
    // 0x1120cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1120ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1120d0:
    // 0x1120d0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1120d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1120d4:
    // 0x1120d4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1120d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1120d8:
    // 0x1120d8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1120d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_1120dc:
    // 0x1120dc: 0x26b0000c  addiu       $s0, $s5, 0xC
    ctx->pc = 0x1120dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_1120e0:
    // 0x1120e0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1120e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1120e4:
    // 0x1120e4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1120e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1120e8:
    // 0x1120e8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1120e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1120ec:
    // 0x1120ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1120ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1120f0:
    // 0x1120f0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1120f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_1120f4:
    // 0x1120f4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1120f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1120f8:
    // 0x1120f8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1120f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_1120fc:
    // 0x1120fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1120fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_112100:
    // 0x112100: 0xc044674  jal         func_1119D0
label_112104:
    if (ctx->pc == 0x112104u) {
        ctx->pc = 0x112104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112100u;
        // 0x112104: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x112108u;
        goto label_112108;
    }
    ctx->pc = 0x112100u;
    SET_GPR_U32(ctx, 31, 0x112108u);
    ctx->pc = 0x112104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112100u;
    // 0x112104: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1119D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1119D0u, 0x112100u, 0x112108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112108u;
label_112108:
    // 0x112108: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x112108u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11210c:
    // 0x11210c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11210cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_112110:
    // 0x112110: 0x12420107  beq         $s2, $v0, . + 4 + (0x107 << 2)
label_112114:
    if (ctx->pc == 0x112114u) {
        ctx->pc = 0x112114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112110u;
        // 0x112114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112118u;
        goto label_112118;
    }
    ctx->pc = 0x112110u;
    {
        const bool branch_taken_0x112110 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x112114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112110u;
        // 0x112114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112110) {
            ctx->pc = 0x112530u;
            goto label_112530;
        }
    }
    ctx->pc = 0x112118u;
label_112118:
    // 0x112118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11211c:
    // 0x11211c: 0xc0446ac  jal         func_111AB0
label_112120:
    if (ctx->pc == 0x112120u) {
        ctx->pc = 0x112120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11211Cu;
        // 0x112120: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112124u;
        goto label_112124;
    }
    ctx->pc = 0x11211Cu;
    SET_GPR_U32(ctx, 31, 0x112124u);
    ctx->pc = 0x112120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11211Cu;
    // 0x112120: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AB0u, 0x11211Cu, 0x112124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112124u;
label_112124:
    // 0x112124: 0xc043c9e  jal         func_10F278
label_112128:
    if (ctx->pc == 0x112128u) {
        ctx->pc = 0x112128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112124u;
        // 0x112128: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11212Cu;
        goto label_11212c;
    }
    ctx->pc = 0x112124u;
    SET_GPR_U32(ctx, 31, 0x11212Cu);
    ctx->pc = 0x112128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112124u;
    // 0x112128: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F278u, 0x112124u, 0x11212Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11212Cu;
label_11212c:
    // 0x11212c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11212cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_112130:
    // 0x112130: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x112130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_112134:
    // 0x112134: 0x2c420065  sltiu       $v0, $v0, 0x65
    ctx->pc = 0x112134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
label_112138:
    // 0x112138: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_11213c:
    if (ctx->pc == 0x11213Cu) {
        ctx->pc = 0x11213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112138u;
        // 0x11213c: 0x8ea20008  lw          $v0, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112140u;
        goto label_112140;
    }
    ctx->pc = 0x112138u;
    {
        const bool branch_taken_0x112138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112138) {
            ctx->pc = 0x11213Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112138u;
            // 0x11213c: 0x8ea20008  lw          $v0, 0x8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112154u;
            goto label_112154;
        }
    }
    ctx->pc = 0x112140u;
label_112140:
    // 0x112140: 0x28620014  slti        $v0, $v1, 0x14
    ctx->pc = 0x112140u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
label_112144:
    // 0x112144: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_112148:
    if (ctx->pc == 0x112148u) {
        ctx->pc = 0x112148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112144u;
        // 0x112148: 0x8ea20008  lw          $v0, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11214Cu;
        goto label_11214c;
    }
    ctx->pc = 0x112144u;
    {
        const bool branch_taken_0x112144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112144) {
            ctx->pc = 0x112148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112144u;
            // 0x112148: 0x8ea20008  lw          $v0, 0x8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112154u;
            goto label_112154;
        }
    }
    ctx->pc = 0x11214Cu;
label_11214c:
    // 0x11214c: 0x100000f8  b           . + 4 + (0xF8 << 2)
label_112150:
    if (ctx->pc == 0x112150u) {
        ctx->pc = 0x112150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11214Cu;
        // 0x112150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112154u;
        goto label_112154;
    }
    ctx->pc = 0x11214Cu;
    {
        const bool branch_taken_0x11214c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11214Cu;
        // 0x112150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11214c) {
            ctx->pc = 0x112530u;
            goto label_112530;
        }
    }
    ctx->pc = 0x112154u;
label_112154:
    // 0x112154: 0x2c4200f1  sltiu       $v0, $v0, 0xF1
    ctx->pc = 0x112154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)241) ? 1 : 0);
label_112158:
    // 0x112158: 0x0  nop
    ctx->pc = 0x112158u;
    // NOP
label_11215c:
    // 0x11215c: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
label_112160:
    if (ctx->pc == 0x112160u) {
        ctx->pc = 0x112160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11215Cu;
        // 0x112160: 0x28620015  slti        $v0, $v1, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x112164u;
        goto label_112164;
    }
    ctx->pc = 0x11215Cu;
    {
        const bool branch_taken_0x11215c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11215Cu;
        // 0x112160: 0x28620015  slti        $v0, $v1, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11215c) {
            ctx->pc = 0x11214Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11214c;
        }
    }
    ctx->pc = 0x112164u;
label_112164:
    // 0x112164: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_112168:
    if (ctx->pc == 0x112168u) {
        ctx->pc = 0x112168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112164u;
        // 0x112168: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11216Cu;
        goto label_11216c;
    }
    ctx->pc = 0x112164u;
    {
        const bool branch_taken_0x112164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112164u;
        // 0x112168: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112164) {
            ctx->pc = 0x112198u;
            goto label_112198;
        }
    }
    ctx->pc = 0x11216Cu;
label_11216c:
    // 0x11216c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11216cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_112170:
    // 0x112170: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x112170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_112174:
    // 0x112174: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x112174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_112178:
    // 0x112178: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x112178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_11217c:
    // 0x11217c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x11217cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_112180:
    // 0x112180: 0x8c827a34  lw          $v0, 0x7A34($a0)
    ctx->pc = 0x112180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 31284)));
label_112184:
    // 0x112184: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x112184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_112188:
    // 0x112188: 0xac827a34  sw          $v0, 0x7A34($a0)
    ctx->pc = 0x112188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 31284), GPR_U32(ctx, 2));
label_11218c:
    // 0x11218c: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x11218cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_112190:
    // 0x112190: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
label_112194:
    if (ctx->pc == 0x112194u) {
        ctx->pc = 0x112194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112190u;
        // 0x112194: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112198u;
        goto label_112198;
    }
    ctx->pc = 0x112190u;
    {
        const bool branch_taken_0x112190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112190u;
        // 0x112194: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112190) {
            ctx->pc = 0x11214Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11214c;
        }
    }
    ctx->pc = 0x112198u;
label_112198:
    // 0x112198: 0x8c46aa94  lw          $a2, -0x556C($v0)
    ctx->pc = 0x112198u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945428)));
label_11219c:
    // 0x11219c: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x11219cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1121a0:
    // 0x1121a0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1121a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1121a4:
    // 0x1121a4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1121a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1121a8:
    // 0x1121a8: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_1121ac:
    if (ctx->pc == 0x1121ACu) {
        ctx->pc = 0x1121ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121A8u;
        // 0x1121ac: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1121B0u;
        goto label_1121b0;
    }
    ctx->pc = 0x1121A8u;
    {
        const bool branch_taken_0x1121a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1121ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121A8u;
        // 0x1121ac: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1121a8) {
            ctx->pc = 0x1121CCu;
            goto label_1121cc;
        }
    }
    ctx->pc = 0x1121B0u;
label_1121b0:
    // 0x1121b0: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x1121b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1121b4:
    // 0x1121b4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1121b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1121b8:
    // 0x1121b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1121b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1121bc:
    // 0x1121bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1121bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1121c0:
    // 0x1121c0: 0xacc5000c  sw          $a1, 0xC($a2)
    ctx->pc = 0x1121c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
label_1121c4:
    // 0x1121c4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1121c8:
    if (ctx->pc == 0x1121C8u) {
        ctx->pc = 0x1121C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121C4u;
        // 0x1121c8: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1121CCu;
        goto label_1121cc;
    }
    ctx->pc = 0x1121C4u;
    {
        const bool branch_taken_0x1121c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1121C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121C4u;
        // 0x1121c8: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1121c4) {
            ctx->pc = 0x1121D0u;
            goto label_1121d0;
        }
    }
    ctx->pc = 0x1121CCu;
label_1121cc:
    // 0x1121cc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1121ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1121d0:
    // 0x1121d0: 0x126000d7  beqz        $s3, . + 4 + (0xD7 << 2)
label_1121d4:
    if (ctx->pc == 0x1121D4u) {
        ctx->pc = 0x1121D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121D0u;
        // 0x1121d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1121D8u;
        goto label_1121d8;
    }
    ctx->pc = 0x1121D0u;
    {
        const bool branch_taken_0x1121d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1121D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121D0u;
        // 0x1121d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1121d0) {
            ctx->pc = 0x112530u;
            goto label_112530;
        }
    }
    ctx->pc = 0x1121D8u;
label_1121d8:
    // 0x1121d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1121d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1121dc:
    // 0x1121dc: 0xc04682a  jal         func_11A0A8
label_1121e0:
    if (ctx->pc == 0x1121E0u) {
        ctx->pc = 0x1121E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121DCu;
        // 0x1121e0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1121E4u;
        goto label_1121e4;
    }
    ctx->pc = 0x1121DCu;
    SET_GPR_U32(ctx, 31, 0x1121E4u);
    ctx->pc = 0x1121E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1121DCu;
    // 0x1121e0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A0A8u, 0x1121DCu, 0x1121E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1121E4u;
label_1121e4:
    // 0x1121e4: 0x26700004  addiu       $s0, $s3, 0x4
    ctx->pc = 0x1121e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1121e8:
    // 0x1121e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1121e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1121ec:
    // 0x1121ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1121ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1121f0:
    // 0x1121f0: 0x8c43aa90  lw          $v1, -0x5570($v0)
    ctx->pc = 0x1121f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945424)));
label_1121f4:
    // 0x1121f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1121f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1121f8:
    // 0x1121f8: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x1121f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1121fc:
    // 0x1121fc: 0xc044730  jal         func_111CC0
label_112200:
    if (ctx->pc == 0x112200u) {
        ctx->pc = 0x112200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121FCu;
        // 0x112200: 0xae630034  sw          $v1, 0x34($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112204u;
        goto label_112204;
    }
    ctx->pc = 0x1121FCu;
    SET_GPR_U32(ctx, 31, 0x112204u);
    ctx->pc = 0x112200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1121FCu;
    // 0x112200: 0xae630034  sw          $v1, 0x34($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111CC0u, 0x1121FCu, 0x112204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112204u;
label_112204:
    // 0x112204: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x112204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_112208:
    // 0x112208: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x112208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11220c:
    // 0x11220c: 0x904383b9  lbu         $v1, -0x7C47($v0)
    ctx->pc = 0x11220cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294935481)));
label_112210:
    // 0x112210: 0x26a4000c  addiu       $a0, $s5, 0xC
    ctx->pc = 0x112210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_112214:
    // 0x112214: 0xc0446a8  jal         func_111AA0
label_112218:
    if (ctx->pc == 0x112218u) {
        ctx->pc = 0x112218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112214u;
        // 0x112218: 0xa2630094  sb          $v1, 0x94($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 148), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11221Cu;
        goto label_11221c;
    }
    ctx->pc = 0x112214u;
    SET_GPR_U32(ctx, 31, 0x11221Cu);
    ctx->pc = 0x112218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112214u;
    // 0x112218: 0xa2630094  sb          $v1, 0x94($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 148), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AA0u, 0x112214u, 0x11221Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11221Cu;
label_11221c:
    // 0x11221c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11221cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_112220:
    // 0x112220: 0xc046c42  jal         func_11B108
label_112224:
    if (ctx->pc == 0x112224u) {
        ctx->pc = 0x112224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112220u;
        // 0x112224: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112228u;
        goto label_112228;
    }
    ctx->pc = 0x112220u;
    SET_GPR_U32(ctx, 31, 0x112228u);
    ctx->pc = 0x112224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112220u;
    // 0x112224: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B108u, 0x112220u, 0x112228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112228u;
label_112228:
    // 0x112228: 0xae710098  sw          $s1, 0x98($s3)
    ctx->pc = 0x112228u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 17));
label_11222c:
    // 0x11222c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11222cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_112230:
    // 0x112230: 0xc043c06  jal         func_10F018
label_112234:
    if (ctx->pc == 0x112234u) {
        ctx->pc = 0x112234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112230u;
        // 0x112234: 0xae60009c  sw          $zero, 0x9C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112238u;
        goto label_112238;
    }
    ctx->pc = 0x112230u;
    SET_GPR_U32(ctx, 31, 0x112238u);
    ctx->pc = 0x112234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112230u;
    // 0x112234: 0xae60009c  sw          $zero, 0x9C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F018u, 0x112230u, 0x112238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112238u;
label_112238:
    // 0x112238: 0x1451002b  bne         $v0, $s1, . + 4 + (0x2B << 2)
label_11223c:
    if (ctx->pc == 0x11223Cu) {
        ctx->pc = 0x11223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112238u;
        // 0x11223c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112240u;
        goto label_112240;
    }
    ctx->pc = 0x112238u;
    {
        const bool branch_taken_0x112238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x11223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112238u;
        // 0x11223c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112238) {
            ctx->pc = 0x1122E8u;
            goto label_1122e8;
        }
    }
    ctx->pc = 0x112240u;
label_112240:
    // 0x112240: 0xae620090  sw          $v0, 0x90($s3)
    ctx->pc = 0x112240u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 2));
label_112244:
    // 0x112244: 0xc043c7a  jal         func_10F1E8
label_112248:
    if (ctx->pc == 0x112248u) {
        ctx->pc = 0x112248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112244u;
        // 0x112248: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11224Cu;
        goto label_11224c;
    }
    ctx->pc = 0x112244u;
    SET_GPR_U32(ctx, 31, 0x11224Cu);
    ctx->pc = 0x112248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112244u;
    // 0x112248: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1E8u, 0x112244u, 0x11224Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11224Cu;
label_11224c:
    // 0x11224c: 0x7ac20000  lq          $v0, 0x0($s6)
    ctx->pc = 0x11224cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_112250:
    // 0x112250: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x112250u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_112254:
    // 0x112254: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x112254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_112258:
    // 0x112258: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x112258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11225c:
    // 0x11225c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x11225cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_112260:
    // 0x112260: 0xc044c62  jal         func_113188
label_112264:
    if (ctx->pc == 0x112264u) {
        ctx->pc = 0x112264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112260u;
        // 0x112264: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112268u;
        goto label_112268;
    }
    ctx->pc = 0x112260u;
    SET_GPR_U32(ctx, 31, 0x112268u);
    ctx->pc = 0x112264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112260u;
    // 0x112264: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113188u, 0x112260u, 0x112268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112268u;
label_112268:
    // 0x112268: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x112268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_11226c:
    // 0x11226c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x11226cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_112270:
    // 0x112270: 0x8c622c14  lw          $v0, 0x2C14($v1)
    ctx->pc = 0x112270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11284)));
label_112274:
    // 0x112274: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_112278:
    if (ctx->pc == 0x112278u) {
        ctx->pc = 0x112278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112274u;
        // 0x112278: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11227Cu;
        goto label_11227c;
    }
    ctx->pc = 0x112274u;
    {
        const bool branch_taken_0x112274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112274u;
        // 0x112278: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112274) {
            ctx->pc = 0x1122BCu;
            goto label_1122bc;
        }
    }
    ctx->pc = 0x11227Cu;
label_11227c:
    // 0x11227c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x11227cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_112280:
    // 0x112280: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_112284:
    // 0x112284: 0x0  nop
    ctx->pc = 0x112284u;
    // NOP
label_112288:
    // 0x112288: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x112288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_11228c:
    // 0x11228c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x11228cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_112290:
    // 0x112290: 0x0  nop
    ctx->pc = 0x112290u;
    // NOP
label_112294:
    // 0x112294: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_112298:
    if (ctx->pc == 0x112298u) {
        ctx->pc = 0x112298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112294u;
        // 0x112298: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11229Cu;
        goto label_11229c;
    }
    ctx->pc = 0x112294u;
    {
        const bool branch_taken_0x112294 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x112298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112294u;
        // 0x112298: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112294) {
            ctx->pc = 0x1122C0u;
            goto label_1122c0;
        }
    }
    ctx->pc = 0x11229Cu;
label_11229c:
    // 0x11229c: 0xc043cb2  jal         func_10F2C8
label_1122a0:
    if (ctx->pc == 0x1122A0u) {
        ctx->pc = 0x1122A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11229Cu;
        // 0x1122a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1122A4u;
        goto label_1122a4;
    }
    ctx->pc = 0x11229Cu;
    SET_GPR_U32(ctx, 31, 0x1122A4u);
    ctx->pc = 0x1122A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11229Cu;
    // 0x1122a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2C8u, 0x11229Cu, 0x1122A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1122A4u;
label_1122a4:
    // 0x1122a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1122a8:
    if (ctx->pc == 0x1122A8u) {
        ctx->pc = 0x1122A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1122A4u;
        // 0x1122a8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1122ACu;
        goto label_1122ac;
    }
    ctx->pc = 0x1122A4u;
    {
        const bool branch_taken_0x1122a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1122A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1122A4u;
        // 0x1122a8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1122a4) {
            ctx->pc = 0x1122C0u;
            goto label_1122c0;
        }
    }
    ctx->pc = 0x1122ACu;
label_1122ac:
    // 0x1122ac: 0xc043c06  jal         func_10F018
label_1122b0:
    if (ctx->pc == 0x1122B0u) {
        ctx->pc = 0x1122B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1122ACu;
        // 0x1122b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1122B4u;
        goto label_1122b4;
    }
    ctx->pc = 0x1122ACu;
    SET_GPR_U32(ctx, 31, 0x1122B4u);
    ctx->pc = 0x1122B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1122ACu;
    // 0x1122b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F018u, 0x1122ACu, 0x1122B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1122B4u;
label_1122b4:
    // 0x1122b4: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_1122b8:
    if (ctx->pc == 0x1122B8u) {
        ctx->pc = 0x1122B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1122B4u;
        // 0x1122b8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1122BCu;
        goto label_1122bc;
    }
    ctx->pc = 0x1122B4u;
    {
        const bool branch_taken_0x1122b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1122B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1122B4u;
        // 0x1122b8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1122b4) {
            ctx->pc = 0x11232Cu;
            goto label_11232c;
        }
    }
    ctx->pc = 0x1122BCu;
label_1122bc:
    // 0x1122bc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1122bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1122c0:
    // 0x1122c0: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x1122c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
label_1122c4:
    // 0x1122c4: 0x8c62aa84  lw          $v0, -0x557C($v1)
    ctx->pc = 0x1122c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_1122c8:
    // 0x1122c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1122c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1122cc:
    // 0x1122cc: 0x8c434270  lw          $v1, 0x4270($v0)
    ctx->pc = 0x1122ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17008)));
label_1122d0:
    // 0x1122d0: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_1122d4:
    if (ctx->pc == 0x1122D4u) {
        ctx->pc = 0x1122D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1122D0u;
        // 0x1122d4: 0x8e022c14  lw          $v0, 0x2C14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1122D8u;
        goto label_1122d8;
    }
    ctx->pc = 0x1122D0u;
    {
        const bool branch_taken_0x1122d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1122D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1122D0u;
        // 0x1122d4: 0x8e022c14  lw          $v0, 0x2C14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1122d0) {
            ctx->pc = 0x112314u;
            goto label_112314;
        }
    }
    ctx->pc = 0x1122D8u;
label_1122d8:
    // 0x1122d8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1122dc:
    if (ctx->pc == 0x1122DCu) {
        ctx->pc = 0x1122DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1122D8u;
        // 0x1122dc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1122E0u;
        goto label_1122e0;
    }
    ctx->pc = 0x1122D8u;
    {
        const bool branch_taken_0x1122d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1122DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1122D8u;
        // 0x1122dc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1122d8) {
            ctx->pc = 0x11232Cu;
            goto label_11232c;
        }
    }
    ctx->pc = 0x1122E0u;
label_1122e0:
    // 0x1122e0: 0x1000000d  b           . + 4 + (0xD << 2)
label_1122e4:
    if (ctx->pc == 0x1122E4u) {
        ctx->pc = 0x1122E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1122E0u;
        // 0x1122e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1122E8u;
        goto label_1122e8;
    }
    ctx->pc = 0x1122E0u;
    {
        const bool branch_taken_0x1122e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1122E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1122E0u;
        // 0x1122e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1122e0) {
            ctx->pc = 0x112318u;
            goto label_112318;
        }
    }
    ctx->pc = 0x1122E8u;
label_1122e8:
    // 0x1122e8: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x1122e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
label_1122ec:
    // 0x1122ec: 0x8c62aa84  lw          $v0, -0x557C($v1)
    ctx->pc = 0x1122ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_1122f0:
    // 0x1122f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1122f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1122f4:
    // 0x1122f4: 0x8c434270  lw          $v1, 0x4270($v0)
    ctx->pc = 0x1122f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17008)));
label_1122f8:
    // 0x1122f8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1122fc:
    if (ctx->pc == 0x1122FCu) {
        ctx->pc = 0x1122FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1122F8u;
        // 0x1122fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112300u;
        goto label_112300;
    }
    ctx->pc = 0x1122F8u;
    {
        const bool branch_taken_0x1122f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1122FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1122F8u;
        // 0x1122fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1122f8) {
            ctx->pc = 0x112318u;
            goto label_112318;
        }
    }
    ctx->pc = 0x112300u;
label_112300:
    // 0x112300: 0xc043ca8  jal         func_10F2A0
label_112304:
    if (ctx->pc == 0x112304u) {
        ctx->pc = 0x112304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112300u;
        // 0x112304: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112308u;
        goto label_112308;
    }
    ctx->pc = 0x112300u;
    SET_GPR_U32(ctx, 31, 0x112308u);
    ctx->pc = 0x112304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112300u;
    // 0x112304: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2A0u, 0x112300u, 0x112308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112308u;
label_112308:
    // 0x112308: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x112308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11230c:
    // 0x11230c: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_112310:
    if (ctx->pc == 0x112310u) {
        ctx->pc = 0x112310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11230Cu;
        // 0x112310: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112314u;
        goto label_112314;
    }
    ctx->pc = 0x11230Cu;
    {
        const bool branch_taken_0x11230c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x112310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11230Cu;
        // 0x112310: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11230c) {
            ctx->pc = 0x11232Cu;
            goto label_11232c;
        }
    }
    ctx->pc = 0x112314u;
label_112314:
    // 0x112314: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x112314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_112318:
    // 0x112318: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x112318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11231c:
    // 0x11231c: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x11231cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_112320:
    // 0x112320: 0xc044958  jal         func_112560
label_112324:
    if (ctx->pc == 0x112324u) {
        ctx->pc = 0x112324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112320u;
        // 0x112324: 0x27a70018  addiu       $a3, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112328u;
        goto label_112328;
    }
    ctx->pc = 0x112320u;
    SET_GPR_U32(ctx, 31, 0x112328u);
    ctx->pc = 0x112324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112320u;
    // 0x112324: 0x27a70018  addiu       $a3, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112560u, 0x112320u, 0x112328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112328u;
label_112328:
    // 0x112328: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x112328u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11232c:
    // 0x11232c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11232cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_112330:
    // 0x112330: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x112330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_112334:
    // 0x112334: 0x8c51bce4  lw          $s1, -0x431C($v0)
    ctx->pc = 0x112334u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950116)));
label_112338:
    // 0x112338: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x112338u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11233c:
    // 0x11233c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x11233cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_112340:
    // 0x112340: 0x86020048  lh          $v0, 0x48($s0)
    ctx->pc = 0x112340u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 72)));
label_112344:
    // 0x112344: 0x26100048  addiu       $s0, $s0, 0x48
    ctx->pc = 0x112344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_112348:
    // 0x112348: 0xc043c96  jal         func_10F258
label_11234c:
    if (ctx->pc == 0x11234Cu) {
        ctx->pc = 0x11234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112348u;
        // 0x11234c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112350u;
        goto label_112350;
    }
    ctx->pc = 0x112348u;
    SET_GPR_U32(ctx, 31, 0x112350u);
    ctx->pc = 0x11234Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112348u;
    // 0x11234c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F258u, 0x112348u, 0x112350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112350u;
label_112350:
    // 0x112350: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x112350u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_112354:
    // 0x112354: 0xc043c8e  jal         func_10F238
label_112358:
    if (ctx->pc == 0x112358u) {
        ctx->pc = 0x112358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112354u;
        // 0x112358: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11235Cu;
        goto label_11235c;
    }
    ctx->pc = 0x112354u;
    SET_GPR_U32(ctx, 31, 0x11235Cu);
    ctx->pc = 0x112358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112354u;
    // 0x112358: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F238u, 0x112354u, 0x11235Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11235Cu;
label_11235c:
    // 0x11235c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x11235cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_112360:
    // 0x112360: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112364:
    // 0x112364: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x112364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_112368:
    // 0x112368: 0x60f809  jalr        $v1
label_11236c:
    if (ctx->pc == 0x11236Cu) {
        ctx->pc = 0x11236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112368u;
        // 0x11236c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112370u;
        goto label_112370;
    }
    ctx->pc = 0x112368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x112370u);
        ctx->pc = 0x11236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112368u;
        // 0x11236c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112368u, 0x112370u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x112370u;
label_112370:
    // 0x112370: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x112370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_112374:
    // 0x112374: 0x16c00014  bnez        $s6, . + 4 + (0x14 << 2)
label_112378:
    if (ctx->pc == 0x112378u) {
        ctx->pc = 0x112378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112374u;
        // 0x112378: 0xae700044  sw          $s0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11237Cu;
        goto label_11237c;
    }
    ctx->pc = 0x112374u;
    {
        const bool branch_taken_0x112374 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x112378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112374u;
        // 0x112378: 0xae700044  sw          $s0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112374) {
            ctx->pc = 0x1123C8u;
            goto label_1123c8;
        }
    }
    ctx->pc = 0x11237Cu;
label_11237c:
    // 0x11237c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11237cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_112380:
    // 0x112380: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x112380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_112384:
    // 0x112384: 0xae62003c  sw          $v0, 0x3C($s3)
    ctx->pc = 0x112384u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
label_112388:
    // 0x112388: 0xc043c9e  jal         func_10F278
label_11238c:
    if (ctx->pc == 0x11238Cu) {
        ctx->pc = 0x11238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112388u;
        // 0x11238c: 0xae620040  sw          $v0, 0x40($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112390u;
        goto label_112390;
    }
    ctx->pc = 0x112388u;
    SET_GPR_U32(ctx, 31, 0x112390u);
    ctx->pc = 0x11238Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112388u;
    // 0x11238c: 0xae620040  sw          $v0, 0x40($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F278u, 0x112388u, 0x112390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112390u;
label_112390:
    // 0x112390: 0x28420014  slti        $v0, $v0, 0x14
    ctx->pc = 0x112390u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
label_112394:
    // 0x112394: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_112398:
    if (ctx->pc == 0x112398u) {
        ctx->pc = 0x112398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112394u;
        // 0x112398: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11239Cu;
        goto label_11239c;
    }
    ctx->pc = 0x112394u;
    {
        const bool branch_taken_0x112394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112394u;
        // 0x112398: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112394) {
            ctx->pc = 0x1123BCu;
            goto label_1123bc;
        }
    }
    ctx->pc = 0x11239Cu;
label_11239c:
    // 0x11239c: 0x2e0201f5  sltiu       $v0, $s0, 0x1F5
    ctx->pc = 0x11239cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)501) ? 1 : 0);
label_1123a0:
    // 0x1123a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1123a4:
    if (ctx->pc == 0x1123A4u) {
        ctx->pc = 0x1123A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123A0u;
        // 0x1123a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1123A8u;
        goto label_1123a8;
    }
    ctx->pc = 0x1123A0u;
    {
        const bool branch_taken_0x1123a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1123A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123A0u;
        // 0x1123a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1123a0) {
            ctx->pc = 0x1123C0u;
            goto label_1123c0;
        }
    }
    ctx->pc = 0x1123A8u;
label_1123a8:
    // 0x1123a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1123a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1123ac:
    // 0x1123ac: 0xc046ccc  jal         func_11B330
label_1123b0:
    if (ctx->pc == 0x1123B0u) {
        ctx->pc = 0x1123B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123ACu;
        // 0x1123b0: 0x240601f4  addiu       $a2, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1123B4u;
        goto label_1123b4;
    }
    ctx->pc = 0x1123ACu;
    SET_GPR_U32(ctx, 31, 0x1123B4u);
    ctx->pc = 0x1123B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1123ACu;
    // 0x1123b0: 0x240601f4  addiu       $a2, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B330u, 0x1123ACu, 0x1123B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1123B4u;
label_1123b4:
    // 0x1123b4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1123b8:
    if (ctx->pc == 0x1123B8u) {
        ctx->pc = 0x1123B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123B4u;
        // 0x1123b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1123BCu;
        goto label_1123bc;
    }
    ctx->pc = 0x1123B4u;
    {
        const bool branch_taken_0x1123b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1123B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123B4u;
        // 0x1123b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1123b4) {
            ctx->pc = 0x1123CCu;
            goto label_1123cc;
        }
    }
    ctx->pc = 0x1123BCu;
label_1123bc:
    // 0x1123bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1123bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1123c0:
    // 0x1123c0: 0xc046ccc  jal         func_11B330
label_1123c4:
    if (ctx->pc == 0x1123C4u) {
        ctx->pc = 0x1123C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123C0u;
        // 0x1123c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1123C8u;
        goto label_1123c8;
    }
    ctx->pc = 0x1123C0u;
    SET_GPR_U32(ctx, 31, 0x1123C8u);
    ctx->pc = 0x1123C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1123C0u;
    // 0x1123c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B330u, 0x1123C0u, 0x1123C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1123C8u;
label_1123c8:
    // 0x1123c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1123c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1123cc:
    // 0x1123cc: 0x16c2001e  bne         $s6, $v0, . + 4 + (0x1E << 2)
label_1123d0:
    if (ctx->pc == 0x1123D0u) {
        ctx->pc = 0x1123D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123CCu;
        // 0x1123d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1123D4u;
        goto label_1123d4;
    }
    ctx->pc = 0x1123CCu;
    {
        const bool branch_taken_0x1123cc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x1123D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123CCu;
        // 0x1123d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1123cc) {
            ctx->pc = 0x112448u;
            goto label_112448;
        }
    }
    ctx->pc = 0x1123D4u;
label_1123d4:
    // 0x1123d4: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x1123d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_1123d8:
    // 0x1123d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1123d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1123dc:
    // 0x1123dc: 0xae620040  sw          $v0, 0x40($s3)
    ctx->pc = 0x1123dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 2));
label_1123e0:
    // 0x1123e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1123e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1123e4:
    // 0x1123e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1123e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1123e8:
    // 0x1123e8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1123e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1123ec:
    // 0x1123ec: 0xc046ccc  jal         func_11B330
label_1123f0:
    if (ctx->pc == 0x1123F0u) {
        ctx->pc = 0x1123F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123ECu;
        // 0x1123f0: 0xae62003c  sw          $v0, 0x3C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1123F4u;
        goto label_1123f4;
    }
    ctx->pc = 0x1123ECu;
    SET_GPR_U32(ctx, 31, 0x1123F4u);
    ctx->pc = 0x1123F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1123ECu;
    // 0x1123f0: 0xae62003c  sw          $v0, 0x3C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B330u, 0x1123ECu, 0x1123F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1123F4u;
label_1123f4:
    // 0x1123f4: 0xc043c06  jal         func_10F018
label_1123f8:
    if (ctx->pc == 0x1123F8u) {
        ctx->pc = 0x1123F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123F4u;
        // 0x1123f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1123FCu;
        goto label_1123fc;
    }
    ctx->pc = 0x1123F4u;
    SET_GPR_U32(ctx, 31, 0x1123FCu);
    ctx->pc = 0x1123F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1123F4u;
    // 0x1123f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F018u, 0x1123F4u, 0x1123FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1123FCu;
label_1123fc:
    // 0x1123fc: 0x1456000b  bne         $v0, $s6, . + 4 + (0xB << 2)
label_112400:
    if (ctx->pc == 0x112400u) {
        ctx->pc = 0x112400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123FCu;
        // 0x112400: 0x8ee6bce4  lw          $a2, -0x431C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294950116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112404u;
        goto label_112404;
    }
    ctx->pc = 0x1123FCu;
    {
        const bool branch_taken_0x1123fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x112400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123FCu;
        // 0x112400: 0x8ee6bce4  lw          $a2, -0x431C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294950116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1123fc) {
            ctx->pc = 0x11242Cu;
            goto label_11242c;
        }
    }
    ctx->pc = 0x112404u;
label_112404:
    // 0x112404: 0x8ea201c4  lw          $v0, 0x1C4($s5)
    ctx->pc = 0x112404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 452)));
label_112408:
    // 0x112408: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_11240c:
    if (ctx->pc == 0x11240Cu) {
        ctx->pc = 0x11240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112408u;
        // 0x11240c: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112410u;
        goto label_112410;
    }
    ctx->pc = 0x112408u;
    {
        const bool branch_taken_0x112408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112408u;
        // 0x11240c: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112408) {
            ctx->pc = 0x11242Cu;
            goto label_11242c;
        }
    }
    ctx->pc = 0x112410u;
label_112410:
    // 0x112410: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x112410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_112414:
    // 0x112414: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x112414u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_112418:
    // 0x112418: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x112418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_11241c:
    // 0x11241c: 0x60f809  jalr        $v1
label_112420:
    if (ctx->pc == 0x112420u) {
        ctx->pc = 0x112420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11241Cu;
        // 0x112420: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112424u;
        goto label_112424;
    }
    ctx->pc = 0x11241Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x112424u);
        ctx->pc = 0x112420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11241Cu;
        // 0x112420: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11241Cu, 0x112424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x112424u;
label_112424:
    // 0x112424: 0x10000008  b           . + 4 + (0x8 << 2)
label_112428:
    if (ctx->pc == 0x112428u) {
        ctx->pc = 0x112428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112424u;
        // 0x112428: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11242Cu;
        goto label_11242c;
    }
    ctx->pc = 0x112424u;
    {
        const bool branch_taken_0x112424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112424u;
        // 0x112428: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112424) {
            ctx->pc = 0x112448u;
            goto label_112448;
        }
    }
    ctx->pc = 0x11242Cu;
label_11242c:
    // 0x11242c: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x11242cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_112430:
    // 0x112430: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x112430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_112434:
    // 0x112434: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x112434u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_112438:
    // 0x112438: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x112438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_11243c:
    // 0x11243c: 0x60f809  jalr        $v1
label_112440:
    if (ctx->pc == 0x112440u) {
        ctx->pc = 0x112440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11243Cu;
        // 0x112440: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112444u;
        goto label_112444;
    }
    ctx->pc = 0x11243Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x112444u);
        ctx->pc = 0x112440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11243Cu;
        // 0x112440: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11243Cu, 0x112444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x112444u;
label_112444:
    // 0x112444: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x112444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_112448:
    // 0x112448: 0x16c2001f  bne         $s6, $v0, . + 4 + (0x1F << 2)
label_11244c:
    if (ctx->pc == 0x11244Cu) {
        ctx->pc = 0x11244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112448u;
        // 0x11244c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112450u;
        goto label_112450;
    }
    ctx->pc = 0x112448u;
    {
        const bool branch_taken_0x112448 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x11244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112448u;
        // 0x11244c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112448) {
            ctx->pc = 0x1124C8u;
            goto label_1124c8;
        }
    }
    ctx->pc = 0x112450u;
label_112450:
    // 0x112450: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x112450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_112454:
    // 0x112454: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x112454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_112458:
    // 0x112458: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x112458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11245c:
    // 0x11245c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11245cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_112460:
    // 0x112460: 0xae62003c  sw          $v0, 0x3C($s3)
    ctx->pc = 0x112460u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
label_112464:
    // 0x112464: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x112464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_112468:
    // 0x112468: 0xc046ccc  jal         func_11B330
label_11246c:
    if (ctx->pc == 0x11246Cu) {
        ctx->pc = 0x11246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112468u;
        // 0x11246c: 0xae630040  sw          $v1, 0x40($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112470u;
        goto label_112470;
    }
    ctx->pc = 0x112468u;
    SET_GPR_U32(ctx, 31, 0x112470u);
    ctx->pc = 0x11246Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112468u;
    // 0x11246c: 0xae630040  sw          $v1, 0x40($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B330u, 0x112468u, 0x112470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112470u;
label_112470:
    // 0x112470: 0xc043c06  jal         func_10F018
label_112474:
    if (ctx->pc == 0x112474u) {
        ctx->pc = 0x112474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112470u;
        // 0x112474: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112478u;
        goto label_112478;
    }
    ctx->pc = 0x112470u;
    SET_GPR_U32(ctx, 31, 0x112478u);
    ctx->pc = 0x112474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112470u;
    // 0x112474: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F018u, 0x112470u, 0x112478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112478u;
label_112478:
    // 0x112478: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x112478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11247c:
    // 0x11247c: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
label_112480:
    if (ctx->pc == 0x112480u) {
        ctx->pc = 0x112480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11247Cu;
        // 0x112480: 0x8ee6bce4  lw          $a2, -0x431C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294950116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112484u;
        goto label_112484;
    }
    ctx->pc = 0x11247Cu;
    {
        const bool branch_taken_0x11247c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x112480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11247Cu;
        // 0x112480: 0x8ee6bce4  lw          $a2, -0x431C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294950116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11247c) {
            ctx->pc = 0x1124ACu;
            goto label_1124ac;
        }
    }
    ctx->pc = 0x112484u;
label_112484:
    // 0x112484: 0x8ea201c4  lw          $v0, 0x1C4($s5)
    ctx->pc = 0x112484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 452)));
label_112488:
    // 0x112488: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_11248c:
    if (ctx->pc == 0x11248Cu) {
        ctx->pc = 0x11248Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112488u;
        // 0x11248c: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112490u;
        goto label_112490;
    }
    ctx->pc = 0x112488u;
    {
        const bool branch_taken_0x112488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11248Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112488u;
        // 0x11248c: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112488) {
            ctx->pc = 0x1124ACu;
            goto label_1124ac;
        }
    }
    ctx->pc = 0x112490u;
label_112490:
    // 0x112490: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x112490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_112494:
    // 0x112494: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x112494u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_112498:
    // 0x112498: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x112498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_11249c:
    // 0x11249c: 0x60f809  jalr        $v1
label_1124a0:
    if (ctx->pc == 0x1124A0u) {
        ctx->pc = 0x1124A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11249Cu;
        // 0x1124a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1124A4u;
        goto label_1124a4;
    }
    ctx->pc = 0x11249Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1124A4u);
        ctx->pc = 0x1124A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11249Cu;
        // 0x1124a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11249Cu, 0x1124A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1124A4u;
label_1124a4:
    // 0x1124a4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1124a8:
    if (ctx->pc == 0x1124A8u) {
        ctx->pc = 0x1124A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1124A4u;
        // 0x1124a8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1124ACu;
        goto label_1124ac;
    }
    ctx->pc = 0x1124A4u;
    {
        const bool branch_taken_0x1124a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1124A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1124A4u;
        // 0x1124a8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1124a4) {
            ctx->pc = 0x1124C8u;
            goto label_1124c8;
        }
    }
    ctx->pc = 0x1124ACu;
label_1124ac:
    // 0x1124ac: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x1124acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1124b0:
    // 0x1124b0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1124b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1124b4:
    // 0x1124b4: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1124b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_1124b8:
    // 0x1124b8: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x1124b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_1124bc:
    // 0x1124bc: 0x60f809  jalr        $v1
label_1124c0:
    if (ctx->pc == 0x1124C0u) {
        ctx->pc = 0x1124C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1124BCu;
        // 0x1124c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1124C4u;
        goto label_1124c4;
    }
    ctx->pc = 0x1124BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1124C4u);
        ctx->pc = 0x1124C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1124BCu;
        // 0x1124c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1124BCu, 0x1124C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1124C4u;
label_1124c4:
    // 0x1124c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1124c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1124c8:
    // 0x1124c8: 0x16c20019  bne         $s6, $v0, . + 4 + (0x19 << 2)
label_1124cc:
    if (ctx->pc == 0x1124CCu) {
        ctx->pc = 0x1124CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1124C8u;
        // 0x1124cc: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1124D0u;
        goto label_1124d0;
    }
    ctx->pc = 0x1124C8u;
    {
        const bool branch_taken_0x1124c8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x1124CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1124C8u;
        // 0x1124cc: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1124c8) {
            ctx->pc = 0x112530u;
            goto label_112530;
        }
    }
    ctx->pc = 0x1124D0u;
label_1124d0:
    // 0x1124d0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1124d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1124d4:
    // 0x1124d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1124d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1124d8:
    // 0x1124d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1124d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1124dc:
    // 0x1124dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1124dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1124e0:
    // 0x1124e0: 0xae63003c  sw          $v1, 0x3C($s3)
    ctx->pc = 0x1124e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 3));
label_1124e4:
    // 0x1124e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1124e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1124e8:
    // 0x1124e8: 0xc046ccc  jal         func_11B330
label_1124ec:
    if (ctx->pc == 0x1124ECu) {
        ctx->pc = 0x1124ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1124E8u;
        // 0x1124ec: 0xae620040  sw          $v0, 0x40($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1124F0u;
        goto label_1124f0;
    }
    ctx->pc = 0x1124E8u;
    SET_GPR_U32(ctx, 31, 0x1124F0u);
    ctx->pc = 0x1124ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1124E8u;
    // 0x1124ec: 0xae620040  sw          $v0, 0x40($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B330u, 0x1124E8u, 0x1124F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1124F0u;
label_1124f0:
    // 0x1124f0: 0x8ee6bce4  lw          $a2, -0x431C($s7)
    ctx->pc = 0x1124f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294950116)));
label_1124f4:
    // 0x1124f4: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x1124f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1124f8:
    // 0x1124f8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1124f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1124fc:
    // 0x1124fc: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1124fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_112500:
    // 0x112500: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x112500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_112504:
    // 0x112504: 0x60f809  jalr        $v1
label_112508:
    if (ctx->pc == 0x112508u) {
        ctx->pc = 0x112508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112504u;
        // 0x112508: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11250Cu;
        goto label_11250c;
    }
    ctx->pc = 0x112504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11250Cu);
        ctx->pc = 0x112508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112504u;
        // 0x112508: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112504u, 0x11250Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11250Cu;
label_11250c:
    // 0x11250c: 0x8ee6bce4  lw          $a2, -0x431C($s7)
    ctx->pc = 0x11250cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294950116)));
label_112510:
    // 0x112510: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x112510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_112514:
    // 0x112514: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x112514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_112518:
    // 0x112518: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x112518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_11251c:
    // 0x11251c: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x11251cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_112520:
    // 0x112520: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x112520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_112524:
    // 0x112524: 0x60f809  jalr        $v1
label_112528:
    if (ctx->pc == 0x112528u) {
        ctx->pc = 0x112528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112524u;
        // 0x112528: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11252Cu;
        goto label_11252c;
    }
    ctx->pc = 0x112524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11252Cu);
        ctx->pc = 0x112528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112524u;
        // 0x112528: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112524u, 0x11252Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11252Cu;
label_11252c:
    // 0x11252c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x11252cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_112530:
    // 0x112530: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x112530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_112534:
    // 0x112534: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x112534u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_112538:
    // 0x112538: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x112538u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_11253c:
    // 0x11253c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x11253cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_112540:
    // 0x112540: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x112540u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_112544:
    // 0x112544: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x112544u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_112548:
    // 0x112548: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x112548u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11254c:
    // 0x11254c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x11254cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_112550:
    // 0x112550: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x112550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_112554:
    // 0x112554: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x112554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_112558:
    // 0x112558: 0x3e00008  jr          $ra
label_11255c:
    if (ctx->pc == 0x11255Cu) {
        ctx->pc = 0x11255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112558u;
        // 0x11255c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112560u;
        goto label_fallthrough_0x112558;
    }
    ctx->pc = 0x112558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112558u;
        // 0x11255c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x112558:
    ctx->pc = 0x112560u;
}
