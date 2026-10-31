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

// Function: sub_00239370
// Address: 0x239370 - 0x239558
void sub_00239370_0x239370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239370_0x239370");
#endif

    switch (ctx->pc) {
        case 0x239370u: goto label_239370;
        case 0x239374u: goto label_239374;
        case 0x239378u: goto label_239378;
        case 0x23937cu: goto label_23937c;
        case 0x239380u: goto label_239380;
        case 0x239384u: goto label_239384;
        case 0x239388u: goto label_239388;
        case 0x23938cu: goto label_23938c;
        case 0x239390u: goto label_239390;
        case 0x239394u: goto label_239394;
        case 0x239398u: goto label_239398;
        case 0x23939cu: goto label_23939c;
        case 0x2393a0u: goto label_2393a0;
        case 0x2393a4u: goto label_2393a4;
        case 0x2393a8u: goto label_2393a8;
        case 0x2393acu: goto label_2393ac;
        case 0x2393b0u: goto label_2393b0;
        case 0x2393b4u: goto label_2393b4;
        case 0x2393b8u: goto label_2393b8;
        case 0x2393bcu: goto label_2393bc;
        case 0x2393c0u: goto label_2393c0;
        case 0x2393c4u: goto label_2393c4;
        case 0x2393c8u: goto label_2393c8;
        case 0x2393ccu: goto label_2393cc;
        case 0x2393d0u: goto label_2393d0;
        case 0x2393d4u: goto label_2393d4;
        case 0x2393d8u: goto label_2393d8;
        case 0x2393dcu: goto label_2393dc;
        case 0x2393e0u: goto label_2393e0;
        case 0x2393e4u: goto label_2393e4;
        case 0x2393e8u: goto label_2393e8;
        case 0x2393ecu: goto label_2393ec;
        case 0x2393f0u: goto label_2393f0;
        case 0x2393f4u: goto label_2393f4;
        case 0x2393f8u: goto label_2393f8;
        case 0x2393fcu: goto label_2393fc;
        case 0x239400u: goto label_239400;
        case 0x239404u: goto label_239404;
        case 0x239408u: goto label_239408;
        case 0x23940cu: goto label_23940c;
        case 0x239410u: goto label_239410;
        case 0x239414u: goto label_239414;
        case 0x239418u: goto label_239418;
        case 0x23941cu: goto label_23941c;
        case 0x239420u: goto label_239420;
        case 0x239424u: goto label_239424;
        case 0x239428u: goto label_239428;
        case 0x23942cu: goto label_23942c;
        case 0x239430u: goto label_239430;
        case 0x239434u: goto label_239434;
        case 0x239438u: goto label_239438;
        case 0x23943cu: goto label_23943c;
        case 0x239440u: goto label_239440;
        case 0x239444u: goto label_239444;
        case 0x239448u: goto label_239448;
        case 0x23944cu: goto label_23944c;
        case 0x239450u: goto label_239450;
        case 0x239454u: goto label_239454;
        case 0x239458u: goto label_239458;
        case 0x23945cu: goto label_23945c;
        case 0x239460u: goto label_239460;
        case 0x239464u: goto label_239464;
        case 0x239468u: goto label_239468;
        case 0x23946cu: goto label_23946c;
        case 0x239470u: goto label_239470;
        case 0x239474u: goto label_239474;
        case 0x239478u: goto label_239478;
        case 0x23947cu: goto label_23947c;
        case 0x239480u: goto label_239480;
        case 0x239484u: goto label_239484;
        case 0x239488u: goto label_239488;
        case 0x23948cu: goto label_23948c;
        case 0x239490u: goto label_239490;
        case 0x239494u: goto label_239494;
        case 0x239498u: goto label_239498;
        case 0x23949cu: goto label_23949c;
        case 0x2394a0u: goto label_2394a0;
        case 0x2394a4u: goto label_2394a4;
        case 0x2394a8u: goto label_2394a8;
        case 0x2394acu: goto label_2394ac;
        case 0x2394b0u: goto label_2394b0;
        case 0x2394b4u: goto label_2394b4;
        case 0x2394b8u: goto label_2394b8;
        case 0x2394bcu: goto label_2394bc;
        case 0x2394c0u: goto label_2394c0;
        case 0x2394c4u: goto label_2394c4;
        case 0x2394c8u: goto label_2394c8;
        case 0x2394ccu: goto label_2394cc;
        case 0x2394d0u: goto label_2394d0;
        case 0x2394d4u: goto label_2394d4;
        case 0x2394d8u: goto label_2394d8;
        case 0x2394dcu: goto label_2394dc;
        case 0x2394e0u: goto label_2394e0;
        case 0x2394e4u: goto label_2394e4;
        case 0x2394e8u: goto label_2394e8;
        case 0x2394ecu: goto label_2394ec;
        case 0x2394f0u: goto label_2394f0;
        case 0x2394f4u: goto label_2394f4;
        case 0x2394f8u: goto label_2394f8;
        case 0x2394fcu: goto label_2394fc;
        case 0x239500u: goto label_239500;
        case 0x239504u: goto label_239504;
        case 0x239508u: goto label_239508;
        case 0x23950cu: goto label_23950c;
        case 0x239510u: goto label_239510;
        case 0x239514u: goto label_239514;
        case 0x239518u: goto label_239518;
        case 0x23951cu: goto label_23951c;
        case 0x239520u: goto label_239520;
        case 0x239524u: goto label_239524;
        case 0x239528u: goto label_239528;
        case 0x23952cu: goto label_23952c;
        case 0x239530u: goto label_239530;
        case 0x239534u: goto label_239534;
        case 0x239538u: goto label_239538;
        case 0x23953cu: goto label_23953c;
        case 0x239540u: goto label_239540;
        case 0x239544u: goto label_239544;
        case 0x239548u: goto label_239548;
        case 0x23954cu: goto label_23954c;
        case 0x239550u: goto label_239550;
        case 0x239554u: goto label_239554;
        default: break;
    }

    ctx->pc = 0x239370u;

