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

// Function: sub_002AF670
// Address: 0x2af670 - 0x2af8d0
void sub_002AF670_0x2af670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF670_0x2af670");
#endif

    switch (ctx->pc) {
        case 0x2af670u: goto label_2af670;
        case 0x2af674u: goto label_2af674;
        case 0x2af678u: goto label_2af678;
        case 0x2af67cu: goto label_2af67c;
        case 0x2af680u: goto label_2af680;
        case 0x2af684u: goto label_2af684;
        case 0x2af688u: goto label_2af688;
        case 0x2af68cu: goto label_2af68c;
        case 0x2af690u: goto label_2af690;
        case 0x2af694u: goto label_2af694;
        case 0x2af698u: goto label_2af698;
        case 0x2af69cu: goto label_2af69c;
        case 0x2af6a0u: goto label_2af6a0;
        case 0x2af6a4u: goto label_2af6a4;
        case 0x2af6a8u: goto label_2af6a8;
        case 0x2af6acu: goto label_2af6ac;
        case 0x2af6b0u: goto label_2af6b0;
        case 0x2af6b4u: goto label_2af6b4;
        case 0x2af6b8u: goto label_2af6b8;
        case 0x2af6bcu: goto label_2af6bc;
        case 0x2af6c0u: goto label_2af6c0;
        case 0x2af6c4u: goto label_2af6c4;
        case 0x2af6c8u: goto label_2af6c8;
        case 0x2af6ccu: goto label_2af6cc;
        case 0x2af6d0u: goto label_2af6d0;
        case 0x2af6d4u: goto label_2af6d4;
        case 0x2af6d8u: goto label_2af6d8;
        case 0x2af6dcu: goto label_2af6dc;
        case 0x2af6e0u: goto label_2af6e0;
        case 0x2af6e4u: goto label_2af6e4;
        case 0x2af6e8u: goto label_2af6e8;
        case 0x2af6ecu: goto label_2af6ec;
        case 0x2af6f0u: goto label_2af6f0;
        case 0x2af6f4u: goto label_2af6f4;
        case 0x2af6f8u: goto label_2af6f8;
        case 0x2af6fcu: goto label_2af6fc;
        case 0x2af700u: goto label_2af700;
        case 0x2af704u: goto label_2af704;
        case 0x2af708u: goto label_2af708;
        case 0x2af70cu: goto label_2af70c;
        case 0x2af710u: goto label_2af710;
        case 0x2af714u: goto label_2af714;
        case 0x2af718u: goto label_2af718;
        case 0x2af71cu: goto label_2af71c;
        case 0x2af720u: goto label_2af720;
        case 0x2af724u: goto label_2af724;
        case 0x2af728u: goto label_2af728;
        case 0x2af72cu: goto label_2af72c;
        case 0x2af730u: goto label_2af730;
        case 0x2af734u: goto label_2af734;
        case 0x2af738u: goto label_2af738;
        case 0x2af73cu: goto label_2af73c;
        case 0x2af740u: goto label_2af740;
        case 0x2af744u: goto label_2af744;
        case 0x2af748u: goto label_2af748;
        case 0x2af74cu: goto label_2af74c;
        case 0x2af750u: goto label_2af750;
        case 0x2af754u: goto label_2af754;
        case 0x2af758u: goto label_2af758;
        case 0x2af75cu: goto label_2af75c;
        case 0x2af760u: goto label_2af760;
        case 0x2af764u: goto label_2af764;
        case 0x2af768u: goto label_2af768;
        case 0x2af76cu: goto label_2af76c;
        case 0x2af770u: goto label_2af770;
        case 0x2af774u: goto label_2af774;
        case 0x2af778u: goto label_2af778;
        case 0x2af77cu: goto label_2af77c;
        case 0x2af780u: goto label_2af780;
        case 0x2af784u: goto label_2af784;
        case 0x2af788u: goto label_2af788;
        case 0x2af78cu: goto label_2af78c;
        case 0x2af790u: goto label_2af790;
        case 0x2af794u: goto label_2af794;
        case 0x2af798u: goto label_2af798;
        case 0x2af79cu: goto label_2af79c;
        case 0x2af7a0u: goto label_2af7a0;
        case 0x2af7a4u: goto label_2af7a4;
        case 0x2af7a8u: goto label_2af7a8;
        case 0x2af7acu: goto label_2af7ac;
        case 0x2af7b0u: goto label_2af7b0;
        case 0x2af7b4u: goto label_2af7b4;
        case 0x2af7b8u: goto label_2af7b8;
        case 0x2af7bcu: goto label_2af7bc;
        case 0x2af7c0u: goto label_2af7c0;
        case 0x2af7c4u: goto label_2af7c4;
        case 0x2af7c8u: goto label_2af7c8;
        case 0x2af7ccu: goto label_2af7cc;
        case 0x2af7d0u: goto label_2af7d0;
        case 0x2af7d4u: goto label_2af7d4;
        case 0x2af7d8u: goto label_2af7d8;
        case 0x2af7dcu: goto label_2af7dc;
        case 0x2af7e0u: goto label_2af7e0;
        case 0x2af7e4u: goto label_2af7e4;
        case 0x2af7e8u: goto label_2af7e8;
        case 0x2af7ecu: goto label_2af7ec;
        case 0x2af7f0u: goto label_2af7f0;
        case 0x2af7f4u: goto label_2af7f4;
        case 0x2af7f8u: goto label_2af7f8;
        case 0x2af7fcu: goto label_2af7fc;
        case 0x2af800u: goto label_2af800;
        case 0x2af804u: goto label_2af804;
        case 0x2af808u: goto label_2af808;
        case 0x2af80cu: goto label_2af80c;
        case 0x2af810u: goto label_2af810;
        case 0x2af814u: goto label_2af814;
        case 0x2af818u: goto label_2af818;
        case 0x2af81cu: goto label_2af81c;
        case 0x2af820u: goto label_2af820;
        case 0x2af824u: goto label_2af824;
        case 0x2af828u: goto label_2af828;
        case 0x2af82cu: goto label_2af82c;
        case 0x2af830u: goto label_2af830;
        case 0x2af834u: goto label_2af834;
        case 0x2af838u: goto label_2af838;
        case 0x2af83cu: goto label_2af83c;
        case 0x2af840u: goto label_2af840;
        case 0x2af844u: goto label_2af844;
        case 0x2af848u: goto label_2af848;
        case 0x2af84cu: goto label_2af84c;
        case 0x2af850u: goto label_2af850;
        case 0x2af854u: goto label_2af854;
        case 0x2af858u: goto label_2af858;
        case 0x2af85cu: goto label_2af85c;
        case 0x2af860u: goto label_2af860;
        case 0x2af864u: goto label_2af864;
        case 0x2af868u: goto label_2af868;
        case 0x2af86cu: goto label_2af86c;
        case 0x2af870u: goto label_2af870;
        case 0x2af874u: goto label_2af874;
        case 0x2af878u: goto label_2af878;
        case 0x2af87cu: goto label_2af87c;
        case 0x2af880u: goto label_2af880;
        case 0x2af884u: goto label_2af884;
        case 0x2af888u: goto label_2af888;
        case 0x2af88cu: goto label_2af88c;
        case 0x2af890u: goto label_2af890;
        case 0x2af894u: goto label_2af894;
        case 0x2af898u: goto label_2af898;
        case 0x2af89cu: goto label_2af89c;
        case 0x2af8a0u: goto label_2af8a0;
        case 0x2af8a4u: goto label_2af8a4;
        case 0x2af8a8u: goto label_2af8a8;
        case 0x2af8acu: goto label_2af8ac;
        case 0x2af8b0u: goto label_2af8b0;
        case 0x2af8b4u: goto label_2af8b4;
        case 0x2af8b8u: goto label_2af8b8;
        case 0x2af8bcu: goto label_2af8bc;
        case 0x2af8c0u: goto label_2af8c0;
        case 0x2af8c4u: goto label_2af8c4;
        case 0x2af8c8u: goto label_2af8c8;
        case 0x2af8ccu: goto label_2af8cc;
        default: break;
    }

    ctx->pc = 0x2af670u;

