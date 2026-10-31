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

// Function: sub_0022E020
// Address: 0x22e020 - 0x22e330
void sub_0022E020_0x22e020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E020_0x22e020");
#endif

    switch (ctx->pc) {
        case 0x22e020u: goto label_22e020;
        case 0x22e024u: goto label_22e024;
        case 0x22e028u: goto label_22e028;
        case 0x22e02cu: goto label_22e02c;
        case 0x22e030u: goto label_22e030;
        case 0x22e034u: goto label_22e034;
        case 0x22e038u: goto label_22e038;
        case 0x22e03cu: goto label_22e03c;
        case 0x22e040u: goto label_22e040;
        case 0x22e044u: goto label_22e044;
        case 0x22e048u: goto label_22e048;
        case 0x22e04cu: goto label_22e04c;
        case 0x22e050u: goto label_22e050;
        case 0x22e054u: goto label_22e054;
        case 0x22e058u: goto label_22e058;
        case 0x22e05cu: goto label_22e05c;
        case 0x22e060u: goto label_22e060;
        case 0x22e064u: goto label_22e064;
        case 0x22e068u: goto label_22e068;
        case 0x22e06cu: goto label_22e06c;
        case 0x22e070u: goto label_22e070;
        case 0x22e074u: goto label_22e074;
        case 0x22e078u: goto label_22e078;
        case 0x22e07cu: goto label_22e07c;
        case 0x22e080u: goto label_22e080;
        case 0x22e084u: goto label_22e084;
        case 0x22e088u: goto label_22e088;
        case 0x22e08cu: goto label_22e08c;
        case 0x22e090u: goto label_22e090;
        case 0x22e094u: goto label_22e094;
        case 0x22e098u: goto label_22e098;
        case 0x22e09cu: goto label_22e09c;
        case 0x22e0a0u: goto label_22e0a0;
        case 0x22e0a4u: goto label_22e0a4;
        case 0x22e0a8u: goto label_22e0a8;
        case 0x22e0acu: goto label_22e0ac;
        case 0x22e0b0u: goto label_22e0b0;
        case 0x22e0b4u: goto label_22e0b4;
        case 0x22e0b8u: goto label_22e0b8;
        case 0x22e0bcu: goto label_22e0bc;
        case 0x22e0c0u: goto label_22e0c0;
        case 0x22e0c4u: goto label_22e0c4;
        case 0x22e0c8u: goto label_22e0c8;
        case 0x22e0ccu: goto label_22e0cc;
        case 0x22e0d0u: goto label_22e0d0;
        case 0x22e0d4u: goto label_22e0d4;
        case 0x22e0d8u: goto label_22e0d8;
        case 0x22e0dcu: goto label_22e0dc;
        case 0x22e0e0u: goto label_22e0e0;
        case 0x22e0e4u: goto label_22e0e4;
        case 0x22e0e8u: goto label_22e0e8;
        case 0x22e0ecu: goto label_22e0ec;
        case 0x22e0f0u: goto label_22e0f0;
        case 0x22e0f4u: goto label_22e0f4;
        case 0x22e0f8u: goto label_22e0f8;
        case 0x22e0fcu: goto label_22e0fc;
        case 0x22e100u: goto label_22e100;
        case 0x22e104u: goto label_22e104;
        case 0x22e108u: goto label_22e108;
        case 0x22e10cu: goto label_22e10c;
        case 0x22e110u: goto label_22e110;
        case 0x22e114u: goto label_22e114;
        case 0x22e118u: goto label_22e118;
        case 0x22e11cu: goto label_22e11c;
        case 0x22e120u: goto label_22e120;
        case 0x22e124u: goto label_22e124;
        case 0x22e128u: goto label_22e128;
        case 0x22e12cu: goto label_22e12c;
        case 0x22e130u: goto label_22e130;
        case 0x22e134u: goto label_22e134;
        case 0x22e138u: goto label_22e138;
        case 0x22e13cu: goto label_22e13c;
        case 0x22e140u: goto label_22e140;
        case 0x22e144u: goto label_22e144;
        case 0x22e148u: goto label_22e148;
        case 0x22e14cu: goto label_22e14c;
        case 0x22e150u: goto label_22e150;
        case 0x22e154u: goto label_22e154;
        case 0x22e158u: goto label_22e158;
        case 0x22e15cu: goto label_22e15c;
        case 0x22e160u: goto label_22e160;
        case 0x22e164u: goto label_22e164;
        case 0x22e168u: goto label_22e168;
        case 0x22e16cu: goto label_22e16c;
        case 0x22e170u: goto label_22e170;
        case 0x22e174u: goto label_22e174;
        case 0x22e178u: goto label_22e178;
        case 0x22e17cu: goto label_22e17c;
        case 0x22e180u: goto label_22e180;
        case 0x22e184u: goto label_22e184;
        case 0x22e188u: goto label_22e188;
        case 0x22e18cu: goto label_22e18c;
        case 0x22e190u: goto label_22e190;
        case 0x22e194u: goto label_22e194;
        case 0x22e198u: goto label_22e198;
        case 0x22e19cu: goto label_22e19c;
        case 0x22e1a0u: goto label_22e1a0;
        case 0x22e1a4u: goto label_22e1a4;
        case 0x22e1a8u: goto label_22e1a8;
        case 0x22e1acu: goto label_22e1ac;
        case 0x22e1b0u: goto label_22e1b0;
        case 0x22e1b4u: goto label_22e1b4;
        case 0x22e1b8u: goto label_22e1b8;
        case 0x22e1bcu: goto label_22e1bc;
        case 0x22e1c0u: goto label_22e1c0;
        case 0x22e1c4u: goto label_22e1c4;
        case 0x22e1c8u: goto label_22e1c8;
        case 0x22e1ccu: goto label_22e1cc;
        case 0x22e1d0u: goto label_22e1d0;
        case 0x22e1d4u: goto label_22e1d4;
        case 0x22e1d8u: goto label_22e1d8;
        case 0x22e1dcu: goto label_22e1dc;
        case 0x22e1e0u: goto label_22e1e0;
        case 0x22e1e4u: goto label_22e1e4;
        case 0x22e1e8u: goto label_22e1e8;
        case 0x22e1ecu: goto label_22e1ec;
        case 0x22e1f0u: goto label_22e1f0;
        case 0x22e1f4u: goto label_22e1f4;
        case 0x22e1f8u: goto label_22e1f8;
        case 0x22e1fcu: goto label_22e1fc;
        case 0x22e200u: goto label_22e200;
        case 0x22e204u: goto label_22e204;
        case 0x22e208u: goto label_22e208;
        case 0x22e20cu: goto label_22e20c;
        case 0x22e210u: goto label_22e210;
        case 0x22e214u: goto label_22e214;
        case 0x22e218u: goto label_22e218;
        case 0x22e21cu: goto label_22e21c;
        case 0x22e220u: goto label_22e220;
        case 0x22e224u: goto label_22e224;
        case 0x22e228u: goto label_22e228;
        case 0x22e22cu: goto label_22e22c;
        case 0x22e230u: goto label_22e230;
        case 0x22e234u: goto label_22e234;
        case 0x22e238u: goto label_22e238;
        case 0x22e23cu: goto label_22e23c;
        case 0x22e240u: goto label_22e240;
        case 0x22e244u: goto label_22e244;
        case 0x22e248u: goto label_22e248;
        case 0x22e24cu: goto label_22e24c;
        case 0x22e250u: goto label_22e250;
        case 0x22e254u: goto label_22e254;
        case 0x22e258u: goto label_22e258;
        case 0x22e25cu: goto label_22e25c;
        case 0x22e260u: goto label_22e260;
        case 0x22e264u: goto label_22e264;
        case 0x22e268u: goto label_22e268;
        case 0x22e26cu: goto label_22e26c;
        case 0x22e270u: goto label_22e270;
        case 0x22e274u: goto label_22e274;
        case 0x22e278u: goto label_22e278;
        case 0x22e27cu: goto label_22e27c;
        case 0x22e280u: goto label_22e280;
        case 0x22e284u: goto label_22e284;
        case 0x22e288u: goto label_22e288;
        case 0x22e28cu: goto label_22e28c;
        case 0x22e290u: goto label_22e290;
        case 0x22e294u: goto label_22e294;
        case 0x22e298u: goto label_22e298;
        case 0x22e29cu: goto label_22e29c;
        case 0x22e2a0u: goto label_22e2a0;
        case 0x22e2a4u: goto label_22e2a4;
        case 0x22e2a8u: goto label_22e2a8;
        case 0x22e2acu: goto label_22e2ac;
        case 0x22e2b0u: goto label_22e2b0;
        case 0x22e2b4u: goto label_22e2b4;
        case 0x22e2b8u: goto label_22e2b8;
        case 0x22e2bcu: goto label_22e2bc;
        case 0x22e2c0u: goto label_22e2c0;
        case 0x22e2c4u: goto label_22e2c4;
        case 0x22e2c8u: goto label_22e2c8;
        case 0x22e2ccu: goto label_22e2cc;
        case 0x22e2d0u: goto label_22e2d0;
        case 0x22e2d4u: goto label_22e2d4;
        case 0x22e2d8u: goto label_22e2d8;
        case 0x22e2dcu: goto label_22e2dc;
        case 0x22e2e0u: goto label_22e2e0;
        case 0x22e2e4u: goto label_22e2e4;
        case 0x22e2e8u: goto label_22e2e8;
        case 0x22e2ecu: goto label_22e2ec;
        case 0x22e2f0u: goto label_22e2f0;
        case 0x22e2f4u: goto label_22e2f4;
        case 0x22e2f8u: goto label_22e2f8;
        case 0x22e2fcu: goto label_22e2fc;
        case 0x22e300u: goto label_22e300;
        case 0x22e304u: goto label_22e304;
        case 0x22e308u: goto label_22e308;
        case 0x22e30cu: goto label_22e30c;
        case 0x22e310u: goto label_22e310;
        case 0x22e314u: goto label_22e314;
        case 0x22e318u: goto label_22e318;
        case 0x22e31cu: goto label_22e31c;
        case 0x22e320u: goto label_22e320;
        case 0x22e324u: goto label_22e324;
        case 0x22e328u: goto label_22e328;
        case 0x22e32cu: goto label_22e32c;
        default: break;
    }

    ctx->pc = 0x22e020u;

