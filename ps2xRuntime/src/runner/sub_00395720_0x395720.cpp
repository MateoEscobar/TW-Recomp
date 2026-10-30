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

// Function: sub_00395720
// Address: 0x395720 - 0x395a10
void sub_00395720_0x395720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395720_0x395720");
#endif

    switch (ctx->pc) {
        case 0x395720u: goto label_395720;
        case 0x395724u: goto label_395724;
        case 0x395728u: goto label_395728;
        case 0x39572cu: goto label_39572c;
        case 0x395730u: goto label_395730;
        case 0x395734u: goto label_395734;
        case 0x395738u: goto label_395738;
        case 0x39573cu: goto label_39573c;
        case 0x395740u: goto label_395740;
        case 0x395744u: goto label_395744;
        case 0x395748u: goto label_395748;
        case 0x39574cu: goto label_39574c;
        case 0x395750u: goto label_395750;
        case 0x395754u: goto label_395754;
        case 0x395758u: goto label_395758;
        case 0x39575cu: goto label_39575c;
        case 0x395760u: goto label_395760;
        case 0x395764u: goto label_395764;
        case 0x395768u: goto label_395768;
        case 0x39576cu: goto label_39576c;
        case 0x395770u: goto label_395770;
        case 0x395774u: goto label_395774;
        case 0x395778u: goto label_395778;
        case 0x39577cu: goto label_39577c;
        case 0x395780u: goto label_395780;
        case 0x395784u: goto label_395784;
        case 0x395788u: goto label_395788;
        case 0x39578cu: goto label_39578c;
        case 0x395790u: goto label_395790;
        case 0x395794u: goto label_395794;
        case 0x395798u: goto label_395798;
        case 0x39579cu: goto label_39579c;
        case 0x3957a0u: goto label_3957a0;
        case 0x3957a4u: goto label_3957a4;
        case 0x3957a8u: goto label_3957a8;
        case 0x3957acu: goto label_3957ac;
        case 0x3957b0u: goto label_3957b0;
        case 0x3957b4u: goto label_3957b4;
        case 0x3957b8u: goto label_3957b8;
        case 0x3957bcu: goto label_3957bc;
        case 0x3957c0u: goto label_3957c0;
        case 0x3957c4u: goto label_3957c4;
        case 0x3957c8u: goto label_3957c8;
        case 0x3957ccu: goto label_3957cc;
        case 0x3957d0u: goto label_3957d0;
        case 0x3957d4u: goto label_3957d4;
        case 0x3957d8u: goto label_3957d8;
        case 0x3957dcu: goto label_3957dc;
        case 0x3957e0u: goto label_3957e0;
        case 0x3957e4u: goto label_3957e4;
        case 0x3957e8u: goto label_3957e8;
        case 0x3957ecu: goto label_3957ec;
        case 0x3957f0u: goto label_3957f0;
        case 0x3957f4u: goto label_3957f4;
        case 0x3957f8u: goto label_3957f8;
        case 0x3957fcu: goto label_3957fc;
        case 0x395800u: goto label_395800;
        case 0x395804u: goto label_395804;
        case 0x395808u: goto label_395808;
        case 0x39580cu: goto label_39580c;
        case 0x395810u: goto label_395810;
        case 0x395814u: goto label_395814;
        case 0x395818u: goto label_395818;
        case 0x39581cu: goto label_39581c;
        case 0x395820u: goto label_395820;
        case 0x395824u: goto label_395824;
        case 0x395828u: goto label_395828;
        case 0x39582cu: goto label_39582c;
        case 0x395830u: goto label_395830;
        case 0x395834u: goto label_395834;
        case 0x395838u: goto label_395838;
        case 0x39583cu: goto label_39583c;
        case 0x395840u: goto label_395840;
        case 0x395844u: goto label_395844;
        case 0x395848u: goto label_395848;
        case 0x39584cu: goto label_39584c;
        case 0x395850u: goto label_395850;
        case 0x395854u: goto label_395854;
        case 0x395858u: goto label_395858;
        case 0x39585cu: goto label_39585c;
        case 0x395860u: goto label_395860;
        case 0x395864u: goto label_395864;
        case 0x395868u: goto label_395868;
        case 0x39586cu: goto label_39586c;
        case 0x395870u: goto label_395870;
        case 0x395874u: goto label_395874;
        case 0x395878u: goto label_395878;
        case 0x39587cu: goto label_39587c;
        case 0x395880u: goto label_395880;
        case 0x395884u: goto label_395884;
        case 0x395888u: goto label_395888;
        case 0x39588cu: goto label_39588c;
        case 0x395890u: goto label_395890;
        case 0x395894u: goto label_395894;
        case 0x395898u: goto label_395898;
        case 0x39589cu: goto label_39589c;
        case 0x3958a0u: goto label_3958a0;
        case 0x3958a4u: goto label_3958a4;
        case 0x3958a8u: goto label_3958a8;
        case 0x3958acu: goto label_3958ac;
        case 0x3958b0u: goto label_3958b0;
        case 0x3958b4u: goto label_3958b4;
        case 0x3958b8u: goto label_3958b8;
        case 0x3958bcu: goto label_3958bc;
        case 0x3958c0u: goto label_3958c0;
        case 0x3958c4u: goto label_3958c4;
        case 0x3958c8u: goto label_3958c8;
        case 0x3958ccu: goto label_3958cc;
        case 0x3958d0u: goto label_3958d0;
        case 0x3958d4u: goto label_3958d4;
        case 0x3958d8u: goto label_3958d8;
        case 0x3958dcu: goto label_3958dc;
        case 0x3958e0u: goto label_3958e0;
        case 0x3958e4u: goto label_3958e4;
        case 0x3958e8u: goto label_3958e8;
        case 0x3958ecu: goto label_3958ec;
        case 0x3958f0u: goto label_3958f0;
        case 0x3958f4u: goto label_3958f4;
        case 0x3958f8u: goto label_3958f8;
        case 0x3958fcu: goto label_3958fc;
        case 0x395900u: goto label_395900;
        case 0x395904u: goto label_395904;
        case 0x395908u: goto label_395908;
        case 0x39590cu: goto label_39590c;
        case 0x395910u: goto label_395910;
        case 0x395914u: goto label_395914;
        case 0x395918u: goto label_395918;
        case 0x39591cu: goto label_39591c;
        case 0x395920u: goto label_395920;
        case 0x395924u: goto label_395924;
        case 0x395928u: goto label_395928;
        case 0x39592cu: goto label_39592c;
        case 0x395930u: goto label_395930;
        case 0x395934u: goto label_395934;
        case 0x395938u: goto label_395938;
        case 0x39593cu: goto label_39593c;
        case 0x395940u: goto label_395940;
        case 0x395944u: goto label_395944;
        case 0x395948u: goto label_395948;
        case 0x39594cu: goto label_39594c;
        case 0x395950u: goto label_395950;
        case 0x395954u: goto label_395954;
        case 0x395958u: goto label_395958;
        case 0x39595cu: goto label_39595c;
        case 0x395960u: goto label_395960;
        case 0x395964u: goto label_395964;
        case 0x395968u: goto label_395968;
        case 0x39596cu: goto label_39596c;
        case 0x395970u: goto label_395970;
        case 0x395974u: goto label_395974;
        case 0x395978u: goto label_395978;
        case 0x39597cu: goto label_39597c;
        case 0x395980u: goto label_395980;
        case 0x395984u: goto label_395984;
        case 0x395988u: goto label_395988;
        case 0x39598cu: goto label_39598c;
        case 0x395990u: goto label_395990;
        case 0x395994u: goto label_395994;
        case 0x395998u: goto label_395998;
        case 0x39599cu: goto label_39599c;
        case 0x3959a0u: goto label_3959a0;
        case 0x3959a4u: goto label_3959a4;
        case 0x3959a8u: goto label_3959a8;
        case 0x3959acu: goto label_3959ac;
        case 0x3959b0u: goto label_3959b0;
        case 0x3959b4u: goto label_3959b4;
        case 0x3959b8u: goto label_3959b8;
        case 0x3959bcu: goto label_3959bc;
        case 0x3959c0u: goto label_3959c0;
        case 0x3959c4u: goto label_3959c4;
        case 0x3959c8u: goto label_3959c8;
        case 0x3959ccu: goto label_3959cc;
        case 0x3959d0u: goto label_3959d0;
        case 0x3959d4u: goto label_3959d4;
        case 0x3959d8u: goto label_3959d8;
        case 0x3959dcu: goto label_3959dc;
        case 0x3959e0u: goto label_3959e0;
        case 0x3959e4u: goto label_3959e4;
        case 0x3959e8u: goto label_3959e8;
        case 0x3959ecu: goto label_3959ec;
        case 0x3959f0u: goto label_3959f0;
        case 0x3959f4u: goto label_3959f4;
        case 0x3959f8u: goto label_3959f8;
        case 0x3959fcu: goto label_3959fc;
        case 0x395a00u: goto label_395a00;
        case 0x395a04u: goto label_395a04;
        case 0x395a08u: goto label_395a08;
        case 0x395a0cu: goto label_395a0c;
        default: break;
    }

    ctx->pc = 0x395720u;

