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

// Function: sub_001D7700
// Address: 0x1d7700 - 0x1d7958
void sub_001D7700_0x1d7700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7700_0x1d7700");
#endif

    switch (ctx->pc) {
        case 0x1d7700u: goto label_1d7700;
        case 0x1d7704u: goto label_1d7704;
        case 0x1d7708u: goto label_1d7708;
        case 0x1d770cu: goto label_1d770c;
        case 0x1d7710u: goto label_1d7710;
        case 0x1d7714u: goto label_1d7714;
        case 0x1d7718u: goto label_1d7718;
        case 0x1d771cu: goto label_1d771c;
        case 0x1d7720u: goto label_1d7720;
        case 0x1d7724u: goto label_1d7724;
        case 0x1d7728u: goto label_1d7728;
        case 0x1d772cu: goto label_1d772c;
        case 0x1d7730u: goto label_1d7730;
        case 0x1d7734u: goto label_1d7734;
        case 0x1d7738u: goto label_1d7738;
        case 0x1d773cu: goto label_1d773c;
        case 0x1d7740u: goto label_1d7740;
        case 0x1d7744u: goto label_1d7744;
        case 0x1d7748u: goto label_1d7748;
        case 0x1d774cu: goto label_1d774c;
        case 0x1d7750u: goto label_1d7750;
        case 0x1d7754u: goto label_1d7754;
        case 0x1d7758u: goto label_1d7758;
        case 0x1d775cu: goto label_1d775c;
        case 0x1d7760u: goto label_1d7760;
        case 0x1d7764u: goto label_1d7764;
        case 0x1d7768u: goto label_1d7768;
        case 0x1d776cu: goto label_1d776c;
        case 0x1d7770u: goto label_1d7770;
        case 0x1d7774u: goto label_1d7774;
        case 0x1d7778u: goto label_1d7778;
        case 0x1d777cu: goto label_1d777c;
        case 0x1d7780u: goto label_1d7780;
        case 0x1d7784u: goto label_1d7784;
        case 0x1d7788u: goto label_1d7788;
        case 0x1d778cu: goto label_1d778c;
        case 0x1d7790u: goto label_1d7790;
        case 0x1d7794u: goto label_1d7794;
        case 0x1d7798u: goto label_1d7798;
        case 0x1d779cu: goto label_1d779c;
        case 0x1d77a0u: goto label_1d77a0;
        case 0x1d77a4u: goto label_1d77a4;
        case 0x1d77a8u: goto label_1d77a8;
        case 0x1d77acu: goto label_1d77ac;
        case 0x1d77b0u: goto label_1d77b0;
        case 0x1d77b4u: goto label_1d77b4;
        case 0x1d77b8u: goto label_1d77b8;
        case 0x1d77bcu: goto label_1d77bc;
        case 0x1d77c0u: goto label_1d77c0;
        case 0x1d77c4u: goto label_1d77c4;
        case 0x1d77c8u: goto label_1d77c8;
        case 0x1d77ccu: goto label_1d77cc;
        case 0x1d77d0u: goto label_1d77d0;
        case 0x1d77d4u: goto label_1d77d4;
        case 0x1d77d8u: goto label_1d77d8;
        case 0x1d77dcu: goto label_1d77dc;
        case 0x1d77e0u: goto label_1d77e0;
        case 0x1d77e4u: goto label_1d77e4;
        case 0x1d77e8u: goto label_1d77e8;
        case 0x1d77ecu: goto label_1d77ec;
        case 0x1d77f0u: goto label_1d77f0;
        case 0x1d77f4u: goto label_1d77f4;
        case 0x1d77f8u: goto label_1d77f8;
        case 0x1d77fcu: goto label_1d77fc;
        case 0x1d7800u: goto label_1d7800;
        case 0x1d7804u: goto label_1d7804;
        case 0x1d7808u: goto label_1d7808;
        case 0x1d780cu: goto label_1d780c;
        case 0x1d7810u: goto label_1d7810;
        case 0x1d7814u: goto label_1d7814;
        case 0x1d7818u: goto label_1d7818;
        case 0x1d781cu: goto label_1d781c;
        case 0x1d7820u: goto label_1d7820;
        case 0x1d7824u: goto label_1d7824;
        case 0x1d7828u: goto label_1d7828;
        case 0x1d782cu: goto label_1d782c;
        case 0x1d7830u: goto label_1d7830;
        case 0x1d7834u: goto label_1d7834;
        case 0x1d7838u: goto label_1d7838;
        case 0x1d783cu: goto label_1d783c;
        case 0x1d7840u: goto label_1d7840;
        case 0x1d7844u: goto label_1d7844;
        case 0x1d7848u: goto label_1d7848;
        case 0x1d784cu: goto label_1d784c;
        case 0x1d7850u: goto label_1d7850;
        case 0x1d7854u: goto label_1d7854;
        case 0x1d7858u: goto label_1d7858;
        case 0x1d785cu: goto label_1d785c;
        case 0x1d7860u: goto label_1d7860;
        case 0x1d7864u: goto label_1d7864;
        case 0x1d7868u: goto label_1d7868;
        case 0x1d786cu: goto label_1d786c;
        case 0x1d7870u: goto label_1d7870;
        case 0x1d7874u: goto label_1d7874;
        case 0x1d7878u: goto label_1d7878;
        case 0x1d787cu: goto label_1d787c;
        case 0x1d7880u: goto label_1d7880;
        case 0x1d7884u: goto label_1d7884;
        case 0x1d7888u: goto label_1d7888;
        case 0x1d788cu: goto label_1d788c;
        case 0x1d7890u: goto label_1d7890;
        case 0x1d7894u: goto label_1d7894;
        case 0x1d7898u: goto label_1d7898;
        case 0x1d789cu: goto label_1d789c;
        case 0x1d78a0u: goto label_1d78a0;
        case 0x1d78a4u: goto label_1d78a4;
        case 0x1d78a8u: goto label_1d78a8;
        case 0x1d78acu: goto label_1d78ac;
        case 0x1d78b0u: goto label_1d78b0;
        case 0x1d78b4u: goto label_1d78b4;
        case 0x1d78b8u: goto label_1d78b8;
        case 0x1d78bcu: goto label_1d78bc;
        case 0x1d78c0u: goto label_1d78c0;
        case 0x1d78c4u: goto label_1d78c4;
        case 0x1d78c8u: goto label_1d78c8;
        case 0x1d78ccu: goto label_1d78cc;
        case 0x1d78d0u: goto label_1d78d0;
        case 0x1d78d4u: goto label_1d78d4;
        case 0x1d78d8u: goto label_1d78d8;
        case 0x1d78dcu: goto label_1d78dc;
        case 0x1d78e0u: goto label_1d78e0;
        case 0x1d78e4u: goto label_1d78e4;
        case 0x1d78e8u: goto label_1d78e8;
        case 0x1d78ecu: goto label_1d78ec;
        case 0x1d78f0u: goto label_1d78f0;
        case 0x1d78f4u: goto label_1d78f4;
        case 0x1d78f8u: goto label_1d78f8;
        case 0x1d78fcu: goto label_1d78fc;
        case 0x1d7900u: goto label_1d7900;
        case 0x1d7904u: goto label_1d7904;
        case 0x1d7908u: goto label_1d7908;
        case 0x1d790cu: goto label_1d790c;
        case 0x1d7910u: goto label_1d7910;
        case 0x1d7914u: goto label_1d7914;
        case 0x1d7918u: goto label_1d7918;
        case 0x1d791cu: goto label_1d791c;
        case 0x1d7920u: goto label_1d7920;
        case 0x1d7924u: goto label_1d7924;
        case 0x1d7928u: goto label_1d7928;
        case 0x1d792cu: goto label_1d792c;
        case 0x1d7930u: goto label_1d7930;
        case 0x1d7934u: goto label_1d7934;
        case 0x1d7938u: goto label_1d7938;
        case 0x1d793cu: goto label_1d793c;
        case 0x1d7940u: goto label_1d7940;
        case 0x1d7944u: goto label_1d7944;
        case 0x1d7948u: goto label_1d7948;
        case 0x1d794cu: goto label_1d794c;
        case 0x1d7950u: goto label_1d7950;
        case 0x1d7954u: goto label_1d7954;
        default: break;
    }

    ctx->pc = 0x1d7700u;

