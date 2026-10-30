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

// Function: sub_00217350
// Address: 0x217350 - 0x2175f8
void sub_00217350_0x217350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217350_0x217350");
#endif

    switch (ctx->pc) {
        case 0x217350u: goto label_217350;
        case 0x217354u: goto label_217354;
        case 0x217358u: goto label_217358;
        case 0x21735cu: goto label_21735c;
        case 0x217360u: goto label_217360;
        case 0x217364u: goto label_217364;
        case 0x217368u: goto label_217368;
        case 0x21736cu: goto label_21736c;
        case 0x217370u: goto label_217370;
        case 0x217374u: goto label_217374;
        case 0x217378u: goto label_217378;
        case 0x21737cu: goto label_21737c;
        case 0x217380u: goto label_217380;
        case 0x217384u: goto label_217384;
        case 0x217388u: goto label_217388;
        case 0x21738cu: goto label_21738c;
        case 0x217390u: goto label_217390;
        case 0x217394u: goto label_217394;
        case 0x217398u: goto label_217398;
        case 0x21739cu: goto label_21739c;
        case 0x2173a0u: goto label_2173a0;
        case 0x2173a4u: goto label_2173a4;
        case 0x2173a8u: goto label_2173a8;
        case 0x2173acu: goto label_2173ac;
        case 0x2173b0u: goto label_2173b0;
        case 0x2173b4u: goto label_2173b4;
        case 0x2173b8u: goto label_2173b8;
        case 0x2173bcu: goto label_2173bc;
        case 0x2173c0u: goto label_2173c0;
        case 0x2173c4u: goto label_2173c4;
        case 0x2173c8u: goto label_2173c8;
        case 0x2173ccu: goto label_2173cc;
        case 0x2173d0u: goto label_2173d0;
        case 0x2173d4u: goto label_2173d4;
        case 0x2173d8u: goto label_2173d8;
        case 0x2173dcu: goto label_2173dc;
        case 0x2173e0u: goto label_2173e0;
        case 0x2173e4u: goto label_2173e4;
        case 0x2173e8u: goto label_2173e8;
        case 0x2173ecu: goto label_2173ec;
        case 0x2173f0u: goto label_2173f0;
        case 0x2173f4u: goto label_2173f4;
        case 0x2173f8u: goto label_2173f8;
        case 0x2173fcu: goto label_2173fc;
        case 0x217400u: goto label_217400;
        case 0x217404u: goto label_217404;
        case 0x217408u: goto label_217408;
        case 0x21740cu: goto label_21740c;
        case 0x217410u: goto label_217410;
        case 0x217414u: goto label_217414;
        case 0x217418u: goto label_217418;
        case 0x21741cu: goto label_21741c;
        case 0x217420u: goto label_217420;
        case 0x217424u: goto label_217424;
        case 0x217428u: goto label_217428;
        case 0x21742cu: goto label_21742c;
        case 0x217430u: goto label_217430;
        case 0x217434u: goto label_217434;
        case 0x217438u: goto label_217438;
        case 0x21743cu: goto label_21743c;
        case 0x217440u: goto label_217440;
        case 0x217444u: goto label_217444;
        case 0x217448u: goto label_217448;
        case 0x21744cu: goto label_21744c;
        case 0x217450u: goto label_217450;
        case 0x217454u: goto label_217454;
        case 0x217458u: goto label_217458;
        case 0x21745cu: goto label_21745c;
        case 0x217460u: goto label_217460;
        case 0x217464u: goto label_217464;
        case 0x217468u: goto label_217468;
        case 0x21746cu: goto label_21746c;
        case 0x217470u: goto label_217470;
        case 0x217474u: goto label_217474;
        case 0x217478u: goto label_217478;
        case 0x21747cu: goto label_21747c;
        case 0x217480u: goto label_217480;
        case 0x217484u: goto label_217484;
        case 0x217488u: goto label_217488;
        case 0x21748cu: goto label_21748c;
        case 0x217490u: goto label_217490;
        case 0x217494u: goto label_217494;
        case 0x217498u: goto label_217498;
        case 0x21749cu: goto label_21749c;
        case 0x2174a0u: goto label_2174a0;
        case 0x2174a4u: goto label_2174a4;
        case 0x2174a8u: goto label_2174a8;
        case 0x2174acu: goto label_2174ac;
        case 0x2174b0u: goto label_2174b0;
        case 0x2174b4u: goto label_2174b4;
        case 0x2174b8u: goto label_2174b8;
        case 0x2174bcu: goto label_2174bc;
        case 0x2174c0u: goto label_2174c0;
        case 0x2174c4u: goto label_2174c4;
        case 0x2174c8u: goto label_2174c8;
        case 0x2174ccu: goto label_2174cc;
        case 0x2174d0u: goto label_2174d0;
        case 0x2174d4u: goto label_2174d4;
        case 0x2174d8u: goto label_2174d8;
        case 0x2174dcu: goto label_2174dc;
        case 0x2174e0u: goto label_2174e0;
        case 0x2174e4u: goto label_2174e4;
        case 0x2174e8u: goto label_2174e8;
        case 0x2174ecu: goto label_2174ec;
        case 0x2174f0u: goto label_2174f0;
        case 0x2174f4u: goto label_2174f4;
        case 0x2174f8u: goto label_2174f8;
        case 0x2174fcu: goto label_2174fc;
        case 0x217500u: goto label_217500;
        case 0x217504u: goto label_217504;
        case 0x217508u: goto label_217508;
        case 0x21750cu: goto label_21750c;
        case 0x217510u: goto label_217510;
        case 0x217514u: goto label_217514;
        case 0x217518u: goto label_217518;
        case 0x21751cu: goto label_21751c;
        case 0x217520u: goto label_217520;
        case 0x217524u: goto label_217524;
        case 0x217528u: goto label_217528;
        case 0x21752cu: goto label_21752c;
        case 0x217530u: goto label_217530;
        case 0x217534u: goto label_217534;
        case 0x217538u: goto label_217538;
        case 0x21753cu: goto label_21753c;
        case 0x217540u: goto label_217540;
        case 0x217544u: goto label_217544;
        case 0x217548u: goto label_217548;
        case 0x21754cu: goto label_21754c;
        case 0x217550u: goto label_217550;
        case 0x217554u: goto label_217554;
        case 0x217558u: goto label_217558;
        case 0x21755cu: goto label_21755c;
        case 0x217560u: goto label_217560;
        case 0x217564u: goto label_217564;
        case 0x217568u: goto label_217568;
        case 0x21756cu: goto label_21756c;
        case 0x217570u: goto label_217570;
        case 0x217574u: goto label_217574;
        case 0x217578u: goto label_217578;
        case 0x21757cu: goto label_21757c;
        case 0x217580u: goto label_217580;
        case 0x217584u: goto label_217584;
        case 0x217588u: goto label_217588;
        case 0x21758cu: goto label_21758c;
        case 0x217590u: goto label_217590;
        case 0x217594u: goto label_217594;
        case 0x217598u: goto label_217598;
        case 0x21759cu: goto label_21759c;
        case 0x2175a0u: goto label_2175a0;
        case 0x2175a4u: goto label_2175a4;
        case 0x2175a8u: goto label_2175a8;
        case 0x2175acu: goto label_2175ac;
        case 0x2175b0u: goto label_2175b0;
        case 0x2175b4u: goto label_2175b4;
        case 0x2175b8u: goto label_2175b8;
        case 0x2175bcu: goto label_2175bc;
        case 0x2175c0u: goto label_2175c0;
        case 0x2175c4u: goto label_2175c4;
        case 0x2175c8u: goto label_2175c8;
        case 0x2175ccu: goto label_2175cc;
        case 0x2175d0u: goto label_2175d0;
        case 0x2175d4u: goto label_2175d4;
        case 0x2175d8u: goto label_2175d8;
        case 0x2175dcu: goto label_2175dc;
        case 0x2175e0u: goto label_2175e0;
        case 0x2175e4u: goto label_2175e4;
        case 0x2175e8u: goto label_2175e8;
        case 0x2175ecu: goto label_2175ec;
        case 0x2175f0u: goto label_2175f0;
        case 0x2175f4u: goto label_2175f4;
        default: break;
    }

    ctx->pc = 0x217350u;