label_2af670:
    // 0x2af670: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2af670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2af674:
    // 0x2af674: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2af674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_2af678:
    // 0x2af678: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2af678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_2af67c:
    // 0x2af67c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2af67cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2af680:
    // 0x2af680: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2af680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2af684:
    // 0x2af684: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2af684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2af688:
    // 0x2af688: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2af688u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_2af68c:
    // 0x2af68c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2af68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_2af690:
    // 0x2af690: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2af690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_2af694:
    // 0x2af694: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2af694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2af698:
    // 0x2af698: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2af698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_2af69c:
    // 0x2af69c: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2af69cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2af6a0:
    // 0x2af6a0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2af6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2af6a4:
    // 0x2af6a4: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x2af6a4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2af6a8:
    // 0x2af6a8: 0xc0e409a  jal         func_390268
label_2af6ac:
    if (ctx->pc == 0x2AF6ACu) {
        ctx->pc = 0x2AF6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF6A8u;
        // 0x2af6ac: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF6B0u;
        goto label_2af6b0;
    }
    ctx->pc = 0x2AF6A8u;
    SET_GPR_U32(ctx, 31, 0x2AF6B0u);
    ctx->pc = 0x2AF6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF6A8u;
    // 0x2af6ac: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2AF6A8u, 0x2AF6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF6B0u;
