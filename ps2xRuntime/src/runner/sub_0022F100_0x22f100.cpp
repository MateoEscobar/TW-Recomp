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

// Function: sub_0022F100
// Address: 0x22f100 - 0x22f3c8
void sub_0022F100_0x22f100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F100_0x22f100");
#endif

    switch (ctx->pc) {
        case 0x22f100u: goto label_22f100;
        case 0x22f104u: goto label_22f104;
        case 0x22f108u: goto label_22f108;
        case 0x22f10cu: goto label_22f10c;
        case 0x22f110u: goto label_22f110;
        case 0x22f114u: goto label_22f114;
        case 0x22f118u: goto label_22f118;
        case 0x22f11cu: goto label_22f11c;
        case 0x22f120u: goto label_22f120;
        case 0x22f124u: goto label_22f124;
        case 0x22f128u: goto label_22f128;
        case 0x22f12cu: goto label_22f12c;
        case 0x22f130u: goto label_22f130;
        case 0x22f134u: goto label_22f134;
        case 0x22f138u: goto label_22f138;
        case 0x22f13cu: goto label_22f13c;
        case 0x22f140u: goto label_22f140;
        case 0x22f144u: goto label_22f144;
        case 0x22f148u: goto label_22f148;
        case 0x22f14cu: goto label_22f14c;
        case 0x22f150u: goto label_22f150;
        case 0x22f154u: goto label_22f154;
        case 0x22f158u: goto label_22f158;
        case 0x22f15cu: goto label_22f15c;
        case 0x22f160u: goto label_22f160;
        case 0x22f164u: goto label_22f164;
        case 0x22f168u: goto label_22f168;
        case 0x22f16cu: goto label_22f16c;
        case 0x22f170u: goto label_22f170;
        case 0x22f174u: goto label_22f174;
        case 0x22f178u: goto label_22f178;
        case 0x22f17cu: goto label_22f17c;
        case 0x22f180u: goto label_22f180;
        case 0x22f184u: goto label_22f184;
        case 0x22f188u: goto label_22f188;
        case 0x22f18cu: goto label_22f18c;
        case 0x22f190u: goto label_22f190;
        case 0x22f194u: goto label_22f194;
        case 0x22f198u: goto label_22f198;
        case 0x22f19cu: goto label_22f19c;
        case 0x22f1a0u: goto label_22f1a0;
        case 0x22f1a4u: goto label_22f1a4;
        case 0x22f1a8u: goto label_22f1a8;
        case 0x22f1acu: goto label_22f1ac;
        case 0x22f1b0u: goto label_22f1b0;
        case 0x22f1b4u: goto label_22f1b4;
        case 0x22f1b8u: goto label_22f1b8;
        case 0x22f1bcu: goto label_22f1bc;
        case 0x22f1c0u: goto label_22f1c0;
        case 0x22f1c4u: goto label_22f1c4;
        case 0x22f1c8u: goto label_22f1c8;
        case 0x22f1ccu: goto label_22f1cc;
        case 0x22f1d0u: goto label_22f1d0;
        case 0x22f1d4u: goto label_22f1d4;
        case 0x22f1d8u: goto label_22f1d8;
        case 0x22f1dcu: goto label_22f1dc;
        case 0x22f1e0u: goto label_22f1e0;
        case 0x22f1e4u: goto label_22f1e4;
        case 0x22f1e8u: goto label_22f1e8;
        case 0x22f1ecu: goto label_22f1ec;
        case 0x22f1f0u: goto label_22f1f0;
        case 0x22f1f4u: goto label_22f1f4;
        case 0x22f1f8u: goto label_22f1f8;
        case 0x22f1fcu: goto label_22f1fc;
        case 0x22f200u: goto label_22f200;
        case 0x22f204u: goto label_22f204;
        case 0x22f208u: goto label_22f208;
        case 0x22f20cu: goto label_22f20c;
        case 0x22f210u: goto label_22f210;
        case 0x22f214u: goto label_22f214;
        case 0x22f218u: goto label_22f218;
        case 0x22f21cu: goto label_22f21c;
        case 0x22f220u: goto label_22f220;
        case 0x22f224u: goto label_22f224;
        case 0x22f228u: goto label_22f228;
        case 0x22f22cu: goto label_22f22c;
        case 0x22f230u: goto label_22f230;
        case 0x22f234u: goto label_22f234;
        case 0x22f238u: goto label_22f238;
        case 0x22f23cu: goto label_22f23c;
        case 0x22f240u: goto label_22f240;
        case 0x22f244u: goto label_22f244;
        case 0x22f248u: goto label_22f248;
        case 0x22f24cu: goto label_22f24c;
        case 0x22f250u: goto label_22f250;
        case 0x22f254u: goto label_22f254;
        case 0x22f258u: goto label_22f258;
        case 0x22f25cu: goto label_22f25c;
        case 0x22f260u: goto label_22f260;
        case 0x22f264u: goto label_22f264;
        case 0x22f268u: goto label_22f268;
        case 0x22f26cu: goto label_22f26c;
        case 0x22f270u: goto label_22f270;
        case 0x22f274u: goto label_22f274;
        case 0x22f278u: goto label_22f278;
        case 0x22f27cu: goto label_22f27c;
        case 0x22f280u: goto label_22f280;
        case 0x22f284u: goto label_22f284;
        case 0x22f288u: goto label_22f288;
        case 0x22f28cu: goto label_22f28c;
        case 0x22f290u: goto label_22f290;
        case 0x22f294u: goto label_22f294;
        case 0x22f298u: goto label_22f298;
        case 0x22f29cu: goto label_22f29c;
        case 0x22f2a0u: goto label_22f2a0;
        case 0x22f2a4u: goto label_22f2a4;
        case 0x22f2a8u: goto label_22f2a8;
        case 0x22f2acu: goto label_22f2ac;
        case 0x22f2b0u: goto label_22f2b0;
        case 0x22f2b4u: goto label_22f2b4;
        case 0x22f2b8u: goto label_22f2b8;
        case 0x22f2bcu: goto label_22f2bc;
        case 0x22f2c0u: goto label_22f2c0;
        case 0x22f2c4u: goto label_22f2c4;
        case 0x22f2c8u: goto label_22f2c8;
        case 0x22f2ccu: goto label_22f2cc;
        case 0x22f2d0u: goto label_22f2d0;
        case 0x22f2d4u: goto label_22f2d4;
        case 0x22f2d8u: goto label_22f2d8;
        case 0x22f2dcu: goto label_22f2dc;
        case 0x22f2e0u: goto label_22f2e0;
        case 0x22f2e4u: goto label_22f2e4;
        case 0x22f2e8u: goto label_22f2e8;
        case 0x22f2ecu: goto label_22f2ec;
        case 0x22f2f0u: goto label_22f2f0;
        case 0x22f2f4u: goto label_22f2f4;
        case 0x22f2f8u: goto label_22f2f8;
        case 0x22f2fcu: goto label_22f2fc;
        case 0x22f300u: goto label_22f300;
        case 0x22f304u: goto label_22f304;
        case 0x22f308u: goto label_22f308;
        case 0x22f30cu: goto label_22f30c;
        case 0x22f310u: goto label_22f310;
        case 0x22f314u: goto label_22f314;
        case 0x22f318u: goto label_22f318;
        case 0x22f31cu: goto label_22f31c;
        case 0x22f320u: goto label_22f320;
        case 0x22f324u: goto label_22f324;
        case 0x22f328u: goto label_22f328;
        case 0x22f32cu: goto label_22f32c;
        case 0x22f330u: goto label_22f330;
        case 0x22f334u: goto label_22f334;
        case 0x22f338u: goto label_22f338;
        case 0x22f33cu: goto label_22f33c;
        case 0x22f340u: goto label_22f340;
        case 0x22f344u: goto label_22f344;
        case 0x22f348u: goto label_22f348;
        case 0x22f34cu: goto label_22f34c;
        case 0x22f350u: goto label_22f350;
        case 0x22f354u: goto label_22f354;
        case 0x22f358u: goto label_22f358;
        case 0x22f35cu: goto label_22f35c;
        case 0x22f360u: goto label_22f360;
        case 0x22f364u: goto label_22f364;
        case 0x22f368u: goto label_22f368;
        case 0x22f36cu: goto label_22f36c;
        case 0x22f370u: goto label_22f370;
        case 0x22f374u: goto label_22f374;
        case 0x22f378u: goto label_22f378;
        case 0x22f37cu: goto label_22f37c;
        case 0x22f380u: goto label_22f380;
        case 0x22f384u: goto label_22f384;
        case 0x22f388u: goto label_22f388;
        case 0x22f38cu: goto label_22f38c;
        case 0x22f390u: goto label_22f390;
        case 0x22f394u: goto label_22f394;
        case 0x22f398u: goto label_22f398;
        case 0x22f39cu: goto label_22f39c;
        case 0x22f3a0u: goto label_22f3a0;
        case 0x22f3a4u: goto label_22f3a4;
        case 0x22f3a8u: goto label_22f3a8;
        case 0x22f3acu: goto label_22f3ac;
        case 0x22f3b0u: goto label_22f3b0;
        case 0x22f3b4u: goto label_22f3b4;
        case 0x22f3b8u: goto label_22f3b8;
        case 0x22f3bcu: goto label_22f3bc;
        case 0x22f3c0u: goto label_22f3c0;
        case 0x22f3c4u: goto label_22f3c4;
        default: break;
    }

    ctx->pc = 0x22f100u;

