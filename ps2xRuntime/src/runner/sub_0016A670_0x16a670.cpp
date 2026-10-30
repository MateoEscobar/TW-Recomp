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

// Function: sub_0016A670
// Address: 0x16a670 - 0x16a870
void sub_0016A670_0x16a670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A670_0x16a670");
#endif

    switch (ctx->pc) {
        case 0x16a670u: goto label_16a670;
        case 0x16a674u: goto label_16a674;
        case 0x16a678u: goto label_16a678;
        case 0x16a67cu: goto label_16a67c;
        case 0x16a680u: goto label_16a680;
        case 0x16a684u: goto label_16a684;
        case 0x16a688u: goto label_16a688;
        case 0x16a68cu: goto label_16a68c;
        case 0x16a690u: goto label_16a690;
        case 0x16a694u: goto label_16a694;
        case 0x16a698u: goto label_16a698;
        case 0x16a69cu: goto label_16a69c;
        case 0x16a6a0u: goto label_16a6a0;
        case 0x16a6a4u: goto label_16a6a4;
        case 0x16a6a8u: goto label_16a6a8;
        case 0x16a6acu: goto label_16a6ac;
        case 0x16a6b0u: goto label_16a6b0;
        case 0x16a6b4u: goto label_16a6b4;
        case 0x16a6b8u: goto label_16a6b8;
        case 0x16a6bcu: goto label_16a6bc;
        case 0x16a6c0u: goto label_16a6c0;
        case 0x16a6c4u: goto label_16a6c4;
        case 0x16a6c8u: goto label_16a6c8;
        case 0x16a6ccu: goto label_16a6cc;
        case 0x16a6d0u: goto label_16a6d0;
        case 0x16a6d4u: goto label_16a6d4;
        case 0x16a6d8u: goto label_16a6d8;
        case 0x16a6dcu: goto label_16a6dc;
        case 0x16a6e0u: goto label_16a6e0;
        case 0x16a6e4u: goto label_16a6e4;
        case 0x16a6e8u: goto label_16a6e8;
        case 0x16a6ecu: goto label_16a6ec;
        case 0x16a6f0u: goto label_16a6f0;
        case 0x16a6f4u: goto label_16a6f4;
        case 0x16a6f8u: goto label_16a6f8;
        case 0x16a6fcu: goto label_16a6fc;
        case 0x16a700u: goto label_16a700;
        case 0x16a704u: goto label_16a704;
        case 0x16a708u: goto label_16a708;
        case 0x16a70cu: goto label_16a70c;
        case 0x16a710u: goto label_16a710;
        case 0x16a714u: goto label_16a714;
        case 0x16a718u: goto label_16a718;
        case 0x16a71cu: goto label_16a71c;
        case 0x16a720u: goto label_16a720;
        case 0x16a724u: goto label_16a724;
        case 0x16a728u: goto label_16a728;
        case 0x16a72cu: goto label_16a72c;
        case 0x16a730u: goto label_16a730;
        case 0x16a734u: goto label_16a734;
        case 0x16a738u: goto label_16a738;
        case 0x16a73cu: goto label_16a73c;
        case 0x16a740u: goto label_16a740;
        case 0x16a744u: goto label_16a744;
        case 0x16a748u: goto label_16a748;
        case 0x16a74cu: goto label_16a74c;
        case 0x16a750u: goto label_16a750;
        case 0x16a754u: goto label_16a754;
        case 0x16a758u: goto label_16a758;
        case 0x16a75cu: goto label_16a75c;
        case 0x16a760u: goto label_16a760;
        case 0x16a764u: goto label_16a764;
        case 0x16a768u: goto label_16a768;
        case 0x16a76cu: goto label_16a76c;
        case 0x16a770u: goto label_16a770;
        case 0x16a774u: goto label_16a774;
        case 0x16a778u: goto label_16a778;
        case 0x16a77cu: goto label_16a77c;
        case 0x16a780u: goto label_16a780;
        case 0x16a784u: goto label_16a784;
        case 0x16a788u: goto label_16a788;
        case 0x16a78cu: goto label_16a78c;
        case 0x16a790u: goto label_16a790;
        case 0x16a794u: goto label_16a794;
        case 0x16a798u: goto label_16a798;
        case 0x16a79cu: goto label_16a79c;
        case 0x16a7a0u: goto label_16a7a0;
        case 0x16a7a4u: goto label_16a7a4;
        case 0x16a7a8u: goto label_16a7a8;
        case 0x16a7acu: goto label_16a7ac;
        case 0x16a7b0u: goto label_16a7b0;
        case 0x16a7b4u: goto label_16a7b4;
        case 0x16a7b8u: goto label_16a7b8;
        case 0x16a7bcu: goto label_16a7bc;
        case 0x16a7c0u: goto label_16a7c0;
        case 0x16a7c4u: goto label_16a7c4;
        case 0x16a7c8u: goto label_16a7c8;
        case 0x16a7ccu: goto label_16a7cc;
        case 0x16a7d0u: goto label_16a7d0;
        case 0x16a7d4u: goto label_16a7d4;
        case 0x16a7d8u: goto label_16a7d8;
        case 0x16a7dcu: goto label_16a7dc;
        case 0x16a7e0u: goto label_16a7e0;
        case 0x16a7e4u: goto label_16a7e4;
        case 0x16a7e8u: goto label_16a7e8;
        case 0x16a7ecu: goto label_16a7ec;
        case 0x16a7f0u: goto label_16a7f0;
        case 0x16a7f4u: goto label_16a7f4;
        case 0x16a7f8u: goto label_16a7f8;
        case 0x16a7fcu: goto label_16a7fc;
        case 0x16a800u: goto label_16a800;
        case 0x16a804u: goto label_16a804;
        case 0x16a808u: goto label_16a808;
        case 0x16a80cu: goto label_16a80c;
        case 0x16a810u: goto label_16a810;
        case 0x16a814u: goto label_16a814;
        case 0x16a818u: goto label_16a818;
        case 0x16a81cu: goto label_16a81c;
        case 0x16a820u: goto label_16a820;
        case 0x16a824u: goto label_16a824;
        case 0x16a828u: goto label_16a828;
        case 0x16a82cu: goto label_16a82c;
        case 0x16a830u: goto label_16a830;
        case 0x16a834u: goto label_16a834;
        case 0x16a838u: goto label_16a838;
        case 0x16a83cu: goto label_16a83c;
        case 0x16a840u: goto label_16a840;
        case 0x16a844u: goto label_16a844;
        case 0x16a848u: goto label_16a848;
        case 0x16a84cu: goto label_16a84c;
        case 0x16a850u: goto label_16a850;
        case 0x16a854u: goto label_16a854;
        case 0x16a858u: goto label_16a858;
        case 0x16a85cu: goto label_16a85c;
        case 0x16a860u: goto label_16a860;
        case 0x16a864u: goto label_16a864;
        case 0x16a868u: goto label_16a868;
        case 0x16a86cu: goto label_16a86c;
        default: break;
    }

    ctx->pc = 0x16a670u;