label_22e020:
    // 0x22e020: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22e020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_22e024:
    // 0x22e024: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22e024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_22e028:
    // 0x22e028: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22e028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22e02c:
    // 0x22e02c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22e02cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22e030:
    // 0x22e030: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x22e030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_22e034:
    // 0x22e034: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x22e034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_22e038:
    // 0x22e038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22e038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22e03c:
    // 0x22e03c: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x22e03cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_22e040:
    // 0x22e040: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x22e040u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_22e044:
    // 0x22e044: 0x104000b3  beqz        $v0, . + 4 + (0xB3 << 2)
label_22e048:
    if (ctx->pc == 0x22E048u) {
        ctx->pc = 0x22E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E044u;
        // 0x22e048: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E04Cu;
        goto label_22e04c;
    }
    ctx->pc = 0x22E044u;
    {
        const bool branch_taken_0x22e044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E044u;
        // 0x22e048: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e044) {
            ctx->pc = 0x22E314u;
            goto label_22e314;
        }
    }
    ctx->pc = 0x22E04Cu;
label_22e04c:
    // 0x22e04c: 0xc088ac6  jal         func_222B18
label_22e050:
    if (ctx->pc == 0x22E050u) {
        ctx->pc = 0x22E054u;
        goto label_22e054;
    }
    ctx->pc = 0x22E04Cu;
    SET_GPR_U32(ctx, 31, 0x22E054u);
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22E04Cu, 0x22E054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E054u;
label_22e054:
    // 0x22e054: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22e054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22e058:
    // 0x22e058: 0xc088ac6  jal         func_222B18