label_22f100:
    // 0x22f100: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22f100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22f104:
    // 0x22f104: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22f104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_22f108:
    // 0x22f108: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22f108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_22f10c:
    // 0x22f10c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22f10cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22f110:
    // 0x22f110: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22f110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_22f114:
    // 0x22f114: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22f114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22f118:
    // 0x22f118: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22f118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22f11c:
    // 0x22f11c: 0xc08c6a0  jal         func_231A80
label_22f120:
    if (ctx->pc == 0x22F120u) {
        ctx->pc = 0x22F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F11Cu;
        // 0x22f120: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F124u;
        goto label_22f124;
    }
    ctx->pc = 0x22F11Cu;
    SET_GPR_U32(ctx, 31, 0x22F124u);
    ctx->pc = 0x22F120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F11Cu;
    // 0x22f120: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x22F11Cu, 0x22F124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F124u;
label_22f124:
    // 0x22f124: 0xc095f8e  jal         func_257E38
label_22f128:
    if (ctx->pc == 0x22F128u) {
        ctx->pc = 0x22F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F124u;
        // 0x22f128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F12Cu;
        goto label_22f12c;
    }
    ctx->pc = 0x22F124u;
    SET_GPR_U32(ctx, 31, 0x22F12Cu);
    ctx->pc = 0x22F128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F124u;
    // 0x22f128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E38u, 0x22F124u, 0x22F12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F12Cu;
