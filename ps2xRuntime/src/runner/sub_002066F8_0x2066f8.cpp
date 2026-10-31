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

// Function: sub_002066F8
// Address: 0x2066f8 - 0x2067d8
void sub_002066F8_0x2066f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002066F8_0x2066f8");
#endif

    switch (ctx->pc) {
        case 0x2066f8u: goto label_2066f8;
        case 0x2066fcu: goto label_2066fc;
        case 0x206700u: goto label_206700;
        case 0x206704u: goto label_206704;
        case 0x206708u: goto label_206708;
        case 0x20670cu: goto label_20670c;
        case 0x206710u: goto label_206710;
        case 0x206714u: goto label_206714;
        case 0x206718u: goto label_206718;
        case 0x20671cu: goto label_20671c;
        case 0x206720u: goto label_206720;
        case 0x206724u: goto label_206724;
        case 0x206728u: goto label_206728;
        case 0x20672cu: goto label_20672c;
        case 0x206730u: goto label_206730;
        case 0x206734u: goto label_206734;
        case 0x206738u: goto label_206738;
        case 0x20673cu: goto label_20673c;
        case 0x206740u: goto label_206740;
        case 0x206744u: goto label_206744;
        case 0x206748u: goto label_206748;
        case 0x20674cu: goto label_20674c;
        case 0x206750u: goto label_206750;
        case 0x206754u: goto label_206754;
        case 0x206758u: goto label_206758;
        case 0x20675cu: goto label_20675c;
        case 0x206760u: goto label_206760;
        case 0x206764u: goto label_206764;
        case 0x206768u: goto label_206768;
        case 0x20676cu: goto label_20676c;
        case 0x206770u: goto label_206770;
        case 0x206774u: goto label_206774;
        case 0x206778u: goto label_206778;
        case 0x20677cu: goto label_20677c;
        case 0x206780u: goto label_206780;
        case 0x206784u: goto label_206784;
        case 0x206788u: goto label_206788;
        case 0x20678cu: goto label_20678c;
        case 0x206790u: goto label_206790;
        case 0x206794u: goto label_206794;
        case 0x206798u: goto label_206798;
        case 0x20679cu: goto label_20679c;
        case 0x2067a0u: goto label_2067a0;
        case 0x2067a4u: goto label_2067a4;
        case 0x2067a8u: goto label_2067a8;
        case 0x2067acu: goto label_2067ac;
        case 0x2067b0u: goto label_2067b0;
        case 0x2067b4u: goto label_2067b4;
        case 0x2067b8u: goto label_2067b8;
        case 0x2067bcu: goto label_2067bc;
        case 0x2067c0u: goto label_2067c0;
        case 0x2067c4u: goto label_2067c4;
        case 0x2067c8u: goto label_2067c8;
        case 0x2067ccu: goto label_2067cc;
        case 0x2067d0u: goto label_2067d0;
        case 0x2067d4u: goto label_2067d4;
        default: break;
    }

    ctx->pc = 0x2066f8u;

label_2066f8:
    // 0x2066f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2066f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2066fc:
    // 0x2066fc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2066fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_206700:
    // 0x206700: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x206700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_206704:
    // 0x206704: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x206704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_206708:
    // 0x206708: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x206708u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_20670c:
    // 0x20670c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20670cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_206710:
    // 0x206710: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x206710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_206714:
    // 0x206714: 0x2442de08  addiu       $v0, $v0, -0x21F8
    ctx->pc = 0x206714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958600));
label_206718:
    // 0x206718: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x206718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_20671c:
    // 0x20671c: 0x2463de30  addiu       $v1, $v1, -0x21D0
    ctx->pc = 0x20671cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958640));
label_206720:
    // 0x206720: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_206724:
    // 0x206724: 0x24c6de60  addiu       $a2, $a2, -0x21A0
    ctx->pc = 0x206724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958688));
label_206728:
    // 0x206728: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x206728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_20672c:
    // 0x20672c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20672cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_206730:
    // 0x206730: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x206730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
label_206734:
    // 0x206734: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x206734u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_206738:
    // 0x206738: 0xc081b18  jal         func_206C60
label_20673c:
    if (ctx->pc == 0x20673Cu) {
        ctx->pc = 0x20673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206738u;
        // 0x20673c: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206740u;
        goto label_206740;
    }
    ctx->pc = 0x206738u;
    SET_GPR_U32(ctx, 31, 0x206740u);
    ctx->pc = 0x20673Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206738u;
    // 0x20673c: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206C60u, 0x206738u, 0x206740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206740u;