label_239370:
    // 0x239370: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x239370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_239374:
    // 0x239374: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x239374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_239378:
    // 0x239378: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x239378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_23937c:
    // 0x23937c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23937cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_239380:
    // 0x239380: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x239380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_239384:
    // 0x239384: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x239384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_239388:
    // 0x239388: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x239388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_23938c:
    // 0x23938c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x23938cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_239390:
    // 0x239390: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x239390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_239394:
    // 0x239394: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x239394u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_239398:
    // 0x239398: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x239398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_23939c:
    // 0x23939c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23939cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2393a0:
    // 0x2393a0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2393a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_2393a4:
    // 0x2393a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2393a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2393a8:
    // 0x2393a8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2393a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_2393ac:
    // 0x2393ac: 0xc0e4060  jal         func_390180
label_2393b0:
    if (ctx->pc == 0x2393B0u) {
        ctx->pc = 0x2393B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393ACu;
        // 0x2393b0: 0xafa90008  sw          $t1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2393B4u;
        goto label_2393b4;
    }
    ctx->pc = 0x2393ACu;
    SET_GPR_U32(ctx, 31, 0x2393B4u);
    ctx->pc = 0x2393B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2393ACu;
    // 0x2393b0: 0xafa90008  sw          $t1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2393ACu, 0x2393B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2393B4u;
label_2393b4:
    // 0x2393b4: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_2393b8:
    if (ctx->pc == 0x2393B8u) {
        ctx->pc = 0x2393BCu;
        goto label_2393bc;
    }
    ctx->pc = 0x2393B4u;
    {
        const bool branch_taken_0x2393b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2393b4) {
            ctx->pc = 0x239498u;
            goto label_239498;
        }
    }
    ctx->pc = 0x2393BCu;
label_2393bc:
    // 0x2393bc: 0x12000036  beqz        $s0, . + 4 + (0x36 << 2)
label_2393c0:
    if (ctx->pc == 0x2393C0u) {
        ctx->pc = 0x2393C4u;
        goto label_2393c4;
    }
    ctx->pc = 0x2393BCu;
    {
        const bool branch_taken_0x2393bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2393bc) {
            ctx->pc = 0x239498u;
            goto label_239498;
        }
    }
    ctx->pc = 0x2393C4u;
label_2393c4:
    // 0x2393c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2393c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2393c8:
    // 0x2393c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2393c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2393cc:
    // 0x2393cc: 0xc0e409a  jal         func_390268
label_2393d0:
    if (ctx->pc == 0x2393D0u) {
        ctx->pc = 0x2393D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393CCu;
        // 0x2393d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2393D4u;
        goto label_2393d4;
    }
    ctx->pc = 0x2393CCu;
    SET_GPR_U32(ctx, 31, 0x2393D4u);
    ctx->pc = 0x2393D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2393CCu;
    // 0x2393d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2393CCu, 0x2393D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2393D4u;
