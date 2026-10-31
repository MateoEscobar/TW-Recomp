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

// Function: sub_003D8730
// Address: 0x3d8730 - 0x3d8818
void sub_003D8730_0x3d8730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8730_0x3d8730");
#endif

    switch (ctx->pc) {
        case 0x3d8730u: goto label_3d8730;
        case 0x3d8734u: goto label_3d8734;
        case 0x3d8738u: goto label_3d8738;
        case 0x3d873cu: goto label_3d873c;
        case 0x3d8740u: goto label_3d8740;
        case 0x3d8744u: goto label_3d8744;
        case 0x3d8748u: goto label_3d8748;
        case 0x3d874cu: goto label_3d874c;
        case 0x3d8750u: goto label_3d8750;
        case 0x3d8754u: goto label_3d8754;
        case 0x3d8758u: goto label_3d8758;
        case 0x3d875cu: goto label_3d875c;
        case 0x3d8760u: goto label_3d8760;
        case 0x3d8764u: goto label_3d8764;
        case 0x3d8768u: goto label_3d8768;
        case 0x3d876cu: goto label_3d876c;
        case 0x3d8770u: goto label_3d8770;
        case 0x3d8774u: goto label_3d8774;
        case 0x3d8778u: goto label_3d8778;
        case 0x3d877cu: goto label_3d877c;
        case 0x3d8780u: goto label_3d8780;
        case 0x3d8784u: goto label_3d8784;
        case 0x3d8788u: goto label_3d8788;
        case 0x3d878cu: goto label_3d878c;
        case 0x3d8790u: goto label_3d8790;
        case 0x3d8794u: goto label_3d8794;
        case 0x3d8798u: goto label_3d8798;
        case 0x3d879cu: goto label_3d879c;
        case 0x3d87a0u: goto label_3d87a0;
        case 0x3d87a4u: goto label_3d87a4;
        case 0x3d87a8u: goto label_3d87a8;
        case 0x3d87acu: goto label_3d87ac;
        case 0x3d87b0u: goto label_3d87b0;
        case 0x3d87b4u: goto label_3d87b4;
        case 0x3d87b8u: goto label_3d87b8;
        case 0x3d87bcu: goto label_3d87bc;
        case 0x3d87c0u: goto label_3d87c0;
        case 0x3d87c4u: goto label_3d87c4;
        case 0x3d87c8u: goto label_3d87c8;
        case 0x3d87ccu: goto label_3d87cc;
        case 0x3d87d0u: goto label_3d87d0;
        case 0x3d87d4u: goto label_3d87d4;
        case 0x3d87d8u: goto label_3d87d8;
        case 0x3d87dcu: goto label_3d87dc;
        case 0x3d87e0u: goto label_3d87e0;
        case 0x3d87e4u: goto label_3d87e4;
        case 0x3d87e8u: goto label_3d87e8;
        case 0x3d87ecu: goto label_3d87ec;
        case 0x3d87f0u: goto label_3d87f0;
        case 0x3d87f4u: goto label_3d87f4;
        case 0x3d87f8u: goto label_3d87f8;
        case 0x3d87fcu: goto label_3d87fc;
        case 0x3d8800u: goto label_3d8800;
        case 0x3d8804u: goto label_3d8804;
        case 0x3d8808u: goto label_3d8808;
        case 0x3d880cu: goto label_3d880c;
        case 0x3d8810u: goto label_3d8810;
        case 0x3d8814u: goto label_3d8814;
        default: break;
    }

    ctx->pc = 0x3d8730u;

label_3d8730:
    // 0x3d8730: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x3d8730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
label_3d8734:
    // 0x3d8734: 0x7fb00430  sq          $s0, 0x430($sp)
    ctx->pc = 0x3d8734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 16));
label_3d8738:
    // 0x3d8738: 0x7fb10420  sq          $s1, 0x420($sp)
    ctx->pc = 0x3d8738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 17));
label_3d873c:
    // 0x3d873c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d873cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d8740:
    // 0x3d8740: 0xffbf0410  sd          $ra, 0x410($sp)
    ctx->pc = 0x3d8740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