label_22e05c:
    if (ctx->pc == 0x22E05Cu) {
        ctx->pc = 0x22E05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E058u;
        // 0x22e05c: 0xa4400046  sh          $zero, 0x46($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E060u;
        goto label_22e060;
    }
    ctx->pc = 0x22E058u;
    SET_GPR_U32(ctx, 31, 0x22E060u);
    ctx->pc = 0x22E05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E058u;
    // 0x22e05c: 0xa4400046  sh          $zero, 0x46($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22E058u, 0x22E060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E060u;
label_22e060:
    // 0x22e060: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22e060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22e064:
    // 0x22e064: 0xc088ac6  jal         func_222B18
label_22e068:
    if (ctx->pc == 0x22E068u) {
        ctx->pc = 0x22E068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E064u;
        // 0x22e068: 0xa4400040  sh          $zero, 0x40($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E06Cu;
        goto label_22e06c;
    }
    ctx->pc = 0x22E064u;
    SET_GPR_U32(ctx, 31, 0x22E06Cu);
    ctx->pc = 0x22E068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E064u;
    // 0x22e068: 0xa4400040  sh          $zero, 0x40($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22E064u, 0x22E06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E06Cu;
label_22e06c:
    // 0x22e06c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22e06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22e070:
    // 0x22e070: 0xc088ac6  jal         func_222B18
label_22e074:
    if (ctx->pc == 0x22E074u) {
        ctx->pc = 0x22E074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E070u;
        // 0x22e074: 0xa040004c  sb          $zero, 0x4C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 76), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E078u;
        goto label_22e078;
    }
    ctx->pc = 0x22E070u;
    SET_GPR_U32(ctx, 31, 0x22E078u);
    ctx->pc = 0x22E074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E070u;
    // 0x22e074: 0xa040004c  sb          $zero, 0x4C($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 76), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22E070u, 0x22E078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E078u;
label_22e078:
    // 0x22e078: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x22e078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
label_22e07c:
    // 0x22e07c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22e07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22e080:
    // 0x22e080: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22e080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22e084:
    // 0x22e084: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22e084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22e088:
    // 0x22e088: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x22e088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_22e08c:
    // 0x22e08c: 0xac400110  sw          $zero, 0x110($v0)
    ctx->pc = 0x22e08cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 0));
label_22e090:
    // 0x22e090: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x22e090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_22e094:
    // 0x22e094: 0xac600130  sw          $zero, 0x130($v1)
    ctx->pc = 0x22e094u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 304), GPR_U32(ctx, 0));
label_22e098:
    // 0x22e098: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x22e098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22e09c:
    // 0x22e09c: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x22e09cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_22e0a0:
    // 0x22e0a0: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x22e0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_22e0a4:
    // 0x22e0a4: 0x60f809  jalr        $v1
label_22e0a8:
    if (ctx->pc == 0x22E0A8u) {
        ctx->pc = 0x22E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E0A4u;
        // 0x22e0a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E0ACu;
        goto label_22e0ac;
    }
    ctx->pc = 0x22E0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22E0ACu);
        ctx->pc = 0x22E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E0A4u;
        // 0x22e0a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E0A4u, 0x22E0ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22E0ACu;
label_22e0ac:
    // 0x22e0ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22e0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22e0b0:
    // 0x22e0b0: 0xc089988  jal         func_226620
label_22e0b4:
    if (ctx->pc == 0x22E0B4u) {
        ctx->pc = 0x22E0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E0B0u;
        // 0x22e0b4: 0x3c050400  lui         $a1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E0B8u;
        goto label_22e0b8;
    }
    ctx->pc = 0x22E0B0u;
    SET_GPR_U32(ctx, 31, 0x22E0B8u);
    ctx->pc = 0x22E0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E0B0u;
    // 0x22e0b4: 0x3c050400  lui         $a1, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22E0B0u, 0x22E0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E0B8u;
label_22e0b8:
    // 0x22e0b8: 0x1640000d  bnez        $s2, . + 4 + (0xD << 2)
label_22e0bc:
    if (ctx->pc == 0x22E0BCu) {
        ctx->pc = 0x22E0C0u;
        goto label_22e0c0;
    }
    ctx->pc = 0x22E0B8u;
    {
        const bool branch_taken_0x22e0b8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e0b8) {
            ctx->pc = 0x22E0F0u;
            goto label_22e0f0;
        }
    }
    ctx->pc = 0x22E0C0u;
label_22e0c0:
    // 0x22e0c0: 0xc090222  jal         func_240888