label_395720:
    // 0x395720: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x395720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_395724:
    // 0x395724: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x395724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_395728:
    // 0x395728: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x395728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_39572c:
    // 0x39572c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x39572cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_395730:
    // 0x395730: 0xc0e55b0  jal         func_3956C0
label_395734:
    if (ctx->pc == 0x395734u) {
        ctx->pc = 0x395734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395730u;
        // 0x395734: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395738u;
        goto label_395738;
    }
    ctx->pc = 0x395730u;
    SET_GPR_U32(ctx, 31, 0x395738u);
    ctx->pc = 0x395734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395730u;
    // 0x395734: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3956C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3956C0u, 0x395730u, 0x395738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395738u;
label_395738:
    // 0x395738: 0xc0e5476  jal         func_3951D8
label_39573c:
    if (ctx->pc == 0x39573Cu) {
        ctx->pc = 0x39573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395738u;
        // 0x39573c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395740u;
        goto label_395740;
    }
    ctx->pc = 0x395738u;
    SET_GPR_U32(ctx, 31, 0x395740u);
    ctx->pc = 0x39573Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395738u;
    // 0x39573c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3951D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3951D8u, 0x395738u, 0x395740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395740u;
label_395740:
    // 0x395740: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x395740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_395744:
    // 0x395744: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x395744u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_395748:
    // 0x395748: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x395748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_39574c:
    // 0x39574c: 0x40f809  jalr        $v0
