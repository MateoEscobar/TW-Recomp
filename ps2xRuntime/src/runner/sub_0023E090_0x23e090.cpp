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

// Function: sub_0023E090
// Address: 0x23e090 - 0x23e408
void sub_0023E090_0x23e090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E090_0x23e090");
#endif

    switch (ctx->pc) {
        case 0x23e090u: goto label_23e090;
        case 0x23e094u: goto label_23e094;
        case 0x23e098u: goto label_23e098;
        case 0x23e09cu: goto label_23e09c;
        case 0x23e0a0u: goto label_23e0a0;
        case 0x23e0a4u: goto label_23e0a4;
        case 0x23e0a8u: goto label_23e0a8;
        case 0x23e0acu: goto label_23e0ac;
        case 0x23e0b0u: goto label_23e0b0;
        case 0x23e0b4u: goto label_23e0b4;
        case 0x23e0b8u: goto label_23e0b8;
        case 0x23e0bcu: goto label_23e0bc;
        case 0x23e0c0u: goto label_23e0c0;
        case 0x23e0c4u: goto label_23e0c4;
        case 0x23e0c8u: goto label_23e0c8;
        case 0x23e0ccu: goto label_23e0cc;
        case 0x23e0d0u: goto label_23e0d0;
        case 0x23e0d4u: goto label_23e0d4;
        case 0x23e0d8u: goto label_23e0d8;
        case 0x23e0dcu: goto label_23e0dc;
        case 0x23e0e0u: goto label_23e0e0;
        case 0x23e0e4u: goto label_23e0e4;
        case 0x23e0e8u: goto label_23e0e8;
        case 0x23e0ecu: goto label_23e0ec;
        case 0x23e0f0u: goto label_23e0f0;
        case 0x23e0f4u: goto label_23e0f4;
        case 0x23e0f8u: goto label_23e0f8;
        case 0x23e0fcu: goto label_23e0fc;
        case 0x23e100u: goto label_23e100;
        case 0x23e104u: goto label_23e104;
        case 0x23e108u: goto label_23e108;
        case 0x23e10cu: goto label_23e10c;
        case 0x23e110u: goto label_23e110;
        case 0x23e114u: goto label_23e114;
        case 0x23e118u: goto label_23e118;
        case 0x23e11cu: goto label_23e11c;
        case 0x23e120u: goto label_23e120;
        case 0x23e124u: goto label_23e124;
        case 0x23e128u: goto label_23e128;
        case 0x23e12cu: goto label_23e12c;
        case 0x23e130u: goto label_23e130;
        case 0x23e134u: goto label_23e134;
        case 0x23e138u: goto label_23e138;
        case 0x23e13cu: goto label_23e13c;
        case 0x23e140u: goto label_23e140;
        case 0x23e144u: goto label_23e144;
        case 0x23e148u: goto label_23e148;
        case 0x23e14cu: goto label_23e14c;
        case 0x23e150u: goto label_23e150;
        case 0x23e154u: goto label_23e154;
        case 0x23e158u: goto label_23e158;
        case 0x23e15cu: goto label_23e15c;
        case 0x23e160u: goto label_23e160;
        case 0x23e164u: goto label_23e164;
        case 0x23e168u: goto label_23e168;
        case 0x23e16cu: goto label_23e16c;
        case 0x23e170u: goto label_23e170;
        case 0x23e174u: goto label_23e174;
        case 0x23e178u: goto label_23e178;
        case 0x23e17cu: goto label_23e17c;
        case 0x23e180u: goto label_23e180;
        case 0x23e184u: goto label_23e184;
        case 0x23e188u: goto label_23e188;
        case 0x23e18cu: goto label_23e18c;
        case 0x23e190u: goto label_23e190;
        case 0x23e194u: goto label_23e194;
        case 0x23e198u: goto label_23e198;
        case 0x23e19cu: goto label_23e19c;
        case 0x23e1a0u: goto label_23e1a0;
        case 0x23e1a4u: goto label_23e1a4;
        case 0x23e1a8u: goto label_23e1a8;
        case 0x23e1acu: goto label_23e1ac;
        case 0x23e1b0u: goto label_23e1b0;
        case 0x23e1b4u: goto label_23e1b4;
        case 0x23e1b8u: goto label_23e1b8;
        case 0x23e1bcu: goto label_23e1bc;
        case 0x23e1c0u: goto label_23e1c0;
        case 0x23e1c4u: goto label_23e1c4;
        case 0x23e1c8u: goto label_23e1c8;
        case 0x23e1ccu: goto label_23e1cc;
        case 0x23e1d0u: goto label_23e1d0;
        case 0x23e1d4u: goto label_23e1d4;
        case 0x23e1d8u: goto label_23e1d8;
        case 0x23e1dcu: goto label_23e1dc;
        case 0x23e1e0u: goto label_23e1e0;
        case 0x23e1e4u: goto label_23e1e4;
        case 0x23e1e8u: goto label_23e1e8;
        case 0x23e1ecu: goto label_23e1ec;
        case 0x23e1f0u: goto label_23e1f0;
        case 0x23e1f4u: goto label_23e1f4;
        case 0x23e1f8u: goto label_23e1f8;
        case 0x23e1fcu: goto label_23e1fc;
        case 0x23e200u: goto label_23e200;
        case 0x23e204u: goto label_23e204;
        case 0x23e208u: goto label_23e208;
        case 0x23e20cu: goto label_23e20c;
        case 0x23e210u: goto label_23e210;
        case 0x23e214u: goto label_23e214;
        case 0x23e218u: goto label_23e218;
        case 0x23e21cu: goto label_23e21c;
        case 0x23e220u: goto label_23e220;
        case 0x23e224u: goto label_23e224;
        case 0x23e228u: goto label_23e228;
        case 0x23e22cu: goto label_23e22c;
        case 0x23e230u: goto label_23e230;
        case 0x23e234u: goto label_23e234;
        case 0x23e238u: goto label_23e238;
        case 0x23e23cu: goto label_23e23c;
        case 0x23e240u: goto label_23e240;
        case 0x23e244u: goto label_23e244;
        case 0x23e248u: goto label_23e248;
        case 0x23e24cu: goto label_23e24c;
        case 0x23e250u: goto label_23e250;
        case 0x23e254u: goto label_23e254;
        case 0x23e258u: goto label_23e258;
        case 0x23e25cu: goto label_23e25c;
        case 0x23e260u: goto label_23e260;
        case 0x23e264u: goto label_23e264;
        case 0x23e268u: goto label_23e268;
        case 0x23e26cu: goto label_23e26c;
        case 0x23e270u: goto label_23e270;
        case 0x23e274u: goto label_23e274;
        case 0x23e278u: goto label_23e278;
        case 0x23e27cu: goto label_23e27c;
        case 0x23e280u: goto label_23e280;
        case 0x23e284u: goto label_23e284;
        case 0x23e288u: goto label_23e288;
        case 0x23e28cu: goto label_23e28c;
        case 0x23e290u: goto label_23e290;
        case 0x23e294u: goto label_23e294;
        case 0x23e298u: goto label_23e298;
        case 0x23e29cu: goto label_23e29c;
        case 0x23e2a0u: goto label_23e2a0;
        case 0x23e2a4u: goto label_23e2a4;
        case 0x23e2a8u: goto label_23e2a8;
        case 0x23e2acu: goto label_23e2ac;
        case 0x23e2b0u: goto label_23e2b0;
        case 0x23e2b4u: goto label_23e2b4;
        case 0x23e2b8u: goto label_23e2b8;
        case 0x23e2bcu: goto label_23e2bc;
        case 0x23e2c0u: goto label_23e2c0;
        case 0x23e2c4u: goto label_23e2c4;
        case 0x23e2c8u: goto label_23e2c8;
        case 0x23e2ccu: goto label_23e2cc;
        case 0x23e2d0u: goto label_23e2d0;
        case 0x23e2d4u: goto label_23e2d4;
        case 0x23e2d8u: goto label_23e2d8;
        case 0x23e2dcu: goto label_23e2dc;
        case 0x23e2e0u: goto label_23e2e0;
        case 0x23e2e4u: goto label_23e2e4;
        case 0x23e2e8u: goto label_23e2e8;
        case 0x23e2ecu: goto label_23e2ec;
        case 0x23e2f0u: goto label_23e2f0;
        case 0x23e2f4u: goto label_23e2f4;
        case 0x23e2f8u: goto label_23e2f8;
        case 0x23e2fcu: goto label_23e2fc;
        case 0x23e300u: goto label_23e300;
        case 0x23e304u: goto label_23e304;
        case 0x23e308u: goto label_23e308;
        case 0x23e30cu: goto label_23e30c;
        case 0x23e310u: goto label_23e310;
        case 0x23e314u: goto label_23e314;
        case 0x23e318u: goto label_23e318;
        case 0x23e31cu: goto label_23e31c;
        case 0x23e320u: goto label_23e320;
        case 0x23e324u: goto label_23e324;
        case 0x23e328u: goto label_23e328;
        case 0x23e32cu: goto label_23e32c;
        case 0x23e330u: goto label_23e330;
        case 0x23e334u: goto label_23e334;
        case 0x23e338u: goto label_23e338;
        case 0x23e33cu: goto label_23e33c;
        case 0x23e340u: goto label_23e340;
        case 0x23e344u: goto label_23e344;
        case 0x23e348u: goto label_23e348;
        case 0x23e34cu: goto label_23e34c;
        case 0x23e350u: goto label_23e350;
        case 0x23e354u: goto label_23e354;
        case 0x23e358u: goto label_23e358;
        case 0x23e35cu: goto label_23e35c;
        case 0x23e360u: goto label_23e360;
        case 0x23e364u: goto label_23e364;
        case 0x23e368u: goto label_23e368;
        case 0x23e36cu: goto label_23e36c;
        case 0x23e370u: goto label_23e370;
        case 0x23e374u: goto label_23e374;
        case 0x23e378u: goto label_23e378;
        case 0x23e37cu: goto label_23e37c;
        case 0x23e380u: goto label_23e380;
        case 0x23e384u: goto label_23e384;
        case 0x23e388u: goto label_23e388;
        case 0x23e38cu: goto label_23e38c;
        case 0x23e390u: goto label_23e390;
        case 0x23e394u: goto label_23e394;
        case 0x23e398u: goto label_23e398;
        case 0x23e39cu: goto label_23e39c;
        case 0x23e3a0u: goto label_23e3a0;
        case 0x23e3a4u: goto label_23e3a4;
        case 0x23e3a8u: goto label_23e3a8;
        case 0x23e3acu: goto label_23e3ac;
        case 0x23e3b0u: goto label_23e3b0;
        case 0x23e3b4u: goto label_23e3b4;
        case 0x23e3b8u: goto label_23e3b8;
        case 0x23e3bcu: goto label_23e3bc;
        case 0x23e3c0u: goto label_23e3c0;
        case 0x23e3c4u: goto label_23e3c4;
        case 0x23e3c8u: goto label_23e3c8;
        case 0x23e3ccu: goto label_23e3cc;
        case 0x23e3d0u: goto label_23e3d0;
        case 0x23e3d4u: goto label_23e3d4;
        case 0x23e3d8u: goto label_23e3d8;
        case 0x23e3dcu: goto label_23e3dc;
        case 0x23e3e0u: goto label_23e3e0;
        case 0x23e3e4u: goto label_23e3e4;
        case 0x23e3e8u: goto label_23e3e8;
        case 0x23e3ecu: goto label_23e3ec;
        case 0x23e3f0u: goto label_23e3f0;
        case 0x23e3f4u: goto label_23e3f4;
        case 0x23e3f8u: goto label_23e3f8;
        case 0x23e3fcu: goto label_23e3fc;
        case 0x23e400u: goto label_23e400;
        case 0x23e404u: goto label_23e404;
        default: break;
    }

    ctx->pc = 0x23e090u;

