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

// Function: sub_001620A0
// Address: 0x1620a0 - 0x1624e0
void sub_001620A0_0x1620a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001620A0_0x1620a0");
#endif

    switch (ctx->pc) {
        case 0x1620a0u: goto label_1620a0;
        case 0x1620a4u: goto label_1620a4;
        case 0x1620a8u: goto label_1620a8;
        case 0x1620acu: goto label_1620ac;
        case 0x1620b0u: goto label_1620b0;
        case 0x1620b4u: goto label_1620b4;
        case 0x1620b8u: goto label_1620b8;
        case 0x1620bcu: goto label_1620bc;
        case 0x1620c0u: goto label_1620c0;
        case 0x1620c4u: goto label_1620c4;
        case 0x1620c8u: goto label_1620c8;
        case 0x1620ccu: goto label_1620cc;
        case 0x1620d0u: goto label_1620d0;
        case 0x1620d4u: goto label_1620d4;
        case 0x1620d8u: goto label_1620d8;
        case 0x1620dcu: goto label_1620dc;
        case 0x1620e0u: goto label_1620e0;
        case 0x1620e4u: goto label_1620e4;
        case 0x1620e8u: goto label_1620e8;
        case 0x1620ecu: goto label_1620ec;
        case 0x1620f0u: goto label_1620f0;
        case 0x1620f4u: goto label_1620f4;
        case 0x1620f8u: goto label_1620f8;
        case 0x1620fcu: goto label_1620fc;
        case 0x162100u: goto label_162100;
        case 0x162104u: goto label_162104;
        case 0x162108u: goto label_162108;
        case 0x16210cu: goto label_16210c;
        case 0x162110u: goto label_162110;
        case 0x162114u: goto label_162114;
        case 0x162118u: goto label_162118;
        case 0x16211cu: goto label_16211c;
        case 0x162120u: goto label_162120;
        case 0x162124u: goto label_162124;
        case 0x162128u: goto label_162128;
        case 0x16212cu: goto label_16212c;
        case 0x162130u: goto label_162130;
        case 0x162134u: goto label_162134;
        case 0x162138u: goto label_162138;
        case 0x16213cu: goto label_16213c;
        case 0x162140u: goto label_162140;
        case 0x162144u: goto label_162144;
        case 0x162148u: goto label_162148;
        case 0x16214cu: goto label_16214c;
        case 0x162150u: goto label_162150;
        case 0x162154u: goto label_162154;
        case 0x162158u: goto label_162158;
        case 0x16215cu: goto label_16215c;
        case 0x162160u: goto label_162160;
        case 0x162164u: goto label_162164;
        case 0x162168u: goto label_162168;
        case 0x16216cu: goto label_16216c;
        case 0x162170u: goto label_162170;
        case 0x162174u: goto label_162174;
        case 0x162178u: goto label_162178;
        case 0x16217cu: goto label_16217c;
        case 0x162180u: goto label_162180;
        case 0x162184u: goto label_162184;
        case 0x162188u: goto label_162188;
        case 0x16218cu: goto label_16218c;
        case 0x162190u: goto label_162190;
        case 0x162194u: goto label_162194;
        case 0x162198u: goto label_162198;
        case 0x16219cu: goto label_16219c;
        case 0x1621a0u: goto label_1621a0;
        case 0x1621a4u: goto label_1621a4;
        case 0x1621a8u: goto label_1621a8;
        case 0x1621acu: goto label_1621ac;
        case 0x1621b0u: goto label_1621b0;
        case 0x1621b4u: goto label_1621b4;
        case 0x1621b8u: goto label_1621b8;
        case 0x1621bcu: goto label_1621bc;
        case 0x1621c0u: goto label_1621c0;
        case 0x1621c4u: goto label_1621c4;
        case 0x1621c8u: goto label_1621c8;
        case 0x1621ccu: goto label_1621cc;
        case 0x1621d0u: goto label_1621d0;
        case 0x1621d4u: goto label_1621d4;
        case 0x1621d8u: goto label_1621d8;
        case 0x1621dcu: goto label_1621dc;
        case 0x1621e0u: goto label_1621e0;
        case 0x1621e4u: goto label_1621e4;
        case 0x1621e8u: goto label_1621e8;
        case 0x1621ecu: goto label_1621ec;
        case 0x1621f0u: goto label_1621f0;
        case 0x1621f4u: goto label_1621f4;
        case 0x1621f8u: goto label_1621f8;
        case 0x1621fcu: goto label_1621fc;
        case 0x162200u: goto label_162200;
        case 0x162204u: goto label_162204;
        case 0x162208u: goto label_162208;
        case 0x16220cu: goto label_16220c;
        case 0x162210u: goto label_162210;
        case 0x162214u: goto label_162214;
        case 0x162218u: goto label_162218;
        case 0x16221cu: goto label_16221c;
        case 0x162220u: goto label_162220;
        case 0x162224u: goto label_162224;
        case 0x162228u: goto label_162228;
        case 0x16222cu: goto label_16222c;
        case 0x162230u: goto label_162230;
        case 0x162234u: goto label_162234;
        case 0x162238u: goto label_162238;
        case 0x16223cu: goto label_16223c;
        case 0x162240u: goto label_162240;
        case 0x162244u: goto label_162244;
        case 0x162248u: goto label_162248;
        case 0x16224cu: goto label_16224c;
        case 0x162250u: goto label_162250;
        case 0x162254u: goto label_162254;
        case 0x162258u: goto label_162258;
        case 0x16225cu: goto label_16225c;
        case 0x162260u: goto label_162260;
        case 0x162264u: goto label_162264;
        case 0x162268u: goto label_162268;
        case 0x16226cu: goto label_16226c;
        case 0x162270u: goto label_162270;
        case 0x162274u: goto label_162274;
        case 0x162278u: goto label_162278;
        case 0x16227cu: goto label_16227c;
        case 0x162280u: goto label_162280;
        case 0x162284u: goto label_162284;
        case 0x162288u: goto label_162288;
        case 0x16228cu: goto label_16228c;
        case 0x162290u: goto label_162290;
        case 0x162294u: goto label_162294;
        case 0x162298u: goto label_162298;
        case 0x16229cu: goto label_16229c;
        case 0x1622a0u: goto label_1622a0;
        case 0x1622a4u: goto label_1622a4;
        case 0x1622a8u: goto label_1622a8;
        case 0x1622acu: goto label_1622ac;
        case 0x1622b0u: goto label_1622b0;
        case 0x1622b4u: goto label_1622b4;
        case 0x1622b8u: goto label_1622b8;
        case 0x1622bcu: goto label_1622bc;
        case 0x1622c0u: goto label_1622c0;
        case 0x1622c4u: goto label_1622c4;
        case 0x1622c8u: goto label_1622c8;
        case 0x1622ccu: goto label_1622cc;
        case 0x1622d0u: goto label_1622d0;
        case 0x1622d4u: goto label_1622d4;
        case 0x1622d8u: goto label_1622d8;
        case 0x1622dcu: goto label_1622dc;
        case 0x1622e0u: goto label_1622e0;
        case 0x1622e4u: goto label_1622e4;
        case 0x1622e8u: goto label_1622e8;
        case 0x1622ecu: goto label_1622ec;
        case 0x1622f0u: goto label_1622f0;
        case 0x1622f4u: goto label_1622f4;
        case 0x1622f8u: goto label_1622f8;
        case 0x1622fcu: goto label_1622fc;
        case 0x162300u: goto label_162300;
        case 0x162304u: goto label_162304;
        case 0x162308u: goto label_162308;
        case 0x16230cu: goto label_16230c;
        case 0x162310u: goto label_162310;
        case 0x162314u: goto label_162314;
        case 0x162318u: goto label_162318;
        case 0x16231cu: goto label_16231c;
        case 0x162320u: goto label_162320;
        case 0x162324u: goto label_162324;
        case 0x162328u: goto label_162328;
        case 0x16232cu: goto label_16232c;
        case 0x162330u: goto label_162330;
        case 0x162334u: goto label_162334;
        case 0x162338u: goto label_162338;
        case 0x16233cu: goto label_16233c;
        case 0x162340u: goto label_162340;
        case 0x162344u: goto label_162344;
        case 0x162348u: goto label_162348;
        case 0x16234cu: goto label_16234c;
        case 0x162350u: goto label_162350;
        case 0x162354u: goto label_162354;
        case 0x162358u: goto label_162358;
        case 0x16235cu: goto label_16235c;
        case 0x162360u: goto label_162360;
        case 0x162364u: goto label_162364;
        case 0x162368u: goto label_162368;
        case 0x16236cu: goto label_16236c;
        case 0x162370u: goto label_162370;
        case 0x162374u: goto label_162374;
        case 0x162378u: goto label_162378;
        case 0x16237cu: goto label_16237c;
        case 0x162380u: goto label_162380;
        case 0x162384u: goto label_162384;
        case 0x162388u: goto label_162388;
        case 0x16238cu: goto label_16238c;
        case 0x162390u: goto label_162390;
        case 0x162394u: goto label_162394;
        case 0x162398u: goto label_162398;
        case 0x16239cu: goto label_16239c;
        case 0x1623a0u: goto label_1623a0;
        case 0x1623a4u: goto label_1623a4;
        case 0x1623a8u: goto label_1623a8;
        case 0x1623acu: goto label_1623ac;
        case 0x1623b0u: goto label_1623b0;
        case 0x1623b4u: goto label_1623b4;
        case 0x1623b8u: goto label_1623b8;
        case 0x1623bcu: goto label_1623bc;
        case 0x1623c0u: goto label_1623c0;
        case 0x1623c4u: goto label_1623c4;
        case 0x1623c8u: goto label_1623c8;
        case 0x1623ccu: goto label_1623cc;
        case 0x1623d0u: goto label_1623d0;
        case 0x1623d4u: goto label_1623d4;
        case 0x1623d8u: goto label_1623d8;
        case 0x1623dcu: goto label_1623dc;
        case 0x1623e0u: goto label_1623e0;
        case 0x1623e4u: goto label_1623e4;
        case 0x1623e8u: goto label_1623e8;
        case 0x1623ecu: goto label_1623ec;
        case 0x1623f0u: goto label_1623f0;
        case 0x1623f4u: goto label_1623f4;
        case 0x1623f8u: goto label_1623f8;
        case 0x1623fcu: goto label_1623fc;
        case 0x162400u: goto label_162400;
        case 0x162404u: goto label_162404;
        case 0x162408u: goto label_162408;
        case 0x16240cu: goto label_16240c;
        case 0x162410u: goto label_162410;
        case 0x162414u: goto label_162414;
        case 0x162418u: goto label_162418;
        case 0x16241cu: goto label_16241c;
        case 0x162420u: goto label_162420;
        case 0x162424u: goto label_162424;
        case 0x162428u: goto label_162428;
        case 0x16242cu: goto label_16242c;
        case 0x162430u: goto label_162430;
        case 0x162434u: goto label_162434;
        case 0x162438u: goto label_162438;
        case 0x16243cu: goto label_16243c;
        case 0x162440u: goto label_162440;
        case 0x162444u: goto label_162444;
        case 0x162448u: goto label_162448;
        case 0x16244cu: goto label_16244c;
        case 0x162450u: goto label_162450;
        case 0x162454u: goto label_162454;
        case 0x162458u: goto label_162458;
        case 0x16245cu: goto label_16245c;
        case 0x162460u: goto label_162460;
        case 0x162464u: goto label_162464;
        case 0x162468u: goto label_162468;
        case 0x16246cu: goto label_16246c;
        case 0x162470u: goto label_162470;
        case 0x162474u: goto label_162474;
        case 0x162478u: goto label_162478;
        case 0x16247cu: goto label_16247c;
        case 0x162480u: goto label_162480;
        case 0x162484u: goto label_162484;
        case 0x162488u: goto label_162488;
        case 0x16248cu: goto label_16248c;
        case 0x162490u: goto label_162490;
        case 0x162494u: goto label_162494;
        case 0x162498u: goto label_162498;
        case 0x16249cu: goto label_16249c;
        case 0x1624a0u: goto label_1624a0;
        case 0x1624a4u: goto label_1624a4;
        case 0x1624a8u: goto label_1624a8;
        case 0x1624acu: goto label_1624ac;
        case 0x1624b0u: goto label_1624b0;
        case 0x1624b4u: goto label_1624b4;
        case 0x1624b8u: goto label_1624b8;
        case 0x1624bcu: goto label_1624bc;
        case 0x1624c0u: goto label_1624c0;
        case 0x1624c4u: goto label_1624c4;
        case 0x1624c8u: goto label_1624c8;
        case 0x1624ccu: goto label_1624cc;
        case 0x1624d0u: goto label_1624d0;
        case 0x1624d4u: goto label_1624d4;
        case 0x1624d8u: goto label_1624d8;
        case 0x1624dcu: goto label_1624dc;
        default: break;
    }

    ctx->pc = 0x1620a0u;

