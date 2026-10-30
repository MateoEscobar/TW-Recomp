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

// Function: sub_0010DFE0
// Address: 0x10dfe0 - 0x10e44c
void sub_0010DFE0_0x10dfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DFE0_0x10dfe0");
#endif

    switch (ctx->pc) {
        case 0x10dfe0u: goto label_10dfe0;
        case 0x10dfe4u: goto label_10dfe4;
        case 0x10dfe8u: goto label_10dfe8;
        case 0x10dfecu: goto label_10dfec;
        case 0x10dff0u: goto label_10dff0;
        case 0x10dff4u: goto label_10dff4;
        case 0x10dff8u: goto label_10dff8;
        case 0x10dffcu: goto label_10dffc;
        case 0x10e000u: goto label_10e000;
        case 0x10e004u: goto label_10e004;
        case 0x10e008u: goto label_10e008;
        case 0x10e00cu: goto label_10e00c;
        case 0x10e010u: goto label_10e010;
        case 0x10e014u: goto label_10e014;
        case 0x10e018u: goto label_10e018;
        case 0x10e01cu: goto label_10e01c;
        case 0x10e020u: goto label_10e020;
        case 0x10e024u: goto label_10e024;
        case 0x10e028u: goto label_10e028;
        case 0x10e02cu: goto label_10e02c;
        case 0x10e030u: goto label_10e030;
        case 0x10e034u: goto label_10e034;
        case 0x10e038u: goto label_10e038;
        case 0x10e03cu: goto label_10e03c;
        case 0x10e040u: goto label_10e040;
        case 0x10e044u: goto label_10e044;
        case 0x10e048u: goto label_10e048;
        case 0x10e04cu: goto label_10e04c;
        case 0x10e050u: goto label_10e050;
        case 0x10e054u: goto label_10e054;
        case 0x10e058u: goto label_10e058;
        case 0x10e05cu: goto label_10e05c;
        case 0x10e060u: goto label_10e060;
        case 0x10e064u: goto label_10e064;
        case 0x10e068u: goto label_10e068;
        case 0x10e06cu: goto label_10e06c;
        case 0x10e070u: goto label_10e070;
        case 0x10e074u: goto label_10e074;
        case 0x10e078u: goto label_10e078;
        case 0x10e07cu: goto label_10e07c;
        case 0x10e080u: goto label_10e080;
        case 0x10e084u: goto label_10e084;
        case 0x10e088u: goto label_10e088;
        case 0x10e08cu: goto label_10e08c;
        case 0x10e090u: goto label_10e090;
        case 0x10e094u: goto label_10e094;
        case 0x10e098u: goto label_10e098;
        case 0x10e09cu: goto label_10e09c;
        case 0x10e0a0u: goto label_10e0a0;
        case 0x10e0a4u: goto label_10e0a4;
        case 0x10e0a8u: goto label_10e0a8;
        case 0x10e0acu: goto label_10e0ac;
        case 0x10e0b0u: goto label_10e0b0;
        case 0x10e0b4u: goto label_10e0b4;
        case 0x10e0b8u: goto label_10e0b8;
        case 0x10e0bcu: goto label_10e0bc;
        case 0x10e0c0u: goto label_10e0c0;
        case 0x10e0c4u: goto label_10e0c4;
        case 0x10e0c8u: goto label_10e0c8;
        case 0x10e0ccu: goto label_10e0cc;
        case 0x10e0d0u: goto label_10e0d0;
        case 0x10e0d4u: goto label_10e0d4;
        case 0x10e0d8u: goto label_10e0d8;
        case 0x10e0dcu: goto label_10e0dc;
        case 0x10e0e0u: goto label_10e0e0;
        case 0x10e0e4u: goto label_10e0e4;
        case 0x10e0e8u: goto label_10e0e8;
        case 0x10e0ecu: goto label_10e0ec;
        case 0x10e0f0u: goto label_10e0f0;
        case 0x10e0f4u: goto label_10e0f4;
        case 0x10e0f8u: goto label_10e0f8;
        case 0x10e0fcu: goto label_10e0fc;
        case 0x10e100u: goto label_10e100;
        case 0x10e104u: goto label_10e104;
        case 0x10e108u: goto label_10e108;
        case 0x10e10cu: goto label_10e10c;
        case 0x10e110u: goto label_10e110;
        case 0x10e114u: goto label_10e114;
        case 0x10e118u: goto label_10e118;
        case 0x10e11cu: goto label_10e11c;
        case 0x10e120u: goto label_10e120;
        case 0x10e124u: goto label_10e124;
        case 0x10e128u: goto label_10e128;
        case 0x10e12cu: goto label_10e12c;
        case 0x10e130u: goto label_10e130;
        case 0x10e134u: goto label_10e134;
        case 0x10e138u: goto label_10e138;
        case 0x10e13cu: goto label_10e13c;
        case 0x10e140u: goto label_10e140;
        case 0x10e144u: goto label_10e144;
        case 0x10e148u: goto label_10e148;
        case 0x10e14cu: goto label_10e14c;
        case 0x10e150u: goto label_10e150;
        case 0x10e154u: goto label_10e154;
        case 0x10e158u: goto label_10e158;
        case 0x10e15cu: goto label_10e15c;
        case 0x10e160u: goto label_10e160;
        case 0x10e164u: goto label_10e164;
        case 0x10e168u: goto label_10e168;
        case 0x10e16cu: goto label_10e16c;
        case 0x10e170u: goto label_10e170;
        case 0x10e174u: goto label_10e174;
        case 0x10e178u: goto label_10e178;
        case 0x10e17cu: goto label_10e17c;
        case 0x10e180u: goto label_10e180;
        case 0x10e184u: goto label_10e184;
        case 0x10e188u: goto label_10e188;
        case 0x10e18cu: goto label_10e18c;
        case 0x10e190u: goto label_10e190;
        case 0x10e194u: goto label_10e194;
        case 0x10e198u: goto label_10e198;
        case 0x10e19cu: goto label_10e19c;
        case 0x10e1a0u: goto label_10e1a0;
        case 0x10e1a4u: goto label_10e1a4;
        case 0x10e1a8u: goto label_10e1a8;
        case 0x10e1acu: goto label_10e1ac;
        case 0x10e1b0u: goto label_10e1b0;
        case 0x10e1b4u: goto label_10e1b4;
        case 0x10e1b8u: goto label_10e1b8;
        case 0x10e1bcu: goto label_10e1bc;
        case 0x10e1c0u: goto label_10e1c0;
        case 0x10e1c4u: goto label_10e1c4;
        case 0x10e1c8u: goto label_10e1c8;
        case 0x10e1ccu: goto label_10e1cc;
        case 0x10e1d0u: goto label_10e1d0;
        case 0x10e1d4u: goto label_10e1d4;
        case 0x10e1d8u: goto label_10e1d8;
        case 0x10e1dcu: goto label_10e1dc;
        case 0x10e1e0u: goto label_10e1e0;
        case 0x10e1e4u: goto label_10e1e4;
        case 0x10e1e8u: goto label_10e1e8;
        case 0x10e1ecu: goto label_10e1ec;
        case 0x10e1f0u: goto label_10e1f0;
        case 0x10e1f4u: goto label_10e1f4;
        case 0x10e1f8u: goto label_10e1f8;
        case 0x10e1fcu: goto label_10e1fc;
        case 0x10e200u: goto label_10e200;
        case 0x10e204u: goto label_10e204;
        case 0x10e208u: goto label_10e208;
        case 0x10e20cu: goto label_10e20c;
        case 0x10e210u: goto label_10e210;
        case 0x10e214u: goto label_10e214;
        case 0x10e218u: goto label_10e218;
        case 0x10e21cu: goto label_10e21c;
        case 0x10e220u: goto label_10e220;
        case 0x10e224u: goto label_10e224;
        case 0x10e228u: goto label_10e228;
        case 0x10e22cu: goto label_10e22c;
        case 0x10e230u: goto label_10e230;
        case 0x10e234u: goto label_10e234;
        case 0x10e238u: goto label_10e238;
        case 0x10e23cu: goto label_10e23c;
        case 0x10e240u: goto label_10e240;
        case 0x10e244u: goto label_10e244;
        case 0x10e248u: goto label_10e248;
        case 0x10e24cu: goto label_10e24c;
        case 0x10e250u: goto label_10e250;
        case 0x10e254u: goto label_10e254;
        case 0x10e258u: goto label_10e258;
        case 0x10e25cu: goto label_10e25c;
        case 0x10e260u: goto label_10e260;
        case 0x10e264u: goto label_10e264;
        case 0x10e268u: goto label_10e268;
        case 0x10e26cu: goto label_10e26c;
        case 0x10e270u: goto label_10e270;
        case 0x10e274u: goto label_10e274;
        case 0x10e278u: goto label_10e278;
        case 0x10e27cu: goto label_10e27c;
        case 0x10e280u: goto label_10e280;
        case 0x10e284u: goto label_10e284;
        case 0x10e288u: goto label_10e288;
        case 0x10e28cu: goto label_10e28c;
        case 0x10e290u: goto label_10e290;
        case 0x10e294u: goto label_10e294;
        case 0x10e298u: goto label_10e298;
        case 0x10e29cu: goto label_10e29c;
        case 0x10e2a0u: goto label_10e2a0;
        case 0x10e2a4u: goto label_10e2a4;
        case 0x10e2a8u: goto label_10e2a8;
        case 0x10e2acu: goto label_10e2ac;
        case 0x10e2b0u: goto label_10e2b0;
        case 0x10e2b4u: goto label_10e2b4;
        case 0x10e2b8u: goto label_10e2b8;
        case 0x10e2bcu: goto label_10e2bc;
        case 0x10e2c0u: goto label_10e2c0;
        case 0x10e2c4u: goto label_10e2c4;
        case 0x10e2c8u: goto label_10e2c8;
        case 0x10e2ccu: goto label_10e2cc;
        case 0x10e2d0u: goto label_10e2d0;
        case 0x10e2d4u: goto label_10e2d4;
        case 0x10e2d8u: goto label_10e2d8;
        case 0x10e2dcu: goto label_10e2dc;
        case 0x10e2e0u: goto label_10e2e0;
        case 0x10e2e4u: goto label_10e2e4;
        case 0x10e2e8u: goto label_10e2e8;
        case 0x10e2ecu: goto label_10e2ec;
        case 0x10e2f0u: goto label_10e2f0;
        case 0x10e2f4u: goto label_10e2f4;
        case 0x10e2f8u: goto label_10e2f8;
        case 0x10e2fcu: goto label_10e2fc;
        case 0x10e300u: goto label_10e300;
        case 0x10e304u: goto label_10e304;
        case 0x10e308u: goto label_10e308;
        case 0x10e30cu: goto label_10e30c;
        case 0x10e310u: goto label_10e310;
        case 0x10e314u: goto label_10e314;
        case 0x10e318u: goto label_10e318;
        case 0x10e31cu: goto label_10e31c;
        case 0x10e320u: goto label_10e320;
        case 0x10e324u: goto label_10e324;
        case 0x10e328u: goto label_10e328;
        case 0x10e32cu: goto label_10e32c;
        case 0x10e330u: goto label_10e330;
        case 0x10e334u: goto label_10e334;
        case 0x10e338u: goto label_10e338;
        case 0x10e33cu: goto label_10e33c;
        case 0x10e340u: goto label_10e340;
        case 0x10e344u: goto label_10e344;
        case 0x10e348u: goto label_10e348;
        case 0x10e34cu: goto label_10e34c;
        case 0x10e350u: goto label_10e350;
        case 0x10e354u: goto label_10e354;
        case 0x10e358u: goto label_10e358;
        case 0x10e35cu: goto label_10e35c;
        case 0x10e360u: goto label_10e360;
        case 0x10e364u: goto label_10e364;
        case 0x10e368u: goto label_10e368;
        case 0x10e36cu: goto label_10e36c;
        case 0x10e370u: goto label_10e370;
        case 0x10e374u: goto label_10e374;
        case 0x10e378u: goto label_10e378;
        case 0x10e37cu: goto label_10e37c;
        case 0x10e380u: goto label_10e380;
        case 0x10e384u: goto label_10e384;
        case 0x10e388u: goto label_10e388;
        case 0x10e38cu: goto label_10e38c;
        case 0x10e390u: goto label_10e390;
        case 0x10e394u: goto label_10e394;
        case 0x10e398u: goto label_10e398;
        case 0x10e39cu: goto label_10e39c;
        case 0x10e3a0u: goto label_10e3a0;
        case 0x10e3a4u: goto label_10e3a4;
        case 0x10e3a8u: goto label_10e3a8;
        case 0x10e3acu: goto label_10e3ac;
        case 0x10e3b0u: goto label_10e3b0;
        case 0x10e3b4u: goto label_10e3b4;
        case 0x10e3b8u: goto label_10e3b8;
        case 0x10e3bcu: goto label_10e3bc;
        case 0x10e3c0u: goto label_10e3c0;
        case 0x10e3c4u: goto label_10e3c4;
        case 0x10e3c8u: goto label_10e3c8;
        case 0x10e3ccu: goto label_10e3cc;
        case 0x10e3d0u: goto label_10e3d0;
        case 0x10e3d4u: goto label_10e3d4;
        case 0x10e3d8u: goto label_10e3d8;
        case 0x10e3dcu: goto label_10e3dc;
        case 0x10e3e0u: goto label_10e3e0;
        case 0x10e3e4u: goto label_10e3e4;
        case 0x10e3e8u: goto label_10e3e8;
        case 0x10e3ecu: goto label_10e3ec;
        case 0x10e3f0u: goto label_10e3f0;
        case 0x10e3f4u: goto label_10e3f4;
        case 0x10e3f8u: goto label_10e3f8;
        case 0x10e3fcu: goto label_10e3fc;
        case 0x10e400u: goto label_10e400;
        case 0x10e404u: goto label_10e404;
        case 0x10e408u: goto label_10e408;
        case 0x10e40cu: goto label_10e40c;
        case 0x10e410u: goto label_10e410;
        case 0x10e414u: goto label_10e414;
        case 0x10e418u: goto label_10e418;
        case 0x10e41cu: goto label_10e41c;
        case 0x10e420u: goto label_10e420;
        case 0x10e424u: goto label_10e424;
        case 0x10e428u: goto label_10e428;
        case 0x10e42cu: goto label_10e42c;
        case 0x10e430u: goto label_10e430;
        case 0x10e434u: goto label_10e434;
        case 0x10e438u: goto label_10e438;
        case 0x10e43cu: goto label_10e43c;
        case 0x10e440u: goto label_10e440;
        case 0x10e444u: goto label_10e444;
        case 0x10e448u: goto label_10e448;
        default: break;
    }

    ctx->pc = 0x10dfe0u;