label_23e090:
    // 0x23e090: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23e090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_23e094:
    // 0x23e094: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23e098:
    // 0x23e098: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x23e098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_23e09c:
    // 0x23e09c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x23e09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_23e0a0:
    // 0x23e0a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23e0a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23e0a4:
    // 0x23e0a4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x23e0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_23e0a8:
    // 0x23e0a8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x23e0a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23e0ac:
    // 0x23e0ac: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x23e0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_23e0b0:
    // 0x23e0b0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x23e0b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23e0b4:
    // 0x23e0b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23e0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23e0b8:
    // 0x23e0b8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x23e0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_23e0bc:
    // 0x23e0bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23e0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23e0c0:
    // 0x23e0c0: 0xa22003be  sb          $zero, 0x3BE($s1)
    ctx->pc = 0x23e0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 958), (uint8_t)GPR_U32(ctx, 0));
label_23e0c4:
    // 0x23e0c4: 0xc089a80  jal         func_226A00
label_23e0c8:
    if (ctx->pc == 0x23E0C8u) {
        ctx->pc = 0x23E0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0C4u;
        // 0x23e0c8: 0xa22203bd  sb          $v0, 0x3BD($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 957), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E0CCu;
        goto label_23e0cc;
    }
    ctx->pc = 0x23E0C4u;
    SET_GPR_U32(ctx, 31, 0x23E0CCu);
    ctx->pc = 0x23E0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E0C4u;
    // 0x23e0c8: 0xa22203bd  sb          $v0, 0x3BD($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 957), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226A00u, 0x23E0C4u, 0x23E0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E0CCu;
