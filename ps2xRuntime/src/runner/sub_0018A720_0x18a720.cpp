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

// Function: sub_0018A720
// Address: 0x18a720 - 0x18a830
void sub_0018A720_0x18a720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A720_0x18a720");
#endif

    switch (ctx->pc) {
        case 0x18a720u: goto label_18a720;
        case 0x18a724u: goto label_18a724;
        case 0x18a728u: goto label_18a728;
        case 0x18a72cu: goto label_18a72c;
        case 0x18a730u: goto label_18a730;
        case 0x18a734u: goto label_18a734;
        case 0x18a738u: goto label_18a738;
        case 0x18a73cu: goto label_18a73c;
        case 0x18a740u: goto label_18a740;
        case 0x18a744u: goto label_18a744;
        case 0x18a748u: goto label_18a748;
        case 0x18a74cu: goto label_18a74c;
        case 0x18a750u: goto label_18a750;
        case 0x18a754u: goto label_18a754;
        case 0x18a758u: goto label_18a758;
        case 0x18a75cu: goto label_18a75c;
        case 0x18a760u: goto label_18a760;
        case 0x18a764u: goto label_18a764;
        case 0x18a768u: goto label_18a768;
        case 0x18a76cu: goto label_18a76c;
        case 0x18a770u: goto label_18a770;
        case 0x18a774u: goto label_18a774;
        case 0x18a778u: goto label_18a778;
        case 0x18a77cu: goto label_18a77c;
        case 0x18a780u: goto label_18a780;
        case 0x18a784u: goto label_18a784;
        case 0x18a788u: goto label_18a788;
        case 0x18a78cu: goto label_18a78c;
        case 0x18a790u: goto label_18a790;
        case 0x18a794u: goto label_18a794;
        case 0x18a798u: goto label_18a798;
        case 0x18a79cu: goto label_18a79c;
        case 0x18a7a0u: goto label_18a7a0;
        case 0x18a7a4u: goto label_18a7a4;
        case 0x18a7a8u: goto label_18a7a8;
        case 0x18a7acu: goto label_18a7ac;
        case 0x18a7b0u: goto label_18a7b0;
        case 0x18a7b4u: goto label_18a7b4;
        case 0x18a7b8u: goto label_18a7b8;
        case 0x18a7bcu: goto label_18a7bc;
        case 0x18a7c0u: goto label_18a7c0;
        case 0x18a7c4u: goto label_18a7c4;
        case 0x18a7c8u: goto label_18a7c8;
        case 0x18a7ccu: goto label_18a7cc;
        case 0x18a7d0u: goto label_18a7d0;
        case 0x18a7d4u: goto label_18a7d4;
        case 0x18a7d8u: goto label_18a7d8;
        case 0x18a7dcu: goto label_18a7dc;
        case 0x18a7e0u: goto label_18a7e0;
        case 0x18a7e4u: goto label_18a7e4;
        case 0x18a7e8u: goto label_18a7e8;
        case 0x18a7ecu: goto label_18a7ec;
        case 0x18a7f0u: goto label_18a7f0;
        case 0x18a7f4u: goto label_18a7f4;
        case 0x18a7f8u: goto label_18a7f8;
        case 0x18a7fcu: goto label_18a7fc;
        case 0x18a800u: goto label_18a800;
        case 0x18a804u: goto label_18a804;
        case 0x18a808u: goto label_18a808;
        case 0x18a80cu: goto label_18a80c;
        case 0x18a810u: goto label_18a810;
        case 0x18a814u: goto label_18a814;
        case 0x18a818u: goto label_18a818;
        case 0x18a81cu: goto label_18a81c;
        case 0x18a820u: goto label_18a820;
        case 0x18a824u: goto label_18a824;
        case 0x18a828u: goto label_18a828;
        case 0x18a82cu: goto label_18a82c;
        default: break;
    }

    ctx->pc = 0x18a720u;

label_18a720:
    // 0x18a720: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18a720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_18a724:
    // 0x18a724: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x18a724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_18a728:
    // 0x18a728: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18a728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_18a72c:
    // 0x18a72c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18a72cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18a730:
    // 0x18a730: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x18a730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_18a734:
    // 0x18a734: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18a734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18a738:
    // 0x18a738: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x18a738u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_18a73c:
    // 0x18a73c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18a73cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a740:
    // 0x18a740: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18a744:
    // 0x18a744: 0x8e021300  lw          $v0, 0x1300($s0)
    ctx->pc = 0x18a744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4864)));
label_18a748:
    // 0x18a748: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18a74c:
    if (ctx->pc == 0x18A74Cu) {
        ctx->pc = 0x18A74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A748u;
        // 0x18a74c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A750u;
        goto label_18a750;
    }
    ctx->pc = 0x18A748u;
    {
        const bool branch_taken_0x18a748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A748u;
        // 0x18a74c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a748) {
            ctx->pc = 0x18A758u;
            goto label_18a758;
        }
    }
    ctx->pc = 0x18A750u;
