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

// Function: sub_002783B0
// Address: 0x2783b0 - 0x278620
void sub_002783B0_0x2783b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002783B0_0x2783b0");
#endif

    switch (ctx->pc) {
        case 0x2783b0u: goto label_2783b0;
        case 0x2783b4u: goto label_2783b4;
        case 0x2783b8u: goto label_2783b8;
        case 0x2783bcu: goto label_2783bc;
        case 0x2783c0u: goto label_2783c0;
        case 0x2783c4u: goto label_2783c4;
        case 0x2783c8u: goto label_2783c8;
        case 0x2783ccu: goto label_2783cc;
        case 0x2783d0u: goto label_2783d0;
        case 0x2783d4u: goto label_2783d4;
        case 0x2783d8u: goto label_2783d8;
        case 0x2783dcu: goto label_2783dc;
        case 0x2783e0u: goto label_2783e0;
        case 0x2783e4u: goto label_2783e4;
        case 0x2783e8u: goto label_2783e8;
        case 0x2783ecu: goto label_2783ec;
        case 0x2783f0u: goto label_2783f0;
        case 0x2783f4u: goto label_2783f4;
        case 0x2783f8u: goto label_2783f8;
        case 0x2783fcu: goto label_2783fc;
        case 0x278400u: goto label_278400;
        case 0x278404u: goto label_278404;
        case 0x278408u: goto label_278408;
        case 0x27840cu: goto label_27840c;
        case 0x278410u: goto label_278410;
        case 0x278414u: goto label_278414;
        case 0x278418u: goto label_278418;
        case 0x27841cu: goto label_27841c;
        case 0x278420u: goto label_278420;
        case 0x278424u: goto label_278424;
        case 0x278428u: goto label_278428;
        case 0x27842cu: goto label_27842c;
        case 0x278430u: goto label_278430;
        case 0x278434u: goto label_278434;
        case 0x278438u: goto label_278438;
        case 0x27843cu: goto label_27843c;
        case 0x278440u: goto label_278440;
        case 0x278444u: goto label_278444;
        case 0x278448u: goto label_278448;
        case 0x27844cu: goto label_27844c;
        case 0x278450u: goto label_278450;
        case 0x278454u: goto label_278454;
        case 0x278458u: goto label_278458;
        case 0x27845cu: goto label_27845c;
        case 0x278460u: goto label_278460;
        case 0x278464u: goto label_278464;
        case 0x278468u: goto label_278468;
        case 0x27846cu: goto label_27846c;
        case 0x278470u: goto label_278470;
        case 0x278474u: goto label_278474;
        case 0x278478u: goto label_278478;
        case 0x27847cu: goto label_27847c;
        case 0x278480u: goto label_278480;
        case 0x278484u: goto label_278484;
        case 0x278488u: goto label_278488;
        case 0x27848cu: goto label_27848c;
        case 0x278490u: goto label_278490;
        case 0x278494u: goto label_278494;
        case 0x278498u: goto label_278498;
        case 0x27849cu: goto label_27849c;
        case 0x2784a0u: goto label_2784a0;
        case 0x2784a4u: goto label_2784a4;
        case 0x2784a8u: goto label_2784a8;
        case 0x2784acu: goto label_2784ac;
        case 0x2784b0u: goto label_2784b0;
        case 0x2784b4u: goto label_2784b4;
        case 0x2784b8u: goto label_2784b8;
        case 0x2784bcu: goto label_2784bc;
        case 0x2784c0u: goto label_2784c0;
        case 0x2784c4u: goto label_2784c4;
        case 0x2784c8u: goto label_2784c8;
        case 0x2784ccu: goto label_2784cc;
        case 0x2784d0u: goto label_2784d0;
        case 0x2784d4u: goto label_2784d4;
        case 0x2784d8u: goto label_2784d8;
        case 0x2784dcu: goto label_2784dc;
        case 0x2784e0u: goto label_2784e0;
        case 0x2784e4u: goto label_2784e4;
        case 0x2784e8u: goto label_2784e8;
        case 0x2784ecu: goto label_2784ec;
        case 0x2784f0u: goto label_2784f0;
        case 0x2784f4u: goto label_2784f4;
        case 0x2784f8u: goto label_2784f8;
        case 0x2784fcu: goto label_2784fc;
        case 0x278500u: goto label_278500;
        case 0x278504u: goto label_278504;
        case 0x278508u: goto label_278508;
        case 0x27850cu: goto label_27850c;
        case 0x278510u: goto label_278510;
        case 0x278514u: goto label_278514;
        case 0x278518u: goto label_278518;
        case 0x27851cu: goto label_27851c;
        case 0x278520u: goto label_278520;
        case 0x278524u: goto label_278524;
        case 0x278528u: goto label_278528;
        case 0x27852cu: goto label_27852c;
        case 0x278530u: goto label_278530;
        case 0x278534u: goto label_278534;
        case 0x278538u: goto label_278538;
        case 0x27853cu: goto label_27853c;
        case 0x278540u: goto label_278540;
        case 0x278544u: goto label_278544;
        case 0x278548u: goto label_278548;
        case 0x27854cu: goto label_27854c;
        case 0x278550u: goto label_278550;
        case 0x278554u: goto label_278554;
        case 0x278558u: goto label_278558;
        case 0x27855cu: goto label_27855c;
        case 0x278560u: goto label_278560;
        case 0x278564u: goto label_278564;
        case 0x278568u: goto label_278568;
        case 0x27856cu: goto label_27856c;
        case 0x278570u: goto label_278570;
        case 0x278574u: goto label_278574;
        case 0x278578u: goto label_278578;
        case 0x27857cu: goto label_27857c;
        case 0x278580u: goto label_278580;
        case 0x278584u: goto label_278584;
        case 0x278588u: goto label_278588;
        case 0x27858cu: goto label_27858c;
        case 0x278590u: goto label_278590;
        case 0x278594u: goto label_278594;
        case 0x278598u: goto label_278598;
        case 0x27859cu: goto label_27859c;
        case 0x2785a0u: goto label_2785a0;
        case 0x2785a4u: goto label_2785a4;
        case 0x2785a8u: goto label_2785a8;
        case 0x2785acu: goto label_2785ac;
        case 0x2785b0u: goto label_2785b0;
        case 0x2785b4u: goto label_2785b4;
        case 0x2785b8u: goto label_2785b8;
        case 0x2785bcu: goto label_2785bc;
        case 0x2785c0u: goto label_2785c0;
        case 0x2785c4u: goto label_2785c4;
        case 0x2785c8u: goto label_2785c8;
        case 0x2785ccu: goto label_2785cc;
        case 0x2785d0u: goto label_2785d0;
        case 0x2785d4u: goto label_2785d4;
        case 0x2785d8u: goto label_2785d8;
        case 0x2785dcu: goto label_2785dc;
        case 0x2785e0u: goto label_2785e0;
        case 0x2785e4u: goto label_2785e4;
        case 0x2785e8u: goto label_2785e8;
        case 0x2785ecu: goto label_2785ec;
        case 0x2785f0u: goto label_2785f0;
        case 0x2785f4u: goto label_2785f4;
        case 0x2785f8u: goto label_2785f8;
        case 0x2785fcu: goto label_2785fc;
        case 0x278600u: goto label_278600;
        case 0x278604u: goto label_278604;
        case 0x278608u: goto label_278608;
        case 0x27860cu: goto label_27860c;
        case 0x278610u: goto label_278610;
        case 0x278614u: goto label_278614;
        case 0x278618u: goto label_278618;
        case 0x27861cu: goto label_27861c;
        default: break;
    }

    ctx->pc = 0x2783b0u;