label_217350:
    // 0x217350: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x217350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_217354:
    // 0x217354: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x217354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_217358:
    // 0x217358: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x217358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_21735c:
    // 0x21735c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21735cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_217360:
    // 0x217360: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x217360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_217364:
    // 0x217364: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x217364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_217368:
    // 0x217368: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x217368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_21736c:
    // 0x21736c: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x21736cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_217370:
    // 0x217370: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x217370u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_217374:
    // 0x217374: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x217374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_217378:
    // 0x217378: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x217378u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_21737c:
    // 0x21737c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x21737cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_217380:
    // 0x217380: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x217380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_217384:
    // 0x217384: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x217384u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_217388:
    // 0x217388: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x217388u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_21738c:
    // 0x21738c: 0xae250074  sw          $a1, 0x74($s1)
    ctx->pc = 0x21738cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 5));
label_217390:
    // 0x217390: 0xc085bac  jal         func_216EB0
label_217394:
    if (ctx->pc == 0x217394u) {
        ctx->pc = 0x217394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217390u;
        // 0x217394: 0xe62c0060  swc1        $f12, 0x60($s1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x217398u;
        goto label_217398;
    }
    ctx->pc = 0x217390u;
    SET_GPR_U32(ctx, 31, 0x217398u);
    ctx->pc = 0x217394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217390u;
    // 0x217394: 0xe62c0060  swc1        $f12, 0x60($s1) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x216EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216EB0u, 0x217390u, 0x217398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217398u;