label_1620a0:
    // 0x1620a0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1620a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_1620a4:
    // 0x1620a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1620a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1620a8:
    // 0x1620a8: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x1620a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_1620ac:
    // 0x1620ac: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x1620acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_1620b0:
    // 0x1620b0: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x1620b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_1620b4:
    // 0x1620b4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1620b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1620b8:
    // 0x1620b8: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x1620b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_1620bc:
    // 0x1620bc: 0x24631780  addiu       $v1, $v1, 0x1780
    ctx->pc = 0x1620bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6016));
label_1620c0:
    // 0x1620c0: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x1620c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_1620c4:
    // 0x1620c4: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1620c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1620c8:
    // 0x1620c8: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1620c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_1620cc:
    // 0x1620cc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1620ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1620d0:
    // 0x1620d0: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x1620d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1620d4:
    // 0x1620d4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1620d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1620d8:
    // 0x1620d8: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x1620d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_1620dc:
    // 0x1620dc: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x1620dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_1620e0:
    // 0x1620e0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1620e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1620e4:
    // 0x1620e4: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x1620e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_1620e8:
    // 0x1620e8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1620e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1620ec:
    // 0x1620ec: 0x8e24cdb4  lw          $a0, -0x324C($s1)
    ctx->pc = 0x1620ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954420)));
