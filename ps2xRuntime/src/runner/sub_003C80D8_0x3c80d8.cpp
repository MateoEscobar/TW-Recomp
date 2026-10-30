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

// Function: sub_003C80D8
// Address: 0x3c80d8 - 0x3c84f0
void sub_003C80D8_0x3c80d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C80D8_0x3c80d8");
#endif

    switch (ctx->pc) {
        case 0x3c80d8u: goto label_3c80d8;
        case 0x3c80dcu: goto label_3c80dc;
        case 0x3c80e0u: goto label_3c80e0;
        case 0x3c80e4u: goto label_3c80e4;
        case 0x3c80e8u: goto label_3c80e8;
        case 0x3c80ecu: goto label_3c80ec;
        case 0x3c80f0u: goto label_3c80f0;
        case 0x3c80f4u: goto label_3c80f4;
        case 0x3c80f8u: goto label_3c80f8;
        case 0x3c80fcu: goto label_3c80fc;
        case 0x3c8100u: goto label_3c8100;
        case 0x3c8104u: goto label_3c8104;
        case 0x3c8108u: goto label_3c8108;
        case 0x3c810cu: goto label_3c810c;
        case 0x3c8110u: goto label_3c8110;
        case 0x3c8114u: goto label_3c8114;
        case 0x3c8118u: goto label_3c8118;
        case 0x3c811cu: goto label_3c811c;
        case 0x3c8120u: goto label_3c8120;
        case 0x3c8124u: goto label_3c8124;
        case 0x3c8128u: goto label_3c8128;
        case 0x3c812cu: goto label_3c812c;
        case 0x3c8130u: goto label_3c8130;
        case 0x3c8134u: goto label_3c8134;
        case 0x3c8138u: goto label_3c8138;
        case 0x3c813cu: goto label_3c813c;
        case 0x3c8140u: goto label_3c8140;
        case 0x3c8144u: goto label_3c8144;
        case 0x3c8148u: goto label_3c8148;
        case 0x3c814cu: goto label_3c814c;
        case 0x3c8150u: goto label_3c8150;
        case 0x3c8154u: goto label_3c8154;
        case 0x3c8158u: goto label_3c8158;
        case 0x3c815cu: goto label_3c815c;
        case 0x3c8160u: goto label_3c8160;
        case 0x3c8164u: goto label_3c8164;
        case 0x3c8168u: goto label_3c8168;
        case 0x3c816cu: goto label_3c816c;
        case 0x3c8170u: goto label_3c8170;
        case 0x3c8174u: goto label_3c8174;
        case 0x3c8178u: goto label_3c8178;
        case 0x3c817cu: goto label_3c817c;
        case 0x3c8180u: goto label_3c8180;
        case 0x3c8184u: goto label_3c8184;
        case 0x3c8188u: goto label_3c8188;
        case 0x3c818cu: goto label_3c818c;
        case 0x3c8190u: goto label_3c8190;
        case 0x3c8194u: goto label_3c8194;
        case 0x3c8198u: goto label_3c8198;
        case 0x3c819cu: goto label_3c819c;
        case 0x3c81a0u: goto label_3c81a0;
        case 0x3c81a4u: goto label_3c81a4;
        case 0x3c81a8u: goto label_3c81a8;
        case 0x3c81acu: goto label_3c81ac;
        case 0x3c81b0u: goto label_3c81b0;
        case 0x3c81b4u: goto label_3c81b4;
        case 0x3c81b8u: goto label_3c81b8;
        case 0x3c81bcu: goto label_3c81bc;
        case 0x3c81c0u: goto label_3c81c0;
        case 0x3c81c4u: goto label_3c81c4;
        case 0x3c81c8u: goto label_3c81c8;
        case 0x3c81ccu: goto label_3c81cc;
        case 0x3c81d0u: goto label_3c81d0;
        case 0x3c81d4u: goto label_3c81d4;
        case 0x3c81d8u: goto label_3c81d8;
        case 0x3c81dcu: goto label_3c81dc;
        case 0x3c81e0u: goto label_3c81e0;
        case 0x3c81e4u: goto label_3c81e4;
        case 0x3c81e8u: goto label_3c81e8;
        case 0x3c81ecu: goto label_3c81ec;
        case 0x3c81f0u: goto label_3c81f0;
        case 0x3c81f4u: goto label_3c81f4;
        case 0x3c81f8u: goto label_3c81f8;
        case 0x3c81fcu: goto label_3c81fc;
        case 0x3c8200u: goto label_3c8200;
        case 0x3c8204u: goto label_3c8204;
        case 0x3c8208u: goto label_3c8208;
        case 0x3c820cu: goto label_3c820c;
        case 0x3c8210u: goto label_3c8210;
        case 0x3c8214u: goto label_3c8214;
        case 0x3c8218u: goto label_3c8218;
        case 0x3c821cu: goto label_3c821c;
        case 0x3c8220u: goto label_3c8220;
        case 0x3c8224u: goto label_3c8224;
        case 0x3c8228u: goto label_3c8228;
        case 0x3c822cu: goto label_3c822c;
        case 0x3c8230u: goto label_3c8230;
        case 0x3c8234u: goto label_3c8234;
        case 0x3c8238u: goto label_3c8238;
        case 0x3c823cu: goto label_3c823c;
        case 0x3c8240u: goto label_3c8240;
        case 0x3c8244u: goto label_3c8244;
        case 0x3c8248u: goto label_3c8248;
        case 0x3c824cu: goto label_3c824c;
        case 0x3c8250u: goto label_3c8250;
        case 0x3c8254u: goto label_3c8254;
        case 0x3c8258u: goto label_3c8258;
        case 0x3c825cu: goto label_3c825c;
        case 0x3c8260u: goto label_3c8260;
        case 0x3c8264u: goto label_3c8264;
        case 0x3c8268u: goto label_3c8268;
        case 0x3c826cu: goto label_3c826c;
        case 0x3c8270u: goto label_3c8270;
        case 0x3c8274u: goto label_3c8274;
        case 0x3c8278u: goto label_3c8278;
        case 0x3c827cu: goto label_3c827c;
        case 0x3c8280u: goto label_3c8280;
        case 0x3c8284u: goto label_3c8284;
        case 0x3c8288u: goto label_3c8288;
        case 0x3c828cu: goto label_3c828c;
        case 0x3c8290u: goto label_3c8290;
        case 0x3c8294u: goto label_3c8294;
        case 0x3c8298u: goto label_3c8298;
        case 0x3c829cu: goto label_3c829c;
        case 0x3c82a0u: goto label_3c82a0;
        case 0x3c82a4u: goto label_3c82a4;
        case 0x3c82a8u: goto label_3c82a8;
        case 0x3c82acu: goto label_3c82ac;
        case 0x3c82b0u: goto label_3c82b0;
        case 0x3c82b4u: goto label_3c82b4;
        case 0x3c82b8u: goto label_3c82b8;
        case 0x3c82bcu: goto label_3c82bc;
        case 0x3c82c0u: goto label_3c82c0;
        case 0x3c82c4u: goto label_3c82c4;
        case 0x3c82c8u: goto label_3c82c8;
        case 0x3c82ccu: goto label_3c82cc;
        case 0x3c82d0u: goto label_3c82d0;
        case 0x3c82d4u: goto label_3c82d4;
        case 0x3c82d8u: goto label_3c82d8;
        case 0x3c82dcu: goto label_3c82dc;
        case 0x3c82e0u: goto label_3c82e0;
        case 0x3c82e4u: goto label_3c82e4;
        case 0x3c82e8u: goto label_3c82e8;
        case 0x3c82ecu: goto label_3c82ec;
        case 0x3c82f0u: goto label_3c82f0;
        case 0x3c82f4u: goto label_3c82f4;
        case 0x3c82f8u: goto label_3c82f8;
        case 0x3c82fcu: goto label_3c82fc;
        case 0x3c8300u: goto label_3c8300;
        case 0x3c8304u: goto label_3c8304;
        case 0x3c8308u: goto label_3c8308;
        case 0x3c830cu: goto label_3c830c;
        case 0x3c8310u: goto label_3c8310;
        case 0x3c8314u: goto label_3c8314;
        case 0x3c8318u: goto label_3c8318;
        case 0x3c831cu: goto label_3c831c;
        case 0x3c8320u: goto label_3c8320;
        case 0x3c8324u: goto label_3c8324;
        case 0x3c8328u: goto label_3c8328;
        case 0x3c832cu: goto label_3c832c;
        case 0x3c8330u: goto label_3c8330;
        case 0x3c8334u: goto label_3c8334;
        case 0x3c8338u: goto label_3c8338;
        case 0x3c833cu: goto label_3c833c;
        case 0x3c8340u: goto label_3c8340;
        case 0x3c8344u: goto label_3c8344;
        case 0x3c8348u: goto label_3c8348;
        case 0x3c834cu: goto label_3c834c;
        case 0x3c8350u: goto label_3c8350;
        case 0x3c8354u: goto label_3c8354;
        case 0x3c8358u: goto label_3c8358;
        case 0x3c835cu: goto label_3c835c;
        case 0x3c8360u: goto label_3c8360;
        case 0x3c8364u: goto label_3c8364;
        case 0x3c8368u: goto label_3c8368;
        case 0x3c836cu: goto label_3c836c;
        case 0x3c8370u: goto label_3c8370;
        case 0x3c8374u: goto label_3c8374;
        case 0x3c8378u: goto label_3c8378;
        case 0x3c837cu: goto label_3c837c;
        case 0x3c8380u: goto label_3c8380;
        case 0x3c8384u: goto label_3c8384;
        case 0x3c8388u: goto label_3c8388;
        case 0x3c838cu: goto label_3c838c;
        case 0x3c8390u: goto label_3c8390;
        case 0x3c8394u: goto label_3c8394;
        case 0x3c8398u: goto label_3c8398;
        case 0x3c839cu: goto label_3c839c;
        case 0x3c83a0u: goto label_3c83a0;
        case 0x3c83a4u: goto label_3c83a4;
        case 0x3c83a8u: goto label_3c83a8;
        case 0x3c83acu: goto label_3c83ac;
        case 0x3c83b0u: goto label_3c83b0;
        case 0x3c83b4u: goto label_3c83b4;
        case 0x3c83b8u: goto label_3c83b8;
        case 0x3c83bcu: goto label_3c83bc;
        case 0x3c83c0u: goto label_3c83c0;
        case 0x3c83c4u: goto label_3c83c4;
        case 0x3c83c8u: goto label_3c83c8;
        case 0x3c83ccu: goto label_3c83cc;
        case 0x3c83d0u: goto label_3c83d0;
        case 0x3c83d4u: goto label_3c83d4;
        case 0x3c83d8u: goto label_3c83d8;
        case 0x3c83dcu: goto label_3c83dc;
        case 0x3c83e0u: goto label_3c83e0;
        case 0x3c83e4u: goto label_3c83e4;
        case 0x3c83e8u: goto label_3c83e8;
        case 0x3c83ecu: goto label_3c83ec;
        case 0x3c83f0u: goto label_3c83f0;
        case 0x3c83f4u: goto label_3c83f4;
        case 0x3c83f8u: goto label_3c83f8;
        case 0x3c83fcu: goto label_3c83fc;
        case 0x3c8400u: goto label_3c8400;
        case 0x3c8404u: goto label_3c8404;
        case 0x3c8408u: goto label_3c8408;
        case 0x3c840cu: goto label_3c840c;
        case 0x3c8410u: goto label_3c8410;
        case 0x3c8414u: goto label_3c8414;
        case 0x3c8418u: goto label_3c8418;
        case 0x3c841cu: goto label_3c841c;
        case 0x3c8420u: goto label_3c8420;
        case 0x3c8424u: goto label_3c8424;
        case 0x3c8428u: goto label_3c8428;
        case 0x3c842cu: goto label_3c842c;
        case 0x3c8430u: goto label_3c8430;
        case 0x3c8434u: goto label_3c8434;
        case 0x3c8438u: goto label_3c8438;
        case 0x3c843cu: goto label_3c843c;
        case 0x3c8440u: goto label_3c8440;
        case 0x3c8444u: goto label_3c8444;
        case 0x3c8448u: goto label_3c8448;
        case 0x3c844cu: goto label_3c844c;
        case 0x3c8450u: goto label_3c8450;
        case 0x3c8454u: goto label_3c8454;
        case 0x3c8458u: goto label_3c8458;
        case 0x3c845cu: goto label_3c845c;
        case 0x3c8460u: goto label_3c8460;
        case 0x3c8464u: goto label_3c8464;
        case 0x3c8468u: goto label_3c8468;
        case 0x3c846cu: goto label_3c846c;
        case 0x3c8470u: goto label_3c8470;
        case 0x3c8474u: goto label_3c8474;
        case 0x3c8478u: goto label_3c8478;
        case 0x3c847cu: goto label_3c847c;
        case 0x3c8480u: goto label_3c8480;
        case 0x3c8484u: goto label_3c8484;
        case 0x3c8488u: goto label_3c8488;
        case 0x3c848cu: goto label_3c848c;
        case 0x3c8490u: goto label_3c8490;
        case 0x3c8494u: goto label_3c8494;
        case 0x3c8498u: goto label_3c8498;
        case 0x3c849cu: goto label_3c849c;
        case 0x3c84a0u: goto label_3c84a0;
        case 0x3c84a4u: goto label_3c84a4;
        case 0x3c84a8u: goto label_3c84a8;
        case 0x3c84acu: goto label_3c84ac;
        case 0x3c84b0u: goto label_3c84b0;
        case 0x3c84b4u: goto label_3c84b4;
        case 0x3c84b8u: goto label_3c84b8;
        case 0x3c84bcu: goto label_3c84bc;
        case 0x3c84c0u: goto label_3c84c0;
        case 0x3c84c4u: goto label_3c84c4;
        case 0x3c84c8u: goto label_3c84c8;
        case 0x3c84ccu: goto label_3c84cc;
        case 0x3c84d0u: goto label_3c84d0;
        case 0x3c84d4u: goto label_3c84d4;
        case 0x3c84d8u: goto label_3c84d8;
        case 0x3c84dcu: goto label_3c84dc;
        case 0x3c84e0u: goto label_3c84e0;
        case 0x3c84e4u: goto label_3c84e4;
        case 0x3c84e8u: goto label_3c84e8;
        case 0x3c84ecu: goto label_3c84ec;
        default: break;
    }

    ctx->pc = 0x3c80d8u;

