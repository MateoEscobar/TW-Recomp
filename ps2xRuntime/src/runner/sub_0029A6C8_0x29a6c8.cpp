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

// Function: sub_0029A6C8
// Address: 0x29a6c8 - 0x29a8c0
void sub_0029A6C8_0x29a6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A6C8_0x29a6c8");
#endif

    switch (ctx->pc) {
        case 0x29a6c8u: goto label_29a6c8;
        case 0x29a6ccu: goto label_29a6cc;
        case 0x29a6d0u: goto label_29a6d0;
        case 0x29a6d4u: goto label_29a6d4;
        case 0x29a6d8u: goto label_29a6d8;
        case 0x29a6dcu: goto label_29a6dc;
        case 0x29a6e0u: goto label_29a6e0;
        case 0x29a6e4u: goto label_29a6e4;
        case 0x29a6e8u: goto label_29a6e8;
        case 0x29a6ecu: goto label_29a6ec;
        case 0x29a6f0u: goto label_29a6f0;
        case 0x29a6f4u: goto label_29a6f4;
        case 0x29a6f8u: goto label_29a6f8;
        case 0x29a6fcu: goto label_29a6fc;
        case 0x29a700u: goto label_29a700;
        case 0x29a704u: goto label_29a704;
        case 0x29a708u: goto label_29a708;
        case 0x29a70cu: goto label_29a70c;
        case 0x29a710u: goto label_29a710;
        case 0x29a714u: goto label_29a714;
        case 0x29a718u: goto label_29a718;
        case 0x29a71cu: goto label_29a71c;
        case 0x29a720u: goto label_29a720;
        case 0x29a724u: goto label_29a724;
        case 0x29a728u: goto label_29a728;
        case 0x29a72cu: goto label_29a72c;
        case 0x29a730u: goto label_29a730;
        case 0x29a734u: goto label_29a734;
        case 0x29a738u: goto label_29a738;
        case 0x29a73cu: goto label_29a73c;
        case 0x29a740u: goto label_29a740;
        case 0x29a744u: goto label_29a744;
        case 0x29a748u: goto label_29a748;
        case 0x29a74cu: goto label_29a74c;
        case 0x29a750u: goto label_29a750;
        case 0x29a754u: goto label_29a754;
        case 0x29a758u: goto label_29a758;
        case 0x29a75cu: goto label_29a75c;
        case 0x29a760u: goto label_29a760;
        case 0x29a764u: goto label_29a764;
        case 0x29a768u: goto label_29a768;
        case 0x29a76cu: goto label_29a76c;
        case 0x29a770u: goto label_29a770;
        case 0x29a774u: goto label_29a774;
        case 0x29a778u: goto label_29a778;
        case 0x29a77cu: goto label_29a77c;
        case 0x29a780u: goto label_29a780;
        case 0x29a784u: goto label_29a784;
        case 0x29a788u: goto label_29a788;
        case 0x29a78cu: goto label_29a78c;
        case 0x29a790u: goto label_29a790;
        case 0x29a794u: goto label_29a794;
        case 0x29a798u: goto label_29a798;
        case 0x29a79cu: goto label_29a79c;
        case 0x29a7a0u: goto label_29a7a0;
        case 0x29a7a4u: goto label_29a7a4;
        case 0x29a7a8u: goto label_29a7a8;
        case 0x29a7acu: goto label_29a7ac;
        case 0x29a7b0u: goto label_29a7b0;
        case 0x29a7b4u: goto label_29a7b4;
        case 0x29a7b8u: goto label_29a7b8;
        case 0x29a7bcu: goto label_29a7bc;
        case 0x29a7c0u: goto label_29a7c0;
        case 0x29a7c4u: goto label_29a7c4;
        case 0x29a7c8u: goto label_29a7c8;
        case 0x29a7ccu: goto label_29a7cc;
        case 0x29a7d0u: goto label_29a7d0;
        case 0x29a7d4u: goto label_29a7d4;
        case 0x29a7d8u: goto label_29a7d8;
        case 0x29a7dcu: goto label_29a7dc;
        case 0x29a7e0u: goto label_29a7e0;
        case 0x29a7e4u: goto label_29a7e4;
        case 0x29a7e8u: goto label_29a7e8;
        case 0x29a7ecu: goto label_29a7ec;
        case 0x29a7f0u: goto label_29a7f0;
        case 0x29a7f4u: goto label_29a7f4;
        case 0x29a7f8u: goto label_29a7f8;
        case 0x29a7fcu: goto label_29a7fc;
        case 0x29a800u: goto label_29a800;
        case 0x29a804u: goto label_29a804;
        case 0x29a808u: goto label_29a808;
        case 0x29a80cu: goto label_29a80c;
        case 0x29a810u: goto label_29a810;
        case 0x29a814u: goto label_29a814;
        case 0x29a818u: goto label_29a818;
        case 0x29a81cu: goto label_29a81c;
        case 0x29a820u: goto label_29a820;
        case 0x29a824u: goto label_29a824;
        case 0x29a828u: goto label_29a828;
        case 0x29a82cu: goto label_29a82c;
        case 0x29a830u: goto label_29a830;
        case 0x29a834u: goto label_29a834;
        case 0x29a838u: goto label_29a838;
        case 0x29a83cu: goto label_29a83c;
        case 0x29a840u: goto label_29a840;
        case 0x29a844u: goto label_29a844;
        case 0x29a848u: goto label_29a848;
        case 0x29a84cu: goto label_29a84c;
        case 0x29a850u: goto label_29a850;
        case 0x29a854u: goto label_29a854;
        case 0x29a858u: goto label_29a858;
        case 0x29a85cu: goto label_29a85c;
        case 0x29a860u: goto label_29a860;
        case 0x29a864u: goto label_29a864;
        case 0x29a868u: goto label_29a868;
        case 0x29a86cu: goto label_29a86c;
        case 0x29a870u: goto label_29a870;
        case 0x29a874u: goto label_29a874;
        case 0x29a878u: goto label_29a878;
        case 0x29a87cu: goto label_29a87c;
        case 0x29a880u: goto label_29a880;
        case 0x29a884u: goto label_29a884;
        case 0x29a888u: goto label_29a888;
        case 0x29a88cu: goto label_29a88c;
        case 0x29a890u: goto label_29a890;
        case 0x29a894u: goto label_29a894;
        case 0x29a898u: goto label_29a898;
        case 0x29a89cu: goto label_29a89c;
        case 0x29a8a0u: goto label_29a8a0;
        case 0x29a8a4u: goto label_29a8a4;
        case 0x29a8a8u: goto label_29a8a8;
        case 0x29a8acu: goto label_29a8ac;
        case 0x29a8b0u: goto label_29a8b0;
        case 0x29a8b4u: goto label_29a8b4;
        case 0x29a8b8u: goto label_29a8b8;
        case 0x29a8bcu: goto label_29a8bc;
        default: break;
    }

    ctx->pc = 0x29a6c8u;

