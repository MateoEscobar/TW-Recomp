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

// Function: sub_002050F0
// Address: 0x2050f0 - 0x2054a0
void sub_002050F0_0x2050f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002050F0_0x2050f0");
#endif

    switch (ctx->pc) {
        case 0x2050f0u: goto label_2050f0;
        case 0x2050f4u: goto label_2050f4;
        case 0x2050f8u: goto label_2050f8;
        case 0x2050fcu: goto label_2050fc;
        case 0x205100u: goto label_205100;
        case 0x205104u: goto label_205104;
        case 0x205108u: goto label_205108;
        case 0x20510cu: goto label_20510c;
        case 0x205110u: goto label_205110;
        case 0x205114u: goto label_205114;
        case 0x205118u: goto label_205118;
        case 0x20511cu: goto label_20511c;
        case 0x205120u: goto label_205120;
        case 0x205124u: goto label_205124;
        case 0x205128u: goto label_205128;
        case 0x20512cu: goto label_20512c;
        case 0x205130u: goto label_205130;
        case 0x205134u: goto label_205134;
        case 0x205138u: goto label_205138;
        case 0x20513cu: goto label_20513c;
        case 0x205140u: goto label_205140;
        case 0x205144u: goto label_205144;
        case 0x205148u: goto label_205148;
        case 0x20514cu: goto label_20514c;
        case 0x205150u: goto label_205150;
        case 0x205154u: goto label_205154;
        case 0x205158u: goto label_205158;
        case 0x20515cu: goto label_20515c;
        case 0x205160u: goto label_205160;
        case 0x205164u: goto label_205164;
        case 0x205168u: goto label_205168;
        case 0x20516cu: goto label_20516c;
        case 0x205170u: goto label_205170;
        case 0x205174u: goto label_205174;
        case 0x205178u: goto label_205178;
        case 0x20517cu: goto label_20517c;
        case 0x205180u: goto label_205180;
        case 0x205184u: goto label_205184;
        case 0x205188u: goto label_205188;
        case 0x20518cu: goto label_20518c;
        case 0x205190u: goto label_205190;
        case 0x205194u: goto label_205194;
        case 0x205198u: goto label_205198;
        case 0x20519cu: goto label_20519c;
        case 0x2051a0u: goto label_2051a0;
        case 0x2051a4u: goto label_2051a4;
        case 0x2051a8u: goto label_2051a8;
        case 0x2051acu: goto label_2051ac;
        case 0x2051b0u: goto label_2051b0;
        case 0x2051b4u: goto label_2051b4;
        case 0x2051b8u: goto label_2051b8;
        case 0x2051bcu: goto label_2051bc;
        case 0x2051c0u: goto label_2051c0;
        case 0x2051c4u: goto label_2051c4;
        case 0x2051c8u: goto label_2051c8;
        case 0x2051ccu: goto label_2051cc;
        case 0x2051d0u: goto label_2051d0;
        case 0x2051d4u: goto label_2051d4;
        case 0x2051d8u: goto label_2051d8;
        case 0x2051dcu: goto label_2051dc;
        case 0x2051e0u: goto label_2051e0;
        case 0x2051e4u: goto label_2051e4;
        case 0x2051e8u: goto label_2051e8;
        case 0x2051ecu: goto label_2051ec;
        case 0x2051f0u: goto label_2051f0;
        case 0x2051f4u: goto label_2051f4;
        case 0x2051f8u: goto label_2051f8;
        case 0x2051fcu: goto label_2051fc;
        case 0x205200u: goto label_205200;
        case 0x205204u: goto label_205204;
        case 0x205208u: goto label_205208;
        case 0x20520cu: goto label_20520c;
        case 0x205210u: goto label_205210;
        case 0x205214u: goto label_205214;
        case 0x205218u: goto label_205218;
        case 0x20521cu: goto label_20521c;
        case 0x205220u: goto label_205220;
        case 0x205224u: goto label_205224;
        case 0x205228u: goto label_205228;
        case 0x20522cu: goto label_20522c;
        case 0x205230u: goto label_205230;
        case 0x205234u: goto label_205234;
        case 0x205238u: goto label_205238;
        case 0x20523cu: goto label_20523c;
        case 0x205240u: goto label_205240;
        case 0x205244u: goto label_205244;
        case 0x205248u: goto label_205248;
        case 0x20524cu: goto label_20524c;
        case 0x205250u: goto label_205250;
        case 0x205254u: goto label_205254;
        case 0x205258u: goto label_205258;
        case 0x20525cu: goto label_20525c;
        case 0x205260u: goto label_205260;
        case 0x205264u: goto label_205264;
        case 0x205268u: goto label_205268;
        case 0x20526cu: goto label_20526c;
        case 0x205270u: goto label_205270;
        case 0x205274u: goto label_205274;
        case 0x205278u: goto label_205278;
        case 0x20527cu: goto label_20527c;
        case 0x205280u: goto label_205280;
        case 0x205284u: goto label_205284;
        case 0x205288u: goto label_205288;
        case 0x20528cu: goto label_20528c;
        case 0x205290u: goto label_205290;
        case 0x205294u: goto label_205294;
        case 0x205298u: goto label_205298;
        case 0x20529cu: goto label_20529c;
        case 0x2052a0u: goto label_2052a0;
        case 0x2052a4u: goto label_2052a4;
        case 0x2052a8u: goto label_2052a8;
        case 0x2052acu: goto label_2052ac;
        case 0x2052b0u: goto label_2052b0;
        case 0x2052b4u: goto label_2052b4;
        case 0x2052b8u: goto label_2052b8;
        case 0x2052bcu: goto label_2052bc;
        case 0x2052c0u: goto label_2052c0;
        case 0x2052c4u: goto label_2052c4;
        case 0x2052c8u: goto label_2052c8;
        case 0x2052ccu: goto label_2052cc;
        case 0x2052d0u: goto label_2052d0;
        case 0x2052d4u: goto label_2052d4;
        case 0x2052d8u: goto label_2052d8;
        case 0x2052dcu: goto label_2052dc;
        case 0x2052e0u: goto label_2052e0;
        case 0x2052e4u: goto label_2052e4;
        case 0x2052e8u: goto label_2052e8;
        case 0x2052ecu: goto label_2052ec;
        case 0x2052f0u: goto label_2052f0;
        case 0x2052f4u: goto label_2052f4;
        case 0x2052f8u: goto label_2052f8;
        case 0x2052fcu: goto label_2052fc;
        case 0x205300u: goto label_205300;
        case 0x205304u: goto label_205304;
        case 0x205308u: goto label_205308;
        case 0x20530cu: goto label_20530c;
        case 0x205310u: goto label_205310;
        case 0x205314u: goto label_205314;
        case 0x205318u: goto label_205318;
        case 0x20531cu: goto label_20531c;
        case 0x205320u: goto label_205320;
        case 0x205324u: goto label_205324;
        case 0x205328u: goto label_205328;
        case 0x20532cu: goto label_20532c;
        case 0x205330u: goto label_205330;
        case 0x205334u: goto label_205334;
        case 0x205338u: goto label_205338;
        case 0x20533cu: goto label_20533c;
        case 0x205340u: goto label_205340;
        case 0x205344u: goto label_205344;
        case 0x205348u: goto label_205348;
        case 0x20534cu: goto label_20534c;
        case 0x205350u: goto label_205350;
        case 0x205354u: goto label_205354;
        case 0x205358u: goto label_205358;
        case 0x20535cu: goto label_20535c;
        case 0x205360u: goto label_205360;
        case 0x205364u: goto label_205364;
        case 0x205368u: goto label_205368;
        case 0x20536cu: goto label_20536c;
        case 0x205370u: goto label_205370;
        case 0x205374u: goto label_205374;
        case 0x205378u: goto label_205378;
        case 0x20537cu: goto label_20537c;
        case 0x205380u: goto label_205380;
        case 0x205384u: goto label_205384;
        case 0x205388u: goto label_205388;
        case 0x20538cu: goto label_20538c;
        case 0x205390u: goto label_205390;
        case 0x205394u: goto label_205394;
        case 0x205398u: goto label_205398;
        case 0x20539cu: goto label_20539c;
        case 0x2053a0u: goto label_2053a0;
        case 0x2053a4u: goto label_2053a4;
        case 0x2053a8u: goto label_2053a8;
        case 0x2053acu: goto label_2053ac;
        case 0x2053b0u: goto label_2053b0;
        case 0x2053b4u: goto label_2053b4;
        case 0x2053b8u: goto label_2053b8;
        case 0x2053bcu: goto label_2053bc;
        case 0x2053c0u: goto label_2053c0;
        case 0x2053c4u: goto label_2053c4;
        case 0x2053c8u: goto label_2053c8;
        case 0x2053ccu: goto label_2053cc;
        case 0x2053d0u: goto label_2053d0;
        case 0x2053d4u: goto label_2053d4;
        case 0x2053d8u: goto label_2053d8;
        case 0x2053dcu: goto label_2053dc;
        case 0x2053e0u: goto label_2053e0;
        case 0x2053e4u: goto label_2053e4;
        case 0x2053e8u: goto label_2053e8;
        case 0x2053ecu: goto label_2053ec;
        case 0x2053f0u: goto label_2053f0;
        case 0x2053f4u: goto label_2053f4;
        case 0x2053f8u: goto label_2053f8;
        case 0x2053fcu: goto label_2053fc;
        case 0x205400u: goto label_205400;
        case 0x205404u: goto label_205404;
        case 0x205408u: goto label_205408;
        case 0x20540cu: goto label_20540c;
        case 0x205410u: goto label_205410;
        case 0x205414u: goto label_205414;
        case 0x205418u: goto label_205418;
        case 0x20541cu: goto label_20541c;
        case 0x205420u: goto label_205420;
        case 0x205424u: goto label_205424;
        case 0x205428u: goto label_205428;
        case 0x20542cu: goto label_20542c;
        case 0x205430u: goto label_205430;
        case 0x205434u: goto label_205434;
        case 0x205438u: goto label_205438;
        case 0x20543cu: goto label_20543c;
        case 0x205440u: goto label_205440;
        case 0x205444u: goto label_205444;
        case 0x205448u: goto label_205448;
        case 0x20544cu: goto label_20544c;
        case 0x205450u: goto label_205450;
        case 0x205454u: goto label_205454;
        case 0x205458u: goto label_205458;
        case 0x20545cu: goto label_20545c;
        case 0x205460u: goto label_205460;
        case 0x205464u: goto label_205464;
        case 0x205468u: goto label_205468;
        case 0x20546cu: goto label_20546c;
        case 0x205470u: goto label_205470;
        case 0x205474u: goto label_205474;
        case 0x205478u: goto label_205478;
        case 0x20547cu: goto label_20547c;
        case 0x205480u: goto label_205480;
        case 0x205484u: goto label_205484;
        case 0x205488u: goto label_205488;
        case 0x20548cu: goto label_20548c;
        case 0x205490u: goto label_205490;
        case 0x205494u: goto label_205494;
        case 0x205498u: goto label_205498;
        case 0x20549cu: goto label_20549c;
        default: break;
    }

    ctx->pc = 0x2050f0u;