label_10dfe0:
    // 0x10dfe0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10dfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_10dfe4:
    // 0x10dfe4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x10dfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_10dfe8:
    // 0x10dfe8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x10dfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_10dfec:
    // 0x10dfec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10dfecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10dff0:
    // 0x10dff0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x10dff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_10dff4:
    // 0x10dff4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10dff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_10dff8:
    // 0x10dff8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10dff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_10dffc:
    // 0x10dffc: 0x92230011  lbu         $v1, 0x11($s1)
    ctx->pc = 0x10dffcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
label_10e000:
    // 0x10e000: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x10e000u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_10e004:
    // 0x10e004: 0x10400111  beqz        $v0, . + 4 + (0x111 << 2)
label_10e008:
    if (ctx->pc == 0x10E008u) {
        ctx->pc = 0x10E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E004u;
        // 0x10e008: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E00Cu;
        goto label_10e00c;
    }
    ctx->pc = 0x10E004u;
    {
        const bool branch_taken_0x10e004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E004u;
        // 0x10e008: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e004) {
            ctx->pc = 0x10E44Cu;
            return;
        }
    }
    ctx->pc = 0x10E00Cu;
label_10e00c:
    // 0x10e00c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x10e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_10e010:
    // 0x10e010: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10e010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10e014:
    // 0x10e014: 0x24426d50  addiu       $v0, $v0, 0x6D50
    ctx->pc = 0x10e014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27984));