label_29a6c8:
    // 0x29a6c8: 0x27bdfd10  addiu       $sp, $sp, -0x2F0
    ctx->pc = 0x29a6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966544));
label_29a6cc:
    // 0x29a6cc: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x29a6ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
label_29a6d0:
    // 0x29a6d0: 0x7fb002d0  sq          $s0, 0x2D0($sp)
    ctx->pc = 0x29a6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 16));
label_29a6d4:
    // 0x29a6d4: 0x24e74b00  addiu       $a3, $a3, 0x4B00
    ctx->pc = 0x29a6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19200));
label_29a6d8:
    // 0x29a6d8: 0x7fb102c0  sq          $s1, 0x2C0($sp)
    ctx->pc = 0x29a6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 17));
label_29a6dc:
    // 0x29a6dc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x29a6dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_29a6e0:
    // 0x29a6e0: 0x7fb302a0  sq          $s3, 0x2A0($sp)
    ctx->pc = 0x29a6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 19));
label_29a6e4:
    // 0x29a6e4: 0x7fb50280  sq          $s5, 0x280($sp)
    ctx->pc = 0x29a6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 21));
label_29a6e8:
    // 0x29a6e8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29a6e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29a6ec:
    // 0x29a6ec: 0x7fb60270  sq          $s6, 0x270($sp)
    ctx->pc = 0x29a6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 22));
label_29a6f0:
    // 0x29a6f0: 0x7fbe0250  sq          $fp, 0x250($sp)
    ctx->pc = 0x29a6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 30));
label_29a6f4:
    // 0x29a6f4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x29a6f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29a6f8:
    // 0x29a6f8: 0x7fb202b0  sq          $s2, 0x2B0($sp)
    ctx->pc = 0x29a6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 18));
label_29a6fc:
    // 0x29a6fc: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x29a6fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29a700:
    // 0x29a700: 0x7fb40290  sq          $s4, 0x290($sp)
    ctx->pc = 0x29a700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 20));