label_2783b0:
    // 0x2783b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2783b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2783b4:
    // 0x2783b4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2783b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2783b8:
    // 0x2783b8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2783b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_2783bc:
    // 0x2783bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2783bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2783c0:
    // 0x2783c0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2783c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_2783c4:
    // 0x2783c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2783c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2783c8:
    // 0x2783c8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2783c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_2783cc:
    // 0x2783cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2783ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2783d0:
    // 0x2783d0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2783d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_2783d4:
    // 0x2783d4: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2783d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_2783d8:
    // 0x2783d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2783d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2783dc:
    // 0x2783dc: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x2783dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_2783e0:
    // 0x2783e0: 0xc0e4060  jal         func_390180
label_2783e4:
    if (ctx->pc == 0x2783E4u) {
        ctx->pc = 0x2783E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2783E0u;
        // 0x2783e4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2783E8u;
        goto label_2783e8;
    }
    ctx->pc = 0x2783E0u;
    SET_GPR_U32(ctx, 31, 0x2783E8u);
    ctx->pc = 0x2783E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2783E0u;
    // 0x2783e4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2783E0u, 0x2783E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2783E8u;
label_2783e8:
    // 0x2783e8: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
label_2783ec:
    if (ctx->pc == 0x2783ECu) {
        ctx->pc = 0x2783ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2783E8u;
        // 0x2783ec: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2783F0u;
        goto label_2783f0;
    }
    ctx->pc = 0x2783E8u;
    {
        const bool branch_taken_0x2783e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2783ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2783E8u;
        // 0x2783ec: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2783e8) {
            ctx->pc = 0x2785F4u;
            goto label_2785f4;
        }
    }
    ctx->pc = 0x2783F0u;