label_3c80d8:
    // 0x3c80d8: 0x27bdf700  addiu       $sp, $sp, -0x900
    ctx->pc = 0x3c80d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964992));
label_3c80dc:
    // 0x3c80dc: 0x7fb20890  sq          $s2, 0x890($sp)
    ctx->pc = 0x3c80dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 18));
label_3c80e0:
    // 0x3c80e0: 0x7fb30880  sq          $s3, 0x880($sp)
    ctx->pc = 0x3c80e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 19));
label_3c80e4:
    // 0x3c80e4: 0x7fb008b0  sq          $s0, 0x8B0($sp)
    ctx->pc = 0x3c80e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2224), GPR_VEC(ctx, 16));
label_3c80e8:
    // 0x3c80e8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3c80e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c80ec:
    // 0x3c80ec: 0x7fb108a0  sq          $s1, 0x8A0($sp)
    ctx->pc = 0x3c80ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2208), GPR_VEC(ctx, 17));
label_3c80f0:
    // 0x3c80f0: 0x7fb40870  sq          $s4, 0x870($sp)
    ctx->pc = 0x3c80f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 20));
label_3c80f4:
    // 0x3c80f4: 0xffbf0860  sd          $ra, 0x860($sp)
    ctx->pc = 0x3c80f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2144), GPR_U64(ctx, 31));