label_10e018:
    // 0x10e018: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10e018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10e01c:
    // 0x10e01c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10e01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_10e020:
    // 0x10e020: 0x800008  jr          $a0
label_10e024:
    if (ctx->pc == 0x10E024u) {
        ctx->pc = 0x10E028u;
        goto label_10e028;
    }
    ctx->pc = 0x10E020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10E028u: goto label_10e028;
            case 0x10E0A8u: goto label_10e0a8;
            case 0x10E26Cu: goto label_10e26c;
            case 0x10E340u: goto label_10e340;
            case 0x10E394u: goto label_10e394;
            case 0x10E414u: goto label_10e414;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E020u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10E028u;
label_10e028:
    // 0x10e028: 0x8e500154  lw          $s0, 0x154($s2)
    ctx->pc = 0x10e028u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
label_10e02c:
    // 0x10e02c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10e02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10e030:
    // 0x10e030: 0x92020011  lbu         $v0, 0x11($s0)
    ctx->pc = 0x10e030u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
label_10e034:
    // 0x10e034: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
label_10e038:
    if (ctx->pc == 0x10E038u) {
        ctx->pc = 0x10E038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E034u;
        // 0x10e038: 0x82030008  lb          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E03Cu;
        goto label_10e03c;
    }
    ctx->pc = 0x10E034u;
    {
        const bool branch_taken_0x10e034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10e034) {
            ctx->pc = 0x10E038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E034u;
            // 0x10e038: 0x82030008  lb          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E060u;
            goto label_10e060;
        }
    }
    ctx->pc = 0x10E03Cu;
label_10e03c:
    // 0x10e03c: 0x8e500158  lw          $s0, 0x158($s2)
    ctx->pc = 0x10e03cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_10e040:
    // 0x10e040: 0x92020011  lbu         $v0, 0x11($s0)
    ctx->pc = 0x10e040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
label_10e044:
    // 0x10e044: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_10e048:
    if (ctx->pc == 0x10E048u) {
        ctx->pc = 0x10E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E044u;
        // 0x10e048: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E04Cu;
        goto label_10e04c;
    }
    ctx->pc = 0x10E044u;
    {
        const bool branch_taken_0x10e044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E044u;
        // 0x10e048: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e044) {
            ctx->pc = 0x10E054u;
            goto label_10e054;
        }
    }
    ctx->pc = 0x10E04Cu;
label_10e04c:
    // 0x10e04c: 0x10000004  b           . + 4 + (0x4 << 2)
label_10e050:
    if (ctx->pc == 0x10E050u) {
        ctx->pc = 0x10E050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E04Cu;
        // 0x10e050: 0x82030008  lb          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E054u;
        goto label_10e054;
    }
    ctx->pc = 0x10E04Cu;
    {
        const bool branch_taken_0x10e04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E04Cu;
        // 0x10e050: 0x82030008  lb          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e04c) {
            ctx->pc = 0x10E060u;
            goto label_10e060;
        }
    }
    ctx->pc = 0x10E054u;
label_10e054:
    // 0x10e054: 0xc046d26  jal         func_11B498
label_10e058:
    if (ctx->pc == 0x10E058u) {
        ctx->pc = 0x10E058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E054u;
        // 0x10e058: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E05Cu;
        goto label_10e05c;
    }
    ctx->pc = 0x10E054u;
    SET_GPR_U32(ctx, 31, 0x10E05Cu);
    ctx->pc = 0x10E058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E054u;
    // 0x10e058: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B498u, 0x10E054u, 0x10E05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E05Cu;
label_10e05c:
    // 0x10e05c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10e05cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10e060:
    // 0x10e060: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10e060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10e064:
    // 0x10e064: 0x106200f9  beq         $v1, $v0, . + 4 + (0xF9 << 2)
label_10e068:
    if (ctx->pc == 0x10E068u) {
        ctx->pc = 0x10E068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E064u;
        // 0x10e068: 0x2410004c  addiu       $s0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E06Cu;
        goto label_10e06c;
    }
    ctx->pc = 0x10E064u;
    {
        const bool branch_taken_0x10e064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10E068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E064u;
        // 0x10e068: 0x2410004c  addiu       $s0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e064) {
            ctx->pc = 0x10E44Cu;
            return;
        }
    }
    ctx->pc = 0x10E06Cu;
label_10e06c:
    // 0x10e06c: 0x8e42015c  lw          $v0, 0x15C($s2)
    ctx->pc = 0x10e06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
label_10e070:
    // 0x10e070: 0x708018  mult        $s0, $v1, $s0
    ctx->pc = 0x10e070u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_10e074:
    // 0x10e074: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x10e074u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
label_10e078:
    // 0x10e078: 0x8e45015c  lw          $a1, 0x15C($s2)
    ctx->pc = 0x10e078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
label_10e07c:
    // 0x10e07c: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x10e07cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_10e080:
    // 0x10e080: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x10e080u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_10e084:
    // 0x10e084: 0xc0467f0  jal         func_119FC0
label_10e088:
    if (ctx->pc == 0x10E088u) {
        ctx->pc = 0x10E088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E084u;
        // 0x10e088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E08Cu;
        goto label_10e08c;
    }
    ctx->pc = 0x10E084u;
    SET_GPR_U32(ctx, 31, 0x10E08Cu);
    ctx->pc = 0x10E088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E084u;
    // 0x10e088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119FC0u, 0x10E084u, 0x10E08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E08Cu;
label_10e08c:
    // 0x10e08c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10e08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10e090:
    // 0x10e090: 0xc0436ec  jal         func_10DBB0
label_10e094:
    if (ctx->pc == 0x10E094u) {
        ctx->pc = 0x10E094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E090u;
        // 0x10e094: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E098u;
        goto label_10e098;
    }
    ctx->pc = 0x10E090u;
    SET_GPR_U32(ctx, 31, 0x10E098u);
    ctx->pc = 0x10E094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E090u;
    // 0x10e094: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DBB0u, 0x10E090u, 0x10E098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E098u;
label_10e098:
    // 0x10e098: 0xc0467de  jal         func_119F78
label_10e09c:
    if (ctx->pc == 0x10E09Cu) {
        ctx->pc = 0x10E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E098u;
        // 0x10e09c: 0x8e44015c  lw          $a0, 0x15C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E0A0u;
        goto label_10e0a0;
    }
    ctx->pc = 0x10E098u;
    SET_GPR_U32(ctx, 31, 0x10E0A0u);
    ctx->pc = 0x10E09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E098u;
    // 0x10e09c: 0x8e44015c  lw          $a0, 0x15C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119F78u, 0x10E098u, 0x10E0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E0A0u;