label_22f12c:
    // 0x22f12c: 0xc0874fa  jal         func_21D3E8
label_22f130:
    if (ctx->pc == 0x22F130u) {
        ctx->pc = 0x22F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F12Cu;
        // 0x22f130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F134u;
        goto label_22f134;
    }
    ctx->pc = 0x22F12Cu;
    SET_GPR_U32(ctx, 31, 0x22F134u);
    ctx->pc = 0x22F130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F12Cu;
    // 0x22f130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x22F12Cu, 0x22F134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F134u;
label_22f134:
    // 0x22f134: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x22f134u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_22f138:
    // 0x22f138: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_22f13c:
    if (ctx->pc == 0x22F13Cu) {
        ctx->pc = 0x22F13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F138u;
        // 0x22f13c: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F140u;
        goto label_22f140;
    }
    ctx->pc = 0x22F138u;
    {
        const bool branch_taken_0x22f138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F138u;
        // 0x22f13c: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f138) {
            ctx->pc = 0x22F19Cu;
            goto label_22f19c;
        }
    }
    ctx->pc = 0x22F140u;
label_22f140:
    // 0x22f140: 0x860301be  lh          $v1, 0x1BE($s0)
    ctx->pc = 0x22f140u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
label_22f144:
    // 0x22f144: 0x2444bf50  addiu       $a0, $v0, -0x40B0
    ctx->pc = 0x22f144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950736));
label_22f148:
    // 0x22f148: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x22f148u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_22f14c:
    // 0x22f14c: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_22f150:
    if (ctx->pc == 0x22F150u) {
        ctx->pc = 0x22F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F14Cu;
        // 0x22f150: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F154u;
        goto label_22f154;
    }
    ctx->pc = 0x22F14Cu;
    {
        const bool branch_taken_0x22f14c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F14Cu;
        // 0x22f150: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f14c) {
            ctx->pc = 0x22F184u;
            goto label_22f184;
        }
    }
    ctx->pc = 0x22F154u;
label_22f154:
    // 0x22f154: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22f154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_22f158:
    // 0x22f158: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_22f15c:
    if (ctx->pc == 0x22F15Cu) {
        ctx->pc = 0x22F15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F158u;
        // 0x22f15c: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F160u;
        goto label_22f160;
    }
    ctx->pc = 0x22F158u;
    {
        const bool branch_taken_0x22f158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22F15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F158u;
        // 0x22f15c: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f158) {
            ctx->pc = 0x22F170u;
            goto label_22f170;
        }
    }
    ctx->pc = 0x22F160u;
label_22f160:
    // 0x22f160: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x22f160u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_22f164:
    // 0x22f164: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x22f164u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
label_22f168:
    // 0x22f168: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_22f16c:
    if (ctx->pc == 0x22F16Cu) {
        ctx->pc = 0x22F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F168u;
        // 0x22f16c: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F170u;
        goto label_22f170;
    }
    ctx->pc = 0x22F168u;
    {
        const bool branch_taken_0x22f168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x22F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F168u;
        // 0x22f16c: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f168) {
            ctx->pc = 0x22F180u;
            goto label_22f180;
        }
    }
    ctx->pc = 0x22F170u;
label_22f170:
    // 0x22f170: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x22f170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_22f174:
    // 0x22f174: 0x24421b90  addiu       $v0, $v0, 0x1B90
    ctx->pc = 0x22f174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7056));
label_22f178:
    // 0x22f178: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_22f17c:
    if (ctx->pc == 0x22F17Cu) {
        ctx->pc = 0x22F180u;
        goto label_22f180;
    }
    ctx->pc = 0x22F178u;
    {
        const bool branch_taken_0x22f178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22f178) {
            ctx->pc = 0x22F184u;
            goto label_22f184;
        }
    }
    ctx->pc = 0x22F180u;
label_22f180:
    // 0x22f180: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22f180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22f184:
    // 0x22f184: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_22f188:
    if (ctx->pc == 0x22F188u) {
        ctx->pc = 0x22F18Cu;
        goto label_22f18c;
    }
    ctx->pc = 0x22F184u;
    {
        const bool branch_taken_0x22f184 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f184) {
            ctx->pc = 0x22F194u;
            goto label_22f194;
        }
    }
    ctx->pc = 0x22F18Cu;
label_22f18c:
    // 0x22f18c: 0xc0a007a  jal         func_2801E8