label_2af6b0:
    // 0x2af6b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2af6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2af6b4:
    // 0x2af6b4: 0xc0a34d6  jal         func_28D358
label_2af6b8:
    if (ctx->pc == 0x2AF6B8u) {
        ctx->pc = 0x2AF6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF6B4u;
        // 0x2af6b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF6BCu;
        goto label_2af6bc;
    }
    ctx->pc = 0x2AF6B4u;
    SET_GPR_U32(ctx, 31, 0x2AF6BCu);
    ctx->pc = 0x2AF6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF6B4u;
    // 0x2af6b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2AF6B4u, 0x2AF6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF6BCu;
label_2af6bc:
    // 0x2af6bc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2af6bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2af6c0:
    // 0x2af6c0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2af6c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2af6c4:
    // 0x2af6c4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2af6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2af6c8:
    // 0x2af6c8: 0xc4540140  lwc1        $f20, 0x140($v0)
    ctx->pc = 0x2af6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2af6cc:
    // 0x2af6cc: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
label_2af6d0:
    if (ctx->pc == 0x2AF6D0u) {
        ctx->pc = 0x2AF6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF6CCu;
        // 0x2af6d0: 0x8c550004  lw          $s5, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF6D4u;
        goto label_2af6d4;
    }
    ctx->pc = 0x2AF6CCu;
    {
        const bool branch_taken_0x2af6cc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF6CCu;
        // 0x2af6d0: 0x8c550004  lw          $s5, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af6cc) {
            ctx->pc = 0x2AF700u;
            goto label_2af700;
        }
    }
    ctx->pc = 0x2AF6D4u;
label_2af6d4:
    // 0x2af6d4: 0x86700092  lh          $s0, 0x92($s3)
    ctx->pc = 0x2af6d4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2af6d8:
    // 0x2af6d8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2af6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2af6dc:
    // 0x2af6dc: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2af6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2af6e0:
    // 0x2af6e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2af6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2af6e4:
    // 0x2af6e4: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2af6e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2af6e8:
    // 0x2af6e8: 0xc087420  jal         func_21D080
label_2af6ec:
    if (ctx->pc == 0x2AF6ECu) {
        ctx->pc = 0x2AF6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF6E8u;
        // 0x2af6ec: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF6F0u;
        goto label_2af6f0;
    }
    ctx->pc = 0x2AF6E8u;
    SET_GPR_U32(ctx, 31, 0x2AF6F0u);
    ctx->pc = 0x2AF6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF6E8u;
    // 0x2af6ec: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2AF6E8u, 0x2AF6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF6F0u;