label_2393d4:
    // 0x2393d4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2393d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2393d8:
    // 0x2393d8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x2393d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_2393dc:
    // 0x2393dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2393dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2393e0:
    // 0x2393e0: 0x27b30004  addiu       $s3, $sp, 0x4
    ctx->pc = 0x2393e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_2393e4:
    // 0x2393e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2393e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2393e8:
    // 0x2393e8: 0x248491e0  addiu       $a0, $a0, -0x6E20
    ctx->pc = 0x2393e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
label_2393ec:
    // 0x2393ec: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2393ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2393f0:
    // 0x2393f0: 0xc050fda  jal         func_143F68
label_2393f4:
    if (ctx->pc == 0x2393F4u) {
        ctx->pc = 0x2393F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393F0u;
        // 0x2393f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2393F8u;
        goto label_2393f8;
    }
    ctx->pc = 0x2393F0u;
    SET_GPR_U32(ctx, 31, 0x2393F8u);
    ctx->pc = 0x2393F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2393F0u;
    // 0x2393f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x2393F0u, 0x2393F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2393F8u;
label_2393f8:
    // 0x2393f8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2393f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2393fc:
    // 0x2393fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2393fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239400:
    // 0x239400: 0x8c662b04  lw          $a2, 0x2B04($v1)
    ctx->pc = 0x239400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11012)));
label_239404:
    // 0x239404: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x239404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_239408:
    // 0x239408: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x239408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_23940c:
    // 0x23940c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x23940cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_239410:
    // 0x239410: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x239410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_239414:
    // 0x239414: 0x40f809  jalr        $v0
label_239418:
    if (ctx->pc == 0x239418u) {
        ctx->pc = 0x239418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239414u;
        // 0x239418: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23941Cu;
        goto label_23941c;
    }
    ctx->pc = 0x239414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23941Cu);
        ctx->pc = 0x239418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239414u;
        // 0x239418: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239414u, 0x23941Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23941Cu;
label_23941c:
    // 0x23941c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23941cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_239420:
    // 0x239420: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x239420u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_239424:
    // 0x239424: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x239424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_239428:
    // 0x239428: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x239428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23942c:
    // 0x23942c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x23942cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_239430:
    // 0x239430: 0xc087900  jal         func_21E400
label_239434:
    if (ctx->pc == 0x239434u) {
        ctx->pc = 0x239434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239430u;
        // 0x239434: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x239438u;
        goto label_239438;
    }
    ctx->pc = 0x239430u;
    SET_GPR_U32(ctx, 31, 0x239438u);
    ctx->pc = 0x239434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239430u;
    // 0x239434: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E400u, 0x239430u, 0x239438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239438u;
label_239438:
    // 0x239438: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x239438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23943c:
    // 0x23943c: 0xc043d5e  jal         func_10F578
label_239440:
    if (ctx->pc == 0x239440u) {
        ctx->pc = 0x239440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23943Cu;
        // 0x239440: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239444u;
        goto label_239444;
    }
    ctx->pc = 0x23943Cu;
    SET_GPR_U32(ctx, 31, 0x239444u);
    ctx->pc = 0x239440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23943Cu;
    // 0x239440: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x23943Cu, 0x239444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239444u;
label_239444:
    // 0x239444: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_239448:
    if (ctx->pc == 0x239448u) {
        ctx->pc = 0x239448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239444u;
        // 0x239448: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23944Cu;
        goto label_23944c;
    }
    ctx->pc = 0x239444u;
    {
        const bool branch_taken_0x239444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239444u;
        // 0x239448: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239444) {
            ctx->pc = 0x239530u;
            goto label_239530;
        }
    }
    ctx->pc = 0x23944Cu;
label_23944c:
    // 0x23944c: 0xc0e4060  jal         func_390180
label_239450:
    if (ctx->pc == 0x239450u) {
        ctx->pc = 0x239450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23944Cu;
        // 0x239450: 0x37a40008  ori         $a0, $sp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x239454u;
        goto label_239454;
    }
    ctx->pc = 0x23944Cu;
    SET_GPR_U32(ctx, 31, 0x239454u);
    ctx->pc = 0x239450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23944Cu;
    // 0x239450: 0x37a40008  ori         $a0, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23944Cu, 0x239454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239454u;
label_239454:
    // 0x239454: 0xc0e896e  jal         func_3A25B8
label_239458:
    if (ctx->pc == 0x239458u) {
        ctx->pc = 0x239458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239454u;
        // 0x239458: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23945Cu;
        goto label_23945c;
    }
    ctx->pc = 0x239454u;
    SET_GPR_U32(ctx, 31, 0x23945Cu);
    ctx->pc = 0x239458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239454u;
    // 0x239458: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x239454u, 0x23945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23945Cu;
