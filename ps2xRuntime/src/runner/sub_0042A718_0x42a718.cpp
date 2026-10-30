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

// Function: sub_0042A718
// Address: 0x42a718 - 0x42a7f0
void sub_0042A718_0x42a718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042A718_0x42a718");
#endif

    switch (ctx->pc) {
        case 0x42a718u: goto label_42a718;
        case 0x42a71cu: goto label_42a71c;
        case 0x42a720u: goto label_42a720;
        case 0x42a724u: goto label_42a724;
        case 0x42a728u: goto label_42a728;
        case 0x42a72cu: goto label_42a72c;
        case 0x42a730u: goto label_42a730;
        case 0x42a734u: goto label_42a734;
        case 0x42a738u: goto label_42a738;
        case 0x42a73cu: goto label_42a73c;
        case 0x42a740u: goto label_42a740;
        case 0x42a744u: goto label_42a744;
        case 0x42a748u: goto label_42a748;
        case 0x42a74cu: goto label_42a74c;
        case 0x42a750u: goto label_42a750;
        case 0x42a754u: goto label_42a754;
        case 0x42a758u: goto label_42a758;
        case 0x42a75cu: goto label_42a75c;
        case 0x42a760u: goto label_42a760;
        case 0x42a764u: goto label_42a764;
        case 0x42a768u: goto label_42a768;
        case 0x42a76cu: goto label_42a76c;
        case 0x42a770u: goto label_42a770;
        case 0x42a774u: goto label_42a774;
        case 0x42a778u: goto label_42a778;
        case 0x42a77cu: goto label_42a77c;
        case 0x42a780u: goto label_42a780;
        case 0x42a784u: goto label_42a784;
        case 0x42a788u: goto label_42a788;
        case 0x42a78cu: goto label_42a78c;
        case 0x42a790u: goto label_42a790;
        case 0x42a794u: goto label_42a794;
        case 0x42a798u: goto label_42a798;
        case 0x42a79cu: goto label_42a79c;
        case 0x42a7a0u: goto label_42a7a0;
        case 0x42a7a4u: goto label_42a7a4;
        case 0x42a7a8u: goto label_42a7a8;
        case 0x42a7acu: goto label_42a7ac;
        case 0x42a7b0u: goto label_42a7b0;
        case 0x42a7b4u: goto label_42a7b4;
        case 0x42a7b8u: goto label_42a7b8;
        case 0x42a7bcu: goto label_42a7bc;
        case 0x42a7c0u: goto label_42a7c0;
        case 0x42a7c4u: goto label_42a7c4;
        case 0x42a7c8u: goto label_42a7c8;
        case 0x42a7ccu: goto label_42a7cc;
        case 0x42a7d0u: goto label_42a7d0;
        case 0x42a7d4u: goto label_42a7d4;
        case 0x42a7d8u: goto label_42a7d8;
        case 0x42a7dcu: goto label_42a7dc;
        case 0x42a7e0u: goto label_42a7e0;
        case 0x42a7e4u: goto label_42a7e4;
        case 0x42a7e8u: goto label_42a7e8;
        case 0x42a7ecu: goto label_42a7ec;
        default: break;
    }

    ctx->pc = 0x42a718u;

label_42a718:
    // 0x42a718: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42a718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_42a71c:
    // 0x42a71c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x42a71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_42a720:
    // 0x42a720: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x42a720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_42a724:
    // 0x42a724: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42a724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42a728:
    // 0x42a728: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x42a728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42a72c:
    // 0x42a72c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42a72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_42a730:
    // 0x42a730: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x42a730u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_42a734:
    // 0x42a734: 0x8c46b8b8  lw          $a2, -0x4748($v0)
    ctx->pc = 0x42a734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_42a738:
    // 0x42a738: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x42a738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_42a73c:
    // 0x42a73c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x42a73cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_42a740:
    // 0x42a740: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x42a740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_42a744:
    // 0x42a744: 0x40f809  jalr        $v0
label_42a748:
    if (ctx->pc == 0x42A748u) {
        ctx->pc = 0x42A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A744u;
        // 0x42a748: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A74Cu;
        goto label_42a74c;
    }
    ctx->pc = 0x42A744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42A74Cu);
        ctx->pc = 0x42A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A744u;
        // 0x42a748: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A744u, 0x42A74Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42A74Cu;
label_42a74c:
    // 0x42a74c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42a74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42a750:
    // 0x42a750: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x42a750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_42a754:
    // 0x42a754: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x42a754u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_42a758:
    // 0x42a758: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_42a75c:
    if (ctx->pc == 0x42A75Cu) {
        ctx->pc = 0x42A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A758u;
        // 0x42a75c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A760u;
        goto label_42a760;
    }
    ctx->pc = 0x42A758u;
    {
        const bool branch_taken_0x42a758 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x42A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A758u;
        // 0x42a75c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a758) {
            ctx->pc = 0x42A774u;
            goto label_42a774;
        }
    }
    ctx->pc = 0x42A760u;
label_42a760:
    // 0x42a760: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x42a760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_42a764:
    // 0x42a764: 0x0  nop
    ctx->pc = 0x42a764u;
    // NOP