label_395750:
    if (ctx->pc == 0x395750u) {
        ctx->pc = 0x395750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39574Cu;
        // 0x395750: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395754u;
        goto label_395754;
    }
    ctx->pc = 0x39574Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x395754u);
        ctx->pc = 0x395750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39574Cu;
        // 0x395750: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39574Cu, 0x395754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x395754u;
label_395754:
    // 0x395754: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x395754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_395758:
    // 0x395758: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_39575c:
    if (ctx->pc == 0x39575Cu) {
        ctx->pc = 0x39575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395758u;
        // 0x39575c: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395760u;
        goto label_395760;
    }
    ctx->pc = 0x395758u;
    {
        const bool branch_taken_0x395758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395758u;
        // 0x39575c: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395758) {
            ctx->pc = 0x3957C8u;
            goto label_3957c8;
        }
    }
    ctx->pc = 0x395760u;
label_395760:
    // 0x395760: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x395760u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_395764:
    // 0x395764: 0x248417d0  addiu       $a0, $a0, 0x17D0
    ctx->pc = 0x395764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6096));
label_395768:
    // 0x395768: 0x24a517a0  addiu       $a1, $a1, 0x17A0
    ctx->pc = 0x395768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6048));
label_39576c:
    // 0x39576c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x39576cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_395770:
    // 0x395770: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x395770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_395774:
    // 0x395774: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x395774u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_395778:
    // 0x395778: 0x246317c0  addiu       $v1, $v1, 0x17C0
    ctx->pc = 0x395778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6080));
label_39577c:
    // 0x39577c: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x39577cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_395780:
    // 0x395780: 0x244217b0  addiu       $v0, $v0, 0x17B0
    ctx->pc = 0x395780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6064));
label_395784:
    // 0x395784: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x395784u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_395788:
    // 0x395788: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x395788u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_39578c:
    // 0x39578c: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x39578cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
label_395790:
    // 0x395790: 0x3c01d015  lui         $at, 0xD015
    ctx->pc = 0x395790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53269 << 16));
label_395794:
    // 0x395794: 0x342102f9  ori         $at, $at, 0x2F9
    ctx->pc = 0x395794u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)761);
label_395798:
    // 0x395798: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x395798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39579c:
    // 0x39579c: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x39579cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_3957a0:
    // 0x3957a0: 0x7fa70000  sq          $a3, 0x0($sp)
    ctx->pc = 0x3957a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 7));
label_3957a4:
    // 0x3957a4: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x3957a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
label_3957a8:
    // 0x3957a8: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x3957a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
label_3957ac:
    // 0x3957ac: 0x10600092  beqz        $v1, . + 4 + (0x92 << 2)
label_3957b0:
    if (ctx->pc == 0x3957B0u) {
        ctx->pc = 0x3957B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3957ACu;
        // 0x3957b0: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3957B4u;
        goto label_3957b4;
    }
    ctx->pc = 0x3957ACu;
    {
        const bool branch_taken_0x3957ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3957B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3957ACu;
        // 0x3957b0: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3957ac) {
            ctx->pc = 0x3959F8u;
            goto label_3959f8;
        }
    }
    ctx->pc = 0x3957B4u;