label_23945c:
    // 0x23945c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23945cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239460:
    // 0x239460: 0x52000033  beql        $s0, $zero, . + 4 + (0x33 << 2)
label_239464:
    if (ctx->pc == 0x239464u) {
        ctx->pc = 0x239464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239460u;
        // 0x239464: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239468u;
        goto label_239468;
    }
    ctx->pc = 0x239460u;
    {
        const bool branch_taken_0x239460 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x239460) {
            ctx->pc = 0x239464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239460u;
            // 0x239464: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239530u;
            goto label_239530;
        }
    }
    ctx->pc = 0x239468u;
label_239468:
    // 0x239468: 0xc043d5e  jal         func_10F578
label_23946c:
    if (ctx->pc == 0x23946Cu) {
        ctx->pc = 0x23946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239468u;
        // 0x23946c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239470u;
        goto label_239470;
    }
    ctx->pc = 0x239468u;
    SET_GPR_U32(ctx, 31, 0x239470u);
    ctx->pc = 0x23946Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239468u;
    // 0x23946c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x239468u, 0x239470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239470u;
label_239470:
    // 0x239470: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_239474:
    if (ctx->pc == 0x239474u) {
        ctx->pc = 0x239474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239470u;
        // 0x239474: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239478u;
        goto label_239478;
    }
    ctx->pc = 0x239470u;
    {
        const bool branch_taken_0x239470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239470u;
        // 0x239474: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239470) {
            ctx->pc = 0x23952Cu;
            goto label_23952c;
        }
    }
    ctx->pc = 0x239478u;
label_239478:
    // 0x239478: 0x8c460044  lw          $a2, 0x44($v0)
    ctx->pc = 0x239478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_23947c:
    // 0x23947c: 0x26a40284  addiu       $a0, $s5, 0x284
    ctx->pc = 0x23947cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 644));
label_239480:
    // 0x239480: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x239480u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_239484:
    // 0x239484: 0x24c601f4  addiu       $a2, $a2, 0x1F4
    ctx->pc = 0x239484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 500));
label_239488:
    // 0x239488: 0xc0a6800  jal         func_29A000
label_23948c:
    if (ctx->pc == 0x23948Cu) {
        ctx->pc = 0x23948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239488u;
        // 0x23948c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239490u;
        goto label_239490;
    }
    ctx->pc = 0x239488u;
    SET_GPR_U32(ctx, 31, 0x239490u);
    ctx->pc = 0x23948Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239488u;
    // 0x23948c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x239488u, 0x239490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239490u;
label_239490:
    // 0x239490: 0x10000027  b           . + 4 + (0x27 << 2)
label_239494:
    if (ctx->pc == 0x239494u) {
        ctx->pc = 0x239494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239490u;
        // 0x239494: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239498u;
        goto label_239498;
    }
    ctx->pc = 0x239490u;
    {
        const bool branch_taken_0x239490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239490u;
        // 0x239494: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239490) {
            ctx->pc = 0x239530u;
            goto label_239530;
        }
    }
    ctx->pc = 0x239498u;
label_239498:
    // 0x239498: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
label_23949c:
    if (ctx->pc == 0x23949Cu) {
        ctx->pc = 0x23949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239498u;
        // 0x23949c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2394A0u;
        goto label_2394a0;
    }
    ctx->pc = 0x239498u;
    {
        const bool branch_taken_0x239498 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x23949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239498u;
        // 0x23949c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239498) {
            ctx->pc = 0x23952Cu;
            goto label_23952c;
        }
    }
    ctx->pc = 0x2394A0u;
label_2394a0:
    // 0x2394a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2394a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2394a4:
    // 0x2394a4: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x2394a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_2394a8:
    // 0x2394a8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2394a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2394ac:
    // 0x2394ac: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x2394acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_2394b0:
    // 0x2394b0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2394b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2394b4:
    // 0x2394b4: 0x40f809  jalr        $v0
label_2394b8:
    if (ctx->pc == 0x2394B8u) {
        ctx->pc = 0x2394B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394B4u;
        // 0x2394b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2394BCu;
        goto label_2394bc;
    }
    ctx->pc = 0x2394B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2394BCu);
        ctx->pc = 0x2394B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394B4u;
        // 0x2394b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2394B4u, 0x2394BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2394BCu;