label_16a670:
    // 0x16a670: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x16a670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_16a674:
    // 0x16a674: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16a674u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_16a678:
    // 0x16a678: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x16a678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_16a67c:
    // 0x16a67c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16a67cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
label_16a680:
    // 0x16a680: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x16a680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_16a684:
    // 0x16a684: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x16a684u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16a688:
    // 0x16a688: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x16a688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_16a68c:
    // 0x16a68c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x16a68cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16a690:
    // 0x16a690: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x16a690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_16a694:
    // 0x16a694: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a698:
    // 0x16a698: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x16a698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_16a69c:
    // 0x16a69c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x16a69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_16a6a0:
    // 0x16a6a0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16a6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_16a6a4:
    // 0x16a6a4: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x16a6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_16a6a8:
    // 0x16a6a8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x16a6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_16a6ac:
    // 0x16a6ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16a6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16a6b0:
    // 0x16a6b0: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x16a6b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_16a6b4:
    // 0x16a6b4: 0x1082005f  beq         $a0, $v0, . + 4 + (0x5F << 2)
label_16a6b8:
    if (ctx->pc == 0x16A6B8u) {
        ctx->pc = 0x16A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6B4u;
        // 0x16a6b8: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A6BCu;
        goto label_16a6bc;
    }
    ctx->pc = 0x16A6B4u;
    {
        const bool branch_taken_0x16a6b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6B4u;
        // 0x16a6b8: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a6b4) {
            ctx->pc = 0x16A834u;
            goto label_16a834;
        }
    }
    ctx->pc = 0x16A6BCu;
label_16a6bc:
    // 0x16a6bc: 0xc05b0e2  jal         func_16C388