label_2783f0:
    // 0x2783f0: 0x8e3500d8  lw          $s5, 0xD8($s1)
    ctx->pc = 0x2783f0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_2783f4:
    // 0x2783f4: 0x2450e758  addiu       $s0, $v0, -0x18A8
    ctx->pc = 0x2783f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960984));
label_2783f8:
    // 0x2783f8: 0xc041532  jal         func_1054C8
label_2783fc:
    if (ctx->pc == 0x2783FCu) {
        ctx->pc = 0x2783FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2783F8u;
        // 0x2783fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278400u;
        goto label_278400;
    }
    ctx->pc = 0x2783F8u;
    SET_GPR_U32(ctx, 31, 0x278400u);
    ctx->pc = 0x2783FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2783F8u;
    // 0x2783fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2783F8u, 0x278400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278400u;
label_278400:
    // 0x278400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278404:
    // 0x278404: 0xc041532  jal         func_1054C8
label_278408:
    if (ctx->pc == 0x278408u) {
        ctx->pc = 0x278408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278404u;
        // 0x278408: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27840Cu;
        goto label_27840c;
    }
    ctx->pc = 0x278404u;
    SET_GPR_U32(ctx, 31, 0x27840Cu);
    ctx->pc = 0x278408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278404u;
    // 0x278408: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x278404u, 0x27840Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27840Cu;
label_27840c:
    // 0x27840c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x27840cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_278410:
    // 0x278410: 0xc041532  jal         func_1054C8
label_278414:
    if (ctx->pc == 0x278414u) {
        ctx->pc = 0x278414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278410u;
        // 0x278414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278418u;
        goto label_278418;
    }
    ctx->pc = 0x278410u;
    SET_GPR_U32(ctx, 31, 0x278418u);
    ctx->pc = 0x278414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278410u;
    // 0x278414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x278410u, 0x278418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278418u;
label_278418:
    // 0x278418: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x278418u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27841c:
    // 0x27841c: 0x12c00009  beqz        $s6, . + 4 + (0x9 << 2)
label_278420:
    if (ctx->pc == 0x278420u) {
        ctx->pc = 0x278420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27841Cu;
        // 0x278420: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278424u;
        goto label_278424;
    }
    ctx->pc = 0x27841Cu;
    {
        const bool branch_taken_0x27841c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x278420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27841Cu;
        // 0x278420: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27841c) {
            ctx->pc = 0x278444u;
            goto label_278444;
        }
    }
    ctx->pc = 0x278424u;
label_278424:
    // 0x278424: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x278424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_278428:
    // 0x278428: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x278428u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_27842c:
    // 0x27842c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27842cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_278430:
    // 0x278430: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x278430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_278434:
    // 0x278434: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x278434u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_278438:
    // 0x278438: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x278438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27843c:
    // 0x27843c: 0xc041b20  jal         func_106C80
label_278440:
    if (ctx->pc == 0x278440u) {
        ctx->pc = 0x278440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27843Cu;
        // 0x278440: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278444u;
        goto label_278444;
    }
    ctx->pc = 0x27843Cu;
    SET_GPR_U32(ctx, 31, 0x278444u);
    ctx->pc = 0x278440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27843Cu;
    // 0x278440: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x27843Cu, 0x278444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278444u;
label_278444:
    // 0x278444: 0xc05d484  jal         func_175210