label_1620f0:
    // 0x1620f0: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x1620f0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1620f4:
    // 0x1620f4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1620f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1620f8:
    // 0x1620f8: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x1620f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
label_1620fc:
    // 0x1620fc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1620fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_162100:
    // 0x162100: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x162100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_162104:
    // 0x162104: 0x84500028  lh          $s0, 0x28($v0)
    ctx->pc = 0x162104u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_162108:
    // 0x162108: 0x24520028  addiu       $s2, $v0, 0x28
    ctx->pc = 0x162108u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_16210c:
    // 0x16210c: 0x844300a8  lh          $v1, 0xA8($v0)
    ctx->pc = 0x16210cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_162110:
    // 0x162110: 0x8c4500ac  lw          $a1, 0xAC($v0)
    ctx->pc = 0x162110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_162114:
    // 0x162114: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x162114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_162118:
    // 0x162118: 0xa0f809  jalr        $a1
label_16211c:
    if (ctx->pc == 0x16211Cu) {
        ctx->pc = 0x16211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162118u;
        // 0x16211c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162120u;
        goto label_162120;
    }
    ctx->pc = 0x162118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x162120u);
        ctx->pc = 0x16211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162118u;
        // 0x16211c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162118u, 0x162120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162120u;
label_162120:
    // 0x162120: 0x8e26cdb4  lw          $a2, -0x324C($s1)
    ctx->pc = 0x162120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954420)));
label_162124:
    // 0x162124: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x162124u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_162128:
    // 0x162128: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x162128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_16212c:
    // 0x16212c: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x16212cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_162130:
    // 0x162130: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x162130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_162134:
    // 0x162134: 0x60f809  jalr        $v1
label_162138:
    if (ctx->pc == 0x162138u) {
        ctx->pc = 0x162138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162134u;
        // 0x162138: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16213Cu;
        goto label_16213c;
    }
    ctx->pc = 0x162134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16213Cu);
        ctx->pc = 0x162138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162134u;
        // 0x162138: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162134u, 0x16213Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16213Cu;
label_16213c:
    // 0x16213c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x16213cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_162140:
    // 0x162140: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x162140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_162144:
    // 0x162144: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_162148:
    // 0x162148: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x162148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_16214c:
    // 0x16214c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x16214cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_162150:
    // 0x162150: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x162150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_162154:
    // 0x162154: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x162154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_162158:
    // 0x162158: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x162158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
label_16215c:
    // 0x16215c: 0x34215000  ori         $at, $at, 0x5000
    ctx->pc = 0x16215cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20480);
label_162160:
    // 0x162160: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x162160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_162164:
    // 0x162164: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x162164u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_162168:
    // 0x162168: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x162168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_16216c:
    // 0x16216c: 0x40f809  jalr        $v0
label_162170:
    if (ctx->pc == 0x162170u) {
        ctx->pc = 0x162170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16216Cu;
        // 0x162170: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x162174u;
        goto label_162174;
    }
    ctx->pc = 0x16216Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162174u);
        ctx->pc = 0x162170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16216Cu;
        // 0x162170: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16216Cu, 0x162174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162174u;
label_162174:
    // 0x162174: 0x8e25cdb4  lw          $a1, -0x324C($s1)
    ctx->pc = 0x162174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954420)));
label_162178:
    // 0x162178: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x162178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_16217c:
    // 0x16217c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x16217cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_162180:
    // 0x162180: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x162180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_162184:
    // 0x162184: 0x60f809  jalr        $v1
label_162188:
    if (ctx->pc == 0x162188u) {
        ctx->pc = 0x162188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162184u;
        // 0x162188: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16218Cu;
        goto label_16218c;
    }
    ctx->pc = 0x162184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16218Cu);
        ctx->pc = 0x162188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162184u;
        // 0x162188: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162184u, 0x16218Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16218Cu;