label_18a750:
    // 0x18a750: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x18a750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_18a754:
    // 0x18a754: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x18a754u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_18a758:
    // 0x18a758: 0x52400023  beql        $s2, $zero, . + 4 + (0x23 << 2)
label_18a75c:
    if (ctx->pc == 0x18A75Cu) {
        ctx->pc = 0x18A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A758u;
        // 0x18a75c: 0xc6200bfc  lwc1        $f0, 0xBFC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A760u;
        goto label_18a760;
    }
    ctx->pc = 0x18A758u;
    {
        const bool branch_taken_0x18a758 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a758) {
            ctx->pc = 0x18A75Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A758u;
            // 0x18a75c: 0xc6200bfc  lwc1        $f0, 0xBFC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A7E8u;
            goto label_18a7e8;
        }
    }
    ctx->pc = 0x18A760u;
label_18a760:
    // 0x18a760: 0xc047e6c  jal         func_11F9B0
label_18a764:
    if (ctx->pc == 0x18A764u) {
        ctx->pc = 0x18A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A760u;
        // 0x18a764: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A768u;
        goto label_18a768;
    }
    ctx->pc = 0x18A760u;
    SET_GPR_U32(ctx, 31, 0x18A768u);
    ctx->pc = 0x18A764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A760u;
    // 0x18a764: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x18A760u, 0x18A768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A768u;
label_18a768:
    // 0x18a768: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_18a76c:
    if (ctx->pc == 0x18A76Cu) {
        ctx->pc = 0x18A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A768u;
        // 0x18a76c: 0xc6200bf8  lwc1        $f0, 0xBF8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A770u;
        goto label_18a770;
    }
    ctx->pc = 0x18A768u;
    {
        const bool branch_taken_0x18a768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a768) {
            ctx->pc = 0x18A76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A768u;
            // 0x18a76c: 0xc6200bf8  lwc1        $f0, 0xBF8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A7B0u;
            goto label_18a7b0;
        }
    }
    ctx->pc = 0x18A770u;
label_18a770:
    // 0x18a770: 0xc047e6c  jal         func_11F9B0
label_18a774:
    if (ctx->pc == 0x18A774u) {
        ctx->pc = 0x18A774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A770u;
        // 0x18a774: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A778u;
        goto label_18a778;
    }
    ctx->pc = 0x18A770u;
    SET_GPR_U32(ctx, 31, 0x18A778u);
    ctx->pc = 0x18A774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A770u;
    // 0x18a774: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x18A770u, 0x18A778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A778u;
label_18a778:
    // 0x18a778: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18a77c:
    // 0x18a77c: 0x84640210  lh          $a0, 0x210($v1)
    ctx->pc = 0x18a77cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 528)));
label_18a780:
    // 0x18a780: 0x8c650214  lw          $a1, 0x214($v1)
    ctx->pc = 0x18a780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 532)));
label_18a784:
    // 0x18a784: 0xa0f809  jalr        $a1
label_18a788:
    if (ctx->pc == 0x18A788u) {
        ctx->pc = 0x18A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A784u;
        // 0x18a788: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A78Cu;
        goto label_18a78c;
    }
    ctx->pc = 0x18A784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x18A78Cu);
        ctx->pc = 0x18A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A784u;
        // 0x18a788: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A784u, 0x18A78Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18A78Cu;
label_18a78c:
    // 0x18a78c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x18a78cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_18a790:
    // 0x18a790: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18a790u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18a794:
    // 0x18a794: 0x0  nop
    ctx->pc = 0x18a794u;
    // NOP
label_18a798:
    // 0x18a798: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_18a79c:
    if (ctx->pc == 0x18A79Cu) {
        ctx->pc = 0x18A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A798u;
        // 0x18a79c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A7A0u;
        goto label_18a7a0;
    }
    ctx->pc = 0x18A798u;
    {
        const bool branch_taken_0x18a798 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A798u;
        // 0x18a79c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a798) {
            ctx->pc = 0x18A7A4u;
            goto label_18a7a4;
        }
    }
    ctx->pc = 0x18A7A0u;
label_18a7a0:
    // 0x18a7a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18a7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a7a4:
    // 0x18a7a4: 0xc05fe7a  jal         func_17F9E8
label_18a7a8:
    if (ctx->pc == 0x18A7A8u) {
        ctx->pc = 0x18A7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A7A4u;
        // 0x18a7a8: 0x8e041300  lw          $a0, 0x1300($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4864)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A7ACu;
        goto label_18a7ac;
    }
    ctx->pc = 0x18A7A4u;
    SET_GPR_U32(ctx, 31, 0x18A7ACu);
    ctx->pc = 0x18A7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A7A4u;
    // 0x18a7a8: 0x8e041300  lw          $a0, 0x1300($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4864)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F9E8u, 0x18A7A4u, 0x18A7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A7ACu;