label_2af6f0:
    // 0x2af6f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2af6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2af6f4:
    // 0x2af6f4: 0xc0cdb38  jal         func_336CE0
label_2af6f8:
    if (ctx->pc == 0x2AF6F8u) {
        ctx->pc = 0x2AF6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF6F4u;
        // 0x2af6f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF6FCu;
        goto label_2af6fc;
    }
    ctx->pc = 0x2AF6F4u;
    SET_GPR_U32(ctx, 31, 0x2AF6FCu);
    ctx->pc = 0x2AF6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF6F4u;
    // 0x2af6f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2AF6F4u, 0x2AF6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF6FCu;
label_2af6fc:
    // 0x2af6fc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2af6fcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2af700:
    // 0x2af700: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x2af700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2af704:
    // 0x2af704: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2af704u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2af708:
    // 0x2af708: 0x0  nop
    ctx->pc = 0x2af708u;
    // NOP
label_2af70c:
    // 0x2af70c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_2af710:
    if (ctx->pc == 0x2AF710u) {
        ctx->pc = 0x2AF710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF70Cu;
        // 0x2af710: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF714u;
        goto label_2af714;
    }
    ctx->pc = 0x2AF70Cu;
    {
        const bool branch_taken_0x2af70c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AF710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF70Cu;
        // 0x2af710: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af70c) {
            ctx->pc = 0x2AF720u;
            goto label_2af720;
        }
    }
    ctx->pc = 0x2AF714u;
label_2af714:
    // 0x2af714: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x2af714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_2af718:
    // 0x2af718: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2af71c:
    if (ctx->pc == 0x2AF71Cu) {
        ctx->pc = 0x2AF71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF718u;
        // 0x2af71c: 0xa2430035  sb          $v1, 0x35($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 53), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF720u;
        goto label_2af720;
    }
    ctx->pc = 0x2AF718u;
    {
        const bool branch_taken_0x2af718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af718) {
            ctx->pc = 0x2AF71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF718u;
            // 0x2af71c: 0xa2430035  sb          $v1, 0x35($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 53), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF728u;
            goto label_2af728;
        }
    }
    ctx->pc = 0x2AF720u;
label_2af720:
    // 0x2af720: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2af720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2af724:
    // 0x2af724: 0xa2430035  sb          $v1, 0x35($s2)
    ctx->pc = 0x2af724u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 53), (uint8_t)GPR_U32(ctx, 3));
label_2af728:
    // 0x2af728: 0xc08a08a  jal         func_228228
label_2af72c:
    if (ctx->pc == 0x2AF72Cu) {
        ctx->pc = 0x2AF72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF728u;
        // 0x2af72c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF730u;
        goto label_2af730;
    }
    ctx->pc = 0x2AF728u;
    SET_GPR_U32(ctx, 31, 0x2AF730u);
    ctx->pc = 0x2AF72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF728u;
    // 0x2af72c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2AF728u, 0x2AF730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF730u;
label_2af730:
    // 0x2af730: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
label_2af734:
    if (ctx->pc == 0x2AF734u) {
        ctx->pc = 0x2AF734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF730u;
        // 0x2af734: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF738u;
        goto label_2af738;
    }
    ctx->pc = 0x2AF730u;
    {
        const bool branch_taken_0x2af730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF730u;
        // 0x2af734: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af730) {
            ctx->pc = 0x2AF850u;
            goto label_2af850;
        }
    }
    ctx->pc = 0x2AF738u;
label_2af738:
    // 0x2af738: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2af738u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2af73c:
    // 0x2af73c: 0x16b1002c  bne         $s5, $s1, . + 4 + (0x2C << 2)