label_217398:
    // 0x217398: 0xae300064  sw          $s0, 0x64($s1)
    ctx->pc = 0x217398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 16));
label_21739c:
    // 0x21739c: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x21739cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2173a0:
    // 0x2173a0: 0x8eab27e4  lw          $t3, 0x27E4($s5)
    ctx->pc = 0x2173a0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_2173a4:
    // 0x2173a4: 0x2454a370  addiu       $s4, $v0, -0x5C90
    ctx->pc = 0x2173a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943600));
label_2173a8:
    // 0x2173a8: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2173a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2173ac:
    // 0x2173ac: 0x2409008a  addiu       $t1, $zero, 0x8A
    ctx->pc = 0x2173acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
label_2173b0:
    // 0x2173b0: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x2173b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_2173b4:
    // 0x2173b4: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2173b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2173b8:
    // 0x2173b8: 0x24a5a3f0  addiu       $a1, $a1, -0x5C10
    ctx->pc = 0x2173b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943728));
label_2173bc:
    // 0x2173bc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2173bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2173c0:
    // 0x2173c0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2173c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2173c4:
    // 0x2173c4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2173c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2173c8:
    // 0x2173c8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2173c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2173cc:
    // 0x2173cc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2173ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2173d0:
    // 0x2173d0: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x2173d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_2173d4:
    // 0x2173d4: 0x40f809  jalr        $v0
label_2173d8:
    if (ctx->pc == 0x2173D8u) {
        ctx->pc = 0x2173D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2173D4u;
        // 0x2173d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2173DCu;
        goto label_2173dc;
    }
    ctx->pc = 0x2173D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2173DCu);
        ctx->pc = 0x2173D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2173D4u;
        // 0x2173d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2173D4u, 0x2173DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2173DCu;
label_2173dc:
    // 0x2173dc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2173dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2173e0:
    // 0x2173e0: 0x11200005  beqz        $t1, . + 4 + (0x5 << 2)
label_2173e4:
    if (ctx->pc == 0x2173E4u) {
        ctx->pc = 0x2173E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2173E0u;
        // 0x2173e4: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2173E8u;
        goto label_2173e8;
    }
    ctx->pc = 0x2173E0u;
    {
        const bool branch_taken_0x2173e0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2173E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2173E0u;
        // 0x2173e4: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2173e0) {
            ctx->pc = 0x2173F8u;
            goto label_2173f8;
        }
    }
    ctx->pc = 0x2173E8u;
label_2173e8:
    // 0x2173e8: 0xc0686fe  jal         func_1A1BF8