label_3c80f8:
    // 0x3c80f8: 0xe7ba08f0  swc1        $f26, 0x8F0($sp)
    ctx->pc = 0x3c80f8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2288), bits); }
label_3c80fc:
    // 0x3c80fc: 0xe7b908e8  swc1        $f25, 0x8E8($sp)
    ctx->pc = 0x3c80fcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2280), bits); }
label_3c8100:
    // 0x3c8100: 0xe7b808e0  swc1        $f24, 0x8E0($sp)
    ctx->pc = 0x3c8100u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2272), bits); }
label_3c8104:
    // 0x3c8104: 0xe7b708d8  swc1        $f23, 0x8D8($sp)
    ctx->pc = 0x3c8104u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2264), bits); }
label_3c8108:
    // 0x3c8108: 0xe7b608d0  swc1        $f22, 0x8D0($sp)
    ctx->pc = 0x3c8108u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2256), bits); }
label_3c810c:
    // 0x3c810c: 0xe7b508c8  swc1        $f21, 0x8C8($sp)
    ctx->pc = 0x3c810cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2248), bits); }
label_3c8110:
    // 0x3c8110: 0xe7b408c0  swc1        $f20, 0x8C0($sp)
    ctx->pc = 0x3c8110u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2240), bits); }
label_3c8114:
    // 0x3c8114: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3c8114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c8118:
    // 0x3c8118: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c8118u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c811c:
    // 0x3c811c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c811cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c8120:
    // 0x3c8120: 0x40f809  jalr        $v0
label_3c8124:
    if (ctx->pc == 0x3C8124u) {
        ctx->pc = 0x3C8124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8120u;
        // 0x3c8124: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8128u;
        goto label_3c8128;
    }
    ctx->pc = 0x3C8120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C8128u);
        ctx->pc = 0x3C8124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8120u;
        // 0x3c8124: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8120u, 0x3C8128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C8128u;
label_3c8128:
    // 0x3c8128: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c8128u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c812c:
    // 0x3c812c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c812cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c8130:
    // 0x3c8130: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c8130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c8134:
    // 0x3c8134: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3c8134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3c8138:
    // 0x3c8138: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3c8138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3c813c:
    // 0x3c813c: 0x0  nop
    ctx->pc = 0x3c813cu;
    // NOP
label_3c8140:
    // 0x3c8140: 0x0  nop
    ctx->pc = 0x3c8140u;
    // NOP
label_3c8144:
    // 0x3c8144: 0x0  nop
    ctx->pc = 0x3c8144u;
    // NOP
label_3c8148:
    // 0x3c8148: 0x0  nop
    ctx->pc = 0x3c8148u;
    // NOP
label_3c814c:
    // 0x3c814c: 0x0  nop
    ctx->pc = 0x3c814cu;
    // NOP
label_3c8150:
    // 0x3c8150: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3c8154:
    if (ctx->pc == 0x3C8154u) {
        ctx->pc = 0x3C8154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8150u;
        // 0x3c8154: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8158u;
        goto label_3c8158;
    }
    ctx->pc = 0x3C8150u;
    {
        const bool branch_taken_0x3c8150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3C8154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8150u;
        // 0x3c8154: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8150) {
            ctx->pc = 0x3C8140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c8140;
        }
    }
    ctx->pc = 0x3C8158u;
label_3c8158:
    // 0x3c8158: 0xc138ddc  jal         func_4E3770
label_3c815c:
    if (ctx->pc == 0x3C815Cu) {
        ctx->pc = 0x3C8160u;
        goto label_3c8160;
    }
    ctx->pc = 0x3C8158u;
    SET_GPR_U32(ctx, 31, 0x3C8160u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3C8158u, 0x3C8160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8160u;
label_3c8160:
    // 0x3c8160: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3c8160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3c8164:
    // 0x3c8164: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x3c8164u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c8168:
    // 0x3c8168: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x3c8168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3c816c:
    // 0x3c816c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_3c8170:
    if (ctx->pc == 0x3C8170u) {
        ctx->pc = 0x3C8170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C816Cu;
        // 0x3c8170: 0xc67800bc  lwc1        $f24, 0xBC($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8174u;
        goto label_3c8174;
    }
    ctx->pc = 0x3C816Cu;
    {
        const bool branch_taken_0x3c816c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C8170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C816Cu;
        // 0x3c8170: 0xc67800bc  lwc1        $f24, 0xBC($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c816c) {
            ctx->pc = 0x3C81B8u;
            goto label_3c81b8;
        }
    }
    ctx->pc = 0x3C8174u;
label_3c8174:
    // 0x3c8174: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x3c8174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3c8178:
    // 0x3c8178: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_3c817c:
    if (ctx->pc == 0x3C817Cu) {
        ctx->pc = 0x3C817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8178u;
        // 0x3c817c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8180u;
        goto label_3c8180;
    }
    ctx->pc = 0x3C8178u;
    {
        const bool branch_taken_0x3c8178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8178u;
        // 0x3c817c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8178) {
            ctx->pc = 0x3C81B8u;
            goto label_3c81b8;
        }
    }
    ctx->pc = 0x3C8180u;