label_2af740:
    if (ctx->pc == 0x2AF740u) {
        ctx->pc = 0x2AF740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF73Cu;
        // 0x2af740: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF744u;
        goto label_2af744;
    }
    ctx->pc = 0x2AF73Cu;
    {
        const bool branch_taken_0x2af73c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 17));
        ctx->pc = 0x2AF740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF73Cu;
        // 0x2af740: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af73c) {
            ctx->pc = 0x2AF7F0u;
            goto label_2af7f0;
        }
    }
    ctx->pc = 0x2AF744u;
label_2af744:
    // 0x2af744: 0x92420035  lbu         $v0, 0x35($s2)
    ctx->pc = 0x2af744u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 53)));
label_2af748:
    // 0x2af748: 0x14510041  bne         $v0, $s1, . + 4 + (0x41 << 2)
label_2af74c:
    if (ctx->pc == 0x2AF74Cu) {
        ctx->pc = 0x2AF74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF748u;
        // 0x2af74c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF750u;
        goto label_2af750;
    }
    ctx->pc = 0x2AF748u;
    {
        const bool branch_taken_0x2af748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2AF74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF748u;
        // 0x2af74c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af748) {
            ctx->pc = 0x2AF850u;
            goto label_2af850;
        }
    }
    ctx->pc = 0x2AF750u;
label_2af750:
    // 0x2af750: 0xc0a47b4  jal         func_291ED0
label_2af754:
    if (ctx->pc == 0x2AF754u) {
        ctx->pc = 0x2AF754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF750u;
        // 0x2af754: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF758u;
        goto label_2af758;
    }
    ctx->pc = 0x2AF750u;
    SET_GPR_U32(ctx, 31, 0x2AF758u);
    ctx->pc = 0x2AF754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF750u;
    // 0x2af754: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2AF750u, 0x2AF758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF758u;
label_2af758:
    // 0x2af758: 0x1451003d  bne         $v0, $s1, . + 4 + (0x3D << 2)
label_2af75c:
    if (ctx->pc == 0x2AF75Cu) {
        ctx->pc = 0x2AF75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF758u;
        // 0x2af75c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF760u;
        goto label_2af760;
    }
    ctx->pc = 0x2AF758u;
    {
        const bool branch_taken_0x2af758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2AF75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF758u;
        // 0x2af75c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af758) {
            ctx->pc = 0x2AF850u;
            goto label_2af850;
        }
    }
    ctx->pc = 0x2AF760u;
label_2af760:
    // 0x2af760: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2af760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2af764:
    // 0x2af764: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2af764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2af768:
    // 0x2af768: 0xc0cd4ee  jal         func_3353B8
label_2af76c:
    if (ctx->pc == 0x2AF76Cu) {
        ctx->pc = 0x2AF76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF768u;
        // 0x2af76c: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF770u;
        goto label_2af770;
    }
    ctx->pc = 0x2AF768u;
    SET_GPR_U32(ctx, 31, 0x2AF770u);
    ctx->pc = 0x2AF76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF768u;
    // 0x2af76c: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2AF768u, 0x2AF770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF770u;
label_2af770:
    // 0x2af770: 0x2c420032  sltiu       $v0, $v0, 0x32
    ctx->pc = 0x2af770u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
label_2af774:
    // 0x2af774: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2af778:
    if (ctx->pc == 0x2AF778u) {
        ctx->pc = 0x2AF778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF774u;
        // 0x2af778: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF77Cu;
        goto label_2af77c;
    }
    ctx->pc = 0x2AF774u;
    {
        const bool branch_taken_0x2af774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF774u;
        // 0x2af778: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af774) {
            ctx->pc = 0x2AF7C0u;
            goto label_2af7c0;
        }
    }
    ctx->pc = 0x2AF77Cu;
label_2af77c:
    // 0x2af77c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2af77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2af780:
    // 0x2af780: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2af780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2af784:
    // 0x2af784: 0xc10c1fa  jal         func_4307E8
label_2af788:
    if (ctx->pc == 0x2AF788u) {
        ctx->pc = 0x2AF788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF784u;
        // 0x2af788: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF78Cu;
        goto label_2af78c;
    }
    ctx->pc = 0x2AF784u;
    SET_GPR_U32(ctx, 31, 0x2AF78Cu);
    ctx->pc = 0x2AF788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF784u;
    // 0x2af788: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x2AF784u, 0x2AF78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF78Cu;