label_22f190:
    if (ctx->pc == 0x22F190u) {
        ctx->pc = 0x22F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F18Cu;
        // 0x22f190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F194u;
        goto label_22f194;
    }
    ctx->pc = 0x22F18Cu;
    SET_GPR_U32(ctx, 31, 0x22F194u);
    ctx->pc = 0x22F190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F18Cu;
    // 0x22f190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2801E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2801E8u, 0x22F18Cu, 0x22F194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F194u;
label_22f194:
    // 0x22f194: 0xc089bdc  jal         func_226F70
label_22f198:
    if (ctx->pc == 0x22F198u) {
        ctx->pc = 0x22F198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F194u;
        // 0x22f198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F19Cu;
        goto label_22f19c;
    }
    ctx->pc = 0x22F194u;
    SET_GPR_U32(ctx, 31, 0x22F19Cu);
    ctx->pc = 0x22F198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F194u;
    // 0x22f198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x22F194u, 0x22F19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F19Cu;
label_22f19c:
    // 0x22f19c: 0xc088ee6  jal         func_223B98
label_22f1a0:
    if (ctx->pc == 0x22F1A0u) {
        ctx->pc = 0x22F1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F19Cu;
        // 0x22f1a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F1A4u;
        goto label_22f1a4;
    }
    ctx->pc = 0x22F19Cu;
    SET_GPR_U32(ctx, 31, 0x22F1A4u);
    ctx->pc = 0x22F1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F19Cu;
    // 0x22f1a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x22F19Cu, 0x22F1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F1A4u;
label_22f1a4:
    // 0x22f1a4: 0x1440007e  bnez        $v0, . + 4 + (0x7E << 2)
label_22f1a8:
    if (ctx->pc == 0x22F1A8u) {
        ctx->pc = 0x22F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1A4u;
        // 0x22f1a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F1ACu;
        goto label_22f1ac;
    }
    ctx->pc = 0x22F1A4u;
    {
        const bool branch_taken_0x22f1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1A4u;
        // 0x22f1a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f1a4) {
            ctx->pc = 0x22F3A0u;
            goto label_22f3a0;
        }
    }
    ctx->pc = 0x22F1ACu;
label_22f1ac:
    // 0x22f1ac: 0xc08997c  jal         func_2265F0
label_22f1b0:
    if (ctx->pc == 0x22F1B0u) {
        ctx->pc = 0x22F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1ACu;
        // 0x22f1b0: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F1B4u;
        goto label_22f1b4;
    }
    ctx->pc = 0x22F1ACu;
    SET_GPR_U32(ctx, 31, 0x22F1B4u);
    ctx->pc = 0x22F1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F1ACu;
    // 0x22f1b0: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x22F1ACu, 0x22F1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F1B4u;
label_22f1b4:
    // 0x22f1b4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_22f1b8:
    if (ctx->pc == 0x22F1B8u) {
        ctx->pc = 0x22F1BCu;
        goto label_22f1bc;
    }
    ctx->pc = 0x22F1B4u;
    {
        const bool branch_taken_0x22f1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f1b4) {
            ctx->pc = 0x22F1E4u;
            goto label_22f1e4;
        }
    }
    ctx->pc = 0x22F1BCu;
label_22f1bc:
    // 0x22f1bc: 0xc095018  jal         func_254060
label_22f1c0:
    if (ctx->pc == 0x22F1C0u) {
        ctx->pc = 0x22F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1BCu;
        // 0x22f1c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F1C4u;
        goto label_22f1c4;
    }
    ctx->pc = 0x22F1BCu;
    SET_GPR_U32(ctx, 31, 0x22F1C4u);
    ctx->pc = 0x22F1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F1BCu;
    // 0x22f1c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x22F1BCu, 0x22F1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F1C4u;
label_22f1c4:
    // 0x22f1c4: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x22f1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
label_22f1c8:
    // 0x22f1c8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_22f1cc:
    if (ctx->pc == 0x22F1CCu) {
        ctx->pc = 0x22F1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1C8u;
        // 0x22f1cc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F1D0u;
        goto label_22f1d0;
    }
    ctx->pc = 0x22F1C8u;
    {
        const bool branch_taken_0x22f1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f1c8) {
            ctx->pc = 0x22F1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F1C8u;
            // 0x22f1cc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F208u;
            goto label_22f208;
        }
    }
    ctx->pc = 0x22F1D0u;
label_22f1d0:
    // 0x22f1d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22f1d4:
    // 0x22f1d4: 0xc094f9a  jal         func_253E68
label_22f1d8:
    if (ctx->pc == 0x22F1D8u) {
        ctx->pc = 0x22F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1D4u;
        // 0x22f1d8: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F1DCu;
        goto label_22f1dc;
    }
    ctx->pc = 0x22F1D4u;
    SET_GPR_U32(ctx, 31, 0x22F1DCu);
    ctx->pc = 0x22F1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F1D4u;
    // 0x22f1d8: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253E68u, 0x22F1D4u, 0x22F1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F1DCu;
label_22f1dc:
    // 0x22f1dc: 0x1000000a  b           . + 4 + (0xA << 2)