label_3c8180:
    // 0x3c8180: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c8180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c8184:
    // 0x3c8184: 0xc1073cc  jal         func_41CF30
label_3c8188:
    if (ctx->pc == 0x3C8188u) {
        ctx->pc = 0x3C8188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8184u;
        // 0x3c8188: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C818Cu;
        goto label_3c818c;
    }
    ctx->pc = 0x3C8184u;
    SET_GPR_U32(ctx, 31, 0x3C818Cu);
    ctx->pc = 0x3C8188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8184u;
    // 0x3c8188: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3C8184u, 0x3C818Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C818Cu;
label_3c818c:
    // 0x3c818c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3c818cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_3c8190:
    // 0x3c8190: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3c8194:
    if (ctx->pc == 0x3C8194u) {
        ctx->pc = 0x3C8194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8190u;
        // 0x3c8194: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8198u;
        goto label_3c8198;
    }
    ctx->pc = 0x3C8190u;
    {
        const bool branch_taken_0x3c8190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8190u;
        // 0x3c8194: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8190) {
            ctx->pc = 0x3C81B8u;
            goto label_3c81b8;
        }
    }
    ctx->pc = 0x3C8198u;
label_3c8198:
    // 0x3c8198: 0x8e470020  lw          $a3, 0x20($s2)
    ctx->pc = 0x3c8198u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3c819c:
    // 0x3c819c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3c819cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c81a0:
    // 0x3c81a0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3c81a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3c81a4:
    // 0x3c81a4: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3c81a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3c81a8:
    // 0x3c81a8: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3c81a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3c81ac:
    // 0x3c81ac: 0x60f809  jalr        $v1
label_3c81b0:
    if (ctx->pc == 0x3C81B0u) {
        ctx->pc = 0x3C81B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C81ACu;
        // 0x3c81b0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C81B4u;
        goto label_3c81b4;
    }
    ctx->pc = 0x3C81ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C81B4u);
        ctx->pc = 0x3C81B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C81ACu;
        // 0x3c81b0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C81ACu, 0x3C81B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C81B4u;
label_3c81b4:
    // 0x3c81b4: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x3c81b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_3c81b8:
    // 0x3c81b8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3c81b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3c81bc:
    // 0x3c81bc: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x3c81bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_3c81c0:
    // 0x3c81c0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3c81c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3c81c4:
    // 0x3c81c4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3c81c8:
    if (ctx->pc == 0x3C81C8u) {
        ctx->pc = 0x3C81C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C81C4u;
        // 0x3c81c8: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C81CCu;
        goto label_3c81cc;
    }
    ctx->pc = 0x3C81C4u;
    {
        const bool branch_taken_0x3c81c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c81c4) {
            ctx->pc = 0x3C81C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C81C4u;
            // 0x3c81c8: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C81D8u;
            goto label_3c81d8;
        }
    }
    ctx->pc = 0x3C81CCu;
label_3c81cc:
    // 0x3c81cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c81ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c81d0:
    // 0x3c81d0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3c81d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3c81d4:
    // 0x3c81d4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3c81d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3c81d8:
    // 0x3c81d8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3c81d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c81dc:
    // 0x3c81dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c81dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3c81e0:
    // 0x3c81e0: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
label_3c81e4:
    if (ctx->pc == 0x3C81E4u) {
        ctx->pc = 0x3C81E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C81E0u;
        // 0x3c81e4: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C81E8u;
        goto label_3c81e8;
    }
    ctx->pc = 0x3C81E0u;
    {
        const bool branch_taken_0x3c81e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C81E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C81E0u;
        // 0x3c81e4: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c81e0) {
            ctx->pc = 0x3C82A4u;
            goto label_3c82a4;
        }
    }
    ctx->pc = 0x3C81E8u;
label_3c81e8:
    // 0x3c81e8: 0x8e7000b0  lw          $s0, 0xB0($s3)
    ctx->pc = 0x3c81e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_3c81ec:
    // 0x3c81ec: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x3c81ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_3c81f0:
    // 0x3c81f0: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x3c81f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
label_3c81f4:
    // 0x3c81f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c81f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c81f8:
    // 0x3c81f8: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x3c81f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_3c81fc:
    // 0x3c81fc: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x3c81fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
label_3c8200:
    // 0x3c8200: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c8200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c8204:
    // 0x3c8204: 0x0  nop
    ctx->pc = 0x3c8204u;
    // NOP
label_3c8208:
    // 0x3c8208: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x3c8208u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_3c820c:
    // 0x3c820c: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x3c820cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_3c8210:
    // 0x3c8210: 0xc043fba  jal         func_10FEE8
label_3c8214:
    if (ctx->pc == 0x3C8214u) {
        ctx->pc = 0x3C8214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8210u;
        // 0x3c8214: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8218u;
        goto label_3c8218;
    }
    ctx->pc = 0x3C8210u;
    SET_GPR_U32(ctx, 31, 0x3C8218u);
    ctx->pc = 0x3C8214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8210u;
    // 0x3c8214: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FEE8u, 0x3C8210u, 0x3C8218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8218u;
label_3c8218:
    // 0x3c8218: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3c8218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3c821c:
    // 0x3c821c: 0x3442ff10  ori         $v0, $v0, 0xFF10
    ctx->pc = 0x3c821cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65296);
label_3c8220:
    // 0x3c8220: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x3c8220u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3c8224:
    // 0x3c8224: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_3c8228:
    if (ctx->pc == 0x3C8228u) {
        ctx->pc = 0x3C8228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8224u;
        // 0x3c8228: 0x2602fffe  addiu       $v0, $s0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C822Cu;
        goto label_3c822c;
    }
    ctx->pc = 0x3C8224u;
    {
        const bool branch_taken_0x3c8224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8224u;
        // 0x3c8228: 0x2602fffe  addiu       $v0, $s0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8224) {
            ctx->pc = 0x3C8288u;
            goto label_3c8288;
        }
    }
    ctx->pc = 0x3C822Cu;
label_3c822c:
    // 0x3c822c: 0x8e470020  lw          $a3, 0x20($s2)
    ctx->pc = 0x3c822cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3c8230:
    // 0x3c8230: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
label_3c8234:
    if (ctx->pc == 0x3C8234u) {
        ctx->pc = 0x3C8234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8230u;
        // 0x3c8234: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8238u;
        goto label_3c8238;
    }
    ctx->pc = 0x3C8230u;
    {
        const bool branch_taken_0x3c8230 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8230u;
        // 0x3c8234: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8230) {
            ctx->pc = 0x3C8254u;
            goto label_3c8254;
        }
    }
    ctx->pc = 0x3C8238u;
label_3c8238:
    // 0x3c8238: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3c8238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3c823c:
    // 0x3c823c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x3c823cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3c8240:
    // 0x3c8240: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3c8240u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3c8244:
    // 0x3c8244: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3c8244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3c8248:
    // 0x3c8248: 0x60f809  jalr        $v1