label_23e0cc:
    // 0x23e0cc: 0x8e2201a0  lw          $v0, 0x1A0($s1)
    ctx->pc = 0x23e0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_23e0d0:
    // 0x23e0d0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_23e0d4:
    if (ctx->pc == 0x23E0D4u) {
        ctx->pc = 0x23E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0D0u;
        // 0x23e0d4: 0xa440003c  sh          $zero, 0x3C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E0D8u;
        goto label_23e0d8;
    }
    ctx->pc = 0x23E0D0u;
    {
        const bool branch_taken_0x23e0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e0d0) {
            ctx->pc = 0x23E0D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E0D0u;
            // 0x23e0d4: 0xa440003c  sh          $zero, 0x3C($v0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E0D8u;
            goto label_23e0d8;
        }
    }
    ctx->pc = 0x23E0D8u;
label_23e0d8:
    // 0x23e0d8: 0xc089fac  jal         func_227EB0
label_23e0dc:
    if (ctx->pc == 0x23E0DCu) {
        ctx->pc = 0x23E0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0D8u;
        // 0x23e0dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E0E0u;
        goto label_23e0e0;
    }
    ctx->pc = 0x23E0D8u;
    SET_GPR_U32(ctx, 31, 0x23E0E0u);
    ctx->pc = 0x23E0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E0D8u;
    // 0x23e0dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x23E0D8u, 0x23E0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E0E0u;
label_23e0e0:
    // 0x23e0e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23e0e4:
    if (ctx->pc == 0x23E0E4u) {
        ctx->pc = 0x23E0E8u;
        goto label_23e0e8;
    }
    ctx->pc = 0x23E0E0u;
    {
        const bool branch_taken_0x23e0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e0e0) {
            ctx->pc = 0x23E0F8u;
            goto label_23e0f8;
        }
    }
    ctx->pc = 0x23E0E8u;
label_23e0e8:
    // 0x23e0e8: 0xc089f86  jal         func_227E18
label_23e0ec:
    if (ctx->pc == 0x23E0ECu) {
        ctx->pc = 0x23E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0E8u;
        // 0x23e0ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E0F0u;
        goto label_23e0f0;
    }
    ctx->pc = 0x23E0E8u;
    SET_GPR_U32(ctx, 31, 0x23E0F0u);
    ctx->pc = 0x23E0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E0E8u;
    // 0x23e0ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x23E0E8u, 0x23E0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E0F0u;
label_23e0f0:
    // 0x23e0f0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_23e0f4:
    if (ctx->pc == 0x23E0F4u) {
        ctx->pc = 0x23E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0F0u;
        // 0x23e0f4: 0x8e2601a0  lw          $a2, 0x1A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E0F8u;
        goto label_23e0f8;
    }
    ctx->pc = 0x23E0F0u;
    {
        const bool branch_taken_0x23e0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e0f0) {
            ctx->pc = 0x23E0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E0F0u;
            // 0x23e0f4: 0x8e2601a0  lw          $a2, 0x1A0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E118u;
            goto label_23e118;
        }
    }
    ctx->pc = 0x23E0F8u;
label_23e0f8:
    // 0x23e0f8: 0x16a00068  bnez        $s5, . + 4 + (0x68 << 2)
label_23e0fc:
    if (ctx->pc == 0x23E0FCu) {
        ctx->pc = 0x23E0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0F8u;
        // 0x23e0fc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E100u;
        goto label_23e100;
    }
    ctx->pc = 0x23E0F8u;
    {
        const bool branch_taken_0x23e0f8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0F8u;
        // 0x23e0fc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0f8) {
            ctx->pc = 0x23E29Cu;
            goto label_23e29c;
        }
    }
    ctx->pc = 0x23E100u;
label_23e100:
    // 0x23e100: 0x3405e000  ori         $a1, $zero, 0xE000
    ctx->pc = 0x23e100u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
label_23e104:
    // 0x23e104: 0x52d78  dsll        $a1, $a1, 21
    ctx->pc = 0x23e104u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 21);
label_23e108:
    // 0x23e108: 0xc089988  jal         func_226620
label_23e10c:
    if (ctx->pc == 0x23E10Cu) {
        ctx->pc = 0x23E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E108u;
        // 0x23e10c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E110u;
        goto label_23e110;
    }
    ctx->pc = 0x23E108u;
    SET_GPR_U32(ctx, 31, 0x23E110u);
    ctx->pc = 0x23E10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E108u;
    // 0x23e10c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x23E108u, 0x23E110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E110u;
label_23e110:
    // 0x23e110: 0x10000062  b           . + 4 + (0x62 << 2)
label_23e114:
    if (ctx->pc == 0x23E114u) {
        ctx->pc = 0x23E114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E110u;
        // 0x23e114: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E118u;
        goto label_23e118;
    }
    ctx->pc = 0x23E110u;
    {
        const bool branch_taken_0x23e110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E110u;
        // 0x23e114: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e110) {
            ctx->pc = 0x23E29Cu;
            goto label_23e29c;
        }
    }
    ctx->pc = 0x23E118u;
label_23e118:
    // 0x23e118: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_23e11c:
    if (ctx->pc == 0x23E11Cu) {
        ctx->pc = 0x23E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E118u;
        // 0x23e11c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E120u;
        goto label_23e120;
    }
    ctx->pc = 0x23E118u;
    {
        const bool branch_taken_0x23e118 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E118u;
        // 0x23e11c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e118) {
            ctx->pc = 0x23E134u;
            goto label_23e134;
        }
    }
    ctx->pc = 0x23E120u;
label_23e120:
    // 0x23e120: 0x8cc20074  lw          $v0, 0x74($a2)
    ctx->pc = 0x23e120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_23e124:
    // 0x23e124: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x23e124u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_23e128:
    // 0x23e128: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x23e128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_23e12c:
    // 0x23e12c: 0x60f809  jalr        $v1
label_23e130:
    if (ctx->pc == 0x23E130u) {
        ctx->pc = 0x23E130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E12Cu;
        // 0x23e130: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E134u;
        goto label_23e134;
    }
    ctx->pc = 0x23E12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23E134u);
        ctx->pc = 0x23E130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E12Cu;
        // 0x23e130: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E12Cu, 0x23E134u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23E134u;