label_29a704:
    // 0x29a704: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x29a704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29a708:
    // 0x29a708: 0x7fb70260  sq          $s7, 0x260($sp)
    ctx->pc = 0x29a708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 23));
label_29a70c:
    // 0x29a70c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29a70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29a710:
    // 0x29a710: 0xffbf0240  sd          $ra, 0x240($sp)
    ctx->pc = 0x29a710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 31));
label_29a714:
    // 0x29a714: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x29a714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29a718:
    // 0x29a718: 0xe7b402e0  swc1        $f20, 0x2E0($sp)
    ctx->pc = 0x29a718u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 736), bits); }
label_29a71c:
    // 0x29a71c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x29a71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_29a720:
    // 0x29a720: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x29a720u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29a724:
    // 0x29a724: 0x86e30092  lh          $v1, 0x92($s7)
    ctx->pc = 0x29a724u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 146)));
label_29a728:
    // 0x29a728: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x29a728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_29a72c:
    // 0x29a72c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x29a72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_29a730:
    // 0x29a730: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x29a730u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_29a734:
    // 0x29a734: 0xc0a6cae  jal         func_29B2B8
label_29a738:
    if (ctx->pc == 0x29A738u) {
        ctx->pc = 0x29A738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A734u;
        // 0x29a738: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A73Cu;
        goto label_29a73c;
    }
    ctx->pc = 0x29A734u;
    SET_GPR_U32(ctx, 31, 0x29A73Cu);
    ctx->pc = 0x29A738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A734u;
    // 0x29a738: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B2B8u, 0x29A734u, 0x29A73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A73Cu;
label_29a73c:
    // 0x29a73c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x29a73cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_29a740:
    // 0x29a740: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29a740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_29a744:
    // 0x29a744: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29a744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_29a748:
    // 0x29a748: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x29a748u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29a74c:
    // 0x29a74c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29a74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29a750:
    // 0x29a750: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x29a750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_29a754:
    // 0x29a754: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x29a754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_29a758:
    // 0x29a758: 0xc089d2a  jal         func_2274A8
label_29a75c:
    if (ctx->pc == 0x29A75Cu) {
        ctx->pc = 0x29A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A758u;
        // 0x29a75c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A760u;
        goto label_29a760;
    }
    ctx->pc = 0x29A758u;
    SET_GPR_U32(ctx, 31, 0x29A760u);
    ctx->pc = 0x29A75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A758u;
    // 0x29a75c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2274A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2274A8u, 0x29A758u, 0x29A760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A760u;
label_29a760:
    // 0x29a760: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x29a760u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29a764:
    // 0x29a764: 0x12a00048  beqz        $s5, . + 4 + (0x48 << 2)
label_29a768:
    if (ctx->pc == 0x29A768u) {
        ctx->pc = 0x29A768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A764u;
        // 0x29a768: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A76Cu;
        goto label_29a76c;
    }
    ctx->pc = 0x29A764u;
    {
        const bool branch_taken_0x29a764 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A764u;
        // 0x29a768: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a764) {
            ctx->pc = 0x29A888u;
            goto label_29a888;
        }
    }
    ctx->pc = 0x29A76Cu;
label_29a76c:
    // 0x29a76c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x29a76cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_29a770:
    // 0x29a770: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x29a770u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29a774:
    // 0x29a774: 0x0  nop
    ctx->pc = 0x29a774u;
    // NOP
label_29a778:
    // 0x29a778: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x29a778u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_29a77c:
    // 0x29a77c: 0xc087502  jal         func_21D408
label_29a780:
    if (ctx->pc == 0x29A780u) {
        ctx->pc = 0x29A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A77Cu;
        // 0x29a780: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A784u;
        goto label_29a784;
    }
    ctx->pc = 0x29A77Cu;
    SET_GPR_U32(ctx, 31, 0x29A784u);
    ctx->pc = 0x29A780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A77Cu;
    // 0x29a780: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29A77Cu, 0x29A784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A784u;
label_29a784:
    // 0x29a784: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29a784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29a788:
    // 0x29a788: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x29a788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_29a78c:
    // 0x29a78c: 0xc0a408c  jal         func_290230
label_29a790:
    if (ctx->pc == 0x29A790u) {
        ctx->pc = 0x29A790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A78Cu;
        // 0x29a790: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A794u;
        goto label_29a794;
    }
    ctx->pc = 0x29A78Cu;
    SET_GPR_U32(ctx, 31, 0x29A794u);
    ctx->pc = 0x29A790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A78Cu;
    // 0x29a790: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x29A78Cu, 0x29A794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A794u;