label_3c824c:
    if (ctx->pc == 0x3C824Cu) {
        ctx->pc = 0x3C824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8248u;
        // 0x3c824c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8250u;
        goto label_3c8250;
    }
    ctx->pc = 0x3C8248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C8250u);
        ctx->pc = 0x3C824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8248u;
        // 0x3c824c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8248u, 0x3C8250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C8250u;
label_3c8250:
    // 0x3c8250: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x3c8250u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_3c8254:
    // 0x3c8254: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x3c8254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3c8258:
    // 0x3c8258: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x3c8258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c825c:
    // 0x3c825c: 0x10b00004  beq         $a1, $s0, . + 4 + (0x4 << 2)
label_3c8260:
    if (ctx->pc == 0x3C8260u) {
        ctx->pc = 0x3C8260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C825Cu;
        // 0x3c8260: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8264u;
        goto label_3c8264;
    }
    ctx->pc = 0x3C825Cu;
    {
        const bool branch_taken_0x3c825c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        ctx->pc = 0x3C8260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C825Cu;
        // 0x3c8260: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c825c) {
            ctx->pc = 0x3C8270u;
            goto label_3c8270;
        }
    }
    ctx->pc = 0x3C8264u;
label_3c8264:
    // 0x3c8264: 0xc0670ca  jal         func_19C328
label_3c8268:
    if (ctx->pc == 0x3C8268u) {
        ctx->pc = 0x3C8268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8264u;
        // 0x3c8268: 0x8c44cf14  lw          $a0, -0x30EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C826Cu;
        goto label_3c826c;
    }
    ctx->pc = 0x3C8264u;
    SET_GPR_U32(ctx, 31, 0x3C826Cu);
    ctx->pc = 0x3C8268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8264u;
    // 0x3c8268: 0x8c44cf14  lw          $a0, -0x30EC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954772)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C328u, 0x3C8264u, 0x3C826Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C826Cu;
label_3c826c:
    // 0x3c826c: 0xae500014  sw          $s0, 0x14($s2)
    ctx->pc = 0x3c826cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
label_3c8270:
    // 0x3c8270: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x3c8270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
label_3c8274:
    // 0x3c8274: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c8274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c8278:
    // 0x3c8278: 0xc0440c6  jal         func_110318
label_3c827c:
    if (ctx->pc == 0x3C827Cu) {
        ctx->pc = 0x3C827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8278u;
        // 0x3c827c: 0x8e450018  lw          $a1, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8280u;
        goto label_3c8280;
    }
    ctx->pc = 0x3C8278u;
    SET_GPR_U32(ctx, 31, 0x3C8280u);
    ctx->pc = 0x3C827Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8278u;
    // 0x3c827c: 0x8e450018  lw          $a1, 0x18($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x3C8278u, 0x3C8280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8280u;
label_3c8280:
    // 0x3c8280: 0x1000008b  b           . + 4 + (0x8B << 2)
label_3c8284:
    if (ctx->pc == 0x3C8284u) {
        ctx->pc = 0x3C8284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8280u;
        // 0x3c8284: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8288u;
        goto label_3c8288;
    }
    ctx->pc = 0x3C8280u;
    {
        const bool branch_taken_0x3c8280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8280u;
        // 0x3c8284: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8280) {
            ctx->pc = 0x3C84B0u;
            goto label_3c84b0;
        }
    }
    ctx->pc = 0x3C8288u;
label_3c8288:
    // 0x3c8288: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x3c8288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
label_3c828c:
    // 0x3c828c: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x3c828cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
label_3c8290:
    // 0x3c8290: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c8290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c8294:
    // 0x3c8294: 0xae6200b4  sw          $v0, 0xB4($s3)
    ctx->pc = 0x3c8294u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 180), GPR_U32(ctx, 2));
label_3c8298:
    // 0x3c8298: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3c8298u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3c829c:
    // 0x3c829c: 0x10000013  b           . + 4 + (0x13 << 2)
label_3c82a0:
    if (ctx->pc == 0x3C82A0u) {
        ctx->pc = 0x3C82A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C829Cu;
        // 0x3c82a0: 0x4600c602  mul.s       $f24, $f24, $f0 (Delay Slot)
        ctx->f[24] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C82A4u;
        goto label_3c82a4;
    }
    ctx->pc = 0x3C829Cu;
    {
        const bool branch_taken_0x3c829c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C82A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C829Cu;
        // 0x3c82a0: 0x4600c602  mul.s       $f24, $f24, $f0 (Delay Slot)
        ctx->f[24] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c829c) {
            ctx->pc = 0x3C82ECu;
            goto label_3c82ec;
        }
    }
    ctx->pc = 0x3C82A4u;
label_3c82a4:
    // 0x3c82a4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x3c82a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c82a8:
    // 0x3c82a8: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x3c82a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c82ac:
    // 0x3c82ac: 0x0  nop
    ctx->pc = 0x3c82acu;
    // NOP
label_3c82b0:
    // 0x3c82b0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_3c82b4:
    if (ctx->pc == 0x3C82B4u) {
        ctx->pc = 0x3C82B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C82B0u;
        // 0x3c82b4: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C82B8u;
        goto label_3c82b8;
    }
    ctx->pc = 0x3C82B0u;
    {
        const bool branch_taken_0x3c82b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C82B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C82B0u;
        // 0x3c82b4: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c82b0) {
            ctx->pc = 0x3C82E8u;
            goto label_3c82e8;
        }
    }
    ctx->pc = 0x3C82B8u;
label_3c82b8:
    // 0x3c82b8: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x3c82b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_3c82bc:
    // 0x3c82bc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3c82bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3c82c0:
    // 0x3c82c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c82c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c82c4:
    // 0x3c82c4: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x3c82c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_3c82c8:
    // 0x3c82c8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3c82c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3c82cc:
    // 0x3c82cc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c82ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c82d0:
    // 0x3c82d0: 0xc0cd518  jal         func_335460
label_3c82d4:
    if (ctx->pc == 0x3C82D4u) {
        ctx->pc = 0x3C82D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C82D0u;
        // 0x3c82d4: 0x2604b8b8  addiu       $a0, $s0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C82D8u;
        goto label_3c82d8;
    }
    ctx->pc = 0x3C82D0u;
    SET_GPR_U32(ctx, 31, 0x3C82D8u);
    ctx->pc = 0x3C82D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C82D0u;
    // 0x3c82d4: 0x2604b8b8  addiu       $a0, $s0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C82D0u, 0x3C82D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C82D8u;
label_3c82d8:
    // 0x3c82d8: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x3c82d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c82dc:
    // 0x3c82dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3c82dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3c82e0:
    // 0x3c82e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_3c82e4:
    if (ctx->pc == 0x3C82E4u) {
        ctx->pc = 0x3C82E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C82E0u;
        // 0x3c82e4: 0x4601c600  add.s       $f24, $f24, $f1 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C82E8u;
        goto label_3c82e8;
    }
    ctx->pc = 0x3C82E0u;
    {
        const bool branch_taken_0x3c82e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C82E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C82E0u;
        // 0x3c82e4: 0x4601c600  add.s       $f24, $f24, $f1 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c82e0) {
            ctx->pc = 0x3C82ECu;
            goto label_3c82ec;
        }
    }
    ctx->pc = 0x3C82E8u;