label_16a6c0:
    if (ctx->pc == 0x16A6C0u) {
        ctx->pc = 0x16A6C4u;
        goto label_16a6c4;
    }
    ctx->pc = 0x16A6BCu;
    SET_GPR_U32(ctx, 31, 0x16A6C4u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16A6BCu, 0x16A6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A6C4u;
label_16a6c4:
    // 0x16a6c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x16a6c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16a6c8:
    // 0x16a6c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a6cc:
    // 0x16a6cc: 0x26750048  addiu       $s5, $s3, 0x48
    ctx->pc = 0x16a6ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
label_16a6d0:
    // 0x16a6d0: 0xc059856  jal         func_166158
label_16a6d4:
    if (ctx->pc == 0x16A6D4u) {
        ctx->pc = 0x16A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6D0u;
        // 0x16a6d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A6D8u;
        goto label_16a6d8;
    }
    ctx->pc = 0x16A6D0u;
    SET_GPR_U32(ctx, 31, 0x16A6D8u);
    ctx->pc = 0x16A6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A6D0u;
    // 0x16a6d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x16A6D0u, 0x16A6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A6D8u;
label_16a6d8:
    // 0x16a6d8: 0x18400039  blez        $v0, . + 4 + (0x39 << 2)
label_16a6dc:
    if (ctx->pc == 0x16A6DCu) {
        ctx->pc = 0x16A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6D8u;
        // 0x16a6dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A6E0u;
        goto label_16a6e0;
    }
    ctx->pc = 0x16A6D8u;
    {
        const bool branch_taken_0x16a6d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6D8u;
        // 0x16a6dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a6d8) {
            ctx->pc = 0x16A7C0u;
            goto label_16a7c0;
        }
    }
    ctx->pc = 0x16A6E0u;
label_16a6e0:
    // 0x16a6e0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x16a6e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_16a6e4:
    // 0x16a6e4: 0x3c1e006f  lui         $fp, 0x6F
    ctx->pc = 0x16a6e4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)111 << 16));
label_16a6e8:
    // 0x16a6e8: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x16a6e8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_16a6ec:
    // 0x16a6ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16a6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_16a6f0:
    // 0x16a6f0: 0xc137866  jal         func_4DE198
label_16a6f4:
    if (ctx->pc == 0x16A6F4u) {
        ctx->pc = 0x16A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6F0u;
        // 0x16a6f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A6F8u;
        goto label_16a6f8;
    }
    ctx->pc = 0x16A6F0u;
    SET_GPR_U32(ctx, 31, 0x16A6F8u);
    ctx->pc = 0x16A6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A6F0u;
    // 0x16a6f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x16A6F0u, 0x16A6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A6F8u;
label_16a6f8:
    // 0x16a6f8: 0xc0e409a  jal         func_390268
label_16a6fc:
    if (ctx->pc == 0x16A6FCu) {
        ctx->pc = 0x16A6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6F8u;
        // 0x16a6fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A700u;
        goto label_16a700;
    }
    ctx->pc = 0x16A6F8u;
    SET_GPR_U32(ctx, 31, 0x16A700u);
    ctx->pc = 0x16A6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A6F8u;
    // 0x16a6fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16A6F8u, 0x16A700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A700u;
label_16a700:
    // 0x16a700: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16a700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16a704:
    // 0x16a704: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
label_16a708:
    if (ctx->pc == 0x16A708u) {
        ctx->pc = 0x16A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A704u;
        // 0x16a708: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A70Cu;
        goto label_16a70c;
    }
    ctx->pc = 0x16A704u;
    {
        const bool branch_taken_0x16a704 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A704u;
        // 0x16a708: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a704) {
            ctx->pc = 0x16A790u;
            goto label_16a790;
        }
    }
    ctx->pc = 0x16A70Cu;
label_16a70c:
    // 0x16a70c: 0x8fc2bd30  lw          $v0, -0x42D0($fp)
    ctx->pc = 0x16a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
label_16a710:
    // 0x16a710: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_16a714:
    if (ctx->pc == 0x16A714u) {
        ctx->pc = 0x16A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A710u;
        // 0x16a714: 0x8ee4489c  lw          $a0, 0x489C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A718u;
        goto label_16a718;
    }
    ctx->pc = 0x16A710u;
    {
        const bool branch_taken_0x16a710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16a710) {
            ctx->pc = 0x16A714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A710u;
            // 0x16a714: 0x8ee4489c  lw          $a0, 0x489C($s7) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A728u;
            goto label_16a728;
        }
    }
    ctx->pc = 0x16A718u;