label_22e0c4:
    if (ctx->pc == 0x22E0C4u) {
        ctx->pc = 0x22E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E0C0u;
        // 0x22e0c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E0C8u;
        goto label_22e0c8;
    }
    ctx->pc = 0x22E0C0u;
    SET_GPR_U32(ctx, 31, 0x22E0C8u);
    ctx->pc = 0x22E0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E0C0u;
    // 0x22e0c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240888u, 0x22E0C0u, 0x22E0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E0C8u;
label_22e0c8:
    // 0x22e0c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_22e0cc:
    if (ctx->pc == 0x22E0CCu) {
        ctx->pc = 0x22E0D0u;
        goto label_22e0d0;
    }
    ctx->pc = 0x22E0C8u;
    {
        const bool branch_taken_0x22e0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e0c8) {
            ctx->pc = 0x22E0F0u;
            goto label_22e0f0;
        }
    }
    ctx->pc = 0x22E0D0u;
label_22e0d0:
    // 0x22e0d0: 0xc090222  jal         func_240888
label_22e0d4:
    if (ctx->pc == 0x22E0D4u) {
        ctx->pc = 0x22E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E0D0u;
        // 0x22e0d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E0D8u;
        goto label_22e0d8;
    }
    ctx->pc = 0x22E0D0u;
    SET_GPR_U32(ctx, 31, 0x22E0D8u);
    ctx->pc = 0x22E0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E0D0u;
    // 0x22e0d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240888u, 0x22E0D0u, 0x22E0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E0D8u;
label_22e0d8:
    // 0x22e0d8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x22e0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_22e0dc:
    // 0x22e0dc: 0x14710004  bne         $v1, $s1, . + 4 + (0x4 << 2)
label_22e0e0:
    if (ctx->pc == 0x22E0E0u) {
        ctx->pc = 0x22E0E4u;
        goto label_22e0e4;
    }
    ctx->pc = 0x22E0DCu;
    {
        const bool branch_taken_0x22e0dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x22e0dc) {
            ctx->pc = 0x22E0F0u;
            goto label_22e0f0;
        }
    }
    ctx->pc = 0x22E0E4u;
label_22e0e4:
    // 0x22e0e4: 0xc090222  jal         func_240888
label_22e0e8:
    if (ctx->pc == 0x22E0E8u) {
        ctx->pc = 0x22E0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E0E4u;
        // 0x22e0e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E0ECu;
        goto label_22e0ec;
    }
    ctx->pc = 0x22E0E4u;
    SET_GPR_U32(ctx, 31, 0x22E0ECu);
    ctx->pc = 0x22E0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E0E4u;
    // 0x22e0e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240888u, 0x22E0E4u, 0x22E0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E0ECu;
label_22e0ec:
    // 0x22e0ec: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x22e0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_22e0f0:
    // 0x22e0f0: 0xc0874fa  jal         func_21D3E8
label_22e0f4:
    if (ctx->pc == 0x22E0F4u) {
        ctx->pc = 0x22E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E0F0u;
        // 0x22e0f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E0F8u;
        goto label_22e0f8;
    }
    ctx->pc = 0x22E0F0u;
    SET_GPR_U32(ctx, 31, 0x22E0F8u);
    ctx->pc = 0x22E0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E0F0u;
    // 0x22e0f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x22E0F0u, 0x22E0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E0F8u;
label_22e0f8:
    // 0x22e0f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22e0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22e0fc:
    // 0x22e0fc: 0xa040001d  sb          $zero, 0x1D($v0)
    ctx->pc = 0x22e0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 29), (uint8_t)GPR_U32(ctx, 0));
label_22e100:
    // 0x22e100: 0xc0874fa  jal         func_21D3E8
label_22e104:
    if (ctx->pc == 0x22E104u) {
        ctx->pc = 0x22E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E100u;
        // 0x22e104: 0xa040001c  sb          $zero, 0x1C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E108u;
        goto label_22e108;
    }
    ctx->pc = 0x22E100u;
    SET_GPR_U32(ctx, 31, 0x22E108u);
    ctx->pc = 0x22E104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E100u;
    // 0x22e104: 0xa040001c  sb          $zero, 0x1C($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x22E100u, 0x22E108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E108u;
label_22e108:
    // 0x22e108: 0xc05181e  jal         func_146078
label_22e10c:
    if (ctx->pc == 0x22E10Cu) {
        ctx->pc = 0x22E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E108u;
        // 0x22e10c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E110u;
        goto label_22e110;
    }
    ctx->pc = 0x22E108u;
    SET_GPR_U32(ctx, 31, 0x22E110u);
    ctx->pc = 0x22E10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E108u;
    // 0x22e10c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146078u, 0x22E108u, 0x22E110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E110u;
label_22e110:
    // 0x22e110: 0xc0874fa  jal         func_21D3E8
label_22e114:
    if (ctx->pc == 0x22E114u) {
        ctx->pc = 0x22E114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E110u;
        // 0x22e114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E118u;
        goto label_22e118;
    }
    ctx->pc = 0x22E110u;
    SET_GPR_U32(ctx, 31, 0x22E118u);
    ctx->pc = 0x22E114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E110u;
    // 0x22e114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x22E110u, 0x22E118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E118u;
label_22e118:
    // 0x22e118: 0x80440019  lb          $a0, 0x19($v0)
    ctx->pc = 0x22e118u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
label_22e11c:
    // 0x22e11c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_22e120:
    // 0x22e120: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
label_22e124:
    if (ctx->pc == 0x22E124u) {
        ctx->pc = 0x22E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E120u;
        // 0x22e124: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E128u;
        goto label_22e128;
    }
    ctx->pc = 0x22E120u;
    {
        const bool branch_taken_0x22e120 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x22E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E120u;
        // 0x22e124: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e120) {
            ctx->pc = 0x22E13Cu;
            goto label_22e13c;
        }
    }
    ctx->pc = 0x22E128u;