label_23e134:
    // 0x23e134: 0x12000058  beqz        $s0, . + 4 + (0x58 << 2)
label_23e138:
    if (ctx->pc == 0x23E138u) {
        ctx->pc = 0x23E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E134u;
        // 0x23e138: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E13Cu;
        goto label_23e13c;
    }
    ctx->pc = 0x23E134u;
    {
        const bool branch_taken_0x23e134 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E134u;
        // 0x23e138: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e134) {
            ctx->pc = 0x23E298u;
            goto label_23e298;
        }
    }
    ctx->pc = 0x23E13Cu;
label_23e13c:
    // 0x23e13c: 0xc0e87c0  jal         func_3A1F00
label_23e140:
    if (ctx->pc == 0x23E140u) {
        ctx->pc = 0x23E140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E13Cu;
        // 0x23e140: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E144u;
        goto label_23e144;
    }
    ctx->pc = 0x23E13Cu;
    SET_GPR_U32(ctx, 31, 0x23E144u);
    ctx->pc = 0x23E140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E13Cu;
    // 0x23e140: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x23E13Cu, 0x23E144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E144u;
label_23e144:
    // 0x23e144: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x23e144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23e148:
    // 0x23e148: 0xc6600674  lwc1        $f0, 0x674($s3)
    ctx->pc = 0x23e148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23e14c:
    // 0x23e14c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23e14cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23e150:
    // 0x23e150: 0x0  nop
    ctx->pc = 0x23e150u;
    // NOP
label_23e154:
    // 0x23e154: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
label_23e158:
    if (ctx->pc == 0x23E158u) {
        ctx->pc = 0x23E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E154u;
        // 0x23e158: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E15Cu;
        goto label_23e15c;
    }
    ctx->pc = 0x23E154u;
    {
        const bool branch_taken_0x23e154 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E154u;
        // 0x23e158: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e154) {
            ctx->pc = 0x23E214u;
            goto label_23e214;
        }
    }
    ctx->pc = 0x23E15Cu;
label_23e15c:
    // 0x23e15c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23e15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23e160:
    // 0x23e160: 0xc0e87c0  jal         func_3A1F00
label_23e164:
    if (ctx->pc == 0x23E164u) {
        ctx->pc = 0x23E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E160u;
        // 0x23e164: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E168u;
        goto label_23e168;
    }
    ctx->pc = 0x23E160u;
    SET_GPR_U32(ctx, 31, 0x23E168u);
    ctx->pc = 0x23E164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E160u;
    // 0x23e164: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x23E160u, 0x23E168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E168u;
label_23e168:
    // 0x23e168: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x23e168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23e16c:
    // 0x23e16c: 0xc6400678  lwc1        $f0, 0x678($s2)
    ctx->pc = 0x23e16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23e170:
    // 0x23e170: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23e170u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23e174:
    // 0x23e174: 0x0  nop
    ctx->pc = 0x23e174u;
    // NOP
label_23e178:
    // 0x23e178: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_23e17c:
    if (ctx->pc == 0x23E17Cu) {
        ctx->pc = 0x23E17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E178u;
        // 0x23e17c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E180u;
        goto label_23e180;
    }
    ctx->pc = 0x23E178u;
    {
        const bool branch_taken_0x23e178 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23E17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E178u;
        // 0x23e17c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e178) {
            ctx->pc = 0x23E1A8u;
            goto label_23e1a8;
        }
    }
    ctx->pc = 0x23E180u;
label_23e180:
    // 0x23e180: 0xc088b98  jal         func_222E60
label_23e184:
    if (ctx->pc == 0x23E184u) {
        ctx->pc = 0x23E184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E180u;
        // 0x23e184: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E188u;
        goto label_23e188;
    }
    ctx->pc = 0x23E180u;
    SET_GPR_U32(ctx, 31, 0x23E188u);
    ctx->pc = 0x23E184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E180u;
    // 0x23e184: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E60u, 0x23E180u, 0x23E188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E188u;
label_23e188:
    // 0x23e188: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23e188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e18c:
    // 0x23e18c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23e18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23e190:
    // 0x23e190: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23e190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23e194:
    // 0x23e194: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23e194u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23e198:
    // 0x23e198: 0xc0992f6  jal         func_264BD8
label_23e19c:
    if (ctx->pc == 0x23E19Cu) {
        ctx->pc = 0x23E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E198u;
        // 0x23e19c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E1A0u;
        goto label_23e1a0;
    }
    ctx->pc = 0x23E198u;
    SET_GPR_U32(ctx, 31, 0x23E1A0u);
    ctx->pc = 0x23E19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E198u;
    // 0x23e19c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264BD8u, 0x23E198u, 0x23E1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E1A0u;
label_23e1a0:
    // 0x23e1a0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_23e1a4:
    if (ctx->pc == 0x23E1A4u) {
        ctx->pc = 0x23E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1A0u;
        // 0x23e1a4: 0x822201b0  lb          $v0, 0x1B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E1A8u;
        goto label_23e1a8;
    }
    ctx->pc = 0x23E1A0u;
    {
        const bool branch_taken_0x23e1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1A0u;
        // 0x23e1a4: 0x822201b0  lb          $v0, 0x1B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e1a0) {
            ctx->pc = 0x23E218u;
            goto label_23e218;
        }
    }
    ctx->pc = 0x23E1A8u;
label_23e1a8:
    // 0x23e1a8: 0xc088b98  jal         func_222E60
label_23e1ac:
    if (ctx->pc == 0x23E1ACu) {
        ctx->pc = 0x23E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1A8u;
        // 0x23e1ac: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E1B0u;
        goto label_23e1b0;
    }
    ctx->pc = 0x23E1A8u;
    SET_GPR_U32(ctx, 31, 0x23E1B0u);
    ctx->pc = 0x23E1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E1A8u;
    // 0x23e1ac: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E60u, 0x23E1A8u, 0x23E1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E1B0u;
label_23e1b0:
    // 0x23e1b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23e1b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e1b4:
    // 0x23e1b4: 0xc0e87c0  jal         func_3A1F00
label_23e1b8:
    if (ctx->pc == 0x23E1B8u) {
        ctx->pc = 0x23E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1B4u;
        // 0x23e1b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E1BCu;
        goto label_23e1bc;
    }
    ctx->pc = 0x23E1B4u;
    SET_GPR_U32(ctx, 31, 0x23E1BCu);
    ctx->pc = 0x23E1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E1B4u;
    // 0x23e1b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x23E1B4u, 0x23E1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E1BCu;