label_1d7700:
    // 0x1d7700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d7700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1d7704:
    // 0x1d7704: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d7704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d7708:
    // 0x1d7708: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d7708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d770c:
    // 0x1d770c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1d770cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1d7710:
    // 0x1d7710: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d7710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d7714:
    // 0x1d7714: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d7714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1d7718:
    // 0x1d7718: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1d7718u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1d771c:
    // 0x1d771c: 0x14a20041  bne         $a1, $v0, . + 4 + (0x41 << 2)
label_1d7720:
    if (ctx->pc == 0x1D7720u) {
        ctx->pc = 0x1D7720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D771Cu;
        // 0x1d7720: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7724u;
        goto label_1d7724;
    }
    ctx->pc = 0x1D771Cu;
    {
        const bool branch_taken_0x1d771c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D7720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D771Cu;
        // 0x1d7720: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d771c) {
            ctx->pc = 0x1D7824u;
            goto label_1d7824;
        }
    }
    ctx->pc = 0x1D7724u;
label_1d7724:
    // 0x1d7724: 0xc6200630  lwc1        $f0, 0x630($s1)
    ctx->pc = 0x1d7724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d7728:
    // 0x1d7728: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1d7728u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d772c:
    // 0x1d772c: 0x0  nop
    ctx->pc = 0x1d772cu;
    // NOP