label_16218c:
    // 0x16218c: 0x8e24cdb4  lw          $a0, -0x324C($s1)
    ctx->pc = 0x16218cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954420)));
label_162190:
    // 0x162190: 0xaea00010  sw          $zero, 0x10($s5)
    ctx->pc = 0x162190u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
label_162194:
    // 0x162194: 0x8c960000  lw          $s6, 0x0($a0)
    ctx->pc = 0x162194u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_162198:
    // 0x162198: 0x32c20004  andi        $v0, $s6, 0x4
    ctx->pc = 0x162198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
label_16219c:
    // 0x16219c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_1621a0:
    if (ctx->pc == 0x1621A0u) {
        ctx->pc = 0x1621A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16219Cu;
        // 0x1621a0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1621A4u;
        goto label_1621a4;
    }
    ctx->pc = 0x16219Cu;
    {
        const bool branch_taken_0x16219c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1621A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16219Cu;
        // 0x1621a0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16219c) {
            ctx->pc = 0x162224u;
            goto label_162224;
        }
    }
    ctx->pc = 0x1621A4u;
label_1621a4:
    // 0x1621a4: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x1621a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1621a8:
    // 0x1621a8: 0x8c630120  lw          $v1, 0x120($v1)
    ctx->pc = 0x1621a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
label_1621ac:
    // 0x1621ac: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1621acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_1621b0:
    // 0x1621b0: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_1621b4:
    if (ctx->pc == 0x1621B4u) {
        ctx->pc = 0x1621B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621B0u;
        // 0x1621b4: 0x3c1e005e  lui         $fp, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1621B8u;
        goto label_1621b8;
    }
    ctx->pc = 0x1621B0u;
    {
        const bool branch_taken_0x1621b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1621B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621B0u;
        // 0x1621b4: 0x3c1e005e  lui         $fp, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1621b0) {
            ctx->pc = 0x1622B0u;
            goto label_1622b0;
        }
    }
    ctx->pc = 0x1621B8u;
label_1621b8:
    // 0x1621b8: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1621b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1621bc:
    // 0x1621bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1621bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1621c0:
    // 0x1621c0: 0x244205a0  addiu       $v0, $v0, 0x5A0
    ctx->pc = 0x1621c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
label_1621c4:
    // 0x1621c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1621c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1621c8:
    // 0x1621c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1621c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1621cc:
    // 0x1621cc: 0x800008  jr          $a0
label_1621d0:
    if (ctx->pc == 0x1621D0u) {
        ctx->pc = 0x1621D4u;
        goto label_1621d4;
    }
    ctx->pc = 0x1621CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1621D4u: goto label_1621d4;
            case 0x1621E4u: goto label_1621e4;
            case 0x1621F4u: goto label_1621f4;
            case 0x162204u: goto label_162204;
            case 0x162214u: goto label_162214;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1621CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1621D4u;
label_1621d4:
    // 0x1621d4: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x1621d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
label_1621d8:
    // 0x1621d8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1621d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1621dc:
    // 0x1621dc: 0x10000030  b           . + 4 + (0x30 << 2)
label_1621e0:
    if (ctx->pc == 0x1621E0u) {
        ctx->pc = 0x1621E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621DCu;
        // 0x1621e0: 0x24a50470  addiu       $a1, $a1, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1621E4u;
        goto label_1621e4;
    }
    ctx->pc = 0x1621DCu;
    {
        const bool branch_taken_0x1621dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1621E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621DCu;
        // 0x1621e0: 0x24a50470  addiu       $a1, $a1, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1621dc) {
            ctx->pc = 0x1622A0u;
            goto label_1622a0;
        }
    }
    ctx->pc = 0x1621E4u;
label_1621e4:
    // 0x1621e4: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x1621e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
label_1621e8:
    // 0x1621e8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1621e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1621ec:
    // 0x1621ec: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1621f0:
    if (ctx->pc == 0x1621F0u) {
        ctx->pc = 0x1621F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621ECu;
        // 0x1621f0: 0x24a50488  addiu       $a1, $a1, 0x488 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1621F4u;
        goto label_1621f4;
    }
    ctx->pc = 0x1621ECu;
    {
        const bool branch_taken_0x1621ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1621F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621ECu;
        // 0x1621f0: 0x24a50488  addiu       $a1, $a1, 0x488 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1621ec) {
            ctx->pc = 0x1622A0u;
            goto label_1622a0;
        }
    }
    ctx->pc = 0x1621F4u;
label_1621f4:
    // 0x1621f4: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x1621f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
label_1621f8:
    // 0x1621f8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1621f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1621fc:
    // 0x1621fc: 0x10000028  b           . + 4 + (0x28 << 2)
label_162200:
    if (ctx->pc == 0x162200u) {
        ctx->pc = 0x162200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621FCu;
        // 0x162200: 0x24a504a0  addiu       $a1, $a1, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162204u;
        goto label_162204;
    }
    ctx->pc = 0x1621FCu;
    {
        const bool branch_taken_0x1621fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621FCu;
        // 0x162200: 0x24a504a0  addiu       $a1, $a1, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1621fc) {
            ctx->pc = 0x1622A0u;
            goto label_1622a0;
        }
    }
    ctx->pc = 0x162204u;
label_162204:
    // 0x162204: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x162204u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
label_162208:
    // 0x162208: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x162208u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_16220c:
    // 0x16220c: 0x10000024  b           . + 4 + (0x24 << 2)
label_162210:
    if (ctx->pc == 0x162210u) {
        ctx->pc = 0x162210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16220Cu;
        // 0x162210: 0x24a504b8  addiu       $a1, $a1, 0x4B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162214u;
        goto label_162214;
    }
    ctx->pc = 0x16220Cu;
    {
        const bool branch_taken_0x16220c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16220Cu;
        // 0x162210: 0x24a504b8  addiu       $a1, $a1, 0x4B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16220c) {
            ctx->pc = 0x1622A0u;
            goto label_1622a0;
        }
    }
    ctx->pc = 0x162214u;
label_162214:
    // 0x162214: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x162214u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