label_22f1e0:
    if (ctx->pc == 0x22F1E0u) {
        ctx->pc = 0x22F1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1DCu;
        // 0x22f1e0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F1E4u;
        goto label_22f1e4;
    }
    ctx->pc = 0x22F1DCu;
    {
        const bool branch_taken_0x22f1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1DCu;
        // 0x22f1e0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f1dc) {
            ctx->pc = 0x22F208u;
            goto label_22f208;
        }
    }
    ctx->pc = 0x22F1E4u;
label_22f1e4:
    // 0x22f1e4: 0xc095018  jal         func_254060
label_22f1e8:
    if (ctx->pc == 0x22F1E8u) {
        ctx->pc = 0x22F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1E4u;
        // 0x22f1e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F1ECu;
        goto label_22f1ec;
    }
    ctx->pc = 0x22F1E4u;
    SET_GPR_U32(ctx, 31, 0x22F1ECu);
    ctx->pc = 0x22F1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F1E4u;
    // 0x22f1e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x22F1E4u, 0x22F1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F1ECu;
label_22f1ec:
    // 0x22f1ec: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x22f1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_22f1f0:
    // 0x22f1f0: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
label_22f1f4:
    if (ctx->pc == 0x22F1F4u) {
        ctx->pc = 0x22F1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1F0u;
        // 0x22f1f4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F1F8u;
        goto label_22f1f8;
    }
    ctx->pc = 0x22F1F0u;
    {
        const bool branch_taken_0x22f1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x22f1f0) {
            ctx->pc = 0x22F1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F1F0u;
            // 0x22f1f4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F208u;
            goto label_22f208;
        }
    }
    ctx->pc = 0x22F1F8u;
label_22f1f8:
    // 0x22f1f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22f1fc:
    // 0x22f1fc: 0xc094fb4  jal         func_253ED0
label_22f200:
    if (ctx->pc == 0x22F200u) {
        ctx->pc = 0x22F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1FCu;
        // 0x22f200: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F204u;
        goto label_22f204;
    }
    ctx->pc = 0x22F1FCu;
    SET_GPR_U32(ctx, 31, 0x22F204u);
    ctx->pc = 0x22F200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F1FCu;
    // 0x22f200: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x22F1FCu, 0x22F204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F204u;
label_22f204:
    // 0x22f204: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22f204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22f208:
    // 0x22f208: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22f208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22f20c:
    // 0x22f20c: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x22f20cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_22f210:
    // 0x22f210: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x22f210u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_22f214:
    // 0x22f214: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22f214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22f218:
    // 0x22f218: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x22f218u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_22f21c:
    // 0x22f21c: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x22f21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_22f220:
    // 0x22f220: 0x60f809  jalr        $v1
label_22f224:
    if (ctx->pc == 0x22F224u) {
        ctx->pc = 0x22F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F220u;
        // 0x22f224: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F228u;
        goto label_22f228;
    }
    ctx->pc = 0x22F220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22F228u);
        ctx->pc = 0x22F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F220u;
        // 0x22f224: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F220u, 0x22F228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22F228u;
label_22f228:
    // 0x22f228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22f22c:
    // 0x22f22c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22f22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22f230:
    // 0x22f230: 0xc08bd3e  jal         func_22F4F8
label_22f234:
    if (ctx->pc == 0x22F234u) {
        ctx->pc = 0x22F234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F230u;
        // 0x22f234: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F238u;
        goto label_22f238;
    }
    ctx->pc = 0x22F230u;
    SET_GPR_U32(ctx, 31, 0x22F238u);
    ctx->pc = 0x22F234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F230u;
    // 0x22f234: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F4F8u, 0x22F230u, 0x22F238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F238u;
label_22f238:
    // 0x22f238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22f23c:
    // 0x22f23c: 0xc089988  jal         func_226620
label_22f240:
    if (ctx->pc == 0x22F240u) {
        ctx->pc = 0x22F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F23Cu;
        // 0x22f240: 0x34058008  ori         $a1, $zero, 0x8008 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32776);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F244u;
        goto label_22f244;
    }
    ctx->pc = 0x22F23Cu;
    SET_GPR_U32(ctx, 31, 0x22F244u);
    ctx->pc = 0x22F240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F23Cu;
    // 0x22f240: 0x34058008  ori         $a1, $zero, 0x8008 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32776);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22F23Cu, 0x22F244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F244u;
label_22f244:
    // 0x22f244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22f248:
    // 0x22f248: 0xc089974  jal         func_2265D0
label_22f24c:
    if (ctx->pc == 0x22F24Cu) {
        ctx->pc = 0x22F24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F248u;
        // 0x22f24c: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F250u;
        goto label_22f250;
    }
    ctx->pc = 0x22F248u;
    SET_GPR_U32(ctx, 31, 0x22F250u);
    ctx->pc = 0x22F24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F248u;
    // 0x22f24c: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22F248u, 0x22F250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F250u;