label_29a794:
    // 0x29a794: 0x54520039  bnel        $v0, $s2, . + 4 + (0x39 << 2)
label_29a798:
    if (ctx->pc == 0x29A798u) {
        ctx->pc = 0x29A798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A794u;
        // 0x29a798: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A79Cu;
        goto label_29a79c;
    }
    ctx->pc = 0x29A794u;
    {
        const bool branch_taken_0x29a794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x29a794) {
            ctx->pc = 0x29A798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A794u;
            // 0x29a798: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A87Cu;
            goto label_29a87c;
        }
    }
    ctx->pc = 0x29A79Cu;
label_29a79c:
    // 0x29a79c: 0xc088edc  jal         func_223B70
label_29a7a0:
    if (ctx->pc == 0x29A7A0u) {
        ctx->pc = 0x29A7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A79Cu;
        // 0x29a7a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A7A4u;
        goto label_29a7a4;
    }
    ctx->pc = 0x29A79Cu;
    SET_GPR_U32(ctx, 31, 0x29A7A4u);
    ctx->pc = 0x29A7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A79Cu;
    // 0x29a7a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x29A79Cu, 0x29A7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A7A4u;
label_29a7a4:
    // 0x29a7a4: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
label_29a7a8:
    if (ctx->pc == 0x29A7A8u) {
        ctx->pc = 0x29A7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A7A4u;
        // 0x29a7a8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A7ACu;
        goto label_29a7ac;
    }
    ctx->pc = 0x29A7A4u;
    {
        const bool branch_taken_0x29a7a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a7a4) {
            ctx->pc = 0x29A7A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A7A4u;
            // 0x29a7a8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A87Cu;
            goto label_29a87c;
        }
    }
    ctx->pc = 0x29A7ACu;
label_29a7ac:
    // 0x29a7ac: 0xc089f76  jal         func_227DD8
label_29a7b0:
    if (ctx->pc == 0x29A7B0u) {
        ctx->pc = 0x29A7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A7ACu;
        // 0x29a7b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A7B4u;
        goto label_29a7b4;
    }
    ctx->pc = 0x29A7ACu;
    SET_GPR_U32(ctx, 31, 0x29A7B4u);
    ctx->pc = 0x29A7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A7ACu;
    // 0x29a7b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x29A7ACu, 0x29A7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A7B4u;
label_29a7b4:
    // 0x29a7b4: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
label_29a7b8:
    if (ctx->pc == 0x29A7B8u) {
        ctx->pc = 0x29A7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A7B4u;
        // 0x29a7b8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A7BCu;
        goto label_29a7bc;
    }
    ctx->pc = 0x29A7B4u;
    {
        const bool branch_taken_0x29a7b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a7b4) {
            ctx->pc = 0x29A7B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A7B4u;
            // 0x29a7b8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A87Cu;
            goto label_29a87c;
        }
    }
    ctx->pc = 0x29A7BCu;
label_29a7bc:
    // 0x29a7bc: 0x8202002e  lb          $v0, 0x2E($s0)
    ctx->pc = 0x29a7bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
label_29a7c0:
    // 0x29a7c0: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x29a7c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_29a7c4:
    // 0x29a7c4: 0x1452000f  bne         $v0, $s2, . + 4 + (0xF << 2)
label_29a7c8:
    if (ctx->pc == 0x29A7C8u) {
        ctx->pc = 0x29A7CCu;
        goto label_29a7cc;
    }
    ctx->pc = 0x29A7C4u;
    {
        const bool branch_taken_0x29a7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x29a7c4) {
            ctx->pc = 0x29A804u;
            goto label_29a804;
        }
    }
    ctx->pc = 0x29A7CCu;
label_29a7cc:
    // 0x29a7cc: 0xc0a36c2  jal         func_28DB08
label_29a7d0:
    if (ctx->pc == 0x29A7D0u) {
        ctx->pc = 0x29A7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A7CCu;
        // 0x29a7d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A7D4u;
        goto label_29a7d4;
    }
    ctx->pc = 0x29A7CCu;
    SET_GPR_U32(ctx, 31, 0x29A7D4u);
    ctx->pc = 0x29A7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A7CCu;
    // 0x29a7d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x29A7CCu, 0x29A7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A7D4u;