label_2050f0:
    // 0x2050f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2050f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2050f4:
    // 0x2050f4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2050f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2050f8:
    // 0x2050f8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2050f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2050fc:
    // 0x2050fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2050fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_205100:
    // 0x205100: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x205100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_205104:
    // 0x205104: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x205104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_205108:
    // 0x205108: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x205108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_20510c:
    // 0x20510c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x20510cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_205110:
    // 0x205110: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x205110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_205114:
    // 0x205114: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x205114u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_205118:
    // 0x205118: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x205118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_20511c:
    // 0x20511c: 0x144000d6  bnez        $v0, . + 4 + (0xD6 << 2)
label_205120:
    if (ctx->pc == 0x205120u) {
        ctx->pc = 0x205120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20511Cu;
        // 0x205120: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205124u;
        goto label_205124;
    }
    ctx->pc = 0x20511Cu;
    {
        const bool branch_taken_0x20511c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20511Cu;
        // 0x205120: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20511c) {
            ctx->pc = 0x205478u;
            goto label_205478;
        }
    }
    ctx->pc = 0x205124u;
label_205124:
    // 0x205124: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x205124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_205128:
    // 0x205128: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x205128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_20512c:
    // 0x20512c: 0x8c44cdb4  lw          $a0, -0x324C($v0)
    ctx->pc = 0x20512cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_205130:
    // 0x205130: 0xac72f5f4  sw          $s2, -0xA0C($v1)
    ctx->pc = 0x205130u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294964724), GPR_U32(ctx, 18));