label_23e1bc:
    // 0x23e1bc: 0xc6630674  lwc1        $f3, 0x674($s3)
    ctx->pc = 0x23e1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_23e1c0:
    // 0x23e1c0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x23e1c0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23e1c4:
    // 0x23e1c4: 0x0  nop
    ctx->pc = 0x23e1c4u;
    // NOP
label_23e1c8:
    // 0x23e1c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23e1c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_23e1cc:
    // 0x23e1cc: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x23e1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23e1d0:
    // 0x23e1d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23e1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23e1d4:
    // 0x23e1d4: 0xc6410678  lwc1        $f1, 0x678($s2)
    ctx->pc = 0x23e1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23e1d8:
    // 0x23e1d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23e1d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23e1dc:
    // 0x23e1dc: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x23e1dcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_23e1e0:
    // 0x23e1e0: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x23e1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_23e1e4:
    // 0x23e1e4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x23e1e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_23e1e8:
    // 0x23e1e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23e1e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23e1ec:
    // 0x23e1ec: 0x84430118  lh          $v1, 0x118($v0)
    ctx->pc = 0x23e1ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
label_23e1f0:
    // 0x23e1f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23e1f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23e1f4:
    // 0x23e1f4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x23e1f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_23e1f8:
    // 0x23e1f8: 0x0  nop
    ctx->pc = 0x23e1f8u;
    // NOP
label_23e1fc:
    // 0x23e1fc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x23e1fcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_23e200:
    // 0x23e200: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23e200u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_23e204:
    // 0x23e204: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x23e204u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_23e208:
    // 0x23e208: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x23e208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_23e20c:
    // 0x23e20c: 0xc0992f6  jal         func_264BD8
label_23e210:
    if (ctx->pc == 0x23E210u) {
        ctx->pc = 0x23E210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E20Cu;
        // 0x23e210: 0x62280a  movz        $a1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E214u;
        goto label_23e214;
    }
    ctx->pc = 0x23E20Cu;
    SET_GPR_U32(ctx, 31, 0x23E214u);
    ctx->pc = 0x23E210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E20Cu;
    // 0x23e210: 0x62280a  movz        $a1, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264BD8u, 0x23E20Cu, 0x23E214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E214u;
label_23e214:
    // 0x23e214: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x23e214u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_23e218:
    // 0x23e218: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23e218u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23e21c:
    // 0x23e21c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_23e220:
    if (ctx->pc == 0x23E220u) {
        ctx->pc = 0x23E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E21Cu;
        // 0x23e220: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E224u;
        goto label_23e224;
    }
    ctx->pc = 0x23E21Cu;
    {
        const bool branch_taken_0x23e21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E21Cu;
        // 0x23e220: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e21c) {
            ctx->pc = 0x23E29Cu;
            goto label_23e29c;
        }
    }
    ctx->pc = 0x23E224u;
label_23e224:
    // 0x23e224: 0xc0e87c0  jal         func_3A1F00
label_23e228:
    if (ctx->pc == 0x23E228u) {
        ctx->pc = 0x23E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E224u;
        // 0x23e228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E22Cu;
        goto label_23e22c;
    }
    ctx->pc = 0x23E224u;
    SET_GPR_U32(ctx, 31, 0x23E22Cu);
    ctx->pc = 0x23E228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E224u;
    // 0x23e228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x23E224u, 0x23E22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E22Cu;
label_23e22c:
    // 0x23e22c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x23e22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23e230:
    // 0x23e230: 0x3c01bfc0  lui         $at, 0xBFC0
    ctx->pc = 0x23e230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49088 << 16));
label_23e234:
    // 0x23e234: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23e234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23e238:
    // 0x23e238: 0x0  nop
    ctx->pc = 0x23e238u;
    // NOP
label_23e23c:
    // 0x23e23c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23e23cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23e240:
    // 0x23e240: 0x0  nop
    ctx->pc = 0x23e240u;
    // NOP
label_23e244:
    // 0x23e244: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_23e248:
    if (ctx->pc == 0x23E248u) {
        ctx->pc = 0x23E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E244u;
        // 0x23e248: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E24Cu;
        goto label_23e24c;
    }
    ctx->pc = 0x23E244u;
    {
        const bool branch_taken_0x23e244 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E244u;
        // 0x23e248: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e244) {
            ctx->pc = 0x23E29Cu;
            goto label_23e29c;
        }
    }
    ctx->pc = 0x23E24Cu;
label_23e24c:
    // 0x23e24c: 0xc047e6c  jal         func_11F9B0
label_23e250:
    if (ctx->pc == 0x23E250u) {
        ctx->pc = 0x23E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E24Cu;
        // 0x23e250: 0x822401b0  lb          $a0, 0x1B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E254u;
        goto label_23e254;
    }
    ctx->pc = 0x23E24Cu;
    SET_GPR_U32(ctx, 31, 0x23E254u);
    ctx->pc = 0x23E250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E24Cu;
    // 0x23e250: 0x822401b0  lb          $a0, 0x1B0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x23E24Cu, 0x23E254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E254u;
label_23e254:
    // 0x23e254: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x23e254u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e258:
    // 0x23e258: 0x55000008  bnel        $t0, $zero, . + 4 + (0x8 << 2)
label_23e25c:
    if (ctx->pc == 0x23E25Cu) {
        ctx->pc = 0x23E25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E258u;
        // 0x23e25c: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E260u;
        goto label_23e260;
    }
    ctx->pc = 0x23E258u;
    {
        const bool branch_taken_0x23e258 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e258) {
            ctx->pc = 0x23E25Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E258u;
            // 0x23e25c: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E27Cu;
            goto label_23e27c;
        }
    }
    ctx->pc = 0x23E260u;
label_23e260:
    // 0x23e260: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x23e260u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_23e264:
    // 0x23e264: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
label_23e268:
    if (ctx->pc == 0x23E268u) {
        ctx->pc = 0x23E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E264u;
        // 0x23e268: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E26Cu;
        goto label_23e26c;
    }
    ctx->pc = 0x23E264u;
    {
        const bool branch_taken_0x23e264 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23e264) {
            ctx->pc = 0x23E268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E264u;
            // 0x23e268: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E27Cu;
            goto label_23e27c;
        }
    }
    ctx->pc = 0x23E26Cu;
label_23e26c:
    // 0x23e26c: 0xc047e6c  jal         func_11F9B0
label_23e270:
    if (ctx->pc == 0x23E270u) {
        ctx->pc = 0x23E270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E26Cu;
        // 0x23e270: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E274u;
        goto label_23e274;
    }
    ctx->pc = 0x23E26Cu;
    SET_GPR_U32(ctx, 31, 0x23E274u);
    ctx->pc = 0x23E270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E26Cu;
    // 0x23e270: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x23E26Cu, 0x23E274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E274u;