label_2af78c:
    // 0x2af78c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2af78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2af790:
    // 0x2af790: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2af790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2af794:
    // 0x2af794: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x2af794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_2af798:
    // 0x2af798: 0x24a53fa0  addiu       $a1, $a1, 0x3FA0
    ctx->pc = 0x2af798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16288));
label_2af79c:
    // 0x2af79c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2af79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2af7a0:
    // 0x2af7a0: 0xc10ca28  jal         func_4328A0
label_2af7a4:
    if (ctx->pc == 0x2AF7A4u) {
        ctx->pc = 0x2AF7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF7A0u;
        // 0x2af7a4: 0x84460328  lh          $a2, 0x328($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 808)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF7A8u;
        goto label_2af7a8;
    }
    ctx->pc = 0x2AF7A0u;
    SET_GPR_U32(ctx, 31, 0x2AF7A8u);
    ctx->pc = 0x2AF7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF7A0u;
    // 0x2af7a4: 0x84460328  lh          $a2, 0x328($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 808)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x2AF7A0u, 0x2AF7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF7A8u;
label_2af7a8:
    // 0x2af7a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2af7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2af7ac:
    // 0x2af7ac: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x2af7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_2af7b0:
    // 0x2af7b0: 0xc087b4a  jal         func_21ED28
label_2af7b4:
    if (ctx->pc == 0x2AF7B4u) {
        ctx->pc = 0x2AF7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF7B0u;
        // 0x2af7b4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF7B8u;
        goto label_2af7b8;
    }
    ctx->pc = 0x2AF7B0u;
    SET_GPR_U32(ctx, 31, 0x2AF7B8u);
    ctx->pc = 0x2AF7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF7B0u;
    // 0x2af7b4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21ED28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21ED28u, 0x2AF7B0u, 0x2AF7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF7B8u;
label_2af7b8:
    // 0x2af7b8: 0x10000025  b           . + 4 + (0x25 << 2)
label_2af7bc:
    if (ctx->pc == 0x2AF7BCu) {
        ctx->pc = 0x2AF7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF7B8u;
        // 0x2af7bc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF7C0u;
        goto label_2af7c0;
    }
    ctx->pc = 0x2AF7B8u;
    {
        const bool branch_taken_0x2af7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF7B8u;
        // 0x2af7bc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af7b8) {
            ctx->pc = 0x2AF850u;
            goto label_2af850;
        }
    }
    ctx->pc = 0x2AF7C0u;
label_2af7c0:
    // 0x2af7c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2af7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2af7c4:
    // 0x2af7c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2af7c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2af7c8:
    // 0x2af7c8: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2af7c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2af7cc:
    // 0x2af7cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2af7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2af7d0:
    // 0x2af7d0: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x2af7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_2af7d4:
    // 0x2af7d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2af7d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2af7d8:
    // 0x2af7d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2af7d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2af7dc:
    // 0x2af7dc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2af7dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2af7e0:
    // 0x2af7e0: 0xc088178  jal         func_2205E0
label_2af7e4:
    if (ctx->pc == 0x2AF7E4u) {
        ctx->pc = 0x2AF7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF7E0u;
        // 0x2af7e4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF7E8u;
        goto label_2af7e8;
    }
    ctx->pc = 0x2AF7E0u;
    SET_GPR_U32(ctx, 31, 0x2AF7E8u);
    ctx->pc = 0x2AF7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF7E0u;
    // 0x2af7e4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2AF7E0u, 0x2AF7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF7E8u;
label_2af7e8:
    // 0x2af7e8: 0x10000019  b           . + 4 + (0x19 << 2)