label_22f250:
    // 0x22f250: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_22f254:
    if (ctx->pc == 0x22F254u) {
        ctx->pc = 0x22F254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F250u;
        // 0x22f254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F258u;
        goto label_22f258;
    }
    ctx->pc = 0x22F250u;
    {
        const bool branch_taken_0x22f250 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F250u;
        // 0x22f254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f250) {
            ctx->pc = 0x22F260u;
            goto label_22f260;
        }
    }
    ctx->pc = 0x22F258u;
label_22f258:
    // 0x22f258: 0xc08bd96  jal         func_22F658
label_22f25c:
    if (ctx->pc == 0x22F25Cu) {
        ctx->pc = 0x22F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F258u;
        // 0x22f25c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F260u;
        goto label_22f260;
    }
    ctx->pc = 0x22F258u;
    SET_GPR_U32(ctx, 31, 0x22F260u);
    ctx->pc = 0x22F25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F258u;
    // 0x22f25c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x22F258u, 0x22F260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F260u;
label_22f260:
    // 0x22f260: 0xc087502  jal         func_21D408
label_22f264:
    if (ctx->pc == 0x22F264u) {
        ctx->pc = 0x22F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F260u;
        // 0x22f264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F268u;
        goto label_22f268;
    }
    ctx->pc = 0x22F260u;
    SET_GPR_U32(ctx, 31, 0x22F268u);
    ctx->pc = 0x22F264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F260u;
    // 0x22f264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x22F260u, 0x22F268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F268u;
label_22f268:
    // 0x22f268: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22f268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22f26c:
    // 0x22f26c: 0xc0a32e6  jal         func_28CB98
label_22f270:
    if (ctx->pc == 0x22F270u) {
        ctx->pc = 0x22F270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F26Cu;
        // 0x22f270: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F274u;
        goto label_22f274;
    }
    ctx->pc = 0x22F26Cu;
    SET_GPR_U32(ctx, 31, 0x22F274u);
    ctx->pc = 0x22F270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F26Cu;
    // 0x22f270: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CB98u, 0x22F26Cu, 0x22F274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F274u;
label_22f274:
    // 0x22f274: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x22f274u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_22f278:
    // 0x22f278: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x22f278u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_22f27c:
    // 0x22f27c: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_22f280:
    if (ctx->pc == 0x22F280u) {
        ctx->pc = 0x22F280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F27Cu;
        // 0x22f280: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F284u;
        goto label_22f284;
    }
    ctx->pc = 0x22F27Cu;
    {
        const bool branch_taken_0x22f27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F27Cu;
        // 0x22f280: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f27c) {
            ctx->pc = 0x22F3ACu;
            goto label_22f3ac;
        }
    }
    ctx->pc = 0x22F284u;
label_22f284:
    // 0x22f284: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x22f284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_22f288:
    // 0x22f288: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x22f288u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_22f28c:
    // 0x22f28c: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x22f28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
label_22f290:
    // 0x22f290: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x22f290u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_22f294:
    // 0x22f294: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22f294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_22f298:
    // 0x22f298: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x22f298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_22f29c:
    // 0x22f29c: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_22f2a0:
    if (ctx->pc == 0x22F2A0u) {
        ctx->pc = 0x22F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F29Cu;
        // 0x22f2a0: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F2A4u;
        goto label_22f2a4;
    }
    ctx->pc = 0x22F29Cu;
    {
        const bool branch_taken_0x22f29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F29Cu;
        // 0x22f2a0: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f29c) {
            ctx->pc = 0x22F3ACu;
            goto label_22f3ac;
        }
    }
    ctx->pc = 0x22F2A4u;
label_22f2a4:
    // 0x22f2a4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x22f2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_22f2a8:
    // 0x22f2a8: 0x24719250  addiu       $s1, $v1, -0x6DB0
    ctx->pc = 0x22f2a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939216));
label_22f2ac:
    // 0x22f2ac: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x22f2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_22f2b0:
    // 0x22f2b0: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
label_22f2b4:
    if (ctx->pc == 0x22F2B4u) {
        ctx->pc = 0x22F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2B0u;
        // 0x22f2b4: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F2B8u;
        goto label_22f2b8;
    }
    ctx->pc = 0x22F2B0u;
    {
        const bool branch_taken_0x22f2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2B0u;
        // 0x22f2b4: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f2b0) {
            ctx->pc = 0x22F3ACu;
            goto label_22f3ac;
        }
    }
    ctx->pc = 0x22F2B8u;
label_22f2b8:
    // 0x22f2b8: 0x908256e2  lbu         $v0, 0x56E2($a0)
    ctx->pc = 0x22f2b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
label_22f2bc:
    // 0x22f2bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_22f2c0:
    if (ctx->pc == 0x22F2C0u) {
        ctx->pc = 0x22F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2BCu;
        // 0x22f2c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F2C4u;
        goto label_22f2c4;
    }
    ctx->pc = 0x22F2BCu;
    {
        const bool branch_taken_0x22f2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2BCu;
        // 0x22f2c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f2bc) {
            ctx->pc = 0x22F2D0u;
            goto label_22f2d0;
        }
    }
    ctx->pc = 0x22F2C4u;
label_22f2c4:
    // 0x22f2c4: 0xc107444  jal         func_41D110