label_3957b4:
    // 0x3957b4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3957b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3957b8:
    // 0x3957b8: 0xc0601f8  jal         func_1807E0
label_3957bc:
    if (ctx->pc == 0x3957BCu) {
        ctx->pc = 0x3957BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3957B8u;
        // 0x3957bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3957C0u;
        goto label_3957c0;
    }
    ctx->pc = 0x3957B8u;
    SET_GPR_U32(ctx, 31, 0x3957C0u);
    ctx->pc = 0x3957BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3957B8u;
    // 0x3957bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1807E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1807E0u, 0x3957B8u, 0x3957C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3957C0u;
label_3957c0:
    // 0x3957c0: 0x1000008e  b           . + 4 + (0x8E << 2)
label_3957c4:
    if (ctx->pc == 0x3957C4u) {
        ctx->pc = 0x3957C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3957C0u;
        // 0x3957c4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3957C8u;
        goto label_3957c8;
    }
    ctx->pc = 0x3957C0u;
    {
        const bool branch_taken_0x3957c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3957C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3957C0u;
        // 0x3957c4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3957c0) {
            ctx->pc = 0x3959FCu;
            goto label_3959fc;
        }
    }
    ctx->pc = 0x3957C8u;
label_3957c8:
    // 0x3957c8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3957c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3957cc:
    // 0x3957cc: 0x41103  sra         $v0, $a0, 4
    ctx->pc = 0x3957ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 4));
label_3957d0:
    // 0x3957d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3957d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3957d4:
    // 0x3957d4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_3957d8:
    if (ctx->pc == 0x3957D8u) {
        ctx->pc = 0x3957D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3957D4u;
        // 0x3957d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3957DCu;
        goto label_3957dc;
    }
    ctx->pc = 0x3957D4u;
    {
        const bool branch_taken_0x3957d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3957D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3957D4u;
        // 0x3957d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3957d4) {
            ctx->pc = 0x395808u;
            goto label_395808;
        }
    }
    ctx->pc = 0x3957DCu;
label_3957dc:
    // 0x3957dc: 0x86020110  lh          $v0, 0x110($s0)
    ctx->pc = 0x3957dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_3957e0:
    // 0x3957e0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3957e0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_3957e4:
    // 0x3957e4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_3957e8:
    if (ctx->pc == 0x3957E8u) {
        ctx->pc = 0x3957E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3957E4u;
        // 0x3957e8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3957ECu;
        goto label_3957ec;
    }
    ctx->pc = 0x3957E4u;
    {
        const bool branch_taken_0x3957e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3957e4) {
            ctx->pc = 0x3957E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3957E4u;
            // 0x3957e8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395830u;
            goto label_395830;
        }
    }
    ctx->pc = 0x3957ECu;
label_3957ec:
    // 0x3957ec: 0x92020108  lbu         $v0, 0x108($s0)
    ctx->pc = 0x3957ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 264)));
label_3957f0:
    // 0x3957f0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_3957f4:
    if (ctx->pc == 0x3957F4u) {
        ctx->pc = 0x3957F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3957F0u;
        // 0x3957f4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3957F8u;
        goto label_3957f8;
    }
    ctx->pc = 0x3957F0u;
    {
        const bool branch_taken_0x3957f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3957f0) {
            ctx->pc = 0x3957F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3957F0u;
            // 0x3957f4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395830u;
            goto label_395830;
        }
    }
    ctx->pc = 0x3957F8u;
label_3957f8:
    // 0x3957f8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3957f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_3957fc:
    // 0x3957fc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3957fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_395800:
    // 0x395800: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_395804:
    if (ctx->pc == 0x395804u) {
        ctx->pc = 0x395804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395800u;
        // 0x395804: 0x8e020104  lw          $v0, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395808u;
        goto label_395808;
    }
    ctx->pc = 0x395800u;
    {
        const bool branch_taken_0x395800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x395800) {
            ctx->pc = 0x395804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395800u;
            // 0x395804: 0x8e020104  lw          $v0, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395810u;
            goto label_395810;
        }
    }
    ctx->pc = 0x395808u;
label_395808:
    // 0x395808: 0x10000009  b           . + 4 + (0x9 << 2)