label_3c82e8:
    // 0x3c82e8: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x3c82e8u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
label_3c82ec:
    // 0x3c82ec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3c82ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3c82f0:
    // 0x3c82f0: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3c82f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3c82f4:
    // 0x3c82f4: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3c82f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3c82f8:
    // 0x3c82f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c82f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c82fc:
    // 0x3c82fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c82fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c8300:
    // 0x3c8300: 0xc0cd4ee  jal         func_3353B8
label_3c8304:
    if (ctx->pc == 0x3C8304u) {
        ctx->pc = 0x3C8304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8300u;
        // 0x3c8304: 0x4619c5c2  mul.s       $f23, $f24, $f25 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[24], ctx->f[25]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8308u;
        goto label_3c8308;
    }
    ctx->pc = 0x3C8300u;
    SET_GPR_U32(ctx, 31, 0x3C8308u);
    ctx->pc = 0x3C8304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8300u;
    // 0x3c8304: 0x4619c5c2  mul.s       $f23, $f24, $f25 (Delay Slot)
    ctx->f[23] = FPU_MUL_S(ctx->f[24], ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C8300u, 0x3C8308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8308u;
label_3c8308:
    // 0x3c8308: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x3c8308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_3c830c:
    // 0x3c830c: 0xc0e858c  jal         func_3A1630
label_3c8310:
    if (ctx->pc == 0x3C8310u) {
        ctx->pc = 0x3C8310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C830Cu;
        // 0x3c8310: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8314u;
        goto label_3c8314;
    }
    ctx->pc = 0x3C830Cu;
    SET_GPR_U32(ctx, 31, 0x3C8314u);
    ctx->pc = 0x3C8310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C830Cu;
    // 0x3c8310: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C830Cu, 0x3C8314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8314u;
label_3c8314:
    // 0x3c8314: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c8314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c8318:
    // 0x3c8318: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x3c8318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_3c831c:
    // 0x3c831c: 0x4600bd87  neg.s       $f22, $f23
    ctx->pc = 0x3c831cu;
    ctx->f[22] = FPU_NEG_S(ctx->f[23]);
label_3c8320:
    // 0x3c8320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c8320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c8324:
    // 0x3c8324: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x3c8324u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_3c8328:
    // 0x3c8328: 0xc0cd518  jal         func_335460
label_3c832c:
    if (ctx->pc == 0x3C832Cu) {
        ctx->pc = 0x3C832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8328u;
        // 0x3c832c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8330u;
        goto label_3c8330;
    }
    ctx->pc = 0x3C8328u;
    SET_GPR_U32(ctx, 31, 0x3C8330u);
    ctx->pc = 0x3C832Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8328u;
    // 0x3c832c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C8328u, 0x3C8330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8330u;
label_3c8330:
    // 0x3c8330: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3c8330u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3c8334:
    // 0x3c8334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c8334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c8338:
    // 0x3c8338: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3c8338u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3c833c:
    // 0x3c833c: 0xc0cd518  jal         func_335460
label_3c8340:
    if (ctx->pc == 0x3C8340u) {
        ctx->pc = 0x3C8340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C833Cu;
        // 0x3c8340: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8344u;
        goto label_3c8344;
    }
    ctx->pc = 0x3C833Cu;
    SET_GPR_U32(ctx, 31, 0x3C8344u);
    ctx->pc = 0x3C8340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C833Cu;
    // 0x3c8340: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C833Cu, 0x3C8344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8344u;
label_3c8344:
    // 0x3c8344: 0x4600c307  neg.s       $f12, $f24
    ctx->pc = 0x3c8344u;
    ctx->f[12] = FPU_NEG_S(ctx->f[24]);
label_3c8348:
    // 0x3c8348: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c8348u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3c834c:
    // 0x3c834c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c834cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c8350:
    // 0x3c8350: 0xc0cd518  jal         func_335460
label_3c8354:
    if (ctx->pc == 0x3C8354u) {
        ctx->pc = 0x3C8354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8350u;
        // 0x3c8354: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8358u;
        goto label_3c8358;
    }
    ctx->pc = 0x3C8350u;
    SET_GPR_U32(ctx, 31, 0x3C8358u);
    ctx->pc = 0x3C8354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8350u;
    // 0x3c8354: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C8350u, 0x3C8358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8358u;
label_3c8358:
    // 0x3c8358: 0xe7b50430  swc1        $f21, 0x430($sp)
    ctx->pc = 0x3c8358u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1072), bits); }
label_3c835c:
    // 0x3c835c: 0x27b10430  addiu       $s1, $sp, 0x430
    ctx->pc = 0x3c835cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3c8360:
    // 0x3c8360: 0xe7b40434  swc1        $f20, 0x434($sp)
    ctx->pc = 0x3c8360u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1076), bits); }
label_3c8364:
    // 0x3c8364: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x3c8364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_3c8368:
    // 0x3c8368: 0xe7a00438  swc1        $f0, 0x438($sp)
    ctx->pc = 0x3c8368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1080), bits); }
label_3c836c:
    // 0x3c836c: 0xe63a000c  swc1        $f26, 0xC($s1)
    ctx->pc = 0x3c836cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3c8370:
    // 0x3c8370: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3c8370u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3c8374:
    // 0x3c8374: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3c8374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3c8378:
    // 0x3c8378: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3c8378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3c837c:
    // 0x3c837c: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x3c837cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_3c8380:
    // 0x3c8380: 0x50640001  beql        $v1, $a0, . + 4 + (0x1 << 2)
label_3c8384:
    if (ctx->pc == 0x3C8384u) {
        ctx->pc = 0x3C8384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8380u;
        // 0x3c8384: 0xa2400004  sb          $zero, 0x4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8388u;
        goto label_3c8388;
    }
    ctx->pc = 0x3C8380u;
    {
        const bool branch_taken_0x3c8380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3c8380) {
            ctx->pc = 0x3C8384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C8380u;
            // 0x3c8384: 0xa2400004  sb          $zero, 0x4($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C8388u;
            goto label_3c8388;
        }
    }
    ctx->pc = 0x3C8388u;
label_3c8388:
    // 0x3c8388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c8388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c838c:
    // 0x3c838c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3c838cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3c8390:
    // 0x3c8390: 0xc0cd518  jal         func_335460
label_3c8394:
    if (ctx->pc == 0x3C8394u) {
        ctx->pc = 0x3C8394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8390u;
        // 0x3c8394: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8398u;
        goto label_3c8398;
    }
    ctx->pc = 0x3C8390u;
    SET_GPR_U32(ctx, 31, 0x3C8398u);
    ctx->pc = 0x3C8394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8390u;
    // 0x3c8394: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C8390u, 0x3C8398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8398u;