label_278448:
    if (ctx->pc == 0x278448u) {
        ctx->pc = 0x278448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278444u;
        // 0x278448: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27844Cu;
        goto label_27844c;
    }
    ctx->pc = 0x278444u;
    SET_GPR_U32(ctx, 31, 0x27844Cu);
    ctx->pc = 0x278448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278444u;
    // 0x278448: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x278444u, 0x27844Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27844Cu;
label_27844c:
    // 0x27844c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27844cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_278450:
    // 0x278450: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x278450u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_278454:
    // 0x278454: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x278454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_278458:
    // 0x278458: 0xa0f809  jalr        $a1
label_27845c:
    if (ctx->pc == 0x27845Cu) {
        ctx->pc = 0x27845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278458u;
        // 0x27845c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278460u;
        goto label_278460;
    }
    ctx->pc = 0x278458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x278460u);
        ctx->pc = 0x27845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278458u;
        // 0x27845c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278458u, 0x278460u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x278460u;
label_278460:
    // 0x278460: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_278464:
    // 0x278464: 0xc087016  jal         func_21C058
label_278468:
    if (ctx->pc == 0x278468u) {
        ctx->pc = 0x278468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278464u;
        // 0x278468: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27846Cu;
        goto label_27846c;
    }
    ctx->pc = 0x278464u;
    SET_GPR_U32(ctx, 31, 0x27846Cu);
    ctx->pc = 0x278468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278464u;
    // 0x278468: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x278464u, 0x27846Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27846Cu;
label_27846c:
    // 0x27846c: 0xc08a0d0  jal         func_228340
label_278470:
    if (ctx->pc == 0x278470u) {
        ctx->pc = 0x278470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27846Cu;
        // 0x278470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278474u;
        goto label_278474;
    }
    ctx->pc = 0x27846Cu;
    SET_GPR_U32(ctx, 31, 0x278474u);
    ctx->pc = 0x278470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27846Cu;
    // 0x278470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x27846Cu, 0x278474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278474u;
label_278474:
    // 0x278474: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
label_278478:
    if (ctx->pc == 0x278478u) {
        ctx->pc = 0x278478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278474u;
        // 0x278478: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27847Cu;
        goto label_27847c;
    }
    ctx->pc = 0x278474u;
    {
        const bool branch_taken_0x278474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x278474) {
            ctx->pc = 0x278478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278474u;
            // 0x278478: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278558u;
            goto label_278558;
        }
    }
    ctx->pc = 0x27847Cu;
label_27847c:
    // 0x27847c: 0xc041532  jal         func_1054C8
label_278480:
    if (ctx->pc == 0x278480u) {
        ctx->pc = 0x278480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27847Cu;
        // 0x278480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278484u;
        goto label_278484;
    }
    ctx->pc = 0x27847Cu;
    SET_GPR_U32(ctx, 31, 0x278484u);
    ctx->pc = 0x278480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27847Cu;
    // 0x278480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x27847Cu, 0x278484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278484u;
label_278484:
    // 0x278484: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x278484u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_278488:
    // 0x278488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27848c:
    // 0x27848c: 0xc089990  jal         func_226640
label_278490:
    if (ctx->pc == 0x278490u) {
        ctx->pc = 0x278490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27848Cu;
        // 0x278490: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278494u;
        goto label_278494;
    }
    ctx->pc = 0x27848Cu;
    SET_GPR_U32(ctx, 31, 0x278494u);
    ctx->pc = 0x278490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27848Cu;
    // 0x278490: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x27848Cu, 0x278494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278494u;
label_278494:
    // 0x278494: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_278498:
    if (ctx->pc == 0x278498u) {
        ctx->pc = 0x278498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278494u;
        // 0x278498: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27849Cu;
        goto label_27849c;
    }
    ctx->pc = 0x278494u;
    {
        const bool branch_taken_0x278494 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x278498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278494u;
        // 0x278498: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278494) {
            ctx->pc = 0x2784B8u;
            goto label_2784b8;
        }
    }
    ctx->pc = 0x27849Cu;
label_27849c:
    // 0x27849c: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x27849cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2784a0:
    // 0x2784a0: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2784a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2784a4:
    // 0x2784a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2784a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2784a8:
    // 0x2784a8: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x2784a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2784ac:
    // 0x2784ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2784acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2784b0:
    // 0x2784b0: 0xc04159e  jal         func_105678
