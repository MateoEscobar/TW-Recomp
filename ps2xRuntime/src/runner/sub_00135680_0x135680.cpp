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

// Function: sub_00135680
// Address: 0x135680 - 0x1358d0
void sub_00135680_0x135680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135680_0x135680");
#endif

    switch (ctx->pc) {
        case 0x135680u: goto label_135680;
        case 0x135684u: goto label_135684;
        case 0x135688u: goto label_135688;
        case 0x13568cu: goto label_13568c;
        case 0x135690u: goto label_135690;
        case 0x135694u: goto label_135694;
        case 0x135698u: goto label_135698;
        case 0x13569cu: goto label_13569c;
        case 0x1356a0u: goto label_1356a0;
        case 0x1356a4u: goto label_1356a4;
        case 0x1356a8u: goto label_1356a8;
        case 0x1356acu: goto label_1356ac;
        case 0x1356b0u: goto label_1356b0;
        case 0x1356b4u: goto label_1356b4;
        case 0x1356b8u: goto label_1356b8;
        case 0x1356bcu: goto label_1356bc;
        case 0x1356c0u: goto label_1356c0;
        case 0x1356c4u: goto label_1356c4;
        case 0x1356c8u: goto label_1356c8;
        case 0x1356ccu: goto label_1356cc;
        case 0x1356d0u: goto label_1356d0;
        case 0x1356d4u: goto label_1356d4;
        case 0x1356d8u: goto label_1356d8;
        case 0x1356dcu: goto label_1356dc;
        case 0x1356e0u: goto label_1356e0;
        case 0x1356e4u: goto label_1356e4;
        case 0x1356e8u: goto label_1356e8;
        case 0x1356ecu: goto label_1356ec;
        case 0x1356f0u: goto label_1356f0;
        case 0x1356f4u: goto label_1356f4;
        case 0x1356f8u: goto label_1356f8;
        case 0x1356fcu: goto label_1356fc;
        case 0x135700u: goto label_135700;
        case 0x135704u: goto label_135704;
        case 0x135708u: goto label_135708;
        case 0x13570cu: goto label_13570c;
        case 0x135710u: goto label_135710;
        case 0x135714u: goto label_135714;
        case 0x135718u: goto label_135718;
        case 0x13571cu: goto label_13571c;
        case 0x135720u: goto label_135720;
        case 0x135724u: goto label_135724;
        case 0x135728u: goto label_135728;
        case 0x13572cu: goto label_13572c;
        case 0x135730u: goto label_135730;
        case 0x135734u: goto label_135734;
        case 0x135738u: goto label_135738;
        case 0x13573cu: goto label_13573c;
        case 0x135740u: goto label_135740;
        case 0x135744u: goto label_135744;
        case 0x135748u: goto label_135748;
        case 0x13574cu: goto label_13574c;
        case 0x135750u: goto label_135750;
        case 0x135754u: goto label_135754;
        case 0x135758u: goto label_135758;
        case 0x13575cu: goto label_13575c;
        case 0x135760u: goto label_135760;
        case 0x135764u: goto label_135764;
        case 0x135768u: goto label_135768;
        case 0x13576cu: goto label_13576c;
        case 0x135770u: goto label_135770;
        case 0x135774u: goto label_135774;
        case 0x135778u: goto label_135778;
        case 0x13577cu: goto label_13577c;
        case 0x135780u: goto label_135780;
        case 0x135784u: goto label_135784;
        case 0x135788u: goto label_135788;
        case 0x13578cu: goto label_13578c;
        case 0x135790u: goto label_135790;
        case 0x135794u: goto label_135794;
        case 0x135798u: goto label_135798;
        case 0x13579cu: goto label_13579c;
        case 0x1357a0u: goto label_1357a0;
        case 0x1357a4u: goto label_1357a4;
        case 0x1357a8u: goto label_1357a8;
        case 0x1357acu: goto label_1357ac;
        case 0x1357b0u: goto label_1357b0;
        case 0x1357b4u: goto label_1357b4;
        case 0x1357b8u: goto label_1357b8;
        case 0x1357bcu: goto label_1357bc;
        case 0x1357c0u: goto label_1357c0;
        case 0x1357c4u: goto label_1357c4;
        case 0x1357c8u: goto label_1357c8;
        case 0x1357ccu: goto label_1357cc;
        case 0x1357d0u: goto label_1357d0;
        case 0x1357d4u: goto label_1357d4;
        case 0x1357d8u: goto label_1357d8;
        case 0x1357dcu: goto label_1357dc;
        case 0x1357e0u: goto label_1357e0;
        case 0x1357e4u: goto label_1357e4;
        case 0x1357e8u: goto label_1357e8;
        case 0x1357ecu: goto label_1357ec;
        case 0x1357f0u: goto label_1357f0;
        case 0x1357f4u: goto label_1357f4;
        case 0x1357f8u: goto label_1357f8;
        case 0x1357fcu: goto label_1357fc;
        case 0x135800u: goto label_135800;
        case 0x135804u: goto label_135804;
        case 0x135808u: goto label_135808;
        case 0x13580cu: goto label_13580c;
        case 0x135810u: goto label_135810;
        case 0x135814u: goto label_135814;
        case 0x135818u: goto label_135818;
        case 0x13581cu: goto label_13581c;
        case 0x135820u: goto label_135820;
        case 0x135824u: goto label_135824;
        case 0x135828u: goto label_135828;
        case 0x13582cu: goto label_13582c;
        case 0x135830u: goto label_135830;
        case 0x135834u: goto label_135834;
        case 0x135838u: goto label_135838;
        case 0x13583cu: goto label_13583c;
        case 0x135840u: goto label_135840;
        case 0x135844u: goto label_135844;
        case 0x135848u: goto label_135848;
        case 0x13584cu: goto label_13584c;
        case 0x135850u: goto label_135850;
        case 0x135854u: goto label_135854;
        case 0x135858u: goto label_135858;
        case 0x13585cu: goto label_13585c;
        case 0x135860u: goto label_135860;
        case 0x135864u: goto label_135864;
        case 0x135868u: goto label_135868;
        case 0x13586cu: goto label_13586c;
        case 0x135870u: goto label_135870;
        case 0x135874u: goto label_135874;
        case 0x135878u: goto label_135878;
        case 0x13587cu: goto label_13587c;
        case 0x135880u: goto label_135880;
        case 0x135884u: goto label_135884;
        case 0x135888u: goto label_135888;
        case 0x13588cu: goto label_13588c;
        case 0x135890u: goto label_135890;
        case 0x135894u: goto label_135894;
        case 0x135898u: goto label_135898;
        case 0x13589cu: goto label_13589c;
        case 0x1358a0u: goto label_1358a0;
        case 0x1358a4u: goto label_1358a4;
        case 0x1358a8u: goto label_1358a8;
        case 0x1358acu: goto label_1358ac;
        case 0x1358b0u: goto label_1358b0;
        case 0x1358b4u: goto label_1358b4;
        case 0x1358b8u: goto label_1358b8;
        case 0x1358bcu: goto label_1358bc;
        case 0x1358c0u: goto label_1358c0;
        case 0x1358c4u: goto label_1358c4;
        case 0x1358c8u: goto label_1358c8;
        case 0x1358ccu: goto label_1358cc;
        default: break;
    }

    ctx->pc = 0x135680u;