label_22f2c8:
    if (ctx->pc == 0x22F2C8u) {
        ctx->pc = 0x22F2CCu;
        goto label_22f2cc;
    }
    ctx->pc = 0x22F2C4u;
    SET_GPR_U32(ctx, 31, 0x22F2CCu);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x22F2C4u, 0x22F2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F2CCu;
label_22f2cc:
    // 0x22f2cc: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x22f2ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22f2d0:
    // 0x22f2d0: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
label_22f2d4:
    if (ctx->pc == 0x22F2D4u) {
        ctx->pc = 0x22F2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2D0u;
        // 0x22f2d4: 0x8e03489c  lw          $v1, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F2D8u;
        goto label_22f2d8;
    }
    ctx->pc = 0x22F2D0u;
    {
        const bool branch_taken_0x22f2d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2D0u;
        // 0x22f2d4: 0x8e03489c  lw          $v1, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f2d0) {
            ctx->pc = 0x22F3ACu;
            goto label_22f3ac;
        }
    }
    ctx->pc = 0x22F2D8u;
label_22f2d8:
    // 0x22f2d8: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x22f2d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_22f2dc:
    // 0x22f2dc: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x22f2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
label_22f2e0:
    // 0x22f2e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x22f2e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_22f2e4:
    // 0x22f2e4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22f2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_22f2e8:
    // 0x22f2e8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x22f2e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_22f2ec:
    // 0x22f2ec: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_22f2f0:
    if (ctx->pc == 0x22F2F0u) {
        ctx->pc = 0x22F2F4u;
        goto label_22f2f4;
    }
    ctx->pc = 0x22F2ECu;
    {
        const bool branch_taken_0x22f2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f2ec) {
            ctx->pc = 0x22F324u;
            goto label_22f324;
        }
    }
    ctx->pc = 0x22F2F4u;
label_22f2f4:
    // 0x22f2f4: 0xc073a8e  jal         func_1CEA38
label_22f2f8:
    if (ctx->pc == 0x22F2F8u) {
        ctx->pc = 0x22F2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2F4u;
        // 0x22f2f8: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F2FCu;
        goto label_22f2fc;
    }
    ctx->pc = 0x22F2F4u;
    SET_GPR_U32(ctx, 31, 0x22F2FCu);
    ctx->pc = 0x22F2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F2F4u;
    // 0x22f2f8: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x22F2F4u, 0x22F2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F2FCu;
label_22f2fc:
    // 0x22f2fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_22f300:
    if (ctx->pc == 0x22F300u) {
        ctx->pc = 0x22F300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2FCu;
        // 0x22f300: 0x8e07489c  lw          $a3, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F304u;
        goto label_22f304;
    }
    ctx->pc = 0x22F2FCu;
    {
        const bool branch_taken_0x22f2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2FCu;
        // 0x22f300: 0x8e07489c  lw          $a3, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f2fc) {
            ctx->pc = 0x22F320u;
            goto label_22f320;
        }
    }
    ctx->pc = 0x22F304u;
label_22f304:
    // 0x22f304: 0x3c069fff  lui         $a2, 0x9FFF
    ctx->pc = 0x22f304u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40959 << 16));
label_22f308:
    // 0x22f308: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x22f308u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_22f30c:
    // 0x22f30c: 0x63078  dsll        $a2, $a2, 1
    ctx->pc = 0x22f30cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
label_22f310:
    // 0x22f310: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x22f310u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
label_22f314:
    // 0x22f314: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22f314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22f318:
    // 0x22f318: 0x10000014  b           . + 4 + (0x14 << 2)
label_22f31c:
    if (ctx->pc == 0x22F31Cu) {
        ctx->pc = 0x22F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F318u;
        // 0x22f31c: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F320u;
        goto label_22f320;
    }
    ctx->pc = 0x22F318u;
    {
        const bool branch_taken_0x22f318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F318u;
        // 0x22f31c: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f318) {
            ctx->pc = 0x22F36Cu;
            goto label_22f36c;
        }
    }
    ctx->pc = 0x22F320u;
label_22f320:
    // 0x22f320: 0x8e03489c  lw          $v1, 0x489C($s0)
    ctx->pc = 0x22f320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_22f324:
    // 0x22f324: 0x3404c000  ori         $a0, $zero, 0xC000
    ctx->pc = 0x22f324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
label_22f328:
    // 0x22f328: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x22f328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_22f32c:
    // 0x22f32c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x22f32cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_22f330:
    // 0x22f330: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x22f330u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_22f334:
    // 0x22f334: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x22f334u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_22f338:
    // 0x22f338: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x22f338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_22f33c:
    // 0x22f33c: 0x5445001c  bnel        $v0, $a1, . + 4 + (0x1C << 2)
label_22f340:
    if (ctx->pc == 0x22F340u) {
        ctx->pc = 0x22F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F33Cu;
        // 0x22f340: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F344u;
        goto label_22f344;
    }
    ctx->pc = 0x22F33Cu;
    {
        const bool branch_taken_0x22f33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x22f33c) {
            ctx->pc = 0x22F340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F33Cu;
            // 0x22f340: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F3B0u;
            goto label_22f3b0;
        }
    }
    ctx->pc = 0x22F344u;