label_16a718:
    // 0x16a718: 0xc0e40a2  jal         func_390288
label_16a71c:
    if (ctx->pc == 0x16A71Cu) {
        ctx->pc = 0x16A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A718u;
        // 0x16a71c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A720u;
        goto label_16a720;
    }
    ctx->pc = 0x16A718u;
    SET_GPR_U32(ctx, 31, 0x16A720u);
    ctx->pc = 0x16A71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A718u;
    // 0x16a71c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x16A718u, 0x16A720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A720u;
label_16a720:
    // 0x16a720: 0x10000008  b           . + 4 + (0x8 << 2)
label_16a724:
    if (ctx->pc == 0x16A724u) {
        ctx->pc = 0x16A724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A720u;
        // 0x16a724: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A728u;
        goto label_16a728;
    }
    ctx->pc = 0x16A720u;
    {
        const bool branch_taken_0x16a720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A720u;
        // 0x16a724: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a720) {
            ctx->pc = 0x16A744u;
            goto label_16a744;
        }
    }
    ctx->pc = 0x16A728u;
label_16a728:
    // 0x16a728: 0xc0e409a  jal         func_390268
label_16a72c:
    if (ctx->pc == 0x16A72Cu) {
        ctx->pc = 0x16A72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A728u;
        // 0x16a72c: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A730u;
        goto label_16a730;
    }
    ctx->pc = 0x16A728u;
    SET_GPR_U32(ctx, 31, 0x16A730u);
    ctx->pc = 0x16A72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A728u;
    // 0x16a72c: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16A728u, 0x16A730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A730u;
label_16a730:
    // 0x16a730: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16a730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16a734:
    // 0x16a734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a738:
    // 0x16a738: 0xc105cb2  jal         func_4172C8
label_16a73c:
    if (ctx->pc == 0x16A73Cu) {
        ctx->pc = 0x16A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A738u;
        // 0x16a73c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A740u;
        goto label_16a740;
    }
    ctx->pc = 0x16A738u;
    SET_GPR_U32(ctx, 31, 0x16A740u);
    ctx->pc = 0x16A73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A738u;
    // 0x16a73c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4172C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4172C8u, 0x16A738u, 0x16A740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A740u;
label_16a740:
    // 0x16a740: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16a740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16a744:
    // 0x16a744: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16a744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16a748:
    // 0x16a748: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x16a748u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_16a74c:
    // 0x16a74c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_16a750:
    // 0x16a750: 0x40f809  jalr        $v0
label_16a754:
    if (ctx->pc == 0x16A754u) {
        ctx->pc = 0x16A754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A750u;
        // 0x16a754: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A758u;
        goto label_16a758;
    }
    ctx->pc = 0x16A750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16A758u);
        ctx->pc = 0x16A754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A750u;
        // 0x16a754: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A750u, 0x16A758u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A758u;
label_16a758:
    // 0x16a758: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x16a758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16a75c:
    // 0x16a75c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16a75cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16a760:
    // 0x16a760: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x16a760u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_16a764:
    // 0x16a764: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16a764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_16a768:
    // 0x16a768: 0x40f809  jalr        $v0
label_16a76c:
    if (ctx->pc == 0x16A76Cu) {
        ctx->pc = 0x16A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A768u;
        // 0x16a76c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A770u;
        goto label_16a770;
    }
    ctx->pc = 0x16A768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16A770u);
        ctx->pc = 0x16A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A768u;
        // 0x16a76c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A768u, 0x16A770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A770u;
label_16a770:
    // 0x16a770: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16a770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_16a774:
    // 0x16a774: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x16a774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_16a778:
    // 0x16a778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a77c:
    // 0x16a77c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16a77cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16a780:
    // 0x16a780: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x16a780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_16a784:
    // 0x16a784: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16a784u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_16a788:
    // 0x16a788: 0xc0b6a04  jal         func_2DA810
label_16a78c:
    if (ctx->pc == 0x16A78Cu) {
        ctx->pc = 0x16A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A788u;
        // 0x16a78c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A790u;
        goto label_16a790;
    }
    ctx->pc = 0x16A788u;
    SET_GPR_U32(ctx, 31, 0x16A790u);
    ctx->pc = 0x16A78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A788u;
    // 0x16a78c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA810u, 0x16A788u, 0x16A790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A790u;