label_2784b4:
    if (ctx->pc == 0x2784B4u) {
        ctx->pc = 0x2784B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2784B0u;
        // 0x2784b4: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2784B8u;
        goto label_2784b8;
    }
    ctx->pc = 0x2784B0u;
    SET_GPR_U32(ctx, 31, 0x2784B8u);
    ctx->pc = 0x2784B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2784B0u;
    // 0x2784b4: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x2784B0u, 0x2784B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2784B8u;
label_2784b8:
    // 0x2784b8: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x2784b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2784bc:
    // 0x2784bc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2784bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2784c0:
    // 0x2784c0: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
label_2784c4:
    if (ctx->pc == 0x2784C4u) {
        ctx->pc = 0x2784C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2784C0u;
        // 0x2784c4: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2784C8u;
        goto label_2784c8;
    }
    ctx->pc = 0x2784C0u;
    {
        const bool branch_taken_0x2784c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2784C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2784C0u;
        // 0x2784c4: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2784c0) {
            ctx->pc = 0x27850Cu;
            goto label_27850c;
        }
    }
    ctx->pc = 0x2784C8u;
label_2784c8:
    // 0x2784c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2784c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2784cc:
    // 0x2784cc: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x2784ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2784d0:
    // 0x2784d0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2784d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2784d4:
    // 0x2784d4: 0x8c500054  lw          $s0, 0x54($v0)
    ctx->pc = 0x2784d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2784d8:
    // 0x2784d8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2784d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2784dc:
    // 0x2784dc: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x2784dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_2784e0:
    // 0x2784e0: 0x40f809  jalr        $v0
label_2784e4:
    if (ctx->pc == 0x2784E4u) {
        ctx->pc = 0x2784E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2784E0u;
        // 0x2784e4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2784E8u;
        goto label_2784e8;
    }
    ctx->pc = 0x2784E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2784E8u);
        ctx->pc = 0x2784E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2784E0u;
        // 0x2784e4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2784E0u, 0x2784E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2784E8u;
label_2784e8:
    // 0x2784e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2784e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2784ec:
    // 0x2784ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2784ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2784f0:
    // 0x2784f0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2784f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2784f4:
    // 0x2784f4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2784f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2784f8:
    // 0x2784f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2784f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2784fc:
    // 0x2784fc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2784fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_278500:
    // 0x278500: 0x3c080008  lui         $t0, 0x8
    ctx->pc = 0x278500u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8 << 16));
label_278504:
    // 0x278504: 0xc041664  jal         func_105990
label_278508:
    if (ctx->pc == 0x278508u) {
        ctx->pc = 0x278508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278504u;
        // 0x278508: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27850Cu;
        goto label_27850c;
    }
    ctx->pc = 0x278504u;
    SET_GPR_U32(ctx, 31, 0x27850Cu);
    ctx->pc = 0x278508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278504u;
    // 0x278508: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x278504u, 0x27850Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27850Cu;
label_27850c:
    // 0x27850c: 0x5280002f  beql        $s4, $zero, . + 4 + (0x2F << 2)
label_278510:
    if (ctx->pc == 0x278510u) {
        ctx->pc = 0x278510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27850Cu;
        // 0x278510: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278514u;
        goto label_278514;
    }
    ctx->pc = 0x27850Cu;
    {
        const bool branch_taken_0x27850c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x27850c) {
            ctx->pc = 0x278510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27850Cu;
            // 0x278510: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2785CCu;
            goto label_2785cc;
        }
    }
    ctx->pc = 0x278514u;
label_278514:
    // 0x278514: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x278514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_278518:
    // 0x278518: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x278518u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_27851c:
    // 0x27851c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x27851cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_278520:
    // 0x278520: 0x40f809  jalr        $v0
label_278524:
    if (ctx->pc == 0x278524u) {
        ctx->pc = 0x278524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278520u;
        // 0x278524: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278528u;
        goto label_278528;
    }
    ctx->pc = 0x278520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x278528u);
        ctx->pc = 0x278524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278520u;
        // 0x278524: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278520u, 0x278528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x278528u;
label_278528:
    // 0x278528: 0x3c0a0028  lui         $t2, 0x28
    ctx->pc = 0x278528u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)40 << 16));