label_135680:
    // 0x135680: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x135680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_135684:
    // 0x135684: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x135684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_135688:
    // 0x135688: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x135688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_13568c:
    // 0x13568c: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x13568cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_135690:
    // 0x135690: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x135690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_135694:
    // 0x135694: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x135694u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_135698:
    // 0x135698: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x135698u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_13569c:
    // 0x13569c: 0x264501e0  addiu       $a1, $s2, 0x1E0
    ctx->pc = 0x13569cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
label_1356a0:
    // 0x1356a0: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x1356a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_1356a4:
    // 0x1356a4: 0xe64c01a0  swc1        $f12, 0x1A0($s2)
    ctx->pc = 0x1356a4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 416), bits); }
label_1356a8:
    // 0x1356a8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1356a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1356ac:
    // 0x1356ac: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1356acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_1356b0:
    // 0x1356b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1356b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1356b4:
    // 0x1356b4: 0x844401b8  lh          $a0, 0x1B8($v0)
    ctx->pc = 0x1356b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 440)));
label_1356b8:
    // 0x1356b8: 0x8c4301bc  lw          $v1, 0x1BC($v0)
    ctx->pc = 0x1356b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
label_1356bc:
    // 0x1356bc: 0x60f809  jalr        $v1
label_1356c0:
    if (ctx->pc == 0x1356C0u) {
        ctx->pc = 0x1356C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1356BCu;
        // 0x1356c0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1356C4u;
        goto label_1356c4;
    }
    ctx->pc = 0x1356BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1356C4u);
        ctx->pc = 0x1356C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1356BCu;
        // 0x1356c0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1356BCu, 0x1356C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1356C4u;