label_3d8744:
    // 0x3d8744: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d8744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d8748:
    // 0x3d8748: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d8748u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d874c:
    // 0x3d874c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d874cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d8750:
    // 0x3d8750: 0x40f809  jalr        $v0
label_3d8754:
    if (ctx->pc == 0x3D8754u) {
        ctx->pc = 0x3D8754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8750u;
        // 0x3d8754: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8758u;
        goto label_3d8758;
    }
    ctx->pc = 0x3D8750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D8758u);
        ctx->pc = 0x3D8754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8750u;
        // 0x3d8754: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8750u, 0x3D8758u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D8758u;
label_3d8758:
    // 0x3d8758: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d8758u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d875c:
    // 0x3d875c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d875cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d8760:
    // 0x3d8760: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d8760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d8764:
    // 0x3d8764: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3d8764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3d8768:
    // 0x3d8768: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d8768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3d876c:
    // 0x3d876c: 0x0  nop
    ctx->pc = 0x3d876cu;
    // NOP
label_3d8770:
    // 0x3d8770: 0x0  nop
    ctx->pc = 0x3d8770u;
    // NOP
label_3d8774:
    // 0x3d8774: 0x0  nop
    ctx->pc = 0x3d8774u;
    // NOP
label_3d8778:
    // 0x3d8778: 0x0  nop
    ctx->pc = 0x3d8778u;
    // NOP
label_3d877c:
    // 0x3d877c: 0x0  nop
    ctx->pc = 0x3d877cu;
    // NOP
label_3d8780:
    // 0x3d8780: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3d8784:
    if (ctx->pc == 0x3D8784u) {
        ctx->pc = 0x3D8784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8780u;
        // 0x3d8784: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8788u;
        goto label_3d8788;
    }
    ctx->pc = 0x3D8780u;
    {
        const bool branch_taken_0x3d8780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D8784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8780u;
        // 0x3d8784: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8780) {
            ctx->pc = 0x3D8770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d8770;
        }
    }
    ctx->pc = 0x3D8788u;
label_3d8788:
    // 0x3d8788: 0xc138ddc  jal         func_4E3770
label_3d878c:
    if (ctx->pc == 0x3D878Cu) {
        ctx->pc = 0x3D8790u;
        goto label_3d8790;
    }
    ctx->pc = 0x3D8788u;
    SET_GPR_U32(ctx, 31, 0x3D8790u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3D8788u, 0x3D8790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8790u;
label_3d8790:
    // 0x3d8790: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3d8790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_3d8794:
    // 0x3d8794: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d8794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d8798:
    // 0x3d8798: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d8798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d879c:
    // 0x3d879c: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3d879cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3d87a0:
    // 0x3d87a0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3d87a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3d87a4:
    // 0x3d87a4: 0xc0cd4ee  jal         func_3353B8
label_3d87a8:
    if (ctx->pc == 0x3D87A8u) {
        ctx->pc = 0x3D87A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D87A4u;
        // 0x3d87a8: 0xe600008c  swc1        $f0, 0x8C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D87ACu;
        goto label_3d87ac;
    }
    ctx->pc = 0x3D87A4u;
    SET_GPR_U32(ctx, 31, 0x3D87ACu);
    ctx->pc = 0x3D87A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D87A4u;
    // 0x3d87a8: 0xe600008c  swc1        $f0, 0x8C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D87A4u, 0x3D87ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D87ACu;
label_3d87ac:
    // 0x3d87ac: 0x24450014  addiu       $a1, $v0, 0x14
    ctx->pc = 0x3d87acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_3d87b0:
    // 0x3d87b0: 0xc0e858c  jal         func_3A1630
label_3d87b4:
    if (ctx->pc == 0x3D87B4u) {
        ctx->pc = 0x3D87B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D87B0u;
        // 0x3d87b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D87B8u;
        goto label_3d87b8;
    }
    ctx->pc = 0x3D87B0u;
    SET_GPR_U32(ctx, 31, 0x3D87B8u);
    ctx->pc = 0x3D87B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D87B0u;
    // 0x3d87b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D87B0u, 0x3D87B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D87B8u;
label_3d87b8:
    // 0x3d87b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d87b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d87bc:
    // 0x3d87bc: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_3d87c0:
    if (ctx->pc == 0x3D87C0u) {
        ctx->pc = 0x3D87C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D87BCu;
        // 0x3d87c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D87C4u;
        goto label_3d87c4;
    }
    ctx->pc = 0x3D87BCu;
    {
        const bool branch_taken_0x3d87bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d87bc) {
            ctx->pc = 0x3D87C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D87BCu;
            // 0x3d87c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D87D0u;
            goto label_3d87d0;
        }
    }
    ctx->pc = 0x3D87C4u;