label_39580c:
    if (ctx->pc == 0x39580Cu) {
        ctx->pc = 0x39580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395808u;
        // 0x39580c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395810u;
        goto label_395810;
    }
    ctx->pc = 0x395808u;
    {
        const bool branch_taken_0x395808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395808u;
        // 0x39580c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395808) {
            ctx->pc = 0x395830u;
            goto label_395830;
        }
    }
    ctx->pc = 0x395810u;
label_395810:
    // 0x395810: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_395814:
    if (ctx->pc == 0x395814u) {
        ctx->pc = 0x395818u;
        goto label_395818;
    }
    ctx->pc = 0x395810u;
    {
        const bool branch_taken_0x395810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x395810) {
            ctx->pc = 0x395830u;
            goto label_395830;
        }
    }
    ctx->pc = 0x395818u;
label_395818:
    // 0x395818: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x395818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_39581c:
    // 0x39581c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x39581cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_395820:
    // 0x395820: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x395820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_395824:
    // 0x395824: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x395824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
label_395828:
    // 0x395828: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x395828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_39582c:
    // 0x39582c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x39582cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_395830:
    // 0x395830: 0x50600072  beql        $v1, $zero, . + 4 + (0x72 << 2)
label_395834:
    if (ctx->pc == 0x395834u) {
        ctx->pc = 0x395834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395830u;
        // 0x395834: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395838u;
        goto label_395838;
    }
    ctx->pc = 0x395830u;
    {
        const bool branch_taken_0x395830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x395830) {
            ctx->pc = 0x395834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395830u;
            // 0x395834: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3959FCu;
            goto label_3959fc;
        }
    }
    ctx->pc = 0x395838u;
label_395838:
    // 0x395838: 0x8e0300c8  lw          $v1, 0xC8($s0)
    ctx->pc = 0x395838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_39583c:
    // 0x39583c: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x39583cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_395840:
    // 0x395840: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_395844:
    if (ctx->pc == 0x395844u) {
        ctx->pc = 0x395844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395840u;
        // 0x395844: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395848u;
        goto label_395848;
    }
    ctx->pc = 0x395840u;
    {
        const bool branch_taken_0x395840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x395844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395840u;
        // 0x395844: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395840) {
            ctx->pc = 0x39584Cu;
            goto label_39584c;
        }
    }
    ctx->pc = 0x395848u;
label_395848:
    // 0x395848: 0xa2020108  sb          $v0, 0x108($s0)
    ctx->pc = 0x395848u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 264), (uint8_t)GPR_U32(ctx, 2));
label_39584c:
    // 0x39584c: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x39584cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_395850:
    // 0x395850: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x395850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_395854:
    // 0x395854: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_395858:
    if (ctx->pc == 0x395858u) {
        ctx->pc = 0x395858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395854u;
        // 0x395858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39585Cu;
        goto label_39585c;
    }
    ctx->pc = 0x395854u;
    {
        const bool branch_taken_0x395854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x395858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395854u;
        // 0x395858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395854) {
            ctx->pc = 0x3958D0u;
            goto label_3958d0;
        }
    }
    ctx->pc = 0x39585Cu;
label_39585c:
    // 0x39585c: 0xc0e87ca  jal         func_3A1F28
label_395860:
    if (ctx->pc == 0x395860u) {
        ctx->pc = 0x395860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39585Cu;
        // 0x395860: 0x26110020  addiu       $s1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395864u;
        goto label_395864;
    }
    ctx->pc = 0x39585Cu;
    SET_GPR_U32(ctx, 31, 0x395864u);
    ctx->pc = 0x395860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39585Cu;
    // 0x395860: 0x26110020  addiu       $s1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F28u, 0x39585Cu, 0x395864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395864u;
label_395864:
    // 0x395864: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x395864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_395868:
    // 0x395868: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x395868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39586c:
    // 0x39586c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x39586cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_395870:
    // 0x395870: 0x0  nop
    ctx->pc = 0x395870u;
    // NOP
label_395874:
    // 0x395874: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_395878:
    if (ctx->pc == 0x395878u) {
        ctx->pc = 0x395878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395874u;
        // 0x395878: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39587Cu;
        goto label_39587c;
    }
    ctx->pc = 0x395874u;
    {
        const bool branch_taken_0x395874 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x395878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395874u;
        // 0x395878: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395874) {
            ctx->pc = 0x3958C4u;
            goto label_3958c4;
        }
    }
    ctx->pc = 0x39587Cu;
label_39587c:
    // 0x39587c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x39587cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_395880:
    // 0x395880: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x395880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_395884:
    // 0x395884: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x395884u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_395888:
    // 0x395888: 0x0  nop
    ctx->pc = 0x395888u;
    // NOP