label_18a7ac:
    // 0x18a7ac: 0xc6200bf8  lwc1        $f0, 0xBF8($s1)
    ctx->pc = 0x18a7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18a7b0:
    // 0x18a7b0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x18a7b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18a7b4:
    // 0x18a7b4: 0x0  nop
    ctx->pc = 0x18a7b4u;
    // NOP
label_18a7b8:
    // 0x18a7b8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_18a7bc:
    if (ctx->pc == 0x18A7BCu) {
        ctx->pc = 0x18A7C0u;
        goto label_18a7c0;
    }
    ctx->pc = 0x18A7B8u;
    {
        const bool branch_taken_0x18a7b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18a7b8) {
            ctx->pc = 0x18A7DCu;
            goto label_18a7dc;
        }
    }
    ctx->pc = 0x18A7C0u;
label_18a7c0:
    // 0x18a7c0: 0xe6340bf8  swc1        $f20, 0xBF8($s1)
    ctx->pc = 0x18a7c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3064), bits); }
label_18a7c4:
    // 0x18a7c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18a7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18a7c8:
    // 0x18a7c8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x18a7c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_18a7cc:
    // 0x18a7cc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x18a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_18a7d0:
    // 0x18a7d0: 0x40f809  jalr        $v0
label_18a7d4:
    if (ctx->pc == 0x18A7D4u) {
        ctx->pc = 0x18A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A7D0u;
        // 0x18a7d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A7D8u;
        goto label_18a7d8;
    }
    ctx->pc = 0x18A7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18A7D8u);
        ctx->pc = 0x18A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A7D0u;
        // 0x18a7d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A7D0u, 0x18A7D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18A7D8u;
label_18a7d8:
    // 0x18a7d8: 0xae220bf0  sw          $v0, 0xBF0($s1)
    ctx->pc = 0x18a7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3056), GPR_U32(ctx, 2));
label_18a7dc:
    // 0x18a7dc: 0x5640000e  bnel        $s2, $zero, . + 4 + (0xE << 2)
label_18a7e0:
    if (ctx->pc == 0x18A7E0u) {
        ctx->pc = 0x18A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A7DCu;
        // 0x18a7e0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A7E4u;
        goto label_18a7e4;
    }
    ctx->pc = 0x18A7DCu;
    {
        const bool branch_taken_0x18a7dc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a7dc) {
            ctx->pc = 0x18A7E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A7DCu;
            // 0x18a7e0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A818u;
            goto label_18a818;
        }
    }
    ctx->pc = 0x18A7E4u;
label_18a7e4:
    // 0x18a7e4: 0xc6200bfc  lwc1        $f0, 0xBFC($s1)
    ctx->pc = 0x18a7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18a7e8:
    // 0x18a7e8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18a7e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18a7ec:
    // 0x18a7ec: 0x0  nop
    ctx->pc = 0x18a7ecu;
    // NOP
label_18a7f0:
    // 0x18a7f0: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_18a7f4:
    if (ctx->pc == 0x18A7F4u) {
        ctx->pc = 0x18A7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A7F0u;
        // 0x18a7f4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A7F8u;
        goto label_18a7f8;
    }
    ctx->pc = 0x18A7F0u;
    {
        const bool branch_taken_0x18a7f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18a7f0) {
            ctx->pc = 0x18A7F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A7F0u;
            // 0x18a7f4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A818u;
            goto label_18a818;
        }
    }
    ctx->pc = 0x18A7F8u;
label_18a7f8:
    // 0x18a7f8: 0xe6340bfc  swc1        $f20, 0xBFC($s1)
    ctx->pc = 0x18a7f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3068), bits); }
label_18a7fc:
    // 0x18a7fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18a7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18a800:
    // 0x18a800: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x18a800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_18a804:
    // 0x18a804: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x18a804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_18a808:
    // 0x18a808: 0x40f809  jalr        $v0
label_18a80c:
    if (ctx->pc == 0x18A80Cu) {
        ctx->pc = 0x18A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A808u;
        // 0x18a80c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A810u;
        goto label_18a810;
    }
    ctx->pc = 0x18A808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18A810u);
        ctx->pc = 0x18A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A808u;
        // 0x18a80c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A808u, 0x18A810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18A810u;
label_18a810:
    // 0x18a810: 0xae220bf4  sw          $v0, 0xBF4($s1)
    ctx->pc = 0x18a810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3060), GPR_U32(ctx, 2));
label_18a814:
    // 0x18a814: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x18a814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18a818:
    // 0x18a818: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18a818u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18a81c:
    // 0x18a81c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x18a81cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18a820:
    // 0x18a820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a824:
    // 0x18a824: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x18a824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18a828:
    // 0x18a828: 0x3e00008  jr          $ra
label_18a82c:
    if (ctx->pc == 0x18A82Cu) {
        ctx->pc = 0x18A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A828u;
        // 0x18a82c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A830u;
        goto label_fallthrough_0x18a828;
    }
    ctx->pc = 0x18A828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A828u;
        // 0x18a82c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18a828:
    ctx->pc = 0x18A830u;
}