label_16a790:
    // 0x16a790: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x16a790u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_16a794:
    // 0x16a794: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x16a794u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_16a798:
    // 0x16a798: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_16a79c:
    if (ctx->pc == 0x16A79Cu) {
        ctx->pc = 0x16A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A798u;
        // 0x16a79c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A7A0u;
        goto label_16a7a0;
    }
    ctx->pc = 0x16A798u;
    {
        const bool branch_taken_0x16a798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A798u;
        // 0x16a79c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a798) {
            ctx->pc = 0x16A6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a6f0;
        }
    }
    ctx->pc = 0x16A7A0u;
label_16a7a0:
    // 0x16a7a0: 0x12c00024  beqz        $s6, . + 4 + (0x24 << 2)
label_16a7a4:
    if (ctx->pc == 0x16A7A4u) {
        ctx->pc = 0x16A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7A0u;
        // 0x16a7a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A7A8u;
        goto label_16a7a8;
    }
    ctx->pc = 0x16A7A0u;
    {
        const bool branch_taken_0x16a7a0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7A0u;
        // 0x16a7a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a7a0) {
            ctx->pc = 0x16A834u;
            goto label_16a834;
        }
    }
    ctx->pc = 0x16A7A8u;
label_16a7a8:
    // 0x16a7a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16a7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16a7ac:
    // 0x16a7ac: 0xa26200d3  sb          $v0, 0xD3($s3)
    ctx->pc = 0x16a7acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 211), (uint8_t)GPR_U32(ctx, 2));
label_16a7b0:
    // 0x16a7b0: 0xc0592da  jal         func_164B68
label_16a7b4:
    if (ctx->pc == 0x16A7B4u) {
        ctx->pc = 0x16A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7B0u;
        // 0x16a7b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A7B8u;
        goto label_16a7b8;
    }
    ctx->pc = 0x16A7B0u;
    SET_GPR_U32(ctx, 31, 0x16A7B8u);
    ctx->pc = 0x16A7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A7B0u;
    // 0x16a7b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B68u, 0x16A7B0u, 0x16A7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A7B8u;
label_16a7b8:
    // 0x16a7b8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_16a7bc:
    if (ctx->pc == 0x16A7BCu) {
        ctx->pc = 0x16A7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7B8u;
        // 0x16a7bc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A7C0u;
        goto label_16a7c0;
    }
    ctx->pc = 0x16A7B8u;
    {
        const bool branch_taken_0x16a7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7B8u;
        // 0x16a7bc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a7b8) {
            ctx->pc = 0x16A838u;
            goto label_16a838;
        }
    }
    ctx->pc = 0x16A7C0u;
label_16a7c0:
    // 0x16a7c0: 0x12c0001d  beqz        $s6, . + 4 + (0x1D << 2)
label_16a7c4:
    if (ctx->pc == 0x16A7C4u) {
        ctx->pc = 0x16A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7C0u;
        // 0x16a7c4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A7C8u;
        goto label_16a7c8;
    }
    ctx->pc = 0x16A7C0u;
    {
        const bool branch_taken_0x16a7c0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7C0u;
        // 0x16a7c4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a7c0) {
            ctx->pc = 0x16A838u;
            goto label_16a838;
        }
    }
    ctx->pc = 0x16A7C8u;
label_16a7c8:
    // 0x16a7c8: 0x12800018  beqz        $s4, . + 4 + (0x18 << 2)
label_16a7cc:
    if (ctx->pc == 0x16A7CCu) {
        ctx->pc = 0x16A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7C8u;
        // 0x16a7cc: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A7D0u;
        goto label_16a7d0;
    }
    ctx->pc = 0x16A7C8u;
    {
        const bool branch_taken_0x16a7c8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7C8u;
        // 0x16a7cc: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a7c8) {
            ctx->pc = 0x16A82Cu;
            goto label_16a82c;
        }
    }
    ctx->pc = 0x16A7D0u;
label_16a7d0:
    // 0x16a7d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x16a7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16a7d4:
    // 0x16a7d4: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x16a7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_16a7d8:
    // 0x16a7d8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x16a7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16a7dc:
    // 0x16a7dc: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x16a7dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_16a7e0:
    // 0x16a7e0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x16a7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_16a7e4:
    // 0x16a7e4: 0x40f809  jalr        $v0