label_1d7730:
    // 0x1d7730: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_1d7734:
    if (ctx->pc == 0x1D7734u) {
        ctx->pc = 0x1D7734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7730u;
        // 0x1d7734: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7738u;
        goto label_1d7738;
    }
    ctx->pc = 0x1D7730u;
    {
        const bool branch_taken_0x1d7730 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D7734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7730u;
        // 0x1d7734: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7730) {
            ctx->pc = 0x1D7774u;
            goto label_1d7774;
        }
    }
    ctx->pc = 0x1D7738u;
label_1d7738:
    // 0x1d7738: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1d7738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1d773c:
    // 0x1d773c: 0xc04444c  jal         func_111130
label_1d7740:
    if (ctx->pc == 0x1D7740u) {
        ctx->pc = 0x1D7740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D773Cu;
        // 0x1d7740: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7744u;
        goto label_1d7744;
    }
    ctx->pc = 0x1D773Cu;
    SET_GPR_U32(ctx, 31, 0x1D7744u);
    ctx->pc = 0x1D7740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D773Cu;
    // 0x1d7740: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1D773Cu, 0x1D7744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7744u;
label_1d7744:
    // 0x1d7744: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1d7744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1d7748:
    // 0x1d7748: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d7748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d774c:
    // 0x1d774c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d774cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7750:
    // 0x1d7750: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d7750u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7754:
    // 0x1d7754: 0xc043f36  jal         func_10FCD8
label_1d7758:
    if (ctx->pc == 0x1D7758u) {
        ctx->pc = 0x1D7758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7754u;
        // 0x1d7758: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D775Cu;
        goto label_1d775c;
    }
    ctx->pc = 0x1D7754u;
    SET_GPR_U32(ctx, 31, 0x1D775Cu);
    ctx->pc = 0x1D7758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7754u;
    // 0x1d7758: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1D7754u, 0x1D775Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D775Cu;
label_1d775c:
    // 0x1d775c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d775cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d7760:
    // 0x1d7760: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d7760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d7764:
    // 0x1d7764: 0x8c62ecec  lw          $v0, -0x1314($v1)
    ctx->pc = 0x1d7764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962412)));
label_1d7768:
    // 0x1d7768: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1d7768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d776c:
    // 0x1d776c: 0x1000000e  b           . + 4 + (0xE << 2)
label_1d7770:
    if (ctx->pc == 0x1D7770u) {
        ctx->pc = 0x1D7770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D776Cu;
        // 0x1d7770: 0xac4445cc  sw          $a0, 0x45CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17868), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7774u;
        goto label_1d7774;
    }
    ctx->pc = 0x1D776Cu;
    {
        const bool branch_taken_0x1d776c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D776Cu;
        // 0x1d7770: 0xac4445cc  sw          $a0, 0x45CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17868), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d776c) {
            ctx->pc = 0x1D77A8u;
            goto label_1d77a8;
        }
    }
    ctx->pc = 0x1D7774u;
label_1d7774:
    // 0x1d7774: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d7774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d7778:
    // 0x1d7778: 0xc04444c  jal         func_111130