label_1356c4:
    // 0x1356c4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1356c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1356c8:
    // 0x1356c8: 0x264501f0  addiu       $a1, $s2, 0x1F0
    ctx->pc = 0x1356c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
label_1356cc:
    // 0x1356cc: 0x844401c0  lh          $a0, 0x1C0($v0)
    ctx->pc = 0x1356ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 448)));
label_1356d0:
    // 0x1356d0: 0x8c4601c4  lw          $a2, 0x1C4($v0)
    ctx->pc = 0x1356d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
label_1356d4:
    // 0x1356d4: 0xc0f809  jalr        $a2
label_1356d8:
    if (ctx->pc == 0x1356D8u) {
        ctx->pc = 0x1356D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1356D4u;
        // 0x1356d8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1356DCu;
        goto label_1356dc;
    }
    ctx->pc = 0x1356D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1356DCu);
        ctx->pc = 0x1356D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1356D4u;
        // 0x1356d8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1356D4u, 0x1356DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1356DCu;
label_1356dc:
    // 0x1356dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1356dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1356e0:
    // 0x1356e0: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x1356e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_1356e4:
    // 0x1356e4: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x1356e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_1356e8:
    // 0x1356e8: 0x40f809  jalr        $v0
label_1356ec:
    if (ctx->pc == 0x1356ECu) {
        ctx->pc = 0x1356ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1356E8u;
        // 0x1356ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1356F0u;
        goto label_1356f0;
    }
    ctx->pc = 0x1356E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1356F0u);
        ctx->pc = 0x1356ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1356E8u;
        // 0x1356ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1356E8u, 0x1356F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1356F0u;
label_1356f0:
    // 0x1356f0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1356f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1356f4:
    // 0x1356f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1356f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1356f8:
    // 0x1356f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1356f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1356fc:
    // 0x1356fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1356fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_135700:
    // 0x135700: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x135700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_135704:
    // 0x135704: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x135704u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_135708:
    // 0x135708: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x135708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13570c:
    // 0x13570c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13570cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_135710:
    // 0x135710: 0xc0489ca  jal         func_122728
label_135714:
    if (ctx->pc == 0x135714u) {
        ctx->pc = 0x135714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135710u;
        // 0x135714: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135718u;
        goto label_135718;
    }
    ctx->pc = 0x135710u;
    SET_GPR_U32(ctx, 31, 0x135718u);
    ctx->pc = 0x135714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135710u;
    // 0x135714: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122728u, 0x135710u, 0x135718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135718u;
label_135718:
    // 0x135718: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x135718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13571c:
    // 0x13571c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13571cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_135720:
    // 0x135720: 0x844401b8  lh          $a0, 0x1B8($v0)
    ctx->pc = 0x135720u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 440)));
label_135724:
    // 0x135724: 0x8c4301bc  lw          $v1, 0x1BC($v0)
    ctx->pc = 0x135724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
label_135728:
    // 0x135728: 0x60f809  jalr        $v1
label_13572c:
    if (ctx->pc == 0x13572Cu) {
        ctx->pc = 0x13572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135728u;
        // 0x13572c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135730u;
        goto label_135730;
    }
    ctx->pc = 0x135728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x135730u);
        ctx->pc = 0x13572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135728u;
        // 0x13572c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135728u, 0x135730u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135730u;
label_135730:
    // 0x135730: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x135730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_135734:
    // 0x135734: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x135734u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_135738:
    // 0x135738: 0x84a40220  lh          $a0, 0x220($a1)
    ctx->pc = 0x135738u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 544)));
label_13573c:
    // 0x13573c: 0x8ca20224  lw          $v0, 0x224($a1)
    ctx->pc = 0x13573cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 548)));
label_135740:
    // 0x135740: 0x40f809  jalr        $v0
label_135744:
    if (ctx->pc == 0x135744u) {
        ctx->pc = 0x135744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135740u;
        // 0x135744: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135748u;
        goto label_135748;
    }
    ctx->pc = 0x135740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x135748u);
        ctx->pc = 0x135744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135740u;
        // 0x135744: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135740u, 0x135748u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135748u;
label_135748:
    // 0x135748: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x135748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13574c:
    // 0x13574c: 0xc0cd8ec  jal         func_3363B0