label_162218:
    // 0x162218: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x162218u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_16221c:
    // 0x16221c: 0x10000020  b           . + 4 + (0x20 << 2)
label_162220:
    if (ctx->pc == 0x162220u) {
        ctx->pc = 0x162220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16221Cu;
        // 0x162220: 0x24a504d0  addiu       $a1, $a1, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162224u;
        goto label_162224;
    }
    ctx->pc = 0x16221Cu;
    {
        const bool branch_taken_0x16221c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16221Cu;
        // 0x162220: 0x24a504d0  addiu       $a1, $a1, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16221c) {
            ctx->pc = 0x1622A0u;
            goto label_1622a0;
        }
    }
    ctx->pc = 0x162224u;
label_162224:
    // 0x162224: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x162224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_162228:
    // 0x162228: 0x8c630120  lw          $v1, 0x120($v1)
    ctx->pc = 0x162228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
label_16222c:
    // 0x16222c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x16222cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_162230:
    // 0x162230: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_162234:
    if (ctx->pc == 0x162234u) {
        ctx->pc = 0x162234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162230u;
        // 0x162234: 0x3c1e005e  lui         $fp, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162238u;
        goto label_162238;
    }
    ctx->pc = 0x162230u;
    {
        const bool branch_taken_0x162230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162230u;
        // 0x162234: 0x3c1e005e  lui         $fp, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162230) {
            ctx->pc = 0x1622B0u;
            goto label_1622b0;
        }
    }
    ctx->pc = 0x162238u;
label_162238:
    // 0x162238: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x162238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_16223c:
    // 0x16223c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16223cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_162240:
    // 0x162240: 0x244205c0  addiu       $v0, $v0, 0x5C0
    ctx->pc = 0x162240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1472));
label_162244:
    // 0x162244: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x162244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_162248:
    // 0x162248: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x162248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16224c:
    // 0x16224c: 0x800008  jr          $a0
label_162250:
    if (ctx->pc == 0x162250u) {
        ctx->pc = 0x162254u;
        goto label_162254;
    }
    ctx->pc = 0x16224Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162254u: goto label_162254;
            case 0x162264u: goto label_162264;
            case 0x162274u: goto label_162274;
            case 0x162284u: goto label_162284;
            case 0x162294u: goto label_162294;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16224Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x162254u;
label_162254:
    // 0x162254: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x162254u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
label_162258:
    // 0x162258: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x162258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_16225c:
    // 0x16225c: 0x10000010  b           . + 4 + (0x10 << 2)
label_162260:
    if (ctx->pc == 0x162260u) {
        ctx->pc = 0x162260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16225Cu;
        // 0x162260: 0x24a504e8  addiu       $a1, $a1, 0x4E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162264u;
        goto label_162264;
    }
    ctx->pc = 0x16225Cu;
    {
        const bool branch_taken_0x16225c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16225Cu;
        // 0x162260: 0x24a504e8  addiu       $a1, $a1, 0x4E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16225c) {
            ctx->pc = 0x1622A0u;
            goto label_1622a0;
        }
    }
    ctx->pc = 0x162264u;
label_162264:
    // 0x162264: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x162264u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
label_162268:
    // 0x162268: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x162268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_16226c:
    // 0x16226c: 0x1000000c  b           . + 4 + (0xC << 2)
label_162270:
    if (ctx->pc == 0x162270u) {
        ctx->pc = 0x162270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16226Cu;
        // 0x162270: 0x24a50500  addiu       $a1, $a1, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162274u;
        goto label_162274;
    }
    ctx->pc = 0x16226Cu;
    {
        const bool branch_taken_0x16226c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16226Cu;
        // 0x162270: 0x24a50500  addiu       $a1, $a1, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16226c) {
            ctx->pc = 0x1622A0u;
            goto label_1622a0;
        }
    }
    ctx->pc = 0x162274u;
label_162274:
    // 0x162274: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x162274u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
label_162278:
    // 0x162278: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x162278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_16227c:
    // 0x16227c: 0x10000008  b           . + 4 + (0x8 << 2)
label_162280:
    if (ctx->pc == 0x162280u) {
        ctx->pc = 0x162280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16227Cu;
        // 0x162280: 0x24a50518  addiu       $a1, $a1, 0x518 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162284u;
        goto label_162284;
    }
    ctx->pc = 0x16227Cu;
    {
        const bool branch_taken_0x16227c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16227Cu;
        // 0x162280: 0x24a50518  addiu       $a1, $a1, 0x518 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16227c) {
            ctx->pc = 0x1622A0u;
            goto label_1622a0;
        }
    }
    ctx->pc = 0x162284u;
label_162284:
    // 0x162284: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x162284u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
label_162288:
    // 0x162288: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x162288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_16228c:
    // 0x16228c: 0x10000004  b           . + 4 + (0x4 << 2)
label_162290:
    if (ctx->pc == 0x162290u) {
        ctx->pc = 0x162290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16228Cu;
        // 0x162290: 0x24a50530  addiu       $a1, $a1, 0x530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162294u;
        goto label_162294;
    }
    ctx->pc = 0x16228Cu;
    {
        const bool branch_taken_0x16228c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16228Cu;
        // 0x162290: 0x24a50530  addiu       $a1, $a1, 0x530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16228c) {
            ctx->pc = 0x1622A0u;
            goto label_1622a0;
        }
    }
    ctx->pc = 0x162294u;
label_162294:
    // 0x162294: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x162294u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
label_162298:
    // 0x162298: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x162298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_16229c:
    // 0x16229c: 0x24a50548  addiu       $a1, $a1, 0x548
    ctx->pc = 0x16229cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1352));
label_1622a0:
    // 0x1622a0: 0xc050fda  jal         func_143F68
label_1622a4:
    if (ctx->pc == 0x1622A4u) {
        ctx->pc = 0x1622A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1622A0u;
        // 0x1622a4: 0x260491e0  addiu       $a0, $s0, -0x6E20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1622A8u;
        goto label_1622a8;
    }
    ctx->pc = 0x1622A0u;
    SET_GPR_U32(ctx, 31, 0x1622A8u);
    ctx->pc = 0x1622A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1622A0u;
    // 0x1622a4: 0x260491e0  addiu       $a0, $s0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x1622A0u, 0x1622A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1622A8u;