label_2173ec:
    if (ctx->pc == 0x2173ECu) {
        ctx->pc = 0x2173ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2173E8u;
        // 0x2173ec: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2173F0u;
        goto label_2173f0;
    }
    ctx->pc = 0x2173E8u;
    SET_GPR_U32(ctx, 31, 0x2173F0u);
    ctx->pc = 0x2173ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2173E8u;
    // 0x2173ec: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x2173E8u, 0x2173F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2173F0u;
label_2173f0:
    // 0x2173f0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2173f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2173f4:
    // 0x2173f4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2173f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2173f8:
    // 0x2173f8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2173f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2173fc:
    // 0x2173fc: 0xa3a30060  sb          $v1, 0x60($sp)
    ctx->pc = 0x2173fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 3));
label_217400:
    // 0x217400: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x217400u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217404:
    // 0x217404: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x217404u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
label_217408:
    // 0x217408: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x217408u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21740c:
    // 0x21740c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x21740cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_217410:
    // 0x217410: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x217410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217414:
    // 0x217414: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x217414u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_217418:
    // 0x217418: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x217418u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21741c:
    // 0x21741c: 0xae290068  sw          $t1, 0x68($s1)
    ctx->pc = 0x21741cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 9));
label_217420:
    // 0x217420: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x217420u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217424:
    // 0x217424: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x217424u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_217428:
    // 0x217428: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x217428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_21742c:
    // 0x21742c: 0x8d2c0000  lw          $t4, 0x0($t1)
    ctx->pc = 0x21742cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_217430:
    // 0x217430: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x217430u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_217434:
    // 0x217434: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x217434u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_217438:
    // 0x217438: 0x85840068  lh          $a0, 0x68($t4)
    ctx->pc = 0x217438u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 104)));
label_21743c:
    // 0x21743c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x21743cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_217440:
    // 0x217440: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x217440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
label_217444:
    // 0x217444: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x217444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_217448:
    // 0x217448: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x217448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_21744c:
    // 0x21744c: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x21744cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_217450:
    // 0x217450: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x217450u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_217454:
    // 0x217454: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x217454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_217458:
    // 0x217458: 0x8d82006c  lw          $v0, 0x6C($t4)
    ctx->pc = 0x217458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 108)));
label_21745c:
    // 0x21745c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21745cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_217460:
    // 0x217460: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x217460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_217464:
    // 0x217464: 0x40f809  jalr        $v0
label_217468:
    if (ctx->pc == 0x217468u) {
        ctx->pc = 0x217468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217464u;
        // 0x217468: 0x8e290064  lw          $t1, 0x64($s1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21746Cu;
        goto label_21746c;
    }
    ctx->pc = 0x217464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21746Cu);
        ctx->pc = 0x217468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217464u;
        // 0x217468: 0x8e290064  lw          $t1, 0x64($s1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217464u, 0x21746Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21746Cu;
label_21746c:
    // 0x21746c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x21746cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_217470:
    // 0x217470: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x217470u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_217474:
    // 0x217474: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x217474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_217478:
    // 0x217478: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x217478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_21747c:
    // 0x21747c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x21747cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_217480:
    // 0x217480: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x217480u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_217484:
    // 0x217484: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x217484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_217488:
    // 0x217488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21748c:
    // 0x21748c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x21748cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_217490:
    // 0x217490: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x217490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217494:
    // 0x217494: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x217494u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_217498:
    // 0x217498: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x217498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21749c:
    // 0x21749c: 0xe6150004  swc1        $f21, 0x4($s0)
    ctx->pc = 0x21749cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_2174a0:
    // 0x2174a0: 0xc048b52  jal         func_122D48
label_2174a4:
    if (ctx->pc == 0x2174A4u) {
        ctx->pc = 0x2174A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2174A0u;
        // 0x2174a4: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2174A8u;
        goto label_2174a8;
    }
    ctx->pc = 0x2174A0u;
    SET_GPR_U32(ctx, 31, 0x2174A8u);
    ctx->pc = 0x2174A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2174A0u;
    // 0x2174a4: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x2174A0u, 0x2174A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2174A8u;