label_29a7d4:
    // 0x29a7d4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x29a7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_29a7d8:
    // 0x29a7d8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x29a7d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_29a7dc:
    // 0x29a7dc: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x29a7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_29a7e0:
    // 0x29a7e0: 0xa0f809  jalr        $a1
label_29a7e4:
    if (ctx->pc == 0x29A7E4u) {
        ctx->pc = 0x29A7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A7E0u;
        // 0x29a7e4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A7E8u;
        goto label_29a7e8;
    }
    ctx->pc = 0x29A7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x29A7E8u);
        ctx->pc = 0x29A7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A7E0u;
        // 0x29a7e4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A7E0u, 0x29A7E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29A7E8u;
label_29a7e8:
    // 0x29a7e8: 0x14520006  bne         $v0, $s2, . + 4 + (0x6 << 2)
label_29a7ec:
    if (ctx->pc == 0x29A7ECu) {
        ctx->pc = 0x29A7F0u;
        goto label_29a7f0;
    }
    ctx->pc = 0x29A7E8u;
    {
        const bool branch_taken_0x29a7e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x29a7e8) {
            ctx->pc = 0x29A804u;
            goto label_29a804;
        }
    }
    ctx->pc = 0x29A7F0u;
label_29a7f0:
    // 0x29a7f0: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x29a7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29a7f4:
    // 0x29a7f4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x29a7f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29a7f8:
    // 0x29a7f8: 0x0  nop
    ctx->pc = 0x29a7f8u;
    // NOP
label_29a7fc:
    // 0x29a7fc: 0x45010023  bc1t        . + 4 + (0x23 << 2)
label_29a800:
    if (ctx->pc == 0x29A800u) {
        ctx->pc = 0x29A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A7FCu;
        // 0x29a800: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A804u;
        goto label_29a804;
    }
    ctx->pc = 0x29A7FCu;
    {
        const bool branch_taken_0x29a7fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A7FCu;
        // 0x29a800: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a7fc) {
            ctx->pc = 0x29A88Cu;
            goto label_29a88c;
        }
    }
    ctx->pc = 0x29A804u;
label_29a804:
    // 0x29a804: 0x17d20021  bne         $fp, $s2, . + 4 + (0x21 << 2)
label_29a808:
    if (ctx->pc == 0x29A808u) {
        ctx->pc = 0x29A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A804u;
        // 0x29a808: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A80Cu;
        goto label_29a80c;
    }
    ctx->pc = 0x29A804u;
    {
        const bool branch_taken_0x29a804 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 18));
        ctx->pc = 0x29A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A804u;
        // 0x29a808: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a804) {
            ctx->pc = 0x29A88Cu;
            goto label_29a88c;
        }
    }
    ctx->pc = 0x29A80Cu;
label_29a80c:
    // 0x29a80c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x29a80cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29a810:
    // 0x29a810: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x29a810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_29a814:
    // 0x29a814: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x29a814u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29a818:
    // 0x29a818: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29a818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29a81c:
    // 0x29a81c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29a81cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_29a820:
    // 0x29a820: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x29a820u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_29a824:
    // 0x29a824: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x29a824u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_29a828:
    // 0x29a828: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x29a828u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_29a82c:
    // 0x29a82c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x29a82cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_29a830:
    // 0x29a830: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x29a830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29a834:
    // 0x29a834: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29a834u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_29a838:
    // 0x29a838: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x29a838u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_29a83c:
    // 0x29a83c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x29a83cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_29a840:
    // 0x29a840: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x29a840u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_29a844:
    // 0x29a844: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x29a844u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_29a848:
    // 0x29a848: 0x4a0003bf  vwaitq
    ctx->pc = 0x29a848u;
    // VWAITQ (Q already resolved in this runtime)
label_29a84c:
    // 0x29a84c: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x29a84cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_29a850:
    // 0x29a850: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x29a850u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_29a854:
    // 0x29a854: 0x7fa20230  sq          $v0, 0x230($sp)
    ctx->pc = 0x29a854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 2));
label_29a858:
    // 0x29a858: 0x7fa20220  sq          $v0, 0x220($sp)
    ctx->pc = 0x29a858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
label_29a85c:
    // 0x29a85c: 0x27a70200  addiu       $a3, $sp, 0x200
    ctx->pc = 0x29a85cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_29a860:
    // 0x29a860: 0x7fa30200  sq          $v1, 0x200($sp)
    ctx->pc = 0x29a860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 3));