label_205134:
    // 0x205134: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x205134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_205138:
    // 0x205138: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x205138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_20513c:
    // 0x20513c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_205140:
    if (ctx->pc == 0x205140u) {
        ctx->pc = 0x205140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20513Cu;
        // 0x205140: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x205144u;
        goto label_205144;
    }
    ctx->pc = 0x20513Cu;
    {
        const bool branch_taken_0x20513c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20513Cu;
        // 0x205140: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20513c) {
            ctx->pc = 0x20519Cu;
            goto label_20519c;
        }
    }
    ctx->pc = 0x205144u;
label_205144:
    // 0x205144: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_205148:
    if (ctx->pc == 0x205148u) {
        ctx->pc = 0x205148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205144u;
        // 0x205148: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20514Cu;
        goto label_20514c;
    }
    ctx->pc = 0x205144u;
    {
        const bool branch_taken_0x205144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205144u;
        // 0x205148: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205144) {
            ctx->pc = 0x20516Cu;
            goto label_20516c;
        }
    }
    ctx->pc = 0x20514Cu;
label_20514c:
    // 0x20514c: 0x3c013eed  lui         $at, 0x3EED
    ctx->pc = 0x20514cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16109 << 16));
label_205150:
    // 0x205150: 0x34210e56  ori         $at, $at, 0xE56
    ctx->pc = 0x205150u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3670);
label_205154:
    // 0x205154: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x205154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205158:
    // 0x205158: 0x3c013ed7  lui         $at, 0x3ED7
    ctx->pc = 0x205158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16087 << 16));
label_20515c:
    // 0x20515c: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x20515cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
label_205160:
    // 0x205160: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x205160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205164:
    // 0x205164: 0x10000008  b           . + 4 + (0x8 << 2)