label_135750:
    if (ctx->pc == 0x135750u) {
        ctx->pc = 0x135750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13574Cu;
        // 0x135750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135754u;
        goto label_135754;
    }
    ctx->pc = 0x13574Cu;
    SET_GPR_U32(ctx, 31, 0x135754u);
    ctx->pc = 0x135750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13574Cu;
    // 0x135750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x13574Cu, 0x135754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135754u;
label_135754:
    // 0x135754: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x135754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_135758:
    // 0x135758: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x135758u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13575c:
    // 0x13575c: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x13575cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_135760:
    // 0x135760: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x135760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_135764:
    // 0x135764: 0x40f809  jalr        $v0
label_135768:
    if (ctx->pc == 0x135768u) {
        ctx->pc = 0x135768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135764u;
        // 0x135768: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13576Cu;
        goto label_13576c;
    }
    ctx->pc = 0x135764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13576Cu);
        ctx->pc = 0x135768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135764u;
        // 0x135768: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135764u, 0x13576Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13576Cu;
label_13576c:
    // 0x13576c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13576cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_135770:
    // 0x135770: 0xc0cd916  jal         func_336458
label_135774:
    if (ctx->pc == 0x135774u) {
        ctx->pc = 0x135774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135770u;
        // 0x135774: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135778u;
        goto label_135778;
    }
    ctx->pc = 0x135770u;
    SET_GPR_U32(ctx, 31, 0x135778u);
    ctx->pc = 0x135774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135770u;
    // 0x135774: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336458u, 0x135770u, 0x135778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135778u;
label_135778:
    // 0x135778: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x135778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13577c:
    // 0x13577c: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x13577cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_135780:
    // 0x135780: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x135780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_135784:
    // 0x135784: 0x40f809  jalr        $v0
label_135788:
    if (ctx->pc == 0x135788u) {
        ctx->pc = 0x135788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135784u;
        // 0x135788: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13578Cu;
        goto label_13578c;
    }
    ctx->pc = 0x135784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13578Cu);
        ctx->pc = 0x135788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135784u;
        // 0x135788: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135784u, 0x13578Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13578Cu;
label_13578c:
    // 0x13578c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13578cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_135790:
    // 0x135790: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x135790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_135794:
    // 0x135794: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x135794u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_135798:
    // 0x135798: 0xc136b24  jal         func_4DAC90
label_13579c:
    if (ctx->pc == 0x13579Cu) {
        ctx->pc = 0x13579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135798u;
        // 0x13579c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1357A0u;
        goto label_1357a0;
    }
    ctx->pc = 0x135798u;
    SET_GPR_U32(ctx, 31, 0x1357A0u);
    ctx->pc = 0x13579Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135798u;
    // 0x13579c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x135798u, 0x1357A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1357A0u;
label_1357a0:
    // 0x1357a0: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x1357a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1357a4:
    // 0x1357a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1357a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1357a8:
    // 0x1357a8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1357a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1357ac:
    // 0x1357ac: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1357acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1357b0:
    // 0x1357b0: 0xc136b18  jal         func_4DAC60
label_1357b4:
    if (ctx->pc == 0x1357B4u) {
        ctx->pc = 0x1357B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1357B0u;
        // 0x1357b4: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1357B8u;
        goto label_1357b8;
    }
    ctx->pc = 0x1357B0u;
    SET_GPR_U32(ctx, 31, 0x1357B8u);
    ctx->pc = 0x1357B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1357B0u;
    // 0x1357b4: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x1357B0u, 0x1357B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1357B8u;
label_1357b8:
    // 0x1357b8: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x1357b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1357bc:
    // 0x1357bc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1357bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1357c0:
    // 0x1357c0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1357c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_1357c4:
    // 0x1357c4: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x1357c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_1357c8:
    // 0x1357c8: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x1357c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_1357cc:
    // 0x1357cc: 0x40f809  jalr        $v0
label_1357d0:
    if (ctx->pc == 0x1357D0u) {
        ctx->pc = 0x1357D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1357CCu;
        // 0x1357d0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1357D4u;
        goto label_1357d4;
    }
    ctx->pc = 0x1357CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1357D4u);
        ctx->pc = 0x1357D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1357CCu;
        // 0x1357d0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1357CCu, 0x1357D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1357D4u;
label_1357d4:
    // 0x1357d4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1357d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1357d8:
    // 0x1357d8: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x1357d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1357dc:
    // 0x1357dc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1357dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1357e0:
    // 0x1357e0: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x1357e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_1357e4:
    // 0x1357e4: 0x84a40218  lh          $a0, 0x218($a1)
    ctx->pc = 0x1357e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 536)));