label_27852c:
    // 0x27852c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27852cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_278530:
    // 0x278530: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x278530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_278534:
    // 0x278534: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x278534u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_278538:
    // 0x278538: 0x254a83a8  addiu       $t2, $t2, -0x7C58
    ctx->pc = 0x278538u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294935464));
label_27853c:
    // 0x27853c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27853cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_278540:
    // 0x278540: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x278540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_278544:
    // 0x278544: 0x24060150  addiu       $a2, $zero, 0x150
    ctx->pc = 0x278544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_278548:
    // 0x278548: 0xc041664  jal         func_105990
label_27854c:
    if (ctx->pc == 0x27854Cu) {
        ctx->pc = 0x27854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278548u;
        // 0x27854c: 0x3c080080  lui         $t0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278550u;
        goto label_278550;
    }
    ctx->pc = 0x278548u;
    SET_GPR_U32(ctx, 31, 0x278550u);
    ctx->pc = 0x27854Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278548u;
    // 0x27854c: 0x3c080080  lui         $t0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)128 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x278548u, 0x278550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278550u;
label_278550:
    // 0x278550: 0x1000001e  b           . + 4 + (0x1E << 2)
label_278554:
    if (ctx->pc == 0x278554u) {
        ctx->pc = 0x278554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278550u;
        // 0x278554: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278558u;
        goto label_278558;
    }
    ctx->pc = 0x278550u;
    {
        const bool branch_taken_0x278550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278550u;
        // 0x278554: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278550) {
            ctx->pc = 0x2785CCu;
            goto label_2785cc;
        }
    }
    ctx->pc = 0x278558u;
label_278558:
    // 0x278558: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_27855c:
    if (ctx->pc == 0x27855Cu) {
        ctx->pc = 0x27855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278558u;
        // 0x27855c: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278560u;
        goto label_278560;
    }
    ctx->pc = 0x278558u;
    {
        const bool branch_taken_0x278558 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x27855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278558u;
        // 0x27855c: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278558) {
            ctx->pc = 0x278580u;
            goto label_278580;
        }
    }
    ctx->pc = 0x278560u;
label_278560:
    // 0x278560: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x278560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_278564:
    // 0x278564: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x278564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_278568:
    // 0x278568: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x278568u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_27856c:
    // 0x27856c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27856cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_278570:
    // 0x278570: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x278570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_278574:
    // 0x278574: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x278574u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_278578:
    // 0x278578: 0xc04159e  jal         func_105678
label_27857c:
    if (ctx->pc == 0x27857Cu) {
        ctx->pc = 0x27857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278578u;
        // 0x27857c: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278580u;
        goto label_278580;
    }
    ctx->pc = 0x278578u;
    SET_GPR_U32(ctx, 31, 0x278580u);
    ctx->pc = 0x27857Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278578u;
    // 0x27857c: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x278578u, 0x278580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278580u;
label_278580:
    // 0x278580: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x278580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_278584:
    // 0x278584: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
label_278588:
    if (ctx->pc == 0x278588u) {
        ctx->pc = 0x278588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278584u;
        // 0x278588: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27858Cu;
        goto label_27858c;
    }
    ctx->pc = 0x278584u;
    {
        const bool branch_taken_0x278584 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x278588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278584u;
        // 0x278588: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278584) {
            ctx->pc = 0x2785C8u;
            goto label_2785c8;
        }
    }
    ctx->pc = 0x27858Cu;
label_27858c:
    // 0x27858c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x27858cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_278590:
    // 0x278590: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x278590u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_278594:
    // 0x278594: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x278594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_278598:
    // 0x278598: 0x40f809  jalr        $v0
label_27859c:
    if (ctx->pc == 0x27859Cu) {
        ctx->pc = 0x27859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278598u;
        // 0x27859c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2785A0u;
        goto label_2785a0;
    }
    ctx->pc = 0x278598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2785A0u);
        ctx->pc = 0x27859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278598u;
        // 0x27859c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278598u, 0x2785A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2785A0u;
label_2785a0:
    // 0x2785a0: 0x3c0a0028  lui         $t2, 0x28
    ctx->pc = 0x2785a0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)40 << 16));
label_2785a4:
    // 0x2785a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2785a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2785a8:
    // 0x2785a8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2785a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2785ac:
    // 0x2785ac: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2785acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2785b0:
    // 0x2785b0: 0x254a83a8  addiu       $t2, $t2, -0x7C58
    ctx->pc = 0x2785b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294935464));