label_2af7ec:
    if (ctx->pc == 0x2AF7ECu) {
        ctx->pc = 0x2AF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF7E8u;
        // 0x2af7ec: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF7F0u;
        goto label_2af7f0;
    }
    ctx->pc = 0x2AF7E8u;
    {
        const bool branch_taken_0x2af7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF7E8u;
        // 0x2af7ec: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af7e8) {
            ctx->pc = 0x2AF850u;
            goto label_2af850;
        }
    }
    ctx->pc = 0x2AF7F0u;
label_2af7f0:
    // 0x2af7f0: 0x16a20017  bne         $s5, $v0, . + 4 + (0x17 << 2)
label_2af7f4:
    if (ctx->pc == 0x2AF7F4u) {
        ctx->pc = 0x2AF7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF7F0u;
        // 0x2af7f4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF7F8u;
        goto label_2af7f8;
    }
    ctx->pc = 0x2AF7F0u;
    {
        const bool branch_taken_0x2af7f0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AF7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF7F0u;
        // 0x2af7f4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af7f0) {
            ctx->pc = 0x2AF850u;
            goto label_2af850;
        }
    }
    ctx->pc = 0x2AF7F8u;
label_2af7f8:
    // 0x2af7f8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2af7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2af7fc:
    // 0x2af7fc: 0xc0a4162  jal         func_290588
label_2af800:
    if (ctx->pc == 0x2AF800u) {
        ctx->pc = 0x2AF800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF7FCu;
        // 0x2af800: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF804u;
        goto label_2af804;
    }
    ctx->pc = 0x2AF7FCu;
    SET_GPR_U32(ctx, 31, 0x2AF804u);
    ctx->pc = 0x2AF800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF7FCu;
    // 0x2af800: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290588u, 0x2AF7FCu, 0x2AF804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF804u;
label_2af804:
    // 0x2af804: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2af804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2af808:
    // 0x2af808: 0x16110011  bne         $s0, $s1, . + 4 + (0x11 << 2)
label_2af80c:
    if (ctx->pc == 0x2AF80Cu) {
        ctx->pc = 0x2AF80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF808u;
        // 0x2af80c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF810u;
        goto label_2af810;
    }
    ctx->pc = 0x2AF808u;
    {
        const bool branch_taken_0x2af808 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x2AF80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF808u;
        // 0x2af80c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af808) {
            ctx->pc = 0x2AF850u;
            goto label_2af850;
        }
    }
    ctx->pc = 0x2AF810u;
label_2af810:
    // 0x2af810: 0xc0a47b4  jal         func_291ED0
label_2af814:
    if (ctx->pc == 0x2AF814u) {
        ctx->pc = 0x2AF814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF810u;
        // 0x2af814: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF818u;
        goto label_2af818;
    }
    ctx->pc = 0x2AF810u;
    SET_GPR_U32(ctx, 31, 0x2AF818u);
    ctx->pc = 0x2AF814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF810u;
    // 0x2af814: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2AF810u, 0x2AF818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF818u;
label_2af818:
    // 0x2af818: 0x1450000d  bne         $v0, $s0, . + 4 + (0xD << 2)
label_2af81c:
    if (ctx->pc == 0x2AF81Cu) {
        ctx->pc = 0x2AF81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF818u;
        // 0x2af81c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF820u;
        goto label_2af820;
    }
    ctx->pc = 0x2AF818u;
    {
        const bool branch_taken_0x2af818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2AF81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF818u;
        // 0x2af81c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af818) {
            ctx->pc = 0x2AF850u;
            goto label_2af850;
        }
    }
    ctx->pc = 0x2AF820u;
label_2af820:
    // 0x2af820: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2af820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2af824:
    // 0x2af824: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2af824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2af828:
    // 0x2af828: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2af828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2af82c:
    // 0x2af82c: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2af82cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2af830:
    // 0x2af830: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2af830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2af834:
    // 0x2af834: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x2af834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_2af838:
    // 0x2af838: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2af838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2af83c:
    // 0x2af83c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2af83cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2af840:
    // 0x2af840: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2af840u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2af844:
    // 0x2af844: 0xc088178  jal         func_2205E0