label_39588c:
    // 0x39588c: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
label_395890:
    if (ctx->pc == 0x395890u) {
        ctx->pc = 0x395890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39588Cu;
        // 0x395890: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x395894u;
        goto label_395894;
    }
    ctx->pc = 0x39588Cu;
    {
        const bool branch_taken_0x39588c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x39588c) {
            ctx->pc = 0x395890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39588Cu;
            // 0x395890: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3958C8u;
            goto label_3958c8;
        }
    }
    ctx->pc = 0x395894u;
label_395894:
    // 0x395894: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x395894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_395898:
    // 0x395898: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x395898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39589c:
    // 0x39589c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x39589cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3958a0:
    // 0x3958a0: 0x0  nop
    ctx->pc = 0x3958a0u;
    // NOP
label_3958a4:
    // 0x3958a4: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_3958a8:
    if (ctx->pc == 0x3958A8u) {
        ctx->pc = 0x3958A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3958A4u;
        // 0x3958a8: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3958ACu;
        goto label_3958ac;
    }
    ctx->pc = 0x3958A4u;
    {
        const bool branch_taken_0x3958a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3958a4) {
            ctx->pc = 0x3958A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3958A4u;
            // 0x3958a8: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3958C8u;
            goto label_3958c8;
        }
    }
    ctx->pc = 0x3958ACu;
label_3958ac:
    // 0x3958ac: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x3958acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3958b0:
    // 0x3958b0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x3958b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3958b4:
    // 0x3958b4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3958b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3958b8:
    // 0x3958b8: 0x0  nop
    ctx->pc = 0x3958b8u;
    // NOP
label_3958bc:
    // 0x3958bc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_3958c0:
    if (ctx->pc == 0x3958C0u) {
        ctx->pc = 0x3958C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3958BCu;
        // 0x3958c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3958C4u;
        goto label_3958c4;
    }
    ctx->pc = 0x3958BCu;
    {
        const bool branch_taken_0x3958bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3958bc) {
            ctx->pc = 0x3958C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3958BCu;
            // 0x3958c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3958C4u;
            goto label_3958c4;
        }
    }
    ctx->pc = 0x3958C4u;
label_3958c4:
    // 0x3958c4: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x3958c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_3958c8:
    // 0x3958c8: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
label_3958cc:
    if (ctx->pc == 0x3958CCu) {
        ctx->pc = 0x3958CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3958C8u;
        // 0x3958cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3958D0u;
        goto label_3958d0;
    }
    ctx->pc = 0x3958C8u;
    {
        const bool branch_taken_0x3958c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3958CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3958C8u;
        // 0x3958cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3958c8) {
            ctx->pc = 0x3959ECu;
            goto label_3959ec;
        }
    }
    ctx->pc = 0x3958D0u;
label_3958d0:
    // 0x3958d0: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3958d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3958d4:
    // 0x3958d4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3958d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_3958d8:
    // 0x3958d8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3958dc:
    if (ctx->pc == 0x3958DCu) {
        ctx->pc = 0x3958DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3958D8u;
        // 0x3958dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3958E0u;
        goto label_3958e0;
    }
    ctx->pc = 0x3958D8u;
    {
        const bool branch_taken_0x3958d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3958DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3958D8u;
        // 0x3958dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3958d8) {
            ctx->pc = 0x395954u;
            goto label_395954;
        }
    }
    ctx->pc = 0x3958E0u;
label_3958e0:
    // 0x3958e0: 0xc0e87c8  jal         func_3A1F20
label_3958e4:
    if (ctx->pc == 0x3958E4u) {
        ctx->pc = 0x3958E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3958E0u;
        // 0x3958e4: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3958E8u;
        goto label_3958e8;
    }
    ctx->pc = 0x3958E0u;
    SET_GPR_U32(ctx, 31, 0x3958E8u);
    ctx->pc = 0x3958E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3958E0u;
    // 0x3958e4: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F20u, 0x3958E0u, 0x3958E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3958E8u;
label_3958e8:
    // 0x3958e8: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x3958e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3958ec:
    // 0x3958ec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3958ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3958f0:
    // 0x3958f0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3958f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3958f4:
    // 0x3958f4: 0x0  nop
    ctx->pc = 0x3958f4u;
    // NOP
label_3958f8:
    // 0x3958f8: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_3958fc:
    if (ctx->pc == 0x3958FCu) {
        ctx->pc = 0x3958FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3958F8u;
        // 0x3958fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395900u;
        goto label_395900;
    }
    ctx->pc = 0x3958F8u;
    {
        const bool branch_taken_0x3958f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3958FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3958F8u;
        // 0x3958fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3958f8) {
            ctx->pc = 0x395948u;
            goto label_395948;
        }
    }
    ctx->pc = 0x395900u;