label_22e128:
    // 0x22e128: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x22e128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_22e12c:
    // 0x22e12c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x22e12cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_22e130:
    // 0x22e130: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x22e130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
label_22e134:
    // 0x22e134: 0x10000002  b           . + 4 + (0x2 << 2)
label_22e138:
    if (ctx->pc == 0x22E138u) {
        ctx->pc = 0x22E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E134u;
        // 0x22e138: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E13Cu;
        goto label_22e13c;
    }
    ctx->pc = 0x22E134u;
    {
        const bool branch_taken_0x22e134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E134u;
        // 0x22e138: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e134) {
            ctx->pc = 0x22E140u;
            goto label_22e140;
        }
    }
    ctx->pc = 0x22E13Cu;
label_22e13c:
    // 0x22e13c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22e13cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e140:
    // 0x22e140: 0xc0874fa  jal         func_21D3E8
label_22e144:
    if (ctx->pc == 0x22E144u) {
        ctx->pc = 0x22E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E140u;
        // 0x22e144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E148u;
        goto label_22e148;
    }
    ctx->pc = 0x22E140u;
    SET_GPR_U32(ctx, 31, 0x22E148u);
    ctx->pc = 0x22E144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E140u;
    // 0x22e144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x22E140u, 0x22E148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E148u;
label_22e148:
    // 0x22e148: 0x80450019  lb          $a1, 0x19($v0)
    ctx->pc = 0x22e148u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
label_22e14c:
    // 0x22e14c: 0xc05262a  jal         func_1498A8
label_22e150:
    if (ctx->pc == 0x22E150u) {
        ctx->pc = 0x22E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E14Cu;
        // 0x22e150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E154u;
        goto label_22e154;
    }
    ctx->pc = 0x22E14Cu;
    SET_GPR_U32(ctx, 31, 0x22E154u);
    ctx->pc = 0x22E150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E14Cu;
    // 0x22e150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1498A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1498A8u, 0x22E14Cu, 0x22E154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E154u;
label_22e154:
    // 0x22e154: 0x1240004d  beqz        $s2, . + 4 + (0x4D << 2)
label_22e158:
    if (ctx->pc == 0x22E158u) {
        ctx->pc = 0x22E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E154u;
        // 0x22e158: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E15Cu;
        goto label_22e15c;
    }
    ctx->pc = 0x22E154u;
    {
        const bool branch_taken_0x22e154 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E154u;
        // 0x22e158: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e154) {
            ctx->pc = 0x22E28Cu;
            goto label_22e28c;
        }
    }
    ctx->pc = 0x22E15Cu;
label_22e15c:
    // 0x22e15c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22e15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e160:
    // 0x22e160: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x22e160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_22e164:
    // 0x22e164: 0x908256e2  lbu         $v0, 0x56E2($a0)
    ctx->pc = 0x22e164u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
label_22e168:
    // 0x22e168: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_22e16c:
    if (ctx->pc == 0x22E16Cu) {
        ctx->pc = 0x22E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E168u;
        // 0x22e16c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E170u;
        goto label_22e170;
    }
    ctx->pc = 0x22E168u;
    {
        const bool branch_taken_0x22e168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E168u;
        // 0x22e16c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e168) {
            ctx->pc = 0x22E17Cu;
            goto label_22e17c;
        }
    }
    ctx->pc = 0x22E170u;
label_22e170:
    // 0x22e170: 0xc107444  jal         func_41D110
label_22e174:
    if (ctx->pc == 0x22E174u) {
        ctx->pc = 0x22E178u;
        goto label_22e178;
    }
    ctx->pc = 0x22E170u;
    SET_GPR_U32(ctx, 31, 0x22E178u);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x22E170u, 0x22E178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E178u;
label_22e178:
    // 0x22e178: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x22e178u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22e17c:
    // 0x22e17c: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
label_22e180:
    if (ctx->pc == 0x22E180u) {
        ctx->pc = 0x22E184u;
        goto label_22e184;
    }
    ctx->pc = 0x22E17Cu;
    {
        const bool branch_taken_0x22e17c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e17c) {
            ctx->pc = 0x22E1CCu;
            goto label_22e1cc;
        }
    }
    ctx->pc = 0x22E184u;
label_22e184:
    // 0x22e184: 0xc073a8e  jal         func_1CEA38
label_22e188:
    if (ctx->pc == 0x22E188u) {
        ctx->pc = 0x22E188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E184u;
        // 0x22e188: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E18Cu;
        goto label_22e18c;
    }
    ctx->pc = 0x22E184u;
    SET_GPR_U32(ctx, 31, 0x22E18Cu);
    ctx->pc = 0x22E188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E184u;
    // 0x22e188: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x22E184u, 0x22E18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E18Cu;
label_22e18c:
    // 0x22e18c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_22e190:
    if (ctx->pc == 0x22E190u) {
        ctx->pc = 0x22E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E18Cu;
        // 0x22e190: 0x8e05489c  lw          $a1, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E194u;
        goto label_22e194;
    }
    ctx->pc = 0x22E18Cu;
    {
        const bool branch_taken_0x22e18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E18Cu;
        // 0x22e190: 0x8e05489c  lw          $a1, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e18c) {
            ctx->pc = 0x22E1CCu;
            goto label_22e1cc;
        }
    }
    ctx->pc = 0x22E194u;
label_22e194:
    // 0x22e194: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x22e194u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_22e198:
    // 0x22e198: 0x412b8  dsll        $v0, $a0, 10
    ctx->pc = 0x22e198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 10);