label_10e0a0:
    // 0x10e0a0: 0x100000eb  b           . + 4 + (0xEB << 2)
label_10e0a4:
    if (ctx->pc == 0x10E0A4u) {
        ctx->pc = 0x10E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0A0u;
        // 0x10e0a4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E0A8u;
        goto label_10e0a8;
    }
    ctx->pc = 0x10E0A0u;
    {
        const bool branch_taken_0x10e0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0A0u;
        // 0x10e0a4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e0a0) {
            ctx->pc = 0x10E450u;
            return;
        }
    }
    ctx->pc = 0x10E0A8u;
label_10e0a8:
    // 0x10e0a8: 0x82250008  lb          $a1, 0x8($s1)
    ctx->pc = 0x10e0a8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_10e0ac:
    // 0x10e0ac: 0xc046dd4  jal         func_11B750
label_10e0b0:
    if (ctx->pc == 0x10E0B0u) {
        ctx->pc = 0x10E0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0ACu;
        // 0x10e0b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E0B4u;
        goto label_10e0b4;
    }
    ctx->pc = 0x10E0ACu;
    SET_GPR_U32(ctx, 31, 0x10E0B4u);
    ctx->pc = 0x10E0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E0ACu;
    // 0x10e0b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B750u, 0x10E0ACu, 0x10E0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E0B4u;
label_10e0b4:
    // 0x10e0b4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x10e0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_10e0b8:
    // 0x10e0b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10e0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10e0bc:
    // 0x10e0bc: 0x8c86bce4  lw          $a2, -0x431C($a0)
    ctx->pc = 0x10e0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950116)));
label_10e0c0:
    // 0x10e0c0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10e0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_10e0c4:
    // 0x10e0c4: 0x84640140  lh          $a0, 0x140($v1)
    ctx->pc = 0x10e0c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
label_10e0c8:
    // 0x10e0c8: 0x8c620144  lw          $v0, 0x144($v1)
    ctx->pc = 0x10e0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
label_10e0cc:
    // 0x10e0cc: 0x40f809  jalr        $v0
label_10e0d0:
    if (ctx->pc == 0x10E0D0u) {
        ctx->pc = 0x10E0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0CCu;
        // 0x10e0d0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E0D4u;
        goto label_10e0d4;
    }
    ctx->pc = 0x10E0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10E0D4u);
        ctx->pc = 0x10E0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0CCu;
        // 0x10e0d0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E0CCu, 0x10E0D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E0D4u;
label_10e0d4:
    // 0x10e0d4: 0x104000dd  beqz        $v0, . + 4 + (0xDD << 2)
label_10e0d8:
    if (ctx->pc == 0x10E0D8u) {
        ctx->pc = 0x10E0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0D4u;
        // 0x10e0d8: 0x26460070  addiu       $a2, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E0DCu;
        goto label_10e0dc;
    }
    ctx->pc = 0x10E0D4u;
    {
        const bool branch_taken_0x10e0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0D4u;
        // 0x10e0d8: 0x26460070  addiu       $a2, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e0d4) {
            ctx->pc = 0x10E44Cu;
            return;
        }
    }
    ctx->pc = 0x10E0DCu;
label_10e0dc:
    // 0x10e0dc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x10e0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_10e0e0:
    // 0x10e0e0: 0x82250008  lb          $a1, 0x8($s1)
    ctx->pc = 0x10e0e0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_10e0e4:
    // 0x10e0e4: 0x265000bc  addiu       $s0, $s2, 0xBC
    ctx->pc = 0x10e0e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 188));
label_10e0e8:
    // 0x10e0e8: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x10e0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_10e0ec:
    // 0x10e0ec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_10e0f0:
    // 0x10e0f0: 0x92230010  lbu         $v1, 0x10($s1)
    ctx->pc = 0x10e0f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
label_10e0f4:
    // 0x10e0f4: 0xc5800b  movn        $s0, $a2, $a1
    ctx->pc = 0x10e0f4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
label_10e0f8:
    // 0x10e0f8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_10e0fc:
    if (ctx->pc == 0x10E0FCu) {
        ctx->pc = 0x10E0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0F8u;
        // 0x10e0fc: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E100u;
        goto label_10e100;
    }
    ctx->pc = 0x10E0F8u;
    {
        const bool branch_taken_0x10e0f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0F8u;
        // 0x10e0fc: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e0f8) {
            ctx->pc = 0x10E10Cu;
            goto label_10e10c;
        }
    }
    ctx->pc = 0x10E100u;
label_10e100:
    // 0x10e100: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x10e100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_10e104:
    // 0x10e104: 0x10000002  b           . + 4 + (0x2 << 2)
label_10e108:
    if (ctx->pc == 0x10E108u) {
        ctx->pc = 0x10E108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E104u;
        // 0x10e108: 0x431018  mult        $v0, $v0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E10Cu;
        goto label_10e10c;
    }
    ctx->pc = 0x10E104u;
    {
        const bool branch_taken_0x10e104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E104u;
        // 0x10e108: 0x431018  mult        $v0, $v0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e104) {
            ctx->pc = 0x10E110u;
            goto label_10e110;
        }
    }
    ctx->pc = 0x10E10Cu;
label_10e10c:
    // 0x10e10c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10e110:
    // 0x10e110: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x10e110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_10e114:
    // 0x10e114: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x10e114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10e118:
    // 0x10e118: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x10e118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_10e11c:
    // 0x10e11c: 0x92050011  lbu         $a1, 0x11($s0)
    ctx->pc = 0x10e11cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
label_10e120:
    // 0x10e120: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10e120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_10e124:
    // 0x10e124: 0x2ca30008  sltiu       $v1, $a1, 0x8
    ctx->pc = 0x10e124u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_10e128:
    // 0x10e128: 0x106000c8  beqz        $v1, . + 4 + (0xC8 << 2)
label_10e12c:
    if (ctx->pc == 0x10E12Cu) {
        ctx->pc = 0x10E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E128u;
        // 0x10e12c: 0x829821  addu        $s3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E130u;
        goto label_10e130;
    }
    ctx->pc = 0x10E128u;
    {
        const bool branch_taken_0x10e128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E128u;
        // 0x10e12c: 0x829821  addu        $s3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e128) {
            ctx->pc = 0x10E44Cu;
            return;
        }
    }
    ctx->pc = 0x10E130u;
label_10e130:
    // 0x10e130: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x10e130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_10e134:
    // 0x10e134: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x10e134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_10e138:
    // 0x10e138: 0x24426d70  addiu       $v0, $v0, 0x6D70
    ctx->pc = 0x10e138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28016));
label_10e13c:
    // 0x10e13c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10e13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10e140:
    // 0x10e140: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10e140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_10e144:
    // 0x10e144: 0x800008  jr          $a0
label_10e148:
    if (ctx->pc == 0x10E148u) {
        ctx->pc = 0x10E14Cu;
        goto label_10e14c;
    }
    ctx->pc = 0x10E144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10E14Cu: goto label_10e14c;
            case 0x10E164u: goto label_10e164;
            case 0x10E1B8u: goto label_10e1b8;
            case 0x10E21Cu: goto label_10e21c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E144u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10E14Cu;
label_10e14c:
    // 0x10e14c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10e14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10e150:
    // 0x10e150: 0xc0436c6  jal         func_10DB18