label_1d777c:
    if (ctx->pc == 0x1D777Cu) {
        ctx->pc = 0x1D777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7778u;
        // 0x1d777c: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7780u;
        goto label_1d7780;
    }
    ctx->pc = 0x1D7778u;
    SET_GPR_U32(ctx, 31, 0x1D7780u);
    ctx->pc = 0x1D777Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7778u;
    // 0x1d777c: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1D7778u, 0x1D7780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7780u;
label_1d7780:
    // 0x1d7780: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1d7780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1d7784:
    // 0x1d7784: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d7784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d7788:
    // 0x1d7788: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d7788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d778c:
    // 0x1d778c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d778cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7790:
    // 0x1d7790: 0xc043f36  jal         func_10FCD8
label_1d7794:
    if (ctx->pc == 0x1D7794u) {
        ctx->pc = 0x1D7794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7790u;
        // 0x1d7794: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7798u;
        goto label_1d7798;
    }
    ctx->pc = 0x1D7790u;
    SET_GPR_U32(ctx, 31, 0x1D7798u);
    ctx->pc = 0x1D7794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7790u;
    // 0x1d7794: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1D7790u, 0x1D7798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7798u;
label_1d7798:
    // 0x1d7798: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d7798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d779c:
    // 0x1d779c: 0x8c62ecec  lw          $v0, -0x1314($v1)
    ctx->pc = 0x1d779cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962412)));
label_1d77a0:
    // 0x1d77a0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1d77a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d77a4:
    // 0x1d77a4: 0xac4045cc  sw          $zero, 0x45CC($v0)
    ctx->pc = 0x1d77a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17868), GPR_U32(ctx, 0));
label_1d77a8:
    // 0x1d77a8: 0xc6200630  lwc1        $f0, 0x630($s1)
    ctx->pc = 0x1d77a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d77ac:
    // 0x1d77ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d77acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d77b0:
    // 0x1d77b0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1d77b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_1d77b4:
    // 0x1d77b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d77b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1d77b8:
    // 0x1d77b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d77b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d77bc:
    // 0x1d77bc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d77bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d77c0:
    // 0x1d77c0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1d77c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d77c4:
    // 0x1d77c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d77c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1d77c8:
    // 0x1d77c8: 0x8c42ecfc  lw          $v0, -0x1304($v0)
    ctx->pc = 0x1d77c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962428)));
label_1d77cc:
    // 0x1d77cc: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x1d77ccu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
label_1d77d0:
    // 0x1d77d0: 0xe6200630  swc1        $f0, 0x630($s1)
    ctx->pc = 0x1d77d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1584), bits); }
label_1d77d4:
    // 0x1d77d4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1d77d8:
    if (ctx->pc == 0x1D77D8u) {
        ctx->pc = 0x1D77D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D77D4u;
        // 0x1d77d8: 0xac60ed08  sw          $zero, -0x12F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294962440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D77DCu;
        goto label_1d77dc;
    }
    ctx->pc = 0x1D77D4u;
    {
        const bool branch_taken_0x1d77d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D77D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D77D4u;
        // 0x1d77d8: 0xac60ed08  sw          $zero, -0x12F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294962440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d77d4) {
            ctx->pc = 0x1D77F0u;
            goto label_1d77f0;
        }
    }
    ctx->pc = 0x1D77DCu;
label_1d77dc:
    // 0x1d77dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d77dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d77e0:
    // 0x1d77e0: 0x0  nop
    ctx->pc = 0x1d77e0u;
    // NOP
label_1d77e4:
    // 0x1d77e4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1d77e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1d77e8:
    // 0x1d77e8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1d77ec:
    if (ctx->pc == 0x1D77ECu) {
        ctx->pc = 0x1D77ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D77E8u;
        // 0x1d77ec: 0x8ca4ecec  lw          $a0, -0x1314($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294962412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D77F0u;
        goto label_1d77f0;
    }
    ctx->pc = 0x1D77E8u;
    {
        const bool branch_taken_0x1d77e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D77ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D77E8u;
        // 0x1d77ec: 0x8ca4ecec  lw          $a0, -0x1314($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294962412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d77e8) {
            ctx->pc = 0x1D7810u;
            goto label_1d7810;
        }
    }
    ctx->pc = 0x1D77F0u;
label_1d77f0:
    // 0x1d77f0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1d77f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1d77f4:
    // 0x1d77f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d77f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d77f8:
    // 0x1d77f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d77f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1d77fc:
    // 0x1d77fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d77fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d7800:
    // 0x1d7800: 0x0  nop
    ctx->pc = 0x1d7800u;
    // NOP