label_2394bc:
    // 0x2394bc: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_2394c0:
    if (ctx->pc == 0x2394C0u) {
        ctx->pc = 0x2394C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394BCu;
        // 0x2394c0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2394C4u;
        goto label_2394c4;
    }
    ctx->pc = 0x2394BCu;
    {
        const bool branch_taken_0x2394bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2394bc) {
            ctx->pc = 0x2394C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2394BCu;
            // 0x2394c0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239530u;
            goto label_239530;
        }
    }
    ctx->pc = 0x2394C4u;
label_2394c4:
    // 0x2394c4: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
label_2394c8:
    if (ctx->pc == 0x2394C8u) {
        ctx->pc = 0x2394C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394C4u;
        // 0x2394c8: 0x8e062b04  lw          $a2, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2394CCu;
        goto label_2394cc;
    }
    ctx->pc = 0x2394C4u;
    {
        const bool branch_taken_0x2394c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2394C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394C4u;
        // 0x2394c8: 0x8e062b04  lw          $a2, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2394c4) {
            ctx->pc = 0x23950Cu;
            goto label_23950c;
        }
    }
    ctx->pc = 0x2394CCu;
label_2394cc:
    // 0x2394cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2394ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2394d0:
    // 0x2394d0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2394d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2394d4:
    // 0x2394d4: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x2394d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_2394d8:
    // 0x2394d8: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x2394d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_2394dc:
    // 0x2394dc: 0x60f809  jalr        $v1
label_2394e0:
    if (ctx->pc == 0x2394E0u) {
        ctx->pc = 0x2394E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394DCu;
        // 0x2394e0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2394E4u;
        goto label_2394e4;
    }
    ctx->pc = 0x2394DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2394E4u);
        ctx->pc = 0x2394E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394DCu;
        // 0x2394e0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2394DCu, 0x2394E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2394E4u;
label_2394e4:
    // 0x2394e4: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x2394e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_2394e8:
    // 0x2394e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2394e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2394ec:
    // 0x2394ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2394ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2394f0:
    // 0x2394f0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2394f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2394f4:
    // 0x2394f4: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x2394f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_2394f8:
    // 0x2394f8: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x2394f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_2394fc:
    // 0x2394fc: 0x60f809  jalr        $v1
label_239500:
    if (ctx->pc == 0x239500u) {
        ctx->pc = 0x239500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394FCu;
        // 0x239500: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239504u;
        goto label_239504;
    }
    ctx->pc = 0x2394FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x239504u);
        ctx->pc = 0x239500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394FCu;
        // 0x239500: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2394FCu, 0x239504u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x239504u;
label_239504:
    // 0x239504: 0x1000000a  b           . + 4 + (0xA << 2)
label_239508:
    if (ctx->pc == 0x239508u) {
        ctx->pc = 0x239508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239504u;
        // 0x239508: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23950Cu;
        goto label_23950c;
    }
    ctx->pc = 0x239504u;
    {
        const bool branch_taken_0x239504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239504u;
        // 0x239508: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239504) {
            ctx->pc = 0x239530u;
            goto label_239530;
        }
    }
    ctx->pc = 0x23950Cu;
label_23950c:
    // 0x23950c: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x23950cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_239510:
    // 0x239510: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x239510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239514:
    // 0x239514: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x239514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239518:
    // 0x239518: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x239518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_23951c:
    // 0x23951c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x23951cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_239520:
    // 0x239520: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x239520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_239524:
    // 0x239524: 0x60f809  jalr        $v1
label_239528:
    if (ctx->pc == 0x239528u) {
        ctx->pc = 0x239528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239524u;
        // 0x239528: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23952Cu;
        goto label_23952c;
    }
    ctx->pc = 0x239524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23952Cu);
        ctx->pc = 0x239528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239524u;
        // 0x239528: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239524u, 0x23952Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23952Cu;
label_23952c:
    // 0x23952c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x23952cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_239530:
    // 0x239530: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x239530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_239534:
    // 0x239534: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x239534u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_239538:
    // 0x239538: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x239538u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23953c:
    // 0x23953c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x23953cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_239540:
    // 0x239540: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x239540u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_239544:
    // 0x239544: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_239548:
    // 0x239548: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x239548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_23954c:
    // 0x23954c: 0x3e00008  jr          $ra
label_239550:
    if (ctx->pc == 0x239550u) {
        ctx->pc = 0x239550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23954Cu;
        // 0x239550: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239554u;
        goto label_239554;
    }
    ctx->pc = 0x23954Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23954Cu;
        // 0x239550: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23954Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239554u;
label_239554:
    // 0x239554: 0x0  nop
    ctx->pc = 0x239554u;
    // NOP
    ctx->pc = 0x239558u;
}