label_1622a8:
    // 0x1622a8: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x1622a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1622ac:
    // 0x1622ac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1622acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1622b0:
    // 0x1622b0: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1622b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1622b4:
    // 0x1622b4: 0x3c130055  lui         $s3, 0x55
    ctx->pc = 0x1622b4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)85 << 16));
label_1622b8:
    // 0x1622b8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1622b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1622bc:
    // 0x1622bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1622bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1622c0:
    // 0x1622c0: 0x26660560  addiu       $a2, $s3, 0x560
    ctx->pc = 0x1622c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
label_1622c4:
    // 0x1622c4: 0xc10ca04  jal         func_432810
label_1622c8:
    if (ctx->pc == 0x1622C8u) {
        ctx->pc = 0x1622C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1622C4u;
        // 0x1622c8: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1622CCu;
        goto label_1622cc;
    }
    ctx->pc = 0x1622C4u;
    SET_GPR_U32(ctx, 31, 0x1622CCu);
    ctx->pc = 0x1622C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1622C4u;
    // 0x1622c8: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1622C4u, 0x1622CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1622CCu;
label_1622cc:
    // 0x1622cc: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1622ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1622d0:
    // 0x1622d0: 0x8e24cd4c  lw          $a0, -0x32B4($s1)
    ctx->pc = 0x1622d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
label_1622d4:
    // 0x1622d4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1622d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1622d8:
    // 0x1622d8: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x1622d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
label_1622dc:
    // 0x1622dc: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1622dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_1622e0:
    // 0x1622e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1622e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1622e4:
    // 0x1622e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1622e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1622e8:
    // 0x1622e8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1622e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1622ec:
    // 0x1622ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1622ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1622f0:
    // 0x1622f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1622f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1622f4:
    // 0x1622f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1622f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1622f8:
    // 0x1622f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1622f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1622fc:
    // 0x1622fc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1622fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162300:
    // 0x162300: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x162300u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162304:
    // 0x162304: 0xc062bb0  jal         func_18AEC0
label_162308:
    if (ctx->pc == 0x162308u) {
        ctx->pc = 0x162308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162304u;
        // 0x162308: 0x26b00004  addiu       $s0, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16230Cu;
        goto label_16230c;
    }
    ctx->pc = 0x162304u;
    SET_GPR_U32(ctx, 31, 0x16230Cu);
    ctx->pc = 0x162308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162304u;
    // 0x162308: 0x26b00004  addiu       $s0, $s5, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x162304u, 0x16230Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16230Cu;
label_16230c:
    // 0x16230c: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x16230cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_162310:
    // 0x162310: 0x8e24cd4c  lw          $a0, -0x32B4($s1)
    ctx->pc = 0x162310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
label_162314:
    // 0x162314: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x162314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_162318:
    // 0x162318: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x162318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_16231c:
    // 0x16231c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x16231cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_162320:
    // 0x162320: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x162320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_162324:
    // 0x162324: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x162324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_162328:
    // 0x162328: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x162328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_16232c:
    // 0x16232c: 0xc0616ac  jal         func_185AB0
label_162330:
    if (ctx->pc == 0x162330u) {
        ctx->pc = 0x162330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16232Cu;
        // 0x162330: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162334u;
        goto label_162334;
    }
    ctx->pc = 0x16232Cu;
    SET_GPR_U32(ctx, 31, 0x162334u);
    ctx->pc = 0x162330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16232Cu;
    // 0x162330: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x16232Cu, 0x162334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162334u;
label_162334:
    // 0x162334: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x162334u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_162338:
    // 0x162338: 0x32d60004  andi        $s6, $s6, 0x4
    ctx->pc = 0x162338u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
label_16233c:
    // 0x16233c: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x16233cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_162340:
    // 0x162340: 0x10000004  b           . + 4 + (0x4 << 2)
label_162344:
    if (ctx->pc == 0x162344u) {
        ctx->pc = 0x162344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162340u;
        // 0x162344: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162348u;
        goto label_162348;
    }
    ctx->pc = 0x162340u;
    {
        const bool branch_taken_0x162340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162340u;
        // 0x162344: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162340) {
            ctx->pc = 0x162354u;
            goto label_162354;
        }
    }
    ctx->pc = 0x162348u;
label_162348:
    // 0x162348: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x162348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16234c:
    // 0x16234c: 0xc0552b8  jal         func_154AE0
label_162350:
    if (ctx->pc == 0x162350u) {
        ctx->pc = 0x162350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16234Cu;
        // 0x162350: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162354u;
        goto label_162354;
    }
    ctx->pc = 0x16234Cu;
    SET_GPR_U32(ctx, 31, 0x162354u);
    ctx->pc = 0x162350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16234Cu;
    // 0x162350: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x16234Cu, 0x162354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162354u;
label_162354:
    // 0x162354: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x162354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_162358:
    // 0x162358: 0xc065cac  jal         func_1972B0
label_16235c:
    if (ctx->pc == 0x16235Cu) {
        ctx->pc = 0x16235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162358u;
        // 0x16235c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162360u;
        goto label_162360;
    }
    ctx->pc = 0x162358u;
    SET_GPR_U32(ctx, 31, 0x162360u);
    ctx->pc = 0x16235Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162358u;
    // 0x16235c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1972B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1972B0u, 0x162358u, 0x162360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162360u;
label_162360:
    // 0x162360: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_162364:
    if (ctx->pc == 0x162364u) {
        ctx->pc = 0x162364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162360u;
        // 0x162364: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162368u;
        goto label_162368;
    }
    ctx->pc = 0x162360u;
    {
        const bool branch_taken_0x162360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162360u;
        // 0x162364: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162360) {
            ctx->pc = 0x162348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162348;
        }
    }
    ctx->pc = 0x162368u;
label_162368:
    // 0x162368: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x162368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_16236c:
    // 0x16236c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16236cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_162370:
    // 0x162370: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