label_10e154:
    if (ctx->pc == 0x10E154u) {
        ctx->pc = 0x10E154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E150u;
        // 0x10e154: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E158u;
        goto label_10e158;
    }
    ctx->pc = 0x10E150u;
    SET_GPR_U32(ctx, 31, 0x10E158u);
    ctx->pc = 0x10E154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E150u;
    // 0x10e154: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DB18u, 0x10E150u, 0x10E158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E158u;
label_10e158:
    // 0x10e158: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x10e158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_10e15c:
    // 0x10e15c: 0x100000aa  b           . + 4 + (0xAA << 2)
label_10e160:
    if (ctx->pc == 0x10E160u) {
        ctx->pc = 0x10E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E15Cu;
        // 0x10e160: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E164u;
        goto label_10e164;
    }
    ctx->pc = 0x10E15Cu;
    {
        const bool branch_taken_0x10e15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E15Cu;
        // 0x10e160: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e15c) {
            ctx->pc = 0x10E408u;
            goto label_10e408;
        }
    }
    ctx->pc = 0x10E164u;
label_10e164:
    // 0x10e164: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10e164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10e168:
    // 0x10e168: 0xc0436c6  jal         func_10DB18
label_10e16c:
    if (ctx->pc == 0x10E16Cu) {
        ctx->pc = 0x10E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E168u;
        // 0x10e16c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E170u;
        goto label_10e170;
    }
    ctx->pc = 0x10E168u;
    SET_GPR_U32(ctx, 31, 0x10E170u);
    ctx->pc = 0x10E16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E168u;
    // 0x10e16c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DB18u, 0x10E168u, 0x10E170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E170u;
label_10e170:
    // 0x10e170: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x10e170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_10e174:
    // 0x10e174: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10e174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_10e178:
    // 0x10e178: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x10e178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_10e17c:
    // 0x10e17c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x10e17cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_10e180:
    // 0x10e180: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x10e180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
label_10e184:
    // 0x10e184: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x10e184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_10e188:
    // 0x10e188: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x10e188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_10e18c:
    // 0x10e18c: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x10e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_10e190:
    // 0x10e190: 0xa2060011  sb          $a2, 0x11($s0)
    ctx->pc = 0x10e190u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 6));
label_10e194:
    // 0x10e194: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x10e194u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10e198:
    // 0x10e198: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x10e198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_10e19c:
    // 0x10e19c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x10e19cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10e1a0:
    // 0x10e1a0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x10e1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10e1a4:
    // 0x10e1a4: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x10e1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_10e1a8:
    // 0x10e1a8: 0xa2270011  sb          $a3, 0x11($s1)
    ctx->pc = 0x10e1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 7));
label_10e1ac:
    // 0x10e1ac: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x10e1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_10e1b0:
    // 0x10e1b0: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_10e1b4:
    if (ctx->pc == 0x10E1B4u) {
        ctx->pc = 0x10E1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1B0u;
        // 0x10e1b4: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E1B8u;
        goto label_10e1b8;
    }
    ctx->pc = 0x10E1B0u;
    {
        const bool branch_taken_0x10e1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1B0u;
        // 0x10e1b4: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e1b0) {
            ctx->pc = 0x10E44Cu;
            return;
        }
    }
    ctx->pc = 0x10E1B8u;
label_10e1b8:
    // 0x10e1b8: 0x92220010  lbu         $v0, 0x10($s1)
    ctx->pc = 0x10e1b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
label_10e1bc:
    // 0x10e1bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_10e1c0:
    if (ctx->pc == 0x10E1C0u) {
        ctx->pc = 0x10E1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1BCu;
        // 0x10e1c0: 0x8e67000c  lw          $a3, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E1C4u;
        goto label_10e1c4;
    }
    ctx->pc = 0x10E1BCu;
    {
        const bool branch_taken_0x10e1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1BCu;
        // 0x10e1c0: 0x8e67000c  lw          $a3, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e1bc) {
            ctx->pc = 0x10E1D0u;
            goto label_10e1d0;
        }
    }
    ctx->pc = 0x10E1C4u;
label_10e1c4:
    // 0x10e1c4: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x10e1c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_10e1c8:
    // 0x10e1c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_10e1cc:
    if (ctx->pc == 0x10E1CCu) {
        ctx->pc = 0x10E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1C8u;
        // 0x10e1cc: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E1D0u;
        goto label_10e1d0;
    }
    ctx->pc = 0x10E1C8u;
    {
        const bool branch_taken_0x10e1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1C8u;
        // 0x10e1cc: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e1c8) {
            ctx->pc = 0x10E1D4u;
            goto label_10e1d4;
        }
    }
    ctx->pc = 0x10E1D0u;
label_10e1d0:
    // 0x10e1d0: 0xae070020  sw          $a3, 0x20($s0)
    ctx->pc = 0x10e1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
label_10e1d4:
    // 0x10e1d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_10e1d8:
    // 0x10e1d8: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
label_10e1dc:
    if (ctx->pc == 0x10E1DCu) {
        ctx->pc = 0x10E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1D8u;
        // 0x10e1dc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E1E0u;
        goto label_10e1e0;
    }
    ctx->pc = 0x10E1D8u;
    {
        const bool branch_taken_0x10e1d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e1d8) {
            ctx->pc = 0x10E1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E1D8u;
            // 0x10e1dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E1E0u;
            goto label_10e1e0;
        }
    }
    ctx->pc = 0x10E1E0u;
label_10e1e0:
    // 0x10e1e0: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x10e1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_10e1e4:
    // 0x10e1e4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x10e1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_10e1e8:
    // 0x10e1e8: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x10e1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_10e1ec:
    // 0x10e1ec: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x10e1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_10e1f0:
    // 0x10e1f0: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x10e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_10e1f4:
    // 0x10e1f4: 0xa2030011  sb          $v1, 0x11($s0)
    ctx->pc = 0x10e1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 3));
label_10e1f8:
    // 0x10e1f8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x10e1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_10e1fc:
    // 0x10e1fc: 0x47001b  divu        $zero, $v0, $a3
    ctx->pc = 0x10e1fcu;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_10e200:
    // 0x10e200: 0x1012  mflo        $v0
    ctx->pc = 0x10e200u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_10e204:
    // 0x10e204: 0x471818  mult        $v1, $v0, $a3
    ctx->pc = 0x10e204u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_10e208:
    // 0x10e208: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x10e208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_10e20c:
    // 0x10e20c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x10e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_10e210:
    // 0x10e210: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x10e210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_10e214:
    // 0x10e214: 0x1000008d  b           . + 4 + (0x8D << 2)
label_10e218:
    if (ctx->pc == 0x10E218u) {
        ctx->pc = 0x10E218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E214u;
        // 0x10e218: 0xa2260011  sb          $a2, 0x11($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E21Cu;
        goto label_10e21c;
    }
    ctx->pc = 0x10E214u;
    {
        const bool branch_taken_0x10e214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E214u;
        // 0x10e218: 0xa2260011  sb          $a2, 0x11($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e214) {
            ctx->pc = 0x10E44Cu;
            return;
        }
    }
    ctx->pc = 0x10E21Cu;
label_10e21c:
    // 0x10e21c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10e21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10e220:
    // 0x10e220: 0xc0436c6  jal         func_10DB18
label_10e224:
    if (ctx->pc == 0x10E224u) {
        ctx->pc = 0x10E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E220u;
        // 0x10e224: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E228u;
        goto label_10e228;
    }
    ctx->pc = 0x10E220u;
    SET_GPR_U32(ctx, 31, 0x10E228u);
    ctx->pc = 0x10E224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E220u;
    // 0x10e224: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DB18u, 0x10E220u, 0x10E228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E228u;