label_23e274:
    // 0x23e274: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x23e274u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e278:
    // 0x23e278: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x23e278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_23e27c:
    // 0x23e27c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x23e27cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23e280:
    // 0x23e280: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23e280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23e284:
    // 0x23e284: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23e284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23e288:
    // 0x23e288: 0x84440158  lh          $a0, 0x158($v0)
    ctx->pc = 0x23e288u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 344)));
label_23e28c:
    // 0x23e28c: 0x8c43015c  lw          $v1, 0x15C($v0)
    ctx->pc = 0x23e28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
label_23e290:
    // 0x23e290: 0x60f809  jalr        $v1
label_23e294:
    if (ctx->pc == 0x23E294u) {
        ctx->pc = 0x23E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E290u;
        // 0x23e294: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E298u;
        goto label_23e298;
    }
    ctx->pc = 0x23E290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23E298u);
        ctx->pc = 0x23E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E290u;
        // 0x23e294: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E290u, 0x23E298u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23E298u;
label_23e298:
    // 0x23e298: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23e298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23e29c:
    // 0x23e29c: 0xc0e8870  jal         func_3A21C0
label_23e2a0:
    if (ctx->pc == 0x23E2A0u) {
        ctx->pc = 0x23E2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E29Cu;
        // 0x23e2a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E2A4u;
        goto label_23e2a4;
    }
    ctx->pc = 0x23E29Cu;
    SET_GPR_U32(ctx, 31, 0x23E2A4u);
    ctx->pc = 0x23E2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E29Cu;
    // 0x23e2a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A21C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A21C0u, 0x23E29Cu, 0x23E2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E2A4u;
label_23e2a4:
    // 0x23e2a4: 0xc087502  jal         func_21D408
label_23e2a8:
    if (ctx->pc == 0x23E2A8u) {
        ctx->pc = 0x23E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E2A4u;
        // 0x23e2a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E2ACu;
        goto label_23e2ac;
    }
    ctx->pc = 0x23E2A4u;
    SET_GPR_U32(ctx, 31, 0x23E2ACu);
    ctx->pc = 0x23E2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E2A4u;
    // 0x23e2a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x23E2A4u, 0x23E2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E2ACu;
label_23e2ac:
    // 0x23e2ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23e2acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e2b0:
    // 0x23e2b0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x23e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_23e2b4:
    // 0x23e2b4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_23e2b8:
    if (ctx->pc == 0x23E2B8u) {
        ctx->pc = 0x23E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E2B4u;
        // 0x23e2b8: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E2BCu;
        goto label_23e2bc;
    }
    ctx->pc = 0x23E2B4u;
    {
        const bool branch_taken_0x23e2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E2B4u;
        // 0x23e2b8: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e2b4) {
            ctx->pc = 0x23E360u;
            goto label_23e360;
        }
    }
    ctx->pc = 0x23E2BCu;
label_23e2bc:
    // 0x23e2bc: 0xc0579c6  jal         func_15E718
label_23e2c0:
    if (ctx->pc == 0x23E2C0u) {
        ctx->pc = 0x23E2C4u;
        goto label_23e2c4;
    }
    ctx->pc = 0x23E2BCu;
    SET_GPR_U32(ctx, 31, 0x23E2C4u);
    ctx->pc = 0x15E718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E718u, 0x23E2BCu, 0x23E2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E2C4u;
label_23e2c4:
    // 0x23e2c4: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x23e2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_23e2c8:
    // 0x23e2c8: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x23e2c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_23e2cc:
    // 0x23e2cc: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x23e2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_23e2d0:
    // 0x23e2d0: 0xa0f809  jalr        $a1
label_23e2d4:
    if (ctx->pc == 0x23E2D4u) {
        ctx->pc = 0x23E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E2D0u;
        // 0x23e2d4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E2D8u;
        goto label_23e2d8;
    }
    ctx->pc = 0x23E2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x23E2D8u);
        ctx->pc = 0x23E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E2D0u;
        // 0x23e2d4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E2D0u, 0x23E2D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23E2D8u;
label_23e2d8:
    // 0x23e2d8: 0x38420011  xori        $v0, $v0, 0x11
    ctx->pc = 0x23e2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)17);
label_23e2dc:
    // 0x23e2dc: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
label_23e2e0:
    if (ctx->pc == 0x23E2E0u) {
        ctx->pc = 0x23E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E2DCu;
        // 0x23e2e0: 0xae2003a0  sw          $zero, 0x3A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 928), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E2E4u;
        goto label_23e2e4;
    }
    ctx->pc = 0x23E2DCu;
    {
        const bool branch_taken_0x23e2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e2dc) {
            ctx->pc = 0x23E2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E2DCu;
            // 0x23e2e0: 0xae2003a0  sw          $zero, 0x3A0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 928), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E3B8u;
            goto label_23e3b8;
        }
    }
    ctx->pc = 0x23E2E4u;
label_23e2e4:
    // 0x23e2e4: 0x8242002e  lb          $v0, 0x2E($s2)
    ctx->pc = 0x23e2e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 46)));
label_23e2e8:
    // 0x23e2e8: 0x18400032  blez        $v0, . + 4 + (0x32 << 2)
label_23e2ec:
    if (ctx->pc == 0x23E2ECu) {
        ctx->pc = 0x23E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E2E8u;
        // 0x23e2ec: 0x2802a  slt         $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E2F0u;
        goto label_23e2f0;
    }
    ctx->pc = 0x23E2E8u;
    {
        const bool branch_taken_0x23e2e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E2E8u;
        // 0x23e2ec: 0x2802a  slt         $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e2e8) {
            ctx->pc = 0x23E3B4u;
            goto label_23e3b4;
        }
    }
    ctx->pc = 0x23E2F0u;
label_23e2f0:
    // 0x23e2f0: 0xc0a36c2  jal         func_28DB08
label_23e2f4:
    if (ctx->pc == 0x23E2F4u) {
        ctx->pc = 0x23E2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E2F0u;
        // 0x23e2f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E2F8u;
        goto label_23e2f8;
    }
    ctx->pc = 0x23E2F0u;
    SET_GPR_U32(ctx, 31, 0x23E2F8u);
    ctx->pc = 0x23E2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E2F0u;
    // 0x23e2f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x23E2F0u, 0x23E2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E2F8u;