label_2174a8:
    // 0x2174a8: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x2174a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2174ac:
    // 0x2174ac: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x2174acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2174b0:
    // 0x2174b0: 0xe7b50034  swc1        $f21, 0x34($sp)
    ctx->pc = 0x2174b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2174b4:
    // 0x2174b4: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x2174b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2174b8:
    // 0x2174b8: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2174b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2174bc:
    // 0x2174bc: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2174bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2174c0:
    // 0x2174c0: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x2174c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_2174c4:
    // 0x2174c4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2174c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2174c8:
    // 0x2174c8: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x2174c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2174cc:
    // 0x2174cc: 0x24a5a400  addiu       $a1, $a1, -0x5C00
    ctx->pc = 0x2174ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943744));
label_2174d0:
    // 0x2174d0: 0xe7b50044  swc1        $f21, 0x44($sp)
    ctx->pc = 0x2174d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2174d4:
    // 0x2174d4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2174d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2174d8:
    // 0x2174d8: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x2174d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2174dc:
    // 0x2174dc: 0x24060270  addiu       $a2, $zero, 0x270
    ctx->pc = 0x2174dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
label_2174e0:
    // 0x2174e0: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x2174e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_2174e4:
    // 0x2174e4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2174e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2174e8:
    // 0x2174e8: 0x8eac27e4  lw          $t4, 0x27E4($s5)
    ctx->pc = 0x2174e8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_2174ec:
    // 0x2174ec: 0x24090096  addiu       $t1, $zero, 0x96
    ctx->pc = 0x2174ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_2174f0:
    // 0x2174f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2174f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2174f4:
    // 0x2174f4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x2174f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_2174f8:
    // 0x2174f8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2174f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2174fc:
    // 0x2174fc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2174fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_217500:
    // 0x217500: 0x40f809  jalr        $v0
label_217504:
    if (ctx->pc == 0x217504u) {
        ctx->pc = 0x217504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217500u;
        // 0x217504: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217508u;
        goto label_217508;
    }
    ctx->pc = 0x217500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x217508u);
        ctx->pc = 0x217504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217500u;
        // 0x217504: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217500u, 0x217508u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x217508u;
label_217508:
    // 0x217508: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x217508u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21750c:
    // 0x21750c: 0x51600005  beql        $t3, $zero, . + 4 + (0x5 << 2)
label_217510:
    if (ctx->pc == 0x217510u) {
        ctx->pc = 0x217510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21750Cu;
        // 0x217510: 0xae2b006c  sw          $t3, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217514u;
        goto label_217514;
    }
    ctx->pc = 0x21750Cu;
    {
        const bool branch_taken_0x21750c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x21750c) {
            ctx->pc = 0x217510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21750Cu;
            // 0x217510: 0xae2b006c  sw          $t3, 0x6C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217524u;
            goto label_217524;
        }
    }
    ctx->pc = 0x217514u;
label_217514:
    // 0x217514: 0xc078bd0  jal         func_1E2F40
label_217518:
    if (ctx->pc == 0x217518u) {
        ctx->pc = 0x217518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217514u;
        // 0x217518: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21751Cu;
        goto label_21751c;
    }
    ctx->pc = 0x217514u;
    SET_GPR_U32(ctx, 31, 0x21751Cu);
    ctx->pc = 0x217518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217514u;
    // 0x217518: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2F40u, 0x217514u, 0x21751Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21751Cu;
label_21751c:
    // 0x21751c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x21751cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_217520:
    // 0x217520: 0xae2b006c  sw          $t3, 0x6C($s1)
    ctx->pc = 0x217520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 11));
label_217524:
    // 0x217524: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x217524u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_217528:
    // 0x217528: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x217528u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21752c:
    // 0x21752c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21752cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217530:
    // 0x217530: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x217530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_217534:
    // 0x217534: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x217534u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_217538:
    // 0x217538: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x217538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21753c:
    // 0x21753c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x21753cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_217540:
    // 0x217540: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x217540u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_217544:
    // 0x217544: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x217544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_217548:
    // 0x217548: 0x40f809  jalr        $v0
label_21754c:
    if (ctx->pc == 0x21754Cu) {
        ctx->pc = 0x21754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217548u;
        // 0x21754c: 0x1642021  addu        $a0, $t3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217550u;
        goto label_217550;
    }
    ctx->pc = 0x217548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x217550u);
        ctx->pc = 0x21754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217548u;
        // 0x21754c: 0x1642021  addu        $a0, $t3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217548u, 0x217550u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x217550u;