label_10e228:
    // 0x10e228: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x10e228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_10e22c:
    // 0x10e22c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x10e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_10e230:
    // 0x10e230: 0xa2020011  sb          $v0, 0x11($s0)
    ctx->pc = 0x10e230u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 2));
label_10e234:
    // 0x10e234: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x10e234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_10e238:
    // 0x10e238: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x10e238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_10e23c:
    // 0x10e23c: 0x92230010  lbu         $v1, 0x10($s1)
    ctx->pc = 0x10e23cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
label_10e240:
    // 0x10e240: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_10e244:
    if (ctx->pc == 0x10E244u) {
        ctx->pc = 0x10E244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E240u;
        // 0x10e244: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E248u;
        goto label_10e248;
    }
    ctx->pc = 0x10E240u;
    {
        const bool branch_taken_0x10e240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E240u;
        // 0x10e244: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e240) {
            ctx->pc = 0x10E254u;
            goto label_10e254;
        }
    }
    ctx->pc = 0x10E248u;
label_10e248:
    // 0x10e248: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x10e248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_10e24c:
    // 0x10e24c: 0x1000007f  b           . + 4 + (0x7F << 2)
label_10e250:
    if (ctx->pc == 0x10E250u) {
        ctx->pc = 0x10E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E24Cu;
        // 0x10e250: 0xa2220011  sb          $v0, 0x11($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E254u;
        goto label_10e254;
    }
    ctx->pc = 0x10E24Cu;
    {
        const bool branch_taken_0x10e24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E24Cu;
        // 0x10e250: 0xa2220011  sb          $v0, 0x11($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e24c) {
            ctx->pc = 0x10E44Cu;
            return;
        }
    }
    ctx->pc = 0x10E254u;
label_10e254:
    // 0x10e254: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10e254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_10e258:
    // 0x10e258: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10e258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10e25c:
    // 0x10e25c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10e25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10e260:
    // 0x10e260: 0xa2220011  sb          $v0, 0x11($s1)
    ctx->pc = 0x10e260u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 2));
label_10e264:
    // 0x10e264: 0x10000079  b           . + 4 + (0x79 << 2)
label_10e268:
    if (ctx->pc == 0x10E268u) {
        ctx->pc = 0x10E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E264u;
        // 0x10e268: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E26Cu;
        goto label_10e26c;
    }
    ctx->pc = 0x10E264u;
    {
        const bool branch_taken_0x10e264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E264u;
        // 0x10e268: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e264) {
            ctx->pc = 0x10E44Cu;
            return;
        }
    }
    ctx->pc = 0x10E26Cu;
label_10e26c:
    // 0x10e26c: 0x82250008  lb          $a1, 0x8($s1)
    ctx->pc = 0x10e26cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_10e270:
    // 0x10e270: 0xc046dd4  jal         func_11B750
label_10e274:
    if (ctx->pc == 0x10E274u) {
        ctx->pc = 0x10E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E270u;
        // 0x10e274: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E278u;
        goto label_10e278;
    }
    ctx->pc = 0x10E270u;
    SET_GPR_U32(ctx, 31, 0x10E278u);
    ctx->pc = 0x10E274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E270u;
    // 0x10e274: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B750u, 0x10E270u, 0x10E278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E278u;
label_10e278:
    // 0x10e278: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x10e278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_10e27c:
    // 0x10e27c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10e27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10e280:
    // 0x10e280: 0x8c86bce4  lw          $a2, -0x431C($a0)
    ctx->pc = 0x10e280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950116)));
label_10e284:
    // 0x10e284: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10e284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_10e288:
    // 0x10e288: 0x84640108  lh          $a0, 0x108($v1)
    ctx->pc = 0x10e288u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 264)));
label_10e28c:
    // 0x10e28c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x10e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_10e290:
    // 0x10e290: 0x40f809  jalr        $v0
label_10e294:
    if (ctx->pc == 0x10E294u) {
        ctx->pc = 0x10E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E290u;
        // 0x10e294: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E298u;
        goto label_10e298;
    }
    ctx->pc = 0x10E290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10E298u);
        ctx->pc = 0x10E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E290u;
        // 0x10e294: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E290u, 0x10E298u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E298u;
label_10e298:
    // 0x10e298: 0x1440006d  bnez        $v0, . + 4 + (0x6D << 2)
label_10e29c:
    if (ctx->pc == 0x10E29Cu) {
        ctx->pc = 0x10E29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E298u;
        // 0x10e29c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E2A0u;
        goto label_10e2a0;
    }
    ctx->pc = 0x10E298u;
    {
        const bool branch_taken_0x10e298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E298u;
        // 0x10e29c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e298) {
            ctx->pc = 0x10E450u;
            return;
        }
    }
    ctx->pc = 0x10E2A0u;
label_10e2a0:
    // 0x10e2a0: 0x8223002c  lb          $v1, 0x2C($s1)
    ctx->pc = 0x10e2a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_10e2a4:
    // 0x10e2a4: 0x2622002c  addiu       $v0, $s1, 0x2C
    ctx->pc = 0x10e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_10e2a8:
    // 0x10e2a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10e2a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e2ac:
    // 0x10e2ac: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x10e2acu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_10e2b0:
    // 0x10e2b0: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_10e2b4:
    if (ctx->pc == 0x10E2B4u) {
        ctx->pc = 0x10E2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2B0u;
        // 0x10e2b4: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E2B8u;
        goto label_10e2b8;
    }
    ctx->pc = 0x10E2B0u;
    {
        const bool branch_taken_0x10e2b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e2b0) {
            ctx->pc = 0x10E2B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E2B0u;
            // 0x10e2b4: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E2D0u;
            goto label_10e2d0;
        }
    }
    ctx->pc = 0x10E2B8u;
label_10e2b8:
    // 0x10e2b8: 0xa3a0001f  sb          $zero, 0x1F($sp)
    ctx->pc = 0x10e2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
label_10e2bc:
    // 0x10e2bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10e2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_10e2c0:
    // 0x10e2c0: 0xc10c4de  jal         func_431378
label_10e2c4:
    if (ctx->pc == 0x10E2C4u) {
        ctx->pc = 0x10E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2C0u;
        // 0x10e2c4: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E2C8u;
        goto label_10e2c8;
    }
    ctx->pc = 0x10E2C0u;
    SET_GPR_U32(ctx, 31, 0x10E2C8u);
    ctx->pc = 0x10E2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E2C0u;
    // 0x10e2c4: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x10E2C0u, 0x10E2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E2C8u;
label_10e2c8:
    // 0x10e2c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_10e2cc:
    if (ctx->pc == 0x10E2CCu) {
        ctx->pc = 0x10E2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2C8u;
        // 0x10e2cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E2D0u;
        goto label_10e2d0;
    }
    ctx->pc = 0x10E2C8u;
    {
        const bool branch_taken_0x10e2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2C8u;
        // 0x10e2cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e2c8) {
            ctx->pc = 0x10E2D4u;
            goto label_10e2d4;
        }
    }
    ctx->pc = 0x10E2D0u;
label_10e2d0:
    // 0x10e2d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10e2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10e2d4:
    // 0x10e2d4: 0xc043754  jal         func_10DD50
label_10e2d8:
    if (ctx->pc == 0x10E2D8u) {
        ctx->pc = 0x10E2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2D4u;
        // 0x10e2d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E2DCu;
        goto label_10e2dc;
    }
    ctx->pc = 0x10E2D4u;
    SET_GPR_U32(ctx, 31, 0x10E2DCu);
    ctx->pc = 0x10E2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E2D4u;
    // 0x10e2d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DD50u, 0x10E2D4u, 0x10E2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E2DCu;
label_10e2dc:
    // 0x10e2dc: 0xc0467de  jal         func_119F78