label_22f344:
    // 0x22f344: 0xc073a8e  jal         func_1CEA38
label_22f348:
    if (ctx->pc == 0x22F348u) {
        ctx->pc = 0x22F348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F344u;
        // 0x22f348: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F34Cu;
        goto label_22f34c;
    }
    ctx->pc = 0x22F344u;
    SET_GPR_U32(ctx, 31, 0x22F34Cu);
    ctx->pc = 0x22F348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F344u;
    // 0x22f348: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x22F344u, 0x22F34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F34Cu;
label_22f34c:
    // 0x22f34c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_22f350:
    if (ctx->pc == 0x22F350u) {
        ctx->pc = 0x22F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F34Cu;
        // 0x22f350: 0x8e07489c  lw          $a3, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F354u;
        goto label_22f354;
    }
    ctx->pc = 0x22F34Cu;
    {
        const bool branch_taken_0x22f34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F34Cu;
        // 0x22f350: 0x8e07489c  lw          $a3, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f34c) {
            ctx->pc = 0x22F3ACu;
            goto label_22f3ac;
        }
    }
    ctx->pc = 0x22F354u;
label_22f354:
    // 0x22f354: 0x3c069fff  lui         $a2, 0x9FFF
    ctx->pc = 0x22f354u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40959 << 16));
label_22f358:
    // 0x22f358: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x22f358u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_22f35c:
    // 0x22f35c: 0x63078  dsll        $a2, $a2, 1
    ctx->pc = 0x22f35cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
label_22f360:
    // 0x22f360: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x22f360u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
label_22f364:
    // 0x22f364: 0x26449250  addiu       $a0, $s2, -0x6DB0
    ctx->pc = 0x22f364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294939216));
label_22f368:
    // 0x22f368: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x22f368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_22f36c:
    // 0x22f36c: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x22f36cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_22f370:
    // 0x22f370: 0x310b8  dsll        $v0, $v1, 2
    ctx->pc = 0x22f370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 2);
label_22f374:
    // 0x22f374: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x22f374u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_22f378:
    // 0x22f378: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22f378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_22f37c:
    // 0x22f37c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x22f37cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_22f380:
    // 0x22f380: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22f380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_22f384:
    // 0x22f384: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22f384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_22f388:
    // 0x22f388: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x22f388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
label_22f38c:
    // 0x22f38c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22f38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_22f390:
    // 0x22f390: 0xc07387a  jal         func_1CE1E8
label_22f394:
    if (ctx->pc == 0x22F394u) {
        ctx->pc = 0x22F394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F390u;
        // 0x22f394: 0xfce30000  sd          $v1, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F398u;
        goto label_22f398;
    }
    ctx->pc = 0x22F390u;
    SET_GPR_U32(ctx, 31, 0x22F398u);
    ctx->pc = 0x22F394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F390u;
    // 0x22f394: 0xfce30000  sd          $v1, 0x0($a3) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE1E8u, 0x22F390u, 0x22F398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F398u;
label_22f398:
    // 0x22f398: 0x10000005  b           . + 4 + (0x5 << 2)
label_22f39c:
    if (ctx->pc == 0x22F39Cu) {
        ctx->pc = 0x22F39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F398u;
        // 0x22f39c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F3A0u;
        goto label_22f3a0;
    }
    ctx->pc = 0x22F398u;
    {
        const bool branch_taken_0x22f398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F398u;
        // 0x22f39c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f398) {
            ctx->pc = 0x22F3B0u;
            goto label_22f3b0;
        }
    }
    ctx->pc = 0x22F3A0u;
label_22f3a0:
    // 0x22f3a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22f3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22f3a4:
    // 0x22f3a4: 0xc08bd3e  jal         func_22F4F8
label_22f3a8:
    if (ctx->pc == 0x22F3A8u) {
        ctx->pc = 0x22F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3A4u;
        // 0x22f3a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F3ACu;
        goto label_22f3ac;
    }
    ctx->pc = 0x22F3A4u;
    SET_GPR_U32(ctx, 31, 0x22F3ACu);
    ctx->pc = 0x22F3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F3A4u;
    // 0x22f3a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F4F8u, 0x22F3A4u, 0x22F3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F3ACu;
label_22f3ac:
    // 0x22f3ac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22f3acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22f3b0:
    // 0x22f3b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22f3b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22f3b4:
    // 0x22f3b4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x22f3b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22f3b8:
    // 0x22f3b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22f3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22f3bc:
    // 0x22f3bc: 0x3e00008  jr          $ra
label_22f3c0:
    if (ctx->pc == 0x22F3C0u) {
        ctx->pc = 0x22F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3BCu;
        // 0x22f3c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F3C4u;
        goto label_22f3c4;
    }
    ctx->pc = 0x22F3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3BCu;
        // 0x22f3c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F3C4u;
label_22f3c4:
    // 0x22f3c4: 0x0  nop
    ctx->pc = 0x22f3c4u;
    // NOP
    ctx->pc = 0x22f3c8u;
}