label_2785b4:
    // 0x2785b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2785b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2785b8:
    // 0x2785b8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2785b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2785bc:
    // 0x2785bc: 0x24060150  addiu       $a2, $zero, 0x150
    ctx->pc = 0x2785bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_2785c0:
    // 0x2785c0: 0xc041664  jal         func_105990
label_2785c4:
    if (ctx->pc == 0x2785C4u) {
        ctx->pc = 0x2785C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2785C0u;
        // 0x2785c4: 0x3c080080  lui         $t0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2785C8u;
        goto label_2785c8;
    }
    ctx->pc = 0x2785C0u;
    SET_GPR_U32(ctx, 31, 0x2785C8u);
    ctx->pc = 0x2785C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2785C0u;
    // 0x2785c4: 0x3c080080  lui         $t0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)128 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x2785C0u, 0x2785C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2785C8u;
label_2785c8:
    // 0x2785c8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2785c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2785cc:
    // 0x2785cc: 0xc05d53a  jal         func_1754E8
label_2785d0:
    if (ctx->pc == 0x2785D0u) {
        ctx->pc = 0x2785D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2785CCu;
        // 0x2785d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2785D4u;
        goto label_2785d4;
    }
    ctx->pc = 0x2785CCu;
    SET_GPR_U32(ctx, 31, 0x2785D4u);
    ctx->pc = 0x2785D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2785CCu;
    // 0x2785d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x2785CCu, 0x2785D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2785D4u;
label_2785d4:
    // 0x2785d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2785d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2785d8:
    // 0x2785d8: 0xc05d4f6  jal         func_1753D8
label_2785dc:
    if (ctx->pc == 0x2785DCu) {
        ctx->pc = 0x2785DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2785D8u;
        // 0x2785dc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2785E0u;
        goto label_2785e0;
    }
    ctx->pc = 0x2785D8u;
    SET_GPR_U32(ctx, 31, 0x2785E0u);
    ctx->pc = 0x2785DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2785D8u;
    // 0x2785dc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x2785D8u, 0x2785E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2785E0u;
label_2785e0:
    // 0x2785e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2785e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2785e4:
    // 0x2785e4: 0xc089990  jal         func_226640
label_2785e8:
    if (ctx->pc == 0x2785E8u) {
        ctx->pc = 0x2785E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2785E4u;
        // 0x2785e8: 0x3c050080  lui         $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2785ECu;
        goto label_2785ec;
    }
    ctx->pc = 0x2785E4u;
    SET_GPR_U32(ctx, 31, 0x2785ECu);
    ctx->pc = 0x2785E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2785E4u;
    // 0x2785e8: 0x3c050080  lui         $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x2785E4u, 0x2785ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2785ECu;
label_2785ec:
    // 0x2785ec: 0xc08ba12  jal         func_22E848
label_2785f0:
    if (ctx->pc == 0x2785F0u) {
        ctx->pc = 0x2785F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2785ECu;
        // 0x2785f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2785F4u;
        goto label_2785f4;
    }
    ctx->pc = 0x2785ECu;
    SET_GPR_U32(ctx, 31, 0x2785F4u);
    ctx->pc = 0x2785F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2785ECu;
    // 0x2785f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E848u, 0x2785ECu, 0x2785F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2785F4u;
label_2785f4:
    // 0x2785f4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2785f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2785f8:
    // 0x2785f8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2785f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2785fc:
    // 0x2785fc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2785fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_278600:
    // 0x278600: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x278600u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_278604:
    // 0x278604: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x278604u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_278608:
    // 0x278608: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x278608u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27860c:
    // 0x27860c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x27860cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_278610:
    // 0x278610: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x278610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_278614:
    // 0x278614: 0x3e00008  jr          $ra
label_278618:
    if (ctx->pc == 0x278618u) {
        ctx->pc = 0x278618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278614u;
        // 0x278618: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27861Cu;
        goto label_27861c;
    }
    ctx->pc = 0x278614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278614u;
        // 0x278618: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27861Cu;
label_27861c:
    // 0x27861c: 0x0  nop
    ctx->pc = 0x27861cu;
    // NOP
    ctx->pc = 0x278620u;
}