label_10e2e0:
    if (ctx->pc == 0x10E2E0u) {
        ctx->pc = 0x10E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2DCu;
        // 0x10e2e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E2E4u;
        goto label_10e2e4;
    }
    ctx->pc = 0x10E2DCu;
    SET_GPR_U32(ctx, 31, 0x10E2E4u);
    ctx->pc = 0x10E2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E2DCu;
    // 0x10e2e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119F78u, 0x10E2DCu, 0x10E2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E2E4u;
label_10e2e4:
    // 0x10e2e4: 0x83a20000  lb          $v0, 0x0($sp)
    ctx->pc = 0x10e2e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_10e2e8:
    // 0x10e2e8: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
label_10e2ec:
    if (ctx->pc == 0x10E2ECu) {
        ctx->pc = 0x10E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2E8u;
        // 0x10e2ec: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E2F0u;
        goto label_10e2f0;
    }
    ctx->pc = 0x10E2E8u;
    {
        const bool branch_taken_0x10e2e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2E8u;
        // 0x10e2ec: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e2e8) {
            ctx->pc = 0x10E44Cu;
            return;
        }
    }
    ctx->pc = 0x10E2F0u;
label_10e2f0:
    // 0x10e2f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10e2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_10e2f4:
    // 0x10e2f4: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x10e2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_10e2f8:
    // 0x10e2f8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10e2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_10e2fc:
    // 0x10e2fc: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x10e2fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_10e300:
    // 0x10e300: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x10e300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_10e304:
    // 0x10e304: 0x40f809  jalr        $v0
label_10e308:
    if (ctx->pc == 0x10E308u) {
        ctx->pc = 0x10E308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E304u;
        // 0x10e308: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E30Cu;
        goto label_10e30c;
    }
    ctx->pc = 0x10E304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10E30Cu);
        ctx->pc = 0x10E308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E304u;
        // 0x10e308: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E304u, 0x10E30Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E30Cu;
label_10e30c:
    // 0x10e30c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10e30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10e310:
    // 0x10e310: 0x5443004f  bnel        $v0, $v1, . + 4 + (0x4F << 2)
label_10e314:
    if (ctx->pc == 0x10E314u) {
        ctx->pc = 0x10E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E310u;
        // 0x10e314: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E318u;
        goto label_10e318;
    }
    ctx->pc = 0x10E310u;
    {
        const bool branch_taken_0x10e310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10e310) {
            ctx->pc = 0x10E314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E310u;
            // 0x10e314: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E450u;
            return;
        }
    }
    ctx->pc = 0x10E318u;
label_10e318:
    // 0x10e318: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x10e318u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_10e31c:
    // 0x10e31c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10e31cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e320:
    // 0x10e320: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10e320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e324:
    // 0x10e324: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x10e324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_10e328:
    // 0x10e328: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x10e328u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_10e32c:
    // 0x10e32c: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x10e32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_10e330:
    // 0x10e330: 0x60f809  jalr        $v1
label_10e334:
    if (ctx->pc == 0x10E334u) {
        ctx->pc = 0x10E334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E330u;
        // 0x10e334: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E338u;
        goto label_10e338;
    }
    ctx->pc = 0x10E330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10E338u);
        ctx->pc = 0x10E334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E330u;
        // 0x10e334: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E330u, 0x10E338u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E338u;
label_10e338:
    // 0x10e338: 0x10000045  b           . + 4 + (0x45 << 2)
label_10e33c:
    if (ctx->pc == 0x10E33Cu) {
        ctx->pc = 0x10E33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E338u;
        // 0x10e33c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E340u;
        goto label_10e340;
    }
    ctx->pc = 0x10E338u;
    {
        const bool branch_taken_0x10e338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E338u;
        // 0x10e33c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e338) {
            ctx->pc = 0x10E450u;
            return;
        }
    }
    ctx->pc = 0x10E340u;
label_10e340:
    // 0x10e340: 0x92220010  lbu         $v0, 0x10($s1)
    ctx->pc = 0x10e340u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
label_10e344:
    // 0x10e344: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_10e348:
    if (ctx->pc == 0x10E348u) {
        ctx->pc = 0x10E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E344u;
        // 0x10e348: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E34Cu;
        goto label_10e34c;
    }
    ctx->pc = 0x10E344u;
    {
        const bool branch_taken_0x10e344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E344u;
        // 0x10e348: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e344) {
            ctx->pc = 0x10E35Cu;
            goto label_10e35c;
        }
    }
    ctx->pc = 0x10E34Cu;
label_10e34c:
    // 0x10e34c: 0xc04391a  jal         func_10E468
label_10e350:
    if (ctx->pc == 0x10E350u) {
        ctx->pc = 0x10E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E34Cu;
        // 0x10e350: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E354u;
        goto label_10e354;
    }
    ctx->pc = 0x10E34Cu;
    SET_GPR_U32(ctx, 31, 0x10E354u);
    ctx->pc = 0x10E350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E34Cu;
    // 0x10e350: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E468u, 0x10E34Cu, 0x10E354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E354u;
label_10e354:
    // 0x10e354: 0x10000005  b           . + 4 + (0x5 << 2)
label_10e358:
    if (ctx->pc == 0x10E358u) {
        ctx->pc = 0x10E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E354u;
        // 0x10e358: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E35Cu;
        goto label_10e35c;
    }
    ctx->pc = 0x10E354u;
    {
        const bool branch_taken_0x10e354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E354u;
        // 0x10e358: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e354) {
            ctx->pc = 0x10E36Cu;
            goto label_10e36c;
        }
    }
    ctx->pc = 0x10E35Cu;
label_10e35c:
    // 0x10e35c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10e35cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_10e360:
    // 0x10e360: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10e360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10e364:
    // 0x10e364: 0x0  nop
    ctx->pc = 0x10e364u;
    // NOP
label_10e368:
    // 0x10e368: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x10e368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_10e36c:
    // 0x10e36c: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x10e36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10e370:
    // 0x10e370: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10e370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_10e374:
    // 0x10e374: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10e374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10e378:
    // 0x10e378: 0x0  nop
    ctx->pc = 0x10e378u;
    // NOP
label_10e37c:
    // 0x10e37c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x10e37cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10e380:
    // 0x10e380: 0x0  nop
    ctx->pc = 0x10e380u;
    // NOP
label_10e384:
    // 0x10e384: 0x45000031  bc1f        . + 4 + (0x31 << 2)
label_10e388:
    if (ctx->pc == 0x10E388u) {
        ctx->pc = 0x10E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E384u;
        // 0x10e388: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E38Cu;
        goto label_10e38c;
    }
    ctx->pc = 0x10E384u;
    {
        const bool branch_taken_0x10e384 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E384u;
        // 0x10e388: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e384) {
            ctx->pc = 0x10E44Cu;
            return;
        }
    }
    ctx->pc = 0x10E38Cu;
label_10e38c:
    // 0x10e38c: 0x1000002f  b           . + 4 + (0x2F << 2)
label_10e390:
    if (ctx->pc == 0x10E390u) {
        ctx->pc = 0x10E390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E38Cu;
        // 0x10e390: 0xa2220011  sb          $v0, 0x11($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E394u;
        goto label_10e394;
    }
    ctx->pc = 0x10E38Cu;
    {
        const bool branch_taken_0x10e38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E38Cu;
        // 0x10e390: 0xa2220011  sb          $v0, 0x11($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e38c) {
            ctx->pc = 0x10E44Cu;
            return;
        }
    }
    ctx->pc = 0x10E394u;