label_22e19c:
    // 0x22e19c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x22e19cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_22e1a0:
    // 0x22e1a0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22e1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_22e1a4:
    // 0x22e1a4: 0x2c430002  sltiu       $v1, $v0, 0x2
    ctx->pc = 0x22e1a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_22e1a8:
    // 0x22e1a8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_22e1ac:
    if (ctx->pc == 0x22E1ACu) {
        ctx->pc = 0x22E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E1A8u;
        // 0x22e1ac: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E1B0u;
        goto label_22e1b0;
    }
    ctx->pc = 0x22E1A8u;
    {
        const bool branch_taken_0x22e1a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E1A8u;
        // 0x22e1ac: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e1a8) {
            ctx->pc = 0x22E1CCu;
            goto label_22e1cc;
        }
    }
    ctx->pc = 0x22E1B0u;
label_22e1b0:
    // 0x22e1b0: 0x3c03ff3f  lui         $v1, 0xFF3F
    ctx->pc = 0x22e1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65343 << 16));
label_22e1b4:
    // 0x22e1b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x22e1b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_22e1b8:
    // 0x22e1b8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22e1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_22e1bc:
    // 0x22e1bc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22e1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_22e1c0:
    // 0x22e1c0: 0x215b8  dsll        $v0, $v0, 22
    ctx->pc = 0x22e1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 22);
label_22e1c4:
    // 0x22e1c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22e1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_22e1c8:
    // 0x22e1c8: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x22e1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
label_22e1cc:
    // 0x22e1cc: 0xc089c18  jal         func_227060
label_22e1d0:
    if (ctx->pc == 0x22E1D0u) {
        ctx->pc = 0x22E1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E1CCu;
        // 0x22e1d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E1D4u;
        goto label_22e1d4;
    }
    ctx->pc = 0x22E1CCu;
    SET_GPR_U32(ctx, 31, 0x22E1D4u);
    ctx->pc = 0x22E1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E1CCu;
    // 0x22e1d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x22E1CCu, 0x22E1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E1D4u;
label_22e1d4:
    // 0x22e1d4: 0xc0e57ce  jal         func_395F38
label_22e1d8:
    if (ctx->pc == 0x22E1D8u) {
        ctx->pc = 0x22E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E1D4u;
        // 0x22e1d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E1DCu;
        goto label_22e1dc;
    }
    ctx->pc = 0x22E1D4u;
    SET_GPR_U32(ctx, 31, 0x22E1DCu);
    ctx->pc = 0x22E1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E1D4u;
    // 0x22e1d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x22E1D4u, 0x22E1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E1DCu;
label_22e1dc:
    // 0x22e1dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22e1dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22e1e0:
    // 0x22e1e0: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
label_22e1e4:
    if (ctx->pc == 0x22E1E4u) {
        ctx->pc = 0x22E1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E1E0u;
        // 0x22e1e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E1E8u;
        goto label_22e1e8;
    }
    ctx->pc = 0x22E1E0u;
    {
        const bool branch_taken_0x22e1e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E1E0u;
        // 0x22e1e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e1e0) {
            ctx->pc = 0x22E290u;
            goto label_22e290;
        }
    }
    ctx->pc = 0x22E1E8u;
label_22e1e8:
    // 0x22e1e8: 0xc0e2612  jal         func_389848
label_22e1ec:
    if (ctx->pc == 0x22E1ECu) {
        ctx->pc = 0x22E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E1E8u;
        // 0x22e1ec: 0x8e440058  lw          $a0, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E1F0u;
        goto label_22e1f0;
    }
    ctx->pc = 0x22E1E8u;
    SET_GPR_U32(ctx, 31, 0x22E1F0u);
    ctx->pc = 0x22E1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E1E8u;
    // 0x22e1ec: 0x8e440058  lw          $a0, 0x58($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x22E1E8u, 0x22E1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E1F0u;
label_22e1f0:
    // 0x22e1f0: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x22e1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_22e1f4:
    // 0x22e1f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22e1f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22e1f8:
    // 0x22e1f8: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x22e1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_22e1fc:
    // 0x22e1fc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x22e1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22e200:
    // 0x22e200: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x22e200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_22e204:
    // 0x22e204: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x22e204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_22e208:
    // 0x22e208: 0xc10796c  jal         func_41E5B0
label_22e20c:
    if (ctx->pc == 0x22E20Cu) {
        ctx->pc = 0x22E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E208u;
        // 0x22e20c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E210u;
        goto label_22e210;
    }
    ctx->pc = 0x22E208u;
    SET_GPR_U32(ctx, 31, 0x22E210u);
    ctx->pc = 0x22E20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E208u;
    // 0x22e20c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x22E208u, 0x22E210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E210u;
label_22e210:
    // 0x22e210: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x22e210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_22e214:
    // 0x22e214: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x22e214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_22e218:
    // 0x22e218: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x22e218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_22e21c:
    // 0x22e21c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22e21cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e220:
    // 0x22e220: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x22e220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_22e224:
    // 0x22e224: 0xc10796c  jal         func_41E5B0
label_22e228:
    if (ctx->pc == 0x22E228u) {
        ctx->pc = 0x22E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E224u;
        // 0x22e228: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E22Cu;
        goto label_22e22c;
    }
    ctx->pc = 0x22E224u;
    SET_GPR_U32(ctx, 31, 0x22E22Cu);
    ctx->pc = 0x22E228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E224u;
    // 0x22e228: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x22E224u, 0x22E22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E22Cu;
label_22e22c:
    // 0x22e22c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22e22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22e230:
    // 0x22e230: 0xc104b72  jal         func_412DC8