label_205168:
    if (ctx->pc == 0x205168u) {
        ctx->pc = 0x205168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205164u;
        // 0x205168: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20516Cu;
        goto label_20516c;
    }
    ctx->pc = 0x205164u;
    {
        const bool branch_taken_0x205164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205164u;
        // 0x205168: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205164) {
            ctx->pc = 0x205188u;
            goto label_205188;
        }
    }
    ctx->pc = 0x20516Cu;
label_20516c:
    // 0x20516c: 0x3c013ef8  lui         $at, 0x3EF8
    ctx->pc = 0x20516cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16120 << 16));
label_205170:
    // 0x205170: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x205170u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_205174:
    // 0x205174: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x205174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205178:
    // 0x205178: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x205178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
label_20517c:
    // 0x20517c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x20517cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_205180:
    // 0x205180: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x205180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205184:
    // 0x205184: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x205184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_205188:
    // 0x205188: 0xe440f5f8  swc1        $f0, -0xA08($v0)
    ctx->pc = 0x205188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964728), bits); }
label_20518c:
    // 0x20518c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20518cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205190:
    // 0x205190: 0xe461f5fc  swc1        $f1, -0xA04($v1)
    ctx->pc = 0x205190u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294964732), bits); }
label_205194:
    // 0x205194: 0x10000017  b           . + 4 + (0x17 << 2)
label_205198:
    if (ctx->pc == 0x205198u) {
        ctx->pc = 0x205198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205194u;
        // 0x205198: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20519Cu;
        goto label_20519c;
    }
    ctx->pc = 0x205194u;
    {
        const bool branch_taken_0x205194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205194u;
        // 0x205198: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205194) {
            ctx->pc = 0x2051F4u;
            goto label_2051f4;
        }
    }
    ctx->pc = 0x20519Cu;
label_20519c:
    // 0x20519c: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x20519cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
label_2051a0:
    // 0x2051a0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2051a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2051a4:
    // 0x2051a4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_2051a8:
    if (ctx->pc == 0x2051A8u) {
        ctx->pc = 0x2051A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2051A4u;
        // 0x2051a8: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2051ACu;
        goto label_2051ac;
    }
    ctx->pc = 0x2051A4u;
    {
        const bool branch_taken_0x2051a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2051A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2051A4u;
        // 0x2051a8: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2051a4) {
            ctx->pc = 0x2051F4u;
            goto label_2051f4;
        }
    }
    ctx->pc = 0x2051ACu;
label_2051ac:
    // 0x2051ac: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x2051acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_2051b0:
    // 0x2051b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2051b4:
    if (ctx->pc == 0x2051B4u) {
        ctx->pc = 0x2051B8u;
        goto label_2051b8;
    }
    ctx->pc = 0x2051B0u;
    {
        const bool branch_taken_0x2051b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2051b0) {
            ctx->pc = 0x2051D8u;
            goto label_2051d8;
        }
    }
    ctx->pc = 0x2051B8u;
label_2051b8:
    // 0x2051b8: 0x3c013ee1  lui         $at, 0x3EE1
    ctx->pc = 0x2051b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16097 << 16));
label_2051bc:
    // 0x2051bc: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x2051bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_2051c0:
    // 0x2051c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2051c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2051c4:
    // 0x2051c4: 0x3c013ec2  lui         $at, 0x3EC2
    ctx->pc = 0x2051c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16066 << 16));
label_2051c8:
    // 0x2051c8: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x2051c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_2051cc:
    // 0x2051cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2051ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2051d0:
    // 0x2051d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2051d4:
    if (ctx->pc == 0x2051D4u) {
        ctx->pc = 0x2051D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2051D0u;
        // 0x2051d4: 0xe600f5f8  swc1        $f0, -0xA08($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294964728), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2051D8u;
        goto label_2051d8;
    }
    ctx->pc = 0x2051D0u;
    {
        const bool branch_taken_0x2051d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2051D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2051D0u;
        // 0x2051d4: 0xe600f5f8  swc1        $f0, -0xA08($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294964728), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2051d0) {
            ctx->pc = 0x2051F0u;
            goto label_2051f0;
        }
    }
    ctx->pc = 0x2051D8u;
label_2051d8:
    // 0x2051d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2051d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2051dc:
    // 0x2051dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2051dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2051e0:
    // 0x2051e0: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x2051e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
label_2051e4:
    // 0x2051e4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2051e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_2051e8:
    // 0x2051e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2051e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2051ec:
    // 0x2051ec: 0xe600f5f8  swc1        $f0, -0xA08($s0)
    ctx->pc = 0x2051ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294964728), bits); }
label_2051f0:
    // 0x2051f0: 0xe6a1f5fc  swc1        $f1, -0xA04($s5)
    ctx->pc = 0x2051f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4294964732), bits); }
label_2051f4:
    // 0x2051f4: 0xc080ebe  jal         func_203AF8