label_29a864:
    // 0x29a864: 0x7fa20210  sq          $v0, 0x210($sp)
    ctx->pc = 0x29a864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
label_29a868:
    // 0x29a868: 0x7fa30230  sq          $v1, 0x230($sp)
    ctx->pc = 0x29a868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 3));
label_29a86c:
    // 0x29a86c: 0xc0a2892  jal         func_28A248
label_29a870:
    if (ctx->pc == 0x29A870u) {
        ctx->pc = 0x29A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A86Cu;
        // 0x29a870: 0x7fa30220  sq          $v1, 0x220($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A874u;
        goto label_29a874;
    }
    ctx->pc = 0x29A86Cu;
    SET_GPR_U32(ctx, 31, 0x29A874u);
    ctx->pc = 0x29A870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A86Cu;
    // 0x29a870: 0x7fa30220  sq          $v1, 0x220($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A248u, 0x29A86Cu, 0x29A874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A874u;
label_29a874:
    // 0x29a874: 0x10000005  b           . + 4 + (0x5 << 2)
label_29a878:
    if (ctx->pc == 0x29A878u) {
        ctx->pc = 0x29A878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A874u;
        // 0x29a878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A87Cu;
        goto label_29a87c;
    }
    ctx->pc = 0x29A874u;
    {
        const bool branch_taken_0x29a874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A874u;
        // 0x29a878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a874) {
            ctx->pc = 0x29A88Cu;
            goto label_29a88c;
        }
    }
    ctx->pc = 0x29A87Cu;
label_29a87c:
    // 0x29a87c: 0x275102b  sltu        $v0, $s3, $s5
    ctx->pc = 0x29a87cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_29a880:
    // 0x29a880: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
label_29a884:
    if (ctx->pc == 0x29A884u) {
        ctx->pc = 0x29A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A880u;
        // 0x29a884: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A888u;
        goto label_29a888;
    }
    ctx->pc = 0x29A880u;
    {
        const bool branch_taken_0x29a880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A880u;
        // 0x29a884: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a880) {
            ctx->pc = 0x29A778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29a778;
        }
    }
    ctx->pc = 0x29A888u;
label_29a888:
    // 0x29a888: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29a888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29a88c:
    // 0x29a88c: 0x7bb002d0  lq          $s0, 0x2D0($sp)
    ctx->pc = 0x29a88cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_29a890:
    // 0x29a890: 0x7bb102c0  lq          $s1, 0x2C0($sp)
    ctx->pc = 0x29a890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_29a894:
    // 0x29a894: 0x7bb202b0  lq          $s2, 0x2B0($sp)
    ctx->pc = 0x29a894u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_29a898:
    // 0x29a898: 0x7bb302a0  lq          $s3, 0x2A0($sp)
    ctx->pc = 0x29a898u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_29a89c:
    // 0x29a89c: 0x7bb40290  lq          $s4, 0x290($sp)
    ctx->pc = 0x29a89cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_29a8a0:
    // 0x29a8a0: 0x7bb50280  lq          $s5, 0x280($sp)
    ctx->pc = 0x29a8a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_29a8a4:
    // 0x29a8a4: 0x7bb60270  lq          $s6, 0x270($sp)
    ctx->pc = 0x29a8a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_29a8a8:
    // 0x29a8a8: 0x7bb70260  lq          $s7, 0x260($sp)
    ctx->pc = 0x29a8a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_29a8ac:
    // 0x29a8ac: 0x7bbe0250  lq          $fp, 0x250($sp)
    ctx->pc = 0x29a8acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_29a8b0:
    // 0x29a8b0: 0xdfbf0240  ld          $ra, 0x240($sp)
    ctx->pc = 0x29a8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 576)));
label_29a8b4:
    // 0x29a8b4: 0xc7b402e0  lwc1        $f20, 0x2E0($sp)
    ctx->pc = 0x29a8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_29a8b8:
    // 0x29a8b8: 0x3e00008  jr          $ra
label_29a8bc:
    if (ctx->pc == 0x29A8BCu) {
        ctx->pc = 0x29A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A8B8u;
        // 0x29a8bc: 0x27bd02f0  addiu       $sp, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A8C0u;
        goto label_fallthrough_0x29a8b8;
    }
    ctx->pc = 0x29A8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A8B8u;
        // 0x29a8bc: 0x27bd02f0  addiu       $sp, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A8B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29a8b8:
    ctx->pc = 0x29A8C0u;
}