label_22e234:
    if (ctx->pc == 0x22E234u) {
        ctx->pc = 0x22E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E230u;
        // 0x22e234: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E238u;
        goto label_22e238;
    }
    ctx->pc = 0x22E230u;
    SET_GPR_U32(ctx, 31, 0x22E238u);
    ctx->pc = 0x22E234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E230u;
    // 0x22e234: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412DC8u, 0x22E230u, 0x22E238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E238u;
label_22e238:
    // 0x22e238: 0x52600010  beql        $s3, $zero, . + 4 + (0x10 << 2)
label_22e23c:
    if (ctx->pc == 0x22E23Cu) {
        ctx->pc = 0x22E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E238u;
        // 0x22e23c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E240u;
        goto label_22e240;
    }
    ctx->pc = 0x22E238u;
    {
        const bool branch_taken_0x22e238 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e238) {
            ctx->pc = 0x22E23Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E238u;
            // 0x22e23c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E27Cu;
            goto label_22e27c;
        }
    }
    ctx->pc = 0x22E240u;
label_22e240:
    // 0x22e240: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22e240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22e244:
    // 0x22e244: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x22e244u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_22e248:
    // 0x22e248: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x22e248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_22e24c:
    // 0x22e24c: 0x40f809  jalr        $v0
label_22e250:
    if (ctx->pc == 0x22E250u) {
        ctx->pc = 0x22E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E24Cu;
        // 0x22e250: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E254u;
        goto label_22e254;
    }
    ctx->pc = 0x22E24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22E254u);
        ctx->pc = 0x22E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E24Cu;
        // 0x22e250: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E24Cu, 0x22E254u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22E254u;
label_22e254:
    // 0x22e254: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x22e254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_22e258:
    // 0x22e258: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22e258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22e25c:
    // 0x22e25c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x22e25cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_22e260:
    // 0x22e260: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x22e260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_22e264:
    // 0x22e264: 0x40f809  jalr        $v0
label_22e268:
    if (ctx->pc == 0x22E268u) {
        ctx->pc = 0x22E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E264u;
        // 0x22e268: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E26Cu;
        goto label_22e26c;
    }
    ctx->pc = 0x22E264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22E26Cu);
        ctx->pc = 0x22E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E264u;
        // 0x22e268: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E264u, 0x22E26Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22E26Cu;
label_22e26c:
    // 0x22e26c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22e270:
    // 0x22e270: 0xc08d952  jal         func_236548
label_22e274:
    if (ctx->pc == 0x22E274u) {
        ctx->pc = 0x22E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E270u;
        // 0x22e274: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E278u;
        goto label_22e278;
    }
    ctx->pc = 0x22E270u;
    SET_GPR_U32(ctx, 31, 0x22E278u);
    ctx->pc = 0x22E274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E270u;
    // 0x22e274: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236548u, 0x22E270u, 0x22E278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E278u;
label_22e278:
    // 0x22e278: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x22e278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22e27c:
    // 0x22e27c: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x22e27cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_22e280:
    // 0x22e280: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x22e280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_22e284:
    // 0x22e284: 0x60f809  jalr        $v1
label_22e288:
    if (ctx->pc == 0x22E288u) {
        ctx->pc = 0x22E288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E284u;
        // 0x22e288: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E28Cu;
        goto label_22e28c;
    }
    ctx->pc = 0x22E284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22E28Cu);
        ctx->pc = 0x22E288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E284u;
        // 0x22e288: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E284u, 0x22E28Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22E28Cu;
label_22e28c:
    // 0x22e28c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22e28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22e290:
    // 0x22e290: 0xc089c20  jal         func_227080
label_22e294:
    if (ctx->pc == 0x22E294u) {
        ctx->pc = 0x22E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E290u;
        // 0x22e294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E298u;
        goto label_22e298;
    }
    ctx->pc = 0x22E290u;
    SET_GPR_U32(ctx, 31, 0x22E298u);
    ctx->pc = 0x22E294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E290u;
    // 0x22e294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227080u, 0x22E290u, 0x22E298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E298u;
label_22e298:
    // 0x22e298: 0x822401b0  lb          $a0, 0x1B0($s1)
    ctx->pc = 0x22e298u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_22e29c:
    // 0x22e29c: 0x41027  nor         $v0, $zero, $a0
    ctx->pc = 0x22e29cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
label_22e2a0:
    // 0x22e2a0: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_22e2a4:
    if (ctx->pc == 0x22E2A4u) {
        ctx->pc = 0x22E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E2A0u;
        // 0x22e2a4: 0x3c040061  lui         $a0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E2A8u;
        goto label_22e2a8;
    }
    ctx->pc = 0x22E2A0u;
    {
        const bool branch_taken_0x22e2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e2a0) {
            ctx->pc = 0x22E2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E2A0u;
            // 0x22e2a4: 0x3c040061  lui         $a0, 0x61 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E2F8u;
            goto label_22e2f8;
        }
    }
    ctx->pc = 0x22E2A8u;
label_22e2a8:
    // 0x22e2a8: 0xc047e72  jal         func_11F9C8