label_2051f8:
    if (ctx->pc == 0x2051F8u) {
        ctx->pc = 0x2051F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2051F4u;
        // 0x2051f8: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2051FCu;
        goto label_2051fc;
    }
    ctx->pc = 0x2051F4u;
    SET_GPR_U32(ctx, 31, 0x2051FCu);
    ctx->pc = 0x2051F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2051F4u;
    // 0x2051f8: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x2051F4u, 0x2051FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2051FCu;
label_2051fc:
    // 0x2051fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2051fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_205200:
    // 0x205200: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x205200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_205204:
    // 0x205204: 0xc601f5f8  lwc1        $f1, -0xA08($s0)
    ctx->pc = 0x205204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294964728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205208:
    // 0x205208: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x205208u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_20520c:
    // 0x20520c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x20520cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_205210:
    // 0x205210: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x205210u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_205214:
    // 0x205214: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x205214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_205218:
    // 0x205218: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x205218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_20521c:
    // 0x20521c: 0x24538740  addiu       $s3, $v0, -0x78C0
    ctx->pc = 0x20521cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936384));
label_205220:
    // 0x205220: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x205220u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_205224:
    // 0x205224: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x205224u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_205228:
    // 0x205228: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x205228u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_20522c:
    // 0x20522c: 0x24a58730  addiu       $a1, $a1, -0x78D0
    ctx->pc = 0x20522cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936368));
label_205230:
    // 0x205230: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x205230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_205234:
    // 0x205234: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x205234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_205238:
    // 0x205238: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x205238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_20523c:
    // 0x20523c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x20523cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_205240:
    // 0x205240: 0x2409005f  addiu       $t1, $zero, 0x5F
    ctx->pc = 0x205240u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_205244:
    // 0x205244: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x205244u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205248:
    // 0x205248: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x205248u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_20524c:
    // 0x20524c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20524cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205250:
    // 0x205250: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x205250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_205254:
    // 0x205254: 0x40f809  jalr        $v0
label_205258:
    if (ctx->pc == 0x205258u) {
        ctx->pc = 0x205258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205254u;
        // 0x205258: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20525Cu;
        goto label_20525c;
    }
    ctx->pc = 0x205254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20525Cu);
        ctx->pc = 0x205258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205254u;
        // 0x205258: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205254u, 0x20525Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20525Cu;
label_20525c:
    // 0x20525c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_205260:
    if (ctx->pc == 0x205260u) {
        ctx->pc = 0x205260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20525Cu;
        // 0x205260: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205264u;
        goto label_205264;
    }
    ctx->pc = 0x20525Cu;
    {
        const bool branch_taken_0x20525c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20525Cu;
        // 0x205260: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20525c) {
            ctx->pc = 0x205270u;
            goto label_205270;
        }
    }
    ctx->pc = 0x205264u;
label_205264:
    // 0x205264: 0xc0733e2  jal         func_1CCF88
label_205268:
    if (ctx->pc == 0x205268u) {
        ctx->pc = 0x205268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205264u;
        // 0x205268: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20526Cu;
        goto label_20526c;
    }
    ctx->pc = 0x205264u;
    SET_GPR_U32(ctx, 31, 0x20526Cu);
    ctx->pc = 0x205268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205264u;
    // 0x205268: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x205264u, 0x20526Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20526Cu;
label_20526c:
    // 0x20526c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x20526cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_205270:
    // 0x205270: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x205270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
label_205274:
    // 0x205274: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x205274u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_205278:
    // 0x205278: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x205278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20527c:
    // 0x20527c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20527cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205280:
    // 0x205280: 0xc05e602  jal         func_179808
label_205284:
    if (ctx->pc == 0x205284u) {
        ctx->pc = 0x205284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205280u;
        // 0x205284: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205288u;
        goto label_205288;
    }
    ctx->pc = 0x205280u;
    SET_GPR_U32(ctx, 31, 0x205288u);
    ctx->pc = 0x205284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205280u;
    // 0x205284: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x205280u, 0x205288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205288u;
label_205288:
    // 0x205288: 0x8e45008c  lw          $a1, 0x8C($s2)
    ctx->pc = 0x205288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_20528c:
    // 0x20528c: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x20528cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_205290:
    // 0x205290: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x205290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205294:
    // 0x205294: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x205294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_205298:
    // 0x205298: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x205298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20529c:
    // 0x20529c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x20529cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2052a0:
    // 0x2052a0: 0x8c50d328  lw          $s0, -0x2CD8($v0)
    ctx->pc = 0x2052a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955816)));
label_2052a4:
    // 0x2052a4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2052a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2052a8:
    // 0x2052a8: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x2052a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_2052ac:
    // 0x2052ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2052acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2052b0:
    // 0x2052b0: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x2052b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_2052b4:
    // 0x2052b4: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x2052b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2052b8:
    // 0x2052b8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2052b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2052bc:
    // 0x2052bc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2052bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2052c0:
    // 0x2052c0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x2052c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_2052c4:
    // 0x2052c4: 0x40f809  jalr        $v0