label_395900:
    // 0x395900: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x395900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_395904:
    // 0x395904: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x395904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_395908:
    // 0x395908: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x395908u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39590c:
    // 0x39590c: 0x0  nop
    ctx->pc = 0x39590cu;
    // NOP
label_395910:
    // 0x395910: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
label_395914:
    if (ctx->pc == 0x395914u) {
        ctx->pc = 0x395914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395910u;
        // 0x395914: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x395918u;
        goto label_395918;
    }
    ctx->pc = 0x395910u;
    {
        const bool branch_taken_0x395910 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x395910) {
            ctx->pc = 0x395914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395910u;
            // 0x395914: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39594Cu;
            goto label_39594c;
        }
    }
    ctx->pc = 0x395918u;
label_395918:
    // 0x395918: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x395918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39591c:
    // 0x39591c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x39591cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_395920:
    // 0x395920: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x395920u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_395924:
    // 0x395924: 0x0  nop
    ctx->pc = 0x395924u;
    // NOP
label_395928:
    // 0x395928: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_39592c:
    if (ctx->pc == 0x39592Cu) {
        ctx->pc = 0x39592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395928u;
        // 0x39592c: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x395930u;
        goto label_395930;
    }
    ctx->pc = 0x395928u;
    {
        const bool branch_taken_0x395928 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x395928) {
            ctx->pc = 0x39592Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395928u;
            // 0x39592c: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39594Cu;
            goto label_39594c;
        }
    }
    ctx->pc = 0x395930u;
label_395930:
    // 0x395930: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x395930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_395934:
    // 0x395934: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x395934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_395938:
    // 0x395938: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x395938u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39593c:
    // 0x39593c: 0x0  nop
    ctx->pc = 0x39593cu;
    // NOP
label_395940:
    // 0x395940: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_395944:
    if (ctx->pc == 0x395944u) {
        ctx->pc = 0x395944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395940u;
        // 0x395944: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395948u;
        goto label_395948;
    }
    ctx->pc = 0x395940u;
    {
        const bool branch_taken_0x395940 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x395940) {
            ctx->pc = 0x395944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395940u;
            // 0x395944: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395948u;
            goto label_395948;
        }
    }
    ctx->pc = 0x395948u;
label_395948:
    // 0x395948: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x395948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_39594c:
    // 0x39594c: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_395950:
    if (ctx->pc == 0x395950u) {
        ctx->pc = 0x395950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39594Cu;
        // 0x395950: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395954u;
        goto label_395954;
    }
    ctx->pc = 0x39594Cu;
    {
        const bool branch_taken_0x39594c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39594Cu;
        // 0x395950: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39594c) {
            ctx->pc = 0x3959ECu;
            goto label_3959ec;
        }
    }
    ctx->pc = 0x395954u;
label_395954:
    // 0x395954: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x395954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_395958:
    // 0x395958: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x395958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_39595c:
    // 0x39595c: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_395960:
    if (ctx->pc == 0x395960u) {
        ctx->pc = 0x395960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39595Cu;
        // 0x395960: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395964u;
        goto label_395964;
    }
    ctx->pc = 0x39595Cu;
    {
        const bool branch_taken_0x39595c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39595Cu;
        // 0x395960: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39595c) {
            ctx->pc = 0x3959ECu;
            goto label_3959ec;
        }
    }
    ctx->pc = 0x395964u;
label_395964:
    // 0x395964: 0x86020110  lh          $v0, 0x110($s0)
    ctx->pc = 0x395964u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_395968:
    // 0x395968: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x395968u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_39596c:
    // 0x39596c: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_395970:
    if (ctx->pc == 0x395970u) {
        ctx->pc = 0x395970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39596Cu;
        // 0x395970: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395974u;
        goto label_395974;
    }
    ctx->pc = 0x39596Cu;
    {
        const bool branch_taken_0x39596c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39596Cu;
        // 0x395970: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39596c) {
            ctx->pc = 0x3959ECu;
            goto label_3959ec;
        }
    }
    ctx->pc = 0x395974u;
label_395974:
    // 0x395974: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x395974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_395978:
    // 0x395978: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_39597c:
    if (ctx->pc == 0x39597Cu) {
        ctx->pc = 0x395980u;
        goto label_395980;
    }
    ctx->pc = 0x395978u;
    {
        const bool branch_taken_0x395978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x395978) {
            ctx->pc = 0x3959F0u;
            goto label_3959f0;
        }
    }
    ctx->pc = 0x395980u;