label_22e2ac:
    if (ctx->pc == 0x22E2ACu) {
        ctx->pc = 0x22E2B0u;
        goto label_22e2b0;
    }
    ctx->pc = 0x22E2A8u;
    SET_GPR_U32(ctx, 31, 0x22E2B0u);
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x22E2A8u, 0x22E2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E2B0u;
label_22e2b0:
    // 0x22e2b0: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_22e2b4:
    if (ctx->pc == 0x22E2B4u) {
        ctx->pc = 0x22E2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E2B0u;
        // 0x22e2b4: 0x3c040061  lui         $a0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E2B8u;
        goto label_22e2b8;
    }
    ctx->pc = 0x22E2B0u;
    {
        const bool branch_taken_0x22e2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e2b0) {
            ctx->pc = 0x22E2B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E2B0u;
            // 0x22e2b4: 0x3c040061  lui         $a0, 0x61 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E2F8u;
            goto label_22e2f8;
        }
    }
    ctx->pc = 0x22E2B8u;
label_22e2b8:
    // 0x22e2b8: 0xc047e72  jal         func_11F9C8
label_22e2bc:
    if (ctx->pc == 0x22E2BCu) {
        ctx->pc = 0x22E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E2B8u;
        // 0x22e2bc: 0x822401b0  lb          $a0, 0x1B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E2C0u;
        goto label_22e2c0;
    }
    ctx->pc = 0x22E2B8u;
    SET_GPR_U32(ctx, 31, 0x22E2C0u);
    ctx->pc = 0x22E2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E2B8u;
    // 0x22e2bc: 0x822401b0  lb          $a0, 0x1B0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x22E2B8u, 0x22E2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E2C0u;
label_22e2c0:
    // 0x22e2c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22e2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22e2c4:
    // 0x22e2c4: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x22e2c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_22e2c8:
    // 0x22e2c8: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x22e2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_22e2cc:
    // 0x22e2cc: 0xa0f809  jalr        $a1
label_22e2d0:
    if (ctx->pc == 0x22E2D0u) {
        ctx->pc = 0x22E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E2CCu;
        // 0x22e2d0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E2D4u;
        goto label_22e2d4;
    }
    ctx->pc = 0x22E2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x22E2D4u);
        ctx->pc = 0x22E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E2CCu;
        // 0x22e2d0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E2CCu, 0x22E2D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22E2D4u;
label_22e2d4:
    // 0x22e2d4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x22e2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_22e2d8:
    // 0x22e2d8: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_22e2dc:
    if (ctx->pc == 0x22E2DCu) {
        ctx->pc = 0x22E2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E2D8u;
        // 0x22e2dc: 0x3c040061  lui         $a0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E2E0u;
        goto label_22e2e0;
    }
    ctx->pc = 0x22E2D8u;
    {
        const bool branch_taken_0x22e2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22e2d8) {
            ctx->pc = 0x22E2DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E2D8u;
            // 0x22e2dc: 0x3c040061  lui         $a0, 0x61 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E2F8u;
            goto label_22e2f8;
        }
    }
    ctx->pc = 0x22E2E0u;
label_22e2e0:
    // 0x22e2e0: 0x822401b0  lb          $a0, 0x1B0($s1)
    ctx->pc = 0x22e2e0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_22e2e4:
    // 0x22e2e4: 0xc047f9a  jal         func_11FE68
label_22e2e8:
    if (ctx->pc == 0x22E2E8u) {
        ctx->pc = 0x22E2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E2E4u;
        // 0x22e2e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E2ECu;
        goto label_22e2ec;
    }
    ctx->pc = 0x22E2E4u;
    SET_GPR_U32(ctx, 31, 0x22E2ECu);
    ctx->pc = 0x22E2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E2E4u;
    // 0x22e2e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE68u, 0x22E2E4u, 0x22E2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E2ECu;
label_22e2ec:
    // 0x22e2ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22e2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e2f0:
    // 0x22e2f0: 0xac430258  sw          $v1, 0x258($v0)
    ctx->pc = 0x22e2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 600), GPR_U32(ctx, 3));
label_22e2f4:
    // 0x22e2f4: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x22e2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_22e2f8:
    // 0x22e2f8: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x22e2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_22e2fc:
    // 0x22e2fc: 0xc0739c6  jal         func_1CE718
label_22e300:
    if (ctx->pc == 0x22E300u) {
        ctx->pc = 0x22E300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E2FCu;
        // 0x22e300: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E304u;
        goto label_22e304;
    }
    ctx->pc = 0x22E2FCu;
    SET_GPR_U32(ctx, 31, 0x22E304u);
    ctx->pc = 0x22E300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E2FCu;
    // 0x22e300: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE718u, 0x22E2FCu, 0x22E304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E304u;
label_22e304:
    // 0x22e304: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x22e304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_22e308:
    // 0x22e308: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x22e308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_22e30c:
    // 0x22e30c: 0xc06cf0c  jal         func_1B3C30
label_22e310:
    if (ctx->pc == 0x22E310u) {
        ctx->pc = 0x22E310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E30Cu;
        // 0x22e310: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E314u;
        goto label_22e314;
    }
    ctx->pc = 0x22E30Cu;
    SET_GPR_U32(ctx, 31, 0x22E314u);
    ctx->pc = 0x22E310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E30Cu;
    // 0x22e310: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x22E30Cu, 0x22E314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E314u;
label_22e314:
    // 0x22e314: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x22e314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22e318:
    // 0x22e318: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22e318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22e31c:
    // 0x22e31c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22e31cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22e320:
    // 0x22e320: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x22e320u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22e324:
    // 0x22e324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22e324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22e328:
    // 0x22e328: 0x3e00008  jr          $ra
label_22e32c:
    if (ctx->pc == 0x22E32Cu) {
        ctx->pc = 0x22E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E328u;
        // 0x22e32c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E330u;
        goto label_fallthrough_0x22e328;
    }
    ctx->pc = 0x22E328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E328u;
        // 0x22e32c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22e328:
    ctx->pc = 0x22E330u;
}