label_2052c8:
    if (ctx->pc == 0x2052C8u) {
        ctx->pc = 0x2052C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052C4u;
        // 0x2052c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2052CCu;
        goto label_2052cc;
    }
    ctx->pc = 0x2052C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2052CCu);
        ctx->pc = 0x2052C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052C4u;
        // 0x2052c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2052C4u, 0x2052CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2052CCu;
label_2052cc:
    // 0x2052cc: 0xc067b9c  jal         func_19EE70
label_2052d0:
    if (ctx->pc == 0x2052D0u) {
        ctx->pc = 0x2052D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052CCu;
        // 0x2052d0: 0x24040089  addiu       $a0, $zero, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2052D4u;
        goto label_2052d4;
    }
    ctx->pc = 0x2052CCu;
    SET_GPR_U32(ctx, 31, 0x2052D4u);
    ctx->pc = 0x2052D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2052CCu;
    // 0x2052d0: 0x24040089  addiu       $a0, $zero, 0x89 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x2052CCu, 0x2052D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2052D4u;
label_2052d4:
    // 0x2052d4: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x2052d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_2052d8:
    // 0x2052d8: 0xc073478  jal         func_1CD1E0
label_2052dc:
    if (ctx->pc == 0x2052DCu) {
        ctx->pc = 0x2052DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052D8u;
        // 0x2052dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2052E0u;
        goto label_2052e0;
    }
    ctx->pc = 0x2052D8u;
    SET_GPR_U32(ctx, 31, 0x2052E0u);
    ctx->pc = 0x2052DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2052D8u;
    // 0x2052dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x2052D8u, 0x2052E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2052E0u;
label_2052e0:
    // 0x2052e0: 0xc080ebe  jal         func_203AF8
label_2052e4:
    if (ctx->pc == 0x2052E4u) {
        ctx->pc = 0x2052E8u;
        goto label_2052e8;
    }
    ctx->pc = 0x2052E0u;
    SET_GPR_U32(ctx, 31, 0x2052E8u);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x2052E0u, 0x2052E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2052E8u;
label_2052e8:
    // 0x2052e8: 0xc6a1f5fc  lwc1        $f1, -0xA04($s5)
    ctx->pc = 0x2052e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294964732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2052ec:
    // 0x2052ec: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2052ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2052f0:
    // 0x2052f0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2052f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2052f4:
    // 0x2052f4: 0x24090065  addiu       $t1, $zero, 0x65
    ctx->pc = 0x2052f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_2052f8:
    // 0x2052f8: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x2052f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2052fc:
    // 0x2052fc: 0x24a58780  addiu       $a1, $a1, -0x7880
    ctx->pc = 0x2052fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936448));
label_205300:
    // 0x205300: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x205300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_205304:
    // 0x205304: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x205304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_205308:
    // 0x205308: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x205308u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_20530c:
    // 0x20530c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x20530cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_205310:
    // 0x205310: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x205310u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_205314:
    // 0x205314: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x205314u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_205318:
    // 0x205318: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x205318u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20531c:
    // 0x20531c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20531cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205320:
    // 0x205320: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x205320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_205324:
    // 0x205324: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x205324u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_205328:
    // 0x205328: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x205328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_20532c:
    // 0x20532c: 0x40f809  jalr        $v0
label_205330:
    if (ctx->pc == 0x205330u) {
        ctx->pc = 0x205330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20532Cu;
        // 0x205330: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205334u;
        goto label_205334;
    }
    ctx->pc = 0x20532Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x205334u);
        ctx->pc = 0x205330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20532Cu;
        // 0x205330: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20532Cu, 0x205334u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205334u;
label_205334:
    // 0x205334: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x205334u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205338:
    // 0x205338: 0x51200005  beql        $t1, $zero, . + 4 + (0x5 << 2)
label_20533c:
    if (ctx->pc == 0x20533Cu) {
        ctx->pc = 0x20533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205338u;
        // 0x20533c: 0xae490094  sw          $t1, 0x94($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205340u;
        goto label_205340;
    }
    ctx->pc = 0x205338u;
    {
        const bool branch_taken_0x205338 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x205338) {
            ctx->pc = 0x20533Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205338u;
            // 0x20533c: 0xae490094  sw          $t1, 0x94($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205350u;
            goto label_205350;
        }
    }
    ctx->pc = 0x205340u;
label_205340:
    // 0x205340: 0xc0705aa  jal         func_1C16A8
label_205344:
    if (ctx->pc == 0x205344u) {
        ctx->pc = 0x205344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205340u;
        // 0x205344: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205348u;
        goto label_205348;
    }
    ctx->pc = 0x205340u;
    SET_GPR_U32(ctx, 31, 0x205348u);
    ctx->pc = 0x205344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205340u;
    // 0x205344: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C16A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C16A8u, 0x205340u, 0x205348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205348u;