label_1357e8:
    // 0x1357e8: 0x8ca2021c  lw          $v0, 0x21C($a1)
    ctx->pc = 0x1357e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 540)));
label_1357ec:
    // 0x1357ec: 0x40f809  jalr        $v0
label_1357f0:
    if (ctx->pc == 0x1357F0u) {
        ctx->pc = 0x1357F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1357ECu;
        // 0x1357f0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1357F4u;
        goto label_1357f4;
    }
    ctx->pc = 0x1357ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1357F4u);
        ctx->pc = 0x1357F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1357ECu;
        // 0x1357f0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1357ECu, 0x1357F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1357F4u;
label_1357f4:
    // 0x1357f4: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1357f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1357f8:
    // 0x1357f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1357f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1357fc:
    // 0x1357fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1357fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_135800:
    // 0x135800: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x135800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_135804:
    // 0x135804: 0xc0cdc5a  jal         func_337168
label_135808:
    if (ctx->pc == 0x135808u) {
        ctx->pc = 0x135808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135804u;
        // 0x135808: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13580Cu;
        goto label_13580c;
    }
    ctx->pc = 0x135804u;
    SET_GPR_U32(ctx, 31, 0x13580Cu);
    ctx->pc = 0x135808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135804u;
    // 0x135808: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337168u, 0x135804u, 0x13580Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13580Cu;
label_13580c:
    // 0x13580c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_135810:
    if (ctx->pc == 0x135810u) {
        ctx->pc = 0x135810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13580Cu;
        // 0x135810: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135814u;
        goto label_135814;
    }
    ctx->pc = 0x13580Cu;
    {
        const bool branch_taken_0x13580c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13580Cu;
        // 0x135810: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13580c) {
            ctx->pc = 0x135824u;
            goto label_135824;
        }
    }
    ctx->pc = 0x135814u;
label_135814:
    // 0x135814: 0xc0cd972  jal         func_3365C8
label_135818:
    if (ctx->pc == 0x135818u) {
        ctx->pc = 0x135818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135814u;
        // 0x135818: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13581Cu;
        goto label_13581c;
    }
    ctx->pc = 0x135814u;
    SET_GPR_U32(ctx, 31, 0x13581Cu);
    ctx->pc = 0x135818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135814u;
    // 0x135818: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365C8u, 0x135814u, 0x13581Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13581Cu;
label_13581c:
    // 0x13581c: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x13581cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_135820:
    // 0x135820: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x135820u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
label_135824:
    // 0x135824: 0xc04d72a  jal         func_135CA8
label_135828:
    if (ctx->pc == 0x135828u) {
        ctx->pc = 0x135828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135824u;
        // 0x135828: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13582Cu;
        goto label_13582c;
    }
    ctx->pc = 0x135824u;
    SET_GPR_U32(ctx, 31, 0x13582Cu);
    ctx->pc = 0x135828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135824u;
    // 0x135828: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135CA8u, 0x135824u, 0x13582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13582Cu;
label_13582c:
    // 0x13582c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13582cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_135830:
    // 0x135830: 0xc0484a6  jal         func_121298
label_135834:
    if (ctx->pc == 0x135834u) {
        ctx->pc = 0x135834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135830u;
        // 0x135834: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135838u;
        goto label_135838;
    }
    ctx->pc = 0x135830u;
    SET_GPR_U32(ctx, 31, 0x135838u);
    ctx->pc = 0x135834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135830u;
    // 0x135834: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121298u, 0x135830u, 0x135838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135838u;
label_135838:
    // 0x135838: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_13583c:
    if (ctx->pc == 0x13583Cu) {
        ctx->pc = 0x13583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135838u;
        // 0x13583c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135840u;
        goto label_135840;
    }
    ctx->pc = 0x135838u;
    {
        const bool branch_taken_0x135838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135838) {
            ctx->pc = 0x13583Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135838u;
            // 0x13583c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1358A4u;
            goto label_1358a4;
        }
    }
    ctx->pc = 0x135840u;
label_135840:
    // 0x135840: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x135840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_135844:
    // 0x135844: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x135844u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_135848:
    // 0x135848: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x135848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_13584c:
    // 0x13584c: 0x40f809  jalr        $v0
label_135850:
    if (ctx->pc == 0x135850u) {
        ctx->pc = 0x135850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13584Cu;
        // 0x135850: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135854u;
        goto label_135854;
    }
    ctx->pc = 0x13584Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x135854u);
        ctx->pc = 0x135850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13584Cu;
        // 0x135850: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13584Cu, 0x135854u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135854u;