label_206740:
    // 0x206740: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x206740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_206744:
    // 0x206744: 0x2442cc88  addiu       $v0, $v0, -0x3378
    ctx->pc = 0x206744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954120));
label_206748:
    // 0x206748: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x206748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_20674c:
    // 0x20674c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x20674cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_206750:
    // 0x206750: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_206754:
    if (ctx->pc == 0x206754u) {
        ctx->pc = 0x206754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206750u;
        // 0x206754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206758u;
        goto label_206758;
    }
    ctx->pc = 0x206750u;
    {
        const bool branch_taken_0x206750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x206754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206750u;
        // 0x206754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206750) {
            ctx->pc = 0x206780u;
            goto label_206780;
        }
    }
    ctx->pc = 0x206758u;
label_206758:
    // 0x206758: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x206758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20675c:
    // 0x20675c: 0xc1376d6  jal         func_4DDB58
label_206760:
    if (ctx->pc == 0x206760u) {
        ctx->pc = 0x206760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20675Cu;
        // 0x206760: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206764u;
        goto label_206764;
    }
    ctx->pc = 0x20675Cu;
    SET_GPR_U32(ctx, 31, 0x206764u);
    ctx->pc = 0x206760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20675Cu;
    // 0x206760: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDB58u, 0x20675Cu, 0x206764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206764u;
label_206764:
    // 0x206764: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x206764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_206768:
    // 0x206768: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x206768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_20676c:
    // 0x20676c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x20676cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_206770:
    // 0x206770: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x206770u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_206774:
    // 0x206774: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x206774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_206778:
    // 0x206778: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x206778u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
label_20677c:
    // 0x20677c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x20677cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_206780:
    // 0x206780: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x206780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_206784:
    // 0x206784: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_206788:
    if (ctx->pc == 0x206788u) {
        ctx->pc = 0x206788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206784u;
        // 0x206788: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20678Cu;
        goto label_20678c;
    }
    ctx->pc = 0x206784u;
    {
        const bool branch_taken_0x206784 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x206788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206784u;
        // 0x206788: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206784) {
            ctx->pc = 0x2067B0u;
            goto label_2067b0;
        }
    }
    ctx->pc = 0x20678Cu;
label_20678c:
    // 0x20678c: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x20678cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_206790:
    // 0x206790: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x206790u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_206794:
    // 0x206794: 0x24c688e8  addiu       $a2, $a2, -0x7718
    ctx->pc = 0x206794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936808));
label_206798:
    // 0x206798: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x206798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_20679c:
    // 0x20679c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x20679cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2067a0:
    // 0x2067a0: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x2067a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_2067a4:
    // 0x2067a4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x2067a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_2067a8:
    // 0x2067a8: 0x60f809  jalr        $v1
label_2067ac:
    if (ctx->pc == 0x2067ACu) {
        ctx->pc = 0x2067ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2067A8u;
        // 0x2067ac: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2067B0u;
        goto label_2067b0;
    }
    ctx->pc = 0x2067A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2067B0u);
        ctx->pc = 0x2067ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2067A8u;
        // 0x2067ac: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2067A8u, 0x2067B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2067B0u;
label_2067b0:
    // 0x2067b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2067b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2067b4:
    // 0x2067b4: 0xc06a39e  jal         func_1A8E78
label_2067b8:
    if (ctx->pc == 0x2067B8u) {
        ctx->pc = 0x2067B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2067B4u;
        // 0x2067b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2067BCu;
        goto label_2067bc;
    }
    ctx->pc = 0x2067B4u;
    SET_GPR_U32(ctx, 31, 0x2067BCu);
    ctx->pc = 0x2067B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2067B4u;
    // 0x2067b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x2067B4u, 0x2067BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2067BCu;
label_2067bc:
    // 0x2067bc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2067bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2067c0:
    // 0x2067c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2067c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2067c4:
    // 0x2067c4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2067c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2067c8:
    // 0x2067c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2067c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2067cc:
    // 0x2067cc: 0x3e00008  jr          $ra
label_2067d0:
    if (ctx->pc == 0x2067D0u) {
        ctx->pc = 0x2067D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2067CCu;
        // 0x2067d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2067D4u;
        goto label_2067d4;
    }
    ctx->pc = 0x2067CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2067D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2067CCu;
        // 0x2067d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2067CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2067D4u;
label_2067d4:
    // 0x2067d4: 0x0  nop
    ctx->pc = 0x2067d4u;
    // NOP
    ctx->pc = 0x2067d8u;
}