label_42a768:
    // 0x42a768: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x42a768u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_42a76c:
    // 0x42a76c: 0x10000007  b           . + 4 + (0x7 << 2)
label_42a770:
    if (ctx->pc == 0x42A770u) {
        ctx->pc = 0x42A774u;
        goto label_42a774;
    }
    ctx->pc = 0x42A76Cu;
    {
        const bool branch_taken_0x42a76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42a76c) {
            ctx->pc = 0x42A78Cu;
            goto label_42a78c;
        }
    }
    ctx->pc = 0x42A774u;
label_42a774:
    // 0x42a774: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x42a774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_42a778:
    // 0x42a778: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x42a778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_42a77c:
    // 0x42a77c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x42a77cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_42a780:
    // 0x42a780: 0x0  nop
    ctx->pc = 0x42a780u;
    // NOP
label_42a784:
    // 0x42a784: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x42a784u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_42a788:
    // 0x42a788: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x42a788u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_42a78c:
    // 0x42a78c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x42a78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_42a790:
    // 0x42a790: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x42a790u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_42a794:
    // 0x42a794: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x42a794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_42a798:
    // 0x42a798: 0x3c013e29  lui         $at, 0x3E29
    ctx->pc = 0x42a798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15913 << 16));
label_42a79c:
    // 0x42a79c: 0x3421fbe7  ori         $at, $at, 0xFBE7
    ctx->pc = 0x42a79cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64487);
label_42a7a0:
    // 0x42a7a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x42a7a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_42a7a4:
    // 0x42a7a4: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x42a7a4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_42a7a8:
    // 0x42a7a8: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x42a7a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_42a7ac:
    // 0x42a7ac: 0x0  nop
    ctx->pc = 0x42a7acu;
    // NOP
label_42a7b0:
    // 0x42a7b0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_42a7b4:
    if (ctx->pc == 0x42A7B4u) {
        ctx->pc = 0x42A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A7B0u;
        // 0x42a7b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A7B8u;
        goto label_42a7b8;
    }
    ctx->pc = 0x42A7B0u;
    {
        const bool branch_taken_0x42a7b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x42A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A7B0u;
        // 0x42a7b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a7b0) {
            ctx->pc = 0x42A7D8u;
            goto label_42a7d8;
        }
    }
    ctx->pc = 0x42A7B8u;
label_42a7b8:
    // 0x42a7b8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_42a7bc:
    if (ctx->pc == 0x42A7BCu) {
        ctx->pc = 0x42A7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A7B8u;
        // 0x42a7bc: 0xae040048  sw          $a0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A7C0u;
        goto label_42a7c0;
    }
    ctx->pc = 0x42A7B8u;
    {
        const bool branch_taken_0x42a7b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x42A7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A7B8u;
        // 0x42a7bc: 0xae040048  sw          $a0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a7b8) {
            ctx->pc = 0x42A7C8u;
            goto label_42a7c8;
        }
    }
    ctx->pc = 0x42A7C0u;
label_42a7c0:
    // 0x42a7c0: 0x10000006  b           . + 4 + (0x6 << 2)
label_42a7c4:
    if (ctx->pc == 0x42A7C4u) {
        ctx->pc = 0x42A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A7C0u;
        // 0x42a7c4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A7C8u;
        goto label_42a7c8;
    }
    ctx->pc = 0x42A7C0u;
    {
        const bool branch_taken_0x42a7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A7C0u;
        // 0x42a7c4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a7c0) {
            ctx->pc = 0x42A7DCu;
            goto label_42a7dc;
        }
    }
    ctx->pc = 0x42A7C8u;
label_42a7c8:
    // 0x42a7c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x42a7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42a7cc:
    // 0x42a7cc: 0xc0d582a  jal         func_3560A8
label_42a7d0:
    if (ctx->pc == 0x42A7D0u) {
        ctx->pc = 0x42A7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A7CCu;
        // 0x42a7d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A7D4u;
        goto label_42a7d4;
    }
    ctx->pc = 0x42A7CCu;
    SET_GPR_U32(ctx, 31, 0x42A7D4u);
    ctx->pc = 0x42A7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A7CCu;
    // 0x42a7d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3560A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3560A8u, 0x42A7CCu, 0x42A7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A7D4u;
label_42a7d4:
    // 0x42a7d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42a7d8:
    // 0x42a7d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x42a7d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42a7dc:
    // 0x42a7dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42a7dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42a7e0:
    // 0x42a7e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42a7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_42a7e4:
    // 0x42a7e4: 0x3e00008  jr          $ra
label_42a7e8:
    if (ctx->pc == 0x42A7E8u) {
        ctx->pc = 0x42A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A7E4u;
        // 0x42a7e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A7ECu;
        goto label_42a7ec;
    }
    ctx->pc = 0x42A7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A7E4u;
        // 0x42a7e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42A7ECu;
label_42a7ec:
    // 0x42a7ec: 0x0  nop
    ctx->pc = 0x42a7ecu;
    // NOP
    ctx->pc = 0x42a7f0u;
}