label_395980:
    // 0x395980: 0xc0e87c0  jal         func_3A1F00
label_395984:
    if (ctx->pc == 0x395984u) {
        ctx->pc = 0x395984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395980u;
        // 0x395984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395988u;
        goto label_395988;
    }
    ctx->pc = 0x395980u;
    SET_GPR_U32(ctx, 31, 0x395988u);
    ctx->pc = 0x395984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395980u;
    // 0x395984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x395980u, 0x395988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395988u;
label_395988:
    // 0x395988: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x395988u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_39598c:
    // 0x39598c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x39598cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_395990:
    // 0x395990: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x395990u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_395994:
    // 0x395994: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x395994u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_395998:
    // 0x395998: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x395998u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39599c:
    // 0x39599c: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x39599cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_3959a0:
    // 0x3959a0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3959a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3959a4:
    // 0x3959a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3959a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3959a8:
    // 0x3959a8: 0x0  nop
    ctx->pc = 0x3959a8u;
    // NOP
label_3959ac:
    // 0x3959ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3959acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3959b0:
    // 0x3959b0: 0x0  nop
    ctx->pc = 0x3959b0u;
    // NOP
label_3959b4:
    // 0x3959b4: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_3959b8:
    if (ctx->pc == 0x3959B8u) {
        ctx->pc = 0x3959B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3959B4u;
        // 0x3959b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3959BCu;
        goto label_3959bc;
    }
    ctx->pc = 0x3959B4u;
    {
        const bool branch_taken_0x3959b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3959B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3959B4u;
        // 0x3959b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3959b4) {
            ctx->pc = 0x3959ECu;
            goto label_3959ec;
        }
    }
    ctx->pc = 0x3959BCu;
label_3959bc:
    // 0x3959bc: 0x7a020040  lq          $v0, 0x40($s0)
    ctx->pc = 0x3959bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 64)));
label_3959c0:
    // 0x3959c0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3959c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3959c4:
    // 0x3959c4: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x3959c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3959c8:
    // 0x3959c8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3959c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3959cc:
    // 0x3959cc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3959ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3959d0:
    // 0x3959d0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x3959d0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_3959d4:
    // 0x3959d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3959d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3959d8:
    // 0x3959d8: 0x0  nop
    ctx->pc = 0x3959d8u;
    // NOP
label_3959dc:
    // 0x3959dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3959dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3959e0:
    // 0x3959e0: 0x0  nop
    ctx->pc = 0x3959e0u;
    // NOP
label_3959e4:
    // 0x3959e4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3959e8:
    if (ctx->pc == 0x3959E8u) {
        ctx->pc = 0x3959E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3959E4u;
        // 0x3959e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3959ECu;
        goto label_3959ec;
    }
    ctx->pc = 0x3959E4u;
    {
        const bool branch_taken_0x3959e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3959E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3959E4u;
        // 0x3959e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3959e4) {
            ctx->pc = 0x3959F0u;
            goto label_3959f0;
        }
    }
    ctx->pc = 0x3959ECu;
label_3959ec:
    // 0x3959ec: 0xa2020108  sb          $v0, 0x108($s0)
    ctx->pc = 0x3959ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 264), (uint8_t)GPR_U32(ctx, 2));
label_3959f0:
    // 0x3959f0: 0xc0e54cc  jal         func_395330
label_3959f4:
    if (ctx->pc == 0x3959F4u) {
        ctx->pc = 0x3959F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3959F0u;
        // 0x3959f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3959F8u;
        goto label_3959f8;
    }
    ctx->pc = 0x3959F0u;
    SET_GPR_U32(ctx, 31, 0x3959F8u);
    ctx->pc = 0x3959F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3959F0u;
    // 0x3959f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395330u, 0x3959F0u, 0x3959F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3959F8u;
label_3959f8:
    // 0x3959f8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3959f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3959fc:
    // 0x3959fc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3959fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_395a00:
    // 0x395a00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x395a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_395a04:
    // 0x395a04: 0x3e00008  jr          $ra
label_395a08:
    if (ctx->pc == 0x395A08u) {
        ctx->pc = 0x395A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A04u;
        // 0x395a08: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395A0Cu;
        goto label_395a0c;
    }
    ctx->pc = 0x395A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A04u;
        // 0x395a08: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395A0Cu;
label_395a0c:
    // 0x395a0c: 0x0  nop
    ctx->pc = 0x395a0cu;
    // NOP
    ctx->pc = 0x395a10u;
}