label_162374:
    if (ctx->pc == 0x162374u) {
        ctx->pc = 0x162374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162370u;
        // 0x162374: 0xaea20010  sw          $v0, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162378u;
        goto label_162378;
    }
    ctx->pc = 0x162370u;
    {
        const bool branch_taken_0x162370 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x162374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162370u;
        // 0x162374: 0xaea20010  sw          $v0, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162370) {
            ctx->pc = 0x162388u;
            goto label_162388;
        }
    }
    ctx->pc = 0x162378u;
label_162378:
    // 0x162378: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x162378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_16237c:
    // 0x16237c: 0x27c491e0  addiu       $a0, $fp, -0x6E20
    ctx->pc = 0x16237cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294939104));
label_162380:
    // 0x162380: 0x10000004  b           . + 4 + (0x4 << 2)
label_162384:
    if (ctx->pc == 0x162384u) {
        ctx->pc = 0x162384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162380u;
        // 0x162384: 0x24a50568  addiu       $a1, $a1, 0x568 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162388u;
        goto label_162388;
    }
    ctx->pc = 0x162380u;
    {
        const bool branch_taken_0x162380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162380u;
        // 0x162384: 0x24a50568  addiu       $a1, $a1, 0x568 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162380) {
            ctx->pc = 0x162394u;
            goto label_162394;
        }
    }
    ctx->pc = 0x162388u;
label_162388:
    // 0x162388: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x162388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_16238c:
    // 0x16238c: 0x27c491e0  addiu       $a0, $fp, -0x6E20
    ctx->pc = 0x16238cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294939104));
label_162390:
    // 0x162390: 0x24a50580  addiu       $a1, $a1, 0x580
    ctx->pc = 0x162390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1408));
label_162394:
    // 0x162394: 0xc050fda  jal         func_143F68
label_162398:
    if (ctx->pc == 0x162398u) {
        ctx->pc = 0x16239Cu;
        goto label_16239c;
    }
    ctx->pc = 0x162394u;
    SET_GPR_U32(ctx, 31, 0x16239Cu);
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x162394u, 0x16239Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16239Cu;
label_16239c:
    // 0x16239c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x16239cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1623a0:
    // 0x1623a0: 0x26660560  addiu       $a2, $s3, 0x560
    ctx->pc = 0x1623a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
label_1623a4:
    // 0x1623a4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1623a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1623a8:
    // 0x1623a8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1623a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1623ac:
    // 0x1623ac: 0xc10ca04  jal         func_432810
label_1623b0:
    if (ctx->pc == 0x1623B0u) {
        ctx->pc = 0x1623B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1623ACu;
        // 0x1623b0: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1623B4u;
        goto label_1623b4;
    }
    ctx->pc = 0x1623ACu;
    SET_GPR_U32(ctx, 31, 0x1623B4u);
    ctx->pc = 0x1623B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1623ACu;
    // 0x1623b0: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1623ACu, 0x1623B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1623B4u;
label_1623b4:
    // 0x1623b4: 0x3c13005e  lui         $s3, 0x5E
    ctx->pc = 0x1623b4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)94 << 16));
label_1623b8:
    // 0x1623b8: 0x8e24cd4c  lw          $a0, -0x32B4($s1)
    ctx->pc = 0x1623b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
label_1623bc:
    // 0x1623bc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1623bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1623c0:
    // 0x1623c0: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x1623c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
label_1623c4:
    // 0x1623c4: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1623c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_1623c8:
    // 0x1623c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1623c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1623cc:
    // 0x1623cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1623ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1623d0:
    // 0x1623d0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1623d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1623d4:
    // 0x1623d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1623d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1623d8:
    // 0x1623d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1623d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1623dc:
    // 0x1623dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1623dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1623e0:
    // 0x1623e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1623e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1623e4:
    // 0x1623e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1623e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1623e8:
    // 0x1623e8: 0xc062bb0  jal         func_18AEC0
label_1623ec:
    if (ctx->pc == 0x1623ECu) {
        ctx->pc = 0x1623ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1623E8u;
        // 0x1623ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1623F0u;
        goto label_1623f0;
    }
    ctx->pc = 0x1623E8u;
    SET_GPR_U32(ctx, 31, 0x1623F0u);
    ctx->pc = 0x1623ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1623E8u;
    // 0x1623ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x1623E8u, 0x1623F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1623F0u;
label_1623f0:
    // 0x1623f0: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x1623f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_1623f4:
    // 0x1623f4: 0x8e24cd4c  lw          $a0, -0x32B4($s1)
    ctx->pc = 0x1623f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
label_1623f8:
    // 0x1623f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1623f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1623fc:
    // 0x1623fc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1623fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_162400:
    // 0x162400: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x162400u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_162404:
    // 0x162404: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x162404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_162408:
    // 0x162408: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x162408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16240c:
    // 0x16240c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x16240cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_162410:
    // 0x162410: 0xc0616ac  jal         func_185AB0
label_162414:
    if (ctx->pc == 0x162414u) {
        ctx->pc = 0x162414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162410u;
        // 0x162414: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162418u;
        goto label_162418;
    }
    ctx->pc = 0x162410u;
    SET_GPR_U32(ctx, 31, 0x162418u);
    ctx->pc = 0x162414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162410u;
    // 0x162414: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x162410u, 0x162418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162418u;
label_162418:
    // 0x162418: 0x10000004  b           . + 4 + (0x4 << 2)
label_16241c:
    if (ctx->pc == 0x16241Cu) {
        ctx->pc = 0x16241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162418u;
        // 0x16241c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162420u;
        goto label_162420;
    }
    ctx->pc = 0x162418u;
    {
        const bool branch_taken_0x162418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162418u;
        // 0x16241c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162418) {
            ctx->pc = 0x16242Cu;
            goto label_16242c;
        }
    }
    ctx->pc = 0x162420u;
label_162420:
    // 0x162420: 0x8e645340  lw          $a0, 0x5340($s3)
    ctx->pc = 0x162420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21312)));
label_162424:
    // 0x162424: 0xc0552b8  jal         func_154AE0