label_3c8398:
    // 0x3c8398: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3c8398u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3c839c:
    // 0x3c839c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3c839cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3c83a0:
    // 0x3c83a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c83a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c83a4:
    // 0x3c83a4: 0xc0cd518  jal         func_335460
label_3c83a8:
    if (ctx->pc == 0x3C83A8u) {
        ctx->pc = 0x3C83A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C83A4u;
        // 0x3c83a8: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C83ACu;
        goto label_3c83ac;
    }
    ctx->pc = 0x3C83A4u;
    SET_GPR_U32(ctx, 31, 0x3C83ACu);
    ctx->pc = 0x3C83A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C83A4u;
    // 0x3c83a8: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C83A4u, 0x3C83ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C83ACu;
label_3c83ac:
    // 0x3c83ac: 0x4619bb42  mul.s       $f13, $f23, $f25
    ctx->pc = 0x3c83acu;
    ctx->f[13] = FPU_MUL_S(ctx->f[23], ctx->f[25]);
label_3c83b0:
    // 0x3c83b0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c83b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3c83b4:
    // 0x3c83b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c83b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c83b8:
    // 0x3c83b8: 0xc0cd518  jal         func_335460
label_3c83bc:
    if (ctx->pc == 0x3C83BCu) {
        ctx->pc = 0x3C83BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C83B8u;
        // 0x3c83bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C83C0u;
        goto label_3c83c0;
    }
    ctx->pc = 0x3C83B8u;
    SET_GPR_U32(ctx, 31, 0x3C83C0u);
    ctx->pc = 0x3C83BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C83B8u;
    // 0x3c83bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C83B8u, 0x3C83C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C83C0u;
label_3c83c0:
    // 0x3c83c0: 0xe7b50430  swc1        $f21, 0x430($sp)
    ctx->pc = 0x3c83c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1072), bits); }
label_3c83c4:
    // 0x3c83c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c83c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c83c8:
    // 0x3c83c8: 0xe7b40434  swc1        $f20, 0x434($sp)
    ctx->pc = 0x3c83c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1076), bits); }
label_3c83cc:
    // 0x3c83cc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3c83ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3c83d0:
    // 0x3c83d0: 0xe7a00438  swc1        $f0, 0x438($sp)
    ctx->pc = 0x3c83d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1080), bits); }
label_3c83d4:
    // 0x3c83d4: 0xe63a000c  swc1        $f26, 0xC($s1)
    ctx->pc = 0x3c83d4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3c83d8:
    // 0x3c83d8: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3c83d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3c83dc:
    // 0x3c83dc: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3c83dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3c83e0:
    // 0x3c83e0: 0xc0cd4ee  jal         func_3353B8
label_3c83e4:
    if (ctx->pc == 0x3C83E4u) {
        ctx->pc = 0x3C83E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C83E0u;
        // 0x3c83e4: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C83E8u;
        goto label_3c83e8;
    }
    ctx->pc = 0x3C83E0u;
    SET_GPR_U32(ctx, 31, 0x3C83E8u);
    ctx->pc = 0x3C83E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C83E0u;
    // 0x3c83e4: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C83E0u, 0x3C83E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C83E8u;
label_3c83e8:
    // 0x3c83e8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_3c83ec:
    if (ctx->pc == 0x3C83ECu) {
        ctx->pc = 0x3C83ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C83E8u;
        // 0x3c83ec: 0x27b10440  addiu       $s1, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C83F0u;
        goto label_3c83f0;
    }
    ctx->pc = 0x3C83E8u;
    {
        const bool branch_taken_0x3c83e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C83ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C83E8u;
        // 0x3c83ec: 0x27b10440  addiu       $s1, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c83e8) {
            ctx->pc = 0x3C8440u;
            goto label_3c8440;
        }
    }
    ctx->pc = 0x3C83F0u;
label_3c83f0:
    // 0x3c83f0: 0xc0e9694  jal         func_3A5A50
label_3c83f4:
    if (ctx->pc == 0x3C83F4u) {
        ctx->pc = 0x3C83F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C83F0u;
        // 0x3c83f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C83F8u;
        goto label_3c83f8;
    }
    ctx->pc = 0x3C83F0u;
    SET_GPR_U32(ctx, 31, 0x3C83F8u);
    ctx->pc = 0x3C83F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C83F0u;
    // 0x3c83f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3C83F0u, 0x3C83F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C83F8u;
label_3c83f8:
    // 0x3c83f8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_3c83fc:
    if (ctx->pc == 0x3C83FCu) {
        ctx->pc = 0x3C83FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C83F8u;
        // 0x3c83fc: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8400u;
        goto label_3c8400;
    }
    ctx->pc = 0x3C83F8u;
    {
        const bool branch_taken_0x3c83f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C83FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C83F8u;
        // 0x3c83fc: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c83f8) {
            ctx->pc = 0x3C8440u;
            goto label_3c8440;
        }
    }
    ctx->pc = 0x3C8400u;
label_3c8400:
    // 0x3c8400: 0x27a40850  addiu       $a0, $sp, 0x850
    ctx->pc = 0x3c8400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3c8404:
    // 0x3c8404: 0x27a60410  addiu       $a2, $sp, 0x410
    ctx->pc = 0x3c8404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3c8408:
    // 0x3c8408: 0x261043f0  addiu       $s0, $s0, 0x43F0
    ctx->pc = 0x3c8408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17392));
label_3c840c:
    // 0x3c840c: 0xc136b18  jal         func_4DAC60
label_3c8410:
    if (ctx->pc == 0x3C8410u) {
        ctx->pc = 0x3C8410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C840Cu;
        // 0x3c8410: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8414u;
        goto label_3c8414;
    }
    ctx->pc = 0x3C840Cu;
    SET_GPR_U32(ctx, 31, 0x3C8414u);
    ctx->pc = 0x3C8410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C840Cu;
    // 0x3c8410: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C840Cu, 0x3C8414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8414u;
label_3c8414:
    // 0x3c8414: 0x7ba20850  lq          $v0, 0x850($sp)
    ctx->pc = 0x3c8414u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2128)));
label_3c8418:
    // 0x3c8418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c8418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c841c:
    // 0x3c841c: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x3c841cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3c8420:
    // 0x3c8420: 0xe7b80850  swc1        $f24, 0x850($sp)
    ctx->pc = 0x3c8420u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2128), bits); }
label_3c8424:
    // 0x3c8424: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3c8424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3c8428:
    // 0x3c8428: 0x27a60850  addiu       $a2, $sp, 0x850
    ctx->pc = 0x3c8428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3c842c:
    // 0x3c842c: 0xc0e9f84  jal         func_3A7E10
label_3c8430:
    if (ctx->pc == 0x3C8430u) {
        ctx->pc = 0x3C8430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C842Cu;
        // 0x3c8430: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8434u;
        goto label_3c8434;
    }
    ctx->pc = 0x3C842Cu;
    SET_GPR_U32(ctx, 31, 0x3C8434u);
    ctx->pc = 0x3C8430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C842Cu;
    // 0x3c8430: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E10u, 0x3C842Cu, 0x3C8434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8434u;