label_3d87c4:
    // 0x3d87c4: 0x3c0227c5  lui         $v0, 0x27C5
    ctx->pc = 0x3d87c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10181 << 16));
label_3d87c8:
    // 0x3d87c8: 0x10000004  b           . + 4 + (0x4 << 2)
label_3d87cc:
    if (ctx->pc == 0x3D87CCu) {
        ctx->pc = 0x3D87CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D87C8u;
        // 0x3d87cc: 0x344284e4  ori         $v0, $v0, 0x84E4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34020);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D87D0u;
        goto label_3d87d0;
    }
    ctx->pc = 0x3D87C8u;
    {
        const bool branch_taken_0x3d87c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D87CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D87C8u;
        // 0x3d87cc: 0x344284e4  ori         $v0, $v0, 0x84E4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34020);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d87c8) {
            ctx->pc = 0x3D87DCu;
            goto label_3d87dc;
        }
    }
    ctx->pc = 0x3D87D0u;
label_3d87d0:
    // 0x3d87d0: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
label_3d87d4:
    if (ctx->pc == 0x3D87D4u) {
        ctx->pc = 0x3D87D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D87D0u;
        // 0x3d87d4: 0x7bb00430  lq          $s0, 0x430($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D87D8u;
        goto label_3d87d8;
    }
    ctx->pc = 0x3D87D0u;
    {
        const bool branch_taken_0x3d87d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d87d0) {
            ctx->pc = 0x3D87D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D87D0u;
            // 0x3d87d4: 0x7bb00430  lq          $s0, 0x430($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8804u;
            goto label_3d8804;
        }
    }
    ctx->pc = 0x3D87D8u;
label_3d87d8:
    // 0x3d87d8: 0x240200e4  addiu       $v0, $zero, 0xE4
    ctx->pc = 0x3d87d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
label_3d87dc:
    // 0x3d87dc: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x3d87dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_3d87e0:
    // 0x3d87e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d87e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d87e4:
    // 0x3d87e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d87e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3d87e8:
    // 0x3d87e8: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x3d87e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_3d87ec:
    // 0x3d87ec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3d87ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d87f0:
    // 0x3d87f0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3d87f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_3d87f4:
    // 0x3d87f4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3d87f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3d87f8:
    // 0x3d87f8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3d87f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d87fc:
    // 0x3d87fc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3d87fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3d8800:
    // 0x3d8800: 0x7bb00430  lq          $s0, 0x430($sp)
    ctx->pc = 0x3d8800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3d8804:
    // 0x3d8804: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d8804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d8808:
    // 0x3d8808: 0x7bb10420  lq          $s1, 0x420($sp)
    ctx->pc = 0x3d8808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3d880c:
    // 0x3d880c: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x3d880cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_3d8810:
    // 0x3d8810: 0x3e00008  jr          $ra
label_3d8814:
    if (ctx->pc == 0x3D8814u) {
        ctx->pc = 0x3D8814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8810u;
        // 0x3d8814: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8818u;
        goto label_fallthrough_0x3d8810;
    }
    ctx->pc = 0x3D8810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8810u;
        // 0x3d8814: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d8810:
    ctx->pc = 0x3D8818u;
}