label_23e2f8:
    // 0x23e2f8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x23e2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_23e2fc:
    // 0x23e2fc: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x23e2fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_23e300:
    // 0x23e300: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x23e300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_23e304:
    // 0x23e304: 0xa0f809  jalr        $a1
label_23e308:
    if (ctx->pc == 0x23E308u) {
        ctx->pc = 0x23E308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E304u;
        // 0x23e308: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E30Cu;
        goto label_23e30c;
    }
    ctx->pc = 0x23E304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x23E30Cu);
        ctx->pc = 0x23E308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E304u;
        // 0x23e308: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E304u, 0x23E30Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23E30Cu;
label_23e30c:
    // 0x23e30c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23e30cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e310:
    // 0x23e310: 0x56700029  bnel        $s3, $s0, . + 4 + (0x29 << 2)
label_23e314:
    if (ctx->pc == 0x23E314u) {
        ctx->pc = 0x23E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E310u;
        // 0x23e314: 0xae2003a0  sw          $zero, 0x3A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 928), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E318u;
        goto label_23e318;
    }
    ctx->pc = 0x23E310u;
    {
        const bool branch_taken_0x23e310 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        if (branch_taken_0x23e310) {
            ctx->pc = 0x23E314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E310u;
            // 0x23e314: 0xae2003a0  sw          $zero, 0x3A0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 928), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E3B8u;
            goto label_23e3b8;
        }
    }
    ctx->pc = 0x23E318u;
label_23e318:
    // 0x23e318: 0x264400e0  addiu       $a0, $s2, 0xE0
    ctx->pc = 0x23e318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
label_23e31c:
    // 0x23e31c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x23e31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_23e320:
    // 0x23e320: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_23e324:
    if (ctx->pc == 0x23E324u) {
        ctx->pc = 0x23E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E320u;
        // 0x23e324: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E328u;
        goto label_23e328;
    }
    ctx->pc = 0x23E320u;
    {
        const bool branch_taken_0x23e320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e320) {
            ctx->pc = 0x23E324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E320u;
            // 0x23e324: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E350u;
            goto label_23e350;
        }
    }
    ctx->pc = 0x23E328u;
label_23e328:
    // 0x23e328: 0xc0a6c5c  jal         func_29B170
label_23e32c:
    if (ctx->pc == 0x23E32Cu) {
        ctx->pc = 0x23E330u;
        goto label_23e330;
    }
    ctx->pc = 0x23E328u;
    SET_GPR_U32(ctx, 31, 0x23E330u);
    ctx->pc = 0x29B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B170u, 0x23E328u, 0x23E330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E330u;
label_23e330:
    // 0x23e330: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_23e334:
    if (ctx->pc == 0x23E334u) {
        ctx->pc = 0x23E334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E330u;
        // 0x23e334: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E338u;
        goto label_23e338;
    }
    ctx->pc = 0x23E330u;
    {
        const bool branch_taken_0x23e330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E330u;
        // 0x23e334: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e330) {
            ctx->pc = 0x23E34Cu;
            goto label_23e34c;
        }
    }
    ctx->pc = 0x23E338u;
label_23e338:
    // 0x23e338: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23e338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23e33c:
    // 0x23e33c: 0xc0a3f8a  jal         func_28FE28
label_23e340:
    if (ctx->pc == 0x23E340u) {
        ctx->pc = 0x23E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E33Cu;
        // 0x23e340: 0xae1312b4  sw          $s3, 0x12B4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4788), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E344u;
        goto label_23e344;
    }
    ctx->pc = 0x23E33Cu;
    SET_GPR_U32(ctx, 31, 0x23E344u);
    ctx->pc = 0x23E340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E33Cu;
    // 0x23e340: 0xae1312b4  sw          $s3, 0x12B4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4788), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE28u, 0x23E33Cu, 0x23E344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E344u;
label_23e344:
    // 0x23e344: 0x1000001b  b           . + 4 + (0x1B << 2)
label_23e348:
    if (ctx->pc == 0x23E348u) {
        ctx->pc = 0x23E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E344u;
        // 0x23e348: 0xae0012b4  sw          $zero, 0x12B4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4788), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E34Cu;
        goto label_23e34c;
    }
    ctx->pc = 0x23E344u;
    {
        const bool branch_taken_0x23e344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E344u;
        // 0x23e348: 0xae0012b4  sw          $zero, 0x12B4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4788), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e344) {
            ctx->pc = 0x23E3B4u;
            goto label_23e3b4;
        }
    }
    ctx->pc = 0x23E34Cu;
label_23e34c:
    // 0x23e34c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23e34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23e350:
    // 0x23e350: 0xc0a3698  jal         func_28DA60
label_23e354:
    if (ctx->pc == 0x23E354u) {
        ctx->pc = 0x23E354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E350u;
        // 0x23e354: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E358u;
        goto label_23e358;
    }
    ctx->pc = 0x23E350u;
    SET_GPR_U32(ctx, 31, 0x23E358u);
    ctx->pc = 0x23E354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E350u;
    // 0x23e354: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DA60u, 0x23E350u, 0x23E358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E358u;
label_23e358:
    // 0x23e358: 0x10000017  b           . + 4 + (0x17 << 2)
label_23e35c:
    if (ctx->pc == 0x23E35Cu) {
        ctx->pc = 0x23E35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E358u;
        // 0x23e35c: 0xae2003a0  sw          $zero, 0x3A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 928), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E360u;
        goto label_23e360;
    }
    ctx->pc = 0x23E358u;
    {
        const bool branch_taken_0x23e358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E358u;
        // 0x23e35c: 0xae2003a0  sw          $zero, 0x3A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 928), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e358) {
            ctx->pc = 0x23E3B8u;
            goto label_23e3b8;
        }
    }
    ctx->pc = 0x23E360u;
label_23e360:
    // 0x23e360: 0x862301be  lh          $v1, 0x1BE($s1)
    ctx->pc = 0x23e360u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
label_23e364:
    // 0x23e364: 0x2444c788  addiu       $a0, $v0, -0x3878
    ctx->pc = 0x23e364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952840));
label_23e368:
    // 0x23e368: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x23e368u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_23e36c:
    // 0x23e36c: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_23e370:
    if (ctx->pc == 0x23E370u) {
        ctx->pc = 0x23E370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E36Cu;
        // 0x23e370: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E374u;
        goto label_23e374;
    }
    ctx->pc = 0x23E36Cu;
    {
        const bool branch_taken_0x23e36c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23E370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E36Cu;
        // 0x23e370: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e36c) {
            ctx->pc = 0x23E3A4u;
            goto label_23e3a4;
        }
    }
    ctx->pc = 0x23E374u;