label_1d7804:
    // 0x1d7804: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1d7804u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1d7808:
    // 0x1d7808: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1d7808u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1d780c:
    // 0x1d780c: 0x8ca4ecec  lw          $a0, -0x1314($a1)
    ctx->pc = 0x1d780cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294962412)));
label_1d7810:
    // 0x1d7810: 0x46006507  neg.s       $f20, $f12
    ctx->pc = 0x1d7810u;
    ctx->f[20] = FPU_NEG_S(ctx->f[12]);
label_1d7814:
    // 0x1d7814: 0xc076a8e  jal         func_1DAA38
label_1d7818:
    if (ctx->pc == 0x1D7818u) {
        ctx->pc = 0x1D7818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7814u;
        // 0x1d7818: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D781Cu;
        goto label_1d781c;
    }
    ctx->pc = 0x1D7814u;
    SET_GPR_U32(ctx, 31, 0x1D781Cu);
    ctx->pc = 0x1D7818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7814u;
    // 0x1d7818: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAA38u, 0x1D7814u, 0x1D781Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D781Cu;
label_1d781c:
    // 0x1d781c: 0x10000046  b           . + 4 + (0x46 << 2)
label_1d7820:
    if (ctx->pc == 0x1D7820u) {
        ctx->pc = 0x1D7820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D781Cu;
        // 0x1d7820: 0x8e220638  lw          $v0, 0x638($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1592)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7824u;
        goto label_1d7824;
    }
    ctx->pc = 0x1D781Cu;
    {
        const bool branch_taken_0x1d781c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D781Cu;
        // 0x1d7820: 0x8e220638  lw          $v0, 0x638($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d781c) {
            ctx->pc = 0x1D7938u;
            goto label_1d7938;
        }
    }
    ctx->pc = 0x1D7824u;
label_1d7824:
    // 0x1d7824: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d7824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d7828:
    // 0x1d7828: 0x14a20046  bne         $a1, $v0, . + 4 + (0x46 << 2)
label_1d782c:
    if (ctx->pc == 0x1D782Cu) {
        ctx->pc = 0x1D782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7828u;
        // 0x1d782c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7830u;
        goto label_1d7830;
    }
    ctx->pc = 0x1D7828u;
    {
        const bool branch_taken_0x1d7828 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7828u;
        // 0x1d782c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7828) {
            ctx->pc = 0x1D7944u;
            goto label_1d7944;
        }
    }
    ctx->pc = 0x1D7830u;
label_1d7830:
    // 0x1d7830: 0xc6210630  lwc1        $f1, 0x630($s1)
    ctx->pc = 0x1d7830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d7834:
    // 0x1d7834: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d7834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d7838:
    // 0x1d7838: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d7838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d783c:
    // 0x1d783c: 0x0  nop
    ctx->pc = 0x1d783cu;
    // NOP
label_1d7840:
    // 0x1d7840: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d7840u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d7844:
    // 0x1d7844: 0x0  nop
    ctx->pc = 0x1d7844u;
    // NOP
label_1d7848:
    // 0x1d7848: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_1d784c:
    if (ctx->pc == 0x1D784Cu) {
        ctx->pc = 0x1D784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7848u;
        // 0x1d784c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7850u;
        goto label_1d7850;
    }
    ctx->pc = 0x1D7848u;
    {
        const bool branch_taken_0x1d7848 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7848u;
        // 0x1d784c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7848) {
            ctx->pc = 0x1D788Cu;
            goto label_1d788c;
        }
    }
    ctx->pc = 0x1D7850u;
label_1d7850:
    // 0x1d7850: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1d7850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1d7854:
    // 0x1d7854: 0xc04444c  jal         func_111130
label_1d7858:
    if (ctx->pc == 0x1D7858u) {
        ctx->pc = 0x1D7858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7854u;
        // 0x1d7858: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D785Cu;
        goto label_1d785c;
    }
    ctx->pc = 0x1D7854u;
    SET_GPR_U32(ctx, 31, 0x1D785Cu);
    ctx->pc = 0x1D7858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7854u;
    // 0x1d7858: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1D7854u, 0x1D785Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D785Cu;