label_162428:
    if (ctx->pc == 0x162428u) {
        ctx->pc = 0x162428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162424u;
        // 0x162428: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16242Cu;
        goto label_16242c;
    }
    ctx->pc = 0x162424u;
    SET_GPR_U32(ctx, 31, 0x16242Cu);
    ctx->pc = 0x162428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162424u;
    // 0x162428: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x162424u, 0x16242Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16242Cu;
label_16242c:
    // 0x16242c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16242cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_162430:
    // 0x162430: 0xc065cac  jal         func_1972B0
label_162434:
    if (ctx->pc == 0x162434u) {
        ctx->pc = 0x162434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162430u;
        // 0x162434: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162438u;
        goto label_162438;
    }
    ctx->pc = 0x162430u;
    SET_GPR_U32(ctx, 31, 0x162438u);
    ctx->pc = 0x162434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162430u;
    // 0x162434: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1972B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1972B0u, 0x162430u, 0x162438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162438u;
label_162438:
    // 0x162438: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_16243c:
    if (ctx->pc == 0x16243Cu) {
        ctx->pc = 0x16243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162438u;
        // 0x16243c: 0x8e45b8b8  lw          $a1, -0x4748($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162440u;
        goto label_162440;
    }
    ctx->pc = 0x162438u;
    {
        const bool branch_taken_0x162438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162438u;
        // 0x16243c: 0x8e45b8b8  lw          $a1, -0x4748($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162438) {
            ctx->pc = 0x162420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162420;
        }
    }
    ctx->pc = 0x162440u;
label_162440:
    // 0x162440: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x162440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_162444:
    // 0x162444: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x162444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_162448:
    // 0x162448: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x162448u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
label_16244c:
    // 0x16244c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16244cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_162450:
    // 0x162450: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x162450u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_162454:
    // 0x162454: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x162454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_162458:
    // 0x162458: 0x40f809  jalr        $v0
label_16245c:
    if (ctx->pc == 0x16245Cu) {
        ctx->pc = 0x16245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162458u;
        // 0x16245c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162460u;
        goto label_162460;
    }
    ctx->pc = 0x162458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162460u);
        ctx->pc = 0x16245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162458u;
        // 0x16245c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162458u, 0x162460u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162460u;
label_162460:
    // 0x162460: 0x24435208  addiu       $v1, $v0, 0x5208
    ctx->pc = 0x162460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 21000));
label_162464:
    // 0x162464: 0xaea20018  sw          $v0, 0x18($s5)
    ctx->pc = 0x162464u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
label_162468:
    // 0x162468: 0x10000005  b           . + 4 + (0x5 << 2)
label_16246c:
    if (ctx->pc == 0x16246Cu) {
        ctx->pc = 0x16246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162468u;
        // 0x16246c: 0xaea3001c  sw          $v1, 0x1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162470u;
        goto label_162470;
    }
    ctx->pc = 0x162468u;
    {
        const bool branch_taken_0x162468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162468u;
        // 0x16246c: 0xaea3001c  sw          $v1, 0x1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162468) {
            ctx->pc = 0x162480u;
            goto label_162480;
        }
    }
    ctx->pc = 0x162470u;
label_162470:
    // 0x162470: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x162470u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_162474:
    // 0x162474: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x162474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_162478:
    // 0x162478: 0x60f809  jalr        $v1
label_16247c:
    if (ctx->pc == 0x16247Cu) {
        ctx->pc = 0x16247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162478u;
        // 0x16247c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162480u;
        goto label_162480;
    }
    ctx->pc = 0x162478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x162480u);
        ctx->pc = 0x16247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162478u;
        // 0x16247c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162478u, 0x162480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162480u;
label_162480:
    // 0x162480: 0x8e45b8b8  lw          $a1, -0x4748($s2)
    ctx->pc = 0x162480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949048)));
label_162484:
    // 0x162484: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x162484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_162488:
    // 0x162488: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x162488u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_16248c:
    // 0x16248c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x16248cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_162490:
    // 0x162490: 0x40f809  jalr        $v0
label_162494:
    if (ctx->pc == 0x162494u) {
        ctx->pc = 0x162494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162490u;
        // 0x162494: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162498u;
        goto label_162498;
    }
    ctx->pc = 0x162490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162498u);
        ctx->pc = 0x162494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162490u;
        // 0x162494: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162490u, 0x162498u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162498u;
label_162498:
    // 0x162498: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x162498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_16249c:
    // 0x16249c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16249cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1624a0:
    // 0x1624a0: 0x2c4200c8  sltiu       $v0, $v0, 0xC8
    ctx->pc = 0x1624a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)200) ? 1 : 0);
label_1624a4:
    // 0x1624a4: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
label_1624a8:
    if (ctx->pc == 0x1624A8u) {
        ctx->pc = 0x1624A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1624A4u;
        // 0x1624a8: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1624ACu;
        goto label_1624ac;
    }
    ctx->pc = 0x1624A4u;
    {
        const bool branch_taken_0x1624a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1624a4) {
            ctx->pc = 0x1624A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1624A4u;
            // 0x1624a8: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162470;
        }
    }
    ctx->pc = 0x1624ACu;
label_1624ac:
    // 0x1624ac: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x1624acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1624b0:
    // 0x1624b0: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x1624b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1624b4:
    // 0x1624b4: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x1624b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1624b8:
    // 0x1624b8: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x1624b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1624bc:
    // 0x1624bc: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x1624bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1624c0:
    // 0x1624c0: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x1624c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1624c4:
    // 0x1624c4: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1624c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1624c8:
    // 0x1624c8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1624c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1624cc:
    // 0x1624cc: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x1624ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1624d0:
    // 0x1624d0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1624d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1624d4:
    // 0x1624d4: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x1624d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1624d8:
    // 0x1624d8: 0x3e00008  jr          $ra
label_1624dc:
    if (ctx->pc == 0x1624DCu) {
        ctx->pc = 0x1624DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1624D8u;
        // 0x1624dc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1624E0u;
        goto label_fallthrough_0x1624d8;
    }
    ctx->pc = 0x1624D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1624DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1624D8u;
        // 0x1624dc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1624D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1624d8:
    ctx->pc = 0x1624E0u;
}