label_217550:
    // 0x217550: 0x8e27006c  lw          $a3, 0x6C($s1)
    ctx->pc = 0x217550u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_217554:
    // 0x217554: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x217554u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_217558:
    // 0x217558: 0x8e250070  lw          $a1, 0x70($s1)
    ctx->pc = 0x217558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_21755c:
    // 0x21755c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21755cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217560:
    // 0x217560: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x217560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_217564:
    // 0x217564: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x217564u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_217568:
    // 0x217568: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x217568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_21756c:
    // 0x21756c: 0x60f809  jalr        $v1
label_217570:
    if (ctx->pc == 0x217570u) {
        ctx->pc = 0x217570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21756Cu;
        // 0x217570: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217574u;
        goto label_217574;
    }
    ctx->pc = 0x21756Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x217574u);
        ctx->pc = 0x217570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21756Cu;
        // 0x217570: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21756Cu, 0x217574u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x217574u;
label_217574:
    // 0x217574: 0x8e25006c  lw          $a1, 0x6C($s1)
    ctx->pc = 0x217574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_217578:
    // 0x217578: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x217578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_21757c:
    // 0x21757c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x21757cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_217580:
    // 0x217580: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x217580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_217584:
    // 0x217584: 0x60f809  jalr        $v1
label_217588:
    if (ctx->pc == 0x217588u) {
        ctx->pc = 0x217588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217584u;
        // 0x217588: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21758Cu;
        goto label_21758c;
    }
    ctx->pc = 0x217584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21758Cu);
        ctx->pc = 0x217588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217584u;
        // 0x217588: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217584u, 0x21758Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21758Cu;
label_21758c:
    // 0x21758c: 0x8e26006c  lw          $a2, 0x6C($s1)
    ctx->pc = 0x21758cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_217590:
    // 0x217590: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x217590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_217594:
    // 0x217594: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x217594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_217598:
    // 0x217598: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x217598u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_21759c:
    // 0x21759c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x21759cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_2175a0:
    // 0x2175a0: 0x60f809  jalr        $v1
label_2175a4:
    if (ctx->pc == 0x2175A4u) {
        ctx->pc = 0x2175A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2175A0u;
        // 0x2175a4: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2175A8u;
        goto label_2175a8;
    }
    ctx->pc = 0x2175A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2175A8u);
        ctx->pc = 0x2175A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2175A0u;
        // 0x2175a4: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2175A0u, 0x2175A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2175A8u;
label_2175a8:
    // 0x2175a8: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x2175a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2175ac:
    // 0x2175ac: 0xc6210060  lwc1        $f1, 0x60($s1)
    ctx->pc = 0x2175acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2175b0:
    // 0x2175b0: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x2175b0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
label_2175b4:
    // 0x2175b4: 0xae36000c  sw          $s6, 0xC($s1)
    ctx->pc = 0x2175b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 22));
label_2175b8:
    // 0x2175b8: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2175b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2175bc:
    // 0x2175bc: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2175bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_2175c0:
    // 0x2175c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2175c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2175c4:
    // 0x2175c4: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x2175c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2175c8:
    // 0x2175c8: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x2175c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2175cc:
    // 0x2175cc: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x2175ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2175d0:
    // 0x2175d0: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x2175d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
label_2175d4:
    // 0x2175d4: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x2175d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2175d8:
    // 0x2175d8: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x2175d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2175dc:
    // 0x2175dc: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x2175dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2175e0:
    // 0x2175e0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x2175e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2175e4:
    // 0x2175e4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2175e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2175e8:
    // 0x2175e8: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x2175e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2175ec:
    // 0x2175ec: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x2175ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2175f0:
    // 0x2175f0: 0x3e00008  jr          $ra
label_2175f4:
    if (ctx->pc == 0x2175F4u) {
        ctx->pc = 0x2175F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2175F0u;
        // 0x2175f4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2175F8u;
        goto label_fallthrough_0x2175f0;
    }
    ctx->pc = 0x2175F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2175F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2175F0u;
        // 0x2175f4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2175F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2175f0:
    ctx->pc = 0x2175F8u;
}