label_135854:
    // 0x135854: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x135854u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_135858:
    // 0x135858: 0x27b100a0  addiu       $s1, $sp, 0xA0
    ctx->pc = 0x135858u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_13585c:
    // 0x13585c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x13585cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_135860:
    // 0x135860: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x135860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_135864:
    // 0x135864: 0x84a40218  lh          $a0, 0x218($a1)
    ctx->pc = 0x135864u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 536)));
label_135868:
    // 0x135868: 0x8ca2021c  lw          $v0, 0x21C($a1)
    ctx->pc = 0x135868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 540)));
label_13586c:
    // 0x13586c: 0x40f809  jalr        $v0
label_135870:
    if (ctx->pc == 0x135870u) {
        ctx->pc = 0x135870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13586Cu;
        // 0x135870: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135874u;
        goto label_135874;
    }
    ctx->pc = 0x13586Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x135874u);
        ctx->pc = 0x135870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13586Cu;
        // 0x135870: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13586Cu, 0x135874u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135874u;
label_135874:
    // 0x135874: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x135874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_135878:
    // 0x135878: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x135878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13587c:
    // 0x13587c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x13587cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_135880:
    // 0x135880: 0xc0cdc5a  jal         func_337168
label_135884:
    if (ctx->pc == 0x135884u) {
        ctx->pc = 0x135884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135880u;
        // 0x135884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135888u;
        goto label_135888;
    }
    ctx->pc = 0x135880u;
    SET_GPR_U32(ctx, 31, 0x135888u);
    ctx->pc = 0x135884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135880u;
    // 0x135884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337168u, 0x135880u, 0x135888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135888u;
label_135888:
    // 0x135888: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_13588c:
    if (ctx->pc == 0x13588Cu) {
        ctx->pc = 0x13588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135888u;
        // 0x13588c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135890u;
        goto label_135890;
    }
    ctx->pc = 0x135888u;
    {
        const bool branch_taken_0x135888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135888u;
        // 0x13588c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135888) {
            ctx->pc = 0x1358A0u;
            goto label_1358a0;
        }
    }
    ctx->pc = 0x135890u;
label_135890:
    // 0x135890: 0xc0cd972  jal         func_3365C8
label_135894:
    if (ctx->pc == 0x135894u) {
        ctx->pc = 0x135894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135890u;
        // 0x135894: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135898u;
        goto label_135898;
    }
    ctx->pc = 0x135890u;
    SET_GPR_U32(ctx, 31, 0x135898u);
    ctx->pc = 0x135894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135890u;
    // 0x135894: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365C8u, 0x135890u, 0x135898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135898u;
label_135898:
    // 0x135898: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x135898u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_13589c:
    // 0x13589c: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x13589cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
label_1358a0:
    // 0x1358a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1358a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1358a4:
    // 0x1358a4: 0xc04828c  jal         func_120A30
label_1358a8:
    if (ctx->pc == 0x1358A8u) {
        ctx->pc = 0x1358A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1358A4u;
        // 0x1358a8: 0xc48c01a0  lwc1        $f12, 0x1A0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1358ACu;
        goto label_1358ac;
    }
    ctx->pc = 0x1358A4u;
    SET_GPR_U32(ctx, 31, 0x1358ACu);
    ctx->pc = 0x1358A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1358A4u;
    // 0x1358a8: 0xc48c01a0  lwc1        $f12, 0x1A0($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A30u, 0x1358A4u, 0x1358ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1358ACu;
label_1358ac:
    // 0x1358ac: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x1358acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1358b0:
    // 0x1358b0: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x1358b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1358b4:
    // 0x1358b4: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x1358b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1358b8:
    // 0x1358b8: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x1358b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1358bc:
    // 0x1358bc: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x1358bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_1358c0:
    // 0x1358c0: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x1358c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1358c4:
    // 0x1358c4: 0x3e00008  jr          $ra
label_1358c8:
    if (ctx->pc == 0x1358C8u) {
        ctx->pc = 0x1358C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1358C4u;
        // 0x1358c8: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1358CCu;
        goto label_1358cc;
    }
    ctx->pc = 0x1358C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1358C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1358C4u;
        // 0x1358c8: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1358C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1358CCu;
label_1358cc:
    // 0x1358cc: 0x0  nop
    ctx->pc = 0x1358ccu;
    // NOP
    ctx->pc = 0x1358d0u;
}