label_1d785c:
    // 0x1d785c: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1d785cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1d7860:
    // 0x1d7860: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d7860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d7864:
    // 0x1d7864: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d7864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7868:
    // 0x1d7868: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d7868u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d786c:
    // 0x1d786c: 0xc043f36  jal         func_10FCD8
label_1d7870:
    if (ctx->pc == 0x1D7870u) {
        ctx->pc = 0x1D7870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D786Cu;
        // 0x1d7870: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7874u;
        goto label_1d7874;
    }
    ctx->pc = 0x1D786Cu;
    SET_GPR_U32(ctx, 31, 0x1D7874u);
    ctx->pc = 0x1D7870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D786Cu;
    // 0x1d7870: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1D786Cu, 0x1D7874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7874u;
label_1d7874:
    // 0x1d7874: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d7874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d7878:
    // 0x1d7878: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d7878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d787c:
    // 0x1d787c: 0x8c62ecec  lw          $v0, -0x1314($v1)
    ctx->pc = 0x1d787cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962412)));
label_1d7880:
    // 0x1d7880: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1d7880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d7884:
    // 0x1d7884: 0x1000000e  b           . + 4 + (0xE << 2)
label_1d7888:
    if (ctx->pc == 0x1D7888u) {
        ctx->pc = 0x1D7888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7884u;
        // 0x1d7888: 0xac4445cc  sw          $a0, 0x45CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17868), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D788Cu;
        goto label_1d788c;
    }
    ctx->pc = 0x1D7884u;
    {
        const bool branch_taken_0x1d7884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7884u;
        // 0x1d7888: 0xac4445cc  sw          $a0, 0x45CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17868), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7884) {
            ctx->pc = 0x1D78C0u;
            goto label_1d78c0;
        }
    }
    ctx->pc = 0x1D788Cu;
label_1d788c:
    // 0x1d788c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d788cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d7890:
    // 0x1d7890: 0xc04444c  jal         func_111130
label_1d7894:
    if (ctx->pc == 0x1D7894u) {
        ctx->pc = 0x1D7894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7890u;
        // 0x1d7894: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7898u;
        goto label_1d7898;
    }
    ctx->pc = 0x1D7890u;
    SET_GPR_U32(ctx, 31, 0x1D7898u);
    ctx->pc = 0x1D7894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7890u;
    // 0x1d7894: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1D7890u, 0x1D7898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7898u;
label_1d7898:
    // 0x1d7898: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1d7898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1d789c:
    // 0x1d789c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d789cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d78a0:
    // 0x1d78a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d78a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d78a4:
    // 0x1d78a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d78a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d78a8:
    // 0x1d78a8: 0xc043f36  jal         func_10FCD8
label_1d78ac:
    if (ctx->pc == 0x1D78ACu) {
        ctx->pc = 0x1D78ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78A8u;
        // 0x1d78ac: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D78B0u;
        goto label_1d78b0;
    }
    ctx->pc = 0x1D78A8u;
    SET_GPR_U32(ctx, 31, 0x1D78B0u);
    ctx->pc = 0x1D78ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78A8u;
    // 0x1d78ac: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1D78A8u, 0x1D78B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78B0u;
label_1d78b0:
    // 0x1d78b0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d78b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d78b4:
    // 0x1d78b4: 0x8c62ecec  lw          $v0, -0x1314($v1)
    ctx->pc = 0x1d78b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962412)));
label_1d78b8:
    // 0x1d78b8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1d78b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d78bc:
    // 0x1d78bc: 0xac4045cc  sw          $zero, 0x45CC($v0)
    ctx->pc = 0x1d78bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17868), GPR_U32(ctx, 0));
label_1d78c0:
    // 0x1d78c0: 0xc6200630  lwc1        $f0, 0x630($s1)
    ctx->pc = 0x1d78c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d78c4:
    // 0x1d78c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d78c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d78c8:
    // 0x1d78c8: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1d78c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_1d78cc:
    // 0x1d78cc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d78ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1d78d0:
    // 0x1d78d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d78d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d78d4:
    // 0x1d78d4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d78d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d78d8:
    // 0x1d78d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d78d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d78dc:
    // 0x1d78dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d78dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d78e0:
    // 0x1d78e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d78e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d78e4:
    // 0x1d78e4: 0x8c42ecfc  lw          $v0, -0x1304($v0)
    ctx->pc = 0x1d78e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962428)));
label_1d78e8:
    // 0x1d78e8: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x1d78e8u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