label_205348:
    // 0x205348: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x205348u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20534c:
    // 0x20534c: 0xae490094  sw          $t1, 0x94($s2)
    ctx->pc = 0x20534cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 9));
label_205350:
    // 0x205350: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x205350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205354:
    // 0x205354: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x205354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_205358:
    // 0x205358: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x205358u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_20535c:
    // 0x20535c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20535cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_205360:
    // 0x205360: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x205360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_205364:
    // 0x205364: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x205364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_205368:
    // 0x205368: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x205368u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20536c:
    // 0x20536c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20536cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_205370:
    // 0x205370: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x205370u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_205374:
    // 0x205374: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x205374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_205378:
    // 0x205378: 0x40f809  jalr        $v0
label_20537c:
    if (ctx->pc == 0x20537Cu) {
        ctx->pc = 0x20537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205378u;
        // 0x20537c: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205380u;
        goto label_205380;
    }
    ctx->pc = 0x205378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x205380u);
        ctx->pc = 0x20537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205378u;
        // 0x20537c: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205378u, 0x205380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205380u;
label_205380:
    // 0x205380: 0x8e460094  lw          $a2, 0x94($s2)
    ctx->pc = 0x205380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_205384:
    // 0x205384: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x205384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205388:
    // 0x205388: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x205388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_20538c:
    // 0x20538c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x20538cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_205390:
    // 0x205390: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x205390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_205394:
    // 0x205394: 0x60f809  jalr        $v1
label_205398:
    if (ctx->pc == 0x205398u) {
        ctx->pc = 0x205398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205394u;
        // 0x205398: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20539Cu;
        goto label_20539c;
    }
    ctx->pc = 0x205394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20539Cu);
        ctx->pc = 0x205398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205394u;
        // 0x205398: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205394u, 0x20539Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20539Cu;
label_20539c:
    // 0x20539c: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x20539cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_2053a0:
    // 0x2053a0: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2053a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2053a4:
    // 0x2053a4: 0x24a58798  addiu       $a1, $a1, -0x7868
    ctx->pc = 0x2053a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936472));
label_2053a8:
    // 0x2053a8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2053a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2053ac:
    // 0x2053ac: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x2053acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_2053b0:
    // 0x2053b0: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x2053b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_2053b4:
    // 0x2053b4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2053b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2053b8:
    // 0x2053b8: 0x2409006a  addiu       $t1, $zero, 0x6A
    ctx->pc = 0x2053b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_2053bc:
    // 0x2053bc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2053bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2053c0:
    // 0x2053c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2053c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2053c4:
    // 0x2053c4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2053c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2053c8:
    // 0x2053c8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2053c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2053cc:
    // 0x2053cc: 0x40f809  jalr        $v0
label_2053d0:
    if (ctx->pc == 0x2053D0u) {
        ctx->pc = 0x2053D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053CCu;
        // 0x2053d0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2053D4u;
        goto label_2053d4;
    }
    ctx->pc = 0x2053CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2053D4u);
        ctx->pc = 0x2053D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053CCu;
        // 0x2053d0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2053CCu, 0x2053D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2053D4u;
label_2053d4:
    // 0x2053d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2053d8:
    if (ctx->pc == 0x2053D8u) {
        ctx->pc = 0x2053D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053D4u;
        // 0x2053d8: 0x3c080020  lui         $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2053DCu;
        goto label_2053dc;
    }
    ctx->pc = 0x2053D4u;
    {
        const bool branch_taken_0x2053d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2053D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053D4u;
        // 0x2053d8: 0x3c080020  lui         $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2053d4) {
            ctx->pc = 0x2053E8u;
            goto label_2053e8;
        }
    }
    ctx->pc = 0x2053DCu;
label_2053dc:
    // 0x2053dc: 0xc073068  jal         func_1CC1A0
label_2053e0:
    if (ctx->pc == 0x2053E0u) {
        ctx->pc = 0x2053E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053DCu;
        // 0x2053e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2053E4u;
        goto label_2053e4;
    }
    ctx->pc = 0x2053DCu;
    SET_GPR_U32(ctx, 31, 0x2053E4u);
    ctx->pc = 0x2053E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2053DCu;
    // 0x2053e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC1A0u, 0x2053DCu, 0x2053E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2053E4u;
label_2053e4:
    // 0x2053e4: 0x3c080020  lui         $t0, 0x20
    ctx->pc = 0x2053e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
label_2053e8:
    // 0x2053e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2053e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2053ec:
    // 0x2053ec: 0x250854a0  addiu       $t0, $t0, 0x54A0
    ctx->pc = 0x2053ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 21664));
label_2053f0:
    // 0x2053f0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2053f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2053f4:
    // 0x2053f4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2053f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2053f8:
    // 0x2053f8: 0x26490050  addiu       $t1, $s2, 0x50
    ctx->pc = 0x2053f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_2053fc:
    // 0x2053fc: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2053fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205400:
    // 0x205400: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205404:
    // 0x205404: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x205404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_205408:
    // 0x205408: 0xc0730bc  jal         func_1CC2F0