label_23e374:
    // 0x23e374: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23e374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23e378:
    // 0x23e378: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_23e37c:
    if (ctx->pc == 0x23E37Cu) {
        ctx->pc = 0x23E37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E378u;
        // 0x23e37c: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E380u;
        goto label_23e380;
    }
    ctx->pc = 0x23E378u;
    {
        const bool branch_taken_0x23e378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23E37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E378u;
        // 0x23e37c: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e378) {
            ctx->pc = 0x23E390u;
            goto label_23e390;
        }
    }
    ctx->pc = 0x23E380u;
label_23e380:
    // 0x23e380: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x23e380u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23e384:
    // 0x23e384: 0x862201c0  lh          $v0, 0x1C0($s1)
    ctx->pc = 0x23e384u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 448)));
label_23e388:
    // 0x23e388: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_23e38c:
    if (ctx->pc == 0x23E38Cu) {
        ctx->pc = 0x23E38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E388u;
        // 0x23e38c: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E390u;
        goto label_23e390;
    }
    ctx->pc = 0x23E388u;
    {
        const bool branch_taken_0x23e388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x23E38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E388u;
        // 0x23e38c: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e388) {
            ctx->pc = 0x23E3A0u;
            goto label_23e3a0;
        }
    }
    ctx->pc = 0x23E390u;
label_23e390:
    // 0x23e390: 0x8e2301c0  lw          $v1, 0x1C0($s1)
    ctx->pc = 0x23e390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
label_23e394:
    // 0x23e394: 0x24420898  addiu       $v0, $v0, 0x898
    ctx->pc = 0x23e394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2200));
label_23e398:
    // 0x23e398: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_23e39c:
    if (ctx->pc == 0x23E39Cu) {
        ctx->pc = 0x23E3A0u;
        goto label_23e3a0;
    }
    ctx->pc = 0x23E398u;
    {
        const bool branch_taken_0x23e398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23e398) {
            ctx->pc = 0x23E3A4u;
            goto label_23e3a4;
        }
    }
    ctx->pc = 0x23E3A0u;
label_23e3a0:
    // 0x23e3a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23e3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23e3a4:
    // 0x23e3a4: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_23e3a8:
    if (ctx->pc == 0x23E3A8u) {
        ctx->pc = 0x23E3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3A4u;
        // 0x23e3a8: 0xae2003a0  sw          $zero, 0x3A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 928), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E3ACu;
        goto label_23e3ac;
    }
    ctx->pc = 0x23E3A4u;
    {
        const bool branch_taken_0x23e3a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e3a4) {
            ctx->pc = 0x23E3A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E3A4u;
            // 0x23e3a8: 0xae2003a0  sw          $zero, 0x3A0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 928), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E3B8u;
            goto label_23e3b8;
        }
    }
    ctx->pc = 0x23E3ACu;
label_23e3ac:
    // 0x23e3ac: 0xc088420  jal         func_221080
label_23e3b0:
    if (ctx->pc == 0x23E3B0u) {
        ctx->pc = 0x23E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3ACu;
        // 0x23e3b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E3B4u;
        goto label_23e3b4;
    }
    ctx->pc = 0x23E3ACu;
    SET_GPR_U32(ctx, 31, 0x23E3B4u);
    ctx->pc = 0x23E3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E3ACu;
    // 0x23e3b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221080u, 0x23E3ACu, 0x23E3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E3B4u;
label_23e3b4:
    // 0x23e3b4: 0xae2003a0  sw          $zero, 0x3A0($s1)
    ctx->pc = 0x23e3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 928), GPR_U32(ctx, 0));
label_23e3b8:
    // 0x23e3b8: 0xc0e87c0  jal         func_3A1F00
label_23e3bc:
    if (ctx->pc == 0x23E3BCu) {
        ctx->pc = 0x23E3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3B8u;
        // 0x23e3bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E3C0u;
        goto label_23e3c0;
    }
    ctx->pc = 0x23E3B8u;
    SET_GPR_U32(ctx, 31, 0x23E3C0u);
    ctx->pc = 0x23E3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E3B8u;
    // 0x23e3bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x23E3B8u, 0x23E3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E3C0u;
label_23e3c0:
    // 0x23e3c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23e3c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e3c4:
    // 0x23e3c4: 0xc0e87c0  jal         func_3A1F00
label_23e3c8:
    if (ctx->pc == 0x23E3C8u) {
        ctx->pc = 0x23E3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3C4u;
        // 0x23e3c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E3CCu;
        goto label_23e3cc;
    }
    ctx->pc = 0x23E3C4u;
    SET_GPR_U32(ctx, 31, 0x23E3CCu);
    ctx->pc = 0x23E3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E3C4u;
    // 0x23e3c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x23E3C4u, 0x23E3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E3CCu;
label_23e3cc:
    // 0x23e3cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23e3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23e3d0:
    // 0x23e3d0: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x23e3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_23e3d4:
    // 0x23e3d4: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x23e3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_23e3d8:
    // 0x23e3d8: 0xc08f3ae  jal         func_23CEB8
label_23e3dc:
    if (ctx->pc == 0x23E3DCu) {
        ctx->pc = 0x23E3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3D8u;
        // 0x23e3dc: 0xc48e03a0  lwc1        $f14, 0x3A0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E3E0u;
        goto label_23e3e0;
    }
    ctx->pc = 0x23E3D8u;
    SET_GPR_U32(ctx, 31, 0x23E3E0u);
    ctx->pc = 0x23E3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E3D8u;
    // 0x23e3dc: 0xc48e03a0  lwc1        $f14, 0x3A0($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CEB8u, 0x23E3D8u, 0x23E3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E3E0u;
label_23e3e0:
    // 0x23e3e0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x23e3e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_23e3e4:
    // 0x23e3e4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x23e3e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23e3e8:
    // 0x23e3e8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x23e3e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23e3ec:
    // 0x23e3ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23e3ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23e3f0:
    // 0x23e3f0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x23e3f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23e3f4:
    // 0x23e3f4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x23e3f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23e3f8:
    // 0x23e3f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23e3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23e3fc:
    // 0x23e3fc: 0x3e00008  jr          $ra
label_23e400:
    if (ctx->pc == 0x23E400u) {
        ctx->pc = 0x23E400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3FCu;
        // 0x23e400: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E404u;
        goto label_23e404;
    }
    ctx->pc = 0x23E3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3FCu;
        // 0x23e400: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E3FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E404u;
label_23e404:
    // 0x23e404: 0x0  nop
    ctx->pc = 0x23e404u;
    // NOP
    ctx->pc = 0x23e408u;
}