label_10e394:
    // 0x10e394: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10e394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_10e398:
    // 0x10e398: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x10e398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_10e39c:
    // 0x10e39c: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x10e39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_10e3a0:
    // 0x10e3a0: 0x2463ffdf  addiu       $v1, $v1, -0x21
    ctx->pc = 0x10e3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967263));
label_10e3a4:
    // 0x10e3a4: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x10e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_10e3a8:
    // 0x10e3a8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x10e3a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_10e3ac:
    // 0x10e3ac: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_10e3b0:
    if (ctx->pc == 0x10E3B0u) {
        ctx->pc = 0x10E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3ACu;
        // 0x10e3b0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E3B4u;
        goto label_10e3b4;
    }
    ctx->pc = 0x10E3ACu;
    {
        const bool branch_taken_0x10e3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3ACu;
        // 0x10e3b0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e3ac) {
            ctx->pc = 0x10E450u;
            return;
        }
    }
    ctx->pc = 0x10E3B4u;
label_10e3b4:
    // 0x10e3b4: 0x82230008  lb          $v1, 0x8($s1)
    ctx->pc = 0x10e3b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_10e3b8:
    // 0x10e3b8: 0x26420070  addiu       $v0, $s2, 0x70
    ctx->pc = 0x10e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_10e3bc:
    // 0x10e3bc: 0x265000bc  addiu       $s0, $s2, 0xBC
    ctx->pc = 0x10e3bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 188));
label_10e3c0:
    // 0x10e3c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10e3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10e3c4:
    // 0x10e3c4: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x10e3c4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_10e3c8:
    // 0x10e3c8: 0xc0439e6  jal         func_10E798
label_10e3cc:
    if (ctx->pc == 0x10E3CCu) {
        ctx->pc = 0x10E3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3C8u;
        // 0x10e3cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E3D0u;
        goto label_10e3d0;
    }
    ctx->pc = 0x10E3C8u;
    SET_GPR_U32(ctx, 31, 0x10E3D0u);
    ctx->pc = 0x10E3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E3C8u;
    // 0x10e3cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E798u, 0x10E3C8u, 0x10E3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E3D0u;
label_10e3d0:
    // 0x10e3d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_10e3d4:
    if (ctx->pc == 0x10E3D4u) {
        ctx->pc = 0x10E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3D0u;
        // 0x10e3d4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E3D8u;
        goto label_10e3d8;
    }
    ctx->pc = 0x10E3D0u;
    {
        const bool branch_taken_0x10e3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3D0u;
        // 0x10e3d4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e3d0) {
            ctx->pc = 0x10E400u;
            goto label_10e400;
        }
    }
    ctx->pc = 0x10E3D8u;
label_10e3d8:
    // 0x10e3d8: 0x92030011  lbu         $v1, 0x11($s0)
    ctx->pc = 0x10e3d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
label_10e3dc:
    // 0x10e3dc: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_10e3e0:
    if (ctx->pc == 0x10E3E0u) {
        ctx->pc = 0x10E3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3DCu;
        // 0x10e3e0: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E3E4u;
        goto label_10e3e4;
    }
    ctx->pc = 0x10E3DCu;
    {
        const bool branch_taken_0x10e3dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10e3dc) {
            ctx->pc = 0x10E3E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E3DCu;
            // 0x10e3e0: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E404u;
            goto label_10e404;
        }
    }
    ctx->pc = 0x10E3E4u;
label_10e3e4:
    // 0x10e3e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10e3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10e3e8:
    // 0x10e3e8: 0xc0436c6  jal         func_10DB18
label_10e3ec:
    if (ctx->pc == 0x10E3ECu) {
        ctx->pc = 0x10E3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3E8u;
        // 0x10e3ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E3F0u;
        goto label_10e3f0;
    }
    ctx->pc = 0x10E3E8u;
    SET_GPR_U32(ctx, 31, 0x10E3F0u);
    ctx->pc = 0x10E3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E3E8u;
    // 0x10e3ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DB18u, 0x10E3E8u, 0x10E3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E3F0u;
label_10e3f0:
    // 0x10e3f0: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x10e3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_10e3f4:
    // 0x10e3f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x10e3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_10e3f8:
    // 0x10e3f8: 0xa2020011  sb          $v0, 0x11($s0)
    ctx->pc = 0x10e3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 2));
label_10e3fc:
    // 0x10e3fc: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x10e3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_10e400:
    // 0x10e400: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x10e400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_10e404:
    // 0x10e404: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x10e404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_10e408:
    // 0x10e408: 0xa2220011  sb          $v0, 0x11($s1)
    ctx->pc = 0x10e408u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 2));
label_10e40c:
    // 0x10e40c: 0x1000000f  b           . + 4 + (0xF << 2)
label_10e410:
    if (ctx->pc == 0x10E410u) {
        ctx->pc = 0x10E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E40Cu;
        // 0x10e410: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E414u;
        goto label_10e414;
    }
    ctx->pc = 0x10E40Cu;
    {
        const bool branch_taken_0x10e40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E40Cu;
        // 0x10e410: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e40c) {
            ctx->pc = 0x10E44Cu;
            return;
        }
    }
    ctx->pc = 0x10E414u;
label_10e414:
    // 0x10e414: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10e414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10e418:
    // 0x10e418: 0xc04394c  jal         func_10E530
label_10e41c:
    if (ctx->pc == 0x10E41Cu) {
        ctx->pc = 0x10E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E418u;
        // 0x10e41c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E420u;
        goto label_10e420;
    }
    ctx->pc = 0x10E418u;
    SET_GPR_U32(ctx, 31, 0x10E420u);
    ctx->pc = 0x10E41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E418u;
    // 0x10e41c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E530u, 0x10E418u, 0x10E420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E420u;
label_10e420:
    // 0x10e420: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x10e420u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10e424:
    // 0x10e424: 0x0  nop
    ctx->pc = 0x10e424u;
    // NOP
label_10e428:
    // 0x10e428: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x10e428u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10e42c:
    // 0x10e42c: 0x0  nop
    ctx->pc = 0x10e42cu;
    // NOP
label_10e430:
    // 0x10e430: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_10e434:
    if (ctx->pc == 0x10E434u) {
        ctx->pc = 0x10E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E430u;
        // 0x10e434: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E438u;
        goto label_10e438;
    }
    ctx->pc = 0x10E430u;
    {
        const bool branch_taken_0x10e430 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E430u;
        // 0x10e434: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e430) {
            ctx->pc = 0x10E44Cu;
            return;
        }
    }
    ctx->pc = 0x10E438u;
label_10e438:
    // 0x10e438: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10e438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10e43c:
    // 0x10e43c: 0xc043754  jal         func_10DD50
label_10e440:
    if (ctx->pc == 0x10E440u) {
        ctx->pc = 0x10E440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E43Cu;
        // 0x10e440: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E444u;
        goto label_10e444;
    }
    ctx->pc = 0x10E43Cu;
    SET_GPR_U32(ctx, 31, 0x10E444u);
    ctx->pc = 0x10E440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E43Cu;
    // 0x10e440: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DD50u, 0x10E43Cu, 0x10E444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E444u;
label_10e444:
    // 0x10e444: 0xc0467de  jal         func_119F78
label_10e448:
    if (ctx->pc == 0x10E448u) {
        ctx->pc = 0x10E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E444u;
        // 0x10e448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E44Cu;
        goto label_fallthrough_0x10e444;
    }
    ctx->pc = 0x10E444u;
    SET_GPR_U32(ctx, 31, 0x10E44Cu);
    ctx->pc = 0x10E448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E444u;
    // 0x10e448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119F78u, 0x10E444u, 0x10E44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x10e444:
    ctx->pc = 0x10E44Cu;
}