label_2af848:
    if (ctx->pc == 0x2AF848u) {
        ctx->pc = 0x2AF848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF844u;
        // 0x2af848: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF84Cu;
        goto label_2af84c;
    }
    ctx->pc = 0x2AF844u;
    SET_GPR_U32(ctx, 31, 0x2AF84Cu);
    ctx->pc = 0x2AF848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF844u;
    // 0x2af848: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2AF844u, 0x2AF84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF84Cu;
label_2af84c:
    // 0x2af84c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2af84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2af850:
    // 0x2af850: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2af850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2af854:
    // 0x2af854: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x2af854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2af858:
    // 0x2af858: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2af858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2af85c:
    // 0x2af85c: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x2af85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_2af860:
    // 0x2af860: 0x24420fa0  addiu       $v0, $v0, 0xFA0
    ctx->pc = 0x2af860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4000));
label_2af864:
    // 0x2af864: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x2af864u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_2af868:
    // 0x2af868: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x2af868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_2af86c:
    // 0x2af86c: 0x246307d0  addiu       $v1, $v1, 0x7D0
    ctx->pc = 0x2af86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2000));
label_2af870:
    // 0x2af870: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x2af870u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_2af874:
    // 0x2af874: 0x80c5000b  lb          $a1, 0xB($a2)
    ctx->pc = 0x2af874u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 11)));
label_2af878:
    // 0x2af878: 0x90c2000b  lbu         $v0, 0xB($a2)
    ctx->pc = 0x2af878u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 11)));
label_2af87c:
    // 0x2af87c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2af87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2af880:
    // 0x2af880: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2af880u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_2af884:
    // 0x2af884: 0xa2420038  sb          $v0, 0x38($s2)
    ctx->pc = 0x2af884u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 56), (uint8_t)GPR_U32(ctx, 2));
label_2af888:
    // 0x2af888: 0xc0a337e  jal         func_28CDF8
label_2af88c:
    if (ctx->pc == 0x2AF88Cu) {
        ctx->pc = 0x2AF88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF888u;
        // 0x2af88c: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF890u;
        goto label_2af890;
    }
    ctx->pc = 0x2AF888u;
    SET_GPR_U32(ctx, 31, 0x2AF890u);
    ctx->pc = 0x2AF88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF888u;
    // 0x2af88c: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2AF888u, 0x2AF890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF890u;
label_2af890:
    // 0x2af890: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2af890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2af894:
    // 0x2af894: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2af894u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2af898:
    // 0x2af898: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2af898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2af89c:
    // 0x2af89c: 0x60f809  jalr        $v1
label_2af8a0:
    if (ctx->pc == 0x2AF8A0u) {
        ctx->pc = 0x2AF8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF89Cu;
        // 0x2af8a0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF8A4u;
        goto label_2af8a4;
    }
    ctx->pc = 0x2AF89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2AF8A4u);
        ctx->pc = 0x2AF8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF89Cu;
        // 0x2af8a0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF89Cu, 0x2AF8A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AF8A4u;
label_2af8a4:
    // 0x2af8a4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2af8a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2af8a8:
    // 0x2af8a8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2af8a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2af8ac:
    // 0x2af8ac: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2af8acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2af8b0:
    // 0x2af8b0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2af8b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2af8b4:
    // 0x2af8b4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2af8b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2af8b8:
    // 0x2af8b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2af8b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2af8bc:
    // 0x2af8bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2af8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2af8c0:
    // 0x2af8c0: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2af8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2af8c4:
    // 0x2af8c4: 0x3e00008  jr          $ra
label_2af8c8:
    if (ctx->pc == 0x2AF8C8u) {
        ctx->pc = 0x2AF8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF8C4u;
        // 0x2af8c8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AF8CCu;
        goto label_2af8cc;
    }
    ctx->pc = 0x2AF8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF8C4u;
        // 0x2af8c8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF8CCu;
label_2af8cc:
    // 0x2af8cc: 0x0  nop
    ctx->pc = 0x2af8ccu;
    // NOP
    ctx->pc = 0x2af8d0u;
}