label_20540c:
    if (ctx->pc == 0x20540Cu) {
        ctx->pc = 0x20540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205408u;
        // 0x20540c: 0xae420090  sw          $v0, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205410u;
        goto label_205410;
    }
    ctx->pc = 0x205408u;
    SET_GPR_U32(ctx, 31, 0x205410u);
    ctx->pc = 0x20540Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205408u;
    // 0x20540c: 0xae420090  sw          $v0, 0x90($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2F0u, 0x205408u, 0x205410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205410u;
label_205410:
    // 0x205410: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x205410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_205414:
    // 0x205414: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x205414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_205418:
    // 0x205418: 0xc081032  jal         func_2040C8
label_20541c:
    if (ctx->pc == 0x20541Cu) {
        ctx->pc = 0x20541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205418u;
        // 0x20541c: 0xa062007c  sb          $v0, 0x7C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 124), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205420u;
        goto label_205420;
    }
    ctx->pc = 0x205418u;
    SET_GPR_U32(ctx, 31, 0x205420u);
    ctx->pc = 0x20541Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205418u;
    // 0x20541c: 0xa062007c  sb          $v0, 0x7C($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 124), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2040C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2040C8u, 0x205418u, 0x205420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205420u;
label_205420:
    // 0x205420: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x205420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_205424:
    // 0x205424: 0xc073266  jal         func_1CC998
label_205428:
    if (ctx->pc == 0x205428u) {
        ctx->pc = 0x205428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205424u;
        // 0x205428: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20542Cu;
        goto label_20542c;
    }
    ctx->pc = 0x205424u;
    SET_GPR_U32(ctx, 31, 0x20542Cu);
    ctx->pc = 0x205428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205424u;
    // 0x205428: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC998u, 0x205424u, 0x20542Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20542Cu;
label_20542c:
    // 0x20542c: 0x8e450090  lw          $a1, 0x90($s2)
    ctx->pc = 0x20542cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_205430:
    // 0x205430: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x205430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_205434:
    // 0x205434: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x205434u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_205438:
    // 0x205438: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x205438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_20543c:
    // 0x20543c: 0x60f809  jalr        $v1
label_205440:
    if (ctx->pc == 0x205440u) {
        ctx->pc = 0x205440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20543Cu;
        // 0x205440: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205444u;
        goto label_205444;
    }
    ctx->pc = 0x20543Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x205444u);
        ctx->pc = 0x205440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20543Cu;
        // 0x205440: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20543Cu, 0x205444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205444u;
label_205444:
    // 0x205444: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x205444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_205448:
    // 0x205448: 0x8c455024  lw          $a1, 0x5024($v0)
    ctx->pc = 0x205448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_20544c:
    // 0x20544c: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x20544cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_205450:
    // 0x205450: 0x846400a0  lh          $a0, 0xA0($v1)
    ctx->pc = 0x205450u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_205454:
    // 0x205454: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x205454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_205458:
    // 0x205458: 0x40f809  jalr        $v0
label_20545c:
    if (ctx->pc == 0x20545Cu) {
        ctx->pc = 0x20545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205458u;
        // 0x20545c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205460u;
        goto label_205460;
    }
    ctx->pc = 0x205458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x205460u);
        ctx->pc = 0x20545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205458u;
        // 0x20545c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205458u, 0x205460u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205460u;
label_205460:
    // 0x205460: 0xc08101e  jal         func_204078
label_205464:
    if (ctx->pc == 0x205464u) {
        ctx->pc = 0x205464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205460u;
        // 0x205464: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205468u;
        goto label_205468;
    }
    ctx->pc = 0x205460u;
    SET_GPR_U32(ctx, 31, 0x205468u);
    ctx->pc = 0x205464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205460u;
    // 0x205464: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204078u, 0x205460u, 0x205468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205468u;
label_205468:
    // 0x205468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20546c:
    // 0x20546c: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x20546cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_205470:
    // 0x205470: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x205470u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_205474:
    // 0x205474: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x205474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_205478:
    // 0x205478: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x205478u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20547c:
    // 0x20547c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x20547cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_205480:
    // 0x205480: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x205480u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_205484:
    // 0x205484: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x205484u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_205488:
    // 0x205488: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x205488u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20548c:
    // 0x20548c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20548cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_205490:
    // 0x205490: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x205490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_205494:
    // 0x205494: 0x3e00008  jr          $ra
label_205498:
    if (ctx->pc == 0x205498u) {
        ctx->pc = 0x205498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205494u;
        // 0x205498: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20549Cu;
        goto label_20549c;
    }
    ctx->pc = 0x205494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205494u;
        // 0x205498: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20549Cu;
label_20549c:
    // 0x20549c: 0x0  nop
    ctx->pc = 0x20549cu;
    // NOP
    ctx->pc = 0x2054a0u;
}