label_3c8434:
    // 0x3c8434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c8434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c8438:
    // 0x3c8438: 0xc0f15bc  jal         func_3C56F0
label_3c843c:
    if (ctx->pc == 0x3C843Cu) {
        ctx->pc = 0x3C843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8438u;
        // 0x3c843c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8440u;
        goto label_3c8440;
    }
    ctx->pc = 0x3C8438u;
    SET_GPR_U32(ctx, 31, 0x3C8440u);
    ctx->pc = 0x3C843Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8438u;
    // 0x3c843c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C8438u, 0x3C8440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8440u;
label_3c8440:
    // 0x3c8440: 0x92420004  lbu         $v0, 0x4($s2)
    ctx->pc = 0x3c8440u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_3c8444:
    // 0x3c8444: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x3c8444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
label_3c8448:
    // 0x3c8448: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c8448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c844c:
    // 0x3c844c: 0xc0e9404  jal         func_3A5010
label_3c8450:
    if (ctx->pc == 0x3C8450u) {
        ctx->pc = 0x3C8450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C844Cu;
        // 0x3c8450: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8454u;
        goto label_3c8454;
    }
    ctx->pc = 0x3C844Cu;
    SET_GPR_U32(ctx, 31, 0x3C8454u);
    ctx->pc = 0x3C8450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C844Cu;
    // 0x3c8450: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5010u, 0x3C844Cu, 0x3C8454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8454u;
label_3c8454:
    // 0x3c8454: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x3c8454u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_3c8458:
    // 0x3c8458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c8458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c845c:
    // 0x3c845c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3c845cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3c8460:
    // 0x3c8460: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c8460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c8464:
    // 0x3c8464: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x3c8464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_3c8468:
    // 0x3c8468: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c8468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3c846c:
    // 0x3c846c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c846cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c8470:
    // 0x3c8470: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c8470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c8474:
    // 0x3c8474: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x3c8474u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
label_3c8478:
    // 0x3c8478: 0xa2430004  sb          $v1, 0x4($s2)
    ctx->pc = 0x3c8478u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 3));
label_3c847c:
    // 0x3c847c: 0xe67800c0  swc1        $f24, 0xC0($s3)
    ctx->pc = 0x3c847cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 192), bits); }
label_3c8480:
    // 0x3c8480: 0x27a60430  addiu       $a2, $sp, 0x430
    ctx->pc = 0x3c8480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3c8484:
    // 0x3c8484: 0xafa00440  sw          $zero, 0x440($sp)
    ctx->pc = 0x3c8484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 0));
label_3c8488:
    // 0x3c8488: 0xe7a00448  swc1        $f0, 0x448($sp)
    ctx->pc = 0x3c8488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1096), bits); }
label_3c848c:
    // 0x3c848c: 0xafa00444  sw          $zero, 0x444($sp)
    ctx->pc = 0x3c848cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1092), GPR_U32(ctx, 0));
label_3c8490:
    // 0x3c8490: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x3c8490u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3c8494:
    // 0x3c8494: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3c8494u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3c8498:
    // 0x3c8498: 0xc136b18  jal         func_4DAC60
label_3c849c:
    if (ctx->pc == 0x3C849Cu) {
        ctx->pc = 0x3C849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8498u;
        // 0x3c849c: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C84A0u;
        goto label_3c84a0;
    }
    ctx->pc = 0x3C8498u;
    SET_GPR_U32(ctx, 31, 0x3C84A0u);
    ctx->pc = 0x3C849Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8498u;
    // 0x3c849c: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C8498u, 0x3C84A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C84A0u;
label_3c84a0:
    // 0x3c84a0: 0x7ba30440  lq          $v1, 0x440($sp)
    ctx->pc = 0x3c84a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3c84a4:
    // 0x3c84a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c84a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c84a8:
    // 0x3c84a8: 0x7e630010  sq          $v1, 0x10($s3)
    ctx->pc = 0x3c84a8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 3));
label_3c84ac:
    // 0x3c84ac: 0x7fa30420  sq          $v1, 0x420($sp)
    ctx->pc = 0x3c84acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 3));
label_3c84b0:
    // 0x3c84b0: 0x7bb008b0  lq          $s0, 0x8B0($sp)
    ctx->pc = 0x3c84b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2224)));
label_3c84b4:
    // 0x3c84b4: 0x7bb108a0  lq          $s1, 0x8A0($sp)
    ctx->pc = 0x3c84b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
label_3c84b8:
    // 0x3c84b8: 0x7bb20890  lq          $s2, 0x890($sp)
    ctx->pc = 0x3c84b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
label_3c84bc:
    // 0x3c84bc: 0x7bb30880  lq          $s3, 0x880($sp)
    ctx->pc = 0x3c84bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
label_3c84c0:
    // 0x3c84c0: 0x7bb40870  lq          $s4, 0x870($sp)
    ctx->pc = 0x3c84c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
label_3c84c4:
    // 0x3c84c4: 0xdfbf0860  ld          $ra, 0x860($sp)
    ctx->pc = 0x3c84c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2144)));
label_3c84c8:
    // 0x3c84c8: 0xc7ba08f0  lwc1        $f26, 0x8F0($sp)
    ctx->pc = 0x3c84c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_3c84cc:
    // 0x3c84cc: 0xc7b908e8  lwc1        $f25, 0x8E8($sp)
    ctx->pc = 0x3c84ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3c84d0:
    // 0x3c84d0: 0xc7b808e0  lwc1        $f24, 0x8E0($sp)
    ctx->pc = 0x3c84d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3c84d4:
    // 0x3c84d4: 0xc7b708d8  lwc1        $f23, 0x8D8($sp)
    ctx->pc = 0x3c84d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3c84d8:
    // 0x3c84d8: 0xc7b608d0  lwc1        $f22, 0x8D0($sp)
    ctx->pc = 0x3c84d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3c84dc:
    // 0x3c84dc: 0xc7b508c8  lwc1        $f21, 0x8C8($sp)
    ctx->pc = 0x3c84dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3c84e0:
    // 0x3c84e0: 0xc7b408c0  lwc1        $f20, 0x8C0($sp)
    ctx->pc = 0x3c84e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c84e4:
    // 0x3c84e4: 0x3e00008  jr          $ra
label_3c84e8:
    if (ctx->pc == 0x3C84E8u) {
        ctx->pc = 0x3C84E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C84E4u;
        // 0x3c84e8: 0x27bd0900  addiu       $sp, $sp, 0x900 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C84ECu;
        goto label_3c84ec;
    }
    ctx->pc = 0x3C84E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C84E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C84E4u;
        // 0x3c84e8: 0x27bd0900  addiu       $sp, $sp, 0x900 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C84E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C84ECu;
label_3c84ec:
    // 0x3c84ec: 0x0  nop
    ctx->pc = 0x3c84ecu;
    // NOP
    ctx->pc = 0x3c84f0u;
}