label_16a7e8:
    if (ctx->pc == 0x16A7E8u) {
        ctx->pc = 0x16A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7E4u;
        // 0x16a7e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A7ECu;
        goto label_16a7ec;
    }
    ctx->pc = 0x16A7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16A7ECu);
        ctx->pc = 0x16A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7E4u;
        // 0x16a7e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A7E4u, 0x16A7ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A7ECu;
label_16a7ec:
    // 0x16a7ec: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_16a7f0:
    if (ctx->pc == 0x16A7F0u) {
        ctx->pc = 0x16A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7ECu;
        // 0x16a7f0: 0x8e062b04  lw          $a2, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A7F4u;
        goto label_16a7f4;
    }
    ctx->pc = 0x16A7ECu;
    {
        const bool branch_taken_0x16a7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7ECu;
        // 0x16a7f0: 0x8e062b04  lw          $a2, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a7ec) {
            ctx->pc = 0x16A82Cu;
            goto label_16a82c;
        }
    }
    ctx->pc = 0x16A7F4u;
label_16a7f4:
    // 0x16a7f4: 0x86650030  lh          $a1, 0x30($s3)
    ctx->pc = 0x16a7f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
label_16a7f8:
    // 0x16a7f8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x16a7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16a7fc:
    // 0x16a7fc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x16a7fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_16a800:
    // 0x16a800: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x16a800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_16a804:
    // 0x16a804: 0x60f809  jalr        $v1
label_16a808:
    if (ctx->pc == 0x16A808u) {
        ctx->pc = 0x16A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A804u;
        // 0x16a808: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A80Cu;
        goto label_16a80c;
    }
    ctx->pc = 0x16A804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16A80Cu);
        ctx->pc = 0x16A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A804u;
        // 0x16a808: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A804u, 0x16A80Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A80Cu;
label_16a80c:
    // 0x16a80c: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x16a80cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_16a810:
    // 0x16a810: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16a810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a814:
    // 0x16a814: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16a814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a818:
    // 0x16a818: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x16a818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_16a81c:
    // 0x16a81c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x16a81cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_16a820:
    // 0x16a820: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x16a820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_16a824:
    // 0x16a824: 0x60f809  jalr        $v1
label_16a828:
    if (ctx->pc == 0x16A828u) {
        ctx->pc = 0x16A828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A824u;
        // 0x16a828: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A82Cu;
        goto label_16a82c;
    }
    ctx->pc = 0x16A824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16A82Cu);
        ctx->pc = 0x16A828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A824u;
        // 0x16a828: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A824u, 0x16A82Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A82Cu;
label_16a82c:
    // 0x16a82c: 0xc05a87a  jal         func_16A1E8
label_16a830:
    if (ctx->pc == 0x16A830u) {
        ctx->pc = 0x16A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A82Cu;
        // 0x16a830: 0x86640030  lh          $a0, 0x30($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A834u;
        goto label_16a834;
    }
    ctx->pc = 0x16A82Cu;
    SET_GPR_U32(ctx, 31, 0x16A834u);
    ctx->pc = 0x16A830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A82Cu;
    // 0x16a830: 0x86640030  lh          $a0, 0x30($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A1E8u, 0x16A82Cu, 0x16A834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A834u;
label_16a834:
    // 0x16a834: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x16a834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_16a838:
    // 0x16a838: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x16a838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_16a83c:
    // 0x16a83c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x16a83cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_16a840:
    // 0x16a840: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x16a840u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_16a844:
    // 0x16a844: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x16a844u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_16a848:
    // 0x16a848: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16a848u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16a84c:
    // 0x16a84c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x16a84cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16a850:
    // 0x16a850: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x16a850u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16a854:
    // 0x16a854: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x16a854u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16a858:
    // 0x16a858: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16a858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16a85c:
    // 0x16a85c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x16a85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16a860:
    // 0x16a860: 0x3e00008  jr          $ra
label_16a864:
    if (ctx->pc == 0x16A864u) {
        ctx->pc = 0x16A864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A860u;
        // 0x16a864: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A868u;
        goto label_16a868;
    }
    ctx->pc = 0x16A860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A860u;
        // 0x16a864: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A868u;
label_16a868:
    // 0x16a868: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x16a868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_16a86c:
    // 0x16a86c: 0x0  nop
    ctx->pc = 0x16a86cu;
    // NOP
    ctx->pc = 0x16a870u;
}