label_1d78ec:
    // 0x1d78ec: 0xe6200630  swc1        $f0, 0x630($s1)
    ctx->pc = 0x1d78ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1584), bits); }
label_1d78f0:
    // 0x1d78f0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1d78f4:
    if (ctx->pc == 0x1D78F4u) {
        ctx->pc = 0x1D78F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78F0u;
        // 0x1d78f4: 0xac60ed0c  sw          $zero, -0x12F4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294962444), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D78F8u;
        goto label_1d78f8;
    }
    ctx->pc = 0x1D78F0u;
    {
        const bool branch_taken_0x1d78f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D78F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78F0u;
        // 0x1d78f4: 0xac60ed0c  sw          $zero, -0x12F4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294962444), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d78f0) {
            ctx->pc = 0x1D790Cu;
            goto label_1d790c;
        }
    }
    ctx->pc = 0x1D78F8u;
label_1d78f8:
    // 0x1d78f8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1d78f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1d78fc:
    // 0x1d78fc: 0x0  nop
    ctx->pc = 0x1d78fcu;
    // NOP
label_1d7900:
    // 0x1d7900: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1d7900u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_1d7904:
    // 0x1d7904: 0x10000009  b           . + 4 + (0x9 << 2)
label_1d7908:
    if (ctx->pc == 0x1D7908u) {
        ctx->pc = 0x1D7908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7904u;
        // 0x1d7908: 0x8ca4ecec  lw          $a0, -0x1314($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294962412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D790Cu;
        goto label_1d790c;
    }
    ctx->pc = 0x1D7904u;
    {
        const bool branch_taken_0x1d7904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7904u;
        // 0x1d7908: 0x8ca4ecec  lw          $a0, -0x1314($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294962412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7904) {
            ctx->pc = 0x1D792Cu;
            goto label_1d792c;
        }
    }
    ctx->pc = 0x1D790Cu;
label_1d790c:
    // 0x1d790c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1d790cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1d7910:
    // 0x1d7910: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d7910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d7914:
    // 0x1d7914: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d7914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1d7918:
    // 0x1d7918: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1d7918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1d791c:
    // 0x1d791c: 0x0  nop
    ctx->pc = 0x1d791cu;
    // NOP
label_1d7920:
    // 0x1d7920: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1d7920u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_1d7924:
    // 0x1d7924: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x1d7924u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_1d7928:
    // 0x1d7928: 0x8ca4ecec  lw          $a0, -0x1314($a1)
    ctx->pc = 0x1d7928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294962412)));
label_1d792c:
    // 0x1d792c: 0xc076a8e  jal         func_1DAA38
label_1d7930:
    if (ctx->pc == 0x1D7930u) {
        ctx->pc = 0x1D7930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D792Cu;
        // 0x1d7930: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7934u;
        goto label_1d7934;
    }
    ctx->pc = 0x1D792Cu;
    SET_GPR_U32(ctx, 31, 0x1D7934u);
    ctx->pc = 0x1D7930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D792Cu;
    // 0x1d7930: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAA38u, 0x1D792Cu, 0x1D7934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7934u;
label_1d7934:
    // 0x1d7934: 0x8e220638  lw          $v0, 0x638($s1)
    ctx->pc = 0x1d7934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1592)));
label_1d7938:
    // 0x1d7938: 0x40f809  jalr        $v0
label_1d793c:
    if (ctx->pc == 0x1D793Cu) {
        ctx->pc = 0x1D793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7938u;
        // 0x1d793c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7940u;
        goto label_1d7940;
    }
    ctx->pc = 0x1D7938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D7940u);
        ctx->pc = 0x1D793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7938u;
        // 0x1d793c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7938u, 0x1D7940u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D7940u;
label_1d7940:
    // 0x1d7940: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d7940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d7944:
    // 0x1d7944: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d7944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7948:
    // 0x1d7948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d794c:
    // 0x1d794c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1d794cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d7950:
    // 0x1d7950: 0x3e00008  jr          $ra
label_1d7954:
    if (ctx->pc == 0x1D7954u) {
        ctx->pc = 0x1D7954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7950u;
        // 0x1d7954: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7958u;
        goto label_fallthrough_0x1d7950;
    }
    ctx->pc = 0x1D7950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7950u;
        // 0x1d7954: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d7950:
    ctx->pc = 0x1D7958u;
}
